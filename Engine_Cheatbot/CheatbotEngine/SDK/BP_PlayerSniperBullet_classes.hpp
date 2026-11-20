#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerSniperBullet.BP_PlayerSniperBullet_C
// Size: 0x908 // Inherited bytes: 0x8e0
struct ABP_PlayerSniperBullet_C : ASTExtraShootWeaponBulletBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x8e0 // Size: 0x08
	struct UParticleSystemComponent* P_Sniper_bullet_01; // Offset: 0x8e8 // Size: 0x08
	struct UStaticMeshComponent* BulletMesh; // Offset: 0x8f0 // Size: 0x08
	float EffectFxDelayShowTime; // Offset: 0x8f8 // Size: 0x04
	char pad_0x8FC[0x4]; // Offset: 0x8fc // Size: 0x04
	struct FTimerHandle DelayParticleTimer; // Offset: 0x900 // Size: 0x08

	// Functions

	// Object Name: Function BP_PlayerSniperBullet.BP_PlayerSniperBullet_C.ActiveBulletParticle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ActiveBulletParticle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerSniperBullet.BP_PlayerSniperBullet_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerSniperBullet.BP_PlayerSniperBullet_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerSniperBullet.BP_PlayerSniperBullet_C.ResetParticle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ResetParticle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerSniperBullet.BP_PlayerSniperBullet_C.DelayAction
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayAction(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerSniperBullet.BP_PlayerSniperBullet_C.ExecuteUbergraph_BP_PlayerSniperBullet
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_PlayerSniperBullet(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

