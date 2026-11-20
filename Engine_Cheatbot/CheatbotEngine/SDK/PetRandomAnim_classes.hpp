#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetRandomAnim.PetRandomAnim_C
// Size: 0xa8 // Inherited bytes: 0xa0
struct UPetRandomAnim_C : UBTTask_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa0 // Size: 0x08

	// Functions

	// Object Name: Function PetRandomAnim.PetRandomAnim_C.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PetRandomAnim.PetRandomAnim_C.ExecuteUbergraph_PetRandomAnim
	// Flags: [None]
	void ExecuteUbergraph_PetRandomAnim(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

