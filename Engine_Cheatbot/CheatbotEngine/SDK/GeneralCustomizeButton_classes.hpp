#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass GeneralCustomizeButton.GeneralCustomizeButton_C
// Size: 0x2b5 // Inherited bytes: 0x260
struct UGeneralCustomizeButton_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x268 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x270 // Size: 0x08
	struct UTextBlock* TextBlock_Name; // Offset: 0x278 // Size: 0x08
	struct FSoftObjectPath PreLoad_Icon; // Offset: 0x280 // Size: 0x18
	struct FSoftObjectPath Preload_BG; // Offset: 0x298 // Size: 0x18
	IntProperty Preload_Name; // Offset: 0x2b0 // Size: 0x04
	bool bStretchIcon; // Offset: 0x2b4 // Size: 0x01

	// Functions

	// Object Name: Function GeneralCustomizeButton.GeneralCustomizeButton_C.LoadPreStyle
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadPreStyle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeneralCustomizeButton.GeneralCustomizeButton_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GeneralCustomizeButton.GeneralCustomizeButton_C.ExecuteUbergraph_GeneralCustomizeButton
	// Flags: [None]
	void ExecuteUbergraph_GeneralCustomizeButton(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

