#include <cstdio>
#include <string>
#include <fstream>
#include <utility>
#include <thread>
#import <UIKit/UIKit.h>

#import "CheatBotuuid.h"
#include "RSA.h"

#import "../includes/SCLAlertView/SCLAlertView.h"
#import "../includes/SSZipArchive/ZipArchive.h"

#include "AlertUtils.h"
#include "DumpTransferUI.h"

DumpTransferUI *dumpTransferUI = nil;

#include "../includes/hash/hash.h"
#include "Core/Dumper.hpp"

#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonKeyDerivation.h>
#import <CommonCrypto/CommonHMAC.h>

#define DUMP_FOLDER NSSENCRYPT("CHEATBOT_DUMP")

#include "Core/GameProfiles/Apex.hpp"
#include "Core/GameProfiles/DBD.hpp"
#include "Core/GameProfiles/ARK.hpp"
#include "Core/GameProfiles/PUBGM.hpp"
#include "Core/GameProfiles/PES.hpp"
#include "Core/GameProfiles/Distyle.hpp"
#include "Core/GameProfiles/Farlight.hpp"

std::string fixv;
std::string fixn;
std::string mygame;

// manual dump flag — button sets this to YES
static BOOL manualDumpRequested = NO;

static std::pair<Dumper::DumpArgs, IGameProfile *> UE_Games[]
{
    {{{}, {}, true, true, true, true}, new ApexProfile()},
    {{{}, {}, true, true, true, true}, new DBDProfile()},
    {{{}, {}, true, true, true, true}, new ArkProfile()},
    {{{}, {}, true, true, true, true}, new PUBGMProfile()},
    {{{}, {}, true, true, true, true}, new PESProfile()},
    {{{}, {}, true, true, true, true}, new DistyleProfile()},
    {{{}, {}, true, true, true, true}, new FarlightProfile()},
};


void *botxd(void *);


// ── Dump Button Category ──────────────────────────────────────────────────────
@interface UIButton (DumpTap)
- (void)dumpBtnTapped;
@end

@implementation UIButton (DumpTap)
- (void)dumpBtnTapped {
    manualDumpRequested = YES;
    dispatch_async(dispatch_get_main_queue(), ^{
        self.hidden = YES;
    });
}
@end
// ─────────────────────────────────────────────────────────────────────────────


@interface NSObject (CheatBot)
@end

@implementation NSObject (CheatBot)

+ (void)load {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        // login completely removed — start dump thread directly
        static dispatch_once_t once;
        dispatch_once(&once, ^{
            NSLog(@"======= AutoDumperSdk Loaded — No Login ========");
            pthread_t pthread;
            pthread_create(&pthread, nullptr, botxd, nullptr);
        });
    });
}

@end


