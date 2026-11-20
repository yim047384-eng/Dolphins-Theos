#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Parachuting_UIBP.Parachuting_UIBP_C
// Size: 0x488 // Inherited bytes: 0x418
struct UParachuting_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* BtnAutoParachute; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* Canvas_AutoParachuteTips; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AutoJump; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_15; // Offset: 0x438 // Size: 0x08
	struct UTextBlock* Text_Tips; // Offset: 0x440 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_5; // Offset: 0x450 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x458 // Size: 0x08
	struct USettingConfig_C* SettingConfigObj; // Offset: 0x460 // Size: 0x28

	// Functions

	// Object Name: Function Parachuting_UIBP.Parachuting_UIBP_C.ExecuteUbergraph_Parachuting_UIBP
	// Flags: [None]
	void ExecuteUbergraph_Parachuting_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

