#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass WatchGame_UIBP.WatchGame_UIBP_C
// Size: 0xac8 // Inherited bytes: 0x488
struct UWatchGame_UIBP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetSwitcher* AppointmentSwitch; // Offset: 0x490 // Size: 0x08
	struct UBorder* Border_1; // Offset: 0x498 // Size: 0x08
	struct UButton* Button_2; // Offset: 0x4a0 // Size: 0x08
	struct UButton* Button_AddFriend; // Offset: 0x4a8 // Size: 0x08
	struct UButton* Button_BackToLobby; // Offset: 0x4b0 // Size: 0x08
	struct UButton* Button_Card; // Offset: 0x4b8 // Size: 0x08
	struct UButton* Button_Card01; // Offset: 0x4c0 // Size: 0x08
	struct UButton* Button_ChangeFreeCamState; // Offset: 0x4c8 // Size: 0x08
	struct UButton* Button_CollectPetList; // Offset: 0x4d0 // Size: 0x08
	struct UButton* Button_HawkBroadcast; // Offset: 0x4d8 // Size: 0x08
	struct UButton* Button_HawkImprison; // Offset: 0x4e0 // Size: 0x08
	struct UButton* Button_HawkRelease; // Offset: 0x4e8 // Size: 0x08
	struct UButton* Button_Imprison; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_LenDown; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_LenUp; // Offset: 0x500 // Size: 0x08
	struct UButton* Button_Like01; // Offset: 0x508 // Size: 0x08
	struct UButton* Button_Like02; // Offset: 0x510 // Size: 0x08
	struct UButton* Button_Next; // Offset: 0x518 // Size: 0x08
	struct UButton* Button_OpenHawkEyeReport; // Offset: 0x520 // Size: 0x08
	struct UButton* Button_PetSpectate; // Offset: 0x528 // Size: 0x08
	struct UButton* Button_PlayerList; // Offset: 0x530 // Size: 0x08
	struct UButton* Button_Release; // Offset: 0x538 // Size: 0x08
	struct UButton* Button_Report; // Offset: 0x540 // Size: 0x08
	struct UButton* Button_Report01; // Offset: 0x548 // Size: 0x08
	struct UButton* Button_Rp01; // Offset: 0x550 // Size: 0x08
	struct UButton* Button_ShowImprisonPanel; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_11; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_34; // Offset: 0x568 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_37; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_84; // Offset: 0x578 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Appointment; // Offset: 0x580 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Buttons; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CDtime; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_FreeCamLength; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_HawkBroadcast; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_HawkFreeCam; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_HawkImprison; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ImprisonPanel; // Offset: 0x5b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PetCD; // Offset: 0x5c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PetSpectate; // Offset: 0x5c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PlayerName; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Request; // Offset: 0x5d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x5e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Tips; // Offset: 0x5e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_tishi; // Offset: 0x5f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanelInGamePlayerInfo; // Offset: 0x5f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanelIPX; // Offset: 0x600 // Size: 0x08
	struct UCanvasPanel* CanvasPanelWatchGame; // Offset: 0x608 // Size: 0x08
	struct UCommon_BackgroundBlur_C* Common_BackgroundBlur; // Offset: 0x610 // Size: 0x08
	struct UCommon_UIPopupBG_C* Common_UIPopupBG; // Offset: 0x618 // Size: 0x08
	struct UGridPanel* GridPanel_DeathReplay; // Offset: 0x620 // Size: 0x08
	struct UGridPanel* GridPanel_Exit; // Offset: 0x628 // Size: 0x08
	struct UGridPanel* GridPanel_IPX; // Offset: 0x630 // Size: 0x08
	struct UGridPanel* GridPanel_PlayerList; // Offset: 0x638 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x640 // Size: 0x08
	struct UImage* Image_8; // Offset: 0x648 // Size: 0x08
	struct UImage* Image_9; // Offset: 0x650 // Size: 0x08
	struct UImage* Image_24; // Offset: 0x658 // Size: 0x08
	struct UImage* Image_36; // Offset: 0x660 // Size: 0x08
	struct UImage* Image_41; // Offset: 0x668 // Size: 0x08
	struct UImage* Image_47; // Offset: 0x670 // Size: 0x08
	struct UImage* Image_50; // Offset: 0x678 // Size: 0x08
	struct UImage* Image_51; // Offset: 0x680 // Size: 0x08
	struct UImage* Image_52; // Offset: 0x688 // Size: 0x08
	struct UImage* Image_53; // Offset: 0x690 // Size: 0x08
	struct UImage* Image_54; // Offset: 0x698 // Size: 0x08
	struct UImage* Image_56; // Offset: 0x6a0 // Size: 0x08
	struct UImage* Image_57; // Offset: 0x6a8 // Size: 0x08
	struct UImage* Image_62; // Offset: 0x6b0 // Size: 0x08
	struct UImage* Image_CDTime; // Offset: 0x6b8 // Size: 0x08
	struct UImage* Image_CurPet; // Offset: 0x6c0 // Size: 0x08
	struct UImage* Image_Down; // Offset: 0x6c8 // Size: 0x08
	struct UImage* Image_Normal; // Offset: 0x6d0 // Size: 0x08
	struct UImage* Image_UP; // Offset: 0x6d8 // Size: 0x08
	struct UButton* requestBtn; // Offset: 0x6e0 // Size: 0x08
	struct UButton* reverseBtn; // Offset: 0x6e8 // Size: 0x08
	struct UScaleBox* ScaleBox_PetSpectate; // Offset: 0x6f0 // Size: 0x08
	struct USizeBox* SizeBox_RoleInfo; // Offset: 0x6f8 // Size: 0x08
	struct USizeBox* SizeBox_SkillCard; // Offset: 0x700 // Size: 0x08
	struct UTextBlock* Text_Time; // Offset: 0x708 // Size: 0x08
	struct UTextBlock* Text_TimeLeft; // Offset: 0x710 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x718 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x720 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x728 // Size: 0x08
	struct UTextBlock* TextBlock_5; // Offset: 0x730 // Size: 0x08
	struct UTextBlock* TextBlock_6; // Offset: 0x738 // Size: 0x08
	struct UTextBlock* TextBlock_7; // Offset: 0x740 // Size: 0x08
	struct UTextBlock* TextBlock_9; // Offset: 0x748 // Size: 0x08
	struct UTextBlock* TextBlock_10; // Offset: 0x750 // Size: 0x08
	struct UTextBlock* TextBlock_11; // Offset: 0x758 // Size: 0x08
	struct UTextBlock* TextBlock_12; // Offset: 0x760 // Size: 0x08
	struct UTextBlock* TextBlock_13; // Offset: 0x768 // Size: 0x08
	struct UTextBlock* TextBlock_14; // Offset: 0x770 // Size: 0x08
	struct UTextBlock* TextBlock_CD1; // Offset: 0x778 // Size: 0x08
	struct UTextBlock* TextBlock_enemy; // Offset: 0x780 // Size: 0x08
	struct UTextBlock* TextBlock_friend; // Offset: 0x788 // Size: 0x08
	struct UTextBlock* TextBlock_HawkEye; // Offset: 0x790 // Size: 0x08
	struct UTextBlock* TextBlock_HawkImprision; // Offset: 0x798 // Size: 0x08
	struct UTextBlock* TextBlock_HawkRelease; // Offset: 0x7a0 // Size: 0x08
	struct UTextBlock* TextBlock_ImprisonContent; // Offset: 0x7a8 // Size: 0x08
	struct UTextBlock* TextBlock_Namber; // Offset: 0x7b0 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName; // Offset: 0x7b8 // Size: 0x08
	struct UTextBlock* TextBlock_Team; // Offset: 0x7c0 // Size: 0x08
	struct UTextBlock* TextBlock_Time; // Offset: 0x7c8 // Size: 0x08
	struct UTextBlock* TextBlock_UID; // Offset: 0x7d0 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_1; // Offset: 0x7d8 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_2; // Offset: 0x7e0 // Size: 0x08
	struct UVerticalBox* VerticalBox_ButtonGroup; // Offset: 0x7e8 // Size: 0x08
	struct UVerticalBox* VerticalBox_Imprisonment; // Offset: 0x7f0 // Size: 0x08
	struct UVerticalBox* VerticalBox_PetList; // Offset: 0x7f8 // Size: 0x08
	struct UVerticalBox* VerticalBox_PlayerList; // Offset: 0x800 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_4; // Offset: 0x808 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_AddFriend; // Offset: 0x810 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Card; // Offset: 0x818 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Card01; // Offset: 0x820 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_FreeCamButtonState; // Offset: 0x828 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Imprison; // Offset: 0x830 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Name; // Offset: 0x838 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_PetlistArrow; // Offset: 0x840 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_PlayerList; // Offset: 0x848 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Release; // Offset: 0x850 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Rp01; // Offset: 0x858 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ShowImprisonPanel; // Offset: 0x860 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Ui; // Offset: 0x868 // Size: 0x08
	struct TArray<struct UWatchGame_ListItem_UIBP_C*> TeamMateItems; // Offset: 0x870 // Size: 0x10
	IntProperty CurIndex; // Offset: 0x880 // Size: 0x04
	IntProperty CurPlayerId; // Offset: 0x884 // Size: 0x04
	float TimeOutElapse; // Offset: 0x888 // Size: 0x04
	bool IsTickTimeOut; // Offset: 0x88c // Size: 0x01
	char pad_0x88D[0x3]; // Offset: 0x88d // Size: 0x03
	struct FSlateBrush ReservationOKIcon; // Offset: 0x890 // Size: 0xb8
	struct FSlateBrush ReservationCancelIcon; // Offset: 0x948 // Size: 0xb8
	bool WatchPlayerInfoButtonDailyFirstShow; // Offset: 0xa00 // Size: 0x01
	char pad_0xA01[0x7]; // Offset: 0xa01 // Size: 0x07
	StrProperty ShowPlayerUID; // Offset: 0xa08 // Size: 0x10
	bool IsDelayShowGameEnd; // Offset: 0xa18 // Size: 0x01
	bool displayNameSetted; // Offset: 0xa19 // Size: 0x01
	char pad_0xA1A[0x2]; // Offset: 0xa1a // Size: 0x02
	float TimeToCheckDisplayName; // Offset: 0xa1c // Size: 0x04
	float NowInSecond; // Offset: 0xa20 // Size: 0x04
	char pad_0xA24[0x4]; // Offset: 0xa24 // Size: 0x04
	StrProperty CurrentWatchPlayerUID; // Offset: 0xa28 // Size: 0x10
	bool bInitStateListener; // Offset: 0xa38 // Size: 0x01
	char pad_0xA39[0x7]; // Offset: 0xa39 // Size: 0x07
	struct UUserWidget* watchGameUAVUI; // Offset: 0xa40 // Size: 0x08
	MapProperty AlreadyAddFriend; // Offset: 0xa48 // Size: 0x50
	bool bIsCanRequest; // Offset: 0xa98 // Size: 0x01
	char pad_0xA99[0x3]; // Offset: 0xa99 // Size: 0x03
	float RequestReviveCD; // Offset: 0xa9c // Size: 0x04
	float CurReviveCD; // Offset: 0xaa0 // Size: 0x04
	char pad_0xAA4[0x4]; // Offset: 0xaa4 // Size: 0x04
	struct FTimerHandle ReviveTimerHandler; // Offset: 0xaa8 // Size: 0x08
	struct FTimerHandle AddFriendButtonRefreshTimerHandle; // Offset: 0xab0 // Size: 0x08
	struct TArray<struct FSlateBrush> ReviveBrush; // Offset: 0xab8 // Size: 0x10

	// Functions

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.LuaOnViewTeamateChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LuaOnViewTeamateChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshAddFriendData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshAddFriendData(StrProperty CurPlayerUIDString); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.GetSpectatingPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetSpectatingPawn(struct APawn*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShowOrHideHawkFreeCam
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowOrHideHawkFreeCam(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShouldAutoSelectWhenInit
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShouldAutoSelectWhenInit(bool& bShoud); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.InitPetSpectateButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPetSpectateButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShoworHideImprisonment
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShoworHideImprisonment(bool bIsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.CloseBattleEndedTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CloseBattleEndedTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.SetRPBtnState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetRPBtnState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnCreativeModeBackToLobbyBtnClicked
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnCreativeModeBackToLobbyBtnClicked(bool& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshAllItemsInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshAllItemsInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.UpdateRequestButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateRequestButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HawkEyeShowWatchEndTipsIfCharacterIsDead
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void HawkEyeShowWatchEndTipsIfCharacterIsDead(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnClickOpenHawkEyeReport
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClickOpenHawkEyeReport(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.IsHawkEyeSpectator
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsHawkEyeSpectator(bool& bIsHawkEyeSpectator); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnShowForHawkEye
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnShowForHawkEye(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.SetAddFriendButtonClickable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetAddFriendButtonClickable(bool IsClickable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.UpdateRequestBtnVisibility
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateRequestBtnVisibility(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.UpdateRequestBtnCD
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateRequestBtnCD(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.CheckIsShowRequestBtn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckIsShowRequestBtn(bool isShowTips); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshPlayerList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshPlayerList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnClickedPlayerList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClickedPlayerList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshAddFriendButton
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshAddFriendButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnClickedButtonCard
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClickedButtonCard(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnClickedButtonReport
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClickedButtonReport(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.InitStateListener
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitStateListener(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ProcessUAVState
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ProcessUAVState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.InitAppointmentState
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitAppointmentState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HandleSendGiftNotify
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleSendGiftNotify(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnEnterSpectatingInWarMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnEnterSpectatingInWarMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HandleSpectateGiveUpRevive
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleSpectateGiveUpRevive(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShowReviveStateRemindTips
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShowReviveStateRemindTips(bool& isShowTips); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HideSomeUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideSomeUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HideInGamePlayerInfoUIButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideInGamePlayerInfoUIButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShowInGamePlayerInfoUIButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowInGamePlayerInfoUIButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HandleAndroidBackInWatchGameUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleAndroidBackInWatchGameUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshWatchPlayerItemsList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWatchPlayerItemsList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.InitInGamePlayerInfoUIButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitInGamePlayerInfoUIButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.SwitchHDRMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchHDRMode(bool IsHDR); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.GetAvatarCaptureInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetAvatarCaptureInfo(struct AAvatarCapture*& AvatarCaptureInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HideAllTeammateListItems
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAllTeammateListItems(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshWatchType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWatchType(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ExitWatchGame
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ExitWatchGame(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShutDownNet
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShutDownNet(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.CancelTimeOut
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CancelTimeOut(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.TickTimeOutExit
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void TickTimeOutExit(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnWatchFriendBattleEnd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnWatchFriendBattleEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.SetSelectedTeamate
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetSelectedTeamate(IntProperty PlayerID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.HideSpectatingUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideSpectatingUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShowLoadingUI
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowLoadingUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.GetTeammateList
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetTeammateList(struct TArray<struct ASTExtraPlayerState*>& RetList); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnRepTeammateStateChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnRepTeammateStateChanged(enum class ExtraPlayerLiveState LiveState, struct ACharacter* TarChar); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.AutoSelectTeamMate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AutoSelectTeamMate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.RefreshArrow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshArrow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.InitTeammate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitTeammate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.SetSelectBtn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSelectBtn(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnSelectTeammate
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnSelectTeammate(IntProperty PlayerID, IntProperty BtnIndex, StrProperty PlayerName, StrProperty PlayerUID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.InitUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ShowSpectatingUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowSpectatingUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__reverseBtn_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__reverseBtn_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnHDRSettingChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnHDRSettingChanged(IntProperty UserQualitySettingLevel); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.OnViewTeamateChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnViewTeamateChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_390_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_390_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_AddFriend_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_AddFriend_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_894_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_894_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ReceiveShow
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__requestBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__requestBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Destruct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_BackToLobby_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_BackToLobby_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_Report01_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Report01_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_Card01_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Card01_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.DelayReturnToLobby
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayReturnToLobby(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_UIBP.WatchGame_UIBP_C.ExecuteUbergraph_WatchGame_UIBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_WatchGame_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

