#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class OceanPlugin.AdvancedBuoyancyComponent
// Size: 0x4b0 // Inherited bytes: 0x3a0
struct UAdvancedBuoyancyComponent : USceneComponent {
	// Fields
	bool bUseDrag; // Offset: 0x399 // Size: 0x01
	bool bDebugOn; // Offset: 0x39a // Size: 0x01
	struct AOceanManager* TheOcean; // Offset: 0x3a0 // Size: 0x08
	float WaterDensity; // Offset: 0x3a8 // Size: 0x04
	float Gravity; // Offset: 0x3ac // Size: 0x04
	float MeshDensity; // Offset: 0x3b0 // Size: 0x04
	char pad_0x3B6[0x12]; // Offset: 0x3b6 // Size: 0x12
	struct UStaticMeshComponent* BuoyantMesh; // Offset: 0x3c8 // Size: 0x08
	struct FTransform MeshTransform; // Offset: 0x3d0 // Size: 0x30
	float FalseVolume; // Offset: 0x400 // Size: 0x04
	float BuoyancyReductionCoefficient; // Offset: 0x404 // Size: 0x04
	float BuoyancyPitchReductionCoefficient; // Offset: 0x408 // Size: 0x04
	float DensityCorrection; // Offset: 0x40c // Size: 0x04
	float DensityCorrectionModifier; // Offset: 0x410 // Size: 0x04
	float SubmergedVolume; // Offset: 0x414 // Size: 0x04
	float ImpactCoefficient; // Offset: 0x418 // Size: 0x04
	struct FVector DragCoefficient; // Offset: 0x41c // Size: 0x0c
	struct FVector SuctionCoefficient; // Offset: 0x428 // Size: 0x0c
	float ViscousDragCoefficient; // Offset: 0x434 // Size: 0x04
	float MaxSlamAcceleration; // Offset: 0x438 // Size: 0x04
	char pad_0x43C[0x4]; // Offset: 0x43c // Size: 0x04
	struct TArray<struct FVector> AdvancedGridHeight; // Offset: 0x440 // Size: 0x10
	struct TArray<struct FForceTriangle> SubmergedTris; // Offset: 0x450 // Size: 0x10
	struct TArray<float> TriSizes; // Offset: 0x460 // Size: 0x10
	struct TArray<float> TriSubmergedArea; // Offset: 0x470 // Size: 0x10
	char pad_0x480[0x30]; // Offset: 0x480 // Size: 0x30

	// Functions

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	float TriangleArea(struct FVector A, struct FVector B, struct FVector C); // Offset: 0x101a07334 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct TArray<struct FForceTriangle> SplitTriangle(struct FBuoyancyVertex H, struct FBuoyancyVertex M, struct FBuoyancyVertex L, struct FVector InArrow); // Offset: 0x101a07180 // Return & Params: Num(5) Size(0x50)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMeshDensity(float NewDensity, float NewWaterDensity); // Offset: 0x101a070cc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	float GetOceanDepthFromGrid(struct FVector Position, bool bJustGetHeightAtLocation); // Offset: 0x101a06ffc // Return & Params: Num(3) Size(0x14)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetOcean(); // Offset: 0x101a06fe8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void DrawDebugStuff(struct FForceTriangle TriForce, struct FColor DebugColor); // Offset: 0x101a06eec // Return & Params: Num(2) Size(0x70)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void ApplySlamForce(struct FVector SlamForce, struct FVector TriCenter); // Offset: 0x101a06e34 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ApplyForce(struct FForceTriangle TriForce); // Offset: 0x101a06d6c // Return & Params: Num(1) Size(0x6c)
};

