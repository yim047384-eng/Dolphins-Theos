#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass wingmanAnimationBP_DT.wingmanAnimationBP_DT_C
// Size: 0x530 // Inherited bytes: 0x3f0
struct UwingmanAnimationBP_DT_C : UAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x3f0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_2C92ABEF44108DF4306768A9A8900956; // Offset: 0x3f8 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94AB669544B9B14331BD1DBCC1F1B588; // Offset: 0x448 // Size: 0x70
	struct FAnimNode_Slot AnimGraphNode_Slot_8CFE89D84A15090307F81DAECC426213; // Offset: 0x4b8 // Size: 0x70
	struct UAnimMontage* NewVar_1; // Offset: 0x528 // Size: 0x08

	// Functions

	// Object Name: Function wingmanAnimationBP_DT.wingmanAnimationBP_DT_C.BlueprintBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function wingmanAnimationBP_DT.wingmanAnimationBP_DT_C.ExecuteUbergraph_wingmanAnimationBP_DT
	// Flags: [None]
	void ExecuteUbergraph_wingmanAnimationBP_DT(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

