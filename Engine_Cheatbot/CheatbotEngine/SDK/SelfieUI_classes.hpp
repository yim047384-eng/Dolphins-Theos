#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SelfieUI.SelfieUI_C
// Size: 0x5fd // Inherited bytes: 0x488
struct USelfieUI_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UBorder* BExpression_close; // Offset: 0x490 // Size: 0x08
	struct UBorder* BExpression_Normal; // Offset: 0x498 // Size: 0x08
	struct UBorder* Border_Emoji; // Offset: 0x4a0 // Size: 0x08
	struct UBorder* Border_Zoom; // Offset: 0x4a8 // Size: 0x08
	struct UButton* Button_4; // Offset: 0x4b0 // Size: 0x08
	struct UButton* Button_5; // Offset: 0x4b8 // Size: 0x08
	struct UButton* Button_Capture; // Offset: 0x4c0 // Size: 0x08
	struct UButton* Button_Hide; // Offset: 0x4c8 // Size: 0x08
	struct UButton* Button_Normal_EX; // Offset: 0x4d0 // Size: 0x08
	struct UButton* Button_Setting; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_45; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AutoJoinPanel; // Offset: 0x4f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Emoji; // Offset: 0x4f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_FreeCamera; // Offset: 0x500 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Main; // Offset: 0x508 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Setting; // Offset: 0x510 // Size: 0x08
	struct UCheckBox* CheckBox_Others; // Offset: 0x518 // Size: 0x08
	struct UCheckBox* CheckBox_PLayerName; // Offset: 0x520 // Size: 0x08
	struct UCheckBox* CheckBox_Teammate; // Offset: 0x528 // Size: 0x08
	struct UButton* EXButton_close; // Offset: 0x530 // Size: 0x08
	struct UGridPanel* GridPanel_Setting; // Offset: 0x538 // Size: 0x08
	struct UImage* Image_280; // Offset: 0x540 // Size: 0x08
	struct UImage* Image_364; // Offset: 0x548 // Size: 0x08
	struct UImage* Image_398; // Offset: 0x550 // Size: 0x08
	struct UImage* Image_408; // Offset: 0x558 // Size: 0x08
	struct UImage* Image_409; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_410; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_411; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_412; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_413; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_414; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_close; // Offset: 0x590 // Size: 0x08
	struct UImage* Image_Line; // Offset: 0x598 // Size: 0x08
	struct UImage* Line; // Offset: 0x5a0 // Size: 0x08
	struct UFreeCameraBtn_C* NewFreeCameraBtn; // Offset: 0x5a8 // Size: 0x08
	struct USlider* Slider_X8Zoom; // Offset: 0x5b0 // Size: 0x08
	struct UWidgetSwitcher* Switcher_Expression; // Offset: 0x5b8 // Size: 0x08
	struct UTextBlock* TextGameStartCountDown; // Offset: 0x5c0 // Size: 0x08
	struct UTextBlock* TextScale; // Offset: 0x5c8 // Size: 0x08
	struct USelfieUI_C* SelfieUI; // Offset: 0x5d0 // Size: 0x08
	bool TickSwitch ; // Offset: 0x5d8 // Size: 0x01
	char pad_0x5D9[0x7]; // Offset: 0x5d9 // Size: 0x07
	StrProperty CapturePath; // Offset: 0x5e0 // Size: 0x10
	struct UQuickExpressionUIBP_C* QuickExpressionUIBPDynamic; // Offset: 0x5f0 // Size: 0x08
	float ZoomMax; // Offset: 0x5f8 // Size: 0x04
	bool bIsInBattle; // Offset: 0x5fc // Size: 0x01

	// Functions

	// Object Name: Function SelfieUI.SelfieUI_C.DestroyExpressionRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DestroyExpressionRing(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.HideExpressionRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideExpressionRing(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.ShowExpressionRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowExpressionRing(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.DynamicallyCreateQuickExpressionUI
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void DynamicallyCreateQuickExpressionUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.ShowOrHideQuickExpressionRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowOrHideQuickExpressionRing(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SelfieUI.SelfieUI_C.UIMsg_InitFiremanUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_InitFiremanUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.SetAvatarMeshVisible
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetAvatarMeshVisible(struct ABP_PlayerPawn_C* PlayerPawn, bool bNewVisibility); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SelfieUI.SelfieUI_C.UIShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.ExitSelfie
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ExitSelfie(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__Button_Hide_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Hide_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__Button_Capture_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Capture_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__CheckBox_Teammate_K2Node_ComponentBoundEvent_135_OnCheckBoxComponentStateChanged__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__CheckBox_Teammate_K2Node_ComponentBoundEvent_135_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__CheckBox_Others_K2Node_ComponentBoundEvent_140_OnCheckBoxComponentStateChanged__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__CheckBox_Others_K2Node_ComponentBoundEvent_140_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__CheckBox_PLayerName_K2Node_ComponentBoundEvent_146_OnCheckBoxComponentStateChanged__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__CheckBox_PLayerName_K2Node_ComponentBoundEvent_146_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SelfieUI.SelfieUI_C.GameStartCountDown
	// Flags: [BlueprintCallable|BlueprintEvent]
	void GameStartCountDown(float CountDownTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SelfieUI.SelfieUI_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__Button_Normal_EX_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Normal_EX_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.BndEvt__EXButton_close_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__EXButton_close_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.UIMsg_HideSelfieUI
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UIMsg_HideSelfieUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.UIMsg_SelfieShowTips
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UIMsg_SelfieShowTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SelfieUI.SelfieUI_C.ExecuteUbergraph_SelfieUI
	// Flags: [HasDefaults]
	void ExecuteUbergraph_SelfieUI(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

