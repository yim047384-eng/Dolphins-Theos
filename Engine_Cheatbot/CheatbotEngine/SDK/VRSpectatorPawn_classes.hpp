#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VRSpectatorPawn.VRSpectatorPawn_C
// Size: 0x561 // Inherited bytes: 0x548
struct AVRSpectatorPawn_C : ASTSpectatorPawn {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x548 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x550 // Size: 0x08
	struct USpringArmComponent* SpringArm; // Offset: 0x558 // Size: 0x08
	bool IsInit; // Offset: 0x560 // Size: 0x01

	// Functions

	// Object Name: Function VRSpectatorPawn.VRSpectatorPawn_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VRSpectatorPawn.VRSpectatorPawn_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VRSpectatorPawn.VRSpectatorPawn_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VRSpectatorPawn.VRSpectatorPawn_C.ExecuteUbergraph_VRSpectatorPawn
	// Flags: [None]
	void ExecuteUbergraph_VRSpectatorPawn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

