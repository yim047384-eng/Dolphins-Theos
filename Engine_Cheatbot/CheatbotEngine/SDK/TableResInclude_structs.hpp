#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct TableResInclude.AudioVehicle_TabRes
// Size: 0x28 // Inherited bytes: 0x00
struct FAudioVehicle_TabRes {
	// Fields
	StrProperty ID; // Offset: 0x00 // Size: 0x10
	IntProperty MinValue; // Offset: 0x10 // Size: 0x04
	IntProperty MaxValue; // Offset: 0x14 // Size: 0x04
	IntProperty Distance; // Offset: 0x18 // Size: 0x04
	IntProperty IsOpen; // Offset: 0x1c // Size: 0x04
	IntProperty Value; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.CarMusic_TabRes
// Size: 0xb8 // Inherited bytes: 0x00
struct FCarMusic_TabRes {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Music5; // Offset: 0x08 // Size: 0x10
	IntProperty Music1Probability; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty Music3; // Offset: 0x20 // Size: 0x10
	IntProperty Music7Probability; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty Music2; // Offset: 0x38 // Size: 0x10
	IntProperty Music2Probability; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	StrProperty Music1; // Offset: 0x50 // Size: 0x10
	IntProperty Music4Probability; // Offset: 0x60 // Size: 0x04
	IntProperty Music5Probability; // Offset: 0x64 // Size: 0x04
	StrProperty Music6; // Offset: 0x68 // Size: 0x10
	StrProperty Music7; // Offset: 0x78 // Size: 0x10
	StrProperty Music8; // Offset: 0x88 // Size: 0x10
	StrProperty Music4; // Offset: 0x98 // Size: 0x10
	IntProperty Music8Probability; // Offset: 0xa8 // Size: 0x04
	IntProperty Music6Probability; // Offset: 0xac // Size: 0x04
	IntProperty Music3Probability; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.DropConfig_TabRes
// Size: 0xc0 // Inherited bytes: 0x00
struct FDropConfig_TabRes {
	// Fields
	IntProperty DropPercent3; // Offset: 0x00 // Size: 0x04
	IntProperty DropMode9; // Offset: 0x04 // Size: 0x04
	IntProperty MonsterID; // Offset: 0x08 // Size: 0x04
	IntProperty DropRuleStart7; // Offset: 0x0c // Size: 0x04
	IntProperty DropRuleStart2; // Offset: 0x10 // Size: 0x04
	IntProperty DropRuleStart3; // Offset: 0x14 // Size: 0x04
	IntProperty DropRuleEnd9; // Offset: 0x18 // Size: 0x04
	IntProperty DropMode4; // Offset: 0x1c // Size: 0x04
	IntProperty DropPercent10; // Offset: 0x20 // Size: 0x04
	IntProperty DropPercent7; // Offset: 0x24 // Size: 0x04
	IntProperty DropRuleStart5; // Offset: 0x28 // Size: 0x04
	IntProperty DropRuleEnd5; // Offset: 0x2c // Size: 0x04
	IntProperty DropRuleStart6; // Offset: 0x30 // Size: 0x04
	IntProperty DropRuleStart8; // Offset: 0x34 // Size: 0x04
	IntProperty DropRuleEnd8; // Offset: 0x38 // Size: 0x04
	IntProperty DropMode8; // Offset: 0x3c // Size: 0x04
	IntProperty DropRuleEnd7; // Offset: 0x40 // Size: 0x04
	IntProperty DropMode6; // Offset: 0x44 // Size: 0x04
	IntProperty DropPercent5; // Offset: 0x48 // Size: 0x04
	IntProperty DropMode10; // Offset: 0x4c // Size: 0x04
	IntProperty DropRuleEnd2; // Offset: 0x50 // Size: 0x04
	IntProperty DropRuleEnd3; // Offset: 0x54 // Size: 0x04
	IntProperty DropRuleEnd10; // Offset: 0x58 // Size: 0x04
	IntProperty DropMode5; // Offset: 0x5c // Size: 0x04
	IntProperty DropPercent8; // Offset: 0x60 // Size: 0x04
	IntProperty DropPercent6; // Offset: 0x64 // Size: 0x04
	IntProperty DropRuleStart9; // Offset: 0x68 // Size: 0x04
	IntProperty DropRuleStart10; // Offset: 0x6c // Size: 0x04
	IntProperty DropMode7; // Offset: 0x70 // Size: 0x04
	IntProperty DropRuleEnd6; // Offset: 0x74 // Size: 0x04
	IntProperty DropRuleIDNumber; // Offset: 0x78 // Size: 0x04
	IntProperty DropPercent1; // Offset: 0x7c // Size: 0x04
	IntProperty DropPercent9; // Offset: 0x80 // Size: 0x04
	IntProperty DropMode1; // Offset: 0x84 // Size: 0x04
	StrProperty TreasureBoxName; // Offset: 0x88 // Size: 0x10
	IntProperty DropPercent4; // Offset: 0x98 // Size: 0x04
	IntProperty TreasureBoxType; // Offset: 0x9c // Size: 0x04
	IntProperty DropMode2; // Offset: 0xa0 // Size: 0x04
	IntProperty DropRuleStart1; // Offset: 0xa4 // Size: 0x04
	IntProperty DropPercent2; // Offset: 0xa8 // Size: 0x04
	IntProperty DropRuleStart4; // Offset: 0xac // Size: 0x04
	IntProperty DropMode3; // Offset: 0xb0 // Size: 0x04
	IntProperty DropRuleEnd4; // Offset: 0xb4 // Size: 0x04
	IntProperty DropRuleEnd1; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.EvoBaseMapUIMarkTable
// Size: 0x30 // Inherited bytes: 0x08
struct FEvoBaseMapUIMarkTable : FTableRowBase {
	// Fields
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	IntProperty UIBPSrcID; // Offset: 0x0c // Size: 0x04
	StrProperty UIBPSoftPtr; // Offset: 0x10 // Size: 0x10
	StrProperty UIDescription; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct TableResInclude.EvoBaseModTableTestTable
// Size: 0x28 // Inherited bytes: 0x08
struct FEvoBaseModTableTestTable : FTableRowBase {
	// Fields
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty TestString; // Offset: 0x10 // Size: 0x10
	IntProperty TestNumber; // Offset: 0x20 // Size: 0x04
	bool TestBool; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct TableResInclude.GrenadeSortPriority_TabRes
// Size: 0x50 // Inherited bytes: 0x00
struct FGrenadeSortPriority_TabRes {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty GrenadeEnumValue; // Offset: 0x04 // Size: 0x04
	IntProperty Priority; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty BPPath; // Offset: 0x10 // Size: 0x10
	IntProperty SwitchOrder; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty pressedimagepath; // Offset: 0x28 // Size: 0x10
	StrProperty ImagePath; // Offset: 0x38 // Size: 0x10
	IntProperty countdown; // Offset: 0x48 // Size: 0x04
	IntProperty skillindex; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.ItemSpawnDataSub_TabRes
// Size: 0x78 // Inherited bytes: 0x00
struct FItemSpawnDataSub_TabRes {
	// Fields
	IntProperty Weight; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty CategoryFilter; // Offset: 0x08 // Size: 0x10
	IntProperty KeyID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty ItemPath; // Offset: 0x20 // Size: 0x10
	IntProperty CountMin; // Offset: 0x30 // Size: 0x04
	IntProperty StackCount; // Offset: 0x34 // Size: 0x04
	IntProperty Count; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty ValueFilter; // Offset: 0x40 // Size: 0x10
	IntProperty CountMax; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty ItemTogetherPath; // Offset: 0x58 // Size: 0x10
	StrProperty SubCategoryFilter; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct TableResInclude.ItemSpawnData_TabRes
// Size: 0x60 // Inherited bytes: 0x00
struct FItemSpawnData_TabRes {
	// Fields
	StrProperty ItemPath; // Offset: 0x00 // Size: 0x10
	IntProperty Weight; // Offset: 0x10 // Size: 0x04
	IntProperty StackCount; // Offset: 0x14 // Size: 0x04
	StrProperty ValueFilter; // Offset: 0x18 // Size: 0x10
	IntProperty KeyID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty CategoryFilter; // Offset: 0x30 // Size: 0x10
	IntProperty CountMax; // Offset: 0x40 // Size: 0x04
	IntProperty CountMin; // Offset: 0x44 // Size: 0x04
	StrProperty ItemTogetherPath; // Offset: 0x48 // Size: 0x10
	IntProperty Count; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.ItemTag_TabRes
// Size: 0x20 // Inherited bytes: 0x00
struct FItemTag_TabRes {
	// Fields
	IntProperty TagValue; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	StrProperty TagName; // Offset: 0x08 // Size: 0x10
	IntProperty ID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.Item_TabRes
// Size: 0x1d8 // Inherited bytes: 0x00
struct FItem_TabRes {
	// Fields
	StrProperty ItemBigIcon; // Offset: 0x00 // Size: 0x10
	IntProperty MaxCount; // Offset: 0x10 // Size: 0x04
	IntProperty BPID; // Offset: 0x14 // Size: 0x04
	IntProperty itemType; // Offset: 0x18 // Size: 0x04
	bool AutoEquipandDrop; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	IntProperty ItemId; // Offset: 0x20 // Size: 0x04
	bool Consumable; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	StrProperty ItemDesc; // Offset: 0x28 // Size: 0x10
	StrProperty ItemSmallIcon; // Offset: 0x38 // Size: 0x10
	StrProperty ItemName; // Offset: 0x48 // Size: 0x10
	StrProperty WardrobeTab; // Offset: 0x58 // Size: 0x10
	IntProperty ItemSubType; // Offset: 0x68 // Size: 0x04
	bool Equippable; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	float UnitWeight_f; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	StrProperty ItemWhiteIcon; // Offset: 0x78 // Size: 0x10
	IntProperty ItemQuality; // Offset: 0x88 // Size: 0x04
	IntProperty SellTokenType; // Offset: 0x8c // Size: 0x04
	IntProperty SellPrice; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	StrProperty PickupSound; // Offset: 0x98 // Size: 0x10
	StrProperty UnEquipSound; // Offset: 0xa8 // Size: 0x10
	StrProperty DropSound; // Offset: 0xb8 // Size: 0x10
	StrProperty EquipSound; // Offset: 0xc8 // Size: 0x10
	StrProperty UnEquipBank; // Offset: 0xd8 // Size: 0x10
	StrProperty EquipBank; // Offset: 0xe8 // Size: 0x10
	StrProperty DropBank; // Offset: 0xf8 // Size: 0x10
	StrProperty PickUpBank; // Offset: 0x108 // Size: 0x10
	StrProperty KillWhiteIcon; // Offset: 0x118 // Size: 0x10
	bool NeedShare; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x3]; // Offset: 0x129 // Size: 0x03
	IntProperty WeightforOrder; // Offset: 0x12c // Size: 0x04
	StrProperty Preview; // Offset: 0x130 // Size: 0x10
	StrProperty ExTime; // Offset: 0x140 // Size: 0x10
	StrProperty JumpUrl; // Offset: 0x150 // Size: 0x10
	IntProperty SourceBookEnable; // Offset: 0x160 // Size: 0x04
	char pad_0x164[0x4]; // Offset: 0x164 // Size: 0x04
	StrProperty PickupDesc; // Offset: 0x168 // Size: 0x10
	IntProperty WardrobeMainTab; // Offset: 0x178 // Size: 0x04
	IntProperty Durability; // Offset: 0x17c // Size: 0x04
	StrProperty JumpExchangeUrl; // Offset: 0x180 // Size: 0x10
	IntProperty LongDescID; // Offset: 0x190 // Size: 0x04
	IntProperty AIFullVaule; // Offset: 0x194 // Size: 0x04
	StrProperty ItemSmallIcon2; // Offset: 0x198 // Size: 0x10
	StrProperty ItemBigIcon2; // Offset: 0x1a8 // Size: 0x10
	StrProperty BackpackSimple; // Offset: 0x1b8 // Size: 0x10
	IntProperty useType; // Offset: 0x1c8 // Size: 0x04
	IntProperty Gender; // Offset: 0x1cc // Size: 0x04
	IntProperty ArmoryJumpId; // Offset: 0x1d0 // Size: 0x04
	IntProperty CharmValue; // Offset: 0x1d4 // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.MonsterSpawnData_TabRes
// Size: 0x70 // Inherited bytes: 0x00
struct FMonsterSpawnData_TabRes {
	// Fields
	StrProperty ValueFilter; // Offset: 0x00 // Size: 0x10
	StrProperty ItemTogetherPath; // Offset: 0x10 // Size: 0x10
	StrProperty MetaData; // Offset: 0x20 // Size: 0x10
	IntProperty Count; // Offset: 0x30 // Size: 0x04
	IntProperty CountMin; // Offset: 0x34 // Size: 0x04
	IntProperty StackCount; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty CategoryFilter; // Offset: 0x40 // Size: 0x10
	IntProperty Weight; // Offset: 0x50 // Size: 0x04
	IntProperty KeyID; // Offset: 0x54 // Size: 0x04
	StrProperty ItemPath; // Offset: 0x58 // Size: 0x10
	IntProperty CountMax; // Offset: 0x68 // Size: 0x04
	IntProperty MonsterID; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.PawnStateInvisUI_TabRes
// Size: 0x20 // Inherited bytes: 0x00
struct FPawnStateInvisUI_TabRes {
	// Fields
	StrProperty UIClassName; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> InvisPawnState_a; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct TableResInclude.RoleUpgradeTable_TabRes
// Size: 0x14 // Inherited bytes: 0x00
struct FRoleUpgradeTable_TabRes {
	// Fields
	IntProperty Capacity; // Offset: 0x00 // Size: 0x04
	IntProperty Level; // Offset: 0x04 // Size: 0x04
	float ZombieInjury_f; // Offset: 0x08 // Size: 0x04
	float MovingSpeed_f; // Offset: 0x0c // Size: 0x04
	IntProperty Exp; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.VehicleMaxHP_TabRes
// Size: 0x40 // Inherited bytes: 0x00
struct FVehicleMaxHP_TabRes {
	// Fields
	IntProperty HPNum; // Offset: 0x00 // Size: 0x04
	IntProperty VehicleItemID; // Offset: 0x04 // Size: 0x04
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty EndTime; // Offset: 0x10 // Size: 0x10
	StrProperty ModuleTypeID; // Offset: 0x20 // Size: 0x10
	StrProperty StartTime; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct TableResInclude.VehicleSpawn_TabRes
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleSpawn_TabRes {
	// Fields
	StrProperty VehicleType; // Offset: 0x00 // Size: 0x10
	IntProperty KeyID; // Offset: 0x10 // Size: 0x04
	bool SnapFloor; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	IntProperty Weight; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty Vehicle; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct TableResInclude.VibrateAssetsConfig_TabRes
// Size: 0x140 // Inherited bytes: 0x00
struct FVibrateAssetsConfig_TabRes {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AssetRelativePath; // Offset: 0x08 // Size: 0x10
	StrProperty PlayVibrateParam; // Offset: 0x18 // Size: 0x10
	IntProperty TriggerEventType; // Offset: 0x28 // Size: 0x04
	IntProperty PlayPriority; // Offset: 0x2c // Size: 0x04
	float PlayDuration_f; // Offset: 0x30 // Size: 0x04
	bool bOnlyMatchMainItemType; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	IntProperty TriggerMainItemType; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty TriggerMainItemData; // Offset: 0x40 // Size: 0x10
	IntProperty TriggerSubItem1Type; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty TriggerSubItem1Data; // Offset: 0x58 // Size: 0x10
	IntProperty TriggerSubItem2Type; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty TriggerSubItem2Data; // Offset: 0x70 // Size: 0x10
	IntProperty TriggerSubItem3Type; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty TriggerSubItem3Data; // Offset: 0x88 // Size: 0x10
	IntProperty TriggerSubItem4Type; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	StrProperty TriggerSubItem4Data; // Offset: 0xa0 // Size: 0x10
	IntProperty TriggerSubItem5Type; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	StrProperty TriggerSubItem5Data; // Offset: 0xb8 // Size: 0x10
	IntProperty TriggerSubItem6Type; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	StrProperty TriggerSubItem6Data; // Offset: 0xd0 // Size: 0x10
	IntProperty TriggerSubItem7Type; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
	StrProperty TriggerSubItem7Data; // Offset: 0xe8 // Size: 0x10
	IntProperty TriggerSubItem8Type; // Offset: 0xf8 // Size: 0x04
	char pad_0xFC[0x4]; // Offset: 0xfc // Size: 0x04
	StrProperty TriggerSubItem8Data; // Offset: 0x100 // Size: 0x10
	IntProperty TriggerSubItem9Type; // Offset: 0x110 // Size: 0x04
	char pad_0x114[0x4]; // Offset: 0x114 // Size: 0x04
	StrProperty TriggerSubItem9Data; // Offset: 0x118 // Size: 0x10
	IntProperty TriggerSubItem10Type; // Offset: 0x128 // Size: 0x04
	char pad_0x12C[0x4]; // Offset: 0x12c // Size: 0x04
	StrProperty TriggerSubItem10Data; // Offset: 0x130 // Size: 0x10
};

// Object Name: ScriptStruct TableResInclude.WeaponAttachments_TabRes
// Size: 0x84 // Inherited bytes: 0x00
struct FWeaponAttachments_TabRes {
	// Fields
	IntProperty Magazine1ID; // Offset: 0x00 // Size: 0x04
	IntProperty Stock2ID; // Offset: 0x04 // Size: 0x04
	IntProperty Lower1ID; // Offset: 0x08 // Size: 0x04
	IntProperty Lower2ID; // Offset: 0x0c // Size: 0x04
	IntProperty Magazine3ID; // Offset: 0x10 // Size: 0x04
	IntProperty Stock1ID; // Offset: 0x14 // Size: 0x04
	IntProperty Magazine2ID; // Offset: 0x18 // Size: 0x04
	IntProperty Muzzle2ID; // Offset: 0x1c // Size: 0x04
	IntProperty Upper1ID; // Offset: 0x20 // Size: 0x04
	IntProperty Upper2ID; // Offset: 0x24 // Size: 0x04
	IntProperty Muzzle1ID; // Offset: 0x28 // Size: 0x04
	IntProperty Upper4ID; // Offset: 0x2c // Size: 0x04
	IntProperty KeyID; // Offset: 0x30 // Size: 0x04
	IntProperty Muzzle3ID; // Offset: 0x34 // Size: 0x04
	IntProperty Upper3ID; // Offset: 0x38 // Size: 0x04
	IntProperty Upper5ID; // Offset: 0x3c // Size: 0x04
	IntProperty BulletID; // Offset: 0x40 // Size: 0x04
	IntProperty ProposeBulletNum; // Offset: 0x44 // Size: 0x04
	IntProperty Lower3ID; // Offset: 0x48 // Size: 0x04
	IntProperty Lower5ID; // Offset: 0x4c // Size: 0x04
	IntProperty Lower4ID; // Offset: 0x50 // Size: 0x04
	IntProperty Upper7ID; // Offset: 0x54 // Size: 0x04
	IntProperty Muzzle5ID; // Offset: 0x58 // Size: 0x04
	IntProperty Muzzle6ID; // Offset: 0x5c // Size: 0x04
	IntProperty Muzzle4ID; // Offset: 0x60 // Size: 0x04
	IntProperty Magazine6ID; // Offset: 0x64 // Size: 0x04
	IntProperty Magazine4ID; // Offset: 0x68 // Size: 0x04
	IntProperty Magazine5ID; // Offset: 0x6c // Size: 0x04
	IntProperty Upper6ID; // Offset: 0x70 // Size: 0x04
	IntProperty AIMaxAttackDist; // Offset: 0x74 // Size: 0x04
	IntProperty AIMinAttackDist; // Offset: 0x78 // Size: 0x04
	IntProperty Lower6ID; // Offset: 0x7c // Size: 0x04
	IntProperty UpperSide1ID; // Offset: 0x80 // Size: 0x04
};

// Object Name: ScriptStruct TableResInclude.ZombieTreasureBox_TabRes
// Size: 0x20 // Inherited bytes: 0x00
struct FZombieTreasureBox_TabRes {
	// Fields
	StrProperty BoxPath; // Offset: 0x00 // Size: 0x10
	IntProperty ID; // Offset: 0x10 // Size: 0x04
	IntProperty BoxHealth; // Offset: 0x14 // Size: 0x04
	IntProperty TimeToCount; // Offset: 0x18 // Size: 0x04
	IntProperty BoxDropPlan; // Offset: 0x1c // Size: 0x04
};

