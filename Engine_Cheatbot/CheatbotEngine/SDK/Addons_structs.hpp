#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Addons.CharacterNetworkSerializationPackedBits
// Size: 0x518 // Inherited bytes: 0x00
struct FCharacterNetworkSerializationPackedBits {
	// Fields
	char pad_0x0[0x518]; // Offset: 0x00 // Size: 0x518
};

// Object Name: ScriptStruct Addons.CharacterServerMovePackedBits
// Size: 0x518 // Inherited bytes: 0x518
struct FCharacterServerMovePackedBits : FCharacterNetworkSerializationPackedBits {
};

// Object Name: ScriptStruct Addons.BioSimulateLODThesholds
// Size: 0x0c // Inherited bytes: 0x00
struct FBioSimulateLODThesholds {
	// Fields
	float ScreenSize; // Offset: 0x00 // Size: 0x04
	float LODOptimizeCosAngle; // Offset: 0x04 // Size: 0x04
	float QueryPhysicsInternal; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Addons.BioVehicleMovementPostPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FBioVehicleMovementPostPhysicsTickFunction : FTickFunction {
	// Fields
	struct UBioVehicleMovementComponent* Target; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Addons.CornerTransitionState
// Size: 0xa0 // Inherited bytes: 0x00
struct FCornerTransitionState {
	// Fields
	bool bTransitioningCorner; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector OldWallNormal; // Offset: 0x04 // Size: 0x0c
	struct FVector NewWallNormal; // Offset: 0x10 // Size: 0x0c
	struct FVector OldPawnLocation; // Offset: 0x1c // Size: 0x0c
	struct FVector NewPawnLocation; // Offset: 0x28 // Size: 0x0c
	enum class EWallSurfaceState OldWallSurfaceState; // Offset: 0x34 // Size: 0x01
	enum class EWallSurfaceState NewWallSurfaceState; // Offset: 0x35 // Size: 0x01
	char pad_0x36[0x2]; // Offset: 0x36 // Size: 0x02
	struct FVector OldMoveDir; // Offset: 0x38 // Size: 0x0c
	char RequestID; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	float ClientTimeStamp; // Offset: 0x48 // Size: 0x04
	float LocalTimeAtStart; // Offset: 0x4c // Size: 0x04
	struct FVector ArcCenter; // Offset: 0x50 // Size: 0x0c
	float ArcRadius; // Offset: 0x5c // Size: 0x04
	struct FQuat OldYawRotation; // Offset: 0x60 // Size: 0x10
	struct FQuat NewYawRotation; // Offset: 0x70 // Size: 0x10
	struct FRotator OldControlRotation; // Offset: 0x80 // Size: 0x0c
	struct FRotator NewControlRotation; // Offset: 0x8c // Size: 0x0c
	float CachedCornerBlendTime; // Offset: 0x98 // Size: 0x04
	bool bNeedsCameraTransition; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
};

// Object Name: ScriptStruct Addons.SpiderSwingAttachInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FSpiderSwingAttachInfo {
	// Fields
	struct FVector AttachPoint; // Offset: 0x00 // Size: 0x0c
	float RopeLength; // Offset: 0x0c // Size: 0x04
	struct TWeakObjectPtr<struct AActor> AttachTarget; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.BioVHAgentMove
// Size: 0x20 // Inherited bytes: 0x00
struct FBioVHAgentMove {
	// Fields
	bool IsFollowingTarget; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct TWeakObjectPtr<struct AActor> FollowTarget; // Offset: 0x04 // Size: 0x08
	bool IsHostingMove; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FVector HostingVelocity; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Addons.RepPrecipiceInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FRepPrecipiceInfo {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector Direction; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.MountMontagePair
// Size: 0x38 // Inherited bytes: 0x00
struct FMountMontagePair {
	// Fields
	struct UAnimMontage* CreatureMontage; // Offset: 0x00 // Size: 0x08
	struct UAnimMontage* RiderMontage; // Offset: 0x08 // Size: 0x08
	struct UCurveVector* LocationCurve; // Offset: 0x10 // Size: 0x08
	struct UCurveVector* RotationCurve; // Offset: 0x18 // Size: 0x08
	float PlayRate; // Offset: 0x20 // Size: 0x04
	float Duration; // Offset: 0x24 // Size: 0x04
	float StartTime; // Offset: 0x28 // Size: 0x04
	float CameraLerpStartTime; // Offset: 0x2c // Size: 0x04
	float CameraLerpDuration; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Addons.FootStepEffect
// Size: 0x30 // Inherited bytes: 0x00
struct FFootStepEffect {
	// Fields
	struct UParticleSystem* ParticleTemplate; // Offset: 0x00 // Size: 0x28
	IntProperty EnableDeviceLevel; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Addons.BioVehicleBlowUpData
// Size: 0x34 // Inherited bytes: 0x00
struct FBioVehicleBlowUpData {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	IntProperty InternalBlowUpID; // Offset: 0x04 // Size: 0x04
	bool bIsBeingBlew; // Offset: 0x08 // Size: 0x01
	bool bBTPaused; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	struct FVector SelfLocationWhenLaunchHappened; // Offset: 0x0c // Size: 0x0c
	struct FVector LaunchVelocity; // Offset: 0x18 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> HitActor; // Offset: 0x24 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; // Offset: 0x2c // Size: 0x08
};

// Object Name: ScriptStruct Addons.TransformMatConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FTransformMatConfig {
	// Fields
	char SlotIdx; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName ParamName; // Offset: 0x08 // Size: 0x08
	float LerpSpeed; // Offset: 0x10 // Size: 0x04
	float TargetValue; // Offset: 0x14 // Size: 0x04
	float CurrentValue; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Addons.HorseTransformData
// Size: 0x18 // Inherited bytes: 0x00
struct FHorseTransformData {
	// Fields
	enum class EHorseTransformType TransformingState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector StartTransformPoint; // Offset: 0x04 // Size: 0x0c
	float TransformEndTime; // Offset: 0x10 // Size: 0x04
	IntProperty SkinID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.BlanketDanceData
// Size: 0x10 // Inherited bytes: 0x00
struct FBlanketDanceData {
	// Fields
	enum class EBlanketDanceState BlanketDanceState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraBaseCharacter* LookAtCharacter; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.FlyBioVehicleFlyingConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FFlyBioVehicleFlyingConfig {
	// Fields
	float MaxUpSpeed; // Offset: 0x00 // Size: 0x04
	float MaxDownSpeed; // Offset: 0x04 // Size: 0x04
	float MaxFlySpeed; // Offset: 0x08 // Size: 0x04
	float MaxFlyBackSpeed; // Offset: 0x0c // Size: 0x04
	float MaxFlyLeftRightSpeed; // Offset: 0x10 // Size: 0x04
	float MaxFlyingHeight; // Offset: 0x14 // Size: 0x04
	float MinFlyingHeight; // Offset: 0x18 // Size: 0x04
	float FlyingHeightThres; // Offset: 0x1c // Size: 0x04
	float MaxFlyAcceleration; // Offset: 0x20 // Size: 0x04
	float FlySteeringRotationSpeed; // Offset: 0x24 // Size: 0x04
	struct UCurveFloat* FlySteeringRotationSpeedCurve; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Addons.FlyBioVehicleUpdateDistanceToLandConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FFlyBioVehicleUpdateDistanceToLandConfig {
	// Fields
	float Height; // Offset: 0x00 // Size: 0x04
	float Interval; // Offset: 0x04 // Size: 0x04
	bool bUseSweep; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Addons.FlyBioVehicleLandingConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FFlyBioVehicleLandingConfig {
	// Fields
	float MaxAllowedFlyingSpeed; // Offset: 0x00 // Size: 0x04
	float MaxLandingTime; // Offset: 0x04 // Size: 0x04
	float LandingToGroundTime; // Offset: 0x08 // Size: 0x04
	bool bForceToGroundInFixedTime; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct UCurveVector* LandingCurve; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.TurnData
// Size: 0x48 // Inherited bytes: 0x00
struct FTurnData {
	// Fields
	struct ASTExtraSimpleCharacter* OwnerActor; // Offset: 0x00 // Size: 0x08
	struct UCurveVector* TurnCurve; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x38]; // Offset: 0x10 // Size: 0x38
};

// Object Name: ScriptStruct Addons.AmphibiousBoatThrusterRollSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FAmphibiousBoatThrusterRollSetup {
	// Fields
	struct UCurveVector* CurveOmega; // Offset: 0x00 // Size: 0x08
	float OmegaAccel; // Offset: 0x08 // Size: 0x04
	float RPMScale; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.AnimNode_AdvanceBlendSpacePlayer
// Size: 0x3f8 // Inherited bytes: 0x58
struct FAnimNode_AdvanceBlendSpacePlayer : FAnimNode_AssetPlayerBase {
	// Fields
	float X; // Offset: 0x58 // Size: 0x04
	float Y; // Offset: 0x5c // Size: 0x04
	float Z; // Offset: 0x60 // Size: 0x04
	float PlayRate; // Offset: 0x64 // Size: 0x04
	bool bLoop; // Offset: 0x68 // Size: 0x01
	bool bResetPlayTimeWhenBlendSpaceChanges; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x2]; // Offset: 0x6a // Size: 0x02
	float StartPosition; // Offset: 0x6c // Size: 0x04
	struct UBlendSpaceBase* BlendSpace; // Offset: 0x70 // Size: 0x08
	IntProperty LODThreshold; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0xa4]; // Offset: 0x7c // Size: 0xa4
	struct UBlendSpaceBase* PreviousBlendSpace; // Offset: 0x120 // Size: 0x08
	enum class EBlendCrossFadeOption CFadeStyle; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x3]; // Offset: 0x129 // Size: 0x03
	float CFadeBlendTime; // Offset: 0x12c // Size: 0x04
	enum class EAlphaBlendOption BlendType; // Offset: 0x130 // Size: 0x01
	char pad_0x131[0x7]; // Offset: 0x131 // Size: 0x07
	struct UCurveFloat* CustomBlendCurve; // Offset: 0x138 // Size: 0x08
	bool bUseBlendInTheSameCache; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x7]; // Offset: 0x141 // Size: 0x07
	struct UBlendSpaceBase* SourceBlendSpace; // Offset: 0x148 // Size: 0x08
	struct UBlendSpaceBase* TargetBlendSpace; // Offset: 0x150 // Size: 0x08
	char pad_0x158[0x298]; // Offset: 0x158 // Size: 0x298
	struct USkeletalMesh* CachedSkeletalMesh; // Offset: 0x3f0 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AnimNode_AIRuntimeAnimDataToPose
// Size: 0x1c8 // Inherited bytes: 0x78
struct FAnimNode_AIRuntimeAnimDataToPose : FAnimNode_SkeletalControlBase {
	// Fields
	char pad_0x78[0x50]; // Offset: 0x78 // Size: 0x50
	struct ACharacter* OwnerCharacter; // Offset: 0xc8 // Size: 0x08
	struct FAIGCRuntimeBodyAnimFrameData AIRuntimeBodyAnimFrameData; // Offset: 0xd0 // Size: 0xa0
	enum class EBoneControlSpace TransformSpace; // Offset: 0x170 // Size: 0x01
	bool bUseSpecifiedBones; // Offset: 0x171 // Size: 0x01
	char pad_0x172[0x6]; // Offset: 0x172 // Size: 0x06
	struct FSpecifiedBones SpecifiedBones; // Offset: 0x178 // Size: 0x50
};

// Object Name: ScriptStruct Addons.SpecifiedBones
// Size: 0x50 // Inherited bytes: 0x00
struct FSpecifiedBones {
	// Fields
	SetProperty Data; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.AnimNode_ApplyLimits
// Size: 0x98 // Inherited bytes: 0x78
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	// Fields
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FVector> AngularOffsets; // Offset: 0x88 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AngularRangeLimit
// Size: 0x30 // Inherited bytes: 0x00
struct FAngularRangeLimit {
	// Fields
	struct FVector LimitMin; // Offset: 0x00 // Size: 0x0c
	struct FVector LimitMax; // Offset: 0x0c // Size: 0x0c
	struct FBoneReference Bone; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct Addons.AnimNode_CCDIK
// Size: 0x140 // Inherited bytes: 0x78
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	// Fields
	struct FVector EffectorLocation; // Offset: 0x78 // Size: 0x0c
	enum class EBoneControlSpace EffectorLocationSpace; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0xb]; // Offset: 0x85 // Size: 0x0b
	struct FBoneSocketTarget EffectorTarget; // Offset: 0x90 // Size: 0x60
	struct FBoneReference TipBone; // Offset: 0xf0 // Size: 0x18
	struct FBoneReference RootBone; // Offset: 0x108 // Size: 0x18
	float Precision; // Offset: 0x120 // Size: 0x04
	IntProperty MaxIterations; // Offset: 0x124 // Size: 0x04
	bool bStartFromTail; // Offset: 0x128 // Size: 0x01
	bool bEnableRotationLimit; // Offset: 0x129 // Size: 0x01
	char pad_0x12A[0x6]; // Offset: 0x12a // Size: 0x06
	struct TArray<float> RotationLimitPerJoints; // Offset: 0x130 // Size: 0x10
};

// Object Name: ScriptStruct Addons.CCDIKChainLink
// Size: 0x80 // Inherited bytes: 0x00
struct FCCDIKChainLink {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct Addons.AnimNode_CloseToWall
// Size: 0xd8 // Inherited bytes: 0x78
struct FAnimNode_CloseToWall : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference RootBone; // Offset: 0x78 // Size: 0x18
	struct TArray<struct FBoneReference> TraceBones; // Offset: 0x90 // Size: 0x10
	struct TArray<enum class ECollisionChannel> ObjectTypesToTrace; // Offset: 0xa0 // Size: 0x10
	float TraceSphereRadius; // Offset: 0xb0 // Size: 0x04
	float TraceForwardOffset; // Offset: 0xb4 // Size: 0x04
	float TraceBackwardOffset; // Offset: 0xb8 // Size: 0x04
	struct FVector forwardDir; // Offset: 0xbc // Size: 0x0c
	float IntendedWallDis; // Offset: 0xc8 // Size: 0x04
	float InterpSpeed; // Offset: 0xcc // Size: 0x04
	bool bDrawDebug; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
};

// Object Name: ScriptStruct Addons.AnimNode_CreepingFourLegIK
// Size: 0x200 // Inherited bytes: 0x78
struct FAnimNode_CreepingFourLegIK : FAnimNode_SkeletalControlBase {
	// Fields
	bool bEnableSlopeAdapt; // Offset: 0x78 // Size: 0x01
	bool bEnableLegAdapt; // Offset: 0x79 // Size: 0x01
	bool bEnableFootLock; // Offset: 0x7a // Size: 0x01
	char pad_0x7B[0x5]; // Offset: 0x7b // Size: 0x05
	struct UCurveFloat* SlopePitchCurve; // Offset: 0x80 // Size: 0x08
	struct UCurveFloat* SlopeRollCurve; // Offset: 0x88 // Size: 0x08
	struct UCurveFloat* SlopeHeightCurve; // Offset: 0x90 // Size: 0x08
	float SlopeHeightAdditive; // Offset: 0x98 // Size: 0x04
	float SlopePitchAdditive; // Offset: 0x9c // Size: 0x04
	float SlopeRollAdditive; // Offset: 0xa0 // Size: 0x04
	float SlopeMapInMin; // Offset: 0xa4 // Size: 0x04
	float SlopeMapInMax; // Offset: 0xa8 // Size: 0x04
	float SlopeProbeForwardOffset; // Offset: 0xac // Size: 0x04
	float SlopeProbeBackwardOffset; // Offset: 0xb0 // Size: 0x04
	float SlopeProbeLeftOffset; // Offset: 0xb4 // Size: 0x04
	float SlopeProbeRightOffset; // Offset: 0xb8 // Size: 0x04
	float FootLockDelaySeconds; // Offset: 0xbc // Size: 0x04
	float FootLockOutOfDistanceInterpSpeed; // Offset: 0xc0 // Size: 0x04
	bool bIgnoreFoliage; // Offset: 0xc4 // Size: 0x01
	char pad_0xC5[0x3]; // Offset: 0xc5 // Size: 0x03
	float TraceUpOffset; // Offset: 0xc8 // Size: 0x04
	float TraceDownOffset; // Offset: 0xcc // Size: 0x04
	float TraceSphereRadius; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct TArray<enum class ECollisionChannel> ObjectTypesToTrace; // Offset: 0xd8 // Size: 0x10
	struct TArray<struct FName> TraceIgnoreActorTags; // Offset: 0xe8 // Size: 0x10
	float SlopeTraceInterval; // Offset: 0xf8 // Size: 0x04
	float LimbTraceInterval; // Offset: 0xfc // Size: 0x04
	float LimbOffsetClampMin; // Offset: 0x100 // Size: 0x04
	float LimbOffsetClampMax; // Offset: 0x104 // Size: 0x04
	float FootAdaptMaxPitch; // Offset: 0x108 // Size: 0x04
	float FootAdaptMaxRoll; // Offset: 0x10c // Size: 0x04
	float IKInterpSpeed; // Offset: 0x110 // Size: 0x04
	bool bSlopeAdaptUseAlpha; // Offset: 0x114 // Size: 0x01
	char pad_0x115[0x3]; // Offset: 0x115 // Size: 0x03
	float SlopeAdaptMinZ; // Offset: 0x118 // Size: 0x04
	float SlopeAdaptMaxZ; // Offset: 0x11c // Size: 0x04
	float SlopeAdaptMaxPitch; // Offset: 0x120 // Size: 0x04
	float SlopeAdaptMaxRoll; // Offset: 0x124 // Size: 0x04
	bool bUseNeckAdapt; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x3]; // Offset: 0x129 // Size: 0x03
	float NeckAdaptMinPitch; // Offset: 0x12c // Size: 0x04
	float NeckAdaptMaxPitch; // Offset: 0x130 // Size: 0x04
	float SlopeInterpSpeed; // Offset: 0x134 // Size: 0x04
	struct TArray<struct FLimb> LegLimbs; // Offset: 0x138 // Size: 0x10
	struct FBoneReference AdaptRootBone; // Offset: 0x148 // Size: 0x18
	struct FBoneReference NeckBone; // Offset: 0x160 // Size: 0x18
	float DebugSphereRadius; // Offset: 0x178 // Size: 0x04
	float DebugLineWidth; // Offset: 0x17c // Size: 0x04
	struct TWeakObjectPtr<struct UWorld> WorldContext; // Offset: 0x180 // Size: 0x08
	char pad_0x188[0x78]; // Offset: 0x188 // Size: 0x78
};

// Object Name: ScriptStruct Addons.Limb
// Size: 0x380 // Inherited bytes: 0x00
struct FLimb {
	// Fields
	struct FBoneReference TipBone; // Offset: 0x00 // Size: 0x18
	struct FBoneReference IKBone; // Offset: 0x18 // Size: 0x18
	struct FAnimNode_TwoBoneIK IKNode; // Offset: 0x30 // Size: 0x1c0
	struct FName LockCurveName; // Offset: 0x1f0 // Size: 0x08
	float MaxLockDistanceClockwise; // Offset: 0x1f8 // Size: 0x04
	float MaxLockDistanceCounterclockwise; // Offset: 0x1fc // Size: 0x04
	bool bUseLimbClamp; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x3]; // Offset: 0x201 // Size: 0x03
	float LimbOffsetClampMin; // Offset: 0x204 // Size: 0x04
	float LimbOffsetClampMax; // Offset: 0x208 // Size: 0x04
	bool bIsLeft; // Offset: 0x20c // Size: 0x01
	bool bIsForward; // Offset: 0x20d // Size: 0x01
	char pad_0x20E[0x2]; // Offset: 0x20e // Size: 0x02
	struct FName TraceSocketName; // Offset: 0x210 // Size: 0x08
	char pad_0x218[0x168]; // Offset: 0x218 // Size: 0x168
};

// Object Name: ScriptStruct Addons.AnimNode_DistanceMatching
// Size: 0x170 // Inherited bytes: 0x70
struct FAnimNode_DistanceMatching : FAnimNode_SequencePlayer {
	// Fields
	struct FName SyncGroupName; // Offset: 0x70 // Size: 0x08
	float Distance; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct FName RootBoneName; // Offset: 0x80 // Size: 0x08
	float AcceptedDistanceError; // Offset: 0x88 // Size: 0x04
	bool bUseSuperUpdate; // Offset: 0x8c // Size: 0x01
	char pad_0x8D[0x3]; // Offset: 0x8d // Size: 0x03
	struct FFloatCurve DistanceCurve; // Offset: 0x90 // Size: 0x90
	bool bHasValidDistanceCurve; // Offset: 0x120 // Size: 0x01
	char pad_0x121[0x4f]; // Offset: 0x121 // Size: 0x4f
};

// Object Name: ScriptStruct Addons.AnimNode_FootLock
// Size: 0xd0 // Inherited bytes: 0x78
struct FAnimNode_FootLock : FAnimNode_SkeletalControlBase {
	// Fields
	struct TArray<struct FFootLockLimb> Limbs; // Offset: 0x78 // Size: 0x10
	float MaxLockDistance; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x44]; // Offset: 0x8c // Size: 0x44
};

// Object Name: ScriptStruct Addons.FootLockLimb
// Size: 0x210 // Inherited bytes: 0x00
struct FFootLockLimb {
	// Fields
	struct FName CurveName; // Offset: 0x00 // Size: 0x08
	struct FBoneReference LockBone; // Offset: 0x08 // Size: 0x18
	struct FAnimNode_TwoBoneIK IKNode; // Offset: 0x20 // Size: 0x1c0
	char pad_0x1E0[0x30]; // Offset: 0x1e0 // Size: 0x30
};

// Object Name: ScriptStruct Addons.AnimNode_FourLeggedIK
// Size: 0xe50 // Inherited bytes: 0x78
struct FAnimNode_FourLeggedIK : FAnimNode_SkeletalControlBase {
	// Fields
	bool bEnableSlopeAdapt; // Offset: 0x78 // Size: 0x01
	bool bEnableLegAdapt; // Offset: 0x79 // Size: 0x01
	bool bEnableFootAdapt; // Offset: 0x7a // Size: 0x01
	bool bEnableNeckAdapt; // Offset: 0x7b // Size: 0x01
	bool bUseSocketTrace; // Offset: 0x7c // Size: 0x01
	bool bEnableTraceOptimization; // Offset: 0x7d // Size: 0x01
	bool bTraceNotHitUseOriginPosition; // Offset: 0x7e // Size: 0x01
	bool bProcessLeftRightOverDistance; // Offset: 0x7f // Size: 0x01
	float MaxLeftRightSideDifference; // Offset: 0x80 // Size: 0x04
	bool bSendTraceResultsMessage; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	struct UCurveFloat* SlopeHeightAdaptedCurve; // Offset: 0x88 // Size: 0x08
	float SlopeHeightAdditive; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct UCurveFloat* SlopePitchAdaptedCurve; // Offset: 0x98 // Size: 0x08
	float SlopePitchAdditive; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<enum class ECollisionChannel> ObjectTypesToTrace; // Offset: 0xa8 // Size: 0x10
	float TraceUpOffset; // Offset: 0xb8 // Size: 0x04
	float TraceDownOffset; // Offset: 0xbc // Size: 0x04
	float TraceSphereRadius; // Offset: 0xc0 // Size: 0x04
	float SlopeAdaptionMaxPitch; // Offset: 0xc4 // Size: 0x04
	float SlopeAdaptionMaxZ; // Offset: 0xc8 // Size: 0x04
	float SlopeAdaptLerpSpeed; // Offset: 0xcc // Size: 0x04
	float FootAdaptMaxRoll; // Offset: 0xd0 // Size: 0x04
	float FootAdaptMaxPitch; // Offset: 0xd4 // Size: 0x04
	float FootIKAdaptMaxZ; // Offset: 0xd8 // Size: 0x04
	float FootIKLerpSpeed; // Offset: 0xdc // Size: 0x04
	struct FBoneDeclare AdaptBone; // Offset: 0xe0 // Size: 0x60
	struct FBoneDeclare NeckBone; // Offset: 0x140 // Size: 0x60
	struct FBoneDeclare LClavicleBone; // Offset: 0x1a0 // Size: 0x60
	struct FBoneDeclare RClavicleBone; // Offset: 0x200 // Size: 0x60
	struct FBoneDeclare LThighBone; // Offset: 0x260 // Size: 0x60
	struct FBoneDeclare RThighBone; // Offset: 0x2c0 // Size: 0x60
	struct FBoneDeclare LeftHandBone; // Offset: 0x320 // Size: 0x60
	struct FBoneDeclare RightHandBone; // Offset: 0x380 // Size: 0x60
	struct FBoneDeclare LeftFootBone; // Offset: 0x3e0 // Size: 0x60
	struct FBoneDeclare RightFootBone; // Offset: 0x440 // Size: 0x60
	struct FBoneSocketTarget LeftHandTraceSocket; // Offset: 0x4a0 // Size: 0x60
	struct FBoneSocketTarget RightHandTraceSocket; // Offset: 0x500 // Size: 0x60
	struct FBoneSocketTarget LeftFootTraceSocket; // Offset: 0x560 // Size: 0x60
	struct FBoneSocketTarget RightFootTraceSocket; // Offset: 0x5c0 // Size: 0x60
	struct FAnimNode_TwoBoneIK LeftHandIK; // Offset: 0x620 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK RightHandIK; // Offset: 0x7e0 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK LeftFootIK; // Offset: 0x9a0 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK RightFootIK; // Offset: 0xb60 // Size: 0x1c0
	float DebugSphereRadius; // Offset: 0xd20 // Size: 0x04
	float DebugLineWidth; // Offset: 0xd24 // Size: 0x04
	float DebugArrowSize; // Offset: 0xd28 // Size: 0x04
	struct FColor DebugNegativeColor; // Offset: 0xd2c // Size: 0x04
	struct FColor DebugPositiveColor; // Offset: 0xd30 // Size: 0x04
	struct FColor DebugInfoColor; // Offset: 0xd34 // Size: 0x04
	struct FVector2D DebugTextSize; // Offset: 0xd38 // Size: 0x08
	struct APawn* OwnerPawn; // Offset: 0xd40 // Size: 0x08
	char pad_0xD48[0x108]; // Offset: 0xd48 // Size: 0x108
};

// Object Name: ScriptStruct Addons.BoneDeclare
// Size: 0x60 // Inherited bytes: 0x00
struct FBoneDeclare {
	// Fields
	struct FBoneReference Bone; // Offset: 0x00 // Size: 0x18
	struct FVector ForwardAxis; // Offset: 0x18 // Size: 0x0c
	struct FVector RightAxis; // Offset: 0x24 // Size: 0x0c
	struct FVector UpAxis; // Offset: 0x30 // Size: 0x0c
	struct FRotator PitchAxis; // Offset: 0x3c // Size: 0x0c
	struct FRotator YawAxis; // Offset: 0x48 // Size: 0x0c
	struct FRotator RollAxis; // Offset: 0x54 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.AnimNode_GroundIK
// Size: 0x358 // Inherited bytes: 0x78
struct FAnimNode_GroundIK : FAnimNode_SkeletalControlBase {
	// Fields
	struct FName Root; // Offset: 0x78 // Size: 0x08
	struct FIKBodyInertia BodyInertia; // Offset: 0x80 // Size: 0x14
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct TArray<struct FIKFoot> Feet; // Offset: 0x98 // Size: 0x10
	float FeetDeltaSmoothSpeed; // Offset: 0xa8 // Size: 0x04
	float RootRotationMultiplier; // Offset: 0xac // Size: 0x04
	struct FFootIKCollision FootCollision; // Offset: 0xb0 // Size: 0x28
	struct FFootIKSlope FootSlope; // Offset: 0xd8 // Size: 0x98
	struct TArray<struct FIKBoneBendDirection> BendDirections; // Offset: 0x170 // Size: 0x10
	struct TArray<struct FIKExcludedBone> ExcludedBones; // Offset: 0x180 // Size: 0x10
	struct TArray<struct FIKBoneLimit> JointLimits; // Offset: 0x190 // Size: 0x10
	char pad_0x1A0[0x10]; // Offset: 0x1a0 // Size: 0x10
	IntProperty MaxSquashIterations; // Offset: 0x1b0 // Size: 0x04
	IntProperty MaxStretchIterations; // Offset: 0x1b4 // Size: 0x04
	IntProperty MaxFinalIterations; // Offset: 0x1b8 // Size: 0x04
	bool AllowBoneTranslation; // Offset: 0x1bc // Size: 0x01
	char pad_0x1BD[0x3]; // Offset: 0x1bd // Size: 0x03
	float SolverAlpha; // Offset: 0x1c0 // Size: 0x04
	float DebugDrawSize; // Offset: 0x1c4 // Size: 0x04
	bool bShowDebug; // Offset: 0x1c8 // Size: 0x01
	char pad_0x1C9[0x7]; // Offset: 0x1c9 // Size: 0x07
	struct UWorld* World; // Offset: 0x1d0 // Size: 0x08
	char pad_0x1D8[0x180]; // Offset: 0x1d8 // Size: 0x180
};

// Object Name: ScriptStruct Addons.IKBoneLimit
// Size: 0x30 // Inherited bytes: 0x00
struct FIKBoneLimit {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	float Stiffness; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x24]; // Offset: 0x0c // Size: 0x24
};

// Object Name: ScriptStruct Addons.IKExcludedBone
// Size: 0x08 // Inherited bytes: 0x00
struct FIKExcludedBone {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Addons.IKBoneBendDirection
// Size: 0x18 // Inherited bytes: 0x00
struct FIKBoneBendDirection {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FVector BendDirection; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.FootIKSlope
// Size: 0x98 // Inherited bytes: 0x00
struct FFootIKSlope {
	// Fields
	struct FVector StrideDirection; // Offset: 0x00 // Size: 0x0c
	float MaxGroundAngle; // Offset: 0x0c // Size: 0x04
	float MaxNormalAngularSpeed; // Offset: 0x10 // Size: 0x04
	bool OrientToGround; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float OrientToPitch; // Offset: 0x18 // Size: 0x04
	float OrientToRoll; // Offset: 0x1c // Size: 0x04
	bool ScaleStride; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	float UphillStrideScale; // Offset: 0x24 // Size: 0x04
	float DownhillStrideScale; // Offset: 0x28 // Size: 0x04
	float SidehillStrideScale; // Offset: 0x2c // Size: 0x04
	float SidehillPushOuterFeet; // Offset: 0x30 // Size: 0x04
	bool Lean; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	float UphillLean; // Offset: 0x38 // Size: 0x04
	float DownhillLean; // Offset: 0x3c // Size: 0x04
	float SidehillLean; // Offset: 0x40 // Size: 0x04
	bool CounterLean; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	struct FName CounterLeanBoneName; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0x4]; // Offset: 0x50 // Size: 0x04
	float UphillCounterLean; // Offset: 0x54 // Size: 0x04
	float DownhillCounterLean; // Offset: 0x58 // Size: 0x04
	float SidehillCounterLean; // Offset: 0x5c // Size: 0x04
	bool MoveRoot; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
	float UphillVertOffset; // Offset: 0x64 // Size: 0x04
	float UphillHorizOffset; // Offset: 0x68 // Size: 0x04
	float DownhillVertOffset; // Offset: 0x6c // Size: 0x04
	float DownhillHorizOffset; // Offset: 0x70 // Size: 0x04
	float SidehillHorizOffset; // Offset: 0x74 // Size: 0x04
	float SidehillVertOffset; // Offset: 0x78 // Size: 0x04
	bool RotateFootToGround; // Offset: 0x7c // Size: 0x01
	char pad_0x7D[0x3]; // Offset: 0x7d // Size: 0x03
	float PitchFootAmount; // Offset: 0x80 // Size: 0x04
	float RollFootAmount; // Offset: 0x84 // Size: 0x04
	float FootAngleDeltaSmoothSpeed; // Offset: 0x88 // Size: 0x04
	bool OffsetFeetPositions; // Offset: 0x8c // Size: 0x01
	char pad_0x8D[0x3]; // Offset: 0x8d // Size: 0x03
	float StaticFootOffset; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

// Object Name: ScriptStruct Addons.FootIKCollision
// Size: 0x28 // Inherited bytes: 0x00
struct FFootIKCollision {
	// Fields
	enum class ECollisionChannel CollisionChannel; // Offset: 0x00 // Size: 0x01
	bool TraceComplex; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float RayCastUp; // Offset: 0x04 // Size: 0x04
	float RayCastDown; // Offset: 0x08 // Size: 0x04
	bool EnableWallCollision; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float WallOffset; // Offset: 0x10 // Size: 0x04
	bool bEnableCheckIgnoreActorName; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct TArray<struct FName> IgnoreHitTags; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Addons.IKFoot
// Size: 0x60 // Inherited bytes: 0x00
struct FIKFoot {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	float PullWeight; // Offset: 0x08 // Size: 0x04
	bool NormalizePulling; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FVector PositivePullFactor; // Offset: 0x10 // Size: 0x0c
	struct FVector NegativePullFactor; // Offset: 0x1c // Size: 0x0c
	char pad_0x28[0x38]; // Offset: 0x28 // Size: 0x38
};

// Object Name: ScriptStruct Addons.IKBodyInertia
// Size: 0x14 // Inherited bytes: 0x00
struct FIKBodyInertia {
	// Fields
	bool ApplyInertiaToBody; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float SmoothFactor; // Offset: 0x04 // Size: 0x04
	bool UseSpring; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float SpringStrength; // Offset: 0x0c // Size: 0x04
	float SpringDamping; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Addons.AnimNode_HumanoidLeggedIK
// Size: 0x500 // Inherited bytes: 0x78
struct FAnimNode_HumanoidLeggedIK : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference RootBone; // Offset: 0x78 // Size: 0x18
	struct FBoneReference LeftFootBone; // Offset: 0x90 // Size: 0x18
	struct FBoneReference RightFootBone; // Offset: 0xa8 // Size: 0x18
	struct UBoneParamDefineAsset* BoneParamDefine; // Offset: 0xc0 // Size: 0x08
	bool bEnableRootAdaption; // Offset: 0xc8 // Size: 0x01
	bool bEnableLegAdaption; // Offset: 0xc9 // Size: 0x01
	bool bEnableFootAdaption; // Offset: 0xca // Size: 0x01
	char pad_0xCB[0x5]; // Offset: 0xcb // Size: 0x05
	struct TArray<enum class ECollisionChannel> ObjectTypesToTrace; // Offset: 0xd0 // Size: 0x10
	float FootTraceUpOffset; // Offset: 0xe0 // Size: 0x04
	float FootTraceDownOffset; // Offset: 0xe4 // Size: 0x04
	float FootTraceSphereRadius; // Offset: 0xe8 // Size: 0x04
	bool bIgnoreSelfType; // Offset: 0xec // Size: 0x01
	char pad_0xED[0x3]; // Offset: 0xed // Size: 0x03
	float RootPositionInterpolateSpeed; // Offset: 0xf0 // Size: 0x04
	float FootPositionInterpolateSpeed; // Offset: 0xf4 // Size: 0x04
	float FootRotationInterpolateSpeed; // Offset: 0xf8 // Size: 0x04
	float RootHeightOffsetScale; // Offset: 0xfc // Size: 0x04
	float RootMaxHeightOffset; // Offset: 0x100 // Size: 0x04
	float FootMaxHeightOffset; // Offset: 0x104 // Size: 0x04
	float FootMaxPitchOffset; // Offset: 0x108 // Size: 0x04
	float FootMaxRollOffset; // Offset: 0x10c // Size: 0x04
	struct FAnimNode_TwoBoneIK LeftFootIKNode; // Offset: 0x110 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK RightFootIKNode; // Offset: 0x2d0 // Size: 0x1c0
	char pad_0x490[0x70]; // Offset: 0x490 // Size: 0x70
};

// Object Name: ScriptStruct Addons.AnimNode_InertializationBlendListBase
// Size: 0xd0 // Inherited bytes: 0xd0
struct FAnimNode_InertializationBlendListBase : FAnimNode_BlendListBase {
};

// Object Name: ScriptStruct Addons.AnimNode_InertializationBlendByBool
// Size: 0xd0 // Inherited bytes: 0xd0
struct FAnimNode_InertializationBlendByBool : FAnimNode_InertializationBlendListBase {
	// Fields
	bool bActiveValue; // Offset: 0xc9 // Size: 0x01
};

// Object Name: ScriptStruct Addons.AnimNode_InertializationBlendByEnum
// Size: 0xe8 // Inherited bytes: 0xd0
struct FAnimNode_InertializationBlendByEnum : FAnimNode_InertializationBlendListBase {
	// Fields
	struct TArray<IntProperty> EnumToPoseIndex; // Offset: 0xd0 // Size: 0x10
	char ActiveEnumValue; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
};

// Object Name: ScriptStruct Addons.AnimNode_InertializationBlendByInt
// Size: 0xd0 // Inherited bytes: 0xd0
struct FAnimNode_InertializationBlendByInt : FAnimNode_InertializationBlendListBase {
	// Fields
	IntProperty ActiveChildIndex; // Offset: 0xcc // Size: 0x04
};

// Object Name: ScriptStruct Addons.AnimNode_LayeredBoneBlendWithoutExclusive
// Size: 0x108 // Inherited bytes: 0x38
struct FAnimNode_LayeredBoneBlendWithoutExclusive : FAnimNode_Base {
	// Fields
	struct FPoseLink BasePose; // Offset: 0x38 // Size: 0x18
	struct TArray<struct FPoseLink> BlendPoses; // Offset: 0x50 // Size: 0x10
	struct USkeletalMesh* BaseSkeletalMesh; // Offset: 0x60 // Size: 0x08
	char pad_0x68[0x18]; // Offset: 0x68 // Size: 0x18
	struct TArray<float> BlendWeights; // Offset: 0x80 // Size: 0x10
	bool bMeshSpaceRotationBlend; // Offset: 0x90 // Size: 0x01
	enum class ECurveBlendOption CurveBlendOption; // Offset: 0x91 // Size: 0x01
	bool bBlendRootMotionBasedOnRootBone; // Offset: 0x92 // Size: 0x01
	bool bHasRelevantPoses; // Offset: 0x93 // Size: 0x01
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // Offset: 0x98 // Size: 0x10
	struct FGuid SkeletonGuid; // Offset: 0xa8 // Size: 0x10
	struct FGuid VirtualBoneGuid; // Offset: 0xb8 // Size: 0x10
	char pad_0xC8[0x40]; // Offset: 0xc8 // Size: 0x40
};

// Object Name: ScriptStruct Addons.AnimNode_MirrorPose
// Size: 0x80 // Inherited bytes: 0x38
struct FAnimNode_MirrorPose : FAnimNode_Base {
	// Fields
	struct UMirrorPoseProfile* MirrorPoseProfile; // Offset: 0x38 // Size: 0x08
	bool bMirror; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
	struct FPoseLink Source; // Offset: 0x48 // Size: 0x18
	char pad_0x60[0x20]; // Offset: 0x60 // Size: 0x20
};

// Object Name: ScriptStruct Addons.AnimNode_OffsetRootBone
// Size: 0x120 // Inherited bytes: 0x38
struct FAnimNode_OffsetRootBone : FAnimNode_Base {
	// Fields
	struct FPoseLink Source; // Offset: 0x38 // Size: 0x18
	float RotationHalfLife; // Offset: 0x50 // Size: 0x04
	float TranslationHalfLife; // Offset: 0x54 // Size: 0x04
	float MaxTransitionError; // Offset: 0x58 // Size: 0x04
	bool bOnlySimulateYaw; // Offset: 0x5c // Size: 0x01
	bool bUseAssetRootMotion; // Offset: 0x5d // Size: 0x01
	bool bIgnoreComponentScale; // Offset: 0x5e // Size: 0x01
	enum class EOffsetRootBoneMode RotationMode; // Offset: 0x5f // Size: 0x01
	enum class EOffsetRootBoneMode TranslationMode; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0xf]; // Offset: 0x61 // Size: 0x0f
	struct FQuat InputSimulatedRotation; // Offset: 0x70 // Size: 0x10
	char pad_0x80[0x90]; // Offset: 0x80 // Size: 0x90
	struct UWorld* CachedWorldContext; // Offset: 0x110 // Size: 0x08
	char pad_0x118[0x8]; // Offset: 0x118 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AnimNode_PoseDelay
// Size: 0xf8 // Inherited bytes: 0x38
struct FAnimNode_PoseDelay : FAnimNode_Base {
	// Fields
	struct FPoseLink Source; // Offset: 0x38 // Size: 0x18
	bool bEnable; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct UAnimSequence* DefaultSequence; // Offset: 0x58 // Size: 0x08
	float delayTime; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct FAnimNode_SequencePlayer SequencePlayerNode; // Offset: 0x68 // Size: 0x70
	char pad_0xD8[0x20]; // Offset: 0xd8 // Size: 0x20
};

// Object Name: ScriptStruct Addons.PoseUnit
// Size: 0x90 // Inherited bytes: 0x00
struct FPoseUnit {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct Addons.AnimNode_PoseRecorder
// Size: 0x68 // Inherited bytes: 0x38
struct FAnimNode_PoseRecorder : FAnimNode_Base {
	// Fields
	struct UAnimPoseRecorder* AnimPoseRecorder; // Offset: 0x38 // Size: 0x08
	struct TArray<struct FBoneReference> RecordedBones; // Offset: 0x40 // Size: 0x10
	struct FPoseLink Source; // Offset: 0x50 // Size: 0x18
};

// Object Name: ScriptStruct Addons.AnimNode_ProceduralWalk
// Size: 0x2b8 // Inherited bytes: 0x78
struct FAnimNode_ProceduralWalk : FAnimNode_SkeletalControlBase {
	// Fields
	struct UProceduralWalkData* ProceduralWalkData; // Offset: 0x78 // Size: 0x08
	struct FBoneReference BodyBone; // Offset: 0x80 // Size: 0x18
	struct TArray<struct FProceduralLeg> ProceduralLegs; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FProceduralLeg> Pincers; // Offset: 0xa8 // Size: 0x10
	bool bFalling; // Offset: 0xb8 // Size: 0x01
	bool bHandleMovingPlatform; // Offset: 0xb9 // Size: 0x01
	bool bEvaluateLegWhileNotHitGround; // Offset: 0xba // Size: 0x01
	bool bShouldCanUpDownInterface; // Offset: 0xbb // Size: 0x01
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct TArray<struct FLegGroup> LegGroups; // Offset: 0xc0 // Size: 0x10
	float ForwardStanceLength; // Offset: 0xd0 // Size: 0x04
	float RightStanceLength; // Offset: 0xd4 // Size: 0x04
	struct UCurveFloat* MinStepDurationCurve; // Offset: 0xd8 // Size: 0x08
	struct UCurveFloat* StancePercentageCurve; // Offset: 0xe0 // Size: 0x08
	struct UCurveFloat* StanceHeightCurve; // Offset: 0xe8 // Size: 0x08
	struct UCurveFloat* TraceYawRotationOffsetCurve; // Offset: 0xf0 // Size: 0x08
	struct UCurveFloat* SlopeBodyZOffsetCurve; // Offset: 0xf8 // Size: 0x08
	bool bStartFromTail; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
	float Precision; // Offset: 0x104 // Size: 0x04
	IntProperty MaxIterations; // Offset: 0x108 // Size: 0x04
	IntProperty InitSkipFramesNum; // Offset: 0x10c // Size: 0x04
	bool bConsiderTimeInterval; // Offset: 0x110 // Size: 0x01
	char pad_0x111[0x3]; // Offset: 0x111 // Size: 0x03
	IntProperty FootTraceSkipFrameCount; // Offset: 0x114 // Size: 0x04
	float FootTraceTimeInterval; // Offset: 0x118 // Size: 0x04
	IntProperty RootTraceSkipFrameCount; // Offset: 0x11c // Size: 0x04
	IntProperty PincerTraceSkipFrameCount; // Offset: 0x120 // Size: 0x04
	float ForceRequestTraceTimeInterval; // Offset: 0x124 // Size: 0x04
	bool bDuplicateCheckWeakPointer; // Offset: 0x128 // Size: 0x01
	bool bCacheReferenceObjectEveryFrame; // Offset: 0x129 // Size: 0x01
	bool bUseFABRIKSolve; // Offset: 0x12a // Size: 0x01
	char pad_0x12B[0x5]; // Offset: 0x12b // Size: 0x05
	struct TArray<struct FAnimNode_Fabrik> FABRIK_Nodes; // Offset: 0x130 // Size: 0x10
	bool bCheckCCDIKValidation; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x7]; // Offset: 0x141 // Size: 0x07
	struct APawn* OwnerPawn; // Offset: 0x148 // Size: 0x08
	struct USkeletalMeshComponent* SkeletalMeshComponent; // Offset: 0x150 // Size: 0x08
	struct UWorld* WorldContext; // Offset: 0x158 // Size: 0x08
	struct TWeakObjectPtr<struct APawn> WeakOwnerPawn; // Offset: 0x160 // Size: 0x08
	struct TWeakObjectPtr<struct USkeletalMeshComponent> WeakSkeletalMeshComponent; // Offset: 0x168 // Size: 0x08
	struct TWeakObjectPtr<struct UWorld> WeakWorldContext; // Offset: 0x170 // Size: 0x08
	struct TArray<struct FProceduralLegData> ProceduralLegsData; // Offset: 0x178 // Size: 0x10
	struct TArray<struct FProceduralLegData> PincersData; // Offset: 0x188 // Size: 0x10
	char pad_0x198[0x8]; // Offset: 0x198 // Size: 0x08
	struct TArray<struct FLegGroupData> LegGroupsData; // Offset: 0x1a0 // Size: 0x10
	char pad_0x1B0[0x108]; // Offset: 0x1b0 // Size: 0x108
};

// Object Name: ScriptStruct Addons.LegGroupData
// Size: 0x08 // Inherited bytes: 0x00
struct FLegGroupData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Addons.ProceduralLegData
// Size: 0x130 // Inherited bytes: 0x00
struct FProceduralLegData {
	// Fields
	char pad_0x0[0x40]; // Offset: 0x00 // Size: 0x40
	struct UPrimitiveComponent* MoveBaseComponent; // Offset: 0x40 // Size: 0x08
	char pad_0x48[0xe8]; // Offset: 0x48 // Size: 0xe8
};

// Object Name: ScriptStruct Addons.LegGroup
// Size: 0x10 // Inherited bytes: 0x00
struct FLegGroup {
	// Fields
	struct TArray<IntProperty> LegIndices; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.ProceduralLeg
// Size: 0x50 // Inherited bytes: 0x00
struct FProceduralLeg {
	// Fields
	struct FBoneReference RootBone; // Offset: 0x00 // Size: 0x18
	struct FBoneReference TipBone; // Offset: 0x18 // Size: 0x18
	struct FVector Offset; // Offset: 0x30 // Size: 0x0c
	bool bEnableRotationLimits; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct TArray<float> JointRotationLimit; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Addons.PW_CCDIKChainLink
// Size: 0x80 // Inherited bytes: 0x00
struct FPW_CCDIKChainLink {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct Addons.RotationLimitsPerJoint
// Size: 0x10 // Inherited bytes: 0x00
struct FRotationLimitsPerJoint {
	// Fields
	struct TArray<float> RotationLimits; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AnimNode_ProceduralWalkSafety
// Size: 0x310 // Inherited bytes: 0x78
struct FAnimNode_ProceduralWalkSafety : FAnimNode_SkeletalControlBase {
	// Fields
	struct UProceduralWalkData* ProceduralWalkData; // Offset: 0x78 // Size: 0x08
	struct FBoneReference BodyBone; // Offset: 0x80 // Size: 0x18
	struct TArray<struct FProceduralLeg> ProceduralLegs; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FProceduralLeg> Pincers; // Offset: 0xa8 // Size: 0x10
	bool bFalling; // Offset: 0xb8 // Size: 0x01
	bool bHandleMovingPlatform; // Offset: 0xb9 // Size: 0x01
	bool bEvaluateLegWhileNotHitGround; // Offset: 0xba // Size: 0x01
	bool bShouldCanUpDownInterface; // Offset: 0xbb // Size: 0x01
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct TArray<struct FLegGroup> LegGroups; // Offset: 0xc0 // Size: 0x10
	float ForwardStanceLength; // Offset: 0xd0 // Size: 0x04
	float RightStanceLength; // Offset: 0xd4 // Size: 0x04
	struct UCurveFloat* MinStepDurationCurve; // Offset: 0xd8 // Size: 0x08
	struct UCurveFloat* StancePercentageCurve; // Offset: 0xe0 // Size: 0x08
	struct UCurveFloat* StanceHeightCurve; // Offset: 0xe8 // Size: 0x08
	struct UCurveFloat* TraceYawRotationOffsetCurve; // Offset: 0xf0 // Size: 0x08
	struct UCurveFloat* SlopeBodyZOffsetCurve; // Offset: 0xf8 // Size: 0x08
	bool bStartFromTail; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
	float Precision; // Offset: 0x104 // Size: 0x04
	IntProperty MaxIterations; // Offset: 0x108 // Size: 0x04
	IntProperty InitSkipFramesNum; // Offset: 0x10c // Size: 0x04
	bool bConsiderTimeInterval; // Offset: 0x110 // Size: 0x01
	char pad_0x111[0x3]; // Offset: 0x111 // Size: 0x03
	IntProperty FootTraceSkipFrameCount; // Offset: 0x114 // Size: 0x04
	float FootTraceTimeInterval; // Offset: 0x118 // Size: 0x04
	IntProperty RootTraceSkipFrameCount; // Offset: 0x11c // Size: 0x04
	IntProperty PincerTraceSkipFrameCount; // Offset: 0x120 // Size: 0x04
	float ForceRequestTraceTimeInterval; // Offset: 0x124 // Size: 0x04
	bool bDuplicateCheckWeakPointer; // Offset: 0x128 // Size: 0x01
	bool bCacheReferenceObjectEveryFrame; // Offset: 0x129 // Size: 0x01
	bool bUseFABRIKSolve; // Offset: 0x12a // Size: 0x01
	char pad_0x12B[0x5]; // Offset: 0x12b // Size: 0x05
	struct TArray<struct FAnimNode_Fabrik> FABRIK_Nodes; // Offset: 0x130 // Size: 0x10
	bool bCheckCCDIKValidation; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x3]; // Offset: 0x141 // Size: 0x03
	struct FVector InPawnVelocity; // Offset: 0x144 // Size: 0x0c
	struct FVector InPawnUpVector; // Offset: 0x150 // Size: 0x0c
	struct FVector InPawnForwardVector; // Offset: 0x15c // Size: 0x0c
	struct FVector InPawnRightwardVector; // Offset: 0x168 // Size: 0x0c
	char pad_0x174[0x4]; // Offset: 0x174 // Size: 0x04
	struct USkeletalMeshComponent* SkeletalMeshComponent; // Offset: 0x178 // Size: 0x08
	struct UWorld* WorldContext; // Offset: 0x180 // Size: 0x08
	struct TWeakObjectPtr<struct USkeletalMeshComponent> WeakSkeletalMeshComponent; // Offset: 0x188 // Size: 0x08
	struct TWeakObjectPtr<struct UWorld> WeakWorldContext; // Offset: 0x190 // Size: 0x08
	char pad_0x198[0x8]; // Offset: 0x198 // Size: 0x08
	struct FTransform ActorTransform; // Offset: 0x1a0 // Size: 0x30
	struct TArray<struct FProceduralLegData> ProceduralLegsData; // Offset: 0x1d0 // Size: 0x10
	struct TArray<struct FProceduralLegData> PincersData; // Offset: 0x1e0 // Size: 0x10
	char pad_0x1F0[0x8]; // Offset: 0x1f0 // Size: 0x08
	struct TArray<struct FLegGroupData> LegGroupsData; // Offset: 0x1f8 // Size: 0x10
	char pad_0x208[0x108]; // Offset: 0x208 // Size: 0x108
};

// Object Name: ScriptStruct Addons.AnimNode_PUBGMLookAt
// Size: 0xd0 // Inherited bytes: 0x78
struct FAnimNode_PUBGMLookAt : FAnimNode_SkeletalControlBase {
	// Fields
	struct FVector LookAtLocation; // Offset: 0x78 // Size: 0x0c
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct TArray<struct FBoneReference> BonesToModify; // Offset: 0x88 // Size: 0x10
	struct FVector BoneForwardAxis; // Offset: 0x98 // Size: 0x0c
	struct FRotator MaxRotation; // Offset: 0xa4 // Size: 0x0c
	float InterpSpeed; // Offset: 0xb0 // Size: 0x04
	float ExitBuffer; // Offset: 0xb4 // Size: 0x04
	char pad_0xB8[0x18]; // Offset: 0xb8 // Size: 0x18
};

// Object Name: ScriptStruct Addons.AnimNode_SimpleIKSolver
// Size: 0x1b8 // Inherited bytes: 0x78
struct FAnimNode_SimpleIKSolver : FAnimNode_SkeletalControlBase {
	// Fields
	struct FName Root; // Offset: 0x78 // Size: 0x08
	float RootRotaionMultipier; // Offset: 0x80 // Size: 0x04
	struct FIKBodyInertia BodyInertia; // Offset: 0x84 // Size: 0x14
	struct TArray<struct FIKBoneBendDirection> BendDirections; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FIKExcludedBone> ExcludeBones; // Offset: 0xa8 // Size: 0x10
	struct TArray<struct FIKBoneLimit> JointLimits; // Offset: 0xb8 // Size: 0x10
	struct TArray<struct FIKEffector> Effectors; // Offset: 0xc8 // Size: 0x10
	float SmoothingMaxSpeedMultiplier; // Offset: 0xd8 // Size: 0x04
	float SmoothingMaxDistanceMultiplier; // Offset: 0xdc // Size: 0x04
	struct FIKCenterOfGravity CenterOfGravityConstraint; // Offset: 0xe0 // Size: 0x10
	IntProperty MaxSquashIterations; // Offset: 0xf0 // Size: 0x04
	IntProperty MaxStretchIterations; // Offset: 0xf4 // Size: 0x04
	IntProperty MaxFinalIterations; // Offset: 0xf8 // Size: 0x04
	bool AllowBoneTranslation; // Offset: 0xfc // Size: 0x01
	char pad_0xFD[0x3]; // Offset: 0xfd // Size: 0x03
	float SolverAlpha; // Offset: 0x100 // Size: 0x04
	float DebugDrawSize; // Offset: 0x104 // Size: 0x04
	struct UWorld* World; // Offset: 0x108 // Size: 0x08
	char pad_0x110[0xa8]; // Offset: 0x110 // Size: 0xa8
};

// Object Name: ScriptStruct Addons.IKCenterOfGravity
// Size: 0x10 // Inherited bytes: 0x00
struct FIKCenterOfGravity {
	// Fields
	float Alpha; // Offset: 0x00 // Size: 0x04
	float HorizAmount; // Offset: 0x04 // Size: 0x04
	float VertAmount; // Offset: 0x08 // Size: 0x04
	float PullBodyAmount; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.IKEffector
// Size: 0xe0 // Inherited bytes: 0x00
struct FIKEffector {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FVector Position; // Offset: 0x08 // Size: 0x0c
	enum class EEffectorSpaceEnum PositionSpace; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct FRotator Rotation; // Offset: 0x18 // Size: 0x0c
	enum class EEffectorSpaceEnum RotationSpace; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	float PullWeight; // Offset: 0x28 // Size: 0x04
	bool NormalizePulling; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	struct FVector PositivePullFactor; // Offset: 0x30 // Size: 0x0c
	struct FVector NegativePullFactor; // Offset: 0x3c // Size: 0x0c
	bool RotateBone; // Offset: 0x48 // Size: 0x01
	bool RotateLimb; // Offset: 0x49 // Size: 0x01
	char pad_0x4A[0x2]; // Offset: 0x4a // Size: 0x02
	float DeltaSmoothSpeed; // Offset: 0x4c // Size: 0x04
	float AngularDeltaSmoothSpeed; // Offset: 0x50 // Size: 0x04
	struct FIKSmoothing Smoothing; // Offset: 0x54 // Size: 0x18
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct FIKPoleVector PoleVector; // Offset: 0x70 // Size: 0x20
	bool AffectsCenterOfGravity; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float Alpha; // Offset: 0x94 // Size: 0x04
	char pad_0x98[0x48]; // Offset: 0x98 // Size: 0x48
};

// Object Name: ScriptStruct Addons.IKPoleVector
// Size: 0x20 // Inherited bytes: 0x00
struct FIKPoleVector {
	// Fields
	enum class EPoleVectorModeEnum Mode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Position; // Offset: 0x04 // Size: 0x0c
	struct FName BoneName; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x4]; // Offset: 0x18 // Size: 0x04
	float AngleOffset; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Addons.IKSmoothing
// Size: 0x18 // Inherited bytes: 0x00
struct FIKSmoothing {
	// Fields
	bool SmoothPositionOverTime; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float MaxPositionSpeed; // Offset: 0x04 // Size: 0x04
	float MaxPositionDistance; // Offset: 0x08 // Size: 0x04
	bool SmoothRotationOverTime; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float MaxDegreesSpeed; // Offset: 0x10 // Size: 0x04
	float MaxDegreesDistance; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.AnimNode_SpineLean
// Size: 0xd8 // Inherited bytes: 0x78
struct FAnimNode_SpineLean : FAnimNode_SkeletalControlBase {
	// Fields
	struct TArray<struct FBoneReference> SpineBones; // Offset: 0x78 // Size: 0x10
	float MaxLeanAngle; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct TArray<float> SpineWeights; // Offset: 0x90 // Size: 0x10
	float InterpSpeed; // Offset: 0xa0 // Size: 0x04
	float MaxAngularVelocity; // Offset: 0xa4 // Size: 0x04
	float MaxAngleDelta; // Offset: 0xa8 // Size: 0x04
	struct FVector MoveDirection; // Offset: 0xac // Size: 0x0c
	struct FVector WallNormal; // Offset: 0xb8 // Size: 0x0c
	bool bDrawDebug; // Offset: 0xc4 // Size: 0x01
	char pad_0xC5[0x13]; // Offset: 0xc5 // Size: 0x13
};

// Object Name: ScriptStruct Addons.AnimNode_StretchBoneChain
// Size: 0xd8 // Inherited bytes: 0x78
struct FAnimNode_StretchBoneChain : FAnimNode_SkeletalControlBase {
	// Fields
	struct FVector TargetEffectorLocation; // Offset: 0x78 // Size: 0x0c
	bool bDrawDebug; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	struct FBoneReference TipBone; // Offset: 0x88 // Size: 0x18
	struct FBoneReference RootBone; // Offset: 0xa0 // Size: 0x18
	float DefaultScaleStep; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct UCurveFloat* StretchScaleStepCurve; // Offset: 0xc0 // Size: 0x08
	char pad_0xC8[0x10]; // Offset: 0xc8 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AnimNode_StretchBoneChainSafety
// Size: 0xa8 // Inherited bytes: 0x78
struct FAnimNode_StretchBoneChainSafety : FAnimNode_SkeletalControlBase {
	// Fields
	struct FVector TargetEffectorLocation; // Offset: 0x78 // Size: 0x0c
	bool bDrawDebug; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	struct TArray<struct FBoneReference> BoneChain; // Offset: 0x88 // Size: 0x10
	float DefaultScaleStep; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct UCurveFloat* StretchScaleStepCurve; // Offset: 0xa0 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AnimNode_SyncBlendSpacePlayer
// Size: 0x140 // Inherited bytes: 0x128
struct FAnimNode_SyncBlendSpacePlayer : FAnimNode_BlendSpacePlayer {
	// Fields
	struct UAssetPlayerSyncNode* BlendSpaceSyncNode; // Offset: 0x128 // Size: 0x08
	struct FName SyncGroupName; // Offset: 0x130 // Size: 0x08
	bool bIsLeader; // Offset: 0x138 // Size: 0x01
	char pad_0x139[0x7]; // Offset: 0x139 // Size: 0x07
};

// Object Name: ScriptStruct Addons.AnimNode_SyncBlendSpacePlayerSafety
// Size: 0x168 // Inherited bytes: 0x128
struct FAnimNode_SyncBlendSpacePlayerSafety : FAnimNode_BlendSpacePlayer {
	// Fields
	struct FName SyncGroupName; // Offset: 0x128 // Size: 0x08
	bool bIsLeader; // Offset: 0x130 // Size: 0x01
	bool bUseExperimentalSync; // Offset: 0x131 // Size: 0x01
	char pad_0x132[0x6]; // Offset: 0x132 // Size: 0x06
	struct UAnimInstance* LinkedAnimInstance; // Offset: 0x138 // Size: 0x08
	bool bUpdateLeaderNodeAnyThread; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x7]; // Offset: 0x141 // Size: 0x07
	struct UAnimInstance* LinkedAnimInstanceLastFrame; // Offset: 0x148 // Size: 0x08
	struct TArray<struct UProperty*> PropagatedProperties; // Offset: 0x150 // Size: 0x10
	char pad_0x160[0x8]; // Offset: 0x160 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AnimNode_SyncSequencePlayer
// Size: 0x88 // Inherited bytes: 0x70
struct FAnimNode_SyncSequencePlayer : FAnimNode_SequencePlayer {
	// Fields
	struct UAssetPlayerSyncNode* SyncNode; // Offset: 0x70 // Size: 0x08
	struct FName SyncGroupName; // Offset: 0x78 // Size: 0x08
	bool bIsLeader; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
};

// Object Name: ScriptStruct Addons.AnimNode_SyncSequencePlayerSafety
// Size: 0x80 // Inherited bytes: 0x70
struct FAnimNode_SyncSequencePlayerSafety : FAnimNode_SequencePlayer {
	// Fields
	struct FName SyncGroupName; // Offset: 0x70 // Size: 0x08
	bool bIsLeader; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
};

// Object Name: ScriptStruct Addons.AnimNode_Turn
// Size: 0xa0 // Inherited bytes: 0x80
struct FAnimNode_Turn : FAnimNode_SyncSequencePlayerSafety {
	// Fields
	struct FRotator TargetRotator; // Offset: 0x7c // Size: 0x0c
	float RootMotionThreshold; // Offset: 0x88 // Size: 0x04
	bool bUseAssetRootMotion; // Offset: 0x8c // Size: 0x01
	char pad_0x91[0xf]; // Offset: 0x91 // Size: 0x0f
};

// Object Name: ScriptStruct Addons.AnimNode_TwoLeggedIK
// Size: 0x6a0 // Inherited bytes: 0x78
struct FAnimNode_TwoLeggedIK : FAnimNode_SkeletalControlBase {
	// Fields
	bool bEnableRootAdaption; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	struct FBoneReference Root; // Offset: 0x80 // Size: 0x18
	float RootTraceUpOffset; // Offset: 0x98 // Size: 0x04
	float RootTraceDownOffset; // Offset: 0x9c // Size: 0x04
	float RootTraceSphereRadius; // Offset: 0xa0 // Size: 0x04
	float RootPositionLerpSpeed; // Offset: 0xa4 // Size: 0x04
	float RootMaxHeightOffset; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
	struct TArray<enum class ECollisionChannel> SlopeAdaption_ObjectTypesToQuery; // Offset: 0xb0 // Size: 0x10
	bool bEnableSlopeAdaption; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x7]; // Offset: 0xc1 // Size: 0x07
	struct FBoneReference SpineRoot; // Offset: 0xc8 // Size: 0x18
	struct FBoneReference TailRoot; // Offset: 0xe0 // Size: 0x18
	float SlopeMaxPitchOffset; // Offset: 0xf8 // Size: 0x04
	float SlopeRotationLerpSpeed; // Offset: 0xfc // Size: 0x04
	struct TArray<enum class ECollisionChannel> FootAdaption_ObjectTypesToQuery; // Offset: 0x100 // Size: 0x10
	bool bEnableFootPositionAdaption; // Offset: 0x110 // Size: 0x01
	bool bEnableFootRotationAdaption; // Offset: 0x111 // Size: 0x01
	char pad_0x112[0x6]; // Offset: 0x112 // Size: 0x06
	struct FBoneReference IKBone_L; // Offset: 0x118 // Size: 0x18
	struct FBoneReference FootBone_L; // Offset: 0x130 // Size: 0x18
	char pad_0x148[0x8]; // Offset: 0x148 // Size: 0x08
	struct FBoneSocketTarget JointTarget_L; // Offset: 0x150 // Size: 0x60
	struct FVector JointTargetLocation_L; // Offset: 0x1b0 // Size: 0x0c
	char pad_0x1BC[0x4]; // Offset: 0x1bc // Size: 0x04
	struct FBoneReference IKBone_R; // Offset: 0x1c0 // Size: 0x18
	struct FBoneReference FootBone_R; // Offset: 0x1d8 // Size: 0x18
	struct FBoneSocketTarget JointTarget_R; // Offset: 0x1f0 // Size: 0x60
	struct FVector JointTargetLocation_R; // Offset: 0x250 // Size: 0x0c
	float FootTraceUpOffset; // Offset: 0x25c // Size: 0x04
	float FootTraceDownOffset; // Offset: 0x260 // Size: 0x04
	float FootTraceSphereRadius; // Offset: 0x264 // Size: 0x04
	float FootPositionLerpSpeed; // Offset: 0x268 // Size: 0x04
	float FootRotationLerpSpeed; // Offset: 0x26c // Size: 0x04
	float FootMaxPitchOffset; // Offset: 0x270 // Size: 0x04
	float FootMaxRollOffset; // Offset: 0x274 // Size: 0x04
	float FootMaxHeightOffset; // Offset: 0x278 // Size: 0x04
	IntProperty SkipEvaluateTimes; // Offset: 0x27c // Size: 0x04
	struct FAnimNode_TwoBoneIK LegAdapting_L; // Offset: 0x280 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK LegAdapting_R; // Offset: 0x440 // Size: 0x1c0
	char pad_0x600[0xa0]; // Offset: 0x600 // Size: 0xa0
};

// Object Name: ScriptStruct Addons.RecordPoseData
// Size: 0xa8 // Inherited bytes: 0x00
struct FRecordPoseData {
	// Fields
	char pad_0x0[0xa8]; // Offset: 0x00 // Size: 0xa8
};

// Object Name: ScriptStruct Addons.RecordBoneData
// Size: 0x70 // Inherited bytes: 0x00
struct FRecordBoneData {
	// Fields
	struct FTransform LastTransform; // Offset: 0x00 // Size: 0x30
	struct FTransform CurrentTransform; // Offset: 0x30 // Size: 0x30
	struct FVector Velocity; // Offset: 0x60 // Size: 0x0c
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Addons.BakedSequenceData
// Size: 0x18 // Inherited bytes: 0x00
struct FBakedSequenceData {
	// Fields
	bool bValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FBakedBoneData> BoneTransforms; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Addons.BakedBoneData
// Size: 0x10 // Inherited bytes: 0x00
struct FBakedBoneData {
	// Fields
	struct TArray<struct FTransform> Transforms; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AvatarMergerAsyncTempData
// Size: 0x120 // Inherited bytes: 0x00
struct FAvatarMergerAsyncTempData {
	// Fields
	struct TArray<struct USkeletalMeshComponent*> MeshComponentToMerge; // Offset: 0x00 // Size: 0x10
	MapProperty MatInterfaceToGameThreadInfoMap; // Offset: 0x10 // Size: 0x50
	MapProperty WaitForUpdateAndSetParamTextureMap; // Offset: 0x60 // Size: 0x50
	struct TArray<struct UTexture2D*> CreateForAsyncThreadTextureArray; // Offset: 0xb0 // Size: 0x10
	MapProperty CreateForAsyncThreadMaterialMap; // Offset: 0xc0 // Size: 0x50
	struct UMaterialInstanceDynamic* CreateForAsyncThreadBasicMaterial; // Offset: 0x110 // Size: 0x08
	char pad_0x118[0x8]; // Offset: 0x118 // Size: 0x08
};

// Object Name: ScriptStruct Addons.WaitSetParamTexture
// Size: 0x50 // Inherited bytes: 0x00
struct FWaitSetParamTexture {
	// Fields
	MapProperty TexMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.AvatarMaterialGameThreadInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FAvatarMaterialGameThreadInfo {
	// Fields
	struct UMaterial* BaseMaterial; // Offset: 0x00 // Size: 0x08
	MapProperty ParamNameToTexture2DMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Addons.AvatarObjectAsyncInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FAvatarObjectAsyncInfo {
	// Fields
	struct TWeakObjectPtr<struct UCharacterAvatarComponent2> AvatarComponent2; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct USkeletalMeshComponent> MasterSkeletalMeshComponent; // Offset: 0x08 // Size: 0x08
	struct UAvatarMerger* AvatarMerger; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AvatarMergeAvatarConfigInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FAvatarMergeAvatarConfigInfo {
	// Fields
	struct TArray<IntProperty> ItemList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.RotationAxisInheritance
// Size: 0x04 // Inherited bytes: 0x00
struct FRotationAxisInheritance {
	// Fields
	char bInheritPitch : 1; // Offset: 0x00 // Size: 0x01
	char bInheritYaw : 1; // Offset: 0x00 // Size: 0x01
	char bInheritRoll : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct Addons.BeamEmitterData
// Size: 0x0c // Inherited bytes: 0x00
struct FBeamEmitterData {
	// Fields
	IntProperty BeamEmitterIndex; // Offset: 0x00 // Size: 0x04
	IntProperty BeamEmitterSourceIndex; // Offset: 0x04 // Size: 0x04
	IntProperty BeamEmitterTargetIndex; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Addons.DeviceSmartBearerOverrideConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FDeviceSmartBearerOverrideConfig {
	// Fields
	StrProperty DeviceName; // Offset: 0x00 // Size: 0x10
	struct FSmartBearerConfig SmartBearerConfig; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SmartBearerConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FSmartBearerConfig {
	// Fields
	float MaxBearerNum; // Offset: 0x00 // Size: 0x04
	IntProperty NormalSkinShowNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Addons.ShadowOptConfig
// Size: 0x28 // Inherited bytes: 0x00
struct FShadowOptConfig {
	// Fields
	bool Enable; // Offset: 0x00 // Size: 0x01
	char DeviceLevel; // Offset: 0x01 // Size: 0x01
	char BearerType; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	float LOD0_ScreenSize; // Offset: 0x04 // Size: 0x04
	IntProperty LOD0_MaxNum; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	float LOD1_ScreenSize; // Offset: 0x10 // Size: 0x04
	IntProperty LOD1_MaxNum; // Offset: 0x14 // Size: 0x04
	char pad_0x18[0x4]; // Offset: 0x18 // Size: 0x04
	float LOD2_ScreenSize; // Offset: 0x1c // Size: 0x04
	IntProperty LOD2_MaxNum; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Addons.MinUROConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FMinUROConfig {
	// Fields
	StrProperty PlatformLimit; // Offset: 0x00 // Size: 0x10
	uint8_t FPSLimit; // Offset: 0x10 // Size: 0x01
	uint8_t RenderQualityLimit; // Offset: 0x11 // Size: 0x01
	uint8_t CharacterSimulatedMinURO; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
};

// Object Name: ScriptStruct Addons.MeshOptConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FMeshOptConfig {
	// Fields
	uint8_t DeviceLevel; // Offset: 0x00 // Size: 0x01
	uint8_t LODBias; // Offset: 0x01 // Size: 0x01
	uint8_t AvatarMergeStripTopLOD; // Offset: 0x02 // Size: 0x01
	bool bScreenSizeForAIOnly; // Offset: 0x03 // Size: 0x01
	bool bUseAvatarMerge; // Offset: 0x04 // Size: 0x01
	bool bLODBiasForAISkelOnly; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float StaticMeshOverrideScreenSize; // Offset: 0x08 // Size: 0x04
	float SkeletMeshOverrideScreenSize; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.TextureLODBiasOverrideInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FTextureLODBiasOverrideInfo {
	// Fields
	enum class TextureGroup Group; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<IntProperty> OverrideLODBias; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Addons.BioVehicleAbilityAnimInstanceProxy
// Size: 0x6b0 // Inherited bytes: 0x630
struct FBioVehicleAbilityAnimInstanceProxy : FAnimAbilityAnimInstanceProxy {
	// Fields
	struct UAnimInstance* SourceAnimInstance; // Offset: 0x630 // Size: 0x08
	struct TArray<struct FName> SourceInstancePropertyNames; // Offset: 0x638 // Size: 0x10
	struct TArray<struct UProperty*> SourceInstanceProperty; // Offset: 0x648 // Size: 0x10
	MapProperty DestInstancePropertyMap; // Offset: 0x658 // Size: 0x50
	char pad_0x6A8[0x8]; // Offset: 0x6a8 // Size: 0x08
};

// Object Name: ScriptStruct Addons.CopyPropertyData
// Size: 0x10 // Inherited bytes: 0x00
struct FCopyPropertyData {
	// Fields
	struct TArray<struct UProperty*> Properties; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.FollowTargetMoveRecord
// Size: 0x1c // Inherited bytes: 0x00
struct FFollowTargetMoveRecord {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	struct FVector Velocity; // Offset: 0x04 // Size: 0x0c
	struct FVector Location; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.BioVehicleAnimInstanceProxy
// Size: 0x640 // Inherited bytes: 0x5d0
struct FBioVehicleAnimInstanceProxy : FAnimInstanceProxy {
	// Fields
	struct UAnimInstance* SourceAnimInstance; // Offset: 0x5c8 // Size: 0x08
	struct TArray<struct FName> SourceInstancePropertyNames; // Offset: 0x5d0 // Size: 0x10
	struct TArray<struct UProperty*> SourceInstanceProperty; // Offset: 0x5e0 // Size: 0x10
	MapProperty DestInstancePropertyMap; // Offset: 0x5f0 // Size: 0x50
};

// Object Name: ScriptStruct Addons.EffectTimeline
// Size: 0x78 // Inherited bytes: 0x00
struct FEffectTimeline {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UParticleSystem* AssetParticle; // Offset: 0x08 // Size: 0x28
	char Attached : 1; // Offset: 0x30 // Size: 0x01
	char pad_0x30_1 : 7; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct FName SocketName; // Offset: 0x38 // Size: 0x08
	struct FVector Loc; // Offset: 0x40 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x4c // Size: 0x0c
	struct FVector Scale3D; // Offset: 0x58 // Size: 0x0c
	float Duration; // Offset: 0x64 // Size: 0x04
	char pad_0x68[0x10]; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct Addons.BioVehicleStateDisable
// Size: 0x02 // Inherited bytes: 0x00
struct FBioVehicleStateDisable {
	// Fields
	enum class EBioVehicleState PawnState; // Offset: 0x00 // Size: 0x01
	uint8_t Disabled; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct Addons.RepBirdCage
// Size: 0x1c // Inherited bytes: 0x00
struct FRepBirdCage {
	// Fields
	bool bIsDestroy; // Offset: 0x00 // Size: 0x01
	bool bIsAlert; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty AlertIndex; // Offset: 0x04 // Size: 0x04
	IntProperty PlayerKey; // Offset: 0x08 // Size: 0x04
	IntProperty Count; // Offset: 0x0c // Size: 0x04
	struct FVector OriPawnLocation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.BuffNodeBlackboardSetting
// Size: 0x128 // Inherited bytes: 0x00
struct FBuffNodeBlackboardSetting {
	// Fields
	enum class EUAEBlackboardType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UObject* Execute_Object; // Offset: 0x08 // Size: 0x28
	struct UClass* Execute_Class; // Offset: 0x30 // Size: 0x28
	char Execute_Enum; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	IntProperty Execute_Int; // Offset: 0x5c // Size: 0x04
	float Execute_Float; // Offset: 0x60 // Size: 0x04
	bool Execute_Bool; // Offset: 0x64 // Size: 0x01
	char pad_0x65[0x3]; // Offset: 0x65 // Size: 0x03
	StrProperty Execute_String; // Offset: 0x68 // Size: 0x10
	struct FName Execute_Name; // Offset: 0x78 // Size: 0x08
	struct FVector Execute_Vector; // Offset: 0x80 // Size: 0x0c
	struct FRotator Execute_Rotator; // Offset: 0x8c // Size: 0x0c
	struct UObject* End_Object; // Offset: 0x98 // Size: 0x28
	struct UClass* End_Class; // Offset: 0xc0 // Size: 0x28
	char End_Enum; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x3]; // Offset: 0xe9 // Size: 0x03
	IntProperty End_Int; // Offset: 0xec // Size: 0x04
	float End_Float; // Offset: 0xf0 // Size: 0x04
	bool End_Bool; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	StrProperty End_String; // Offset: 0xf8 // Size: 0x10
	struct FName End_Name; // Offset: 0x108 // Size: 0x08
	struct FVector End_Vector; // Offset: 0x110 // Size: 0x0c
	struct FRotator End_Rotator; // Offset: 0x11c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.PendingAnchorSpawn
// Size: 0x50 // Inherited bytes: 0x00
struct FPendingAnchorSpawn {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.NearbyCharacter
// Size: 0x10 // Inherited bytes: 0x00
struct FNearbyCharacter {
	// Fields
	struct ASTExtraCharacter* Character; // Offset: 0x00 // Size: 0x08
	float Attractive; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.CustomVOHelper
// Size: 0x68 // Inherited bytes: 0x00
struct FCustomVOHelper {
	// Fields
	bool IsObstacleDetected; // Offset: 0x00 // Size: 0x01
	bool IsPrecipiceDetected; // Offset: 0x01 // Size: 0x01
	bool IsMoveBlocked; // Offset: 0x02 // Size: 0x01
	enum class EVOFlag VOFlag; // Offset: 0x03 // Size: 0x01
	enum class EVOFlag LastVOFlag; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty VO_LeftOrRight; // Offset: 0x08 // Size: 0x04
	struct FVector VO_Velocity; // Offset: 0x0c // Size: 0x0c
	struct TArray<struct FHitResult> VO_Obstacles; // Offset: 0x18 // Size: 0x10
	float VO_Duration; // Offset: 0x28 // Size: 0x04
	struct FVector VO_CacheVelocity; // Offset: 0x2c // Size: 0x0c
	struct FVector VO_ObstacleCenter; // Offset: 0x38 // Size: 0x0c
	struct FVector VO_OriginLoc; // Offset: 0x44 // Size: 0x0c
	IntProperty VO_Step; // Offset: 0x50 // Size: 0x04
	struct FVector Jump_Velocity; // Offset: 0x54 // Size: 0x0c
	float CD; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct Addons.JumpObstacleData
// Size: 0x5c // Inherited bytes: 0x00
struct FJumpObstacleData {
	// Fields
	struct FVector ObstacleCenter; // Offset: 0x00 // Size: 0x0c
	struct FVector ObstacleNearest; // Offset: 0x0c // Size: 0x0c
	struct FVector ObstacleHighest; // Offset: 0x18 // Size: 0x0c
	struct FVector JumpV; // Offset: 0x24 // Size: 0x0c
	struct FVector LandSpot; // Offset: 0x30 // Size: 0x0c
	bool bValidJump; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	float TimeStamp; // Offset: 0x40 // Size: 0x04
	struct FVector OwnerLocation; // Offset: 0x44 // Size: 0x0c
	struct FRotator OwnerRotation; // Offset: 0x50 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.SuddenStopData
// Size: 0x10 // Inherited bytes: 0x00
struct FSuddenStopData {
	// Fields
	IntProperty SuddenStopID; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.CollectedEventKeysValues
// Size: 0x20 // Inherited bytes: 0x00
struct FCollectedEventKeysValues {
	// Fields
	struct TArray<StrProperty> Keys; // Offset: 0x00 // Size: 0x10
	struct TArray<StrProperty> Values; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.CollectedEventData
// Size: 0x50 // Inherited bytes: 0x00
struct FCollectedEventData {
	// Fields
	MapProperty KeyValueMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.DynamicSplineDebugInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FDynamicSplineDebugInfo {
	// Fields
	struct FVector StartPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector EndPoint; // Offset: 0x0c // Size: 0x0c
	bool bHide; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct AActor* OverlapActor; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Addons.DynamicSplineInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FDynamicSplineInfo {
	// Fields
	bool bHasNewWay; // Offset: 0x00 // Size: 0x01
	bool bBuildEnded; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty EndIndex; // Offset: 0x04 // Size: 0x04
	struct TArray<struct USimpleSyncSplineMeshComponent*> MeshComponents; // Offset: 0x08 // Size: 0x10
	struct TArray<struct USimpleSyncInstancedSplineMeshComponent*> MeshInstancedComponents; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> SplineMeshTypeIndex; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> HideMeshIndex; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FVector> SplinePoints; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Addons.FlowerWingMoveParam
// Size: 0x1c // Inherited bytes: 0x00
struct FFlowerWingMoveParam {
	// Fields
	float FlyMaxSpeed; // Offset: 0x00 // Size: 0x04
	float FlyRightMaxSpeed; // Offset: 0x04 // Size: 0x04
	float FlyBackMaxSpeed; // Offset: 0x08 // Size: 0x04
	float ForwardAccel; // Offset: 0x0c // Size: 0x04
	float RightAccel; // Offset: 0x10 // Size: 0x04
	float MaxBrakingDeceleration; // Offset: 0x14 // Size: 0x04
	float FlyFriction; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Addons.FlyFollowParams
// Size: 0x18 // Inherited bytes: 0x00
struct FFlyFollowParams {
	// Fields
	float MaxFollowDistance; // Offset: 0x00 // Size: 0x04
	float MaxLostDistance; // Offset: 0x04 // Size: 0x04
	bool bBreakFollowOnInput; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float FollowRotationSpeed; // Offset: 0x0c // Size: 0x04
	float FollowRotationTolerance; // Offset: 0x10 // Size: 0x04
	bool bAuthorityOnlyPassiveStop; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct Addons.FlySprintParams
// Size: 0x50 // Inherited bytes: 0x00
struct FFlySprintParams {
	// Fields
	enum class EFlySprintDirMode DirMode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Direction; // Offset: 0x04 // Size: 0x0c
	struct FVector DestLocation; // Offset: 0x10 // Size: 0x0c
	float Speed; // Offset: 0x1c // Size: 0x04
	struct UCurveFloat* SpeedCurve; // Offset: 0x20 // Size: 0x08
	float InitSpeed; // Offset: 0x28 // Size: 0x04
	float Acceleration; // Offset: 0x2c // Size: 0x04
	float Friction; // Offset: 0x30 // Size: 0x04
	float VerticalSpeed; // Offset: 0x34 // Size: 0x04
	struct UCurveFloat* VerticalSpeedCurve; // Offset: 0x38 // Size: 0x08
	float Duration; // Offset: 0x40 // Size: 0x04
	bool bApplyGravity; // Offset: 0x44 // Size: 0x01
	bool bApplyHeightLimit; // Offset: 0x45 // Size: 0x01
	char pad_0x46[0x2]; // Offset: 0x46 // Size: 0x02
	float EndVelocityInheritRatio; // Offset: 0x48 // Size: 0x04
	float StopOnImpactAngle; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Addons.NetWallClimbData
// Size: 0x38 // Inherited bytes: 0x00
struct FNetWallClimbData {
	// Fields
	bool bIsRunning; // Offset: 0x00 // Size: 0x01
	bool bValidNormal; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FVector WallNormal; // Offset: 0x04 // Size: 0x0c
	struct FVector ExpectedLoc; // Offset: 0x10 // Size: 0x0c
	enum class EWallSurfaceState SurfaceState; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	struct FVector MovementDir; // Offset: 0x20 // Size: 0x0c
	struct FVector Acceleration; // Offset: 0x2c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.GhostBalloonMoveParam
// Size: 0x20 // Inherited bytes: 0x00
struct FGhostBalloonMoveParam {
	// Fields
	float ForwardAccel; // Offset: 0x00 // Size: 0x04
	float ForwardBrakingDecel; // Offset: 0x04 // Size: 0x04
	float SlideForwardSpeedMax; // Offset: 0x08 // Size: 0x04
	float SlideForwardSpeedMin; // Offset: 0x0c // Size: 0x04
	float RightAccel; // Offset: 0x10 // Size: 0x04
	float RightBrakingDecel; // Offset: 0x14 // Size: 0x04
	float SlideRightSpeedMax; // Offset: 0x18 // Size: 0x04
	float HorizontalSlideSpeedMax; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Addons.CurvedUpdateParam
// Size: 0x50 // Inherited bytes: 0x00
struct FCurvedUpdateParam {
	// Fields
	struct ASTExtraBaseCharacter* UpdatedPlayer; // Offset: 0x00 // Size: 0x08
	struct UHorsePlayerCurvedUpdateComponent* OwnerComponent; // Offset: 0x08 // Size: 0x08
	struct ABioVehicleBase* BioOwner; // Offset: 0x10 // Size: 0x08
	struct UCurveVector* UsedLocationUpdateCurve; // Offset: 0x18 // Size: 0x08
	struct UCurveVector* UsedRotationUpdateCurve; // Offset: 0x20 // Size: 0x08
	struct FVector RealExitLocation; // Offset: 0x28 // Size: 0x0c
	float Rate; // Offset: 0x34 // Size: 0x04
	float CameraLerpStartTime; // Offset: 0x38 // Size: 0x04
	float CameraLerpDuration; // Offset: 0x3c // Size: 0x04
	bool bActived; // Offset: 0x40 // Size: 0x01
	bool bValid; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x2]; // Offset: 0x42 // Size: 0x02
	float TimeAccumulator; // Offset: 0x44 // Size: 0x04
	float ZScale; // Offset: 0x48 // Size: 0x04
	float MaxCurveTime; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Addons.ExitHorseSockets
// Size: 0x10 // Inherited bytes: 0x00
struct FExitHorseSockets {
	// Fields
	struct TArray<struct FName> ExitHorseSockets; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.UncombineHelper
// Size: 0x40 // Inherited bytes: 0x00
struct FUncombineHelper {
	// Fields
	bool bReset; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0xf]; // Offset: 0x01 // Size: 0x0f
	struct FTransform NewTransform; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct Addons.NitrogenAccelData
// Size: 0x1c // Inherited bytes: 0x00
struct FNitrogenAccelData {
	// Fields
	struct FVector LocationT0; // Offset: 0x00 // Size: 0x0c
	struct FRotator RotationT0; // Offset: 0x0c // Size: 0x0c
	bool IsSideOverlap; // Offset: 0x18 // Size: 0x01
	bool IsLeftSideOverlap; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
};

// Object Name: ScriptStruct Addons.HoveringBodyData
// Size: 0x1c // Inherited bytes: 0x00
struct FHoveringBodyData {
	// Fields
	float DistanceToGround; // Offset: 0x00 // Size: 0x04
	float DistanceToGround_Old; // Offset: 0x04 // Size: 0x04
	struct FVector TraceHitLocation; // Offset: 0x08 // Size: 0x0c
	float BadStatusTime; // Offset: 0x14 // Size: 0x04
	bool bInAir; // Offset: 0x18 // Size: 0x01
	bool bUnderground; // Offset: 0x19 // Size: 0x01
	bool bPenetration; // Offset: 0x1a // Size: 0x01
	bool bInWater; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct Addons.ReplicatedHoverSimData
// Size: 0x28 // Inherited bytes: 0x00
struct FReplicatedHoverSimData {
	// Fields
	float HoverDelta; // Offset: 0x00 // Size: 0x04
	struct FVector_NetQuantize100 SimForce; // Offset: 0x04 // Size: 0x0c
	struct FVector_NetQuantize100 TraceHitLocation; // Offset: 0x10 // Size: 0x0c
	struct FVector_NetQuantize100 HoverSpotRelativeLoc; // Offset: 0x1c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.HoveringSimulateData
// Size: 0x40 // Inherited bytes: 0x00
struct FHoveringSimulateData {
	// Fields
	float HoverDelta; // Offset: 0x00 // Size: 0x04
	float HoverDelta_Predict; // Offset: 0x04 // Size: 0x04
	float HoverDelta_Old; // Offset: 0x08 // Size: 0x04
	struct FVector SimForce; // Offset: 0x0c // Size: 0x0c
	bool bInAir; // Offset: 0x18 // Size: 0x01
	bool bUnderground; // Offset: 0x19 // Size: 0x01
	bool bInWater; // Offset: 0x1a // Size: 0x01
	bool bPenetration; // Offset: 0x1b // Size: 0x01
	struct FVector TraceHitLocation; // Offset: 0x1c // Size: 0x0c
	struct FVector SpotWorldLocation_Last; // Offset: 0x28 // Size: 0x0c
	struct FVector HoverSpotRelativeLoc; // Offset: 0x34 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.IKCore
// Size: 0xa0 // Inherited bytes: 0x00
struct FIKCore {
	// Fields
	char pad_0x0[0xa0]; // Offset: 0x00 // Size: 0xa0
};

// Object Name: ScriptStruct Addons.IKBoneData
// Size: 0x60 // Inherited bytes: 0x00
struct FIKBoneData {
	// Fields
	char pad_0x0[0x60]; // Offset: 0x00 // Size: 0x60
};

// Object Name: ScriptStruct Addons.IKRootData
// Size: 0x20 // Inherited bytes: 0x00
struct FIKRootData {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Addons.IKEffectorData
// Size: 0x28 // Inherited bytes: 0x00
struct FIKEffectorData {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Addons.LadderMoveData
// Size: 0x18 // Inherited bytes: 0x00
struct FLadderMoveData {
	// Fields
	bool bOnLadder; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ALadderActor* Ladder; // Offset: 0x08 // Size: 0x08
	enum class ELadderMoveType LadderMoveType; // Offset: 0x10 // Size: 0x01
	char LadderStep; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
};

// Object Name: ScriptStruct Addons.FootLockData
// Size: 0x38 // Inherited bytes: 0x00
struct FFootLockData {
	// Fields
	struct FName CurveName; // Offset: 0x00 // Size: 0x08
	struct FName BoneName; // Offset: 0x08 // Size: 0x08
	struct FName IkBoneName; // Offset: 0x10 // Size: 0x08
	float LockAlpha; // Offset: 0x18 // Size: 0x04
	struct FVector LockedLocation; // Offset: 0x1c // Size: 0x0c
	struct FRotator LockedRotator; // Offset: 0x28 // Size: 0x0c
	float CurveValueLastFrame; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Addons.MechaCameraModifier
// Size: 0x50 // Inherited bytes: 0x00
struct FMechaCameraModifier {
	// Fields
	float ArmLengthAddSpeed; // Offset: 0x00 // Size: 0x04
	float ArmLengthAddTarget; // Offset: 0x04 // Size: 0x04
	float ArmLengthAddCurrent; // Offset: 0x08 // Size: 0x04
	float FovAddSpeed; // Offset: 0x0c // Size: 0x04
	float FovAddTarget; // Offset: 0x10 // Size: 0x04
	float FovAddCurrent; // Offset: 0x14 // Size: 0x04
	float SocketOffsetAddSpeed; // Offset: 0x18 // Size: 0x04
	struct FVector SocketOffsetAddTarget; // Offset: 0x1c // Size: 0x0c
	struct FVector SocketOffsetAddCurrent; // Offset: 0x28 // Size: 0x0c
	float TargetOffsetAddSpeed; // Offset: 0x34 // Size: 0x04
	struct FVector TargetOffsetAddTarget; // Offset: 0x38 // Size: 0x0c
	struct FVector TargetOffsetAddCurrent; // Offset: 0x44 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.MechaStateSet
// Size: 0x50 // Inherited bytes: 0x00
struct FMechaStateSet {
	// Fields
	SetProperty States; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.MercenaryAnimInstanceProxy
// Size: 0x640 // Inherited bytes: 0x5d0
struct FMercenaryAnimInstanceProxy : FAnimInstanceProxy {
	// Fields
	struct UAnimInstance* SourceAnimInstance; // Offset: 0x5c8 // Size: 0x08
	struct TArray<struct FName> SourceInstancePropertyNames; // Offset: 0x5d0 // Size: 0x10
	struct TArray<struct UProperty*> SourceInstanceProperty; // Offset: 0x5e0 // Size: 0x10
	MapProperty DestInstancePropertyMap; // Offset: 0x5f0 // Size: 0x50
};

// Object Name: ScriptStruct Addons.MaterialMergeResult
// Size: 0xf8 // Inherited bytes: 0x00
struct FMaterialMergeResult {
	// Fields
	MapProperty MergedMaterial; // Offset: 0x00 // Size: 0x50
	char pad_0x50[0xa8]; // Offset: 0x50 // Size: 0xa8
};

// Object Name: ScriptStruct Addons.MaterialMergeInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FMaterialMergeInfo {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x00 // Size: 0x08
	MapProperty ParamName2TextureInfoMap; // Offset: 0x08 // Size: 0x50
	char pad_0x58[0x10]; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct Addons.MaterialTextureMergeInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FMaterialTextureMergeInfo {
	// Fields
	struct UTexture2D* Texture; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* OwnerMaterial; // Offset: 0x08 // Size: 0x08
	struct FTex2DMergeChunk MergeChunk; // Offset: 0x10 // Size: 0x2c
	char pad_0x3C[0x1c]; // Offset: 0x3c // Size: 0x1c
};

// Object Name: ScriptStruct Addons.Tex2DMergeChunk
// Size: 0x2c // Inherited bytes: 0x00
struct FTex2DMergeChunk {
	// Fields
	struct FTextureMergeExtInfo OriginTextureExtInfo; // Offset: 0x00 // Size: 0x14
	char pad_0x14[0x18]; // Offset: 0x14 // Size: 0x18
};

// Object Name: ScriptStruct Addons.TextureMergeExtInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FTextureMergeExtInfo {
	// Fields
	struct TWeakObjectPtr<struct UTexture2D> Texture2D; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0xc]; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.BoneMirrorPair
// Size: 0x10 // Inherited bytes: 0x00
struct FBoneMirrorPair {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FName MirrorBoneName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.MirrorFindReplaceExpression
// Size: 0x18 // Inherited bytes: 0x00
struct FMirrorFindReplaceExpression {
	// Fields
	struct FName FindExpression; // Offset: 0x00 // Size: 0x08
	struct FName ReplaceExpression; // Offset: 0x08 // Size: 0x08
	enum class EMirrorFindReplaceMethod FindReplaceMethod; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Addons.LinkMoveData
// Size: 0x1c // Inherited bytes: 0x00
struct FLinkMoveData {
	// Fields
	IntProperty Frame; // Offset: 0x00 // Size: 0x04
	struct FVector PreLinkLoc; // Offset: 0x04 // Size: 0x0c
	struct FVector PreLinkMoveDelta; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.HitDymaicParams
// Size: 0x38 // Inherited bytes: 0x00
struct FHitDymaicParams {
	// Fields
	struct FVector RelativeLocation; // Offset: 0x00 // Size: 0x0c
	struct FRotator RelativeRotation; // Offset: 0x0c // Size: 0x0c
	struct FVector BoxExtent; // Offset: 0x18 // Size: 0x0c
	float Radius; // Offset: 0x24 // Size: 0x04
	float HalfHeight; // Offset: 0x28 // Size: 0x04
	bool bDetectBioVehicle; // Offset: 0x2c // Size: 0x01
	bool bDetectPhysVehicle; // Offset: 0x2d // Size: 0x01
	char pad_0x2E[0x2]; // Offset: 0x2e // Size: 0x02
	struct AActor* OwnedActor; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct Addons.EnvReponseObstacle
// Size: 0x40 // Inherited bytes: 0x00
struct FEnvReponseObstacle {
	// Fields
	struct AActor* Actor; // Offset: 0x00 // Size: 0x08
	struct FVector ActorLocation; // Offset: 0x08 // Size: 0x0c
	struct FRotator ActorRotator; // Offset: 0x14 // Size: 0x0c
	float RelativeHeight; // Offset: 0x20 // Size: 0x04
	float Distance; // Offset: 0x24 // Size: 0x04
	struct FVector HitNormal; // Offset: 0x28 // Size: 0x0c
	struct FVector TopPoint; // Offset: 0x34 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.CreateSkillItemInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FCreateSkillItemInfo {
	// Fields
	struct TArray<enum class ECreateSkillItemType> CreateSkillItemTypes; // Offset: 0x00 // Size: 0x10
	IntProperty BuildingSystemID; // Offset: 0x10 // Size: 0x04
	IntProperty CheckHight; // Offset: 0x14 // Size: 0x04
	float MaxSlopeAngle; // Offset: 0x18 // Size: 0x04
	float MaxAssociateDistance; // Offset: 0x1c // Size: 0x04
	float MinAssociateDistance; // Offset: 0x20 // Size: 0x04
	float MaxHeightDifference; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Addons.TeamShape
// Size: 0x10 // Inherited bytes: 0x00
struct FTeamShape {
	// Fields
	struct TArray<struct FVector> TeamShape; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.TeamPosition
// Size: 0x18 // Inherited bytes: 0x00
struct FTeamPosition {
	// Fields
	struct FVector Position; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0xc]; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.NinjaMoveState
// Size: 0x18 // Inherited bytes: 0x00
struct FNinjaMoveState {
	// Fields
	bool bInNinjaMoveState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraBaseCharacter* LeaderPlayer; // Offset: 0x08 // Size: 0x08
	struct UNinjaMoveComponent* LeaderNinjaMoveComponent; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.CircleRunSequenceData
// Size: 0x20 // Inherited bytes: 0x00
struct FCircleRunSequenceData {
	// Fields
	struct UAnimSequence* CircleRunStartAnimSequence; // Offset: 0x00 // Size: 0x08
	struct UAnimSequence* CircleRunLoopAnimSequence; // Offset: 0x08 // Size: 0x08
	struct TArray<struct FPoseSearchData> CircleStopRunData; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.PoseSearchData
// Size: 0x10 // Inherited bytes: 0x00
struct FPoseSearchData {
	// Fields
	struct UAnimSequence* Sequence; // Offset: 0x00 // Size: 0x08
	struct FVector2D SampleRange; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.GaitStopSequenceData
// Size: 0x50 // Inherited bytes: 0x00
struct FGaitStopSequenceData {
	// Fields
	MapProperty StopData; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.StopPoseData
// Size: 0x10 // Inherited bytes: 0x00
struct FStopPoseData {
	// Fields
	struct TArray<struct FPoseSearchData> StopSequences; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.NTFoxDynamicNetSmoothConfig
// Size: 0x14 // Inherited bytes: 0x00
struct FNTFoxDynamicNetSmoothConfig {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float BaseMaxSmoothDistance; // Offset: 0x04 // Size: 0x04
	float BaseSmoothLocationTime; // Offset: 0x08 // Size: 0x04
	float MinSmoothLocationTime; // Offset: 0x0c // Size: 0x04
	float MaxSpeedRatio; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Addons.TeamData
// Size: 0x10 // Inherited bytes: 0x00
struct FTeamData {
	// Fields
	struct TArray<struct FHeadItem> TeamHeadItems; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.HeadItem
// Size: 0x18 // Inherited bytes: 0x00
struct FHeadItem {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	struct UOBModePositionWidget* HeadItemWidget; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.ModOBActorPathConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FModOBActorPathConfig {
	// Fields
	StrProperty ModName; // Offset: 0x00 // Size: 0x10
	StrProperty BPPath; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.ODMGearSpeedCurve
// Size: 0x10 // Inherited bytes: 0x00
struct FODMGearSpeedCurve {
	// Fields
	float Distance; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UCurveFloat* SpeedCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.MonsterLeisureInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FMonsterLeisureInfo {
	// Fields
	struct TArray<struct FMonsterLeisureItem> LeisureArrs; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.MonsterLeisureItem
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterLeisureItem {
	// Fields
	struct FName Key; // Offset: 0x00 // Size: 0x08
	float Duration; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UAnimationAsset* AnimSeq; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.RepPandaEmoteInteract
// Size: 0x18 // Inherited bytes: 0x00
struct FRepPandaEmoteInteract {
	// Fields
	bool bIsEmoteInteraction; // Offset: 0x00 // Size: 0x01
	bool bIsStopAllEmoteAnim; // Offset: 0x01 // Size: 0x01
	char EmoteAnimID; // Offset: 0x02 // Size: 0x01
	enum class EVehicleEmoteInteractType EmoteType; // Offset: 0x03 // Size: 0x01
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	struct AActor* Trigger; // Offset: 0x08 // Size: 0x08
	bool bPlayPassengerAnim; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Addons.EmoteInteractItem
// Size: 0x10 // Inherited bytes: 0x00
struct FEmoteInteractItem {
	// Fields
	struct TArray<struct FEmoteInteractAsset> EmoteInteractArrs; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.EmoteInteractAsset
// Size: 0x20 // Inherited bytes: 0x00
struct FEmoteInteractAsset {
	// Fields
	struct UAnimationAsset* TriggerEmote; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* VehicleEmote; // Offset: 0x08 // Size: 0x08
	struct UAnimationAsset* DriverEmote; // Offset: 0x10 // Size: 0x08
	struct UAnimationAsset* PassengerEmote; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Addons.ViewPoint
// Size: 0x1c // Inherited bytes: 0x00
struct FViewPoint {
	// Fields
	bool bHasSaved; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.TraceImpactPoint
// Size: 0x18 // Inherited bytes: 0x00
struct FTraceImpactPoint {
	// Fields
	struct FVector ImpactLocation; // Offset: 0x00 // Size: 0x0c
	struct FVector ImpactNormal; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.AccelerationMarginToAnimMargin
// Size: 0x10 // Inherited bytes: 0x00
struct FAccelerationMarginToAnimMargin {
	// Fields
	struct FVector2D AccelerationMargin; // Offset: 0x00 // Size: 0x08
	struct FVector2D AnimMargin; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.TurnMarginToAnimMargin
// Size: 0x10 // Inherited bytes: 0x00
struct FTurnMarginToAnimMargin {
	// Fields
	struct FVector2D TurnMargin; // Offset: 0x00 // Size: 0x08
	struct FVector2D AnimMargin; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SpeedRangeToAnimPlayRateRange
// Size: 0x10 // Inherited bytes: 0x00
struct FSpeedRangeToAnimPlayRateRange {
	// Fields
	struct FVector2D SpeedRange; // Offset: 0x00 // Size: 0x08
	struct FVector2D AnimPlayRateRange; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.GroundParticle
// Size: 0x38 // Inherited bytes: 0x00
struct FGroundParticle {
	// Fields
	struct UParticleSystem* GroundFlyingParticle; // Offset: 0x00 // Size: 0x08
	struct FVector LeftFootAttachPositionOffset; // Offset: 0x08 // Size: 0x0c
	struct FRotator LeftFootAttachRotationOffset; // Offset: 0x14 // Size: 0x0c
	struct FVector RightFootAttachPositionOffset; // Offset: 0x20 // Size: 0x0c
	struct FRotator RightFootAttachRotationOffset; // Offset: 0x2c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.DecalState
// Size: 0x10 // Inherited bytes: 0x00
struct FDecalState {
	// Fields
	IntProperty State; // Offset: 0x00 // Size: 0x04
	struct FVector pos; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.PushSnowBallSize
// Size: 0x18 // Inherited bytes: 0x00
struct FPushSnowBallSize {
	// Fields
	bool bSnowBallActivated; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct APenguinSnowBall* SnowBall; // Offset: 0x08 // Size: 0x08
	float MovedDistance; // Offset: 0x10 // Size: 0x04
	float Radius; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.PickTargetConfig
// Size: 0x120 // Inherited bytes: 0x00
struct FPickTargetConfig {
	// Fields
	enum class EPickTargetMode PickMode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FPickTargetParam PickParam; // Offset: 0x08 // Size: 0x28
	struct FPickTargetSweepParam SweepParam; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct FPickTargetScreenParam ScreenParam; // Offset: 0x38 // Size: 0x28
	struct FPickTargetFanSweepParam FanSweepParam; // Offset: 0x60 // Size: 0x0c
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct FPickTargetResultFilterParam ResultFilterParam; // Offset: 0x70 // Size: 0x30
	struct FPickTargetTraceFilterParam TraceFilterParam; // Offset: 0xa0 // Size: 0x30
	struct FPickTargetFallbackParam MissedFallback; // Offset: 0xd0 // Size: 0x08
	struct FBuildCheckParam BuildCheckParam; // Offset: 0xd8 // Size: 0x40
	bool bDebugDraw; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x7]; // Offset: 0x119 // Size: 0x07
};

// Object Name: ScriptStruct Addons.BuildCheckParam
// Size: 0x40 // Inherited bytes: 0x00
struct FBuildCheckParam {
	// Fields
	bool bAutoUseBuildCheck; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FloatErrorTolerance; // Offset: 0x04 // Size: 0x04
	struct TArray<enum class ECollisionChannel> BlockingChannels; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UObject*> FilterActors; // Offset: 0x18 // Size: 0x10
	struct FVector BoxExtent; // Offset: 0x28 // Size: 0x0c
	float MaxCheckPlaceHeight; // Offset: 0x34 // Size: 0x04
	bool bAngleDetect; // Offset: 0x38 // Size: 0x01
	bool LocationCheck; // Offset: 0x39 // Size: 0x01
	bool OverlapCheck; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
};

// Object Name: ScriptStruct Addons.PickTargetFallbackParam
// Size: 0x08 // Inherited bytes: 0x00
struct FPickTargetFallbackParam {
	// Fields
	enum class ETraceMissedFallback FallbackStrategy; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float GroundTraceHeight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Addons.PickTargetTraceFilterParam
// Size: 0x30 // Inherited bytes: 0x00
struct FPickTargetTraceFilterParam {
	// Fields
	bool bAutoUseTraceFilter; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName IgnoreActorTag; // Offset: 0x08 // Size: 0x08
	struct FName IgnoreComponentTag; // Offset: 0x10 // Size: 0x08
	struct TArray<struct AActor*> IgnoreActorClasses; // Offset: 0x18 // Size: 0x10
	IntProperty MaxPenetrationCount; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Addons.PickTargetResultFilterParam
// Size: 0x30 // Inherited bytes: 0x00
struct FPickTargetResultFilterParam {
	// Fields
	bool bAutoUseResultFilter; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName FilterTargetActorTag; // Offset: 0x08 // Size: 0x08
	struct FName FilterTargetComponentTag; // Offset: 0x10 // Size: 0x08
	struct TArray<struct AActor*> WrongTargetsClass; // Offset: 0x18 // Size: 0x10
	bool bCheckComponentVisible; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct Addons.PickTargetFanSweepParam
// Size: 0x0c // Inherited bytes: 0x00
struct FPickTargetFanSweepParam {
	// Fields
	IntProperty TraceSegments; // Offset: 0x00 // Size: 0x04
	float TraceAngle; // Offset: 0x04 // Size: 0x04
	bool bLineTraceFirst; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Addons.PickTargetScreenParam
// Size: 0x28 // Inherited bytes: 0x00
struct FPickTargetScreenParam {
	// Fields
	struct FVector2D ScreenCrosshairBox; // Offset: 0x00 // Size: 0x08
	float DetectionRadius; // Offset: 0x08 // Size: 0x04
	bool bCustomFilter; // Offset: 0x0c // Size: 0x01
	enum class ECollisionChannel TraceChannel; // Offset: 0x0d // Size: 0x01
	bool bCheckActorVisible; // Offset: 0x0e // Size: 0x01
	bool bCheckComponentVisible; // Offset: 0x0f // Size: 0x01
	bool bOnlyDetectCharacters; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct TArray<struct AActor*> TargetClasses; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Addons.PickTargetSweepParam
// Size: 0x04 // Inherited bytes: 0x00
struct FPickTargetSweepParam {
	// Fields
	float SweepRadius; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Addons.PickTargetParam
// Size: 0x28 // Inherited bytes: 0x00
struct FPickTargetParam {
	// Fields
	bool bStartTraceFromSpringArm; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float TraceDistance; // Offset: 0x04 // Size: 0x04
	bool bSingleChannel; // Offset: 0x08 // Size: 0x01
	enum class ECollisionChannel TraceChannel; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // Offset: 0x10 // Size: 0x10
	bool bCheckActorVisible; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct Addons.PickTargetContext
// Size: 0xd8 // Inherited bytes: 0x00
struct FPickTargetContext {
	// Fields
	struct ACharacter* OwnerChar; // Offset: 0x00 // Size: 0x08
	struct FName ConfigKey; // Offset: 0x08 // Size: 0x08
	struct FVector StartLocation; // Offset: 0x10 // Size: 0x0c
	struct FVector TraceDirection; // Offset: 0x1c // Size: 0x0c
	struct FVector EndLocation; // Offset: 0x28 // Size: 0x0c
	bool bTraceHit; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	struct FHitResult HitResult; // Offset: 0x38 // Size: 0x88
	struct TArray<struct AActor*> DetectedActors; // Offset: 0xc0 // Size: 0x10
	bool bResultValid; // Offset: 0xd0 // Size: 0x01
	bool bFallbackHit; // Offset: 0xd1 // Size: 0x01
	bool bFinalResult; // Offset: 0xd2 // Size: 0x01
	char pad_0xD3[0x5]; // Offset: 0xd3 // Size: 0x05
};

// Object Name: ScriptStruct Addons.PterosaurUpdateDistanceToLandConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FPterosaurUpdateDistanceToLandConfig {
	// Fields
	float Height; // Offset: 0x00 // Size: 0x04
	float Interval; // Offset: 0x04 // Size: 0x04
	bool bUseSweep; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Addons.PterosaurLandingConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FPterosaurLandingConfig {
	// Fields
	float MaxAllowedFlyingSpeed; // Offset: 0x00 // Size: 0x04
	float MaxLandingTime; // Offset: 0x04 // Size: 0x04
	float LandingToGroundTime; // Offset: 0x08 // Size: 0x04
	bool bForceToGroundInFixedTime; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct UCurveVector* LandingCurve; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.HeadCapsuleSetup
// Size: 0x50 // Inherited bytes: 0x00
struct FHeadCapsuleSetup {
	// Fields
	struct FName CollisionProfileName; // Offset: 0x00 // Size: 0x08
	struct FName Tag; // Offset: 0x08 // Size: 0x08
	float Radius; // Offset: 0x10 // Size: 0x04
	float HalfHeight; // Offset: 0x14 // Size: 0x04
	struct FVector RelativeLoc; // Offset: 0x18 // Size: 0x0c
	struct FRotator RelativeRot; // Offset: 0x24 // Size: 0x0c
	struct TArray<enum class ECollisionChannel> TraceChannels; // Offset: 0x30 // Size: 0x10
	struct TArray<enum class ECollisionResponse> TraceResponses; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Addons.RecordData
// Size: 0x10 // Inherited bytes: 0x00
struct FRecordData {
	// Fields
	float RecordDeltaTime; // Offset: 0x00 // Size: 0x04
	struct FVector RecordLocation; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.WallDetectionResult
// Size: 0x48 // Inherited bytes: 0x00
struct FWallDetectionResult {
	// Fields
	bool bDetectedWall; // Offset: 0x00 // Size: 0x01
	bool bValidNormal; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FVector WallNormal; // Offset: 0x04 // Size: 0x0c
	struct FVector WallLocation; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UPrimitiveComponent* WallComponent; // Offset: 0x20 // Size: 0x08
	struct FWallBodyCoverage BodyCoverage; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct TArray<struct FHitResult> RawHits; // Offset: 0x30 // Size: 0x10
	bool bIsFloorExit; // Offset: 0x40 // Size: 0x01
	bool bIsRoofExit; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x6]; // Offset: 0x42 // Size: 0x06
};

// Object Name: ScriptStruct Addons.WallBodyCoverage
// Size: 0x01 // Inherited bytes: 0x00
struct FWallBodyCoverage {
	// Fields
	bool bHeadHasWall; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Addons.LingeringRope
// Size: 0x28 // Inherited bytes: 0x00
struct FLingeringRope {
	// Fields
	struct UCableComponent* CableComponent; // Offset: 0x00 // Size: 0x08
	struct USceneComponent* EndAnchor; // Offset: 0x08 // Size: 0x08
	struct UMaterialInstanceDynamic* DynamicMaterial; // Offset: 0x10 // Size: 0x08
	struct UParticleSystemComponent* EndEffectComponent; // Offset: 0x18 // Size: 0x08
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SpiderSwingStartRequest
// Size: 0x10 // Inherited bytes: 0x00
struct FSpiderSwingStartRequest {
	// Fields
	struct FVector AttachPoint; // Offset: 0x00 // Size: 0x0c
	enum class ESpiderSwingHandSide ClientHandSide; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Addons.SpiderSwingDetectResult
// Size: 0x20 // Inherited bytes: 0x00
struct FSpiderSwingDetectResult {
	// Fields
	bool bFound; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector AttachPoint; // Offset: 0x04 // Size: 0x0c
	struct AActor* HitActor; // Offset: 0x10 // Size: 0x08
	bool bFromHit; // Offset: 0x18 // Size: 0x01
	bool bIsSkyHook; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float Score; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Addons.SpiderSwingSyncData
// Size: 0x24 // Inherited bytes: 0x00
struct FSpiderSwingSyncData {
	// Fields
	enum class ESpiderSwingMoveState MoveState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector_NetQuantize100 AttachPoint; // Offset: 0x04 // Size: 0x0c
	float RopeLength; // Offset: 0x10 // Size: 0x04
	struct FVector_NetQuantize10 Velocity; // Offset: 0x14 // Size: 0x0c
	enum class ESpiderSwingHandSide HandSide; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
};

// Object Name: ScriptStruct Addons.ActorMarkData
// Size: 0x18 // Inherited bytes: 0x00
struct FActorMarkData {
	// Fields
	struct AActor* MarkActorClass; // Offset: 0x00 // Size: 0x08
	IntProperty TypeId; // Offset: 0x08 // Size: 0x04
	enum class EAddMarkFlag MapAdded; // Offset: 0x0c // Size: 0x01
	bool bLocalData; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	float DistanceToMark; // Offset: 0x10 // Size: 0x04
	bool bUpdateRotation; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct Addons.BuffAttachmentItem
// Size: 0x68 // Inherited bytes: 0x00
struct FBuffAttachmentItem {
	// Fields
	struct USceneComponent* Component; // Offset: 0x00 // Size: 0x08
	struct UParticleSystem* ParticleSystem; // Offset: 0x08 // Size: 0x28
	bool bCapsuleTop; // Offset: 0x30 // Size: 0x01
	bool bOnlyLocalControl; // Offset: 0x31 // Size: 0x01
	bool bDestroyOnEnd; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x5]; // Offset: 0x33 // Size: 0x05
	struct FName SocketName; // Offset: 0x38 // Size: 0x08
	enum class EAttachRelativeLocation NonSocketAttachLocation; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	struct FVector LocationOffset; // Offset: 0x44 // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x50 // Size: 0x0c
	float Scale; // Offset: 0x5c // Size: 0x04
	enum class EBuffTargetType TargetType; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
};

// Object Name: ScriptStruct Addons.BACustomDamageData
// Size: 0x30 // Inherited bytes: 0x00
struct FBACustomDamageData {
	// Fields
	float ExtraDamageScale; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ExtraDamageScaleFormula; // Offset: 0x08 // Size: 0x10
	bool bMultiplyOnLayer; // Offset: 0x18 // Size: 0x01
	bool bEnableAllDamage; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x6]; // Offset: 0x1a // Size: 0x06
	struct TArray<enum class EWeaponTypeNew> ValidWeaponTypeMap; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Addons.BACustomTypeDamageData
// Size: 0x50 // Inherited bytes: 0x30
struct FBACustomTypeDamageData : FBACustomDamageData {
	// Fields
	struct TArray<IntProperty> ResIDArray; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FName> TagArray; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Addons.BACustomHpDamageData
// Size: 0x38 // Inherited bytes: 0x30
struct FBACustomHpDamageData : FBACustomDamageData {
	// Fields
	float MinHpPer; // Offset: 0x30 // Size: 0x04
	float MaxHpPer; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Addons.BACustomDistDamageData
// Size: 0x38 // Inherited bytes: 0x30
struct FBACustomDistDamageData : FBACustomDamageData {
	// Fields
	float minDist; // Offset: 0x30 // Size: 0x04
	float MaxDist; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Addons.PropSkillExplodeParam
// Size: 0x24 // Inherited bytes: 0x00
struct FPropSkillExplodeParam {
	// Fields
	float GenProbility; // Offset: 0x00 // Size: 0x04
	IntProperty PropSkillLevel; // Offset: 0x04 // Size: 0x04
	float PlayerInnerDamageHealthRatio; // Offset: 0x08 // Size: 0x04
	float PlayerOuterDamageHealthRatio; // Offset: 0x0c // Size: 0x04
	float ZombieInnerDamageHealthRatio; // Offset: 0x10 // Size: 0x04
	float ZombieOuterDamageHealthRatio; // Offset: 0x14 // Size: 0x04
	float WallWeakenDamageRatio; // Offset: 0x18 // Size: 0x04
	float InnerDamageRadius; // Offset: 0x1c // Size: 0x04
	float OuterDamageRadius; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct Addons.PropSkillPosionParam
// Size: 0x14 // Inherited bytes: 0x00
struct FPropSkillPosionParam {
	// Fields
	float GenProbility; // Offset: 0x00 // Size: 0x04
	IntProperty PropSkillLevel; // Offset: 0x04 // Size: 0x04
	float CheckPeriod; // Offset: 0x08 // Size: 0x04
	IntProperty HumanBuffID; // Offset: 0x0c // Size: 0x04
	IntProperty ZombieBuffID; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Addons.BuffAttrModifierItem
// Size: 0x18 // Inherited bytes: 0x00
struct FBuffAttrModifierItem {
	// Fields
	StrProperty AttrName; // Offset: 0x00 // Size: 0x10
	float ModifyValue; // Offset: 0x10 // Size: 0x04
	enum class EAttrModifyRefType AttrRefValueType; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct Addons.MultipleJumpInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FMultipleJumpInfo {
	// Fields
	struct TArray<struct FJumpStepInfo> JumpSteps; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.JumpStepInfo
// Size: 0x04 // Inherited bytes: 0x00
struct FJumpStepInfo {
	// Fields
	float JumpZVelocity; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Addons.PostEventParams
// Size: 0x80 // Inherited bytes: 0x00
struct FPostEventParams {
	// Fields
	StrProperty EventType; // Offset: 0x00 // Size: 0x10
	StrProperty EventID; // Offset: 0x10 // Size: 0x10
	MapProperty ActionParams; // Offset: 0x20 // Size: 0x50
	struct TArray<struct FUAEBlackboardKeySelector> BBKeySelectors; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct Addons.PostEventWithCauserParams
// Size: 0x20 // Inherited bytes: 0x00
struct FPostEventWithCauserParams {
	// Fields
	StrProperty EventType; // Offset: 0x00 // Size: 0x10
	StrProperty EventID; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.ReplaceAvatarMaterialParams
// Size: 0x10 // Inherited bytes: 0x00
struct FReplaceAvatarMaterialParams {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* ParameterValueCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.BuffSpawnActorInstanceItem
// Size: 0x14 // Inherited bytes: 0x00
struct FBuffSpawnActorInstanceItem {
	// Fields
	char pad_0x0[0x14]; // Offset: 0x00 // Size: 0x14
};

// Object Name: ScriptStruct Addons.BuffSpawnActorItem
// Size: 0x78 // Inherited bytes: 0x00
struct FBuffSpawnActorItem {
	// Fields
	struct UClass* ActorClass; // Offset: 0x00 // Size: 0x28
	bool bLoadAsync; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FName SocketName; // Offset: 0x30 // Size: 0x08
	enum class EBuffTargetSocketType TargetType; // Offset: 0x38 // Size: 0x01
	bool bUseSharedTarget; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	struct FVector RelLocation; // Offset: 0x3c // Size: 0x0c
	bool bUseGroundNormal; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
	struct FVector GroundOffset; // Offset: 0x4c // Size: 0x0c
	struct FRotator Rotator; // Offset: 0x58 // Size: 0x0c
	enum class EBuffEnabledRole EnableRole; // Offset: 0x64 // Size: 0x01
	bool IsDestroyOnBuffEnd; // Offset: 0x65 // Size: 0x01
	char pad_0x66[0x2]; // Offset: 0x66 // Size: 0x02
	float LifeTime; // Offset: 0x68 // Size: 0x04
	float NotEndDestroyLifeTime; // Offset: 0x6c // Size: 0x04
	bool bAttachMesh; // Offset: 0x70 // Size: 0x01
	bool bDSUpdateMesh; // Offset: 0x71 // Size: 0x01
	bool bRecordCauser; // Offset: 0x72 // Size: 0x01
	char pad_0x73[0x5]; // Offset: 0x73 // Size: 0x05
};

// Object Name: ScriptStruct Addons.BAWeaponAttrModifyConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FBAWeaponAttrModifyConfig {
	// Fields
	StrProperty AttrName; // Offset: 0x00 // Size: 0x10
	float ModifyValue; // Offset: 0x10 // Size: 0x04
	enum class EAttrModifyRefType AttrRefValueType; // Offset: 0x14 // Size: 0x01
	bool MultiplyOnLayer; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	StrProperty ModifyValueFormula; // Offset: 0x18 // Size: 0x10
	bool ClientSimulate; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	uint32_t ModifyID; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Addons.DestructionConfig
// Size: 0x14 // Inherited bytes: 0x00
struct FDestructionConfig {
	// Fields
	float DestructionRadius; // Offset: 0x00 // Size: 0x04
	float DestructionRadiusScale; // Offset: 0x04 // Size: 0x04
	float DestructionDamage; // Offset: 0x08 // Size: 0x04
	float DestructionDamageScale; // Offset: 0x0c // Size: 0x04
	float DestructionVelocity; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Addons.DecorationCircle
// Size: 0x90 // Inherited bytes: 0x00
struct FDecorationCircle {
	// Fields
	struct USkeletalMesh* AssetMesh; // Offset: 0x00 // Size: 0x28
	struct FName SocketName; // Offset: 0x28 // Size: 0x08
	struct FTransform DefaultTransform; // Offset: 0x30 // Size: 0x30
	struct FName MatSlotName; // Offset: 0x60 // Size: 0x08
	struct TArray<struct FDecorationCircleMatParams> MatParams; // Offset: 0x68 // Size: 0x10
	struct TWeakObjectPtr<struct USkeletalMeshComponent> MeshComponent; // Offset: 0x78 // Size: 0x08
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> MatInstance; // Offset: 0x80 // Size: 0x08
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08
};

// Object Name: ScriptStruct Addons.DecorationCircleMatParams
// Size: 0x28 // Inherited bytes: 0x00
struct FDecorationCircleMatParams {
	// Fields
	struct FVector2D HPRange; // Offset: 0x00 // Size: 0x08
	struct FName ColorParamName; // Offset: 0x08 // Size: 0x08
	struct FName LightColorParamName; // Offset: 0x10 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Addons.MyriapodVehicleMovementComponentPostPhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FMyriapodVehicleMovementComponentPostPhysicsTickFunction : FTickFunction {
	// Fields
	struct USTExtraMyriapodVehMovementCom* Target; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Addons.TPlanPlayerUndergroundList
// Size: 0x10 // Inherited bytes: 0x00
struct FTPlanPlayerUndergroundList {
	// Fields
	uint64 PlayerUndergroundIndexLow; // Offset: 0x00 // Size: 0x08
	uint64 PlayerUndergroundIndexHigh; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.TPlanTeamInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FTPlanTeamInfo {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty TeamWorth; // Offset: 0x04 // Size: 0x04
	IntProperty TeamKills; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FTPlanPlayerInfo> PlayerInfos; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FVector> EscapePosi; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Addons.TPlanPlayerInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FTPlanPlayerInfo {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char State; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty Kills; // Offset: 0x08 // Size: 0x04
	IntProperty Worth; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.TitanHide
// Size: 0x1c // Inherited bytes: 0x00
struct FTitanHide {
	// Fields
	bool bHideIngame; // Offset: 0x00 // Size: 0x01
	bool bStopTick; // Offset: 0x01 // Size: 0x01
	bool bAutonomousEnter; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.TitanCurveMovingData
// Size: 0x10 // Inherited bytes: 0x00
struct FTitanCurveMovingData {
	// Fields
	struct FName CurveMovingTag; // Offset: 0x00 // Size: 0x08
	struct UCurveVector* CurveAsset; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.MotionSearchResult
// Size: 0x10 // Inherited bytes: 0x00
struct FMotionSearchResult {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimSequence* ResultSequence; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.TFPoseData
// Size: 0x20 // Inherited bytes: 0x00
struct FTFPoseData {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimSequence* InSequence; // Offset: 0x08 // Size: 0x08
	struct TArray<struct FVector> BoneLocations; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AttackPauseFrameData
// Size: 0x50 // Inherited bytes: 0x00
struct FAttackPauseFrameData {
	// Fields
	float PauseDuration; // Offset: 0x00 // Size: 0x04
	float NewPlayRateAfterPause; // Offset: 0x04 // Size: 0x04
	struct UParticleSystem* HitParticle; // Offset: 0x08 // Size: 0x08
	struct FVector ParticleLocationOffset; // Offset: 0x10 // Size: 0x0c
	struct FRotator ParticleRotationOffset; // Offset: 0x1c // Size: 0x0c
	struct UCameraShake* CameraShaker; // Offset: 0x28 // Size: 0x08
	float CameraShakeScale; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct UAkAudioEvent* HitAudio; // Offset: 0x38 // Size: 0x08
	float CapsuleTraceRadius; // Offset: 0x40 // Size: 0x04
	float CapsuleTraceHalfHeight; // Offset: 0x44 // Size: 0x04
	float CapsuleTraceVerticalOffset; // Offset: 0x48 // Size: 0x04
	float CapsuleTraceForwardOffset; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Addons.AudioConfigWithTips
// Size: 0x38 // Inherited bytes: 0x00
struct FAudioConfigWithTips {
	// Fields
	struct UAkAudioEvent* AssetAudioEvent; // Offset: 0x00 // Size: 0x28
	IntProperty TextIDForTips; // Offset: 0x28 // Size: 0x04
	float TextDurationForTips; // Offset: 0x2c // Size: 0x04
	enum class ESTExtraVehicleType ForceVehicleType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct Addons.TransformerCurveNetData
// Size: 0x1c // Inherited bytes: 0x00
struct FTransformerCurveNetData {
	// Fields
	IntProperty CurveIndex; // Offset: 0x00 // Size: 0x04
	struct FVector CurveDirX; // Offset: 0x04 // Size: 0x0c
	struct FVector CurveOrigin; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.TransformerCurveMovingData
// Size: 0x18 // Inherited bytes: 0x00
struct FTransformerCurveMovingData {
	// Fields
	struct FName CurveMovingTag; // Offset: 0x00 // Size: 0x08
	struct UCurveVector* CurveAsset; // Offset: 0x08 // Size: 0x08
	enum class ETransformerCurveMoveType CurveType; // Offset: 0x10 // Size: 0x01
	bool bAdditiveMove; // Offset: 0x11 // Size: 0x01
	bool bMaintainCurVel; // Offset: 0x12 // Size: 0x01
	bool bInterruptByInput; // Offset: 0x13 // Size: 0x01
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.TransformerStateSet
// Size: 0x50 // Inherited bytes: 0x00
struct FTransformerStateSet {
	// Fields
	SetProperty States; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Addons.TransformLevelToolConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FTransformLevelToolConfig {
	// Fields
	struct FVector SourceLevelOffset; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FTransformLevelTargetConfig> TargetConfigs; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.TransformLevelTargetConfig
// Size: 0x60 // Inherited bytes: 0x00
struct FTransformLevelTargetConfig {
	// Fields
	StrProperty Level; // Offset: 0x00 // Size: 0x10
	StrProperty Comment; // Offset: 0x10 // Size: 0x10
	bool IsEnabled; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0xf]; // Offset: 0x21 // Size: 0x0f
	struct FTransform Transform; // Offset: 0x30 // Size: 0x30
};

// Object Name: ScriptStruct Addons.TweenAnimTask
// Size: 0xc0 // Inherited bytes: 0x00
struct FTweenAnimTask {
	// Fields
	char pad_0x0[0xc0]; // Offset: 0x00 // Size: 0xc0
};

// Object Name: ScriptStruct Addons.BunchAction
// Size: 0x10 // Inherited bytes: 0x00
struct FBunchAction {
	// Fields
	struct UUTSkillAction* Effect; // Offset: 0x00 // Size: 0x08
	bool bExeReset; // Offset: 0x08 // Size: 0x01
	bool bExeUndo; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
};

// Object Name: ScriptStruct Addons.ViewInfoCurve
// Size: 0x5d0 // Inherited bytes: 0x00
struct FViewInfoCurve {
	// Fields
	float DistanceThreshold; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FMinimalViewInfo AdditiveCameraViewInfo; // Offset: 0x10 // Size: 0x5b0
	struct UCurveFloat* FovCurve; // Offset: 0x5c0 // Size: 0x08
	char pad_0x5C8[0x8]; // Offset: 0x5c8 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AddCameraViewInfoStruct
// Size: 0x20 // Inherited bytes: 0x00
struct FAddCameraViewInfoStruct {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct UCurveFloat* CurFOVCurve; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AddMapMarkInstanceStruct
// Size: 0x04 // Inherited bytes: 0x00
struct FAddMapMarkInstanceStruct {
	// Fields
	IntProperty InstanceID; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Addons.RandomBuffItem
// Size: 0x20 // Inherited bytes: 0x00
struct FRandomBuffItem {
	// Fields
	IntProperty Probability; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName BuffName; // Offset: 0x08 // Size: 0x08
	IntProperty BuffID; // Offset: 0x10 // Size: 0x04
	IntProperty SkillID; // Offset: 0x14 // Size: 0x04
	IntProperty AddLayerCount; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Addons.SkillActionMemory_AddRemoveBuff
// Size: 0x0c // Inherited bytes: 0x00
struct FSkillActionMemory_AddRemoveBuff {
	// Fields
	IntProperty ActionID; // Offset: 0x00 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> Target; // Offset: 0x04 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SAAllowPawnStateInstanceStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FSAAllowPawnStateInstanceStruct {
	// Fields
	struct TWeakObjectPtr<struct ASTExtraCharacter> TargetCharacter; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Addons.VehicleWeaponBoardDataConfigItem
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleWeaponBoardDataConfigItem {
	// Fields
	IntProperty SeatID; // Offset: 0x00 // Size: 0x04
	IntProperty WeaponListID; // Offset: 0x04 // Size: 0x04
	enum class EVehicleWeaponBoardDataType DataType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FUAEBlackboardKeySelector BlackboardKey; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SkillAction_AttachActorCreateData
// Size: 0x30 // Inherited bytes: 0x00
struct FSkillAction_AttachActorCreateData {
	// Fields
	struct AActor* ActorTemplate; // Offset: 0x00 // Size: 0x08
	struct FName AttachSocketName; // Offset: 0x08 // Size: 0x08
	struct FVector RelativeLocation; // Offset: 0x10 // Size: 0x0c
	struct FRotator RelativeRotation; // Offset: 0x1c // Size: 0x0c
	bool DestroyAfterSkill; // Offset: 0x28 // Size: 0x01
	bool DestroyAfterPhase; // Offset: 0x29 // Size: 0x01
	bool SnapToTargetIncludingScale; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x1]; // Offset: 0x2b // Size: 0x01
	float DestroyAfterTime; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Addons.SAttachedActorPlayMontageInstanceStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FSAttachedActorPlayMontageInstanceStruct {
	// Fields
	struct TWeakObjectPtr<struct USkeletalMeshComponent> CachedComp; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SAAttachPawnPlayMontageInstanceStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FSAAttachPawnPlayMontageInstanceStruct {
	// Fields
	struct TWeakObjectPtr<struct UAnimMontage> AnimMontageCurrent; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct ASTExtraBaseCharacter> CachedCharacter; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SABindDelegateInstanceStruct
// Size: 0x0c // Inherited bytes: 0x00
struct FSABindDelegateInstanceStruct {
	// Fields
	struct TWeakObjectPtr<struct UObject> TargetObject; // Offset: 0x00 // Size: 0x08
	IntProperty LuaEventHandle; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Addons.AirAttackConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FAirAttackConfig {
	// Fields
	float AttackLastingTime; // Offset: 0x00 // Size: 0x04
	float AttackAreaRadius; // Offset: 0x04 // Size: 0x04
	IntProperty TotalBombs; // Offset: 0x08 // Size: 0x04
	float BombsRadius; // Offset: 0x0c // Size: 0x04
	struct AAirAttackBombActor* BombActorTemplate; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SpawnVehicleConfig
// Size: 0x14 // Inherited bytes: 0x00
struct FSpawnVehicleConfig {
	// Fields
	IntProperty VehicleSpawnID; // Offset: 0x00 // Size: 0x04
	struct FVector OffsetLocation; // Offset: 0x04 // Size: 0x0c
	bool AutoEnterVehicle; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct Addons.AKRTPCParam
// Size: 0x28 // Inherited bytes: 0x00
struct FAKRTPCParam {
	// Fields
	StrProperty RTPC; // Offset: 0x00 // Size: 0x10
	float Value; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct UCurveFloat* ValueCurve; // Offset: 0x18 // Size: 0x08
	IntProperty InterpolationTimeMs; // Offset: 0x20 // Size: 0x04
	bool NeedTick; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct Addons.AKSwitchParam
// Size: 0x20 // Inherited bytes: 0x00
struct FAKSwitchParam {
	// Fields
	StrProperty SwitchGroup; // Offset: 0x00 // Size: 0x10
	StrProperty SwitchState; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.ChangeAkRT
// Size: 0x10 // Inherited bytes: 0x00
struct FChangeAkRT {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UAkComponent* CachedAK; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SACircleMove
// Size: 0x40 // Inherited bytes: 0x00
struct FSACircleMove {
	// Fields
	char pad_0x0[0x40]; // Offset: 0x00 // Size: 0x40
};

// Object Name: ScriptStruct Addons.TargetCommonFilter
// Size: 0x40 // Inherited bytes: 0x00
struct FTargetCommonFilter {
	// Fields
	struct TArray<enum class EPawnState> ExcludePawnStates; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> ExcludeBuffIDs; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FName> ExcludeActorTags; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FName> RequiredActorTags; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Addons.SkillActionMemory_ControlCharacterSearch
// Size: 0x18 // Inherited bytes: 0x00
struct FSkillActionMemory_ControlCharacterSearch {
	// Fields
	struct FSearchControlRuntimeState Runtime; // Offset: 0x00 // Size: 0x10
	bool bAlreadyReverted; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Addons.DisableBioVehicleStateInfo
// Size: 0x03 // Inherited bytes: 0x00
struct FDisableBioVehicleStateInfo {
	// Fields
	enum class EBioVehicleState State; // Offset: 0x00 // Size: 0x01
	bool bNewDisable; // Offset: 0x01 // Size: 0x01
	bool bResetOnEnable; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct Addons.DisablePawnStateInfo
// Size: 0x03 // Inherited bytes: 0x00
struct FDisablePawnStateInfo {
	// Fields
	enum class EPawnState State; // Offset: 0x00 // Size: 0x01
	bool bNewDisable; // Offset: 0x01 // Size: 0x01
	bool bResetOnEnable; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct Addons.SkillAction_DropItemData
// Size: 0x08 // Inherited bytes: 0x00
struct FSkillAction_DropItemData {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Num; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Addons.SAFollowerPawnPlayMontageInstanceStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FSAFollowerPawnPlayMontageInstanceStruct {
	// Fields
	struct TWeakObjectPtr<struct UAnimMontage> AnimMontageCurrent; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct ASTExtraBaseCharacter> CachedCharacter; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.FollowMovePitchLimit
// Size: 0x08 // Inherited bytes: 0x00
struct FFollowMovePitchLimit {
	// Fields
	float RelativeRotMin; // Offset: 0x00 // Size: 0x04
	float RelativeRotMax; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Addons.UAESkillActionMemory_GNAction
// Size: 0x04 // Inherited bytes: 0x00
struct FUAESkillActionMemory_GNAction {
	// Fields
	IntProperty ActionID; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Addons.SkillAction_HideMainUIData
// Size: 0x10 // Inherited bytes: 0x00
struct FSkillAction_HideMainUIData {
	// Fields
	StrProperty RegistUIName; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.IngoreSkillArray
// Size: 0x10 // Inherited bytes: 0x00
struct FIngoreSkillArray {
	// Fields
	struct TArray<IntProperty> SkillList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.CollisionChannelResModify
// Size: 0x02 // Inherited bytes: 0x00
struct FCollisionChannelResModify {
	// Fields
	enum class ECollisionChannel CollisionChannel; // Offset: 0x00 // Size: 0x01
	enum class ECollisionResponse ModifyResponse; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct Addons.MoveSpeedCurve
// Size: 0x10 // Inherited bytes: 0x00
struct FMoveSpeedCurve {
	// Fields
	float DistanceThreshold; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UCurveFloat* LaunchSpeedCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SALaunchMove
// Size: 0x40 // Inherited bytes: 0x00
struct FSALaunchMove {
	// Fields
	char pad_0x0[0x38]; // Offset: 0x00 // Size: 0x38
	struct UCurveFloat* SpeedCurve; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Addons.LockCameraViewTypeData
// Size: 0x08 // Inherited bytes: 0x00
struct FLockCameraViewTypeData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SAPlayMontageInstanceStruct
// Size: 0x0c // Inherited bytes: 0x00
struct FSAPlayMontageInstanceStruct {
	// Fields
	IntProperty ActionID; // Offset: 0x00 // Size: 0x04
	struct TWeakObjectPtr<struct UAnimMontage> AnimMontageCurrent; // Offset: 0x04 // Size: 0x08
};

// Object Name: ScriptStruct Addons.PlayMontageAsyncloadParams
// Size: 0x38 // Inherited bytes: 0x00
struct FPlayMontageAsyncloadParams {
	// Fields
	char pad_0x0[0x38]; // Offset: 0x00 // Size: 0x38
};

// Object Name: ScriptStruct Addons.WeaponStateToAnimPair
// Size: 0x1a8 // Inherited bytes: 0x00
struct FWeaponStateToAnimPair {
	// Fields
	enum class EWeaponTypeNew WeaponTypeNew; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FSkillPoseMontageData PoseMontageData; // Offset: 0x08 // Size: 0xd0
	struct FSkillPoseMontageData FPPPoseMontageData; // Offset: 0xd8 // Size: 0xd0
};

// Object Name: ScriptStruct Addons.SAPlayMontageWeaponStateInstanceStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FSAPlayMontageWeaponStateInstanceStruct {
	// Fields
	struct TWeakObjectPtr<struct UAnimMontage> AnimMontageCurrent; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Addons.AvatarSlotAnimData
// Size: 0x40 // Inherited bytes: 0x00
struct FAvatarSlotAnimData {
	// Fields
	struct UAnimationAsset* PropAnim; // Offset: 0x00 // Size: 0x28
	float PlayRate; // Offset: 0x28 // Size: 0x04
	float StartingPosition; // Offset: 0x2c // Size: 0x04
	struct FName StartingSection; // Offset: 0x30 // Size: 0x08
	bool ShowSlotMesh; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Addons.SkillAction_SequenceCreateData
// Size: 0x68 // Inherited bytes: 0x00
struct FSkillAction_SequenceCreateData {
	// Fields
	struct FSoftClassPath SequenceActorTemplate; // Offset: 0x00 // Size: 0x18
	struct FSoftObjectPath LevelSequence; // Offset: 0x18 // Size: 0x18
	bool bUseSelfTransformOrigin; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct UUTSkillLocationPicker* LocationPicker; // Offset: 0x38 // Size: 0x08
	struct UUAESkillPicker* TargetTransformPicker; // Offset: 0x40 // Size: 0x08
	bool bSetLocationToBB; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	struct FName BBName; // Offset: 0x50 // Size: 0x08
	bool bDestroyedAtSkillEnd; // Offset: 0x58 // Size: 0x01
	bool bForceDestroyedAtSkillEnd; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x6]; // Offset: 0x5a // Size: 0x06
	struct FUAEBlackboardKeySelector CachedSpawnActorKey; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SAPlayWeaponMontageInstanceStruct
// Size: 0x18 // Inherited bytes: 0x00
struct FSAPlayWeaponMontageInstanceStruct {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Addons.SACacheSoftObjectList
// Size: 0x20 // Inherited bytes: 0x00
struct FSACacheSoftObjectList {
	// Fields
	struct TArray<struct UObject*> Objects; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Addons.RandomActionGroup
// Size: 0x10 // Inherited bytes: 0x00
struct FRandomActionGroup {
	// Fields
	struct TArray<struct UUTSkillAction*> Actions; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.RandomActionByWeightCandidate
// Size: 0x10 // Inherited bytes: 0x00
struct FRandomActionByWeightCandidate {
	// Fields
	IntProperty Weight; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UUTSkillAction* Action; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SlotMaterialParameterValue
// Size: 0x18 // Inherited bytes: 0x00
struct FSlotMaterialParameterValue {
	// Fields
	struct FName SlotParameterName; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* SlotParameterValueCurve; // Offset: 0x08 // Size: 0x08
	float SlotParameterValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.SetMeshNeedUpdateEveryFrameData
// Size: 0x02 // Inherited bytes: 0x00
struct FSetMeshNeedUpdateEveryFrameData {
	// Fields
	char pad_0x0[0x2]; // Offset: 0x00 // Size: 0x02
};

// Object Name: ScriptStruct Addons.SubAnimInstanceParam
// Size: 0x48 // Inherited bytes: 0x00
struct FSubAnimInstanceParam {
	// Fields
	struct FName PropertyName; // Offset: 0x00 // Size: 0x08
	enum class ESubAnimInsParamType Type; // Offset: 0x08 // Size: 0x01
	bool BoolValue; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	IntProperty IntValue; // Offset: 0x0c // Size: 0x04
	float FloatValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FName NameValue; // Offset: 0x18 // Size: 0x08
	struct UObject* ObjectValue; // Offset: 0x20 // Size: 0x28
};

// Object Name: ScriptStruct Addons.SkillAction_ShowMainUIData
// Size: 0x18 // Inherited bytes: 0x00
struct FSkillAction_ShowMainUIData {
	// Fields
	StrProperty RegistUIName; // Offset: 0x00 // Size: 0x10
	bool AutoHideOnPhaseEnd; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Addons.SkillAction_SpawnActorCreateData
// Size: 0xe8 // Inherited bytes: 0x00
struct FSkillAction_SpawnActorCreateData {
	// Fields
	struct AActor* ActorTemplate; // Offset: 0x00 // Size: 0x08
	struct UClass* SoftActorTemplate; // Offset: 0x08 // Size: 0x28
	struct FVector DefaultLocationOffset; // Offset: 0x30 // Size: 0x0c
	bool bPickFromTarget; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct UUAESkillPicker* DamagePicker; // Offset: 0x40 // Size: 0x08
	bool bSetLocationToBB; // Offset: 0x48 // Size: 0x01
	bool bSetLocationToSkillBB; // Offset: 0x49 // Size: 0x01
	char pad_0x4A[0x6]; // Offset: 0x4a // Size: 0x06
	struct FName BBName; // Offset: 0x50 // Size: 0x08
	bool bTraceGround; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	struct FVector TraceGroundOffset; // Offset: 0x5c // Size: 0x0c
	struct UUTSkillLocationPicker* LocationPicker; // Offset: 0x68 // Size: 0x08
	bool bTriggerPickFailedEvent; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	StrProperty TriggerPickFailedEventName; // Offset: 0x78 // Size: 0x10
	bool bLocalSpawn; // Offset: 0x88 // Size: 0x01
	bool bClientSpawn; // Offset: 0x89 // Size: 0x01
	bool bDestroyedAtSkillEnd; // Offset: 0x8a // Size: 0x01
	bool bForceDestroyedAtSkillEnd; // Offset: 0x8b // Size: 0x01
	float DelayDestroyedAtSkillEnd; // Offset: 0x8c // Size: 0x04
	bool bUseOffsetWithOutLocationPicker; // Offset: 0x90 // Size: 0x01
	bool bUseOffsetWithDamagePicker; // Offset: 0x91 // Size: 0x01
	bool bEnableAttach; // Offset: 0x92 // Size: 0x01
	char pad_0x93[0x5]; // Offset: 0x93 // Size: 0x05
	struct FName AttachSocket; // Offset: 0x98 // Size: 0x08
	bool bAlignMainMesh; // Offset: 0xa0 // Size: 0x01
	bool bAlignRotation; // Offset: 0xa1 // Size: 0x01
	bool bAlignScale3D; // Offset: 0xa2 // Size: 0x01
	char pad_0xA3[0x1]; // Offset: 0xa3 // Size: 0x01
	struct FVector OffsetLocationStand; // Offset: 0xa4 // Size: 0x0c
	struct FVector OffsetLocationCrouch; // Offset: 0xb0 // Size: 0x0c
	struct FVector OffsetLocationProne; // Offset: 0xbc // Size: 0x0c
	struct FRotator OffsetRotation; // Offset: 0xc8 // Size: 0x0c
	bool bAllowChangePoseWillUpdating; // Offset: 0xd4 // Size: 0x01
	bool bEnableRelativeTransform; // Offset: 0xd5 // Size: 0x01
	char pad_0xD6[0x2]; // Offset: 0xd6 // Size: 0x02
	struct FUAEBlackboardKeySelector CachedSpawnActorKey; // Offset: 0xd8 // Size: 0x08
	float DelaySecondsDestroy; // Offset: 0xe0 // Size: 0x04
	enum class ESpawnActorCollisionHandlingMethod SpawnMethod; // Offset: 0xe4 // Size: 0x01
	char pad_0xE5[0x3]; // Offset: 0xe5 // Size: 0x03
};

// Object Name: ScriptStruct Addons.BeamEffectData
// Size: 0x30 // Inherited bytes: 0x00
struct FBeamEffectData {
	// Fields
	enum class EBeamEffectDataFromType DataFromType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FVector LocationOffset; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FName BlackBoardParam; // Offset: 0x20 // Size: 0x08
	struct FName AttachPointName; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Addons.SpawnMonsterConfig
// Size: 0x90 // Inherited bytes: 0x00
struct FSpawnMonsterConfig {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	struct FVector pos; // Offset: 0x04 // Size: 0x0c
	bool bIsRelativePos; // Offset: 0x10 // Size: 0x01
	bool bNeedOverlapCheck; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
	float LineTraceHeight; // Offset: 0x14 // Size: 0x04
	float CapsuleCheckRadius; // Offset: 0x18 // Size: 0x04
	float CapsuleCheckHalfHeight; // Offset: 0x1c // Size: 0x04
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // Offset: 0x20 // Size: 0x10
	float NineGridSearchRadius; // Offset: 0x30 // Size: 0x04
	IntProperty NineGridSearchFloor; // Offset: 0x34 // Size: 0x04
	bool bSearchRandom; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x57]; // Offset: 0x39 // Size: 0x57
};

// Object Name: ScriptStruct Addons.SkillAction_SpawnProjectileCreateData
// Size: 0x20 // Inherited bytes: 0x00
struct FSkillAction_SpawnProjectileCreateData {
	// Fields
	struct AActor* ProjectileTemplate; // Offset: 0x00 // Size: 0x08
	struct FVector OffsetLocation; // Offset: 0x08 // Size: 0x0c
	struct FRotator OffsetRotation; // Offset: 0x14 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.UAESkillCheckItemInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FUAESkillCheckItemInfo {
	// Fields
	enum class EOperatorType OperatorType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty NeedItemNum; // Offset: 0x04 // Size: 0x04
	IntProperty ItemId; // Offset: 0x08 // Size: 0x04
	IntProperty Type; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.CharPoseSwitch
// Size: 0x02 // Inherited bytes: 0x00
struct FCharPoseSwitch {
	// Fields
	enum class ECharacterPoseType From; // Offset: 0x00 // Size: 0x01
	enum class ECharacterPoseType To; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct Addons.UTSkillAppearance_ParticleSystem_Item
// Size: 0x108 // Inherited bytes: 0x00
struct FUTSkillAppearance_ParticleSystem_Item {
	// Fields
	struct UUTSkillPicker* TargetPicker; // Offset: 0x00 // Size: 0x08
	struct UParticleSystem* TemplateSelfTeam_Effect; // Offset: 0x08 // Size: 0x08
	struct UParticleSystem* TemplateEnermyTeam_Effect; // Offset: 0x10 // Size: 0x08
	struct UParticleSystem* TemplateSelfTeamFPP_Effect; // Offset: 0x18 // Size: 0x08
	struct UParticleSystem* TemplateSelfTeam_Effect_Soft; // Offset: 0x20 // Size: 0x28
	struct UParticleSystem* TemplateEnermyTeam_Effect_Soft; // Offset: 0x48 // Size: 0x28
	struct UParticleSystem* TemplateSelfTeamFPP_Effect_Soft; // Offset: 0x70 // Size: 0x28
	bool bLoop; // Offset: 0x98 // Size: 0x01
	bool StopAfterPhase; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x2]; // Offset: 0x9a // Size: 0x02
	float Scale; // Offset: 0x9c // Size: 0x04
	struct FName SocketName; // Offset: 0xa0 // Size: 0x08
	struct FName RefSocketName; // Offset: 0xa8 // Size: 0x08
	struct FVector LocationOffset; // Offset: 0xb0 // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0xbc // Size: 0x0c
	struct FVector LocationOffsetTPP; // Offset: 0xc8 // Size: 0x0c
	struct FRotator RotationOffsetTPP; // Offset: 0xd4 // Size: 0x0c
	float ScaleTPP; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
	struct FName HurtRotationSocketName; // Offset: 0xe8 // Size: 0x08
	float AutoDispearTime; // Offset: 0xf0 // Size: 0x04
	bool bAttachToPawn; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	float DetachOnDelayTime; // Offset: 0xf8 // Size: 0x04
	bool bNeedEmitter; // Offset: 0xfc // Size: 0x01
	bool DisableOnLowCPU; // Offset: 0xfd // Size: 0x01
	char pad_0xFE[0x2]; // Offset: 0xfe // Size: 0x02
	struct FName DamageableInterfaceTag; // Offset: 0x100 // Size: 0x08
};

// Object Name: ScriptStruct Addons.CurPlayingAKEvent
// Size: 0x04 // Inherited bytes: 0x00
struct FCurPlayingAKEvent {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Addons.UTSkillAppearance_SoundCue_Item
// Size: 0x68 // Inherited bytes: 0x00
struct FUTSkillAppearance_SoundCue_Item {
	// Fields
	enum class UTSkill_SoundCue_ListenType ListenType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAkAudioEvent* AkEvent; // Offset: 0x08 // Size: 0x08
	struct UAkAudioEvent* AkEvent_SoftPtr; // Offset: 0x10 // Size: 0x28
	struct UAkAudioEvent* StopAkEvent_SoftPtr; // Offset: 0x38 // Size: 0x28
	bool bLoop; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
};

// Object Name: ScriptStruct Addons.BioHitData
// Size: 0x28 // Inherited bytes: 0x00
struct FBioHitData {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	IntProperty Frame; // Offset: 0x04 // Size: 0x04
	float Damage; // Offset: 0x08 // Size: 0x04
	struct FVector LaunchVelocity; // Offset: 0x0c // Size: 0x0c
	struct AActor* HitActor; // Offset: 0x18 // Size: 0x08
	struct UPrimitiveComponent* HitComponent; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Addons.DynamicTriggerShape
// Size: 0x0c // Inherited bytes: 0x00
struct FDynamicTriggerShape {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float HalfHeight; // Offset: 0x04 // Size: 0x04
	float LastUpdateSpeed; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Addons.VehicleHitBioVHTriggerSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleHitBioVHTriggerSetup {
	// Fields
	struct FName CollisionProfileName; // Offset: 0x00 // Size: 0x08
	struct FName Tag; // Offset: 0x08 // Size: 0x08
	float Radius; // Offset: 0x10 // Size: 0x04
	float HalfHeight; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Addons.VehicleLODLimit
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleLODLimit {
	// Fields
	struct FLODLimitNum HighDevice; // Offset: 0x00 // Size: 0x10
	struct FLODLimitNum MediumDevice; // Offset: 0x10 // Size: 0x10
	struct FLODLimitNum LowDevice; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Addons.LODLimitNum
// Size: 0x10 // Inherited bytes: 0x00
struct FLODLimitNum {
	// Fields
	IntProperty AutonomousMinLOD; // Offset: 0x00 // Size: 0x04
	IntProperty SimulatedMinLOD; // Offset: 0x04 // Size: 0x04
	IntProperty AutonomousMinURO; // Offset: 0x08 // Size: 0x04
	IntProperty SimulatedMinURO; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Addons.ForceLODInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FForceLODInfo {
	// Fields
	IntProperty InitForceLOD; // Offset: 0x00 // Size: 0x04
	IntProperty EnterForceLOD; // Offset: 0x04 // Size: 0x04
	IntProperty LeaveForceLOD; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Addons.SeatMountMontageSetting
// Size: 0xa0 // Inherited bytes: 0x00
struct FSeatMountMontageSetting {
	// Fields
	MapProperty MountMontageParis; // Offset: 0x00 // Size: 0x50
	MapProperty DisMountMontageParis; // Offset: 0x50 // Size: 0x50
};

// Object Name: ScriptStruct Addons.NitroBoostState
// Size: 0x0c // Inherited bytes: 0x00
struct FNitroBoostState {
	// Fields
	bool bIsNitroBoosting; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float StartTimestamp; // Offset: 0x04 // Size: 0x04
	IntProperty BoostCount; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Addons.NitroVisualConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FNitroVisualConfig {
	// Fields
	struct TArray<struct FAttachedMeshConfig> MeshTransforms; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.AttachedMeshConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FAttachedMeshConfig {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName SocketName; // Offset: 0x08 // Size: 0x08
	struct FVector RelativeLoc; // Offset: 0x10 // Size: 0x0c
	struct FRotator RelativeRot; // Offset: 0x1c // Size: 0x0c
	struct FVector RelativeScale; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Addons.NitroBioConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FNitroBioConfig {
	// Fields
	float NitroMaxWalkSpeed; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UCurveFloat* NitroAccelCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.NitroPowerConfig
// Size: 0x40 // Inherited bytes: 0x00
struct FNitroPowerConfig {
	// Fields
	struct UCurveFloat* NitroForceCurve; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* NitroForceSpeedRatio; // Offset: 0x08 // Size: 0x08
	struct UCurveVector* DriftOmegaAccelCurve; // Offset: 0x10 // Size: 0x08
	struct UCurveVector* DriftRecoveryCurve; // Offset: 0x18 // Size: 0x08
	struct UCurveVector* DriftSpeedCurve; // Offset: 0x20 // Size: 0x08
	struct UCurveFloat* DriftAccelCurve; // Offset: 0x28 // Size: 0x08
	struct UCurveFloat* DriftAccelScaleCurve; // Offset: 0x30 // Size: 0x08
	struct UCurveFloat* DriftDecelCurve; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Addons.CustomVehicleTypeSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FCustomVehicleTypeSetup {
	// Fields
	enum class ESTExtraVehicleType VehicleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName DisplayName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.CustomVehicleShapeTypeSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FCustomVehicleShapeTypeSetup {
	// Fields
	enum class ESTExtraVehicleShapeType ShapeType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName DisplayName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Addons.VDDebugFlag
// Size: 0x07 // Inherited bytes: 0x00
struct FVDDebugFlag {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	uint8_t bDebugBasic; // Offset: 0x01 // Size: 0x01
	uint8_t bDebugBT; // Offset: 0x02 // Size: 0x01
	uint8_t bDebugMove; // Offset: 0x03 // Size: 0x01
	uint8_t bDebugEnemy; // Offset: 0x04 // Size: 0x01
	uint8_t bDebugLOD; // Offset: 0x05 // Size: 0x01
	uint8_t bDebugOutline; // Offset: 0x06 // Size: 0x01
};

// Object Name: ScriptStruct Addons.BTDebugSnapshot
// Size: 0xd8 // Inherited bytes: 0xb0
struct FBTDebugSnapshot : FFastArraySerializer {
	// Fields
	struct FVector AnchorOffset; // Offset: 0xb0 // Size: 0x0c
	struct FColor Color; // Offset: 0xbc // Size: 0x04
	float TextScale; // Offset: 0xc0 // Size: 0x04
	uint32_t FrameSerial; // Offset: 0xc4 // Size: 0x04
	struct TArray<struct FBTDebugNodeItem> Items; // Offset: 0xc8 // Size: 0x10
};

// Object Name: ScriptStruct Addons.BTDebugNodeItem
// Size: 0x48 // Inherited bytes: 0x0c
struct FBTDebugNodeItem : FFastArraySerializerItem {
	// Fields
	IntProperty ExecutionIndex; // Offset: 0x0c // Size: 0x04
	char TreeDepth; // Offset: 0x10 // Size: 0x01
	char Flags; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	StrProperty NodeName; // Offset: 0x18 // Size: 0x10
	StrProperty TypeShort; // Offset: 0x28 // Size: 0x10
	StrProperty Runtime; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Addons.VisualDraw
// Size: 0x2c // Inherited bytes: 0x00
struct FVisualDraw {
	// Fields
	struct FVector BasePosition; // Offset: 0x00 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> AttachedActor; // Offset: 0x0c // Size: 0x08
	struct FColor BaseColor; // Offset: 0x14 // Size: 0x04
	float Duration; // Offset: 0x18 // Size: 0x04
	float Thickness; // Offset: 0x1c // Size: 0x04
	IntProperty TaskID; // Offset: 0x20 // Size: 0x04
	bool bContinuous; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x7]; // Offset: 0x25 // Size: 0x07
};

// Object Name: ScriptStruct Addons.DrawShape_Text
// Size: 0x40 // Inherited bytes: 0x2c
struct FDrawShape_Text : FVisualDraw {
	// Fields
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty TextString; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Addons.DrawShape_Cylinder
// Size: 0x3c // Inherited bytes: 0x2c
struct FDrawShape_Cylinder : FVisualDraw {
	// Fields
	struct FVector End; // Offset: 0x2c // Size: 0x0c
	float Radius; // Offset: 0x38 // Size: 0x04
};

// Object Name: ScriptStruct Addons.DrawShape_Box
// Size: 0x44 // Inherited bytes: 0x2c
struct FDrawShape_Box : FVisualDraw {
	// Fields
	struct FVector BoxExtent; // Offset: 0x2c // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x38 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.DrawShape_Line
// Size: 0x38 // Inherited bytes: 0x2c
struct FDrawShape_Line : FVisualDraw {
	// Fields
	struct FVector LineEnd; // Offset: 0x2c // Size: 0x0c
};

// Object Name: ScriptStruct Addons.DrawShape_Capsule
// Size: 0x40 // Inherited bytes: 0x2c
struct FDrawShape_Capsule : FVisualDraw {
	// Fields
	float Radius; // Offset: 0x2c // Size: 0x04
	float HalfHeight; // Offset: 0x30 // Size: 0x04
	struct FRotator Rotation; // Offset: 0x34 // Size: 0x0c
};

// Object Name: ScriptStruct Addons.DrawShape_Sphere
// Size: 0x30 // Inherited bytes: 0x2c
struct FDrawShape_Sphere : FVisualDraw {
	// Fields
	float Radius; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Addons.WindowBarrierDataList
// Size: 0x10 // Inherited bytes: 0x00
struct FWindowBarrierDataList {
	// Fields
	struct TArray<struct FWindowBarrierData> Datas; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Addons.WindowBarrierData
// Size: 0x40 // Inherited bytes: 0x00
struct FWindowBarrierData {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct TArray<IntProperty> BreakWindowIds; // Offset: 0x30 // Size: 0x10
};

