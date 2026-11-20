#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C
// Size: 0xb92 // Inherited bytes: 0xb08
struct UBattleItemHandle_AvatarBP_C : UBackpackAvatarHandle {
	// Fields
	struct ASTExtraPlayerController* OwningPlayerController; // Offset: 0xb08 // Size: 0x08
	struct ASTExtraBaseCharacter* OwningCharacter; // Offset: 0xb10 // Size: 0x08
	struct UBackpackComponent* OwningBackpackComponent; // Offset: 0xb18 // Size: 0x08
	struct FTransform SourceWrapperTrans; // Offset: 0xb20 // Size: 0x30
	struct FTransform WrapperPutdownTrans; // Offset: 0xb50 // Size: 0x30
	struct APickUpWrapperActor* WrapperClass; // Offset: 0xb80 // Size: 0x08
	struct UBattleItemHandleBase* CharacterItemHandle; // Offset: 0xb88 // Size: 0x08
	enum class EnumAvatarSlotNameConfig SlotNameConfig; // Offset: 0xb90 // Size: 0x01
	enum class EnumAvatarForceGender ForceGender; // Offset: 0xb91 // Size: 0x01

	// Functions

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.IsSwimConfig
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsSwimConfig(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.BPNeedCheckCapacityInHandleDisuse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool BPNeedCheckCapacityInHandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWrapperClass
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetWrapperClass(struct APickUpWrapperActor*& WrapperClass); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.ExtractItemData
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemData ExtractItemData(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.LocalHandleDisuse
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LocalHandleDisuse(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWorldInternal
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	struct UWorld* GetWorldInternal(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.SpawnWrapperOnGround
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SpawnWrapperOnGround(struct APickUpWrapperActor* WrapperClass, bool bUseRandomLoc); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDisuse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDrop
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDrop(IntProperty InCount, enum class EBattleItemDropReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandlePickup
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x6a)

	// Object Name: Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleUse
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x2a)
};

