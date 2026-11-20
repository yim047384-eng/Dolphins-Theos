#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_SwimController.BP_SwimController_C
// Size: 0x3d0 // Inherited bytes: 0x3c8
struct UBP_SwimController_C : UPlayerSwimComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x3c8 // Size: 0x08

	// Functions

	// Object Name: Function BP_SwimController.BP_SwimController_C.EnterWater_BluePrint
	// Flags: [Event|Public|BlueprintEvent]
	void EnterWater_BluePrint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_SwimController.BP_SwimController_C.BP_UnderWaterStateChanged
	// Flags: [Event|Public|BlueprintEvent]
	void BP_UnderWaterStateChanged(bool bEnterWater); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_SwimController(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

