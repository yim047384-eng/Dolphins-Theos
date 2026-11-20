#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BirthIslandTips.BirthIslandTips_C
// Size: 0x4c0 // Inherited bytes: 0x418
struct UBirthIslandTips_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AutoFollowSystemTipsSlot; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_WorldCup; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_WorldCupControl; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanelEscapeNotice; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CountdownPanel; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_TeammateBG; // Offset: 0x448 // Size: 0x08
	struct UImage* Image_tipsbg; // Offset: 0x450 // Size: 0x08
	struct UUTRichTextBlock* NewbieGameTip; // Offset: 0x458 // Size: 0x08
	struct UCanvasPanel* NewbieGameTipPanel; // Offset: 0x460 // Size: 0x08
	struct UOverlay* Overlay_Teammate; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* Root; // Offset: 0x470 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x478 // Size: 0x08
	struct UTextBlock* TextBlock_WaitingTips; // Offset: 0x480 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_1; // Offset: 0x488 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_AutoFollow; // Offset: 0x490 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextMatchStartTime; // Offset: 0x498 // Size: 0x08
	struct UVeteranRecruitPanel_C* VeteranRecruitPanel; // Offset: 0x4a0 // Size: 0x08
	float AutoFollowTipsDelayShowWaitingTime; // Offset: 0x4a8 // Size: 0x04
	float AutoFollowTipsLastTime; // Offset: 0x4ac // Size: 0x04
	struct ASTExtraPlayerController* STExtraPlayerController; // Offset: 0x4b0 // Size: 0x08
	bool IsShowingCountDown; // Offset: 0x4b8 // Size: 0x01
	bool bHasPostCountDownEvent; // Offset: 0x4b9 // Size: 0x01
	bool bHasPlayBattleSound; // Offset: 0x4ba // Size: 0x01
	char pad_0x4BB[0x1]; // Offset: 0x4bb // Size: 0x01
	float DelayToShowLeaderMarkMapTipsTime; // Offset: 0x4bc // Size: 0x04

	// Functions

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.HideEscapeNotice
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideEscapeNotice(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.IsLeagueMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsLeagueMode(StrProperty GameMode, bool& IsLeagueMode); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.InitJoinGameUIVisible
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitJoinGameUIVisible(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.ShowCountDown
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowCountDown(bool Show); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.GameStartCountDown
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GameStartCountDown(float CountDownTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.UIMsg_ShowVeteranRecruitParachuteTeamTip
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_ShowVeteranRecruitParachuteTeamTip(IntProperty TipsID, StrProperty Param1, StrProperty Param2); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.UIMsg_ShowAutoGroupParachuteTeamTip
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_ShowAutoGroupParachuteTeamTip(IntProperty InputType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.DelayShowVeteranRecruitParachuteTeamTips
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayShowVeteranRecruitParachuteTeamTips(IntProperty TipsID, StrProperty Param1, StrProperty Param2); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.ED_GameReplayReint
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ED_GameReplayReint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.DelayShowAutoParachuteTip
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayShowAutoParachuteTip(IntProperty InputType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.BindGameStartCountDown
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BindGameStartCountDown(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BirthIslandTips.BirthIslandTips_C.ExecuteUbergraph_BirthIslandTips
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BirthIslandTips(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

