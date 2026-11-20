#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BackpackItem_ButtonBP.BackpackItem_ButtonBP_C
// Size: 0x6a0 // Inherited bytes: 0x418
struct UBackpackItem_ButtonBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* AvartDisUse; // Offset: 0x420 // Size: 0x08
	struct UButton* AvartUse; // Offset: 0x428 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x430 // Size: 0x08
	struct UButton* Button_2; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_7; // Offset: 0x440 // Size: 0x08
	struct UButton* Button_8; // Offset: 0x448 // Size: 0x08
	struct UButton* Button_9; // Offset: 0x450 // Size: 0x08
	struct UButton* Button_CallBack; // Offset: 0x458 // Size: 0x08
	struct UImage* Button_CallBack_Image; // Offset: 0x460 // Size: 0x08
	struct UButton* Button_Check; // Offset: 0x468 // Size: 0x08
	struct UButton* Button_Controll; // Offset: 0x470 // Size: 0x08
	struct UImage* Button_Controll_Image; // Offset: 0x478 // Size: 0x08
	struct UImage* Button_DisdropUAV_Image; // Offset: 0x480 // Size: 0x08
	struct UImage* Button_DisuseUAV_Image; // Offset: 0x488 // Size: 0x08
	struct UButton* Button_Drop; // Offset: 0x490 // Size: 0x08
	struct UButton* Button_Drop2; // Offset: 0x498 // Size: 0x08
	struct UImage* Button_Drop_Image; // Offset: 0x4a0 // Size: 0x08
	struct UButton* Button_DropAll; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Button_DropAll_Image; // Offset: 0x4b0 // Size: 0x08
	struct UButton* Button_DropAndCheck_Check; // Offset: 0x4b8 // Size: 0x08
	struct UButton* Button_DropAndCheck_Drop; // Offset: 0x4c0 // Size: 0x08
	struct UButton* Button_DropPartly; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Button_DropPartly_Image; // Offset: 0x4d0 // Size: 0x08
	struct UImage* Button_DropUAV2_Image; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Button_DropUAV_Image; // Offset: 0x4e0 // Size: 0x08
	struct UButton* Button_Equip; // Offset: 0x4e8 // Size: 0x08
	struct UImage* Button_Equip_Image; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_Save; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_Use; // Offset: 0x500 // Size: 0x08
	struct UImage* Button_UseUAV2_Image; // Offset: 0x508 // Size: 0x08
	struct UImage* Button_UseUAV_Image; // Offset: 0x510 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_GuideSlot; // Offset: 0x518 // Size: 0x08
	struct UImage* DropPartlyDisableState_Image; // Offset: 0x520 // Size: 0x08
	struct UGridPanel* GridPanel_DropAndCheck; // Offset: 0x528 // Size: 0x08
	struct UGridPanel* GridPanel_DropPartlyDisableState; // Offset: 0x530 // Size: 0x08
	struct UGridPanel* GridPanel_Throw; // Offset: 0x538 // Size: 0x08
	struct UGridPanel* GridPanel_UAV_CallbackAndUse; // Offset: 0x540 // Size: 0x08
	struct UGridPanel* GridPanel_UAV_DisdropAndDisuse; // Offset: 0x548 // Size: 0x08
	struct UGridPanel* GridPanel_UAV_DropAndDisuse; // Offset: 0x550 // Size: 0x08
	struct UGridPanel* GridPanel_UAV_DropAndUse; // Offset: 0x558 // Size: 0x08
	struct UGridPanel* GridPanel_UseDisuseAvarat; // Offset: 0x560 // Size: 0x08
	struct UGridPanel* GridPanel_WeaponFit; // Offset: 0x568 // Size: 0x08
	struct UGridPanel* Group_DropPartly; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x590 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x598 // Size: 0x08
	struct USizeBox* SizeBox_Container; // Offset: 0x5a0 // Size: 0x08
	struct UTextBlock* TextBlock_12; // Offset: 0x5a8 // Size: 0x08
	struct UTextBlock* TextBlock_Guide; // Offset: 0x5b0 // Size: 0x08
	struct UGridPanel* UnableToEquip; // Offset: 0x5b8 // Size: 0x08
	struct UImage* UnableToEquip_Image; // Offset: 0x5c0 // Size: 0x08
	struct UVerticalBox* VerticalBox_1; // Offset: 0x5c8 // Size: 0x08
	bool IsUseless; // Offset: 0x5d0 // Size: 0x01
	char pad_0x5D1[0x7]; // Offset: 0x5d1 // Size: 0x07
	struct FBattleItemData MyItemData; // Offset: 0x5d8 // Size: 0xc0
	struct UBackPackItem_BP_C* ParentBP; // Offset: 0x698 // Size: 0x08

	// Functions

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.UpdateButtonState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateButtonState(bool IsUseless, struct FBattleItemData MyItemData); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc8)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_Use_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Use_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_Drop_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Drop_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Equip_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_DropPartly_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_DropPartly_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_CallBack_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_CallBack_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_Drop2_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Drop2_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_Controll_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Controll_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_218_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_6_K2Node_ComponentBoundEvent_218_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_256_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_7_K2Node_ComponentBoundEvent_256_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_296_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_8_K2Node_ComponentBoundEvent_296_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackItem_ButtonBP.BackpackItem_ButtonBP_C.ExecuteUbergraph_BackpackItem_ButtonBP
	// Flags: [None]
	void ExecuteUbergraph_BackpackItem_ButtonBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

