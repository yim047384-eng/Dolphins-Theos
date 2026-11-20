#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerGunCollision.BP_PlayerGunCollision_C
// Size: 0x290 // Inherited bytes: 0x238
struct UBP_PlayerGunCollision_C : UPlayerGunCollosionComp {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x238 // Size: 0x08
	struct UPrimitiveComponent* HitBox; // Offset: 0x240 // Size: 0x08
	struct ASTExtraBaseCharacter* TargetCH; // Offset: 0x248 // Size: 0x08
	struct FVector ImpactPoint; // Offset: 0x250 // Size: 0x0c
	bool CheckDeltaTime; // Offset: 0x25c // Size: 0x01
	char pad_0x25D[0x3]; // Offset: 0x25d // Size: 0x03
	IntProperty LastFoldRatio; // Offset: 0x260 // Size: 0x04
	IntProperty CurFlodRatio; // Offset: 0x264 // Size: 0x04
	bool BSendZero; // Offset: 0x268 // Size: 0x01
	bool CanCheck; // Offset: 0x269 // Size: 0x01
	char pad_0x26A[0x6]; // Offset: 0x26a // Size: 0x06
	struct UCustomParticleSystemComponent* AimFoldEffect; // Offset: 0x270 // Size: 0x08
	struct FVector ImpactNormal; // Offset: 0x278 // Size: 0x0c
	struct FVector InFoldPoint; // Offset: 0x284 // Size: 0x0c

	// Functions

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.GetQEOffset
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetQEOffset(struct FVector& QEOffset); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.GetDectectOffset
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetDectectOffset(struct FVector& Offset); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.InitAimFoldPoint
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitAimFoldPoint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.IsCanCheckCollosion
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsCanCheckCollosion(bool& CanCheck); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.PostCollisionProcess
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PostCollisionProcess(float FoldFactor, struct FVector FoldPoint, struct FVector FoldNormal); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.ChecCollisionProne
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChecCollisionProne(float& GunFolderFactor, struct FVector& FoldPoint, struct FVector& FoldNormal); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.CheckCollisionCrouch
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckCollisionCrouch(float& GunFolderFactor, struct FVector& FoldPoint, struct FVector& FoldNormal); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.CheckCollisionStand
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckCollisionStand(float& GunFolderFactor, struct FVector& FoldPoint, struct FVector& FoldNormal); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.CheckGunCollision
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckGunCollision(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.IsUpFolder
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsUpFolder(bool& bUpFolder); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.GetCurrentWeaponBodyLength
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurrentWeaponBodyLength(float& BodyLength); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.GetDetectStartLoc
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetDetectStartLoc(struct FVector& DetectStartLoc); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.SetEffect
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void SetEffect(bool Visbile, struct FVector& EffectLoc); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerGunCollision.BP_PlayerGunCollision_C.ExecuteUbergraph_BP_PlayerGunCollision
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_PlayerGunCollision(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

