#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MicrophoneGuide_UIBP.MicrophoneGuide_UIBP_C
// Size: 0x328 // Inherited bytes: 0x2c8
struct UMicrophoneGuide_UIBP_C : ULuaUserWidget {
	// Fields
	struct UImage* FX_YY; // Offset: 0x2c8 // Size: 0x08
	struct UImage* FX_YYS; // Offset: 0x2d0 // Size: 0x08
	struct UImage* Image_Arrow; // Offset: 0x2d8 // Size: 0x08
	struct UOverlay* Overlay_Tips; // Offset: 0x2e0 // Size: 0x08
	struct UTextBlock* TextBlock_GuideText; // Offset: 0x2e8 // Size: 0x08
	IntProperty LocalShapeType; // Offset: 0x2f0 // Size: 0x04
	struct FVector2D LocalWidgetCenterPos; // Offset: 0x2f4 // Size: 0x08
	struct FVector2D LocalUIScreenSize; // Offset: 0x2fc // Size: 0x08
	IntProperty LocalAreaIndex; // Offset: 0x304 // Size: 0x04
	float LocalVerLineOffset; // Offset: 0x308 // Size: 0x04
	char pad_0x30C[0x4]; // Offset: 0x30c // Size: 0x04
	struct UWidget* LocalGuidWidget; // Offset: 0x310 // Size: 0x08
	float LocalLineHorLength; // Offset: 0x318 // Size: 0x04
	float LocalLineVertLength; // Offset: 0x31c // Size: 0x04
	struct FVector2D TextTipALignLoc; // Offset: 0x320 // Size: 0x08
};

