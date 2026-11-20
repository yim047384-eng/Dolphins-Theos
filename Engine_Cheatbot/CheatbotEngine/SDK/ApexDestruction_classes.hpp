#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ApexDestruction.DestructibleActor
// Size: 0x4d0 // Inherited bytes: 0x4b0
struct ADestructibleActor : AActor {
	// Fields
	struct UDestructibleComponent* DestructibleComponent; // Offset: 0x4b0 // Size: 0x08
	char bAffectNavigation : 1; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B8_1 : 7; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B9[0x7]; // Offset: 0x4b9 // Size: 0x07
	struct FScriptMulticastDelegate OnActorFracture; // Offset: 0x4c0 // Size: 0x10
};

// Object Name: Class ApexDestruction.DestructibleComponent
// Size: 0xd10 // Inherited bytes: 0xc40
struct UDestructibleComponent : USkinnedMeshComponent {
	// Fields
	char bFractureEffectOverride : 1; // Offset: 0xc40 // Size: 0x01
	char pad_0xC40_1 : 7; // Offset: 0xc40 // Size: 0x01
	char pad_0xC41[0x7]; // Offset: 0xc41 // Size: 0x07
	struct TArray<struct FFractureEffect> FractureEffects; // Offset: 0xc48 // Size: 0x10
	bool bEnableHardSleeping; // Offset: 0xc58 // Size: 0x01
	char pad_0xC59[0x3]; // Offset: 0xc59 // Size: 0x03
	float LargeChunkThreshold; // Offset: 0xc5c // Size: 0x04
	char pad_0xC60[0x10]; // Offset: 0xc60 // Size: 0x10
	struct FScriptMulticastDelegate OnComponentFracture; // Offset: 0xc70 // Size: 0x10
	char pad_0xC80[0x90]; // Offset: 0xc80 // Size: 0x90

	// Functions

	// Object Name: Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Offset: 0x106134af4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UDestructibleMesh* GetDestructibleMesh(); // Offset: 0x106134ac0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Offset: 0x106134934 // Return & Params: Num(5) Size(0x19)

	// Object Name: Function ApexDestruction.DestructibleComponent.ApplyDamage
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Offset: 0x1061347dc // Return & Params: Num(4) Size(0x20)
};

// Object Name: Class ApexDestruction.DestructibleFractureSettings
// Size: 0x90 // Inherited bytes: 0x28
struct UDestructibleFractureSettings : UObject {
	// Fields
	IntProperty CellSiteCount; // Offset: 0x28 // Size: 0x04
	struct FFractureMaterial FractureMaterialDesc; // Offset: 0x2c // Size: 0x24
	IntProperty RandomSeed; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FVector> VoronoiSites; // Offset: 0x58 // Size: 0x10
	IntProperty OriginalSubmeshCount; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<struct UMaterialInterface*> Materials; // Offset: 0x70 // Size: 0x10
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class ApexDestruction.DestructibleMesh
// Size: 0x4a0 // Inherited bytes: 0x408
struct UDestructibleMesh : USkeletalMesh {
	// Fields
	struct FDestructibleParameters DefaultDestructibleParameters; // Offset: 0x408 // Size: 0x88
	struct TArray<struct FFractureEffect> FractureEffects; // Offset: 0x490 // Size: 0x10
};

