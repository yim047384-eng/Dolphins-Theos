#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x1e0 // Inherited bytes: 0x78
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference RootBone; // Offset: 0x78 // Size: 0x18
	struct TArray<struct FBoneReference> ExcludeBones; // Offset: 0x90 // Size: 0x10
	IntProperty TargetFramerate; // Offset: 0xa0 // Size: 0x04
	bool OverrideTargetFramerate; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	struct FKawaiiPhysicsSettings PhysicsSettings; // Offset: 0xa8 // Size: 0x18
	struct UCurveFloat* DampingCurve; // Offset: 0xc0 // Size: 0x08
	struct UCurveFloat* WorldDampingLocationCurve; // Offset: 0xc8 // Size: 0x08
	struct UCurveFloat* WorldDampingRotationCurve; // Offset: 0xd0 // Size: 0x08
	struct UCurveFloat* StiffnessCurve; // Offset: 0xd8 // Size: 0x08
	struct UCurveFloat* RadiusCurve; // Offset: 0xe0 // Size: 0x08
	struct UCurveFloat* LimitAngleCurve; // Offset: 0xe8 // Size: 0x08
	bool bUpdatePhysicsSettingsInGame; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	float DummyBoneLength; // Offset: 0xf4 // Size: 0x04
	enum class EPlanarConstraint PlanarConstraint; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x7]; // Offset: 0xf9 // Size: 0x07
	struct TArray<struct FSphericalLimit> SphericalLimits; // Offset: 0x100 // Size: 0x10
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // Offset: 0x110 // Size: 0x10
	struct TArray<struct FPlanarLimit> PlanarLimits; // Offset: 0x120 // Size: 0x10
	float TeleportDistanceThreshold; // Offset: 0x130 // Size: 0x04
	float TeleportRotationThreshold; // Offset: 0x134 // Size: 0x04
	struct FVector Gravity; // Offset: 0x138 // Size: 0x0c
	bool bEnableWind; // Offset: 0x144 // Size: 0x01
	char pad_0x145[0x3]; // Offset: 0x145 // Size: 0x03
	float WindScale; // Offset: 0x148 // Size: 0x04
	char pad_0x14C[0x4]; // Offset: 0x14c // Size: 0x04
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // Offset: 0x150 // Size: 0x10
	float TotalBoneLength; // Offset: 0x160 // Size: 0x04
	char pad_0x164[0xc]; // Offset: 0x164 // Size: 0x0c
	struct FTransform PreSkelCompTransform; // Offset: 0x170 // Size: 0x30
	bool bInitPhysicsSettings; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A1[0x3f]; // Offset: 0x1a1 // Size: 0x3f
};

// Object Name: ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0xb0 // Inherited bytes: 0x00
struct FKawaiiPhysicsModifyBone {
	// Fields
	struct FBoneReference BoneRef; // Offset: 0x00 // Size: 0x18
	IntProperty ParentIndex; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<IntProperty> ChildIndexs; // Offset: 0x20 // Size: 0x10
	struct FKawaiiPhysicsSettings PhysicsSettings; // Offset: 0x30 // Size: 0x18
	struct FVector Location; // Offset: 0x48 // Size: 0x0c
	struct FVector PrevLocation; // Offset: 0x54 // Size: 0x0c
	struct FQuat PrevRotation; // Offset: 0x60 // Size: 0x10
	struct FVector PoseLocation; // Offset: 0x70 // Size: 0x0c
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct FQuat PoseRotation; // Offset: 0x80 // Size: 0x10
	struct FVector PoseScale; // Offset: 0x90 // Size: 0x0c
	float LengthFromRoot; // Offset: 0x9c // Size: 0x04
	bool bDummy; // Offset: 0xa0 // Size: 0x01
	bool bExcluded; // Offset: 0xa1 // Size: 0x01
	char pad_0xA2[0xe]; // Offset: 0xa2 // Size: 0x0e
};

