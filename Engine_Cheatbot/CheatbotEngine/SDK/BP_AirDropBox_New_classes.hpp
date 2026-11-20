#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_AirDropBox_New.BP_AirDropBox_New_C
// Size: 0x988 // Inherited bytes: 0x8d0
struct ABP_AirDropBox_New_C : AAirDropBoxActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x8d0 // Size: 0x08
	struct UParticleSystemComponent* Smoke; // Offset: 0x8d8 // Size: 0x08
	struct UBoxComponent* Box1; // Offset: 0x8e0 // Size: 0x08
	struct UStaticMeshComponent* Box; // Offset: 0x8e8 // Size: 0x08
	struct UBuoyancyForceComponent* BuoyancyForce; // Offset: 0x8f0 // Size: 0x08
	struct UProjectileMovementComponent* ProjectileMovement; // Offset: 0x8f8 // Size: 0x08
	struct UParticleSystemComponent* Flash; // Offset: 0x900 // Size: 0x08
	struct UStaticMeshComponent* Parachute; // Offset: 0x908 // Size: 0x08
	StrProperty BlackPink_AirDropBoxMeshPath; // Offset: 0x910 // Size: 0x10
	struct UParticleSystem* BlackPink_SmokingParticle; // Offset: 0x920 // Size: 0x08
	struct UMaterialInstance* ParachuteMaterialInstance; // Offset: 0x928 // Size: 0x08
	bool bCheckHitOnce; // Offset: 0x930 // Size: 0x01
	char pad_0x931[0x7]; // Offset: 0x931 // Size: 0x07
	MapProperty SubModProduceDropIDConfig; // Offset: 0x938 // Size: 0x50

	// Functions

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.SetSmokeColorBlindness
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSmokeColorBlindness(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.AysncLoadAirDropMesh
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AysncLoadAirDropMesh(struct UObject* LoadedMesh); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.IsFestivalAirdrop
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsFestivalAirdrop(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.OnAddLightEffect
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAddLightEffect(struct UParticleSystemComponent* ParticleSystemComp); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.AsyncLoadBoxResourceFinish
	// Flags: [Event|Public|BlueprintEvent]
	void AsyncLoadBoxResourceFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_AirDropBox_New.BP_AirDropBox_New_C.ExecuteUbergraph_BP_AirDropBox_New
	// Flags: [None]
	void ExecuteUbergraph_BP_AirDropBox_New(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

