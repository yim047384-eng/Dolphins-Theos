#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BT_BoolValueCheck.BT_BoolValueCheck_C
// Size: 0xc9 // Inherited bytes: 0x98
struct UBT_BoolValueCheck_C : UBTDecorator_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x98 // Size: 0x08
	struct FBlackboardKeySelector BoolKey; // Offset: 0xa0 // Size: 0x28
	bool TargetValue; // Offset: 0xc8 // Size: 0x01

	// Functions

	// Object Name: Function BT_BoolValueCheck.BT_BoolValueCheck_C.PerformConditionCheck
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PerformConditionCheck(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BT_BoolValueCheck.BT_BoolValueCheck_C.ExecuteUbergraph_BT_BoolValueCheck
	// Flags: [None]
	void ExecuteUbergraph_BT_BoolValueCheck(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

