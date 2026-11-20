#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass CircleChasingProgress.CircleChasingProgress_C
// Size: 0x9da // Inherited bytes: 0x4b8
struct UCircleChasingProgress_C : UChasingBar {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b8 // Size: 0x08
	struct UWidgetAnimation* anim_red; // Offset: 0x4c0 // Size: 0x08
	struct UWidgetAnimation* anim_white; // Offset: 0x4c8 // Size: 0x08
	struct UWidgetAnimation* BlueCircleRunning; // Offset: 0x4d0 // Size: 0x08
	struct UWidgetAnimation* CleaningProgressBar; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Weather; // Offset: 0x4e8 // Size: 0x08
	struct UImage* CautionIcon; // Offset: 0x4f0 // Size: 0x08
	struct UTextBlock* CountDownText; // Offset: 0x4f8 // Size: 0x08
	struct UGridPanel* GridPanel_Red; // Offset: 0x500 // Size: 0x08
	struct UGridPanel* GridPanel_White; // Offset: 0x508 // Size: 0x08
	struct UGuideCanvasPanel_C* GuideCanvasPanel_SafeAreaCountDown; // Offset: 0x510 // Size: 0x08
	struct UGuideCanvasPanel_C* GuideCanvasPanel_SafeAreaDistance; // Offset: 0x518 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x520 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x528 // Size: 0x08
	struct UImage* Image_Background; // Offset: 0x530 // Size: 0x08
	struct UProgressBar* ProgressBar_BlueBar; // Offset: 0x538 // Size: 0x08
	struct USTInvalidationBox* STInvalidationBox_1; // Offset: 0x540 // Size: 0x08
	struct UProgressBar* WhiteProgressBar; // Offset: 0x548 // Size: 0x08
	struct ASTExtraGameStateBase* STExtraGamestate; // Offset: 0x550 // Size: 0x08
	struct APawn* PlayerPawn; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanelSlot* EscapeMarkerCanvasPanelSlot; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanelSlot* ProgressBarCanvasPanelSlot; // Offset: 0x568 // Size: 0x08
	float CautionFlashing; // Offset: 0x570 // Size: 0x04
	float DeltaTime; // Offset: 0x574 // Size: 0x04
	struct FSlateBrush Taopao_zhongdu_R; // Offset: 0x578 // Size: 0xb8
	struct FSlateBrush Taopao_zhongdu_W; // Offset: 0x630 // Size: 0xb8
	struct FSlateBrush Taopao_zhongduTips_R; // Offset: 0x6e8 // Size: 0xb8
	struct FSlateBrush Taopao_zhongduTips_W; // Offset: 0x7a0 // Size: 0xb8
	StrProperty DebugTimeString; // Offset: 0x858 // Size: 0x10
	struct FSlateBrush BlueCircleRun_Tips_BackGround; // Offset: 0x868 // Size: 0xb8
	struct FSlateBrush WhiteCircleRun_Tips_BackGround; // Offset: 0x920 // Size: 0xb8
	bool bCanPlayWhiteCircleTips; // Offset: 0x9d8 // Size: 0x01
	bool bHasPlayTipsAnimation; // Offset: 0x9d9 // Size: 0x01

	// Functions

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.CanPlayEnterExitSound
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanPlayEnterExitSound(bool IsEnter, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.HandleTipsImageShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleTipsImageShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.HandleTipsImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleTipsImage(bool bIsBlueCircleRun); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.UIMsg_DynamicTempleCreate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_DynamicTempleCreate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.UIMsg_DynamicWeatherCreate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_DynamicWeatherCreate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.RecoverBlueCircleRunProgress
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RecoverBlueCircleRunProgress(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.GetLocalTimeOfCircleStatusStart
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetLocalTimeOfCircleStatusStart(float CircleStatusStartServerWorldSeconds, float& LocalStartTimeSecond); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.ShowCircleDistance
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowCircleDistance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.HandleReconnectInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleReconnectInfo(struct FReConnectCircleInfo Info); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x44)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.FlashCautionIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void FlashCautionIcon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.GetPlayerPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerPawn(struct APawn*& PlayerPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.PlayerEscapePercent
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PlayerEscapePercent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.OnWhiteCircleAppear
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnWhiteCircleAppear(float SafeZoneTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.OnBlueCircleRun
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnBlueCircleRun(float BlueCircleRunTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.OnCountDownTextInvisible
	// Flags: [Event|Public|BlueprintEvent]
	void OnCountDownTextInvisible(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.OnPlayerEnterExitBlueCircle
	// Flags: [Event|Public|BlueprintEvent]
	void OnPlayerEnterExitBlueCircle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.CleanTheProgressBar
	// Flags: [Event|Public|BlueprintEvent]
	void CleanTheProgressBar(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.UpdateCountDownText
	// Flags: [Event|Public|BlueprintEvent]
	void UpdateCountDownText(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.PreWarning
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PreWarning(float BlueCirclePreWarningTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.DelayReconverBlueProgressAgain
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayReconverBlueProgressAgain(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.DemoReplay_ReInit
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DemoReplay_ReInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.ReConnectCirclenfoNotify
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void ReConnectCirclenfoNotify(struct FReConnectCircleInfo& ReConnectCircleInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x44)

	// Object Name: Function CircleChasingProgress.CircleChasingProgress_C.ExecuteUbergraph_CircleChasingProgress
	// Flags: [HasDefaults]
	void ExecuteUbergraph_CircleChasingProgress(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

