#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass QuickSign_TipItem_UIBP.QuickSign_TipItem_UIBP_C
// Size: 0x658 // Inherited bytes: 0x590
struct UQuickSign_TipItem_UIBP_C : UQuickSignMarkWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x590 // Size: 0x08
	struct UWidgetAnimation* Auto_Fadein; // Offset: 0x598 // Size: 0x08
	struct UBorder* Border_BG_Inner; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Content; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DistInfo; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x5b8 // Size: 0x08
	struct UBorder* DisBorder; // Offset: 0x5c0 // Size: 0x08
	struct UImage* DistanceBG; // Offset: 0x5c8 // Size: 0x08
	struct UImage* DotImg; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* HeightLinePnael; // Offset: 0x5d8 // Size: 0x08
	struct UBorder* IconBorder; // Offset: 0x5e0 // Size: 0x08
	struct UImage* Image_Arrow; // Offset: 0x5e8 // Size: 0x08
	struct UImage* Image_BG_Inner; // Offset: 0x5f0 // Size: 0x08
	struct UImage* Image_BG_Outer; // Offset: 0x5f8 // Size: 0x08
	struct UImage* Image_Effect; // Offset: 0x600 // Size: 0x08
	struct UImage* Image_Icon_Inner; // Offset: 0x608 // Size: 0x08
	struct UImage* Image_Icon_Outer; // Offset: 0x610 // Size: 0x08
	struct UImage* LineImg; // Offset: 0x618 // Size: 0x08
	struct UCanvasPanel* MainIconPanel; // Offset: 0x620 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Content; // Offset: 0x628 // Size: 0x08
	float DivisionFactor; // Offset: 0x630 // Size: 0x04
	float DivisionDistance; // Offset: 0x634 // Size: 0x04
	bool isInCenter; // Offset: 0x638 // Size: 0x01
	char pad_0x639[0x3]; // Offset: 0x639 // Size: 0x03
	float FireAlpha; // Offset: 0x63c // Size: 0x04
	float UnFireDelayShowTime; // Offset: 0x640 // Size: 0x04
	char pad_0x644[0x4]; // Offset: 0x644 // Size: 0x04
	StrProperty bgPath; // Offset: 0x648 // Size: 0x10

	// Functions

	// Object Name: Function QuickSign_TipItem_UIBP.QuickSign_TipItem_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickSign_TipItem_UIBP.QuickSign_TipItem_UIBP_C.ExecuteUbergraph_QuickSign_TipItem_UIBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_QuickSign_TipItem_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

