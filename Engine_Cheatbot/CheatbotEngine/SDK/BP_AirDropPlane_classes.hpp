#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_AirDropPlane.BP_AirDropPlane_C
// Size: 0x678 // Inherited bytes: 0x650
struct ABP_AirDropPlane_C : AAirDropPlane {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x650 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0x658 // Size: 0x08
	struct UStaticMeshComponent* Aircraft; // Offset: 0x660 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x668 // Size: 0x08
	struct UAkAudioEvent* AircraftEvent; // Offset: 0x670 // Size: 0x08

	// Functions

	// Object Name: Function BP_AirDropPlane.BP_AirDropPlane_C.StartSymulateFly
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StartSymulateFly(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_AirDropPlane.BP_AirDropPlane_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_AirDropPlane.BP_AirDropPlane_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_AirDropPlane.BP_AirDropPlane_C.ExecuteUbergraph_BP_AirDropPlane
	// Flags: [None]
	void ExecuteUbergraph_BP_AirDropPlane(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

