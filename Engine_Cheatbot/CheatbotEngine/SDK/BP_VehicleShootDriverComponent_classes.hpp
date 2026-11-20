#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C
// Size: 0x400 // Inherited bytes: 0x3f8
struct UBP_VehicleShootDriverComponent_C : UVehicleShootDriverComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x3f8 // Size: 0x08

	// Functions

	// Object Name: Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ExecuteUbergraph_BP_VehicleShootDriverComponent
	// Flags: [None]
	void ExecuteUbergraph_BP_VehicleShootDriverComponent(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

