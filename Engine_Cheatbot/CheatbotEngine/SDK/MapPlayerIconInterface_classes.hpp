#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass MapPlayerIconInterface.MapPlayerIconInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct UMapPlayerIconInterface_C : UInterface {
	// Functions

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.RefreshRootPanelVisible
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshRootPanelVisible(bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.OutRange
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OutRange(bool IsInRange, float Degree, bool EnableNewStyle, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xa)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.UpdateVeteranStatus
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateVeteranStatus(enum class EMentorPlayerType MentorType, IntProperty VeteranLevel, bool& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.SetDist
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetDist(struct FText Dist, struct FText& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.SetPlayerName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPlayerName(struct FText Name, struct FText& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.SwitchVisibility
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SwitchVisibility(bool IsShow, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.GetRotationDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetRotationDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.DeadIcon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void DeadIcon(bool IsDead, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.SetSelfStyle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetSelfStyle(bool IsSelf, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.SetTeammateInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetTeammateInfo(IntProperty TeammateIndex, struct FLinearColor TeammateColor, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function MapPlayerIconInterface.MapPlayerIconInterface_C.SetSingleStyle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetSingleStyle(bool IsSingle, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)
};

