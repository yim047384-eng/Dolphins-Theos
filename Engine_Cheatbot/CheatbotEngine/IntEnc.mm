#import "JHCJDrawView.h"
#import <CoreText/CoreText.h>
#import <UIKit/UIKit.h>
#import <stdio.h>
#import <mach-o/dyld.h>
#import <mach/vm_region.h>
#import <malloc/malloc.h>
#import <objc/runtime.h>
#import <mach/mach.h>
#include "string.h"
#include "imgui.h"
#include "imgui_impl_metal.h"
#import <sys/socket.h>
#undef PF_MAX
#import <Foundation/Foundation.h>
#import <mach/mach_traps.h>
#include <math.h>
#import "SDK.hpp"
#import <array>
#include "Tools.h"
#include <cstdint>
#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include "json.hpp"
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <AVFoundation/AVFoundation.h>

using namespace std;
using namespace SDK;

#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height

// ==========================================
// ========== GLOBAL VARIABLES ==============
// ==========================================

bool MenDeal = false;
bool IsBone = true;
bool Is3Dbox = false;
bool isLineEsp = true;
bool isTextEsp = true;
bool isHpBarEsp = true;
bool Cheatbotlp = true;

int g_screenWidth = 0;
int g_screenHeight = 0;

UFont *Font = 0;
ASTExtraPlayerCharacter *localPlayer = 0;
ASTExtraPlayerController *localPlayerController = 0;

// ==========================================
// ========== CLASS DECLARATION =============
// ==========================================

@interface metalbiew : UIViewController <MTKViewDelegate>
@property (nonatomic, strong) IBOutlet MTKView *mtkView;
@property (nonatomic, strong) id <MTLDevice> device;
@property (nonatomic, strong) id <MTLCommandQueue> commandQueue;
@end

// ==========================================
// ========== HELPERS =======================
// ==========================================

bool IsValidAddress(kaddr addr) {
    return addr > 0x100000000 && addr < 0x2000000000;
}

kaddr getRealOffset(kaddr offset) {
    return (unsigned long)_dyld_get_image_vmaddr_slide(0) + offset;
}

long CHEATBOTOWNER() {
    return getRealOffset(0x109ABC718);
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) ((unsigned long)_dyld_get_image_vmaddr_slide(0) + 0x104734D98))();
}

UWorld *GetFullWorld() {
    auto gobjects = UObject::GUObjectArray->ObjObjects;
    for (int i = 0; i < gobjects.Num(); i++) {
        if (auto obj = gobjects.GetByIndex(i)) {
            if (obj->IsA(UEngine::StaticClass())) {
                auto GEngine = (UEngine *)obj;
                if (GEngine && GEngine->GameViewport) {
                    Font = GEngine->MediumFont;
                    return GEngine->GameViewport->World;
                }
            }
        }
    }
    return 0;
}

template <class T> void GetAllActors(std::vector<T *> &Actors) {
    UGameplayStatics* gGameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass();
    auto GWorld = GetFullWorld();
    if (GWorld) {
        TArray<AActor *> Actors2;
        gGameplayStatics->GetAllActorsOfClass((UObject *)GWorld, T::StaticClass(), &Actors2);
        for (int i = 0; i < Actors2.Num(); i++) {
            Actors.push_back((T *)Actors2[i]);
        }
    }
}

void DrawFilledRectangle(UCanvas* Canvas, FVector2D Min, float Width, float Height, FLinearColor Color) {
    for (float i = 0.f; i < Height; i += 1.f) {
        Canvas->K2_DrawLine(Min + FVector2D(0.f, i), Min + FVector2D(Width, i), 1.f, Color);
    }
}

void DrawLine(UCanvas* Canvas, FVector2D from, FVector2D to, float thickness, FLinearColor color) {
    Canvas->K2_DrawLine(from, to, thickness, color);
}

