#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass KC_PlaneShowActor_3.KC_PlaneShowActor_2_C
// Size: 0x5c8 // Inherited bytes: 0x581
struct AKC_PlaneShowActor_2_C : APlaneShowActor_C {
	// Fields
	char pad_0x581[0x7]; // Offset: 0x581 // Size: 0x07
	struct UParticleSystemComponent* P_Aircraft_Cloud_xjq_01; // Offset: 0x588 // Size: 0x08
	struct UStaticMeshComponent* Cube; // Offset: 0x590 // Size: 0x08
	struct USkeletalMeshComponent* Wingman_int_0091; // Offset: 0x598 // Size: 0x08
	struct USkeletalMeshComponent* Wingman_int_009; // Offset: 0x5a0 // Size: 0x08
	struct USceneComponent* WingmanPos2; // Offset: 0x5a8 // Size: 0x08
	struct USceneComponent* WingmanPos1; // Offset: 0x5b0 // Size: 0x08
	struct UActorSequenceComponent* ActorSequence; // Offset: 0x5b8 // Size: 0x08
	struct UChildActorComponent* BP_PlaneCharacter; // Offset: 0x5c0 // Size: 0x08

	// Functions

	// Object Name: Function KC_PlaneShowActor_3.KC_PlaneShowActor_2_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

