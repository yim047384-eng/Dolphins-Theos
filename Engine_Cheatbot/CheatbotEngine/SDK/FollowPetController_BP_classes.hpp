#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass FollowPetController_BP.FollowPetController_BP_C
// Size: 0x680 // Inherited bytes: 0x678
struct AFollowPetController_BP_C : ABasePetController_BP_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x678 // Size: 0x08

	// Functions

	// Object Name: Function FollowPetController_BP.FollowPetController_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FollowPetController_BP.FollowPetController_BP_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FollowPetController_BP.FollowPetController_BP_C.ExecuteUbergraph_FollowPetController_BP
	// Flags: [None]
	void ExecuteUbergraph_FollowPetController_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

