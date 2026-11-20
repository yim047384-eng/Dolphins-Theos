#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetService_IsBlocked.PetService_IsBlocked_C
// Size: 0xcc // Inherited bytes: 0x90
struct UPetService_IsBlocked_C : UBTService_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x90 // Size: 0x08
	float CacheBlockedDuration; // Offset: 0x98 // Size: 0x04
	float SpeedThreshold; // Offset: 0x9c // Size: 0x04
	struct FBlackboardKeySelector BBK; // Offset: 0xa0 // Size: 0x28
	float BlockedDuration; // Offset: 0xc8 // Size: 0x04

	// Functions

	// Object Name: Function PetService_IsBlocked.PetService_IsBlocked_C.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function PetService_IsBlocked.PetService_IsBlocked_C.ExecuteUbergraph_PetService_IsBlocked
	// Flags: [None]
	void ExecuteUbergraph_PetService_IsBlocked(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

