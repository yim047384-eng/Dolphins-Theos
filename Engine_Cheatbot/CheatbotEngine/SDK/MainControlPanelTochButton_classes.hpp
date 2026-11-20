#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MainControlPanelTochButton.MainControlPanelTochButton_C
// Size: 0x652 // Inherited bytes: 0x488
struct UMainControlPanelTochButton_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* FadeAnim; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* BaseLayer; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_IPX; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PlanAGControl; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CreativeCustomUILayer; // Offset: 0x4b8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_2; // Offset: 0x4c0 // Size: 0x08
	struct UMainControlBaseUI_C* MainControlBaseUI; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* MountPanelDynamic; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* MountPanelOperation; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* MountPanelSecondary; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* MountPanelStatic; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* ParachutingLayer; // Offset: 0x4f0 // Size: 0x08
	struct UCanvasPanel* PermanentLayer; // Offset: 0x4f8 // Size: 0x08
	struct UCanvasPanel* PopupWindowLayer; // Offset: 0x500 // Size: 0x08
	struct UScreenFadingPanel_C* ScreenFadingPanel; // Offset: 0x508 // Size: 0x08
	struct UCanvasPanel* ShootingLayer; // Offset: 0x510 // Size: 0x08
	struct UShootingUIPanel_C* ShootingUIPanel; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* VehicleControlLayer; // Offset: 0x520 // Size: 0x08
	struct FVector MarkerPosition; // Offset: 0x528 // Size: 0x0c
	IntProperty PoseStateOffset; // Offset: 0x534 // Size: 0x04
	enum class ESlateVisibility InterActionCar; // Offset: 0x538 // Size: 0x01
	enum class ESlateVisibility InterActionShoot; // Offset: 0x539 // Size: 0x01
	enum class ESlateVisibility MarkerShow; // Offset: 0x53a // Size: 0x01
	enum class ESlateVisibility InterActionAirborne; // Offset: 0x53b // Size: 0x01
	char pad_0x53C[0x4]; // Offset: 0x53c // Size: 0x04
	struct ASTExtraPlayerController* Controller; // Offset: 0x540 // Size: 0x08
	enum class EOperation OperationState; // Offset: 0x548 // Size: 0x01
	char pad_0x549[0x7]; // Offset: 0x549 // Size: 0x07
	MapProperty AdaptationDict; // Offset: 0x550 // Size: 0x50
	struct FUIAdaptationStructure CurDeviceAdaptationData; // Offset: 0x5a0 // Size: 0x20
	bool IsSettingAssistant; // Offset: 0x5c0 // Size: 0x01
	bool IsAssistantTransparent; // Offset: 0x5c1 // Size: 0x01
	bool IsPlayerListShow; // Offset: 0x5c2 // Size: 0x01
	bool BuffBtnTouchStart; // Offset: 0x5c3 // Size: 0x01
	float CurBuffBtnPressTime; // Offset: 0x5c4 // Size: 0x04
	bool hasOpenedSubPanel; // Offset: 0x5c8 // Size: 0x01
	char pad_0x5C9[0x7]; // Offset: 0x5c9 // Size: 0x07
	struct UOB_MapPlayerList_BP_C* DynamicOBMapPlayerList; // Offset: 0x5d0 // Size: 0x08
	struct USelfieUI_C* DynamicSelfieUI; // Offset: 0x5d8 // Size: 0x08
	bool IsEmulator; // Offset: 0x5e0 // Size: 0x01
	char pad_0x5E1[0x7]; // Offset: 0x5e1 // Size: 0x07
	struct FScriptMulticastDelegate ED_ShowSelfieUI ; // Offset: 0x5e8 // Size: 0x10
	struct FScriptMulticastDelegate ED_HideSelfieUI; // Offset: 0x5f8 // Size: 0x10
	struct FScriptMulticastDelegate ED_OnShowWinnerTime; // Offset: 0x608 // Size: 0x10
	struct FScriptMulticastDelegate ED_GameReplay_UpdateTeamInfo; // Offset: 0x618 // Size: 0x10
	struct FScriptMulticastDelegate ED_AutoSimulateAction; // Offset: 0x628 // Size: 0x10
	bool HasOpenMiniGameOnce; // Offset: 0x638 // Size: 0x01
	char pad_0x639[0x7]; // Offset: 0x639 // Size: 0x07
	struct FScriptMulticastDelegate ED_MainControlPanelHide; // Offset: 0x640 // Size: 0x10
	bool bHideJoystickOnDead; // Offset: 0x650 // Size: 0x01
	bool HideNavigator; // Offset: 0x651 // Size: 0x01

	// Functions

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.AttachColdModeUI
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AttachColdModeUI(struct UWidget* PlayerState, struct UWidget* fireArmo, struct UWidget* coldTime, struct UWidget* skillBtn, struct UWidget* Temp, struct UWidget* SnowBoard, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x31)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.AttachPveZombieBossHealth
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AttachPveZombieBossHealth(struct UUAEUserWidget* BossHealth, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.SendQuickNeedTextInf
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SendQuickNeedTextInf(IntProperty ChatText, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.AddChildToParentUIBP
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AddChildToParentUIBP(struct UWidget* Child, StrProperty& ParentWidgetName, struct UPanelSlot*& PanelSlot); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.TakeDownWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TakeDownWeapon(bool isShowGuide, struct FBP_STRUCT_GuideText_type TempGuideText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchWeapon(bool isShowGuide, struct FBP_STRUCT_GuideText_type TempGuideText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.PickUpListPanelShowHideExpandDeadBoxTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PickUpListPanelShowHideExpandDeadBoxTips(bool IsShow, struct FBP_STRUCT_GuideText_type TempText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.EventReportBugClose
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EventReportBugClose(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetDriveGUIType
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetDriveGUIType(IntProperty& DriveGUIType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsDriving
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsDriving(bool& bIsDriving); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowCanOpenTips
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowCanOpenTips(bool isShowGuide, struct FBP_STRUCT_GuideText_type GuideText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowBtnByState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowBtnByState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandleChangeSightUISwitchCameraStart
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleChangeSightUISwitchCameraStart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandleChangeSightUIShowDeathMatch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleChangeSightUIShowDeathMatch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandleChangeSightUIAndroidBack
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleChangeSightUIAndroidBack(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.LuaCanShowShootingLayer
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void LuaCanShowShootingLayer(bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CanPickVehicle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanPickVehicle(struct ASTExtraVehicleBase* InVehicle, bool& IsPickable); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideUIAfterDeadWithMod
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void HideUIAfterDeadWithMod(bool& isHide); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsVehicleExclusive
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsVehicleExclusive(struct ASTExtraVehicleBase* Vehicle, bool& bExclusive); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CanDriveVehicle
	// Flags: [Public|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanDriveVehicle(struct AActor* InVehicle, struct ASTExtraPlayerCharacter* InCharacter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.LoadCurrentUIelemVehicle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void LoadCurrentUIelemVehicle(struct UBP_SAVEGAME_UIElemLayout_C*& SaveGame, bool& IsExist); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchDriverFireState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_SwitchDriverFireState(bool bFire); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdateUseVehicleWeaponUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_UpdateUseVehicleWeaponUI(bool bUse, struct ASTExtraShootWeapon* VehicleWeapon); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.BlackScreenFadOut
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BlackScreenFadOut(float FadTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsInInteraction
	// Flags: [Public|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsInInteraction(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.AddModeUIChild
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddModeUIChild(struct UPanelWidget* parentpanel, struct UWidget* ChildWidget, struct UUAEUserWidget* parentwgt); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowSomeUIAfterMiniGameMachine
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_ShowSomeUIAfterMiniGameMachine(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideSomeUIForMiniGameMachine
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_HideSomeUIForMiniGameMachine(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.SendQuickNeedText
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SendQuickNeedText(IntProperty ChatText); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CurGameMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CurGameMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchSurfBoard
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_SwitchSurfBoard(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdateSurfBoardBtnPanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_UpdateSurfBoardBtnPanel(bool Visible); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowCompletePlaybackUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowCompletePlaybackUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowHeavyWeaponModePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowHeavyWeaponModePanel(bool bIsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowWalkingDeathModePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowWalkingDeathModePanel(bool bIsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_ShowAllUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MainControlPanel_ShowAllUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.DynamicallyCreateSelfieUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DynamicallyCreateSelfieUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.DynamicallyCreateOBMapPlayerList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DynamicallyCreateOBMapPlayerList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowDeathMatchUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_ShowDeathMatchUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowAllUIForDelayResult
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowAllUIForDelayResult(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsZombieMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsZombieMode(bool& zombieMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowBossWarning
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowBossWarning(struct FVector StartPos, IntProperty FlowID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowPVEVPModePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowPVEVPModePanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HidePVEVPModePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HidePVEVPModePanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CheckInitPVEVPMainUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckInitPVEVPMainUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CheckInitPVEVPModeUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckInitPVEVPModeUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsPVEVPMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsPVEVPMode(bool& RetIsPVEVPMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CheckShowPVEVPGuide
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckShowPVEVPGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_HideWinnerTimePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MainControlPanel_HideWinnerTimePanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_ShowWinnerTimePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MainControlPanel_ShowWinnerTimePanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.BackToLobby
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BackToLobby(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandleAndroidBack
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleAndroidBack(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CloseMap
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CloseMap(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CloseBackpack
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CloseBackpack(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowSelfieUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowSelfieUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideSelfieUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideSelfieUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_RefreshSightVision
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_RefreshSightVision(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetNextFireMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetNextFireMode(struct ASTExtraShootWeapon* InputPin, enum class ESTEWeaponShootType& FireMode); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsPlayerOutOfVehicle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsPlayerOutOfVehicle(bool& outOfVehicle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_JoystickCustom
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_JoystickCustom(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideUIAfterDead
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void HideUIAfterDead(bool& isHide); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.InitSpecialUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitSpecialUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.PlayerInfo_UpdateEnergy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayerInfo_UpdateEnergy(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.PlayerInfo_SpectatorChangeUpdateEnergy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayerInfo_SpectatorChangeUpdateEnergy(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.LeaveSpectatingStatus
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LeaveSpectatingStatus(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.FingWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void FingWidget(struct UWidget* Widget, IntProperty Data, struct UWidget*& foundW, bool& found); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_GuideByStep
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_GuideByStep(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowBattleUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowBattleUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetAutoNavigateTranslation
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_SetAutoNavigateTranslation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterObserverStatus
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnterObserverStatus(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToSendFinishedGuideToServer
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadyToSendFinishedGuideToServer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewBieGuide_FinishedCurGuide
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void NewBieGuide_FinishedCurGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandlNewbieGuideUpdate
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void HandlNewbieGuideUpdate(IntProperty GuideID, bool bIsShow); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_HideCurNewbieGuide
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void NewbieGuide_HideCurNewbieGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_ShowCurNewbieGuide
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void NewbieGuide_ShowCurNewbieGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToRetriveBeginnerFinishedGuide
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadyToRetriveBeginnerFinishedGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantShowUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GameAssistantShowUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyUserSettingInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ApplyUserSettingInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetCustomUIForAssistant
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetCustomUIForAssistant(bool IsTransparent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantHideUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GameAssistantHideUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowSpectatingUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowSpectatingUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterSpectatingStatus
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnterSpectatingStatus(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.Reconnect_ResetUIByPlayerControllerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Reconnect_ResetUIByPlayerControllerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_HideAllUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MainControlPanel_HideAllUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.IngameUIAdaptation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void IngameUIAdaptation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.DebugSetAllUIVisibility
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DebugSetAllUIVisibility(bool IsVisible); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowDriveUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowDriveUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.OperatingRules2
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OperatingRules2(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchOperationUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowShooterUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowShooterUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowFreeFallUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowFreeFallUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowAirborneUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowAirborneUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.InitPlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.UpdatePlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdatePlayerState(enum class ExtraPlayerLiveState State, struct ACharacter* OwnerCharacter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ChangeFireMode
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ChangeFireMode(IntProperty IntValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnCharacterNearDeathOrRescueingOtherNotifyDelegate
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnCharacterNearDeathOrRescueingOtherNotifyDelegate(bool IsNearDeath, bool IsRescueingOther); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShootingAimBtnClickEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ShootingAimBtnClickEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.CheckChangeToInfectionRefresh
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CheckChangeToInfectionRefresh(enum class ECharacterSubType TargetPawnType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ChangeTDFireMode
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ChangeTDFireMode(IntProperty IntValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomizeUIInfo
	// Flags: [BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ExecuteUbergraph_MainControlPanelTochButton
	// Flags: [None]
	void ExecuteUbergraph_MainControlPanelTochButton(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ED_MainControlPanelHide__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_MainControlPanelHide__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ED_AutoSimulateAction__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_AutoSimulateAction__DelegateSignature(IntProperty SimActionType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ED_GameReplay_UpdateTeamInfo__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_GameReplay_UpdateTeamInfo__DelegateSignature(bool bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ED_OnShowWinnerTime__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_OnShowWinnerTime__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ED_HideSelfieUI__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_HideSelfieUI__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainControlPanelTochButton.MainControlPanelTochButton_C.ED_ShowSelfieUI __DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_ShowSelfieUI __DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

