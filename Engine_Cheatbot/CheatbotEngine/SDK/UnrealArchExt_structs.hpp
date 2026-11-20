#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct UnrealArchExt.UserWidgetState
// Size: 0x28 // Inherited bytes: 0x00
struct FUserWidgetState {
	// Fields
	StrProperty WidgetName; // Offset: 0x00 // Size: 0x10
	struct FName ContainerName; // Offset: 0x10 // Size: 0x08
	IntProperty ZOrder; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UUAEUserWidget* Widget; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct UnrealArchExt.UnixTimestampCallback
// Size: 0x18 // Inherited bytes: 0x00
struct FUnixTimestampCallback {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct UnrealArchExt.LogicManagerCreateParams
// Size: 0x18 // Inherited bytes: 0x00
struct FLogicManagerCreateParams {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct UObject* pLogicManagerClass; // Offset: 0x10 // Size: 0x08
};

