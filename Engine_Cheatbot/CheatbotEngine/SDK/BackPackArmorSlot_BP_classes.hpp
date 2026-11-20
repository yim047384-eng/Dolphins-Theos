#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BackPackArmorSlot_BP.BackPackArmorSlot_BP_C
// Size: 0x6e0 // Inherited bytes: 0x488
struct UBackPackArmorSlot_BP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UButton* Button_anjian; // Offset: 0x490 // Size: 0x08
	struct UButton* Button_Lighter; // Offset: 0x498 // Size: 0x08
	struct UButton* Button_Skateboard; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Desc; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LighterGroup; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Skateboard; // Offset: 0x4b8 // Size: 0x08
	struct UGridPanel* GridPanel_Shield; // Offset: 0x4c0 // Size: 0x08
	struct UGridPanel* GridPanel_Switch; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x4d0 // Size: 0x08
	struct UImage* Image_Affix_PVE_01; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Image_Affix_PVE_02; // Offset: 0x4e0 // Size: 0x08
	struct UImage* Image_close; // Offset: 0x4e8 // Size: 0x08
	struct UImage* Image_EquipIcon; // Offset: 0x4f0 // Size: 0x08
	struct UImage* Image_EquipIconSlotBG; // Offset: 0x4f8 // Size: 0x08
	struct UImage* Image_Equipment; // Offset: 0x500 // Size: 0x08
	struct UImage* Image_MaxLevel; // Offset: 0x508 // Size: 0x08
	struct UImage* Image_open; // Offset: 0x510 // Size: 0x08
	struct UImage* Image_Quality; // Offset: 0x518 // Size: 0x08
	struct UImage* Image_ShieldBg; // Offset: 0x520 // Size: 0x08
	struct UImage* Logo; // Offset: 0x528 // Size: 0x08
	struct UProgressBar* ProgressBar_1; // Offset: 0x530 // Size: 0x08
	struct UProgressBar* ProgressBar_2; // Offset: 0x538 // Size: 0x08
	struct UProgressBar* ProgressBar_Damage; // Offset: 0x540 // Size: 0x08
	struct UTextBlock* Text_Board; // Offset: 0x548 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x550 // Size: 0x08
	struct UTextBlock* TextBlock_Desc; // Offset: 0x558 // Size: 0x08
	struct UTextBlock* TextBlock_ItemName; // Offset: 0x560 // Size: 0x08
	struct UTextBlock* TextBlock_ShieldNum; // Offset: 0x568 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_oc; // Offset: 0x570 // Size: 0x08
	enum class EBackpackClothArmorType ClothArmorType; // Offset: 0x578 // Size: 0x01
	char pad_0x579[0x7]; // Offset: 0x579 // Size: 0x07
	struct FBattleItemData ItemData; // Offset: 0x580 // Size: 0xc0
	bool IsDataNull; // Offset: 0x640 // Size: 0x01
	char pad_0x641[0x3]; // Offset: 0x641 // Size: 0x03
	float TimeRecorder; // Offset: 0x644 // Size: 0x04
	struct FScriptMulticastDelegate ItemBeDragBegin; // Offset: 0x648 // Size: 0x10
	struct FScriptMulticastDelegate ItemBeDragCancelled; // Offset: 0x658 // Size: 0x10
	bool IsDetectDrag; // Offset: 0x668 // Size: 0x01
	bool NightVisionOpen; // Offset: 0x669 // Size: 0x01
	bool IsSurfBoardEnabled; // Offset: 0x66a // Size: 0x01
	bool IsSnowBoardEnabled; // Offset: 0x66b // Size: 0x01
	bool IsDragEnable; // Offset: 0x66c // Size: 0x01
	char pad_0x66D[0x3]; // Offset: 0x66d // Size: 0x03
	struct FScriptMulticastDelegate ItemBeClicked; // Offset: 0x670 // Size: 0x10
	bool bIsTouchStartForQuickVoice; // Offset: 0x680 // Size: 0x01
	char pad_0x681[0x7]; // Offset: 0x681 // Size: 0x07
	struct FTimerHandle LongPressedTimerHandler; // Offset: 0x688 // Size: 0x08
	MapProperty DescMap; // Offset: 0x690 // Size: 0x50

	// Functions

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.CheckCanShowArmor
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckCanShowArmor(bool& Back); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SendQuickChatText
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SendQuickChatText(enum class EBackpackClothArmorType& ClothType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowItemIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowItemIcon(struct FBattleItemData ItemData, IntProperty AvatarItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc4)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetDescByItemID
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDescByItemID(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnLongPressed
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnLongPressed(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.IsNightVisionEnable
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsNightVisionEnable(bool& IsEnable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetCurrentClothType
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurrentClothType(enum class EBackpackClothArmorType& ClothType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SwitchSurfBoard
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchSurfBoard(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.UpdateSurfBoardSwitch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateSurfBoardSwitch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.RefreshSurfBoardSwitch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshSurfBoardSwitch(bool IsEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.RefreshSnowboardSwitch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshSnowboardSwitch(bool IsEnabled); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SwitchSnowBoard
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SwitchSnowBoard(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnEquipIconLoaded
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnEquipIconLoaded(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.RefreshSpecialIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshSpecialIcon(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.UpdateSpecialIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSpecialIcon(StrProperty IconPath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetDefaultImage
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FText GetDefaultImage(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetEquipmentAvatarRes
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetEquipmentAvatarRes(struct FBattleItemData& BattleItemData, IntProperty& AvatarItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc4)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.RefreshVisionSwitch
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshVisionSwitch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowSlot(struct FBattleItemData ItemData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SwitchNightVision
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchNightVision(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetArmorHP
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetArmorHP(IntProperty& CrtHP, IntProperty& MaxHP); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorName
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetArmorName(bool ShowDefault); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorHP
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetArmorHP(IntProperty HPCrt, IntProperty HPMax); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowArmor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowArmor(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetNameByClothArmorType
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FText GetNameByClothArmorType(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowNull
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowNull(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.BndEvt__Button_anjian_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_anjian_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowSkillPropToolTip
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ShowSkillPropToolTip(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.BndEvt__Button_Skateboard_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Skateboard_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.BndEvt__Button_Lighter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Lighter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ExecuteUbergraph_BackPackArmorSlot_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BackPackArmorSlot_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeClicked__DelegateSignature(struct UBackPackArmorSlot_BP_C* BackPackArmorSlot); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragCancelled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragCancelled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ItemBeDragBegin__DelegateSignature(struct FBattleItemData ItemData, enum class EBackPackDragOrigin DragOrigin); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