void DrawTextSafe(UCanvas* Canvas, FString Text, FVector2D Pos, FLinearColor Color, int size = 12) {
    if (!Font || !Canvas) return;
    Font->LegacyFontSize = size;
    Canvas->K2_DrawText(Font, Text, Pos, Color, 1.0f, FLinearColor(0,0,0,0), FVector2D(0,0), true, true, true, FLinearColor(0,0,0,1));
}

bool IsOnScreen(FVector2D pos, float margin = 50.f) {
    return pos.X > -margin && pos.X < g_screenWidth + margin &&
           pos.Y > -margin && pos.Y < g_screenHeight + margin;
}

// ==========================================
// ========== ESP RENDER ====================
// ==========================================

void DrawPlayerESP(UCanvas* Canvas) {
    if (!Canvas || !localPlayer || !localPlayerController) return;
    
    auto GWorld = GetFullWorld();
    if (!GWorld) return;
    
    // Skip heavy ESP in pure lobby / when camera not ready
    if (!localPlayerController->PlayerCameraManager) return;

    std::vector<ASTExtraPlayerCharacter*> Actors;
    GetAllActors(Actors);
    
    int totalEnemies = 0;
    int totalBots = 0;
    
    for (auto Player : Actors) {
        if (!IsValidAddress((kaddr)Player) || !Player || !Player->RootComponent) continue;
        if (Player->PlayerKey == localPlayerController->PlayerKey) continue;
        if (Player->TeamID == localPlayerController->TeamID) continue;
        if (Player->bDead || Player->bHidden) continue;
        
        float Distance = localPlayer->GetDistanceTo(Player) / 100.f;
        if (Distance < 1.f || Distance > 450.f) continue;   // too close / too far skip
        
        if (Player->bEnsure) totalBots++;
        else totalEnemies++;

        FVector HeadPos = Player->GetBonePos("Head", {0, 0, 0});
        FVector RootPos = Player->GetBonePos("Root", {0, 0, 0});
        
        // Basic bone validity
        if (HeadPos.X == 0 && HeadPos.Y == 0 && HeadPos.Z == 0) continue;

        FVector2D Head2D, Root2D;
        if (!UGameplayStatics::ProjectWorldToScreen(localPlayerController, HeadPos, true, &Head2D) || 
            !UGameplayStatics::ProjectWorldToScreen(localPlayerController, RootPos, true, &Root2D)) continue;
        
        if (!IsOnScreen(Head2D) && !IsOnScreen(Root2D)) continue;  // completely off-screen → skip

        bool IsVisible = localPlayerController->LineOfSightTo(Player, {0, 0, 0}, true); 
        FLinearColor color = IsVisible ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f);
        
        // --- LINE ESP (only if reasonably on screen) ---
        if (isLineEsp && IsOnScreen(Head2D, 100.f)) {
            // Bottom center looks cleaner than top center
            DrawLine(Canvas, {g_screenWidth / 2.f, (float)g_screenHeight}, {Head2D.X, Head2D.Y}, 1.2f, color);
        }

        // --- NAME + DISTANCE (now correctly uses isTextEsp) ---
        if (isTextEsp && Font) {
            std::string nameStr = Player->bEnsure ? "Bot" : Player->PlayerName.ToString();
            FLinearColor NameColor = Player->bEnsure ? 
                FLinearColor(0.0f, 0.8f, 1.0f, 1.0f) : 
                FLinearColor(1.0f, 1.0f, 0.0f, 1.0f);
            
            DrawTextSafe(Canvas, FString(nameStr.c_str()), 
                         FVector2D(Root2D.X - 20.f, Root2D.Y + 8.f), NameColor, 11);
            
            std::string distStr = std::to_string((int)Distance) + "m";
            DrawTextSafe(Canvas, FString(distStr.c_str()), 
                         FVector2D(Root2D.X - 10.f, Root2D.Y + 22.f), 
                         FLinearColor(1,1,1,1), 10);
        }

        // --- HEALTH BAR ---
        if (isHpBarEsp) {
            float maxHealth = (float)Player->HealthMax;
            float curHealth = (float)Player->Health;
            if (maxHealth > 0.0f) {
                float CurHP = std::max(0.f, std::min(curHealth, maxHealth));
                FLinearColor ColorHP = (CurHP / maxHealth > 0.5f) ? FLinearColor(0,1,0,1) : 
                                      ((CurHP / maxHealth > 0.25f) ? FLinearColor(1,1,0,1) : FLinearColor(1,0,0,1));
                
                FVector2D HealthPos = Head2D;
                HealthPos.X -= 18.0f;
                HealthPos.Y -= 14.0f;
                
                DrawFilledRectangle(Canvas, HealthPos, 36.0f, 5.0f, FLinearColor(0, 0, 0, 0.7f));
                DrawFilledRectangle(Canvas, HealthPos, (CurHP * 36.0f) / maxHealth, 5.0f, ColorHP);
            }
        }

        // --- SKELETON ESP ---
        if (IsBone) {
            auto GetBone2D = [&](const char* boneName) -> FVector2D {
                FVector pos = Player->GetBonePos(boneName, {});
                FVector2D out;
                if (UGameplayStatics::ProjectWorldToScreen(localPlayerController, pos, false, &out))
                    return out;
                return FVector2D(-9999, -9999);
            };

            FVector2D neckP   = GetBone2D("neck_01");
            FVector2D PelvisP = GetBone2D("pelvis");
            FVector2D upperLP = GetBone2D("upperarm_l");
            FVector2D upperRP = GetBone2D("upperarm_r");
            FVector2D lowerLP = GetBone2D("lowerarm_l");
            FVector2D lowerRP = GetBone2D("lowerarm_r");
            FVector2D handLP  = GetBone2D("hand_l");
            FVector2D handRP  = GetBone2D("hand_r");
            FVector2D calfLP  = GetBone2D("calf_l");
            FVector2D calfRP  = GetBone2D("calf_r");
            FVector2D footLP  = GetBone2D("foot_l");
            FVector2D footRP  = GetBone2D("foot_r");

            auto Valid = [](FVector2D p) { return p.X > -9000; };

            if (Valid(neckP) && Valid(PelvisP)) {
                if (Valid(handRP) && Valid(lowerRP) && Valid(upperRP)) {
                    Canvas->K2_DrawLine(handRP, lowerRP, 1.1f, color);
                    Canvas->K2_DrawLine(lowerRP, upperRP, 1.1f, color);
                    Canvas->K2_DrawLine(upperRP, neckP, 1.1f, color);
                }
                if (Valid(handLP) && Valid(lowerLP) && Valid(upperLP)) {
                    Canvas->K2_DrawLine(handLP, lowerLP, 1.1f, color);
                    Canvas->K2_DrawLine(lowerLP, upperLP, 1.1f, color);
                    Canvas->K2_DrawLine(upperLP, neckP, 1.1f, color);
                }
                if (Valid(footRP) && Valid(calfRP)) {
                    Canvas->K2_DrawLine(footRP, calfRP, 1.1f, color);
                    Canvas->K2_DrawLine(calfRP, PelvisP, 1.1f, color);
                }
                if (Valid(footLP) && Valid(calfLP)) {
                    Canvas->K2_DrawLine(footLP, calfLP, 1.1f, color);
                    Canvas->K2_DrawLine(calfLP, PelvisP, 1.1f, color);
                }
                Canvas->K2_DrawLine(PelvisP, neckP, 1.1f, color);
            }
        }
    }

    // --- ENEMY / BOT COUNTER ---
    if (Font) {
        float boxW = 38.f, boxH = 32.f;
        float startX = g_screenWidth / 2.f - boxW;
        float startY = g_screenHeight / 16.f;

        DrawFilledRectangle(Canvas, FVector2D(startX, startY), boxW, boxH, FLinearColor(0.7f, 0.0f, 0.0f, 0.55f));
        DrawFilledRectangle(Canvas, FVector2D(startX + boxW, startY), boxW, boxH, FLinearColor(0.25f, 0.25f, 0.25f, 0.55f));

        DrawTextSafe(Canvas, FString(std::to_string(totalEnemies).c_str()), 
                     FVector2D(startX + boxW/2 - 6, startY + 7), FLinearColor(1,1,1,1), 14);
        DrawTextSafe(Canvas, FString(std::to_string(totalBots).c_str()), 
                     FVector2D(startX + boxW + boxW/2 - 6, startY + 7), FLinearColor(1,1,1,1), 14);
    }
}

