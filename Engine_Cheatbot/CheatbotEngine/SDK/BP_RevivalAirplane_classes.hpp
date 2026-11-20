#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_RevivalAirplane.BP_RevivalAirplane_C
// Size: 0xa7c // Inherited bytes: 0xa30
struct ABP_RevivalAirplane_C : AAirplaneCharacter {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa30 // Size: 0x08
	struct UWingPlaneComponent_BP_C* WingPlaneComponent_BP; // Offset: 0xa38 // Size: 0x08
	struct UPlaneAvatarComponent_BP_C* PlaneAvatarComponent_BP; // Offset: 0xa40 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem; // Offset: 0xa48 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0xa50 // Size: 0x08
	struct USpringArmComponent* SpringArm; // Offset: 0xa58 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0xa60 // Size: 0x08
	struct USTCustomMeshComponent* STCustomMesh; // Offset: 0xa68 // Size: 0x08
	struct FVector TargetLocation; // Offset: 0xa70 // Size: 0x0c

	// Functions

	// Object Name: Function BP_RevivalAirplane.BP_RevivalAirplane_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_RevivalAirplane.BP_RevivalAirplane_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_RevivalAirplane.BP_RevivalAirplane_C.ExecuteUbergraph_BP_RevivalAirplane
	// Flags: [None]
	void ExecuteUbergraph_BP_RevivalAirplane(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

