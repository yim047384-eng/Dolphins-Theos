#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass WaterSwimObject_Mylta.WaterSwimObject_Mylta_C
// Size: 0xba8 // Inherited bytes: 0xb99
struct AWaterSwimObject_Mylta_C : AWaterSwimObject_C {
	// Fields
	char pad_0xB99[0x7]; // Offset: 0xb99 // Size: 0x07
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xba0 // Size: 0x08

	// Functions

	// Object Name: Function WaterSwimObject_Mylta.WaterSwimObject_Mylta_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject_Mylta.WaterSwimObject_Mylta_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject_Mylta.WaterSwimObject_Mylta_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject_Mylta.WaterSwimObject_Mylta_C.ExecuteUbergraph_WaterSwimObject_Mylta
	// Flags: [None]
	void ExecuteUbergraph_WaterSwimObject_Mylta(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