// Object Name: ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x18 // Inherited bytes: 0x00
struct FKawaiiPhysicsSettings {
	// Fields
	float Damping; // Offset: 0x00 // Size: 0x04
	float WorldDampingLocation; // Offset: 0x04 // Size: 0x04
	float WorldDampingRotation; // Offset: 0x08 // Size: 0x04
	float Stiffness; // Offset: 0x0c // Size: 0x04
	float Radius; // Offset: 0x10 // Size: 0x04
	float LimitAngle; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x50 // Inherited bytes: 0x00
struct FCollisionLimitBase {
	// Fields
	struct FBoneReference DrivingBone; // Offset: 0x00 // Size: 0x18
	struct FVector OffsetLocation; // Offset: 0x18 // Size: 0x0c
	struct FRotator OffsetRotation; // Offset: 0x24 // Size: 0x0c
	struct FVector Location; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct FQuat Rotation; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x60 // Inherited bytes: 0x50
struct FPlanarLimit : FCollisionLimitBase {
	// Fields
	struct FPlane Plane; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x60 // Inherited bytes: 0x50
struct FCapsuleLimit : FCollisionLimitBase {
	// Fields
	float Radius; // Offset: 0x50 // Size: 0x04
	float Length; // Offset: 0x54 // Size: 0x04
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x60 // Inherited bytes: 0x50
struct FSphericalLimit : FCollisionLimitBase {
	// Fields
	float Radius; // Offset: 0x50 // Size: 0x04
	enum class ESphericalLimitType LimitType; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0xb]; // Offset: 0x55 // Size: 0x0b
};

// Object Name: ScriptStruct KawaiiPhysics.KawaiiPhysicsEdgeCollisionSettings
// Size: 0x2c // Inherited bytes: 0x00
struct FKawaiiPhysicsEdgeCollisionSettings {
	// Fields
	bool bEnableEdgeCollision; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty StripIndex; // Offset: 0x04 // Size: 0x04
	IntProperty StripGroup; // Offset: 0x08 // Size: 0x04
	bool bLoopStripGroup; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty TotalStripCount; // Offset: 0x10 // Size: 0x04
	float CollisionTolerance; // Offset: 0x14 // Size: 0x04
	bool bDebugDrawInGame; // Offset: 0x18 // Size: 0x01
	bool bActiveLateralConstraint; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	IntProperty LateralConstraintIterationCount; // Offset: 0x1c // Size: 0x04
	float LateralConstraintWeight; // Offset: 0x20 // Size: 0x04
	bool bUseDiagonalEdgesForLateralConstraint; // Offset: 0x24 // Size: 0x01
	enum class ELateralConstraintMode LateralConstraintMode; // Offset: 0x25 // Size: 0x01
	enum class EComplianceType ComplianceType; // Offset: 0x26 // Size: 0x01
	char pad_0x27[0x1]; // Offset: 0x27 // Size: 0x01
	float ComplianceValueOverride; // Offset: 0x28 // Size: 0x04
};

// Object Name: ScriptStruct KawaiiPhysics.NewAnimNode_KawaiiPhysics
// Size: 0x350 // Inherited bytes: 0x78
struct FNewAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	// Fields
	struct FBoneReference RootBone; // Offset: 0x78 // Size: 0x18
	struct TArray<struct FBoneReference> ExcludeBones; // Offset: 0x90 // Size: 0x10
	struct TArray<struct FBoneReference> FixedBones; // Offset: 0xa0 // Size: 0x10
	enum class EKawaiiPhysicsSimulationSpace SimulationSpace; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x3]; // Offset: 0xb1 // Size: 0x03
	IntProperty TargetFramerate; // Offset: 0xb4 // Size: 0x04
	bool OverrideTargetFramerate; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x3]; // Offset: 0xb9 // Size: 0x03
	struct FKawaiiPhysicsSettings PhysicsSettings; // Offset: 0xbc // Size: 0x18
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct UCurveFloat* DampingCurve; // Offset: 0xd8 // Size: 0x08
	struct UCurveFloat* WorldDampingLocationCurve; // Offset: 0xe0 // Size: 0x08
	struct UCurveFloat* WorldDampingRotationCurve; // Offset: 0xe8 // Size: 0x08
	struct UCurveFloat* StiffnessCurve; // Offset: 0xf0 // Size: 0x08
	struct UCurveFloat* RadiusCurve; // Offset: 0xf8 // Size: 0x08
	struct UCurveFloat* LimitAngleCurve; // Offset: 0x100 // Size: 0x08
	bool bUpdatePhysicsSettingsInGame; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x3]; // Offset: 0x109 // Size: 0x03
	float DummyBoneLength; // Offset: 0x10c // Size: 0x04
	enum class EPlanarConstraint PlanarConstraint; // Offset: 0x110 // Size: 0x01
	char pad_0x111[0x7]; // Offset: 0x111 // Size: 0x07
	struct TArray<struct FSphericalLimit> SphericalLimits; // Offset: 0x118 // Size: 0x10
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // Offset: 0x128 // Size: 0x10
	struct TArray<struct FPlanarLimit> PlanarLimits; // Offset: 0x138 // Size: 0x10
	float TeleportDistanceThreshold; // Offset: 0x148 // Size: 0x04
	float TeleportRotationThreshold; // Offset: 0x14c // Size: 0x04
	struct FVector Gravity; // Offset: 0x150 // Size: 0x0c
	struct FVector MaxDistance; // Offset: 0x15c // Size: 0x0c
	struct FVector MinDistance; // Offset: 0x168 // Size: 0x0c
	bool bEnableWind; // Offset: 0x174 // Size: 0x01
	char pad_0x175[0x3]; // Offset: 0x175 // Size: 0x03
	float WindScale; // Offset: 0x178 // Size: 0x04
	struct FKawaiiPhysicsEdgeCollisionSettings EdgeCollisionSettings; // Offset: 0x17c // Size: 0x2c
	bool bEnableEndBoneControl; // Offset: 0x1a8 // Size: 0x01
	char pad_0x1A9[0x3]; // Offset: 0x1a9 // Size: 0x03
	struct FVector EndBoneControlOffset; // Offset: 0x1ac // Size: 0x0c
	struct FRotator EndBoneControlRotation; // Offset: 0x1b8 // Size: 0x0c
	struct FVector RootBoneControlOffset; // Offset: 0x1c4 // Size: 0x0c
	struct TArray<struct FNewKawaiiPhysicsModifyBone> ModifyBones; // Offset: 0x1d0 // Size: 0x10
	float TotalBoneLength; // Offset: 0x1e0 // Size: 0x04
	char pad_0x1E4[0xc]; // Offset: 0x1e4 // Size: 0x0c
	struct FTransform PreSkelCompTransform; // Offset: 0x1f0 // Size: 0x30
	bool bInitPhysicsSettings; // Offset: 0x220 // Size: 0x01
	char pad_0x221[0x12f]; // Offset: 0x221 // Size: 0x12f
};

