#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct PhotonBlast.PhotonInstanceImpactData
// Size: 0x10 // Inherited bytes: 0x00
struct FPhotonInstanceImpactData {
	// Fields
	struct FVector_NetQuantize10 WorldImpactVelocity; // Offset: 0x00 // Size: 0x0c
	enum class EPhotonFracturedMeshFragmentState TargetFragmentsState; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct PhotonBlast.ReplicationEvent
// Size: 0x18 // Inherited bytes: 0x00
struct FReplicationEvent {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct PhotonBlast.ClusterReplicationProxy
// Size: 0x10 // Inherited bytes: 0x00
struct FClusterReplicationProxy {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct PhotonBlast.MovieScenePhotonDestructibleSectionTemplate
// Size: 0x248 // Inherited bytes: 0x18
struct FMovieScenePhotonDestructibleSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FIntegralCurve PhotonDestructibleKeys; // Offset: 0x18 // Size: 0x70
	struct FRichCurve TimeSpeedCurve; // Offset: 0x88 // Size: 0x70
	struct FRichCurve SpreadSpeedCurve; // Offset: 0xf8 // Size: 0x70
	struct FRichCurve VelocitySpeedCurve; // Offset: 0x168 // Size: 0x70
	struct FRichCurve RotationSpeedCurve; // Offset: 0x1d8 // Size: 0x70
};

// Object Name: ScriptStruct PhotonBlast.PhotonDestructibleMeshPhysicsDetachData
// Size: 0xc0 // Inherited bytes: 0x00
struct FPhotonDestructibleMeshPhysicsDetachData {
	// Fields
	float TimeSpeed; // Offset: 0x00 // Size: 0x04
	struct FVector Gravity; // Offset: 0x04 // Size: 0x0c
	float SpreadSpeed; // Offset: 0x10 // Size: 0x04
	float VelocitySpeed; // Offset: 0x14 // Size: 0x04
	float RotationSpeed; // Offset: 0x18 // Size: 0x04
	float VisibleTime; // Offset: 0x1c // Size: 0x04
	IntProperty SlideSmallestChunks; // Offset: 0x20 // Size: 0x04
	float SlideRemoveSmallestSize; // Offset: 0x24 // Size: 0x04
	bool bEnableReverse; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float MaxReverseTime; // Offset: 0x2c // Size: 0x04
	bool bUseCustomRandomValue; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct FRawDistributionVector CustomRandomDirection; // Offset: 0x38 // Size: 0x50
	struct FRawDistributionFloat CustomRandomW; // Offset: 0x88 // Size: 0x38
};

// Object Name: ScriptStruct PhotonBlast.PhotonDestructibleImpactParam
// Size: 0x08 // Inherited bytes: 0x00
struct FPhotonDestructibleImpactParam {
	// Fields
	float ImpactDamageHp; // Offset: 0x00 // Size: 0x04
	float ImpactDamageSpreadRadius; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct PhotonBlast.PhotonSlideReplicationData
// Size: 0x28 // Inherited bytes: 0x00
struct FPhotonSlideReplicationData {
	// Fields
	struct TArray<struct FChunkTransformData> ChunkTransformData; // Offset: 0x00 // Size: 0x10
	enum class EPhotonDestructibleState TargetDestructibleState; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct TArray<enum class EPhotonFracturedMeshFragmentState> TargetFragmentsState; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct PhotonBlast.ChunkTransformData
// Size: 0x34 // Inherited bytes: 0x00
struct FChunkTransformData {
	// Fields
	struct FVector_NetQuantize100 LinearVelocity; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize100 AngularVelocity; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantize100 Location; // Offset: 0x18 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x24 // Size: 0x0c
	bool ReplicateVelocity; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
};

// Object Name: ScriptStruct PhotonBlast.PhotonDetachReplicationData
// Size: 0x30 // Inherited bytes: 0x00
struct FPhotonDetachReplicationData {
	// Fields
	struct FVector4 LocalImpactPointAndSpreadStrength; // Offset: 0x00 // Size: 0x10
	struct FVector4 LocalImpactVelocityAndRotateStrength; // Offset: 0x10 // Size: 0x10
	enum class EPhotonFracturedMeshFragmentState FragmentState; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0xf]; // Offset: 0x21 // Size: 0x0f
};

// Object Name: ScriptStruct PhotonBlast.PhotonHideReplicationData
// Size: 0x30 // Inherited bytes: 0x00
struct FPhotonHideReplicationData {
	// Fields
	struct FVector_NetQuantize10 LocalImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize10 LocalImpactVelocity; // Offset: 0x0c // Size: 0x0c
	struct TArray<enum class EPhotonFracturedMeshFragmentState> TargetFragmentsState; // Offset: 0x18 // Size: 0x10
	float ImpactTime; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct PhotonBlast.FragmentConvexElem
// Size: 0x10 // Inherited bytes: 0x00
struct FFragmentConvexElem {
	// Fields
	struct TArray<struct FKConvexElem> ConvexElem; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct PhotonBlast.SupportGraph
// Size: 0x18 // Inherited bytes: 0x00
struct FSupportGraph {
	// Fields
	struct TArray<struct FEdgeNode> EdgeDatas; // Offset: 0x00 // Size: 0x10
	IntProperty Size; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct PhotonBlast.EdgeNode
// Size: 0x18 // Inherited bytes: 0x00
struct FEdgeNode {
	// Fields
	struct TArray<IntProperty> Edges; // Offset: 0x00 // Size: 0x10
	IntProperty Size; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct PhotonBlast.PhotonDestructibleImpactData
// Size: 0x40 // Inherited bytes: 0x00
struct FPhotonDestructibleImpactData {
	// Fields
	struct FVector4 LocalImpactPointAndSpreadSpeed; // Offset: 0x00 // Size: 0x10
	bool Visible; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0xf]; // Offset: 0x11 // Size: 0x0f
	struct FVector4 LocalImpactVelocityAndRotateSpeed; // Offset: 0x20 // Size: 0x10
	enum class EPhotonFracturedMeshFragmentState TargetFragmentsState; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0xf]; // Offset: 0x31 // Size: 0x0f
};

// Object Name: ScriptStruct PhotonBlast.PhotonDestructibleFragmentStateData
// Size: 0x30 // Inherited bytes: 0x00
struct FPhotonDestructibleFragmentStateData {
	// Fields
	struct FVector_NetQuantize10 LocalImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize10 LocalImpactVelocity; // Offset: 0x0c // Size: 0x0c
	float ImpactTime; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<enum class EPhotonFracturedMeshFragmentState> TargetFragmentsState; // Offset: 0x20 // Size: 0x10
};

