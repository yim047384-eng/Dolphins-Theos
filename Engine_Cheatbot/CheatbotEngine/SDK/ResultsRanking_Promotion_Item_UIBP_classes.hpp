#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ResultsRanking_Promotion_Item_UIBP.ResultsRanking_Promotion_Item_UIBP_C
// Size: 0x310 // Inherited bytes: 0x260
struct UResultsRanking_Promotion_Item_UIBP_C : UUserWidget {
	// Fields
	struct UWidgetAnimation* Anim_Selected; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* Anim_Empty; // Offset: 0x268 // Size: 0x08
	struct UWidgetAnimation* Anim_Protect; // Offset: 0x270 // Size: 0x08
	struct UWidgetAnimation* Anim_Lose; // Offset: 0x278 // Size: 0x08
	struct UWidgetAnimation* Anim_Victory; // Offset: 0x280 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Lose; // Offset: 0x288 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_None; // Offset: 0x290 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Protect; // Offset: 0x298 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Selected; // Offset: 0x2a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Victory; // Offset: 0x2a8 // Size: 0x08
	struct UImage* Image_Fail; // Offset: 0x2b0 // Size: 0x08
	struct UImage* Image_Lose1; // Offset: 0x2b8 // Size: 0x08
	struct UImage* Image_Lose2; // Offset: 0x2c0 // Size: 0x08
	struct UImage* Image_None; // Offset: 0x2c8 // Size: 0x08
	struct UImage* Image_Protect; // Offset: 0x2d0 // Size: 0x08
	struct UImage* Image_Selected; // Offset: 0x2d8 // Size: 0x08
	struct UImage* Image_Selected1; // Offset: 0x2e0 // Size: 0x08
	struct UImage* Image_Selected2; // Offset: 0x2e8 // Size: 0x08
	struct UImage* Image_UnSelected; // Offset: 0x2f0 // Size: 0x08
	struct UImage* Image_Victory1; // Offset: 0x2f8 // Size: 0x08
	struct UImage* Image_Victory2; // Offset: 0x300 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Line; // Offset: 0x308 // Size: 0x08
};