// Object Name: Class OceanPlugin.BuoyancyComponent
// Size: 0x248 // Inherited bytes: 0x1b8
struct UBuoyancyComponent : UMovementComponent {
	// Fields
	struct AOceanManager* OceanManager; // Offset: 0x1b8 // Size: 0x08
	float MeshDensity; // Offset: 0x1c0 // Size: 0x04
	float FluidDensity; // Offset: 0x1c4 // Size: 0x04
	float FluidLinearDamping; // Offset: 0x1c8 // Size: 0x04
	float FluidAngularDamping; // Offset: 0x1cc // Size: 0x04
	struct FVector VelocityDamper; // Offset: 0x1d0 // Size: 0x0c
	bool ClampMaxVelocity; // Offset: 0x1dc // Size: 0x01
	char pad_0x1DD[0x3]; // Offset: 0x1dd // Size: 0x03
	float MaxUnderwaterVelocity; // Offset: 0x1e0 // Size: 0x04
	float TestPointRadius; // Offset: 0x1e4 // Size: 0x04
	struct TArray<struct FVector> TestPoints; // Offset: 0x1e8 // Size: 0x10
	struct TArray<float> PointDensityOverride; // Offset: 0x1f8 // Size: 0x10
	bool DrawDebugPoints; // Offset: 0x208 // Size: 0x01
	bool EnableStayUprightConstraint; // Offset: 0x209 // Size: 0x01
	char pad_0x20A[0x2]; // Offset: 0x20a // Size: 0x02
	float StayUprightStiffness; // Offset: 0x20c // Size: 0x04
	float StayUprightDamping; // Offset: 0x210 // Size: 0x04
	struct FRotator StayUprightDesiredRotation; // Offset: 0x214 // Size: 0x0c
	bool EnableWaveForces; // Offset: 0x220 // Size: 0x01
	char pad_0x221[0x3]; // Offset: 0x221 // Size: 0x03
	float WaveForceMultiplier; // Offset: 0x224 // Size: 0x04
	char pad_0x228[0x20]; // Offset: 0x228 // Size: 0x20
};

// Object Name: Class OceanPlugin.BuoyancyForceComponent
// Size: 0x660 // Inherited bytes: 0x3a0
struct UBuoyancyForceComponent : USceneComponent {
	// Fields
	struct FScriptMulticastDelegate OnContactWater; // Offset: 0x3a0 // Size: 0x10
	struct FScriptMulticastDelegate OnEnterWater; // Offset: 0x3b0 // Size: 0x10
	bool bUseBuoyancyEvent; // Offset: 0x3c0 // Size: 0x01
	char pad_0x3C1[0x7]; // Offset: 0x3c1 // Size: 0x07
	struct AOceanManager* OceanManager; // Offset: 0x3c8 // Size: 0x08
	float MeshDensity; // Offset: 0x3d0 // Size: 0x04
	float FluidDensity; // Offset: 0x3d4 // Size: 0x04
	float FluidLinearDamping; // Offset: 0x3d8 // Size: 0x04
	float FluidAngularDamping; // Offset: 0x3dc // Size: 0x04
	struct FVector VelocityDamper; // Offset: 0x3e0 // Size: 0x0c
	bool ClampMaxVelocity; // Offset: 0x3ec // Size: 0x01
	char pad_0x3ED[0x3]; // Offset: 0x3ed // Size: 0x03
	float MaxUnderwaterVelocity; // Offset: 0x3f0 // Size: 0x04
	float TestPointRadius; // Offset: 0x3f4 // Size: 0x04
	struct TArray<struct FVector> TestPoints; // Offset: 0x3f8 // Size: 0x10
	bool ApplyForceToBones; // Offset: 0x408 // Size: 0x01
	bool SnapToSurfaceIfNoPhysics; // Offset: 0x409 // Size: 0x01
	bool SnapToSeaLevel; // Offset: 0x40a // Size: 0x01
	bool bEnableGerstnerWaves; // Offset: 0x40b // Size: 0x01
	bool TwoGerstnerIterations; // Offset: 0x40c // Size: 0x01
	char pad_0x40D[0x3]; // Offset: 0x40d // Size: 0x03
	struct TArray<float> PointDensityOverride; // Offset: 0x410 // Size: 0x10
	struct TArray<struct FStructBoneOverride> BoneOverride; // Offset: 0x420 // Size: 0x10
	bool bEnableZOptimize; // Offset: 0x430 // Size: 0x01
	bool DrawDebugPoints; // Offset: 0x431 // Size: 0x01
	bool DrawDebugSeaLevel; // Offset: 0x432 // Size: 0x01
	bool EnableStayUprightConstraint; // Offset: 0x433 // Size: 0x01
	float StayUprightStiffness; // Offset: 0x434 // Size: 0x04
	float StayUprightDamping; // Offset: 0x438 // Size: 0x04
	struct FRotator StayUprightDesiredRotation; // Offset: 0x43c // Size: 0x0c
	bool EnableWaveForces; // Offset: 0x448 // Size: 0x01
	char pad_0x449[0x3]; // Offset: 0x449 // Size: 0x03
	float WaveForceMultiplier; // Offset: 0x44c // Size: 0x04
	struct USceneComponent* UpdatedComponent; // Offset: 0x450 // Size: 0x08
	enum class ETickingGroup TickGroup; // Offset: 0x458 // Size: 0x01
	bool EnableCustomWaveForce; // Offset: 0x459 // Size: 0x01
	char pad_0x45A[0x2]; // Offset: 0x45a // Size: 0x02
	struct FVector CustomWaveForceTestPointOffset; // Offset: 0x45c // Size: 0x0c
	struct TArray<struct UWaterBoxComponent*> CandidateWaterBoxes; // Offset: 0x468 // Size: 0x10
	char pad_0x478[0x1b8]; // Offset: 0x478 // Size: 0x1b8
	struct UPhysicsConstraintComponent* UprightConstraintComp; // Offset: 0x630 // Size: 0x08
	char pad_0x638[0x10]; // Offset: 0x638 // Size: 0x10
	struct UWorld* World; // Offset: 0x648 // Size: 0x08
	char pad_0x650[0x10]; // Offset: 0x650 // Size: 0x10

