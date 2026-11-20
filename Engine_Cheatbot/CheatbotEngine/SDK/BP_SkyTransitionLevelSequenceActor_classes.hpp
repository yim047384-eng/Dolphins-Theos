#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_SkyTransitionLevelSequenceActor.BP_SkyTransitionLevelSequenceActor_C
// Size: 0x78c // Inherited bytes: 0x780
struct ABP_SkyTransitionLevelSequenceActor_C : AUAELevelSequenceActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x780 // Size: 0x08
	float DelayStartSinceReadyState; // Offset: 0x788 // Size: 0x04

	// Functions

	// Object Name: Function BP_SkyTransitionLevelSequenceActor.BP_SkyTransitionLevelSequenceActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_SkyTransitionLevelSequenceActor.BP_SkyTransitionLevelSequenceActor_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_SkyTransitionLevelSequenceActor.BP_SkyTransitionLevelSequenceActor_C.ReceiveInitailizePlayer
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveInitailizePlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_SkyTransitionLevelSequenceActor.BP_SkyTransitionLevelSequenceActor_C.ExecuteUbergraph_BP_SkyTransitionLevelSequenceActor
	// Flags: [None]
	void ExecuteUbergraph_BP_SkyTransitionLevelSequenceActor(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

