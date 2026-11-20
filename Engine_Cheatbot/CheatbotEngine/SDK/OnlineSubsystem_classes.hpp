#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class OnlineSubsystem.NamedInterfaces
// Size: 0x60 // Inherited bytes: 0x28
struct UNamedInterfaces : UObject {
	// Fields
	struct TArray<struct FNamedInterface> NamedInterfaces; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x18]; // Offset: 0x48 // Size: 0x18
};

// Object Name: Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UTurnBasedMatchInterface : UInterface {
	// Functions

	// Object Name: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	// Flags: [Event|Public|BlueprintEvent]
	void OnMatchReceivedTurn(StrProperty Match, bool bDidBecomeActive); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	// Flags: [Event|Public|BlueprintEvent]
	void OnMatchEnded(StrProperty Match); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)
};