	// Functions

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.SetUpdatedComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUpdatedComponent(struct USceneComponent* NewUpdatedComponent); // Offset: 0x101a07d88 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction OceanPlugin.BuoyancyForceComponent.OnEnterWaterDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnEnterWaterDelegate__DelegateSignature(bool IsUnderWater); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction OceanPlugin.BuoyancyForceComponent.OnContactWaterDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnContactWaterDelegate__DelegateSignature(bool IsContactingWater); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.NativeSetEnableCustomWaveForce
	// Flags: [Final|Native|Public|BlueprintCallable]
	void NativeSetEnableCustomWaveForce(bool bEnable); // Offset: 0x101a07d04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.IsGerstnerWaveEnabled
	// Flags: [Final|Native|Public|Const]
	bool IsGerstnerWaveEnabled(); // Offset: 0x101a07cd0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.IsFloatingOnWater
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFloatingOnWater(); // Offset: 0x101a07cac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.IsEntirelyUnderWater
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsEntirelyUnderWater(); // Offset: 0x101a07c74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.IsContactedWater
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsContactedWater(); // Offset: 0x101a07c50 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.GetSeaLevel
	// Flags: [Final|Native|Public]
	float GetSeaLevel(); // Offset: 0x101a07c1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.GetOceanManager
	// Flags: [Final|Native|Public]
	struct AOceanManager* GetOceanManager(); // Offset: 0x101a07be8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.EndableUprightConstraint
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EndableUprightConstraint(bool bEnable); // Offset: 0x101a07b64 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.CheckPointInWater
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool CheckPointInWater(struct FVector Point, bool isWorldPosition); // Offset: 0x101a07a94 // Return & Params: Num(3) Size(0xe)

