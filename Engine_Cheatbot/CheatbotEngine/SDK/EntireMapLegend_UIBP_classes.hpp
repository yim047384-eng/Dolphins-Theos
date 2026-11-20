#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass EntireMapLegend_UIBP.EntireMapLegend_UIBP_C
// Size: 0x568 // Inherited bytes: 0x488
struct UEntireMapLegend_UIBP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UButton* Button_ResourceFilter; // Offset: 0x490 // Size: 0x08
	struct UButton* Button_ShowHideLegend; // Offset: 0x498 // Size: 0x08
	struct UButton* Button_UpDown; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Legend; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Resource; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x4c0 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x4d0 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x4e0 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x4e8 // Size: 0x08
	struct UImage* Image_10; // Offset: 0x4f0 // Size: 0x08
	struct UImage* Image_11; // Offset: 0x4f8 // Size: 0x08
	struct UImage* Image_28; // Offset: 0x500 // Size: 0x08
	struct UImage* Image_Arrow; // Offset: 0x508 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x510 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_Legend; // Offset: 0x518 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_Resource; // Offset: 0x520 // Size: 0x08
	struct UWidgetSwitcher* Switcher_Resource; // Offset: 0x528 // Size: 0x08
	struct UTextBlock* TextBlock_3; // Offset: 0x530 // Size: 0x08
	struct UTextBlock* TextBlock_Legend; // Offset: 0x538 // Size: 0x08
	struct UTextBlock* TextBlock_MapLegend; // Offset: 0x540 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Desc; // Offset: 0x548 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ShowHide; // Offset: 0x550 // Size: 0x08
	struct TArray<struct FSlateBrush> ArrowBrush; // Offset: 0x558 // Size: 0x10

	// Functions

	// Object Name: Function EntireMapLegend_UIBP.EntireMapLegend_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function EntireMapLegend_UIBP.EntireMapLegend_UIBP_C.ExecuteUbergraph_EntireMapLegend_UIBP
	// Flags: [None]
	void ExecuteUbergraph_EntireMapLegend_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

