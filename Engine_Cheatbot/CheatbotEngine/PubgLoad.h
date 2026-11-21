
#import <Foundation/Foundation.h>

//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <mach-o/dyld.h>
#import <mach-o/arch.h>
#import <mach/vm_region.h>
#import <malloc/malloc.h>
#import <objc/runtime.h>
#include <string>
#import <mach/mach.h>
#include <thread>
#include <iostream>
#include <vector>
#include <array>
#include <array>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <AVFoundation/AVFoundation.h>
#include "imgui.h"
#include "imgui_impl_metal.h"
#import "FarsiType.h"
NS_ASSUME_NONNULL_BEGIN



@interface metalbiew : UIViewController

///
+ (void)showChange:(BOOL)open;



@end


@interface ImGuiLoad : NSObject
+ (instancetype)share;

- (void)show;
- (void)initTapGes;
@end

NS_ASSUME_NONNULL_END