	// Object Name: Function OceanPlugin.BuoyancyForceComponent.CacheDampingProperties
	// Flags: [Final|Native|Public]
	void CacheDampingProperties(); // Offset: 0x101a07a80 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class OceanPlugin.BuoyantMeshComponent
// Size: 0xc30 // Inherited bytes: 0xbd0
struct UBuoyantMeshComponent : UStaticMeshComponent {
	// Fields
	bool bVerticalForcesOnly; // Offset: 0xbd0 // Size: 0x01
	bool bUseWaterPatch; // Offset: 0xbd1 // Size: 0x01
	bool bUseStaticForces; // Offset: 0xbd2 // Size: 0x01
	bool bUseDynamicForces; // Offset: 0xbd3 // Size: 0x01
	char pad_0xBD4[0x4]; // Offset: 0xbd4 // Size: 0x04
	struct AOceanManager* OceanManager; // Offset: 0xbd8 // Size: 0x08
	bool bDrawForceArrows; // Offset: 0xbe0 // Size: 0x01
	bool bDrawWaterline; // Offset: 0xbe1 // Size: 0x01
	bool bDrawVertices; // Offset: 0xbe2 // Size: 0x01
	bool bDrawTriangles; // Offset: 0xbe3 // Size: 0x01
	bool bDrawSubtriangles; // Offset: 0xbe4 // Size: 0x01
	char pad_0xBE5[0x3]; // Offset: 0xbe5 // Size: 0x03
	float ForceArrowSize; // Offset: 0xbe8 // Size: 0x04
	bool bOverrideMeshDensity; // Offset: 0xbec // Size: 0x01
	char pad_0xBED[0x3]; // Offset: 0xbed // Size: 0x03
	float MeshDensity; // Offset: 0xbf0 // Size: 0x04
	bool bOverrideMass; // Offset: 0xbf4 // Size: 0x01
	char pad_0xBF5[0x3]; // Offset: 0xbf5 // Size: 0x03
	float Mass; // Offset: 0xbf8 // Size: 0x04
	float WaterDensity; // Offset: 0xbfc // Size: 0x04
	char pad_0xC00[0x28]; // Offset: 0xc00 // Size: 0x28
	struct UWaterHeightmapComponent* WaterHeightmap; // Offset: 0xc28 // Size: 0x08
};

// Object Name: Class OceanPlugin.FishManager
// Size: 0x508 // Inherited bytes: 0x4b0
struct AFishManager : AActor {
	// Fields
	struct TArray<struct UObject*> flockTypes; // Offset: 0x4b0 // Size: 0x10
	struct TArray<float> numInFlock; // Offset: 0x4c0 // Size: 0x10
	float minZ; // Offset: 0x4d0 // Size: 0x04
	float maxZ; // Offset: 0x4d4 // Size: 0x04
	float underwaterBoxLength; // Offset: 0x4d8 // Size: 0x04
	bool attachToPlayer; // Offset: 0x4dc // Size: 0x01
	bool DebugMode; // Offset: 0x4dd // Size: 0x01
	char pad_0x4DE[0x2]; // Offset: 0x4de // Size: 0x02
	struct UObject* PlayerType; // Offset: 0x4e0 // Size: 0x08
	struct AActor* Player; // Offset: 0x4e8 // Size: 0x08
	char pad_0x4F0[0x18]; // Offset: 0x4f0 // Size: 0x18
};

// Object Name: Class OceanPlugin.FlockFish
// Size: 0x690 // Inherited bytes: 0x510
struct AFlockFish : APawn {
	// Fields
	char pad_0x510[0x10]; // Offset: 0x510 // Size: 0x10
	struct USphereComponent* FishInteractionSphere; // Offset: 0x520 // Size: 0x08
	bool IsLeader; // Offset: 0x528 // Size: 0x01
	char pad_0x529[0x7]; // Offset: 0x529 // Size: 0x07
	struct TArray<struct UObject*> enemyTypes; // Offset: 0x530 // Size: 0x10
	struct TArray<struct UObject*> preyTypes; // Offset: 0x540 // Size: 0x10
	struct UObject* neighborType; // Offset: 0x550 // Size: 0x08
	float followDist; // Offset: 0x558 // Size: 0x04
	float Speed; // Offset: 0x55c // Size: 0x04
	float MaxSpeed; // Offset: 0x560 // Size: 0x04
	float turnSpeed; // Offset: 0x564 // Size: 0x04
	float turnFrequency; // Offset: 0x568 // Size: 0x04
	float hungerResetTime; // Offset: 0x56c // Size: 0x04
	float distBehindSpeedUpRange; // Offset: 0x570 // Size: 0x04
	float SeperationDistanceMultiplier; // Offset: 0x574 // Size: 0x04
	float FleeDistanceMultiplier; // Offset: 0x578 // Size: 0x04
	float FleeAccelerationMultiplier; // Offset: 0x57c // Size: 0x04
	float ChaseAccelerationMultiplier; // Offset: 0x580 // Size: 0x04
	float SeekDecelerationMultiplier; // Offset: 0x584 // Size: 0x04
	float AvoidForceMultiplier; // Offset: 0x588 // Size: 0x04
	float AvoidanceForce; // Offset: 0x58c // Size: 0x04
	struct UObject* PlayerType; // Offset: 0x590 // Size: 0x08
	struct FVector underwaterMin; // Offset: 0x598 // Size: 0x0c
	struct FVector underwaterMax; // Offset: 0x5a4 // Size: 0x0c
	float CustomZSeekMin; // Offset: 0x5b0 // Size: 0x04
	float CustomZSeekMax; // Offset: 0x5b4 // Size: 0x04
	float NumNeighborsToEvaluate; // Offset: 0x5b8 // Size: 0x04
	float UpdateEveryTick; // Offset: 0x5bc // Size: 0x04
	char pad_0x5C0[0x10]; // Offset: 0x5c0 // Size: 0x10
	bool DebugMode; // Offset: 0x5d0 // Size: 0x01
	char pad_0x5D1[0xf]; // Offset: 0x5d1 // Size: 0x0f
	struct AActor* Leader; // Offset: 0x5e0 // Size: 0x08
	struct TArray<struct AActor*> neighbors; // Offset: 0x5e8 // Size: 0x10
	struct TArray<struct AActor*> nearbyEnemies; // Offset: 0x5f8 // Size: 0x10
	struct TArray<struct AActor*> nearbyPrey; // Offset: 0x608 // Size: 0x10
	struct TArray<struct AActor*> nearbyFriends; // Offset: 0x618 // Size: 0x10
	struct AActor* fleeTarget; // Offset: 0x628 // Size: 0x08
	struct AActor* preyTarget; // Offset: 0x630 // Size: 0x08
	char pad_0x638[0x50]; // Offset: 0x638 // Size: 0x50
	struct AActor* FishManager; // Offset: 0x688 // Size: 0x08

