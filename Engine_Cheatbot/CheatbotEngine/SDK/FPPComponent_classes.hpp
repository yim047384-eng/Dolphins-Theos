#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass FPPComponent.FPPComponent_C
// Size: 0x678 // Inherited bytes: 0x580
struct UFPPComponent_C : UBaseFPPComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x580 // Size: 0x08
	struct ABP_PlayerPawn_C* PawnBP; // Offset: 0x588 // Size: 0x08
	float DeltaTime; // Offset: 0x590 // Size: 0x04
	char pad_0x594[0x4]; // Offset: 0x594 // Size: 0x04
	struct USkeletalMeshComponent* NewVar_1; // Offset: 0x598 // Size: 0x08
	struct UStaticMesh* SightLens; // Offset: 0x5a0 // Size: 0x08
	struct TArray<struct UMaterialInstance*> ScopeMaterialOverride; // Offset: 0x5a8 // Size: 0x10
	struct TArray<IntProperty> Scope4XType1; // Offset: 0x5b8 // Size: 0x10
	struct TArray<IntProperty> Scope4XType2; // Offset: 0x5c8 // Size: 0x10
	MapProperty ScopeColorMap; // Offset: 0x5d8 // Size: 0x50
	MapProperty MaterialCahceMap; // Offset: 0x628 // Size: 0x50

	// Functions

	// Object Name: Function FPPComponent.FPPComponent_C.IsNeedChangeTexOpacity
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsNeedChangeTexOpacity(bool& bNeedChange); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function FPPComponent.FPPComponent_C.GetMateriaByString
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetMateriaByString(StrProperty Name, struct UMaterialInterface*& Material); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function FPPComponent.FPPComponent_C.ScopingAttachToHead
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ScopingAttachToHead(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.ScopingAttachToGun
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ScopingAttachToGun(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.GetScopeMaterialOverride
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct UMaterialInstance* GetScopeMaterialOverride(struct ASTExtraShootWeapon* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function FPPComponent.FPPComponent_C.ResetScreenPercentage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetScreenPercentage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.DownScreenPercentage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DownScreenPercentage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.ChangeScopeTPPGlassMat
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeScopeTPPGlassMat(struct UMeshComponent* ScopeMeshComp, IntProperty ScopeID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function FPPComponent.FPPComponent_C.GetScopeMatTableKey
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetScopeMatTableKey(struct ASTExtraPlayerController* PlayerController, struct ASTExtraShootWeapon* Weapon, enum class EWeaponAttachmentSocketType ScopeType, StrProperty& Key); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function FPPComponent.FPPComponent_C.IsScopeSpecialMatExist
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsScopeSpecialMatExist(struct ASTExtraWeapon* Weapon, enum class EWeaponAttachmentSocketType ScopeType, bool& exist, IntProperty& MatTableKey); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function FPPComponent.FPPComponent_C.SwitchAngledSightConfigMaterial
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	float SwitchAngledSightConfigMaterial(bool forceSwitch); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function FPPComponent.FPPComponent_C.ShowAngledSightTPPMaterial
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	float ShowAngledSightTPPMaterial(bool forceADSState); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function FPPComponent.FPPComponent_C.SwitchSightConfigMaterial
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	float SwitchSightConfigMaterial(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FPPComponent.FPPComponent_C.ShowReflectorSightTPPMaterial
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	float ShowReflectorSightTPPMaterial(bool forceADSState); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function FPPComponent.FPPComponent_C.GetScopeFov
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	float GetScopeFov(struct ASTExtraWeapon* Weapon, bool bIsAngled); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function FPPComponent.FPPComponent_C.SetTagCullingBP
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetTagCullingBP(bool IsUse); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function FPPComponent.FPPComponent_C.requestResourceGuarantee
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void requestResourceGuarantee(IntProperty InOrOut, enum class ELoadMode loadMode, enum class EApplyStatus applyStatus); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function FPPComponent.FPPComponent_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function FPPComponent.FPPComponent_C.ReloadEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ReloadEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.SetTagCulling
	// Flags: [Event|Protected|BlueprintEvent]
	void SetTagCulling(bool IsUse); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function FPPComponent.FPPComponent_C.PlayScopeInTimeline
	// Flags: [Event|Protected|BlueprintEvent]
	void PlayScopeInTimeline(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.ScopeInEnd
	// Flags: [Event|Protected|BlueprintEvent]
	void ScopeInEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.ScopeOutEnd
	// Flags: [Event|Protected|BlueprintEvent]
	void ScopeOutEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.StopScopeIn
	// Flags: [Event|Protected|BlueprintEvent]
	void StopScopeIn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.AttachToSight
	// Flags: [Event|Protected|BlueprintEvent]
	void AttachToSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.AttachTo
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AttachTo(struct USceneComponent* NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function FPPComponent.FPPComponent_C.Detach
	// Flags: [BlueprintCallable|BlueprintEvent]
	void Detach(struct USceneComponent* NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function FPPComponent.FPPComponent_C.AutoReloadEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AutoReloadEvent(struct ASTExtraShootWeapon* ShootWeapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function FPPComponent.FPPComponent_C.AttachToSightKeepTransform
	// Flags: [Event|Protected|BlueprintEvent]
	void AttachToSightKeepTransform(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FPPComponent.FPPComponent_C.ExecuteUbergraph_FPPComponent
	// Flags: [None]
	void ExecuteUbergraph_FPPComponent(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

