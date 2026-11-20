#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass VirtualJoystick.VirtualJoystick_C
// Size: 0x2c8 // Inherited bytes: 0x260
struct UVirtualJoystick_C : UUserWidget {
	// Fields
	struct UWidgetAnimation* DX_Arrow; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* DX_RunLock; // Offset: 0x268 // Size: 0x08
	struct UImage* AutoSprintImage; // Offset: 0x270 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ArrowVfxGroup; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AutoNavigate; // Offset: 0x280 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_RunState; // Offset: 0x288 // Size: 0x08
	struct UCustomPanel* CustomPanel_Joystick; // Offset: 0x290 // Size: 0x08
	struct UImage* FX_Scaleimage; // Offset: 0x298 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_KeepRunningTips; // Offset: 0x2a0 // Size: 0x08
	struct UOverlay* Overlay_Joystick; // Offset: 0x2a8 // Size: 0x08
	struct UTextBlock* TextBlock_KeepSprint; // Offset: 0x2b0 // Size: 0x08
	struct UTextBlock* TextBlock_Sprinting; // Offset: 0x2b8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Run; // Offset: 0x2c0 // Size: 0x08
};

