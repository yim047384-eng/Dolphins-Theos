#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct PhotonDestructible.PDSurfaceNetData
// Size: 0x18 // Inherited bytes: 0x00
struct FPDSurfaceNetData {
	// Fields
	struct TArray<struct FPhotonDestructibleSurfaceHitData> SurfaceHitData; // Offset: 0x00 // Size: 0x10
	IntProperty HitDataCount; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct PhotonDestructible.PhotonDestructibleSurfaceHitData
// Size: 0x18 // Inherited bytes: 0x00
struct FPhotonDestructibleSurfaceHitData {
	// Fields
	uint16_t InstanceIndex; // Offset: 0x00 // Size: 0x02
	enum class EPhotonDestructibleSurfaceHitType HitType; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	IntProperty HitParam; // Offset: 0x04 // Size: 0x04
	IntProperty HitParam2; // Offset: 0x08 // Size: 0x04
	struct FVector HitPoint; // Offset: 0x0c // Size: 0x0c
};

