#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass GrenadeMarkerItem_UIBP.GrenadeMarkerItem_UIBP_C
// Size: 0x4d8 // Inherited bytes: 0x488
struct UGrenadeMarkerItem_UIBP_C : ULuaUAEUserWidget {
	// Fields
	struct UWidgetAnimation* FreshAnimation; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Grenade; // Offset: 0x490 // Size: 0x08
	struct UImage* Image_Arrow; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_Icon_HL; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* MarkerPanel; // Offset: 0x4b8 // Size: 0x08
	struct FVector TargetLocation; // Offset: 0x4c0 // Size: 0x0c
	char pad_0x4CC[0x4]; // Offset: 0x4cc // Size: 0x04
	struct UCurveFloat* GrenadeTipsSpeedCurve; // Offset: 0x4d0 // Size: 0x08

	// Functions

	// Object Name: Function GrenadeMarkerItem_UIBP.GrenadeMarkerItem_UIBP_C.CalWorldToUIShowAngle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CalWorldToUIShowAngle(float& fAngle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

