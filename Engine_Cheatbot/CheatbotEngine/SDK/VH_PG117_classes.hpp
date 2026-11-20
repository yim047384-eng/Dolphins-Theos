#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_PG117.VH_PG117_C
// Size: 0x1da8 // Inherited bytes: 0x1d89
struct AVH_PG117_C : ABP_StextraBoatBase_C {
	// Fields
	char pad_0x1D89[0x7]; // Offset: 0x1d89 // Size: 0x07
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x1d90 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Passengers; // Offset: 0x1d98 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x1da0 // Size: 0x08

	// Functions

	// Object Name: Function VH_PG117.VH_PG117_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

