#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AttachActor_Ring_BP.AttachActor_Ring_BP_C
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct AAttachActor_Ring_BP_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x4b8 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x4c0 // Size: 0x08

	// Functions

	// Object Name: Function AttachActor_Ring_BP.AttachActor_Ring_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AttachActor_Ring_BP.AttachActor_Ring_BP_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AttachActor_Ring_BP.AttachActor_Ring_BP_C.ExecuteUbergraph_AttachActor_Ring_BP
	// Flags: [None]
	void ExecuteUbergraph_AttachActor_Ring_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

