#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Ingame_TeamItem_New_UIBP.Ingame_TeamItem_New_UIBP_C
// Size: 0xb2d // Inherited bytes: 0x418
struct UIngame_TeamItem_New_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Anim_FireGlow01; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* Anim_TIpsLoop; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* Anim_TIpsGlow; // Offset: 0x430 // Size: 0x08
	struct UWidgetAnimation* DX_ShootFlashing; // Offset: 0x438 // Size: 0x08
	struct UWidgetAnimation* TeammateChange_Fade; // Offset: 0x440 // Size: 0x08
	struct UWidgetAnimation* DX_Injure; // Offset: 0x448 // Size: 0x08
	struct UWidgetAnimation* DX_qipao; // Offset: 0x450 // Size: 0x08
	struct UWidgetAnimation* DX_EarlyWarning; // Offset: 0x458 // Size: 0x08
	struct UWidgetAnimation* DX_Talk; // Offset: 0x460 // Size: 0x08
	struct UBorder* Border_AllSet; // Offset: 0x468 // Size: 0x08
	struct UBorder* Border_Blazing; // Offset: 0x470 // Size: 0x08
	struct UIngame_TeamItem_Addon_Panel_C* Bounty_TeamGold_Solt; // Offset: 0x478 // Size: 0x08
	struct UButton* Button_AITakeOver; // Offset: 0x480 // Size: 0x08
	struct UButton* Button_Follow; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Aircraft; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AITakeOver; // Offset: 0x4a0 // Size: 0x08
	struct UIngame_TeamItem_Addon_Panel_C* CanvasPanel_BountyRevive_Solt; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LandFollowBtnGroup; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LandFollowStatus; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Level; // Offset: 0x4c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ParachuteGroup; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PlayerState; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Punctuation; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_WaitAITakeOver; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanelResurrection; // Offset: 0x4e8 // Size: 0x08
	struct UImage* CarTips; // Offset: 0x4f0 // Size: 0x08
	struct UImage* footTips; // Offset: 0x4f8 // Size: 0x08
	struct UGridPanel* GridPanel_3; // Offset: 0x500 // Size: 0x08
	struct UGridPanel* GridPanel_Normal; // Offset: 0x508 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_DynamicStatus; // Offset: 0x510 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_HP_Buff_Left; // Offset: 0x518 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_HP_Buff_Right; // Offset: 0x520 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_HPBar; // Offset: 0x528 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_LeftSlot; // Offset: 0x530 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Middle; // Offset: 0x538 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_PreStatusList; // Offset: 0x540 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Revive; // Offset: 0x548 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_RightSlot; // Offset: 0x550 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_StausList; // Offset: 0x558 // Size: 0x08
	struct UImage* hurtTips; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_7; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_13; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_Aircraft; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_AircraftBG; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_AITakeOver; // Offset: 0x590 // Size: 0x08
	struct UImage* Image_AITakeOverBG; // Offset: 0x598 // Size: 0x08
	struct UImage* Image_Captain; // Offset: 0x5a0 // Size: 0x08
	struct UImage* Image_Dead_IDBG; // Offset: 0x5a8 // Size: 0x08
	struct UImage* Image_gender; // Offset: 0x5b0 // Size: 0x08
	struct UImage* Image_glow; // Offset: 0x5b8 // Size: 0x08
	struct UImage* Image_IDBG; // Offset: 0x5c0 // Size: 0x08
	struct UImage* Image_Injure; // Offset: 0x5c8 // Size: 0x08
	struct UImage* Image_ItemBG; // Offset: 0x5d0 // Size: 0x08
	struct UImage* Image_Mask; // Offset: 0x5d8 // Size: 0x08
	struct UImage* Image_Parachute; // Offset: 0x5e0 // Size: 0x08
	struct UImage* Image_ParachuteBG; // Offset: 0x5e8 // Size: 0x08
	struct UImage* Image_ParachuteFollow; // Offset: 0x5f0 // Size: 0x08
	struct UImage* Image_PlayerDead; // Offset: 0x5f8 // Size: 0x08
	struct UImage* Image_PlayerDriving; // Offset: 0x600 // Size: 0x08
	struct UImage* Image_PlayerFallToTheGround; // Offset: 0x608 // Size: 0x08
	struct UImage* Image_PlayerMark01; // Offset: 0x610 // Size: 0x08
	struct UImage* Image_PlayerOffOnline; // Offset: 0x618 // Size: 0x08
	struct UImage* Image_PlayerVoiceIcon; // Offset: 0x620 // Size: 0x08
	struct UImage* Image_Shoot; // Offset: 0x628 // Size: 0x08
	struct UCanvasPanel* InjurePanel; // Offset: 0x630 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x638 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_2; // Offset: 0x640 // Size: 0x08
	struct UImage* MatchStragetyImage; // Offset: 0x648 // Size: 0x08
	struct UHorizontalBox* MatchStragetyRoot; // Offset: 0x650 // Size: 0x08
	struct UTextBlock* MatchStragetyText; // Offset: 0x658 // Size: 0x08
	struct UCanvasPanel* MatchStragetyTextRoot; // Offset: 0x660 // Size: 0x08
	struct UOverlay* Overlay_Voice; // Offset: 0x668 // Size: 0x08
	struct UProgressBar* ProgressBar_PlayerHP; // Offset: 0x670 // Size: 0x08
	struct UImage* shotTips; // Offset: 0x678 // Size: 0x08
	struct USizeBox* SizeBox_HP; // Offset: 0x680 // Size: 0x08
	struct UCanvasPanel* TeamItemLeftCanvas; // Offset: 0x688 // Size: 0x08
	struct UTextBlock* TextBlock_AircraftFollowID; // Offset: 0x690 // Size: 0x08
	struct UTextBlock* TextBlock_Follow; // Offset: 0x698 // Size: 0x08
	struct UTextBlock* TextBlock_Level; // Offset: 0x6a0 // Size: 0x08
	struct UTextBlock* TextBlock_MasterIndex; // Offset: 0x6a8 // Size: 0x08
	struct UTextBlock* TextBlock_ParachuteFollowID; // Offset: 0x6b0 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName; // Offset: 0x6b8 // Size: 0x08
	struct UTextBlock* TextBlock_Punctuation; // Offset: 0x6c0 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x6c8 // Size: 0x08
	struct UImage* veteran_normal; // Offset: 0x6d0 // Size: 0x08
	struct UTextBlock* VoiceMask; // Offset: 0x6d8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_AITakeOver; // Offset: 0x6e0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Bg; // Offset: 0x6e8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_StateTips; // Offset: 0x6f0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Vetergen; // Offset: 0x6f8 // Size: 0x08
	struct FLinearColor FullColor; // Offset: 0x700 // Size: 0x10
	struct FLinearColor HpColor_Phase1; // Offset: 0x710 // Size: 0x10
	struct FLinearColor HpColor_Phase2; // Offset: 0x720 // Size: 0x10
	struct FLinearColor HpColor_Phase3; // Offset: 0x730 // Size: 0x10
	struct ASTExtraPlayerState* PlayerState; // Offset: 0x740 // Size: 0x08
	struct FLinearColor Player01Color; // Offset: 0x748 // Size: 0x10
	struct FLinearColor Player02Color; // Offset: 0x758 // Size: 0x10
	struct FLinearColor Player03Color; // Offset: 0x768 // Size: 0x10
	struct FLinearColor Player04Color; // Offset: 0x778 // Size: 0x10
	struct FLinearColor DeadColor; // Offset: 0x788 // Size: 0x10
	bool isLostOrExit; // Offset: 0x798 // Size: 0x01
	char pad_0x799[0x3]; // Offset: 0x799 // Size: 0x03
	IntProperty PlayerID; // Offset: 0x79c // Size: 0x04
	IntProperty PlayerKey; // Offset: 0x7a0 // Size: 0x04
	char pad_0x7A4[0x4]; // Offset: 0x7a4 // Size: 0x04
	struct FSlateColor IdxColor1; // Offset: 0x7a8 // Size: 0x28
	struct FSlateColor IdxColor2; // Offset: 0x7d0 // Size: 0x28
	StrProperty TeammatePlayerName; // Offset: 0x7f8 // Size: 0x10
	bool IsFollowingOther; // Offset: 0x808 // Size: 0x01
	bool IsFollowingOther_1; // Offset: 0x809 // Size: 0x01
	char pad_0x80A[0x2]; // Offset: 0x80a // Size: 0x02
	struct FLinearColor AlivePlayerColor; // Offset: 0x80c // Size: 0x10
	char pad_0x81C[0x4]; // Offset: 0x81c // Size: 0x04
	struct FSlateBrush ManIcon; // Offset: 0x820 // Size: 0xb8
	struct FSlateBrush WomenIcon; // Offset: 0x8d8 // Size: 0xb8
	struct UUserWidget* Resurrection_TeamtimeWidget; // Offset: 0x990 // Size: 0x08
	bool IsRevivalNeedSet; // Offset: 0x998 // Size: 0x01
	enum class ExtraPlayerLiveState PlayerLiveState; // Offset: 0x999 // Size: 0x01
	char pad_0x99A[0x2]; // Offset: 0x99a // Size: 0x02
	IntProperty ItemIndex; // Offset: 0x99c // Size: 0x04
	struct FSlateBrush commonvehicleIcon; // Offset: 0x9a0 // Size: 0xb8
	float lastMoveTip; // Offset: 0xa58 // Size: 0x04
	float lastVehicleTip; // Offset: 0xa5c // Size: 0x04
	float lastBulleTip; // Offset: 0xa60 // Size: 0x04
	float lastHurtTip; // Offset: 0xa64 // Size: 0x04
	float lastVehicleSound; // Offset: 0xa68 // Size: 0x04
	char pad_0xA6C[0x4]; // Offset: 0xa6c // Size: 0x04
	struct UAkAudioEvent* UAVVheicleSound; // Offset: 0xa70 // Size: 0x08
	float lastMoveSound; // Offset: 0xa78 // Size: 0x04
	char pad_0xA7C[0x4]; // Offset: 0xa7c // Size: 0x04
	struct UAkAudioEvent* CharacterMoveSound; // Offset: 0xa80 // Size: 0x08
	float lastBulletSound; // Offset: 0xa88 // Size: 0x04
	char pad_0xA8C[0x4]; // Offset: 0xa8c // Size: 0x04
	struct UAkAudioEvent* UAVBulletSound; // Offset: 0xa90 // Size: 0x08
	float lastHurtSound; // Offset: 0xa98 // Size: 0x04
	char pad_0xA9C[0x4]; // Offset: 0xa9c // Size: 0x04
	struct UAkAudioEvent* UAVHurtSound; // Offset: 0xaa0 // Size: 0x08
	struct FTimerHandle ShootTimerHandle; // Offset: 0xaa8 // Size: 0x08
	enum class EFollowState CurFollowState; // Offset: 0xab0 // Size: 0x01
	char pad_0xAB1[0x7]; // Offset: 0xab1 // Size: 0x07
	struct ASTExtraPlayerState* PlayerState_Previous; // Offset: 0xab8 // Size: 0x08
	MapProperty CustomStatusMap; // Offset: 0xac0 // Size: 0x50
	IntProperty CurrentStatus; // Offset: 0xb10 // Size: 0x04
	float AutoCloseVoiceDelay; // Offset: 0xb14 // Size: 0x04
	struct TArray<struct UUserWidget*> AddonWidgetList; // Offset: 0xb18 // Size: 0x10
	float LastPercent; // Offset: 0xb28 // Size: 0x04
	bool LastIsDying; // Offset: 0xb2c // Size: 0x01

	// Functions

	// Object Name: Function Ingame_TeamItem_New_UIBP.Ingame_TeamItem_New_UIBP_C.ExecuteUbergraph_Ingame_TeamItem_New_UIBP
	// Flags: [None]
	void ExecuteUbergraph_Ingame_TeamItem_New_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

