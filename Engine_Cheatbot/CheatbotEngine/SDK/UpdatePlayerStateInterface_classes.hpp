#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass UpdatePlayerStateInterface.UpdatePlayerStateInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct UUpdatePlayerStateInterface_C : UInterface {
	// Functions

	// Object Name: Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.UpdatePlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdatePlayerState(enum class ExtraPlayerLiveState State, struct ACharacter* OwnerCharacter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.InitPlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

