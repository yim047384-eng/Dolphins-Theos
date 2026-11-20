#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BattlePopTips.BattlePopTips_C
// Size: 0x5e0 // Inherited bytes: 0x418
struct UBattlePopTips_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* KillTypeTipsInAnimation2; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* KillTypeTipsOutAnimation; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* KillTypeTipsInAnimation; // Offset: 0x428 // Size: 0x08
	struct UBorder* Border_BothSidesKillInfo; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* BottomKillTips_Panel; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* BottomTips_KillTypeTips; // Offset: 0x440 // Size: 0x08
	struct UBorder* BottomTips_KillTypeTips_Border; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* CanvaPanelRoot; // Offset: 0x450 // Size: 0x08
	struct UCanvasPanel* Canvas_BP; // Offset: 0x458 // Size: 0x08
	struct USizeBox* Canvas_TeamKillInfoRoot; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Ace; // Offset: 0x468 // Size: 0x08
	struct UImage* CauserIndexBg; // Offset: 0x470 // Size: 0x08
	struct UCanvasPanel* CauserIndexPanel; // Offset: 0x478 // Size: 0x08
	struct UTextBlock* CauserIndexText; // Offset: 0x480 // Size: 0x08
	struct UTextBlock* DistanceText; // Offset: 0x488 // Size: 0x08
	struct UHorizontalBox* FarBox; // Offset: 0x490 // Size: 0x08
	struct UTextBlock* FarText; // Offset: 0x498 // Size: 0x08
	struct UImage* FeedBackIcon; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x4c0 // Size: 0x08
	struct UImage* Image_KillType; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Image_WeaponIcon; // Offset: 0x4d0 // Size: 0x08
	struct UHorizontalBox* KillBox; // Offset: 0x4d8 // Size: 0x08
	struct UImage* KillEffect; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* KillEffectCanvas; // Offset: 0x4e8 // Size: 0x08
	struct UTextBlock* KillNumNew; // Offset: 0x4f0 // Size: 0x08
	struct UTextBlock* KillNumText; // Offset: 0x4f8 // Size: 0x08
	struct UImage* KillTipsBg; // Offset: 0x500 // Size: 0x08
	struct USizeBox* MinSizePlaceHolder; // Offset: 0x508 // Size: 0x08
	struct USizeBox* SizeBox_1; // Offset: 0x510 // Size: 0x08
	struct USizeBox* SizeBox_killtype; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* StrongFeedBack; // Offset: 0x520 // Size: 0x08
	struct UTextBlock* TextBlock_6; // Offset: 0x528 // Size: 0x08
	struct UTextBlock* TextBlock_Ace; // Offset: 0x530 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName01; // Offset: 0x538 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName02; // Offset: 0x540 // Size: 0x08
	struct UImage* VictimIndexBg; // Offset: 0x548 // Size: 0x08
	struct UCanvasPanel* VictimIndexPanel; // Offset: 0x550 // Size: 0x08
	struct UTextBlock* VictimIndexText; // Offset: 0x558 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x560 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherIcon; // Offset: 0x568 // Size: 0x08
	MapProperty InAnimationOutTime; // Offset: 0x570 // Size: 0x50
	struct TArray<StrProperty> KillTipsInAnimations; // Offset: 0x5c0 // Size: 0x10
	struct TArray<StrProperty> KillTipsOutAnimations; // Offset: 0x5d0 // Size: 0x10
};

