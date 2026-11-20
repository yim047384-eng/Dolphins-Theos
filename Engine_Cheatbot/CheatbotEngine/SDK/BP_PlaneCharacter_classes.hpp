#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlaneCharacter.BP_PlaneCharacter_C
// Size: 0xbf4 // Inherited bytes: 0xb40
struct ABP_PlaneCharacter_C : APlaneCharacter {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xb40 // Size: 0x08
	struct UWingPlaneComponent_BP_C* WingPlaneComponent_BP; // Offset: 0xb48 // Size: 0x08
	struct UPlaneAvatarComponent_BP_C* PlaneAvatarComponent_BP; // Offset: 0xb50 // Size: 0x08
	struct USceneComponent* Scene; // Offset: 0xb58 // Size: 0x08
	struct UCameraComponent* PlaneCamera; // Offset: 0xb60 // Size: 0x08
	struct USpringArmComponent* PlaneSpringArm; // Offset: 0xb68 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0xb70 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem7; // Offset: 0xb78 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem6; // Offset: 0xb80 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem5; // Offset: 0xb88 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem4; // Offset: 0xb90 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem3; // Offset: 0xb98 // Size: 0x08
	struct UParticleSystemComponent* P_Plan_tail_01; // Offset: 0xba0 // Size: 0x08
	struct UParticleSystemComponent* P_Plan_light_green_01; // Offset: 0xba8 // Size: 0x08
	struct UParticleSystemComponent* P_Plan_light_red_02; // Offset: 0xbb0 // Size: 0x08
	struct UParticleSystemComponent* P_Plan_light_red_01; // Offset: 0xbb8 // Size: 0x08
	struct UParticleSystemComponent* P_Plan_light_blue_01; // Offset: 0xbc0 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem2; // Offset: 0xbc8 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem1; // Offset: 0xbd0 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem; // Offset: 0xbd8 // Size: 0x08
	struct UParticleSystemComponent* P_Plan_Propeller_01; // Offset: 0xbe0 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0xbe8 // Size: 0x08
	IntProperty planeResId; // Offset: 0xbf0 // Size: 0x04

	// Functions

	// Object Name: Function BP_PlaneCharacter.BP_PlaneCharacter_C.AsyncChangePlaneAvatar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AsyncChangePlaneAvatar(IntProperty InItemID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlaneCharacter.BP_PlaneCharacter_C.ChangePlaneAvatar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangePlaneAvatar(IntProperty InItemID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlaneCharacter.BP_PlaneCharacter_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlaneCharacter.BP_PlaneCharacter_C.ExecuteUbergraph_BP_PlaneCharacter
	// Flags: [None]
	void ExecuteUbergraph_BP_PlaneCharacter(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

