#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass OB_MapPlayerList_BP.OB_MapPlayerList_BP_C
// Size: 0x558 // Inherited bytes: 0x418
struct UOB_MapPlayerList_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_ALL; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_Nearby; // Offset: 0x428 // Size: 0x08
	struct UCustomScrollBox* CustomScrollBox_Nearby; // Offset: 0x430 // Size: 0x08
	struct UCustomScrollBox* CustomScrollBox_Total; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_InviteFriendBG; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* PlayerListGroup; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_Global1; // Offset: 0x450 // Size: 0x08
	struct UTextBlock* TextBlock_Global2; // Offset: 0x458 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_BtnState; // Offset: 0x460 // Size: 0x08
	struct FObservedData CrtOBPlayer; // Offset: 0x468 // Size: 0x50
	MapProperty NearTeamID2ChildIndex; // Offset: 0x4b8 // Size: 0x50
	MapProperty AllTeamID2ChildIndex; // Offset: 0x508 // Size: 0x50

	// Functions

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreahOBPlayerChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreahOBPlayerChange(struct UPanelWidget* PanelWidget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.OnOBPlayerChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnOBPlayerChange(struct FObservedData CrtOBPlayer); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshTotalListData
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshTotalListData(struct TArray<struct FPlayerInfoInOB>& DataList, struct FObservedData CrtOBPlayer); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshNearListData
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshNearListData(struct TArray<struct FPlayerInfoInOB>& DataList, struct FObservedData CrtOBPlayer); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshListData
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshListData(struct TArray<struct FPlayerInfoInOB>& DataList, struct UCustomScrollBox* CustomScrollBox); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.GetChildByIndex
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetChildByIndex(struct UPanelWidget* PanelWidget, IntProperty Index, struct UOB_PlayerListGroup_BP_C*& TeamItem); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.ExecuteUbergraph_OB_MapPlayerList_BP
	// Flags: [None]
	void ExecuteUbergraph_OB_MapPlayerList_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

