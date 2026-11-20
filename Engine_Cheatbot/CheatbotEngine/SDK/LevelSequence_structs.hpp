#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x01 // Inherited bytes: 0x00
struct FBoundActorProxy {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0x50 // Inherited bytes: 0x00
struct FLevelSequenceBindingReferences {
	// Fields
	MapProperty BindingIdToReferences; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 // Inherited bytes: 0x00
struct FLevelSequenceBindingReferenceArray {
	// Fields
	struct TArray<struct FLevelSequenceBindingReference> References; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x38 // Inherited bytes: 0x00
struct FLevelSequenceBindingReference {
	// Fields
	StrProperty PackageName; // Offset: 0x00 // Size: 0x10
	struct FSoftObjectPath ExternalObjectPath; // Offset: 0x10 // Size: 0x18
	StrProperty ObjectPath; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 // Inherited bytes: 0x00
struct FLevelSequenceObjectReferenceMap {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 // Inherited bytes: 0x00
struct FLevelSequenceLegacyObjectReference {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 // Inherited bytes: 0x00
struct FLevelSequenceObject {
	// Fields
	struct TLazyObjectPtr<struct UObject> ObjectOrOwner; // Offset: 0x00 // Size: 0x1c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty ComponentName; // Offset: 0x20 // Size: 0x10
	struct TWeakObjectPtr<struct UObject> CachedComponent; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0x58 // Inherited bytes: 0x00
struct FLevelSequencePlayerSnapshot {
	// Fields
	struct FText MasterName; // Offset: 0x00 // Size: 0x18
	float MasterTime; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FText CurrentShotName; // Offset: 0x20 // Size: 0x18
	float CurrentShotLocalTime; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct UCameraComponent* CameraComponent; // Offset: 0x40 // Size: 0x08
	struct FLevelSequenceSnapshotSettings Settings; // Offset: 0x48 // Size: 0x08
	struct FMovieSceneSequenceID ShotID; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x08 // Inherited bytes: 0x00
struct FLevelSequenceSnapshotSettings {
	// Fields
	char ZeroPadAmount; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FrameRate; // Offset: 0x04 // Size: 0x04
};

