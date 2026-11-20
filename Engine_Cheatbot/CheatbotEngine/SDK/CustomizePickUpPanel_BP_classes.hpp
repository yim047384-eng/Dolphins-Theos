#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C
// Size: 0x4e9 // Inherited bytes: 0x418
struct UCustomizePickUpPanel_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UBTReuseList_C* BTReuseList; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_AKeyPickUp; // Offset: 0x428 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* Canvas_PickUp; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Btn_Prompt; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_GuideArea; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PickArea; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* DeadBoxBtnExistControl; // Offset: 0x450 // Size: 0x08
	struct UGridPanel* GridPanel_7; // Offset: 0x458 // Size: 0x08
	struct UGridPanel* GridPanel_PickUpList; // Offset: 0x460 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_1; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* PickUpBtnExistControl; // Offset: 0x470 // Size: 0x08
	struct UCustomScrollBox* ScrollBoxNoUse; // Offset: 0x478 // Size: 0x08
	struct UCustomScrollBox* ScrollPickUpList; // Offset: 0x480 // Size: 0x08
	struct UShortcutMenu_BP_C* ShortcutMenu_BP; // Offset: 0x488 // Size: 0x08
	struct USizeBox* SizeBox_PanelList; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* Tips14; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* Tips14_2; // Offset: 0x4a0 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Tips14; // Offset: 0x4a8 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Tips14_2; // Offset: 0x4b0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x4b8 // Size: 0x08
	struct UWrapBox* WrapBoxPickUpList; // Offset: 0x4c0 // Size: 0x08
	struct FScriptMulticastDelegate CloseCustomPickUpPanel; // Offset: 0x4c8 // Size: 0x10
	struct FScriptMulticastDelegate CloseCustomBoxPanel; // Offset: 0x4d8 // Size: 0x10
	bool bMoveOut; // Offset: 0x4e8 // Size: 0x01

	// Functions

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.PickUpListTipsExistVisibilistyControl
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PickUpListTipsExistVisibilistyControl(bool IsExist); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.IsPlayerCanSeeWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsPlayerCanSeeWidget(struct UWidget* NewParam, bool& NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.HideExpandDeadBoxTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideExpandDeadBoxTips(bool IsShow, struct FBP_STRUCT_GuideText_type NewParam); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.HideExpandPickUpTips
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void HideExpandPickUpTips(bool IsShow, struct FBP_STRUCT_GuideText_type NewParam); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.EventCloseCustomPickupPanel
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventCloseCustomPickupPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.EventCloseCustomBoxPanel
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventCloseCustomBoxPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.ExecuteUbergraph_CustomizePickUpPanel_BP
	// Flags: [None]
	void ExecuteUbergraph_CustomizePickUpPanel_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.CloseCustomBoxPanel__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void CloseCustomBoxPanel__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.CloseCustomPickUpPanel__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void CloseCustomPickUpPanel__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

