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
#include <fstream>

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
       return addr > 0x100000000ULL && addr < 0x2000000000ULL;
}

    // Function / Code address ke liye (arm64 mein 4-byte aligned)
    
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

/*
uintptr_t CHEATBOTOWNER() {
    return GetShadowTrackerAddr(0x109E108E8ULL);
}

TNameEntryArray *GetGNames() {
    uintptr_t fnAddr = GetShadowTrackerAddr(0x10491486CULL);
    if (!IsValidPtr(fnAddr))
        return nullptr;

    using FnType = TNameEntryArray *(*)();
    auto fn = reinterpret_cast<FnType>(fnAddr);
    return fn();
}

    

*/


namespace off {
    // ============ WORLD ============
    constexpr uintptr_t FUN            = 0x1019A422C;
    constexpr uintptr_t DATA           = 0x10A029E80;
    constexpr uintptr_t ACTORARRAY_FUN = 0x105C96B1C;

    // ============ WORLD CHAIN ============
    constexpr uintptr_t UWORLD_PERSISTENTLEVEL = 0x30;
    constexpr uintptr_t UWORLD_NETDRIVER       = 0x38;
    constexpr uintptr_t NETDRIVER_SERVERCONN   = 0x78;
    constexpr uintptr_t SERVERCONN_PLAYERCTRL  = 0x30;

    // ============ CHARACTER ============
    constexpr uintptr_t PC_ROOTCOMPONENT = 0x208;
    constexpr uintptr_t CHAR_PLAYERKEY   = 0x990;
    constexpr uintptr_t CTRL_PLAYERKEY   = 0x920;
    constexpr uintptr_t CHAR_TEAMID      = 0x9a8;
    constexpr uintptr_t BDEAD            = 0xe8c;
    constexpr uintptr_t BHIDDEN          = 0xe8;
    constexpr uintptr_t BENSURE          = 0xa69;

    // ============ HEALTH ============
    constexpr uintptr_t HEALTH          = 0xe70;  // STExtraCharacter::Health (float)
    constexpr uintptr_t HEALTHMAX       = 0xe74;  // STExtraCharacter::HealthMax (float)
    constexpr uintptr_t NEARDEATHBREATH = 0x1cb0; // STExtraBaseCharacter::NearDeathBreath (float)

    // ============ SCENE ============
    constexpr uintptr_t SCENE_RELATIVELOCATION = 0x1e4;
    constexpr uintptr_t SCENE_WORLDLOCATION    = 0x218;

    // ============ CANVAS ============
    constexpr uintptr_t CANVAS_SIZEX = 0x40;
    constexpr uintptr_t CANVAS_SIZEY = 0x44;
}
    
static uintptr_t image_slide_by_name(const char* name) {
    uint32_t n = _dyld_image_count();
    for (uint32_t i = 0; i < n; i++) {
        const char* nm = _dyld_get_image_name(i);
        if (nm && strstr(nm, name))
            return (uintptr_t)_dyld_get_image_vmaddr_slide(i);
    }
    return 0;
}

UWorld* GetFullWorld() {
    uintptr_t slide = image_slide_by_name("ShadowTrackerExtra");
    if (!slide) return nullptr;
    using Fn = UWorld*(*)(uintptr_t);
    return reinterpret_cast<Fn>(slide + off::FUN)(slide + off::DATA);
}

// ---- safe read helper ----
template <typename T>
static inline T safe_read(uintptr_t addr) {
    if (!addr) return T{};
    return *reinterpret_cast<T*>(addr);
}

// ---- GetActors, safe_read ke saath ----
std::vector<AActor*> GetActors() {
    auto World = GetFullWorld();
    if (!World) return {};

    auto PersistentLevel = safe_read<ULevel*>((uintptr_t)World + 0x30); // SDK se hi tha, offset bhi de diya
    if (!PersistentLevel) return {};

    struct GovnoArray { uintptr_t base; int32_t count; int32_t max; };

    uintptr_t slide = image_slide_by_name("ShadowTrackerExtra");
    if (!slide) return {};

    using ActorArrayFn = GovnoArray*(*)(uintptr_t);
    auto actorArrayFn = reinterpret_cast<ActorArrayFn>(slide + off::ACTORARRAY_FUN);

    GovnoArray* arr = actorArrayFn((uintptr_t)PersistentLevel);
    if (!arr || arr->count <= 0) return {};

    std::vector<AActor*> actors;
    actors.reserve(arr->count);
    for (int i = 0; i < arr->count; i++) {
        uintptr_t Actor = safe_read<uintptr_t>(arr->base + i * sizeof(uintptr_t));
        if (Actor)
            actors.push_back(reinterpret_cast<AActor*>(Actor));
    }
    return actors;
}