	// Functions

	// Object Name: Function OceanPlugin.FlockFish.OnEndOverlap
	// Flags: [Final|Native|Protected]
	void OnEndOverlap(struct UPrimitiveComponent* activatedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex); // Offset: 0x101a08740 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function OceanPlugin.FlockFish.OnBeginOverlap
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnBeginOverlap(struct UPrimitiveComponent* activatedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Offset: 0x101a0856c // Return & Params: Num(6) Size(0xa8)
};

// Object Name: Class OceanPlugin.InfiniteSystemComponent
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct UInfiniteSystemComponent : USceneComponent {
	// Fields
	bool UpdateInEditor; // Offset: 0x399 // Size: 0x01
	enum class EFollowMethod FollowMethod; // Offset: 0x39a // Size: 0x01
	float GridSnapSize; // Offset: 0x39c // Size: 0x04
	float MaxLookAtDistance; // Offset: 0x3a0 // Size: 0x04
	bool ScaleByDistance; // Offset: 0x3a4 // Size: 0x01
	float ScaleDistanceFactor; // Offset: 0x3a8 // Size: 0x04
	float ScaleStartDistance; // Offset: 0x3ac // Size: 0x04
	float ScaleMin; // Offset: 0x3b0 // Size: 0x04
	float ScaleMax; // Offset: 0x3b4 // Size: 0x04
	char pad_0x3BB[0x5]; // Offset: 0x3bb // Size: 0x05
};

// Object Name: Class OceanPlugin.OceanManager
// Size: 0x578 // Inherited bytes: 0x4b0
struct AOceanManager : AActor {
	// Fields
	bool EnableGerstnerWaves; // Offset: 0x4a9 // Size: 0x01
	struct FVector GlobalWaveDirection; // Offset: 0x4ac // Size: 0x0c
	float GlobalWaveSpeed; // Offset: 0x4b8 // Size: 0x04
	float GlobalWaveAmplitude; // Offset: 0x4bc // Size: 0x04
	float DistanceCheckAbove; // Offset: 0x4c0 // Size: 0x04
	float DistanceCheckBelow; // Offset: 0x4c4 // Size: 0x04
	struct TArray<struct FWaveParameter> WaveClusters; // Offset: 0x4c8 // Size: 0x10
	struct TArray<struct FWaveSetParameters> WaveSetOffsetsOverride; // Offset: 0x4d8 // Size: 0x10
	float NetWorkTimeOffset; // Offset: 0x4e8 // Size: 0x04
	bool bEnableLandscapeModulation; // Offset: 0x4ec // Size: 0x01
	float ModulationStartHeight; // Offset: 0x4f0 // Size: 0x04
	float ModulationMaxHeight; // Offset: 0x4f4 // Size: 0x04
	float ModulationPower; // Offset: 0x4f8 // Size: 0x04
	char pad_0x4FE[0x2]; // Offset: 0x4fe // Size: 0x02
	struct ALandscape* Landscape; // Offset: 0x500 // Size: 0x08
	struct UTexture2D* HeightmapTexture; // Offset: 0x508 // Size: 0x08
	char pad_0x510[0x28]; // Offset: 0x510 // Size: 0x28
	bool bShouldCorrectTime; // Offset: 0x538 // Size: 0x01
	bool bEnableWaterBoxModulation; // Offset: 0x539 // Size: 0x01
	char pad_0x53A[0x6]; // Offset: 0x53a // Size: 0x06
	struct TArray<struct FBox> WaterBoxes; // Offset: 0x540 // Size: 0x10
	char pad_0x550[0x4]; // Offset: 0x550 // Size: 0x04
	bool bEnableWaterTransformModulation; // Offset: 0x554 // Size: 0x01
	char pad_0x555[0x3]; // Offset: 0x555 // Size: 0x03
	struct TArray<struct FTransform> WaterTransforms; // Offset: 0x558 // Size: 0x10
	struct TArray<struct FVector> WaterBoxExtends; // Offset: 0x568 // Size: 0x10

