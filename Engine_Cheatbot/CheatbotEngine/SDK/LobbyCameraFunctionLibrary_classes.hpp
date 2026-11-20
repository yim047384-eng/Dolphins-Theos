#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C
// Size: 0x90 // Inherited bytes: 0x90
struct ULobbyCameraFunctionLibrary_C : UBlueprintFunctionOverride {
	// Functions

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.OnViewportSizeChanged
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void OnViewportSizeChanged(struct FVector2D OldViewport, struct FVector2D NewViewport, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteStartCallback
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void LevelSequence_ExecuteStartCallback(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.GetCurrentCameraActor
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurrentCameraActor(struct UObject* __WorldContext, struct ACameraActor*& CameraActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteEndCallback
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void LevelSequence_ExecuteEndCallback(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera_Only
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SwitchCamera_Only(IntProperty CameraID, float BlendTime, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.CreateLevelSequencePlayerAndActor
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct ULevelSequencePlayer* CreateLevelSequencePlayerAndActor(struct ULevelSequence* level sequence, struct UObject* __WorldContext, struct ALevelSequenceActor*& OutActor); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SwitchCamera(IntProperty NewCameraID, float BlendTime, bool IgnoreLight, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x18)
};

