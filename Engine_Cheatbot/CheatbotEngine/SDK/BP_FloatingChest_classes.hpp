#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_FloatingChest.BP_FloatingChest_C
// Size: 0x6c8 // Inherited bytes: 0x660
struct ABP_FloatingChest_C : ADecoratorActor {
	// Fields
	struct UAIPerceptionDynamicItemComponent* AIPerceptionDynamicItem; // Offset: 0x660 // Size: 0x08
	struct USphereComponent* Sphere3; // Offset: 0x668 // Size: 0x08
	struct USphereComponent* Sphere2; // Offset: 0x670 // Size: 0x08
	struct USphereComponent* Sphere1; // Offset: 0x678 // Size: 0x08
	struct USphereComponent* Sphere; // Offset: 0x680 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x688 // Size: 0x08
	struct UBuoyancyForceComponent* BuoyancyForce; // Offset: 0x690 // Size: 0x08
	IntProperty DropID; // Offset: 0x698 // Size: 0x04
	char pad_0x69C[0x4]; // Offset: 0x69c // Size: 0x04
	struct APlayerDeadInventoryBox_C* BoxClass; // Offset: 0x6a0 // Size: 0x08
	StrProperty BoxName; // Offset: 0x6a8 // Size: 0x10
	StrProperty TreasureChestMarkName; // Offset: 0x6b8 // Size: 0x10

	// Functions

	// Object Name: Function BP_FloatingChest.BP_FloatingChest_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

