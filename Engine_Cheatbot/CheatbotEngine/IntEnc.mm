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
//#undef PF_MAX
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
namespace {
    // Data / Object / Array pointers ke liye (8-byte aligned)
    inline bool IsValidPtr(uintptr_t addr) {
        return addr > 0x100000000ULL && addr < 0x2000000000ULL && ((addr & 0x7ULL) == 0);
    }

    // Function / Code address ke liye (arm64 mein 4-byte aligned)
    inline bool IsValidCodePtr(uintptr_t addr) {
        return addr > 0x100000000ULL && addr < 0x2000000000ULL && ((addr & 0x3ULL) == 0);
    }

    // ShadowTrackerExtra ka index aur ASLR slide automatically nikalta hai
    inline uintptr_t GetShadowTrackerSlide() {
        static uintptr_t cachedSlide = 0;
        if (cachedSlide != 0)
            return cachedSlide;

        uint32_t count = _dyld_image_count();
        for (uint32_t i = 0; i < count; ++i) {
            const char* name = _dyld_get_image_name(i);
            if (name && strstr(name, "ShadowTrackerExtra") != nullptr) {
                cachedSlide = static_cast<uintptr_t>(_dyld_get_image_vmaddr_slide(i));
                return cachedSlide;
            }
        }

        cachedSlide = static_cast<uintptr_t>(_dyld_get_image_vmaddr_slide(0));
        return cachedSlide;
    }

    inline uintptr_t GetShadowTrackerAddr(uintptr_t offset) {
        return GetShadowTrackerSlide() + offset;
    }
}

uintptr_t CHEATBOTOWNER() {
    return GetShadowTrackerAddr(0x109E108E8ULL);
}

