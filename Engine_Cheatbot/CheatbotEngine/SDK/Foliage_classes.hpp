#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0xe30 // Inherited bytes: 0xe10
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	// Fields
	struct FScriptMulticastDelegate OnInstanceTakePointDamage; // Offset: 0xe08 // Size: 0x10
	struct FScriptMulticastDelegate OnInstanceTakeRadialDamage; // Offset: 0xe18 // Size: 0x10
};

// Object Name: Class Foliage.FoliageStatistics
// Size: 0x28 // Inherited bytes: 0x28
struct UFoliageStatistics : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	IntProperty FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Offset: 0x105336608 // Return & Params: Num(5) Size(0x24)

	// Object Name: Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	IntProperty FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Offset: 0x10533650c // Return & Params: Num(4) Size(0x30)
};

// Object Name: Class Foliage.FoliageType
// Size: 0x420 // Inherited bytes: 0x28
struct UFoliageType : UObject {
	// Fields
	struct FGuid UpdateGuid; // Offset: 0x28 // Size: 0x10
	float Density; // Offset: 0x38 // Size: 0x04
	float DensityAdjustmentFactor; // Offset: 0x3c // Size: 0x04
	float Radius; // Offset: 0x40 // Size: 0x04
	enum class EFoliageScaling Scaling; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	struct FFloatInterval ScaleX; // Offset: 0x48 // Size: 0x08
	struct FFloatInterval ScaleY; // Offset: 0x50 // Size: 0x08
	struct FFloatInterval ScaleZ; // Offset: 0x58 // Size: 0x08
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // Offset: 0x60 // Size: 0x30
	enum class FoliageVertexColorMask VertexColorMask; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float VertexColorMaskThreshold; // Offset: 0x94 // Size: 0x04
	char VertexColorMaskInvert : 1; // Offset: 0x98 // Size: 0x01
	char pad_0x98_1 : 7; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	struct FFloatInterval ZOffset; // Offset: 0x9c // Size: 0x08
	char AlignToNormal : 1; // Offset: 0xa4 // Size: 0x01
	char pad_0xA4_1 : 7; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	float AlignMaxAngle; // Offset: 0xa8 // Size: 0x04
	char RandomYaw : 1; // Offset: 0xac // Size: 0x01
	char pad_0xAC_1 : 7; // Offset: 0xac // Size: 0x01
	char pad_0xAD[0x3]; // Offset: 0xad // Size: 0x03
	float RandomPitchAngle; // Offset: 0xb0 // Size: 0x04
	struct FFloatInterval GroundSlopeAngle; // Offset: 0xb4 // Size: 0x08
	struct FFloatInterval Height; // Offset: 0xbc // Size: 0x08
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
	struct TArray<struct FName> LandscapeLayers; // Offset: 0xc8 // Size: 0x10
	struct FName LandscapeLayer; // Offset: 0xd8 // Size: 0x08
	char CollisionWithWorld : 1; // Offset: 0xe0 // Size: 0x01
	char pad_0xE0_1 : 7; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x3]; // Offset: 0xe1 // Size: 0x03
	struct FVector CollisionScale; // Offset: 0xe4 // Size: 0x0c
	float MinimumLayerWeight; // Offset: 0xf0 // Size: 0x04
	struct FBoxSphereBounds MeshBounds; // Offset: 0xf4 // Size: 0x1c
	struct FVector LowBoundOriginRadius; // Offset: 0x110 // Size: 0x0c
	enum class EComponentMobility Mobility; // Offset: 0x11c // Size: 0x01
	char pad_0x11D[0x3]; // Offset: 0x11d // Size: 0x03
	struct FInt32Interval CullDistance; // Offset: 0x120 // Size: 0x08
	IntProperty LowDeviceForcedLodModel; // Offset: 0x128 // Size: 0x04
	char bEnableStaticLighting : 1; // Offset: 0x12c // Size: 0x01
	char CastShadow : 1; // Offset: 0x12c // Size: 0x01
	char bAffectDynamicIndirectLighting : 1; // Offset: 0x12c // Size: 0x01
	char bAffectDistanceFieldLighting : 1; // Offset: 0x12c // Size: 0x01
	char bCastDynamicShadow : 1; // Offset: 0x12c // Size: 0x01
	char bCastStaticShadow : 1; // Offset: 0x12c // Size: 0x01
	char bCastShadowAsTwoSided : 1; // Offset: 0x12c // Size: 0x01
	char bReceivesDecals : 1; // Offset: 0x12c // Size: 0x01
	char bOverrideLightMapRes : 1; // Offset: 0x12d // Size: 0x01
	char pad_0x12D_1 : 7; // Offset: 0x12d // Size: 0x01
	char pad_0x12E[0x2]; // Offset: 0x12e // Size: 0x02
	IntProperty OverriddenLightMapRes; // Offset: 0x130 // Size: 0x04
	enum class ELightmapType LightmapType; // Offset: 0x134 // Size: 0x01
	char bUseAsOccluder : 1; // Offset: 0x135 // Size: 0x01
	char pad_0x135_1 : 7; // Offset: 0x135 // Size: 0x01
	char pad_0x136[0xa]; // Offset: 0x136 // Size: 0x0a
	struct FBodyInstance BodyInstance; // Offset: 0x140 // Size: 0x210
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // Offset: 0x350 // Size: 0x01
	struct FLightingChannels LightingChannels; // Offset: 0x351 // Size: 0x01
	char bRenderCustomDepth : 1; // Offset: 0x352 // Size: 0x01
	char pad_0x352_1 : 7; // Offset: 0x352 // Size: 0x01
	char pad_0x353[0x1]; // Offset: 0x353 // Size: 0x01
	IntProperty CustomDepthStencilValue; // Offset: 0x354 // Size: 0x04
	float CollisionRadius; // Offset: 0x358 // Size: 0x04
	float ShadeRadius; // Offset: 0x35c // Size: 0x04
	IntProperty NumSteps; // Offset: 0x360 // Size: 0x04
	float InitialSeedDensity; // Offset: 0x364 // Size: 0x04
	float AverageSpreadDistance; // Offset: 0x368 // Size: 0x04
	float SpreadVariance; // Offset: 0x36c // Size: 0x04
	IntProperty SeedsPerStep; // Offset: 0x370 // Size: 0x04
	IntProperty DistributionSeed; // Offset: 0x374 // Size: 0x04
	float MaxInitialSeedOffset; // Offset: 0x378 // Size: 0x04
	bool bCanGrowInShade; // Offset: 0x37c // Size: 0x01
	bool bSpawnsInShade; // Offset: 0x37d // Size: 0x01
	char pad_0x37E[0x2]; // Offset: 0x37e // Size: 0x02
	float MaxInitialAge; // Offset: 0x380 // Size: 0x04
	float MaxAge; // Offset: 0x384 // Size: 0x04
	float OverlapPriority; // Offset: 0x388 // Size: 0x04
	struct FFloatInterval ProceduralScale; // Offset: 0x38c // Size: 0x08
	char pad_0x394[0x4]; // Offset: 0x394 // Size: 0x04
	struct FRuntimeFloatCurve ScaleCurve; // Offset: 0x398 // Size: 0x78
	IntProperty ChangeCount; // Offset: 0x410 // Size: 0x04
	char ReapplyDensity : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyRadius : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyAlignToNormal : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyRandomYaw : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyScaling : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyScaleX : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyScaleY : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyScaleZ : 1; // Offset: 0x414 // Size: 0x01
	char ReapplyRandomPitchAngle : 1; // Offset: 0x415 // Size: 0x01
	char ReapplyGroundSlope : 1; // Offset: 0x415 // Size: 0x01
	char ReapplyHeight : 1; // Offset: 0x415 // Size: 0x01
	char ReapplyLandscapeLayers : 1; // Offset: 0x415 // Size: 0x01
	char ReapplyZOffset : 1; // Offset: 0x415 // Size: 0x01
	char ReapplyCollisionWithWorld : 1; // Offset: 0x415 // Size: 0x01
	char ReapplyVertexColorMask : 1; // Offset: 0x415 // Size: 0x01
	char bEnableDensityScaling : 1; // Offset: 0x415 // Size: 0x01
	char pad_0x416[0xa]; // Offset: 0x416 // Size: 0x0a
};

