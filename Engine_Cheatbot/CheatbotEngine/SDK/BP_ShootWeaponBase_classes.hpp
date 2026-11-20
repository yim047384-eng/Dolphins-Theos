#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C
// Size: 0x1738 // Inherited bytes: 0x1610
struct ABP_ShootWeaponBase_C : ASTExtraShootWeapon {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1610 // Size: 0x08
	struct UWeaponAvatarComp_BP_C* WeaponAvatarComp_BP; // Offset: 0x1618 // Size: 0x08
	struct UCustomCndComponent* CustomCnd; // Offset: 0x1620 // Size: 0x08
	struct UWeaponSpecificHandler* WeaponSpecificHandler; // Offset: 0x1628 // Size: 0x08
	struct UBulletHitInfoUploadComponent* BulletHitInfoUpload; // Offset: 0x1630 // Size: 0x08
	struct UCrossHairComponent* Crosshair; // Offset: 0x1638 // Size: 0x08
	struct UShootWeaponEntity* ShootWeaponEntity; // Offset: 0x1640 // Size: 0x08
	struct UWeaponStateDefault* WeaponStateDefault; // Offset: 0x1648 // Size: 0x08
	struct UNoBulletWeaponState* NoBulletWeaponState; // Offset: 0x1650 // Size: 0x08
	struct UFireWeaponState* FireWeaponState; // Offset: 0x1658 // Size: 0x08
	struct UReloadWeaponState* ReloadWeaponState; // Offset: 0x1660 // Size: 0x08
	struct UIdleWeaponState* IdleWeaponState; // Offset: 0x1668 // Size: 0x08
	struct UInactiveWeaponState* InactiveWeaponState; // Offset: 0x1670 // Size: 0x08
	struct UShootWeaponStateManager* ShootWeaponStateManager; // Offset: 0x1678 // Size: 0x08
	struct UShootWeaponEffectComponent* ShootWeaponEffect; // Offset: 0x1680 // Size: 0x08
	struct UBulletTrackComponent* BulletTrack; // Offset: 0x1688 // Size: 0x08
	struct USTEShootWeaponProjectComponent* STEShootWeaponProject; // Offset: 0x1690 // Size: 0x08
	bool bUseIdleAnim; // Offset: 0x1698 // Size: 0x01
	char pad_0x1699[0x3]; // Offset: 0x1699 // Size: 0x03
	float FOV; // Offset: 0x169c // Size: 0x04
	float normalShotVoiceDis; // Offset: 0x16a0 // Size: 0x04
	float SlienceShotVoiceDis; // Offset: 0x16a4 // Size: 0x04
	struct UMeshComponent* MagComp; // Offset: 0x16a8 // Size: 0x08
	struct FName MagCompAttachSocket; // Offset: 0x16b0 // Size: 0x08
	struct ADropDownWeaponMag_C* DropDownMag; // Offset: 0x16b8 // Size: 0x08
	struct FTimerHandle DropDownMagTimerHandle; // Offset: 0x16c0 // Size: 0x08
	float MagDropDownDelay; // Offset: 0x16c8 // Size: 0x04
	struct FVector MagDropDownOffset; // Offset: 0x16cc // Size: 0x0c
	bool MagDropDownEnable; // Offset: 0x16d8 // Size: 0x01
	char pad_0x16D9[0x3]; // Offset: 0x16d9 // Size: 0x03
	float MagDropDownHideDelay; // Offset: 0x16dc // Size: 0x04
	float MagInShownDelay; // Offset: 0x16e0 // Size: 0x04
	float ShineIntensity; // Offset: 0x16e4 // Size: 0x04
	bool ShootState; // Offset: 0x16e8 // Size: 0x01
	char pad_0x16E9[0x3]; // Offset: 0x16e9 // Size: 0x03
	float totalDeltaSeconds; // Offset: 0x16ec // Size: 0x04
	struct UParticleSystemComponent* BlinkLightEffect; // Offset: 0x16f0 // Size: 0x08
	struct FRotator ShellDropRot; // Offset: 0x16f8 // Size: 0x0c
	bool IsAttachMagToMoveablePlat; // Offset: 0x1704 // Size: 0x01
	char pad_0x1705[0x3]; // Offset: 0x1705 // Size: 0x03
	struct UMeshComponent* MagOfAttachingPawn; // Offset: 0x1708 // Size: 0x28
	struct FTimerHandle MagOutTimerHandle; // Offset: 0x1730 // Size: 0x08

	// Functions

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateSupportAttachments
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateSupportAttachments(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponShootLightEffect
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurWeaponShootLightEffect(struct UFXSystemAsset*& }T-NÑSIQyrHe); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetShineIntensity
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetShineIntensity(float deltaSecond); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetCurWeaponShine
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetCurWeaponShine(float AutoLight, float LightIntensity, float LightFreq, bool& Success); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponLightEffect
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetCurWeaponLightEffect(struct UFXSystemAsset*& ÑSIQyrHe); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponMesh
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetCurWeaponMesh(struct UMeshComponent*& MeshComponent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnMagDropDown
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnMagDropDown(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnHideDropDownMag
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnHideDropDownMag(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagIn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnWeaponMagIn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagOut
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnWeaponMagOut(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BeginRegReloadEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BeginRegReloadEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_PawnAttachMesh
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void BP_PawnAttachMesh(struct UMeshComponent*& PlayerMesh); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadStart
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void BP_OnWeaponReloadStart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadEnd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BP_OnWeaponReloadEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ResetCamera
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetCamera(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.PlayLocalShellDropFX
	// Flags: [Event|Public|BlueprintEvent]
	void PlayLocalShellDropFX(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.EventOnMagDropDown
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventOnMagDropDown(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnClientShootPlayer
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnClientShootPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StartFire
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void StartFire(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnFireHitServer
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnFireHitServer(struct ASTExtraWeapon* Weapon, struct FVector HitPoint); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature(IntProperty SlotID, struct FItemDefineID NewItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StopFire
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void StopFire(enum class EFreshWeaponStateType ToState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.InitWeaponBP
	// Flags: [Event|Public|BlueprintEvent]
	void InitWeaponBP(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ExecuteUbergraph_BP_ShootWeaponBase
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_ShootWeaponBase(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

