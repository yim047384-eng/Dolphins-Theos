#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass AceImprintItem.AceImprintItem_C
// Size: 0x2b0 // Inherited bytes: 0x260
struct UAceImprintItem_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UButton* Button_Icon; // Offset: 0x268 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_41; // Offset: 0x270 // Size: 0x08
	struct UCommon_KingMark_UIBP_C* Common_KingMark_UIBP; // Offset: 0x278 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x280 // Size: 0x08
	struct UTextBlock* TextBlock_Name; // Offset: 0x288 // Size: 0x08
	struct FLinearColor BgColor1; // Offset: 0x290 // Size: 0x10
	struct FLinearColor BgColor2; // Offset: 0x2a0 // Size: 0x10

	// Functions

	// Object Name: Function AceImprintItem.AceImprintItem_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AceImprintItem.AceImprintItem_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AceImprintItem.AceImprintItem_C.ExecuteUbergraph_AceImprintItem
	// Flags: [None]
	void ExecuteUbergraph_AceImprintItem(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