// Object Name: Class Foliage.FoliageType_Actor
// Size: 0x430 // Inherited bytes: 0x420
struct UFoliageType_Actor : UFoliageType {
	// Fields
	struct AActor* ActorClass; // Offset: 0x418 // Size: 0x08
	bool bShouldAttachToBaseComponent; // Offset: 0x420 // Size: 0x01
	char pad_0x429[0x7]; // Offset: 0x429 // Size: 0x07
};

// Object Name: Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x440 // Inherited bytes: 0x420
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	// Fields
	struct UStaticMesh* Mesh; // Offset: 0x418 // Size: 0x08
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // Offset: 0x420 // Size: 0x10
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // Offset: 0x430 // Size: 0x08
};

// Object Name: Class Foliage.InstancedFoliageActor
// Size: 0x500 // Inherited bytes: 0x4b0
struct AInstancedFoliageActor : AActor {
	// Fields
	char pad_0x4B0[0x50]; // Offset: 0x4b0 // Size: 0x50
};

// Object Name: Class Foliage.InteractiveFoliageActor
// Size: 0x520 // Inherited bytes: 0x4c0
struct AInteractiveFoliageActor : AStaticMeshActor {
	// Fields
	struct UCapsuleComponent* CapsuleComponent; // Offset: 0x4c0 // Size: 0x08
	struct FVector TouchingActorEntryPosition; // Offset: 0x4c8 // Size: 0x0c
	struct FVector FoliageVelocity; // Offset: 0x4d4 // Size: 0x0c
	struct FVector FoliageForce; // Offset: 0x4e0 // Size: 0x0c
	struct FVector FoliagePosition; // Offset: 0x4ec // Size: 0x0c
	float FoliageDamageImpulseScale; // Offset: 0x4f8 // Size: 0x04
	float FoliageTouchImpulseScale; // Offset: 0x4fc // Size: 0x04
	float FoliageStiffness; // Offset: 0x500 // Size: 0x04
	float FoliageStiffnessQuadratic; // Offset: 0x504 // Size: 0x04
	float FoliageDamping; // Offset: 0x508 // Size: 0x04
	float MaxDamageImpulse; // Offset: 0x50c // Size: 0x04
	float MaxTouchImpulse; // Offset: 0x510 // Size: 0x04
	float MaxForce; // Offset: 0x514 // Size: 0x04
	float Mass; // Offset: 0x518 // Size: 0x04
	char pad_0x51C[0x4]; // Offset: 0x51c // Size: 0x04

