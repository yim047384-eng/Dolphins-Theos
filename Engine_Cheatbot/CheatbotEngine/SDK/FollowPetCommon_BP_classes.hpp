#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass FollowPetCommon_BP.FollowPetCommon_BP_C
// Size: 0x1550 // Inherited bytes: 0x1544
struct AFollowPetCommon_BP_C : ABaseFollowPet_BP_C {
	// Fields
	char pad_0x1544[0x4]; // Offset: 0x1544 // Size: 0x04
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1548 // Size: 0x08

	// Functions

	// Object Name: Function FollowPetCommon_BP.FollowPetCommon_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FollowPetCommon_BP.FollowPetCommon_BP_C.ExecuteUbergraph_FollowPetCommon_BP
	// Flags: [None]
	void ExecuteUbergraph_FollowPetCommon_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

