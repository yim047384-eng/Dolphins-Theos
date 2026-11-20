#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Common_BackgroundBlur.Common_BackgroundBlur_C
// Size: 0x42c // Inherited bytes: 0x418
struct UCommon_BackgroundBlur_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UBackgroundBlur* BlurComponent; // Offset: 0x420 // Size: 0x08
	float Component; // Offset: 0x428 // Size: 0x04

	// Functions

	// Object Name: Function Common_BackgroundBlur.Common_BackgroundBlur_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Common_BackgroundBlur.Common_BackgroundBlur_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_BackgroundBlur.Common_BackgroundBlur_C.ExecuteUbergraph_Common_BackgroundBlur
	// Flags: [None]
	void ExecuteUbergraph_Common_BackgroundBlur(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

