#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BackPackItem_BP.BackPackItem_BP_C
// Size: 0x880 // Inherited bytes: 0x418
struct UBackPackItem_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_EntireSide; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LeftSide; // Offset: 0x428 // Size: 0x08
	struct UGridPanel* GridPanel_4; // Offset: 0x430 // Size: 0x08
	struct UGridPanel* GridPanel_Right; // Offset: 0x438 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Price; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_Equipment; // Offset: 0x448 // Size: 0x08
	struct UImage* Image_ItemBG; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_ItemIcon; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_ItemIconBG; // Offset: 0x460 // Size: 0x08
	struct UImage* Image_ItemSelectFG; // Offset: 0x468 // Size: 0x08
	struct UImage* Image_New; // Offset: 0x470 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x478 // Size: 0x08
	struct UImage* Image_Useless; // Offset: 0x480 // Size: 0x08
	struct UTextBlock* ItemContent2; // Offset: 0x488 // Size: 0x08
	struct UTextBlock* ItemContent3; // Offset: 0x490 // Size: 0x08
	struct UImage* Logo; // Offset: 0x498 // Size: 0x08
	struct UProgressBar* ProgressBar_Damage; // Offset: 0x4a0 // Size: 0x08
	struct USizeBox* SizeBox_2; // Offset: 0x4a8 // Size: 0x08
	struct UTextBlock* TextBlock_ItemNum; // Offset: 0x4b0 // Size: 0x08
	struct UTextBlock* TextBlock_NumLeft; // Offset: 0x4b8 // Size: 0x08
	struct UTextBlock* TextBlock_Price; // Offset: 0x4c0 // Size: 0x08
	struct UTextBlock* TextBlock_Time; // Offset: 0x4c8 // Size: 0x08
	struct UVerticalBox* VerticalBox_1; // Offset: 0x4d0 // Size: 0x08
	struct FBattleItemData ItemData; // Offset: 0x4d8 // Size: 0xc0
	bool bIsHandleBtnsShow; // Offset: 0x598 // Size: 0x01
	char pad_0x599[0x7]; // Offset: 0x599 // Size: 0x07
	struct FScriptMulticastDelegate HandleBtnsStateChange; // Offset: 0x5a0 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDropped; // Offset: 0x5b0 // Size: 0x10
	bool bIsUseless; // Offset: 0x5c0 // Size: 0x01
	char pad_0x5C1[0x7]; // Offset: 0x5c1 // Size: 0x07
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x5c8 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancelled; // Offset: 0x5d8 // Size: 0x10
	struct TArray<IntProperty> CanNotDropItemID; // Offset: 0x5e8 // Size: 0x10
	bool bIsInSelected; // Offset: 0x5f8 // Size: 0x01
	char pad_0x5F9[0x7]; // Offset: 0x5f9 // Size: 0x07
	struct UBackpackItem_ButtonBP_C* ButtonMenu; // Offset: 0x600 // Size: 0x08
	struct UUIDuplicatedItemPool* ButtonItemPool; // Offset: 0x608 // Size: 0x08
	bool IsItemUAV; // Offset: 0x610 // Size: 0x01
	char pad_0x611[0x7]; // Offset: 0x611 // Size: 0x07
	struct FScriptMulticastDelegate ItemBeClicked; // Offset: 0x618 // Size: 0x10
	struct FItemRecordData Record; // Offset: 0x628 // Size: 0x100
	bool bBindSingleItemUpdate; // Offset: 0x728 // Size: 0x01
	char pad_0x729[0x7]; // Offset: 0x729 // Size: 0x07
	struct UUserWidget* EnergyWidget; // Offset: 0x730 // Size: 0x08
	IntProperty Quality; // Offset: 0x738 // Size: 0x04
	char pad_0x73C[0x4]; // Offset: 0x73c // Size: 0x04
	struct UUAEUserWidget* SlotStatusWidget; // Offset: 0x740 // Size: 0x08
	struct FItemRecordData BaseItemRecord; // Offset: 0x748 // Size: 0x100
	IntProperty BaseItemRecordItemID; // Offset: 0x848 // Size: 0x04
	IntProperty CacheElectricityItemID; // Offset: 0x84c // Size: 0x04
	struct FScriptMulticastDelegate OnTouchEndedImplementation; // Offset: 0x850 // Size: 0x10
	struct FScriptMulticastDelegate OnTouchStartedImplementation; // Offset: 0x860 // Size: 0x10
	struct FScriptMulticastDelegate OnMouseLeaveImplementation; // Offset: 0x870 // Size: 0x10

	// Functions

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.ExecuteUbergraph_BackPackItem_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BackPackItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnMouseLeaveImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnMouseLeaveImplementation__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnTouchStartedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchStartedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.OnTouchEndedImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchEndedImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.ItemBeClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeClicked__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragCancelled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancelled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDropped__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDropped__DelegateSignature(struct FBattleItemData ItemData, bool IsForceDrop); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)

	// Object Name: Function BackPackItem_BP.BackPackItem_BP_C.HandleBtnsStateChange__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void HandleBtnsStateChange__DelegateSignature(struct UBackPackItem_BP_C* ItemBP, bool IsClicked); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)
};

