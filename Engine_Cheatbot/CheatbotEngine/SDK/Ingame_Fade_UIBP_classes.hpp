#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Ingame_Fade_UIBP.Ingame_Fade_UIBP_C
// Size: 0x438 // Inherited bytes: 0x418
struct UIngame_Fade_UIBP_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* FadeOut_Anim; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* StopFade; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* Fade_anima; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x430 // Size: 0x08

	// Functions

	// Object Name: Function Ingame_Fade_UIBP.Ingame_Fade_UIBP_C.MaskEnable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MaskEnable(bool Enable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Ingame_Fade_UIBP.Ingame_Fade_UIBP_C.MaskFade
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MaskFade(float StartAtTime, float Rate, bool FadeOut); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)
};

