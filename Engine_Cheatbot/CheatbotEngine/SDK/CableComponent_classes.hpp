#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CableComponent.CableActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct ACableActor : AActor {
	// Fields
	struct UCableComponent* CableComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class CableComponent.CableComponent
// Size: 0xaa0 // Inherited bytes: 0xa20
struct UCableComponent : UMeshComponent {
	// Fields
	bool bAttachStart; // Offset: 0xa1d // Size: 0x01
	bool bAttachEnd; // Offset: 0xa1e // Size: 0x01
	struct FComponentReference AttachEndTo; // Offset: 0xa20 // Size: 0x18
	struct FName AttachEndToSocketName; // Offset: 0xa38 // Size: 0x08
	struct FVector EndLocation; // Offset: 0xa40 // Size: 0x0c
	float CableLength; // Offset: 0xa4c // Size: 0x04
	IntProperty NumSegments; // Offset: 0xa50 // Size: 0x04
	float SubstepTime; // Offset: 0xa54 // Size: 0x04
	IntProperty SolverIterations; // Offset: 0xa58 // Size: 0x04
	bool bEnableStiffness; // Offset: 0xa5c // Size: 0x01
	bool bEnableCollision; // Offset: 0xa5d // Size: 0x01
	float CollisionFriction; // Offset: 0xa60 // Size: 0x04
	struct FVector CableForce; // Offset: 0xa64 // Size: 0x0c
	float CableGravityScale; // Offset: 0xa70 // Size: 0x04
	float CableWidth; // Offset: 0xa74 // Size: 0x04
	IntProperty NumSides; // Offset: 0xa78 // Size: 0x04
	float TileMaterial; // Offset: 0xa7c // Size: 0x04
	char pad_0xA80[0x20]; // Offset: 0xa80 // Size: 0x20

	// Functions

	// Object Name: Function CableComponent.CableComponent.SetAttachEndTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Offset: 0x1023bf9b0 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function CableComponent.CableComponent.GetCableParticleLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Offset: 0x1023bf908 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CableComponent.CableComponent.GetAttachedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct USceneComponent* GetAttachedComponent(); // Offset: 0x1023bf8d4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CableComponent.CableComponent.GetAttachedActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetAttachedActor(); // Offset: 0x1023bf8a0 // Return & Params: Num(1) Size(0x8)
};

