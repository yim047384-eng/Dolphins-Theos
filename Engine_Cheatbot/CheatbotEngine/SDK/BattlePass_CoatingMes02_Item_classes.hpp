#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C
// Size: 0x51a // Inherited bytes: 0x418
struct UBattlePass_CoatingMes02_Item_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UBattlePass_Coating_Wingman_Item_C* BattlePass_Coating_Wingman_Item_1; // Offset: 0x420 // Size: 0x08
	struct UBattlePass_Coating_Wingman_Item_C* BattlePass_Coating_Wingman_Item_2; // Offset: 0x428 // Size: 0x08
	struct UBattlePass_CoatingMes01_Item_C* BattlePass_CoatingMes01_Item; // Offset: 0x430 // Size: 0x08
	struct UBattlePass_CoatingMes01_Item_C* BattlePass_CoatingMes01_Item_1; // Offset: 0x438 // Size: 0x08
	struct UBattlePass_CoatingMes01_Item_C* BattlePass_CoatingMes01_Item_2; // Offset: 0x440 // Size: 0x08
	struct UBattlePass_CoatingMes01_Item_C* BattlePass_CoatingMes01_Item_3; // Offset: 0x448 // Size: 0x08
	struct UBattlePass_CoatingMes01_Item_C* BattlePass_CoatingMes01_Item_4; // Offset: 0x450 // Size: 0x08
	struct UBattlePass_Coating_Item_C* BattlePass_MainItem; // Offset: 0x458 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BattlePassRoot; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_NumOfPeopleInAircraft; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_wingman1; // Offset: 0x470 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_wingman2; // Offset: 0x478 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x480 // Size: 0x08
	struct UImage* Image_plane; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* imagePanel; // Offset: 0x490 // Size: 0x08
	struct UWrapBox* playerListPanel; // Offset: 0x498 // Size: 0x08
	struct UTextBlock* TextBlock_NumOfPeopleInAircraft; // Offset: 0x4a0 // Size: 0x08
	struct UVerticalBox* VerticalBox_EnterBroadcast; // Offset: 0x4a8 // Size: 0x08
	struct TArray<struct UBattlePass_CoatingMes01_Item_C*> battlePassItemList; // Offset: 0x4b0 // Size: 0x10
	IntProperty showDataNum; // Offset: 0x4c0 // Size: 0x04
	IntProperty ShowAvatarID; // Offset: 0x4c4 // Size: 0x04
	struct TArray<struct FGameModePlayerShowUpassInfo> upassShowInfoList; // Offset: 0x4c8 // Size: 0x10
	bool IsShow; // Offset: 0x4d8 // Size: 0x01
	char pad_0x4D9[0x3]; // Offset: 0x4d9 // Size: 0x03
	IntProperty dataListNum; // Offset: 0x4dc // Size: 0x04
	IntProperty curShowDataNum; // Offset: 0x4e0 // Size: 0x04
	char pad_0x4E4[0x4]; // Offset: 0x4e4 // Size: 0x04
	struct FTimerHandle timerHandle01; // Offset: 0x4e8 // Size: 0x08
	struct FTimerHandle timerHandle02; // Offset: 0x4f0 // Size: 0x08
	struct FTimerHandle timerHandle03; // Offset: 0x4f8 // Size: 0x08
	struct FTimerHandle timerHandle04; // Offset: 0x500 // Size: 0x08
	struct FTimerHandle timerHandle05; // Offset: 0x508 // Size: 0x08
	struct FTimerHandle timerHandle06; // Offset: 0x510 // Size: 0x08
	bool bHidePassUI; // Offset: 0x518 // Size: 0x01
	bool bNeedShowPlaneTex; // Offset: 0x519 // Size: 0x01

	// Functions

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.CheckNeedShow
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckNeedShow(bool& NeedShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.HidePassUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HidePassUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ShowPassMainItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowPassMainItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.HidePassMainItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HidePassMainItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ShouldShowUI
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void ShouldShowUI(bool& ShouldShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.GetShowDataDelayTime
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetShowDataDelayTime(float& Time); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.GetAndShowDelayTime
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetAndShowDelayTime(float& Time); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.OnSetPlaneTexCB
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnSetPlaneTexCB(struct UObject* Asset); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.CheckIfExitPlane
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckIfExitPlane(bool& bIsExitPlane); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.OnPlayerControllerStateChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPlayerControllerStateChanged(enum class EStateType StateType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ShowFlyingInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowFlyingInfo(bool bIsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.RefreshFlyNum
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshFlyNum(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ShowPlanePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowPlanePanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.HidePlayerListPanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HidePlayerListPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.HidePlanePanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HidePlanePanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.SetSelectBg
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSelectBg(IntProperty Num); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.SetArrow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetArrow(IntProperty Num); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ClearTimerHandler
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearTimerHandler(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ChangePlaneColor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangePlaneColor(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.showDataflowOne
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void showDataflowOne(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.GetAndShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetAndShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.GetData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ShowData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.HideUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ChooseAvatarId
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChooseAvatarId(IntProperty Num); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.SetPlaneTex 
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetPlaneTex (); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.showPlayerItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void showPlayerItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ShowUI
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ReceivedMountWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedMountWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_CoatingMes02_Item.BattlePass_CoatingMes02_Item_C.ExecuteUbergraph_BattlePass_CoatingMes02_Item
	// Flags: [None]
	void ExecuteUbergraph_BattlePass_CoatingMes02_Item(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

