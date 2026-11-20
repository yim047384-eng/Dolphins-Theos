#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass FitingSlotItem_BP.FitingSlotItem_BP_C
// Size: 0x539 // Inherited bytes: 0x418
struct UFitingSlotItem_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_SlotClick; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Labels; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Mask; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Newbie; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_vx; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_Equipment; // Offset: 0x448 // Size: 0x08
	struct UImage* Image_FittingIcon; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_GuideLight; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_Labels; // Offset: 0x460 // Size: 0x08
	struct UImage* Image_lock; // Offset: 0x468 // Size: 0x08
	struct UImage* Image_Parts; // Offset: 0x470 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x478 // Size: 0x08
	struct UImage* Image_SlotHoverStatus; // Offset: 0x480 // Size: 0x08
	struct UTextBlock* TextBlock_FittingName; // Offset: 0x488 // Size: 0x08
	bool isTouchStart; // Offset: 0x490 // Size: 0x01
	enum class EBackPackDragOrigin DragOrigin; // Offset: 0x491 // Size: 0x01
	char pad_0x492[0x6]; // Offset: 0x492 // Size: 0x06
	struct FItemDefineID highlightAttachID; // Offset: 0x498 // Size: 0x18
	struct UMainWeaponInfoItem_BP_C* parentWeaponInfo; // Offset: 0x4b0 // Size: 0x08
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x4b8 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancel; // Offset: 0x4c8 // Size: 0x10
	struct UPistolInfoItem_BP_C* PistolInfo; // Offset: 0x4d8 // Size: 0x08
	StrProperty FittingName; // Offset: 0x4e0 // Size: 0x10
	IntProperty ChatText; // Offset: 0x4f0 // Size: 0x04
	IntProperty Quality; // Offset: 0x4f4 // Size: 0x04
	IntProperty LastQuality; // Offset: 0x4f8 // Size: 0x04
	enum class EBattleItemAdditionalDataType AdditionalDataType; // Offset: 0x4fc // Size: 0x01
	char pad_0x4FD[0x3]; // Offset: 0x4fd // Size: 0x03
	struct FScriptMulticastDelegate OnDragDetectedImplementation; // Offset: 0x500 // Size: 0x10
	struct UDragDropOperation* OnDragDetectedResult; // Offset: 0x510 // Size: 0x08
	struct FScriptMulticastDelegate OnTouchStartedImplementation; // Offset: 0x518 // Size: 0x10
	struct FScriptMulticastDelegate OnTouchEndedImplementation; // Offset: 0x528 // Size: 0x10
	bool bShowTeammateFlag; // Offset: 0x538 // Size: 0x01

	// Functions

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchStarted_Detect
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted_Detect(struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x130)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.CreateDragDropOpt
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UDragDropOperation* CreateDragDropOpt(struct UUserWidget* UserWidget, struct FBattleItemData BattleItemData, enum class EBackPackDragOrigin DragBegin, enum class EBattleItemAdditionalDataType AdditionalDataType); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0xd8)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.ExecuteUbergraph_FitingSlotItem_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_FitingSlotItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchEndedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchEndedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchStartedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchStartedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent PointEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragDetectedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragDetectedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragCancel__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancel__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

