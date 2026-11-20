#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UAEStateMachine.TestStatemachine
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct ATestStatemachine : AActor {
	// Fields
	struct UUAEStateMachineComponent* UAEStateMachineComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class UAEStateMachine.UAEStateMachineComponent
// Size: 0x230 // Inherited bytes: 0x178
struct UUAEStateMachineComponent : UActorComponent {
	// Fields
	struct FScriptMulticastDelegate OnBeforeTransientEvent; // Offset: 0x178 // Size: 0x10
	struct FScriptMulticastDelegate OnAfterTransientEvent; // Offset: 0x188 // Size: 0x10
	StrProperty Tag; // Offset: 0x198 // Size: 0x10
	struct TArray<struct UUAEState*> States; // Offset: 0x1a8 // Size: 0x10
	MapProperty Transitions; // Offset: 0x1b8 // Size: 0x50
	struct FUAETransitionState StartState; // Offset: 0x208 // Size: 0x10
	struct FUAETransitionState EndState; // Offset: 0x218 // Size: 0x10
	struct UUAEState* CurrentState; // Offset: 0x228 // Size: 0x08

	// Functions

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Start(); // Offset: 0x10235e1b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.SetTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTag(StrProperty InTag); // Offset: 0x10235e0d4 // Return & Params: Num(1) Size(0x10)

	// Object Name: DelegateFunction UAEStateMachine.UAEStateMachineComponent.OnTransientEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnTransientEvent__DelegateSignature(StrProperty TransientEvent, StrProperty CurrentState, StrProperty TransientToState); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.IsInState
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsInState(StrProperty StateName); // Offset: 0x10235dfe0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEState* GetCurrentState(); // Offset: 0x10235dfc4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.ForceDoEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForceDoEvent(StrProperty EventName); // Offset: 0x10235dee0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.Finish
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Finish(); // Offset: 0x10235decc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.DoEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DoEvent(StrProperty EventName); // Offset: 0x10235dde8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UAEStateMachine.UAEStateMachineComponent.CanDoEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CanDoEvent(StrProperty EventName); // Offset: 0x10235dcf4 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class UAEStateMachine.UAEState
// Size: 0x28 // Inherited bytes: 0x28
struct UUAEState : UObject {
	// Functions

	// Object Name: Function UAEStateMachine.UAEState.Update
	// Flags: [Native|Event|Public|BlueprintEvent]
	void Update(float DeltaTime); // Offset: 0x10235d7a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UAEStateMachine.UAEState.OnLeave
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnLeave(struct UUAEState* TranitToState); // Offset: 0x10235d71c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UAEStateMachine.UAEState.OnEnter
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnEnter(struct UUAEState* PrevState); // Offset: 0x10235d698 // Return & Params: Num(1) Size(0x8)
};

