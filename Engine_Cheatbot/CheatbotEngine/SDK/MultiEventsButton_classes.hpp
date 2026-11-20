#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass MultiEventsButton.MultiEventsButton_C
// Size: 0x5a0 // Inherited bytes: 0x580
struct UMultiEventsButton_C : UUAECommonMultiEventsButton {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x580 // Size: 0x08
	bool bHolding; // Offset: 0x588 // Size: 0x01
	char pad_0x589[0x7]; // Offset: 0x589 // Size: 0x07
	struct FTimerHandle TimerHandle; // Offset: 0x590 // Size: 0x08
	bool bInited; // Offset: 0x598 // Size: 0x01
	char pad_0x599[0x3]; // Offset: 0x599 // Size: 0x03
	float LastClickTime; // Offset: 0x59c // Size: 0x04

	// Functions

	// Object Name: Function MultiEventsButton.MultiEventsButton_C.InitEvent
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool InitEvent(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MultiEventsButton.MultiEventsButton_C.OnReleased_Event
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnReleased_Event(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MultiEventsButton.MultiEventsButton_C.OnPressed_Event
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPressed_Event(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MultiEventsButton.MultiEventsButton_C.CustomEvent_3
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_3(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MultiEventsButton.MultiEventsButton_C.OnPressedParam_Event_1
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnPressedParam_Event_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function MultiEventsButton.MultiEventsButton_C.ExecuteUbergraph_MultiEventsButton
	// Flags: [HasDefaults]
	void ExecuteUbergraph_MultiEventsButton(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

