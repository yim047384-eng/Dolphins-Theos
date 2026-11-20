#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0x1d8 // Inherited bytes: 0x1b8
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	// Fields
	bool bSampleAdditionalTextures; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x3]; // Offset: 0x1b9 // Size: 0x03
	IntProperty AdditionalSlotIndex; // Offset: 0x1bc // Size: 0x04
	struct FText SlotDisplayName; // Offset: 0x1c0 // Size: 0x18
};

// Object Name: Class Paper2D.PaperCharacter
// Size: 0x8f0 // Inherited bytes: 0x8f0
struct APaperCharacter : ACharacter {
	// Fields
	struct UPaperFlipbookComponent* Sprite; // Offset: 0x8e8 // Size: 0x08
};

// Object Name: Class Paper2D.PaperFlipbook
// Size: 0x50 // Inherited bytes: 0x28
struct UPaperFlipbook : UObject {
	// Fields
	float FramesPerSecond; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // Offset: 0x30 // Size: 0x10
	struct UMaterialInterface* DefaultMaterial; // Offset: 0x40 // Size: 0x08
	enum class EFlipbookCollisionMode CollisionSource; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07

	// Functions

	// Object Name: Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsValidKeyFrameIndex(IntProperty Index); // Offset: 0x101f901d8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Paper2D.PaperFlipbook.GetTotalDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetTotalDuration(); // Offset: 0x101f901a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbook.GetSpriteAtTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Offset: 0x101f900d4 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPaperSprite* GetSpriteAtFrame(IntProperty FrameIndex); // Offset: 0x101f90048 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Paper2D.PaperFlipbook.GetNumKeyFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumKeyFrames(); // Offset: 0x101f9002c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbook.GetNumFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumFrames(); // Offset: 0x101f8fff8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Offset: 0x101f8ff28 // Return & Params: Num(3) Size(0xc)
};

// Object Name: Class Paper2D.PaperFlipbookActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct APaperFlipbookActor : AActor {
	// Fields
	struct UPaperFlipbookComponent* RenderComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Paper2D.PaperFlipbookComponent
// Size: 0xa70 // Inherited bytes: 0xa20
struct UPaperFlipbookComponent : UMeshComponent {
	// Fields
	struct UPaperFlipbook* SourceFlipbook; // Offset: 0xa20 // Size: 0x08
	struct UMaterialInterface* Material; // Offset: 0xa28 // Size: 0x08
	float PlayRate; // Offset: 0xa30 // Size: 0x04
	char bLooping : 1; // Offset: 0xa34 // Size: 0x01
	char bReversePlayback : 1; // Offset: 0xa34 // Size: 0x01
	char bPlayIng : 1; // Offset: 0xa34 // Size: 0x01
	char pad_0xA34_3 : 5; // Offset: 0xa34 // Size: 0x01
	char pad_0xA35[0x3]; // Offset: 0xa35 // Size: 0x03
	float AccumulatedTime; // Offset: 0xa38 // Size: 0x04
	IntProperty CachedFrameIndex; // Offset: 0xa3c // Size: 0x04
	struct FLinearColor SpriteColor; // Offset: 0xa40 // Size: 0x10
	struct UBodySetup* CachedBodySetup; // Offset: 0xa50 // Size: 0x08
	struct FScriptMulticastDelegate OnFinishedPlaying; // Offset: 0xa58 // Size: 0x10
	char pad_0xA68[0x8]; // Offset: 0xa68 // Size: 0x08

	// Functions

