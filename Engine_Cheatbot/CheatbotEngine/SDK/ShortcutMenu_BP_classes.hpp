#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ShortcutMenu_BP.ShortcutMenu_BP_C
// Size: 0x4b8 // Inherited bytes: 0x418
struct UShortcutMenu_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UImage* but_boxClose; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_NormalStuff; // Offset: 0x428 // Size: 0x08
	struct UGridPanel* GridPanel_BackPackMenu; // Offset: 0x430 // Size: 0x08
	struct UImage* HandClose; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_OpenBlank; // Offset: 0x440 // Size: 0x08
	struct UImage* NormalStuffIcon; // Offset: 0x448 // Size: 0x08
	struct UPickUpBtnItem_BP_C* PickUpBtnItem_BP; // Offset: 0x450 // Size: 0x08
	struct UGridPanel* PickupGridPanel; // Offset: 0x458 // Size: 0x08
	struct USizeBox* SizeBox_List; // Offset: 0x460 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x468 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x470 // Size: 0x08
	struct FScriptMulticastDelegate ClickNormal; // Offset: 0x478 // Size: 0x10
	struct FScriptMulticastDelegate ClickClosePickup; // Offset: 0x488 // Size: 0x10
	struct FScriptMulticastDelegate ClickCloseBox; // Offset: 0x498 // Size: 0x10
	struct TArray<struct FSlateBrush> HandIconBrushes; // Offset: 0x4a8 // Size: 0x10

	// Functions

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.CloseDeathBox
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CloseDeathBox(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClosePickList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClosePickList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.OpenPickList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OpenPickList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.SetNormalStuffIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetNormalStuffIcon(bool IsContainsUseful); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.On_HandClose_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_HandClose_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.On_but_boxClose_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_but_boxClose_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.BndEvt__Button_NormalStuff_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_NormalStuff_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.ExecuteUbergraph_ShortcutMenu_BP
	// Flags: [None]
	void ExecuteUbergraph_ShortcutMenu_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickCloseBox__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickCloseBox__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickClosePickup__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickClosePickup__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickNormal__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickNormal__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

