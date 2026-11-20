#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetSpecifiedAnim.PetSpecifiedAnim_C
// Size: 0xb0 // Inherited bytes: 0xa0
struct UPetSpecifiedAnim_C : UBTTask_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa0 // Size: 0x08
	struct FName AnimationID; // Offset: 0xa8 // Size: 0x08

	// Functions

	// Object Name: Function PetSpecifiedAnim.PetSpecifiedAnim_C.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PetSpecifiedAnim.PetSpecifiedAnim_C.ExecuteUbergraph_PetSpecifiedAnim
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PetSpecifiedAnim(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