	// Object Name: Function Paper2D.PaperFlipbookComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x101f90d70 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSpriteColor(struct FLinearColor NewColor); // Offset: 0x101f90cf4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlayRate(float NewRate); // Offset: 0x101f90c78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackPositionInFrames(IntProperty NewFramePosition, bool bFireEvents); // Offset: 0x101f90bbc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Offset: 0x101f90afc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetNewTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNewTime(float NewTime); // Offset: 0x101f90a80 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLooping(bool bNewLooping); // Offset: 0x101f909fc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Paper2D.PaperFlipbookComponent.SetFlipbook
	// Flags: [Native|Public|BlueprintCallable]
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Offset: 0x101f90968 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReverseFromEnd(); // Offset: 0x101f90954 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperFlipbookComponent.Reverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reverse(); // Offset: 0x101f90940 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperFlipbookComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayFromStart(); // Offset: 0x101f9092c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperFlipbookComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(); // Offset: 0x101f90918 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// Flags: [Final|Native|Protected]
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Offset: 0x101f9089c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Paper2D.PaperFlipbookComponent.IsReversing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsReversing(); // Offset: 0x101f90868 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Paper2D.PaperFlipbookComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlaying(); // Offset: 0x101f90834 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Paper2D.PaperFlipbookComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsLooping(); // Offset: 0x101f90800 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlayRate(); // Offset: 0x101f907cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPlaybackPositionInFrames(); // Offset: 0x101f90798 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlaybackPosition(); // Offset: 0x101f90764 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetFlipbookLengthInFrames(); // Offset: 0x101f90730 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetFlipbookLength(); // Offset: 0x101f906fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetFlipbookFramerate(); // Offset: 0x101f906c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperFlipbookComponent.GetFlipbook
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UPaperFlipbook* GetFlipbook(); // Offset: 0x101f9068c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Paper2D.PaperGroupedSpriteActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct APaperGroupedSpriteActor : AActor {
	// Fields
	struct UPaperGroupedSpriteComponent* RenderComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Paper2D.PaperGroupedSpriteComponent
// Size: 0xa50 // Inherited bytes: 0xa20
struct UPaperGroupedSpriteComponent : UMeshComponent {
	// Fields
	struct TArray<struct UMaterialInterface*> InstanceMaterials; // Offset: 0xa20 // Size: 0x10
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // Offset: 0xa30 // Size: 0x10
	char pad_0xA40[0x10]; // Offset: 0xa40 // Size: 0x10

	// Functions

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool UpdateInstanceTransform(IntProperty InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Offset: 0x101f91c28 // Return & Params: Num(6) Size(0x44)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	bool UpdateInstanceColor(IntProperty InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Offset: 0x101f91b14 // Return & Params: Num(4) Size(0x16)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Offset: 0x101f91a98 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// Flags: [Native|Public|BlueprintCallable]
	bool RemoveInstance(IntProperty InstanceIndex); // Offset: 0x101f91a04 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool GetInstanceTransform(IntProperty InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Offset: 0x101f918d0 // Return & Params: Num(4) Size(0x42)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetInstanceCount(); // Offset: 0x101f9189c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// Flags: [Native|Public|BlueprintCallable]
	void ClearInstances(); // Offset: 0x101f91880 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperGroupedSpriteComponent.AddInstance
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Offset: 0x101f91708 // Return & Params: Num(5) Size(0x50)
};

// Object Name: Class Paper2D.PaperRuntimeSettings
// Size: 0x30 // Inherited bytes: 0x28
struct UPaperRuntimeSettings : UObject {
	// Fields
	bool bEnableSpriteAtlasGroups; // Offset: 0x28 // Size: 0x01
	bool bEnableTerrainSplineEditing; // Offset: 0x29 // Size: 0x01
	bool bResizeSpriteDataToMatchTextures; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
};

// Object Name: Class Paper2D.PaperSprite
// Size: 0xc0 // Inherited bytes: 0x28
struct UPaperSprite : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
	struct FVector2D SourceUV; // Offset: 0x38 // Size: 0x08
	struct FVector2D SourceDimension; // Offset: 0x40 // Size: 0x08
	struct UTexture2D* SourceTexture; // Offset: 0x48 // Size: 0x08
	struct TArray<struct UTexture*> AdditionalSourceTextures; // Offset: 0x50 // Size: 0x10
	struct FVector2D BakedSourceUV; // Offset: 0x60 // Size: 0x08
	struct FVector2D BakedSourceDimension; // Offset: 0x68 // Size: 0x08
	struct UTexture2D* BakedSourceTexture; // Offset: 0x70 // Size: 0x08
	struct UMaterialInterface* DefaultMaterial; // Offset: 0x78 // Size: 0x08
	struct UMaterialInterface* AlternateMaterial; // Offset: 0x80 // Size: 0x08
	struct TArray<struct FPaperSpriteSocket> Sockets; // Offset: 0x88 // Size: 0x10
	enum class ESpriteCollisionMode SpriteCollisionDomain; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	float PixelsPerUnrealUnit; // Offset: 0x9c // Size: 0x04
	struct UBodySetup* BodySetup; // Offset: 0xa0 // Size: 0x08
	IntProperty AlternateMaterialSplitIndex; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
	struct TArray<struct FVector4> BakedRenderData; // Offset: 0xb0 // Size: 0x10
};

// Object Name: Class Paper2D.PaperSpriteActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct APaperSpriteActor : AActor {
	// Fields
	struct UPaperSpriteComponent* RenderComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Paper2D.PaperSpriteAtlas
// Size: 0x28 // Inherited bytes: 0x28
struct UPaperSpriteAtlas : UObject {
};

// Object Name: Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, IntProperty Width, IntProperty Height); // Offset: 0x101f927cc // Return & Params: Num(4) Size(0xc8)
};

