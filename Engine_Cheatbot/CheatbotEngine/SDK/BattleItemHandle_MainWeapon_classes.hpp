#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C
// Size: 0xa61 // Inherited bytes: 0x8f2
struct UBattleItemHandle_MainWeapon_C : UBattleItemHandleWeaponBase_Handle_C {
	// Fields
	char pad_0x8F2[0x6]; // Offset: 0x8f2 // Size: 0x06
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x8f8 // Size: 0x08
	struct UWeaponManagerComponent* WeaponManager; // Offset: 0x900 // Size: 0x08
	struct FName Socket; // Offset: 0x908 // Size: 0x08
	struct UBattleItemHandleBase* CharacterItemHandle; // Offset: 0x910 // Size: 0x08
	struct ASTExtraWeapon* WeaponClass; // Offset: 0x918 // Size: 0x08
	struct TArray<struct FWeaponAttachmentSlot> AvailableWeaponAttachment; // Offset: 0x920 // Size: 0x10
	struct ASTExtraWeapon* TargetWeaponActor; // Offset: 0x930 // Size: 0x08
	struct FName MainLogicSlot1Name; // Offset: 0x938 // Size: 0x08
	struct FName MainLogicSlot2Name; // Offset: 0x940 // Size: 0x08
	struct APickUpWrapperActor* WrapperClass; // Offset: 0x948 // Size: 0x08
	MapProperty WeaponAttachmentSockTypeList; // Offset: 0x950 // Size: 0x50
	struct APickUpWrapperActor* BulletWrapperClass; // Offset: 0x9a0 // Size: 0x08
	MapProperty EquipedWeapAttachments; // Offset: 0x9a8 // Size: 0x50
	bool bResetInitBulletInBullet; // Offset: 0x9f8 // Size: 0x01
	bool bIsPistol; // Offset: 0x9f9 // Size: 0x01
	char pad_0x9FA[0x6]; // Offset: 0x9fa // Size: 0x06
	struct FName SubLogicSlotName; // Offset: 0xa00 // Size: 0x08
	struct FBattleItemPickupInfo BattleIItemHandlePickInfo; // Offset: 0xa08 // Size: 0x58
	bool IsAttachPendant; // Offset: 0xa60 // Size: 0x01

	// Functions

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.MakeBulletInBagOrOnGround
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MakeBulletInBagOrOnGround(struct FItemDefineID BulletDefine, IntProperty Count); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CanDropWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CanDropWeapon(enum class EBattleItemDropReason DropReason, bool& bCanDrop); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleOnWeaponDestroy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnWeaponDestroy(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachmentsInArray
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AutoEquipAttachmentsInArray(struct TArray<struct UBattleItemHandleBase*>& Array, bool bReplaceUse); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnMultiBullet
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReturnMultiBullet(IntProperty WantReturnCount); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWrapperClass
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWrapperClass(bool& found, struct APickUpWrapperActor*& WrapperClass); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetBulletWrapperClass
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetBulletWrapperClass(IntProperty BulletID, bool& found, struct APickUpWrapperActor*& WrapperClass); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWeaponClass
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponClass(bool& found, struct ASTExtraWeapon*& WeaponClass); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateVirtualPendantItemHandle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CreateVirtualPendantItemHandle(struct FItemDefineID ItemDefineID, struct UBattleItemHandleBase*& ItemHandle); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipPendant
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AutoEquipPendant(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.EquipPendant
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void EquipPendant(IntProperty pendantID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CheckPendantCanAttach
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckPendantCanAttach(bool& CanAttach); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetOwingtWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetOwingtWeapon(struct ASTExtraWeapon*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachments
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AutoEquipAttachments(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullets
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReturnBullets(IntProperty Count); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.UpdateEquipedAttach
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateEquipedAttach(enum class EWeaponAttachmentSocketType WeapAttachSockType, struct UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalHandleDisuse
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LocalHandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateWrapperOnGround
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CreateWrapperOnGround(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableTargetLogicSocketName
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAvailableTargetLogicSocketName(struct FName TargetSocket, struct FName& Ret, bool& bNeedPutDownOldWeapon, bool& bAutoUse); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableInstantLogicSocketName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetAvailableInstantLogicSocketName(struct FName& Ret, bool& bNeedPutDownOldWeapon, bool& bAutoUse); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.JudgeHasTargetAttachmentSlot
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void JudgeHasTargetAttachmentSlot(IntProperty AttachBPID, enum class EWeaponAttachmentSocketType AttachType, struct UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, IntProperty AttachResID, bool& CanEquip, bool& HasOcupied, bool& CanReplace); // Offset: 0x1048d7660 // Return & Params: Num(8) Size(0x1b)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDisuse
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleUse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x2a)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDrop
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool HandleDrop(IntProperty InCount, enum class EBattleItemDropReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandlePickup
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x6a)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnAllBullets
	// Flags: [Event|Public|BlueprintEvent]
	void ReturnAllBullets(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalAutoEquipAttachments
	// Flags: [Event|Public|BlueprintEvent]
	void LocalAutoEquipAttachments(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullet
	// Flags: [Event|Public|BlueprintEvent]
	void ReturnBullet(IntProperty BulletNum); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ExecuteUbergraph_BattleItemHandle_MainWeapon
	// Flags: [None]
	void ExecuteUbergraph_BattleItemHandle_MainWeapon(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

