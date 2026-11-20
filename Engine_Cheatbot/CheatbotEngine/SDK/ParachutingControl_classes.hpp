#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ParachutingControl.ParachutingControl_C
// Size: 0x5d0 // Inherited bytes: 0x418
struct UParachutingControl_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* Out; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* In; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_AerialShow; // Offset: 0x428 // Size: 0x08
	struct UButton* Button_Agree; // Offset: 0x430 // Size: 0x08
	struct UButton* Button_CloseParachute; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_Cut; // Offset: 0x440 // Size: 0x08
	struct UButton* Button_LeavePlane; // Offset: 0x448 // Size: 0x08
	struct UButton* Button_OutOfFollow; // Offset: 0x450 // Size: 0x08
	struct UButton* Button_Parachute; // Offset: 0x458 // Size: 0x08
	struct UButton* Button_Refuse; // Offset: 0x460 // Size: 0x08
	struct UButton* Button_TacticalSpread; // Offset: 0x468 // Size: 0x08
	struct UButton* Button_WingUp; // Offset: 0x470 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AerialShowMask; // Offset: 0x478 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ParachutingMsg; // Offset: 0x480 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x488 // Size: 0x08
	struct UCheckBox* CheckBox_Tips; // Offset: 0x490 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomPanel_AerialShow; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CustomPanel_Disband; // Offset: 0x4a0 // Size: 0x08
	struct UImage* FX_FlowLight001; // Offset: 0x4a8 // Size: 0x08
	struct UImage* FX_Light_L001; // Offset: 0x4b0 // Size: 0x08
	struct UImage* FX_Line01; // Offset: 0x4b8 // Size: 0x08
	struct UGridPanel* GridPanel_InviteTipsUI; // Offset: 0x4c0 // Size: 0x08
	struct UGridPanel* GridPanel_ParachuteFollow; // Offset: 0x4c8 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_FollowInfo; // Offset: 0x4d0 // Size: 0x08
	struct UImage* Image_AerialShowMask; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Image_TeamBG; // Offset: 0x4e0 // Size: 0x08
	struct UIngame_TeamIdx_C* Ingame_TeamIdx_2; // Offset: 0x4e8 // Size: 0x08
	struct UIngame_TeamIdx_C* Ingame_TeamIdx_3; // Offset: 0x4f0 // Size: 0x08
	struct UIngame_TeamIdx_C* Ingame_TeamIdx_4; // Offset: 0x4f8 // Size: 0x08
	struct UImage* InteractionImage; // Offset: 0x500 // Size: 0x08
	struct UCanvasPanel* NewbieGuide_ParachutingBtn; // Offset: 0x508 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* ParachutingBtnPanel; // Offset: 0x510 // Size: 0x08
	struct UGridPanel* ParachutingTips; // Offset: 0x518 // Size: 0x08
	struct UTextBlock* Text_AerialShowCountDown; // Offset: 0x520 // Size: 0x08
	struct UTextBlock* Text_Agree_TimeLeft; // Offset: 0x528 // Size: 0x08
	struct UTextBlock* Text_Refuse_TimeLeft; // Offset: 0x530 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x538 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x540 // Size: 0x08
	struct UTextBlock* TextBlock_3; // Offset: 0x548 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x550 // Size: 0x08
	struct UTextBlock* TextBlock_6; // Offset: 0x558 // Size: 0x08
	struct UTextBlock* TextBlock_7; // Offset: 0x560 // Size: 0x08
	struct UTextBlock* TextBlock_8; // Offset: 0x568 // Size: 0x08
	struct UTextBlock* TextBlock_9; // Offset: 0x570 // Size: 0x08
	struct UTextBlock* TextBlock_FollowPlayerName; // Offset: 0x578 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName; // Offset: 0x580 // Size: 0x08
	struct UTextBlock* TextBlock_RTips; // Offset: 0x588 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x590 // Size: 0x08
	struct UTextBlock* TextBlock_Tips; // Offset: 0x598 // Size: 0x08
	struct UUTRichTextBlock* TipsText; // Offset: 0x5a0 // Size: 0x08
	float CountDownTime; // Offset: 0x5a8 // Size: 0x04
	bool IsCountDown; // Offset: 0x5ac // Size: 0x01
	char pad_0x5AD[0x3]; // Offset: 0x5ad // Size: 0x03
	struct ASTExtraPlayerState* CacheLeaderPlayerState; // Offset: 0x5b0 // Size: 0x08
	enum class EParachuteInvitationType InvitationType; // Offset: 0x5b8 // Size: 0x01
	char pad_0x5B9[0x7]; // Offset: 0x5b9 // Size: 0x07
	struct FScriptMulticastDelegate UIMSG_HideFollowPanelAndBtn; // Offset: 0x5c0 // Size: 0x10

	// Functions

	// Object Name: Function ParachutingControl.ParachutingControl_C.UIMSG_HideFollowPanelAndBtn__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void UIMSG_HideFollowPanelAndBtn__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

