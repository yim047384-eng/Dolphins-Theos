#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x30 // Inherited bytes: 0x00
struct FClothCollisionData {
	// Fields
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x18 // Inherited bytes: 0x00
struct FClothCollisionPrim_Convex {
	// Fields
	struct TArray<struct FPlane> Planes; // Offset: 0x00 // Size: 0x10
	IntProperty BoneIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x08 // Inherited bytes: 0x00
struct FClothCollisionPrim_SphereConnection {
	// Fields
	IntProperty SphereIndices[0x2]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14 // Inherited bytes: 0x00
struct FClothCollisionPrim_Sphere {
	// Fields
	IntProperty BoneIndex; // Offset: 0x00 // Size: 0x04
	float Radius; // Offset: 0x04 // Size: 0x04
	struct FVector LocalPosition; // Offset: 0x08 // Size: 0x0c
};

