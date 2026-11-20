#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size: 0x0c // Inherited bytes: 0x00
struct FFoliageVertexColorChannelMask {
	// Fields
	char UseMask : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float MaskThreshold; // Offset: 0x04 // Size: 0x04
	char InvertMask : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_1 : 7; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 // Inherited bytes: 0x00
struct FFoliageTypeObject {
	// Fields
	struct UObject* FoliageTypeObject; // Offset: 0x00 // Size: 0x08
	struct UFoliageType* TypeInstance; // Offset: 0x08 // Size: 0x08
	bool bIsAsset; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct UFoliageType_InstancedStaticMesh* Type; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x60 // Inherited bytes: 0x00
struct FProceduralFoliageInstance {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FQuat Rotation; // Offset: 0x10 // Size: 0x10
	struct FVector Normal; // Offset: 0x20 // Size: 0x0c
	float Age; // Offset: 0x2c // Size: 0x04
	float Scale; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct UFoliageType* Type; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x20]; // Offset: 0x40 // Size: 0x20
};

