#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ApexDestruction.DestructibleChunkParameters
// Size: 0x04 // Inherited bytes: 0x00
struct FDestructibleChunkParameters {
	// Fields
	bool bIsSupportChunk; // Offset: 0x00 // Size: 0x01
	bool bDoNotFracture; // Offset: 0x01 // Size: 0x01
	bool bDoNotDamage; // Offset: 0x02 // Size: 0x01
	bool bDoNotCrumble; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct ApexDestruction.FractureMaterial
// Size: 0x24 // Inherited bytes: 0x00
struct FFractureMaterial {
	// Fields
	struct FVector2D UVScale; // Offset: 0x00 // Size: 0x08
	struct FVector2D UVOffset; // Offset: 0x08 // Size: 0x08
	struct FVector Tangent; // Offset: 0x10 // Size: 0x0c
	float UAngle; // Offset: 0x1c // Size: 0x04
	IntProperty InteriorElementIndex; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ApexDestruction.DestructibleParameters
// Size: 0x88 // Inherited bytes: 0x00
struct FDestructibleParameters {
	// Fields
	struct FDestructibleDamageParameters DamageParameters; // Offset: 0x00 // Size: 0x1c
	struct FDestructibleDebrisParameters DebrisParameters; // Offset: 0x1c // Size: 0x2c
	struct FDestructibleAdvancedParameters AdvancedParameters; // Offset: 0x48 // Size: 0x10
	struct FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // Offset: 0x58 // Size: 0x14
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // Offset: 0x70 // Size: 0x10
	struct FDestructibleParametersFlag Flags; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
};

// Object Name: ScriptStruct ApexDestruction.DestructibleParametersFlag
// Size: 0x04 // Inherited bytes: 0x00
struct FDestructibleParametersFlag {
	// Fields
	char bAccumulateDamage : 1; // Offset: 0x00 // Size: 0x01
	char bAssetDefinedSupport : 1; // Offset: 0x00 // Size: 0x01
	char bWorldSupport : 1; // Offset: 0x00 // Size: 0x01
	char bDebrisTimeout : 1; // Offset: 0x00 // Size: 0x01
	char bDebrisMaxSeparation : 1; // Offset: 0x00 // Size: 0x01
	char bCrumbleSmallestChunks : 1; // Offset: 0x00 // Size: 0x01
	char bAccurateRaycasts : 1; // Offset: 0x00 // Size: 0x01
	char bUseValidBounds : 1; // Offset: 0x00 // Size: 0x01
	char bFormExtendedStructures : 1; // Offset: 0x01 // Size: 0x01
	char pad_0x1_1 : 7; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
};

// Object Name: ScriptStruct ApexDestruction.DestructibleDepthParameters
// Size: 0x01 // Inherited bytes: 0x00
struct FDestructibleDepthParameters {
	// Fields
	enum class EImpactDamageOverride ImpactDamageOverride; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// Size: 0x14 // Inherited bytes: 0x00
struct FDestructibleSpecialHierarchyDepths {
	// Fields
	IntProperty SupportDepth; // Offset: 0x00 // Size: 0x04
	IntProperty MinimumFractureDepth; // Offset: 0x04 // Size: 0x04
	bool bEnableDebris; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty DebrisDepth; // Offset: 0x0c // Size: 0x04
	IntProperty EssentialDepth; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// Size: 0x10 // Inherited bytes: 0x00
struct FDestructibleAdvancedParameters {
	// Fields
	float DamageCap; // Offset: 0x00 // Size: 0x04
	float ImpactVelocityThreshold; // Offset: 0x04 // Size: 0x04
	float MaxChunkSpeed; // Offset: 0x08 // Size: 0x04
	float FractureImpulseScale; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ApexDestruction.DestructibleDebrisParameters
// Size: 0x2c // Inherited bytes: 0x00
struct FDestructibleDebrisParameters {
	// Fields
	float DebrisLifetimeMin; // Offset: 0x00 // Size: 0x04
	float DebrisLifetimeMax; // Offset: 0x04 // Size: 0x04
	float DebrisMaxSeparationMin; // Offset: 0x08 // Size: 0x04
	float DebrisMaxSeparationMax; // Offset: 0x0c // Size: 0x04
	struct FBox ValidBounds; // Offset: 0x10 // Size: 0x1c
};

// Object Name: ScriptStruct ApexDestruction.DestructibleDamageParameters
// Size: 0x1c // Inherited bytes: 0x00
struct FDestructibleDamageParameters {
	// Fields
	float DamageThreshold; // Offset: 0x00 // Size: 0x04
	float DamageSpread; // Offset: 0x04 // Size: 0x04
	bool bEnableImpactDamage; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float ImpactDamage; // Offset: 0x0c // Size: 0x04
	IntProperty DefaultImpactDamageDepth; // Offset: 0x10 // Size: 0x04
	bool bCustomImpactResistance; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float ImpactResistance; // Offset: 0x18 // Size: 0x04
};

