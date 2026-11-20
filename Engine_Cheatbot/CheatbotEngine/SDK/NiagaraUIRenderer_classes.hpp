#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class NiagaraUIRenderer.NiagaraSystemWidget
// Size: 0x198 // Inherited bytes: 0x100
struct UNiagaraSystemWidget : UWidget {
	// Fields
	struct UNiagaraSystem* NiagaraSystemReference; // Offset: 0x100 // Size: 0x08
	MapProperty MaterialRemapList; // Offset: 0x108 // Size: 0x50
	struct FVector2D Offset2D; // Offset: 0x158 // Size: 0x08
	struct FRotator Rotation3D; // Offset: 0x160 // Size: 0x0c
	bool AutoActivate; // Offset: 0x16c // Size: 0x01
	bool TickWhenPaused; // Offset: 0x16d // Size: 0x01
	bool FakeDepthScale; // Offset: 0x16e // Size: 0x01
	char pad_0x16F[0x1]; // Offset: 0x16f // Size: 0x01
	float FakeDepthScaleDistance; // Offset: 0x170 // Size: 0x04
	char bIsActivated : 1; // Offset: 0x174 // Size: 0x01
	char pad_0x174_1 : 7; // Offset: 0x174 // Size: 0x01
	char pad_0x175[0x13]; // Offset: 0x175 // Size: 0x13
	struct ANiagaraUIActor* NiagaraActor; // Offset: 0x188 // Size: 0x08
	struct UNiagaraUIComponent* NiagaraComponent; // Offset: 0x190 // Size: 0x08

	// Functions

	// Object Name: Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated
	// Flags: [Native|Public|BlueprintCallable]
	void SetIsActivated(bool bInIsActive); // Offset: 0x1023a4038 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UNiagaraUIComponent* GetNiagaraComponent(); // Offset: 0x1023a4004 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsActivated(); // Offset: 0x1023a3fd0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeactivateSystem(); // Offset: 0x1023a3fbc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ActivateSystem(bool Reset); // Offset: 0x1023a3f38 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class NiagaraUIRenderer.NiagaraUIActor
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct ANiagaraUIActor : AActor {
};

// Object Name: Class NiagaraUIRenderer.NiagaraUIComponent
// Size: 0xbb0 // Inherited bytes: 0xb90
struct UNiagaraUIComponent : UNiagaraComponent {
	// Fields
	char pad_0xB90[0x20]; // Offset: 0xb90 // Size: 0x20
};

