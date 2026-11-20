#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class LuaHotReload.LuaHotReloadHelper
// Size: 0x38 // Inherited bytes: 0x28
struct ULuaHotReloadHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate OnScriptChangedDelegate; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate
	// Flags: [Final|Native|Public]
	void OnLuaFileHotUpdate(StrProperty NotifyMessage); // Offset: 0x10227ee18 // Return & Params: Num(1) Size(0x10)
};