// Object Name: Class Paper2D.PaperSpriteComponent
// Size: 0xa40 // Inherited bytes: 0xa20
struct UPaperSpriteComponent : UMeshComponent {
	// Fields
	struct UPaperSprite* SourceSprite; // Offset: 0xa20 // Size: 0x08
	struct UMaterialInterface* MaterialOverride; // Offset: 0xa28 // Size: 0x08
	struct FLinearColor SpriteColor; // Offset: 0xa30 // Size: 0x10

	// Functions

	// Object Name: Function Paper2D.PaperSpriteComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSpriteColor(struct FLinearColor NewColor); // Offset: 0x101f92b14 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Paper2D.PaperSpriteComponent.SetSprite
	// Flags: [Native|Public|BlueprintCallable]
	bool SetSprite(struct UPaperSprite* NewSprite); // Offset: 0x101f92a80 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Paper2D.PaperSpriteComponent.GetSprite
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UPaperSprite* GetSprite(); // Offset: 0x101f92a44 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Paper2D.PaperTerrainActor
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct APaperTerrainActor : AActor {
	// Fields
	struct USceneComponent* DummyRoot; // Offset: 0x4b0 // Size: 0x08
	struct UPaperTerrainSplineComponent* SplineComponent; // Offset: 0x4b8 // Size: 0x08
	struct UPaperTerrainComponent* RenderComponent; // Offset: 0x4c0 // Size: 0x08
};

// Object Name: Class Paper2D.PaperTerrainComponent
// Size: 0xa20 // Inherited bytes: 0x9d0
struct UPaperTerrainComponent : UPrimitiveComponent {
	// Fields
	struct UPaperTerrainMaterial* TerrainMaterial; // Offset: 0x9c8 // Size: 0x08
	bool bClosedSpline; // Offset: 0x9d0 // Size: 0x01
	bool bFilledSpline; // Offset: 0x9d1 // Size: 0x01
	struct UPaperTerrainSplineComponent* AssociatedSpline; // Offset: 0x9d8 // Size: 0x08
	IntProperty RandomSeed; // Offset: 0x9e0 // Size: 0x04
	float SegmentOverlapAmount; // Offset: 0x9e4 // Size: 0x04
	struct FLinearColor TerrainColor; // Offset: 0x9e8 // Size: 0x10
	IntProperty ReparamStepsPerSegment; // Offset: 0x9f8 // Size: 0x04
	enum class ESpriteCollisionMode SpriteCollisionDomain; // Offset: 0x9fc // Size: 0x01
	char pad_0x9FF[0x1]; // Offset: 0x9ff // Size: 0x01
	float CollisionThickness; // Offset: 0xa00 // Size: 0x04
	char pad_0xA04[0x4]; // Offset: 0xa04 // Size: 0x04
	struct UBodySetup* CachedBodySetup; // Offset: 0xa08 // Size: 0x08
	char pad_0xA10[0x10]; // Offset: 0xa10 // Size: 0x10

	// Functions

