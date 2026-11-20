#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C
// Size: 0xe08 // Inherited bytes: 0xba0
struct UBackpackBlueprintUtils_BP_C : UBackpackBlueprintUtils {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xba0 // Size: 0x08
	struct TArray<struct FBattleItemAdditionalData> EmptyAdditionalData; // Offset: 0xba8 // Size: 0x10
	MapProperty EmptyAssociationMap; // Offset: 0xbb8 // Size: 0x50
	struct TArray<struct FItemAssociation> EmptyAssociationArray; // Offset: 0xc08 // Size: 0x10
	MapProperty EquipmentID2SlotID_Map; // Offset: 0xc18 // Size: 0x50
	MapProperty EquipmentBagID2Level_Map; // Offset: 0xc68 // Size: 0x50
	MapProperty EquipmentHelmetID2Level_Map; // Offset: 0xcb8 // Size: 0x50
	MapProperty EquipmentArmorID2Level_Map; // Offset: 0xd08 // Size: 0x50
	struct TArray<IntProperty> GhillieSuitItem; // Offset: 0xd58 // Size: 0x10
	MapProperty GrenadeTypeToPriority; // Offset: 0xd68 // Size: 0x50
	MapProperty CacheItemId2BagLevelMap; // Offset: 0xdb8 // Size: 0x50

	// Functions

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentSkinIDByAvatar
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetEquipmentSkinIDByAvatar(IntProperty InItemID, struct FGameModePlayerEquipmentAvatar& InEquipmentAvatar); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x3c)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentArmorLevel
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetEquipmentArmorLevel(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentHelmetLevel
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetEquipmentHelmetLevel(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsForceLoadLobbyHandle
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool IsForceLoadLobbyHandle(struct FItemDefineID& InItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsSinkMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsSinkMode(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandleClass
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	struct UObject* GetBattleItemHandleClass(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CanNotAutoSwitchToGrenade
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CanNotAutoSwitchToGrenade(IntProperty InGrenadeID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.PreModifyPickupSettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PreModifyPickupSettingData(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsConsumableMissionItemType
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsConsumableMissionItemType(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetGrenadePriorityByType
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetGrenadePriorityByType(IntProperty InGrenadeType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsIceDrinkEmoteIDInBackpack
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool IsIceDrinkEmoteIDInBackpack(IntProperty InItemID, IntProperty InEmoteID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsEquipmentItem
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsEquipmentItem(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateVirtualItemHandle
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct UBattleItemHandleBase* CreateVirtualItemHandle(struct FItemDefineID& DefineID, struct UObject* Outer); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetPendantIDByWeaponID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	IntProperty GetPendantIDByWeaponID(IntProperty WeaponId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetWeaponSkinMappingID
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	IntProperty GetWeaponSkinMappingID(IntProperty InWeaponSkinID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemOperationSoundAndBank
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool GetItemOperationSoundAndBank(IntProperty ItemSoundID, enum class EBattleItemOperationType ItemOperation, StrProperty& OutBankName, StrProperty& OutSoundName); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x29)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGlideItemType
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsGlideItemType(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGhillieSuitItemType
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsGhillieSuitItemType(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentBagLevel
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetEquipmentBagLevel(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentLevel
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetEquipmentLevel(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.Is3BackpackID
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool Is3BackpackID(IntProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsInPveMode
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsInPveMode(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsPVEMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsPVEMode(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifySetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ModifySetting(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyPickupSetting
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ModifyPickupSetting(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyBulletAndMedician
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ModifyBulletAndMedician(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPIDByResID
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetBPIDByResID(IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddToWeaponAttachPos(IntProperty attachID, enum class EWeaponAttachmentSocketType Socket); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitItemTable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	StrProperty GetBattleItemHandlePath(struct FItemDefineID& DefineID, bool bLobby, bool bForceLobby); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	StrProperty GetRawBattleTextByRawTextID(IntProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	StrProperty GetRawBattleTextByType(enum class EBattleTextType Type, IntProperty InSubType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetItemSubTypeID(IntProperty SpecificID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x38)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	void GenerateItemDefineIDByItemTableID(IntProperty ItemTableID, IntProperty& Type, IntProperty& TypeSpecificID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool IsVirtualItemData(struct FBattleItemData& ItemData); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct UBattleItemHandleBase* GetCharacterVirtualItemHandleInBackpack(struct UBackpackComponent* BackpackComp); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	void CreateBattleItemHandle_Character(struct UObject* Outer, struct UBattleItemHandleBase*& BattleItemHandle); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	void CreateBattleItemHandle_Default(IntProperty Type, IntProperty ID, struct UObject* Outer, bool bLobby, struct UBattleItemHandleBase*& BattleItemHandle); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData
	// Flags: [Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	void GetBattleItemFeatureData(struct FItemDefineID DefineID, struct FBattleItemFeatureData& FeatureData); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct UBattleItemHandleBase* CreateBattleItemHandle(struct FItemDefineID& DefineID, struct UObject* Outer, bool bLobby); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FBattleItemData GetCharacterVirtualItemInBackpack(struct UBackpackComponent* BackpackComp); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemData ConstructBattleItemDataByItemTableID(IntProperty ItemTableID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemData ConstructBattleItemDataByDefineID(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack
	// Flags: [Event|Protected|BlueprintEvent]
	void AddCharacterVirtualItemToBackpack(struct UBackpackComponent* BackpackComp, struct ASTExtraBaseCharacter* Character); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable
	// Flags: [Event|Protected|BlueprintEvent]
	void InitialItemTable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BackpackBlueprintUtils_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

