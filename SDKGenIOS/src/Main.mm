#include "Main.h"
#include "Tools.h"
#include "Logger.hpp"
#include "IGenerator.hpp"
#include "ObjectsStore.hpp"
#include "NamesStore.hpp"
#include "Package.hpp"
#include "NameValidator.hpp"
#include "PrintHelper.hpp"
#include "cpplinq.hpp"
#include "tinyformat.h"

#include <pthread.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>

extern IGenerator* generator;

static volatile bool manualDumpRequested = false;

// ── Dump button ───────────────────────────────────────────────────────────────
@interface UIButton (SDKDump)
- (void)sdkDumpTapped;
@end

@implementation UIButton (SDKDump)
- (void)sdkDumpTapped {
    manualDumpRequested = true;
    dispatch_async(dispatch_get_main_queue(), ^{
        self.hidden = YES;
        [self removeFromSuperview];
    });
}
@end

static UIWindow *FindActiveWindow() {
    UIWindow *targetWindow = nil;

    if (@available(iOS 13.0, *)) {
        for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) continue;
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            if (windowScene.activationState != UISceneActivationStateForegroundActive &&
                windowScene.activationState != UISceneActivationStateForegroundInactive) {
                continue;
            }
            for (UIWindow *win in windowScene.windows) {
                if (!win.hidden && win.alpha > 0.01) {
                    if (win.isKeyWindow) return win;
                    targetWindow = win;
                }
            }
        }
    }

    if (!targetWindow) {
        for (UIWindow *win in [UIApplication sharedApplication].windows) {
            if (!win.hidden && win.alpha > 0.01) {
                if (win.isKeyWindow) return win;
                targetWindow = win;
            }
        }
    }

    if (!targetWindow) {
        targetWindow = [UIApplication sharedApplication].keyWindow;
    }

    return targetWindow;
}

// ── Dump arrays ───────────────────────────────────────────────────────────────
void Dump(std::string path)
{
    {
        std::ofstream o(path + "/ObjectsDump.txt");
        tfm::format(o, "Address: %P\n\n", ObjectsStore::GetAddress());
        for (auto obj : ObjectsStore())
            tfm::format(o, "[%06i] %-100s 0x%P\n", obj.GetIndex(), obj.GetFullName(), obj.GetAddress());
    }
    {
        std::ofstream o(path + "/NamesDump.txt");
        tfm::format(o, "Address: %P\n\n", NamesStore::GetAddress());
        for (auto name : NamesStore())
            tfm::format(o, "[%06i] %s\n", name.Index, name.Name);
    }
}

// ── SDK.hpp header ────────────────────────────────────────────────────────────
void SaveSDKHeader(std::string path,
                   const std::unordered_map<UEObject, bool>& processedObjects,
                   const std::vector<std::unique_ptr<Package>>& packages)
{
    std::ofstream os(path + "/SDK.hpp");

    os << "#pragma once\n\n"
       << tfm::format("// Generated For %s (%s)\n// SDKGenerator iOS — Telegram @CheatBot_Owner\n\n",
                      generator->GetGameName(), generator->GetGameVersion());

    os << "#include <set>\n#include <string>\n";
    for (auto&& i : generator->GetIncludes()) os << "#include " << i << "\n";

    // Basic.hpp
    {
        std::ofstream os2(path + "/SDK/" + tfm::format("%s_Basic.hpp", generator->GetGameNameShort()));
        std::vector<std::string> incs = { "<iostream>", "<string>", "<unordered_set>", "<codecvt>" };
        PrintFileHeader(os2, incs, true);
        os2 << generator->GetBasicDeclarations() << "\n";
        PrintFileFooter(os2);
        os << "\n#include \"SDK/" << tfm::format("%s_Basic.hpp", generator->GetGameNameShort()) << "\"\n";
    }
    {
        std::ofstream os2(path + "/SDK/" + tfm::format("%s_Basic.cpp", generator->GetGameNameShort()));
        PrintFileHeader(os2, { "\"../SDK.hpp\"" }, false);
        os2 << generator->GetBasicDefinitions() << "\n";
        PrintFileFooter(os2);
    }

    using namespace cpplinq;
    const auto missing = from(processedObjects) >> where([](auto&& kv) { return kv.second == false; });
    if (missing >> any()) {
        std::ofstream os2(path + "/SDK/" + tfm::format("%s_MISSING.hpp", generator->GetGameNameShort()));
        PrintFileHeader(os2, true);
        PrintFileFooter(os2);
        os << "\n#include \"SDK/" << tfm::format("%s_MISSING.hpp", generator->GetGameNameShort()) << "\"\n";
    }

    os << "\n";
    for (auto&& package : packages) {
        os << "#include \"SDK/" << GenerateFileName(FileContentType::Structs, *package) << "\"\n";
        os << "#include \"SDK/" << GenerateFileName(FileContentType::Classes, *package) << "\"\n";
        if (generator->ShouldGenerateFunctionParametersFile())
            os << "#include \"SDK/" << GenerateFileName(FileContentType::FunctionParameters, *package) << "\"\n";
    }
}

