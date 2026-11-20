#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UIParticle.UIParticle
// Size: 0x130 // Inherited bytes: 0x100
struct UUIParticle : UWidget {
	// Fields
	struct UUIParticleAsset* Asset; // Offset: 0x100 // Size: 0x08
	struct FScriptMulticastDelegate EventOnEnd; // Offset: 0x108 // Size: 0x10
	char bPlayParticle : 1; // Offset: 0x118 // Size: 0x01
	char pad_0x118_1 : 7; // Offset: 0x118 // Size: 0x01
	bool IsPlaying; // Offset: 0x119 // Size: 0x01
	char pad_0x11A[0x16]; // Offset: 0x11a // Size: 0x16

	// Functions

	// Object Name: Function UIParticle.UIParticle.StopEmit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopEmit(); // Offset: 0x101a17a18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UIParticle.UIParticle.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x101a17a04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UIParticle.UIParticle.SetPlayParticle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlayParticle(bool InPlayParticle); // Offset: 0x101a17980 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UIParticle.UIParticle.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(); // Offset: 0x101a1796c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UIParticle.UIParticleAsset
// Size: 0x38 // Inherited bytes: 0x28
struct UUIParticleAsset : UObject {
	// Fields
	struct TArray<struct FUIParticleEmitterInfo> Emitters; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class UIParticle.UIParticleEmitter
// Size: 0x130 // Inherited bytes: 0x100
struct UUIParticleEmitter : UWidget {
	// Fields
	struct UUIParticleEmitterAsset* Asset; // Offset: 0x100 // Size: 0x08
	struct FScriptMulticastDelegate EventOnEnd; // Offset: 0x108 // Size: 0x10
	char bPlayParticle : 1; // Offset: 0x118 // Size: 0x01
	char pad_0x118_1 : 7; // Offset: 0x118 // Size: 0x01
	bool IsPlaying; // Offset: 0x119 // Size: 0x01
	char pad_0x11A[0x16]; // Offset: 0x11a // Size: 0x16

	// Functions

	// Object Name: Function UIParticle.UIParticleEmitter.StopEmit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopEmit(); // Offset: 0x101a17f40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UIParticle.UIParticleEmitter.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x101a17f2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UIParticle.UIParticleEmitter.SetPlayParticle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlayParticle(bool InPlayParticle); // Offset: 0x101a17ea8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UIParticle.UIParticleEmitter.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(); // Offset: 0x101a17e94 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UIParticle.UIParticleEmitterAsset
// Size: 0xbcd0 // Inherited bytes: 0x28
struct UUIParticleEmitterAsset : UObject {
	// Fields
	enum class EEmitterType EmitterType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float EmitSeconds; // Offset: 0x2c // Size: 0x04
	struct FUIParticleProperty MaxParticleCount; // Offset: 0x30 // Size: 0x6f8
	struct FUIParticleProperty SpawnParticlePerSecond; // Offset: 0x728 // Size: 0x6f8
	struct FUIParticleProperty ParticleEmitAngle; // Offset: 0xe20 // Size: 0x6f8
	struct FRange_Vector2D EmitPosRange; // Offset: 0x1518 // Size: 0x14
	char pad_0x152C[0x4]; // Offset: 0x152c // Size: 0x04
	struct FPosotion_Vector2DCurve EmitPosition; // Offset: 0x1530 // Size: 0xdf0
	bool AutoEmitPosRange; // Offset: 0x2320 // Size: 0x01
	bool AutoScale; // Offset: 0x2321 // Size: 0x01
	bool ScaleByX; // Offset: 0x2322 // Size: 0x01
	char pad_0x2323[0x1]; // Offset: 0x2323 // Size: 0x01
	struct FVector2D DesignSize; // Offset: 0x2324 // Size: 0x08
	enum class EPositionType PositionType; // Offset: 0x232c // Size: 0x01
	char pad_0x232D[0x3]; // Offset: 0x232d // Size: 0x03
	struct FUIParticleProperty LifeSpan; // Offset: 0x2330 // Size: 0x6f8
	struct FUIParticleProperty Size; // Offset: 0x2a28 // Size: 0x6f8
	struct FUIParticleProperty Pivot; // Offset: 0x3120 // Size: 0x6f8
	struct FUIParticleProperty RotationStart; // Offset: 0x3818 // Size: 0x6f8
	struct FUIParticleProperty RotationSpeed; // Offset: 0x3f10 // Size: 0x6f8
	struct FUIParticleProperty Color; // Offset: 0x4608 // Size: 0x6f8
	struct UObject* ResourceObject; // Offset: 0x4d00 // Size: 0x08
	bool RotationFollowSpeed; // Offset: 0x4d08 // Size: 0x01
	bool UseSeparateSize; // Offset: 0x4d09 // Size: 0x01
	char pad_0x4D0A[0x6]; // Offset: 0x4d0a // Size: 0x06
	struct FUIParticleProperty Gravity; // Offset: 0x4d10 // Size: 0x6f8
	struct FUIParticleProperty StartSpeed; // Offset: 0x5408 // Size: 0x6f8
	struct FUIParticleProperty AirResistance; // Offset: 0x5b00 // Size: 0x6f8
	struct FUIParticleProperty RadialAcceleration; // Offset: 0x61f8 // Size: 0x6f8
	struct FUIParticleProperty TangentialAcceleration; // Offset: 0x68f0 // Size: 0x6f8
	struct FUIParticleProperty Radius; // Offset: 0x6fe8 // Size: 0x6f8
	struct FUIParticleProperty DegreePerSecond; // Offset: 0x76e0 // Size: 0x6f8
	struct FUIParticleProperty PositionX; // Offset: 0x7dd8 // Size: 0x6f8
	struct FUIParticleProperty PositionY; // Offset: 0x84d0 // Size: 0x6f8
	struct TArray<struct FChildEmitter> ChildrenEmitters; // Offset: 0x8bc8 // Size: 0x10
	struct TArray<struct FScalarParamCurve> ScalarParams; // Offset: 0x8bd8 // Size: 0x10
	struct TArray<struct FScalarParamCurve> ScalarParamsWhenStart; // Offset: 0x8be8 // Size: 0x10
	enum class EParticleDrawEffect DrawEffect; // Offset: 0x8bf8 // Size: 0x01
	bool UseScaleFollowSpeedDirection; // Offset: 0x8bf9 // Size: 0x01
	char pad_0x8BFA[0x6]; // Offset: 0x8bfa // Size: 0x06
	struct FUIParticleProperty ScaleFollowSpeedDirection; // Offset: 0x8c00 // Size: 0x6f8
	bool UseScaleFollowSpeedVertical; // Offset: 0x92f8 // Size: 0x01
	char pad_0x92F9[0x7]; // Offset: 0x92f9 // Size: 0x07
	struct FUIParticleProperty ScaleFollowSpeedVertical; // Offset: 0x9300 // Size: 0x6f8
	struct FUIParticleProperty DirectionScale; // Offset: 0x99f8 // Size: 0x6f8
	struct FUIParticleProperty VerticalDirectionScale; // Offset: 0xa0f0 // Size: 0x6f8
	struct FUIParticleProperty SineDirectionStart; // Offset: 0xa7e8 // Size: 0x6f8
	struct FUIParticleProperty SineDirectionSpeed; // Offset: 0xaee0 // Size: 0x6f8
	struct FUIParticleProperty SineDirectionRange; // Offset: 0xb5d8 // Size: 0x6f8
};

