#import <UIKit/UIKit.h>
#include "Includes.h"
#import "APIClient.h"
#import "Hinaabil.h"
#import <AVFoundation/AVFoundation.h>

extern bool MenDeal;
@interface ImGuiLoad()
@property (nonatomic, assign) float currentVolum;
@property (strong, nonatomic) NSTimer * timer;
@property (nonatomic, strong) ImGuiDrawView *vna;
@end


@implementation ImGuiLoad
UIWindow *mainWindow;


+ (void)load
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        
        APIClient *API = [[APIClient alloc] init];
        [API setLanguage:@"en"];
        [API
         setToken:[Hinaabil dec:@"E/wPJYqBBcElgsC3Y9meCrt5x8oG+Pn5j2Sy80+hBLqqCsyQYQfA4eT0rNGTPFjhF9+S90X3qn1cA+7RVvpAqJzDyt/pOvzEjq2C6Kyx8SOIWseTo821dFmIAwhVfMbF03kcvHmFkj83LHYqoZf92Q==" ]];
        [API paid:^{
            [[self share] initTapGes];
        }];
    });
}

+ (instancetype)share
{
    static ImGuiLoad *tool;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tool = [[ImGuiLoad alloc] init];
    });
    return tool;
}

-(void)initTapGes
{
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(show)];
    tap.numberOfTapsRequired = 3; // Number of taps required
    tap.numberOfTouchesRequired = 3; // Number of fingers required
    [[UIApplication sharedApplication].windows[0].rootViewController.view addGestureRecognizer:tap];
    [self show];
}



- (void)show
{

    if (!_vna) {
        ImGuiDrawView *vc = [[ImGuiDrawView alloc] init];
          _vna = vc;
      }

    if (MenDeal == true) {
        MenDeal = false;
    } else {
        MenDeal = true;
        [[UIApplication sharedApplication].windows[0].rootViewController.view addSubview:_vna.view];
    }
}




@end