TNameEntryArray *GetGNames() {
    uintptr_t fnAddr = GetShadowTrackerAddr(0x10491486CULL);
    if (!IsValidCodePtr(fnAddr))
        return nullptr;

    using FnType = TNameEntryArray *(*)();
    auto fn = reinterpret_cast<FnType>(fnAddr);
    return fn();
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




std::vector<AActor *> GetActors()
{
    std::vector<AActor *> actors;

    auto World = GetFullWorld();
    if (!IsValidPtr(reinterpret_cast<uintptr_t>(World)))
        return actors;

    auto PersistentLevel = World->PersistentLevel;
    if (!IsValidPtr(reinterpret_cast<uintptr_t>(PersistentLevel)))
        return actors;

    struct GovnoArray
    {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };

    using FnType = GovnoArray* (*)(uintptr_t);
    uintptr_t fnAddr = GetShadowTrackerAddr(0x105C96B1CULL);
    if (!IsValidCodePtr(fnAddr))
        return actors;

    auto fn = reinterpret_cast<FnType>(fnAddr);
    GovnoArray* arrPtr = fn(reinterpret_cast<uintptr_t>(PersistentLevel));
    if (!IsValidPtr(reinterpret_cast<uintptr_t>(arrPtr)))
        return actors;

    GovnoArray Actors = *arrPtr;
    if (!IsValidPtr(Actors.base) || Actors.count <= 0 || Actors.count > 65536)
        return actors;

    actors.reserve(static_cast<size_t>(Actors.count));
    for (int32_t i = 0; i < Actors.count; i++)
    {
        uintptr_t entryAddr = Actors.base + (static_cast<uintptr_t>(i) * sizeof(uintptr_t));
        if (!IsValidPtr(entryAddr))
            continue;

        uintptr_t Actor = *reinterpret_cast<uintptr_t*>(entryAddr);
        if (IsValidPtr(Actor))
        {
            actors.push_back(reinterpret_cast<AActor*>(Actor));
        }
    }
    return actors;
}




void DrawFilledRectangle(UCanvas* Canvas, FVector2D Min, float Width, float Height, FLinearColor Color) {
    for (float i = 0.f; i < Height; i += 1.f) {
        // Purana: Min + FVector2D(0.f, i)
        FVector2D StartPos = { Min.X + 0.f, Min.Y + i };
        
        // Purana: Min + FVector2D(Width, i)
        FVector2D EndPos = { Min.X + Width, Min.Y + i };
        
        Canvas->K2_DrawLine(StartPos, EndPos, 1.f, Color);
    }
}
void DrawText(UCanvas* Canvas, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, int FontSize, bool isCenter) {
    if (!Canvas || !Font)
        return;
    Font->LegacyFontSize = FontSize;
    Canvas->K2_DrawText(Font, Text, Pos, Color, 1.f, {}, {}, isCenter, false, true, OutlineColor);
    Font->LegacyFontSize = 13;
}

void Drawtext(UCanvas* Canvas, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, int FontSize, bool isCenter) {
    if (!Canvas || !Font)
        return;
    Font->LegacyFontSize = FontSize;
    Canvas->K2_DrawText(Font, Text, Pos, Color, 1.f, {}, {}, isCenter, false, false, OutlineColor);
    Font->LegacyFontSize = 14;
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
void *LoadFont() {
    while (!Font) {
        Font = UObject::FindObject<UFont>(std::string("Font RobotoTiny.RobotoTiny"));
        sleep(1);
    }
    return 0;
}
// ==========================================
// ========== ESP RENDER ====================
// ==========================================

void DrawPlayerESP(UCanvas* Canvas)
{
    if (!Canvas || !localPlayer || !localPlayerController)
        return;

    auto GWorld = GetFullWorld();
    if (!IsValidPtr(reinterpret_cast<uintptr_t>(GWorld)))
        return;

    int totalEnemies = 0;
    int totalBots = 0;

    auto Actors = GetActors();
    for (auto &Actor : Actors)
    {
        if (!Actor || !IsValidPtr(reinterpret_cast<uintptr_t>(Actor)))
            continue;

        if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
        {
            auto Player = (ASTExtraPlayerCharacter *)Actor;
            if (!IsValidPtr(reinterpret_cast<uintptr_t>(Player->RootComponent)))
                continue;

            if (Player->PlayerKey == localPlayerController->PlayerKey ||
                Player->TeamID == localPlayerController->TeamID ||
                Player->bDead || Player->bHidden)
                continue;

            float Distance = localPlayer->GetDistanceTo(Player) / 100.f;
            if (Distance > 500.f)
                continue;

            if (Player->bEnsure) totalBots++;
            else totalEnemies++;

            FVector HeadPos = Player->GetBonePos("Head", {0, 0, 0});
            FVector RootPos = Player->GetBonePos("Root", {0, 0, 0});
            FVector2D Head2D, Root2D;

            if (!UGameplayStatics::ProjectWorldToScreen(localPlayerController, HeadPos, true, &Head2D) ||
                !UGameplayStatics::ProjectWorldToScreen(localPlayerController, RootPos, true, &Root2D))
                continue;

            bool IsVisible = localPlayerController->LineOfSightTo(Player, {0, 0, 0}, true);
            FLinearColor color = IsVisible ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f);

            if (isLineEsp)
            {
                DrawLine(Canvas, {g_screenWidth / 2.f, 0.f}, {Head2D.X, Head2D.Y}, 1.5f, color);
            }

            if (isTextEsp && Font)
            {
                std::string Text = Player->bEnsure ? "Bot" : Player->PlayerName.ToString();
                Font->LegacyFontSize = 10;
                FLinearColor NameColor = Player->bEnsure ? FLinearColor(0.0f, 0.75f, 1.0f, 1.0f) : FLinearColor(1.0f, 1.0f, 0.0f, 1.0f);
                Canvas->K2_DrawText(Font, FString(Text), {Root2D.X, Root2D.Y + 12}, NameColor, 1.f, {}, {}, true, true, true, FLinearColor(0, 0, 0, 0));

                Font->LegacyFontSize = 12;
                std::wstring distX = std::to_wstring((int)Distance) + L"m";
                FVector2D DistPos = FVector2D(Root2D.X, Root2D.Y + 30.0f);
                DrawText(Canvas, FString(distX.c_str()), DistPos, FLinearColor(1, 1, 1, 1), FLinearColor(0, 0, 0, 1));
            }

            if (isHpBarEsp)
            {
                float maxHealth = (float)Player->HealthMax;
                float curHealth = (float)Player->Health;
                if (maxHealth > 0.0f)
                {
                    float CurHP = std::max(0.f, std::min(curHealth, maxHealth));
                    FLinearColor ColorHP = (CurHP / maxHealth > 0.5f) ? FLinearColor(0, 1, 0, 1) : ((CurHP / maxHealth > 0.2f) ? FLinearColor(1, 1, 0, 1) : FLinearColor(1, 0, 0, 1));
                    FVector2D HealthPos = Head2D;
                    HealthPos.X -= 15.0f;
                    HealthPos.Y -= 12.0f;
                    DrawFilledRectangle(Canvas, HealthPos, 30.0f, 4.0f, FLinearColor(0, 0, 0, 1));
                    DrawFilledRectangle(Canvas, HealthPos, (CurHP * 30.0f) / maxHealth, 4.0f, ColorHP);
                }
            }

            if (IsBone)
            {
                FVector Pelvis = Player->GetBonePos("pelvis", {});
                FVector neck = Player->GetBonePos("neck_01", {});
                FVector upperL = Player->GetBonePos("upperarm_l", {});
                FVector upperR = Player->GetBonePos("upperarm_r", {});
                FVector lowerL = Player->GetBonePos("lowerarm_l", {});
                FVector lowerR = Player->GetBonePos("lowerarm_r", {});
                FVector handL = Player->GetBonePos("hand_l", {});
                FVector handR = Player->GetBonePos("hand_r", {});
                FVector calfL = Player->GetBonePos("calf_l", {});
                FVector calfR = Player->GetBonePos("calf_r", {});
                FVector footL = Player->GetBonePos("foot_l", {});
                FVector footR = Player->GetBonePos("foot_r", {});

                FVector2D PelvisP, neckP, upperLP, upperRP, lowerLP, lowerRP, handLP, handRP, calfLP, calfRP, footLP, footRP;
                if (UGameplayStatics::ProjectWorldToScreen(localPlayerController, Pelvis, false, &PelvisP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, neck, false, &neckP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, upperL, false, &upperLP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, upperR, false, &upperRP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, lowerL, false, &lowerLP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, lowerR, false, &lowerRP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, handL, false, &handLP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, handR, false, &handRP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, calfL, false, &calfLP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, calfR, false, &calfRP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, footL, false, &footLP) &&
                    UGameplayStatics::ProjectWorldToScreen(localPlayerController, footR, false, &footRP))
                {
                    Canvas->K2_DrawLine({handRP.X, handRP.Y}, {lowerRP.X, lowerRP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({lowerRP.X, lowerRP.Y}, {upperRP.X, upperRP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({upperRP.X, upperRP.Y}, {neckP.X, neckP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({neckP.X, neckP.Y}, {upperLP.X, upperLP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({upperLP.X, upperLP.Y}, {lowerLP.X, lowerLP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({lowerLP.X, lowerLP.Y}, {handLP.X, handLP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({footRP.X, footRP.Y}, {calfRP.X, calfRP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({calfRP.X, calfRP.Y}, {PelvisP.X, PelvisP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({PelvisP.X, PelvisP.Y}, {calfLP.X, calfLP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({calfLP.X, calfLP.Y}, {footLP.X, footLP.Y}, 1.0f, color);
                    Canvas->K2_DrawLine({PelvisP.X, PelvisP.Y}, {neckP.X, neckP.Y}, 1.0f, color);
                }
            }
        }
    }

    if (Font)
    {
    // NEW Y POSITION (upar shift for clean gap)
    float boxX = (float)g_screenWidth / 2.f - 15.f;
    float boxY = 60.f; // <-- yaha change kiya (pehle 85 tha)

    int totalCount = totalEnemies + totalBots;
    std::string countStr = (totalCount == 0) ? "0" : std::to_string(totalCount);

    FLinearColor boxColor = FLinearColor(1.f, 1.f, 1.f, 1.f); // White
    FLinearColor textColor = (totalCount == 0)
        ? FLinearColor(1.f, 0.f, 0.f, 1.f) // Red
        : FLinearColor(0.f, 0.f, 0.f, 1.f); // Black
    FLinearColor shadowColor = FLinearColor(1.f, 1.f, 1.f, 1.f); // White

    DrawFilledRectangle(Canvas, FVector2D(boxX, boxY), 30.f, 34.f, boxColor);

    if (Canvas && Font) {
        Canvas->K2_DrawText(Font,
                            FString(countStr.c_str()),
                            FVector2D((float)g_screenWidth / 2.f, boxY + 5.f),
                            textColor,
                            1.f,
                            {},
                            {},
                            true,
                            true,
                            true,
                            shadowColor);
    }
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

void *hookCheatbot(UGameViewportClient* ViewportClient, UCanvas* Canvas)
{
    if (!Canvas)
        return nullptr;

    g_screenWidth  = Canvas->SizeX;
    g_screenHeight = Canvas->SizeY;

    static bool loadFont = false;
    if (!loadFont)
    {
        LoadFont();
        loadFont = true;
    }
    if (!Font)
        return nullptr;

    auto GWorld = GetFullWorld();
    if (IsValidPtr(reinterpret_cast<uintptr_t>(GWorld)) &&
        IsValidPtr(reinterpret_cast<uintptr_t>(GWorld->NetDriver)) &&
        IsValidPtr(reinterpret_cast<uintptr_t>(GWorld->NetDriver->ServerConnection)))
    {
        localPlayerController = (ASTExtraPlayerController*)GWorld->NetDriver->ServerConnection->PlayerController;
        if (IsValidPtr(reinterpret_cast<uintptr_t>(localPlayerController)))
        {
            localPlayer = nullptr;
            auto Actors = GetActors();
            for (auto &Actor : Actors)
            {
                if (!Actor || !IsValidPtr(reinterpret_cast<uintptr_t>(Actor)))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
                {
                    auto P = (ASTExtraPlayerCharacter *)Actor;
                    if (!IsValidPtr(reinterpret_cast<uintptr_t>(P->RootComponent)))
                        continue;

                    if (P->PlayerKey == localPlayerController->PlayerKey)
                    {
                        localPlayer = P;
                        break;
                    }
                }
            }
        }
    }

    DrawMSG(Canvas);
    DrawPlayerESP(Canvas);

    if (oriCheatbot)
        return oriCheatbot(ViewportClient, Canvas);

    return nullptr;
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
