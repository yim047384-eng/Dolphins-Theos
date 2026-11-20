#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_KillerTracker.BP_KillerTracker_C
// Size: 0x568 // Inherited bytes: 0x550
struct ABP_KillerTracker_C : AKillerTracker {
	// Fields
	struct UCameraComponent* Camera; // Offset: 0x550 // Size: 0x08
	struct USpringArmComponent* SpringArm; // Offset: 0x558 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x560 // Size: 0x08

	// Functions

	// Object Name: Function BP_KillerTracker.BP_KillerTracker_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

