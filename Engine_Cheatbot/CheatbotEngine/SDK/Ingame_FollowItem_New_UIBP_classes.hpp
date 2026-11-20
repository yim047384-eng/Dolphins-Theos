#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Ingame_FollowItem_New_UIBP.Ingame_FollowItem_New_UIBP_C
// Size: 0x4b8 // Inherited bytes: 0x418
struct UIngame_FollowItem_New_UIBP_C : UUAEUserWidget {
	// Fields
	struct UButton* Button_CancelFollow; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_Follow; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_FollowTeammate; // Offset: 0x428 // Size: 0x08
	struct UButton* Button_InviteTeammate; // Offset: 0x430 // Size: 0x08
	struct UButton* Button_UnableFollowTeammate; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_UnableInviteTeammate; // Offset: 0x440 // Size: 0x08
	struct UButton* CancelFollowBtn; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Follow; // Offset: 0x450 // Size: 0x08
	struct UImage* FollowBtnImage; // Offset: 0x458 // Size: 0x08
	struct UWidgetSwitcher* FollowCancelSwitcher; // Offset: 0x460 // Size: 0x08
	struct UWidgetSwitcher* FollowSwitcher; // Offset: 0x468 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Follow; // Offset: 0x470 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x478 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x480 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x488 // Size: 0x08
	struct UWidgetSwitcher* InviteSwitcher; // Offset: 0x490 // Size: 0x08
	struct UImage* Loading; // Offset: 0x498 // Size: 0x08
	struct UTextBlock* TextBlock_Btn1; // Offset: 0x4a0 // Size: 0x08
	struct UTextBlock* TextBlock_Btn2; // Offset: 0x4a8 // Size: 0x08
	struct UTextBlock* TextBlock_Follow; // Offset: 0x4b0 // Size: 0x08
};

