#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_CharacterCarryBackComp.BP_CharacterCarryBackComp_C
// Size: 0x398 // Inherited bytes: 0x388
struct UBP_CharacterCarryBackComp_C : USTCharacterCarryBackComp {
	// Fields
	struct TArray<struct FVector> PutDownLocationOffset; // Offset: 0x388 // Size: 0x10

	// Functions

	// Object Name: Function BP_CharacterCarryBackComp.BP_CharacterCarryBackComp_C.RPC_ServerManualBreakCarryBackState
	// Flags: [Net|Public|NetServer]
	void RPC_ServerManualBreakCarryBackState(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CharacterCarryBackComp.BP_CharacterCarryBackComp_C.FindFreedomLocationAndRotation
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void FindFreedomLocationAndRotation(struct ACharacter* Character, bool& bValid, struct FVector& Location, struct FRotator& Rotation); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x24)
};

