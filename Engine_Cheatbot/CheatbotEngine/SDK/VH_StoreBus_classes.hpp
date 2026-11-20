#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_StoreBus.VH_StoreBus_C
// Size: 0x2254 // Inherited bytes: 0x2218
struct AVH_StoreBus_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2218 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x2220 // Size: 0x08
	struct USphereComponent* Sphere; // Offset: 0x2228 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersMR; // Offset: 0x2230 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersML; // Offset: 0x2238 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersFR; // Offset: 0x2240 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2248 // Size: 0x08
	IntProperty StoreID; // Offset: 0x2250 // Size: 0x04

	// Functions

	// Object Name: Function VH_StoreBus.VH_StoreBus_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_StoreBus.VH_StoreBus_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_StoreBus.VH_StoreBus_C.OnBoostingChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnBoostingChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_StoreBus.VH_StoreBus_C.ExecuteUbergraph_VH_StoreBus
	// Flags: [None]
	void ExecuteUbergraph_VH_StoreBus(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

