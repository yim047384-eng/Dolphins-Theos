#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28 // Inherited bytes: 0x00
struct FAutoCompleteCommand {
	// Fields
	StrProperty Command; // Offset: 0x00 // Size: 0x10
	StrProperty Desc; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct EngineSettings.GameModeName
// Size: 0x28 // Inherited bytes: 0x00
struct FGameModeName {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct FSoftClassPath GameMode; // Offset: 0x10 // Size: 0x18
};

