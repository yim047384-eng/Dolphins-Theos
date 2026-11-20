#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PicnicMat.BP_PicnicMat_C
// Size: 0x738 // Inherited bytes: 0x6c4
struct ABP_PicnicMat_C : AInteractiveActorTemplate_C {
	// Fields
	char pad_0x6C4[0x4]; // Offset: 0x6c4 // Size: 0x04
	struct UParticleSystemComponent* PS_Food5; // Offset: 0x6c8 // Size: 0x08
	struct UStaticMeshComponent* SM_Food5; // Offset: 0x6d0 // Size: 0x08
	struct UParticleSystemComponent* PS_Food4; // Offset: 0x6d8 // Size: 0x08
	struct UParticleSystemComponent* PS_Food3; // Offset: 0x6e0 // Size: 0x08
	struct UParticleSystemComponent* PS_Food2; // Offset: 0x6e8 // Size: 0x08
	struct UParticleSystemComponent* PS_Food1; // Offset: 0x6f0 // Size: 0x08
	struct UStaticMeshComponent* SM_Food2; // Offset: 0x6f8 // Size: 0x08
	struct UStaticMeshComponent* SM_Food4; // Offset: 0x700 // Size: 0x08
	struct UStaticMeshComponent* SM_Food3; // Offset: 0x708 // Size: 0x08
	struct UStaticMeshComponent* SM_Food1; // Offset: 0x710 // Size: 0x08
	float Active_Interval; // Offset: 0x718 // Size: 0x04
	float ResetCooldown; // Offset: 0x71c // Size: 0x04
	float EffectDistance; // Offset: 0x720 // Size: 0x04
	char pad_0x724[0x4]; // Offset: 0x724 // Size: 0x04
	struct UAkAudioEvent* SpawnSoundEvent; // Offset: 0x728 // Size: 0x08
	IntProperty TLogID_InteractRandomOne; // Offset: 0x730 // Size: 0x04
	IntProperty TLogID_InteractFixedOne; // Offset: 0x734 // Size: 0x04

	// Functions

	// Object Name: Function BP_PicnicMat.BP_PicnicMat_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

