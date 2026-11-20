#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass IngameMapSys.IngameMapSys_C
// Size: 0xe9 // Inherited bytes: 0x98
struct UIngameMapSys_C : ULuaBluepirntSys {
	// Fields
	MapProperty mapPlayerColorTable; // Offset: 0x98 // Size: 0x50
	bool bShowMarkerLocation; // Offset: 0xe8 // Size: 0x01

	// Functions

	// Object Name: Function IngameMapSys.IngameMapSys_C.CheckNeedMiniMap
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckNeedMiniMap(bool& bNeed); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function IngameMapSys.IngameMapSys_C.CheckUseNewMap
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckUseNewMap(bool& use); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function IngameMapSys.IngameMapSys_C.CheckCloseMiniMap
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckCloseMiniMap(bool& needClose); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function IngameMapSys.IngameMapSys_C.OpenOrHideEntireMap
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OpenOrHideEntireMap(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngameMapSys.IngameMapSys_C.GetMapDataPath
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetMapDataPath(struct AGameStateBase* GameState, enum class EMapType MapType, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function IngameMapSys.IngameMapSys_C.GetShowMakerLocation
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetShowMakerLocation(bool& bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function IngameMapSys.IngameMapSys_C.SetShowMakerLocation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetShowMakerLocation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngameMapSys.IngameMapSys_C.GetPlayerColorByIndexC
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerColorByIndexC(IntProperty Index, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)
};

