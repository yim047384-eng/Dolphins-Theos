#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VH_Buggy.BP_VH_Buggy_C
// Size: 0x2238 // Inherited bytes: 0x2218
struct ABP_VH_Buggy_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct UBP_Battle_VehicleLicensePlateComponent_C* BP_Battle_VehicleLicensePlateComponent; // Offset: 0x2218 // Size: 0x08
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2220 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Passenger; // Offset: 0x2228 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2230 // Size: 0x08

	// Functions

	// Object Name: Function BP_VH_Buggy.BP_VH_Buggy_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