void DrawMSG(UCanvas* Canvas) {
    if (!Canvas || !Font) return;
       
    g_screenWidth  = Canvas->SizeX;
    g_screenHeight = Canvas->SizeY;

    // Clean watermark
    DrawTextSafe(Canvas, FString("IQ9999"), 
                 FVector2D(g_screenWidth - 110.f, g_screenHeight - 45.f), 
                 FLinearColor(1.0f, 0.15f, 0.15f, 0.9f), 16);
}

// ==========================================
// ========== HOOKING =======================
// ==========================================

void *(*oriCheatbot)(UGameViewportClient* ViewportClient, UCanvas* Canvas);

void *hookCheatbot(UGameViewportClient* ViewportClient, UCanvas* Canvas) {
    if (!Canvas) return oriCheatbot ? oriCheatbot(ViewportClient, Canvas) : nullptr;
    
    g_screenWidth  = Canvas->SizeX;
    g_screenHeight = Canvas->SizeY;
    
    static bool loadFont = false;
    if (!loadFont) {
        LoadFont();
        loadFont = true;
    }
    if (!Font) return oriCheatbot ? oriCheatbot(ViewportClient, Canvas) : nullptr;
    
    auto GWorld = GetFullWorld();
    if (GWorld && GWorld->NetDriver && GWorld->NetDriver->ServerConnection) {
        localPlayerController = (ASTExtraPlayerController*)GWorld->NetDriver->ServerConnection->PlayerController;
        if (localPlayerController) {
            std::vector<ASTExtraPlayerCharacter*> PlayerActors;
            GetAllActors(PlayerActors);
            for (auto P : PlayerActors) {
                if (!IsValidAddress((kaddr)P) || !P->RootComponent) continue;
                if (P->PlayerKey == localPlayerController->PlayerKey) {
                    localPlayer = P;
                    break;
                }
            }
        }
    }

    DrawMSG(Canvas);
    DrawPlayerESP(Canvas);
    
    return oriCheatbot ? oriCheatbot(ViewportClient, Canvas) : nullptr;
}

