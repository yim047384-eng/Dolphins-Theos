#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_MotorcycleCart.VH_MotorcycleCart_C
// Size: 0x2248 // Inherited bytes: 0x2218
struct AVH_MotorcycleCart_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2218 // Size: 0x08
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2220 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengerR; // Offset: 0x2228 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengerL; // Offset: 0x2230 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2238 // Size: 0x08
	struct UVehicleMotorbikeComponent* VehicleMotorbike; // Offset: 0x2240 // Size: 0x08

	// Functions

	// Object Name: Function VH_MotorcycleCart.VH_MotorcycleCart_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_MotorcycleCart.VH_MotorcycleCart_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VH_MotorcycleCart.VH_MotorcycleCart_C.ExecuteUbergraph_VH_MotorcycleCart
	// Flags: [None]
	void ExecuteUbergraph_VH_MotorcycleCart(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

