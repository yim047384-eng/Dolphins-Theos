#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetService_PetBackLocation.PetService_PetBackLocation_C
// Size: 0xcc // Inherited bytes: 0x90
struct UPetService_PetBackLocation_C : UBTService_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x90 // Size: 0x08
	struct FBlackboardKeySelector FollowPosActor; // Offset: 0x98 // Size: 0x28
	float MinRadius; // Offset: 0xc0 // Size: 0x04
	float MaxRadius; // Offset: 0xc4 // Size: 0x04
	IntProperty Offset; // Offset: 0xc8 // Size: 0x04

	// Functions

	// Object Name: Function PetService_PetBackLocation.PetService_PetBackLocation_C.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function PetService_PetBackLocation.PetService_PetBackLocation_C.ExecuteUbergraph_PetService_PetBackLocation
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PetService_PetBackLocation(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

