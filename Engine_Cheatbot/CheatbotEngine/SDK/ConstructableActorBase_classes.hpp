#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass ConstructableActorBase.ConstructableActorBase_C
// Size: 0x9b9 // Inherited bytes: 0x9b0
struct AConstructableActorBase_C : ASTBuildingActorBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x9b0 // Size: 0x08
	bool ShouldSetAsDynamic; // Offset: 0x9b8 // Size: 0x01

	// Functions

	// Object Name: Function ConstructableActorBase.ConstructableActorBase_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ConstructableActorBase.ConstructableActorBase_C.OnPlayDestroyAnimation
	// Flags: [Event|Protected|BlueprintEvent]
	void OnPlayDestroyAnimation(bool bUseParticle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ConstructableActorBase.ConstructableActorBase_C.ExecuteUbergraph_ConstructableActorBase
	// Flags: [None]
	void ExecuteUbergraph_ConstructableActorBase(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

