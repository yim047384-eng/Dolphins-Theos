#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SecretArmory_ScreenMark_UIBP.SecretArmory_ScreenMark_UIBP_C
// Size: 0x660 // Inherited bytes: 0x630
struct USecretArmory_ScreenMark_UIBP_C : UNormalActorPositionWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x630 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x638 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x640 // Size: 0x08
	struct UTextBlock* DistanceText; // Offset: 0x648 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x650 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x658 // Size: 0x08

	// Functions

	// Object Name: Function SecretArmory_ScreenMark_UIBP.SecretArmory_ScreenMark_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SecretArmory_ScreenMark_UIBP.SecretArmory_ScreenMark_UIBP_C.ExecuteUbergraph_SecretArmory_ScreenMark_UIBP
	// Flags: [None]
	void ExecuteUbergraph_SecretArmory_ScreenMark_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

