#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C
// Size: 0x6c8 // Inherited bytes: 0x418
struct UMainBackPackPanel_New_BP_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* Animation_in; // Offset: 0x418 // Size: 0x08
	struct UBackPackArmorSlot_BP_C* ArmorSlotItem_ArmoredVest; // Offset: 0x420 // Size: 0x08
	struct UBackPackArmorSlot_BP_C* ArmorSlotItem_Helmet; // Offset: 0x428 // Size: 0x08
	struct UBackPackArmorSlot_BP_C* ArmorSlotItem_Package; // Offset: 0x430 // Size: 0x08
	struct UButton* Button_AllExcluded; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_AllItem; // Offset: 0x440 // Size: 0x08
	struct UButton* Button_ArmorFit; // Offset: 0x448 // Size: 0x08
	struct UButton* Button_CloseBackPackUI; // Offset: 0x450 // Size: 0x08
	struct UButton* Button_Clothing; // Offset: 0x458 // Size: 0x08
	struct UButton* Button_Consumption; // Offset: 0x460 // Size: 0x08
	struct UButton* Button_Drop; // Offset: 0x468 // Size: 0x08
	struct UButton* Button_MapStore; // Offset: 0x470 // Size: 0x08
	struct UButton* Button_Other; // Offset: 0x478 // Size: 0x08
	struct UButton* Button_Store; // Offset: 0x480 // Size: 0x08
	struct UButton* Button_ToggleItemList; // Offset: 0x488 // Size: 0x08
	struct UButton* Button_WeaponFit; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_7; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_8; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_10; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BackpackDelete; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CapacityDisplay; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ClothingGroup; // Offset: 0x4c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_friendly; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_friendly2; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MapStore; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SlideDelete; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Slot1; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Slot2; // Offset: 0x4f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_StoreGroup; // Offset: 0x4f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ToggleItemList; // Offset: 0x500 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Trunk; // Offset: 0x508 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TrunkControl; // Offset: 0x510 // Size: 0x08
	struct UGridPanel* CanvasPanel_WeaponDetail; // Offset: 0x518 // Size: 0x08
	struct UGridPanel* GridPanel_1; // Offset: 0x520 // Size: 0x08
	struct UGridPanel* GridPanel_2; // Offset: 0x528 // Size: 0x08
	struct UCanvasPanel* GridPanel_AllExcluded; // Offset: 0x530 // Size: 0x08
	struct UCanvasPanel* GridPanel_ArmorFit; // Offset: 0x538 // Size: 0x08
	struct UCanvasPanel* GridPanel_AttachmentFit; // Offset: 0x540 // Size: 0x08
	struct UGridPanel* GridPanel_BackPackBtnGroup; // Offset: 0x548 // Size: 0x08
	struct UGridPanel* GridPanel_BackPackList; // Offset: 0x550 // Size: 0x08
	struct UVerticalBox* GridPanel_BackPackListParent; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* GridPanel_ClothFit; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* GridPanel_ConsumFit; // Offset: 0x568 // Size: 0x08
	struct UCanvasPanel* GridPanel_OthersFit; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* GridPanel_Store; // Offset: 0x578 // Size: 0x08
	struct UGridPanel* GridPanel_WeaponInfo; // Offset: 0x580 // Size: 0x08
	struct UGridPanel* GridPanelMelInfo; // Offset: 0x588 // Size: 0x08
	struct UGridPanel* GridPanelPistolInfo; // Offset: 0x590 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Down; // Offset: 0x598 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x5a0 // Size: 0x08
	struct UImage* Image_All; // Offset: 0x5a8 // Size: 0x08
	struct UImage* Image_AllExcluded; // Offset: 0x5b0 // Size: 0x08
	struct UImage* Image_ArmorFit; // Offset: 0x5b8 // Size: 0x08
	struct UImage* Image_BackPackBG; // Offset: 0x5c0 // Size: 0x08
	struct UImage* Image_BackPackBG1; // Offset: 0x5c8 // Size: 0x08
	struct UImage* Image_Cloth; // Offset: 0x5d0 // Size: 0x08
	struct UImage* Image_CollapseItemList; // Offset: 0x5d8 // Size: 0x08
	struct UImage* Image_ConsumFit; // Offset: 0x5e0 // Size: 0x08
	struct UImage* Image_Drop; // Offset: 0x5e8 // Size: 0x08
	struct UImage* Image_EquipmentInfo; // Offset: 0x5f0 // Size: 0x08
	struct UImage* Image_ExpandItemList; // Offset: 0x5f8 // Size: 0x08
	struct UImage* Image_MapStore; // Offset: 0x600 // Size: 0x08
	struct UImage* Image_NormalBackpackBG; // Offset: 0x608 // Size: 0x08
	struct UImage* Image_OthersFit; // Offset: 0x610 // Size: 0x08
	struct UImage* Image_Store; // Offset: 0x618 // Size: 0x08
	struct UImage* Image_WeaponFit; // Offset: 0x620 // Size: 0x08
	struct UCustomScrollBox* ScrollBox_ItemList; // Offset: 0x628 // Size: 0x08
	struct USizeBox* SizeBox_ExpandItemList; // Offset: 0x630 // Size: 0x08
	struct UTextBlock* TextBlock_Backpack; // Offset: 0x638 // Size: 0x08
	struct UTextBlock* TextBlock_CurrentItemNum_Classic; // Offset: 0x640 // Size: 0x08
	struct UTextBlock* TextBlock_MaxItemNum_Classic; // Offset: 0x648 // Size: 0x08
	struct UUniformGridPanel* UniformGridPanel_Armor; // Offset: 0x650 // Size: 0x08
	struct UVerticalBox* UniformGridPanel_Armor_XAndT; // Offset: 0x658 // Size: 0x08
	struct UVerticalBox* VerticalBox_1; // Offset: 0x660 // Size: 0x08
	struct UVerticalBox* VerticalBox_2; // Offset: 0x668 // Size: 0x08
	struct UVerticalBox* VerticalBox_Btns; // Offset: 0x670 // Size: 0x08
	struct UVerticalBox* VerticalBox_Weapon; // Offset: 0x678 // Size: 0x08
	struct UHorizontalBox* WeaponAndListGroup; // Offset: 0x680 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x688 // Size: 0x08
	struct FScriptMulticastDelegate CloseBackpack; // Offset: 0x690 // Size: 0x10
	struct FScriptMulticastDelegate OnDropImplementation; // Offset: 0x6a0 // Size: 0x10
	bool OnDropResult; // Offset: 0x6b0 // Size: 0x01
	enum class EBackpackTab DummyEBackpackTabType; // Offset: 0x6b1 // Size: 0x01
	bool bItemDrag; // Offset: 0x6b2 // Size: 0x01
	char pad_0x6B3[0x5]; // Offset: 0x6b3 // Size: 0x05
	struct FScriptMulticastDelegate OnItemBeDrag; // Offset: 0x6b8 // Size: 0x10

	// Functions

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.GetLuaFilePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	StrProperty GetLuaFilePath(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.SetUAVCDInf
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetUAVCDInf(IntProperty CD, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.ShowArmoToolTips_SkillProp
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowArmoToolTips_SkillProp(IntProperty SpecificID, struct FSlateBrush Brush1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.OnDrop
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xb9)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.OnItemBeDrag__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnItemBeDrag__DelegateSignature(struct FPointerEvent PointerEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.OnDropImplementation__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDropImplementation__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function MainBackPackPanel_New_BP.MainBackPackPanel_New_BP_C.CloseBackPack__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void CloseBackPack__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