void DrawLine(UCanvas* Canvas, FVector2D posFrom, FVector2D posTo, float Thickness, FLinearColor Color) {
    Canvas->K2_DrawLine({posFrom.X, posFrom.Y}, {posTo.X, posTo.Y}, Thickness, Color);
}

void DrawFilledRectangle(UCanvas* Canvas, float X, float Y, float W, float H, FLinearColor Color) {
    // Android: drawList->AddRectFilled(ImVec2(X, Y), ImVec2(X - W, Y - H), Color);
    // Canvas equivalent: X se X-W tak, Y se Y-H tak
    float startY = Y - H;
    float endY   = Y;

    for (float i = startY; i < endY; i += 1.f) {
        Canvas->K2_DrawLine(FVector2D{ X - W, i }, FVector2D{ X, i }, 1.f, Color);
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
void DrawFilledRect(UCanvas* Canvas, FVector2D initial_pos, float w, float h, FLinearColor Color)
{
    for (float i = 0.f; i < h; i += 1.f)
    Canvas->K2_DrawLine(FVector2D(initial_pos.X, initial_pos.Y + i), FVector2D(initial_pos.X + w, initial_pos.Y + i), 1.f, Color);
}



void* LoadFont() {
    while (!Font) {
        uintptr_t GObjects = CB_GetGObjects();
        if (GObjects) {
            uintptr_t ObjObjects = safe_read<uintptr_t>(GObjects + CB_OBJOBJECTS_OFFSET);
            if (ObjObjects) {
                int32_t NumElements = safe_read<int32_t>(ObjObjects + CB_NUMELEMENTS_OFFSET);
                if (NumElements > 0) {
                    uintptr_t* Objects = reinterpret_cast<uintptr_t*>(ObjObjects);
                    for (int i = 0; i < NumElements; i++) {
                        uintptr_t obj = safe_read<uintptr_t>((uintptr_t)&Objects[i]);
                        if (!obj) continue;

                        std::string name = CB_GetObjectName(obj);
                        // Exact string match (jaise SDK FindObject karta tha)
                        if (name == "RobotoTiny") {
                            Font = reinterpret_cast<UFont*>(obj);
                            break;
                        }
                    }
                }
            }
        }
        if (!Font) sleep(1);
    }
    return 0;
}



struct Matrix
{
    float m[4][4];
};

/*
Matrix GetMatrix() {
    static UCanvas* Canvas = nullptr;
    if (!Canvas) Canvas = UObject::FindObject<UCanvas>("Canvas Transient.DebugCanvasObject");
    if (!Canvas) return Matrix{};
    return safe_read<Matrix>((uintptr_t)Canvas + 0x270);
}*/

Matrix GetMatrix() {
    static UCanvas* Canvas = nullptr;
    
    if (!Canvas) {
        uintptr_t GObjects = CB_GetGObjects();
        if (GObjects) {
            uintptr_t ObjObjects = safe_read<uintptr_t>(GObjects + CB_OBJOBJECTS_OFFSET);
            if (ObjObjects) {
                int32_t NumElements = safe_read<int32_t>(ObjObjects + CB_NUMELEMENTS_OFFSET);
                if (NumElements > 0) {
                    uintptr_t* Objects = reinterpret_cast<uintptr_t*>(ObjObjects);
                    for (int i = 0; i < NumElements; i++) {
                        uintptr_t obj = safe_read<uintptr_t>((uintptr_t)&Objects[i]);
                        if (!obj) continue;

                        std::string name = CB_GetObjectName(obj);
                        
                        // "Canvas Transient.DebugCanvasObject" ka short name "DebugCanvasObject" hoga
                        if (name.find("DebugCanvasObject") != std::string::npos || name.find("Canvas") != std::string::npos) {
                            // Confirm karne ke liye ki ye Canvas hi hai
                            Canvas = reinterpret_cast<UCanvas*>(obj);
                            break;
                        }
                    }
                }
            }
        }
    }
    
    if (!Canvas) return Matrix{};
    return safe_read<Matrix>((uintptr_t)Canvas + 0x270); // 0x270 = arm64 Canvas Matrix offset
}

bool WorldToScreenPlayer(FVector pos, FVector& screen, int* distance) {
    Matrix ViewMatrix = GetMatrix();
    screen = {};
    *distance = 0;

    float screenW = (ViewMatrix.m[0][3] * pos.X) + (ViewMatrix.m[1][3] * pos.Y)
                  + (ViewMatrix.m[2][3] * pos.Z + ViewMatrix.m[3][3]);
    if (screenW < 0.0001f) return false;

    *distance = (int)(screenW / 100);

    float screenY = (ViewMatrix.m[0][1] * pos.X) + (ViewMatrix.m[1][1] * pos.Y)
                  + (ViewMatrix.m[2][1] * (pos.Z + 85) + ViewMatrix.m[3][1]);
    float screenX = (ViewMatrix.m[0][0] * pos.X) + (ViewMatrix.m[1][0] * pos.Y)
                  + (ViewMatrix.m[2][0] * pos.Z + ViewMatrix.m[3][0]);

    float W = (float)g_screenWidth;
    float H = (float)g_screenHeight;

    screen.Y = (H / 2.f) - (H / 2.f) * screenY / screenW;
    screen.X = (W / 2.f) + (W / 2.f) * screenX / screenW;

    float y1 = (H / 2.f) - (ViewMatrix.m[0][1] * pos.X + ViewMatrix.m[1][1] * pos.Y
               + ViewMatrix.m[2][1] * (pos.Z - 95) + ViewMatrix.m[3][1]) * (H / 2.f) / screenW;
    screen.Z = y1 - screen.Y;

    return !(screen.X == 0 && screen.Y == 0 && screen.Z == 0);
}

bool WorldToScreenBone(FVector Position, FVector2D* Screen) {
    Matrix ViewMatrix = GetMatrix();

    float ScreenW = (ViewMatrix.m[0][3] * Position.X) + (ViewMatrix.m[1][3] * Position.Y)
                  + (ViewMatrix.m[2][3] * Position.Z + ViewMatrix.m[3][3]);
    if (ScreenW < 0.0001f) return false;

    ScreenW = 1.f / ScreenW;
    float SightX = ((float)g_screenWidth  / 2.f);
    float SightY = ((float)g_screenHeight / 2.f);

    Screen->X = SightX + (ViewMatrix.m[0][0] * Position.X + ViewMatrix.m[1][0] * Position.Y
               + ViewMatrix.m[2][0] * Position.Z + ViewMatrix.m[3][0]) * ScreenW * SightX;
    Screen->Y = SightY - (ViewMatrix.m[0][1] * Position.X + ViewMatrix.m[1][1] * Position.Y
               + ViewMatrix.m[2][1] * Position.Z + ViewMatrix.m[3][1]) * ScreenW * SightY;

    return true;
}

/*
void DrawPlayerESP(UCanvas* Canvas) {
    if (!Canvas || !localPlayer || !localPlayerController) return;

    int totalEnemies = 0, totalBots = 0;

    uint32_t lKey  = safe_read<uint32_t>((uintptr_t)localPlayer + off::CHAR_PLAYERKEY);
    uint32_t lTeam = safe_read<uint32_t>((uintptr_t)localPlayer + off::CHAR_TEAMID);

    auto myRoot = safe_read<USceneComponent*>((uintptr_t)localPlayer + off::PC_ROOTCOMPONENT);
    if (!myRoot) return;
    FVector myLoc = safe_read<FVector>((uintptr_t)myRoot + off::SCENE_RELATIVELOCATION);

    auto Actors = GetActors();
    for (auto& Actor : Actors) {
        if (!Actor || !IsValidPtr((uintptr_t)Actor)) continue;
        if (!Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) continue;

        auto Player = reinterpret_cast<ASTExtraPlayerCharacter*>(Actor);
        auto hisRoot = safe_read<USceneComponent*>((uintptr_t)Player + off::PC_ROOTCOMPONENT);
        if (!hisRoot) continue;

        uint32_t pKey  = safe_read<uint32_t>((uintptr_t)Player + off::CHAR_PLAYERKEY);
        uint32_t pTeam = safe_read<uint32_t>((uintptr_t)Player + off::CHAR_TEAMID);
        bool dead   = safe_read<bool>((uintptr_t)Player + off::BDEAD);
        bool hidden = safe_read<bool>((uintptr_t)Player + off::BHIDDEN);
        bool isBot  = safe_read<bool>((uintptr_t)Player + off::BENSURE);

        if (pKey == lKey || pTeam == lTeam || dead || hidden) continue;

        FVector hisLoc = safe_read<FVector>((uintptr_t)hisRoot + off::SCENE_RELATIVELOCATION);
        float dx = hisLoc.X - myLoc.X, dy = hisLoc.Y - myLoc.Y, dz = hisLoc.Z - myLoc.Z;
        float Distance = sqrtf(dx*dx + dy*dy + dz*dz) / 100.f;
        if (Distance > 500.f) continue;

        if (isBot) totalBots++; else totalEnemies++;

        FVector HeadBone = Player->GetBonePos("Head", {});
        bool IsVisible = localPlayerController->LineOfSightTo(
         localPlayerController->PlayerCameraManager, HeadBone, true);

        FLinearColor Color;
        if (isBot && IsVisible)        Color = FLinearColor(0,1,0,1);
        else if (!isBot && IsVisible)  Color = FLinearColor(0,1,0,1);
        else if (!isBot && !IsVisible) Color = FLinearColor(1,0,0,1);
        else                           Color = FLinearColor(1,1,1,1);

auto rootc = safe_read<USceneComponent*>((uintptr_t)Player + off::PC_ROOTCOMPONENT);
if (!rootc) continue;

        FVector PlayerPos = rootc->K2_GetComponentLocation();  // SDK, confirmed
        FVector Screen;
        int distanceX;
        if (!WorldToScreenPlayer(PlayerPos, Screen, &distanceX)) continue;

        FVector HeadPos = Player->GetBonePos("Head", {});
        FVector RootPos = Player->GetBonePos("Root", {});
        FVector2D HeadPosition, RootPosition; 
        if (!WorldToScreenBone(HeadPos, &HeadPosition) ||
            !WorldToScreenBone(RootPos, &RootPosition)) continue;

        if (isLineEsp) {
        DrawLine(Canvas, {(float)g_screenWidth / 2, 0}, {HeadPosition.X, HeadPosition.Y}, 2.0f, Color);
}

        if (isLineEsp) {
            
    float MaxHP = safe_read<float>((uintptr_t)Player + off::HEALTHMAX);
    float health = safe_read<float>((uintptr_t)Player + off::HEALTH);
    float KnockHealth = safe_read<float>((uintptr_t)Player + off::NEARDEATHBREATH);

    // Background
    DrawFilledRectangle(Canvas, Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), FLinearColor(0,0,0,1));

    // Health Fill
    if (health > 70.0f) {
        DrawFilledRectangle(Canvas, Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * health / MaxHP, FLinearColor(0,1,0,1));
    }
    else if (health > 30.0f && health <= 70.0f) {
        DrawFilledRectangle(Canvas, Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * health / MaxHP, FLinearColor(1,1,0,1));
    }
    else if (health > 0.0f && health <= 30.0f) {
        DrawFilledRectangle(Canvas, Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * health / MaxHP, FLinearColor(1,0,0,1));
    }
    else if (health <= 0) {
        DrawFilledRectangle(Canvas, Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * KnockHealth / MaxHP, FLinearColor(1,0,0,1));
    }
}
        }
    }
*/

#include <cstdint>
#include <string>
#include <unistd.h>
#include <cmath>

// ==============================================================================
// 1. RAW STRUCTS (Memory Layout)
// ==============================================================================
struct CB_RawFName {
    int32_t ComparisonIndex; // 0x0
    int32_t Number;          // 0x4
};

struct CB_RawNameEntry {
    uint16_t Header;         // 0x0
    union {
        char     AnsiName[1024];
        uint16_t WideName[1024];
    };
};

struct CB_RawNameEntryArray {
    CB_RawNameEntry** Chunks[0x4000];
};

// ==============================================================================
// 2. GLOBALS & POINTERS (Function Pointers & Confirmed Offsets)
// ==============================================================================
// GNames & GObjects (tumhare IDA offsets)
#define CB_GNAMES_FN 0x10491486CULL
#define CB_GOBJECTS_ADDR 0x109E108E8ULL

// Dumper se confirmed offsets
constexpr uintptr_t CB_OBJOBJECTS_OFFSET   = 0x10; // FUObjectArray->ObjObjects
constexpr uintptr_t CB_NUMELEMENTS_OFFSET  = 0xC;  // TUObjectArray->NumElements
constexpr uintptr_t CB_CLASSPRIVATE_OFFSET = 0x10; // UObject->ClassPrivate
constexpr uintptr_t CB_NAME_OFFSET         = 0x18; // UObject->NamePrivate
constexpr uintptr_t CB_SUPERSTRUCT_OFFSET  = 0x30; // UStruct->SuperStruct

// GObjects nikalne ka function
uintptr_t CB_GetGObjects() {
    return GetShadowTrackerAddr(CB_GOBJECTS_ADDR);
}

// ==============================================================================
// 3. GNAMES (String Read System)
// ==============================================================================
struct CB_RawNameEntryArray* CB_GetGNames() {
    uintptr_t fnAddr = GetShadowTrackerAddr(CB_GNAMES_FN);
    if (!IsValidPtr(fnAddr)) return nullptr;
    using FnType = CB_RawNameEntryArray *(*)();
    return reinterpret_cast<FnType>(fnAddr)();
}

std::string CB_GetFNameString(int32_t Index) {
    static CB_RawNameEntryArray* GNames = nullptr;
    if (!GNames) {
        GNames = CB_GetGNames();
        while (!GNames) { sleep(1); GNames = CB_GetGNames(); }
    }
    if (!GNames || Index < 0) return "";

    uintptr_t chunkPtr = *reinterpret_cast<uintptr_t*>((uintptr_t)GNames + ((Index >> 14) * sizeof(uintptr_t)));
    if (!chunkPtr) return "";

    uintptr_t entryPtr = *reinterpret_cast<uintptr_t*>(chunkPtr + ((Index & 0x3FFF) * sizeof(uintptr_t)));
    if (!entryPtr) return "";

    CB_RawNameEntry* entry = reinterpret_cast<CB_RawNameEntry*>(entryPtr);
    if (!entry) return "";

    uint16_t header = entry->Header;
    bool isWide = (header & 1);
    int length = (header >> 6) & 0x3FF;

    std::string result;
    result.reserve(length);

    if (isWide) {
        for (int i = 0; i < length; i++) result.push_back((char)(entry->WideName[i] & 0xFF));
    } else {
        for (int i = 0; i < length; i++) result.push_back(entry->AnsiName[i]);
    }
    return result;
}

std::string CB_GetObjectName(uintptr_t Object) {
    if (!Object) return "";
    CB_RawFName fname = *reinterpret_cast<CB_RawFName*>(Object + CB_NAME_OFFSET);
    return CB_GetFNameString(fname.ComparisonIndex);
}

// ==============================================================================
// 4. GOBJECTS (Class Finder) & ISA
// ==============================================================================
uintptr_t CB_FindClassByName(const std::string& ClassName) {
    uintptr_t GObjects = CB_GetGObjects();
    if (!GObjects) return 0;

    // ObjObjects pointer nikaalo
    uintptr_t ObjObjects = safe_read<uintptr_t>(GObjects + CB_OBJOBJECTS_OFFSET);
    if (!ObjObjects) return 0;

    // NumElements nikaalo
    int32_t NumElements = safe_read<int32_t>(ObjObjects + CB_NUMELEMENTS_OFFSET);
    if (NumElements <= 0 || NumElements > 2000000) return 0; // Safety check

    // Array walk
    uintptr_t* Objects = reinterpret_cast<uintptr_t*>(ObjObjects);

    for (int i = 0; i < NumElements; i++) {
        uintptr_t Object = safe_read<uintptr_t>((uintptr_t)&Objects[i]);
        if (!Object) continue;

        std::string Name = CB_GetObjectName(Object);
        if (Name == ClassName) {
            return Object;
        }
    }
    return 0;
}

bool CB_RawIsA(uintptr_t Object, uintptr_t TargetClass) {
    if (!Object || !TargetClass) return false;
    
    uintptr_t ClassPtr = safe_read<uintptr_t>(Object + CB_CLASSPRIVATE_OFFSET);
    while (ClassPtr) {
        if (ClassPtr == TargetClass) return true;
        ClassPtr = safe_read<uintptr_t>(ClassPtr + CB_SUPERSTRUCT_OFFSET);
    }
    return false;
}

bool CB_IsPlayerCharacter(uintptr_t Actor) {
    static uintptr_t PlayerCharClass = 0;
    static bool IsSearching = false;
    
    if (PlayerCharClass == 0 && !IsSearching) {
        IsSearching = true;
        PlayerCharClass = CB_FindClassByName("ASTExtraPlayerCharacter");
        if (PlayerCharClass == 0) PlayerCharClass = CB_FindClassByName("UAECharacter");
        IsSearching = false;
    }
    
    if (PlayerCharClass != 0) return CB_RawIsA(Actor, PlayerCharClass);
    
    // Fallback agar class pointer na mile
    uintptr_t ClassPtr = safe_read<uintptr_t>(Actor + CB_CLASSPRIVATE_OFFSET);
    std::string className = CB_GetObjectName(ClassPtr);
    return (className.find("PlayerCharacter") != std::string::npos || className.find("UAECharacter") != std::string::npos);
}

// ==============================================================================
// 5. DRAW PLAYER ESP (Final, Proper)
// ==============================================================================
void DrawPlayerESP(UCanvas* Canvas) {
    if (!Canvas || !localPlayer || !localPlayerController) return;

    int totalEnemies = 0, totalBots = 0;

    // Local Player Data
    uint32_t lKey  = safe_read<uint32_t>((uintptr_t)localPlayer + off::CHAR_PLAYERKEY);
    uint32_t lTeam = safe_read<uint32_t>((uintptr_t)localPlayer + off::CHAR_TEAMID);

    auto myRoot = safe_read<USceneComponent*>((uintptr_t)localPlayer + off::PC_ROOTCOMPONENT);
    if (!myRoot) return;
    FVector myLoc = safe_read<FVector>((uintptr_t)myRoot + off::SCENE_RELATIVELOCATION);

    auto Actors = GetActors();
    for (auto& Actor : Actors) {
        if (!Actor || !IsValidPtr((uintptr_t)Actor)) continue;

        // Offset-base IsA (SDK hata diya)
        if (!CB_IsPlayerCharacter((uintptr_t)Actor)) continue;

        auto Player = reinterpret_cast<ASTExtraPlayerCharacter*>(Actor);
        auto hisRoot = safe_read<USceneComponent*>((uintptr_t)Player + off::PC_ROOTCOMPONENT);
        if (!hisRoot) continue;

        // Filters
        uint32_t pKey  = safe_read<uint32_t>((uintptr_t)Player + off::CHAR_PLAYERKEY);
        uint32_t pTeam = safe_read<uint32_t>((uintptr_t)Player + off::CHAR_TEAMID);
        bool dead   = safe_read<bool>((uintptr_t)Player + off::BDEAD);
        bool hidden = safe_read<bool>((uintptr_t)Player + off::BHIDDEN);
        bool isBot  = safe_read<bool>((uintptr_t)Player + off::BENSURE);

        if (pKey == lKey || pTeam == lTeam || dead || hidden) continue;

        // Distance
        FVector hisLoc = safe_read<FVector>((uintptr_t)hisRoot + off::SCENE_RELATIVELOCATION);
        float dx = hisLoc.X - myLoc.X, dy = hisLoc.Y - myLoc.Y, dz = hisLoc.Z - myLoc.Z;
        float Distance = sqrtf(dx*dx + dy*dy + dz*dz) / 100.f;
        if (Distance > 500.f) continue;

        if (isBot) totalBots++; else totalEnemies++;

        // Visibility (SDK LineOfSightTo for now)
        FVector HeadBone = Player->GetBonePos("Head", {});
        bool IsVisible = localPlayerController->LineOfSightTo(localPlayerController->PlayerCameraManager, HeadBone, true);

        // Color logic
        FLinearColor Color;
        if (isBot && IsVisible)        Color = FLinearColor(0,1,0,1); // Bot Visible - Green
        else if (!isBot && IsVisible)  Color = FLinearColor(0,1,0,1); // Player Visible - Green
        else if (!isBot && !IsVisible) Color = FLinearColor(1,0,0,1); // Player Hidden - Red
        else                           Color = FLinearColor(1,1,1,1); // Bot Hidden - White

        // World to Screen (K2_GetComponentLocation SDK)
        FVector PlayerPos = hisRoot->K2_GetComponentLocation();
        FVector Screen;
        int distanceX;
        if (!WorldToScreenPlayer(PlayerPos, Screen, &distanceX)) continue;

        FVector HeadPos = Player->GetBonePos("Head", {});
        FVector RootPos = Player->GetBonePos("Root", {});
        FVector2D HeadPosition, RootPosition;
        if (!WorldToScreenBone(HeadPos, &HeadPosition) ||
            !WorldToScreenBone(RootPos, &RootPosition)) continue;

        // Draw Line
        if (isLineEsp) {
            DrawLine(Canvas, {(float)g_screenWidth / 2, 0}, {HeadPosition.X, HeadPosition.Y}, 2.0f, Color);
        }

        // Draw Health Bar
        if (isLineEsp) {
            float MaxHP       = safe_read<float>((uintptr_t)Player + off::HEALTHMAX);
            float health      = safe_read<float>((uintptr_t)Player + off::HEALTH);
            float KnockHealth = safe_read<float>((uintptr_t)Player + off::NEARDEATHBREATH);

            float X = Screen.X - (Screen.Z / 4) - 4;
            float Y = (Screen.Y - 5) + (Screen.Z + 5);
            float W = 3;
            float H = Screen.Z + 5;

            // Background
            DrawFilledRectangle(Canvas, X, Y, W, H, FLinearColor(0,0,0,1));

            if (MaxHP > 0.f) {
                float ratio = health / MaxHP;
                if (ratio > 1.f) ratio = 1.f;
                if (ratio < 0.f) ratio = 0.f;

                float fillH = (health > 0.f) ? (H * ratio) : (H * (KnockHealth / MaxHP));

                FLinearColor hc;
                if (health > 70.f)       hc = FLinearColor(0,1,0,1); // Green
                else if (health > 30.f)  hc = FLinearColor(1,1,0,1); // Yellow
                else                     hc = FLinearColor(1,0,0,1); // Red

                // Fill
                DrawFilledRectangle(Canvas, X, Y, W, fillH, hc);
            }
        }
    }
}

void DrawMSG(UCanvas* Canvas) {
    if (!Canvas || !Font) return;
       
    g_screenWidth  = Canvas->SizeX;
    g_screenHeight = Canvas->SizeY;

    // Clean watermark
    DrawTextSafe(Canvas, FString(" @1hack"), 
                 FVector2D(g_screenWidth - 110.f, g_screenHeight - 45.f), 
                 FLinearColor(1.0f, 0.15f, 0.15f, 0.9f), 16);
}

/*
// ==========================================
// ========== HOOKING =======================
// ==========================================
void* (*oriCheatbot)(UGameViewportClient* ViewportClient, UCanvas* Canvas);
// ---- hook, safe_read ke saath ----
void* hookCheatbot(UGameViewportClient* ViewportClient, UCanvas* Canvas) {
    if (!Canvas) return nullptr;
    g_screenWidth  = Canvas->SizeX;
    g_screenHeight = Canvas->SizeY;

    static bool loadFont = false;
    if (!loadFont) { LoadFont(); loadFont = true; }
    if (!Font) return nullptr;

    auto GWorld = GetFullWorld();
    if (GWorld) {
        auto NetDriver = safe_read<UNetDriver*>((uintptr_t)GWorld + off::UWORLD_NETDRIVER);
        if (NetDriver) {
            auto ServerConnection = safe_read<UNetConnection*>((uintptr_t)NetDriver + off::NETDRIVER_SERVERCONN);
            if (ServerConnection) {
                localPlayerController = safe_read<ASTExtraPlayerController*>(
                    (uintptr_t)ServerConnection + off::SERVERCONN_PLAYERCTRL);

    if (localPlayerController) {
    auto Actors = GetActors();
    for (auto& Actor : Actors) {
        if (!Actor || !IsValidPtr((uintptr_t)Actor)) continue;
        if (!Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) continue;

        auto P = reinterpret_cast<ASTExtraPlayerCharacter*>(Actor);
        if (!safe_read<USceneComponent*>((uintptr_t)P + off::PC_ROOTCOMPONENT)) continue;

        // playerkey compare — offset-base
        uint32_t pKey = safe_read<uint32_t>((uintptr_t)P + off::CHAR_PLAYERKEY);
        uint32_t cKey = safe_read<uint32_t>((uintptr_t)localPlayerController + off::CTRL_PLAYERKEY);

        printf("[key] pKey=%u cKey=%u\n", pKey, cKey);   // test print

        if (pKey == cKey) {
            localPlayer = P;
            break;
                   }
                 }
               }
            }
        }
    }

    DrawMSG(Canvas);
    DrawPlayerESP(Canvas);
    return oriCheatbot(ViewportClient, Canvas);
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

*/

void* (*oriCheatbot)(UGameViewportClient* ViewportClient, UCanvas* Canvas);

void* hookCheatbot(UGameViewportClient* ViewportClient, UCanvas* Canvas) {
    if (!Canvas) return nullptr;
    
    // Canvas Size offset-base
    g_screenWidth  = safe_read<int32_t>((uintptr_t)Canvas + off::CANVAS_SIZEX); // 0x40
    g_screenHeight = safe_read<int32_t>((uintptr_t)Canvas + off::CANVAS_SIZEY); // 0x44

    static bool loadFont = false;
    if (!loadFont) { LoadFont(); loadFont = true; }
    if (!Font) return nullptr;

    auto GWorld = GetFullWorld();
    if (GWorld) {
        auto NetDriver = safe_read<UNetDriver*>((uintptr_t)GWorld + off::UWORLD_NETDRIVER);
        if (NetDriver) {
            auto ServerConnection = safe_read<UNetConnection*>((uintptr_t)NetDriver + off::NETDRIVER_SERVERCONN);
            if (ServerConnection) {
                localPlayerController = safe_read<ASTExtraPlayerController*>(
                    (uintptr_t)ServerConnection + off::SERVERCONN_PLAYERCTRL);

                if (localPlayerController) {
                    auto Actors = GetActors();
                    for (auto& Actor : Actors) {
                        if (!Actor || !IsValidPtr((uintptr_t)Actor)) continue;
                        
                        // Offset-base IsA
                        if (!CB_IsPlayerCharacter((uintptr_t)Actor)) continue;

                        auto P = reinterpret_cast<ASTExtraPlayerCharacter*>(Actor);
                        if (!safe_read<USceneComponent*>((uintptr_t)P + off::PC_ROOTCOMPONENT)) continue;

                        // PlayerKey compare
                        uint32_t pKey = safe_read<uint32_t>((uintptr_t)P + off::CHAR_PLAYERKEY);
                        uint32_t cKey = safe_read<uint32_t>((uintptr_t)localPlayerController + off::CTRL_PLAYERKEY);

                        if (pKey == cKey) {
                            localPlayer = P;
                            break;
                        }
                    }
                }
            }
        }
    }

    DrawMSG(Canvas);
    DrawPlayerESP(Canvas);
    return oriCheatbot(ViewportClient, Canvas);
}

// ==============================================================================
// HOOK INSTALLER (botcheatxd) - Offset-base class check
// ==============================================================================
void *botcheatxd() {
    if (!Cheatbotlp) return 0;
    
    static bool hooked = false;
    if (hooked) return 0;
    
    // GObjects walk (apne CB_FindClassByName ka use karo, ya loop khud likho)
    uintptr_t GObjects = CB_GetGObjects();
    if (!GObjects) return 0;

    uintptr_t ObjObjects = safe_read<uintptr_t>(GObjects + CB_OBJOBJECTS_OFFSET);
    if (!ObjObjects) return 0;

    int32_t NumElements = safe_read<int32_t>(ObjObjects + CB_NUMELEMENTS_OFFSET);
    if (NumElements <= 0) return 0;

    uintptr_t* Objects = reinterpret_cast<uintptr_t*>(ObjObjects);

    for (int i = 0; i < NumElements; i++) {
        uintptr_t obj = safe_read<uintptr_t>((uintptr_t)&Objects[i]);
        if (!obj) continue;

        // SDK IsA ki jagah string check
        std::string className = CB_GetObjectName(obj);
        if (className == "GameViewportClient") {
            auto View = reinterpret_cast<UGameViewportClient*>(obj);
            
            // VTable check (offset-base)
            uintptr_t vTableAddr = safe_read<uintptr_t>((uintptr_t)View + 0x0); // UObject->VTable 0x0
            if (vTableAddr) {
                void** vTable = reinterpret_cast<void**>(vTableAddr);
                
                // vTable[134] = Draw hook offset (tumhara)
                if (vTable[134] != (void*)hookCheatbot) {
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
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if(Cheatbotlp) { botcheatxd(); }
    });
//    FName::GNames = GetGNames();
   // while (!FName::GNames) { FName::GNames = GetGNames(); sleep(1); }
    //UObject::GUObjectArray = (FUObjectArray *) (CHEATBOTOWNER());
}


@end
