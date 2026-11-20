#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VehicleSpotContainer.BP_VehicleSpotContainer_C
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct ABP_VehicleSpotContainer_C : AActor {
	// Fields
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x4b0 // Size: 0x08
	struct TArray<struct ABP_VehicleSpotPoint_C*> SpotList; // Offset: 0x4b8 // Size: 0x10

	// Functions

	// Object Name: Function BP_VehicleSpotContainer.BP_VehicleSpotContainer_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

