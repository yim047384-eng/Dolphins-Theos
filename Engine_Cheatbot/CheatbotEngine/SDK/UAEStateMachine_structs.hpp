#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct UAEStateMachine.UAETransitionState
// Size: 0x10 // Inherited bytes: 0x00
struct FUAETransitionState {
	// Fields
	StrProperty StateName; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct UAEStateMachine.UAEStateMachineTransition
// Size: 0x28 // Inherited bytes: 0x00
struct FUAEStateMachineTransition {
	// Fields
	struct TArray<struct FUAETransitionState> TransiteFromStates; // Offset: 0x00 // Size: 0x10
	struct FUAETransitionState TransitToState; // Offset: 0x10 // Size: 0x10
	float AutoFiredDelayTime; // Offset: 0x20 // Size: 0x04
	bool AutoFiredForcedTransit; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct UAEStateMachine.UAEStatesGather
// Size: 0x10 // Inherited bytes: 0x00
struct FUAEStatesGather {
	// Fields
	struct TArray<struct UUAEState*> States; // Offset: 0x00 // Size: 0x10
};

