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

extern IGenerator* generator;

static BOOL manualDumpRequested = NO;

// ── Dump button ───────────────────────────────────────────────────────────────
@interface UIButton (SDKDump)
- (void)sdkDumpTapped;
@end

@implementation UIButton (SDKDump)
- (void)sdkDumpTapped {
    manualDumpRequested = YES;
    dispatch_async(dispatch_get_main_queue(), ^{ self.hidden = YES; });
}
@end

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

    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow *window = nil;
        for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
            if (scene.activationState == UISceneActivationStateForegroundActive) {
                window = ((UIWindowScene *)scene).windows.firstObject;
                break;
            }
        }
        if (!window) window = [UIApplication sharedApplication].keyWindow;
        if (!window) return;

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
        btn.frame = CGRectMake(20, 120, 210, 55);
        btn.backgroundColor = [UIColor colorWithRed:0.08 green:0.55 blue:0.08 alpha:0.92];
        [btn setTitle:@"▶  Start SDK Dump" forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        btn.titleLabel.font = [UIFont boldSystemFontOfSize:16];
        btn.layer.cornerRadius = 12;
        btn.layer.zPosition = 999;
        btn.tag = 7777;
        [btn addTarget:btn action:@selector(sdkDumpTapped) forControlEvents:UIControlEventTouchUpInside];
        [window addSubview:btn];
        [window bringSubviewToFront:btn];
    });

    while (!manualDumpRequested) sleep(1);

    // get base
    UE4 = Tools::GetBaseAddress(lib_name);
    while (!UE4) { sleep(1); UE4 = Tools::GetBaseAddress(lib_name); }

    uintptr_t GName_Addr   = getTNameArrayAddr();
    uintptr_t GObject_Addr = getFUObjectArrayAddr();

    if (!ObjectsStore::Initialize(GObject_Addr)) return nullptr;
    if (!NamesStore::Initialize(GName_Addr))     return nullptr;
    if (!generator->Initialize(nullptr))          return nullptr;

    // iOS output: Documents/BGMI_SDK/BGMI_v4.6.0/
    NSString *docDir = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
    NSString *outFolder = [NSString stringWithFormat:@"%@/%s_SDK", docDir, gameShortName.c_str()];
    mkdir([outFolder UTF8String], 0755);

    std::string outputDirectory = [outFolder UTF8String];
    outputDirectory += "/" + gameShortName + "_v" + gameVersion;
    mkdir(outputDirectory.c_str(), 0755);

    std::ofstream log(outputDirectory + "/Generator.log");
    Logger::SetStream(&log);
    Logger::Log("SDKGenerator iOS Started");

    Dump(outputDirectory);

    const auto begin = std::chrono::system_clock::now();
    ProcessPackages(outputDirectory);
    Logger::Log("Done. Took %d seconds.",
        std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::system_clock::now() - begin).count());

    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *msg = [NSString stringWithFormat:@"SDK Generated!\nPath: %s", outputDirectory.c_str()];
        UIAlertController *alert = [UIAlertController
            alertControllerWithTitle:@"SDKGenerator"
            message:msg
            preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"OK"
                          style:UIAlertActionStyleDefault handler:nil]];
        UIViewController *vc = [UIApplication sharedApplication].keyWindow.rootViewController;
        while (vc.presentedViewController) vc = vc.presentedViewController;
        [vc presentViewController:alert animated:YES completion:nil];
    });

    return nullptr;
}

// ── Theos entry — no JNI ─────────────────────────────────────────────────────
__attribute__((constructor))
static void sdk_init() {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        static dispatch_once_t once;
        dispatch_once(&once, ^{
            pthread_t thread;
            pthread_create(&thread, nullptr, sdk_main_thread, nullptr);
        });
    });
}
