#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BackpackSys.BackpackSys_C
// Size: 0xe9 // Inherited bytes: 0x98
struct UBackpackSys_C : ULuaBluepirntSys {
	// Fields
	MapProperty WeaponAttachPos; // Offset: 0x98 // Size: 0x50
	bool bPickupListPanelMoveOut; // Offset: 0xe8 // Size: 0x01

	// Functions

	// Object Name: Function BackpackSys.BackpackSys_C.IsLocalpositionInBorder
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool IsLocalpositionInBorder(struct FVector2D LocalCoordinate, struct UWidget* Border); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BackpackSys.BackpackSys_C.CheckNeedVehicleBackPack
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckNeedVehicleBackPack(bool& Need); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackpackSys.BackpackSys_C.IsGunSupportAttachByDefine
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByDefine(struct FItemDefineID gunDefine, struct FItemDefineID attachDefine, bool& support); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function BackpackSys.BackpackSys_C.IsGunSupportAttachByRes
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByRes(IntProperty gunresID, IntProperty AttachResID, bool& support); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function BackpackSys.BackpackSys_C.GetWeaponSupportSocket
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponSupportSocket(IntProperty WeaponId, struct TArray<enum class EWeaponAttachmentSocketType>& socketList); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BackpackSys.BackpackSys_C.GetWeaponSupportAttachResID
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponSupportAttachResID(IntProperty WeaponId, struct TArray<IntProperty>& attachID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BackpackSys.BackpackSys_C.GetWeaponAttachPosByResID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponAttachPosByResID(IntProperty resID, enum class EWeaponAttachmentSocketType& Socket); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackSys.BackpackSys_C.AddToWeaponAttachPos
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AddToWeaponAttachPos(IntProperty& attachID, enum class EWeaponAttachmentSocketType Socket); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)
};

