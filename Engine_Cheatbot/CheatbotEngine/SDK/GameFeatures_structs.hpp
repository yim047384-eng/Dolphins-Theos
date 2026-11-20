#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct GameFeatures.GameFeatureComponentEntry
// Size: 0x58 // Inherited bytes: 0x00
struct FGameFeatureComponentEntry {
	// Fields
	struct UClass* ActorClass; // Offset: 0x00 // Size: 0x28
	struct UClass* ComponentClass; // Offset: 0x28 // Size: 0x28
	char bClientComponent : 1; // Offset: 0x50 // Size: 0x01
	char bServerComponent : 1; // Offset: 0x50 // Size: 0x01
	char pad_0x50_2 : 6; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// Size: 0x70 // Inherited bytes: 0x00
struct FGameFeaturePluginStateMachineProperties {
	// Fields
	char pad_0x0[0x68]; // Offset: 0x00 // Size: 0x68
	struct UGameFeatureData* GameFeatureData; // Offset: 0x68 // Size: 0x08
};

