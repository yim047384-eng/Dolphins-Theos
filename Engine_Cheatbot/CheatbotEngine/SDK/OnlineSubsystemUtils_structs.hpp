#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0xb8 // Inherited bytes: 0x00
struct FBlueprintSessionResult {
	// Fields
	char pad_0x0[0xb8]; // Offset: 0x00 // Size: 0xb8
};

// Object Name: ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40 // Inherited bytes: 0x00
struct FPIELoginSettingsInternal {
	// Fields
	StrProperty ID; // Offset: 0x00 // Size: 0x10
	StrProperty Token; // Offset: 0x10 // Size: 0x10
	StrProperty Type; // Offset: 0x20 // Size: 0x10
	struct TArray<char> TokenBytes; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x30 // Inherited bytes: 0x00
struct FPartyReservation {
	// Fields
	IntProperty TeamNum; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FUniqueNetIdRepl PartyLeader; // Offset: 0x08 // Size: 0x18
	struct TArray<struct FPlayerReservation> PartyMembers; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x30 // Inherited bytes: 0x00
struct FPlayerReservation {
	// Fields
	struct FUniqueNetIdRepl UniqueId; // Offset: 0x00 // Size: 0x18
	StrProperty ValidationStr; // Offset: 0x18 // Size: 0x10
	float ElapsedTime; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

