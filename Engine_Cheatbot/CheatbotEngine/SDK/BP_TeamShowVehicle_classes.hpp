#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_TeamShowVehicle.BP_TeamShowVehicle_C
// Size: 0x6a8 // Inherited bytes: 0x69c
struct ABP_TeamShowVehicle_C : ABP_LobbyVehicle_C {
	// Fields
	char pad_0x69C[0x4]; // Offset: 0x69c // Size: 0x04
	struct UVehicleAdvanceAvatarComp_BP_C* VehicleAdvanceAvatarComp_BP; // Offset: 0x6a0 // Size: 0x08

	// Functions

	// Object Name: Function BP_TeamShowVehicle.BP_TeamShowVehicle_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

