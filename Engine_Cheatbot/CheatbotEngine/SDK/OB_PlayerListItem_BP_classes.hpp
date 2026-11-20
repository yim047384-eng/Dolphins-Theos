#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass OB_PlayerListItem_BP.OB_PlayerListItem_BP_C
// Size: 0x4e1 // Inherited bytes: 0x418
struct UOB_PlayerListItem_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UBorder* Border_Parent; // Offset: 0x420 // Size: 0x08
	struct UButton* ButtonKickPlayer; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_IDX; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x448 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x460 // Size: 0x08
	struct UImage* Image_CurrentSelected; // Offset: 0x468 // Size: 0x08
	struct UImage* Image_DeadIcon; // Offset: 0x470 // Size: 0x08
	struct UImage* Image_IsActvie; // Offset: 0x478 // Size: 0x08
	struct UTextBlock* ReportedNumText; // Offset: 0x480 // Size: 0x08
	struct UCanvasPanel* ReportNumPanel; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* ReportRingPanel; // Offset: 0x490 // Size: 0x08
	struct UTextBlock* TextBlock_KillNum; // Offset: 0x498 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName; // Offset: 0x4a0 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x4a8 // Size: 0x08
	bool IsObserving; // Offset: 0x4b0 // Size: 0x01
	char pad_0x4B1[0x7]; // Offset: 0x4b1 // Size: 0x07
	StrProperty PlayerName; // Offset: 0x4b8 // Size: 0x10
	bool IsPlayerAlive; // Offset: 0x4c8 // Size: 0x01
	bool IsShowTeamIndex; // Offset: 0x4c9 // Size: 0x01
	char pad_0x4CA[0x6]; // Offset: 0x4ca // Size: 0x06
	StrProperty PlayerOpenID; // Offset: 0x4d0 // Size: 0x10
	bool bShowMenu; // Offset: 0x4e0 // Size: 0x01

	// Functions

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.AllStarKickPlayer
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AllStarKickPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.UpdateReportNum
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateReportNum(IntProperty NewNum); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.UpdateReportRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateReportRing(bool bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ShowIsOnOberving
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowIsOnOberving(StrProperty OBPlayerName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.OnMouseButtonUp
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ShowData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowData(StrProperty PlayerName, IntProperty TeamID, StrProperty OBPlayerName, IntProperty KillNum, bool IsAlive, StrProperty OpenID, bool bShowReportFlag, IntProperty BeReportedNum); // Offset: 0x1048d7660 // Return & Params: Num(8) Size(0x48)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ExecuteUbergraph_OB_PlayerListItem_BP
	// Flags: [None]
	void ExecuteUbergraph_OB_PlayerListItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

