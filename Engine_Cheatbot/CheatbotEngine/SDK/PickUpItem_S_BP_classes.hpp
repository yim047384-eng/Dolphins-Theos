#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PickUpItem_S_BP.PickUpItem_S_BP_C
// Size: 0x744 // Inherited bytes: 0x488
struct UPickUpItem_S_BP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Ani_IconGlow; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* fadein_click; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ColdModeInfo; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Crit; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_EntireSide; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LeftSide; // Offset: 0x4c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ModTitleRoot; // Offset: 0x4c8 // Size: 0x08
	struct UGridPanel* GridPanel_4; // Offset: 0x4d0 // Size: 0x08
	struct UGridPanel* GridPanel_DeleteItemTips; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Image_CanEquippedIconBG; // Offset: 0x4e0 // Size: 0x08
	struct UImage* Image_CanEquippedItemBG; // Offset: 0x4e8 // Size: 0x08
	struct UImage* Image_Crit; // Offset: 0x4f0 // Size: 0x08
	struct UImage* Image_EX; // Offset: 0x4f8 // Size: 0x08
	struct UImage* Image_GiftBoxBG; // Offset: 0x500 // Size: 0x08
	struct UImage* Image_ItemBG; // Offset: 0x508 // Size: 0x08
	struct UImage* Image_ItemGiftBoxBG; // Offset: 0x510 // Size: 0x08
	struct UImage* Image_ItemIcon; // Offset: 0x518 // Size: 0x08
	struct UImage* Image_ItemIcon_Glow; // Offset: 0x520 // Size: 0x08
	struct UImage* Image_ItemIconBG; // Offset: 0x528 // Size: 0x08
	struct UImage* Image_Marked; // Offset: 0x530 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x538 // Size: 0x08
	struct UImage* Image_SelectedDeletedItem; // Offset: 0x540 // Size: 0x08
	struct UImage* Image_tag; // Offset: 0x548 // Size: 0x08
	struct UImage* Image_tag1; // Offset: 0x550 // Size: 0x08
	struct UTextBlock* ItemContent11; // Offset: 0x558 // Size: 0x08
	struct UTextBlock* ItemContent3; // Offset: 0x560 // Size: 0x08
	struct UTextBlock* ItemPickupDesc; // Offset: 0x568 // Size: 0x08
	struct UImage* Logo; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* PickupButton_XAndT; // Offset: 0x578 // Size: 0x08
	struct UProgressBar* ProgressBar_Damage; // Offset: 0x580 // Size: 0x08
	struct UProgressBar* ProgressBar_LongPress; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* SummerGiftBoxLimitTips; // Offset: 0x590 // Size: 0x08
	struct UTextBlock* TextBlock_ItemNum; // Offset: 0x598 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Bg; // Offset: 0x5a0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_IconBG; // Offset: 0x5a8 // Size: 0x08
	struct FSearchedPickUpItemResult ItemDataStructure; // Offset: 0x5b0 // Size: 0x40
	bool bHasStartedTouchIn; // Offset: 0x5f0 // Size: 0x01
	bool bHasTipsShow; // Offset: 0x5f1 // Size: 0x01
	char pad_0x5F2[0x6]; // Offset: 0x5f2 // Size: 0x06
	struct UUserWidget* ParentUserWidget; // Offset: 0x5f8 // Size: 0x08
	struct FItemRecordData DataRow; // Offset: 0x600 // Size: 0x100
	bool Useful; // Offset: 0x700 // Size: 0x01
	char pad_0x701[0x3]; // Offset: 0x701 // Size: 0x03
	IntProperty pickCount; // Offset: 0x704 // Size: 0x04
	struct UUserWidget* EnergyBP; // Offset: 0x708 // Size: 0x08
	IntProperty CurShowDetailWeaponID; // Offset: 0x710 // Size: 0x04
	IntProperty Quality; // Offset: 0x714 // Size: 0x04
	bool bShouldTriggerGuide; // Offset: 0x718 // Size: 0x01
	char pad_0x719[0x7]; // Offset: 0x719 // Size: 0x07
	struct UUAEUserWidget* SlotStatusWidget; // Offset: 0x720 // Size: 0x08
	struct UUAEUserWidget* TPlanPickUp; // Offset: 0x728 // Size: 0x08
	IntProperty TypeSpecificID; // Offset: 0x730 // Size: 0x04
	bool bIsLongPress; // Offset: 0x734 // Size: 0x01
	bool bHasBindDel; // Offset: 0x735 // Size: 0x01
	char pad_0x736[0x2]; // Offset: 0x736 // Size: 0x02
	float LongPressTime; // Offset: 0x738 // Size: 0x04
	struct FVector2D StartPoint; // Offset: 0x73c // Size: 0x08

	// Functions

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.PickUpDetailEventInterface
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PickUpDetailEventInterface(bool& bReturn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.PickUpToBackEventInterface
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PickUpToBackEventInterface(bool& bReturn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.ShowToolTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowToolTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.SingleLuaOnTouchEnd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SingleLuaOnTouchEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.LuaMouseLeave
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LuaMouseLeave(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetRealQuality
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetRealQuality(struct FSearchedPickUpItemResult pickUpItemResult, IntProperty Quality, IntProperty& Qualityout); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x48)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.ShowDurableInternal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowDurableInternal(struct FSearchedPickUpItemResult pickUpItemResult); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemNameAndIcon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateItemNameAndIcon(IntProperty nItemID, struct TArray<struct FBattleItemAdditionalData>& AdditionalData); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.TouchMove
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TouchMove(struct FPointerEvent MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.TouchBegin
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TouchBegin(struct FPointerEvent MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnLongPressCancel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnLongPressCancel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateWeaponUpgradeIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponUpgradeIcon(IntProperty WeaponUpgradeID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnQuickSignActor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnQuickSignActor(IntProperty ActorGUID, IntProperty RelationID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.BindQuickSignDel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BindQuickSignDel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.CheckIsMarked
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckIsMarked(bool SetProgress); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnLongPressItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnLongPressItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.CheckInitialSlotStatus
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckInitialSlotStatus(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.On_Image_PickupToBackpackClickArea_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_Image_PickupToBackpackClickArea_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.On_Image_PickupDetail_ClickArea_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_Image_PickupDetail_ClickArea_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UIMsg_UpdatePickupWrapperDetail
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_UpdatePickupWrapperDetail(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.SetValueAndWeight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetValueAndWeight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateCachBtnVisible
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateCachBtnVisible(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.RefreshElectricty
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshElectricty(struct TArray<struct FBattleItemAdditionalData>& AdditionalData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.RefreshSpecialIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshSpecialIcon(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateSpecialIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSpecialIcon(StrProperty IconPath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetDIYClothName
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetDIYClothName(struct FText DefaultName, IntProperty ColorID, IntProperty PatterID, struct FText& Name); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.LoadPatterIconFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadPatterIconFinish(struct UObject* Object); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.SetColorAndPattern
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetColorAndPattern(IntProperty ColorID, IntProperty PatternID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetDIYClothColorAndPattern
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetDIYClothColorAndPattern(struct TArray<struct FBattleItemAdditionalData>& AdditionData, IntProperty& ColorID, IntProperty& PatternID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.RefreshIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshIcon(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.ShowDurable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowDurable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateUseless
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateUseless(bool Useful); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetUseless
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetUseless(bool& useless); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchGesture
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandlePickup
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandlePickup(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateItemData(struct FBattleSearchItemSortingInfo ItemData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.PickupDetailEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PickupDetailEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.PickupToBackpackEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PickupToBackpackEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_S_BP.PickUpItem_S_BP_C.ExecuteUbergraph_PickUpItem_S_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PickUpItem_S_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

