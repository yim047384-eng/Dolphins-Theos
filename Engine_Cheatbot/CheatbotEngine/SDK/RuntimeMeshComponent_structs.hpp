#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct RuntimeMeshComponent.RuntimeMeshTangent
// Size: 0x10 // Inherited bytes: 0x00
struct FRuntimeMeshTangent {
	// Fields
	struct FVector TangentX; // Offset: 0x00 // Size: 0x0c
	bool bFlipTangentY; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct RuntimeMeshComponent.RuntimeMeshComponentPrePhysicsTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FRuntimeMeshComponentPrePhysicsTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct RuntimeMeshComponent.RuntimeConvexCollisionSection
// Size: 0x30 // Inherited bytes: 0x00
struct FRuntimeConvexCollisionSection {
	// Fields
	struct TArray<struct FVector> VertexBuffer; // Offset: 0x00 // Size: 0x10
	struct FBox BoundingBox; // Offset: 0x10 // Size: 0x1c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct RuntimeMeshComponent.RuntimeMeshCollisionSection
// Size: 0x20 // Inherited bytes: 0x00
struct FRuntimeMeshCollisionSection {
	// Fields
	struct TArray<struct FVector> VertexBuffer; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> IndexBuffer; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct RuntimeMeshComponent.RunTimeMeshFrustumCullNode
// Size: 0x38 // Inherited bytes: 0x00
struct FRunTimeMeshFrustumCullNode {
	// Fields
	struct FBox Bounds; // Offset: 0x00 // Size: 0x1c
	uint16_t InfoIndex; // Offset: 0x1c // Size: 0x02
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	StrProperty LandScapeName; // Offset: 0x20 // Size: 0x10
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

