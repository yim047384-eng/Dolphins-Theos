#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x40 // Inherited bytes: 0x00
struct FProcMeshSection {
	// Fields
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> ProcIndexBuffer; // Offset: 0x10 // Size: 0x10
	struct FBox SectionLocalBox; // Offset: 0x20 // Size: 0x1c
	bool bEnableCollision; // Offset: 0x3c // Size: 0x01
	bool bSectionVisible; // Offset: 0x3d // Size: 0x01
	char pad_0x3E[0x2]; // Offset: 0x3e // Size: 0x02
};

// Object Name: ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size: 0x34 // Inherited bytes: 0x00
struct FProcMeshVertex {
	// Fields
	struct FVector Position; // Offset: 0x00 // Size: 0x0c
	struct FVector Normal; // Offset: 0x0c // Size: 0x0c
	struct FProcMeshTangent Tangent; // Offset: 0x18 // Size: 0x10
	struct FColor Color; // Offset: 0x28 // Size: 0x04
	struct FVector2D UV0; // Offset: 0x2c // Size: 0x08
};

// Object Name: ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x10 // Inherited bytes: 0x00
struct FProcMeshTangent {
	// Fields
	struct FVector TangentX; // Offset: 0x00 // Size: 0x0c
	bool bFlipTangentY; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

