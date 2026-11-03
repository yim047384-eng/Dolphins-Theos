#include "ImGuiDrawView.h"
#include "MenuLoad.h"

#include "../IMGUI/imgui.h"
#include "../IMGUI/imgui_internal.h"
#include "../IMGUI/imgui_impl_metal.h"




#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>
#import <os/log.h>
#import <dlfcn.h>
#include <vector>
#include <map>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <vector>
#include <functional>
#include <iostream>
#include <libgen.h>
#include <mach-o/fat.h>
#include <mach-o/loader.h>
#include <mach-o/dyld.h>
#include <mach/vm_page_size.h>
#include <Foundation/Foundation.h>
#include <map>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <fstream>
#include <sys/stat.h>
#import "mahoa.h"

#define RadiansToDegree  180 /3.141592654f;
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SCREEN_SCALE [UIScreen mainScreen].scale
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
#define PI 3.14159265

extern ImVec2 MenuOrigin;
extern ImVec2 MenuSize;
extern UIButton* InvisibleMenuButton;
extern UIButton* VisibleMenuButton;
extern UIView* hideRecordView;
extern bool MoveMenu;
