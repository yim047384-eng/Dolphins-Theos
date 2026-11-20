#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C
// Size: 0x4dc // Inherited bytes: 0x418
struct UFitingSlotItem_Bullet_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* ReloadCountDown; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_SlotClick; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_FittingIcon; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_SlotHoverStatus; // Offset: 0x440 // Size: 0x08
	struct UProgressBar* ProgressBar_1; // Offset: 0x448 // Size: 0x08
	struct UImage* ReloadCDBar; // Offset: 0x450 // Size: 0x08
	struct UTextBlock* TextBlock_FittingName; // Offset: 0x458 // Size: 0x08
	struct FItemDefineID DefineID; // Offset: 0x460 // Size: 0x18
	bool isTouchStart; // Offset: 0x478 // Size: 0x01
	enum class EBackPackDragOrigin DragOrigin; // Offset: 0x479 // Size: 0x01
	char pad_0x47A[0x6]; // Offset: 0x47a // Size: 0x06
	struct FItemDefineID highlightAttachID; // Offset: 0x480 // Size: 0x18
	struct UMainWeaponInfoItem_BP_C* parentWeaponInfo; // Offset: 0x498 // Size: 0x08
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x4a0 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancel; // Offset: 0x4b0 // Size: 0x10
	struct UPistolInfoItem_BP_C* PistolInfo; // Offset: 0x4c0 // Size: 0x08
	StrProperty FittingName; // Offset: 0x4c8 // Size: 0x10
	IntProperty ChatText; // Offset: 0x4d8 // Size: 0x04

	// Functions

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.OnSetQualityImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnSetQualityImage(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.UpdataQualityImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdataQualityImage(IntProperty Quality); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.StartReloadAnim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StartReloadAnim(float ReloadTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.HandleReloadFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleReloadFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.GetGunBattleData
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetGunBattleData(struct FBattleItemData& BattleData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.HighLightSocket
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HighLightSocket(bool Highlight, struct FItemDefineID DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.UpdateSlotItem
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSlotItem(IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.ExecuteUbergraph_FitingSlotItem_Bullet_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_FitingSlotItem_Bullet_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.ItemBeDragCancel__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancel__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FitingSlotItem_Bullet_BP.FitingSlotItem_Bullet_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

