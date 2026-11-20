#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Com_MsgBox_Slua_UIBP.Com_MsgBox_Slua_UIBP_C
// Size: 0x388 // Inherited bytes: 0x260
struct UCom_MsgBox_Slua_UIBP_C : UUserWidget {
	// Fields
	struct UWidgetAnimation* Anim_Enter; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* Anim_Out_Temp; // Offset: 0x268 // Size: 0x08
	struct UWidgetAnimation* Anim_In_Temp; // Offset: 0x270 // Size: 0x08
	struct UButton* Button_Cancel; // Offset: 0x278 // Size: 0x08
	struct UButton* Button_Countdown; // Offset: 0x280 // Size: 0x08
	struct UButton* Button_DifferentTeams; // Offset: 0x288 // Size: 0x08
	struct UButton* Button_OK; // Offset: 0x290 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD; // Offset: 0x298 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Explain; // Offset: 0x2a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_UC_Explain; // Offset: 0x2a8 // Size: 0x08
	struct UCheckBox* CheckBox_DifferentTeams; // Offset: 0x2b0 // Size: 0x08
	struct UCheckBox* CheckBox_Option; // Offset: 0x2b8 // Size: 0x08
	struct UTextBlock* CheckBox_OptionText; // Offset: 0x2c0 // Size: 0x08
	struct UCommon_Popup_MediumSmall_UIBP_C* Common_Popup_MediumSmall_UIBP; // Offset: 0x2c8 // Size: 0x08
	struct UHorizontalBox* dingyue_tips; // Offset: 0x2d0 // Size: 0x08
	struct UHorizontalBox* HBox_Button; // Offset: 0x2d8 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_DifferentTeams; // Offset: 0x2e0 // Size: 0x08
	struct UCanvasPanel* HorizontalBox_URL; // Offset: 0x2e8 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x2f0 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x2f8 // Size: 0x08
	struct UImage* Image_OKBg; // Offset: 0x300 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_Item; // Offset: 0x308 // Size: 0x08
	struct UUTRichTextBlock* RichText_Content; // Offset: 0x310 // Size: 0x08
	struct UUTRichTextBlock* RichText_ContentCentauri; // Offset: 0x318 // Size: 0x08
	struct UUTRichTextBlock* RichText_UrlTips; // Offset: 0x320 // Size: 0x08
	struct UScrollBox* ScrollBox_1; // Offset: 0x328 // Size: 0x08
	struct UScrollBox* ScrollBox_Msg; // Offset: 0x330 // Size: 0x08
	struct USizeBox* SizeBox_Item; // Offset: 0x338 // Size: 0x08
	struct UTextBlock* Text_Cancel; // Offset: 0x340 // Size: 0x08
	struct UTextBlock* Text_Countdown; // Offset: 0x348 // Size: 0x08
	struct UTextBlock* Text_OK; // Offset: 0x350 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x358 // Size: 0x08
	struct UUTRichTextBlock* TextBlock_3; // Offset: 0x360 // Size: 0x08
	struct UTextBlock* TextBlock_CD; // Offset: 0x368 // Size: 0x08
	struct UUTRichTextBlock* TextBlock_UC_Explain; // Offset: 0x370 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x378 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Font; // Offset: 0x380 // Size: 0x08

	// Functions

	// Object Name: Function Com_MsgBox_Slua_UIBP.Com_MsgBox_Slua_UIBP_C.SetButtonOkState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetButtonOkState(bool bInIsEnabled); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

