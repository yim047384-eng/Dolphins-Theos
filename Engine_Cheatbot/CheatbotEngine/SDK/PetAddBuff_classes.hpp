#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetAddBuff.PetAddBuff_C
// Size: 0xac // Inherited bytes: 0xa0
struct UPetAddBuff_C : UBTTask_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa0 // Size: 0x08
	IntProperty BuffID; // Offset: 0xa8 // Size: 0x04

	// Functions

	// Object Name: Function PetAddBuff.PetAddBuff_C.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PetAddBuff.PetAddBuff_C.ExecuteUbergraph_PetAddBuff
	// Flags: [None]
	void ExecuteUbergraph_PetAddBuff(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

