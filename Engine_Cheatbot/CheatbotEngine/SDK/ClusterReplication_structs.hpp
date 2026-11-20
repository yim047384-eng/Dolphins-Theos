#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ClusterReplication.ClusterAOIConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FClusterAOIConfig {
	// Fields
	float AOIClusterSize; // Offset: 0x00 // Size: 0x04
	float AOIClusterTolerantSize; // Offset: 0x04 // Size: 0x04
	IntProperty AOIClusterRelativeIterator; // Offset: 0x08 // Size: 0x04
	int16_t SelectedGroup; // Offset: 0x0c // Size: 0x02
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	struct FVector AOIMinPoint; // Offset: 0x10 // Size: 0x0c
	struct FVector AOIMaxPoint; // Offset: 0x1c // Size: 0x0c
	struct TArray<int16_t> AOIEntityCounts; // Offset: 0x28 // Size: 0x10
};