	// Functions

	// Object Name: Function Foliage.InteractiveFoliageActor.CapsuleTouched
	// Flags: [Final|Native|Protected|HasOutParms]
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Offset: 0x105337238 // Return & Params: Num(6) Size(0xa8)
};

// Object Name: Class Foliage.InteractiveFoliageComponent
// Size: 0xbd0 // Inherited bytes: 0xbd0
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Object Name: Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x4e8 // Inherited bytes: 0x4e0
struct AProceduralFoliageBlockingVolume : AVolume {
	// Fields
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // Offset: 0x4e0 // Size: 0x08
};

// Object Name: Class Foliage.ProceduralFoliageComponent
// Size: 0x1a0 // Inherited bytes: 0x178
struct UProceduralFoliageComponent : UActorComponent {
	// Fields
	struct UProceduralFoliageSpawner* FoliageSpawner; // Offset: 0x178 // Size: 0x08
	float TileOverlap; // Offset: 0x180 // Size: 0x04
	char pad_0x184[0x4]; // Offset: 0x184 // Size: 0x04
	struct AVolume* SpawningVolume; // Offset: 0x188 // Size: 0x08
	struct FGuid ProceduralGuid; // Offset: 0x190 // Size: 0x10
};

// Object Name: Class Foliage.ProceduralFoliageSpawner
// Size: 0x70 // Inherited bytes: 0x28
struct UProceduralFoliageSpawner : UObject {
	// Fields
	IntProperty RandomSeed; // Offset: 0x28 // Size: 0x04
	float TileSize; // Offset: 0x2c // Size: 0x04
	IntProperty NumUniqueTiles; // Offset: 0x30 // Size: 0x04
	float MinimumQuadTreeSize; // Offset: 0x34 // Size: 0x04
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // Offset: 0x40 // Size: 0x10
	bool bNeedsSimulation; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x1f]; // Offset: 0x51 // Size: 0x1f

	// Functions

	// Object Name: Function Foliage.ProceduralFoliageSpawner.Simulate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Simulate(IntProperty NumSteps); // Offset: 0x105337a58 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Foliage.ProceduralFoliageTile
// Size: 0x158 // Inherited bytes: 0x28
struct UProceduralFoliageTile : UObject {
	// Fields
	struct UProceduralFoliageSpawner* FoliageSpawner; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0xa0]; // Offset: 0x30 // Size: 0xa0
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // Offset: 0xd0 // Size: 0x10
	char pad_0xE0[0x78]; // Offset: 0xe0 // Size: 0x78
};

// Object Name: Class Foliage.ProceduralFoliageVolume
// Size: 0x4e8 // Inherited bytes: 0x4e0
struct AProceduralFoliageVolume : AVolume {
	// Fields
	struct UProceduralFoliageComponent* ProceduralComponent; // Offset: 0x4e0 // Size: 0x08
};

