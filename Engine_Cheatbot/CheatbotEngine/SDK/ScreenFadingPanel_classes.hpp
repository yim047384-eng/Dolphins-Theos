#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ScreenFadingPanel.ScreenFadingPanel_C
// Size: 0x4a0 // Inherited bytes: 0x488
struct UScreenFadingPanel_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UImage* Image_Mask; // Offset: 0x490 // Size: 0x08
	float FadingOutTime0; // Offset: 0x498 // Size: 0x04
	float CurFadingOutTime; // Offset: 0x49c // Size: 0x04

	// Functions

	// Object Name: Function ScreenFadingPanel.ScreenFadingPanel_C.BlackScreenFadeOut
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BlackScreenFadeOut(float FadTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ScreenFadingPanel.ScreenFadingPanel_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function ScreenFadingPanel.ScreenFadingPanel_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ScreenFadingPanel.ScreenFadingPanel_C.ExecuteUbergraph_ScreenFadingPanel
	// Flags: [HasDefaults]
	void ExecuteUbergraph_ScreenFadingPanel(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