	// Object Name: Function Paper2D.PaperTerrainComponent.SetTerrainColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetTerrainColor(struct FLinearColor NewColor); // Offset: 0x101f92e8c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Paper2D.PaperTerrainMaterial
// Size: 0x48 // Inherited bytes: 0x30
struct UPaperTerrainMaterial : UDataAsset {
	// Fields
	struct TArray<struct FPaperTerrainMaterialRule> Rules; // Offset: 0x30 // Size: 0x10
	struct UPaperSprite* InteriorFill; // Offset: 0x40 // Size: 0x08
};

// Object Name: Class Paper2D.PaperTerrainSplineComponent
// Size: 0xac0 // Inherited bytes: 0xab0
struct UPaperTerrainSplineComponent : USplineComponent {
	// Fields
	char pad_0xAB0[0x10]; // Offset: 0xab0 // Size: 0x10
};

// Object Name: Class Paper2D.PaperTileLayer
// Size: 0x98 // Inherited bytes: 0x28
struct UPaperTileLayer : UObject {
	// Fields
	struct FText LayerName; // Offset: 0x28 // Size: 0x18
	IntProperty LayerWidth; // Offset: 0x40 // Size: 0x04
	IntProperty LayerHeight; // Offset: 0x44 // Size: 0x04
	char bHiddenInGame : 1; // Offset: 0x48 // Size: 0x01
	char bLayerCollides : 1; // Offset: 0x48 // Size: 0x01
	char bOverrideCollisionThickness : 1; // Offset: 0x48 // Size: 0x01
	char bOverrideCollisionOffset : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_4 : 4; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
	float CollisionThicknessOverride; // Offset: 0x4c // Size: 0x04
	float CollisionOffsetOverride; // Offset: 0x50 // Size: 0x04
	struct FLinearColor LayerColor; // Offset: 0x54 // Size: 0x10
	IntProperty AllocatedWidth; // Offset: 0x64 // Size: 0x04
	IntProperty AllocatedHeight; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<struct FPaperTileInfo> AllocatedCells; // Offset: 0x70 // Size: 0x10
	struct UPaperTileSet* TileSet; // Offset: 0x80 // Size: 0x08
	struct TArray<IntProperty> AllocatedGrid; // Offset: 0x88 // Size: 0x10
};

// Object Name: Class Paper2D.PaperTileMap
// Size: 0xa8 // Inherited bytes: 0x28
struct UPaperTileMap : UObject {
	// Fields
	IntProperty MapWidth; // Offset: 0x28 // Size: 0x04
	IntProperty MapHeight; // Offset: 0x2c // Size: 0x04
	IntProperty TileWidth; // Offset: 0x30 // Size: 0x04
	IntProperty TileHeight; // Offset: 0x34 // Size: 0x04
	float PixelsPerUnrealUnit; // Offset: 0x38 // Size: 0x04
	float SeparationPerTileX; // Offset: 0x3c // Size: 0x04
	float SeparationPerTileY; // Offset: 0x40 // Size: 0x04
	float SeparationPerLayer; // Offset: 0x44 // Size: 0x04
	struct UPaperTileSet* SelectedTileSet; // Offset: 0x48 // Size: 0x28
	struct UMaterialInterface* Material; // Offset: 0x70 // Size: 0x08
	struct TArray<struct UPaperTileLayer*> TileLayers; // Offset: 0x78 // Size: 0x10
	float CollisionThickness; // Offset: 0x88 // Size: 0x04
	enum class ESpriteCollisionMode SpriteCollisionDomain; // Offset: 0x8c // Size: 0x01
	enum class ETileMapProjectionMode ProjectionMode; // Offset: 0x8d // Size: 0x01
	char pad_0x8E[0x2]; // Offset: 0x8e // Size: 0x02
	IntProperty HexSideLength; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct UBodySetup* BodySetup; // Offset: 0x98 // Size: 0x08
	IntProperty LayerNameIndex; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
};

// Object Name: Class Paper2D.PaperTileMapActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct APaperTileMapActor : AActor {
	// Fields
	struct UPaperTileMapComponent* RenderComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Paper2D.PaperTileMapComponent
// Size: 0xa70 // Inherited bytes: 0xa20
struct UPaperTileMapComponent : UMeshComponent {
	// Fields
	IntProperty MapWidth; // Offset: 0xa20 // Size: 0x04
	IntProperty MapHeight; // Offset: 0xa24 // Size: 0x04
	IntProperty TileWidth; // Offset: 0xa28 // Size: 0x04
	IntProperty TileHeight; // Offset: 0xa2c // Size: 0x04
	struct UPaperTileSet* DefaultLayerTileSet; // Offset: 0xa30 // Size: 0x08
	struct UMaterialInterface* Material; // Offset: 0xa38 // Size: 0x08
	struct TArray<struct UPaperTileLayer*> TileLayers; // Offset: 0xa40 // Size: 0x10
	struct FLinearColor TileMapColor; // Offset: 0xa50 // Size: 0x10
	IntProperty UseSingleLayerIndex; // Offset: 0xa60 // Size: 0x04
	bool bUseSingleLayer; // Offset: 0xa64 // Size: 0x01
	char pad_0xA65[0x3]; // Offset: 0xa65 // Size: 0x03
	struct UPaperTileMap* TileMap; // Offset: 0xa68 // Size: 0x08

	// Functions