// ── Main Dump Thread ──────────────────────────────────────────────────────────
void *botxd(void *)
{
    // wait for app to init
    sleep(7);

    // show manual dump button on screen
    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow *window = [UIApplication sharedApplication].keyWindow;

        UIButton *dumpBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        dumpBtn.frame = CGRectMake(20, 120, 200, 55);
        dumpBtn.backgroundColor = [UIColor colorWithRed:0.08 green:0.55 blue:0.08 alpha:0.92];
        [dumpBtn setTitle:@"▶  Start SDK Dump" forState:UIControlStateNormal];
        [dumpBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        dumpBtn.titleLabel.font = [UIFont boldSystemFontOfSize:16];
        dumpBtn.layer.cornerRadius = 12;
        dumpBtn.layer.shadowColor = [UIColor blackColor].CGColor;
        dumpBtn.layer.shadowOpacity = 0.4f;
        dumpBtn.layer.shadowOffset = CGSizeMake(0, 3);
        dumpBtn.tag = 9999;
        [dumpBtn addTarget:dumpBtn
                    action:@selector(dumpBtnTapped)
          forControlEvents:UIControlEventTouchUpInside];
        [window addSubview:dumpBtn];
    });

    // wait until button is pressed
    while (!manualDumpRequested) {
        sleep(1);
    }

    // ── start dump ────────────────────────────────────────────────────────────
    NSString *docDir = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
    NSString *appName = [[[NSBundle mainBundle] infoDictionary] objectForKey:(id)kCFBundleNameKey];
    NSString *appID   = [[[NSBundle mainBundle] infoDictionary] objectForKey:(id)kCFBundleIdentifierKey];

    NSString *dumpFolderName  = [NSString stringWithFormat:@"%@_%@",
                                 [appName stringByReplacingOccurrencesOfString:@" " withString:@""],
                                 DUMP_FOLDER];
    NSString *dumpPath        = [NSString stringWithFormat:@"%@/%@", docDir, dumpFolderName];
    NSString *headersdumpPath = [NSString stringWithFormat:@"%@/%@/%@", docDir, dumpFolderName, @"headers_dump"];

    NSLog(@"UE4DUMP_PATH: %@", dumpPath);

    NSFileManager *fileManager = [NSFileManager defaultManager];
    [fileManager removeItemAtPath:dumpPath error:nil];
    [fileManager removeItemAtPath:[NSString stringWithFormat:@"%@.zip", dumpPath] error:nil];

    NSError *error = nil;
    if (![fileManager createDirectoryAtPath:headersdumpPath withIntermediateDirectories:YES attributes:nil error:&error]) {
        NSLog(@"Failed to create folders. Error: %@", error);
        showError([NSString stringWithFormat:NSSENCRYPT("Failed to create folders.\nError: %@"), error]);
        return nullptr;
    }

    SCLAlertView *waitingAlert = nil;
    showWaiting(NSSENCRYPT("Dumping SDK \nPlease Wait..."), &waitingAlert);

    Dumper::DumpStatus dumpStatus = Dumper::UE_DS_NONE;
    std::string appIDStr = [appID UTF8String];
    bool foundMatch = false;

    for (auto &it : UE_Games) {
        for (const std::string &validAppID : it.second->GetAppID()) {
            if (appIDStr == validAppID) {
                mygame = appIDStr;
                it.first.dump_dir         = dumpPath.UTF8String;
                it.first.dump_headers_dir = headersdumpPath.UTF8String;
                dumpStatus = Dumper::Dump(&it.first, it.second);
                foundMatch = true;
                break;
            }
        }
        if (foundMatch) break;
    }

    NSString *zipPath = [NSString stringWithFormat:@"%@.zip", dumpPath];
    if ([fileManager fileExistsAtPath:dumpPath]) {
        [SSZipArchive createZipFileAtPath:zipPath withContentsOfDirectory:dumpPath];
        [fileManager removeItemAtPath:dumpPath error:nil];
    }

    dismisWaiting(waitingAlert);

    if (dumpStatus != Dumper::UE_DS_SUCCESS) {
        if (dumpStatus == Dumper::UE_DS_NONE) {
            showError(NSSENCRYPT("This Game is Not Supported.\nUse Original appId/BundleId.\nContact Telegram @CheatBot_Owner."));
        } else {
            std::string dumpStatusStr = Dumper::DumpStatusToStr(dumpStatus);
            showError([NSString stringWithFormat:NSSENCRYPT("Dump Failed: Err: {%s}.\nLogs at: \n%@"),
                       dumpStatusStr.c_str(), dumpPath]);
        }
        return nullptr;
    }

    NSLog(@"Dump finished.");

    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *vc = [[[[UIApplication sharedApplication] delegate] window] rootViewController];

        SCLAlertView *okAlert = [[SCLAlertView alloc] init];
        okAlert.shouldDismissOnTapOutside = YES;
        okAlert.showAnimationType = SCLAlertViewShowAnimationSlideInFromTop;
        okAlert.hideAnimationType = SCLAlertViewHideAnimationSlideOutToBottom;

        [okAlert alertIsDismissed:^{
            SCLAlertView *transferAlert = [[SCLAlertView alloc] init];
            transferAlert.shouldDismissOnTapOutside = YES;
            transferAlert.showAnimationType = SCLAlertViewShowAnimationSlideInFromTop;
            transferAlert.hideAnimationType = SCLAlertViewHideAnimationSlideOutToBottom;

            [transferAlert addButton:NSSENCRYPT("Send Dump OTA")
                         actionBlock:^(void) {
                dumpTransferUI = [[DumpTransferUI alloc] initWithFileAtPath:zipPath];
                [dumpTransferUI show];
            }];

            [transferAlert addButton:NSSENCRYPT("Save Dump Manually")
                         actionBlock:^(void) {
                NSString *pathxd = [NSString stringWithFormat:@"%@_%@.zip",
                                    [appName stringByReplacingOccurrencesOfString:@" " withString:@""],
                                    DUMP_FOLDER];

                UIViewController *topVC = [UIApplication sharedApplication].keyWindow.rootViewController;
                while (topVC.presentedViewController) topVC = topVC.presentedViewController;

                NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
                NSString *filePath = [[paths objectAtIndex:0] stringByAppendingPathComponent:pathxd];
                NSURL *fileURL = [NSURL fileURLWithPath:filePath];

                UIActivityViewController *actVC = [[UIActivityViewController alloc]
                                                   initWithActivityItems:@[fileURL]
                                                   applicationActivities:nil];
                [topVC presentViewController:actVC animated:YES completion:nil];
            }];

            [transferAlert showEdit:vc
                             title:@___ALERT_TITLE
                          subTitle:NSSENCRYPT("How you want to copy Dump?")
                  closeButtonTitle:NSSENCRYPT("Don't Copy")
                          duration:0.0f];
        }];

        [okAlert showSuccess:vc
                       title:@___ALERT_TITLE
                    subTitle:[NSString stringWithFormat:NSSENCRYPT("Dump Path: \n%@"), zipPath]
            closeButtonTitle:NSSENCRYPT("OK")
                    duration:0.0f];
    });

    return nullptr;
}
