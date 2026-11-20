#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PistolInfoItem_BP.PistolInfoItem_BP_C
// Size: 0x978 // Inherited bytes: 0x418
struct UPistolInfoItem_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UHorizontalBox* BulletBox; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AirdropInfo; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Bullet; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_FobbidenReloadTips; // Offset: 0x438 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP; // Offset: 0x440 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_1; // Offset: 0x448 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_2; // Offset: 0x450 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_3; // Offset: 0x458 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_4; // Offset: 0x460 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_5; // Offset: 0x468 // Size: 0x08
	struct UFitingSlotItem_Bullet_BP_C* FitingSlotItem_Bullet_BP; // Offset: 0x470 // Size: 0x08
	struct UImage* HitRecordTag; // Offset: 0x478 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Num; // Offset: 0x480 // Size: 0x08
	struct UImage* Image_BlankMainSlot; // Offset: 0x488 // Size: 0x08
	struct UImage* Image_Equipment; // Offset: 0x490 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_QualityBG; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_SelectedStatus; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_WeaponIcon; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_WeaponNameBG; // Offset: 0x4b8 // Size: 0x08
	struct UImage* ImageDurability; // Offset: 0x4c0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x4c8 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x4d0 // Size: 0x08
	struct UTextBlock* TextBlock_BulletName; // Offset: 0x4d8 // Size: 0x08
	struct UTextBlock* TextBlock_CurrentNumberOfBullets; // Offset: 0x4e0 // Size: 0x08
	struct UTextBlock* TextBlock_ForbidReload; // Offset: 0x4e8 // Size: 0x08
	struct UTextBlock* TextBlock_MaxNumberOfBullets; // Offset: 0x4f0 // Size: 0x08
	struct UTextBlock* TextBlock_UsingTips; // Offset: 0x4f8 // Size: 0x08
	struct UTextBlock* TextBlock_WeaponName; // Offset: 0x500 // Size: 0x08
	struct UTextBlock* TextCurDurability; // Offset: 0x508 // Size: 0x08
	struct UTextBlock* TextMaxDurability; // Offset: 0x510 // Size: 0x08
	struct UHorizontalBox* WeaponDurabilityBox; // Offset: 0x518 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_BoxState; // Offset: 0x520 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_VehicleState; // Offset: 0x528 // Size: 0x08
	bool bHasTipsShow; // Offset: 0x530 // Size: 0x01
	char pad_0x531[0x7]; // Offset: 0x531 // Size: 0x07
	struct UUserWidget* ParentUserWidget; // Offset: 0x538 // Size: 0x08
	struct FItemRecordData WeaponDataRow; // Offset: 0x540 // Size: 0x100
	struct FSlateBrush SmallIconBrush; // Offset: 0x640 // Size: 0xb8
	bool bHasStartedTouchIn; // Offset: 0x6f8 // Size: 0x01
	char pad_0x6F9[0x7]; // Offset: 0x6f9 // Size: 0x07
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x700 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancelled; // Offset: 0x710 // Size: 0x10
	struct FBattleItemData BattleData; // Offset: 0x720 // Size: 0xc0
	struct TArray<struct UFitingSlotItem_BP_C*> SlotItemArray; // Offset: 0x7e0 // Size: 0x10
	struct TArray<IntProperty> AttachNameArray; // Offset: 0x7f0 // Size: 0x10
	MapProperty Slot2Index; // Offset: 0x800 // Size: 0x50
	enum class ESurviveWeaponPropSlot WeaponSlot; // Offset: 0x850 // Size: 0x01
	enum class ESurviveWeaponPropSlot WeaponPropSlot; // Offset: 0x851 // Size: 0x01
	char pad_0x852[0x6]; // Offset: 0x852 // Size: 0x06
	struct FScriptMulticastDelegate ItemBeClicked; // Offset: 0x858 // Size: 0x10
	struct TArray<IntProperty> slotChatText; // Offset: 0x868 // Size: 0x10
	enum class EBackPackDragOrigin DragOrigin; // Offset: 0x878 // Size: 0x01
	char pad_0x879[0x3]; // Offset: 0x879 // Size: 0x03
	IntProperty TypeSpecificIDTemp; // Offset: 0x87c // Size: 0x04
	IntProperty ItemId; // Offset: 0x880 // Size: 0x04
	bool bShowDefaultAttachment; // Offset: 0x884 // Size: 0x01
	char pad_0x885[0x3]; // Offset: 0x885 // Size: 0x03
	struct FScriptMulticastDelegate OnTouchStartedImplementation; // Offset: 0x888 // Size: 0x10
	struct FEventReply EventReplay; // Offset: 0x898 // Size: 0xb8
	struct UDragDropOperation* OnDragDetectedResult; // Offset: 0x950 // Size: 0x08
	struct FScriptMulticastDelegate OnTouchEndedImplementation; // Offset: 0x958 // Size: 0x10
	struct FScriptMulticastDelegate OnDragDetectedImplementation; // Offset: 0x968 // Size: 0x10

	// Functions

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchStarted_Detect
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted_Detect(struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x130)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.CreateDragDropOpt
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UDragDropOperation* CreateDragDropOpt(struct UUserWidget* UserWidget, struct FBattleItemData BattleItemData, enum class EBackPackDragOrigin DragOrigin, enum class EBattleItemAdditionalDataType AdditionalDataType); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0xd8)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.BackpackOpenNotify
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BackpackOpenNotify(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.HandleReloadFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleReloadFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.StartReloadBullet
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StartReloadBullet(float ReloadTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateWeaponBulletDegreeSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponBulletDegreeSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateBulletSlotVisibility
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBulletSlotVisibility(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.InitBulletDegreeSlot
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitBulletDegreeSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.HideReloadTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideReloadTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.ForbidReloadTips
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ForbidReloadTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.FittingItemBeDragCancel
	// Flags: [BlueprintCallable|BlueprintEvent]
	void FittingItemBeDragCancel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.FittingItemBeDragBegin
	// Flags: [BlueprintCallable|BlueprintEvent]
	void FittingItemBeDragBegin(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.ExecuteUbergraph_PistolInfoItem_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PistolInfoItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragDetectedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragDetectedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchEndedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchEndedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchStartedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchStartedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.ItemBeClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeClicked__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancelled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolInfoItem_BP.PistolInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrgin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

