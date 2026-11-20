#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass DiscountStoreScreenMarkUI.DiscountStoreScreenMarkUI_C
// Size: 0x658 // Inherited bytes: 0x630
struct UDiscountStoreScreenMarkUI_C : UNormalActorPositionWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x630 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x638 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x640 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x648 // Size: 0x08
	struct UTextBlock* TextBlock_Revive; // Offset: 0x650 // Size: 0x08

	// Functions

	// Object Name: Function DiscountStoreScreenMarkUI.DiscountStoreScreenMarkUI_C.InitTeamItemPlayerStateWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void InitTeamItemPlayerStateWidget(struct ASTExtraPlayerState* Player, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function DiscountStoreScreenMarkUI.DiscountStoreScreenMarkUI_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function DiscountStoreScreenMarkUI.DiscountStoreScreenMarkUI_C.ExecuteUbergraph_DiscountStoreScreenMarkUI
	// Flags: [None]
	void ExecuteUbergraph_DiscountStoreScreenMarkUI(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

