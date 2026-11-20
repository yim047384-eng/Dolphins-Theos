#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass StrongholdTower.StrongholdTower_C
// Size: 0x6ac // Inherited bytes: 0x660
struct AStrongholdTower_C : ADecoratorActor {
	// Fields
	struct UStrongholdTowerIC_C* StrongholdTowerIC; // Offset: 0x660 // Size: 0x08
	struct USphereComponent* SphereButton; // Offset: 0x668 // Size: 0x08
	struct UParticleSystemComponent* percent; // Offset: 0x670 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x678 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem; // Offset: 0x680 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0x688 // Size: 0x08
	struct USphereComponent* Sphere; // Offset: 0x690 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x698 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x6a0 // Size: 0x08
	IntProperty TowerIndex; // Offset: 0x6a8 // Size: 0x04

	// Functions

	// Object Name: Function StrongholdTower.StrongholdTower_C.LowDeviceOptimise
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LowDeviceOptimise(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function StrongholdTower.StrongholdTower_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

