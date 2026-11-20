#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ReviveTowerMapMark.ReviveTowerMapMark_C
// Size: 0x558 // Inherited bytes: 0x530
struct UReviveTowerMapMark_C : UMapUIMarkBaseWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x530 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x538 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x540 // Size: 0x08
	struct TArray<struct FSlateBrush> IconBrush; // Offset: 0x548 // Size: 0x10

	// Functions

	// Object Name: Function ReviveTowerMapMark.ReviveTowerMapMark_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ReviveTowerMapMark.ReviveTowerMapMark_C.ExecuteUbergraph_ReviveTowerMapMark
	// Flags: [None]
	void ExecuteUbergraph_ReviveTowerMapMark(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

