#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C
// Size: 0x28 // Inherited bytes: 0x28
struct UClientIngameUIFunctionLibrary_BP_C : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.CanBorrowVehicle
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanBorrowVehicle(struct AActor* Vehicle, struct UObject* __WorldContext, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.GetPlayerVeteranIconPathByLevel
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerVeteranIconPathByLevel(IntProperty VeteranLevel, struct UObject* __WorldContext, StrProperty& res); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.GetPlayerVeteranIconPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerVeteranIconPath(struct ASTExtraPlayerState* Player, struct UObject* __WorldContext, StrProperty& res); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.MinMaxToPercenteage
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	float MinMaxToPercenteage(float Min, float Max, float Cur, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.SnapPercentToInt
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SnapPercentToInt(float Unit, float Percentage, struct UObject* __WorldContext, IntProperty& Stage, IntProperty& Index); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.GetEntireMapLevelScale
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetEntireMapLevelScale(struct UObject* __WorldContext, float& LevelScale); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.NeedShowVeteran
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void NeedShowVeteran(struct UObject* WorldContext, struct UObject* __WorldContext, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.CheckNeedToShowBetaTips
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckNeedToShowBetaTips(struct UObject* WorldContext, struct UObject* __WorldContext, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.CheckResultsNeedHideTitle
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckResultsNeedHideTitle(struct UUAEUserWidget* Widget, struct UObject* __WorldContext, bool& bHide); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.QuickSignMsgToString
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void QuickSignMsgToString(struct FQuickSignMsg Msg, struct UObject* __WorldContext, StrProperty& res); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x88)

	// Object Name: Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.GetInputControlPanel
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetInputControlPanel(struct UUAEUserWidget* UI, struct UObject* __WorldContext, struct UMainControlPanelTochButton_C*& InputControlPanel); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)
};

