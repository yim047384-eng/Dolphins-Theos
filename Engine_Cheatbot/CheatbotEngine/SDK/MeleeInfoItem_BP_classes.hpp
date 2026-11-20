#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MeleeInfoItem_BP.MeleeInfoItem_BP_C
// Size: 0x710 // Inherited bytes: 0x418
struct UMeleeInfoItem_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UImage* default_Image_icon; // Offset: 0x420 // Size: 0x08
	struct UImage* Image_BlankMeleeSlot; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_MeleeIcon; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_QualityBG; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_SelectedStatus; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_MeleeName; // Offset: 0x450 // Size: 0x08
	struct UUserWidget* ParentUserWidget; // Offset: 0x458 // Size: 0x08
	bool bHasTipsShow; // Offset: 0x460 // Size: 0x01
	char pad_0x461[0x7]; // Offset: 0x461 // Size: 0x07
	struct FItemRecordData WeaponDataRow; // Offset: 0x468 // Size: 0x100
	struct FSlateBrush SmallIconBrush; // Offset: 0x568 // Size: 0xb8
	bool bHasStartedTouchIn; // Offset: 0x620 // Size: 0x01
	char pad_0x621[0x7]; // Offset: 0x621 // Size: 0x07
	struct FBattleItemData BattleData; // Offset: 0x628 // Size: 0xc0
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x6e8 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancelled; // Offset: 0x6f8 // Size: 0x10
	IntProperty TypeSpecificIDTemp; // Offset: 0x708 // Size: 0x04
	IntProperty ItemId; // Offset: 0x70c // Size: 0x04

	// Functions

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.UpdateQuality
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateQuality(IntProperty Quality); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnSmallItemLoaded
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnSmallItemLoaded(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnBigItemLoaded
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnBigItemLoaded(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.UpdateSmallItemIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSmallItemIcon(StrProperty Path); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.UpdateBigItemIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBigItemIcon(StrProperty Path); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.HighLightBG
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HighLightBG(bool IsHighLight); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.UpdateWeaponAppearanceInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponAppearanceInfo(IntProperty TypeSpecificID, struct FBattleItemData ItemData); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc8)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.ExecuteUbergraph_MeleeInfoItem_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_MeleeInfoItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancelled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MeleeInfoItem_BP.MeleeInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrgin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

