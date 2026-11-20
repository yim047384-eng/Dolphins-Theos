#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MiniMapPlayerIconItem.MiniMapPlayerIconItem_C
// Size: 0x521 // Inherited bytes: 0x2c8
struct UMiniMapPlayerIconItem_C : ULuaUserWidget {
	// Fields
	struct UWidgetAnimation* DX_ShootFlashing; // Offset: 0x2c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SelfArrow; // Offset: 0x2d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SelfBG; // Offset: 0x2d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SelfPosition; // Offset: 0x2e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Shoot; // Offset: 0x2e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Single; // Offset: 0x2f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Team; // Offset: 0x2f8 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x300 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x308 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x310 // Size: 0x08
	struct UImage* Image_NumIndex; // Offset: 0x318 // Size: 0x08
	struct UImage* Image_SelfArrow; // Offset: 0x320 // Size: 0x08
	struct UImage* Image_SelfBG; // Offset: 0x328 // Size: 0x08
	struct UImage* Image_SelfDead; // Offset: 0x330 // Size: 0x08
	struct UImage* Image_SelfNumIcon; // Offset: 0x338 // Size: 0x08
	struct UImage* Image_SelfState; // Offset: 0x340 // Size: 0x08
	struct UImage* Image_TeamArrow; // Offset: 0x348 // Size: 0x08
	struct UCanvasPanel* OutRangeIndicator; // Offset: 0x350 // Size: 0x08
	struct UImage* rect; // Offset: 0x358 // Size: 0x08
	struct UImage* SelfPosiionIcon; // Offset: 0x360 // Size: 0x08
	struct UImage* Sphere; // Offset: 0x368 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Veteran; // Offset: 0x370 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_VetergenOut; // Offset: 0x378 // Size: 0x08
	StrProperty CurIndexIconPath; // Offset: 0x380 // Size: 0x10
	struct FSlateBrush CirclePlayerIcon; // Offset: 0x390 // Size: 0xb8
	struct FSlateBrush SquarePlayerIcon; // Offset: 0x448 // Size: 0xb8
	bool IsLocalPlayer; // Offset: 0x500 // Size: 0x01
	char pad_0x501[0x3]; // Offset: 0x501 // Size: 0x03
	IntProperty CacheVeteranIndex; // Offset: 0x504 // Size: 0x04
	bool UseExtraCanvasPanelTeam; // Offset: 0x508 // Size: 0x01
	char pad_0x509[0x7]; // Offset: 0x509 // Size: 0x07
	struct TArray<StrProperty> ForbidVisibleReason; // Offset: 0x510 // Size: 0x10
	bool LastRootVisible; // Offset: 0x520 // Size: 0x01

	// Functions

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.RefreshRootPanelVisible
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshRootPanelVisible(bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.SetSingleStyle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetSingleStyle(bool IsSingle, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.SetPlayerName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPlayerName(struct FText Name, struct FText& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.SetDist
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetDist(struct FText Dist, struct FText& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.UpdateVeteranStatus
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateVeteranStatus(enum class EMentorPlayerType MentorType, IntProperty VeteranLevel, bool& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.SwitchVisibility
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SwitchVisibility(bool IsShow, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.OutRange
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OutRange(bool IsInRange, float Degree, bool EnableNewStyle, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xa)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.SetSelfStyle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetSelfStyle(bool IsSelf, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.DeadIcon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void DeadIcon(bool IsDead, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.GetRotationDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetRotationDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.SetTeammateInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetTeammateInfo(IntProperty TeammateIndex, struct FLinearColor TeammateColor, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.ShouldIgnoreOut
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShouldIgnoreOut(bool bIsInRange, bool& bIgnore); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.AddTeamIndicatorArrowOffset
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddTeamIndicatorArrowOffset(IntProperty Degree); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MiniMapPlayerIconItem.MiniMapPlayerIconItem_C.LoadTeamIndexIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadTeamIndexIcon(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

