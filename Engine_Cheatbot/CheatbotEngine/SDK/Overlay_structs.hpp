#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Overlay.OverlayItem
// Size: 0x28 // Inherited bytes: 0x00
struct FOverlayItem {
	// Fields
	struct FTimespan StartTime; // Offset: 0x00 // Size: 0x08
	struct FTimespan EndTime; // Offset: 0x08 // Size: 0x08
	StrProperty Text; // Offset: 0x10 // Size: 0x10
	struct FVector2D Position; // Offset: 0x20 // Size: 0x08
};

