#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C
// Size: 0x4c8 // Inherited bytes: 0x480
struct UBattleItemHandle_WeapAttachment_C : UBackpackWeaponAttachHandle {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x480 // Size: 0x08
	struct ASTExtraShootWeapon* Weapon; // Offset: 0x488 // Size: 0x08
	struct APickUpWrapperActor* WrapperClass; // Offset: 0x490 // Size: 0x08
	struct UBackpackComponent* OwningBackpackComponent; // Offset: 0x498 // Size: 0x08
	struct ASTExtraBaseCharacter* OwningCharacter; // Offset: 0x4a0 // Size: 0x08
	struct UBattleItemHandle_MainWeapon_C* CachedWeaponHandle; // Offset: 0x4a8 // Size: 0x08
	struct FItemDefineID ReplacedDefineID; // Offset: 0x4b0 // Size: 0x18

	// Functions

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CalculateEquipAccessoriesPriority
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CalculateEquipAccessoriesPriority(struct UBattleItemHandle_MainWeapon_C* Weapon, struct UBattleItemHandleBase* Accessories, IntProperty WeaponPriority, IntProperty& OutPriority); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ClearWeaponActor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearWeaponActor(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReAutoEquip
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReAutoEquip(struct ASTExtraBaseCharacter* ACharacter, struct UBattleItemHandleWeaponBase_Handle_C* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.RemoveParentAdditionData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RemoveParentAdditionData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanDisuseToBackpackWithoutSelf
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CanDisuseToBackpackWithoutSelf(struct FItemDefineID DefineID, bool& bCanDisuse); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUseWithPackage
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckCanUseWithPackage(bool& bCanUse); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetCanEquipWeapon
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCanEquipWeapon(bool bCanSwap, struct ASTExtraBaseCharacter* ACharater, bool bReplace, struct FBattleItemUseTarget& Target, bool& HasTarget, struct UBattleItemHandle_MainWeapon_C*& TargetWeaponHandle, struct ASTExtraWeapon*& WeaponActor); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x58)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetItemBaseBySlot
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetItemBaseBySlot(enum class ESurviveWeaponPropSlot Slot, struct ASTExtraBaseCharacter* ACharacter, struct UItemHandleBase*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckTargetValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckTargetValid(struct UItemHandleBase* ItemHandleBase, bool CanSwap, bool bReplace, struct FBattleItemUseTarget& Target, bool& HasTarget, struct UBattleItemHandle_MainWeapon_C*& TargetWeaponHandle, struct ASTExtraWeapon*& WeaponActor); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x50)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUse
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool CheckCanUse(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x3a)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReplaceAttach
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReplaceAttach(struct UBattleItemHandle_MainWeapon_C* TWeaponItemHandle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanSwap
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CanSwap(struct UBackpackWeaponAttachHandle* SpecificID, bool& Can); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.FilterWeaponItemHandle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void FilterWeaponItemHandle(struct UBattleItemHandleBase* InputItemHandle, bool IsPickupDirectlyEquip, struct FBattleItemUseTarget& Target, bool& HasTarget, struct UBattleItemHandle_MainWeapon_C*& TargetWeaponHandle, struct ASTExtraWeapon*& WeaponActor); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x50)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExtractItemData
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemData ExtractItemData(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetWorldInternal
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	struct UWorld* GetWorldInternal(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CreateWrapperOnGround
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CreateWrapperOnGround(IntProperty Count); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDrop
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDrop(IntProperty InCount, enum class EBattleItemDropReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandlePickup
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x6a)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDisuse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleUse
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x2a)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReturnWeaponAdditionalBulletsToBackpack
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void ReturnWeaponAdditionalBulletsToBackpack(struct ASTExtraShootWeapon* Weapon, IntProperty BulletNum); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExecuteUbergraph_BattleItemHandle_WeapAttachment
	// Flags: [None]
	void ExecuteUbergraph_BattleItemHandle_WeapAttachment(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

