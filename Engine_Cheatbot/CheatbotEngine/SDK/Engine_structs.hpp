#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Engine.ExpressionInput
// Size: 0x38 // Inherited bytes: 0x00
struct FExpressionInput {
	// Fields
	IntProperty OutputIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty InputName; // Offset: 0x08 // Size: 0x10
	IntProperty Mask; // Offset: 0x18 // Size: 0x04
	IntProperty MaskR; // Offset: 0x1c // Size: 0x04
	IntProperty MaskG; // Offset: 0x20 // Size: 0x04
	IntProperty MaskB; // Offset: 0x24 // Size: 0x04
	IntProperty MaskA; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FName ExpressionName; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.MaterialAttributesInput
// Size: 0x40 // Inherited bytes: 0x38
struct FMaterialAttributesInput : FExpressionInput {
	// Fields
	IntProperty PropertyConnectedBitmask; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Engine.ExpressionOutput
// Size: 0x28 // Inherited bytes: 0x00
struct FExpressionOutput {
	// Fields
	StrProperty OutputName; // Offset: 0x00 // Size: 0x10
	IntProperty Mask; // Offset: 0x10 // Size: 0x04
	IntProperty MaskR; // Offset: 0x14 // Size: 0x04
	IntProperty MaskG; // Offset: 0x18 // Size: 0x04
	IntProperty MaskB; // Offset: 0x1c // Size: 0x04
	IntProperty MaskA; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.MaterialInput
// Size: 0x38 // Inherited bytes: 0x00
struct FMaterialInput {
	// Fields
	IntProperty OutputIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty InputName; // Offset: 0x08 // Size: 0x10
	IntProperty Mask; // Offset: 0x18 // Size: 0x04
	IntProperty MaskR; // Offset: 0x1c // Size: 0x04
	IntProperty MaskG; // Offset: 0x20 // Size: 0x04
	IntProperty MaskB; // Offset: 0x24 // Size: 0x04
	IntProperty MaskA; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FName ExpressionName; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ColorMaterialInput
// Size: 0x40 // Inherited bytes: 0x38
struct FColorMaterialInput : FMaterialInput {
	// Fields
	char UseConstant : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	struct FColor Constant; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Engine.ScalarMaterialInput
// Size: 0x40 // Inherited bytes: 0x38
struct FScalarMaterialInput : FMaterialInput {
	// Fields
	char UseConstant : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float Constant; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Engine.VectorMaterialInput
// Size: 0x48 // Inherited bytes: 0x38
struct FVectorMaterialInput : FMaterialInput {
	// Fields
	char UseConstant : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	struct FVector Constant; // Offset: 0x3c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.Vector4MaterialInput
// Size: 0x50 // Inherited bytes: 0x38
struct FVector4MaterialInput : FMaterialInput {
	// Fields
	char UseConstant : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	struct FVector4 Constant; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Engine.Vector2MaterialInput
// Size: 0x48 // Inherited bytes: 0x38
struct FVector2MaterialInput : FMaterialInput {
	// Fields
	char UseConstant : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float ConstantX; // Offset: 0x3c // Size: 0x04
	float ConstantY; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct Engine.DistributionLookupTable
// Size: 0x28 // Inherited bytes: 0x00
struct FDistributionLookupTable {
	// Fields
	char Op; // Offset: 0x00 // Size: 0x01
	char EntryCount; // Offset: 0x01 // Size: 0x01
	char EntryStride; // Offset: 0x02 // Size: 0x01
	char SubEntryStride; // Offset: 0x03 // Size: 0x01
	float TimeScale; // Offset: 0x04 // Size: 0x04
	float TimeBias; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<float> Values; // Offset: 0x10 // Size: 0x10
	char LockFlag; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct Engine.RawDistribution
// Size: 0x28 // Inherited bytes: 0x00
struct FRawDistribution {
	// Fields
	struct FDistributionLookupTable Table; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.FloatDistribution
// Size: 0x28 // Inherited bytes: 0x00
struct FFloatDistribution {
	// Fields
	struct FDistributionLookupTable Table; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.VectorDistribution
// Size: 0x28 // Inherited bytes: 0x00
struct FVectorDistribution {
	// Fields
	struct FDistributionLookupTable Table; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.Vector4Distribution
// Size: 0x28 // Inherited bytes: 0x00
struct FVector4Distribution {
	// Fields
	struct FDistributionLookupTable Table; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 // Inherited bytes: 0x00
struct FFloatRK4SpringInterpolator {
	// Fields
	float StiffnessConstant; // Offset: 0x00 // Size: 0x04
	float DampeningRatio; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 // Inherited bytes: 0x00
struct FVectorRK4SpringInterpolator {
	// Fields
	float StiffnessConstant; // Offset: 0x00 // Size: 0x04
	float DampeningRatio; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.FormatArgumentData
// Size: 0x40 // Inherited bytes: 0x00
struct FFormatArgumentData {
	// Fields
	StrProperty ArgumentName; // Offset: 0x00 // Size: 0x10
	enum class EFormatArgumentType ArgumentValueType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct FText ArgumentValue; // Offset: 0x18 // Size: 0x18
	IntProperty ArgumentValueInt; // Offset: 0x30 // Size: 0x04
	float ArgumentValueFloat; // Offset: 0x34 // Size: 0x04
	enum class ETextGender ArgumentValueGender; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Engine.HitResult
// Size: 0x88 // Inherited bytes: 0x00
struct FHitResult {
	// Fields
	char bBlockingHit : 1; // Offset: 0x00 // Size: 0x01
	char bStartPenetrating : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_2 : 6; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Time; // Offset: 0x04 // Size: 0x04
	float Distance; // Offset: 0x08 // Size: 0x04
	struct FVector_NetQuantize Location; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantize ImpactPoint; // Offset: 0x18 // Size: 0x0c
	struct FVector_NetQuantizeNormal Normal; // Offset: 0x24 // Size: 0x0c
	struct FVector_NetQuantizeNormal ImpactNormal; // Offset: 0x30 // Size: 0x0c
	struct FVector_NetQuantize TraceStart; // Offset: 0x3c // Size: 0x0c
	struct FVector_NetQuantize TraceEnd; // Offset: 0x48 // Size: 0x0c
	float PenetrationDepth; // Offset: 0x54 // Size: 0x04
	IntProperty Item; // Offset: 0x58 // Size: 0x04
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // Offset: 0x5c // Size: 0x08
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x64 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x6c // Size: 0x08
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct FName BoneName; // Offset: 0x78 // Size: 0x08
	IntProperty FaceIndex; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
};

// Object Name: ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c // Inherited bytes: 0x0c
struct FVector_NetQuantize : FVector {
};

// Object Name: ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c // Inherited bytes: 0x0c
struct FVector_NetQuantizeNormal : FVector {
};

// Object Name: ScriptStruct Engine.TriggerEvent
// Size: 0x48 // Inherited bytes: 0x00
struct FTriggerEvent {
	// Fields
	enum class ETriggerAction Action; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct TWeakObjectPtr<struct AActor> TriggerActor; // Offset: 0x04 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> TriggerComponent; // Offset: 0x0c // Size: 0x08
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FName TriggerBoneName; // Offset: 0x18 // Size: 0x08
	IntProperty TriggerInstanceIndex; // Offset: 0x20 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> OtherActor; // Offset: 0x24 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> OtherComponent; // Offset: 0x2c // Size: 0x08
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct FName OtherBoneName; // Offset: 0x38 // Size: 0x08
	IntProperty OtherInstanceIndex; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct Engine.RepAttachment
// Size: 0x48 // Inherited bytes: 0x00
struct FRepAttachment {
	// Fields
	struct AActor* AttachParent; // Offset: 0x00 // Size: 0x08
	struct FVector_NetQuantize100 LocationOffset; // Offset: 0x08 // Size: 0x0c
	struct FVector_NetQuantize100 RelativeScale3D; // Offset: 0x14 // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FName AttachSocket; // Offset: 0x30 // Size: 0x08
	struct USceneComponent* AttachComponent; // Offset: 0x38 // Size: 0x08
	char ExtraData; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c // Inherited bytes: 0x0c
struct FVector_NetQuantize100 : FVector {
};

// Object Name: ScriptStruct Engine.RepMovement
// Size: 0x48 // Inherited bytes: 0x00
struct FRepMovement {
	// Fields
	struct FVector LinearVelocity; // Offset: 0x00 // Size: 0x0c
	struct FVector AngularVelocity; // Offset: 0x0c // Size: 0x0c
	struct FVector Location; // Offset: 0x18 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x24 // Size: 0x0c
	struct FName LocationQuantizationLODGroup; // Offset: 0x30 // Size: 0x08
	enum class EVectorQuantization LocationQuantizationLevel; // Offset: 0x38 // Size: 0x01
	enum class EVectorQuantization VelocityQuantizationLevel; // Offset: 0x39 // Size: 0x01
	enum class ERotatorQuantization RotationQuantizationLevel; // Offset: 0x3a // Size: 0x01
	char bSimulatedPhysicSleep : 1; // Offset: 0x3b // Size: 0x01
	char bRepPhysics : 1; // Offset: 0x3b // Size: 0x01
	char bPhysicsHit : 1; // Offset: 0x3b // Size: 0x01
	char LocationQuantizationLODEnabled : 1; // Offset: 0x3b // Size: 0x01
	char pad_0x3B_4 : 4; // Offset: 0x3b // Size: 0x01
	char ForcedLocationQuantizationLOD; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0xb]; // Offset: 0x3d // Size: 0x0b
};

// Object Name: ScriptStruct Engine.TickFunction
// Size: 0xb0 // Inherited bytes: 0x00
struct FTickFunction {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	enum class ETickingGroup TickGroup; // Offset: 0x08 // Size: 0x01
	enum class ETickingGroup EndTickGroup; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	char bTickEvenWhenPaused : 1; // Offset: 0x0c // Size: 0x01
	char bCanEverTick : 1; // Offset: 0x0c // Size: 0x01
	char bStartWithTickEnabled : 1; // Offset: 0x0c // Size: 0x01
	char bAllowTickOnDedicatedServer : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_4 : 4; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x33]; // Offset: 0x0d // Size: 0x33
	float TickInterval; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x6c]; // Offset: 0x44 // Size: 0x6c
};

// Object Name: ScriptStruct Engine.ActorTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FActorTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 // Inherited bytes: 0x00
struct FSimpleMemberReference {
	// Fields
	struct UObject* MemberParent; // Offset: 0x00 // Size: 0x08
	struct FName MemberName; // Offset: 0x08 // Size: 0x08
	struct FGuid MemberGuid; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ActorComponentTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FActorComponentTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 // Inherited bytes: 0x00
struct FWalkableSlopeOverride {
	// Fields
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float WalkableSlopeAngle; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FPrimitiveComponentPostPhysicsTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BodyInstance
// Size: 0x210 // Inherited bytes: 0x00
struct FBodyInstance {
	// Fields
	char pad_0x0[0x19]; // Offset: 0x00 // Size: 0x19
	enum class ESleepFamily SleepFamily; // Offset: 0x19 // Size: 0x01
	enum class EDOFMode DOFMode; // Offset: 0x1a // Size: 0x01
	enum class ECollisionEnabled CollisionEnabled; // Offset: 0x1b // Size: 0x01
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FName CollisionProfileName; // Offset: 0x20 // Size: 0x08
	struct FCollisionResponse CollisionResponses; // Offset: 0x28 // Size: 0x30
	char pad_0x58[0x1]; // Offset: 0x58 // Size: 0x01
	char bRecreatePhysicsStateWhenChangeCollision : 1; // Offset: 0x59 // Size: 0x01
	char bUseMinCollisionEnabled : 1; // Offset: 0x59 // Size: 0x01
	char bUseCCD : 1; // Offset: 0x59 // Size: 0x01
	char bNotifyRigidBodyCollision : 1; // Offset: 0x59 // Size: 0x01
	char bSimulatePhysics : 1; // Offset: 0x59 // Size: 0x01
	char bOverrideMass : 1; // Offset: 0x59 // Size: 0x01
	char bEnableGravity : 1; // Offset: 0x59 // Size: 0x01
	char bAutoWeld : 1; // Offset: 0x59 // Size: 0x01
	char bStartAwake : 1; // Offset: 0x5a // Size: 0x01
	char bGenerateWakeEvents : 1; // Offset: 0x5a // Size: 0x01
	char bUpdateMassWhenScaleChanges : 1; // Offset: 0x5a // Size: 0x01
	char bLockTranslation : 1; // Offset: 0x5a // Size: 0x01
	char bLockRotation : 1; // Offset: 0x5a // Size: 0x01
	char bLockXTranslation : 1; // Offset: 0x5a // Size: 0x01
	char bLockYTranslation : 1; // Offset: 0x5a // Size: 0x01
	char bLockZTranslation : 1; // Offset: 0x5a // Size: 0x01
	char bLockXRotation : 1; // Offset: 0x5b // Size: 0x01
	char bLockYRotation : 1; // Offset: 0x5b // Size: 0x01
	char bLockZRotation : 1; // Offset: 0x5b // Size: 0x01
	char bOverrideMaxAngularVelocity : 1; // Offset: 0x5b // Size: 0x01
	char pad_0x5B_4 : 1; // Offset: 0x5b // Size: 0x01
	char bUseAsyncScene : 1; // Offset: 0x5b // Size: 0x01
	char bOverrideMaxDepenetrationVelocity : 1; // Offset: 0x5b // Size: 0x01
	char bOverrideWalkableSlopeOnInstance : 1; // Offset: 0x5b // Size: 0x01
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	float MaxDepenetrationVelocity; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x8]; // Offset: 0x64 // Size: 0x08
	float MassInKgOverride; // Offset: 0x6c // Size: 0x04
	float LinearDamping; // Offset: 0x70 // Size: 0x04
	float AngularDamping; // Offset: 0x74 // Size: 0x04
	struct FVector CustomDOFPlaneNormal; // Offset: 0x78 // Size: 0x0c
	struct FVector COMNudge; // Offset: 0x84 // Size: 0x0c
	float MassScale; // Offset: 0x90 // Size: 0x04
	struct FVector InertiaTensorScale; // Offset: 0x94 // Size: 0x0c
	enum class ECollisionChannel ObjectType; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x17]; // Offset: 0xa1 // Size: 0x17
	struct FWalkableSlopeOverride WalkableSlopeOverride; // Offset: 0xb8 // Size: 0x10
	struct UPhysicalMaterial* PhysMaterialOverride; // Offset: 0xc8 // Size: 0x08
	float MaxAngularVelocity; // Offset: 0xd0 // Size: 0x04
	float CustomSleepThresholdMultiplier; // Offset: 0xd4 // Size: 0x04
	float StabilizationThresholdMultiplier; // Offset: 0xd8 // Size: 0x04
	float PhysicsBlendWeight; // Offset: 0xdc // Size: 0x04
	IntProperty PositionSolverIterationCount; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x2c]; // Offset: 0xe4 // Size: 0x2c
	uint64 RigidActorSyncId; // Offset: 0x110 // Size: 0x08
	uint64 RigidActorAsyncId; // Offset: 0x118 // Size: 0x08
	IntProperty VelocitySolverIterationCount; // Offset: 0x120 // Size: 0x04
	char pad_0x124[0xc]; // Offset: 0x124 // Size: 0x0c
	struct FPhysicsDisplayPoseHistory PhysicsDisplayPoseHistory; // Offset: 0x130 // Size: 0x70
	char pad_0x1A0[0x70]; // Offset: 0x1a0 // Size: 0x70
};

// Object Name: ScriptStruct Engine.PhysicsDisplayPoseHistory
// Size: 0x70 // Inherited bytes: 0x00
struct FPhysicsDisplayPoseHistory {
	// Fields
	struct FPhysicsDisplayPose Previous; // Offset: 0x00 // Size: 0x30
	struct FPhysicsDisplayPose Current; // Offset: 0x30 // Size: 0x30
	char bInitialized : 1; // Offset: 0x60 // Size: 0x01
	char bResetRequested : 1; // Offset: 0x60 // Size: 0x01
	char pad_0x60_2 : 6; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0xf]; // Offset: 0x61 // Size: 0x0f
};

// Object Name: ScriptStruct Engine.PhysicsDisplayPose
// Size: 0x30 // Inherited bytes: 0x00
struct FPhysicsDisplayPose {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FQuat Rotation; // Offset: 0x10 // Size: 0x10
	char bValid : 1; // Offset: 0x20 // Size: 0x01
	char pad_0x20_1 : 7; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0xf]; // Offset: 0x21 // Size: 0x0f
};

// Object Name: ScriptStruct Engine.CollisionResponse
// Size: 0x30 // Inherited bytes: 0x00
struct FCollisionResponse {
	// Fields
	struct FCollisionResponseContainer ResponseToChannels; // Offset: 0x00 // Size: 0x20
	struct TArray<struct FResponseChannel> ResponseArray; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ResponseChannel
// Size: 0x10 // Inherited bytes: 0x00
struct FResponseChannel {
	// Fields
	struct FName Channel; // Offset: 0x00 // Size: 0x08
	enum class ECollisionResponse Response; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 // Inherited bytes: 0x00
struct FCollisionResponseContainer {
	// Fields
	enum class ECollisionResponse WorldStatic; // Offset: 0x00 // Size: 0x01
	enum class ECollisionResponse WorldDynamic; // Offset: 0x01 // Size: 0x01
	enum class ECollisionResponse Pawn; // Offset: 0x02 // Size: 0x01
	enum class ECollisionResponse Visibility; // Offset: 0x03 // Size: 0x01
	enum class ECollisionResponse Camera; // Offset: 0x04 // Size: 0x01
	enum class ECollisionResponse PhysicsBody; // Offset: 0x05 // Size: 0x01
	enum class ECollisionResponse Vehicle; // Offset: 0x06 // Size: 0x01
	enum class ECollisionResponse Destructible; // Offset: 0x07 // Size: 0x01
	enum class ECollisionResponse EngineTraceChannel1; // Offset: 0x08 // Size: 0x01
	enum class ECollisionResponse EngineTraceChannel2; // Offset: 0x09 // Size: 0x01
	enum class ECollisionResponse EngineTraceChannel3; // Offset: 0x0a // Size: 0x01
	enum class ECollisionResponse EngineTraceChannel4; // Offset: 0x0b // Size: 0x01
	enum class ECollisionResponse EngineTraceChannel5; // Offset: 0x0c // Size: 0x01
	enum class ECollisionResponse EngineTraceChannel6; // Offset: 0x0d // Size: 0x01
	enum class ECollisionResponse GameTraceChannel1; // Offset: 0x0e // Size: 0x01
	enum class ECollisionResponse GameTraceChannel2; // Offset: 0x0f // Size: 0x01
	enum class ECollisionResponse GameTraceChannel3; // Offset: 0x10 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel4; // Offset: 0x11 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel5; // Offset: 0x12 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel6; // Offset: 0x13 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel7; // Offset: 0x14 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel8; // Offset: 0x15 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel9; // Offset: 0x16 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel10; // Offset: 0x17 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel11; // Offset: 0x18 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel12; // Offset: 0x19 // Size: 0x01
	enum class ECollisionResponse GameTraceChannel13; // Offset: 0x1a // Size: 0x01
	enum class ECollisionResponse GameTraceChannel14; // Offset: 0x1b // Size: 0x01
	enum class ECollisionResponse GameTraceChannel15; // Offset: 0x1c // Size: 0x01
	enum class ECollisionResponse GameTraceChannel16; // Offset: 0x1d // Size: 0x01
	enum class ECollisionResponse GameTraceChannel17; // Offset: 0x1e // Size: 0x01
	enum class ECollisionResponse GameTraceChannel18; // Offset: 0x1f // Size: 0x01
};

// Object Name: ScriptStruct Engine.LightingChannels
// Size: 0x01 // Inherited bytes: 0x00
struct FLightingChannels {
	// Fields
	char bChannel0 : 1; // Offset: 0x00 // Size: 0x01
	char bChannel1 : 1; // Offset: 0x00 // Size: 0x01
	char bChannel2 : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 // Inherited bytes: 0x00
struct FBranchingPointNotifyPayload {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Engine.SubtitleCue
// Size: 0x20 // Inherited bytes: 0x00
struct FSubtitleCue {
	// Fields
	struct FText Text; // Offset: 0x00 // Size: 0x18
	float Time; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.InterpControlPoint
// Size: 0x1c // Inherited bytes: 0x00
struct FInterpControlPoint {
	// Fields
	struct FVector PositionControlPoint; // Offset: 0x00 // Size: 0x0c
	bool bPositionIsRelative; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0xf]; // Offset: 0x0d // Size: 0x0f
};

// Object Name: ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 // Inherited bytes: 0x00
struct FPlatformInterfaceDelegateResult {
	// Fields
	bool bSuccessful; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FPlatformInterfaceData Data; // Offset: 0x08 // Size: 0x30
};

// Object Name: ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 // Inherited bytes: 0x00
struct FPlatformInterfaceData {
	// Fields
	struct FName DataName; // Offset: 0x00 // Size: 0x08
	enum class EPlatformInterfaceDataType Type; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty IntValue; // Offset: 0x0c // Size: 0x04
	float FloatValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty StringValue; // Offset: 0x18 // Size: 0x10
	struct UObject* ObjectValue; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 // Inherited bytes: 0x00
struct FDebugFloatHistory {
	// Fields
	struct TArray<float> Samples; // Offset: 0x00 // Size: 0x10
	float MaxSamples; // Offset: 0x10 // Size: 0x04
	float MinValue; // Offset: 0x14 // Size: 0x04
	float MaxValue; // Offset: 0x18 // Size: 0x04
	bool bAutoAdjustMinMax; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct Engine.LatentActionInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FLatentActionInfo {
	// Fields
	IntProperty Linkage; // Offset: 0x00 // Size: 0x04
	IntProperty UUID; // Offset: 0x04 // Size: 0x04
	struct FName ExecutionFunction; // Offset: 0x08 // Size: 0x08
	struct UObject* CallbackTarget; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TimerHandle
// Size: 0x08 // Inherited bytes: 0x00
struct FTimerHandle {
	// Fields
	uint64 Handle; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CollisionProfileName
// Size: 0x08 // Inherited bytes: 0x00
struct FCollisionProfileName {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.GenericStruct
// Size: 0x04 // Inherited bytes: 0x00
struct FGenericStruct {
	// Fields
	IntProperty Data; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Engine.UserActivity
// Size: 0x18 // Inherited bytes: 0x00
struct FUserActivity {
	// Fields
	StrProperty ActionName; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DPProfileMatch
// Size: 0x20 // Inherited bytes: 0x00
struct FDPProfileMatch {
	// Fields
	StrProperty Profile; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FDPProfileMatchItem> Match; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.DPProfileMatchItem
// Size: 0x18 // Inherited bytes: 0x00
struct FDPProfileMatchItem {
	// Fields
	enum class EDPSourceType SourceType; // Offset: 0x00 // Size: 0x01
	enum class EDPCompareType CompareType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty MatchString; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FastArraySerializerItem
// Size: 0x0c // Inherited bytes: 0x00
struct FFastArraySerializerItem {
	// Fields
	IntProperty ReplicationID; // Offset: 0x00 // Size: 0x04
	IntProperty ReplicationKey; // Offset: 0x04 // Size: 0x04
	IntProperty MostRecentArrayReplicationKey; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 // Inherited bytes: 0x00
struct FCurveTableRowHandle {
	// Fields
	struct UCurveTable* CurveTable; // Offset: 0x00 // Size: 0x08
	struct FName RowName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c // Inherited bytes: 0x0c
struct FVector_NetQuantize10 : FVector {
};

// Object Name: ScriptStruct Engine.FastArraySerializer
// Size: 0xb0 // Inherited bytes: 0x00
struct FFastArraySerializer {
	// Fields
	char pad_0x0[0xb0]; // Offset: 0x00 // Size: 0xb0
};

// Object Name: ScriptStruct Engine.StaticMeshPointLightVertexDataBuffer
// Size: 0x10 // Inherited bytes: 0x00
struct FStaticMeshPointLightVertexDataBuffer {
	// Fields
	struct TArray<char> VertexData; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.IdeaBakingPrimitiveSettings
// Size: 0x14 // Inherited bytes: 0x00
struct FIdeaBakingPrimitiveSettings {
	// Fields
	float IdeaMaterialDiffuse; // Offset: 0x00 // Size: 0x04
	float LightmapBoost; // Offset: 0x04 // Size: 0x04
	float DiscardPixelFrontfaceFactor; // Offset: 0x08 // Size: 0x04
	float SunIntensity; // Offset: 0x0c // Size: 0x04
	float LocalLightsAffectMaxDistance; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 // Inherited bytes: 0x00
struct FLightmassPrimitiveSettings {
	// Fields
	char bUseTwoSidedLighting : 1; // Offset: 0x00 // Size: 0x01
	char bShadowIndirectOnly : 1; // Offset: 0x00 // Size: 0x01
	char bUseEmissiveForStaticLighting : 1; // Offset: 0x00 // Size: 0x01
	char bUseVertexNormalForHemisphereGather : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_4 : 4; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EmissiveLightFalloffExponent; // Offset: 0x04 // Size: 0x04
	float EmissiveLightExplicitInfluenceRadius; // Offset: 0x08 // Size: 0x04
	float EmissiveBoost; // Offset: 0x0c // Size: 0x04
	float DiffuseBoost; // Offset: 0x10 // Size: 0x04
	float FullyOccludedSamplesFraction; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FStreamingTextureBuildInfo {
	// Fields
	uint32_t PackedRelativeBox; // Offset: 0x00 // Size: 0x04
	IntProperty TextureLevelIndex; // Offset: 0x04 // Size: 0x04
	float TexelFactor; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0xb0 // Inherited bytes: 0x00
struct FStaticMeshComponentLODInfo {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
	struct TArray<struct FPaintedVertex> PaintedVertices; // Offset: 0x20 // Size: 0x10
	char pad_0x30[0x80]; // Offset: 0x30 // Size: 0x80
};

// Object Name: ScriptStruct Engine.PaintedVertex
// Size: 0x14 // Inherited bytes: 0x00
struct FPaintedVertex {
	// Fields
	struct FVector Position; // Offset: 0x00 // Size: 0x0c
	struct FPackedNormal Normal; // Offset: 0x0c // Size: 0x04
	struct FColor Color; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FInstancedStaticMeshMappingInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 // Inherited bytes: 0x00
struct FInstancedStaticMeshInstanceData {
	// Fields
	struct FMatrix Transform; // Offset: 0x00 // Size: 0x40
};

// Object Name: ScriptStruct Engine.RepAttributeModify
// Size: 0x18 // Inherited bytes: 0x00
struct FRepAttributeModify {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 // Inherited bytes: 0x01
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	// Fields
	char pad_0x1[0x17]; // Offset: 0x01 // Size: 0x17
};

// Object Name: ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 // Inherited bytes: 0x00
struct FViewTargetTransitionParams {
	// Fields
	float BlendTime; // Offset: 0x00 // Size: 0x04
	enum class EViewTargetBlendFunction BlendFunction; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float BlendExp; // Offset: 0x08 // Size: 0x04
	char bLockOutgoing : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_1 : 7; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x18 // Inherited bytes: 0x00
struct FActiveForceFeedbackEffect {
	// Fields
	struct UForceFeedbackEffect* ForceFeedbackEffect; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.DamageEvent
// Size: 0x10 // Inherited bytes: 0x00
struct FDamageEvent {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UDamageType* DamageTypeClass; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.RepRootMotionMontage
// Size: 0x160 // Inherited bytes: 0x00
struct FRepRootMotionMontage {
	// Fields
	bool bIsActive; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimMontage* AnimMontage; // Offset: 0x08 // Size: 0x08
	float Position; // Offset: 0x10 // Size: 0x04
	struct FVector_NetQuantize100 Location; // Offset: 0x14 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct UPrimitiveComponent* MovementBase; // Offset: 0x30 // Size: 0x08
	struct FName MovementBaseBoneName; // Offset: 0x38 // Size: 0x08
	bool bRelativePosition; // Offset: 0x40 // Size: 0x01
	bool bRelativeRotation; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x6]; // Offset: 0x42 // Size: 0x06
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // Offset: 0x48 // Size: 0x100
	struct FVector_NetQuantize10 Acceleration; // Offset: 0x148 // Size: 0x0c
	struct FVector_NetQuantize10 LinearVelocity; // Offset: 0x154 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x100 // Inherited bytes: 0x00
struct FRootMotionSourceGroup {
	// Fields
	char pad_0x0[0xe8]; // Offset: 0x00 // Size: 0xe8
	bool bHasAdditiveSources; // Offset: 0xe8 // Size: 0x01
	bool bHasOverrideSources; // Offset: 0xe9 // Size: 0x01
	char pad_0xEA[0x2]; // Offset: 0xea // Size: 0x02
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // Offset: 0xec // Size: 0x0c
	bool bIsAdditiveVelocityApplied; // Offset: 0xf8 // Size: 0x01
	struct FRootMotionSourceSettings LastAccumulatedSettings; // Offset: 0xf9 // Size: 0x01
	char pad_0xFA[0x6]; // Offset: 0xfa // Size: 0x06
};

// Object Name: ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x01 // Inherited bytes: 0x00
struct FRootMotionSourceSettings {
	// Fields
	char Flags; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0x168 // Inherited bytes: 0x00
struct FSimulatedRootMotionReplicatedMove {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FRepRootMotionMontage RootMotion; // Offset: 0x08 // Size: 0x160
};

// Object Name: ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 // Inherited bytes: 0x00
struct FRootMotionMovementParams {
	// Fields
	bool bHasRootMotion; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float BlendWeight; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform RootMotionTransform; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FBasedMovementInfo {
	// Fields
	struct UPrimitiveComponent* MovementBase; // Offset: 0x00 // Size: 0x08
	struct FName BoneName; // Offset: 0x08 // Size: 0x08
	bool bNearPushBase; // Offset: 0x10 // Size: 0x01
	bool bPushedByBase; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
	struct FVector_NetQuantize100 Location; // Offset: 0x14 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x20 // Size: 0x0c
	bool bServerHasBaseComponent; // Offset: 0x2c // Size: 0x01
	bool bRelativeRotation; // Offset: 0x2d // Size: 0x01
	bool bServerHasVelocity; // Offset: 0x2e // Size: 0x01
	char pad_0x2F[0x1]; // Offset: 0x2f // Size: 0x01
};

// Object Name: ScriptStruct Engine.RadialDamageEvent
// Size: 0x40 // Inherited bytes: 0x10
struct FRadialDamageEvent : FDamageEvent {
	// Fields
	struct FRadialDamageParams Params; // Offset: 0x10 // Size: 0x14
	struct FVector Origin; // Offset: 0x24 // Size: 0x0c
	struct TArray<struct FHitResult> ComponentHits; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RadialDamageParams
// Size: 0x14 // Inherited bytes: 0x00
struct FRadialDamageParams {
	// Fields
	float BaseDamage; // Offset: 0x00 // Size: 0x04
	float MinimumDamage; // Offset: 0x04 // Size: 0x04
	float InnerRadius; // Offset: 0x08 // Size: 0x04
	float OuterRadius; // Offset: 0x0c // Size: 0x04
	float DamageFalloff; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PointDamageEvent
// Size: 0xa8 // Inherited bytes: 0x10
struct FPointDamageEvent : FDamageEvent {
	// Fields
	float Damage; // Offset: 0x10 // Size: 0x04
	struct FVector_NetQuantizeNormal ShotDirection; // Offset: 0x14 // Size: 0x0c
	struct FHitResult HitInfo; // Offset: 0x20 // Size: 0x88
};

// Object Name: ScriptStruct Engine.RepMovementKeyLoc
// Size: 0x28 // Inherited bytes: 0x00
struct FRepMovementKeyLoc {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
	enum class EVectorQuantization LocationQuantizationLevel; // Offset: 0x1c // Size: 0x01
	enum class EVectorQuantization VelocityQuantizationLevel; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0xa]; // Offset: 0x1e // Size: 0x0a
};

// Object Name: ScriptStruct Engine.MinimalViewInfo
// Size: 0x5b0 // Inherited bytes: 0x00
struct FMinimalViewInfo {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector LocationLocalSpace; // Offset: 0x0c // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x18 // Size: 0x0c
	float FOV; // Offset: 0x24 // Size: 0x04
	float OrthoWidth; // Offset: 0x28 // Size: 0x04
	float OrthoNearClipPlane; // Offset: 0x2c // Size: 0x04
	float OrthoFarClipPlane; // Offset: 0x30 // Size: 0x04
	float AspectRatio; // Offset: 0x34 // Size: 0x04
	char bConstrainAspectRatio : 1; // Offset: 0x38 // Size: 0x01
	char bUseFieldOfViewForLOD : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_2 : 6; // Offset: 0x38 // Size: 0x01
	enum class ECameraProjectionMode ProjectionMode; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	float PostProcessBlendWeight; // Offset: 0x3c // Size: 0x04
	struct FPostProcessSettings PostProcessSettings; // Offset: 0x40 // Size: 0x560
	struct FVector2D OffCenterProjectionOffset; // Offset: 0x5a0 // Size: 0x08
	char pad_0x5A8[0x8]; // Offset: 0x5a8 // Size: 0x08
};

// Object Name: ScriptStruct Engine.PostProcessSettings
// Size: 0x560 // Inherited bytes: 0x00
struct FPostProcessSettings {
	// Fields
	char bOverride_WhiteTemp : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_WhiteTint : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorSaturation : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorContrast : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorGamma : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorGain : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorOffset : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorSaturationShadows : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_ColorContrastShadows : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorGammaShadows : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorGainShadows : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorOffsetShadows : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorSaturationMidtones : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorContrastMidtones : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorGammaMidtones : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorGainMidtones : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_ColorOffsetMidtones : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorSaturationHighlights : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorContrastHighlights : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorGammaHighlights : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorGainHighlights : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorOffsetHighlights : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorCorrectionShadowsMax : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_ColorCorrectionHighlightsMin : 1; // Offset: 0x02 // Size: 0x01
	char bOverride_FilmWhitePoint : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmSaturation : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmChannelMixerRed : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmChannelMixerGreen : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmChannelMixerBlue : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmContrast : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmDynamicRange : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmHealAmount : 1; // Offset: 0x03 // Size: 0x01
	char bOverride_FilmToeAmount : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmShadowTint : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmShadowTintBlend : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmShadowTintAmount : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmSlope : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmToe : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmShoulder : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmBlackClip : 1; // Offset: 0x04 // Size: 0x01
	char bOverride_FilmWhiteClip : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_SceneColorTint : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_SceneFringeIntensity : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_AmbientCubemapTint : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_AmbientCubemapIntensity : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_BloomMethod : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_BloomIntensity : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_BloomThreshold : 1; // Offset: 0x05 // Size: 0x01
	char bOverride_Bloom1Tint : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom1Size : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom2Size : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom2Tint : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom3Tint : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom3Size : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom4Tint : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom4Size : 1; // Offset: 0x06 // Size: 0x01
	char bOverride_Bloom5Tint : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_Bloom5Size : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_Bloom6Tint : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_Bloom6Size : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_BloomSizeScale : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_BloomConvolutionTexture : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_BloomConvolutionSize : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_BloomConvolutionCenterUV : 1; // Offset: 0x07 // Size: 0x01
	char bOverride_BloomConvolutionPreFilter : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomConvolutionPreFilterMin : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomConvolutionPreFilterMax : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomConvolutionPreFilterMult : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomConvolutionBufferScale : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomDirtMaskIntensity : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomDirtMaskTint : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_BloomDirtMask : 1; // Offset: 0x08 // Size: 0x01
	char bOverride_RadialBlurCenterPos : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_RadialBlurIntensity : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_RadialBlurDistance : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_AutoExposureMethod : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_AutoExposureLowPercent : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_AutoExposureHighPercent : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_AutoExposureMinBrightness : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_AutoExposureMaxBrightness : 1; // Offset: 0x09 // Size: 0x01
	char bOverride_AutoExposureSpeedUp : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_AutoExposureSpeedDown : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_AutoExposureBias : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_HistogramLogMin : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_HistogramLogMax : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_LensFlareIntensity : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_LensFlareTint : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_LensFlareTints : 1; // Offset: 0x0a // Size: 0x01
	char bOverride_LensFlareBokehSize : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_LensFlareBokehShape : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_LensFlareThreshold : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_VignetteIntensity : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_GrainIntensity : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_GrainJitter : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_AmbientOcclusionIntensity : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_AmbientOcclusionStaticFraction : 1; // Offset: 0x0b // Size: 0x01
	char bOverride_AmbientOcclusionRadius : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionFadeDistance : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionFadeRadius : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionDistance : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionRadiusInWS : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionPower : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionBias : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionQuality : 1; // Offset: 0x0c // Size: 0x01
	char bOverride_AmbientOcclusionMipBlend : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_AmbientOcclusionMipScale : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_AmbientOcclusionMipThreshold : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_LPVIntensity : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_LPVDirectionalOcclusionRadius : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_LPVDiffuseOcclusionExponent : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_LPVSpecularOcclusionExponent : 1; // Offset: 0x0d // Size: 0x01
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVSpecularOcclusionIntensity : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVSize : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVSecondaryBounceIntensity : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVGeometryVolumeBias : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVVplInjectionBias : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVEmissiveInjectionIntensity : 1; // Offset: 0x0e // Size: 0x01
	char bOverride_LPVFadeRange : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTIndirectLightingColor : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTIndirectLightingIntensity : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTMaxOcclusionDistance : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTMinOcclusion : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTDefaultOcclusion : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTSkyLightScale : 1; // Offset: 0x0f // Size: 0x01
	char bOverride_SRTDirectionalLightScale : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_SRTFilterSmoothness : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_IndirectLightingColor : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_IndirectLightingIntensity : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_ColorGradingIntensity : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_ColorGradingLUT : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_DepthOfFieldFocalDistance : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_DepthOfFieldFstop : 1; // Offset: 0x10 // Size: 0x01
	char bOverride_DepthOfFieldSensorWidth : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldFocalRegion : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldScale : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldMaxBokehSize : 1; // Offset: 0x11 // Size: 0x01
	char bOverride_DepthOfFieldNearBlurSize : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_DepthOfFieldFarBlurSize : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_DepthOfFieldMethod : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_MobileHQGaussian : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_BackgroundBlur : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_DepthOfFieldBokehShape : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_DepthOfFieldOcclusion : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_DepthOfFieldColorThreshold : 1; // Offset: 0x12 // Size: 0x01
	char bOverride_DepthOfFieldSizeThreshold : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_DepthOfFieldVignetteSize : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_MotionBlurAmount : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_MotionBlurMax : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_MotionBlurPerObjectSize : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_ScreenPercentage : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_ScreenSpaceReflectionIntensity : 1; // Offset: 0x13 // Size: 0x01
	char bOverride_ScreenSpaceReflectionQuality : 1; // Offset: 0x14 // Size: 0x01
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // Offset: 0x14 // Size: 0x01
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // Offset: 0x14 // Size: 0x01
	char bOverride_FxaaConsoleEdgeSharpness : 1; // Offset: 0x14 // Size: 0x01
	char bOverride_FxaaConsoleEdgeThreshold : 1; // Offset: 0x14 // Size: 0x01
	char bOverride_FxaaConsoleEdgeThresholdMin : 1; // Offset: 0x14 // Size: 0x01
	char pad_0x14_6 : 2; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float WhiteTemp; // Offset: 0x18 // Size: 0x04
	float WhiteTint; // Offset: 0x1c // Size: 0x04
	struct FVector4 ColorSaturation; // Offset: 0x20 // Size: 0x10
	struct FVector4 ColorContrast; // Offset: 0x30 // Size: 0x10
	struct FVector4 ColorGamma; // Offset: 0x40 // Size: 0x10
	struct FVector4 ColorGain; // Offset: 0x50 // Size: 0x10
	struct FVector4 ColorOffset; // Offset: 0x60 // Size: 0x10
	struct FVector4 ColorSaturationShadows; // Offset: 0x70 // Size: 0x10
	struct FVector4 ColorContrastShadows; // Offset: 0x80 // Size: 0x10
	struct FVector4 ColorGammaShadows; // Offset: 0x90 // Size: 0x10
	struct FVector4 ColorGainShadows; // Offset: 0xa0 // Size: 0x10
	struct FVector4 ColorOffsetShadows; // Offset: 0xb0 // Size: 0x10
	float ColorCorrectionShadowsMax; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0xc]; // Offset: 0xc4 // Size: 0x0c
	struct FVector4 ColorSaturationMidtones; // Offset: 0xd0 // Size: 0x10
	struct FVector4 ColorContrastMidtones; // Offset: 0xe0 // Size: 0x10
	struct FVector4 ColorGammaMidtones; // Offset: 0xf0 // Size: 0x10
	struct FVector4 ColorGainMidtones; // Offset: 0x100 // Size: 0x10
	struct FVector4 ColorOffsetMidtones; // Offset: 0x110 // Size: 0x10
	struct FVector4 ColorSaturationHighlights; // Offset: 0x120 // Size: 0x10
	struct FVector4 ColorContrastHighlights; // Offset: 0x130 // Size: 0x10
	struct FVector4 ColorGammaHighlights; // Offset: 0x140 // Size: 0x10
	struct FVector4 ColorGainHighlights; // Offset: 0x150 // Size: 0x10
	struct FVector4 ColorOffsetHighlights; // Offset: 0x160 // Size: 0x10
	float ColorCorrectionHighlightsMin; // Offset: 0x170 // Size: 0x04
	float FilmSlope; // Offset: 0x174 // Size: 0x04
	float FilmToe; // Offset: 0x178 // Size: 0x04
	float FilmShoulder; // Offset: 0x17c // Size: 0x04
	float FilmBlackClip; // Offset: 0x180 // Size: 0x04
	float FilmWhiteClip; // Offset: 0x184 // Size: 0x04
	struct FLinearColor FilmWhitePoint; // Offset: 0x188 // Size: 0x10
	struct FLinearColor FilmShadowTint; // Offset: 0x198 // Size: 0x10
	float FilmShadowTintBlend; // Offset: 0x1a8 // Size: 0x04
	float FilmShadowTintAmount; // Offset: 0x1ac // Size: 0x04
	float FilmSaturation; // Offset: 0x1b0 // Size: 0x04
	struct FLinearColor FilmChannelMixerRed; // Offset: 0x1b4 // Size: 0x10
	struct FLinearColor FilmChannelMixerGreen; // Offset: 0x1c4 // Size: 0x10
	struct FLinearColor FilmChannelMixerBlue; // Offset: 0x1d4 // Size: 0x10
	float FilmContrast; // Offset: 0x1e4 // Size: 0x04
	float FilmToeAmount; // Offset: 0x1e8 // Size: 0x04
	float FilmHealAmount; // Offset: 0x1ec // Size: 0x04
	float FilmDynamicRange; // Offset: 0x1f0 // Size: 0x04
	struct FLinearColor SceneColorTint; // Offset: 0x1f4 // Size: 0x10
	float SceneFringeIntensity; // Offset: 0x204 // Size: 0x04
	enum class EBloomMethod BloomMethod; // Offset: 0x208 // Size: 0x01
	char pad_0x209[0x3]; // Offset: 0x209 // Size: 0x03
	float BloomIntensity; // Offset: 0x20c // Size: 0x04
	float BloomThreshold; // Offset: 0x210 // Size: 0x04
	float BloomSizeScale; // Offset: 0x214 // Size: 0x04
	float Bloom1Size; // Offset: 0x218 // Size: 0x04
	float Bloom2Size; // Offset: 0x21c // Size: 0x04
	float Bloom3Size; // Offset: 0x220 // Size: 0x04
	float Bloom4Size; // Offset: 0x224 // Size: 0x04
	float Bloom5Size; // Offset: 0x228 // Size: 0x04
	float Bloom6Size; // Offset: 0x22c // Size: 0x04
	struct FLinearColor Bloom1Tint; // Offset: 0x230 // Size: 0x10
	struct FLinearColor Bloom2Tint; // Offset: 0x240 // Size: 0x10
	struct FLinearColor Bloom3Tint; // Offset: 0x250 // Size: 0x10
	struct FLinearColor Bloom4Tint; // Offset: 0x260 // Size: 0x10
	struct FLinearColor Bloom5Tint; // Offset: 0x270 // Size: 0x10
	struct FLinearColor Bloom6Tint; // Offset: 0x280 // Size: 0x10
	struct UTexture2D* BloomConvolutionTexture; // Offset: 0x290 // Size: 0x08
	float BloomConvolutionSize; // Offset: 0x298 // Size: 0x04
	struct FVector2D BloomConvolutionCenterUV; // Offset: 0x29c // Size: 0x08
	struct FVector BloomConvolutionPreFilter; // Offset: 0x2a4 // Size: 0x0c
	float BloomConvolutionPreFilterMin; // Offset: 0x2b0 // Size: 0x04
	float BloomConvolutionPreFilterMax; // Offset: 0x2b4 // Size: 0x04
	float BloomConvolutionPreFilterMult; // Offset: 0x2b8 // Size: 0x04
	float BloomConvolutionBufferScale; // Offset: 0x2bc // Size: 0x04
	struct UTexture* BloomDirtMask; // Offset: 0x2c0 // Size: 0x08
	float BloomDirtMaskIntensity; // Offset: 0x2c8 // Size: 0x04
	struct FLinearColor BloomDirtMaskTint; // Offset: 0x2cc // Size: 0x10
	struct FVector2D RadialBlurCenterPos; // Offset: 0x2dc // Size: 0x08
	float RadialBlurIntensity; // Offset: 0x2e4 // Size: 0x04
	float RadialBlurDistance; // Offset: 0x2e8 // Size: 0x04
	struct FLinearColor AmbientCubemapTint; // Offset: 0x2ec // Size: 0x10
	float AmbientCubemapIntensity; // Offset: 0x2fc // Size: 0x04
	struct UTextureCube* AmbientCubemap; // Offset: 0x300 // Size: 0x08
	enum class EAutoExposureMethod AutoExposureMethod; // Offset: 0x308 // Size: 0x01
	char pad_0x309[0x3]; // Offset: 0x309 // Size: 0x03
	float AutoExposureLowPercent; // Offset: 0x30c // Size: 0x04
	float AutoExposureHighPercent; // Offset: 0x310 // Size: 0x04
	float AutoExposureMinBrightness; // Offset: 0x314 // Size: 0x04
	float AutoExposureMaxBrightness; // Offset: 0x318 // Size: 0x04
	float AutoExposureSpeedUp; // Offset: 0x31c // Size: 0x04
	float AutoExposureSpeedDown; // Offset: 0x320 // Size: 0x04
	char BlindWatermarking : 1; // Offset: 0x324 // Size: 0x01
	char ShowFFTResult : 1; // Offset: 0x324 // Size: 0x01
	char pad_0x324_2 : 6; // Offset: 0x324 // Size: 0x01
	char pad_0x325[0x3]; // Offset: 0x325 // Size: 0x03
	struct UTexture2D* BlindWatermarkingTexture; // Offset: 0x328 // Size: 0x08
	char bOverride_BlindWatermarking : 1; // Offset: 0x330 // Size: 0x01
	char bOverride_ShowFFTResult : 1; // Offset: 0x330 // Size: 0x01
	char bOverride_BlindWatermarkingTexture : 1; // Offset: 0x330 // Size: 0x01
	char pad_0x330_3 : 5; // Offset: 0x330 // Size: 0x01
	char pad_0x331[0x3]; // Offset: 0x331 // Size: 0x03
	float AutoExposureBias; // Offset: 0x334 // Size: 0x04
	float HistogramLogMin; // Offset: 0x338 // Size: 0x04
	float HistogramLogMax; // Offset: 0x33c // Size: 0x04
	float LensFlareIntensity; // Offset: 0x340 // Size: 0x04
	struct FLinearColor LensFlareTint; // Offset: 0x344 // Size: 0x10
	float LensFlareBokehSize; // Offset: 0x354 // Size: 0x04
	IntProperty LensFlareCount; // Offset: 0x358 // Size: 0x04
	float LensFlareThreshold; // Offset: 0x35c // Size: 0x04
	struct UTexture* LensFlareBokehShape; // Offset: 0x360 // Size: 0x08
	struct FLinearColor LensFlareTints[0x8]; // Offset: 0x368 // Size: 0x80
	float VignetteIntensity; // Offset: 0x3e8 // Size: 0x04
	float GrainJitter; // Offset: 0x3ec // Size: 0x04
	float GrainIntensity; // Offset: 0x3f0 // Size: 0x04
	float AmbientOcclusionIntensity; // Offset: 0x3f4 // Size: 0x04
	float AmbientOcclusionStaticFraction; // Offset: 0x3f8 // Size: 0x04
	float AmbientOcclusionRadius; // Offset: 0x3fc // Size: 0x04
	char AmbientOcclusionRadiusInWS : 1; // Offset: 0x400 // Size: 0x01
	char pad_0x400_1 : 7; // Offset: 0x400 // Size: 0x01
	char pad_0x401[0x3]; // Offset: 0x401 // Size: 0x03
	float AmbientOcclusionFadeDistance; // Offset: 0x404 // Size: 0x04
	float AmbientOcclusionFadeRadius; // Offset: 0x408 // Size: 0x04
	float AmbientOcclusionDistance; // Offset: 0x40c // Size: 0x04
	float AmbientOcclusionPower; // Offset: 0x410 // Size: 0x04
	float AmbientOcclusionBias; // Offset: 0x414 // Size: 0x04
	float AmbientOcclusionQuality; // Offset: 0x418 // Size: 0x04
	float AmbientOcclusionMipBlend; // Offset: 0x41c // Size: 0x04
	float AmbientOcclusionMipScale; // Offset: 0x420 // Size: 0x04
	float AmbientOcclusionMipThreshold; // Offset: 0x424 // Size: 0x04
	struct FLinearColor SRTIndirectLightingColor; // Offset: 0x428 // Size: 0x10
	float SRTIndirectLightingIntensity; // Offset: 0x438 // Size: 0x04
	float SRTMaxOcclusionDistance; // Offset: 0x43c // Size: 0x04
	float SRTMinOcclusion; // Offset: 0x440 // Size: 0x04
	float SRTDefaultOcclusion; // Offset: 0x444 // Size: 0x04
	float SRTSkyLightScale; // Offset: 0x448 // Size: 0x04
	float SRTDirectionalLightScale; // Offset: 0x44c // Size: 0x04
	float SRTFilterSmoothness; // Offset: 0x450 // Size: 0x04
	struct FLinearColor IndirectLightingColor; // Offset: 0x454 // Size: 0x10
	float IndirectLightingIntensity; // Offset: 0x464 // Size: 0x04
	float ColorGradingIntensity; // Offset: 0x468 // Size: 0x04
	char pad_0x46C[0x4]; // Offset: 0x46c // Size: 0x04
	struct UTexture* ColorGradingLUT; // Offset: 0x470 // Size: 0x08
	enum class EDepthOfFieldMethod DepthOfFieldMethod; // Offset: 0x478 // Size: 0x01
	char bMobileHQGaussian : 1; // Offset: 0x479 // Size: 0x01
	char bBackgroundBlur : 1; // Offset: 0x479 // Size: 0x01
	char pad_0x479_2 : 6; // Offset: 0x479 // Size: 0x01
	char pad_0x47A[0x2]; // Offset: 0x47a // Size: 0x02
	float DepthOfFieldFstop; // Offset: 0x47c // Size: 0x04
	float DepthOfFieldSensorWidth; // Offset: 0x480 // Size: 0x04
	float DepthOfFieldFocalDistance; // Offset: 0x484 // Size: 0x04
	float DepthOfFieldDepthBlurAmount; // Offset: 0x488 // Size: 0x04
	float DepthOfFieldDepthBlurRadius; // Offset: 0x48c // Size: 0x04
	float DepthOfFieldFocalRegion; // Offset: 0x490 // Size: 0x04
	float DepthOfFieldNearTransitionRegion; // Offset: 0x494 // Size: 0x04
	float DepthOfFieldFarTransitionRegion; // Offset: 0x498 // Size: 0x04
	float DepthOfFieldScale; // Offset: 0x49c // Size: 0x04
	float DepthOfFieldMaxBokehSize; // Offset: 0x4a0 // Size: 0x04
	float DepthOfFieldNearBlurSize; // Offset: 0x4a4 // Size: 0x04
	float DepthOfFieldFarBlurSize; // Offset: 0x4a8 // Size: 0x04
	char pad_0x4AC[0x4]; // Offset: 0x4ac // Size: 0x04
	struct UTexture* DepthOfFieldBokehShape; // Offset: 0x4b0 // Size: 0x08
	float DepthOfFieldOcclusion; // Offset: 0x4b8 // Size: 0x04
	float DepthOfFieldColorThreshold; // Offset: 0x4bc // Size: 0x04
	float DepthOfFieldSizeThreshold; // Offset: 0x4c0 // Size: 0x04
	float DepthOfFieldSkyFocusDistance; // Offset: 0x4c4 // Size: 0x04
	float DepthOfFieldVignetteSize; // Offset: 0x4c8 // Size: 0x04
	float MotionBlurAmount; // Offset: 0x4cc // Size: 0x04
	float MotionBlurMax; // Offset: 0x4d0 // Size: 0x04
	float MotionBlurPerObjectSize; // Offset: 0x4d4 // Size: 0x04
	float LPVIntensity; // Offset: 0x4d8 // Size: 0x04
	float LPVVplInjectionBias; // Offset: 0x4dc // Size: 0x04
	float LPVSize; // Offset: 0x4e0 // Size: 0x04
	float LPVSecondaryOcclusionIntensity; // Offset: 0x4e4 // Size: 0x04
	float LPVSecondaryBounceIntensity; // Offset: 0x4e8 // Size: 0x04
	float LPVGeometryVolumeBias; // Offset: 0x4ec // Size: 0x04
	float LPVEmissiveInjectionIntensity; // Offset: 0x4f0 // Size: 0x04
	float LPVDirectionalOcclusionIntensity; // Offset: 0x4f4 // Size: 0x04
	float LPVDirectionalOcclusionRadius; // Offset: 0x4f8 // Size: 0x04
	float LPVDiffuseOcclusionExponent; // Offset: 0x4fc // Size: 0x04
	float LPVSpecularOcclusionExponent; // Offset: 0x500 // Size: 0x04
	float LPVDiffuseOcclusionIntensity; // Offset: 0x504 // Size: 0x04
	float LPVSpecularOcclusionIntensity; // Offset: 0x508 // Size: 0x04
	float ScreenSpaceReflectionIntensity; // Offset: 0x50c // Size: 0x04
	float ScreenSpaceReflectionQuality; // Offset: 0x510 // Size: 0x04
	float ScreenSpaceReflectionMaxRoughness; // Offset: 0x514 // Size: 0x04
	float LPVFadeRange; // Offset: 0x518 // Size: 0x04
	float LPVDirectionalOcclusionFadeRange; // Offset: 0x51c // Size: 0x04
	float ScreenPercentage; // Offset: 0x520 // Size: 0x04
	char pad_0x524[0x4]; // Offset: 0x524 // Size: 0x04
	struct FWeightedBlendables WeightedBlendables; // Offset: 0x528 // Size: 0x10
	float FxaaConsoleEdgeSharpness; // Offset: 0x538 // Size: 0x04
	float FxaaConsoleEdgeThreshold; // Offset: 0x53c // Size: 0x04
	float FxaaConsoleEdgeThresholdMin; // Offset: 0x540 // Size: 0x04
	char pad_0x544[0x4]; // Offset: 0x544 // Size: 0x04
	struct TArray<struct UObject*> Blendables; // Offset: 0x548 // Size: 0x10
	char pad_0x558[0x8]; // Offset: 0x558 // Size: 0x08
};

// Object Name: ScriptStruct Engine.WeightedBlendables
// Size: 0x10 // Inherited bytes: 0x00
struct FWeightedBlendables {
	// Fields
	struct TArray<struct FWeightedBlendable> Array; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.WeightedBlendable
// Size: 0x10 // Inherited bytes: 0x00
struct FWeightedBlendable {
	// Fields
	float Weight; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UObject* Object; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.Vector_NetQuantizeWithDelta
// Size: 0x20 // Inherited bytes: 0x0c
struct FVector_NetQuantizeWithDelta : FVector {
	// Fields
	char pad_0xC[0x14]; // Offset: 0x0c // Size: 0x14
};

// Object Name: ScriptStruct Engine.PhysicsTimeStep
// Size: 0x18 // Inherited bytes: 0x00
struct FPhysicsTimeStep {
	// Fields
	bool bFixedTimeStep; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float DeltaTime; // Offset: 0x04 // Size: 0x04
	float SubTime; // Offset: 0x08 // Size: 0x04
	float Fps; // Offset: 0x0c // Size: 0x04
	char NumSubSteps; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float ExtraTimeBank; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ParticleSysParam
// Size: 0x80 // Inherited bytes: 0x00
struct FParticleSysParam {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	enum class EParticleSysParamType ParamType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float Scalar; // Offset: 0x0c // Size: 0x04
	float Scalar_Low; // Offset: 0x10 // Size: 0x04
	struct FVector Vector; // Offset: 0x14 // Size: 0x0c
	struct FVector Vector_Low; // Offset: 0x20 // Size: 0x0c
	struct FColor Color; // Offset: 0x2c // Size: 0x04
	struct AActor* Actor; // Offset: 0x30 // Size: 0x08
	struct UMaterialInterface* Material; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x40]; // Offset: 0x40 // Size: 0x40
};

// Object Name: ScriptStruct Engine.DecalBakingRequest
// Size: 0x38 // Inherited bytes: 0x00
struct FDecalBakingRequest {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Mesh; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
	struct TArray<struct FDecalParameter> DecalParams; // Offset: 0x18 // Size: 0x10
	struct UTextureRenderTarget2D* RenderTarget; // Offset: 0x28 // Size: 0x08
	struct UTexture* OriginTexture; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DecalParameter
// Size: 0x90 // Inherited bytes: 0x00
struct FDecalParameter {
	// Fields
	struct UTexture2D* DecalTexture; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x88]; // Offset: 0x08 // Size: 0x88
};

// Object Name: ScriptStruct Engine.MovementProperties
// Size: 0x04 // Inherited bytes: 0x00
struct FMovementProperties {
	// Fields
	char bCanCrouch : 1; // Offset: 0x00 // Size: 0x01
	char bCanJump : 1; // Offset: 0x00 // Size: 0x01
	char bCanWalk : 1; // Offset: 0x00 // Size: 0x01
	char bCanSwim : 1; // Offset: 0x00 // Size: 0x01
	char bCanFly : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_5 : 3; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct Engine.NavAgentProperties
// Size: 0x20 // Inherited bytes: 0x04
struct FNavAgentProperties : FMovementProperties {
	// Fields
	float AgentRadius; // Offset: 0x04 // Size: 0x04
	float AgentHeight; // Offset: 0x08 // Size: 0x04
	float AgentStepHeight; // Offset: 0x0c // Size: 0x04
	float NavWalkingSearchHeightScale; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct ANavigationData* PreferredNavData; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ACESParameter
// Size: 0x28 // Inherited bytes: 0x00
struct FACESParameter {
	// Fields
	struct FLinearColor TintColor; // Offset: 0x00 // Size: 0x10
	float Bright; // Offset: 0x10 // Size: 0x04
	float Gray; // Offset: 0x14 // Size: 0x04
	float ShoulderStrength; // Offset: 0x18 // Size: 0x04
	float ToeStrength; // Offset: 0x1c // Size: 0x04
	float LinearStrength; // Offset: 0x20 // Size: 0x04
	float LinearAngle; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.UserDetailSetting
// Size: 0x94 // Inherited bytes: 0x00
struct FUserDetailSetting {
	// Fields
	IntProperty DeviceQualityLevel; // Offset: 0x00 // Size: 0x04
	IntProperty TCQualityGrade; // Offset: 0x04 // Size: 0x04
	IntProperty DeviceMaxSoundEffectLevel; // Offset: 0x08 // Size: 0x04
	IntProperty DeviceMaxQualityLevel; // Offset: 0x0c // Size: 0x04
	IntProperty UserQualitySetting; // Offset: 0x10 // Size: 0x04
	IntProperty DeviceSupportHDR; // Offset: 0x14 // Size: 0x04
	IntProperty IsOpenHDR; // Offset: 0x18 // Size: 0x04
	IntProperty UserHDRSetting; // Offset: 0x1c // Size: 0x04
	IntProperty IsSupportMSAA; // Offset: 0x20 // Size: 0x04
	bool UserMsaaSetting; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	IntProperty UserMSAAValue; // Offset: 0x28 // Size: 0x04
	float UserMCSSetting; // Offset: 0x2c // Size: 0x04
	IntProperty UserShadowSetting; // Offset: 0x30 // Size: 0x04
	IntProperty UserShadowSwitch; // Offset: 0x34 // Size: 0x04
	IntProperty UserTeamQualityEnhanceSetting; // Offset: 0x38 // Size: 0x04
	IntProperty PUBGLimitSetting; // Offset: 0x3c // Size: 0x04
	IntProperty PUBGDeviceUpdateFlag; // Offset: 0x40 // Size: 0x04
	IntProperty PUBGDeviceFPSDef; // Offset: 0x44 // Size: 0x04
	IntProperty PUBGDeviceFPSVerySmooth; // Offset: 0x48 // Size: 0x04
	IntProperty PUBGDeviceFPSLow; // Offset: 0x4c // Size: 0x04
	IntProperty PUBGDeviceFPSMid; // Offset: 0x50 // Size: 0x04
	IntProperty PUBGDeviceFPSHigh; // Offset: 0x54 // Size: 0x04
	IntProperty PUBGDeviceFPSHDR; // Offset: 0x58 // Size: 0x04
	IntProperty PUBGDeviceFPSUltralHigh; // Offset: 0x5c // Size: 0x04
	IntProperty PUBGDeviceFPSUltimateHigh; // Offset: 0x60 // Size: 0x04
	IntProperty PUBGDeviceFPSUltimateHighTA; // Offset: 0x64 // Size: 0x04
	bool IsSupportTagCulling; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x3]; // Offset: 0x69 // Size: 0x03
	IntProperty PUBGTeamQualityEnhance; // Offset: 0x6c // Size: 0x04
	IntProperty UserVulkanSetting; // Offset: 0x70 // Size: 0x04
	IntProperty UserEnergySaving; // Offset: 0x74 // Size: 0x04
	IntProperty PUBGDeviceFPSVerySmoothExpand; // Offset: 0x78 // Size: 0x04
	IntProperty PUBGDeviceFPSLowExpand; // Offset: 0x7c // Size: 0x04
	IntProperty PUBGDeviceFPSMidExpand; // Offset: 0x80 // Size: 0x04
	IntProperty PUBGDeviceFPSHighExpand; // Offset: 0x84 // Size: 0x04
	IntProperty PUBGDeviceFPSHDRExpand; // Offset: 0x88 // Size: 0x04
	IntProperty PUBGDeviceFPSUltralHighExpand; // Offset: 0x8c // Size: 0x04
	IntProperty PUBGDeviceFPSUltimateHighExpand; // Offset: 0x90 // Size: 0x04
};

// Object Name: ScriptStruct Engine.FindFloorResult
// Size: 0x98 // Inherited bytes: 0x00
struct FFindFloorResult {
	// Fields
	char bBlockingHit : 1; // Offset: 0x00 // Size: 0x01
	char bWalkableFloor : 1; // Offset: 0x00 // Size: 0x01
	char bLineTrace : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FloorDist; // Offset: 0x04 // Size: 0x04
	float LineDist; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FHitResult HitResult; // Offset: 0x10 // Size: 0x88
};

// Object Name: ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 // Inherited bytes: 0x00
struct FNavAvoidanceMask {
	// Fields
	char bGroup0 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup1 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup2 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup3 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup4 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup5 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup6 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup7 : 1; // Offset: 0x00 // Size: 0x01
	char bGroup8 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup9 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup10 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup11 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup12 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup13 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup14 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup15 : 1; // Offset: 0x01 // Size: 0x01
	char bGroup16 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup17 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup18 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup19 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup20 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup21 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup22 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup23 : 1; // Offset: 0x02 // Size: 0x01
	char bGroup24 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup25 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup26 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup27 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup28 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup29 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup30 : 1; // Offset: 0x03 // Size: 0x01
	char bGroup31 : 1; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct Engine.IndexedCurve
// Size: 0x58 // Inherited bytes: 0x00
struct FIndexedCurve {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FKeyHandleMap KeyHandlesToIndices; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Engine.KeyHandleMap
// Size: 0x50 // Inherited bytes: 0x00
struct FKeyHandleMap {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Engine.RichCurve
// Size: 0x70 // Inherited bytes: 0x58
struct FRichCurve : FIndexedCurve {
	// Fields
	enum class ERichCurveExtrapolation PreInfinityExtrap; // Offset: 0x58 // Size: 0x01
	enum class ERichCurveExtrapolation PostInfinityExtrap; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x2]; // Offset: 0x5a // Size: 0x02
	float DefaultValue; // Offset: 0x5c // Size: 0x04
	struct TArray<struct FRichCurveKey> Keys; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RichCurveKey
// Size: 0x1c // Inherited bytes: 0x00
struct FRichCurveKey {
	// Fields
	enum class ERichCurveInterpMode InterpMode; // Offset: 0x00 // Size: 0x01
	enum class ERichCurveTangentMode TangentMode; // Offset: 0x01 // Size: 0x01
	enum class ERichCurveTangentWeightMode TangentWeightMode; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	float Time; // Offset: 0x04 // Size: 0x04
	float Value; // Offset: 0x08 // Size: 0x04
	float ArriveTangent; // Offset: 0x0c // Size: 0x04
	float ArriveTangentWeight; // Offset: 0x10 // Size: 0x04
	float LeaveTangent; // Offset: 0x14 // Size: 0x04
	float LeaveTangentWeight; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Engine.TableRowBase
// Size: 0x08 // Inherited bytes: 0x00
struct FTableRowBase {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.IntegralCurve
// Size: 0x70 // Inherited bytes: 0x58
struct FIntegralCurve : FIndexedCurve {
	// Fields
	struct TArray<struct FIntegralKey> Keys; // Offset: 0x58 // Size: 0x10
	IntProperty DefaultValue; // Offset: 0x68 // Size: 0x04
	bool bUseDefaultValueBeforeFirstKey; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
};

// Object Name: ScriptStruct Engine.IntegralKey
// Size: 0x08 // Inherited bytes: 0x00
struct FIntegralKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	IntProperty Value; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.RawDistributionFloat
// Size: 0x38 // Inherited bytes: 0x28
struct FRawDistributionFloat : FRawDistribution {
	// Fields
	float MinValue; // Offset: 0x28 // Size: 0x04
	float MaxValue; // Offset: 0x2c // Size: 0x04
	struct UDistributionFloat* Distribution; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.RawDistributionVector
// Size: 0x50 // Inherited bytes: 0x28
struct FRawDistributionVector : FRawDistribution {
	// Fields
	float MinValue; // Offset: 0x28 // Size: 0x04
	float MaxValue; // Offset: 0x2c // Size: 0x04
	struct FVector MinValueVec; // Offset: 0x30 // Size: 0x0c
	struct FVector MaxValueVec; // Offset: 0x3c // Size: 0x0c
	struct UDistributionVector* Distribution; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct Engine.KShapeElem
// Size: 0x28 // Inherited bytes: 0x00
struct FKShapeElem {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.KConvexElem
// Size: 0xa0 // Inherited bytes: 0x28
struct FKConvexElem : FKShapeElem {
	// Fields
	struct TArray<struct FVector> VertexData; // Offset: 0x28 // Size: 0x10
	struct FBox ElemBox; // Offset: 0x38 // Size: 0x1c
	char pad_0x54[0xc]; // Offset: 0x54 // Size: 0x0c
	struct FTransform Transform; // Offset: 0x60 // Size: 0x30
	char pad_0x90[0x10]; // Offset: 0x90 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimNode_Base
// Size: 0x38 // Inherited bytes: 0x00
struct FAnimNode_Base {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FExposedValueHandler EvaluateGraphExposedInputs; // Offset: 0x08 // Size: 0x28
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ExposedValueHandler
// Size: 0x28 // Inherited bytes: 0x00
struct FExposedValueHandler {
	// Fields
	struct FName BoundFunction; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x60 // Inherited bytes: 0x00
struct FExposedValueCopyRecord {
	// Fields
	struct UProperty* SourceProperty; // Offset: 0x00 // Size: 0x08
	struct FName SourcePropertyName; // Offset: 0x08 // Size: 0x08
	struct FName SourceSubPropertyName; // Offset: 0x10 // Size: 0x08
	IntProperty SourceArrayIndex; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UProperty* DestProperty; // Offset: 0x20 // Size: 0x08
	IntProperty DestArrayIndex; // Offset: 0x28 // Size: 0x04
	IntProperty Size; // Offset: 0x2c // Size: 0x04
	bool bInstanceIsTarget; // Offset: 0x30 // Size: 0x01
	enum class EPostCopyOperation PostCopyOperation; // Offset: 0x31 // Size: 0x01
	enum class ECopyType CopyType; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x5]; // Offset: 0x33 // Size: 0x05
	struct UProperty* CachedSourceProperty; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x20]; // Offset: 0x40 // Size: 0x20
};

// Object Name: ScriptStruct Engine.InputScaleBias
// Size: 0x08 // Inherited bytes: 0x00
struct FInputScaleBias {
	// Fields
	float Scale; // Offset: 0x00 // Size: 0x04
	float Bias; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PoseLinkBase
// Size: 0x18 // Inherited bytes: 0x00
struct FPoseLinkBase {
	// Fields
	IntProperty LinkID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x14]; // Offset: 0x04 // Size: 0x14
};

// Object Name: ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x18 // Inherited bytes: 0x18
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// Object Name: ScriptStruct Engine.AnimInstanceProxy
// Size: 0x5d0 // Inherited bytes: 0x00
struct FAnimInstanceProxy {
	// Fields
	char pad_0x0[0x5b8]; // Offset: 0x00 // Size: 0x5b8
	struct TArray<struct UAnimInstance*> SubAnimInstances; // Offset: 0x5b8 // Size: 0x10
	char pad_0x5C8[0x8]; // Offset: 0x5c8 // Size: 0x08
};

// Object Name: ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x78 // Inherited bytes: 0x00
struct FRuntimeFloatCurve {
	// Fields
	struct FRichCurve EditorCurveData; // Offset: 0x00 // Size: 0x70
	struct UCurveFloat* ExternalCurve; // Offset: 0x70 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BoneReference
// Size: 0x18 // Inherited bytes: 0x00
struct FBoneReference {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RegionID
// Size: 0x0c // Inherited bytes: 0x00
struct FRegionID {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x58 // Inherited bytes: 0x38
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	// Fields
	bool bIgnoreForRelevancyTest; // Offset: 0x32 // Size: 0x01
	IntProperty GroupIndex; // Offset: 0x34 // Size: 0x04
	enum class EAnimGroupRole GroupRole; // Offset: 0x38 // Size: 0x01
	float BlendWeight; // Offset: 0x3c // Size: 0x04
	float InternalTimeAccumulator; // Offset: 0x40 // Size: 0x04
	char pad_0x46[0x12]; // Offset: 0x46 // Size: 0x12
};

// Object Name: ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x70 // Inherited bytes: 0x58
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	// Fields
	struct UAnimSequenceBase* Sequence; // Offset: 0x58 // Size: 0x08
	bool bLoopAnimation; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
	float PlayRate; // Offset: 0x64 // Size: 0x04
	float StartPosition; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimCurveBase
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimCurveBase {
	// Fields
	struct FName LastObservedName; // Offset: 0x00 // Size: 0x08
	struct FSmartName Name; // Offset: 0x08 // Size: 0x10
	IntProperty CurveTypeFlags; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SmartName
// Size: 0x10 // Inherited bytes: 0x00
struct FSmartName {
	// Fields
	struct FName DisplayName; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.FloatCurve
// Size: 0x90 // Inherited bytes: 0x20
struct FFloatCurve : FAnimCurveBase {
	// Fields
	struct FRichCurve FloatCurve; // Offset: 0x20 // Size: 0x70
};

// Object Name: ScriptStruct Engine.BlendSampleData
// Size: 0x40 // Inherited bytes: 0x00
struct FBlendSampleData {
	// Fields
	IntProperty SampleDataIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimSequence* Animation; // Offset: 0x08 // Size: 0x08
	float TotalWeight; // Offset: 0x10 // Size: 0x04
	float Time; // Offset: 0x14 // Size: 0x04
	float PreviousTime; // Offset: 0x18 // Size: 0x04
	float SamplePlayRate; // Offset: 0x1c // Size: 0x04
	char pad_0x20[0x20]; // Offset: 0x20 // Size: 0x20
};

// Object Name: ScriptStruct Engine.AlphaBlend
// Size: 0x38 // Inherited bytes: 0x00
struct FAlphaBlend {
	// Fields
	enum class EAlphaBlendOption BlendOption; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UCurveFloat* CustomCurve; // Offset: 0x08 // Size: 0x08
	float BlendTime; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x24]; // Offset: 0x14 // Size: 0x24
};

// Object Name: ScriptStruct Engine.PoseLink
// Size: 0x18 // Inherited bytes: 0x18
struct FPoseLink : FPoseLinkBase {
};

// Object Name: ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 // Inherited bytes: 0x00
struct FPerBoneBlendWeight {
	// Fields
	IntProperty SourceIndex; // Offset: 0x00 // Size: 0x04
	float BlendWeight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BlendFilter
// Size: 0x90 // Inherited bytes: 0x00
struct FBlendFilter {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct Engine.InputBlendPose
// Size: 0x10 // Inherited bytes: 0x00
struct FInputBlendPose {
	// Fields
	struct TArray<struct FBranchFilter> BranchFilters; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BranchFilter
// Size: 0x10 // Inherited bytes: 0x00
struct FBranchFilter {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	IntProperty BlendDepth; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.PoseSnapshot
// Size: 0x38 // Inherited bytes: 0x00
struct FPoseSnapshot {
	// Fields
	struct TArray<struct FTransform> LocalTransforms; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FName> BoneNames; // Offset: 0x10 // Size: 0x10
	struct FName SkeletalMeshName; // Offset: 0x20 // Size: 0x08
	struct FName SnapshotName; // Offset: 0x28 // Size: 0x08
	bool bIsValid; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct Engine.SplineCurves
// Size: 0x60 // Inherited bytes: 0x00
struct FSplineCurves {
	// Fields
	struct FInterpCurveVector Position; // Offset: 0x00 // Size: 0x18
	struct FInterpCurveQuat Rotation; // Offset: 0x18 // Size: 0x18
	struct FInterpCurveVector Scale; // Offset: 0x30 // Size: 0x18
	struct FInterpCurveFloat ReparamTable; // Offset: 0x48 // Size: 0x18
};

// Object Name: ScriptStruct Engine.AnimCurveParam
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimCurveParam {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.StringCurve
// Size: 0x78 // Inherited bytes: 0x58
struct FStringCurve : FIndexedCurve {
	// Fields
	StrProperty DefaultValue; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FStringCurveKey> Keys; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct Engine.StringCurveKey
// Size: 0x18 // Inherited bytes: 0x00
struct FStringCurveKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.DirectoryPath
// Size: 0x10 // Inherited bytes: 0x00
struct FDirectoryPath {
	// Fields
	StrProperty Path; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.KAggregateGeom
// Size: 0xc8 // Inherited bytes: 0x00
struct FKAggregateGeom {
	// Fields
	struct TArray<struct FKSphereElem> SphereElems; // Offset: 0x00 // Size: 0x10
	struct TArray<enum class EShapeUsage> SphereUsages; // Offset: 0x10 // Size: 0x10
	struct TArray<bool> SphereConsiderForMass; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FKBoxElem> BoxElems; // Offset: 0x30 // Size: 0x10
	struct TArray<enum class EShapeUsage> BoxUsages; // Offset: 0x40 // Size: 0x10
	struct TArray<bool> BoxConsiderForMass; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FKSphylElem> SphylElems; // Offset: 0x60 // Size: 0x10
	struct TArray<enum class EShapeUsage> SphylUsages; // Offset: 0x70 // Size: 0x10
	struct TArray<bool> SphylConsiderForMass; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FKConvexElem> ConvexElems; // Offset: 0x90 // Size: 0x10
	struct TArray<enum class EShapeUsage> ConvexUsages; // Offset: 0xa0 // Size: 0x10
	struct TArray<bool> ConvexConsiderForMass; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0x8]; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.KSphylElem
// Size: 0xa0 // Inherited bytes: 0x28
struct FKSphylElem : FKShapeElem {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FMatrix TM; // Offset: 0x30 // Size: 0x40
	struct FQuat Orientation; // Offset: 0x70 // Size: 0x10
	struct FVector Center; // Offset: 0x80 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x8c // Size: 0x0c
	float Radius; // Offset: 0x98 // Size: 0x04
	float Length; // Offset: 0x9c // Size: 0x04
};

// Object Name: ScriptStruct Engine.KBoxElem
// Size: 0xb0 // Inherited bytes: 0x28
struct FKBoxElem : FKShapeElem {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FMatrix TM; // Offset: 0x30 // Size: 0x40
	struct FQuat Orientation; // Offset: 0x70 // Size: 0x10
	struct FVector Center; // Offset: 0x80 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x8c // Size: 0x0c
	float X; // Offset: 0x98 // Size: 0x04
	float Y; // Offset: 0x9c // Size: 0x04
	float Z; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0xc]; // Offset: 0xa4 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.KSphereElem
// Size: 0x80 // Inherited bytes: 0x28
struct FKSphereElem : FKShapeElem {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FMatrix TM; // Offset: 0x30 // Size: 0x40
	struct FVector Center; // Offset: 0x70 // Size: 0x0c
	float Radius; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimationGroupReference
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimationGroupReference {
	// Fields
	struct FName GroupName; // Offset: 0x00 // Size: 0x08
	enum class EAnimGroupRole GroupRole; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Engine.AnimGroupInstance
// Size: 0x80 // Inherited bytes: 0x00
struct FAnimGroupInstance {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct Engine.AnimTickRecord
// Size: 0x48 // Inherited bytes: 0x00
struct FAnimTickRecord {
	// Fields
	struct UAnimationAsset* SourceAsset; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x40]; // Offset: 0x08 // Size: 0x40
};

// Object Name: ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x18 // Inherited bytes: 0x00
struct FMarkerSyncAnimPosition {
	// Fields
	struct FName PreviousMarkerName; // Offset: 0x00 // Size: 0x08
	struct FName NextMarkerName; // Offset: 0x08 // Size: 0x08
	float PositionBetweenMarkers; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimationRecordingSettings {
	// Fields
	bool bRecordInWorldSpace; // Offset: 0x00 // Size: 0x01
	bool bRemoveRootAnimation; // Offset: 0x01 // Size: 0x01
	bool bAutoSaveAsset; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	float SampleRate; // Offset: 0x04 // Size: 0x04
	float Length; // Offset: 0x08 // Size: 0x04
	enum class ERichCurveInterpMode InterpMode; // Offset: 0x0c // Size: 0x01
	enum class ERichCurveTangentMode TangentMode; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
};

// Object Name: ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 // Inherited bytes: 0x00
struct FComponentSpacePose {
	// Fields
	struct TArray<struct FTransform> Transforms; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FName> Names; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.LocalSpacePose
// Size: 0x20 // Inherited bytes: 0x00
struct FLocalSpacePose {
	// Fields
	struct TArray<struct FTransform> Transforms; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FName> Names; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NamedTransform
// Size: 0x40 // Inherited bytes: 0x00
struct FNamedTransform {
	// Fields
	struct FTransform Value; // Offset: 0x00 // Size: 0x30
	struct FName Name; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NamedColor
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedColor {
	// Fields
	struct FColor Value; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName Name; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NamedVector
// Size: 0x18 // Inherited bytes: 0x00
struct FNamedVector {
	// Fields
	struct FVector Value; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FName Name; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NamedFloat
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedFloat {
	// Fields
	float Value; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName Name; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimParentNodeAssetOverride {
	// Fields
	struct UAnimationAsset* NewAsset; // Offset: 0x00 // Size: 0x08
	struct FGuid ParentNodeGuid; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimGroupInfo {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 // Inherited bytes: 0x00
struct FAnimBlueprintDebugData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 // Inherited bytes: 0x00
struct FAnimationFrameSnapshot {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.StateMachineDebugData
// Size: 0xb0 // Inherited bytes: 0x00
struct FStateMachineDebugData {
	// Fields
	char pad_0x0[0xb0]; // Offset: 0x00 // Size: 0xb0
};

// Object Name: ScriptStruct Engine.AnimTrack
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimTrack {
	// Fields
	struct TArray<struct FAnimSegment> AnimSegments; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimSegment
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimSegment {
	// Fields
	struct UAnimSequenceBase* AnimReference; // Offset: 0x00 // Size: 0x08
	float StartPos; // Offset: 0x08 // Size: 0x04
	float AnimStartTime; // Offset: 0x0c // Size: 0x04
	float AnimEndTime; // Offset: 0x10 // Size: 0x04
	float AnimPlayRate; // Offset: 0x14 // Size: 0x04
	IntProperty LoopingCount; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 // Inherited bytes: 0x00
struct FRootMotionExtractionStep {
	// Fields
	struct UAnimSequence* AnimSequence; // Offset: 0x00 // Size: 0x08
	float StartPosition; // Offset: 0x08 // Size: 0x04
	float EndPosition; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.RawCurveTracks
// Size: 0x10 // Inherited bytes: 0x00
struct FRawCurveTracks {
	// Fields
	struct TArray<struct FFloatCurve> FloatCurves; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TransformCurve
// Size: 0x470 // Inherited bytes: 0x20
struct FTransformCurve : FAnimCurveBase {
	// Fields
	struct FVectorCurve TranslationCurve; // Offset: 0x20 // Size: 0x170
	struct FVectorCurve RotationCurve; // Offset: 0x190 // Size: 0x170
	struct FVectorCurve ScaleCurve; // Offset: 0x300 // Size: 0x170
};

// Object Name: ScriptStruct Engine.VectorCurve
// Size: 0x170 // Inherited bytes: 0x20
struct FVectorCurve : FAnimCurveBase {
	// Fields
	struct FRichCurve FloatCurves[0x3]; // Offset: 0x20 // Size: 0x150
};

// Object Name: ScriptStruct Engine.SlotEvaluationPose
// Size: 0x40 // Inherited bytes: 0x00
struct FSlotEvaluationPose {
	// Fields
	enum class EAdditiveAnimationType AdditiveType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Weight; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x38]; // Offset: 0x08 // Size: 0x38
};

// Object Name: ScriptStruct Engine.A2Pose
// Size: 0x10 // Inherited bytes: 0x00
struct FA2Pose {
	// Fields
	struct TArray<struct FTransform> Bones; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.A2CSPose
// Size: 0x28 // Inherited bytes: 0x10
struct FA2CSPose : FA2Pose {
	// Fields
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
	struct TArray<char> ComponentSpaceFlags; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ContainerObject
// Size: 0x18 // Inherited bytes: 0x00
struct FContainerObject {
	// Fields
	struct UAnimInstanceContainer* AnimInstanceContainer; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UAnimInstance*> FromInstance; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 // Inherited bytes: 0x00
struct FQueuedDrawDebugItem {
	// Fields
	enum class EDrawDebugItemType itemType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector StartLoc; // Offset: 0x04 // Size: 0x0c
	struct FVector EndLoc; // Offset: 0x10 // Size: 0x0c
	struct FVector Center; // Offset: 0x1c // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x28 // Size: 0x0c
	float Radius; // Offset: 0x34 // Size: 0x04
	float Size; // Offset: 0x38 // Size: 0x04
	IntProperty Segments; // Offset: 0x3c // Size: 0x04
	struct FColor Color; // Offset: 0x40 // Size: 0x04
	bool bPersistentLines; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	float LifeTime; // Offset: 0x48 // Size: 0x04
	float Thickness; // Offset: 0x4c // Size: 0x04
	StrProperty Message; // Offset: 0x50 // Size: 0x10
	struct FVector2D TextScale; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimLinkableElement {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UAnimMontage* LinkedMontage; // Offset: 0x08 // Size: 0x08
	IntProperty SlotIndex; // Offset: 0x10 // Size: 0x04
	IntProperty SegmentIndex; // Offset: 0x14 // Size: 0x04
	enum class EAnimLinkMethod LinkMethod; // Offset: 0x18 // Size: 0x01
	enum class EAnimLinkMethod CachedLinkMethod; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float SegmentBeginTime; // Offset: 0x1c // Size: 0x04
	float SegmentLength; // Offset: 0x20 // Size: 0x04
	float LinkValue; // Offset: 0x24 // Size: 0x04
	struct UAnimSequenceBase* LinkedSequence; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimMontageInstance
// Size: 0x1b0 // Inherited bytes: 0x00
struct FAnimMontageInstance {
	// Fields
	struct UAnimMontage* Montage; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x20]; // Offset: 0x08 // Size: 0x20
	bool bPlayIng; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float DefaultBlendTimeMultiplier; // Offset: 0x2c // Size: 0x04
	char pad_0x30[0xb8]; // Offset: 0x30 // Size: 0xb8
	struct TArray<IntProperty> NextSections; // Offset: 0xe8 // Size: 0x10
	struct TArray<IntProperty> PrevSections; // Offset: 0xf8 // Size: 0x10
	char pad_0x108[0x10]; // Offset: 0x108 // Size: 0x10
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // Offset: 0x118 // Size: 0x10
	float Position; // Offset: 0x128 // Size: 0x04
	float PlayRate; // Offset: 0x12c // Size: 0x04
	struct FAlphaBlend Blend; // Offset: 0x130 // Size: 0x38
	char pad_0x168[0x20]; // Offset: 0x168 // Size: 0x20
	IntProperty DisableRootMotionCount; // Offset: 0x188 // Size: 0x04
	char pad_0x18C[0x24]; // Offset: 0x18c // Size: 0x24
};

// Object Name: ScriptStruct Engine.AnimNotifyEvent
// Size: 0xa8 // Inherited bytes: 0x30
struct FAnimNotifyEvent : FAnimLinkableElement {
	// Fields
	float DisplayTime; // Offset: 0x30 // Size: 0x04
	float TriggerTimeOffset; // Offset: 0x34 // Size: 0x04
	float EndTriggerTimeOffset; // Offset: 0x38 // Size: 0x04
	float TriggerWeightThreshold; // Offset: 0x3c // Size: 0x04
	struct FName NotifyName; // Offset: 0x40 // Size: 0x08
	struct UAnimNotify* Notify; // Offset: 0x48 // Size: 0x08
	struct UAnimNotifyState* NotifyStateClass; // Offset: 0x50 // Size: 0x08
	float Duration; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct FAnimLinkableElement EndLink; // Offset: 0x60 // Size: 0x30
	bool bConvertedFromBranchingPoint; // Offset: 0x90 // Size: 0x01
	enum class EMontageNotifyTickType MontageTickType; // Offset: 0x91 // Size: 0x01
	char pad_0x92[0x2]; // Offset: 0x92 // Size: 0x02
	float NotifyTriggerChance; // Offset: 0x94 // Size: 0x04
	enum class ENotifyFilterType NotifyFilterType; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	IntProperty NotifyFilterLOD; // Offset: 0x9c // Size: 0x04
	bool bTriggerOnDedicatedServer; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	IntProperty TrackIndex; // Offset: 0xa4 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c // Inherited bytes: 0x00
struct FBranchingPointMarker {
	// Fields
	IntProperty NotifyIndex; // Offset: 0x00 // Size: 0x04
	float TriggerTime; // Offset: 0x04 // Size: 0x04
	enum class EAnimNotifyEventType NotifyEventType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Engine.BranchingPoint
// Size: 0x40 // Inherited bytes: 0x30
struct FBranchingPoint : FAnimLinkableElement {
	// Fields
	struct FName EventName; // Offset: 0x30 // Size: 0x08
	float DisplayTime; // Offset: 0x38 // Size: 0x04
	float TriggerTimeOffset; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 // Inherited bytes: 0x00
struct FSlotAnimationTrack {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	struct FAnimTrack AnimTrack; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CompositeSection
// Size: 0x58 // Inherited bytes: 0x30
struct FCompositeSection : FAnimLinkableElement {
	// Fields
	struct FName SectionName; // Offset: 0x30 // Size: 0x08
	float StartTime; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct FName NextSectionName; // Offset: 0x40 // Size: 0x08
	struct TArray<struct UAnimMetaData*> MetaData; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimNode_AnimInstanceContainer
// Size: 0x98 // Inherited bytes: 0x38
struct FAnimNode_AnimInstanceContainer : FAnimNode_Base {
	// Fields
	struct UAnimInstanceContainer* Container; // Offset: 0x38 // Size: 0x08
	struct TArray<struct FPoseLink> InputPoses; // Offset: 0x40 // Size: 0x10
	char pad_0x50[0x30]; // Offset: 0x50 // Size: 0x30
	struct UAnimInstance* ParentAnimInstance; // Offset: 0x80 // Size: 0x08
	struct UAnimInstance* CurrentAnimInstance; // Offset: 0x88 // Size: 0x08
	bool bResetChildOnActivation; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
};

// Object Name: ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x80 // Inherited bytes: 0x38
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	// Fields
	struct FPoseLink Base; // Offset: 0x38 // Size: 0x18
	struct FPoseLink Additive; // Offset: 0x50 // Size: 0x18
	float Alpha; // Offset: 0x68 // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x6c // Size: 0x08
	IntProperty LODThreshold; // Offset: 0x74 // Size: 0x04
	float ActualAlpha; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimNode_Inertialization
// Size: 0xa8 // Inherited bytes: 0x38
struct FAnimNode_Inertialization : FAnimNode_Base {
	// Fields
	struct FPoseLink Source; // Offset: 0x38 // Size: 0x18
	char pad_0x50[0x58]; // Offset: 0x50 // Size: 0x58
};

// Object Name: ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 // Inherited bytes: 0x00
struct FInertializationPoseDiff {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.InertializationCurveDiff
// Size: 0x08 // Inherited bytes: 0x00
struct FInertializationCurveDiff {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3c // Inherited bytes: 0x00
struct FInertializationBoneDiff {
	// Fields
	char pad_0x0[0x3c]; // Offset: 0x00 // Size: 0x3c
};

// Object Name: ScriptStruct Engine.InertializationPose
// Size: 0x90 // Inherited bytes: 0x00
struct FInertializationPose {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct Engine.AnimNode_InputPose
// Size: 0x78 // Inherited bytes: 0x38
struct FAnimNode_InputPose : FAnimNode_Base {
	// Fields
	struct FName InputPoseName; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x38]; // Offset: 0x40 // Size: 0x38
};

// Object Name: ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xc0 // Inherited bytes: 0x38
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	// Fields
	struct FPoseLink Pose; // Offset: 0x38 // Size: 0x18
	struct FName CachePoseName; // Offset: 0x50 // Size: 0x08
	float GlobalWeight; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x64]; // Offset: 0x5c // Size: 0x64
};

// Object Name: ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xd8 // Inherited bytes: 0x38
struct FAnimNode_StateMachine : FAnimNode_Base {
	// Fields
	IntProperty StateMachineIndexInClass; // Offset: 0x34 // Size: 0x04
	IntProperty MaxTransitionsPerFrame; // Offset: 0x38 // Size: 0x04
	bool bSkipFirstUpdateTransition; // Offset: 0x3c // Size: 0x01
	bool bReinitializeOnBecomingRelevant; // Offset: 0x3d // Size: 0x01
	char pad_0x42[0x6]; // Offset: 0x42 // Size: 0x06
	IntProperty CurrentState; // Offset: 0x48 // Size: 0x04
	float ElapsedTime; // Offset: 0x4c // Size: 0x04
	char pad_0x50[0x88]; // Offset: 0x50 // Size: 0x88
};

// Object Name: ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimationPotentialTransition {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xd0 // Inherited bytes: 0x00
struct FAnimationActiveTransitionEntry {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
	struct UBlendProfile* BlendProfile; // Offset: 0x90 // Size: 0x08
	char pad_0x98[0x38]; // Offset: 0x98 // Size: 0x38
};

// Object Name: ScriptStruct Engine.AnimNode_SubInput
// Size: 0x70 // Inherited bytes: 0x38
struct FAnimNode_SubInput : FAnimNode_Base {
	// Fields
	char pad_0x38[0x38]; // Offset: 0x38 // Size: 0x38
};

// Object Name: ScriptStruct Engine.AnimNode_SubInstance
// Size: 0xf8 // Inherited bytes: 0x38
struct FAnimNode_SubInstance : FAnimNode_Base {
	// Fields
	struct FPoseLink InPose; // Offset: 0x38 // Size: 0x18
	struct FName SubInstanceSlotName; // Offset: 0x50 // Size: 0x08
	struct UAnimInstance* InstanceClass; // Offset: 0x58 // Size: 0x08
	struct UAnimInstance* InstanceToRun; // Offset: 0x60 // Size: 0x08
	struct TArray<struct UProperty*> InstanceProperties; // Offset: 0x68 // Size: 0x10
	struct TArray<struct UProperty*> SubInstanceProperties; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FName> SourcePropertyNames; // Offset: 0x88 // Size: 0x10
	struct TArray<struct FName> DestPropertyNames; // Offset: 0x98 // Size: 0x10
	char pad_0xA8[0x30]; // Offset: 0xa8 // Size: 0x30
	bool bHasCacheOriginInstance; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x7]; // Offset: 0xd9 // Size: 0x07
	struct UAnimInstance* CacheOriginInstanceClass; // Offset: 0xe0 // Size: 0x08
	struct UAnimInstance* CacheOriginInstanceToRun; // Offset: 0xe8 // Size: 0x08
	char pad_0xF0[0x8]; // Offset: 0xf0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimNode_SubInstanceContainer
// Size: 0x110 // Inherited bytes: 0x38
struct FAnimNode_SubInstanceContainer : FAnimNode_Base {
	// Fields
	struct UAnimInstance* DefaultLinkedInstance; // Offset: 0x38 // Size: 0x08
	struct FName ContainerTag; // Offset: 0x40 // Size: 0x08
	struct FPoseLink SourcePose; // Offset: 0x48 // Size: 0x18
	struct TArray<struct FName> InputPoseNames; // Offset: 0x60 // Size: 0x10
	struct TArray<struct FPoseLink> InputPoses; // Offset: 0x70 // Size: 0x10
	bool bResetChildOnActivation; // Offset: 0x80 // Size: 0x01
	bool bRequestBlendOnInstanceChanged; // Offset: 0x81 // Size: 0x01
	char pad_0x82[0x2]; // Offset: 0x82 // Size: 0x02
	float BlendTime; // Offset: 0x84 // Size: 0x04
	struct UAnimInstanceContainer* Container; // Offset: 0x88 // Size: 0x08
	struct UAnimInstance* ParentAnimInstance; // Offset: 0x90 // Size: 0x08
	struct UAnimInstance* InstanceToRun; // Offset: 0x98 // Size: 0x08
	struct USkeletalMeshComponent* OwningSkeletalMesh; // Offset: 0xa0 // Size: 0x08
	struct TArray<struct UProperty*> InstanceProperties; // Offset: 0xa8 // Size: 0x10
	struct TArray<struct UProperty*> SubInstanceProperties; // Offset: 0xb8 // Size: 0x10
	struct TArray<struct FName> PropagatedPropertyNames; // Offset: 0xc8 // Size: 0x10
	char pad_0xD8[0x38]; // Offset: 0xd8 // Size: 0x38
};

// Object Name: ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x78 // Inherited bytes: 0x38
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	// Fields
	enum class EEvaluatorDataSource DataSource; // Offset: 0x32 // Size: 0x01
	enum class EEvaluatorMode EvaluatorMode; // Offset: 0x33 // Size: 0x01
	IntProperty FramesToCachePose; // Offset: 0x34 // Size: 0x04
	char pad_0x3E[0x32]; // Offset: 0x3e // Size: 0x32
	IntProperty CacheFramesRemaining; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x48 // Inherited bytes: 0x38
struct FAnimNode_TransitionResult : FAnimNode_Base {
	// Fields
	bool bCanEnterTransition; // Offset: 0x32 // Size: 0x01
	char pad_0x39[0xf]; // Offset: 0x39 // Size: 0x0f
};

// Object Name: ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x58 // Inherited bytes: 0x38
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	// Fields
	struct FPoseLink LinkToCachingNode; // Offset: 0x38 // Size: 0x18
	struct FName CachePoseName; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x50 // Inherited bytes: 0x38
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	// Fields
	struct FPoseLink LocalPose; // Offset: 0x38 // Size: 0x18
};

// Object Name: ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x50 // Inherited bytes: 0x38
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	// Fields
	struct FComponentSpacePoseLink ComponentPose; // Offset: 0x38 // Size: 0x18
};

// Object Name: ScriptStruct Engine.CompressedTrack
// Size: 0x38 // Inherited bytes: 0x00
struct FCompressedTrack {
	// Fields
	struct TArray<char> ByteStream; // Offset: 0x00 // Size: 0x10
	struct TArray<float> Times; // Offset: 0x10 // Size: 0x10
	float Mins[0x3]; // Offset: 0x20 // Size: 0x0c
	float Ranges[0x3]; // Offset: 0x2c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.CurveTrack
// Size: 0x18 // Inherited bytes: 0x00
struct FCurveTrack {
	// Fields
	struct FName CurveName; // Offset: 0x00 // Size: 0x08
	struct TArray<float> CurveWeights; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ScaleTrack
// Size: 0x20 // Inherited bytes: 0x00
struct FScaleTrack {
	// Fields
	struct TArray<struct FVector> ScaleKeys; // Offset: 0x00 // Size: 0x10
	struct TArray<float> Times; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RotationTrack
// Size: 0x20 // Inherited bytes: 0x00
struct FRotationTrack {
	// Fields
	struct TArray<struct FQuat> RotKeys; // Offset: 0x00 // Size: 0x10
	struct TArray<float> Times; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TranslationTrack
// Size: 0x20 // Inherited bytes: 0x00
struct FTranslationTrack {
	// Fields
	struct TArray<struct FVector> PosKeys; // Offset: 0x00 // Size: 0x10
	struct TArray<float> Times; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 // Inherited bytes: 0x00
struct FTrackToSkeletonMap {
	// Fields
	IntProperty BoneTreeIndex; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimSequenceTrackContainer {
	// Fields
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FName> TrackNames; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 // Inherited bytes: 0x00
struct FRawAnimSequenceTrack {
	// Fields
	struct TArray<struct FVector> PosKeys; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FQuat> RotKeys; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FVector> ScaleKeys; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimSetMeshLinkup {
	// Fields
	struct TArray<IntProperty> BoneToTrackTable; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x760 // Inherited bytes: 0x5d0
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy {
	// Fields
	char pad_0x5D0[0x190]; // Offset: 0x5d0 // Size: 0x190
};

// Object Name: ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x60 // Inherited bytes: 0x38
struct FAnimNode_SingleNode : FAnimNode_Base {
	// Fields
	struct FPoseLink SourcePose; // Offset: 0x38 // Size: 0x18
	char pad_0x50[0x10]; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 // Inherited bytes: 0x00
struct FBakedAnimationStateMachine {
	// Fields
	struct FName MachineName; // Offset: 0x00 // Size: 0x08
	IntProperty InitialState; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FBakedAnimationState> States; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimationStateBase
// Size: 0x08 // Inherited bytes: 0x00
struct FAnimationStateBase {
	// Fields
	struct FName StateName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 // Inherited bytes: 0x08
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	// Fields
	IntProperty PreviousState; // Offset: 0x08 // Size: 0x04
	IntProperty NextState; // Offset: 0x0c // Size: 0x04
	float CrossfadeDuration; // Offset: 0x10 // Size: 0x04
	IntProperty StartNotify; // Offset: 0x14 // Size: 0x04
	IntProperty EndNotify; // Offset: 0x18 // Size: 0x04
	IntProperty InterruptNotify; // Offset: 0x1c // Size: 0x04
	enum class EAlphaBlendOption BlendMode; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct UCurveFloat* CustomCurve; // Offset: 0x28 // Size: 0x08
	struct UBlendProfile* BlendProfile; // Offset: 0x30 // Size: 0x08
	enum class ETransitionLogicType LogicType; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Engine.BakedAnimationState
// Size: 0x48 // Inherited bytes: 0x00
struct FBakedAnimationState {
	// Fields
	struct FName StateName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FBakedStateExitTransition> Transitions; // Offset: 0x08 // Size: 0x10
	IntProperty StateRootNodeIndex; // Offset: 0x18 // Size: 0x04
	IntProperty StartNotify; // Offset: 0x1c // Size: 0x04
	IntProperty EndNotify; // Offset: 0x20 // Size: 0x04
	IntProperty FullyBlendedNotify; // Offset: 0x24 // Size: 0x04
	bool bIsAConduit; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty EntryRuleNodeIndex; // Offset: 0x2c // Size: 0x04
	struct TArray<IntProperty> PlayerNodeIndices; // Offset: 0x30 // Size: 0x10
	bool bAlwaysResetOnEntry; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 // Inherited bytes: 0x00
struct FBakedStateExitTransition {
	// Fields
	IntProperty CanTakeDelegateIndex; // Offset: 0x00 // Size: 0x04
	IntProperty CustomResultNodeIndex; // Offset: 0x04 // Size: 0x04
	IntProperty TransitionIndex; // Offset: 0x08 // Size: 0x04
	bool bDesiredTransitionReturnValue; // Offset: 0x0c // Size: 0x01
	bool bAutomaticRemainingTimeRule; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	struct TArray<IntProperty> PoseEvaluatorLinks; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimationState
// Size: 0x28 // Inherited bytes: 0x08
struct FAnimationState : FAnimationStateBase {
	// Fields
	struct TArray<struct FAnimationTransitionRule> Transitions; // Offset: 0x08 // Size: 0x10
	IntProperty StateRootNodeIndex; // Offset: 0x18 // Size: 0x04
	IntProperty StartNotify; // Offset: 0x1c // Size: 0x04
	IntProperty EndNotify; // Offset: 0x20 // Size: 0x04
	IntProperty FullyBlendedNotify; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimationTransitionRule {
	// Fields
	struct FName RuleToExecute; // Offset: 0x00 // Size: 0x08
	bool TransitionReturnVal; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty TransitionIndex; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.MarkerSyncData
// Size: 0x20 // Inherited bytes: 0x00
struct FMarkerSyncData {
	// Fields
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AnimSyncMarker
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimSyncMarker {
	// Fields
	struct FName MarkerName; // Offset: 0x00 // Size: 0x08
	float Time; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 // Inherited bytes: 0x00
struct FAnimNotifyTrack {
	// Fields
	struct FName TrackName; // Offset: 0x00 // Size: 0x08
	struct FLinearColor TrackColor; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x20]; // Offset: 0x18 // Size: 0x20
};

// Object Name: ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 // Inherited bytes: 0x00
struct FPerBoneBlendWeights {
	// Fields
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AssetImportInfo
// Size: 0x01 // Inherited bytes: 0x00
struct FAssetImportInfo {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x20 // Inherited bytes: 0x00
struct FPrimaryAssetRulesOverride {
	// Fields
	struct FPrimaryAssetId PrimaryAssetId; // Offset: 0x00 // Size: 0x10
	struct FPrimaryAssetRules Rules; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.PrimaryAssetRules
// Size: 0x10 // Inherited bytes: 0x00
struct FPrimaryAssetRules {
	// Fields
	IntProperty Priority; // Offset: 0x00 // Size: 0x04
	bool bApplyRecursively; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty ChunkId; // Offset: 0x08 // Size: 0x04
	enum class EPrimaryAssetCookRule CookRule; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 // Inherited bytes: 0x00
struct FAssetManagerRedirect {
	// Fields
	StrProperty Old; // Offset: 0x00 // Size: 0x10
	StrProperty New; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 // Inherited bytes: 0x00
struct FPrimaryAssetTypeInfo {
	// Fields
	struct FName PrimaryAssetType; // Offset: 0x00 // Size: 0x08
	struct UClass* AssetBaseClass; // Offset: 0x08 // Size: 0x28
	struct UObject* AssetBaseClassLoaded; // Offset: 0x30 // Size: 0x08
	bool bHasBlueprintClasses; // Offset: 0x38 // Size: 0x01
	bool bIsEditorOnly; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x6]; // Offset: 0x3a // Size: 0x06
	struct TArray<struct FDirectoryPath> Directories; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FSoftObjectPath> SpecificAssets; // Offset: 0x50 // Size: 0x10
	struct FPrimaryAssetRules Rules; // Offset: 0x60 // Size: 0x10
	struct TArray<StrProperty> AssetScanPaths; // Offset: 0x70 // Size: 0x10
	bool bIsDynamicAsset; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x3]; // Offset: 0x81 // Size: 0x03
	IntProperty NumberOfAssets; // Offset: 0x84 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AssetMapping
// Size: 0x10 // Inherited bytes: 0x00
struct FAssetMapping {
	// Fields
	struct UAnimationAsset* SourceAsset; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* TargetAsset; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2c // Inherited bytes: 0x00
struct FAtmospherePrecomputeParameters {
	// Fields
	float DensityHeight; // Offset: 0x00 // Size: 0x04
	float DecayHeight; // Offset: 0x04 // Size: 0x04
	IntProperty MaxScatteringOrder; // Offset: 0x08 // Size: 0x04
	IntProperty TransmittanceTexWidth; // Offset: 0x0c // Size: 0x04
	IntProperty TransmittanceTexHeight; // Offset: 0x10 // Size: 0x04
	IntProperty IrradianceTexWidth; // Offset: 0x14 // Size: 0x04
	IntProperty IrradianceTexHeight; // Offset: 0x18 // Size: 0x04
	IntProperty InscatterAltitudeSampleNum; // Offset: 0x1c // Size: 0x04
	IntProperty InscatterMuNum; // Offset: 0x20 // Size: 0x04
	IntProperty InscatterMuSNum; // Offset: 0x24 // Size: 0x04
	IntProperty InscatterNuNum; // Offset: 0x28 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xa8 // Inherited bytes: 0x00
struct FBaseAttenuationSettings {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	enum class EAttenuationDistanceModel DistanceAlgorithm; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FRuntimeFloatCurve CustomAttenuationCurve; // Offset: 0x10 // Size: 0x78
	enum class EAttenuationShape AttenuationShape; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float dBAttenuationAtMax; // Offset: 0x8c // Size: 0x04
	struct FVector AttenuationShapeExtents; // Offset: 0x90 // Size: 0x0c
	float ConeOffset; // Offset: 0x9c // Size: 0x04
	float FalloffDistance; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AudioComponentParam
// Size: 0x20 // Inherited bytes: 0x00
struct FAudioComponentParam {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	float FloatParam; // Offset: 0x08 // Size: 0x04
	bool BoolParam; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty IntParam; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct USoundWave* SoundWaveParam; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 // Inherited bytes: 0x00
struct FAudioQualitySettings {
	// Fields
	struct FText DisplayName; // Offset: 0x00 // Size: 0x18
	IntProperty MaxChannels; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.InteriorSettings
// Size: 0x24 // Inherited bytes: 0x00
struct FInteriorSettings {
	// Fields
	char bIsWorldSettings : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ExteriorVolume; // Offset: 0x04 // Size: 0x04
	float ExteriorTime; // Offset: 0x08 // Size: 0x04
	float ExteriorLPF; // Offset: 0x0c // Size: 0x04
	float ExteriorLPFTime; // Offset: 0x10 // Size: 0x04
	float InteriorVolume; // Offset: 0x14 // Size: 0x04
	float InteriorTime; // Offset: 0x18 // Size: 0x04
	float InteriorLPF; // Offset: 0x1c // Size: 0x04
	float InteriorLPFTime; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ReverbSettings
// Size: 0x18 // Inherited bytes: 0x00
struct FReverbSettings {
	// Fields
	char bApplyReverb : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	enum class ReverbPreset ReverbType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct UReverbEffect* ReverbEffect; // Offset: 0x08 // Size: 0x08
	float Volume; // Offset: 0x10 // Size: 0x04
	float FadeTime; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 // Inherited bytes: 0x00
struct FLaunchOnTestSettings {
	// Fields
	struct FFilePath LaunchOnTestmap; // Offset: 0x00 // Size: 0x10
	StrProperty DeviceID; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FilePath
// Size: 0x10 // Inherited bytes: 0x00
struct FFilePath {
	// Fields
	StrProperty FilePath; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 // Inherited bytes: 0x00
struct FEditorMapPerformanceTestDefinition {
	// Fields
	struct FSoftObjectPath PerformanceTestmap; // Offset: 0x00 // Size: 0x18
	IntProperty TestTimer; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 // Inherited bytes: 0x00
struct FBuildPromotionTestSettings {
	// Fields
	struct FFilePath DefaultStaticMeshAsset; // Offset: 0x00 // Size: 0x10
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // Offset: 0x10 // Size: 0x150
	struct FBuildPromotionOpenAssetSettings OpenAssets; // Offset: 0x160 // Size: 0x60
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // Offset: 0x1c0 // Size: 0x20
	struct FFilePath SourceControlMaterial; // Offset: 0x1e0 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 // Inherited bytes: 0x00
struct FBuildPromotionNewProjectSettings {
	// Fields
	struct FDirectoryPath NewProjectFolderOverride; // Offset: 0x00 // Size: 0x10
	StrProperty NewProjectNameOverride; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 // Inherited bytes: 0x00
struct FBuildPromotionOpenAssetSettings {
	// Fields
	struct FFilePath BlueprintAsset; // Offset: 0x00 // Size: 0x10
	struct FFilePath MaterialAsset; // Offset: 0x10 // Size: 0x10
	struct FFilePath ParticleSystemAsset; // Offset: 0x20 // Size: 0x10
	struct FFilePath SkeletalMeshAsset; // Offset: 0x30 // Size: 0x10
	struct FFilePath StaticMeshAsset; // Offset: 0x40 // Size: 0x10
	struct FFilePath TextureAsset; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 // Inherited bytes: 0x00
struct FBuildPromotionImportWorkflowSettings {
	// Fields
	struct FEditorImportWorkflowDefinition Diffuse; // Offset: 0x00 // Size: 0x20
	struct FEditorImportWorkflowDefinition Normal; // Offset: 0x20 // Size: 0x20
	struct FEditorImportWorkflowDefinition StaticMesh; // Offset: 0x40 // Size: 0x20
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // Offset: 0x60 // Size: 0x20
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // Offset: 0x80 // Size: 0x20
	struct FEditorImportWorkflowDefinition MorphMesh; // Offset: 0xa0 // Size: 0x20
	struct FEditorImportWorkflowDefinition SkeletalMesh; // Offset: 0xc0 // Size: 0x20
	struct FEditorImportWorkflowDefinition Animation; // Offset: 0xe0 // Size: 0x20
	struct FEditorImportWorkflowDefinition Sound; // Offset: 0x100 // Size: 0x20
	struct FEditorImportWorkflowDefinition SurroundSound; // Offset: 0x120 // Size: 0x20
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // Offset: 0x140 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 // Inherited bytes: 0x00
struct FEditorImportWorkflowDefinition {
	// Fields
	struct FFilePath ImportFilePath; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 // Inherited bytes: 0x00
struct FImportFactorySettingValues {
	// Fields
	StrProperty SettingName; // Offset: 0x00 // Size: 0x10
	StrProperty Value; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 // Inherited bytes: 0x00
struct FBlueprintEditorPromotionSettings {
	// Fields
	struct FFilePath FirstMeshPath; // Offset: 0x00 // Size: 0x10
	struct FFilePath SecondMeshPath; // Offset: 0x10 // Size: 0x10
	struct FFilePath DefaultParticleAsset; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleEditorPromotionSettings {
	// Fields
	struct FFilePath DefaultParticleAsset; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 // Inherited bytes: 0x00
struct FMaterialEditorPromotionSettings {
	// Fields
	struct FFilePath DefaultMaterialAsset; // Offset: 0x00 // Size: 0x10
	struct FFilePath DefaultDiffuseTexture; // Offset: 0x10 // Size: 0x10
	struct FFilePath DefaultNormalTexture; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 // Inherited bytes: 0x00
struct FEditorImportExportTestDefinition {
	// Fields
	struct FFilePath ImportFilePath; // Offset: 0x00 // Size: 0x10
	StrProperty ExportFileExtension; // Offset: 0x10 // Size: 0x10
	bool bSkipExport; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 // Inherited bytes: 0x00
struct FExternalToolDefinition {
	// Fields
	StrProperty ToolName; // Offset: 0x00 // Size: 0x10
	struct FFilePath ExecutablePath; // Offset: 0x10 // Size: 0x10
	StrProperty CommandLineOptions; // Offset: 0x20 // Size: 0x10
	struct FDirectoryPath WorkingDirectory; // Offset: 0x30 // Size: 0x10
	StrProperty ScriptExtension; // Offset: 0x40 // Size: 0x10
	struct FDirectoryPath ScriptDirectory; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NavAvoidanceData
// Size: 0x3c // Inherited bytes: 0x00
struct FNavAvoidanceData {
	// Fields
	char pad_0x0[0x3c]; // Offset: 0x00 // Size: 0x3c
};

// Object Name: ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x20 // Inherited bytes: 0x00
struct FBlendProfileBoneEntry {
	// Fields
	struct FBoneReference BoneReference; // Offset: 0x00 // Size: 0x18
	float BlendScale; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.PerBoneInterpolation
// Size: 0x20 // Inherited bytes: 0x00
struct FPerBoneInterpolation {
	// Fields
	struct FBoneReference BoneReference; // Offset: 0x00 // Size: 0x18
	float InterpolationSpeedPerSec; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.GridBlendSample
// Size: 0x1c // Inherited bytes: 0x00
struct FGridBlendSample {
	// Fields
	struct FEditorElement GridElement; // Offset: 0x00 // Size: 0x18
	float BlendWeight; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Engine.EditorElement
// Size: 0x18 // Inherited bytes: 0x00
struct FEditorElement {
	// Fields
	IntProperty Indices[0x3]; // Offset: 0x00 // Size: 0x0c
	float Weights[0x3]; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.BlendSample
// Size: 0x18 // Inherited bytes: 0x00
struct FBlendSample {
	// Fields
	struct UAnimSequence* Animation; // Offset: 0x00 // Size: 0x08
	struct FVector SampleValue; // Offset: 0x08 // Size: 0x0c
	float RateScale; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BlendParameter
// Size: 0x20 // Inherited bytes: 0x00
struct FBlendParameter {
	// Fields
	StrProperty DisplayName; // Offset: 0x00 // Size: 0x10
	float Min; // Offset: 0x10 // Size: 0x04
	float Max; // Offset: 0x14 // Size: 0x04
	IntProperty GridNum; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.InterpolationParameter
// Size: 0x08 // Inherited bytes: 0x00
struct FInterpolationParameter {
	// Fields
	float InterpolationTime; // Offset: 0x00 // Size: 0x04
	enum class EFilterInterpolationType InterpolationType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Engine.EditedDocumentInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FEditedDocumentInfo {
	// Fields
	struct UObject* EditedObject; // Offset: 0x00 // Size: 0x08
	struct FVector2D SavedViewOffset; // Offset: 0x08 // Size: 0x08
	float SavedZoomAmount; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 // Inherited bytes: 0x00
struct FBPInterfaceDescription {
	// Fields
	struct UInterface* Interface; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UEdGraph*> Graphs; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BPVariableDescription
// Size: 0xf8 // Inherited bytes: 0x00
struct FBPVariableDescription {
	// Fields
	struct FName VarName; // Offset: 0x00 // Size: 0x08
	struct FGuid VarGuid; // Offset: 0x08 // Size: 0x10
	struct FEdGraphPinType VarType; // Offset: 0x18 // Size: 0x80
	StrProperty FriendlyName; // Offset: 0x98 // Size: 0x10
	struct FText Category; // Offset: 0xa8 // Size: 0x18
	uint64 PropertyFlags; // Offset: 0xc0 // Size: 0x08
	struct FName RepNotifyFunc; // Offset: 0xc8 // Size: 0x08
	enum class ELifetimeCondition ReplicationCondition; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // Offset: 0xd8 // Size: 0x10
	StrProperty DefaultValue; // Offset: 0xe8 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 // Inherited bytes: 0x00
struct FBPVariableMetaDataEntry {
	// Fields
	struct FName DataKey; // Offset: 0x00 // Size: 0x08
	StrProperty DataValue; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EdGraphPinType
// Size: 0x80 // Inherited bytes: 0x00
struct FEdGraphPinType {
	// Fields
	StrProperty PinCategory; // Offset: 0x00 // Size: 0x10
	StrProperty PinSubCategory; // Offset: 0x10 // Size: 0x10
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // Offset: 0x20 // Size: 0x08
	struct FSimpleMemberReference PinSubCategoryMemberReference; // Offset: 0x28 // Size: 0x20
	struct FEdGraphTerminalType PinValueType; // Offset: 0x48 // Size: 0x30
	enum class EPinContainerType ContainerType; // Offset: 0x78 // Size: 0x01
	char bIsArray : 1; // Offset: 0x79 // Size: 0x01
	char bIsReference : 1; // Offset: 0x79 // Size: 0x01
	char bIsConst : 1; // Offset: 0x79 // Size: 0x01
	char bIsWeakPointer : 1; // Offset: 0x79 // Size: 0x01
	char pad_0x79_4 : 4; // Offset: 0x79 // Size: 0x01
	char pad_0x7A[0x6]; // Offset: 0x7a // Size: 0x06
};

// Object Name: ScriptStruct Engine.EdGraphTerminalType
// Size: 0x30 // Inherited bytes: 0x00
struct FEdGraphTerminalType {
	// Fields
	StrProperty TerminalCategory; // Offset: 0x00 // Size: 0x10
	StrProperty TerminalSubCategory; // Offset: 0x10 // Size: 0x10
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // Offset: 0x20 // Size: 0x08
	bool bTerminalIsConst; // Offset: 0x28 // Size: 0x01
	bool bTerminalIsWeakPointer; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x01 // Inherited bytes: 0x00
struct FBlueprintMacroCosmeticInfo {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 // Inherited bytes: 0x00
struct FCompilerNativizationOptions {
	// Fields
	struct FName PlatformName; // Offset: 0x00 // Size: 0x08
	bool ServerOnlyPlatform; // Offset: 0x08 // Size: 0x01
	bool ClientOnlyPlatform; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct TArray<struct FName> ExcludedModules; // Offset: 0x10 // Size: 0x10
	SetProperty ExcludedAssets; // Offset: 0x20 // Size: 0x50
	struct TArray<StrProperty> ExcludedFolderPaths; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x50 // Inherited bytes: 0x00
struct FBlueprintCookedComponentInstancingData {
	// Fields
	bool bIsValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x38]; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FBlueprintComponentChangedPropertyInfo {
	// Fields
	struct FName PropertyName; // Offset: 0x00 // Size: 0x08
	IntProperty ArrayIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UStruct* PropertyScope; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 // Inherited bytes: 0x00
struct FEventGraphFastCallPair {
	// Fields
	struct UFunction* FunctionToPatch; // Offset: 0x00 // Size: 0x08
	IntProperty EventGraphCallOffset; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 // Inherited bytes: 0x00
struct FBlueprintDebugData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 // Inherited bytes: 0x00
struct FPointerToUberGraphFrame {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x1e0 // Inherited bytes: 0x00
struct FDebuggingInfoForSingleFunction {
	// Fields
	char pad_0x0[0x1e0]; // Offset: 0x00 // Size: 0x1e0
};

// Object Name: ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 // Inherited bytes: 0x00
struct FNodeToCodeAssociation {
	// Fields
	char pad_0x0[0x14]; // Offset: 0x00 // Size: 0x14
};

// Object Name: ScriptStruct Engine.GeomSelection
// Size: 0x0c // Inherited bytes: 0x00
struct FGeomSelection {
	// Fields
	IntProperty Type; // Offset: 0x00 // Size: 0x04
	IntProperty Index; // Offset: 0x04 // Size: 0x04
	IntProperty SelectionIndex; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BuilderPoly
// Size: 0x28 // Inherited bytes: 0x00
struct FBuilderPoly {
	// Fields
	struct TArray<IntProperty> VertexIndices; // Offset: 0x00 // Size: 0x10
	IntProperty Direction; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FName ItemName; // Offset: 0x18 // Size: 0x08
	IntProperty PolyFlags; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x28 // Inherited bytes: 0x00
struct FCachedAnimTransitionData {
	// Fields
	struct FName StateMachineName; // Offset: 0x00 // Size: 0x08
	struct FName FromStateName; // Offset: 0x08 // Size: 0x08
	struct FName ToStateName; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x20 // Inherited bytes: 0x00
struct FCachedAnimRelevancyData {
	// Fields
	struct FName StateMachineName; // Offset: 0x00 // Size: 0x08
	struct FName StateName; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 // Inherited bytes: 0x00
struct FCachedAnimAssetPlayerData {
	// Fields
	struct FName StateMachineName; // Offset: 0x00 // Size: 0x08
	struct FName StateName; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 // Inherited bytes: 0x00
struct FCachedAnimStateArray {
	// Fields
	struct TArray<struct FCachedAnimStateData> States; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CachedAnimStateData
// Size: 0x20 // Inherited bytes: 0x00
struct FCachedAnimStateData {
	// Fields
	struct FName StateMachineName; // Offset: 0x00 // Size: 0x08
	struct FName StateName; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FActiveCameraShakeInfo {
	// Fields
	struct UCameraShake* ShakeInstance; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 // Inherited bytes: 0x00
struct FPooledCameraShakes {
	// Fields
	struct TArray<struct UCameraShake*> PooledShakes; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.VOscillator
// Size: 0x24 // Inherited bytes: 0x00
struct FVOscillator {
	// Fields
	struct FFOscillator X; // Offset: 0x00 // Size: 0x0c
	struct FFOscillator Y; // Offset: 0x0c // Size: 0x0c
	struct FFOscillator Z; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.FOscillator
// Size: 0x0c // Inherited bytes: 0x00
struct FFOscillator {
	// Fields
	float Amplitude; // Offset: 0x00 // Size: 0x04
	float Frequency; // Offset: 0x04 // Size: 0x04
	enum class EInitialOscillatorOffset InitialOffset; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ROscillator
// Size: 0x24 // Inherited bytes: 0x00
struct FROscillator {
	// Fields
	struct FFOscillator Pitch; // Offset: 0x00 // Size: 0x0c
	struct FFOscillator Yaw; // Offset: 0x0c // Size: 0x0c
	struct FFOscillator Roll; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 // Inherited bytes: 0x00
struct FDummySpacerCameraTypes {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.CanvasIcon
// Size: 0x18 // Inherited bytes: 0x00
struct FCanvasIcon {
	// Fields
	struct UTexture* Texture; // Offset: 0x00 // Size: 0x08
	float U; // Offset: 0x08 // Size: 0x04
	float V; // Offset: 0x0c // Size: 0x04
	float UL; // Offset: 0x10 // Size: 0x04
	float VL; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.WrappedStringElement
// Size: 0x18 // Inherited bytes: 0x00
struct FWrappedStringElement {
	// Fields
	StrProperty Value; // Offset: 0x00 // Size: 0x10
	struct FVector2D LineExtent; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TextSizingParameters
// Size: 0x28 // Inherited bytes: 0x00
struct FTextSizingParameters {
	// Fields
	float DrawX; // Offset: 0x00 // Size: 0x04
	float DrawY; // Offset: 0x04 // Size: 0x04
	float DrawXL; // Offset: 0x08 // Size: 0x04
	float DrawYL; // Offset: 0x0c // Size: 0x04
	struct FVector2D Scaling; // Offset: 0x10 // Size: 0x08
	struct UFont* DrawFont; // Offset: 0x18 // Size: 0x08
	struct FVector2D SpacingAdjust; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ExternalPositionChange
// Size: 0x10 // Inherited bytes: 0x00
struct FExternalPositionChange {
	// Fields
	bool bHasExternalChange; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector DeltaLocation; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CustomShapeUsageSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FCustomShapeUsageSetup {
	// Fields
	enum class EShapeUsage ShapeUsage; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName Name; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CustomProfile
// Size: 0x18 // Inherited bytes: 0x00
struct FCustomProfile {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FResponseChannel> CustomResponses; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CustomChannelSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FCustomChannelSetup {
	// Fields
	enum class ECollisionChannel Channel; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName Name; // Offset: 0x08 // Size: 0x08
	enum class ECollisionResponse DefaultResponse; // Offset: 0x10 // Size: 0x01
	bool bTraceType; // Offset: 0x11 // Size: 0x01
	bool bStaticObject; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
};

// Object Name: ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x60 // Inherited bytes: 0x00
struct FCollisionResponseTemplate {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	enum class ECollisionEnabled CollisionEnabled; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FName ObjectTypeName; // Offset: 0x10 // Size: 0x08
	struct TArray<struct FResponseChannel> CustomResponses; // Offset: 0x18 // Size: 0x10
	StrProperty HelpMessage; // Offset: 0x28 // Size: 0x10
	bool bCanModify; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x27]; // Offset: 0x39 // Size: 0x27
};

// Object Name: ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 // Inherited bytes: 0x00
struct FBlueprintComponentDelegateBinding {
	// Fields
	struct FName ComponentPropertyName; // Offset: 0x00 // Size: 0x08
	struct FName DelegatePropertyName; // Offset: 0x08 // Size: 0x08
	struct FName FunctionNameToBind; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FMeshUVChannelInfo {
	// Fields
	bool bInitialized; // Offset: 0x00 // Size: 0x01
	bool bOverrideDensities; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float LocalUVDensities[0x4]; // Offset: 0x04 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 // Inherited bytes: 0x00
struct FAutoCompleteNode {
	// Fields
	IntProperty IndexChar; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> AutoCompleteListIndices; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4c // Inherited bytes: 0x00
struct FAngularDriveConstraint {
	// Fields
	struct FConstraintDrive TwistDrive; // Offset: 0x00 // Size: 0x10
	struct FConstraintDrive SwingDrive; // Offset: 0x10 // Size: 0x10
	struct FConstraintDrive SlerpDrive; // Offset: 0x20 // Size: 0x10
	struct FRotator OrientationTarget; // Offset: 0x30 // Size: 0x0c
	struct FVector AngularVelocityTarget; // Offset: 0x3c // Size: 0x0c
	enum class EAngularDriveMode AngularDriveMode; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ConstraintDrive
// Size: 0x10 // Inherited bytes: 0x00
struct FConstraintDrive {
	// Fields
	float Stiffness; // Offset: 0x00 // Size: 0x04
	float Damping; // Offset: 0x04 // Size: 0x04
	float MaxForce; // Offset: 0x08 // Size: 0x04
	char bEnablePositionDrive : 1; // Offset: 0x0c // Size: 0x01
	char bEnableVelocityDrive : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_2 : 6; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4c // Inherited bytes: 0x00
struct FLinearDriveConstraint {
	// Fields
	struct FVector PositionTarget; // Offset: 0x00 // Size: 0x0c
	struct FVector VelocityTarget; // Offset: 0x0c // Size: 0x0c
	struct FConstraintDrive XDrive; // Offset: 0x18 // Size: 0x10
	struct FConstraintDrive YDrive; // Offset: 0x28 // Size: 0x10
	struct FConstraintDrive ZDrive; // Offset: 0x38 // Size: 0x10
	char bEnablePositionDrive : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_1 : 7; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ConstraintInstance
// Size: 0x1b8 // Inherited bytes: 0x00
struct FConstraintInstance {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
	struct FName JointName; // Offset: 0x18 // Size: 0x08
	struct FName ConstraintBone1; // Offset: 0x20 // Size: 0x08
	struct FName ConstraintBone2; // Offset: 0x28 // Size: 0x08
	struct FVector Pos1; // Offset: 0x30 // Size: 0x0c
	struct FVector PriAxis1; // Offset: 0x3c // Size: 0x0c
	struct FVector SecAxis1; // Offset: 0x48 // Size: 0x0c
	struct FVector Pos2; // Offset: 0x54 // Size: 0x0c
	struct FVector PriAxis2; // Offset: 0x60 // Size: 0x0c
	struct FVector SecAxis2; // Offset: 0x6c // Size: 0x0c
	struct FRotator AngularRotationOffset; // Offset: 0x78 // Size: 0x0c
	char bScaleLinearLimits : 1; // Offset: 0x84 // Size: 0x01
	char pad_0x84_1 : 7; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x7]; // Offset: 0x85 // Size: 0x07
	struct FConstraintProfileProperties ProfileInstance; // Offset: 0x8c // Size: 0x104
	char pad_0x190[0x28]; // Offset: 0x190 // Size: 0x28
};

// Object Name: ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x104 // Inherited bytes: 0x00
struct FConstraintProfileProperties {
	// Fields
	float ProjectionLinearTolerance; // Offset: 0x00 // Size: 0x04
	float ProjectionAngularTolerance; // Offset: 0x04 // Size: 0x04
	float LinearBreakThreshold; // Offset: 0x08 // Size: 0x04
	float AngularBreakThreshold; // Offset: 0x0c // Size: 0x04
	struct FLinearConstraint LinearLimit; // Offset: 0x10 // Size: 0x1c
	struct FConeConstraint ConeLimit; // Offset: 0x2c // Size: 0x20
	struct FTwistConstraint TwistLimit; // Offset: 0x4c // Size: 0x1c
	struct FLinearDriveConstraint LinearDrive; // Offset: 0x68 // Size: 0x4c
	struct FAngularDriveConstraint AngularDrive; // Offset: 0xb4 // Size: 0x4c
	char bDisableCollision : 1; // Offset: 0x100 // Size: 0x01
	char bParentDominates : 1; // Offset: 0x100 // Size: 0x01
	char bEnableProjection : 1; // Offset: 0x100 // Size: 0x01
	char bAngularBreakable : 1; // Offset: 0x100 // Size: 0x01
	char bLinearBreakable : 1; // Offset: 0x100 // Size: 0x01
	char pad_0x100_5 : 3; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 // Inherited bytes: 0x00
struct FConstraintBaseParams {
	// Fields
	float Stiffness; // Offset: 0x00 // Size: 0x04
	float Damping; // Offset: 0x04 // Size: 0x04
	float Restitution; // Offset: 0x08 // Size: 0x04
	float ContactDistance; // Offset: 0x0c // Size: 0x04
	char bSoftConstraint : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_1 : 7; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct Engine.TwistConstraint
// Size: 0x1c // Inherited bytes: 0x14
struct FTwistConstraint : FConstraintBaseParams {
	// Fields
	float TwistLimitDegrees; // Offset: 0x14 // Size: 0x04
	enum class EAngularConstraintMotion TwistMotion; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ConeConstraint
// Size: 0x20 // Inherited bytes: 0x14
struct FConeConstraint : FConstraintBaseParams {
	// Fields
	float Swing1LimitDegrees; // Offset: 0x14 // Size: 0x04
	float Swing2LimitDegrees; // Offset: 0x18 // Size: 0x04
	enum class EAngularConstraintMotion Swing1Motion; // Offset: 0x1c // Size: 0x01
	enum class EAngularConstraintMotion Swing2Motion; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
};

// Object Name: ScriptStruct Engine.LinearConstraint
// Size: 0x1c // Inherited bytes: 0x14
struct FLinearConstraint : FConstraintBaseParams {
	// Fields
	float Limit; // Offset: 0x14 // Size: 0x04
	enum class ELinearConstraintMotion XMotion; // Offset: 0x18 // Size: 0x01
	enum class ELinearConstraintMotion YMotion; // Offset: 0x19 // Size: 0x01
	enum class ELinearConstraintMotion ZMotion; // Offset: 0x1a // Size: 0x01
	char pad_0x1B[0x1]; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 // Inherited bytes: 0x00
struct FCullDistanceSizePair {
	// Fields
	float Size; // Offset: 0x00 // Size: 0x04
	float CullDistance; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1c8 // Inherited bytes: 0x00
struct FRuntimeCurveLinearColor {
	// Fields
	struct FRichCurve ColorCurves[0x4]; // Offset: 0x00 // Size: 0x1c0
	struct UCurveLinearColor* ExternalCurve; // Offset: 0x1c0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NamedCurveValue
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedCurveValue {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	float Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 // Inherited bytes: 0x00
struct FDataTableCategoryHandle {
	// Fields
	struct UDataTable* DataTable; // Offset: 0x00 // Size: 0x08
	struct FName ColumnName; // Offset: 0x08 // Size: 0x08
	struct FName RowContents; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 // Inherited bytes: 0x00
struct FDataTableRowHandle {
	// Fields
	struct UDataTable* DataTable; // Offset: 0x00 // Size: 0x08
	struct FName RowName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 // Inherited bytes: 0x00
struct FDebugDisplayProperty {
	// Fields
	struct UObject* Obj; // Offset: 0x00 // Size: 0x08
	struct UObject* WithinClass; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.DebugTextInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FDebugTextInfo {
	// Fields
	struct AActor* SrcActor; // Offset: 0x00 // Size: 0x08
	struct FVector SrcActorOffset; // Offset: 0x08 // Size: 0x0c
	struct FVector SrcActorDesiredOffset; // Offset: 0x14 // Size: 0x0c
	StrProperty DebugText; // Offset: 0x20 // Size: 0x10
	float TimeRemaining; // Offset: 0x30 // Size: 0x04
	float Duration; // Offset: 0x34 // Size: 0x04
	struct FColor TextColor; // Offset: 0x38 // Size: 0x04
	char bAbsoluteLocation : 1; // Offset: 0x3c // Size: 0x01
	char bKeepAttachedToActor : 1; // Offset: 0x3c // Size: 0x01
	char bDrawShadow : 1; // Offset: 0x3c // Size: 0x01
	char pad_0x3C_3 : 5; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct FVector OrigActorLocation; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct UFont* Font; // Offset: 0x50 // Size: 0x08
	float FontScale; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct Engine.DelayObserveCheckPoint
// Size: 0x18 // Inherited bytes: 0x00
struct FDelayObserveCheckPoint {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FRollbackNetStartupActorInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Archetype; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x28]; // Offset: 0x10 // Size: 0x28
	struct ULevel* Level; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 // Inherited bytes: 0x00
struct FLevelNameAndTime {
	// Fields
	StrProperty LevelName; // Offset: 0x00 // Size: 0x10
	uint32_t LevelChangeTimeInMS; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.TextureGroupBiasOption
// Size: 0x08 // Inherited bytes: 0x00
struct FTextureGroupBiasOption {
	// Fields
	IntProperty GroupID; // Offset: 0x00 // Size: 0x04
	bool SkipResetLodBais; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 // Inherited bytes: 0x00
struct FDialogueWaveParameter {
	// Fields
	struct UDialogueWave* DialogueWave; // Offset: 0x00 // Size: 0x08
	struct FDialogueContext Context; // Offset: 0x08 // Size: 0x18
};

// Object Name: ScriptStruct Engine.DialogueContext
// Size: 0x18 // Inherited bytes: 0x00
struct FDialogueContext {
	// Fields
	struct UDialogueVoice* Speaker; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UDialogueVoice*> Targets; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 // Inherited bytes: 0x00
struct FDialogueContextMapping {
	// Fields
	struct FDialogueContext Context; // Offset: 0x00 // Size: 0x18
	struct USoundWave* SoundWave; // Offset: 0x18 // Size: 0x08
	StrProperty LocalizationKeyFormat; // Offset: 0x20 // Size: 0x10
	struct UDialogueSoundWaveProxy* Proxy; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DSPVSParameter
// Size: 0x20 // Inherited bytes: 0x00
struct FDSPVSParameter {
	// Fields
	char bUsePrecomputedVolume : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty DSVisibilityCellSize; // Offset: 0x04 // Size: 0x04
	enum class EDSPVSConfigCategory DSVisibilityAggressiveness; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct TArray<IntProperty> DSDebugGroups; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.GraphReference
// Size: 0x20 // Inherited bytes: 0x00
struct FGraphReference {
	// Fields
	struct UEdGraph* MacroGraph; // Offset: 0x00 // Size: 0x08
	struct UBlueprint* GraphBlueprint; // Offset: 0x08 // Size: 0x08
	struct FGuid GraphGuid; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 // Inherited bytes: 0x00
struct FEdGraphPinReference {
	// Fields
	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // Offset: 0x00 // Size: 0x08
	struct FGuid PinId; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 // Inherited bytes: 0x00
struct FEdGraphSchemaAction {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FText MenuDescription; // Offset: 0x08 // Size: 0x18
	struct FText TooltipDescription; // Offset: 0x20 // Size: 0x18
	struct FText Category; // Offset: 0x38 // Size: 0x18
	struct FText Keywords; // Offset: 0x50 // Size: 0x18
	IntProperty Grouping; // Offset: 0x68 // Size: 0x04
	IntProperty SectionID; // Offset: 0x6c // Size: 0x04
	struct TArray<StrProperty> MenuDescriptionArray; // Offset: 0x70 // Size: 0x10
	struct TArray<StrProperty> FullSearchTitlesArray; // Offset: 0x80 // Size: 0x10
	struct TArray<StrProperty> FullSearchKeywordsArray; // Offset: 0x90 // Size: 0x10
	struct TArray<StrProperty> FullSearchCategoryArray; // Offset: 0xa0 // Size: 0x10
	struct TArray<StrProperty> LocalizedMenuDescriptionArray; // Offset: 0xb0 // Size: 0x10
	struct TArray<StrProperty> LocalizedFullSearchTitlesArray; // Offset: 0xc0 // Size: 0x10
	struct TArray<StrProperty> LocalizedFullSearchKeywordsArray; // Offset: 0xd0 // Size: 0x10
	struct TArray<StrProperty> LocalizedFullSearchCategoryArray; // Offset: 0xe0 // Size: 0x10
	StrProperty SearchText; // Offset: 0xf0 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 // Inherited bytes: 0x100
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	// Fields
	struct UEdGraphNode* NodeTemplate; // Offset: 0x100 // Size: 0x08
};

// Object Name: ScriptStruct Engine.PluginRedirect
// Size: 0x20 // Inherited bytes: 0x00
struct FPluginRedirect {
	// Fields
	StrProperty OldPluginName; // Offset: 0x00 // Size: 0x10
	StrProperty NewPluginName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.StructRedirect
// Size: 0x10 // Inherited bytes: 0x00
struct FStructRedirect {
	// Fields
	struct FName OldStructName; // Offset: 0x00 // Size: 0x08
	struct FName NewStructName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ClassRedirect
// Size: 0x40 // Inherited bytes: 0x00
struct FClassRedirect {
	// Fields
	struct FName ObjectName; // Offset: 0x00 // Size: 0x08
	struct FName OldClassName; // Offset: 0x08 // Size: 0x08
	struct FName NewClassName; // Offset: 0x10 // Size: 0x08
	struct FName OldSubobjName; // Offset: 0x18 // Size: 0x08
	struct FName NewSubobjName; // Offset: 0x20 // Size: 0x08
	struct FName NewClassClass; // Offset: 0x28 // Size: 0x08
	struct FName NewClassPackage; // Offset: 0x30 // Size: 0x08
	bool InstanceOnly; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Engine.GameNameRedirect
// Size: 0x10 // Inherited bytes: 0x00
struct FGameNameRedirect {
	// Fields
	struct FName OldGameName; // Offset: 0x00 // Size: 0x08
	struct FName NewGameName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ScreenMessageString
// Size: 0x30 // Inherited bytes: 0x00
struct FScreenMessageString {
	// Fields
	uint64 Key; // Offset: 0x00 // Size: 0x08
	StrProperty ScreenMessage; // Offset: 0x08 // Size: 0x10
	struct FColor DisplayColor; // Offset: 0x18 // Size: 0x04
	float TimeToDisplay; // Offset: 0x1c // Size: 0x04
	float CurrentTimeDisplayed; // Offset: 0x20 // Size: 0x04
	struct FVector2D TextScale; // Offset: 0x24 // Size: 0x08
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Engine.DropNoteInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FDropNoteInfo {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	StrProperty Comment; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.StatColorMapping
// Size: 0x28 // Inherited bytes: 0x00
struct FStatColorMapping {
	// Fields
	StrProperty StatName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FStatColorMapEntry> colorMap; // Offset: 0x10 // Size: 0x10
	char DisableBlend : 1; // Offset: 0x20 // Size: 0x01
	char pad_0x20_1 : 7; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 // Inherited bytes: 0x00
struct FStatColorMapEntry {
	// Fields
	float In; // Offset: 0x00 // Size: 0x04
	struct FColor Out; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.WorldContext
// Size: 0x2a8 // Inherited bytes: 0x00
struct FWorldContext {
	// Fields
	char pad_0x0[0xe8]; // Offset: 0x00 // Size: 0xe8
	struct FURL LastURL; // Offset: 0xe8 // Size: 0x70
	struct FURL LastRemoteURL; // Offset: 0x158 // Size: 0x70
	struct UPendingNetGame* PendingNetGame; // Offset: 0x1c8 // Size: 0x08
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // Offset: 0x1d0 // Size: 0x10
	char pad_0x1E0[0x10]; // Offset: 0x1e0 // Size: 0x10
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // Offset: 0x1f0 // Size: 0x10
	char pad_0x200[0x18]; // Offset: 0x200 // Size: 0x18
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // Offset: 0x218 // Size: 0x10
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // Offset: 0x228 // Size: 0x10
	struct UGameViewportClient* GameViewport; // Offset: 0x238 // Size: 0x08
	struct UGameInstance* OwningGameInstance; // Offset: 0x240 // Size: 0x08
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // Offset: 0x248 // Size: 0x10
	char pad_0x258[0x50]; // Offset: 0x258 // Size: 0x50
};

// Object Name: ScriptStruct Engine.NamedNetDriver
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedNetDriver {
	// Fields
	struct UNetDriver* NetDriver; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 // Inherited bytes: 0x00
struct FLevelStreamingStatus {
	// Fields
	struct FName PackageName; // Offset: 0x00 // Size: 0x08
	char bShouldBeLoaded : 1; // Offset: 0x08 // Size: 0x01
	char bShouldBeVisible : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_2 : 6; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	uint32_t LODIndex; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FFullyLoadedPackagesInfo {
	// Fields
	enum class EFullyLoadPackageType FullyLoadType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Tag; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FName> PackagesToLoad; // Offset: 0x18 // Size: 0x10
	struct TArray<struct UObject*> LoadedObjects; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Engine.URL
// Size: 0x70 // Inherited bytes: 0x00
struct FURL {
	// Fields
	StrProperty Protocol; // Offset: 0x00 // Size: 0x10
	StrProperty Host; // Offset: 0x10 // Size: 0x10
	IntProperty Port; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty Map; // Offset: 0x28 // Size: 0x10
	StrProperty RedirectURL; // Offset: 0x38 // Size: 0x10
	struct TArray<StrProperty> Op; // Offset: 0x48 // Size: 0x10
	StrProperty Portal; // Offset: 0x58 // Size: 0x10
	IntProperty Valid; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 // Inherited bytes: 0x00
struct FNetDriverDefinition {
	// Fields
	struct FName DefName; // Offset: 0x00 // Size: 0x08
	struct FName DriverClassName; // Offset: 0x08 // Size: 0x08
	struct FName DriverClassNameFallback; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ExposureSettings
// Size: 0x08 // Inherited bytes: 0x00
struct FExposureSettings {
	// Fields
	IntProperty LogOffset; // Offset: 0x00 // Size: 0x04
	bool bFixed; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Engine.TickPrerequisite
// Size: 0x10 // Inherited bytes: 0x00
struct FTickPrerequisite {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RepAttributeModifyItem
// Size: 0x20 // Inherited bytes: 0x00
struct FRepAttributeModifyItem {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Engine.CanvasUVTri
// Size: 0x60 // Inherited bytes: 0x00
struct FCanvasUVTri {
	// Fields
	struct FVector2D V0_Pos; // Offset: 0x00 // Size: 0x08
	struct FVector2D V0_UV; // Offset: 0x08 // Size: 0x08
	struct FLinearColor V0_Color; // Offset: 0x10 // Size: 0x10
	struct FVector2D V1_Pos; // Offset: 0x20 // Size: 0x08
	struct FVector2D V1_UV; // Offset: 0x28 // Size: 0x08
	struct FLinearColor V1_Color; // Offset: 0x30 // Size: 0x10
	struct FVector2D V2_Pos; // Offset: 0x40 // Size: 0x08
	struct FVector2D V2_UV; // Offset: 0x48 // Size: 0x08
	struct FLinearColor V2_Color; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FontRenderInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FFontRenderInfo {
	// Fields
	char bClipText : 1; // Offset: 0x00 // Size: 0x01
	char bEnableShadow : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_2 : 6; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FDepthFieldGlowInfo GlowInfo; // Offset: 0x04 // Size: 0x24
};

// Object Name: ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 // Inherited bytes: 0x00
struct FDepthFieldGlowInfo {
	// Fields
	char bEnableGlow : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FLinearColor GlowColor; // Offset: 0x04 // Size: 0x10
	struct FVector2D GlowOuterRadius; // Offset: 0x14 // Size: 0x08
	struct FVector2D GlowInnerRadius; // Offset: 0x1c // Size: 0x08
};

// Object Name: ScriptStruct Engine.Redirector
// Size: 0x10 // Inherited bytes: 0x00
struct FRedirector {
	// Fields
	struct FName OldName; // Offset: 0x00 // Size: 0x08
	struct FName NewName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CollectionReference
// Size: 0x08 // Inherited bytes: 0x00
struct FCollectionReference {
	// Fields
	struct FName CollectionName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ComponentReference
// Size: 0x18 // Inherited bytes: 0x00
struct FComponentReference {
	// Fields
	struct AActor* OtherActor; // Offset: 0x00 // Size: 0x08
	struct FName ComponentProperty; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x08 // Inherited bytes: 0x00
struct FConstrainComponentPropName {
	// Fields
	struct FName ComponentName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 // Inherited bytes: 0x00
struct FMeshBuildSettings {
	// Fields
	bool bUseMikkTSpace; // Offset: 0x00 // Size: 0x01
	bool bRecomputeNormals; // Offset: 0x01 // Size: 0x01
	bool bRecomputeTangents; // Offset: 0x02 // Size: 0x01
	bool bRemoveDegenerates; // Offset: 0x03 // Size: 0x01
	bool bBuildAdjacencyBuffer; // Offset: 0x04 // Size: 0x01
	bool bBuildReversedIndexBuffer; // Offset: 0x05 // Size: 0x01
	bool bIgnoreTriangleOrderOptimization; // Offset: 0x06 // Size: 0x01
	bool bUseHighPrecisionTangentBasis; // Offset: 0x07 // Size: 0x01
	bool bUseFullPrecisionUVs; // Offset: 0x08 // Size: 0x01
	bool bGenerateLightmapUVs; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	IntProperty MinLightmapResolution; // Offset: 0x0c // Size: 0x04
	IntProperty SrcLightmapIndex; // Offset: 0x10 // Size: 0x04
	IntProperty DstLightmapIndex; // Offset: 0x14 // Size: 0x04
	float BuildScale; // Offset: 0x18 // Size: 0x04
	struct FVector BuildScale3D; // Offset: 0x1c // Size: 0x0c
	float DistanceFieldResolutionScale; // Offset: 0x28 // Size: 0x04
	bool bGenerateDistanceFieldAsIfTwoSided; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	float DistanceFieldBias; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct UStaticMesh* DistanceFieldReplacementMesh; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Engine.POV
// Size: 0x1c // Inherited bytes: 0x00
struct FPOV {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	float FOV; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x98 // Inherited bytes: 0x00
struct FAnimUpdateRateParameters {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	IntProperty UpdateRate; // Offset: 0x04 // Size: 0x04
	IntProperty EvaluationRate; // Offset: 0x08 // Size: 0x04
	char bInterpolateSkippedFrames : 1; // Offset: 0x0c // Size: 0x01
	char bShouldUseLodMap : 1; // Offset: 0x0c // Size: 0x01
	char bShouldUseMinLod : 1; // Offset: 0x0c // Size: 0x01
	char bSkipUpdate : 1; // Offset: 0x0c // Size: 0x01
	char bSkipEvaluation : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_5 : 3; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float TickedPoseOffestTime; // Offset: 0x10 // Size: 0x04
	float AdditionalTime; // Offset: 0x14 // Size: 0x04
	char pad_0x18[0x4]; // Offset: 0x18 // Size: 0x04
	IntProperty BaseNonRenderedUpdateRate; // Offset: 0x1c // Size: 0x04
	IntProperty BaseNonRenderedShouldUpdateRate; // Offset: 0x20 // Size: 0x04
	IntProperty MinDistFromMainChar; // Offset: 0x24 // Size: 0x04
	IntProperty MaxDistFromMainChar; // Offset: 0x28 // Size: 0x04
	char bUseSkipMapForDistanceFactor : 1; // Offset: 0x2c // Size: 0x01
	char pad_0x2C_1 : 7; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // Offset: 0x30 // Size: 0x10
	MapProperty LODToFrameSkipMap; // Offset: 0x40 // Size: 0x50
	IntProperty MaxEvalRateForInterpolation; // Offset: 0x90 // Size: 0x04
	enum class EUpdateRateShiftBucket ShiftBucket; // Offset: 0x94 // Size: 0x01
	char pad_0x95[0x3]; // Offset: 0x95 // Size: 0x03
};

// Object Name: ScriptStruct Engine.AnimSlotDesc
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimSlotDesc {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	IntProperty NumChannels; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimSlotInfo {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	struct TArray<float> ChannelWeights; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.MTDResult
// Size: 0x10 // Inherited bytes: 0x00
struct FMTDResult {
	// Fields
	struct FVector Direction; // Offset: 0x00 // Size: 0x0c
	float Distance; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.OverlapResult
// Size: 0x18 // Inherited bytes: 0x00
struct FOverlapResult {
	// Fields
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x4]; // Offset: 0x10 // Size: 0x04
	char bBlockingHit : 1; // Offset: 0x14 // Size: 0x01
	char pad_0x14_1 : 7; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 // Inherited bytes: 0x00
struct FPrimitiveMaterialRef {
	// Fields
	struct UPrimitiveComponent* Primitive; // Offset: 0x00 // Size: 0x08
	struct UDecalComponent* Decal; // Offset: 0x08 // Size: 0x08
	IntProperty ElementIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 // Inherited bytes: 0x00
struct FSwarmDebugOptions {
	// Fields
	char bDistributionEnabled : 1; // Offset: 0x00 // Size: 0x01
	char bForceContentExport : 1; // Offset: 0x00 // Size: 0x01
	char bInitialized : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 // Inherited bytes: 0x00
struct FLightmassDebugOptions {
	// Fields
	char bDebugMode : 1; // Offset: 0x00 // Size: 0x01
	char bStatsEnabled : 1; // Offset: 0x00 // Size: 0x01
	char bGatherBSPSurfacesAcrossComponents : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CoplanarTolerance; // Offset: 0x04 // Size: 0x04
	char bUseImmediateImport : 1; // Offset: 0x08 // Size: 0x01
	char bImmediateProcessMappings : 1; // Offset: 0x08 // Size: 0x01
	char bSortMappings : 1; // Offset: 0x08 // Size: 0x01
	char bDumpBinaryFiles : 1; // Offset: 0x08 // Size: 0x01
	char bDebugMaterials : 1; // Offset: 0x08 // Size: 0x01
	char bPadMappings : 1; // Offset: 0x08 // Size: 0x01
	char bDebugPaddings : 1; // Offset: 0x08 // Size: 0x01
	char bOnlyCalcDebugTexelMappings : 1; // Offset: 0x08 // Size: 0x01
	char bUseRandomColors : 1; // Offset: 0x09 // Size: 0x01
	char bColorBordersGreen : 1; // Offset: 0x09 // Size: 0x01
	char bColorByExecutionTime : 1; // Offset: 0x09 // Size: 0x01
	char pad_0x9_3 : 5; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	float ExecutionTimeDivisor; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c // Inherited bytes: 0x00
struct FLightmassLightSettings {
	// Fields
	float IndirectLightingSaturation; // Offset: 0x00 // Size: 0x04
	float ShadowExponent; // Offset: 0x04 // Size: 0x04
	bool bUseAreaShadowsForStationaryLight; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 // Inherited bytes: 0x0c
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	// Fields
	float LightSourceAngle; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c // Inherited bytes: 0x0c
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// Object Name: ScriptStruct Engine.LocalizedSubtitle
// Size: 0x28 // Inherited bytes: 0x00
struct FLocalizedSubtitle {
	// Fields
	StrProperty LanguageExt; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FSubtitleCue> Subtitles; // Offset: 0x10 // Size: 0x10
	char bMature : 1; // Offset: 0x20 // Size: 0x01
	char bManualWordWrap : 1; // Offset: 0x20 // Size: 0x01
	char bSingleLine : 1; // Offset: 0x20 // Size: 0x01
	char pad_0x20_3 : 5; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct Engine.BasedPosition
// Size: 0x38 // Inherited bytes: 0x00
struct FBasedPosition {
	// Fields
	struct AActor* Base; // Offset: 0x00 // Size: 0x08
	struct FVector Position; // Offset: 0x08 // Size: 0x0c
	struct FVector CachedBaseLocation; // Offset: 0x14 // Size: 0x0c
	struct FRotator CachedBaseRotation; // Offset: 0x20 // Size: 0x0c
	struct FVector CachedTransPosition; // Offset: 0x2c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.FractureEffect
// Size: 0x10 // Inherited bytes: 0x00
struct FFractureEffect {
	// Fields
	struct UParticleSystem* ParticleSystem; // Offset: 0x00 // Size: 0x08
	struct USoundBase* Sound; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CollisionImpactData
// Size: 0x30 // Inherited bytes: 0x00
struct FCollisionImpactData {
	// Fields
	enum class EPhysicsContactState ContactState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // Offset: 0x08 // Size: 0x10
	struct FVector TotalNormalImpulse; // Offset: 0x18 // Size: 0x0c
	struct FVector TotalFrictionImpulse; // Offset: 0x24 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FRigidBodyContactInfo {
	// Fields
	struct FVector ContactPosition; // Offset: 0x00 // Size: 0x0c
	struct FVector ContactNormal; // Offset: 0x0c // Size: 0x0c
	float ContactPenetration; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UPhysicalMaterial* PhysMaterial[0x2]; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x5c // Inherited bytes: 0x00
struct FRigidBodyErrorCorrection {
	// Fields
	float PingExtrapolation; // Offset: 0x00 // Size: 0x04
	float PingLimit; // Offset: 0x04 // Size: 0x04
	float ErrorPerLinearDifference; // Offset: 0x08 // Size: 0x04
	float ErrorPerAngularDifference; // Offset: 0x0c // Size: 0x04
	float MaxRestoredStateError; // Offset: 0x10 // Size: 0x04
	float MaxLinearHardSnapDistance; // Offset: 0x14 // Size: 0x04
	float PositionLerp; // Offset: 0x18 // Size: 0x04
	float AngleLerp; // Offset: 0x1c // Size: 0x04
	float LinearVelocityCoefficient; // Offset: 0x20 // Size: 0x04
	float LinearDampingCoefficient; // Offset: 0x24 // Size: 0x04
	float AngularVelocityCoefficient; // Offset: 0x28 // Size: 0x04
	float AngularDampingCoefficient; // Offset: 0x2c // Size: 0x04
	float ErrorAccumulationSeconds; // Offset: 0x30 // Size: 0x04
	float ErrorAccumulationDistanceSq; // Offset: 0x34 // Size: 0x04
	float ErrorAccumulationSimilarity; // Offset: 0x38 // Size: 0x04
	float LinearDeltaThresholdSq; // Offset: 0x3c // Size: 0x04
	float LinearInterpAlpha; // Offset: 0x40 // Size: 0x04
	float LinearRecipFixTime; // Offset: 0x44 // Size: 0x04
	float AngularDeltaThreshold; // Offset: 0x48 // Size: 0x04
	float AngularInterpAlpha; // Offset: 0x4c // Size: 0x04
	float AngularRecipFixTime; // Offset: 0x50 // Size: 0x04
	float BodySpeedThresholdSq; // Offset: 0x54 // Size: 0x04
	float AngularSpeedThresholdSq; // Offset: 0x58 // Size: 0x04
};

// Object Name: ScriptStruct Engine.RigidBodyState
// Size: 0x40 // Inherited bytes: 0x00
struct FRigidBodyState {
	// Fields
	struct FVector_NetQuantize100 Position; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FQuat Quaternion; // Offset: 0x10 // Size: 0x10
	struct FVector_NetQuantize100 LinVel; // Offset: 0x20 // Size: 0x0c
	struct FVector_NetQuantize100 AngVel; // Offset: 0x2c // Size: 0x0c
	char Flags; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Engine.CustomHeightFog
// Size: 0x18 // Inherited bytes: 0x00
struct FCustomHeightFog {
	// Fields
	float Height; // Offset: 0x00 // Size: 0x04
	float DensityCoefficient; // Offset: 0x04 // Size: 0x04
	struct FLinearColor CustomFogInscatteringColor; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FaceControllerList
// Size: 0x10 // Inherited bytes: 0x00
struct FFaceControllerList {
	// Fields
	struct TArray<struct FFaceController> Controllers; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FaceController
// Size: 0xe8 // Inherited bytes: 0x00
struct FFaceController {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FSymmetryBone> SymmetryBoneList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FUnsymmetryBone> UnsymmetryBoneList; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FVector> SymmetryBonePositionMinValueList; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FQuat> SymmetryBoneqRotationMinValueList; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FVector> SymmetryBoneScaleMinValueList; // Offset: 0x48 // Size: 0x10
	struct TArray<struct FVector> SymmetryBonePositionMaxValueList; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FQuat> SymmetryBoneqRotationMaxValueList; // Offset: 0x68 // Size: 0x10
	struct TArray<struct FVector> SymmetryBoneScaleMaxValueList; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FVector> UnsymmetryBonePositionMinValueList; // Offset: 0x88 // Size: 0x10
	struct TArray<struct FQuat> UnsymmetryBoneqRotationMinValueList; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FVector> UnsymmetryBoneScaleMinValueList; // Offset: 0xa8 // Size: 0x10
	struct TArray<struct FVector> UnsymmetryBonePositionMaxValueList; // Offset: 0xb8 // Size: 0x10
	struct TArray<struct FQuat> UnsymmetryBoneqRotationMaxValueList; // Offset: 0xc8 // Size: 0x10
	struct TArray<struct FVector> UnsymmetryBoneScaleMaxValueList; // Offset: 0xd8 // Size: 0x10
};

// Object Name: ScriptStruct Engine.UnsymmetryBone
// Size: 0x50 // Inherited bytes: 0x00
struct FUnsymmetryBone {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FBoneValueRangeInfo RangeInfo; // Offset: 0x08 // Size: 0x48
};

// Object Name: ScriptStruct Engine.BoneValueRangeInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FBoneValueRangeInfo {
	// Fields
	struct FVector PositionMinValue; // Offset: 0x00 // Size: 0x0c
	struct FVector PositionMaxValue; // Offset: 0x0c // Size: 0x0c
	struct FVector RotationMinValue; // Offset: 0x18 // Size: 0x0c
	struct FVector RotationMaxValue; // Offset: 0x24 // Size: 0x0c
	struct FVector ScaleMinValue; // Offset: 0x30 // Size: 0x0c
	struct FVector ScaleMaxValue; // Offset: 0x3c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.SymmetryBone
// Size: 0x58 // Inherited bytes: 0x00
struct FSymmetryBone {
	// Fields
	struct FName LBoneName; // Offset: 0x00 // Size: 0x08
	struct FName RBoneName; // Offset: 0x08 // Size: 0x08
	struct FBoneValueRangeInfo RangeInfo; // Offset: 0x10 // Size: 0x48
};

// Object Name: ScriptStruct Engine.FaceBoneList
// Size: 0x20 // Inherited bytes: 0x00
struct FFaceBoneList {
	// Fields
	struct TArray<struct FSymmetryBone> SymmetryBoneList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FUnsymmetryBone> UnsymmetryBoneList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FaceBoneCustomData
// Size: 0x20 // Inherited bytes: 0x00
struct FFaceBoneCustomData {
	// Fields
	struct TArray<struct FSymBoneCustomData> SymBoneCustomDataList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FUnsymBoneCustomData> UnsymBoneCustomDataList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.UnsymBoneCustomData
// Size: 0x30 // Inherited bytes: 0x00
struct FUnsymBoneCustomData {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FVector PositionValue; // Offset: 0x08 // Size: 0x0c
	struct FVector RotationValue; // Offset: 0x14 // Size: 0x0c
	struct FVector ScaleValue; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SymBoneCustomData
// Size: 0x58 // Inherited bytes: 0x00
struct FSymBoneCustomData {
	// Fields
	struct FName LBoneName; // Offset: 0x00 // Size: 0x08
	struct FName RBoneName; // Offset: 0x08 // Size: 0x08
	struct FVector LPositionValue; // Offset: 0x10 // Size: 0x0c
	struct FVector RPositionValue; // Offset: 0x1c // Size: 0x0c
	struct FVector LRotationValue; // Offset: 0x28 // Size: 0x0c
	struct FVector RRotationValue; // Offset: 0x34 // Size: 0x0c
	struct FVector LScaleValue; // Offset: 0x40 // Size: 0x0c
	struct FVector RScaleValue; // Offset: 0x4c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.FontCharacter
// Size: 0x18 // Inherited bytes: 0x00
struct FFontCharacter {
	// Fields
	IntProperty StartU; // Offset: 0x00 // Size: 0x04
	IntProperty StartV; // Offset: 0x04 // Size: 0x04
	IntProperty USize; // Offset: 0x08 // Size: 0x04
	IntProperty VSize; // Offset: 0x0c // Size: 0x04
	char TextureIndex; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty VerticalOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.FontImportOptionsData
// Size: 0xa8 // Inherited bytes: 0x00
struct FFontImportOptionsData {
	// Fields
	StrProperty FontName; // Offset: 0x00 // Size: 0x10
	float Height; // Offset: 0x10 // Size: 0x04
	char bEnableAntialiasing : 1; // Offset: 0x14 // Size: 0x01
	char bEnableBold : 1; // Offset: 0x14 // Size: 0x01
	char bEnableItalic : 1; // Offset: 0x14 // Size: 0x01
	char bEnableUnderline : 1; // Offset: 0x14 // Size: 0x01
	char bAlphaOnly : 1; // Offset: 0x14 // Size: 0x01
	char pad_0x14_5 : 3; // Offset: 0x14 // Size: 0x01
	enum class EFontImportCharacterSet CharacterSet; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	StrProperty Chars; // Offset: 0x18 // Size: 0x10
	StrProperty UnicodeRange; // Offset: 0x28 // Size: 0x10
	StrProperty CharsFilePath; // Offset: 0x38 // Size: 0x10
	StrProperty CharsFileWildcard; // Offset: 0x48 // Size: 0x10
	char bCreatePrintableOnly : 1; // Offset: 0x58 // Size: 0x01
	char bIncludeASCIIRange : 1; // Offset: 0x58 // Size: 0x01
	char pad_0x58_2 : 6; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	struct FLinearColor ForegroundColor; // Offset: 0x5c // Size: 0x10
	char bEnableDropShadow : 1; // Offset: 0x6c // Size: 0x01
	char pad_0x6C_1 : 7; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	IntProperty TexturePageWidth; // Offset: 0x70 // Size: 0x04
	IntProperty TexturePageMaxHeight; // Offset: 0x74 // Size: 0x04
	IntProperty XPadding; // Offset: 0x78 // Size: 0x04
	IntProperty YPadding; // Offset: 0x7c // Size: 0x04
	IntProperty ExtendBoxTop; // Offset: 0x80 // Size: 0x04
	IntProperty ExtendBoxBottom; // Offset: 0x84 // Size: 0x04
	IntProperty ExtendBoxRight; // Offset: 0x88 // Size: 0x04
	IntProperty ExtendBoxLeft; // Offset: 0x8c // Size: 0x04
	char bEnableLegacyMode : 1; // Offset: 0x90 // Size: 0x01
	char pad_0x90_1 : 7; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	IntProperty Kerning; // Offset: 0x94 // Size: 0x04
	char bUseDistanceFieldAlpha : 1; // Offset: 0x98 // Size: 0x01
	char pad_0x98_1 : 7; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	IntProperty DistanceFieldScaleFactor; // Offset: 0x9c // Size: 0x04
	float DistanceFieldScanRadiusScale; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xa8 // Inherited bytes: 0xa8
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
};

// Object Name: ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x80 // Inherited bytes: 0x00
struct FForceFeedbackChannelDetails {
	// Fields
	char bAffectsLeftLarge : 1; // Offset: 0x00 // Size: 0x01
	char bAffectsLeftSmall : 1; // Offset: 0x00 // Size: 0x01
	char bAffectsRightLarge : 1; // Offset: 0x00 // Size: 0x01
	char bAffectsRightSmall : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_4 : 4; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FRuntimeFloatCurve Curve; // Offset: 0x08 // Size: 0x78
};

// Object Name: ScriptStruct Engine.PredictBulletPathResult
// Size: 0xb8 // Inherited bytes: 0x00
struct FPredictBulletPathResult {
	// Fields
	struct TArray<struct FPredictBulletPathPointData> PathData; // Offset: 0x00 // Size: 0x10
	struct FPredictBulletPathPointData LastTraceDestination; // Offset: 0x10 // Size: 0x1c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FHitResult HitResult; // Offset: 0x30 // Size: 0x88
};

// Object Name: ScriptStruct Engine.PredictBulletPathPointData
// Size: 0x1c // Inherited bytes: 0x00
struct FPredictBulletPathPointData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x0c // Size: 0x0c
	float Time; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xb8 // Inherited bytes: 0x00
struct FPredictProjectilePathResult {
	// Fields
	struct TArray<struct FPredictProjectilePathPointData> PathData; // Offset: 0x00 // Size: 0x10
	struct FPredictProjectilePathPointData LastTraceDestination; // Offset: 0x10 // Size: 0x1c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FHitResult HitResult; // Offset: 0x30 // Size: 0x88
};

// Object Name: ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1c // Inherited bytes: 0x00
struct FPredictProjectilePathPointData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x0c // Size: 0x0c
	float Time; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PredictBulletPathParams
// Size: 0x60 // Inherited bytes: 0x00
struct FPredictBulletPathParams {
	// Fields
	struct FVector StartLocation; // Offset: 0x00 // Size: 0x0c
	struct FVector LaunchVelocity; // Offset: 0x0c // Size: 0x0c
	bool bTraceWithCollision; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float BulletRadius; // Offset: 0x1c // Size: 0x04
	float MaxSimTime; // Offset: 0x20 // Size: 0x04
	bool bTraceWithChannel; // Offset: 0x24 // Size: 0x01
	enum class ECollisionChannel TraceChannel; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // Offset: 0x28 // Size: 0x10
	struct TArray<struct AActor*> ActorsToIgnore; // Offset: 0x38 // Size: 0x10
	float SimFrequency; // Offset: 0x48 // Size: 0x04
	float GravityScale; // Offset: 0x4c // Size: 0x04
	float IgnoreGravityDis; // Offset: 0x50 // Size: 0x04
	enum class EDrawDebugTrace DrawDebugType; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	float DrawDebugTime; // Offset: 0x58 // Size: 0x04
	bool bTraceComplex; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
};

// Object Name: ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x88 // Inherited bytes: 0x00
struct FPredictProjectilePathParams {
	// Fields
	struct FVector StartLocation; // Offset: 0x00 // Size: 0x0c
	struct FVector LaunchVelocity; // Offset: 0x0c // Size: 0x0c
	struct FVector LaunchAcceleration; // Offset: 0x18 // Size: 0x0c
	bool bTraceWithCollision; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	float ProjectileRadius; // Offset: 0x28 // Size: 0x04
	float MaxSimTime; // Offset: 0x2c // Size: 0x04
	bool bTraceWithChannel; // Offset: 0x30 // Size: 0x01
	enum class ECollisionChannel TraceChannel; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // Offset: 0x38 // Size: 0x10
	struct TArray<struct AActor*> ActorsToIgnore; // Offset: 0x48 // Size: 0x10
	float SimFrequency; // Offset: 0x58 // Size: 0x04
	float OverrideGravityZ; // Offset: 0x5c // Size: 0x04
	float GravityScale; // Offset: 0x60 // Size: 0x04
	float IgnoreGravityDis; // Offset: 0x64 // Size: 0x04
	enum class EDrawDebugTrace DrawDebugType; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x3]; // Offset: 0x69 // Size: 0x03
	float DrawDebugTime; // Offset: 0x6c // Size: 0x04
	bool bTraceComplex; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x17]; // Offset: 0x71 // Size: 0x17
};

// Object Name: ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 // Inherited bytes: 0x00
struct FActiveHapticFeedbackEffect {
	// Fields
	struct UHapticFeedbackEffect_Base* HapticEffect; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0xf0 // Inherited bytes: 0x00
struct FHapticFeedbackDetails_Curve {
	// Fields
	struct FRuntimeFloatCurve Frequency; // Offset: 0x00 // Size: 0x78
	struct FRuntimeFloatCurve Amplitude; // Offset: 0x78 // Size: 0x78
};

// Object Name: ScriptStruct Engine.ClusterNode
// Size: 0x28 // Inherited bytes: 0x00
struct FClusterNode {
	// Fields
	struct FVector BoundMin; // Offset: 0x00 // Size: 0x0c
	IntProperty FirstChild; // Offset: 0x0c // Size: 0x04
	struct FVector BoundMax; // Offset: 0x10 // Size: 0x0c
	IntProperty LastChild; // Offset: 0x1c // Size: 0x04
	IntProperty FirstInstance; // Offset: 0x20 // Size: 0x04
	IntProperty LastInstance; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 // Inherited bytes: 0x00
struct FHLODProxyMesh {
	// Fields
	struct UStaticMesh* StaticMesh; // Offset: 0x00 // Size: 0x08
	float DrawDistance; // Offset: 0x08 // Size: 0x04
	struct TLazyObjectPtr<struct ALODActor> LODActor; // Offset: 0x0c // Size: 0x1c
	struct FName Key; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ImportanceTexture
// Size: 0x50 // Inherited bytes: 0x00
struct FImportanceTexture {
	// Fields
	struct FIntPoint Size; // Offset: 0x00 // Size: 0x08
	IntProperty NumMips; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<float> MarginalCDF; // Offset: 0x10 // Size: 0x10
	struct TArray<float> ConditionalCDF; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FColor> TextureData; // Offset: 0x30 // Size: 0x10
	struct TWeakObjectPtr<struct UTexture2D> Texture; // Offset: 0x40 // Size: 0x08
	enum class EImportanceWeight Weighting; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x80 // Inherited bytes: 0x00
struct FComponentOverrideRecord {
	// Fields
	struct UObject* ComponentClass; // Offset: 0x00 // Size: 0x08
	struct UActorComponent* ComponentTemplate; // Offset: 0x08 // Size: 0x08
	struct FComponentKey ComponentKey; // Offset: 0x10 // Size: 0x20
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // Offset: 0x30 // Size: 0x50
};

// Object Name: ScriptStruct Engine.ComponentKey
// Size: 0x20 // Inherited bytes: 0x00
struct FComponentKey {
	// Fields
	struct UObject* OwnerClass; // Offset: 0x00 // Size: 0x08
	struct FName SCSVariableName; // Offset: 0x08 // Size: 0x08
	struct FGuid AssociatedGuid; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 // Inherited bytes: 0x00
struct FBlueprintInputDelegateBinding {
	// Fields
	char bConsumeInput : 1; // Offset: 0x00 // Size: 0x01
	char bExecuteWhenPaused : 1; // Offset: 0x00 // Size: 0x01
	char bOverrideParentBinding : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x20 // Inherited bytes: 0x04
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	// Fields
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName InputActionName; // Offset: 0x08 // Size: 0x08
	enum class EInputEvent InputKeyEvent; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct FName FunctionNameToBind; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x18 // Inherited bytes: 0x04
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	// Fields
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName InputAxisName; // Offset: 0x08 // Size: 0x08
	struct FName FunctionNameToBind; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 // Inherited bytes: 0x04
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	// Fields
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FKey AxisKey; // Offset: 0x08 // Size: 0x18
	struct FName FunctionNameToBind; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 // Inherited bytes: 0x04
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	// Fields
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FInputChord InputChord; // Offset: 0x08 // Size: 0x20
	enum class EInputEvent InputKeyEvent; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FName FunctionNameToBind; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x10 // Inherited bytes: 0x04
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	// Fields
	enum class EInputEvent InputKeyEvent; // Offset: 0x01 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FName FunctionNameToBind; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.InstancedStaticMeshColorInstanceData
// Size: 0x04 // Inherited bytes: 0x00
struct FInstancedStaticMeshColorInstanceData {
	// Fields
	struct FColor Color; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Engine.CurveEdTab
// Size: 0x30 // Inherited bytes: 0x00
struct FCurveEdTab {
	// Fields
	StrProperty TabName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FCurveEdEntry> Curves; // Offset: 0x10 // Size: 0x10
	float ViewStartInput; // Offset: 0x20 // Size: 0x04
	float ViewEndInput; // Offset: 0x24 // Size: 0x04
	float ViewStartOutput; // Offset: 0x28 // Size: 0x04
	float ViewEndOutput; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Engine.CurveEdEntry
// Size: 0x38 // Inherited bytes: 0x00
struct FCurveEdEntry {
	// Fields
	struct UObject* CurveObject; // Offset: 0x00 // Size: 0x08
	struct FColor CurveColor; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty CurveName; // Offset: 0x10 // Size: 0x10
	IntProperty bHideCurve; // Offset: 0x20 // Size: 0x04
	IntProperty bColorCurve; // Offset: 0x24 // Size: 0x04
	IntProperty bFloatingPointColorCurve; // Offset: 0x28 // Size: 0x04
	IntProperty bClamp; // Offset: 0x2c // Size: 0x04
	float ClampLow; // Offset: 0x30 // Size: 0x04
	float ClampHigh; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpEdSelKey {
	// Fields
	struct UInterpGroup* Group; // Offset: 0x00 // Size: 0x08
	struct UInterpTrack* Track; // Offset: 0x08 // Size: 0x08
	IntProperty KeyIndex; // Offset: 0x10 // Size: 0x04
	float UnsnappedPosition; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FCameraPreviewInfo {
	// Fields
	struct APawn* PawnClass; // Offset: 0x00 // Size: 0x08
	struct UAnimSequence* AnimSeq; // Offset: 0x08 // Size: 0x08
	struct FVector Location; // Offset: 0x10 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x1c // Size: 0x0c
	struct APawn* PawnInst; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SubTrackGroup
// Size: 0x28 // Inherited bytes: 0x00
struct FSubTrackGroup {
	// Fields
	StrProperty GroupName; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> TrackIndices; // Offset: 0x10 // Size: 0x10
	char bIsCollapsed : 1; // Offset: 0x20 // Size: 0x01
	char bIsSelected : 1; // Offset: 0x20 // Size: 0x01
	char pad_0x20_2 : 6; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FSupportedSubTrackInfo {
	// Fields
	struct UInterpTrack* SupportedClass; // Offset: 0x00 // Size: 0x08
	StrProperty SubTrackName; // Offset: 0x08 // Size: 0x10
	IntProperty GroupIndex; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimControlTrackKey {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimSequence* AnimSeq; // Offset: 0x08 // Size: 0x08
	float AnimStartOffset; // Offset: 0x10 // Size: 0x04
	float AnimEndOffset; // Offset: 0x14 // Size: 0x04
	float AnimPlayRate; // Offset: 0x18 // Size: 0x04
	char bLooping : 1; // Offset: 0x1c // Size: 0x01
	char bReverse : 1; // Offset: 0x1c // Size: 0x01
	char pad_0x1C_2 : 6; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct Engine.BoolTrackKey
// Size: 0x08 // Inherited bytes: 0x00
struct FBoolTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char Value : 1; // Offset: 0x04 // Size: 0x01
	char pad_0x4_1 : 7; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Engine.DirectorTrackCut
// Size: 0x18 // Inherited bytes: 0x00
struct FDirectorTrackCut {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	float TransitionTime; // Offset: 0x04 // Size: 0x04
	struct FName TargetCamGroup; // Offset: 0x08 // Size: 0x08
	IntProperty ShotNumber; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.EventTrackKey
// Size: 0x10 // Inherited bytes: 0x00
struct FEventTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName EventName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 // Inherited bytes: 0x00
struct FInterpLookupTrack {
	// Fields
	struct TArray<struct FInterpLookupPoint> Points; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.InterpLookupPoint
// Size: 0x10 // Inherited bytes: 0x00
struct FInterpLookupPoint {
	// Fields
	struct FName GroupName; // Offset: 0x00 // Size: 0x08
	float Time; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0x0c // Inherited bytes: 0x00
struct FParticleReplayTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	float Duration; // Offset: 0x04 // Size: 0x04
	IntProperty ClipIDNumber; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.SoundTrackKey
// Size: 0x18 // Inherited bytes: 0x00
struct FSoundTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	float Volume; // Offset: 0x04 // Size: 0x04
	float Pitch; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct USoundBase* Sound; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ToggleTrackKey
// Size: 0x08 // Inherited bytes: 0x00
struct FToggleTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	enum class ETrackToggleAction ToggleAction; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Engine.VisibilityTrackKey
// Size: 0x08 // Inherited bytes: 0x00
struct FVisibilityTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	enum class EVisibilityTrackAction Action; // Offset: 0x04 // Size: 0x01
	enum class EVisibilityTrackCondition ActiveCondition; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
};

// Object Name: ScriptStruct Engine.VectorSpringState
// Size: 0x18 // Inherited bytes: 0x00
struct FVectorSpringState {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Engine.FloatSpringState
// Size: 0x08 // Inherited bytes: 0x00
struct FFloatSpringState {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 // Inherited bytes: 0x00
struct FDrawToRenderTargetContext {
	// Fields
	struct UTextureRenderTarget2D* RenderTarget; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.LatentActionManager
// Size: 0xf0 // Inherited bytes: 0x00
struct FLatentActionManager {
	// Fields
	char pad_0x0[0xf0]; // Offset: 0x00 // Size: 0xf0
};

// Object Name: ScriptStruct Engine.LayerActorStats
// Size: 0x10 // Inherited bytes: 0x00
struct FLayerActorStats {
	// Fields
	struct UObject* Type; // Offset: 0x00 // Size: 0x08
	IntProperty Total; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x158 // Inherited bytes: 0x00
struct FLevelSimplificationDetails {
	// Fields
	bool bCreatePackagePerAsset; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float DetailsPercentage; // Offset: 0x04 // Size: 0x04
	bool bIncludeInstanceMesh; // Offset: 0x08 // Size: 0x01
	bool bUseScreenSize; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	uint32_t ScreenSize; // Offset: 0x0c // Size: 0x04
	struct FMaterialProxySettings StaticMeshMaterialSettings; // Offset: 0x10 // Size: 0x94
	enum class EMeshLODSelectionType LODSelectionType; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	IntProperty SpecificLOD; // Offset: 0xa8 // Size: 0x04
	struct FColor UnresolvedGeometryColor; // Offset: 0xac // Size: 0x04
	bool bOverrideLandscapeExportLOD; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x3]; // Offset: 0xb1 // Size: 0x03
	IntProperty LandscapeExportLOD; // Offset: 0xb4 // Size: 0x04
	struct FMaterialProxySettings LandscapeMaterialSettings; // Offset: 0xb8 // Size: 0x94
	bool bBakeFoliageToLandscape; // Offset: 0x14c // Size: 0x01
	bool bBakeGrassToLandscape; // Offset: 0x14d // Size: 0x01
	bool bGenerateMeshNormalMap; // Offset: 0x14e // Size: 0x01
	bool bGenerateMeshMetallicMap; // Offset: 0x14f // Size: 0x01
	bool bGenerateMeshRoughnessMap; // Offset: 0x150 // Size: 0x01
	bool bGenerateMeshSpecularMap; // Offset: 0x151 // Size: 0x01
	bool bGenerateLandscapeNormalMap; // Offset: 0x152 // Size: 0x01
	bool bGenerateLandscapeMetallicMap; // Offset: 0x153 // Size: 0x01
	bool bGenerateLandscapeRoughnessMap; // Offset: 0x154 // Size: 0x01
	bool bGenerateLandscapeSpecularMap; // Offset: 0x155 // Size: 0x01
	bool bUseLandscapeCulling; // Offset: 0x156 // Size: 0x01
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // Offset: 0x157 // Size: 0x01
};

// Object Name: ScriptStruct Engine.MaterialProxySettings
// Size: 0x94 // Inherited bytes: 0x00
struct FMaterialProxySettings {
	// Fields
	struct FIntPoint TextureSize; // Offset: 0x00 // Size: 0x08
	enum class ETextureSizingType TextureSizingType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float GutterSpace; // Offset: 0x0c // Size: 0x04
	enum class EMaterialProxySmaplingQuality SamplingQuality; // Offset: 0x10 // Size: 0x01
	enum class EUVStrech UVStrech; // Offset: 0x11 // Size: 0x01
	bool bSplitProxyMaterialBasedOnType; // Offset: 0x12 // Size: 0x01
	bool bUseTangentSpace; // Offset: 0x13 // Size: 0x01
	bool bNormalMap; // Offset: 0x14 // Size: 0x01
	bool bMetallicMap; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	float MetallicConstant; // Offset: 0x18 // Size: 0x04
	bool bRoughnessMap; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	float RoughnessConstant; // Offset: 0x20 // Size: 0x04
	bool bSpecularMap; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	float SpecularConstant; // Offset: 0x28 // Size: 0x04
	bool bEmissiveMap; // Offset: 0x2c // Size: 0x01
	bool bOpacityMap; // Offset: 0x2d // Size: 0x01
	char pad_0x2E[0x2]; // Offset: 0x2e // Size: 0x02
	float OpacityConstant; // Offset: 0x30 // Size: 0x04
	float AOConstant; // Offset: 0x34 // Size: 0x04
	bool bOpacityMaskMap; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float OpacityMaskConstant; // Offset: 0x3c // Size: 0x04
	bool bAmbientOcclusionMap; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	float AmbientOcclusionConstant; // Offset: 0x44 // Size: 0x04
	struct FIntPoint DiffuseTextureSize; // Offset: 0x48 // Size: 0x08
	struct FIntPoint NormalTextureSize; // Offset: 0x50 // Size: 0x08
	struct FIntPoint MetallicTextureSize; // Offset: 0x58 // Size: 0x08
	struct FIntPoint RoughnessTextureSize; // Offset: 0x60 // Size: 0x08
	struct FIntPoint SpecularTextureSize; // Offset: 0x68 // Size: 0x08
	struct FIntPoint EmissiveTextureSize; // Offset: 0x70 // Size: 0x08
	struct FIntPoint OpacityTextureSize; // Offset: 0x78 // Size: 0x08
	struct FIntPoint OpacityMaskTextureSize; // Offset: 0x80 // Size: 0x08
	struct FIntPoint AmbientOcclusionTextureSize; // Offset: 0x88 // Size: 0x08
	enum class EMaterialMergeType MaterialMergeType; // Offset: 0x90 // Size: 0x01
	enum class EBlendMode BlendMode; // Offset: 0x91 // Size: 0x01
	char pad_0x92[0x2]; // Offset: 0x92 // Size: 0x02
};

// Object Name: ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 // Inherited bytes: 0x00
struct FStreamableTextureInstance {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 // Inherited bytes: 0x28
struct FDynamicTextureInstance : FStreamableTextureInstance {
	// Fields
	struct UTexture2D* Texture; // Offset: 0x28 // Size: 0x08
	bool bAttached; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float OriginalRadius; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Engine.BatchedPoint
// Size: 0x28 // Inherited bytes: 0x00
struct FBatchedPoint {
	// Fields
	struct FVector Position; // Offset: 0x00 // Size: 0x0c
	struct FLinearColor Color; // Offset: 0x0c // Size: 0x10
	float PointSize; // Offset: 0x1c // Size: 0x04
	float RemainingLifeTime; // Offset: 0x20 // Size: 0x04
	char DepthPriority; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct Engine.BatchedLine
// Size: 0x34 // Inherited bytes: 0x00
struct FBatchedLine {
	// Fields
	struct FVector Start; // Offset: 0x00 // Size: 0x0c
	struct FVector End; // Offset: 0x0c // Size: 0x0c
	struct FLinearColor Color; // Offset: 0x18 // Size: 0x10
	float Thickness; // Offset: 0x28 // Size: 0x04
	float RemainingLifeTime; // Offset: 0x2c // Size: 0x04
	char DepthPriority; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ClientReceiveData
// Size: 0x40 // Inherited bytes: 0x00
struct FClientReceiveData {
	// Fields
	struct APlayerController* LocalPC; // Offset: 0x00 // Size: 0x08
	struct FName MessageType; // Offset: 0x08 // Size: 0x08
	IntProperty MessageIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty MessageString; // Offset: 0x18 // Size: 0x10
	struct APlayerState* RelatedPlayerState_2; // Offset: 0x28 // Size: 0x08
	struct APlayerState* RelatedPlayerState_3; // Offset: 0x30 // Size: 0x08
	struct UObject* OptionalObject; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ParameterGroupData
// Size: 0x18 // Inherited bytes: 0x00
struct FParameterGroupData {
	// Fields
	StrProperty GroupName; // Offset: 0x00 // Size: 0x10
	IntProperty GroupSortPriority; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialParameterCollectionInfo {
	// Fields
	struct FGuid stateID; // Offset: 0x00 // Size: 0x10
	struct UMaterialParameterCollection* ParameterCollection; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialFunctionInfo {
	// Fields
	struct FGuid stateID; // Offset: 0x00 // Size: 0x10
	struct UMaterialFunction* Function; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 // Inherited bytes: 0x00
struct FMaterialSpriteElement {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* DistanceToOpacityCurve; // Offset: 0x08 // Size: 0x08
	char bSizeIsInScreenSpace : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_1 : 7; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float BaseSizeX; // Offset: 0x14 // Size: 0x04
	float BaseSizeY; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UCurveFloat* DistanceToSizeCurve; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CustomInput
// Size: 0x48 // Inherited bytes: 0x00
struct FCustomInput {
	// Fields
	StrProperty InputName; // Offset: 0x00 // Size: 0x10
	struct FExpressionInput Input; // Offset: 0x10 // Size: 0x38
};

// Object Name: ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x40 // Inherited bytes: 0x00
struct FFunctionExpressionOutput {
	// Fields
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // Offset: 0x00 // Size: 0x08
	struct FGuid ExpressionOutputId; // Offset: 0x08 // Size: 0x10
	struct FExpressionOutput Output; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct Engine.FunctionExpressionInput
// Size: 0x50 // Inherited bytes: 0x00
struct FFunctionExpressionInput {
	// Fields
	struct UMaterialExpressionFunctionInput* ExpressionInput; // Offset: 0x00 // Size: 0x08
	struct FGuid ExpressionInputId; // Offset: 0x08 // Size: 0x10
	struct FExpressionInput Input; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct Engine.VectorParameterValue
// Size: 0x28 // Inherited bytes: 0x00
struct FVectorParameterValue {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct FLinearColor ParameterValue; // Offset: 0x08 // Size: 0x10
	struct FGuid ExpressionGUID; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.SparseVolumeTextureParameterValue
// Size: 0x20 // Inherited bytes: 0x00
struct FSparseVolumeTextureParameterValue {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct USparseVolumeTexture* ParameterValue; // Offset: 0x08 // Size: 0x08
	struct FGuid ExpressionGUID; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TextureParameterValue
// Size: 0x20 // Inherited bytes: 0x00
struct FTextureParameterValue {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct UTexture* ParameterValue; // Offset: 0x08 // Size: 0x08
	struct FGuid ExpressionGUID; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ScalarParameterValue
// Size: 0x20 // Inherited bytes: 0x00
struct FScalarParameterValue {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	float ParameterValue; // Offset: 0x08 // Size: 0x04
	struct FGuid ExpressionGUID; // Offset: 0x0c // Size: 0x10
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.FontParameterValue
// Size: 0x28 // Inherited bytes: 0x00
struct FFontParameterValue {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct UFont* FontValue; // Offset: 0x08 // Size: 0x08
	IntProperty FontPage; // Offset: 0x10 // Size: 0x04
	struct FGuid ExpressionGUID; // Offset: 0x14 // Size: 0x10
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x10 // Inherited bytes: 0x00
struct FMaterialInstanceBasePropertyOverrides {
	// Fields
	bool bOverride_OpacityMaskClipValue; // Offset: 0x00 // Size: 0x01
	bool bOverride_BlendMode; // Offset: 0x01 // Size: 0x01
	bool bOverride_ShadingModel; // Offset: 0x02 // Size: 0x01
	bool bOverride_ShadingRate; // Offset: 0x03 // Size: 0x01
	bool bOverride_DitheredLODTransition; // Offset: 0x04 // Size: 0x01
	bool bOverride_CastDynamicShadowAsMasked; // Offset: 0x05 // Size: 0x01
	bool bOverride_TwoSided; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
	float OpacityMaskClipValue; // Offset: 0x08 // Size: 0x04
	enum class EBlendMode BlendMode; // Offset: 0x0c // Size: 0x01
	enum class EMaterialShadingModel ShadingModel; // Offset: 0x0d // Size: 0x01
	enum class ERenderShadingRate ShadingRate; // Offset: 0x0e // Size: 0x01
	char TwoSided : 1; // Offset: 0x0f // Size: 0x01
	char DitheredLODTransition : 1; // Offset: 0x0f // Size: 0x01
	char bCastDynamicShadowAsMasked : 1; // Offset: 0x0f // Size: 0x01
	char pad_0xF_3 : 5; // Offset: 0x0f // Size: 0x01
};

// Object Name: ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FMaterialTextureInfo {
	// Fields
	float SamplingScale; // Offset: 0x00 // Size: 0x04
	IntProperty UVChannelIndex; // Offset: 0x04 // Size: 0x04
	struct FName TextureName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x14 // Inherited bytes: 0x00
struct FLightmassMaterialInterfaceSettings {
	// Fields
	char bCastShadowAsMasked : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EmissiveBoost; // Offset: 0x04 // Size: 0x04
	float DiffuseBoost; // Offset: 0x08 // Size: 0x04
	float ExportResolutionScale; // Offset: 0x0c // Size: 0x04
	char bOverrideCastShadowAsMasked : 1; // Offset: 0x10 // Size: 0x01
	char bOverrideEmissiveBoost : 1; // Offset: 0x10 // Size: 0x01
	char bOverrideDiffuseBoost : 1; // Offset: 0x10 // Size: 0x01
	char bOverrideExportResolutionScale : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_4 : 4; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 // Inherited bytes: 0x00
struct FMaterialLayersFunctions {
	// Fields
	struct TArray<struct UMaterialFunction*> Layers; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UMaterialFunction*> Blends; // Offset: 0x10 // Size: 0x10
	struct TArray<bool> LayerStates; // Offset: 0x20 // Size: 0x10
	StrProperty KeyString; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FMaterialParameterInfo {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	enum class EMaterialParameterAssociation Association; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty Index; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SimplygonMaterialLODSettings
// Size: 0x80 // Inherited bytes: 0x00
struct FSimplygonMaterialLODSettings {
	// Fields
	bool bActive; // Offset: 0x00 // Size: 0x01
	enum class EMaterialLODType MaterialLODType; // Offset: 0x01 // Size: 0x01
	bool bUseAutomaticSizes; // Offset: 0x02 // Size: 0x01
	enum class ESimplygonTextureResolution TextureWidth; // Offset: 0x03 // Size: 0x01
	enum class ESimplygonTextureResolution TextureHeight; // Offset: 0x04 // Size: 0x01
	enum class ESimplygonTextureSamplingQuality SamplingQuality; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	IntProperty GutterSpace; // Offset: 0x08 // Size: 0x04
	enum class ESimplygonTextureStrech TextureStrech; // Offset: 0x0c // Size: 0x01
	bool bReuseExistingCharts; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	struct TArray<struct FSimplygonChannelCastingSettings> ChannelsToCast; // Offset: 0x10 // Size: 0x10
	bool bBakeVertexData; // Offset: 0x20 // Size: 0x01
	bool bBakeActorData; // Offset: 0x21 // Size: 0x01
	bool bAllowMultiMaterial; // Offset: 0x22 // Size: 0x01
	bool bPreferTwoSideMaterials; // Offset: 0x23 // Size: 0x01
	bool bUseVertexWeights; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct FOutputMaterialInfo OutputMaterialInfo; // Offset: 0x28 // Size: 0x58
};

// Object Name: ScriptStruct Engine.OutputMaterialInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FOutputMaterialInfo {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
};

// Object Name: ScriptStruct Engine.SimplygonChannelCastingSettings
// Size: 0x10 // Inherited bytes: 0x00
struct FSimplygonChannelCastingSettings {
	// Fields
	enum class ESimplygonMaterialChannel MaterialChannel; // Offset: 0x00 // Size: 0x01
	enum class ESimplygonCasterType Caster; // Offset: 0x01 // Size: 0x01
	bool bActive; // Offset: 0x02 // Size: 0x01
	enum class ESimplygonColorChannels ColorChannels; // Offset: 0x03 // Size: 0x01
	IntProperty BitsPerChannel; // Offset: 0x04 // Size: 0x04
	bool bUseSRGB; // Offset: 0x08 // Size: 0x01
	bool bBakeVertexColors; // Offset: 0x09 // Size: 0x01
	bool bFlipBackfacingNormals; // Offset: 0x0a // Size: 0x01
	bool bUseTangentSpaceNormals; // Offset: 0x0b // Size: 0x01
	bool bFlipGreenChannel; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 // Inherited bytes: 0x00
struct FCollectionParameterBase {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct FGuid ID; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 // Inherited bytes: 0x18
struct FCollectionVectorParameter : FCollectionParameterBase {
	// Fields
	struct FLinearColor DefaultValue; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CollectionScalarParameter
// Size: 0x20 // Inherited bytes: 0x18
struct FCollectionScalarParameter : FCollectionParameterBase {
	// Fields
	float DefaultValue; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpGroupActorInfo {
	// Fields
	struct FName ObjectName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct AActor*> Actors; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CameraCutInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCameraCutInfo {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	float TimeStamp; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.MemberReference
// Size: 0x38 // Inherited bytes: 0x00
struct FMemberReference {
	// Fields
	struct UObject* MemberParent; // Offset: 0x00 // Size: 0x08
	StrProperty MemberScope; // Offset: 0x08 // Size: 0x10
	struct FName MemberName; // Offset: 0x18 // Size: 0x08
	struct FGuid MemberGuid; // Offset: 0x20 // Size: 0x10
	bool bSelfContext; // Offset: 0x30 // Size: 0x01
	bool bWasDeprecated; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
};

// Object Name: ScriptStruct Engine.SimplygonRemeshingSettings
// Size: 0xa8 // Inherited bytes: 0x00
struct FSimplygonRemeshingSettings {
	// Fields
	bool bActive; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty ScreenSize; // Offset: 0x04 // Size: 0x04
	bool bRecalculateNormals; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float HardAngleThreshold; // Offset: 0x0c // Size: 0x04
	IntProperty MergeDistance; // Offset: 0x10 // Size: 0x04
	bool bUseClippingPlane; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float ClippingLevel; // Offset: 0x18 // Size: 0x04
	IntProperty AxisIndex; // Offset: 0x1c // Size: 0x04
	bool bPlaneNegativeHalfspace; // Offset: 0x20 // Size: 0x01
	bool bUseMassiveLOD; // Offset: 0x21 // Size: 0x01
	bool bUseAggregateLOD; // Offset: 0x22 // Size: 0x01
	char pad_0x23[0x5]; // Offset: 0x23 // Size: 0x05
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // Offset: 0x28 // Size: 0x80
};

// Object Name: ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 // Inherited bytes: 0x00
struct FMeshInstancingSettings {
	// Fields
	struct AActor* ActorClassToUse; // Offset: 0x00 // Size: 0x08
	IntProperty InstanceReplacementThreshold; // Offset: 0x08 // Size: 0x04
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // Offset: 0x0c // Size: 0x04
	bool bSkipMeshesWithVertexColors; // Offset: 0x10 // Size: 0x01
	bool bUseHLODVolumes; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
};

// Object Name: ScriptStruct Engine.MeshMergingSettings
// Size: 0xdc // Inherited bytes: 0x00
struct FMeshMergingSettings {
	// Fields
	bool bGenerateLightMapUV; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty TargetLightMapResolution; // Offset: 0x04 // Size: 0x04
	bool bComputedLightMapResolution; // Offset: 0x08 // Size: 0x01
	bool bImportVertexColors; // Offset: 0x09 // Size: 0x01
	bool bPivotPointAtZero; // Offset: 0x0a // Size: 0x01
	bool bMergePhysicsData; // Offset: 0x0b // Size: 0x01
	bool bAssignLODGroup; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty LODGroupIndex; // Offset: 0x10 // Size: 0x04
	bool bMergeMaterials; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct FMaterialProxySettings MaterialSettings; // Offset: 0x18 // Size: 0x94
	bool bBakeVertexDataToMesh; // Offset: 0xac // Size: 0x01
	bool bUseVertexDataForBakingMaterial; // Offset: 0xad // Size: 0x01
	bool bUseTextureBinning; // Offset: 0xae // Size: 0x01
	bool bReuseMeshLightmapUVs; // Offset: 0xaf // Size: 0x01
	bool bMergeEquivalentMaterials; // Offset: 0xb0 // Size: 0x01
	bool bClipUVRegion; // Offset: 0xb1 // Size: 0x01
	enum class EUVStrategy UVStrategy; // Offset: 0xb2 // Size: 0x01
	enum class EUVOutput OutputUVs[0x8]; // Offset: 0xb3 // Size: 0x08
	char pad_0xBB[0x1]; // Offset: 0xbb // Size: 0x01
	IntProperty GutterSize; // Offset: 0xbc // Size: 0x04
	bool bCalculateCorrectLODModel; // Offset: 0xc0 // Size: 0x01
	enum class EMeshLODSelectionType LODSelectionType; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x2]; // Offset: 0xc2 // Size: 0x02
	IntProperty ExportSpecificLOD; // Offset: 0xc4 // Size: 0x04
	IntProperty SpecificLOD; // Offset: 0xc8 // Size: 0x04
	bool bUseLandscapeCulling; // Offset: 0xcc // Size: 0x01
	bool bIncludeImposters; // Offset: 0xcd // Size: 0x01
	bool bAllowDistanceField; // Offset: 0xce // Size: 0x01
	bool bExportNormalMap; // Offset: 0xcf // Size: 0x01
	bool bExportMetallicMap; // Offset: 0xd0 // Size: 0x01
	bool bExportRoughnessMap; // Offset: 0xd1 // Size: 0x01
	bool bExportSpecularMap; // Offset: 0xd2 // Size: 0x01
	char pad_0xD3[0x1]; // Offset: 0xd3 // Size: 0x01
	IntProperty MergedMaterialAtlasResolution; // Offset: 0xd4 // Size: 0x04
	char pad_0xD8[0x4]; // Offset: 0xd8 // Size: 0x04
};

// Object Name: ScriptStruct Engine.MeshProxySettings
// Size: 0xc4 // Inherited bytes: 0x00
struct FMeshProxySettings {
	// Fields
	IntProperty ScreenSize; // Offset: 0x00 // Size: 0x04
	struct FMaterialProxySettings MaterialSettings; // Offset: 0x04 // Size: 0x94
	IntProperty TextureWidth; // Offset: 0x98 // Size: 0x04
	IntProperty TextureHeight; // Offset: 0x9c // Size: 0x04
	bool bExportNormalMap; // Offset: 0xa0 // Size: 0x01
	bool bExportMetallicMap; // Offset: 0xa1 // Size: 0x01
	bool bExportRoughnessMap; // Offset: 0xa2 // Size: 0x01
	bool bExportSpecularMap; // Offset: 0xa3 // Size: 0x01
	bool bCalculateCorrectLODModel; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	float MergeDistance; // Offset: 0xa8 // Size: 0x04
	float HardAngleThreshold; // Offset: 0xac // Size: 0x04
	IntProperty LightMapResolution; // Offset: 0xb0 // Size: 0x04
	bool bComputeLightMapResolution; // Offset: 0xb4 // Size: 0x01
	bool bRecalculateNormals; // Offset: 0xb5 // Size: 0x01
	bool bBakeVertexData; // Offset: 0xb6 // Size: 0x01
	bool bUseLandscapeCulling; // Offset: 0xb7 // Size: 0x01
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // Offset: 0xb8 // Size: 0x01
	bool bAssignLODGroup; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x2]; // Offset: 0xba // Size: 0x02
	IntProperty LODGroupIndex; // Offset: 0xbc // Size: 0x04
	bool bAggregateMeshes; // Offset: 0xc0 // Size: 0x01
	enum class EChartAggregationMode AggregatorMode; // Offset: 0xc1 // Size: 0x01
	bool bUseCustomHemisphere; // Offset: 0xc2 // Size: 0x01
	char pad_0xC3[0x1]; // Offset: 0xc3 // Size: 0x01
};

// Object Name: ScriptStruct Engine.MeshReductionSettings
// Size: 0x148 // Inherited bytes: 0x00
struct FMeshReductionSettings {
	// Fields
	IntProperty BaseLODModel; // Offset: 0x00 // Size: 0x04
	enum class EOptimizationMetric MetricToUse; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float PercentTriangles; // Offset: 0x08 // Size: 0x04
	float ScreenSize; // Offset: 0x0c // Size: 0x04
	float MaxDeviation; // Offset: 0x10 // Size: 0x04
	float PixelError; // Offset: 0x14 // Size: 0x04
	float WeldingThreshold; // Offset: 0x18 // Size: 0x04
	enum class EMeshFeatureImportance SilhouetteImportance; // Offset: 0x1c // Size: 0x01
	enum class EMeshFeatureImportance TextureImportance; // Offset: 0x1d // Size: 0x01
	enum class EMeshFeatureImportance ShadingImportance; // Offset: 0x1e // Size: 0x01
	enum class EMeshFeatureImportance VertexColorImportance; // Offset: 0x1f // Size: 0x01
	bool bRecalculateNormals; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	float HardAngleThreshold; // Offset: 0x24 // Size: 0x04
	bool bActive; // Offset: 0x28 // Size: 0x01
	bool bGenerateUniqueLightmapUVs; // Offset: 0x29 // Size: 0x01
	bool bKeepSymmetry; // Offset: 0x2a // Size: 0x01
	bool bVisibilityAided; // Offset: 0x2b // Size: 0x01
	bool bCullOccluded; // Offset: 0x2c // Size: 0x01
	enum class EMeshFeatureImportance VisibilityAggressiveness; // Offset: 0x2d // Size: 0x01
	bool bUseVertexWeights; // Offset: 0x2e // Size: 0x01
	bool bSimplifyMaterials; // Offset: 0x2f // Size: 0x01
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // Offset: 0x30 // Size: 0x80
	struct FMaterialProxySettings MaterialProxySettings; // Offset: 0xb0 // Size: 0x94
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PurchaseInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FPurchaseInfo {
	// Fields
	StrProperty Identifier; // Offset: 0x00 // Size: 0x10
	StrProperty DisplayName; // Offset: 0x10 // Size: 0x10
	StrProperty DisplayDescription; // Offset: 0x20 // Size: 0x10
	StrProperty DisplayPrice; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NameCurve
// Size: 0x68 // Inherited bytes: 0x58
struct FNameCurve : FIndexedCurve {
	// Fields
	struct TArray<struct FNameCurveKey> Keys; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NameCurveKey
// Size: 0x10 // Inherited bytes: 0x00
struct FNameCurveKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NavCollisionBox
// Size: 0x18 // Inherited bytes: 0x00
struct FNavCollisionBox {
	// Fields
	struct FVector Offset; // Offset: 0x00 // Size: 0x0c
	struct FVector Extent; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.NavCollisionCylinder
// Size: 0x14 // Inherited bytes: 0x00
struct FNavCollisionCylinder {
	// Fields
	struct FVector Offset; // Offset: 0x00 // Size: 0x0c
	float Radius; // Offset: 0x0c // Size: 0x04
	float Height; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.SupportedAreaData
// Size: 0x20 // Inherited bytes: 0x00
struct FSupportedAreaData {
	// Fields
	StrProperty AreaClassName; // Offset: 0x00 // Size: 0x10
	IntProperty AreaID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct UObject* AreaClass; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NavGraphNode
// Size: 0x18 // Inherited bytes: 0x00
struct FNavGraphNode {
	// Fields
	struct UObject* Owner; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NavGraphEdge
// Size: 0x18 // Inherited bytes: 0x00
struct FNavGraphEdge {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Engine.NavigationFilterFlags
// Size: 0x04 // Inherited bytes: 0x00
struct FNavigationFilterFlags {
	// Fields
	char bNavFlag0 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag1 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag2 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag3 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag4 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag5 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag6 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag7 : 1; // Offset: 0x00 // Size: 0x01
	char bNavFlag8 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag9 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag10 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag11 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag12 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag13 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag14 : 1; // Offset: 0x01 // Size: 0x01
	char bNavFlag15 : 1; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
};

// Object Name: ScriptStruct Engine.NavigationFilterArea
// Size: 0x18 // Inherited bytes: 0x00
struct FNavigationFilterArea {
	// Fields
	struct UNavArea* AreaClass; // Offset: 0x00 // Size: 0x08
	float TravelCostOverride; // Offset: 0x08 // Size: 0x04
	float EnteringCostOverride; // Offset: 0x0c // Size: 0x04
	char bIsExcluded : 1; // Offset: 0x10 // Size: 0x01
	char bOverrideTravelCost : 1; // Offset: 0x10 // Size: 0x01
	char bOverrideEnteringCost : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_3 : 5; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Engine.DynamicGenerateTargetNavigation
// Size: 0x14 // Inherited bytes: 0x00
struct FDynamicGenerateTargetNavigation {
	// Fields
	struct FVector TargetLocation; // Offset: 0x00 // Size: 0x0c
	float GenerateRadiusMin; // Offset: 0x0c // Size: 0x04
	float GenerateRadiusMax; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.NavDataConfig
// Size: 0x58 // Inherited bytes: 0x20
struct FNavDataConfig : FNavAgentProperties {
	// Fields
	struct FName Name; // Offset: 0x20 // Size: 0x08
	struct FColor Color; // Offset: 0x28 // Size: 0x04
	struct FVector DefaultQueryExtent; // Offset: 0x2c // Size: 0x0c
	struct ANavigationData* NavigationDataClass; // Offset: 0x38 // Size: 0x08
	struct FSoftClassPath NavigationDataClassName; // Offset: 0x40 // Size: 0x18
};

// Object Name: ScriptStruct Engine.NavAgentSelector
// Size: 0x04 // Inherited bytes: 0x00
struct FNavAgentSelector {
	// Fields
	char bSupportsAgent0 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent1 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent2 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent3 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent4 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent5 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent6 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent7 : 1; // Offset: 0x00 // Size: 0x01
	char bSupportsAgent8 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent9 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent10 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent11 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent12 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent13 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent14 : 1; // Offset: 0x01 // Size: 0x01
	char bSupportsAgent15 : 1; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
};

// Object Name: ScriptStruct Engine.NavigationLinkBase
// Size: 0x38 // Inherited bytes: 0x00
struct FNavigationLinkBase {
	// Fields
	float LeftProjectHeight; // Offset: 0x00 // Size: 0x04
	float MaxFallDownLength; // Offset: 0x04 // Size: 0x04
	enum class ENavLinkDirection Direction; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	float SnapRadius; // Offset: 0x10 // Size: 0x04
	float SnapHeight; // Offset: 0x14 // Size: 0x04
	struct FNavAgentSelector SupportedAgents; // Offset: 0x18 // Size: 0x04
	char bSupportsAgent0 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent1 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent2 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent3 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent4 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent5 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent6 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent7 : 1; // Offset: 0x1c // Size: 0x01
	char bSupportsAgent8 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent9 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent10 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent11 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent12 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent13 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent14 : 1; // Offset: 0x1d // Size: 0x01
	char bSupportsAgent15 : 1; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	char bUseSnapHeight : 1; // Offset: 0x20 // Size: 0x01
	char bSnapToCheapestArea : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag0 : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag1 : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag2 : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag3 : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag4 : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag5 : 1; // Offset: 0x20 // Size: 0x01
	char bCustomFlag6 : 1; // Offset: 0x21 // Size: 0x01
	char bCustomFlag7 : 1; // Offset: 0x21 // Size: 0x01
	char pad_0x21_2 : 6; // Offset: 0x21 // Size: 0x01
	char pad_0x22[0x6]; // Offset: 0x22 // Size: 0x06
	struct UNavArea* AreaClass; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.NavigationSegmentLink
// Size: 0x68 // Inherited bytes: 0x38
struct FNavigationSegmentLink : FNavigationLinkBase {
	// Fields
	struct FVector LeftStart; // Offset: 0x38 // Size: 0x0c
	struct FVector LeftEnd; // Offset: 0x44 // Size: 0x0c
	struct FVector RightStart; // Offset: 0x50 // Size: 0x0c
	struct FVector RightEnd; // Offset: 0x5c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.NavigationLink
// Size: 0x50 // Inherited bytes: 0x38
struct FNavigationLink : FNavigationLinkBase {
	// Fields
	struct FVector Left; // Offset: 0x38 // Size: 0x0c
	struct FVector Right; // Offset: 0x44 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.PacketSimulationSettings
// Size: 0x14 // Inherited bytes: 0x00
struct FPacketSimulationSettings {
	// Fields
	IntProperty PktLoss; // Offset: 0x00 // Size: 0x04
	IntProperty PktOrder; // Offset: 0x04 // Size: 0x04
	IntProperty PktDup; // Offset: 0x08 // Size: 0x04
	IntProperty PktLag; // Offset: 0x0c // Size: 0x04
	IntProperty PktLagVariance; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.RPCSharedSerializationCacheManager
// Size: 0xf0 // Inherited bytes: 0x00
struct FRPCSharedSerializationCacheManager {
	// Fields
	char pad_0x0[0xf0]; // Offset: 0x00 // Size: 0xf0
};

// Object Name: ScriptStruct Engine.RPCFunctionCallInfoCacheEntry
// Size: 0x14 // Inherited bytes: 0x00
struct FRPCFunctionCallInfoCacheEntry {
	// Fields
	char pad_0x0[0x14]; // Offset: 0x00 // Size: 0x14
};

// Object Name: ScriptStruct Engine.RPCSerializationCacheEntry
// Size: 0x20 // Inherited bytes: 0x00
struct FRPCSerializationCacheEntry {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Engine.NetBudgetStageDef
// Size: 0x18 // Inherited bytes: 0x00
struct FNetBudgetStageDef {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	float Order; // Offset: 0x08 // Size: 0x04
	float Weight; // Offset: 0x0c // Size: 0x04
	float MinRatio; // Offset: 0x10 // Size: 0x04
	float MaxRatio; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.LocationNetSerializeLODDetailInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FLocationNetSerializeLODDetailInfo {
	// Fields
	float DistSqLOD1; // Offset: 0x00 // Size: 0x04
	float DistSqLOD2; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ActorReplicateFreqLODGroup
// Size: 0x28 // Inherited bytes: 0x00
struct FActorReplicateFreqLODGroup {
	// Fields
	struct FName Category; // Offset: 0x00 // Size: 0x08
	char LODEnabled : 1; // Offset: 0x08 // Size: 0x01
	char LODDistEnhancedOnBack : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_2 : 6; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float LODBackEnhanceMinDistSq; // Offset: 0x0c // Size: 0x04
	float LODBackEnhanceFactor; // Offset: 0x10 // Size: 0x04
	float LODLongDistViewFactor; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FActorReplicateFreqLODConfig> LODDistConfigs; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ActorReplicateFreqLODConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FActorReplicateFreqLODConfig {
	// Fields
	float DistSquared; // Offset: 0x00 // Size: 0x04
	float NetUpdateFreq; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Engine.Vector4_NetQuantize10
// Size: 0x10 // Inherited bytes: 0x10
struct FVector4_NetQuantize10 : FVector4 {
};

// Object Name: ScriptStruct Engine.Vector4_NetQuantize
// Size: 0x10 // Inherited bytes: 0x10
struct FVector4_NetQuantize : FVector4 {
};

// Object Name: ScriptStruct Engine.ObjectPoolItemWrapper
// Size: 0x20 // Inherited bytes: 0x00
struct FObjectPoolItemWrapper {
	// Fields
	struct UObject* Obj; // Offset: 0x00 // Size: 0x08
	float TotalTimeToBeRemove; // Offset: 0x08 // Size: 0x04
	float RemoveTimer; // Offset: 0x0c // Size: 0x04
	bool bNeedReconstruct; // Offset: 0x10 // Size: 0x01
	bool bRecycledOnce; // Offset: 0x11 // Size: 0x01
	bool bNeedPostInit; // Offset: 0x12 // Size: 0x01
	bool bNeedRegisterComp; // Offset: 0x13 // Size: 0x01
	IntProperty IndexOfSkipGCObjectIndicesSet; // Offset: 0x14 // Size: 0x04
	uint64 MarkRecyleFrame; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ObjectPoolConfig
// Size: 0x68 // Inherited bytes: 0x00
struct FObjectPoolConfig {
	// Fields
	struct UClass* ClassType; // Offset: 0x00 // Size: 0x28
	bool bIsPlayerPawn; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty InitCapacity; // Offset: 0x2c // Size: 0x04
	IntProperty MaxCapacity; // Offset: 0x30 // Size: 0x04
	float AutoReduceTime; // Offset: 0x34 // Size: 0x04
	StrProperty ExcludeLevelNames; // Offset: 0x38 // Size: 0x10
	IntProperty BackendSwitcherCBit; // Offset: 0x48 // Size: 0x04
	char ClientSwitcher; // Offset: 0x4c // Size: 0x01
	bool bPreCreateObject; // Offset: 0x4d // Size: 0x01
	bool bRecyclable; // Offset: 0x4e // Size: 0x01
	bool bRecordTemplateParams; // Offset: 0x4f // Size: 0x01
	bool bRecreateWhenRecycle; // Offset: 0x50 // Size: 0x01
	bool bReconstructWhenRecycle; // Offset: 0x51 // Size: 0x01
	bool bPreRegisterComps; // Offset: 0x52 // Size: 0x01
	bool bPreInitComps; // Offset: 0x53 // Size: 0x01
	bool bPostInitComps; // Offset: 0x54 // Size: 0x01
	bool bNeedAutoExpand; // Offset: 0x55 // Size: 0x01
	bool bEnableForChildClasses; // Offset: 0x56 // Size: 0x01
	char pad_0x57[0x1]; // Offset: 0x57 // Size: 0x01
	StrProperty CustomPoolClass; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ObjectPoolDefaultFence
// Size: 0x18 // Inherited bytes: 0x00
struct FObjectPoolDefaultFence {
	// Fields
	enum class EObjectPoolFenceType FenceType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty FenceNames; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NodeMap
// Size: 0x40 // Inherited bytes: 0x00
struct FNodeMap {
	// Fields
	struct FName TargetNodeName; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform SourceToTargetTransform; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct Engine.ObjectPoolManager
// Size: 0xb8 // Inherited bytes: 0x00
struct FObjectPoolManager {
	// Fields
	bool bUseGMCommand; // Offset: 0x00 // Size: 0x01
	bool bEnabled; // Offset: 0x01 // Size: 0x01
	bool bEnabledAutoDestroy; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x5]; // Offset: 0x03 // Size: 0x05
	MapProperty Pools; // Offset: 0x08 // Size: 0x50
	MapProperty mapClassConfigs; // Offset: 0x58 // Size: 0x50
	char pad_0xA8[0x8]; // Offset: 0xa8 // Size: 0x08
	struct AActor* Holder; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ObjectPoolClassConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FObjectPoolClassConfig {
	// Fields
	struct FName ObjectClassName; // Offset: 0x00 // Size: 0x08
	bool ObjectPoolEnable; // Offset: 0x08 // Size: 0x01
	bool ObjectPoolEnableForComponents; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	IntProperty PoolSize; // Offset: 0x0c // Size: 0x04
	IntProperty LifePeriodTime; // Offset: 0x10 // Size: 0x04
	bool UseOldPoolLogic; // Offset: 0x14 // Size: 0x01
	bool DisableOnLowMemDevice; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	IntProperty BackendSwitchType; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.ObjectPool
// Size: 0xc8 // Inherited bytes: 0x00
struct FObjectPool {
	// Fields
	struct UObject* ObjectClass; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UObject*> Pool; // Offset: 0x08 // Size: 0x10
	MapProperty RecycleTime; // Offset: 0x18 // Size: 0x50
	char pad_0x68[0x50]; // Offset: 0x68 // Size: 0x50
	IntProperty Size; // Offset: 0xb8 // Size: 0x04
	bool bAutoDestroy; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
	IntProperty ObjectLifePeriodTime; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
};

// Object Name: ScriptStruct Engine.CDLODMeshNodeData
// Size: 0x18 // Inherited bytes: 0x00
struct FCDLODMeshNodeData {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x00 // Size: 0x08
	struct UMaterialInstanceConstant* MaterialInstance; // Offset: 0x08 // Size: 0x08
	struct UMaterialInstance* MobileMaterialInterface; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.GerstnerWaterWaveGeneratorSimple
// Size: 0x50 // Inherited bytes: 0x00
struct FGerstnerWaterWaveGeneratorSimple {
	// Fields
	IntProperty NumWaves; // Offset: 0x00 // Size: 0x04
	IntProperty Seed; // Offset: 0x04 // Size: 0x04
	float Randomness; // Offset: 0x08 // Size: 0x04
	float MinWavelength; // Offset: 0x0c // Size: 0x04
	float MaxWavelength; // Offset: 0x10 // Size: 0x04
	float WavelengthFalloff; // Offset: 0x14 // Size: 0x04
	float MinAmplitude; // Offset: 0x18 // Size: 0x04
	float MaxAmplitude; // Offset: 0x1c // Size: 0x04
	float AmplitudeFalloff; // Offset: 0x20 // Size: 0x04
	float DirectionAngularSpreadDeg; // Offset: 0x24 // Size: 0x04
	float SmallWaveSteepness; // Offset: 0x28 // Size: 0x04
	float LargeWaveSteepness; // Offset: 0x2c // Size: 0x04
	float SteepnessFalloff; // Offset: 0x30 // Size: 0x04
	float WaveSpeed; // Offset: 0x34 // Size: 0x04
	float Gerstnersamplesize; // Offset: 0x38 // Size: 0x04
	float GerstnerParallelness; // Offset: 0x3c // Size: 0x04
	struct TArray<struct FGerstnerWave> GerstnerWaves; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Engine.GerstnerWave
// Size: 0x28 // Inherited bytes: 0x00
struct FGerstnerWave {
	// Fields
	float WaveLength; // Offset: 0x00 // Size: 0x04
	float Amplitude; // Offset: 0x04 // Size: 0x04
	float Steepness; // Offset: 0x08 // Size: 0x04
	float GerstnerAngle; // Offset: 0x0c // Size: 0x04
	struct FVector2D WaveVector; // Offset: 0x10 // Size: 0x08
	float WaveSpeed; // Offset: 0x18 // Size: 0x04
	float WKA; // Offset: 0x1c // Size: 0x04
	float Q; // Offset: 0x20 // Size: 0x04
	float PhaseOffset; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ParticleBurst
// Size: 0x0c // Inherited bytes: 0x00
struct FParticleBurst {
	// Fields
	IntProperty Count; // Offset: 0x00 // Size: 0x04
	IntProperty CountLow; // Offset: 0x04 // Size: 0x04
	float Time; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FParticleRandomSeedInfo {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	char bGetSeedFromInstance : 1; // Offset: 0x08 // Size: 0x01
	char bInstanceSeedIsIndex : 1; // Offset: 0x08 // Size: 0x01
	char bResetSeedOnEmitterLooping : 1; // Offset: 0x08 // Size: 0x01
	char bRandomlySelectSeedArray : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_4 : 4; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct TArray<IntProperty> RandomSeeds; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 // Inherited bytes: 0x00
struct FParticleCurvePair {
	// Fields
	StrProperty CurveName; // Offset: 0x00 // Size: 0x10
	struct UObject* CurveObject; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 // Inherited bytes: 0x00
struct FBeamModifierOptions {
	// Fields
	char bModify : 1; // Offset: 0x00 // Size: 0x01
	char bScale : 1; // Offset: 0x00 // Size: 0x01
	char bLock : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FParticleEvent_GenerateInfo {
	// Fields
	enum class EParticleEventType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Frequency; // Offset: 0x04 // Size: 0x04
	IntProperty ParticleFrequency; // Offset: 0x08 // Size: 0x04
	char FirstTimeOnly : 1; // Offset: 0x0c // Size: 0x01
	char LastTimeOnly : 1; // Offset: 0x0c // Size: 0x01
	char UseReflectedImpactVector : 1; // Offset: 0x0c // Size: 0x01
	char bUseOrbitOffset : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_4 : 4; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FName CustomName; // Offset: 0x10 // Size: 0x08
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FLocationBoneSocketInfo {
	// Fields
	struct FName BoneSocketName; // Offset: 0x00 // Size: 0x08
	struct FVector Offset; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.OrbitOptions
// Size: 0x04 // Inherited bytes: 0x00
struct FOrbitOptions {
	// Fields
	char bProcessDuringSpawn : 1; // Offset: 0x00 // Size: 0x01
	char bProcessDuringUpdate : 1; // Offset: 0x00 // Size: 0x01
	char bUseEmitterTime : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x48 // Inherited bytes: 0x00
struct FEmitterDynamicParameter {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	char bUseEmitterTime : 1; // Offset: 0x08 // Size: 0x01
	char bSpawnTimeOnly : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_2 : 6; // Offset: 0x08 // Size: 0x01
	enum class EEmitterDynamicParameterValue ValueMethod; // Offset: 0x09 // Size: 0x01
	char bScaleVelocityByParamValue : 1; // Offset: 0x0a // Size: 0x01
	char pad_0xA_1 : 7; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x5]; // Offset: 0x0b // Size: 0x05
	struct FRawDistributionFloat ParamValue; // Offset: 0x10 // Size: 0x38
};

// Object Name: ScriptStruct Engine.BeamTargetData
// Size: 0x10 // Inherited bytes: 0x00
struct FBeamTargetData {
	// Fields
	struct FName TargetName; // Offset: 0x00 // Size: 0x08
	float TargetPercentage; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x190 // Inherited bytes: 0x00
struct FGPUSpriteResourceData {
	// Fields
	struct TArray<struct FColor> QuantizedColorSamples; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FColor> QuantizedMiscSamples; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // Offset: 0x20 // Size: 0x10
	struct FVector4 ColorScale; // Offset: 0x30 // Size: 0x10
	struct FVector4 ColorBias; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FColor> QuantizedColorSamplesHDR; // Offset: 0x50 // Size: 0x10
	struct FVector4 ColorScaleHDR; // Offset: 0x60 // Size: 0x10
	struct FVector4 ColorBiasHDR; // Offset: 0x70 // Size: 0x10
	struct FVector4 MiscScale; // Offset: 0x80 // Size: 0x10
	struct FVector4 MiscBias; // Offset: 0x90 // Size: 0x10
	struct FVector4 SimulationAttrCurveScale; // Offset: 0xa0 // Size: 0x10
	struct FVector4 SimulationAttrCurveBias; // Offset: 0xb0 // Size: 0x10
	struct FVector4 SubImageSize; // Offset: 0xc0 // Size: 0x10
	struct FVector4 SizeBySpeed; // Offset: 0xd0 // Size: 0x10
	struct FVector ConstantAcceleration; // Offset: 0xe0 // Size: 0x0c
	struct FVector OrbitOffsetBase; // Offset: 0xec // Size: 0x0c
	struct FVector OrbitOffsetRange; // Offset: 0xf8 // Size: 0x0c
	struct FVector OrbitFrequencyBase; // Offset: 0x104 // Size: 0x0c
	struct FVector OrbitFrequencyRange; // Offset: 0x110 // Size: 0x0c
	struct FVector OrbitPhaseBase; // Offset: 0x11c // Size: 0x0c
	struct FVector OrbitPhaseRange; // Offset: 0x128 // Size: 0x0c
	float GlobalVectorFieldScale; // Offset: 0x134 // Size: 0x04
	float GlobalVectorFieldTightness; // Offset: 0x138 // Size: 0x04
	float PerParticleVectorFieldScale; // Offset: 0x13c // Size: 0x04
	float PerParticleVectorFieldBias; // Offset: 0x140 // Size: 0x04
	float DragCoefficientScale; // Offset: 0x144 // Size: 0x04
	float DragCoefficientBias; // Offset: 0x148 // Size: 0x04
	float ResilienceScale; // Offset: 0x14c // Size: 0x04
	float ResilienceBias; // Offset: 0x150 // Size: 0x04
	float CollisionRadiusScale; // Offset: 0x154 // Size: 0x04
	float CollisionRadiusBias; // Offset: 0x158 // Size: 0x04
	float CollisionTimeBias; // Offset: 0x15c // Size: 0x04
	float CollisionRandomSpread; // Offset: 0x160 // Size: 0x04
	float CollisionRandomDistribution; // Offset: 0x164 // Size: 0x04
	float OneMinusFriction; // Offset: 0x168 // Size: 0x04
	float RotationRateScale; // Offset: 0x16c // Size: 0x04
	float CameraMotionBlurAmount; // Offset: 0x170 // Size: 0x04
	enum class EParticleScreenAlignment ScreenAlignment; // Offset: 0x174 // Size: 0x01
	enum class EParticleAxisLock LockAxisFlag; // Offset: 0x175 // Size: 0x01
	char pad_0x176[0x2]; // Offset: 0x176 // Size: 0x02
	struct FVector2D PivotOffset; // Offset: 0x178 // Size: 0x08
	char bRemoveHMDRoll : 1; // Offset: 0x180 // Size: 0x01
	char pad_0x180_1 : 7; // Offset: 0x180 // Size: 0x01
	char pad_0x181[0x3]; // Offset: 0x181 // Size: 0x03
	float MinFacingCameraBlendDistance; // Offset: 0x184 // Size: 0x04
	float MaxFacingCameraBlendDistance; // Offset: 0x188 // Size: 0x04
	char pad_0x18C[0x4]; // Offset: 0x18c // Size: 0x04
};

// Object Name: ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x3c0 // Inherited bytes: 0x00
struct FGPUSpriteEmitterInfo {
	// Fields
	struct UParticleModuleRequired* RequiredModule; // Offset: 0x00 // Size: 0x08
	struct UParticleModuleSpawn* SpawnModule; // Offset: 0x08 // Size: 0x08
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // Offset: 0x10 // Size: 0x08
	struct TArray<struct UParticleModule*> SpawnModules; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // Offset: 0x30 // Size: 0x70
	struct FFloatDistribution VectorFieldScale; // Offset: 0xa0 // Size: 0x28
	struct FFloatDistribution DragCoefficient; // Offset: 0xc8 // Size: 0x28
	struct FFloatDistribution PointAttractorStrength; // Offset: 0xf0 // Size: 0x28
	struct FFloatDistribution Resilience; // Offset: 0x118 // Size: 0x28
	struct FVector ConstantAcceleration; // Offset: 0x140 // Size: 0x0c
	struct FVector PointAttractorPosition; // Offset: 0x14c // Size: 0x0c
	float PointAttractorRadiusSq; // Offset: 0x158 // Size: 0x04
	struct FVector OrbitOffsetBase; // Offset: 0x15c // Size: 0x0c
	struct FVector OrbitOffsetRange; // Offset: 0x168 // Size: 0x0c
	struct FVector2D InvMaxSize; // Offset: 0x174 // Size: 0x08
	float InvRotationRateScale; // Offset: 0x17c // Size: 0x04
	float MaxLifetime; // Offset: 0x180 // Size: 0x04
	IntProperty MaxParticleCount; // Offset: 0x184 // Size: 0x04
	enum class EParticleScreenAlignment ScreenAlignment; // Offset: 0x188 // Size: 0x01
	enum class EParticleAxisLock LockAxisFlag; // Offset: 0x189 // Size: 0x01
	char bEnableCollision : 1; // Offset: 0x18a // Size: 0x01
	char pad_0x18A_1 : 7; // Offset: 0x18a // Size: 0x01
	enum class EParticleCollisionMode CollisionMode; // Offset: 0x18b // Size: 0x01
	char bRemoveHMDRoll : 1; // Offset: 0x18c // Size: 0x01
	char pad_0x18C_1 : 7; // Offset: 0x18c // Size: 0x01
	char pad_0x18D[0x3]; // Offset: 0x18d // Size: 0x03
	float MinFacingCameraBlendDistance; // Offset: 0x190 // Size: 0x04
	float MaxFacingCameraBlendDistance; // Offset: 0x194 // Size: 0x04
	struct FRawDistributionVector DynamicColor; // Offset: 0x198 // Size: 0x50
	struct FRawDistributionFloat DynamicAlpha; // Offset: 0x1e8 // Size: 0x38
	struct FRawDistributionVector DynamicColorScale; // Offset: 0x220 // Size: 0x50
	struct FRawDistributionFloat DynamicAlphaScale; // Offset: 0x270 // Size: 0x38
	struct FRawDistributionVector DynamicColorHDR; // Offset: 0x2a8 // Size: 0x50
	struct FRawDistributionFloat DynamicAlphaHDR; // Offset: 0x2f8 // Size: 0x38
	struct FRawDistributionVector DynamicColorScaleHDR; // Offset: 0x330 // Size: 0x50
	struct FRawDistributionFloat DynamicAlphaScaleHDR; // Offset: 0x380 // Size: 0x38
	char pad_0x3B8[0x8]; // Offset: 0x3b8 // Size: 0x08
};

// Object Name: ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FGPUSpriteLocalVectorFieldInfo {
	// Fields
	struct UVectorField* Field; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
	struct FRotator MinInitialRotation; // Offset: 0x40 // Size: 0x0c
	struct FRotator MaxInitialRotation; // Offset: 0x4c // Size: 0x0c
	struct FRotator RotationRate; // Offset: 0x58 // Size: 0x0c
	float Intensity; // Offset: 0x64 // Size: 0x04
	float Tightness; // Offset: 0x68 // Size: 0x04
	char bIgnoreComponentTransform : 1; // Offset: 0x6c // Size: 0x01
	char bTileX : 1; // Offset: 0x6c // Size: 0x01
	char bTileY : 1; // Offset: 0x6c // Size: 0x01
	char bTileZ : 1; // Offset: 0x6c // Size: 0x01
	char bUseFixDT : 1; // Offset: 0x6c // Size: 0x01
	char pad_0x6C_5 : 3; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
};

// Object Name: ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedEmitterMaterial {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* Material; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.LODSoloTrack
// Size: 0x10 // Inherited bytes: 0x00
struct FLODSoloTrack {
	// Fields
	struct TArray<char> SoloEnableSetting; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 // Inherited bytes: 0x00
struct FParticleSystemLOD {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.ParticleCurveParam
// Size: 0x58 // Inherited bytes: 0x00
struct FParticleCurveParam {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	enum class EParticleCurveParamType ParamType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FInterpCurveFloat FloatCurve; // Offset: 0x10 // Size: 0x18
	struct FInterpCurveVector VectorCurve; // Offset: 0x28 // Size: 0x18
	struct FInterpCurveLinearColor ColorCurve; // Offset: 0x40 // Size: 0x18
};

// Object Name: ScriptStruct Engine.ParticleMultiCurveParam
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleMultiCurveParam {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	IntProperty ActiveCurveIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleSystemReplayFrame {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleEmitterReplayFrame {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.PhysicalAnimationData
// Size: 0x28 // Inherited bytes: 0x00
struct FPhysicalAnimationData {
	// Fields
	struct FName BodyName; // Offset: 0x00 // Size: 0x08
	char bIsLocalSimulation : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_1 : 7; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float OrientationStrength; // Offset: 0x0c // Size: 0x04
	float AngularVelocityStrength; // Offset: 0x10 // Size: 0x04
	float PositionStrength; // Offset: 0x14 // Size: 0x04
	float VelocityStrength; // Offset: 0x18 // Size: 0x04
	float MaxLinearForce; // Offset: 0x1c // Size: 0x04
	float MaxAngularForce; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.TireFrictionScalePair
// Size: 0x10 // Inherited bytes: 0x00
struct FTireFrictionScalePair {
	// Fields
	struct UTireType* TireType; // Offset: 0x00 // Size: 0x08
	float FrictionScale; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x30 // Inherited bytes: 0x00
struct FPhysicalAnimationProfile {
	// Fields
	struct FName ProfileName; // Offset: 0x00 // Size: 0x08
	struct FPhysicalAnimationData PhysicalAnimationData; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x110 // Inherited bytes: 0x00
struct FPhysicsConstraintProfileHandle {
	// Fields
	struct FConstraintProfileProperties ProfileProperties; // Offset: 0x00 // Size: 0x104
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
	struct FName ProfileName; // Offset: 0x108 // Size: 0x08
};

// Object Name: ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x10 // Inherited bytes: 0x00
struct FPhysicalSurfaceName {
	// Fields
	enum class EPhysicalSurface Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName Name; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.DelegateArray
// Size: 0x10 // Inherited bytes: 0x00
struct FDelegateArray {
	// Fields
	struct TArray<DelegateProperty> Delegates; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TViewTarget
// Size: 0x5d0 // Inherited bytes: 0x00
struct FTViewTarget {
	// Fields
	struct AActor* Target; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FMinimalViewInfo POV; // Offset: 0x10 // Size: 0x5b0
	struct APlayerState* PlayerState; // Offset: 0x5c0 // Size: 0x08
	char pad_0x5C8[0x8]; // Offset: 0x5c8 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CameraCacheEntry
// Size: 0x5c0 // Inherited bytes: 0x00
struct FCameraCacheEntry {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FMinimalViewInfo POV; // Offset: 0x10 // Size: 0x5b0
};

// Object Name: ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 // Inherited bytes: 0x00
struct FInputAxisKeyMapping {
	// Fields
	struct FName AxisName; // Offset: 0x00 // Size: 0x08
	struct FKey Key; // Offset: 0x08 // Size: 0x18
	float Scale; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 // Inherited bytes: 0x00
struct FInputActionKeyMapping {
	// Fields
	struct FName ActionName; // Offset: 0x00 // Size: 0x08
	struct FKey Key; // Offset: 0x08 // Size: 0x18
	char bShift : 1; // Offset: 0x20 // Size: 0x01
	char bCtrl : 1; // Offset: 0x20 // Size: 0x01
	char bAlt : 1; // Offset: 0x20 // Size: 0x01
	char bCmd : 1; // Offset: 0x20 // Size: 0x01
	char pad_0x20_4 : 4; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 // Inherited bytes: 0x00
struct FInputAxisConfigEntry {
	// Fields
	struct FName AxisKeyName; // Offset: 0x00 // Size: 0x08
	struct FInputAxisProperties AxisProperties; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.InputAxisProperties
// Size: 0x10 // Inherited bytes: 0x00
struct FInputAxisProperties {
	// Fields
	float DeadZone; // Offset: 0x00 // Size: 0x04
	float Sensitivity; // Offset: 0x04 // Size: 0x04
	float Exponent; // Offset: 0x08 // Size: 0x04
	char bInvert : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_1 : 7; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Engine.KeyBind
// Size: 0x30 // Inherited bytes: 0x00
struct FKeyBind {
	// Fields
	struct FKey Key; // Offset: 0x00 // Size: 0x18
	StrProperty Command; // Offset: 0x18 // Size: 0x10
	char Control : 1; // Offset: 0x28 // Size: 0x01
	char Shift : 1; // Offset: 0x28 // Size: 0x01
	char Alt : 1; // Offset: 0x28 // Size: 0x01
	char Cmd : 1; // Offset: 0x28 // Size: 0x01
	char bIgnoreCtrl : 1; // Offset: 0x28 // Size: 0x01
	char bIgnoreShift : 1; // Offset: 0x28 // Size: 0x01
	char bIgnoreAlt : 1; // Offset: 0x28 // Size: 0x01
	char bIgnoreCmd : 1; // Offset: 0x28 // Size: 0x01
	char bDisabled : 1; // Offset: 0x29 // Size: 0x01
	char pad_0x29_1 : 7; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct Engine.PlayerMuteList
// Size: 0x38 // Inherited bytes: 0x00
struct FPlayerMuteList {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
	bool bHasVoiceHandshakeCompleted; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	IntProperty VoiceChannelIdx; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PoseDataContainer
// Size: 0x90 // Inherited bytes: 0x00
struct FPoseDataContainer {
	// Fields
	struct TArray<struct FSmartName> PoseNames; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FPoseData> Poses; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FName> Tracks; // Offset: 0x20 // Size: 0x10
	MapProperty TrackMap; // Offset: 0x30 // Size: 0x50
	struct TArray<struct FAnimCurveBase> Curves; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct Engine.PoseData
// Size: 0x30 // Inherited bytes: 0x00
struct FPoseData {
	// Fields
	struct TArray<struct FTransform> LocalSpacePose; // Offset: 0x00 // Size: 0x10
	struct TArray<bool> LocalSpacePoseMask; // Offset: 0x10 // Size: 0x10
	struct TArray<float> CurveData; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 // Inherited bytes: 0x00
struct FPreviewAssetAttachContainer {
	// Fields
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 // Inherited bytes: 0x00
struct FPreviewAttachedObjectPair {
	// Fields
	struct UObject* AttachedObject; // Offset: 0x00 // Size: 0x28
	struct UObject* Object; // Offset: 0x28 // Size: 0x08
	struct FName AttachedTo; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 // Inherited bytes: 0x00
struct FPreviewMeshCollectionEntry {
	// Fields
	struct USkeletalMesh* SkeletalMesh; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FSpriteCategoryInfo {
	// Fields
	struct FName Category; // Offset: 0x00 // Size: 0x08
	struct FText DisplayName; // Offset: 0x08 // Size: 0x18
	struct FText Description; // Offset: 0x20 // Size: 0x18
};

// Object Name: ScriptStruct Engine.WorldRegionManager
// Size: 0x258 // Inherited bytes: 0x00
struct FWorldRegionManager {
	// Fields
	char pad_0x0[0xf8]; // Offset: 0x00 // Size: 0xf8
	struct UWorld* World; // Offset: 0xf8 // Size: 0x08
	MapProperty RegionIDToObjectList_Static; // Offset: 0x100 // Size: 0x50
	MapProperty RegionIDToObjectList_NonStatic; // Offset: 0x150 // Size: 0x50
	MapProperty ObjectToRegionID_NonStatic; // Offset: 0x1a0 // Size: 0x50
	char pad_0x1F0[0x68]; // Offset: 0x1f0 // Size: 0x68
};

// Object Name: ScriptStruct Engine.RegionObjectItemList
// Size: 0x10 // Inherited bytes: 0x00
struct FRegionObjectItemList {
	// Fields
	struct TArray<struct FRegionObjectItem> List; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RegionObjectItem
// Size: 0x20 // Inherited bytes: 0x00
struct FRegionObjectItem {
	// Fields
	struct UObject* Target; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	StrProperty TargetName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TransformBase
// Size: 0x28 // Inherited bytes: 0x00
struct FTransformBase {
	// Fields
	struct FName Node; // Offset: 0x00 // Size: 0x08
	struct FTransformBaseConstraint Constraints[0x2]; // Offset: 0x08 // Size: 0x20
};

// Object Name: ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 // Inherited bytes: 0x00
struct FTransformBaseConstraint {
	// Fields
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RigTransformConstraint
// Size: 0x18 // Inherited bytes: 0x00
struct FRigTransformConstraint {
	// Fields
	enum class EConstraintTransform TranformType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName ParentSpace; // Offset: 0x08 // Size: 0x08
	float Weight; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.Node
// Size: 0x60 // Inherited bytes: 0x00
struct FNode {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FName ParentName; // Offset: 0x08 // Size: 0x08
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
	StrProperty DisplayName; // Offset: 0x40 // Size: 0x10
	bool bAdvanced; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0xf]; // Offset: 0x51 // Size: 0x0f
};

// Object Name: ScriptStruct Engine.RootMotionSource
// Size: 0x90 // Inherited bytes: 0x00
struct FRootMotionSource {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	uint16_t Priority; // Offset: 0x08 // Size: 0x02
	uint16_t LocalID; // Offset: 0x0a // Size: 0x02
	enum class ERootMotionAccumulateMode AccumulateMode; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FName InstanceName; // Offset: 0x10 // Size: 0x08
	float StartTime; // Offset: 0x18 // Size: 0x04
	float CurrentTime; // Offset: 0x1c // Size: 0x04
	float PreviousTime; // Offset: 0x20 // Size: 0x04
	float Duration; // Offset: 0x24 // Size: 0x04
	struct FRootMotionSourceStatus status; // Offset: 0x28 // Size: 0x01
	struct FRootMotionSourceSettings Settings; // Offset: 0x29 // Size: 0x01
	bool bInLocalSpace; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
	struct FRootMotionMovementParams RootMotionParams; // Offset: 0x30 // Size: 0x40
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // Offset: 0x70 // Size: 0x14
	char pad_0x84[0xc]; // Offset: 0x84 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 // Inherited bytes: 0x00
struct FRootMotionFinishVelocitySettings {
	// Fields
	enum class ERootMotionFinishVelocityMode Mode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector SetVelocity; // Offset: 0x04 // Size: 0x0c
	float ClampVelocity; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x01 // Inherited bytes: 0x00
struct FRootMotionSourceStatus {
	// Fields
	char Flags; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xc0 // Inherited bytes: 0x90
struct FRootMotionSource_JumpForce : FRootMotionSource {
	// Fields
	struct FRotator Rotation; // Offset: 0x84 // Size: 0x0c
	float Distance; // Offset: 0x90 // Size: 0x04
	float Height; // Offset: 0x94 // Size: 0x04
	bool bDisableTimeout; // Offset: 0x98 // Size: 0x01
	struct UCurveVector* PathOffsetCurve; // Offset: 0xa0 // Size: 0x08
	struct UCurveFloat* TimeMappingCurve; // Offset: 0xa8 // Size: 0x08
	char pad_0xB5[0xb]; // Offset: 0xb5 // Size: 0x0b
};

// Object Name: ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xc0 // Inherited bytes: 0x90
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	// Fields
	struct FVector StartLocation; // Offset: 0x84 // Size: 0x0c
	struct FVector InitialTargetLocation; // Offset: 0x90 // Size: 0x0c
	struct FVector TargetLocation; // Offset: 0x9c // Size: 0x0c
	bool bRestrictSpeedToExpected; // Offset: 0xa8 // Size: 0x01
	struct UCurveVector* PathOffsetCurve; // Offset: 0xb0 // Size: 0x08
	struct UCurveFloat* TimeMappingCurve; // Offset: 0xb8 // Size: 0x08
};

// Object Name: ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xb0 // Inherited bytes: 0x90
struct FRootMotionSource_MoveToForce : FRootMotionSource {
	// Fields
	struct FVector StartLocation; // Offset: 0x84 // Size: 0x0c
	struct FVector TargetLocation; // Offset: 0x90 // Size: 0x0c
	bool bRestrictSpeedToExpected; // Offset: 0x9c // Size: 0x01
	struct UCurveVector* PathOffsetCurve; // Offset: 0xa0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xd0 // Inherited bytes: 0x90
struct FRootMotionSource_RadialForce : FRootMotionSource {
	// Fields
	struct FVector Location; // Offset: 0x84 // Size: 0x0c
	struct AActor* LocationActor; // Offset: 0x90 // Size: 0x08
	float Radius; // Offset: 0x98 // Size: 0x04
	float Strength; // Offset: 0x9c // Size: 0x04
	bool bIsPush; // Offset: 0xa0 // Size: 0x01
	bool bNoZForce; // Offset: 0xa1 // Size: 0x01
	struct UCurveFloat* StrengthDistanceFalloff; // Offset: 0xa8 // Size: 0x08
	struct UCurveFloat* StrengthOverTime; // Offset: 0xb0 // Size: 0x08
	bool bUseFixedWorldDirection; // Offset: 0xb8 // Size: 0x01
	struct FRotator FixedWorldDirection; // Offset: 0xbc // Size: 0x0c
	char pad_0xCB[0x5]; // Offset: 0xcb // Size: 0x05
};

// Object Name: ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xa0 // Inherited bytes: 0x90
struct FRootMotionSource_ConstantForce : FRootMotionSource {
	// Fields
	struct FVector Force; // Offset: 0x84 // Size: 0x0c
	struct UCurveFloat* StrengthOverTime; // Offset: 0x90 // Size: 0x08
};

// Object Name: ScriptStruct Engine.CameraExposureSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FCameraExposureSettings {
	// Fields
	enum class EAutoExposureMethod method; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float LowPercent; // Offset: 0x04 // Size: 0x04
	float HighPercent; // Offset: 0x08 // Size: 0x04
	float MinBrightness; // Offset: 0x0c // Size: 0x04
	float MaxBrightness; // Offset: 0x10 // Size: 0x04
	float SpeedUp; // Offset: 0x14 // Size: 0x04
	float SpeedDown; // Offset: 0x18 // Size: 0x04
	float Bias; // Offset: 0x1c // Size: 0x04
	float HistogramLogMin; // Offset: 0x20 // Size: 0x04
	float HistogramLogMax; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.LensSettings
// Size: 0xe0 // Inherited bytes: 0x00
struct FLensSettings {
	// Fields
	struct FLensBloomSettings Bloom; // Offset: 0x00 // Size: 0xb8
	struct FLensImperfectionSettings Imperfections; // Offset: 0xb8 // Size: 0x20
	float ChromaticAberration; // Offset: 0xd8 // Size: 0x04
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
};

// Object Name: ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 // Inherited bytes: 0x00
struct FLensImperfectionSettings {
	// Fields
	struct UTexture* DirtMask; // Offset: 0x00 // Size: 0x08
	float DirtMaskIntensity; // Offset: 0x08 // Size: 0x04
	struct FLinearColor DirtMaskTint; // Offset: 0x0c // Size: 0x10
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.LensBloomSettings
// Size: 0xb8 // Inherited bytes: 0x00
struct FLensBloomSettings {
	// Fields
	struct FGaussianSumBloomSettings GaussianSum; // Offset: 0x00 // Size: 0x84
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct FConvolutionBloomSettings Convolution; // Offset: 0x88 // Size: 0x28
	enum class EBloomMethod method; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FConvolutionBloomSettings {
	// Fields
	struct UTexture2D* Texture; // Offset: 0x00 // Size: 0x08
	float Size; // Offset: 0x08 // Size: 0x04
	struct FVector2D CenterUV; // Offset: 0x0c // Size: 0x08
	float PreFilterMin; // Offset: 0x14 // Size: 0x04
	float PreFilterMax; // Offset: 0x18 // Size: 0x04
	float PreFilterMult; // Offset: 0x1c // Size: 0x04
	float BufferScale; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 // Inherited bytes: 0x00
struct FGaussianSumBloomSettings {
	// Fields
	float Intensity; // Offset: 0x00 // Size: 0x04
	float Threshold; // Offset: 0x04 // Size: 0x04
	float SizeScale; // Offset: 0x08 // Size: 0x04
	float Filter1Size; // Offset: 0x0c // Size: 0x04
	float Filter2Size; // Offset: 0x10 // Size: 0x04
	float Filter3Size; // Offset: 0x14 // Size: 0x04
	float Filter4Size; // Offset: 0x18 // Size: 0x04
	float Filter5Size; // Offset: 0x1c // Size: 0x04
	float Filter6Size; // Offset: 0x20 // Size: 0x04
	struct FLinearColor Filter1Tint; // Offset: 0x24 // Size: 0x10
	struct FLinearColor Filter2Tint; // Offset: 0x34 // Size: 0x10
	struct FLinearColor Filter3Tint; // Offset: 0x44 // Size: 0x10
	struct FLinearColor Filter4Tint; // Offset: 0x54 // Size: 0x10
	struct FLinearColor Filter5Tint; // Offset: 0x64 // Size: 0x10
	struct FLinearColor Filter6Tint; // Offset: 0x74 // Size: 0x10
};

// Object Name: ScriptStruct Engine.FilmStockSettings
// Size: 0x14 // Inherited bytes: 0x00
struct FFilmStockSettings {
	// Fields
	float Slope; // Offset: 0x00 // Size: 0x04
	float Toe; // Offset: 0x04 // Size: 0x04
	float Shoulder; // Offset: 0x08 // Size: 0x04
	float BlackClip; // Offset: 0x0c // Size: 0x04
	float WhiteClip; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ColorGradingSettings
// Size: 0x150 // Inherited bytes: 0x00
struct FColorGradingSettings {
	// Fields
	struct FColorGradePerRangeSettings Global; // Offset: 0x00 // Size: 0x50
	struct FColorGradePerRangeSettings Shadows; // Offset: 0x50 // Size: 0x50
	struct FColorGradePerRangeSettings Midtones; // Offset: 0xa0 // Size: 0x50
	struct FColorGradePerRangeSettings Highlights; // Offset: 0xf0 // Size: 0x50
	float ShadowsMax; // Offset: 0x140 // Size: 0x04
	float HighlightsMin; // Offset: 0x144 // Size: 0x04
	char pad_0x148[0x8]; // Offset: 0x148 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x50 // Inherited bytes: 0x00
struct FColorGradePerRangeSettings {
	// Fields
	struct FVector4 Saturation; // Offset: 0x00 // Size: 0x10
	struct FVector4 Contrast; // Offset: 0x10 // Size: 0x10
	struct FVector4 Gamma; // Offset: 0x20 // Size: 0x10
	struct FVector4 Gain; // Offset: 0x30 // Size: 0x10
	struct FVector4 Offset; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 // Inherited bytes: 0x00
struct FEngineShowFlagsSetting {
	// Fields
	StrProperty ShowFlagName; // Offset: 0x00 // Size: 0x10
	bool Enabled; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 // Inherited bytes: 0x00
struct FSingleAnimationPlayData {
	// Fields
	struct UAnimationAsset* AnimToPlay; // Offset: 0x00 // Size: 0x08
	char bSavedLooping : 1; // Offset: 0x08 // Size: 0x01
	char bSavedPlaying : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_2 : 6; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float SavedPosition; // Offset: 0x0c // Size: 0x04
	float SavedPlayRate; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.SkeletalMaterial
// Size: 0x48 // Inherited bytes: 0x00
struct FSkeletalMaterial {
	// Fields
	struct UMaterialInterface* MaterialInterface; // Offset: 0x00 // Size: 0x08
	bool bEnableShadowCasting; // Offset: 0x08 // Size: 0x01
	bool bRecomputeTangent; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct FName MaterialSlotName; // Offset: 0x10 // Size: 0x08
	struct FMeshUVChannelInfo UVChannelData; // Offset: 0x18 // Size: 0x14
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FSoftObjectPath MaterialSoftRef; // Offset: 0x30 // Size: 0x18
};

// Object Name: ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x70 // Inherited bytes: 0x00
struct FClothingAssetData_Legacy {
	// Fields
	struct FName AssetName; // Offset: 0x00 // Size: 0x08
	StrProperty ApexFileName; // Offset: 0x08 // Size: 0x10
	bool bClothPropertiesChanged; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // Offset: 0x1c // Size: 0x50
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 // Inherited bytes: 0x00
struct FClothPhysicsProperties_Legacy {
	// Fields
	float VerticalResistance; // Offset: 0x00 // Size: 0x04
	float HorizontalResistance; // Offset: 0x04 // Size: 0x04
	float BendResistance; // Offset: 0x08 // Size: 0x04
	float ShearResistance; // Offset: 0x0c // Size: 0x04
	float Friction; // Offset: 0x10 // Size: 0x04
	float Damping; // Offset: 0x14 // Size: 0x04
	float TetherStiffness; // Offset: 0x18 // Size: 0x04
	float TetherLimit; // Offset: 0x1c // Size: 0x04
	float Drag; // Offset: 0x20 // Size: 0x04
	float StiffnessFrequency; // Offset: 0x24 // Size: 0x04
	float GravityScale; // Offset: 0x28 // Size: 0x04
	float MassScale; // Offset: 0x2c // Size: 0x04
	float InertiaBlend; // Offset: 0x30 // Size: 0x04
	float SelfCollisionThickness; // Offset: 0x34 // Size: 0x04
	float SelfCollisionSquashScale; // Offset: 0x38 // Size: 0x04
	float SelfCollisionStiffness; // Offset: 0x3c // Size: 0x04
	float SolverFrequency; // Offset: 0x40 // Size: 0x04
	float FiberCompression; // Offset: 0x44 // Size: 0x04
	float FiberExpansion; // Offset: 0x48 // Size: 0x04
	float FiberResistance; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0x4d8 // Inherited bytes: 0x00
struct FSkeletalMeshLODInfo {
	// Fields
	float ScreenSize; // Offset: 0x00 // Size: 0x04
	float LODHysteresis; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> LODMaterialMap; // Offset: 0x08 // Size: 0x10
	struct TArray<bool> bEnableShadowCasting; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // Offset: 0x28 // Size: 0x10
	char bHasBeenSimplified : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // Offset: 0x40 // Size: 0x170
	struct FSimplygonRemeshingSettings RemeshingSettings; // Offset: 0x1b0 // Size: 0xa8
	struct FGroupedSkeletalOptimizationSettings OptimizationSettings; // Offset: 0x258 // Size: 0x240
	struct TArray<struct FName> RemovedBones; // Offset: 0x498 // Size: 0x10
	struct TArray<struct FBoneReference> BonesToRemove; // Offset: 0x4a8 // Size: 0x10
	struct UAnimSequence* BakePose; // Offset: 0x4b8 // Size: 0x08
	StrProperty SourceImportFilename; // Offset: 0x4c0 // Size: 0x10
	char bHasPerLODVertexColors : 1; // Offset: 0x4d0 // Size: 0x01
	char pad_0x4D0_1 : 7; // Offset: 0x4d0 // Size: 0x01
	char pad_0x4D1[0x7]; // Offset: 0x4d1 // Size: 0x07
};

// Object Name: ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// Size: 0x240 // Inherited bytes: 0x00
struct FGroupedSkeletalOptimizationSettings {
	// Fields
	bool bAutoComputeLODDistance; // Offset: 0x00 // Size: 0x01
	enum class ESkeletalMeshLODType LevelOfDetailType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // Offset: 0x08 // Size: 0x170
	struct FMeshProxySettings ProxySettings; // Offset: 0x178 // Size: 0xc4
	bool bForceLODRebuild; // Offset: 0x23c // Size: 0x01
	char pad_0x23D[0x3]; // Offset: 0x23d // Size: 0x03
};

// Object Name: ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x170 // Inherited bytes: 0x00
struct FSkeletalMeshOptimizationSettings {
	// Fields
	enum class SkeletalMeshOptimizationType ReductionMethod; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float NumOfTrianglesPercentage; // Offset: 0x04 // Size: 0x04
	float MaxDeviationPercentage; // Offset: 0x08 // Size: 0x04
	IntProperty ScreenSize; // Offset: 0x0c // Size: 0x04
	float WeldingThreshold; // Offset: 0x10 // Size: 0x04
	bool bRecalcNormals; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float NormalsThreshold; // Offset: 0x18 // Size: 0x04
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // Offset: 0x1c // Size: 0x01
	enum class SkeletalMeshOptimizationImportance TextureImportance; // Offset: 0x1d // Size: 0x01
	enum class SkeletalMeshOptimizationImportance ShadingImportance; // Offset: 0x1e // Size: 0x01
	enum class SkeletalMeshOptimizationImportance SkinningImportance; // Offset: 0x1f // Size: 0x01
	float BoneReductionRatio; // Offset: 0x20 // Size: 0x04
	IntProperty MaxBonesPerVertex; // Offset: 0x24 // Size: 0x04
	bool bTransferMorphTarget; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct TArray<struct FBoneReference> BonesToRemove; // Offset: 0x30 // Size: 0x10
	IntProperty BaseLOD; // Offset: 0x40 // Size: 0x04
	IntProperty LODChainLastIndex; // Offset: 0x44 // Size: 0x04
	bool bUseVertexWeights; // Offset: 0x48 // Size: 0x01
	bool bUseVertexWeightsForMaterial; // Offset: 0x49 // Size: 0x01
	bool bSimplifyMaterials; // Offset: 0x4a // Size: 0x01
	char pad_0x4B[0x5]; // Offset: 0x4b // Size: 0x05
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // Offset: 0x50 // Size: 0x80
	struct FMaterialProxySettings MaterialSettings; // Offset: 0xd0 // Size: 0x94
	bool bForceRebuild; // Offset: 0x164 // Size: 0x01
	char pad_0x165[0x3]; // Offset: 0x165 // Size: 0x03
	struct UAnimSequence* BakePose; // Offset: 0x168 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TriangleSortSettings
// Size: 0x10 // Inherited bytes: 0x00
struct FTriangleSortSettings {
	// Fields
	enum class ETriangleSortOption TriangleSorting; // Offset: 0x00 // Size: 0x01
	enum class ETriangleSortAxis CustomLeftRightAxis; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct FName CustomLeftRightBoneName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 // Inherited bytes: 0x00
struct FSkeletalMeshClothBuildParams {
	// Fields
	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // Offset: 0x00 // Size: 0x08
	IntProperty TargetLod; // Offset: 0x08 // Size: 0x04
	bool bRemapParameters; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	StrProperty AssetName; // Offset: 0x10 // Size: 0x10
	IntProperty LODIndex; // Offset: 0x20 // Size: 0x04
	IntProperty SourceSection; // Offset: 0x24 // Size: 0x04
	bool bRemoveFromMesh; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct UPhysicsAsset* PhysicsAsset; // Offset: 0x30 // Size: 0x28
};

// Object Name: ScriptStruct Engine.BoneMirrorExport
// Size: 0x18 // Inherited bytes: 0x00
struct FBoneMirrorExport {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FName SourceBoneName; // Offset: 0x08 // Size: 0x08
	enum class EAxis BoneFlipAxis; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FBoneMirrorInfo {
	// Fields
	IntProperty SourceIndex; // Offset: 0x00 // Size: 0x04
	enum class EAxis BoneFlipAxis; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Engine.BoneFilter
// Size: 0x10 // Inherited bytes: 0x00
struct FBoneFilter {
	// Fields
	bool bExcludeSelf; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName BoneName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x178 // Inherited bytes: 0x00
struct FSkeletalMeshLODGroupSettings {
	// Fields
	float ScreenSize; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FSkeletalMeshOptimizationSettings OptimizationSettings; // Offset: 0x08 // Size: 0x170
};

// Object Name: ScriptStruct Engine.VirtualBone
// Size: 0x18 // Inherited bytes: 0x00
struct FVirtualBone {
	// Fields
	struct FName SourceBoneName; // Offset: 0x00 // Size: 0x08
	struct FName TargetBoneName; // Offset: 0x08 // Size: 0x08
	struct FName VirtualBoneName; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimSlotGroup {
	// Fields
	struct FName GroupName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FName> SlotNames; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.RigConfiguration
// Size: 0x18 // Inherited bytes: 0x00
struct FRigConfiguration {
	// Fields
	struct URig* Rig; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FNameMapping> BoneMappingTable; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.NameMapping
// Size: 0x10 // Inherited bytes: 0x00
struct FNameMapping {
	// Fields
	struct FName NodeName; // Offset: 0x00 // Size: 0x08
	struct FName BoneName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 // Inherited bytes: 0x00
struct FBoneReductionSetting {
	// Fields
	struct TArray<struct FName> BonesToRemove; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Engine.ReferencePose
// Size: 0x18 // Inherited bytes: 0x00
struct FReferencePose {
	// Fields
	struct FName PoseName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FTransform> ReferencePose; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.BoneNode
// Size: 0x10 // Inherited bytes: 0x00
struct FBoneNode {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	IntProperty ParentIndex; // Offset: 0x08 // Size: 0x04
	enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 // Inherited bytes: 0x00
struct FSkeletonToMeshLinkup {
	// Fields
	struct TArray<IntProperty> SkeletonToMeshTable; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> MeshToSkeletonTable; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FSkelMeshComponentLODInfo {
	// Fields
	struct TArray<bool> HiddenMaterials; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FSkelMeshSkinWeightInfo {
	// Fields
	IntProperty Bones[0x8]; // Offset: 0x00 // Size: 0x20
	char Weights[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FSkinWeightProfileInfo {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	bool DefaultProfile; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty DefaultProfileFromLODIndex; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.TentDistribution
// Size: 0x0c // Inherited bytes: 0x00
struct FTentDistribution {
	// Fields
	float TipAltitude; // Offset: 0x00 // Size: 0x04
	float TipValue; // Offset: 0x04 // Size: 0x04
	float Width; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.SmartNameContainer
// Size: 0x50 // Inherited bytes: 0x00
struct FSmartNameContainer {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Engine.SmartNameMapping
// Size: 0x60 // Inherited bytes: 0x00
struct FSmartNameMapping {
	// Fields
	char pad_0x0[0x60]; // Offset: 0x00 // Size: 0x60
};

// Object Name: ScriptStruct Engine.CurveMetaData
// Size: 0x20 // Inherited bytes: 0x00
struct FCurveMetaData {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Engine.AnimCurveType
// Size: 0x02 // Inherited bytes: 0x00
struct FAnimCurveType {
	// Fields
	char pad_0x0[0x2]; // Offset: 0x00 // Size: 0x02
};

// Object Name: ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x2b8 // Inherited bytes: 0xa8
struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	// Fields
	char bAttenuate : 1; // Offset: 0xa4 // Size: 0x01
	char bSpatialize : 1; // Offset: 0xa4 // Size: 0x01
	char bAttenuateWithLPF : 1; // Offset: 0xa4 // Size: 0x01
	char bEnableListenerFocus : 1; // Offset: 0xa4 // Size: 0x01
	char bEnableFocusInterpolation : 1; // Offset: 0xa4 // Size: 0x01
	char bEnableOcclusion : 1; // Offset: 0xa4 // Size: 0x01
	char bUseComplexCollisionForOcclusion : 1; // Offset: 0xa4 // Size: 0x01
	char bEnableReverbSend : 1; // Offset: 0xa4 // Size: 0x01
	char bApplyNormalizationToStereoSounds : 1; // Offset: 0xa5 // Size: 0x01
	char bEnableLogFrequencyScaling : 1; // Offset: 0xa5 // Size: 0x01
	enum class ESoundDistanceCalc DistanceType; // Offset: 0xa6 // Size: 0x01
	float OmniRadius; // Offset: 0xa8 // Size: 0x04
	float StereoSpread; // Offset: 0xac // Size: 0x04
	enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; // Offset: 0xb0 // Size: 0x01
	char pad_0xB3_2 : 6; // Offset: 0xb3 // Size: 0x01
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct USpatializationPluginSourceSettingsBase* SpatializationPluginSettings; // Offset: 0xb8 // Size: 0x08
	float RadiusMin; // Offset: 0xc0 // Size: 0x04
	float RadiusMax; // Offset: 0xc4 // Size: 0x04
	float LPFRadiusMin; // Offset: 0xc8 // Size: 0x04
	float LPFRadiusMax; // Offset: 0xcc // Size: 0x04
	enum class EAirAbsorptionMethod AbsorptionMethod; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // Offset: 0xd8 // Size: 0x78
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // Offset: 0x150 // Size: 0x78
	float LPFFrequencyAtMin; // Offset: 0x1c8 // Size: 0x04
	float LPFFrequencyAtMax; // Offset: 0x1cc // Size: 0x04
	float HPFFrequencyAtMin; // Offset: 0x1d0 // Size: 0x04
	float HPFFrequencyAtMax; // Offset: 0x1d4 // Size: 0x04
	float FocusAzimuth; // Offset: 0x1d8 // Size: 0x04
	float NonFocusAzimuth; // Offset: 0x1dc // Size: 0x04
	float FocusDistanceScale; // Offset: 0x1e0 // Size: 0x04
	float NonFocusDistanceScale; // Offset: 0x1e4 // Size: 0x04
	float FocusPriorityScale; // Offset: 0x1e8 // Size: 0x04
	float NonFocusPriorityScale; // Offset: 0x1ec // Size: 0x04
	float FocusVolumeAttenuation; // Offset: 0x1f0 // Size: 0x04
	float NonFocusVolumeAttenuation; // Offset: 0x1f4 // Size: 0x04
	float FocusAttackInterpSpeed; // Offset: 0x1f8 // Size: 0x04
	float FocusReleaseInterpSpeed; // Offset: 0x1fc // Size: 0x04
	enum class ECollisionChannel OcclusionTraceChannel; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x3]; // Offset: 0x201 // Size: 0x03
	float OcclusionLowPassFilterFrequency; // Offset: 0x204 // Size: 0x04
	float OcclusionVolumeAttenuation; // Offset: 0x208 // Size: 0x04
	float OcclusionInterpolationTime; // Offset: 0x20c // Size: 0x04
	struct UOcclusionPluginSourceSettingsBase* OcclusionPluginSettings; // Offset: 0x210 // Size: 0x08
	enum class EReverbSendMethod ReverbSendMethod; // Offset: 0x218 // Size: 0x01
	char pad_0x219[0x7]; // Offset: 0x219 // Size: 0x07
	struct UReverbPluginSourceSettingsBase* ReverbPluginSettings; // Offset: 0x220 // Size: 0x08
	float ReverbWetLevelMin; // Offset: 0x228 // Size: 0x04
	float ReverbWetLevelMax; // Offset: 0x22c // Size: 0x04
	float ReverbDistanceMin; // Offset: 0x230 // Size: 0x04
	float ReverbDistanceMax; // Offset: 0x234 // Size: 0x04
	struct FRuntimeFloatCurve CustomReverbSendCurve; // Offset: 0x238 // Size: 0x78
	float ManualReverbSendLevel; // Offset: 0x2b0 // Size: 0x04
	char pad_0x2B4[0x4]; // Offset: 0x2b4 // Size: 0x04
};

// Object Name: ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 // Inherited bytes: 0x00
struct FPassiveSoundMixModifier {
	// Fields
	struct USoundMix* SoundMix; // Offset: 0x00 // Size: 0x08
	float MinVolumeThreshold; // Offset: 0x08 // Size: 0x04
	float MaxVolumeThreshold; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SoundClassProperties
// Size: 0x28 // Inherited bytes: 0x00
struct FSoundClassProperties {
	// Fields
	float Volume; // Offset: 0x00 // Size: 0x04
	float Pitch; // Offset: 0x04 // Size: 0x04
	float StereoBleed; // Offset: 0x08 // Size: 0x04
	float LFEBleed; // Offset: 0x0c // Size: 0x04
	float VoiceCenterChannelVolume; // Offset: 0x10 // Size: 0x04
	float RadioFilterVolume; // Offset: 0x14 // Size: 0x04
	float RadioFilterVolumeThreshold; // Offset: 0x18 // Size: 0x04
	char bApplyEffects : 1; // Offset: 0x1c // Size: 0x01
	char bAlwaysPlay : 1; // Offset: 0x1c // Size: 0x01
	char bIsUISound : 1; // Offset: 0x1c // Size: 0x01
	char bIsMusic : 1; // Offset: 0x1c // Size: 0x01
	char bReverb : 1; // Offset: 0x1c // Size: 0x01
	char pad_0x1C_5 : 3; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	float Default2DReverbSendAmount; // Offset: 0x20 // Size: 0x04
	char bCenterChannelOnly : 1; // Offset: 0x24 // Size: 0x01
	char bApplyAmbientVolumes : 1; // Offset: 0x24 // Size: 0x01
	char pad_0x24_2 : 6; // Offset: 0x24 // Size: 0x01
	enum class EAudioOutputTarget OutputTarget; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
};

// Object Name: ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 // Inherited bytes: 0x00
struct FSoundClassEditorData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x0c // Inherited bytes: 0x00
struct FSoundConcurrencySettings {
	// Fields
	IntProperty MaxCount; // Offset: 0x00 // Size: 0x04
	char bLimitToOwner : 1; // Offset: 0x04 // Size: 0x01
	char pad_0x4_1 : 7; // Offset: 0x04 // Size: 0x01
	enum class EMaxConcurrentResolutionRule ResolutionRule; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float VolumeScale; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 // Inherited bytes: 0x00
struct FSoundNodeEditorData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 // Inherited bytes: 0x00
struct FSourceEffectChainEntry {
	// Fields
	struct USoundEffectSourcePreset* Preset; // Offset: 0x00 // Size: 0x08
	char bBypass : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_1 : 7; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Engine.SoundGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FSoundGroup {
	// Fields
	enum class ESoundGroup SoundGroup; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty DisplayName; // Offset: 0x08 // Size: 0x10
	char bAlwaysDecompressOnLoad : 1; // Offset: 0x18 // Size: 0x01
	char pad_0x18_1 : 7; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float DecompressedDuration; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.SoundClassAdjuster
// Size: 0x18 // Inherited bytes: 0x00
struct FSoundClassAdjuster {
	// Fields
	struct USoundClass* SoundClassObject; // Offset: 0x00 // Size: 0x08
	float VolumeAdjuster; // Offset: 0x08 // Size: 0x04
	float PitchAdjuster; // Offset: 0x0c // Size: 0x04
	char bApplyToChildren : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_1 : 7; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float VoiceCenterChannelVolumeAdjuster; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Engine.AudioEQEffect
// Size: 0x38 // Inherited bytes: 0x00
struct FAudioEQEffect {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	float FrequencyCenter0; // Offset: 0x08 // Size: 0x04
	float Gain0; // Offset: 0x0c // Size: 0x04
	float Bandwidth0; // Offset: 0x10 // Size: 0x04
	float FrequencyCenter1; // Offset: 0x14 // Size: 0x04
	float Gain1; // Offset: 0x18 // Size: 0x04
	float Bandwidth1; // Offset: 0x1c // Size: 0x04
	float FrequencyCenter2; // Offset: 0x20 // Size: 0x04
	float Gain2; // Offset: 0x24 // Size: 0x04
	float Bandwidth2; // Offset: 0x28 // Size: 0x04
	float FrequencyCenter3; // Offset: 0x2c // Size: 0x04
	float Gain3; // Offset: 0x30 // Size: 0x04
	float Bandwidth3; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Engine.DistanceDatum
// Size: 0x14 // Inherited bytes: 0x00
struct FDistanceDatum {
	// Fields
	float FadeInDistanceStart; // Offset: 0x00 // Size: 0x04
	float FadeInDistanceEnd; // Offset: 0x04 // Size: 0x04
	float FadeOutDistanceStart; // Offset: 0x08 // Size: 0x04
	float FadeOutDistanceEnd; // Offset: 0x0c // Size: 0x04
	float Volume; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 // Inherited bytes: 0x00
struct FModulatorContinuousParams {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	float Default; // Offset: 0x08 // Size: 0x04
	float MinInput; // Offset: 0x0c // Size: 0x04
	float MaxInput; // Offset: 0x10 // Size: 0x04
	float MinOutput; // Offset: 0x14 // Size: 0x04
	float MaxOutput; // Offset: 0x18 // Size: 0x04
	enum class ModulationParamMode ParamMode; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FSoundSourceBusSendInfo {
	// Fields
	float SendLevel; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct USoundSourceBus* SoundSourceBus; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FSoundSubmixSendInfo {
	// Fields
	float SendLevel; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct USoundSubmix* SoundSubmix; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 // Inherited bytes: 0x00
struct FStreamedAudioPlatformData {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Engine.SplinePoint
// Size: 0x44 // Inherited bytes: 0x00
struct FSplinePoint {
	// Fields
	float InputKey; // Offset: 0x00 // Size: 0x04
	struct FVector Position; // Offset: 0x04 // Size: 0x0c
	struct FVector ArriveTangent; // Offset: 0x10 // Size: 0x0c
	struct FVector LeaveTangent; // Offset: 0x1c // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x28 // Size: 0x0c
	struct FVector Scale; // Offset: 0x34 // Size: 0x0c
	enum class ESplinePointType Type; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
};

// Object Name: ScriptStruct Engine.SplineMeshInstanceParams
// Size: 0xa0 // Inherited bytes: 0x00
struct FSplineMeshInstanceParams {
	// Fields
	bool bHide; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UBodySetup* BodySetup; // Offset: 0x08 // Size: 0x08
	struct FBoxSphereBounds InstanceBound; // Offset: 0x10 // Size: 0x1c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FVector4 InstanceParams[0x3]; // Offset: 0x30 // Size: 0x30
	struct FMatrix InstanceTransform; // Offset: 0x60 // Size: 0x40
};

// Object Name: ScriptStruct Engine.SplineMeshParams
// Size: 0x58 // Inherited bytes: 0x00
struct FSplineMeshParams {
	// Fields
	struct FVector StartPos; // Offset: 0x00 // Size: 0x0c
	struct FVector StartTangent; // Offset: 0x0c // Size: 0x0c
	struct FVector2D StartScale; // Offset: 0x18 // Size: 0x08
	float StartRoll; // Offset: 0x20 // Size: 0x04
	struct FVector2D StartOffset; // Offset: 0x24 // Size: 0x08
	struct FVector EndPos; // Offset: 0x2c // Size: 0x0c
	struct FVector EndTangent; // Offset: 0x38 // Size: 0x0c
	struct FVector2D EndScale; // Offset: 0x44 // Size: 0x08
	float EndRoll; // Offset: 0x4c // Size: 0x04
	struct FVector2D EndOffset; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct Engine.ClusterNode_Mesh
// Size: 0x28 // Inherited bytes: 0x00
struct FClusterNode_Mesh {
	// Fields
	struct FVector BoundMin; // Offset: 0x00 // Size: 0x0c
	IntProperty FirstChild; // Offset: 0x0c // Size: 0x04
	struct FVector BoundMax; // Offset: 0x10 // Size: 0x0c
	IntProperty LastChild; // Offset: 0x1c // Size: 0x04
	IntProperty FirstInstance; // Offset: 0x20 // Size: 0x04
	IntProperty LastInstance; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialRemapIndex {
	// Fields
	uint32_t ImportVersionKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> MaterialRemap; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.StaticMaterial
// Size: 0x40 // Inherited bytes: 0x00
struct FStaticMaterial {
	// Fields
	struct UMaterialInterface* MaterialInterface; // Offset: 0x00 // Size: 0x08
	struct FName MaterialSlotName; // Offset: 0x08 // Size: 0x08
	struct FMeshUVChannelInfo UVChannelData; // Offset: 0x10 // Size: 0x14
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FSoftObjectPath MaterialSoftRef; // Offset: 0x28 // Size: 0x18
};

// Object Name: ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 // Inherited bytes: 0x00
struct FAssetEditorOrbitCameraPosition {
	// Fields
	bool bIsSet; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector CamOrbitPoint; // Offset: 0x04 // Size: 0x0c
	struct FVector CamOrbitZoom; // Offset: 0x10 // Size: 0x0c
	struct FRotator CamOrbitRotation; // Offset: 0x1c // Size: 0x0c
};

// Object Name: ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 // Inherited bytes: 0x00
struct FMeshSectionInfoMap {
	// Fields
	MapProperty Map; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Engine.MeshSectionInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FMeshSectionInfo {
	// Fields
	IntProperty MaterialIndex; // Offset: 0x00 // Size: 0x04
	bool bEnableCollision; // Offset: 0x04 // Size: 0x01
	bool bCastShadow; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
};

// Object Name: ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x478 // Inherited bytes: 0x00
struct FStaticMeshSourceModel {
	// Fields
	struct FMeshBuildSettings BuildSettings; // Offset: 0x00 // Size: 0x40
	struct FMeshReductionSettings ReductionSettings; // Offset: 0x40 // Size: 0x148
	struct FSimplygonRemeshingSettings RemeshingSettings; // Offset: 0x188 // Size: 0xa8
	bool bHasBeenSimplified; // Offset: 0x230 // Size: 0x01
	char pad_0x231[0x7]; // Offset: 0x231 // Size: 0x07
	struct FGroupedStaticMeshOptimizationSettings OptimizationSettings; // Offset: 0x238 // Size: 0x218
	float LODDistance; // Offset: 0x450 // Size: 0x04
	float ScreenSize; // Offset: 0x454 // Size: 0x04
	struct TArray<IntProperty> FaceIndex2FragmentIndex; // Offset: 0x458 // Size: 0x10
	StrProperty SourceImportFilename; // Offset: 0x468 // Size: 0x10
};

// Object Name: ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// Size: 0x218 // Inherited bytes: 0x00
struct FGroupedStaticMeshOptimizationSettings {
	// Fields
	enum class EStaticMeshLODType LevelOfDetailType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FMeshReductionSettings ReductionSettings; // Offset: 0x08 // Size: 0x148
	struct FMeshProxySettings ProxySettings; // Offset: 0x150 // Size: 0xc4
	char pad_0x214[0x4]; // Offset: 0x214 // Size: 0x04
};

// Object Name: ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c // Inherited bytes: 0x00
struct FStaticMeshOptimizationSettings {
	// Fields
	enum class EOptimizationType ReductionMethod; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float NumOfTrianglesPercentage; // Offset: 0x04 // Size: 0x04
	float MaxDeviationPercentage; // Offset: 0x08 // Size: 0x04
	float WeldingThreshold; // Offset: 0x0c // Size: 0x04
	bool bRecalcNormals; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float NormalsThreshold; // Offset: 0x14 // Size: 0x04
	char SilhouetteImportance; // Offset: 0x18 // Size: 0x01
	char TextureImportance; // Offset: 0x19 // Size: 0x01
	char ShadingImportance; // Offset: 0x1a // Size: 0x01
	char pad_0x1B[0x1]; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct Engine.StreamingStaticMeshPrimitiveInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FStreamingStaticMeshPrimitiveInfo {
	// Fields
	struct UStaticMesh* StaticMesh; // Offset: 0x00 // Size: 0x08
	struct FBoxSphereBounds Bounds; // Offset: 0x08 // Size: 0x1c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 // Inherited bytes: 0x00
struct FStaticMaterialLayersParameter {
	// Fields
	struct FMaterialParameterInfo ParameterInfo; // Offset: 0x00 // Size: 0x10
	bool bOverride; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FGuid ExpressionGUID; // Offset: 0x14 // Size: 0x10
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FMaterialLayersFunctions Value; // Offset: 0x28 // Size: 0x40
};

// Object Name: ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x24 // Inherited bytes: 0x00
struct FSubsurfaceProfileStruct {
	// Fields
	float ScatterRadius; // Offset: 0x00 // Size: 0x04
	struct FLinearColor SubsurfaceColor; // Offset: 0x04 // Size: 0x10
	struct FLinearColor FalloffColor; // Offset: 0x14 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TexturePlatformData
// Size: 0x28 // Inherited bytes: 0x00
struct FTexturePlatformData {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Engine.TextureSource
// Size: 0x80 // Inherited bytes: 0x00
struct FTextureSource {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct Engine.CollectionStructParameter
// Size: 0x50 // Inherited bytes: 0x00
struct FCollectionStructParameter {
	// Fields
	StrProperty MatchRules; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FCollectionScalarParameter> ScalarParameters; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FCollectionVectorParameter> VectorParameters; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FCollectionBoolParameter> BoolParameters; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FCollectionIntParameter> IntParameters; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Engine.CollectionIntParameter
// Size: 0x20 // Inherited bytes: 0x18
struct FCollectionIntParameter : FCollectionParameterBase {
	// Fields
	IntProperty DefaultValue; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Engine.CollectionBoolParameter
// Size: 0x20 // Inherited bytes: 0x18
struct FCollectionBoolParameter : FCollectionParameterBase {
	// Fields
	bool DefaultValue; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct Engine.MeshMaterialSlot
// Size: 0x68 // Inherited bytes: 0x00
struct FMeshMaterialSlot {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
	struct UMaterialInstanceDynamic* TextureArrayMatInstance; // Offset: 0x58 // Size: 0x08
	struct UMaterialInterface* baseMat; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TextureLODGroup
// Size: 0x38 // Inherited bytes: 0x00
struct FTextureLODGroup {
	// Fields
	enum class TextureGroup Group; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0xb]; // Offset: 0x01 // Size: 0x0b
	IntProperty LODBias; // Offset: 0x0c // Size: 0x04
	char pad_0x10[0x4]; // Offset: 0x10 // Size: 0x04
	IntProperty NumStreamedMips; // Offset: 0x14 // Size: 0x04
	enum class TextureMipGenSettings MipGenSettings; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty MinLODSize; // Offset: 0x1c // Size: 0x04
	IntProperty MaxLODSize; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FName MinMagFilter; // Offset: 0x28 // Size: 0x08
	struct FName MipFilter; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Engine.StreamingTexturePrimitiveInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FStreamingTexturePrimitiveInfo {
	// Fields
	struct UTexture2D* Texture; // Offset: 0x00 // Size: 0x08
	struct FBoxSphereBounds Bounds; // Offset: 0x08 // Size: 0x1c
	float TexelFactor; // Offset: 0x24 // Size: 0x04
	uint32_t PackedRelativeBox; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Engine.Timeline
// Size: 0xa0 // Inherited bytes: 0x00
struct FTimeline {
	// Fields
	enum class ETimelineLengthMode LengthMode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Length; // Offset: 0x04 // Size: 0x04
	char bLooping : 1; // Offset: 0x08 // Size: 0x01
	char bReversePlayback : 1; // Offset: 0x08 // Size: 0x01
	char bPlayIng : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_3 : 5; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float PlayRate; // Offset: 0x0c // Size: 0x04
	float Position; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FTimelineEventEntry> Events; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // Offset: 0x48 // Size: 0x10
	DelegateProperty TimelinePostUpdateFunc; // Offset: 0x58 // Size: 0x10
	DelegateProperty TimelineFinishedFunc; // Offset: 0x68 // Size: 0x10
	char pad_0x78[0x10]; // Offset: 0x78 // Size: 0x10
	struct TWeakObjectPtr<struct UObject> PropertySetObject; // Offset: 0x88 // Size: 0x08
	struct FName DirectionPropertyName; // Offset: 0x90 // Size: 0x08
	struct UProperty* DirectionProperty; // Offset: 0x98 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 // Inherited bytes: 0x00
struct FTimelineLinearColorTrack {
	// Fields
	struct UCurveLinearColor* LinearColorCurve; // Offset: 0x00 // Size: 0x08
	DelegateProperty InterpFunc; // Offset: 0x08 // Size: 0x10
	struct FName TrackName; // Offset: 0x18 // Size: 0x08
	struct FName LinearColorPropertyName; // Offset: 0x20 // Size: 0x08
	struct UStructProperty* LinearColorProperty; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 // Inherited bytes: 0x00
struct FTimelineFloatTrack {
	// Fields
	struct UCurveFloat* FloatCurve; // Offset: 0x00 // Size: 0x08
	DelegateProperty InterpFunc; // Offset: 0x08 // Size: 0x10
	struct FName TrackName; // Offset: 0x18 // Size: 0x08
	struct FName FloatPropertyName; // Offset: 0x20 // Size: 0x08
	struct UFloatProperty* FloatProperty; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 // Inherited bytes: 0x00
struct FTimelineVectorTrack {
	// Fields
	struct UCurveVector* VectorCurve; // Offset: 0x00 // Size: 0x08
	DelegateProperty InterpFunc; // Offset: 0x08 // Size: 0x10
	struct FName TrackName; // Offset: 0x18 // Size: 0x08
	struct FName VectorPropertyName; // Offset: 0x20 // Size: 0x08
	struct UStructProperty* VectorProperty; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TimelineEventEntry
// Size: 0x18 // Inherited bytes: 0x00
struct FTimelineEventEntry {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	DelegateProperty EventFunc; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Engine.TTTrackBase
// Size: 0x10 // Inherited bytes: 0x00
struct FTTTrackBase {
	// Fields
	struct FName TrackName; // Offset: 0x00 // Size: 0x08
	bool bIsExternalCurve; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Engine.TTLinearColorTrack
// Size: 0x18 // Inherited bytes: 0x10
struct FTTLinearColorTrack : FTTTrackBase {
	// Fields
	struct UCurveLinearColor* CurveLinearColor; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TTVectorTrack
// Size: 0x18 // Inherited bytes: 0x10
struct FTTVectorTrack : FTTTrackBase {
	// Fields
	struct UCurveVector* CurveVector; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TTFloatTrack
// Size: 0x18 // Inherited bytes: 0x10
struct FTTFloatTrack : FTTTrackBase {
	// Fields
	struct UCurveFloat* CurveFloat; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TTEventTrack
// Size: 0x18 // Inherited bytes: 0x10
struct FTTEventTrack : FTTTrackBase {
	// Fields
	struct UCurveFloat* CurveKeys; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 // Inherited bytes: 0x00
struct FTimeStretchCurveInstance {
	// Fields
	bool bHasValidData; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x2f]; // Offset: 0x01 // Size: 0x2f
};

// Object Name: ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 // Inherited bytes: 0x00
struct FTimeStretchCurve {
	// Fields
	float SamplingRate; // Offset: 0x00 // Size: 0x04
	float CurveValueMinPrecision; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FTimeStretchCurveMarker> Markers; // Offset: 0x08 // Size: 0x10
	float Sum_dT_i_by_C_i[0x3]; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 // Inherited bytes: 0x00
struct FTimeStretchCurveMarker {
	// Fields
	float Time[0x3]; // Offset: 0x00 // Size: 0x0c
	float Alpha; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Engine.TouchInputControl
// Size: 0x1d8 // Inherited bytes: 0x00
struct FTouchInputControl {
	// Fields
	struct UTexture2D* Image1; // Offset: 0x00 // Size: 0x08
	struct UTexture2D* Image2; // Offset: 0x08 // Size: 0x08
	struct FSlateBrush Brush1; // Offset: 0x10 // Size: 0xb8
	struct FSlateBrush Brush2; // Offset: 0xc8 // Size: 0xb8
	struct FVector2D Center; // Offset: 0x180 // Size: 0x08
	struct FVector2D VisualSize; // Offset: 0x188 // Size: 0x08
	struct FVector2D ThumbSize; // Offset: 0x190 // Size: 0x08
	struct FVector2D InteractionSize; // Offset: 0x198 // Size: 0x08
	struct FVector2D InputScale; // Offset: 0x1a0 // Size: 0x08
	struct FKey MainInputKey; // Offset: 0x1a8 // Size: 0x18
	struct FKey AltInputKey; // Offset: 0x1c0 // Size: 0x18
};

// Object Name: ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 // Inherited bytes: 0x00
struct FHardwareCursorReference {
	// Fields
	struct FName CursorPath; // Offset: 0x00 // Size: 0x08
	struct FVector2D HotSpot; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Engine.MaterialInstanceConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialInstanceConfig {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	char ShadingRate; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Engine.MaterialBaseConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialBaseConfig {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	char ShadingRate; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Engine.PrimitiveComponentConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FPrimitiveComponentConfig {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	char ShadingStratety; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float FOVAdaptiveShadingFactor; // Offset: 0x14 // Size: 0x04
	char FixShadingRate; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct Engine.LevelCollection
// Size: 0x80 // Inherited bytes: 0x00
struct FLevelCollection {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct AGameStateBase* GameState; // Offset: 0x08 // Size: 0x08
	struct UNetDriver* NetDriver; // Offset: 0x10 // Size: 0x08
	struct UDemoNetDriver* DemoNetDriver; // Offset: 0x18 // Size: 0x08
	struct ULevel* PersistentLevel; // Offset: 0x20 // Size: 0x08
	SetProperty Levels; // Offset: 0x28 // Size: 0x50
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08
};

// Object Name: ScriptStruct Engine.StartAsyncSimulationFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FStartAsyncSimulationFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FEndPhysicsTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FStartPhysicsTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FLevelViewportInfo {
	// Fields
	struct FVector CamPosition; // Offset: 0x00 // Size: 0x0c
	struct FRotator CamRotation; // Offset: 0x0c // Size: 0x0c
	float CamOrthoZoom; // Offset: 0x18 // Size: 0x04
	bool CamUpdated; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct Engine.HierarchicalSimplification
// Size: 0x1c0 // Inherited bytes: 0x00
struct FHierarchicalSimplification {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	float TransitionScreenSize; // Offset: 0x04 // Size: 0x04
	float OverrideDrawDistance; // Offset: 0x08 // Size: 0x04
	bool bUseOverrideDrawDistance; // Offset: 0x0c // Size: 0x01
	char bAllowSpecificExclusion : 1; // Offset: 0x0d // Size: 0x01
	char pad_0xD_1 : 7; // Offset: 0x0d // Size: 0x01
	bool bSimplifyMesh; // Offset: 0x0e // Size: 0x01
	char pad_0xF[0x1]; // Offset: 0x0f // Size: 0x01
	struct FMeshProxySettings ProxySetting; // Offset: 0x10 // Size: 0xc4
	struct FMeshMergingSettings MergeSetting; // Offset: 0xd4 // Size: 0xdc
	float DesiredBoundRadius; // Offset: 0x1b0 // Size: 0x04
	float DesiredFillingPercentage; // Offset: 0x1b4 // Size: 0x04
	IntProperty MinNumberOfActorsToBuild; // Offset: 0x1b8 // Size: 0x04
	bool bOnlyGenerateClustersForVolumes; // Offset: 0x1bc // Size: 0x01
	bool bReusePreviousLevelClusters; // Offset: 0x1bd // Size: 0x01
	char pad_0x1BE[0x2]; // Offset: 0x1be // Size: 0x02
};

// Object Name: ScriptStruct Engine.NetViewer
// Size: 0x30 // Inherited bytes: 0x00
struct FNetViewer {
	// Fields
	struct UNetConnection* Connection; // Offset: 0x00 // Size: 0x08
	struct AActor* InViewer; // Offset: 0x08 // Size: 0x08
	struct AActor* ViewTarget; // Offset: 0x10 // Size: 0x08
	struct FVector ViewLocation; // Offset: 0x18 // Size: 0x0c
	struct FVector ViewDir; // Offset: 0x24 // Size: 0x0c
};

// Object Name: ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x50 // Inherited bytes: 0x00
struct FLightmassWorldInfoSettings {
	// Fields
	float StaticLightingLevelScale; // Offset: 0x00 // Size: 0x04
	IntProperty NumIndirectLightingBounces; // Offset: 0x04 // Size: 0x04
	IntProperty NumSkyLightingBounces; // Offset: 0x08 // Size: 0x04
	float IndirectLightingQuality; // Offset: 0x0c // Size: 0x04
	float IndirectLightingSmoothness; // Offset: 0x10 // Size: 0x04
	struct FColor EnvironmentColor; // Offset: 0x14 // Size: 0x04
	float EnvironmentIntensity; // Offset: 0x18 // Size: 0x04
	float EmissiveBoost; // Offset: 0x1c // Size: 0x04
	float DiffuseBoost; // Offset: 0x20 // Size: 0x04
	enum class EVolumeLightingMethod VolumeLightingMethod; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	float VolumetricLightmapDetailCellSize; // Offset: 0x28 // Size: 0x04
	float VolumetricLightmapMaximumBrickMemoryMb; // Offset: 0x2c // Size: 0x04
	float VolumeLightSamplePlacementScale; // Offset: 0x30 // Size: 0x04
	char bUseAmbientOcclusion : 1; // Offset: 0x34 // Size: 0x01
	char bGenerateAmbientOcclusionMaterialMask : 1; // Offset: 0x34 // Size: 0x01
	char pad_0x34_2 : 6; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	float DirectIlluminationOcclusionFraction; // Offset: 0x38 // Size: 0x04
	float IndirectIlluminationOcclusionFraction; // Offset: 0x3c // Size: 0x04
	float OcclusionExponent; // Offset: 0x40 // Size: 0x04
	float FullyOccludedSamplesFraction; // Offset: 0x44 // Size: 0x04
	float MaxOcclusionDistance; // Offset: 0x48 // Size: 0x04
	char bVisualizeMaterialDiffuse : 1; // Offset: 0x4c // Size: 0x01
	char bVisualizeAmbientOcclusion : 1; // Offset: 0x4c // Size: 0x01
	char bCompressLightmaps : 1; // Offset: 0x4c // Size: 0x01
	char bUseSimpleLightmap : 1; // Offset: 0x4c // Size: 0x01
	char pad_0x4C_4 : 4; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
};

// Object Name: ScriptStruct Engine.SurfelRayTracingSettings
// Size: 0x40 // Inherited bytes: 0x00
struct FSurfelRayTracingSettings {
	// Fields
	char bAllowSurfelRayTracing : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector SurfelVoxelSize; // Offset: 0x04 // Size: 0x0c
	struct FIntVector SurfelHierarchyDimension; // Offset: 0x10 // Size: 0x0c
	struct FVector IrradianceVolumeCellSize; // Offset: 0x1c // Size: 0x0c
	struct FIntVector IrradianceVolumeDimension; // Offset: 0x28 // Size: 0x0c
	uint32_t IrradianceVolumeCellDim; // Offset: 0x34 // Size: 0x04
	uint32_t SurfelInjectSingleSize; // Offset: 0x38 // Size: 0x04
	uint32_t SurfelPoolInitScale; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Engine.IdeaBakingWorldInfoSettings
// Size: 0x64 // Inherited bytes: 0x00
struct FIdeaBakingWorldInfoSettings {
	// Fields
	enum class EIdeaBakingLayout BakingLayout; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty NumCoarseSamples; // Offset: 0x04 // Size: 0x04
	IntProperty NumSamples; // Offset: 0x08 // Size: 0x04
	IntProperty NumLightingBounces; // Offset: 0x0c // Size: 0x04
	float LightmapBoost; // Offset: 0x10 // Size: 0x04
	float SunHardness; // Offset: 0x14 // Size: 0x04
	enum class EIdeaBakingMode BakingMode; // Offset: 0x18 // Size: 0x01
	char bUseParallelBaking : 1; // Offset: 0x19 // Size: 0x01
	char bUseConservativeRasterization : 1; // Offset: 0x19 // Size: 0x01
	char bUseLocalOcclusion : 1; // Offset: 0x19 // Size: 0x01
	char pad_0x19_3 : 5; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float LocalOcclusionRadius; // Offset: 0x1c // Size: 0x04
	float LocalOcclusionFallOff; // Offset: 0x20 // Size: 0x04
	float LocalOcclusionDistribution; // Offset: 0x24 // Size: 0x04
	float LocalOcclusionFadeRatio; // Offset: 0x28 // Size: 0x04
	IntProperty LocalOcclusionRes; // Offset: 0x2c // Size: 0x04
	IntProperty LocalOcclusionMultiple; // Offset: 0x30 // Size: 0x04
	float LocalOcclusionPower; // Offset: 0x34 // Size: 0x04
	IntProperty LocalOcclusionDenoising; // Offset: 0x38 // Size: 0x04
	IntProperty LocalOcclusionDilation; // Offset: 0x3c // Size: 0x04
	IntProperty NumDenoisingIterators; // Offset: 0x40 // Size: 0x04
	IntProperty NumDilationIterators; // Offset: 0x44 // Size: 0x04
	IntProperty DirectLightDenoising; // Offset: 0x48 // Size: 0x04
	float RayTraceMaxDistance; // Offset: 0x4c // Size: 0x04
	float RayTraceBias; // Offset: 0x50 // Size: 0x04
	float RetraceDistance; // Offset: 0x54 // Size: 0x04
	float SmallestTexelRadius; // Offset: 0x58 // Size: 0x04
	uint32_t AreaLightSampleCount; // Offset: 0x5c // Size: 0x04
	char bWithPortalDirectLighting : 1; // Offset: 0x60 // Size: 0x01
	char bWithGrayDiffuse : 1; // Offset: 0x60 // Size: 0x01
	char pad_0x60_2 : 6; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
};

