#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct SpawnSystem.STSpawnParam
// Size: 0xd0 // Inherited bytes: 0x00
struct FSTSpawnParam {
	// Fields
	struct FUnitConfig UnitConfig; // Offset: 0x00 // Size: 0x78
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08
	struct FTransform Transform; // Offset: 0x80 // Size: 0x30
	IntProperty AttributeID; // Offset: 0xb0 // Size: 0x04
	uint32_t SpawnerID; // Offset: 0xb4 // Size: 0x04
	StrProperty SpotID; // Offset: 0xb8 // Size: 0x10
	char pad_0xC8[0x8]; // Offset: 0xc8 // Size: 0x08
};

// Object Name: ScriptStruct SpawnSystem.UnitConfig
// Size: 0x78 // Inherited bytes: 0x00
struct FUnitConfig {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	IntProperty ConfigID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FUnitInitConfig> UnitInitConfig; // Offset: 0x18 // Size: 0x10
	IntProperty AttrID; // Offset: 0x28 // Size: 0x04
	IntProperty DropID; // Offset: 0x2c // Size: 0x04
	struct FSoftClassPath BPPath; // Offset: 0x30 // Size: 0x18
	StrProperty StrBPPath; // Offset: 0x48 // Size: 0x10
	bool bTraceGround; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
	StrProperty PreferSpotID; // Offset: 0x60 // Size: 0x10
	IntProperty UnitIndex; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct SpawnSystem.UnitInitConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FUnitInitConfig {
	// Fields
	struct FName BlackboardKey; // Offset: 0x00 // Size: 0x08
	StrProperty Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct SpawnSystem.SpawnSpotInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FSpawnSpotInfo {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	IntProperty SpecieSquadIndex; // Offset: 0x30 // Size: 0x04
	IntProperty SpecieUnitIndex; // Offset: 0x34 // Size: 0x04
	StrProperty SpotID; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FUnitInitConfig> SpotInitConfig; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct SpawnSystem.SpawnArea
// Size: 0x20 // Inherited bytes: 0x00
struct FSpawnArea {
	// Fields
	struct FVector CenterLocation; // Offset: 0x00 // Size: 0x0c
	enum class ESTSpawnerVolume Shape; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FVector ShapeSize; // Offset: 0x10 // Size: 0x0c
	bool bInsideArea; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct SpawnSystem.SpeciesRatioStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FSpeciesRatioStruct {
	// Fields
	struct TArray<struct FUnitRatio> UnitRatios; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct SpawnSystem.UnitRatio
// Size: 0x80 // Inherited bytes: 0x00
struct FUnitRatio {
	// Fields
	struct FUnitConfig Unit; // Offset: 0x00 // Size: 0x78
	float Ratio; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct SpawnSystem.GroupConfig
// Size: 0x28 // Inherited bytes: 0x00
struct FGroupConfig {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FWeightedSquad> Squads; // Offset: 0x10 // Size: 0x10
	IntProperty Weight; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct SpawnSystem.WeightedSquad
// Size: 0x08 // Inherited bytes: 0x00
struct FWeightedSquad {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	IntProperty Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct SpawnSystem.SquadConfig
// Size: 0x40 // Inherited bytes: 0x00
struct FSquadConfig {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FWeightedUnit> Units; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FUnitInitConfig> SquadInitConfig; // Offset: 0x20 // Size: 0x10
	StrProperty SuggestNumber; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct SpawnSystem.WeightedUnit
// Size: 0x08 // Inherited bytes: 0x00
struct FWeightedUnit {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	IntProperty Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct SpawnSystem.STSpawnerDebugData
// Size: 0x01 // Inherited bytes: 0x00
struct FSTSpawnerDebugData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

