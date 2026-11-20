#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct TPlanGame.PreciousItem
// Size: 0x0c // Inherited bytes: 0x00
struct FPreciousItem {
	// Fields
	IntProperty TypeSpecificID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	IntProperty SellPrice; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct TPlanGame.XTBetrayInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FXTBetrayInfo {
	// Fields
	bool IsInBetray; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty BetrayTime; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct TPlanGame.SyncRelevantPlayerTask
// Size: 0x18 // Inherited bytes: 0x00
struct FSyncRelevantPlayerTask {
	// Fields
	IntProperty TaskID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct AActor*> TaskTargets; // Offset: 0x08 // Size: 0x10
};

