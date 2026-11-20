#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_RubberBoat_SkillActor.BP_RubberBoat_SkillActor_C
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct ABP_RubberBoat_SkillActor_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct USkeletalMeshComponent* Mesh; // Offset: 0x4b8 // Size: 0x08

	// Functions

	// Object Name: Function BP_RubberBoat_SkillActor.BP_RubberBoat_SkillActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_RubberBoat_SkillActor.BP_RubberBoat_SkillActor_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_RubberBoat_SkillActor.BP_RubberBoat_SkillActor_C.ExecuteUbergraph_BP_RubberBoat_SkillActor
	// Flags: [None]
	void ExecuteUbergraph_BP_RubberBoat_SkillActor(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

