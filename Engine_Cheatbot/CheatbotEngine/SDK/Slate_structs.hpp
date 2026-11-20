#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Slate.InputChord
// Size: 0x20 // Inherited bytes: 0x00
struct FInputChord {
	// Fields
	struct FKey Key; // Offset: 0x00 // Size: 0x18
	char bShift : 1; // Offset: 0x18 // Size: 0x01
	char bCtrl : 1; // Offset: 0x18 // Size: 0x01
	char bAlt : 1; // Offset: 0x18 // Size: 0x01
	char bCmd : 1; // Offset: 0x18 // Size: 0x01
	char pad_0x18_4 : 4; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct Slate.Anchors
// Size: 0x10 // Inherited bytes: 0x00
struct FAnchors {
	// Fields
	struct FVector2D Minimum; // Offset: 0x00 // Size: 0x08
	struct FVector2D Maximum; // Offset: 0x08 // Size: 0x08
};

