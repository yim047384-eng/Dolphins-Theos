#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SurviveInfoPanel.SurviveInfoPanel_C
// Size: 0x4c8 // Inherited bytes: 0x418
struct USurviveInfoPanel_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* Animation_Kill; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Animation_Remaining; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* Anima_Refresh; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* Animation_2; // Offset: 0x430 // Size: 0x08
	struct UButton* ButtonOpenDetail; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Killed; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Survive; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TotalValue; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_13; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_guide; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* InfoUpdateEffect; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* RecordHitInfoGunCanvas; // Offset: 0x470 // Size: 0x08
	struct UImage* Remaining10; // Offset: 0x478 // Size: 0x08
	struct UTextBlock* SlainCountText; // Offset: 0x480 // Size: 0x08
	struct UTextBlock* SlainCountText_Effect; // Offset: 0x488 // Size: 0x08
	struct UTextBlock* SurviveCountText; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* SurviveInfoPanel_Root; // Offset: 0x498 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_IsEffect; // Offset: 0x4a0 // Size: 0x08
	StrProperty SurviveCount; // Offset: 0x4a8 // Size: 0x10
	StrProperty SlainCount; // Offset: 0x4b8 // Size: 0x10
};

