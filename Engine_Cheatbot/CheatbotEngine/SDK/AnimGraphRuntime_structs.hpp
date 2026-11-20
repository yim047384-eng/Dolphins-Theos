#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0x78 // Inherited bytes: 0x38
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	// Fields
	struct FComponentSpacePoseLink ComponentPose; // Offset: 0x38 // Size: 0x18
	float Alpha; // Offset: 0x50 // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x54 // Size: 0x08
	IntProperty LODThreshold; // Offset: 0x5c // Size: 0x04
	float ActualAlpha; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x14]; // Offset: 0x64 // Size: 0x14
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimPhysSphericalLimit {
	// Fields
	struct FBoneReference DrivingBone; // Offset: 0x00 // Size: 0x18
	struct FVector SphereLocalOffset; // Offset: 0x18 // Size: 0x0c
	float LimitRadius; // Offset: 0x24 // Size: 0x04
	enum class ESphericalLimitType LimitType; // Offset: 0x28 // Size: 0x01
	bool IsEnabled; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x60 // Inherited bytes: 0x00
struct FAnimPhysPlanarLimit {
	// Fields
	struct FBoneReference DrivingBone; // Offset: 0x00 // Size: 0x18
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
	struct FTransform PlaneTransform; // Offset: 0x20 // Size: 0x30
	bool IsEnabled; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0xf]; // Offset: 0x51 // Size: 0x0f
};

// Object Name: ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 // Inherited bytes: 0x00
struct FBoneSocketTarget {
	// Fields
	bool bUseSocket; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FBoneReference BoneReference; // Offset: 0x08 // Size: 0x18
	struct FSocketReference SocketReference; // Offset: 0x20 // Size: 0x40
};

