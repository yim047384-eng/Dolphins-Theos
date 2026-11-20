#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C
// Size: 0x4b1 // Inherited bytes: 0x418
struct UChangeSight_Item01_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_attach; // Offset: 0x420 // Size: 0x08
	struct UImage* Image_huangkuang; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_No; // Offset: 0x430 // Size: 0x08
	struct UImage* ImageIcon; // Offset: 0x438 // Size: 0x08
	struct UTextBlock* Name; // Offset: 0x440 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Select; // Offset: 0x448 // Size: 0x08
	struct FItemDefineID ItemDefineID; // Offset: 0x450 // Size: 0x18
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x468 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDrapCancelled; // Offset: 0x478 // Size: 0x10
	struct FScriptMulticastDelegate ChangeSightOK; // Offset: 0x488 // Size: 0x10
	bool forbitUse; // Offset: 0x498 // Size: 0x01
	char pad_0x499[0x7]; // Offset: 0x499 // Size: 0x07
	struct FScriptMulticastDelegate DisuseCurringSight; // Offset: 0x4a0 // Size: 0x10
	bool bMainHandUsed; // Offset: 0x4b0 // Size: 0x01

	// Functions

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.RefreshIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshIcon(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.SetSightItem
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetSightItem(bool used, bool mainHand, struct FItemDefineID DefineID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.ExecuteUbergraph_ChangeSight_Item01_UIBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_ChangeSight_Item01_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.DisuseCurringSight__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void DisuseCurringSight__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.ChangeSightOK__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ChangeSightOK__DelegateSignature(struct FItemDefineID Item); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.ItemBeDrapCancelled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDrapCancelled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChangeSight_Item01_UIBP.ChangeSight_Item01_UIBP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FItemDefineID DefineID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)
};

