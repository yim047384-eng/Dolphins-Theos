#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C
// Size: 0x1a0 // Inherited bytes: 0x28
struct UBP_SAVEGAME_UIElemLayout_C : USaveGame {
	// Fields
	MapProperty LayoutDetailDict1; // Offset: 0x28 // Size: 0x50
	MapProperty LayoutDetailDict2; // Offset: 0x78 // Size: 0x50
	MapProperty LayoutDetailDict3; // Offset: 0xc8 // Size: 0x50
	bool IsDataValid1; // Offset: 0x118 // Size: 0x01
	bool IsDataValid2; // Offset: 0x119 // Size: 0x01
	bool IsDataValid3; // Offset: 0x11a // Size: 0x01
	char pad_0x11B[0x1]; // Offset: 0x11b // Size: 0x01
	float RushTriggerLength1; // Offset: 0x11c // Size: 0x04
	float RushTriggerLength2; // Offset: 0x120 // Size: 0x04
	float RushTriggerLength3; // Offset: 0x124 // Size: 0x04
	StrProperty SaveSlotName; // Offset: 0x128 // Size: 0x10
	StrProperty LayoutName1; // Offset: 0x138 // Size: 0x10
	StrProperty LayoutName2; // Offset: 0x148 // Size: 0x10
	StrProperty LayoutName3; // Offset: 0x158 // Size: 0x10
	IntProperty TimeTag; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x4]; // Offset: 0x16c // Size: 0x04
	struct TArray<IntProperty> InvalidArray1; // Offset: 0x170 // Size: 0x10
	struct TArray<IntProperty> InvalidArray2; // Offset: 0x180 // Size: 0x10
	struct TArray<IntProperty> InvalidArray3; // Offset: 0x190 // Size: 0x10
};

