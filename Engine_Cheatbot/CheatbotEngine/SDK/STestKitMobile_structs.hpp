#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct STestKitMobile.STestMobileFillOptions
// Size: 0x02 // Inherited bytes: 0x00
struct FSTestMobileFillOptions {
	// Fields
	bool bCommit; // Offset: 0x00 // Size: 0x01
	bool bClear; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct STestKitMobile.STestMobileDragOptions
// Size: 0x08 // Inherited bytes: 0x00
struct FSTestMobileDragOptions {
	// Fields
	IntProperty Steps; // Offset: 0x00 // Size: 0x04
	bool bTouch; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct STestKitMobile.STestMobileTapOptions
// Size: 0x01 // Inherited bytes: 0x00
struct FSTestMobileTapOptions {
	// Fields
	bool bTouch; // Offset: 0x00 // Size: 0x01
};

