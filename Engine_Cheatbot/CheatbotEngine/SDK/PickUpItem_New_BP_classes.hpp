#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PickUpItem_New_BP.PickUpItem_New_BP_C
// Size: 0x73c // Inherited bytes: 0x488
struct UPickUpItem_New_BP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* fadein_click; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_421; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ModTitleRoot; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Special; // Offset: 0x4b0 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Value; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x4c0 // Size: 0x08
	struct UImage* Image_CanEquippedIconBG; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Image_CanEquippedItemBG; // Offset: 0x4d0 // Size: 0x08
	struct UImage* Image_GiftBoxBG; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Image_ItemBG; // Offset: 0x4e0 // Size: 0x08
	struct UImage* Image_ItemGiftBoxBG; // Offset: 0x4e8 // Size: 0x08
	struct UImage* Image_ItemIcon; // Offset: 0x4f0 // Size: 0x08
	struct UImage* Image_ItemIconBG; // Offset: 0x4f8 // Size: 0x08
	struct UImage* Image_Marked; // Offset: 0x500 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x508 // Size: 0x08
	struct UImage* Image_tag; // Offset: 0x510 // Size: 0x08
	struct UImage* Image_tag1; // Offset: 0x518 // Size: 0x08
	struct UTextBlock* ItemContent11; // Offset: 0x520 // Size: 0x08
	struct UTextBlock* ItemPickupDesc; // Offset: 0x528 // Size: 0x08
	struct UProgressBar* ProgressBar_Damage; // Offset: 0x530 // Size: 0x08
	struct UProgressBar* ProgressBar_LongPress; // Offset: 0x538 // Size: 0x08
	struct UTextBlock* TextBlock_ItemNum; // Offset: 0x540 // Size: 0x08
	struct UTextBlock* TextBlock_Value; // Offset: 0x548 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Bg; // Offset: 0x550 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_IconBG; // Offset: 0x558 // Size: 0x08
	bool bHasStartedTouchIn; // Offset: 0x560 // Size: 0x01
	bool bHasTipsShow; // Offset: 0x561 // Size: 0x01
	char pad_0x562[0x6]; // Offset: 0x562 // Size: 0x06
	struct UUserWidget* ParentUserWidget; // Offset: 0x568 // Size: 0x08
	struct FItemRecordData DataRow; // Offset: 0x570 // Size: 0x100
	bool Useful; // Offset: 0x670 // Size: 0x01
	char pad_0x671[0x7]; // Offset: 0x671 // Size: 0x07
	struct FBattleSearchBoxSortingInfo SortInfo; // Offset: 0x678 // Size: 0x50
	struct FSearchedPickUpItemResult ItemDataStructure; // Offset: 0x6c8 // Size: 0x40
	bool isBoxItem; // Offset: 0x708 // Size: 0x01
	char pad_0x709[0x3]; // Offset: 0x709 // Size: 0x03
	IntProperty pickCount; // Offset: 0x70c // Size: 0x04
	struct UUserWidget* EnergyBP; // Offset: 0x710 // Size: 0x08
	IntProperty CurShowDetailWeaponID; // Offset: 0x718 // Size: 0x04
	IntProperty Quality; // Offset: 0x71c // Size: 0x04
	struct UUAEUserWidget* SlotStatusWidget; // Offset: 0x720 // Size: 0x08
	IntProperty TypeSpecificID; // Offset: 0x728 // Size: 0x04
	bool bIsLongPress; // Offset: 0x72c // Size: 0x01
	bool bHasBindDel; // Offset: 0x72d // Size: 0x01
	char pad_0x72E[0x2]; // Offset: 0x72e // Size: 0x02
	float LongPressTime; // Offset: 0x730 // Size: 0x04
	struct FVector2D StartPoint; // Offset: 0x734 // Size: 0x08

	// Functions

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.PickUpDetailEventInterface
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PickUpDetailEventInterface(bool& bReturn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.PickUpToBackEventInterface
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PickUpToBackEventInterface(bool& bReturn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.DeadBoxOnTouchEnd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DeadBoxOnTouchEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.LuaMouseLeave
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LuaMouseLeave(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.ShowDurableInternal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowDurableInternal(struct FSearchedPickUpItemResult pickUpItemResult); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.UpdateItemNameAndIcon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateItemNameAndIcon(IntProperty nItemID, struct TArray<struct FBattleItemAdditionalData>& AdditionalData); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.TouchMove
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TouchMove(struct FPointerEvent MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.TouchBegin
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TouchBegin(struct FPointerEvent MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnLongPressCancel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnLongPressCancel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnQuickSignActor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnQuickSignActor(IntProperty ActorGUID, IntProperty RelationID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.BindQuickSignDel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BindQuickSignDel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.CheckIsMarked
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckIsMarked(bool SetProgress); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnLongPressItem
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnLongPressItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.CanPickUp
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CanPickUp(bool& Can); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.On_Image_PickupDetail_ClickArea_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_Image_PickupDetail_ClickArea_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.On_Image_PickupToBackpack_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_Image_PickupToBackpack_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.StartSwitchCD
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StartSwitchCD(struct ASTExtraPlayerCharacter* OwnerPawn, struct APickUpWrapperActor* Wrapper); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.CheckItemChanged
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckItemChanged(bool& Changed); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.GetDIYClothName
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetDIYClothName(struct FText DefaultName, IntProperty ColorID, IntProperty PatterID, struct FText& Name); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.LoadPatterIconFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadPatterIconFinish(struct UObject* Object); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.SetColorAndPattern
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetColorAndPattern(IntProperty ColorID, IntProperty PatternID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.GetDIYClothColorAndPattern
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetDIYClothColorAndPattern(struct TArray<struct FBattleItemAdditionalData>& AdditionData, IntProperty& ColorID, IntProperty& PatternID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.RefreshIconByID
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshIconByID(struct UObject* Icon, IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.UpdateItemData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateItemData(struct FBattleSearchItemSortingInfo ItemData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.RefreshIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshIcon(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.ShowDurable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowDurable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.UpdateUseless
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateUseless(bool Useful); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.GetUseless
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetUseless(bool& useless); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.UpdateItemDataByWrap
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateItemDataByWrap(struct FBattleSearchBoxSortingInfo Info); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.HandlePickup
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandlePickup(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.PickupDetailEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PickupDetailEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.PickupToBackpackEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PickupToBackpackEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItem_New_BP.PickUpItem_New_BP_C.ExecuteUbergraph_PickUpItem_New_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PickUpItem_New_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

