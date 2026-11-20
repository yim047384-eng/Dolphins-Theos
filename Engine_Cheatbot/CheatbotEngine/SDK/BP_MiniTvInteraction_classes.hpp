#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_MiniTvInteraction.BP_MiniTvInteraction_C
// Size: 0x5bc // Inherited bytes: 0x570
struct ABP_MiniTvInteraction_C : ALuaActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x570 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x578 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x580 // Size: 0x08
	struct USkeletalMeshComponent* SkeletalMesh; // Offset: 0x588 // Size: 0x08
	struct UWidgetComponent* Widget_Tips; // Offset: 0x590 // Size: 0x08
	struct UCapsuleComponent* Capsule; // Offset: 0x598 // Size: 0x08
	struct UWidgetComponent* Widget; // Offset: 0x5a0 // Size: 0x08
	bool isInteractiving; // Offset: 0x5a8 // Size: 0x01
	char pad_0x5A9[0x7]; // Offset: 0x5a9 // Size: 0x07
	struct ACharacter* MyCharacter; // Offset: 0x5b0 // Size: 0x08
	IntProperty ActorRoatate; // Offset: 0x5b8 // Size: 0x04

	// Functions

	// Object Name: Function BP_MiniTvInteraction.BP_MiniTvInteraction_C.SetActorRotate
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetActorRotate(IntProperty RotateZ); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_MiniTvInteraction.BP_MiniTvInteraction_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MiniTvInteraction.BP_MiniTvInteraction_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_MiniTvInteraction.BP_MiniTvInteraction_C.ExecuteUbergraph_BP_MiniTvInteraction
	// Flags: [None]
	void ExecuteUbergraph_BP_MiniTvInteraction(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

