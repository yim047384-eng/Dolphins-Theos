#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass OBUI_Library.OBUI_Library_C
// Size: 0x28 // Inherited bytes: 0x28
struct UOBUI_Library_C : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetSyncOBDataActor
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetSyncOBDataActor(struct UObject* __WorldContext, struct ASyncOBDataActor*& SyncOBDataActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetPlayerNameLinearColorByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPlayerNameLinearColorByTeamID(IntProperty TeamID, struct UObject* __WorldContext, struct FLinearColor& NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetPlayerLinearColorByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPlayerLinearColorByTeamID(IntProperty TeamID, struct UObject* __WorldContext, struct FLinearColor& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetPlayerMakeupPicbyUID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPlayerMakeupPicbyUID(StrProperty UID, struct UObject* __WorldContext, bool& bFind, StrProperty& logoPath, struct UTexture2D*& LogoObject); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function OBUI_Library.OBUI_Library_C.IsAllStarGame
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsAllStarGame(struct UObject* WorldContextObj, struct UObject* __WorldContext, bool& bRes); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetCustomTeammatePicByName
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCustomTeammatePicByName(struct TArray<StrProperty>& Resolution, StrProperty PlayerName, struct UObject* __WorldContext, bool& bFind, StrProperty& logoPath, struct UTexture2D*& LogoObject); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x48)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetCustomCornerMarkByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCustomCornerMarkByTeamID(IntProperty TeamID, struct UObject* __WorldContext, bool& bFind, StrProperty& CornerMark); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetCustomKillInfoByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCustomKillInfoByTeamID(IntProperty TeamID, struct UObject* __WorldContext, bool& bFind, StrProperty& logoPath, struct UTexture2D*& LogoObject); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetCustomTeamNameByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCustomTeamNameByTeamID(IntProperty TeamID, struct UObject* __WorldContext, bool& bFind, StrProperty& TeamName); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function OBUI_Library.OBUI_Library_C.IsTeamMatch
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsTeamMatch(struct UObject* __WorldContext, bool& bRet); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetCustomTeamLogoByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCustomTeamLogoByTeamID(IntProperty TeamID, struct TArray<StrProperty>& Resolution, struct UObject* __WorldContext, bool& bFind, StrProperty& logoPath, struct UTexture2D*& LogoObject); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x40)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetPlayerNameColorByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPlayerNameColorByTeamID(IntProperty TeamID, struct UObject* __WorldContext, struct FColor& PlayerNameColor); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function OBUI_Library.OBUI_Library_C.GetPlayerColorByTeamID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPlayerColorByTeamID(IntProperty TeamID, struct UObject* __WorldContext, struct FColor& PlayerColor); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)
};