// ── Process packages ──────────────────────────────────────────────────────────
void ProcessPackages(std::string path)
{
    using namespace cpplinq;

    const auto sdkPath = path + "/SDK";
    mkdir(sdkPath.c_str(), 0755);

    std::vector<std::unique_ptr<Package>> packages;
    std::unordered_map<UEObject, bool> processedObjects;

    auto packageObjects = from(ObjectsStore())
        >> select([](auto&& o) { return o.GetPackageObject(); })
        >> where([](auto&& o) { return o.IsValid(); })
        >> distinct()
        >> to_vector();

    for (auto obj : packageObjects) {
        auto package = std::make_unique<Package>(obj);
        package->Process(processedObjects);
        if (package->Save(sdkPath)) {
            Package::PackageMap[obj] = package.get();
            packages.emplace_back(std::move(package));
        }
    }

    if (!packages.empty()) {
        const PackageDependencyComparer comparer;
        for (auto i = 0u; i < packages.size() - 1; ++i)
            for (auto j = 0u; j < packages.size() - i - 1; ++j)
                if (!comparer(packages[j], packages[j + 1]))
                    std::swap(packages[j], packages[j + 1]);
    }

    SaveSDKHeader(path, processedObjects, packages);
}

// ── Main thread ───────────────────────────────────────────────────────────────
void *sdk_main_thread(void *)
{
    sleep(5);

    // Create output directory & early log immediately so we know dylib loaded
    NSString *docDir = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
    NSString *outFolder = [NSString stringWithFormat:@"%@/%s_SDK", docDir, gameShortName.c_str()];
    mkdir([outFolder UTF8String], 0755);

    std::string outputDirectory = [outFolder UTF8String];
    outputDirectory += "/" + gameShortName + "_v" + gameVersion;
    mkdir(outputDirectory.c_str(), 0755);

    std::ofstream log(outputDirectory + "/Generator.log");
    Logger::SetStream(&log);
    Logger::Log("SDKGenerator dylib loaded. Waiting for UI window...");

    // Keep trying until button is attached to an active visible window
    __block bool buttonAdded = false;
    while (!buttonAdded && !manualDumpRequested) {
        dispatch_sync(dispatch_get_main_queue(), ^{
            UIWindow *window = FindActiveWindow();
            if (!window) return;

            UIView *existing = [window viewWithTag:7777];
            if (existing) {
                [window bringSubviewToFront:existing];
                buttonAdded = true;
                return;
            }

            UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
            btn.frame = CGRectMake(30, 100, 210, 50);
            btn.backgroundColor = [UIColor colorWithRed:0.08 green:0.60 blue:0.12 alpha:0.95];
            [btn setTitle:@"Start SDK Dump" forState:UIControlStateNormal];
            [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            btn.titleLabel.font = [UIFont boldSystemFontOfSize:16];
            btn.layer.cornerRadius = 12;
            btn.layer.borderWidth = 1.5;
            btn.layer.borderColor = [UIColor whiteColor].CGColor;
            btn.layer.zPosition = 99999;
            btn.tag = 7777;
            [btn addTarget:btn action:@selector(sdkDumpTapped) forControlEvents:UIControlEventTouchUpInside];
            [window addSubview:btn];
            [window bringSubviewToFront:btn];
            buttonAdded = true;
        });

        if (!buttonAdded) {
            sleep(1);
        }
    }

    Logger::Log("Button attached. Waiting for user tap...");

    while (!manualDumpRequested) {
        sleep(1);
    }

    Logger::Log("Dump button tapped! Resolving base address...");

    // Get Mach-O base address (includes 0x100000000 + ASLR slide)
    uintptr_t baseAddr = Tools::GetBaseAddress(lib_name);
    while (!baseAddr) {
        sleep(1);
        baseAddr = Tools::GetBaseAddress(lib_name);
    }

    // Prevent double 0x100000000 if Main.h offsets include preferred Mach-O base (0x10...)
    UE4 = (GNames_Offset >= 0x100000000ULL) ? (baseAddr - 0x100000000ULL) : baseAddr;

    Logger::Log("Image Base: 0x%llX | Effective Slide/Base (UE4): 0x%llX",
                static_cast<unsigned long long>(baseAddr),
                static_cast<unsigned long long>(UE4));

    uintptr_t GName_Addr   = getTNameArrayAddr();
    uintptr_t GObject_Addr = getFUObjectArrayAddr();

    Logger::Log("GName_Addr: 0x%llX | GObject_Addr: 0x%llX",
                static_cast<unsigned long long>(GName_Addr),
                static_cast<unsigned long long>(GObject_Addr));

    if (!ObjectsStore::Initialize(GObject_Addr)) {
        Logger::Log("ERROR: ObjectsStore::Initialize failed!");
        return nullptr;
    }
    if (!NamesStore::Initialize(GName_Addr)) {
        Logger::Log("ERROR: NamesStore::Initialize failed!");
        return nullptr;
    }
    if (!generator->Initialize(nullptr)) {
        Logger::Log("ERROR: generator->Initialize failed!");
        return nullptr;
    }

    Logger::Log("Stores initialized. Dumping Objects & Names...");
    Dump(outputDirectory);

    const auto begin = std::chrono::system_clock::now();
    ProcessPackages(outputDirectory);
    Logger::Log("Done. Took %d seconds.",
        std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::system_clock::now() - begin).count());

    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow *win = FindActiveWindow();
        UIViewController *vc = win.rootViewController;
        while (vc.presentedViewController) vc = vc.presentedViewController;
        if (!vc) return;

        NSString *msg = [NSString stringWithFormat:@"SDK Generated!\nPath: %s", outputDirectory.c_str()];
        UIAlertController *alert = [UIAlertController
            alertControllerWithTitle:@"SDKGenerator"
            message:msg
            preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"OK"
                          style:UIAlertActionStyleDefault handler:nil]];
        [vc presentViewController:alert animated:YES completion:nil];
    });

    return nullptr;
}

// ── Theos entry ───────────────────────────────────────────────────────────────
__attribute__((constructor))
static void sdk_init() {
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        pthread_t thread;
        pthread_create(&thread, nullptr, sdk_main_thread, nullptr);
        pthread_detach(thread);
    });
}
