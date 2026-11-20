#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_UAELevelSequenceActor.BP_UAELevelSequenceActor_C
// Size: 0x78e // Inherited bytes: 0x780
struct ABP_UAELevelSequenceActor_C : AUAELevelSequenceActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x780 // Size: 0x08
	float DelayStartSinceReadyState; // Offset: 0x788 // Size: 0x04
	bool bClientCheckReleaseCameraCut; // Offset: 0x78c // Size: 0x01
	bool bOwnerHideUI; // Offset: 0x78d // Size: 0x01

	// Functions

	// Object Name: Function BP_UAELevelSequenceActor.BP_UAELevelSequenceActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_UAELevelSequenceActor.BP_UAELevelSequenceActor_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_UAELevelSequenceActor.BP_UAELevelSequenceActor_C.ReceiveInitailizePlayer
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveInitailizePlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_UAELevelSequenceActor.BP_UAELevelSequenceActor_C.ExecuteUbergraph_BP_UAELevelSequenceActor
	// Flags: [None]
	void ExecuteUbergraph_BP_UAELevelSequenceActor(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

