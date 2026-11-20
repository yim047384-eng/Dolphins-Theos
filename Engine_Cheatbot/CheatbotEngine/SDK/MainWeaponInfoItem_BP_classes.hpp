#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C
// Size: 0x990 // Inherited bytes: 0x418
struct UMainWeaponInfoItem_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Anim_Final; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* Anim_Seletion; // Offset: 0x428 // Size: 0x08
	struct UButton* Btn_3; // Offset: 0x430 // Size: 0x08
	struct UHorizontalBox* BulletBox; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x440 // Size: 0x08
	struct UButton* Button_2; // Offset: 0x448 // Size: 0x08
	struct UButton* Button_Detail; // Offset: 0x450 // Size: 0x08
	struct UButton* Button_UpgradeInfo; // Offset: 0x458 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_4; // Offset: 0x470 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Detail; // Offset: 0x478 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DetailGuide; // Offset: 0x480 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_FobbidenReloadTips; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_KillCounter; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ModTitle; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Shengji; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Title; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Upgrade; // Offset: 0x4b0 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP; // Offset: 0x4b8 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_1; // Offset: 0x4c0 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_2; // Offset: 0x4c8 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_3; // Offset: 0x4d0 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_4; // Offset: 0x4d8 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_5; // Offset: 0x4e0 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_6; // Offset: 0x4e8 // Size: 0x08
	struct UFitingSlotItem_BP_C* FitingSlotItem_BP_C_7; // Offset: 0x4f0 // Size: 0x08
	struct UFitingSlotItem_Bullet_BP_C* FitingSlotItem_Bullet_BP; // Offset: 0x4f8 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_UsingTips; // Offset: 0x500 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x508 // Size: 0x08
	struct UImage* Image_7; // Offset: 0x510 // Size: 0x08
	struct UImage* Image_Affix_PVE; // Offset: 0x518 // Size: 0x08
	struct UImage* Image_BlankMainSlot; // Offset: 0x520 // Size: 0x08
	struct UImage* Image_Detail; // Offset: 0x528 // Size: 0x08
	struct UImage* Image_Equipment; // Offset: 0x530 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x538 // Size: 0x08
	struct UImage* Image_QualityBG; // Offset: 0x540 // Size: 0x08
	struct UImage* Image_SelectedStatus; // Offset: 0x548 // Size: 0x08
	struct UImage* Image_SpecialIcon; // Offset: 0x550 // Size: 0x08
	struct UImage* Image_SpecialIconBG; // Offset: 0x558 // Size: 0x08
	struct UImage* Image_SpecialIconEX; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_UpgradeIcon; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_WeaponIcon; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_WeaponNameBG; // Offset: 0x578 // Size: 0x08
	struct UImage* ImageDurability; // Offset: 0x580 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x588 // Size: 0x08
	struct UProgressBar* ProgressBar_Mask; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* status_off; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* status_on; // Offset: 0x5a0 // Size: 0x08
	struct UUTRichTextBlock* Text_Undownload; // Offset: 0x5a8 // Size: 0x08
	struct UTextBlock* TextBlock_5; // Offset: 0x5b0 // Size: 0x08
	struct UTextBlock* TextBlock_BulletName; // Offset: 0x5b8 // Size: 0x08
	struct UTextBlock* TextBlock_CurrentNumberOfBullets; // Offset: 0x5c0 // Size: 0x08
	struct UTextBlock* TextBlock_MaxNumberOfBullets; // Offset: 0x5c8 // Size: 0x08
	struct UTextBlock* TextBlock_Time; // Offset: 0x5d0 // Size: 0x08
	struct UTextBlock* TextBlock_UsingTips; // Offset: 0x5d8 // Size: 0x08
	struct UTextBlock* TextBlock_WeaponGroupID; // Offset: 0x5e0 // Size: 0x08
	struct UTextBlock* TextBlock_WeaponName; // Offset: 0x5e8 // Size: 0x08
	struct UTextBlock* TextCurDurability; // Offset: 0x5f0 // Size: 0x08
	struct UTextBlock* TextMaxDurability; // Offset: 0x5f8 // Size: 0x08
	struct UUniformGridPanel* UniformGridPanel_Slot; // Offset: 0x600 // Size: 0x08
	struct UVerticalBox* Vertical_WeaponFeature; // Offset: 0x608 // Size: 0x08
	struct UImage* vx_Image_UpgradeIcon_Glow; // Offset: 0x610 // Size: 0x08
	struct UHorizontalBox* WeaponDurabilityBox; // Offset: 0x618 // Size: 0x08
	struct UCharacteristic_Item_BP_C* WeaponFeatureDescItem1; // Offset: 0x620 // Size: 0x08
	struct UCharacteristic_Item_BP_C* WeaponFeatureDescItem2; // Offset: 0x628 // Size: 0x08
	struct UCharacteristic_Item_BP_C* WeaponFeatureDescItem3; // Offset: 0x630 // Size: 0x08
	struct UCharacteristic_Item_BP_C* WeaponFeatureDescItem4; // Offset: 0x638 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x640 // Size: 0x08
	struct FItemRecordData WeaponDataRow; // Offset: 0x648 // Size: 0x100
	struct UUserWidget* ParentUserWidget; // Offset: 0x748 // Size: 0x08
	bool bHasTipsShow; // Offset: 0x750 // Size: 0x01
	char pad_0x751[0x7]; // Offset: 0x751 // Size: 0x07
	struct FSlateBrush SmallIconBrush; // Offset: 0x758 // Size: 0xb8
	bool bHasStartedTouchIn; // Offset: 0x810 // Size: 0x01
	char pad_0x811[0x7]; // Offset: 0x811 // Size: 0x07
	struct FBattleItemData BattleData; // Offset: 0x818 // Size: 0xc0
	struct TArray<struct UFitingSlotItem_BP_C*> SlotItemArray; // Offset: 0x8d8 // Size: 0x10
	enum class EBackPackDragOrigin DragOrigin; // Offset: 0x8e8 // Size: 0x01
	enum class ESurviveWeaponPropSlot WeaponSlot; // Offset: 0x8e9 // Size: 0x01
	char pad_0x8EA[0x6]; // Offset: 0x8ea // Size: 0x06
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x8f0 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancelled; // Offset: 0x900 // Size: 0x10
	struct TArray<IntProperty> slotChatText; // Offset: 0x910 // Size: 0x10
	struct TArray<IntProperty> slotNameList; // Offset: 0x920 // Size: 0x10
	enum class ESurviveWeaponPropSlot WeaponPropSlot; // Offset: 0x930 // Size: 0x01
	char pad_0x931[0x3]; // Offset: 0x931 // Size: 0x03
	IntProperty Quality; // Offset: 0x934 // Size: 0x04
	struct FScriptMulticastDelegate ItemBeClicked; // Offset: 0x938 // Size: 0x10
	IntProperty WeaponId; // Offset: 0x948 // Size: 0x04
	IntProperty TypeSpecificIDTemp; // Offset: 0x94c // Size: 0x04
	IntProperty ItemId; // Offset: 0x950 // Size: 0x04
	bool bShowDefaultAttachment; // Offset: 0x954 // Size: 0x01
	char pad_0x955[0x3]; // Offset: 0x955 // Size: 0x03
	struct UDragDropOperation* OnDragDetectedResult; // Offset: 0x958 // Size: 0x08
	struct FScriptMulticastDelegate OnTouchStartedImplementation; // Offset: 0x960 // Size: 0x10
	struct FScriptMulticastDelegate OnTouchEndedImplementation; // Offset: 0x970 // Size: 0x10
	struct FScriptMulticastDelegate OnDragDetectedImplementation; // Offset: 0x980 // Size: 0x10

	// Functions

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchStarted_Detect
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted_Detect(struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x130)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.CreateDragDropOpt
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CreateDragDropOpt(struct UUserWidget* UserWidget, struct FBattleItemData BattleItemData, enum class EBackPackDragOrigin DragBegin, enum class EBattleItemAdditionalDataType AdditionalDataType, struct UDragDropOperation*& DragDropOpt); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0xd8)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.CheckIsAvatarItemIconExists
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckIsAvatarItemIconExists(IntProperty AvatarItemID, bool& ItemPathExist); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnClickedUpgradeInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClickedUpgradeInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateCoreSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateCoreSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HideSinkSlotVisiblity
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideSinkSlotVisiblity(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.InitSinkSlotWidget
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitSinkSlotWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateSinkSlotVisiblity
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateSinkSlotVisiblity(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponDurability
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurability(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateQuality
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateQuality(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BackpackOpenNotify
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BackpackOpenNotify(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HideReloadTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideReloadTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ForbidReloadTips
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ForbidReloadTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HandleReloadFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleReloadFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.StartReloadBullet
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StartReloadBullet(float ReloadTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateBulletSlotVisibility
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBulletSlotVisibility(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponBulletDegreeSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponBulletDegreeSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.InitBulletDegreeSlot
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitBulletDegreeSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowBulletDegreeSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowBulletDegreeSlot(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.InitGunHitInfoTag
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitGunHitInfoTag(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateSmallItemIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSmallItemIcon(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateBigItemIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateBigItemIcon(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BindWeaponChangeEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BindWeaponChangeEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateBullet
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBullet(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragCancel
	// Flags: [BlueprintCallable|BlueprintEvent]
	void FittingItemBeDragCancel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragBegin
	// Flags: [BlueprintCallable|BlueprintEvent]
	void FittingItemBeDragBegin(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ExecuteUbergraph_MainWeaponInfoItem_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_MainWeaponInfoItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragDetectedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragDetectedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchEndedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchEndedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchStartedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchStartedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent PointEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeClicked__DelegateSignature(struct UMainWeaponInfoItem_BP_C* WeaponInfoItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancelled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

