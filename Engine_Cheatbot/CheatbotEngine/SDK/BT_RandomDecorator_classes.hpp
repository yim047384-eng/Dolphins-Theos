#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BT_RandomDecorator.BT_RandomDecorator_C
// Size: 0xa4 // Inherited bytes: 0x98
struct UBT_RandomDecorator_C : UBTDecorator_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x98 // Size: 0x08
	float Prob; // Offset: 0xa0 // Size: 0x04

	// Functions

	// Object Name: Function BT_RandomDecorator.BT_RandomDecorator_C.PerformConditionCheck
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PerformConditionCheck(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BT_RandomDecorator.BT_RandomDecorator_C.ExecuteUbergraph_BT_RandomDecorator
	// Flags: [None]
	void ExecuteUbergraph_BT_RandomDecorator(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

