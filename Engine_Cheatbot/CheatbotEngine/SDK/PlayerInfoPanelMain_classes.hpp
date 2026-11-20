#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PlayerInfoPanelMain.PlayerInfoPanelMain_C
// Size: 0x64c // Inherited bytes: 0x418
struct UPlayerInfoPanelMain_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Health_Display; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* HealthFull; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* LessBlood_Anim; // Offset: 0x430 // Size: 0x08
	struct UWidgetAnimation* EnergyChangeAnim; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BloodGuide; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BloodGuideInner; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_EmicBackpack; // Offset: 0x450 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_NormalEnergy; // Offset: 0x458 // Size: 0x08
	struct UGridPanel* GridPanel_Self; // Offset: 0x460 // Size: 0x08
	struct UGridPanel* GridPanel_Self_Living; // Offset: 0x468 // Size: 0x08
	struct UGridPanel* GridPanel_Thermometer; // Offset: 0x470 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_2; // Offset: 0x478 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_3; // Offset: 0x480 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_4; // Offset: 0x488 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Exp; // Offset: 0x490 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_HPBar; // Offset: 0x498 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_PoisonFog; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_FX; // Offset: 0x4a8 // Size: 0x08
	struct UImage* image_FX01; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_HpBG; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_LowHPWaringBG; // Offset: 0x4c0 // Size: 0x08
	struct UImage* Image_NewSelfHP_Status; // Offset: 0x4c8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x4d0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_2; // Offset: 0x4d8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_3; // Offset: 0x4e0 // Size: 0x08
	struct UProgressBar* ProgressBar_1; // Offset: 0x4e8 // Size: 0x08
	struct UProgressBar* ProgressBar_2; // Offset: 0x4f0 // Size: 0x08
	struct UProgressBar* ProgressBar_3; // Offset: 0x4f8 // Size: 0x08
	struct UProgressBar* ProgressBar_4; // Offset: 0x500 // Size: 0x08
	struct UProgressBar* ProgressBar_Addition; // Offset: 0x508 // Size: 0x08
	struct UProgressBar* ProgressBar_Exp; // Offset: 0x510 // Size: 0x08
	struct UProgressBar* ProgressBar_LessBloodVFX; // Offset: 0x518 // Size: 0x08
	struct UProgressBar* ProgressBar_PoisonFog; // Offset: 0x520 // Size: 0x08
	struct UProgressBar* ProgressBar_Power1; // Offset: 0x528 // Size: 0x08
	struct UProgressBar* ProgressBar_Power2; // Offset: 0x530 // Size: 0x08
	struct UProgressBar* ProgressBar_Power3; // Offset: 0x538 // Size: 0x08
	struct UProgressBar* ProgressBar_Power4; // Offset: 0x540 // Size: 0x08
	struct UProgressBar* Self_HPEffectBar; // Offset: 0x548 // Size: 0x08
	struct UTextBlock* Self_Name; // Offset: 0x550 // Size: 0x08
	struct USizeBox* SizeBox_7; // Offset: 0x558 // Size: 0x08
	struct UVerticalBox* VerticalBox_LifeInfo; // Offset: 0x560 // Size: 0x08
	struct UVerticalBox* VerticalBox_PlayerEnergy; // Offset: 0x568 // Size: 0x08
	struct UVerticalBox* VerticalBox_Status; // Offset: 0x570 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_SelfStatus; // Offset: 0x578 // Size: 0x08
	StrProperty Player1NameValue; // Offset: 0x580 // Size: 0x10
	float CurEnergy; // Offset: 0x590 // Size: 0x04
	float RecoverStartHealth; // Offset: 0x594 // Size: 0x04
	IntProperty RecoverCount; // Offset: 0x598 // Size: 0x04
	float PredictStepValue; // Offset: 0x59c // Size: 0x04
	float PrePredictValue; // Offset: 0x5a0 // Size: 0x04
	float TotalAddToHealth; // Offset: 0x5a4 // Size: 0x04
	float WaitAddPredictTime; // Offset: 0x5a8 // Size: 0x04
	bool NeedPredictWaitForHide; // Offset: 0x5ac // Size: 0x01
	bool IsMultAddHealth; // Offset: 0x5ad // Size: 0x01
	char pad_0x5AE[0x2]; // Offset: 0x5ae // Size: 0x02
	float PredictHideBaseHealth; // Offset: 0x5b0 // Size: 0x04
	float LastTimeRatioHealth; // Offset: 0x5b4 // Size: 0x04
	bool bAntidoteReducible; // Offset: 0x5b8 // Size: 0x01
	char pad_0x5B9[0x3]; // Offset: 0x5b9 // Size: 0x03
	float antidoteExeTime; // Offset: 0x5bc // Size: 0x04
	float antidoteMaxTime; // Offset: 0x5c0 // Size: 0x04
	char pad_0x5C4[0x4]; // Offset: 0x5c4 // Size: 0x04
	struct FScriptMulticastDelegate ED_BuffDisplayListBtnClick; // Offset: 0x5c8 // Size: 0x10
	struct FScriptMulticastDelegate ED_BroadcastShowHelpIcon; // Offset: 0x5d8 // Size: 0x10
	struct FScriptMulticastDelegate ED_BroadcastHideHelpIcon; // Offset: 0x5e8 // Size: 0x10
	struct FScriptMulticastDelegate ED_BroadcastShowPowerIcon; // Offset: 0x5f8 // Size: 0x10
	struct FScriptMulticastDelegate ED_BroadcastHidePowerIcon; // Offset: 0x608 // Size: 0x10
	struct TArray<struct FLinearColor> NewHpBarColor_Value; // Offset: 0x618 // Size: 0x10
	bool bShowEnergyAddition; // Offset: 0x628 // Size: 0x01
	bool bAnimationIsPlaying; // Offset: 0x629 // Size: 0x01
	char pad_0x62A[0x6]; // Offset: 0x62a // Size: 0x06
	struct TArray<float> HealthHistory; // Offset: 0x630 // Size: 0x10
	bool bNeedUpdateHealth; // Offset: 0x640 // Size: 0x01
	char pad_0x641[0x3]; // Offset: 0x641 // Size: 0x03
	float LastHpTimeSecond; // Offset: 0x644 // Size: 0x04
	float TotalPieceTime; // Offset: 0x648 // Size: 0x04

	// Functions

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ExecuteUbergraph_PlayerInfoPanelMain
	// Flags: [None]
	void ExecuteUbergraph_PlayerInfoPanelMain(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ED_BroadcastHidePowerIcon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_BroadcastHidePowerIcon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ED_BroadcastShowPowerIcon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_BroadcastShowPowerIcon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ED_BroadcastHideHelpIcon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_BroadcastHideHelpIcon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ED_BroadcastShowHelpIcon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_BroadcastShowHelpIcon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerInfoPanelMain.PlayerInfoPanelMain_C.ED_BuffDisplayListBtnClick__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_BuffDisplayListBtnClick__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

