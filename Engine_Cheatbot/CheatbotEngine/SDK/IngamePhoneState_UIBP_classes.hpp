#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass IngamePhoneState_UIBP.IngamePhoneState_UIBP_C
// Size: 0x4b8 // Inherited bytes: 0x418
struct UIngamePhoneState_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Animation_Battery; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Quality; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_45; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_4GBad; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_4GGood; // Offset: 0x448 // Size: 0x08
	struct UImage* Image_4GNotGood; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_Charge; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_WifiBad; // Offset: 0x460 // Size: 0x08
	struct UImage* Image_WifiGood; // Offset: 0x468 // Size: 0x08
	struct UImage* Image_WifiNotGood; // Offset: 0x470 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x478 // Size: 0x08
	struct UWidgetSwitcher* MobileSignalWidgetSwitcher; // Offset: 0x480 // Size: 0x08
	struct UProgressBar* ProgressBar_Battery; // Offset: 0x488 // Size: 0x08
	struct UWidgetSwitcher* SignalWidgetSwitcher; // Offset: 0x490 // Size: 0x08
	struct UTextBlock* TextBlock_ms; // Offset: 0x498 // Size: 0x08
	struct UTextBlock* TextBlock_Ping; // Offset: 0x4a0 // Size: 0x08
	struct UTextBlock* TextBlock_quality; // Offset: 0x4a8 // Size: 0x08
	struct UWidgetSwitcher* WifiSignalWidgetSwitcher; // Offset: 0x4b0 // Size: 0x08

	// Functions

	// Object Name: Function IngamePhoneState_UIBP.IngamePhoneState_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngamePhoneState_UIBP.IngamePhoneState_UIBP_C.ExecuteUbergraph_IngamePhoneState_UIBP
	// Flags: [None]
	void ExecuteUbergraph_IngamePhoneState_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

