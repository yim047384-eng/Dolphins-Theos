#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ShootingUI_AutoSprint.ShootingUI_AutoSprint_C
// Size: 0x2a0 // Inherited bytes: 0x260
struct UShootingUI_AutoSprint_C : UUserWidget {
	// Fields
	struct UWidgetAnimation* DX_Arrow; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* DX_RunLock; // Offset: 0x268 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_10; // Offset: 0x270 // Size: 0x08
	struct UCanvasPanel* MultiLayer_SprintPanel; // Offset: 0x278 // Size: 0x08
	struct UButton* Sprint; // Offset: 0x280 // Size: 0x08
	struct UImage* SprintBtnBG; // Offset: 0x288 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* SprintBtnPanel; // Offset: 0x290 // Size: 0x08
	struct UImage* SprintImg; // Offset: 0x298 // Size: 0x08
};

