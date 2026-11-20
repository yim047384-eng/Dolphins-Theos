#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass FlyingMissile.FlyingMissile_C
// Size: 0x4d8 // Inherited bytes: 0x4b0
struct AFlyingMissile_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem; // Offset: 0x4b8 // Size: 0x08
	struct UStaticMeshComponent* ST_WEP_M202_Bullet_Single; // Offset: 0x4c0 // Size: 0x08
	struct UMissileFlyingAnimationComponent* MissileFlyingAnimation; // Offset: 0x4c8 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x4d0 // Size: 0x08

	// Functions

	// Object Name: Function FlyingMissile.FlyingMissile_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FlyingMissile.FlyingMissile_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FlyingMissile.FlyingMissile_C.ExecuteUbergraph_FlyingMissile
	// Flags: [None]
	void ExecuteUbergraph_FlyingMissile(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

