#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C
// Size: 0x17c0 // Inherited bytes: 0x1738
struct ABP_MachineGun_P90_Set_C : ABP_ShootWeaponBase_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1738 // Size: 0x08
	struct UWeaponAnimList_MachineGun_P90_Set_C* WeaponAnimList_MachineGun_P90_Set; // Offset: 0x1740 // Size: 0x08
	float Timeline_0_NewTrack_0_DEED27684E317110DC84B5A793D676BE; // Offset: 0x1748 // Size: 0x04
	enum class ETimelineDirection Timeline_0__Direction_DEED27684E317110DC84B5A793D676BE; // Offset: 0x174c // Size: 0x01
	char pad_0x174D[0x3]; // Offset: 0x174d // Size: 0x03
	struct UTimelineComponent* Timeline_1; // Offset: 0x1750 // Size: 0x08
	float ____0_NewTrack_0_985222DF4AB9AE652EA12FB4B7A64CB8; // Offset: 0x1758 // Size: 0x04
	enum class ETimelineDirection ____0__Direction_985222DF4AB9AE652EA12FB4B7A64CB8; // Offset: 0x175c // Size: 0x01
	char pad_0x175D[0x3]; // Offset: 0x175d // Size: 0x03
	struct UTimelineComponent* ˆeÙïtè_1; // Offset: 0x1760 // Size: 0x08
	bool bUseIdleAnim_0_1; // Offset: 0x1768 // Size: 0x01
	char pad_0x1769[0x3]; // Offset: 0x1769 // Size: 0x03
	float FovOffset; // Offset: 0x176c // Size: 0x04
	struct FRotator OriginRotOffset; // Offset: 0x1770 // Size: 0x0c
	struct FRotator TargetRotOffset; // Offset: 0x177c // Size: 0x0c
	struct FDollyZoomParam OriginDollyZoomParam; // Offset: 0x1788 // Size: 0x0c
	struct FDollyZoomParam TargetDollyZoomParam; // Offset: 0x1794 // Size: 0x0c
	struct FRotator RotOffset; // Offset: 0x17a0 // Size: 0x0c
	enum class ESightType NormalSightType; // Offset: 0x17ac // Size: 0x01
	enum class ESightType WeaponSightType; // Offset: 0x17ad // Size: 0x01
	char pad_0x17AE[0x2]; // Offset: 0x17ae // Size: 0x02
	struct TArray<enum class EPawnState> CannotPlayPlayerSightStates; // Offset: 0x17b0 // Size: 0x10

	// Functions

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.PlayPlayerSightAnim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayPlayerSightAnim(bool IsClose, bool PlayEnd); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.IsShowSightMesh
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsShowSightMesh(bool& IsShowMesh); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.RefreshSightMeshShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshSightMeshShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.GetWeaponSightFovOffset
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	float GetWeaponSightFovOffset(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.UpdateWeaponSight
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponSight(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.PlaySightAnim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlaySightAnim(bool IsClose, bool PlayEnd); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.HaveWeaponSight
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool HaveWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.ˆeÙïtè_
	// Flags: [BlueprintEvent]
	void ˆeÙïtè_(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.ˆeÙïtè_
	// Flags: [BlueprintEvent]
	void ˆeÙïtè_(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.Timeline_0__FinishedFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.Timeline_0__UpdateFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.OnWeaponScopeIn
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnWeaponScopeIn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.WeaponAvatarLoadFinished
	// Flags: [BlueprintCallable|BlueprintEvent]
	void WeaponAvatarLoadFinished(IntProperty SlotID, struct FItemDefineID NewItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.SwitchWeaponSight
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SwitchWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.OnWeaponEquipDelegat
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnWeaponEquipDelegat(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MachineGun_P90_Set.BP_MachineGun_P90_Set_C.ExecuteUbergraph_BP_MachineGun_P90_Set
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_MachineGun_P90_Set(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

