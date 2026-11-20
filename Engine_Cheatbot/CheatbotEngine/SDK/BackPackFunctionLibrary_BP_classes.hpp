#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C
// Size: 0x28 // Inherited bytes: 0x28
struct UBackPackFunctionLibrary_BP_C : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAvatarRes
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponAvatarRes(IntProperty WeaponId, struct TArray<struct FBattleItemAdditionalData>& AdditionalDataArray, struct UObject* __WorldContext, IntProperty& WeaponIDOrAvatarID, StrProperty& DIYPlanID); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsCanDropItem
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	void IsCanDropItem(struct FBattleItemData& ItemData, struct UObject* __WorldContext, bool& bCanDrop); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc9)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.UpdataQualityColorAndBG
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdataQualityColorAndBG(IntProperty QualityLevel, struct UImage* QualityImage, struct UImage* QualityBGImage, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetArmorSlotAttributeListByItemID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetArmorSlotAttributeListByItemID(IntProperty ItemId, struct UObject* __WorldContext, struct TArray<IntProperty>& SlotAttributeList, bool& bFound); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetArmorMaxAttribute
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetArmorMaxAttribute(struct UObject* __WorldContext, struct TArray<IntProperty>& ArmorMaxAttribute); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetArmorAttributeListByItemID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetArmorAttributeListByItemID(IntProperty ItemId, struct UObject* __WorldContext, struct TArray<IntProperty>& ArmorAttributeList, bool& bFound); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.AddWeaponSlotAttribute
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AddWeaponSlotAttribute(struct TArray<IntProperty>& BaseAttributeList, struct TArray<IntProperty>& SlotAttributeList, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponMaxAttribute
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponMaxAttribute(struct UObject* __WorldContext, struct TArray<IntProperty>& WeaponMaxAttribute); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetArmorAttributeNameByIndex
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetArmorAttributeNameByIndex(IntProperty Index, struct UObject* __WorldContext, struct FText& AttributeName); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSlotAttributeListByItemID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponSlotAttributeListByItemID(IntProperty ItemId, struct UObject* __WorldContext, struct TArray<IntProperty>& SlotAttributeList, bool& bFound); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttributeNameByIndex
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponAttributeNameByIndex(IntProperty Index, struct UObject* __WorldContext, struct FText& AttributeName); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponBaseAttributeListByItemID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeaponBaseAttributeListByItemID(IntProperty ItemId, struct UObject* __WorldContext, struct TArray<IntProperty>& WeaponAttributeList, bool& bFound); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetAttachmentItemQualityBGImagePath
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAttachmentItemQualityBGImagePath(IntProperty Sele, struct UObject* __WorldContext, StrProperty& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetAttachFitQualityBGImagePath
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAttachFitQualityBGImagePath(IntProperty Sele, struct UObject* __WorldContext, StrProperty& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetItemQualityBGImagePath
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetItemQualityBGImagePath(IntProperty Sele, struct UObject* __WorldContext, StrProperty& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetColorWithItemQuality
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetColorWithItemQuality(IntProperty Sele, struct UObject* __WorldContext, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsArmorAttach
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsArmorAttach(struct FItemDefineID DefineID, struct UObject* __WorldContext, bool& IsAttach); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetEmoteIDAndVoiceNameByItemID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetEmoteIDAndVoiceNameByItemID(IntProperty ItemId, struct UObject* __WorldContext, IntProperty& EmoteId, StrProperty& VoiceName); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.AttachSocket2Index
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void AttachSocket2Index(enum class EWeaponAttachmentSocketType Selection, struct UObject* __WorldContext, IntProperty& Index); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByResID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByResID(IntProperty gunresID, IntProperty AttachResID, struct UUAEUserWidget* Widget, struct UObject* __WorldContext, bool& support); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x19)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefineID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByDefineID(struct FItemDefineID gunDefine, struct FItemDefineID attachDefine, struct UUAEUserWidget* Widget, struct UObject* __WorldContext, bool& support); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x41)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportSocket
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponSupportSocket(IntProperty WeaponId, struct UUAEUserWidget* Widget, struct UObject* __WorldContext, struct TArray<enum class EWeaponAttachmentSocketType>& socketList); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachPosByResID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponAttachPosByResID(IntProperty resID, struct UUAEUserWidget* Widget, struct UObject* __WorldContext, enum class EWeaponAttachmentSocketType& Socket); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportBullet
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsGunSupportBullet(struct ASTExtraWeapon* Weapon, struct FItemDefineID BulletDefineID, struct UObject* __WorldContext, bool& isSupport); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsBullet
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsBullet(struct FItemDefineID DefineID, struct UObject* __WorldContext, bool& IsBullet); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getItemTypeByDefineID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void getItemTypeByDefineID(struct FItemDefineID DefineID, struct UObject* __WorldContext, IntProperty& itemType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByRes
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsGunSupportAttachByRes(IntProperty gunresID, IntProperty AttachResID, struct UUAEUserWidget* Widget, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetBPIDByResID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBPIDByResID(IntProperty resID, struct UObject* __WorldContext, IntProperty& BPID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyDefineID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void getBPIDbyDefineID(struct FItemDefineID DefineID, struct UObject* __WorldContext, IntProperty& BPID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetVolAvatarConfigByResID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetVolAvatarConfigByResID(IntProperty resID, struct UObject* Outer, struct UObject* __WorldContext, struct UBattleItemHandle_AvatarBP_C*& Config); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsAttach
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsAttach(struct FItemDefineID DefineID, struct UObject* __WorldContext, bool& IsAttach); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.isGun
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void isGun(struct FItemDefineID DefineID, struct UObject* __WorldContext, bool& isGun); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetBattleItemByDefineID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetBattleItemByDefineID(struct FItemDefineID DefineID, struct UUserWidget* Widget, struct UObject* __WorldContext, struct FBattleItemData& BattleItemData); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xe8)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByBPID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponHandleByBPID(IntProperty BPID, struct UObject* Outer, struct UObject* __WorldContext, struct UBattleItemHandle_MainWeapon_C*& Handle); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByResID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponHandleByResID(IntProperty resID, struct UObject* Outer, struct UObject* __WorldContext, struct UBattleItemHandle_MainWeapon_C*& Handle); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachConfigByResID
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponAttachConfigByResID(IntProperty resID, struct UObject* Outer, struct UObject* __WorldContext, struct FWeaponAttachmentConfig& Config); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x2b0)
};

