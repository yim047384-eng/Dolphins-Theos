#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UIParticleSystem2.ParticleSystemWidget2
// Size: 0x138 // Inherited bytes: 0x100
struct UParticleSystemWidget2 : UWidget {
	// Fields
	struct UObject* ParticleSystemTemplate; // Offset: 0x100 // Size: 0x08
	enum class UIMeshProjectionMethod ProjectionMethod; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x3]; // Offset: 0x109 // Size: 0x03
	float FieldOfView; // Offset: 0x10c // Size: 0x04
	float DistanceToCamera; // Offset: 0x110 // Size: 0x04
	bool NoNeedsToSwitchVerticalAxis; // Offset: 0x114 // Size: 0x01
	bool bAutoActivate; // Offset: 0x115 // Size: 0x01
	bool bActivate; // Offset: 0x116 // Size: 0x01
	char pad_0x117[0x1]; // Offset: 0x117 // Size: 0x01
	struct UFXSystemComponent* WorldParticleComponent; // Offset: 0x118 // Size: 0x08
	struct AActor* WorldParticleActor; // Offset: 0x120 // Size: 0x08
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10

	// Functions

	// Object Name: Function UIParticleSystem2.ParticleSystemWidget2.SetParticleSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetParticleSystem(struct UParticleSystem* ParticleSystem); // Offset: 0x101ff1a1c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UIParticleSystem2.ParticleSystemWidget2.SetNiagaraSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNiagaraSystem(struct UNiagaraSystem* ParticleSystem); // Offset: 0x101ff19a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UIParticleSystem2.ParticleSystemWidget2.SetActivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActivate(bool bIsActivate); // Offset: 0x101ff191c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UIParticleSystem2.ParticleSystemWidget2.GetParticleComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UParticleSystemComponent* GetParticleComponent(); // Offset: 0x101ff18e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UIParticleSystem2.ParticleSystemWidget2.GetNiagaraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UNiagaraComponent* GetNiagaraComponent(); // Offset: 0x101ff18b4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UIParticleSystem2.UIParticleSystemComponent
// Size: 0xd10 // Inherited bytes: 0xd00
struct UUIParticleSystemComponent : UParticleSystemComponent {
	// Fields
	char pad_0xD00[0x10]; // Offset: 0xd00 // Size: 0x10
};

// Object Name: Class UIParticleSystem2.UINiagaraComponent
// Size: 0xbb0 // Inherited bytes: 0xb90
struct UUINiagaraComponent : UNiagaraComponent {
	// Fields
	char pad_0xB90[0x20]; // Offset: 0xb90 // Size: 0x20
};

