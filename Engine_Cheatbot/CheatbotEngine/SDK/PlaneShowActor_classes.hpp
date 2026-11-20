#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PlaneShowActor.PlaneShowActor_C
// Size: 0x581 // Inherited bytes: 0x570
struct APlaneShowActor_C : ALuaActor {
	// Fields
	struct UCameraComponent* Camera; // Offset: 0x570 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x578 // Size: 0x08
	bool HasViewSwitchUI; // Offset: 0x580 // Size: 0x01

	// Functions

	// Object Name: Function PlaneShowActor.PlaneShowActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

