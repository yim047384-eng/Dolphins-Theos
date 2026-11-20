#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct PlanPHRuntime.StructureData
// Size: 0x14 // Inherited bytes: 0x00
struct FStructureData {
	// Fields
	struct FVector2D Position; // Offset: 0x00 // Size: 0x08
	float Thickness; // Offset: 0x08 // Size: 0x04
	enum class EHomeAssetType AssetType; // Offset: 0x0c // Size: 0x01
	enum class EDirectionType Direction; // Offset: 0x0d // Size: 0x01
	char OccupiedX; // Offset: 0x0e // Size: 0x01
	char OccupiedY; // Offset: 0x0f // Size: 0x01
	char PaintNum; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct PlanPHRuntime.PlanPH_CommonOccupy
// Size: 0x28 // Inherited bytes: 0x00
struct FPlanPH_CommonOccupy {
	// Fields
	IntProperty LandId; // Offset: 0x00 // Size: 0x04
	bool bOccupied; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty BeginTime; // Offset: 0x08 // Size: 0x04
	IntProperty EndTime; // Offset: 0x0c // Size: 0x04
	StrProperty PlayerUID; // Offset: 0x10 // Size: 0x10
	bool bIsWedding; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

