#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass DropDownWeaponMag.DropDownWeaponMag_C
// Size: 0x4da // Inherited bytes: 0x4b0
struct ADropDownWeaponMag_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct UCapsuleComponent* Up; // Offset: 0x4b8 // Size: 0x08
	struct UCapsuleComponent* Down; // Offset: 0x4c0 // Size: 0x08
	struct UStaticMeshComponent* Mag; // Offset: 0x4c8 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x4d0 // Size: 0x08
	bool PendingDestroy; // Offset: 0x4d8 // Size: 0x01
	bool CheckRollDown; // Offset: 0x4d9 // Size: 0x01

	// Functions

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.SetMagMaterials
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMagMaterials(struct TArray<struct UMaterialInterface*>& Materials); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.SetPendingDestroyState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetPendingDestroyState(bool isPendingDestroy); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.SetCollisionEnable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCollisionEnable(bool Enable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.SetVisible
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetVisible(bool Visible, struct APawn* Owner); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.SetSimulatePhysics
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSimulatePhysics(bool Enable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.SetMagMesh
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetMagMesh(struct UStaticMesh* Mesh); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.WaitforDestroy
	// Flags: [BlueprintCallable|BlueprintEvent]
	void WaitforDestroy(float LeftTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function DropDownWeaponMag.DropDownWeaponMag_C.ExecuteUbergraph_DropDownWeaponMag
	// Flags: [None]
	void ExecuteUbergraph_DropDownWeaponMag(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

