#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BattleItemHandle_Pistol.BattleItemHandle_Pistol_C
// Size: 0x941 // Inherited bytes: 0x8f2
struct UBattleItemHandle_Pistol_C : UBattleItemHandleWeaponBase_Handle_C {
	// Fields
	char pad_0x8F2[0x6]; // Offset: 0x8f2 // Size: 0x06
	struct FName Socket; // Offset: 0x8f8 // Size: 0x08
	struct UBattleItemHandleBase* CharacterItemHandle; // Offset: 0x900 // Size: 0x08
	struct ASTExtraWeapon* TargetWeaponActor; // Offset: 0x908 // Size: 0x08
	struct FName LogicSlotName; // Offset: 0x910 // Size: 0x08
	struct UWeaponManagerComponent* WeaponManager; // Offset: 0x918 // Size: 0x08
	struct TArray<struct FWeaponAttachmentSlot> AvailableWeaponAttachment; // Offset: 0x920 // Size: 0x10
	struct TArray<enum class EWeaponAttachmentSocketType> WeaponAttachmentSockTypeList; // Offset: 0x930 // Size: 0x10
	bool bCheckUseState; // Offset: 0x940 // Size: 0x01

	// Functions

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetWrapperClass
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetWrapperClass(bool& found, struct APickUpWrapperActor*& WrapperClass); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleWeaponDestroy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleWeaponDestroy(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.IsMainSlotsHaveWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsMainSlotsHaveWeapon(bool& HasWeapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetOwingtWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetOwingtWeapon(struct ASTExtraWeapon*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LocalHandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAvailableTargetLogicSocketName(struct FName TargetSocket, struct FName& Ret, bool& bNeedPutDownOldWeapon, bool& bAutoUse); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAvailableInstantLogicSocketName(struct FName& Ret, bool& bNeedPutDownOldWeapon, bool& bAutoUse); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CreateWrapperOnGround(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x6a)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x2a)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleDrop(IntProperty InCount, enum class EBattleItemDropReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)
};