void *botcheatxd() {
    if (!Cheatbotlp) return 0;
    
    static bool hooked = false;
    if (hooked) return 0;
    
    auto CheatBotObj = (FUObjectArray *)(CHEATBOTOWNER());
    if (!CheatBotObj) return 0;
    
    auto gobjects = CheatBotObj->ObjObjects;
    for (int i = 0; i < gobjects.Num(); i++) {
        if (auto obj = gobjects.GetByIndex(i)) {
            if (obj->IsA(UGameViewportClient::StaticClass())) {
                auto View = (UGameViewportClient *)obj;
                auto vTable = (void**)(View->VTable);
                if (vTable && vTable[134] != (void*)hookCheatbot) {
                    oriCheatbot = decltype(oriCheatbot)(vTable[134]);
                    vTable[134] = (void*)hookCheatbot;
                    hooked = true;
                    break;
                }
            }
        }
    }
    return 0;
}

// ==========================================
// ========== IMGUI MENU ====================
// ==========================================

@implementation metalbiew
- (MTKView *)mtkView { return (MTKView *)self.view; }
- (void)loadView { self.view = [[MTKView alloc] initWithFrame:CGRectMake(0, 0, kWidth, kHeight)]; }

- (void)viewDidLoad {
    [super viewDidLoad];
    self.mtkView.device = self.device;
    self.mtkView.delegate = self;
    self.mtkView.clearColor = MTLClearColorMake(0, 0, 0, 0);
    self.mtkView.backgroundColor = [UIColor clearColor];
    self.mtkView.clipsToBounds = YES;
}

- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    _device = MTLCreateSystemDefaultDevice();
    _commandQueue = [_device newCommandQueue];
    if (!self.device) abort();
    
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    ImGui::StyleColorsDark();
    
    NSString *fontPath = @"/System/Library/Fonts/CoreAddition/Verdana.ttf";
    io.Fonts->AddFontFromFileTTF(fontPath.UTF8String, 18.0f);
    ImGui_ImplMetal_Init(_device);
    return self;
}

- (void)drawInMTKView:(MTKView*)view {
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize = ImVec2(view.bounds.size.width, view.bounds.size.height);
    CGFloat framebufferScale = view.window.screen.nativeScale;
    io.DisplayFramebufferScale = ImVec2(framebufferScale, framebufferScale);
    io.DeltaTime = 1 / float(view.preferredFramesPerSecond ?: 60);
    
    id<MTLCommandBuffer> commandBuffer = [self.commandQueue commandBuffer];
    
    if (MenDeal) [self.view setUserInteractionEnabled:YES];
    else [self.view setUserInteractionEnabled:NO];
    
    MTLRenderPassDescriptor* renderPassDescriptor = view.currentRenderPassDescriptor;
    if (renderPassDescriptor != nil) {
        id <MTLRenderCommandEncoder> renderEncoder = [commandBuffer renderCommandEncoderWithDescriptor:renderPassDescriptor];
        ImGui_ImplMetal_NewFrame(renderPassDescriptor);
        ImGui::NewFrame();
        
        if (MenDeal) {
            ImGui::SetNextWindowSize(ImVec2(300, 280), ImGuiCond_FirstUseEver);
            ImGui::Begin("IQ9999 Menu", &MenDeal, ImGuiWindowFlags_NoCollapse);
            ImGui::TextColored(ImVec4(1.0f, 0.2f, 0.2f, 1.0f), "BGMI iOS Internal");
            ImGui::Separator();
            ImGui::Checkbox("Line ESP", &isLineEsp);
            ImGui::Checkbox("Skeleton", &IsBone);
            ImGui::Checkbox("Name + Dist", &isTextEsp);
            ImGui::Checkbox("Health Bar", &isHpBarEsp);
            ImGui::Separator();
            if (ImGui::Button("CLOSE", ImVec2(ImGui::GetWindowWidth() - 20, 32))) {
                MenDeal = false;
            }
            ImGui::End();
        }
        
        ImGui::Render();
        ImGui_ImplMetal_RenderDrawData(ImGui::GetDrawData(), commandBuffer, renderEncoder);
        [renderEncoder endEncoding];
        [commandBuffer presentDrawable:view.currentDrawable];
    }
    [commandBuffer commit];
}

- (void)mtkView:(MTKView*)view drawableSizeWillChange:(CGSize)size {}

- (void)updateIOWithTouchEvent:(UIEvent *)event {
    UITouch *anyTouch = event.allTouches.anyObject;
    CGPoint touchLocation = [anyTouch locationInView:self.view];
    ImGuiIO &io = ImGui::GetIO();
    io.MousePos = ImVec2(touchLocation.x, touchLocation.y);
    
    BOOL hasActiveTouch = NO;
    for (UITouch *touch in event.allTouches) {
        if (touch.phase != UITouchPhaseEnded && touch.phase != UITouchPhaseCancelled) {
            hasActiveTouch = YES;
            break;
        }
    }
    io.MouseDown[0] = hasActiveTouch;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self updateIOWithTouchEvent:event];
    if (event.allTouches.count >= 3) MenDeal = !MenDeal;
}
- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event { [self updateIOWithTouchEvent:event]; }
- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event { [self updateIOWithTouchEvent:event]; }
- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event { [self updateIOWithTouchEvent:event]; }
@end

// ==========================================
// ========== INITIALIZATION ================
// ==========================================

@implementation JHCJDrawView

+ (void)load {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(8 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (Cheatbotlp) botcheatxd();
    });
    
    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    UObject::GUObjectArray = (FUObjectArray *)(CHEATBOTOWNER());
}

@end