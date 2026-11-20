#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Common_UIPopupBG.Common_UIPopupBG_C
// Size: 0x278 // Inherited bytes: 0x260
struct UCommon_UIPopupBG_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x268 // Size: 0x08
	struct UImage* Image_Mask; // Offset: 0x270 // Size: 0x08

	// Functions

	// Object Name: Function Common_UIPopupBG.Common_UIPopupBG_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_UIPopupBG.Common_UIPopupBG_C.ExecuteUbergraph_Common_UIPopupBG
	// Flags: [None]
	void ExecuteUbergraph_Common_UIPopupBG(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

