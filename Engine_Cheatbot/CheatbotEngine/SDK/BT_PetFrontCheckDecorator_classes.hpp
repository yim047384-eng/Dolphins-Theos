#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BT_PetFrontCheckDecorator.BT_PetFrontCheckDecorator_C
// Size: 0x9c // Inherited bytes: 0x98
struct UBT_PetFrontCheckDecorator_C : UBTDecorator_BlueprintBase {
	// Fields
	float EscapeAngle; // Offset: 0x98 // Size: 0x04

	// Functions

	// Object Name: Function BT_PetFrontCheckDecorator.BT_PetFrontCheckDecorator_C.PerformConditionCheckAI
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)
};

