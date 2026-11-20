#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass EntireMapPlayerIconItem.EntireMapPlayerIconItem_C
// Size: 0x531 // Inherited bytes: 0x488
struct UEntireMapPlayerIconItem_C : ULuaUAEUserWidget {
	// Fields
	struct UCanvasPanel* CanvasPanel_Dist; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Single; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Team; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_SelfArrow; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_SelfBG; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_SelfDead; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_SelfNumIcon; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_SelfState; // Offset: 0x4c0 // Size: 0x08
	struct UTextBlock* Player02InfoDist; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* PlayerInfo; // Offset: 0x4d0 // Size: 0x08
	struct UImage* PlayerMaker; // Offset: 0x4d8 // Size: 0x08
	struct UImage* recruit; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* RotArrow; // Offset: 0x4e8 // Size: 0x08
	struct UTextBlock* TextBlock_Player02NameInMap; // Offset: 0x4f0 // Size: 0x08
	struct UImage* veteran; // Offset: 0x4f8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Veteran; // Offset: 0x500 // Size: 0x08
	StrProperty CurIndexIconPath; // Offset: 0x508 // Size: 0x10
	IntProperty CacheVeteranIndex; // Offset: 0x518 // Size: 0x04
	char pad_0x51C[0x4]; // Offset: 0x51c // Size: 0x04
	struct TArray<StrProperty> ForbidVisibleReason; // Offset: 0x520 // Size: 0x10
	bool LastRootVisible; // Offset: 0x530 // Size: 0x01

	// Functions

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.RefreshRootPanelVisible
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshRootPanelVisible(bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.OutRange
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OutRange(bool IsInRange, float Degree, bool EnableNewStyle, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xa)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.UpdateVeteranStatus
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateVeteranStatus(enum class EMentorPlayerType MentorType, IntProperty VeteranLevel, bool& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.SetDist
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetDist(struct FText Dist, struct FText& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.SetSingleStyle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetSingleStyle(bool IsSingle, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.SetPlayerName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPlayerName(struct FText Name, struct FText& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.SwitchVisibility
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SwitchVisibility(bool IsShow, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.SetSelfStyle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetSelfStyle(bool IsSelf, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.SetTeammateInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetTeammateInfo(IntProperty TeammateIndex, struct FLinearColor TeammateColor, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.DeadIcon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void DeadIcon(bool IsDead, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.GetRotationDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetRotationDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function EntireMapPlayerIconItem.EntireMapPlayerIconItem_C.LoadTeamIndexIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadTeamIndexIcon(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

