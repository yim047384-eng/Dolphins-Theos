#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ClothingSystemRuntime.ClothConfig
// Size: 0x160 // Inherited bytes: 0x00
struct FClothConfig {
	// Fields
	struct FClothConstraintSetup VerticalConstraintConfig; // Offset: 0x00 // Size: 0x10
	struct FClothConstraintSetup HorizontalConstraintConfig; // Offset: 0x10 // Size: 0x10
	struct FClothConstraintSetup BendConstraintConfig; // Offset: 0x20 // Size: 0x10
	struct FClothConstraintSetup ShearConstraintConfig; // Offset: 0x30 // Size: 0x10
	struct FClothWindConfig WindConfig; // Offset: 0x40 // Size: 0x0c
	struct FClothSelfCollisionConfig SelfCollisionConfig; // Offset: 0x4c // Size: 0x0c
	struct FClothDampingConfig DampingConfig; // Offset: 0x58 // Size: 0x2c
	struct FClothInertiaConfig InertiaConfig; // Offset: 0x84 // Size: 0x24
	struct FClothSolverConfig SolverConfig; // Offset: 0xa8 // Size: 0x34
	struct FClothTeleportConfig TeleportConfig; // Offset: 0xdc // Size: 0x10
	struct FClothTetherConfig TetherConfig; // Offset: 0xec // Size: 0x0c
	struct FClothCollisionConfig CollisionConfig; // Offset: 0xf8 // Size: 0x08
	struct FClothVolumeConfig VolumeConfig; // Offset: 0x100 // Size: 0x10
	struct FClothBendingElementConfig BendingElementConfig; // Offset: 0x110 // Size: 0x18
	struct FClothAnimDriveConfig AnimDriveConfig; // Offset: 0x128 // Size: 0x1c
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	struct FSoftObjectPath ImportedConfigAssetPath; // Offset: 0x148 // Size: 0x18
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothAnimDriveConfig
// Size: 0x1c // Inherited bytes: 0x00
struct FClothAnimDriveConfig {
	// Fields
	bool bAnimDriveEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float AnimDriveStiffnessLow; // Offset: 0x04 // Size: 0x04
	float AnimDriveStiffnessHigh; // Offset: 0x08 // Size: 0x04
	float AnimDriveDampingLow; // Offset: 0x0c // Size: 0x04
	float AnimDriveDampingHigh; // Offset: 0x10 // Size: 0x04
	float AnimDriveMaxRelativeVelocity; // Offset: 0x14 // Size: 0x04
	float AnimDriveMultiplier; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothBendingElementConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FClothBendingElementConfig {
	// Fields
	bool bEnableBendingElement; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float BendingElementStiffness; // Offset: 0x04 // Size: 0x04
	float BendingElementDamping; // Offset: 0x08 // Size: 0x04
	float BendingElementBucklingRatio; // Offset: 0x0c // Size: 0x04
	float BendingElementBucklingStiffness; // Offset: 0x10 // Size: 0x04
	float FlatnessRatio; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothVolumeConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FClothVolumeConfig {
	// Fields
	bool bEnableVolumeConstraints; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float VolumeConstraintStiffness; // Offset: 0x04 // Size: 0x04
	float VolumeConstraintScaleMultiplier; // Offset: 0x08 // Size: 0x04
	IntProperty VolumeConstraintSampleStride; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothCollisionConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FClothCollisionConfig {
	// Fields
	float CollisionThickness; // Offset: 0x00 // Size: 0x04
	bool bEnableContinuousCollision; // Offset: 0x04 // Size: 0x01
	bool bEnableEnvironmentalCollision; // Offset: 0x05 // Size: 0x01
	bool bEnableGroundCollision; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothTetherConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FClothTetherConfig {
	// Fields
	bool bEnableTether; // Offset: 0x00 // Size: 0x01
	enum class EClothTetherMode TetherMode; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float TetherStiffness; // Offset: 0x04 // Size: 0x04
	float TetherLimit; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothTeleportConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FClothTeleportConfig {
	// Fields
	bool bEnableAutoTeleportDetection; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float TeleportThreshold; // Offset: 0x04 // Size: 0x04
	float ResetThreshold; // Offset: 0x08 // Size: 0x04
	float RotationThreshold; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothSolverConfig
// Size: 0x34 // Inherited bytes: 0x00
struct FClothSolverConfig {
	// Fields
	enum class EClothSolverMode SolverMode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float JacobiSOR; // Offset: 0x04 // Size: 0x04
	bool bUseGPU; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float SolverFrequency; // Offset: 0x0c // Size: 0x04
	float StiffnessFrequency; // Offset: 0x10 // Size: 0x04
	float GravityScale; // Offset: 0x14 // Size: 0x04
	bool bUseXPBD; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty XpbdIterations; // Offset: 0x1c // Size: 0x04
	float MaxStiffness; // Offset: 0x20 // Size: 0x04
	float MaxParticleDisplacement; // Offset: 0x24 // Size: 0x04
	bool bEnableAdaptiveFrequency; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float AdaptiveFrequencyMin; // Offset: 0x2c // Size: 0x04
	float AdaptiveFrequencyMax; // Offset: 0x30 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothInertiaConfig
// Size: 0x24 // Inherited bytes: 0x00
struct FClothInertiaConfig {
	// Fields
	struct FVector LinearInertiaScale; // Offset: 0x00 // Size: 0x0c
	struct FVector AngularInertiaScale; // Offset: 0x0c // Size: 0x0c
	struct FVector CentrifugalInertiaScale; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothDampingConfig
// Size: 0x2c // Inherited bytes: 0x00
struct FClothDampingConfig {
	// Fields
	struct FVector Damping; // Offset: 0x00 // Size: 0x0c
	struct FVector LinearDrag; // Offset: 0x0c // Size: 0x0c
	struct FVector AngularDrag; // Offset: 0x18 // Size: 0x0c
	float Friction; // Offset: 0x24 // Size: 0x04
	float AnimDriveDamping; // Offset: 0x28 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothSelfCollisionConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FClothSelfCollisionConfig {
	// Fields
	float SelfCollisionRadius; // Offset: 0x00 // Size: 0x04
	float SelfCollisionStiffness; // Offset: 0x04 // Size: 0x04
	float SelfCollisionCullScale; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothWindConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FClothWindConfig {
	// Fields
	enum class EClothingWindMethod WindMethod; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float WindDragCoefficient; // Offset: 0x04 // Size: 0x04
	float WindLiftCoefficient; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FClothConstraintSetup {
	// Fields
	float Stiffness; // Offset: 0x00 // Size: 0x04
	float StiffnessMultiplier; // Offset: 0x04 // Size: 0x04
	float StretchLimit; // Offset: 0x08 // Size: 0x04
	float CompressionLimit; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothLODData
// Size: 0x268 // Inherited bytes: 0x00
struct FClothLODData {
	// Fields
	struct FClothPhysicalMeshData PhysicalMeshData; // Offset: 0x00 // Size: 0x218
	struct FClothCollisionData CollisionData; // Offset: 0x218 // Size: 0x30
	char pad_0x248[0x20]; // Offset: 0x248 // Size: 0x20
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// Size: 0x218 // Inherited bytes: 0x00
struct FClothPhysicalMeshData {
	// Fields
	struct TArray<struct FVector> Vertices; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVector> Normals; // Offset: 0x10 // Size: 0x10
	struct TArray<uint32_t> Indices; // Offset: 0x20 // Size: 0x10
	struct TArray<float> MaxDistances; // Offset: 0x30 // Size: 0x10
	struct TArray<float> BackstopDistances; // Offset: 0x40 // Size: 0x10
	struct TArray<float> BackstopRadiuses; // Offset: 0x50 // Size: 0x10
	struct TArray<float> AnimDriveMultipliers; // Offset: 0x60 // Size: 0x10
	struct TArray<float> SelfCollisionMask; // Offset: 0x70 // Size: 0x10
	struct TArray<float> PhysicsStiffness; // Offset: 0x80 // Size: 0x10
	struct TArray<float> ShapeMatchingMask; // Offset: 0x90 // Size: 0x10
	struct TArray<struct FVector2D> UVs; // Offset: 0xa0 // Size: 0x10
	struct TArray<float> InverseMasses; // Offset: 0xb0 // Size: 0x10
	struct TArray<struct FClothVertBoneData> BoneData; // Offset: 0xc0 // Size: 0x10
	IntProperty MaxBoneWeights; // Offset: 0xd0 // Size: 0x04
	IntProperty NumFixedVerts; // Offset: 0xd4 // Size: 0x04
	IntProperty OriginalSectionVertexCount; // Offset: 0xd8 // Size: 0x04
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
	struct TArray<uint32_t> SelfCollisionIndices; // Offset: 0xe0 // Size: 0x10
	struct TArray<uint32_t> ShapeMatchingIndices; // Offset: 0xf0 // Size: 0x10
	IntProperty NumShapeMatchingRigidBodies; // Offset: 0x100 // Size: 0x04
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
	struct TArray<uint32_t> ShapeMatchingRigidBodyOffsets; // Offset: 0x108 // Size: 0x10
	struct TArray<uint32_t> ShapeMatchingRigidBodyIds; // Offset: 0x118 // Size: 0x10
	struct TArray<float> ShapeMatchingRestPositions; // Offset: 0x128 // Size: 0x10
	struct TArray<float> ShapeMatchingInitialCenters; // Offset: 0x138 // Size: 0x10
	struct TArray<struct FIntPoint> VirtualEdges; // Offset: 0x148 // Size: 0x10
	struct TArray<float> ClothLayerMask; // Offset: 0x158 // Size: 0x10
	struct TArray<float> AnimDriveStiffnessWeightMap; // Offset: 0x168 // Size: 0x10
	struct TArray<float> AnimDriveDampingWeightMap; // Offset: 0x178 // Size: 0x10
	struct TArray<struct FVolumeConstraint> VolumeConstraints; // Offset: 0x188 // Size: 0x10
	struct TArray<IntProperty> ParticleToTetrahedronMap; // Offset: 0x198 // Size: 0x10
	IntProperty NumVolumeConstraints; // Offset: 0x1a8 // Size: 0x04
	float VolumeConstraintScale; // Offset: 0x1ac // Size: 0x04
	IntProperty VolumeConstraintSampleStride; // Offset: 0x1b0 // Size: 0x04
	char pad_0x1B4[0x4]; // Offset: 0x1b4 // Size: 0x04
	struct TArray<uint32_t> ClothLayerOffsets; // Offset: 0x1b8 // Size: 0x10
	IntProperty NumClothLayers; // Offset: 0x1c8 // Size: 0x04
	char pad_0x1CC[0x4]; // Offset: 0x1cc // Size: 0x04
	struct TArray<uint32_t> ParticleVolumeConstraintOffsets; // Offset: 0x1d0 // Size: 0x10
	struct TArray<uint32_t> ParticleVolumeConstraintData; // Offset: 0x1e0 // Size: 0x10
	IntProperty NumBendingElements; // Offset: 0x1f0 // Size: 0x04
	char pad_0x1F4[0x4]; // Offset: 0x1f4 // Size: 0x04
	struct TArray<IntProperty> BendingElementIndices; // Offset: 0x1f8 // Size: 0x10
	struct TArray<float> BendingElementRestAngles; // Offset: 0x208 // Size: 0x10
};

// Object Name: ScriptStruct ClothingSystemRuntime.VolumeConstraint
// Size: 0x18 // Inherited bytes: 0x00
struct FVolumeConstraint {
	// Fields
	uint32_t Particle; // Offset: 0x00 // Size: 0x04
	uint32_t Triangle[0x3]; // Offset: 0x04 // Size: 0x0c
	float RestVolume; // Offset: 0x10 // Size: 0x04
	float Scale; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// Size: 0x34 // Inherited bytes: 0x00
struct FClothVertBoneData {
	// Fields
	IntProperty NumInfluences; // Offset: 0x00 // Size: 0x04
	uint16_t BoneIndices[0x8]; // Offset: 0x04 // Size: 0x10
	float BoneWeights[0x8]; // Offset: 0x14 // Size: 0x20
};

// Object Name: ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// Size: 0x30 // Inherited bytes: 0x00
struct FClothParameterMask_PhysMesh {
	// Fields
	struct FName MaskName; // Offset: 0x00 // Size: 0x08
	enum class MaskTarget_PhysMesh CurrentTarget; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float MaxValue; // Offset: 0x0c // Size: 0x04
	float MinValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<float> Values; // Offset: 0x18 // Size: 0x10
	bool bEnabled; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

