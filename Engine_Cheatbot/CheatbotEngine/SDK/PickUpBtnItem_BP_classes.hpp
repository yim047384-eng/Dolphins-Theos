#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PickUpBtnItem_BP.PickUpBtnItem_BP_C
// Size: 0x454 // Inherited bytes: 0x418
struct UPickUpBtnItem_BP_C : UUAEUserWidget {
	// Fields
	struct UCanvasPanel* CanvasPanel_PickUpBtnItemGuide; // Offset: 0x418 // Size: 0x08
	struct UImage* Image_ItemIcon; // Offset: 0x420 // Size: 0x08
	struct UImage* Image_SelectedItemStatus; // Offset: 0x428 // Size: 0x08
	struct UTextBlock* TextBlock_ItemNum; // Offset: 0x430 // Size: 0x08
	bool bTouchStart; // Offset: 0x438 // Size: 0x01
	char pad_0x439[0x7]; // Offset: 0x439 // Size: 0x07
	struct FScriptMulticastDelegate ClickBoxTab; // Offset: 0x440 // Size: 0x10
	IntProperty TabIndex; // Offset: 0x450 // Size: 0x04

	// Functions

	// Object Name: Function PickUpBtnItem_BP.PickUpBtnItem_BP_C.OpenDeathBox
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OpenDeathBox(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpBtnItem_BP.PickUpBtnItem_BP_C.OnShowItems
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnShowItems(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpBtnItem_BP.PickUpBtnItem_BP_C.UpdateImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateImage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpBtnItem_BP.PickUpBtnItem_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpBtnItem_BP.PickUpBtnItem_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpBtnItem_BP.PickUpBtnItem_BP_C.ClickBoxTab__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickBoxTab__DelegateSignature(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

