#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_ServerSwitcher.BP_ServerSwitcher_C
// Size: 0x1e8 // Inherited bytes: 0x1e0
struct UBP_ServerSwitcher_C : UServerSwitchComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1e0 // Size: 0x08

	// Functions

	// Object Name: Function BP_ServerSwitcher.BP_ServerSwitcher_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ServerSwitcher.BP_ServerSwitcher_C.CustomEvent_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_1(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_ServerSwitcher.BP_ServerSwitcher_C.ExecuteUbergraph_BP_ServerSwitcher
	// Flags: [None]
	void ExecuteUbergraph_BP_ServerSwitcher(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