	// Object Name: Function Paper2D.PaperTileMapComponent.SetTileMapColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetTileMapColor(struct FLinearColor NewColor); // Offset: 0x101f94754 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Paper2D.PaperTileMapComponent.SetTileMap
	// Flags: [Native|Public|BlueprintCallable]
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Offset: 0x101f946c0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Paper2D.PaperTileMapComponent.SetTile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTile(IntProperty X, IntProperty Y, IntProperty Layer, struct FPaperTileInfo NewValue); // Offset: 0x101f9458c // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Paper2D.PaperTileMapComponent.SetLayerColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetLayerColor(struct FLinearColor NewColor, IntProperty Layer); // Offset: 0x101f944d4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Paper2D.PaperTileMapComponent.SetLayerCollision
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLayerCollision(IntProperty Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Offset: 0x101f942c0 // Return & Params: Num(7) Size(0x15)

	// Object Name: Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Offset: 0x101f94200 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Paper2D.PaperTileMapComponent.ResizeMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResizeMap(IntProperty NewWidthInTiles, IntProperty NewHeightInTiles); // Offset: 0x101f9414c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Paper2D.PaperTileMapComponent.RebuildCollision
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RebuildCollision(); // Offset: 0x101f94138 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperTileMapComponent.OwnsTileMap
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool OwnsTileMap(); // Offset: 0x101f94104 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MakeTileMapEditable(); // Offset: 0x101f940f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetTilePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetTilePolygon(IntProperty TileX, IntProperty TileY, struct TArray<struct FVector>& Points, IntProperty LayerIndex, bool bWorldSpace); // Offset: 0x101f93f44 // Return & Params: Num(5) Size(0x1d)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetTileMapColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FLinearColor GetTileMapColor(); // Offset: 0x101f93f0c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetTileCornerPosition(IntProperty TileX, IntProperty TileY, IntProperty LayerIndex, bool bWorldSpace); // Offset: 0x101f93dc8 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetTileCenterPosition(IntProperty TileX, IntProperty TileY, IntProperty LayerIndex, bool bWorldSpace); // Offset: 0x101f93c84 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetTile
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FPaperTileInfo GetTile(IntProperty X, IntProperty Y, IntProperty Layer); // Offset: 0x101f93b80 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetMapSize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GetMapSize(IntProperty& MapWidth, IntProperty& MapHeight, IntProperty& NumLayers); // Offset: 0x101f93a54 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Paper2D.PaperTileMapComponent.GetLayerColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FLinearColor GetLayerColor(IntProperty Layer); // Offset: 0x101f939c4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CreateNewTileMap(IntProperty MapWidth, IntProperty MapHeight, IntProperty TileWidth, IntProperty TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Offset: 0x101f93818 // Return & Params: Num(6) Size(0x15)

	// Object Name: Function Paper2D.PaperTileMapComponent.AddNewLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPaperTileLayer* AddNewLayer(); // Offset: 0x101f937e4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Paper2D.PaperTileSet
// Size: 0xa8 // Inherited bytes: 0x28
struct UPaperTileSet : UObject {
	// Fields
	struct FIntPoint TileSize; // Offset: 0x28 // Size: 0x08
	struct UTexture2D* TileSheet; // Offset: 0x30 // Size: 0x08
	struct TArray<struct UTexture*> AdditionalSourceTextures; // Offset: 0x38 // Size: 0x10
	struct FIntMargin BorderMargin; // Offset: 0x48 // Size: 0x10
	struct FIntPoint PerTileSpacing; // Offset: 0x58 // Size: 0x08
	struct FIntPoint DrawingOffset; // Offset: 0x60 // Size: 0x08
	IntProperty WidthInTiles; // Offset: 0x68 // Size: 0x04
	IntProperty HeightInTiles; // Offset: 0x6c // Size: 0x04
	IntProperty AllocatedWidth; // Offset: 0x70 // Size: 0x04
	IntProperty AllocatedHeight; // Offset: 0x74 // Size: 0x04
	struct TArray<struct FPaperTileMetadata> PerTileData; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FPaperTileSetTerrain> Terrains; // Offset: 0x88 // Size: 0x10
	IntProperty TileWidth; // Offset: 0x98 // Size: 0x04
	IntProperty TileHeight; // Offset: 0x9c // Size: 0x04
	IntProperty Margin; // Offset: 0xa0 // Size: 0x04
	IntProperty Spacing; // Offset: 0xa4 // Size: 0x04
};

// Object Name: Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Paper2D.TileMapBlueprintLibrary.MakeTile
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FPaperTileInfo MakeTile(IntProperty TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Offset: 0x101f97ec4 // Return & Params: Num(6) Size(0x28)

	// Object Name: Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Offset: 0x101f97e40 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Offset: 0x101f97dac // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Paper2D.TileMapBlueprintLibrary.BreakTile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void BreakTile(struct FPaperTileInfo Tile, IntProperty& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Offset: 0x101f97ba4 // Return & Params: Num(6) Size(0x23)
};

