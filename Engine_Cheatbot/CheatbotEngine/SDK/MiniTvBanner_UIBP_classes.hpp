#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MiniTvBanner_UIBP.MiniTvBanner_UIBP_C
// Size: 0x57a // Inherited bytes: 0x530
struct UMiniTvBanner_UIBP_C : UMapUIMarkBaseWidget {
	// Fields
	struct UWidgetAnimation* Animation_Open; // Offset: 0x530 // Size: 0x08
	struct UButton* Button_Click; // Offset: 0x538 // Size: 0x08
	struct UButton* Button_Close; // Offset: 0x540 // Size: 0x08
	struct UImage* Image_Picture; // Offset: 0x548 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_1; // Offset: 0x550 // Size: 0x08
	struct UUTRichTextBlock* Text_Desc; // Offset: 0x558 // Size: 0x08
	struct UUTRichTextBlock* Text_Title; // Offset: 0x560 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x568 // Size: 0x08
	struct UWrapBox* WrapBox_Plan; // Offset: 0x570 // Size: 0x08
	bool bIsRight; // Offset: 0x578 // Size: 0x01
	bool bIsDown; // Offset: 0x579 // Size: 0x01
};

