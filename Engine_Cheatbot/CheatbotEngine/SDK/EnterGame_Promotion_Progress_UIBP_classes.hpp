#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass EnterGame_Promotion_Progress_UIBP.EnterGame_Promotion_Progress_UIBP_C
// Size: 0x2d8 // Inherited bytes: 0x260
struct UEnterGame_Promotion_Progress_UIBP_C : UUserWidget {
	// Fields
	struct UWidgetAnimation* FadeOut; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* FadeIn; // Offset: 0x268 // Size: 0x08
	struct UWidgetAnimation* Anim_Protect; // Offset: 0x270 // Size: 0x08
	struct UButton* Button_Close; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CloseText; // Offset: 0x280 // Size: 0x08
	struct UCommon_BackgroundBlur_C* Common_BackgroundBlur; // Offset: 0x288 // Size: 0x08
	struct UCommon_RankIntegralLevel_Style_Large_UIBP_C* Common_RankIntegralLevel_Style_Large_UIBP; // Offset: 0x290 // Size: 0x08
	struct UCommon_UIPopupBG_C* Common_UIPopupBG; // Offset: 0x298 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_Result; // Offset: 0x2a0 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x2a8 // Size: 0x08
	struct UTextBlock* TextBlock_Desc; // Offset: 0x2b0 // Size: 0x08
	struct UTextBlock* TextBlock_Protected; // Offset: 0x2b8 // Size: 0x08
	struct UTextBlock* TextBlock_Title1; // Offset: 0x2c0 // Size: 0x08
	struct UTextBlock* TextBlock_Unprotected; // Offset: 0x2c8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_4; // Offset: 0x2d0 // Size: 0x08
};

