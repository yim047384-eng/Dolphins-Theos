#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PickUpItemTips_BP.PickUpItemTips_BP_C
// Size: 0x57c // Inherited bytes: 0x418
struct UPickUpItemTips_BP_C : UUAEUserWidget {
	// Fields
	struct UAccessoriesDescribe_Item_UIBP_C* AccessoriesDescribe_Item_2; // Offset: 0x418 // Size: 0x08
	struct UAccessoriesDescribe_Item_UIBP_C* AccessoriesDescribe_Item_3; // Offset: 0x420 // Size: 0x08
	struct UAccessoriesDescribe_Item_UIBP_C* AccessoriesDescribe_Item_4; // Offset: 0x428 // Size: 0x08
	struct UAccessoriesDescribe_Item_UIBP_C* AccessoriesDescribe_Item_5; // Offset: 0x430 // Size: 0x08
	struct UGridPanel* GridPanel_2; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_ItemIcon; // Offset: 0x440 // Size: 0x08
	struct UHorizontalBox* PickProcess; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_describe; // Offset: 0x450 // Size: 0x08
	struct UUTRichTextBlock* TextBlock_ItemDescrip; // Offset: 0x458 // Size: 0x08
	struct UTextBlock* TextBlock_Name; // Offset: 0x460 // Size: 0x08
	struct UTextBlock* TextBlock_Volume; // Offset: 0x468 // Size: 0x08
	struct UHorizontalBox* VolumeBox; // Offset: 0x470 // Size: 0x08
	struct FItemRecordData Record; // Offset: 0x478 // Size: 0x100
	IntProperty TypeSpecificID; // Offset: 0x578 // Size: 0x04

	// Functions

	// Object Name: Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateLivikXTDesc
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateLivikXTDesc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItemTips_BP.PickUpItemTips_BP_C.HideAccessoryDesc
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAccessoryDesc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateAccessoryDesc
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateAccessoryDesc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateData(struct FSlateBrush Image, StrProperty ItemName, StrProperty ItemDesc, IntProperty ItemCount, float ItemVolume, IntProperty TypeSpecificID); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xe4)
};

