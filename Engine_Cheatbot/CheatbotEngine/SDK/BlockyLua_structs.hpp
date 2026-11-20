#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct BlockyLua.IntArrayWrapper
// Size: 0x10 // Inherited bytes: 0x00
struct FIntArrayWrapper {
	// Fields
	struct TArray<IntProperty> Values; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLua.SlotData
// Size: 0x20 // Inherited bytes: 0x00
struct FSlotData {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x18]; // Offset: 0x08 // Size: 0x18
};

