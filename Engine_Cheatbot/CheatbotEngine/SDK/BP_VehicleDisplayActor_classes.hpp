#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VehicleDisplayActor.BP_VehicleDisplayActor_C
// Size: 0x6d4 // Inherited bytes: 0x6c4
struct ABP_VehicleDisplayActor_C : AInteractiveActorTemplate_C {
	// Fields
	char pad_0x6C4[0x4]; // Offset: 0x6c4 // Size: 0x04
	struct USkeletalMeshComponent* SkeletalMesh; // Offset: 0x6c8 // Size: 0x08
	IntProperty DIsplayItemID; // Offset: 0x6d0 // Size: 0x04

	// Functions

	// Object Name: Function BP_VehicleDisplayActor.BP_VehicleDisplayActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

