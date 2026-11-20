#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Basic.AttrModifyItem
// Size: 0x48 // Inherited bytes: 0x00
struct FAttrModifyItem {
	// Fields
	struct TArray<struct FCacheAffactTargetInfo> AffectTargetsCachInfo; // Offset: 0x00 // Size: 0x10
	StrProperty AttrModifyItemName; // Offset: 0x10 // Size: 0x10
	StrProperty AttrName; // Offset: 0x20 // Size: 0x10
	IntProperty AttrID; // Offset: 0x30 // Size: 0x04
	IntProperty CompareId; // Offset: 0x34 // Size: 0x04
	enum class EAttrOperator ModifierOp; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float ModifierValue; // Offset: 0x3c // Size: 0x04
	bool IsEnable; // Offset: 0x40 // Size: 0x01
	bool ClientSimulate; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x6]; // Offset: 0x42 // Size: 0x06
};

// Object Name: ScriptStruct Basic.CacheAffactTargetInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCacheAffactTargetInfo {
	// Fields
	struct TWeakObjectPtr<struct AActor> AffectTarget; // Offset: 0x00 // Size: 0x08
	float FinalAddValue; // Offset: 0x08 // Size: 0x04
	uint32_t CModifyUid; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.AttrModifyRecordItem
// Size: 0x28 // Inherited bytes: 0x00
struct FAttrModifyRecordItem {
	// Fields
	struct FAttrDesc AttrDesc; // Offset: 0x00 // Size: 0x18
	struct TArray<struct FAttrModifyRecordDetails> DetailsArray; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Basic.AttrModifyRecordDetails
// Size: 0x28 // Inherited bytes: 0x00
struct FAttrModifyRecordDetails {
	// Fields
	StrProperty ModifyDesc; // Offset: 0x00 // Size: 0x10
	IntProperty NextIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FAttrModifyRecordDetail> Data; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Basic.AttrModifyRecordDetail
// Size: 0x10 // Inherited bytes: 0x00
struct FAttrModifyRecordDetail {
	// Fields
	float PreModifyValue; // Offset: 0x00 // Size: 0x04
	float AfterModifyValue; // Offset: 0x04 // Size: 0x04
	float WorldTime; // Offset: 0x08 // Size: 0x04
	IntProperty ModifyType; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.AttrDesc
// Size: 0x18 // Inherited bytes: 0x00
struct FAttrDesc {
	// Fields
	StrProperty AttrName; // Offset: 0x00 // Size: 0x10
	bool bNeedSync; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float CurValue; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.AttrDynamicModifyItem
// Size: 0x28 // Inherited bytes: 0x00
struct FAttrDynamicModifyItem {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
	struct TWeakObjectPtr<struct UObject> Causer; // Offset: 0x1c // Size: 0x08
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Basic.AttrDynamicModifyTarget
// Size: 0x18 // Inherited bytes: 0x00
struct FAttrDynamicModifyTarget {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FAttrDynamicModifyItem> List; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.AttrAffected
// Size: 0x18 // Inherited bytes: 0x00
struct FAttrAffected {
	// Fields
	StrProperty AttrName; // Offset: 0x00 // Size: 0x10
	struct AActor* AffectedActor; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Basic.AttrRegisterItem
// Size: 0x38 // Inherited bytes: 0x00
struct FAttrRegisterItem {
	// Fields
	IntProperty AttrID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AttrName; // Offset: 0x08 // Size: 0x10
	enum class EAttrVariableType AttrVariableType; // Offset: 0x18 // Size: 0x01
	bool HasReplicatedTag; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x1e]; // Offset: 0x1a // Size: 0x1e
};

// Object Name: ScriptStruct Basic.ModAttrSimulateSyncItem
// Size: 0x08 // Inherited bytes: 0x00
struct FModAttrSimulateSyncItem {
	// Fields
	IntProperty AttrID; // Offset: 0x00 // Size: 0x04
	float FinalValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Basic.RelateAttributeGroup
// Size: 0x50 // Inherited bytes: 0x00
struct FRelateAttributeGroup {
	// Fields
	MapProperty RelateAttributes; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.AttributeExpand
// Size: 0x48 // Inherited bytes: 0x00
struct FAttributeExpand {
	// Fields
	StrProperty AttrName; // Offset: 0x00 // Size: 0x10
	StrProperty AttrDesc; // Offset: 0x10 // Size: 0x10
	IntProperty RelateTypeId; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty RelateGroup; // Offset: 0x28 // Size: 0x10
	float Value; // Offset: 0x38 // Size: 0x04
	IntProperty nValue; // Offset: 0x3c // Size: 0x04
	char bValue; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct Basic.AttrDynamicModifier
// Size: 0xa8 // Inherited bytes: 0x00
struct FAttrDynamicModifier {
	// Fields
	MapProperty ModifyAttrs; // Offset: 0x00 // Size: 0x50
	MapProperty ModifyConfigs; // Offset: 0x50 // Size: 0x50
	struct UAttrModifyComponent* Component; // Offset: 0xa0 // Size: 0x08
};

// Object Name: ScriptStruct Basic.AttrDynamicModifyConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FAttrDynamicModifyConfig {
	// Fields
	bool IsOneceModify; // Offset: 0x00 // Size: 0x01
	bool HasLimitAttr; // Offset: 0x01 // Size: 0x01
	bool HasMaxAttr; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x5]; // Offset: 0x03 // Size: 0x05
	StrProperty AttrName; // Offset: 0x08 // Size: 0x10
	StrProperty LimitAttrName; // Offset: 0x18 // Size: 0x10
	StrProperty MaxAttrName; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Basic.ItemDefineID
// Size: 0x18 // Inherited bytes: 0x00
struct FItemDefineID {
	// Fields
	IntProperty Type; // Offset: 0x00 // Size: 0x04
	IntProperty TypeSpecificID; // Offset: 0x04 // Size: 0x04
	bool bValidItem; // Offset: 0x08 // Size: 0x01
	bool bValidInstance; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	uint64 InstanceID; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Basic.ClientBaseInfo
// Size: 0x158 // Inherited bytes: 0x00
struct FClientBaseInfo {
	// Fields
	StrProperty OpenID; // Offset: 0x00 // Size: 0x10
	uint64 RoleID; // Offset: 0x10 // Size: 0x08
	StrProperty GameSvrId; // Offset: 0x18 // Size: 0x10
	StrProperty GameAppID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	uint64 GameID; // Offset: 0x58 // Size: 0x08
	StrProperty BattleServerIP; // Offset: 0x60 // Size: 0x10
	uint32_t BattleServerPort; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x88 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct TArray<IntProperty> MrpcsData; // Offset: 0xa0 // Size: 0x10
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	MapProperty AdvConfig; // Offset: 0xb8 // Size: 0x50
	MapProperty AdvTextureList; // Offset: 0x108 // Size: 0x50
};

// Object Name: ScriptStruct Basic.BuffSyncBrief
// Size: 0x38 // Inherited bytes: 0x00
struct FBuffSyncBrief {
	// Fields
	IntProperty InstID; // Offset: 0x00 // Size: 0x04
	char LayerCount; // Offset: 0x04 // Size: 0x01
	char LayerMax; // Offset: 0x05 // Size: 0x01
	char Level; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
	IntProperty BuffID; // Offset: 0x08 // Size: 0x04
	IntProperty CauseSkillID; // Offset: 0x0c // Size: 0x04
	struct AActor* CauseActor; // Offset: 0x10 // Size: 0x08
	float SyncTime; // Offset: 0x18 // Size: 0x04
	float Duration; // Offset: 0x1c // Size: 0x04
	float EndTime; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<float> CDDataArray; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Basic.BuffReplaceData
// Size: 0x08 // Inherited bytes: 0x00
struct FBuffReplaceData {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	bool bBuffInst; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Basic.BuffIncNetArray
// Size: 0x20 // Inherited bytes: 0x00
struct FBuffIncNetArray {
	// Fields
	struct TArray<struct FBuffNetArrayUnit> IncArray; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Basic.BuffNetArrayUnit
// Size: 0x40 // Inherited bytes: 0x00
struct FBuffNetArrayUnit {
	// Fields
	struct FBuffSyncBrief Unit; // Offset: 0x00 // Size: 0x38
	bool bMarkDelete; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Basic.BattleItemAdditionalData
// Size: 0x28 // Inherited bytes: 0x00
struct FBattleItemAdditionalData {
	// Fields
	enum class EBattleItemAdditionalDataType EDataType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty IntData; // Offset: 0x04 // Size: 0x04
	StrProperty StringData; // Offset: 0x08 // Size: 0x10
	float FloatData; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	uint64 Uint64Data; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Basic.ItemAssociation
// Size: 0x28 // Inherited bytes: 0x00
struct FItemAssociation {
	// Fields
	IntProperty AssociationType; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FItemDefineID AssociationTargetDefineID; // Offset: 0x08 // Size: 0x18
	struct UItemHandleBase* AssociationTargetHandle; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Basic.BattleItemUseTarget
// Size: 0x28 // Inherited bytes: 0x00
struct FBattleItemUseTarget {
	// Fields
	struct FItemDefineID TargetDefineID; // Offset: 0x00 // Size: 0x18
	IntProperty TargetAssociationType; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct AActor* TargetActor; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Basic.ItemData
// Size: 0x58 // Inherited bytes: 0x00
struct FItemData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FItemDefineID DefineID; // Offset: 0x08 // Size: 0x18
	StrProperty Name; // Offset: 0x20 // Size: 0x10
	StrProperty Desc; // Offset: 0x30 // Size: 0x10
	StrProperty Icon; // Offset: 0x40 // Size: 0x10
	struct UItemHandleBase* ItemHandle; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct Basic.BattleItemData
// Size: 0xc0 // Inherited bytes: 0x58
struct FBattleItemData : FItemData {
	// Fields
	IntProperty Count; // Offset: 0x58 // Size: 0x04
	bool bEquipping; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x60 // Size: 0x10
	IntProperty Durability; // Offset: 0x70 // Size: 0x04
	enum class EItemStoreArea ItemStoreArea; // Offset: 0x74 // Size: 0x01
	char pad_0x75[0x3]; // Offset: 0x75 // Size: 0x03
	int64_t Priority; // Offset: 0x78 // Size: 0x08
	struct FBattleItemFeatureData FeatureData; // Offset: 0x80 // Size: 0x30
	struct TArray<struct FItemAssociation> Associations; // Offset: 0xb0 // Size: 0x10
};

// Object Name: ScriptStruct Basic.BattleItemFeatureData
// Size: 0x30 // Inherited bytes: 0x00
struct FBattleItemFeatureData {
	// Fields
	float UnitWeight; // Offset: 0x00 // Size: 0x04
	IntProperty MaxCount; // Offset: 0x04 // Size: 0x04
	IntProperty CountLimit; // Offset: 0x08 // Size: 0x04
	bool bUnique; // Offset: 0x0c // Size: 0x01
	bool bStackable; // Offset: 0x0d // Size: 0x01
	bool bEquippable; // Offset: 0x0e // Size: 0x01
	bool bConsumable; // Offset: 0x0f // Size: 0x01
	bool bAutoEquipAndDrop; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty ItemAttrsFlag; // Offset: 0x14 // Size: 0x04
	IntProperty SortingPriority; // Offset: 0x18 // Size: 0x04
	IntProperty Worth; // Offset: 0x1c // Size: 0x04
	IntProperty ItemCapacity; // Offset: 0x20 // Size: 0x04
	IntProperty ItemDurability; // Offset: 0x24 // Size: 0x04
	IntProperty itemType; // Offset: 0x28 // Size: 0x04
	IntProperty ItemSubType; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Basic.BattleItemPickupInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FBattleItemPickupInfo {
	// Fields
	struct UObject* Source; // Offset: 0x00 // Size: 0x08
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x10 // Size: 0x10
	bool bAutoEquip; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct FBattleItemUseTarget AutoEquipTarget; // Offset: 0x28 // Size: 0x28
	bool bDropOnDead; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct Basic.BattleItemSpectatingData
// Size: 0x08 // Inherited bytes: 0x00
struct FBattleItemSpectatingData {
	// Fields
	IntProperty TypeSpecificID; // Offset: 0x00 // Size: 0x04
	IntProperty AdditionalData; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Basic.ItemFixTableItem
// Size: 0x18 // Inherited bytes: 0x00
struct FItemFixTableItem {
	// Fields
	IntProperty ValidTimes; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ExTime; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.AttrModifyRepItem
// Size: 0x10 // Inherited bytes: 0x00
struct FAttrModifyRepItem {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct AActor* TargetActor; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.AttrRowData
// Size: 0x28 // Inherited bytes: 0x00
struct FAttrRowData {
	// Fields
	IntProperty AttrGroup; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AttrName; // Offset: 0x08 // Size: 0x10
	enum class EAttrVariableType AttrVariableType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float OriginalValue; // Offset: 0x1c // Size: 0x04
	float MinValue; // Offset: 0x20 // Size: 0x04
	float MaxValue; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Basic.AttrModifyGroupItem
// Size: 0x10 // Inherited bytes: 0x00
struct FAttrModifyGroupItem {
	// Fields
	struct TArray<struct FAttrModifyItem> AttrModifyItem; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Basic.PlayerThrowInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FPlayerThrowInfo {
	// Fields
	struct TArray<struct FBattleItemSpectatingData> PlayerThrowInfo; // Offset: 0x00 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x10 // Size: 0x04
	uint32_t TeamID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.PlayerBackPackInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FPlayerBackPackInfo {
	// Fields
	struct TArray<struct FBattleItemSpectatingData> PlayerBackPackInfo; // Offset: 0x00 // Size: 0x10
	IntProperty MainWeapon1TypeSpecificID; // Offset: 0x10 // Size: 0x04
	IntProperty MainWeapon1AmmoNuminClip; // Offset: 0x14 // Size: 0x04
	IntProperty MainWeapon2TypeSpecificID; // Offset: 0x18 // Size: 0x04
	IntProperty MainWeapon2AmmoNuminClip; // Offset: 0x1c // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x20 // Size: 0x04
	uint32_t TeamID; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Basic.BattleItemPickupAfterLand
// Size: 0x78 // Inherited bytes: 0x00
struct FBattleItemPickupAfterLand {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	struct FBattleItemPickupInfo PickupInfo; // Offset: 0x18 // Size: 0x58
	enum class EBattleItemPickupReason Reason; // Offset: 0x70 // Size: 0x01
	enum class EBattleItemClientPickupType BattleItemClientPickupType; // Offset: 0x71 // Size: 0x01
	char pad_0x72[0x6]; // Offset: 0x72 // Size: 0x06
};

// Object Name: ScriptStruct Basic.TagItemList
// Size: 0x10 // Inherited bytes: 0x00
struct FTagItemList {
	// Fields
	struct TArray<IntProperty> tagList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Basic.TagOneItem
// Size: 0x08 // Inherited bytes: 0x00
struct FTagOneItem {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Basic.PickupProposeData
// Size: 0x128 // Inherited bytes: 0x00
struct FPickupProposeData {
	// Fields
	struct TArray<struct FPickupFirstCount> TaskPickFirst; // Offset: 0x00 // Size: 0x10
	IntProperty closeSubType; // Offset: 0x10 // Size: 0x04
	IntProperty crossbowSubType; // Offset: 0x14 // Size: 0x04
	IntProperty pistolSubType; // Offset: 0x18 // Size: 0x04
	IntProperty gunType; // Offset: 0x1c // Size: 0x04
	IntProperty specialType; // Offset: 0x20 // Size: 0x04
	IntProperty specialType2; // Offset: 0x24 // Size: 0x04
	IntProperty ID2Type; // Offset: 0x28 // Size: 0x04
	IntProperty pistolClipSubType; // Offset: 0x2c // Size: 0x04
	IntProperty SubMachineGunClipSubType; // Offset: 0x30 // Size: 0x04
	IntProperty SniperClipSubType; // Offset: 0x34 // Size: 0x04
	IntProperty RifleClipSubType; // Offset: 0x38 // Size: 0x04
	IntProperty gasSubID; // Offset: 0x3c // Size: 0x04
	IntProperty backSubType; // Offset: 0x40 // Size: 0x04
	IntProperty MedicalSubType; // Offset: 0x44 // Size: 0x04
	IntProperty BandageID; // Offset: 0x48 // Size: 0x04
	IntProperty EnergyDrinksID; // Offset: 0x4c // Size: 0x04
	IntProperty AdrenalineID; // Offset: 0x50 // Size: 0x04
	IntProperty AnodyneID; // Offset: 0x54 // Size: 0x04
	IntProperty Medical1ID; // Offset: 0x58 // Size: 0x04
	IntProperty Medical2ID; // Offset: 0x5c // Size: 0x04
	struct TArray<IntProperty> SideMirrorList; // Offset: 0x60 // Size: 0x10
	struct TArray<IntProperty> MirrorList; // Offset: 0x70 // Size: 0x10
	IntProperty ViscidityBomb; // Offset: 0x80 // Size: 0x04
	IntProperty DefaultMedicineNum; // Offset: 0x84 // Size: 0x04
	IntProperty helmetSubType; // Offset: 0x88 // Size: 0x04
	IntProperty armorSubType; // Offset: 0x8c // Size: 0x04
	IntProperty ScoreItemSubType; // Offset: 0x90 // Size: 0x04
	IntProperty SpecialNoDropItemSubType; // Offset: 0x94 // Size: 0x04
	IntProperty IceDrinkItemSubType; // Offset: 0x98 // Size: 0x04
	IntProperty IsAutoPickUpTaskSubType; // Offset: 0x9c // Size: 0x04
	IntProperty CapacityThreshold; // Offset: 0xa0 // Size: 0x04
	IntProperty GlideSubType; // Offset: 0xa4 // Size: 0x04
	IntProperty ParachuteItemSubType; // Offset: 0xa8 // Size: 0x04
	IntProperty revivalCardID; // Offset: 0xac // Size: 0x04
	float revivalCardValidTime; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct TArray<IntProperty> firewoodPriority; // Offset: 0xb8 // Size: 0x10
	struct TArray<IntProperty> meatPriority; // Offset: 0xc8 // Size: 0x10
	struct TArray<IntProperty> UAVList; // Offset: 0xd8 // Size: 0x10
	struct TArray<IntProperty> ElectricityList; // Offset: 0xe8 // Size: 0x10
	struct TArray<IntProperty> ToUseInBackpackSubList; // Offset: 0xf8 // Size: 0x10
	struct TArray<IntProperty> ToUseInBackpackIDList; // Offset: 0x108 // Size: 0x10
	struct TArray<IntProperty> notExtractItemIDList; // Offset: 0x118 // Size: 0x10
};

// Object Name: ScriptStruct Basic.PickupFirstCount
// Size: 0x08 // Inherited bytes: 0x00
struct FPickupFirstCount {
	// Fields
	IntProperty pickID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Basic.PickupSettingForTPlan
// Size: 0x1e8 // Inherited bytes: 0x00
struct FPickupSettingForTPlan {
	// Fields
	IntProperty LimitSkillProps; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty LimitBulletMap_XT; // Offset: 0x08 // Size: 0x50
	MapProperty LimitDrugMap_XT; // Offset: 0x58 // Size: 0x50
	MapProperty LimitThrowObjMap_XT; // Offset: 0xa8 // Size: 0x50
	MapProperty LimitMultipleMirrorMap_XT; // Offset: 0xf8 // Size: 0x50
	MapProperty LimitNormalInfillingMap_XT; // Offset: 0x148 // Size: 0x50
	MapProperty LimitHalloweenInfillingMap_XT; // Offset: 0x198 // Size: 0x50
};

// Object Name: ScriptStruct Basic.PickupSetting
// Size: 0x1a8 // Inherited bytes: 0x00
struct FPickupSetting {
	// Fields
	IntProperty LimitViscidityBomb; // Offset: 0x00 // Size: 0x04
	bool AutoPickupPistol; // Offset: 0x04 // Size: 0x01
	bool AutoPickupLevel3Backpack; // Offset: 0x05 // Size: 0x01
	bool AutoPickupSideMirror; // Offset: 0x06 // Size: 0x01
	bool AutoPickupSkillProps; // Offset: 0x07 // Size: 0x01
	IntProperty LimitSkillProps; // Offset: 0x08 // Size: 0x04
	bool AutoPickMirror; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty AutoPickClipType; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	MapProperty LimitDrugMap; // Offset: 0x18 // Size: 0x50
	MapProperty LimitThrowObjMap; // Offset: 0x68 // Size: 0x50
	MapProperty LimitMultipleMirrorMap; // Offset: 0xb8 // Size: 0x50
	MapProperty LimitFixConsumeItemMap; // Offset: 0x108 // Size: 0x50
	MapProperty LimitSeasonItemMap; // Offset: 0x158 // Size: 0x50
};

// Object Name: ScriptStruct Basic.SpecPickItem
// Size: 0x0c // Inherited bytes: 0x00
struct FSpecPickItem {
	// Fields
	IntProperty item_id; // Offset: 0x00 // Size: 0x04
	IntProperty cur_count; // Offset: 0x04 // Size: 0x04
	IntProperty total_count; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Basic.ItemRecordData
// Size: 0x100 // Inherited bytes: 0x00
struct FItemRecordData {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty itemType; // Offset: 0x08 // Size: 0x04
	IntProperty ItemSubType; // Offset: 0x0c // Size: 0x04
	IntProperty BPID; // Offset: 0x10 // Size: 0x04
	IntProperty WeightforOrder; // Offset: 0x14 // Size: 0x04
	IntProperty Worth; // Offset: 0x18 // Size: 0x04
	IntProperty ItemCapacity; // Offset: 0x1c // Size: 0x04
	IntProperty Durability; // Offset: 0x20 // Size: 0x04
	IntProperty ItemSoundID; // Offset: 0x24 // Size: 0x04
	IntProperty ItemQuality; // Offset: 0x28 // Size: 0x04
	IntProperty ItemPickupRule; // Offset: 0x2c // Size: 0x04
	IntProperty AIFullVaule; // Offset: 0x30 // Size: 0x04
	float Weight; // Offset: 0x34 // Size: 0x04
	IntProperty MaxCount; // Offset: 0x38 // Size: 0x04
	bool AutoEquipandDrop; // Offset: 0x3c // Size: 0x01
	bool Consumable; // Offset: 0x3d // Size: 0x01
	bool Equipable; // Offset: 0x3e // Size: 0x01
	char pad_0x3F[0x1]; // Offset: 0x3f // Size: 0x01
	StrProperty ItemName; // Offset: 0x40 // Size: 0x10
	StrProperty ItemBigIcon; // Offset: 0x50 // Size: 0x10
	StrProperty ItemDesc; // Offset: 0x60 // Size: 0x10
	StrProperty ItemSmallIcon; // Offset: 0x70 // Size: 0x10
	StrProperty KillWhiteIcon; // Offset: 0x80 // Size: 0x10
	StrProperty ItemWhiteIcon; // Offset: 0x90 // Size: 0x10
	StrProperty RedEmotionSoundPath; // Offset: 0xa0 // Size: 0x10
	StrProperty PickupDesc; // Offset: 0xb0 // Size: 0x10
	StrProperty BackpackSimple; // Offset: 0xc0 // Size: 0x10
	StrProperty SpecialIcon; // Offset: 0xd0 // Size: 0x10
	StrProperty ItemBigIcon2; // Offset: 0xe0 // Size: 0x10
	StrProperty ItemSmallIcon2; // Offset: 0xf0 // Size: 0x10
};

// Object Name: ScriptStruct Basic.ArmorAttachItemUnit
// Size: 0x20 // Inherited bytes: 0x00
struct FArmorAttachItemUnit {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	enum class EBattleItemAdditionalDataType SlotAdditionalType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct Basic.BPClassItemMap
// Size: 0x50 // Inherited bytes: 0x00
struct FBPClassItemMap {
	// Fields
	MapProperty BPClassModOverridePath; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.BPClassItem
// Size: 0xb0 // Inherited bytes: 0x00
struct FBPClassItem {
	// Fields
	StrProperty ClassTagName; // Offset: 0x00 // Size: 0x10
	struct UClass* NativeClass; // Offset: 0x10 // Size: 0x28
	struct UClass* BPClass; // Offset: 0x38 // Size: 0x28
	MapProperty BPClassModOverridePath; // Offset: 0x60 // Size: 0x50
};

// Object Name: ScriptStruct Basic.BudgetSchedulerChannelConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FBudgetSchedulerChannelConfig {
	// Fields
	struct FName ChannelName; // Offset: 0x00 // Size: 0x08
	float BudgetMsPerFrame; // Offset: 0x08 // Size: 0x04
	IntProperty MaxPerFrame; // Offset: 0x0c // Size: 0x04
	bool bEnabled; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Basic.SkillTableRow
// Size: 0x108 // Inherited bytes: 0x00
struct FSkillTableRow {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	StrProperty IconPath; // Offset: 0x18 // Size: 0x10
	IntProperty SkillType; // Offset: 0x28 // Size: 0x04
	float Coeff1; // Offset: 0x2c // Size: 0x04
	float CoolTime; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty BPPath; // Offset: 0x38 // Size: 0x10
	StrProperty Desc; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> BuffIDs; // Offset: 0x58 // Size: 0x10
	MapProperty BuffLoadTypes; // Offset: 0x68 // Size: 0x50
	char pad_0xB8[0x50]; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct Basic.BuffTableRow
// Size: 0x130 // Inherited bytes: 0x00
struct FBuffTableRow {
	// Fields
	IntProperty BuffID; // Offset: 0x00 // Size: 0x04
	IntProperty MaxLayer; // Offset: 0x04 // Size: 0x04
	float Duration; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty BuffType; // Offset: 0x10 // Size: 0x10
	StrProperty Name; // Offset: 0x20 // Size: 0x10
	StrProperty IconPath; // Offset: 0x30 // Size: 0x10
	StrProperty BPPath; // Offset: 0x40 // Size: 0x10
	StrProperty Desc; // Offset: 0x50 // Size: 0x10
	SetProperty MutexBuffTypes; // Offset: 0x60 // Size: 0x50
	SetProperty ExcludeBuffTypes; // Offset: 0xb0 // Size: 0x50
	enum class EBuffRefreshType RefreshType; // Offset: 0x100 // Size: 0x01
	enum class EBuffReActionType ReActionType; // Offset: 0x101 // Size: 0x01
	enum class EBuffTargetType TargetType; // Offset: 0x102 // Size: 0x01
	enum class EMultiCauserHandleType MultiCauserHanleType; // Offset: 0x103 // Size: 0x01
	enum class EMultiSkillHandleType MultiSkillHandleType; // Offset: 0x104 // Size: 0x01
	enum class EBuffClientSyncType ClientSyncType; // Offset: 0x105 // Size: 0x01
	char pad_0x106[0x2]; // Offset: 0x106 // Size: 0x02
	float ClientSyncInterval; // Offset: 0x108 // Size: 0x04
	bool ExistForever; // Offset: 0x10c // Size: 0x01
	bool IsOnece; // Offset: 0x10d // Size: 0x01
	bool IsClientOwnLife; // Offset: 0x10e // Size: 0x01
	enum class EBuffShowInUIType NeedShowInUIType; // Offset: 0x10f // Size: 0x01
	IntProperty LocalizeDescID; // Offset: 0x110 // Size: 0x04
	IntProperty TipsOnAddBuff; // Offset: 0x114 // Size: 0x04
	IntProperty ModeOpen; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x4]; // Offset: 0x11c // Size: 0x04
	StrProperty ModeStrings; // Offset: 0x120 // Size: 0x10
};

// Object Name: ScriptStruct Basic.GameModeEnvData
// Size: 0x50 // Inherited bytes: 0x00
struct FGameModeEnvData {
	// Fields
	IntProperty ModeID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ModType; // Offset: 0x08 // Size: 0x10
	StrProperty ModType2; // Offset: 0x18 // Size: 0x10
	IntProperty MapID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty MapType; // Offset: 0x30 // Size: 0x10
	StrProperty SubMod; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Basic.RecordItemID
// Size: 0x18 // Inherited bytes: 0x00
struct FRecordItemID {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Basic.StackModifyValue
// Size: 0x08 // Inherited bytes: 0x00
struct FStackModifyValue {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Basic.StackModifyStructValue
// Size: 0x18 // Inherited bytes: 0x08
struct FStackModifyStructValue : FStackModifyValue {
	// Fields
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.StackModifyStringValue
// Size: 0x18 // Inherited bytes: 0x08
struct FStackModifyStringValue : FStackModifyValue {
	// Fields
	StrProperty Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.StackModifyNameValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyNameValue : FStackModifyValue {
	// Fields
	struct FName Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.StackModifyColorValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyColorValue : FStackModifyValue {
	// Fields
	struct FColor Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.StackModifyLinearColorValue
// Size: 0x18 // Inherited bytes: 0x08
struct FStackModifyLinearColorValue : FStackModifyValue {
	// Fields
	struct FLinearColor Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.StackModifyTransformValue
// Size: 0x40 // Inherited bytes: 0x08
struct FStackModifyTransformValue : FStackModifyValue {
	// Fields
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform Value; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct Basic.StackModifyQuatValue
// Size: 0x20 // Inherited bytes: 0x08
struct FStackModifyQuatValue : FStackModifyValue {
	// Fields
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FQuat Value; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Basic.StackModifyRotatorValue
// Size: 0x18 // Inherited bytes: 0x08
struct FStackModifyRotatorValue : FStackModifyValue {
	// Fields
	struct FRotator Value; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.StackModifyIntVectorValue
// Size: 0x18 // Inherited bytes: 0x08
struct FStackModifyIntVectorValue : FStackModifyValue {
	// Fields
	struct FIntVector Value; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.StackModifyIntPointValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyIntPointValue : FStackModifyValue {
	// Fields
	struct FIntPoint Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.StackModifyVector4Value
// Size: 0x20 // Inherited bytes: 0x08
struct FStackModifyVector4Value : FStackModifyValue {
	// Fields
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FVector4 Value; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Basic.StackModifyVectorValue
// Size: 0x18 // Inherited bytes: 0x08
struct FStackModifyVectorValue : FStackModifyValue {
	// Fields
	struct FVector Value; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.StackModifyVector2DValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyVector2DValue : FStackModifyValue {
	// Fields
	struct FVector2D Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.StackModifyFloatValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyFloatValue : FStackModifyValue {
	// Fields
	float Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.StackModifyInt64Value
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyInt64Value : FStackModifyValue {
	// Fields
	int64_t Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.StackModifyInt32Value
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyInt32Value : FStackModifyValue {
	// Fields
	IntProperty Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.StackModifyByteValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyByteValue : FStackModifyValue {
	// Fields
	char Value; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Basic.StackModifyBoolValue
// Size: 0x10 // Inherited bytes: 0x08
struct FStackModifyBoolValue : FStackModifyValue {
	// Fields
	bool Value; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Basic.LuaEventTypeToIDSet
// Size: 0x50 // Inherited bytes: 0x00
struct FLuaEventTypeToIDSet {
	// Fields
	MapProperty EventTypeToIDSet; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.LuaEventTypeIDSet
// Size: 0x50 // Inherited bytes: 0x00
struct FLuaEventTypeIDSet {
	// Fields
	SetProperty EventIDSet; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.LuaEventTypeContainer
// Size: 0x50 // Inherited bytes: 0x00
struct FLuaEventTypeContainer {
	// Fields
	MapProperty EventIDContainer; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.EventTypeContainer
// Size: 0x50 // Inherited bytes: 0x00
struct FEventTypeContainer {
	// Fields
	MapProperty EventIDContainer; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.EventIDContainer
// Size: 0x10 // Inherited bytes: 0x00
struct FEventIDContainer {
	// Fields
	struct TArray<struct FEventValueContainer> EventValueContainer; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Basic.EventValueContainer
// Size: 0x38 // Inherited bytes: 0x00
struct FEventValueContainer {
	// Fields
	struct TWeakObjectPtr<struct UObject> ObjContext; // Offset: 0x00 // Size: 0x08
	StrProperty FunctionName; // Offset: 0x08 // Size: 0x10
	StrProperty EventType; // Offset: 0x18 // Size: 0x10
	StrProperty EventID; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Basic.NetRelevancyGroupManager
// Size: 0x50 // Inherited bytes: 0x00
struct FNetRelevancyGroupManager {
	// Fields
	MapProperty RelevancyGroups; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.NetRelevancyGroupID
// Size: 0x04 // Inherited bytes: 0x00
struct FNetRelevancyGroupID {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffTriggerWrapperItem
// Size: 0x08 // Inherited bytes: 0x00
struct FBuffTriggerWrapperItem {
	// Fields
	struct FTriggerIndex TriggerIndex; // Offset: 0x00 // Size: 0x04
	enum class EBuffConditionFalseExecutePolicy ConditionFalsePolicy; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Basic.TriggerIndex
// Size: 0x04 // Inherited bytes: 0x00
struct FTriggerIndex {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffCheckConditionWrapperItem
// Size: 0x08 // Inherited bytes: 0x00
struct FBuffCheckConditionWrapperItem {
	// Fields
	struct FConditionIndex ConditionIndex; // Offset: 0x00 // Size: 0x04
	enum class EBuffConditionFalseExecuteType FalseExecType; // Offset: 0x04 // Size: 0x01
	enum class EBuffConditionFalseExecuteTypeNew FalseActionType; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
};

// Object Name: ScriptStruct Basic.ConditionIndex
// Size: 0x04 // Inherited bytes: 0x00
struct FConditionIndex {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffConditionActionItem
// Size: 0x08 // Inherited bytes: 0x00
struct FBuffConditionActionItem {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	enum class EBuffConditionInitializeType InitializeType; // Offset: 0x04 // Size: 0x01
	enum class EBuffConditionTrueExecuteType TrueExecType; // Offset: 0x05 // Size: 0x01
	enum class EBuffConditionFalseExecuteType FalseExecType; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
};

// Object Name: ScriptStruct Basic.STBuffInstancedItem
// Size: 0xd0 // Inherited bytes: 0x00
struct FSTBuffInstancedItem {
	// Fields
	IntProperty InstID; // Offset: 0x00 // Size: 0x04
	IntProperty BuffID; // Offset: 0x04 // Size: 0x04
	IntProperty BuffIndex; // Offset: 0x08 // Size: 0x04
	IntProperty LayerCount; // Offset: 0x0c // Size: 0x04
	IntProperty Level; // Offset: 0x10 // Size: 0x04
	bool PendingRemove; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float EndTime; // Offset: 0x18 // Size: 0x04
	float DSEndTime; // Offset: 0x1c // Size: 0x04
	float Duration; // Offset: 0x20 // Size: 0x04
	IntProperty LayerMax; // Offset: 0x24 // Size: 0x04
	struct TArray<float> CDDataArray; // Offset: 0x28 // Size: 0x10
	struct TWeakObjectPtr<struct AActor> Causer; // Offset: 0x38 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> Owner; // Offset: 0x40 // Size: 0x08
	struct TWeakObjectPtr<struct USTBuff> Buff; // Offset: 0x48 // Size: 0x08
	struct TWeakObjectPtr<struct UActorComponent> OwnerSystem; // Offset: 0x50 // Size: 0x08
	IntProperty CauseSkillID; // Offset: 0x58 // Size: 0x04
	float LastSyncClientTime; // Offset: 0x5c // Size: 0x04
	bool IsNeedSyncClient; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x6f]; // Offset: 0x61 // Size: 0x6f
};

// Object Name: ScriptStruct Basic.BuffShared
// Size: 0x08 // Inherited bytes: 0x00
struct FBuffShared {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Basic.BuffStringShared
// Size: 0x18 // Inherited bytes: 0x08
struct FBuffStringShared : FBuffShared {
	// Fields
	StrProperty Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.BuffNameShared
// Size: 0x10 // Inherited bytes: 0x08
struct FBuffNameShared : FBuffShared {
	// Fields
	struct FName Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.BuffRotatorShared
// Size: 0x18 // Inherited bytes: 0x08
struct FBuffRotatorShared : FBuffShared {
	// Fields
	struct FRotator Value; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffVectorShared
// Size: 0x18 // Inherited bytes: 0x08
struct FBuffVectorShared : FBuffShared {
	// Fields
	struct FVector Value; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffInt32Shared
// Size: 0x10 // Inherited bytes: 0x08
struct FBuffInt32Shared : FBuffShared {
	// Fields
	IntProperty Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffFloatShared
// Size: 0x10 // Inherited bytes: 0x08
struct FBuffFloatShared : FBuffShared {
	// Fields
	float Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Basic.BuffUInt8Shared
// Size: 0x10 // Inherited bytes: 0x08
struct FBuffUInt8Shared : FBuffShared {
	// Fields
	char Value; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Basic.BuffBooleanShared
// Size: 0x10 // Inherited bytes: 0x08
struct FBuffBooleanShared : FBuffShared {
	// Fields
	bool Value; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Basic.BuffTargetShared
// Size: 0x18 // Inherited bytes: 0x08
struct FBuffTargetShared : FBuffShared {
	// Fields
	struct TArray<struct TWeakObjectPtr<struct AActor>> Actors; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Basic.TriggerConditionConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FTriggerConditionConfig {
	// Fields
	struct USTBuffCondition* Condition; // Offset: 0x00 // Size: 0x08
	enum class EBuffConditionEvalMode EvalMode; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Basic.MultiStringMap
// Size: 0x50 // Inherited bytes: 0x00
struct FMultiStringMap {
	// Fields
	MapProperty StringMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.StringMap
// Size: 0x50 // Inherited bytes: 0x00
struct FStringMap {
	// Fields
	MapProperty Data; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Basic.TickOptimizationTickSettings
// Size: 0x08 // Inherited bytes: 0x00
struct FTickOptimizationTickSettings {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Interval; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Basic.AnimChildComponentData
// Size: 0x0c // Inherited bytes: 0x00
struct FAnimChildComponentData {
	// Fields
	struct TWeakObjectPtr<struct UUAEAnimListComponentBase> ChildComp; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x4]; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Basic.AnimListMapValueData
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimListMapValueData {
	// Fields
	struct TArray<struct FAnimListData> AnimListMapValue; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Basic.AnimListData
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimListData {
	// Fields
	IntProperty LayerID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimationAsset* Animation; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Basic.GameEngineTickStat
// Size: 0x08 // Inherited bytes: 0x00
struct FGameEngineTickStat {
	// Fields
	float Duration; // Offset: 0x00 // Size: 0x04
	float AvgTickDelta; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Basic.TravelFailureInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FTravelFailureInfo {
	// Fields
	struct UWorld* World; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	StrProperty ErrorMessage; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Basic.NetworkFailureInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FNetworkFailureInfo {
	// Fields
	struct UWorld* World; // Offset: 0x00 // Size: 0x08
	struct UNetDriver* NetDriver; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
	StrProperty ErrorMessage; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Basic.LoadClassArrayParams
// Size: 0x20 // Inherited bytes: 0x00
struct FLoadClassArrayParams {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Basic.TableNameToName
// Size: 0x48 // Inherited bytes: 0x00
struct FTableNameToName {
	// Fields
	struct FName tableName; // Offset: 0x00 // Size: 0x08
	struct FName ID; // Offset: 0x08 // Size: 0x08
	struct FName Name; // Offset: 0x10 // Size: 0x08
	struct FName Path; // Offset: 0x18 // Size: 0x08
	struct FName PathHigh; // Offset: 0x20 // Size: 0x08
	struct FName LobbyPath; // Offset: 0x28 // Size: 0x08
	struct FName LobbyPathHigh; // Offset: 0x30 // Size: 0x08
	struct FName WrapperPath; // Offset: 0x38 // Size: 0x08
	struct FName Custom1; // Offset: 0x40 // Size: 0x08
};

// Object Name: ScriptStruct Basic.BPTableItem
// Size: 0x58 // Inherited bytes: 0x00
struct FBPTableItem {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	StrProperty Path; // Offset: 0x18 // Size: 0x10
	StrProperty LobbyPath; // Offset: 0x28 // Size: 0x10
	StrProperty WrapperPath; // Offset: 0x38 // Size: 0x10
	StrProperty Custom1; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Basic.DSNetSaturateCollectInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FDSNetSaturateCollectInfo {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Basic.UnLoadLevelActorCollection
// Size: 0x18 // Inherited bytes: 0x00
struct FUnLoadLevelActorCollection {
	// Fields
	struct TArray<struct AActor*> LevelActors; // Offset: 0x00 // Size: 0x10
	float CollectionTime; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Basic.DistanceSegmentConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FDistanceSegmentConfig {
	// Fields
	float RadiusSquared; // Offset: 0x00 // Size: 0x04
	IntProperty NumberLimit; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Basic.DistanceSegmentItem
// Size: 0x0c // Inherited bytes: 0x00
struct FDistanceSegmentItem {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct Basic.RPCShareSerializationFunctionPresetConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FRPCShareSerializationFunctionPresetConfig {
	// Fields
	struct FSoftClassPath ClassPath; // Offset: 0x00 // Size: 0x18
	StrProperty FunctionName; // Offset: 0x18 // Size: 0x10
	bool bEligible; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct Basic.PendingRegionNetworkObject
// Size: 0x20 // Inherited bytes: 0x00
struct FPendingRegionNetworkObject {
	// Fields
	struct UObject* RegionObject; // Offset: 0x00 // Size: 0x08
	struct FRegionID OldRegionID; // Offset: 0x08 // Size: 0x0c
	struct FRegionID NewRegionID; // Offset: 0x14 // Size: 0x0c
};

// Object Name: ScriptStruct Basic.DSNetReportInfo
// Size: 0x1c // Inherited bytes: 0x00
struct FDSNetReportInfo {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
};

