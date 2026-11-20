#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class LevelSequence.LevelSequenceActor
// Size: 0x550 // Inherited bytes: 0x4b0
struct ALevelSequenceActor : AActor {
	// Fields
	char pad_0x4B0[0x8]; // Offset: 0x4b0 // Size: 0x08
	bool bAutoPlay; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B9[0x7]; // Offset: 0x4b9 // Size: 0x07
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // Offset: 0x4c0 // Size: 0x28
	struct ULevelSequencePlayer* SequencePlayer; // Offset: 0x4e8 // Size: 0x08
	struct FSoftObjectPath LevelSequence; // Offset: 0x4f0 // Size: 0x18
	struct TArray<struct AActor*> AdditionalEventReceivers; // Offset: 0x508 // Size: 0x10
	struct ULevelSequenceBurnInOptions* BurnInOptions; // Offset: 0x518 // Size: 0x08
	struct UMovieSceneBindingOverrides* BindingOverrides; // Offset: 0x520 // Size: 0x08
	bool bReduceFrequency; // Offset: 0x528 // Size: 0x01
	char pad_0x529[0x3]; // Offset: 0x529 // Size: 0x03
	IntProperty ReduceFrameCount; // Offset: 0x52c // Size: 0x04
	float IgnoreFrameTolerance; // Offset: 0x530 // Size: 0x04
	char bOverrideInstanceData : 1; // Offset: 0x534 // Size: 0x01
	char pad_0x534_1 : 7; // Offset: 0x534 // Size: 0x01
	char pad_0x535[0x3]; // Offset: 0x535 // Size: 0x03
	struct UObject* DefaultInstanceData; // Offset: 0x538 // Size: 0x08
	bool bForceAsync; // Offset: 0x540 // Size: 0x01
	char pad_0x541[0x7]; // Offset: 0x541 // Size: 0x07
	struct ULevelSequenceBurnIn* BurnInInstance; // Offset: 0x548 // Size: 0x08

	// Functions

	// Object Name: Function LevelSequence.LevelSequenceActor.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSequence(struct ULevelSequence* InSequence); // Offset: 0x10571cd00 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LevelSequence.LevelSequenceActor.SetEventReceivers
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers); // Offset: 0x10571cc1c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function LevelSequence.LevelSequenceActor.SetBinding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Offset: 0x10571cac0 // Return & Params: Num(3) Size(0x29)

	// Object Name: Function LevelSequence.LevelSequenceActor.SetAllMovieSceneSectionsToKeepState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAllMovieSceneSectionsToKeepState(); // Offset: 0x10571caac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LevelSequence.LevelSequenceActor.ResetBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetBindings(); // Offset: 0x10571ca98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LevelSequence.LevelSequenceActor.ResetBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Offset: 0x10571c9f8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function LevelSequence.LevelSequenceActor.RemoveBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Offset: 0x10571c91c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function LevelSequence.LevelSequenceActor.ReceiveInitailizePlayer
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveInitailizePlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LevelSequence.LevelSequenceActor.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer); // Offset: 0x10571c844 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function LevelSequence.LevelSequenceActor.GetPossessableByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FMovieSceneObjectBindingID GetPossessableByName(StrProperty NameKeyString); // Offset: 0x10571c788 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function LevelSequence.LevelSequenceActor.AddBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Offset: 0x10571c668 // Return & Params: Num(3) Size(0x21)
};

// Object Name: Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 // Inherited bytes: 0x28
struct UDefaultLevelSequenceInstanceData : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct AActor* TransformOriginActor; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
	struct FTransform TransformOrigin; // Offset: 0x40 // Size: 0x30
};

// Object Name: Class LevelSequence.LevelSequence
// Size: 0x3e0 // Inherited bytes: 0x2e8
struct ULevelSequence : UMovieSceneSequence {
	// Fields
	struct UMovieScene* MovieScene; // Offset: 0x2e8 // Size: 0x08
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // Offset: 0x2f0 // Size: 0x50
	struct FLevelSequenceBindingReferences BindingReferences; // Offset: 0x340 // Size: 0x50
	MapProperty PossessedObjects; // Offset: 0x390 // Size: 0x50
};

// Object Name: Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 // Inherited bytes: 0x28
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Object Name: Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 // Inherited bytes: 0x28
struct ULevelSequenceBurnInOptions : UObject {
	// Fields
	bool bUseBurnIn; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FSoftClassPath BurnInClass; // Offset: 0x30 // Size: 0x18
	struct ULevelSequenceBurnInInitSettings* Settings; // Offset: 0x48 // Size: 0x08
};

// Object Name: Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2c0 // Inherited bytes: 0x260
struct ULevelSequenceBurnIn : UUserWidget {
	// Fields
	struct FLevelSequencePlayerSnapshot FrameInformation; // Offset: 0x260 // Size: 0x58
	struct ALevelSequenceActor* LevelSequenceActor; // Offset: 0x2b8 // Size: 0x08

	// Functions

	// Object Name: Function LevelSequence.LevelSequenceBurnIn.SetSettings
	// Flags: [Event|Public|BlueprintEvent]
	void SetSettings(struct UObject* InSettings); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Offset: 0x10571d498 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class LevelSequence.LevelSequencePlayer
// Size: 0x8b0 // Inherited bytes: 0x7b8
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	// Fields
	struct FScriptMulticastDelegate OnCameraCut; // Offset: 0x7b8 // Size: 0x10
	struct FScriptMulticastDelegate OnTrackEvent; // Offset: 0x7c8 // Size: 0x10
	char pad_0x7D8[0x30]; // Offset: 0x7d8 // Size: 0x30
	struct TArray<struct UObject*> AdditionalEventReceivers; // Offset: 0x808 // Size: 0x10
	char pad_0x818[0x98]; // Offset: 0x818 // Size: 0x98

	// Functions

	// Object Name: Function LevelSequence.LevelSequencePlayer.SetCanUpdateCameraCut
	// Flags: [Final|Native|Public]
	void SetCanUpdateCameraCut(bool bEnable); // Offset: 0x10571dbc4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function LevelSequence.LevelSequencePlayer.IsActorBoundToSequence
	// Flags: [Final|Native|Protected|Const]
	bool IsActorBoundToSequence(struct AActor* InActor); // Offset: 0x10571db38 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function LevelSequence.LevelSequencePlayer.EnablePrimitiveComponentTracking
	// Flags: [Final|Native|Public]
	void EnablePrimitiveComponentTracking(); // Offset: 0x10571db24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LevelSequence.LevelSequencePlayer.DisablePrimitiveComponentTracking
	// Flags: [Final|Native|Public]
	void DisablePrimitiveComponentTracking(); // Offset: 0x10571db10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Offset: 0x10571d9a0 // Return & Params: Num(5) Size(0x48)
};

