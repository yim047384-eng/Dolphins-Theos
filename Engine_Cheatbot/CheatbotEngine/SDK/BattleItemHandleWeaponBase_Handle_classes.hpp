#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C
// Size: 0x8f2 // Inherited bytes: 0x860
struct UBattleItemHandleWeaponBase_Handle_C : UBackpackWeaponHandle {
	// Fields
	struct ASTExtraPlayerController* OwningPlayerController; // Offset: 0x860 // Size: 0x08
	struct ASTExtraBaseCharacter* OwningCharacter; // Offset: 0x868 // Size: 0x08
	struct UBackpackComponent* OwningBackpackComponent; // Offset: 0x870 // Size: 0x08
	char pad_0x878[0x8]; // Offset: 0x878 // Size: 0x08
	struct FTransform WrapperPutdownTrans; // Offset: 0x880 // Size: 0x30
	struct FTransform SourceWrapperTrans; // Offset: 0x8b0 // Size: 0x30
	struct ABaseAIController* OwningAIController; // Offset: 0x8e0 // Size: 0x08
	struct FName TargetLogicSocket; // Offset: 0x8e8 // Size: 0x08
	bool TargetAutoUse; // Offset: 0x8f0 // Size: 0x01
	bool bHidePendantOnScope; // Offset: 0x8f1 // Size: 0x01

	// Functions

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.CanDisuseOldWeapon
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CanDisuseOldWeapon(bool bDisuseResult, enum class EBattleItemUseReason InReason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x3)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetBulletNumSaveToWrapper
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	void GetBulletNumSaveToWrapper(IntProperty& Num); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalData
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	void ConditionalAddAdditionalData(struct TArray<struct FBattleItemAdditionalData>& InAdditionalData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalDataToWrapper
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ConditionalAddAdditionalDataToWrapper(struct APickUpWrapperActor* PickUpWrapper); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWeaponClassFromTable
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetWeaponClassFromTable(bool& found, struct ASTExtraWeapon*& WeaponClass); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.EnableWeaponAttachmentBindDropToWeaponWrapper
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void EnableWeaponAttachmentBindDropToWeaponWrapper(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ParseAdditionalData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ParseAdditionalData(struct FBattleItemPickupInfo PickupInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetOwingtWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetOwingtWeapon(struct ASTExtraWeapon*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.SpawnWrapperOnGround
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SpawnWrapperOnGround(struct APickUpWrapperActor* WrapperClass, bool bUseRandomLoc, struct FItemDefineID InDefineID, struct APickUpWrapperActor*& TargetWrapper); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWorldInternal
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	struct UWorld* GetWorldInternal(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDisuse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleUse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x2a)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDrop
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDrop(IntProperty InCount, enum class EBattleItemDropReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandlePickup
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x6a)

	// Object Name: Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ExtractItemData
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemData ExtractItemData(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc0)
};

