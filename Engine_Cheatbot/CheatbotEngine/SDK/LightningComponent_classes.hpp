#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class LightningComponent.LightningActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct ALightningActor : AActor {
	// Fields
	struct ULightningComponent* LightningComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class LightningComponent.LightningComponent
// Size: 0xae0 // Inherited bytes: 0xa20
struct ULightningComponent : UMeshComponent {
	// Fields
	IntProperty MaxFractalTime; // Offset: 0xa20 // Size: 0x04
	IntProperty PatternMask; // Offset: 0xa24 // Size: 0x04
	float LightningWidth; // Offset: 0xa28 // Size: 0x04
	float WidthDecay; // Offset: 0xa2c // Size: 0x04
	float BrightnessDecay; // Offset: 0xa30 // Size: 0x04
	bool bShrinkWidth; // Offset: 0xa34 // Size: 0x01
	char pad_0xA35[0x3]; // Offset: 0xa35 // Size: 0x03
	IntProperty AtlasNum; // Offset: 0xa38 // Size: 0x04
	struct FVector SeedStart; // Offset: 0xa3c // Size: 0x0c
	struct FVector SeedEnd; // Offset: 0xa48 // Size: 0x0c
	struct FVector2D ZigZagFraction; // Offset: 0xa54 // Size: 0x08
	struct FVector2D ZigZagDeviationRight; // Offset: 0xa5c // Size: 0x08
	struct FVector2D ZigZagDeviationUp; // Offset: 0xa64 // Size: 0x08
	float ZigZagDeviationDecay; // Offset: 0xa6c // Size: 0x04
	struct FVector2D ForkFraction; // Offset: 0xa70 // Size: 0x08
	struct FVector2D ForkZigZagDeviationRight; // Offset: 0xa78 // Size: 0x08
	struct FVector2D ForkZigZagDeviationUp; // Offset: 0xa80 // Size: 0x08
	float ForkZigZagDeviationDecay; // Offset: 0xa88 // Size: 0x04
	struct FVector2D ForkDeviationRight; // Offset: 0xa8c // Size: 0x08
	struct FVector2D ForkDeviationUp; // Offset: 0xa94 // Size: 0x08
	struct FVector2D ForkDeviationForward; // Offset: 0xa9c // Size: 0x08
	float ForkDeviationDecay; // Offset: 0xaa4 // Size: 0x04
	struct FVector2D ForkLength; // Offset: 0xaa8 // Size: 0x08
	float ForkLengthDecay; // Offset: 0xab0 // Size: 0x04
	char pad_0xAB4[0x2c]; // Offset: 0xab4 // Size: 0x2c

	// Functions

	// Object Name: Function LightningComponent.LightningComponent.SetWidthDecay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWidthDecay(float InDecay); // Offset: 0x1023eeb9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.SetShrinkWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetShrinkWidth(bool InBool); // Offset: 0x1023eeb18 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function LightningComponent.LightningComponent.SetPatternMask
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPatternMask(IntProperty InPatternMask); // Offset: 0x1023eea9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.SetMaxFractalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxFractalTime(IntProperty InMaxFractalTime); // Offset: 0x1023eea20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.SetLightningWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLightningWidth(float InWidth); // Offset: 0x1023ee9a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.SetBrightnessDecay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrightnessDecay(float InDecay); // Offset: 0x1023ee928 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.SetAtlasNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAtlasNum(IntProperty InVal); // Offset: 0x1023ee8ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.RefreshLightningMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshLightningMesh(); // Offset: 0x1023ee898 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LightningComponent.LightningComponent.IsShrinkWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsShrinkWidth(); // Offset: 0x1023ee87c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function LightningComponent.LightningComponent.GetWidthDecay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetWidthDecay(); // Offset: 0x1023ee860 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.GetPatternMask
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPatternMask(); // Offset: 0x1023ee844 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.GetMaxFractalTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetMaxFractalTime(); // Offset: 0x1023ee828 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.GetLightningWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetLightningWidth(); // Offset: 0x1023ee80c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.GetBrightnessDecay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetBrightnessDecay(); // Offset: 0x1023ee7f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LightningComponent.LightningComponent.GetAtlasNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetAtlasNum(); // Offset: 0x1023ee7d0 // Return & Params: Num(1) Size(0x4)
};

