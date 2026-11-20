#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_LootTruck.VH_LootTruck_C
// Size: 0x2238 // Inherited bytes: 0x2218
struct AVH_LootTruck_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2218 // Size: 0x08
	struct UBoxComponent* VaultBox; // Offset: 0x2220 // Size: 0x08
	struct UBoxComponent* VehicleTrigger; // Offset: 0x2228 // Size: 0x08
	struct UVehicleAIComponent* VehicleAI; // Offset: 0x2230 // Size: 0x08

	// Functions

	// Object Name: Function VH_LootTruck.VH_LootTruck_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_LootTruck.VH_LootTruck_C.OnBoostingChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnBoostingChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_LootTruck.VH_LootTruck_C.ExecuteUbergraph_VH_LootTruck
	// Flags: [None]
	void ExecuteUbergraph_VH_LootTruck(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