	// Functions

	// Object Name: Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadLandscapeHeightmap(struct UTexture2D* Tex2D); // Offset: 0x101a08e6c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function OceanPlugin.OceanManager.GetHeightmapPixel
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FLinearColor GetHeightmapPixel(float U, float V); // Offset: 0x101a08da4 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OceanPlugin.SegmentOceanManager
// Size: 0x660 // Inherited bytes: 0x578
struct ASegmentOceanManager : AOceanManager {
	// Fields
	struct TArray<struct UWaterBoxComponent*> CandidateWaterBoxes; // Offset: 0x578 // Size: 0x10
	MapProperty SegmentdWaterBoxes; // Offset: 0x588 // Size: 0x50
	char pad_0x5D8[0x7c]; // Offset: 0x5d8 // Size: 0x7c
	float FrequencyScale; // Offset: 0x654 // Size: 0x04
	char pad_0x658[0x8]; // Offset: 0x658 // Size: 0x08

	// Functions

	// Object Name: Function OceanPlugin.SegmentOceanManager.RemoveBoxComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveBoxComponent(struct UWaterBoxComponent* InBoxComponent); // Offset: 0x101a093d4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function OceanPlugin.SegmentOceanManager.AddBoxComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddBoxComponent(struct UWaterBoxComponent* InBoxComponent, struct USplineComponent* InDirectionSpline); // Offset: 0x101a09320 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class OceanPlugin.TimeManager
// Size: 0x570 // Inherited bytes: 0x4b0
struct ATimeManager : AActor {
	// Fields
	struct FTimeDate CurrentLocalTime; // Offset: 0x4ac // Size: 0x1c
	float latitude; // Offset: 0x4c8 // Size: 0x04
	float longitude; // Offset: 0x4cc // Size: 0x04
	IntProperty OffsetUTC; // Offset: 0x4d0 // Size: 0x04
	IntProperty OffsetDST; // Offset: 0x4d4 // Size: 0x04
	bool bAllowDaylightSavings; // Offset: 0x4d8 // Size: 0x01
	bool bDaylightSavingsActive; // Offset: 0x4d9 // Size: 0x01
	float TimeScaleMultiplier; // Offset: 0x4dc // Size: 0x04
	float SolarTime; // Offset: 0x4e0 // Size: 0x04
	float LocalClockTime; // Offset: 0x4e4 // Size: 0x04
	float TimeCorrection; // Offset: 0x4e8 // Size: 0x04
	IntProperty LSTM; // Offset: 0x4ec // Size: 0x04
	IntProperty DayOfYear; // Offset: 0x4f0 // Size: 0x04
	float EoT; // Offset: 0x4f4 // Size: 0x04
	float SolarAltAngle; // Offset: 0x4f8 // Size: 0x04
	float SolarDeclination; // Offset: 0x4fc // Size: 0x04
	float SolarAzimuth; // Offset: 0x500 // Size: 0x04
	float SolarHRA; // Offset: 0x504 // Size: 0x04
	float SiderealTime; // Offset: 0x508 // Size: 0x04
	float LunarAltAngle; // Offset: 0x50c // Size: 0x04
	float LunarHRA; // Offset: 0x510 // Size: 0x04
	float LunarDeclination; // Offset: 0x514 // Size: 0x04
	float LunarAzimuth; // Offset: 0x518 // Size: 0x04
	float LunarRightAsc; // Offset: 0x51c // Size: 0x04
	float LunarElapsedDays; // Offset: 0x520 // Size: 0x04
	float EcLongitude; // Offset: 0x524 // Size: 0x04
	float EcLatitude; // Offset: 0x528 // Size: 0x04
	float EcDistance; // Offset: 0x52c // Size: 0x04
	float PartL; // Offset: 0x530 // Size: 0x04
	float PartM; // Offset: 0x534 // Size: 0x04
	float PartF; // Offset: 0x538 // Size: 0x04
	char pad_0x53E[0x32]; // Offset: 0x53e // Size: 0x32

