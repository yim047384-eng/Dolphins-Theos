#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass ChangePetState.ChangePetState_C
// Size: 0xaa // Inherited bytes: 0xa0
struct UChangePetState_C : UBTTask_BlueprintBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa0 // Size: 0x08
	enum class EPetState State; // Offset: 0xa8 // Size: 0x01
	enum class EPawnStateChangeType ChangeType; // Offset: 0xa9 // Size: 0x01

	// Functions

	// Object Name: Function ChangePetState.ChangePetState_C.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function ChangePetState.ChangePetState_C.ExecuteUbergraph_ChangePetState
	// Flags: [None]
	void ExecuteUbergraph_ChangePetState(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

