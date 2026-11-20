#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// Size: 0x2d8 // Inherited bytes: 0x78
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	// Fields
	struct UPhysicsAsset* OverridePhysicsAsset; // Offset: 0x78 // Size: 0x08
	struct FVector OverrideWorldGravity; // Offset: 0x80 // Size: 0x0c
	struct FVector ExternalForce; // Offset: 0x8c // Size: 0x0c
	enum class ECollisionChannel OverlapChannel; // Offset: 0x98 // Size: 0x01
	bool bEnableWorldGeometry; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x2]; // Offset: 0x9a // Size: 0x02
	enum class ESimulationSpace SimulationSpace; // Offset: 0x9c // Size: 0x04
	bool bOverrideWorldGravity; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	float CachedBoundsScale; // Offset: 0xa4 // Size: 0x04
	bool bComponentSpaceSimulation; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x22f]; // Offset: 0xa9 // Size: 0x22f
};