// Object Name: ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 // Inherited bytes: 0x00
struct FSocketReference {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x38]; // Offset: 0x08 // Size: 0x38
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1c0 // Inherited bytes: 0x78
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference IKBone; // Offset: 0x78 // Size: 0x18
	char bAllowStretching : 1; // Offset: 0x90 // Size: 0x01
	char pad_0x90_1 : 7; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float StartStretchRatio; // Offset: 0x94 // Size: 0x04
	float MaxStretchScale; // Offset: 0x98 // Size: 0x04
	struct FVector2D StretchLimits; // Offset: 0x9c // Size: 0x08
	char bTakeRotationFromEffectorSpace : 1; // Offset: 0xa4 // Size: 0x01
	char bMaintainEffectorRelRot : 1; // Offset: 0xa4 // Size: 0x01
	char pad_0xA4_2 : 6; // Offset: 0xa4 // Size: 0x01
	enum class EBoneControlSpace EffectorLocationSpace; // Offset: 0xa5 // Size: 0x01
	char pad_0xA6[0x2]; // Offset: 0xa6 // Size: 0x02
	struct FName EffectorSpaceBoneName; // Offset: 0xa8 // Size: 0x08
	struct FVector EffectorLocation; // Offset: 0xb0 // Size: 0x0c
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct FBoneSocketTarget EffectorTarget; // Offset: 0xc0 // Size: 0x60
	enum class EBoneControlSpace JointTargetLocationSpace; // Offset: 0x120 // Size: 0x01
	char pad_0x121[0x3]; // Offset: 0x121 // Size: 0x03
	struct FVector JointTargetLocation; // Offset: 0x124 // Size: 0x0c
	struct FName JointTargetSpaceBoneName; // Offset: 0x130 // Size: 0x08
	char pad_0x138[0x8]; // Offset: 0x138 // Size: 0x08
	struct FBoneSocketTarget JointTarget; // Offset: 0x140 // Size: 0x60
	bool bAllowTwist; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A1[0x3]; // Offset: 0x1a1 // Size: 0x03
	struct FAxis TwistAxis; // Offset: 0x1a4 // Size: 0x10
	bool bNoTwist; // Offset: 0x1b4 // Size: 0x01
	char pad_0x1B5[0xb]; // Offset: 0x1b5 // Size: 0x0b
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0xd0 // Inherited bytes: 0x38
struct FAnimNode_BlendListBase : FAnimNode_Base {
	// Fields
	struct TArray<struct FPoseLink> BlendPose; // Offset: 0x38 // Size: 0x10
	struct TArray<float> BlendTime; // Offset: 0x48 // Size: 0x10
	enum class EAlphaBlendOption BlendType; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
	struct UCurveFloat* CustomBlendCurve; // Offset: 0x60 // Size: 0x08
	struct UBlendProfile* BlendProfile; // Offset: 0x68 // Size: 0x08
	struct TArray<struct FAlphaBlend> Blends; // Offset: 0x70 // Size: 0x10
	struct TArray<float> BlendWeights; // Offset: 0x80 // Size: 0x10
	struct TArray<float> RemainingBlendTimes; // Offset: 0x90 // Size: 0x10
	IntProperty LastActiveChildIndex; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<struct FBlendSampleData> PerBoneSampleData; // Offset: 0xa8 // Size: 0x10
	char pad_0xB8[0x10]; // Offset: 0xb8 // Size: 0x10
	bool bResetChildOnActivation; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x1b0 // Inherited bytes: 0x78
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	// Fields
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08
	struct FTransform EffectorTransform; // Offset: 0x80 // Size: 0x30
	enum class EBoneControlSpace EffectorTransformSpace; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
	struct FBoneReference EffectorTransformBone; // Offset: 0xb8 // Size: 0x18
	bool bUseIKFreeze; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	struct FVector PositionFreeze; // Offset: 0xd4 // Size: 0x0c
	struct FVector RotationFreeze; // Offset: 0xe0 // Size: 0x0c
	struct FVector ScaleFeeze; // Offset: 0xec // Size: 0x0c
	char pad_0xF8[0x8]; // Offset: 0xf8 // Size: 0x08
	struct FBoneSocketTarget EffectorTarget; // Offset: 0x100 // Size: 0x60
	enum class EBoneRotationSource EffectorRotationSource; // Offset: 0x160 // Size: 0x01
	char pad_0x161[0x7]; // Offset: 0x161 // Size: 0x07
	struct FBoneReference TipBone; // Offset: 0x168 // Size: 0x18
	struct FBoneReference RootBone; // Offset: 0x180 // Size: 0x18
	float Precision; // Offset: 0x198 // Size: 0x04
	IntProperty MaxIterations; // Offset: 0x19c // Size: 0x04
	bool bEnableDebugDraw; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A1[0xf]; // Offset: 0x1a1 // Size: 0x0f
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x128 // Inherited bytes: 0x58
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	// Fields
	float X; // Offset: 0x58 // Size: 0x04
	float Y; // Offset: 0x5c // Size: 0x04
	float Z; // Offset: 0x60 // Size: 0x04
	float PlayRate; // Offset: 0x64 // Size: 0x04
	bool bLoop; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x3]; // Offset: 0x69 // Size: 0x03
	float StartPosition; // Offset: 0x6c // Size: 0x04
	struct UBlendSpaceBase* BlendSpace; // Offset: 0x70 // Size: 0x08
	bool bResetPlayTimeWhenBlendSpaceChanges; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	struct FBlendFilter BlendFilter; // Offset: 0x80 // Size: 0x90
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // Offset: 0x110 // Size: 0x10
	struct UBlendSpaceBase* PreviousBlendSpace; // Offset: 0x120 // Size: 0x08
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x210 // Inherited bytes: 0x128
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	// Fields
	struct FPoseLink BasePose; // Offset: 0x128 // Size: 0x18
	IntProperty LODThreshold; // Offset: 0x140 // Size: 0x04
	bool bIsLODEnabled; // Offset: 0x144 // Size: 0x01
	char pad_0x145[0x3]; // Offset: 0x145 // Size: 0x03
	struct FVector LookAtLocation; // Offset: 0x148 // Size: 0x0c
	char pad_0x154[0x4]; // Offset: 0x154 // Size: 0x04
	struct FName SourceSocketName; // Offset: 0x158 // Size: 0x08
	struct FName PivotSocketName; // Offset: 0x160 // Size: 0x08
	struct FVector SocketAxis; // Offset: 0x168 // Size: 0x0c
	float Alpha; // Offset: 0x174 // Size: 0x04
	struct FBoneReference SocketBoneReference; // Offset: 0x178 // Size: 0x18
	struct FTransform SocketLocalTransform; // Offset: 0x190 // Size: 0x30
	struct FBoneReference PivotSocketBoneReference; // Offset: 0x1c0 // Size: 0x18
	char pad_0x1D8[0x8]; // Offset: 0x1d8 // Size: 0x08
	struct FTransform PivotSocketLocalTransform; // Offset: 0x1e0 // Size: 0x30
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x2c0 // Inherited bytes: 0x78
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	// Fields
	enum class AnimPhysSimSpaceType SimulationSpace; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	struct FBoneReference RelativeSpaceBone; // Offset: 0x80 // Size: 0x18
	bool bChain; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
	struct FBoneReference BoundBone; // Offset: 0xa0 // Size: 0x18
	struct FBoneReference ChainEnd; // Offset: 0xb8 // Size: 0x18
	struct FVector BoxExtents; // Offset: 0xd0 // Size: 0x0c
	struct FVector LocalJointOffset; // Offset: 0xdc // Size: 0x0c
	struct FVector OldLocalJointOffset; // Offset: 0xe8 // Size: 0x0c
	float GravityScale; // Offset: 0xf4 // Size: 0x04
	bool bLinearSpring; // Offset: 0xf8 // Size: 0x01
	bool bAngularSpring; // Offset: 0xf9 // Size: 0x01
	char pad_0xFA[0x2]; // Offset: 0xfa // Size: 0x02
	float LinearSpringConstant; // Offset: 0xfc // Size: 0x04
	float AngularSpringConstant; // Offset: 0x100 // Size: 0x04
	bool bEnableWind; // Offset: 0x104 // Size: 0x01
	bool bWindWasEnabled; // Offset: 0x105 // Size: 0x01
	char pad_0x106[0x2]; // Offset: 0x106 // Size: 0x02
	float WindScale; // Offset: 0x108 // Size: 0x04
	bool bOverrideLinearDamping; // Offset: 0x10c // Size: 0x01
	char pad_0x10D[0x3]; // Offset: 0x10d // Size: 0x03
	float LinearDampingOverride; // Offset: 0x110 // Size: 0x04
	bool bOverrideAngularDamping; // Offset: 0x114 // Size: 0x01
	char pad_0x115[0x3]; // Offset: 0x115 // Size: 0x03
	float AngularDampingOverride; // Offset: 0x118 // Size: 0x04
	bool bOverrideAngularBias; // Offset: 0x11c // Size: 0x01
	char pad_0x11D[0x3]; // Offset: 0x11d // Size: 0x03
	float AngularBiasOverride; // Offset: 0x120 // Size: 0x04
	bool bDoUpdate; // Offset: 0x124 // Size: 0x01
	bool bDoEval; // Offset: 0x125 // Size: 0x01
	char pad_0x126[0x2]; // Offset: 0x126 // Size: 0x02
	IntProperty NumSolverIterationsPreUpdate; // Offset: 0x128 // Size: 0x04
	IntProperty NumSolverIterationsPostUpdate; // Offset: 0x12c // Size: 0x04
	struct FAnimPhysConstraintSetup ConstraintSetup; // Offset: 0x130 // Size: 0x5c
	bool bUseDynamicAngularLimits; // Offset: 0x18c // Size: 0x01
	char pad_0x18D[0x3]; // Offset: 0x18d // Size: 0x03
	struct FVector Dynamic_AngularLimitsMin; // Offset: 0x190 // Size: 0x0c
	struct FVector Dynamic_AngularLimitsMax; // Offset: 0x19c // Size: 0x0c
	bool bUsePlanarLimit; // Offset: 0x1a8 // Size: 0x01
	char pad_0x1A9[0x7]; // Offset: 0x1a9 // Size: 0x07
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // Offset: 0x1b0 // Size: 0x10
	bool bUseSphericalLimits; // Offset: 0x1c0 // Size: 0x01
	char pad_0x1C1[0x7]; // Offset: 0x1c1 // Size: 0x07
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // Offset: 0x1c8 // Size: 0x10
	enum class AnimPhysCollisionType CollisionType; // Offset: 0x1d8 // Size: 0x01
	char pad_0x1D9[0x3]; // Offset: 0x1d9 // Size: 0x03
	float SphereCollisionRadius; // Offset: 0x1dc // Size: 0x04
	IntProperty NonEvaluateFrameNum; // Offset: 0x1e0 // Size: 0x04
	char pad_0x1E4[0x4]; // Offset: 0x1e4 // Size: 0x04
	struct FVector ExternalForce; // Offset: 0x1e8 // Size: 0x0c
	char pad_0x1F4[0xcc]; // Offset: 0x1f4 // Size: 0xcc
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x5c // Inherited bytes: 0x00
struct FAnimPhysConstraintSetup {
	// Fields
	enum class AnimPhysLinearConstraintType LinearXLimitType; // Offset: 0x00 // Size: 0x01
	enum class AnimPhysLinearConstraintType LinearYLimitType; // Offset: 0x01 // Size: 0x01
	enum class AnimPhysLinearConstraintType LinearZLimitType; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	struct FVector LinearAxesMin; // Offset: 0x04 // Size: 0x0c
	struct FVector LinearAxesMax; // Offset: 0x10 // Size: 0x0c
	enum class AnimPhysAngularConstraintType AngularConstraintType; // Offset: 0x1c // Size: 0x01
	enum class AnimPhysTwistAxis TwistAxis; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	float ConeAngle; // Offset: 0x20 // Size: 0x04
	float AngularXAngle; // Offset: 0x24 // Size: 0x04
	float AngularYAngle; // Offset: 0x28 // Size: 0x04
	float AngularZAngle; // Offset: 0x2c // Size: 0x04
	struct FVector AngularLimitsMin; // Offset: 0x30 // Size: 0x0c
	struct FVector AngularLimitsMax; // Offset: 0x3c // Size: 0x0c
	enum class AnimPhysTwistAxis AngularTargetAxis; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
	struct FVector AngularTarget; // Offset: 0x4c // Size: 0x0c
	bool bLinearFullyLocked; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0x80 // Inherited bytes: 0x38
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	// Fields
	struct FPoseLink Base; // Offset: 0x38 // Size: 0x18
	struct FPoseLink Additive; // Offset: 0x50 // Size: 0x18
	float Alpha; // Offset: 0x68 // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x6c // Size: 0x08
	IntProperty LODThreshold; // Offset: 0x74 // Size: 0x04
	float ActualAlpha; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0xa8 // Inherited bytes: 0x38
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	// Fields
	struct FPoseLink A; // Offset: 0x38 // Size: 0x18
	struct FPoseLink B; // Offset: 0x50 // Size: 0x18
	float Alpha; // Offset: 0x68 // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x6c // Size: 0x08
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // Offset: 0x78 // Size: 0x10
	enum class EBoneControlSpace TransformsSpace; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float InternalBlendAlpha; // Offset: 0x8c // Size: 0x04
	bool bBIsRelevant; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	struct TArray<struct FBlendBoneByChannelEntry> ValidBoneEntries; // Offset: 0x98 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x38 // Inherited bytes: 0x00
struct FBlendBoneByChannelEntry {
	// Fields
	struct FBoneReference SourceBone; // Offset: 0x00 // Size: 0x18
	struct FBoneReference TargetBone; // Offset: 0x18 // Size: 0x18
	bool bBlendTranslation; // Offset: 0x30 // Size: 0x01
	bool bBlendRotation; // Offset: 0x31 // Size: 0x01
	bool bBlendScale; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x5]; // Offset: 0x33 // Size: 0x05
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xd0 // Inherited bytes: 0xd0
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	// Fields
	bool bActiveValue; // Offset: 0xc9 // Size: 0x01
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xe8 // Inherited bytes: 0xd0
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	// Fields
	struct TArray<IntProperty> EnumToPoseIndex; // Offset: 0xd0 // Size: 0x10
	char ActiveEnumValue; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnumAdvance
// Size: 0xf8 // Inherited bytes: 0xd0
struct FAnimNode_BlendListByEnumAdvance : FAnimNode_BlendListBase {
	// Fields
	struct TArray<IntProperty> EnumToPoseIndex; // Offset: 0xd0 // Size: 0x10
	char ActiveEnumValue; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
	struct TArray<struct FPoseBlendEnumData> PosesBlendTimeSetup; // Offset: 0xe8 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.PoseBlendEnumData
// Size: 0x20 // Inherited bytes: 0x00
struct FPoseBlendEnumData {
	// Fields
	bool bUseOptionBlendTime; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName BlendPoseName; // Offset: 0x08 // Size: 0x08
	struct TArray<float> OtherPosesBlendTime; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xd0 // Inherited bytes: 0xd0
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	// Fields
	IntProperty ActiveChildIndex; // Offset: 0xcc // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x130 // Inherited bytes: 0x128
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	// Fields
	float NormalizedTime; // Offset: 0x128 // Size: 0x04
	char pad_0x12C[0x4]; // Offset: 0x12c // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0xe8 // Inherited bytes: 0x78
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference SourceBone; // Offset: 0x78 // Size: 0x18
	enum class EComponentType SourceComponent; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	struct UCurveFloat* DrivingCurve; // Offset: 0x98 // Size: 0x08
	float Multiplier; // Offset: 0xa0 // Size: 0x04
	bool bUseRange; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	float RangeMin; // Offset: 0xa8 // Size: 0x04
	float RangeMax; // Offset: 0xac // Size: 0x04
	float RemappedMin; // Offset: 0xb0 // Size: 0x04
	float RemappedMax; // Offset: 0xb4 // Size: 0x04
	enum class EDrivenDestinationMode DestinationMode; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x7]; // Offset: 0xb9 // Size: 0x07
	struct FName ParameterName; // Offset: 0xc0 // Size: 0x08
	struct FBoneReference TargetBone; // Offset: 0xc8 // Size: 0x18
	enum class EComponentType TargetComponent; // Offset: 0xe0 // Size: 0x01
	char bAffectTargetTranslationX : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetTranslationY : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetTranslationZ : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetRotationX : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetRotationY : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetRotationZ : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetScaleX : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetScaleY : 1; // Offset: 0xe1 // Size: 0x01
	char bAffectTargetScaleZ : 1; // Offset: 0xe2 // Size: 0x01
	char pad_0xE2_1 : 7; // Offset: 0xe2 // Size: 0x01
	enum class EDrivenBoneModificationMode ModificationMode; // Offset: 0xe3 // Size: 0x01
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_BoneRetarget
// Size: 0xa8 // Inherited bytes: 0x38
struct FAnimNode_BoneRetarget : FAnimNode_Base {
	// Fields
	struct FPoseLink BasePose; // Offset: 0x38 // Size: 0x18
	char pad_0x50[0x50]; // Offset: 0x50 // Size: 0x50
	bool bUseAsMasterNode; // Offset: 0xa0 // Size: 0x01
	bool bUseRetargetFeature; // Offset: 0xa1 // Size: 0x01
	char pad_0xA2[0x6]; // Offset: 0xa2 // Size: 0x06
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0xc0 // Inherited bytes: 0x78
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference BoneToModify; // Offset: 0x78 // Size: 0x18
	struct TArray<struct FConstraint> ConstraintSetup; // Offset: 0x90 // Size: 0x10
	struct TArray<float> ConstraintWeights; // Offset: 0xa0 // Size: 0x10
	char pad_0xB0[0x10]; // Offset: 0xb0 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x20 // Inherited bytes: 0x00
struct FConstraint {
	// Fields
	struct FBoneReference TargetBone; // Offset: 0x00 // Size: 0x18
	enum class EConstraintOffsetOption OffsetOption; // Offset: 0x18 // Size: 0x01
	enum class ETransformConstraintType TransformType; // Offset: 0x19 // Size: 0x01
	struct FFilterOptionPerAxis PerAxis; // Offset: 0x1a // Size: 0x03
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xb0 // Inherited bytes: 0x78
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference SourceBone; // Offset: 0x78 // Size: 0x18
	struct FBoneReference TargetBone; // Offset: 0x90 // Size: 0x18
	bool bCopyTranslation; // Offset: 0xa8 // Size: 0x01
	bool bCopyRotation; // Offset: 0xa9 // Size: 0x01
	bool bCopyScale; // Offset: 0xaa // Size: 0x01
	enum class EBoneControlSpace ControlSpace; // Offset: 0xab // Size: 0x01
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xb8 // Inherited bytes: 0x78
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference SourceBone; // Offset: 0x78 // Size: 0x18
	struct FBoneReference TargetBone; // Offset: 0x90 // Size: 0x18
	bool bCopyTranslation; // Offset: 0xa8 // Size: 0x01
	bool bCopyRotation; // Offset: 0xa9 // Size: 0x01
	bool bCopyScale; // Offset: 0xaa // Size: 0x01
	enum class CopyBoneDeltaMode CopyMode; // Offset: 0xab // Size: 0x01
	float TranslationMultiplier; // Offset: 0xac // Size: 0x04
	float RotationMultiplier; // Offset: 0xb0 // Size: 0x04
	float ScaleMultiplier; // Offset: 0xb4 // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0xc0 // Inherited bytes: 0x38
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	// Fields
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // Offset: 0x34 // Size: 0x08
	bool bUseAttachedParent; // Offset: 0x3c // Size: 0x01
	char pad_0x41[0x7f]; // Offset: 0x41 // Size: 0x7f
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x70 // Inherited bytes: 0x38
struct FAnimNode_CurveSource : FAnimNode_Base {
	// Fields
	struct FPoseLink SourcePose; // Offset: 0x38 // Size: 0x18
	struct FName SourceBinding; // Offset: 0x50 // Size: 0x08
	float Alpha; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct TScriptInterface<Class> CurveSource; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0xf0 // Inherited bytes: 0x78
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference RightHandFK; // Offset: 0x78 // Size: 0x18
	struct FBoneReference LeftHandFK; // Offset: 0x90 // Size: 0x18
	struct FBoneReference RightHandIK; // Offset: 0xa8 // Size: 0x18
	struct FBoneReference LeftHandIK; // Offset: 0xc0 // Size: 0x18
	struct TArray<struct FBoneReference> IKBonesToMove; // Offset: 0xd8 // Size: 0x10
	float HandFKWeight; // Offset: 0xe8 // Size: 0x04
	char pad_0xEC[0x4]; // Offset: 0xec // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xe8 // Inherited bytes: 0x38
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	// Fields
	struct FPoseLink BasePose; // Offset: 0x38 // Size: 0x18
	struct TArray<struct FPoseLink> BlendPoses; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FInputBlendPose> LayerSetup; // Offset: 0x60 // Size: 0x10
	struct TArray<float> BlendWeights; // Offset: 0x70 // Size: 0x10
	bool bMeshSpaceRotationBlend; // Offset: 0x80 // Size: 0x01
	enum class ECurveBlendOption CurveBlendOption; // Offset: 0x81 // Size: 0x01
	bool bBlendRootMotionBasedOnRootBone; // Offset: 0x82 // Size: 0x01
	bool bHasRelevantPoses; // Offset: 0x83 // Size: 0x01
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // Offset: 0x88 // Size: 0x10
	struct FGuid SkeletonGuid; // Offset: 0x98 // Size: 0x10
	struct FGuid VirtualBoneGuid; // Offset: 0xa8 // Size: 0x10
	char pad_0xB8[0x30]; // Offset: 0xb8 // Size: 0x30
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0xa0 // Inherited bytes: 0x78
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	// Fields
	float ReachPrecision; // Offset: 0x78 // Size: 0x04
	IntProperty MaxIterations; // Offset: 0x7c // Size: 0x04
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FAnimLegIKData> LegsData; // Offset: 0x90 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0x70 // Inherited bytes: 0x00
struct FAnimLegIKData {
	// Fields
	char pad_0x0[0x70]; // Offset: 0x00 // Size: 0x70
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x40 // Inherited bytes: 0x00
struct FAnimLegIKDefinition {
	// Fields
	struct FBoneReference IKFootBone; // Offset: 0x00 // Size: 0x18
	struct FBoneReference FKFootBone; // Offset: 0x18 // Size: 0x18
	IntProperty NumBonesInLimb; // Offset: 0x30 // Size: 0x04
	enum class EAxis FootBoneForwardAxis; // Offset: 0x34 // Size: 0x01
	bool bEnableRotationLimit; // Offset: 0x35 // Size: 0x01
	char pad_0x36[0x2]; // Offset: 0x36 // Size: 0x02
	float MinRotationAngle; // Offset: 0x38 // Size: 0x04
	bool bEnableKneeTwistCorrection; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
};

// Object Name: ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x30 // Inherited bytes: 0x00
struct FIKChain {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x1c // Inherited bytes: 0x00
struct FIKChainLink {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1a0 // Inherited bytes: 0x78
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference BoneToModify; // Offset: 0x78 // Size: 0x18
	struct FBoneReference LookAtBone; // Offset: 0x90 // Size: 0x18
	struct FName LookAtSocket; // Offset: 0xa8 // Size: 0x08
	struct FBoneSocketTarget LookAtTarget; // Offset: 0xb0 // Size: 0x60
	struct FVector LookAtLocation; // Offset: 0x110 // Size: 0x0c
	enum class EAxisOption LookAtAxis; // Offset: 0x11c // Size: 0x01
	char pad_0x11D[0x3]; // Offset: 0x11d // Size: 0x03
	struct FVector CustomLookAtAxis; // Offset: 0x120 // Size: 0x0c
	struct FAxis LookAt_Axis; // Offset: 0x12c // Size: 0x10
	bool bUseLookUpAxis; // Offset: 0x13c // Size: 0x01
	enum class EAxisOption LookUpAxis; // Offset: 0x13d // Size: 0x01
	char pad_0x13E[0x2]; // Offset: 0x13e // Size: 0x02
	struct FVector CustomLookUpAxis; // Offset: 0x140 // Size: 0x0c
	struct FAxis LookUp_Axis; // Offset: 0x14c // Size: 0x10
	float LookAtClamp; // Offset: 0x15c // Size: 0x04
	enum class EInterpolationBlend InterpolationType; // Offset: 0x160 // Size: 0x01
	char pad_0x161[0x3]; // Offset: 0x161 // Size: 0x03
	float InterpolationTime; // Offset: 0x164 // Size: 0x04
	float InterpolationTriggerThreashold; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x34]; // Offset: 0x16c // Size: 0x34
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x70 // Inherited bytes: 0x38
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	// Fields
	struct FPoseLink Base; // Offset: 0x38 // Size: 0x18
	struct FPoseLink Additive; // Offset: 0x50 // Size: 0x18
	bool bMeshSpaceAdditive; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0xc0 // Inherited bytes: 0x78
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference BoneToModify; // Offset: 0x78 // Size: 0x18
	struct FVector Translation; // Offset: 0x90 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x9c // Size: 0x0c
	struct FVector Scale; // Offset: 0xa8 // Size: 0x0c
	enum class EBoneModificationMode TranslationMode; // Offset: 0xb4 // Size: 0x01
	enum class EBoneModificationMode RotationMode; // Offset: 0xb5 // Size: 0x01
	enum class EBoneModificationMode ScaleMode; // Offset: 0xb6 // Size: 0x01
	enum class EBoneControlSpace TranslationSpace; // Offset: 0xb7 // Size: 0x01
	enum class EBoneControlSpace RotationSpace; // Offset: 0xb8 // Size: 0x01
	enum class EBoneControlSpace ScaleSpace; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x6]; // Offset: 0xba // Size: 0x06
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_ModifyBoneTransforms
// Size: 0xa8 // Inherited bytes: 0x78
struct FAnimNode_ModifyBoneTransforms : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBonesTransfroms BoneTransforms; // Offset: 0x78 // Size: 0x20
	char pad_0x98[0x10]; // Offset: 0x98 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.BonesTransfroms
// Size: 0x20 // Inherited bytes: 0x00
struct FBonesTransfroms {
	// Fields
	struct TArray<struct FName> Names; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FTransform> Transforms; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x80 // Inherited bytes: 0x38
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	// Fields
	struct FPoseLink SourcePose; // Offset: 0x38 // Size: 0x18
	enum class EModifyCurveApplyMode ApplyMode; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct TArray<float> CurveValues; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FName> CurveNames; // Offset: 0x68 // Size: 0x10
	float Alpha; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x78 // Inherited bytes: 0x38
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	// Fields
	struct TArray<struct FPoseLink> Poses; // Offset: 0x38 // Size: 0x10
	struct TArray<float> DesiredAlphas; // Offset: 0x48 // Size: 0x10
	bool bAdditiveNode; // Offset: 0x58 // Size: 0x01
	bool bNormalizeAlpha; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x2]; // Offset: 0x5a // Size: 0x02
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x5c // Size: 0x08
	char pad_0x64[0x14]; // Offset: 0x64 // Size: 0x14
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0xb8 // Inherited bytes: 0x78
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference BoneToObserve; // Offset: 0x78 // Size: 0x18
	enum class EBoneControlSpace DisplaySpace; // Offset: 0x90 // Size: 0x01
	bool bRelativeToRefPose; // Offset: 0x91 // Size: 0x01
	char pad_0x92[0x2]; // Offset: 0x92 // Size: 0x02
	struct FVector Translation; // Offset: 0x94 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0xa0 // Size: 0x0c
	struct FVector Scale; // Offset: 0xac // Size: 0x0c
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0xa0 // Inherited bytes: 0x58
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	// Fields
	struct UPoseAsset* PoseAsset; // Offset: 0x58 // Size: 0x08
	char pad_0x60[0x40]; // Offset: 0x60 // Size: 0x40
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xc8 // Inherited bytes: 0xa0
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	// Fields
	struct FPoseLink SourcePose; // Offset: 0xa0 // Size: 0x18
	enum class EAlphaBlendOption BlendOption; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x7]; // Offset: 0xb9 // Size: 0x07
	struct UCurveFloat* CustomCurve; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0xb0 // Inherited bytes: 0xa0
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	// Fields
	struct FName PoseName; // Offset: 0xa0 // Size: 0x08
	float PoseWeight; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x178 // Inherited bytes: 0xa0
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	// Fields
	struct FPoseLink SourcePose; // Offset: 0xa0 // Size: 0x18
	struct TArray<struct FBoneReference> SourceBones; // Offset: 0xb8 // Size: 0x10
	bool bOnlyDriveSelectedBones; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
	struct TArray<struct FBoneReference> OnlyDriveBones; // Offset: 0xd0 // Size: 0x10
	struct FBoneReference EvalSpaceBone; // Offset: 0xe0 // Size: 0x18
	struct FRBFParams RBFParams; // Offset: 0xf8 // Size: 0x10
	enum class EPoseDriverSource DriveSource; // Offset: 0x108 // Size: 0x01
	enum class EPoseDriverOutput DriveOutput; // Offset: 0x109 // Size: 0x01
	char pad_0x10A[0x6]; // Offset: 0x10a // Size: 0x06
	struct TArray<struct FPoseDriverTarget> PoseTargets; // Offset: 0x110 // Size: 0x10
	struct FBoneReference SourceBone; // Offset: 0x120 // Size: 0x18
	enum class EBoneAxis TwistAxis; // Offset: 0x138 // Size: 0x01
	enum class EPoseDriverType Type; // Offset: 0x139 // Size: 0x01
	char pad_0x13A[0x2]; // Offset: 0x13a // Size: 0x02
	float RadialScaling; // Offset: 0x13c // Size: 0x04
	char pad_0x140[0x38]; // Offset: 0x140 // Size: 0x38
};

// Object Name: ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xa8 // Inherited bytes: 0x00
struct FPoseDriverTarget {
	// Fields
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // Offset: 0x00 // Size: 0x10
	struct FRotator TargetRotation; // Offset: 0x10 // Size: 0x0c
	float TargetScale; // Offset: 0x1c // Size: 0x04
	bool bApplyCustomCurve; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct FRichCurve CustomCurve; // Offset: 0x28 // Size: 0x70
	struct FName DrivenName; // Offset: 0x98 // Size: 0x08
	char pad_0xA0[0x8]; // Offset: 0xa0 // Size: 0x08
};

// Object Name: ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 // Inherited bytes: 0x00
struct FPoseDriverTransform {
	// Fields
	struct FVector TargetTranslation; // Offset: 0x00 // Size: 0x0c
	struct FRotator TargetRotation; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x10 // Inherited bytes: 0x00
struct FRBFParams {
	// Fields
	IntProperty TargetDimensions; // Offset: 0x00 // Size: 0x04
	float Radius; // Offset: 0x04 // Size: 0x04
	enum class ERBFFunctionType Function; // Offset: 0x08 // Size: 0x01
	enum class ERBFDistanceMethod DistanceMethod; // Offset: 0x09 // Size: 0x01
	enum class EBoneAxis TwistAxis; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x1]; // Offset: 0x0b // Size: 0x01
	float WeightThreshold; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0xb0 // Inherited bytes: 0x38
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	// Fields
	enum class ESnapshotSourceMode Mode; // Offset: 0x32 // Size: 0x01
	struct FName SnapshotName; // Offset: 0x38 // Size: 0x08
	struct FPoseSnapshot Snapshot; // Offset: 0x40 // Size: 0x38
	char pad_0x79[0x37]; // Offset: 0x79 // Size: 0x37
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_QuadrupedTerrainAdapting
// Size: 0xba0 // Inherited bytes: 0x78
struct FAnimNode_QuadrupedTerrainAdapting : FAnimNode_SkeletalControlBase {
	// Fields
	bool bEnable; // Offset: 0x78 // Size: 0x01
	bool bDrawDebug; // Offset: 0x79 // Size: 0x01
	char pad_0x7A[0x2]; // Offset: 0x7a // Size: 0x02
	float RayTrace_SphereRadius; // Offset: 0x7c // Size: 0x04
	struct FBoneSocketTarget RayTrace_LHandBottom; // Offset: 0x80 // Size: 0x60
	struct FBoneSocketTarget RayTrace_RHandBottom; // Offset: 0xe0 // Size: 0x60
	struct FBoneSocketTarget RayTrace_LFootBottom; // Offset: 0x140 // Size: 0x60
	struct FBoneSocketTarget RayTrace_RFootBottom; // Offset: 0x1a0 // Size: 0x60
	bool bEnableSlopeAdapting; // Offset: 0x200 // Size: 0x01
	bool bEnableLionDanceSlopeAdapting; // Offset: 0x201 // Size: 0x01
	char pad_0x202[0x6]; // Offset: 0x202 // Size: 0x06
	struct FBoneReference SlopeAdapting_Pelvis; // Offset: 0x208 // Size: 0x18
	struct FBoneReference SlopeAdapting_Pelvis1; // Offset: 0x220 // Size: 0x18
	struct FBoneReference SlopeAdapting_Pelvis2; // Offset: 0x238 // Size: 0x18
	struct FBoneReference SlopeAdapting_LClavicle; // Offset: 0x250 // Size: 0x18
	struct FBoneReference SlopeAdapting_RClavicle; // Offset: 0x268 // Size: 0x18
	struct FBoneReference SlopeAdapting_LThigh; // Offset: 0x280 // Size: 0x18
	struct FBoneReference SlopeAdapting_RThigh; // Offset: 0x298 // Size: 0x18
	struct FBoneReference SlopeAdapting_Root; // Offset: 0x2b0 // Size: 0x18
	float SlopeAdapting_PelvisLimitHeight; // Offset: 0x2c8 // Size: 0x04
	float SlopeAdapting_LimitSlopeAngle; // Offset: 0x2cc // Size: 0x04
	float SlopeAdapting_PositionLerpSpeed; // Offset: 0x2d0 // Size: 0x04
	float SlopeAdapting_RotationLerpSpeed; // Offset: 0x2d4 // Size: 0x04
	float SlopeAdapting_BehindLegModifyFactor; // Offset: 0x2d8 // Size: 0x04
	bool bEnableLegAdapting; // Offset: 0x2dc // Size: 0x01
	char pad_0x2DD[0x3]; // Offset: 0x2dd // Size: 0x03
	float LegAdapting_IKLerpSpeed; // Offset: 0x2e0 // Size: 0x04
	float LegAdapting_IKMaxHeight; // Offset: 0x2e4 // Size: 0x04
	char pad_0x2E8[0x8]; // Offset: 0x2e8 // Size: 0x08
	struct FAnimNode_TwoBoneIK LegAdapting_LHand; // Offset: 0x2f0 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK LegAdapting_RHand; // Offset: 0x4b0 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK LegAdapting_LFoot; // Offset: 0x670 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK LegAdapting_RFoot; // Offset: 0x830 // Size: 0x1c0
	bool bEnableLionDanceLegAdapting; // Offset: 0x9f0 // Size: 0x01
	bool bEnableFootAdapting; // Offset: 0x9f1 // Size: 0x01
	char pad_0x9F2[0x6]; // Offset: 0x9f2 // Size: 0x06
	struct FBoneReference FootAdapting_LHand; // Offset: 0x9f8 // Size: 0x18
	struct FBoneReference FootAdapting_RHand; // Offset: 0xa10 // Size: 0x18
	struct FBoneReference FootAdapting_LFoot; // Offset: 0xa28 // Size: 0x18
	struct FBoneReference FootAdapting_RFoot; // Offset: 0xa40 // Size: 0x18
	struct FRotator FootAdapting_LimitRotation; // Offset: 0xa58 // Size: 0x0c
	float FootAdapting_RotationLerpSpeed; // Offset: 0xa64 // Size: 0x04
	char pad_0xA68[0x138]; // Offset: 0xa68 // Size: 0x138
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x90 // Inherited bytes: 0x38
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	// Fields
	bool bShuffleMode; // Offset: 0x32 // Size: 0x01
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // Offset: 0x38 // Size: 0x10
	char pad_0x49[0x47]; // Offset: 0x49 // Size: 0x47
};

// Object Name: ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x58 // Inherited bytes: 0x00
struct FRandomPlayerSequenceEntry {
	// Fields
	struct UAnimSequence* Sequence; // Offset: 0x00 // Size: 0x08
	float ChanceToPlay; // Offset: 0x08 // Size: 0x04
	IntProperty MinLoopCount; // Offset: 0x0c // Size: 0x04
	IntProperty MaxLoopCount; // Offset: 0x10 // Size: 0x04
	float MinPlayRate; // Offset: 0x14 // Size: 0x04
	float MaxPlayRate; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FAlphaBlend BlendIn; // Offset: 0x20 // Size: 0x38
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x38 // Inherited bytes: 0x38
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x38 // Inherited bytes: 0x38
struct FAnimNode_RefPose : FAnimNode_Base {
	// Fields
	enum class ERefPoseType RefPoseType; // Offset: 0x32 // Size: 0x01
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_Root
// Size: 0x50 // Inherited bytes: 0x38
struct FAnimNode_Root : FAnimNode_Base {
	// Fields
	struct FPoseLink Result; // Offset: 0x38 // Size: 0x18
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0x68 // Inherited bytes: 0x38
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	// Fields
	struct FPoseLink BasePose; // Offset: 0x38 // Size: 0x18
	float Pitch; // Offset: 0x50 // Size: 0x04
	float Yaw; // Offset: 0x54 // Size: 0x04
	struct FRotator MeshToComponent; // Offset: 0x58 // Size: 0x0c
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_RotationLimit
// Size: 0xa8 // Inherited bytes: 0x78
struct FAnimNode_RotationLimit : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference BoneToModify; // Offset: 0x78 // Size: 0x18
	struct FRotator RotationLimitMin; // Offset: 0x90 // Size: 0x0c
	struct FRotator RotationLimitMax; // Offset: 0x9c // Size: 0x0c
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xb0 // Inherited bytes: 0x78
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference TargetBone; // Offset: 0x78 // Size: 0x18
	struct FBoneReference SourceBone; // Offset: 0x90 // Size: 0x18
	float Multiplier; // Offset: 0xa8 // Size: 0x04
	enum class EBoneAxis RotationAxisToRefer; // Offset: 0xac // Size: 0x01
	bool bIsAdditive; // Offset: 0xad // Size: 0x01
	char pad_0xAE[0x2]; // Offset: 0xae // Size: 0x02
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x158 // Inherited bytes: 0x128
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	// Fields
	struct FPoseLink BasePose; // Offset: 0x128 // Size: 0x18
	IntProperty LODThreshold; // Offset: 0x140 // Size: 0x04
	bool bIsLODEnabled; // Offset: 0x144 // Size: 0x01
	char pad_0x145[0x3]; // Offset: 0x145 // Size: 0x03
	float Alpha; // Offset: 0x148 // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x14c // Size: 0x08
	float ActualAlpha; // Offset: 0x154 // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0xc0 // Inherited bytes: 0x38
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	// Fields
	struct FPoseLink InputPose; // Offset: 0x38 // Size: 0x18
	float DefaultChainLength; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct FBoneReference ChainStartBone; // Offset: 0x58 // Size: 0x18
	struct FBoneReference ChainEndBone; // Offset: 0x70 // Size: 0x18
	enum class EScaleChainInitialLength ChainInitialLength; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	struct FVector TargetLocation; // Offset: 0x8c // Size: 0x0c
	float Alpha; // Offset: 0x98 // Size: 0x04
	float ActualAlpha; // Offset: 0x9c // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0xa0 // Size: 0x08
	bool bBoneIndicesCached; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x17]; // Offset: 0xa9 // Size: 0x17
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x70 // Inherited bytes: 0x58
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	// Fields
	struct UAnimSequenceBase* Sequence; // Offset: 0x58 // Size: 0x08
	float ExplicitTime; // Offset: 0x60 // Size: 0x04
	enum class ESequenceEvalTimeType ExplicitTimeType; // Offset: 0x64 // Size: 0x01
	bool bShouldLoop; // Offset: 0x65 // Size: 0x01
	bool bTeleportToExplicitTime; // Offset: 0x66 // Size: 0x01
	char pad_0x67[0x1]; // Offset: 0x67 // Size: 0x01
	float StartPosition; // Offset: 0x68 // Size: 0x04
	enum class ESequenceEvalReinit ReinitializationBehavior; // Offset: 0x6c // Size: 0x01
	bool bReinitialized; // Offset: 0x6d // Size: 0x01
	char pad_0x6E[0x2]; // Offset: 0x6e // Size: 0x02
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x70 // Inherited bytes: 0x38
struct FAnimNode_Slot : FAnimNode_Base {
	// Fields
	struct FPoseLink Source; // Offset: 0x38 // Size: 0x18
	struct FName SlotName; // Offset: 0x50 // Size: 0x08
	bool bAlwaysUpdateSourcePose; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x17]; // Offset: 0x59 // Size: 0x17
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x218 // Inherited bytes: 0x78
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference StartBone; // Offset: 0x78 // Size: 0x18
	struct FBoneReference EndBone; // Offset: 0x90 // Size: 0x18
	enum class ESplineBoneAxis BoneAxis; // Offset: 0xa8 // Size: 0x01
	bool bAutoCalculateSpline; // Offset: 0xa9 // Size: 0x01
	char pad_0xAA[0x2]; // Offset: 0xaa // Size: 0x02
	IntProperty PointCount; // Offset: 0xac // Size: 0x04
	struct TArray<struct FTransform> ControlPoints; // Offset: 0xb0 // Size: 0x10
	float Roll; // Offset: 0xc0 // Size: 0x04
	float TwistStart; // Offset: 0xc4 // Size: 0x04
	float TwistEnd; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	struct FAlphaBlend TwistBlend; // Offset: 0xd0 // Size: 0x38
	float Stretch; // Offset: 0x108 // Size: 0x04
	float Offset; // Offset: 0x10c // Size: 0x04
	char pad_0x110[0x70]; // Offset: 0x110 // Size: 0x70
	struct FSplineCurves BoneSpline; // Offset: 0x180 // Size: 0x60
	float OriginalSplineLength; // Offset: 0x1e0 // Size: 0x04
	char pad_0x1E4[0x4]; // Offset: 0x1e4 // Size: 0x04
	struct TArray<struct FSplineIKCachedBoneData> CachedBoneReferences; // Offset: 0x1e8 // Size: 0x10
	struct TArray<float> CachedBoneLengths; // Offset: 0x1f8 // Size: 0x10
	struct TArray<struct FQuat> CachedOffsetRotations; // Offset: 0x208 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x20 // Inherited bytes: 0x00
struct FSplineIKCachedBoneData {
	// Fields
	struct FBoneReference Bone; // Offset: 0x00 // Size: 0x18
	IntProperty RefSkeletonIndex; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0xe0 // Inherited bytes: 0x78
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference SpringBone; // Offset: 0x78 // Size: 0x18
	bool bLimitDisplacement; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float MaxDisplacement; // Offset: 0x94 // Size: 0x04
	float SpringStiffness; // Offset: 0x98 // Size: 0x04
	float SpringDamping; // Offset: 0x9c // Size: 0x04
	float ErrorResetThresh; // Offset: 0xa0 // Size: 0x04
	bool bNoZSpring; // Offset: 0xa4 // Size: 0x01
	bool bTranslateX; // Offset: 0xa5 // Size: 0x01
	bool bTranslateY; // Offset: 0xa6 // Size: 0x01
	bool bTranslateZ; // Offset: 0xa7 // Size: 0x01
	bool bRotateX; // Offset: 0xa8 // Size: 0x01
	bool bRotateY; // Offset: 0xa9 // Size: 0x01
	bool bRotateZ; // Offset: 0xaa // Size: 0x01
	char pad_0xAB[0x35]; // Offset: 0xab // Size: 0x35
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x1b0 // Inherited bytes: 0x78
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference TrailBone; // Offset: 0x78 // Size: 0x18
	IntProperty ChainLength; // Offset: 0x90 // Size: 0x04
	enum class EAxis ChainBoneAxis; // Offset: 0x94 // Size: 0x01
	bool bInvertChainBoneAxis; // Offset: 0x95 // Size: 0x01
	char pad_0x96[0x2]; // Offset: 0x96 // Size: 0x02
	float TrailRelaxation; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // Offset: 0xa0 // Size: 0x78
	bool bLimitStretch; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x3]; // Offset: 0x119 // Size: 0x03
	float StretchLimit; // Offset: 0x11c // Size: 0x04
	struct FVector FakeVelocity; // Offset: 0x120 // Size: 0x0c
	bool bActorSpaceFakeVel; // Offset: 0x12c // Size: 0x01
	char pad_0x12D[0x3]; // Offset: 0x12d // Size: 0x03
	struct FBoneReference BaseJoint; // Offset: 0x130 // Size: 0x18
	char pad_0x148[0x68]; // Offset: 0x148 // Size: 0x68
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x100 // Inherited bytes: 0x78
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	// Fields
	struct FReferenceBoneFrame BaseFrame; // Offset: 0x78 // Size: 0x28
	struct FReferenceBoneFrame TwistFrame; // Offset: 0xa0 // Size: 0x28
	struct FAxis TwistPlaneNormalAxis; // Offset: 0xc8 // Size: 0x10
	float RangeMax; // Offset: 0xd8 // Size: 0x04
	float RemappedMin; // Offset: 0xdc // Size: 0x04
	float RemappedMax; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
	struct FAnimCurveParam Curve; // Offset: 0xe8 // Size: 0x10
	char pad_0xF8[0x8]; // Offset: 0xf8 // Size: 0x08
};

// Object Name: ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x28 // Inherited bytes: 0x00
struct FReferenceBoneFrame {
	// Fields
	struct FBoneReference Bone; // Offset: 0x00 // Size: 0x18
	struct FAxis Axis; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0x80 // Inherited bytes: 0x38
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	// Fields
	struct FPoseLink A; // Offset: 0x38 // Size: 0x18
	struct FPoseLink B; // Offset: 0x50 // Size: 0x18
	float Alpha; // Offset: 0x68 // Size: 0x04
	struct FInputScaleBias AlphaScaleBias; // Offset: 0x6c // Size: 0x08
	float InternalBlendAlpha; // Offset: 0x74 // Size: 0x04
	bool bAIsRelevant; // Offset: 0x78 // Size: 0x01
	bool bBIsRelevant; // Offset: 0x79 // Size: 0x01
	bool bResetChildOnActivation; // Offset: 0x7a // Size: 0x01
	char pad_0x7B[0x5]; // Offset: 0x7b // Size: 0x05
};

// Object Name: ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0x790 // Inherited bytes: 0x5d0
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
	// Fields
	char pad_0x5D0[0x1c0]; // Offset: 0x5d0 // Size: 0x1c0
};

// Object Name: ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 // Inherited bytes: 0x00
struct FRBFEntry {
	// Fields
	struct TArray<float> Values; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0x88 // Inherited bytes: 0x10
struct FRBFTarget : FRBFEntry {
	// Fields
	float ScaleFactor; // Offset: 0x10 // Size: 0x04
	bool bApplyCustomCurve; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct FRichCurve CustomCurve; // Offset: 0x18 // Size: 0x70
};

