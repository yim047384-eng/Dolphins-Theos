#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GeometryCache.GeometryCache
// Size: 0x68 // Inherited bytes: 0x28
struct UGeometryCache : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct TArray<struct UMaterialInterface*> Materials; // Offset: 0x30 // Size: 0x10
	struct TArray<struct UGeometryCacheTrack*> Tracks; // Offset: 0x40 // Size: 0x10
	char pad_0x50[0x18]; // Offset: 0x50 // Size: 0x18
};

// Object Name: Class GeometryCache.GeometryCacheActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AGeometryCacheActor : AActor {
	// Fields
	struct UGeometryCacheComponent* GeometryCacheComponent; // Offset: 0x4b0 // Size: 0x08

	// Functions

	// Object Name: Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Offset: 0x10570ff5c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class GeometryCache.GeometryCacheComponent
// Size: 0xa90 // Inherited bytes: 0xa20
struct UGeometryCacheComponent : UMeshComponent {
	// Fields
	struct UGeometryCache* GeometryCache; // Offset: 0xa20 // Size: 0x08
	bool bRunning; // Offset: 0xa28 // Size: 0x01
	bool bLooping; // Offset: 0xa29 // Size: 0x01
	char pad_0xA2A[0x2]; // Offset: 0xa2a // Size: 0x02
	float StartTimeOffset; // Offset: 0xa2c // Size: 0x04
	float PlaybackSpeed; // Offset: 0xa30 // Size: 0x04
	IntProperty NumTracks; // Offset: 0xa34 // Size: 0x04
	float ElapsedTime; // Offset: 0xa38 // Size: 0x04
	char pad_0xA3C[0x54]; // Offset: 0xa3c // Size: 0x54

	// Functions

	// Object Name: Function GeometryCache.GeometryCacheComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x105710530 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetStartTimeOffset(float NewStartTimeOffset); // Offset: 0x1057104b4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Offset: 0x105710438 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GeometryCache.GeometryCacheComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLooping(bool bNewLooping); // Offset: 0x1057103b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	// Flags: [Native|Public|BlueprintCallable]
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Offset: 0x105710320 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayReversedFromEnd(); // Offset: 0x10571030c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeometryCache.GeometryCacheComponent.PlayReversed
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayReversed(); // Offset: 0x1057102f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeometryCache.GeometryCacheComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayFromStart(); // Offset: 0x1057102e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeometryCache.GeometryCacheComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(); // Offset: 0x1057102d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeometryCache.GeometryCacheComponent.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Pause(); // Offset: 0x1057102bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlayingReversed(); // Offset: 0x105710288 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GeometryCache.GeometryCacheComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlaying(); // Offset: 0x105710254 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GeometryCache.GeometryCacheComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsLooping(); // Offset: 0x105710220 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetStartTimeOffset(); // Offset: 0x1057101ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlaybackSpeed(); // Offset: 0x1057101b8 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class GeometryCache.GeometryCacheTrack
// Size: 0x50 // Inherited bytes: 0x28
struct UGeometryCacheTrack : UObject {
	// Fields
	char pad_0x28[0x28]; // Offset: 0x28 // Size: 0x28
};

// Object Name: Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x70 // Inherited bytes: 0x50
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	// Fields
	uint32_t NumMeshSamples; // Offset: 0x4c // Size: 0x04
	char pad_0x54[0x1c]; // Offset: 0x54 // Size: 0x1c

	// Functions

	// Object Name: Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// Flags: [Final|Native|Public|HasOutParms]
	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Offset: 0x105710d30 // Return & Params: Num(2) Size(0x54)
};

// Object Name: Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0xa0 // Inherited bytes: 0x50
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	// Fields
	char pad_0x50[0x50]; // Offset: 0x50 // Size: 0x50

	// Functions

	// Object Name: Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Offset: 0x105710f8c // Return & Params: Num(1) Size(0x50)
};

// Object Name: Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0xa0 // Inherited bytes: 0x50
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	// Fields
	char pad_0x50[0x50]; // Offset: 0x50 // Size: 0x50

	// Functions

	// Object Name: Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Offset: 0x10571119c // Return & Params: Num(1) Size(0x50)
};

