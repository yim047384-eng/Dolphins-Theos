#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BattlePopWeakTips.BattlePopWeakTips_C
// Size: 0x4b0 // Inherited bytes: 0x418
struct UBattlePopWeakTips_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* Anim_Tips_Out; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Anim_Tips_In; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* Tips2InAnimation3; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* Tips2InAnimation2; // Offset: 0x430 // Size: 0x08
	struct UWidgetAnimation* Tips2InAnimation1; // Offset: 0x438 // Size: 0x08
	struct UWidgetAnimation* Tips2OuntAnimation1; // Offset: 0x440 // Size: 0x08
	struct UBorder* Border_GameGuide; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* GameGuidePanel; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_Bg01; // Offset: 0x460 // Size: 0x08
	struct UImage* Image_GameGuide_New; // Offset: 0x468 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x470 // Size: 0x08
	struct UBorder* ImageBorder; // Offset: 0x478 // Size: 0x08
	struct UUTRichTextBlock* TipsContent; // Offset: 0x480 // Size: 0x08
	struct UUTRichTextBlock* TipsContent01; // Offset: 0x488 // Size: 0x08
	struct TArray<StrProperty> InAnimation; // Offset: 0x490 // Size: 0x10
	struct TArray<StrProperty> OutAnimation; // Offset: 0x4a0 // Size: 0x10
};

