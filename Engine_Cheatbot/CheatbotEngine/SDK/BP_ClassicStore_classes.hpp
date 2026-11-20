#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_ClassicStore.BP_ClassicStore_C
// Size: 0x6ac // Inherited bytes: 0x660
struct ABP_ClassicStore_C : ADecoratorActor {
	// Fields
	struct USphereComponent* HackInteractive; // Offset: 0x660 // Size: 0x08
	struct UBP_StoreHackInteractiveComponent_C* BP_StoreHackInteractiveComponent; // Offset: 0x668 // Size: 0x08
	struct UDropItemCurveAnimComponent* DropItemCurveAnim; // Offset: 0x670 // Size: 0x08
	struct UBP_ProduceDropItemComponent_C* BP_ProduceDropItemComponent; // Offset: 0x678 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x680 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x688 // Size: 0x08
	struct USphereComponent* Sphere; // Offset: 0x690 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x698 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x6a0 // Size: 0x08
	IntProperty StoreID; // Offset: 0x6a8 // Size: 0x04

	// Functions

	// Object Name: Function BP_ClassicStore.BP_ClassicStore_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