	// Functions

	// Object Name: Function OceanPlugin.TimeManager.SetCurrentLocalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCurrentLocalTime(float Time); // Offset: 0x101a09b70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.TimeManager.IsLeapYear
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsLeapYear(IntProperty Year); // Offset: 0x101a09ae4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function OceanPlugin.TimeManager.InitializeCalendar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitializeCalendar(struct FTimeDate Time); // Offset: 0x101a09a5c // Return & Params: Num(1) Size(0x1c)

	// Object Name: Function OceanPlugin.TimeManager.IncrementTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void IncrementTime(float DeltaSeconds); // Offset: 0x101a099e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.TimeManager.GetYearPhase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetYearPhase(); // Offset: 0x101a099ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetElapsedDayInMinutes(); // Offset: 0x101a09978 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.TimeManager.GetDaysInYear
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetDaysInYear(IntProperty Year); // Offset: 0x101a098ec // Return & Params: Num(2) Size(0x8)

	// Object Name: Function OceanPlugin.TimeManager.GetDaysInMonth
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetDaysInMonth(IntProperty Year, IntProperty Month); // Offset: 0x101a09828 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function OceanPlugin.TimeManager.GetDayPhase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetDayPhase(); // Offset: 0x101a097f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.TimeManager.GetDayOfYear
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetDayOfYear(struct FTimeDate Time); // Offset: 0x101a0975c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function OceanPlugin.TimeManager.CalculateSunAngle
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FRotator CalculateSunAngle(); // Offset: 0x101a09724 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function OceanPlugin.TimeManager.CalculateMoonPhase
	// Flags: [Final|Native|Public|BlueprintCallable]
	float CalculateMoonPhase(); // Offset: 0x101a096f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OceanPlugin.TimeManager.CalculateMoonAngle
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FRotator CalculateMoonAngle(); // Offset: 0x101a096b8 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class OceanPlugin.WaterBoxComponent
// Size: 0xab0 // Inherited bytes: 0x9f0
struct UWaterBoxComponent : UBoxComponent {
	// Fields
	float AcceptHigherZ; // Offset: 0x9ec // Size: 0x04
	struct FVector Direction; // Offset: 0x9f0 // Size: 0x0c
	float SpeedValue; // Offset: 0x9fc // Size: 0x04
	float WaveForceMultiplier; // Offset: 0xa00 // Size: 0x04
	struct TArray<struct FTrippleWaveParameter> TrippleWaveClusters; // Offset: 0xa08 // Size: 0x10
	float TimeScaleOffset; // Offset: 0xa18 // Size: 0x04
	float Offset; // Offset: 0xa1c // Size: 0x04
	bool UseSplineDirection; // Offset: 0xa20 // Size: 0x01
	char pad_0xA21[0x3]; // Offset: 0xa21 // Size: 0x03
	float SpeedAttenuationFromSpline; // Offset: 0xa24 // Size: 0x04
	bool UseSplineZ; // Offset: 0xa28 // Size: 0x01
	char pad_0xA29[0x3]; // Offset: 0xa29 // Size: 0x03
	float ZOffset; // Offset: 0xa2c // Size: 0x04
	float CellSizeX; // Offset: 0xa30 // Size: 0x04
	float CellSizeY; // Offset: 0xa34 // Size: 0x04
	MapProperty Cells; // Offset: 0xa38 // Size: 0x50
	IntProperty KeyFactor; // Offset: 0xa88 // Size: 0x04
	char pad_0xA8C[0x24]; // Offset: 0xa8c // Size: 0x24
};

// Object Name: Class OceanPlugin.WaterHeightmapComponent
// Size: 0x1f0 // Inherited bytes: 0x178
struct UWaterHeightmapComponent : UActorComponent {
	// Fields
	float DesiredCellSize; // Offset: 0x178 // Size: 0x04
	bool bOnlyCollidingComponents; // Offset: 0x17c // Size: 0x01
	char pad_0x17D[0x3]; // Offset: 0x17d // Size: 0x03
	float GridSizeMultiplier; // Offset: 0x180 // Size: 0x04
	bool bDrawUsedTriangles; // Offset: 0x184 // Size: 0x01
	bool bDrawHeightmap; // Offset: 0x185 // Size: 0x01
	char pad_0x186[0x62]; // Offset: 0x186 // Size: 0x62
	struct AOceanManager* OceanManager; // Offset: 0x1e8 // Size: 0x08
};

