#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ScriptPlugin.LuaStateGuard
// Size: 0x08 // Inherited bytes: 0x00
struct FLuaStateGuard {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ScriptPlugin.LuaStateWrapperInitParams
// Size: 0xc0 // Inherited bytes: 0x00
struct FLuaStateWrapperInitParams {
	// Fields
	char pad_0x0[0xc0]; // Offset: 0x00 // Size: 0xc0
};

// Object Name: ScriptStruct ScriptPlugin.PlayerInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FPlayerInfo {
	// Fields
	IntProperty Level; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	IntProperty LocalPosition; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FSonInfo mySon; // Offset: 0x20 // Size: 0x18
};

// Object Name: ScriptStruct ScriptPlugin.SonInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FSonInfo {
	// Fields
	IntProperty xlevel; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty xname; // Offset: 0x08 // Size: 0x10
};

