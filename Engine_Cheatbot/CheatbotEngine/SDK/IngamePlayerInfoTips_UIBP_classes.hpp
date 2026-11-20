#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass IngamePlayerInfoTips_UIBP.IngamePlayerInfoTips_UIBP_C
// Size: 0x284 // Inherited bytes: 0x260
struct UIngamePlayerInfoTips_UIBP_C : UUserWidget {
	// Fields
	struct UImage* Image_color; // Offset: 0x260 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x268 // Size: 0x08
	struct UMultiLineEditableText* ItemName1; // Offset: 0x270 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_4; // Offset: 0x278 // Size: 0x08
	IntProperty CurrentItemID; // Offset: 0x280 // Size: 0x04

	// Functions

	// Object Name: Function IngamePlayerInfoTips_UIBP.IngamePlayerInfoTips_UIBP_C.SetEquipQuality
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEquipQuality(IntProperty InQuality); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function IngamePlayerInfoTips_UIBP.IngamePlayerInfoTips_UIBP_C.ShowPlayerItemInfoTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowPlayerItemInfoTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngamePlayerInfoTips_UIBP.IngamePlayerInfoTips_UIBP_C.HidePlayerItemInfoTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HidePlayerItemInfoTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngamePlayerInfoTips_UIBP.IngamePlayerInfoTips_UIBP_C.RefreshItemInfoTips
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshItemInfoTips(IntProperty ItemId, StrProperty ItemName, StrProperty ItemDescription, struct FSlateBrush ItemImageIcon, IntProperty ItemQuality); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0xe4)
};