// Object Name: ScriptStruct KawaiiPhysics.NewKawaiiPhysicsModifyBone
// Size: 0x170 // Inherited bytes: 0x00
struct FNewKawaiiPhysicsModifyBone {
	// Fields
	struct FBoneReference BoneRef; // Offset: 0x00 // Size: 0x18
	IntProperty ParentIndex; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<IntProperty> ChildIndexs; // Offset: 0x20 // Size: 0x10
	struct FKawaiiPhysicsSettings PhysicsSettings; // Offset: 0x30 // Size: 0x18
	struct FVector Location; // Offset: 0x48 // Size: 0x0c
	struct FVector PrevLocation; // Offset: 0x54 // Size: 0x0c
	struct FQuat PrevRotation; // Offset: 0x60 // Size: 0x10
	struct FVector PoseLocation; // Offset: 0x70 // Size: 0x0c
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct FQuat PoseRotation; // Offset: 0x80 // Size: 0x10
	struct FVector PoseScale; // Offset: 0x90 // Size: 0x0c
	float LengthFromRoot; // Offset: 0x9c // Size: 0x04
	bool bDummy; // Offset: 0xa0 // Size: 0x01
	bool bExcluded; // Offset: 0xa1 // Size: 0x01
	char pad_0xA2[0x2]; // Offset: 0xa2 // Size: 0x02
	struct FVector ForwardPos; // Offset: 0xa4 // Size: 0x0c
	struct FVector BackwardPos; // Offset: 0xb0 // Size: 0x0c
	bool bIsEndBone; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
	struct FVector WorldPoseLocation; // Offset: 0xc0 // Size: 0x0c
	char pad_0xCC[0xa4]; // Offset: 0xcc // Size: 0xa4
};

// Object Name: ScriptStruct KawaiiPhysics.SimulationSpaceCache
// Size: 0x60 // Inherited bytes: 0x00
struct FSimulationSpaceCache {
	// Fields
	struct FTransform ComponentToTargetSpace; // Offset: 0x00 // Size: 0x30
	struct FTransform TargetSpaceToComponent; // Offset: 0x30 // Size: 0x30
};

