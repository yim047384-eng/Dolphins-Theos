#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct SpinePlugin.SpineEvent
// Size: 0x30 // Inherited bytes: 0x00
struct FSpineEvent {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	StrProperty StringValue; // Offset: 0x10 // Size: 0x10
	IntProperty IntValue; // Offset: 0x20 // Size: 0x04
	float FloatValue; // Offset: 0x24 // Size: 0x04
	float Time; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct SpinePlugin.SpineAnimationStateMixData
// Size: 0x28 // Inherited bytes: 0x00
struct FSpineAnimationStateMixData {
	// Fields
	StrProperty From; // Offset: 0x00 // Size: 0x10
	StrProperty To; // Offset: 0x10 // Size: 0x10
	float Mix; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

