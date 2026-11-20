#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MainControlBaseUI.MainControlBaseUI_C
// Size: 0x90f // Inherited bytes: 0x488
struct UMainControlBaseUI_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Anim_TeamTips; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* Anim_Collect; // Offset: 0x498 // Size: 0x08
	struct UWidgetAnimation* Anim_TipsFly; // Offset: 0x4a0 // Size: 0x08
	struct UWidgetAnimation* Anim_SpreadFX; // Offset: 0x4a8 // Size: 0x08
	struct UWidgetAnimation* Chat_Bar; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* BackpackClothingEntryUIRoot; // Offset: 0x4b8 // Size: 0x08
	struct UBackPackPickUpPanel_BP_C* BackPackPickUpPanel_BP; // Offset: 0x4c0 // Size: 0x08
	struct UBasicSkillsMenu_BP_C* BasicSkillsMenu_BP; // Offset: 0x4c8 // Size: 0x08
	struct UBorder* Border_Close; // Offset: 0x4d0 // Size: 0x08
	struct UBorder* Border_Normal; // Offset: 0x4d8 // Size: 0x08
	struct UBorder* Border_Sigh_yellow; // Offset: 0x4e0 // Size: 0x08
	struct UBtnEnterSelfie_C* BtnEnterSelfie; // Offset: 0x4e8 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_B_Sigh_yellow; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_Border_close; // Offset: 0x500 // Size: 0x08
	struct UButton* Button_ExitTraining; // Offset: 0x508 // Size: 0x08
	struct UButton* Button_GameGuide; // Offset: 0x510 // Size: 0x08
	struct UButton* Button_IngameGM; // Offset: 0x518 // Size: 0x08
	struct UButton* Button_one; // Offset: 0x520 // Size: 0x08
	struct UButton* Button_ReportBug; // Offset: 0x528 // Size: 0x08
	struct UButton* Button_tow; // Offset: 0x530 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasEnterReportBug; // Offset: 0x538 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x540 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x548 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_8; // Offset: 0x550 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_11; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_12; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_13; // Offset: 0x568 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_14; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_16; // Offset: 0x578 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_43; // Offset: 0x580 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ActorUISlot; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AutoJoinPanel; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ChangeSight; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CircleMiniMap; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CircleMinimapRoot; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CircleTipsPanel; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CountDown; // Offset: 0x5b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Countdown1; // Offset: 0x5c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DontHide; // Offset: 0x5c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DummyRoot; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_EnemyLaunchRocketTip; // Offset: 0x5d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ForTips; // Offset: 0x5e0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_FreeCamera; // Offset: 0x5e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_FreeCamera_SubPanel; // Offset: 0x5f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_GameGuideTips; // Offset: 0x5f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Hit; // Offset: 0x600 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_HItTips; // Offset: 0x608 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_KickOutTip; // Offset: 0x610 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LeadATeam; // Offset: 0x618 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_MiniMapAndSetting; // Offset: 0x620 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_OBAttackerTips; // Offset: 0x628 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Plan; // Offset: 0x630 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PlanPH; // Offset: 0x638 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PlanPH_PK; // Offset: 0x640 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_QuickSign; // Offset: 0x648 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_RightTips; // Offset: 0x650 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Ring; // Offset: 0x658 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ShowOffTips; // Offset: 0x660 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SpeechToText; // Offset: 0x668 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Timing; // Offset: 0x670 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Uav_FlightTip; // Offset: 0x678 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ZTK; // Offset: 0x680 // Size: 0x08
	struct UCanvasPanel* CanvasPanelForPlayerInfo; // Offset: 0x688 // Size: 0x08
	struct UCanvasPanel* CanvasPanelSurviveKill; // Offset: 0x690 // Size: 0x08
	struct UCanvasPanel* CanvasQickMsgTurnplate; // Offset: 0x698 // Size: 0x08
	struct UCanvasPanel* Chat; // Offset: 0x6a0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* ChatAndChatPanelCanvas; // Offset: 0x6a8 // Size: 0x08
	struct UCircleChasingProgress_C* CircleChasingProgress; // Offset: 0x6b0 // Size: 0x08
	struct UTextBlock* CircleTips; // Offset: 0x6b8 // Size: 0x08
	struct UImage* CircleTipsBG; // Offset: 0x6c0 // Size: 0x08
	struct UCanvasPanel* Emote_DrivingControl; // Offset: 0x6c8 // Size: 0x08
	struct UCanvasPanel* Emote_FlyingControl; // Offset: 0x6d0 // Size: 0x08
	struct UCanvasPanel* Emote_SettingControl; // Offset: 0x6d8 // Size: 0x08
	struct UCanvasPanel* Emote_SpectatingControl; // Offset: 0x6e0 // Size: 0x08
	struct UCanvasPanel* Emote_SwimingControl; // Offset: 0x6e8 // Size: 0x08
	struct UMultiEventsButton_C* EntireMapTrigger; // Offset: 0x6f0 // Size: 0x08
	struct UImage* FakeOceanImage; // Offset: 0x6f8 // Size: 0x08
	struct UGridPanel* GridPanel_SmallMap; // Offset: 0x700 // Size: 0x08
	struct UGuideCanvasPanel_C* GuideCanvasPanel_GamePlayGuide; // Offset: 0x708 // Size: 0x08
	struct UGuideCanvasPanel_C* GuideCanvasPanel_MiniMapFull; // Offset: 0x710 // Size: 0x08
	struct UImage* Image_25; // Offset: 0x718 // Size: 0x08
	struct UImage* Image_26; // Offset: 0x720 // Size: 0x08
	struct UImage* Image_141; // Offset: 0x728 // Size: 0x08
	struct UImage* Image_145; // Offset: 0x730 // Size: 0x08
	struct UImage* Image_A_L; // Offset: 0x738 // Size: 0x08
	struct UImage* Image_A_R; // Offset: 0x740 // Size: 0x08
	struct UImage* Image_ChatBG; // Offset: 0x748 // Size: 0x08
	struct UImage* Image_ChatBtnNormalBG; // Offset: 0x750 // Size: 0x08
	struct UImage* Image_ChatCDBar; // Offset: 0x758 // Size: 0x08
	struct UImage* Image_GameGuide_New; // Offset: 0x760 // Size: 0x08
	struct UImage* Image_GameGuideDX01; // Offset: 0x768 // Size: 0x08
	struct UImage* Image_GameGuideDX02; // Offset: 0x770 // Size: 0x08
	struct UImage* Image_Hot; // Offset: 0x778 // Size: 0x08
	struct UImage* Image_OpeningPoint; // Offset: 0x780 // Size: 0x08
	struct UImage* Image_PlayerMark01; // Offset: 0x788 // Size: 0x08
	struct UImage* Image_SelectedChatCircle; // Offset: 0x790 // Size: 0x08
	struct UImage* Image_Sigh_yellow; // Offset: 0x798 // Size: 0x08
	struct UImage* ImageHitBlood; // Offset: 0x7a0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x7a8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_4; // Offset: 0x7b0 // Size: 0x08
	struct USTInvalidationBox* InvalidationBox_6; // Offset: 0x7b8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_10; // Offset: 0x7c0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_GM; // Offset: 0x7c8 // Size: 0x08
	struct UCanvasPanel* MINIMAP; // Offset: 0x7d0 // Size: 0x08
	struct UBorder* MiniMapAndSettingBorder; // Offset: 0x7d8 // Size: 0x08
	struct UCanvasPanel* MiniMapBox; // Offset: 0x7e0 // Size: 0x08
	struct UCanvasPanel* MiniMapPanel; // Offset: 0x7e8 // Size: 0x08
	struct UModCanvasParent_C* ModUIMountPanel; // Offset: 0x7f0 // Size: 0x08
	struct UButton* MultiButton_EntireMapTrigger; // Offset: 0x7f8 // Size: 0x08
	struct UFreeCameraBtn_C* NewFreeCameraBtn; // Offset: 0x800 // Size: 0x08
	struct UCanvasPanel* PanelGameGuideTips; // Offset: 0x808 // Size: 0x08
	struct UProgressBar* ProgressBar_Countdown; // Offset: 0x810 // Size: 0x08
	struct UTextBlock* ReportingText; // Offset: 0x818 // Size: 0x08
	struct UCanvasPanel* ResurrectionMode; // Offset: 0x820 // Size: 0x08
	struct URetainerBox* RetainerBox_CircleMiniMap; // Offset: 0x828 // Size: 0x08
	struct UCanvasPanel* SignalMode; // Offset: 0x830 // Size: 0x08
	struct UCanvasPanel* SpeakerCanvasPanel; // Offset: 0x838 // Size: 0x08
	struct USTInvalidationBox* STInvalidationBox_2; // Offset: 0x840 // Size: 0x08
	struct UTextBlock* TextBlock_7; // Offset: 0x848 // Size: 0x08
	struct UTextBlock* TextBlock_17; // Offset: 0x850 // Size: 0x08
	struct UTextBlock* TextBlock_BID; // Offset: 0x858 // Size: 0x08
	struct UTextBlock* TextBlock_Dis; // Offset: 0x860 // Size: 0x08
	struct UTextBlock* TextBlock_GMUI; // Offset: 0x868 // Size: 0x08
	struct UTextBlock* TextBlock_Hour; // Offset: 0x870 // Size: 0x08
	struct UTextBlock* TextBlock_LeadATeam; // Offset: 0x878 // Size: 0x08
	struct UTextBlock* TextBlock_ModeName; // Offset: 0x880 // Size: 0x08
	struct UCanvasPanel* Tips13; // Offset: 0x888 // Size: 0x08
	struct UCanvasPanel* TmodePanel; // Offset: 0x890 // Size: 0x08
	struct UCanvasPanel* TrainingCourse; // Offset: 0x898 // Size: 0x08
	struct UTurnplateBtn_UIBP_C* TurnplateBtn_UIBP_1; // Offset: 0x8a0 // Size: 0x08
	struct UCanvasPanel* TurnplateNewbieTips; // Offset: 0x8a8 // Size: 0x08
	struct UCanvasPanel* UGCHudInfoBottomPanel; // Offset: 0x8b0 // Size: 0x08
	struct UCanvasPanel* UGCHudInfoPanel; // Offset: 0x8b8 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Tips13_Text1; // Offset: 0x8c0 // Size: 0x08
	struct UCanvasPanel* VoiceCheckPanel; // Offset: 0x8c8 // Size: 0x08
	struct UCanvasPanel* WeatherInfoCanvas; // Offset: 0x8d0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Chat; // Offset: 0x8d8 // Size: 0x08
	struct UCanvasPanel* WModePanel; // Offset: 0x8e0 // Size: 0x08
	struct TArray<IntProperty> BuffEffectDisplayIDList; // Offset: 0x8e8 // Size: 0x10
	struct UUAEUserWidget* NewMiniMapWidget; // Offset: 0x8f8 // Size: 0x08
	struct UUserWidget* BigEvent_Btn; // Offset: 0x900 // Size: 0x08
	float ChatOpenTime; // Offset: 0x908 // Size: 0x04
	bool bIsQuickHideUI; // Offset: 0x90c // Size: 0x01
	bool PingDebug; // Offset: 0x90d // Size: 0x01
	bool IsNeedSurviveKillPanel; // Offset: 0x90e // Size: 0x01

	// Functions

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.DemoReplay_ReInit
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DemoReplay_ReInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function MainControlBaseUI.MainControlBaseUI_C.ExecuteUbergraph_MainControlBaseUI
	// Flags: [HasDefaults]
	void ExecuteUbergraph_MainControlBaseUI(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

