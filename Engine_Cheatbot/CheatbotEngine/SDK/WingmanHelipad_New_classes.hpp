#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass WingmanHelipad_New.WingmanHelipad_New_C
// Size: 0x5b8 // Inherited bytes: 0x570
struct AWingmanHelipad_New_C : ALuaActor {
	// Fields
	struct UParticleSystemComponent* ParticleSystem; // Offset: 0x570 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x578 // Size: 0x08
	struct UBoxComponent* Trigger; // Offset: 0x580 // Size: 0x08
	struct UStaticMeshComponent* SM_Summon_Wingplane_01_a; // Offset: 0x588 // Size: 0x08
	struct UStaticMeshComponent* SM_Summon_Wingplane_01_d; // Offset: 0x590 // Size: 0x08
	struct UStaticMeshComponent* SM_Summon_Wingplane_01_c; // Offset: 0x598 // Size: 0x08
	struct UStaticMeshComponent* SM_Summon_Wingplane_01_b; // Offset: 0x5a0 // Size: 0x08
	struct UBP_EmptySceneComponent_C* DefaultRoot; // Offset: 0x5a8 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x5b0 // Size: 0x08

	// Functions

	// Object Name: Function WingmanHelipad_New.WingmanHelipad_New_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

