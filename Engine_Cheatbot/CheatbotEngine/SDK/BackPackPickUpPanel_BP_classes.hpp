#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C
// Size: 0x47c // Inherited bytes: 0x418
struct UBackPackPickUpPanel_BP_C : UUAEUserWidget {
	// Fields
	struct UGridPanel* GridPanel_1; // Offset: 0x418 // Size: 0x08
	bool NewVar_1; // Offset: 0x420 // Size: 0x01
	char pad_0x421[0x7]; // Offset: 0x421 // Size: 0x07
	MapProperty WeaponAttachPos; // Offset: 0x428 // Size: 0x50
	IntProperty LastPickUpListPanelBoxColumn; // Offset: 0x478 // Size: 0x04

	// Functions

	// Object Name: Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetBackPackPanel
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBackPackPanel(struct UUserWidget*& BackPackPanel); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.AddToWeaponAttachPos
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AddToWeaponAttachPos(IntProperty& attachID, enum class EWeaponAttachmentSocketType Socket); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByRes
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByRes(IntProperty gunresID, IntProperty AttachResID, bool& support); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByDefine
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByDefine(struct FItemDefineID gunDefine, struct FItemDefineID attachDefine, bool& support); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportSocket
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponSupportSocket(IntProperty WeaponId, struct TArray<enum class EWeaponAttachmentSocketType>& socketList); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponAttachPosByResID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponAttachPosByResID(IntProperty resID, enum class EWeaponAttachmentSocketType& Socket); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)
};

