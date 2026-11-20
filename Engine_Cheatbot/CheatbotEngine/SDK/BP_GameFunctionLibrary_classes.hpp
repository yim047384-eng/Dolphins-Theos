#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C
// Size: 0x28 // Inherited bytes: 0x28
struct UBP_GameFunctionLibrary_C : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetModeMaxTeammateNum
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetModeMaxTeammateNum(struct UObject* __WorldContext, IntProperty& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.EditorGetGameModeID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void EditorGetGameModeID(struct UObject* WorldCont, struct UObject* __WorldContext, StrProperty& ModeID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeUpperBound
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsInFloatRangeUpperBound(float Value, struct FFloatRangeBound FloatRangeBound, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeLowerBound
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsInFloatRangeLowerBound(float Value, struct FFloatRangeBound FloatRangeBound, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRange
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsInFloatRange(float Value, struct FFloatRange FloatRange, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetGuideTextStruct
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetGuideTextStruct(IntProperty NewParam, struct UObject* __WorldContext, struct FBP_STRUCT_GuideText_type& NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x70)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetMinimapPathByModeID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetMinimapPathByModeID(struct UObject* WorldContext, struct UObject* __WorldContext, StrProperty& MinimapPath); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMinimapPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurLevelMinimapPath(struct UObject* WorldContext, struct UObject* __WorldContext, StrProperty& MinimapPath); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void ClampStringLength(StrProperty Source, IntProperty Length, struct UObject* __WorldContext, StrProperty& Result); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsPlayerCanSeeWidget(struct UWidget* NewParam, struct UObject* __WorldContext, bool& cansee); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetCurLevelMapTexture(struct UObject* __WorldContext, struct UTexture2D*& Texture); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetActorsByTag(struct FName Tag, struct UObject* ContextObject, struct AActor* ActorClass, struct UObject* __WorldContext, struct TArray<struct AActor*>& Targets); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void AddActorTag(struct AActor* Target, struct FName TagInfo, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetUpGamePostProcessEffectData(struct APostProcessVolume* Volume, struct UObject* ContextObject, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)
};

