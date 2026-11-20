#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_ZiplineAnchor.BP_ZiplineAnchor_C
// Size: 0x598 // Inherited bytes: 0x570
struct ABP_ZiplineAnchor_C : ALuaActor {
	// Fields
	struct UStaticMeshComponent* BaseMesh; // Offset: 0x570 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x578 // Size: 0x08
	struct USphereComponent* Sphere; // Offset: 0x580 // Size: 0x08
	struct UStaticMeshComponent* AnchorMesh; // Offset: 0x588 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x590 // Size: 0x08

	// Functions

	// Object Name: Function BP_ZiplineAnchor.BP_ZiplineAnchor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

