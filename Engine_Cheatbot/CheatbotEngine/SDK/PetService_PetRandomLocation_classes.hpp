#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetService_PetRandomLocation.PetService_PetRandomLocation_C
// Size: 0xc8 // Inherited bytes: 0x90
struct UPetService_PetRandomLocation_C : UBTService_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x90 // Size: 0x08
	struct FBlackboardKeySelector FollowPosActor; // Offset: 0x98 // Size: 0x28
	float MinRadius; // Offset: 0xc0 // Size: 0x04
	float MaxRadius; // Offset: 0xc4 // Size: 0x04

	// Functions

	// Object Name: Function PetService_PetRandomLocation.PetService_PetRandomLocation_C.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function PetService_PetRandomLocation.PetService_PetRandomLocation_C.ExecuteUbergraph_PetService_PetRandomLocation
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PetService_PetRandomLocation(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

