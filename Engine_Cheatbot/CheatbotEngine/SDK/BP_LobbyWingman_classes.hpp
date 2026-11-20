#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_LobbyWingman.BP_LobbyWingman_C
// Size: 0x59c // Inherited bytes: 0x578
struct ABP_LobbyWingman_C : ASTExtraLobbyWingman {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x578 // Size: 0x08
	struct UWingmanAvatarComp_BP_C* WingmanAvatarComp_BP; // Offset: 0x580 // Size: 0x08
	float invincible; // Offset: 0x588 // Size: 0x04
	float Freq; // Offset: 0x58c // Size: 0x04
	float Speed; // Offset: 0x590 // Size: 0x04
	bool isNeedUpdate; // Offset: 0x594 // Size: 0x01
	char pad_0x595[0x3]; // Offset: 0x595 // Size: 0x03
	IntProperty ShowType; // Offset: 0x598 // Size: 0x04

	// Functions

	// Object Name: Function BP_LobbyWingman.BP_LobbyWingman_C.SetHighLight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetHighLight(float invincible, float Freq, float Speed); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_LobbyWingman.BP_LobbyWingman_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_LobbyWingman.BP_LobbyWingman_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_LobbyWingman.BP_LobbyWingman_C.ExecuteUbergraph_BP_LobbyWingman
	// Flags: [None]
	void ExecuteUbergraph_BP_LobbyWingman(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

