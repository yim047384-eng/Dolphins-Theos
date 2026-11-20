#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponAttachments_type.BP_STRUCT_WeaponAttachments_type
// Size: 0xb8 // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponAttachments_type {
	// Fields
	IntProperty KeyID_12_DE29BA8D4D52E79C09ECD792B3E5AF59; // Offset: 0x00 // Size: 0x04
	IntProperty BulletID_16_836CF1DA41D9B5D6B2A048B65ABF9EA7; // Offset: 0x04 // Size: 0x04
	IntProperty ProposeBulletNum_17_776C3F00316F0B260271992A098E22ED; // Offset: 0x08 // Size: 0x04
	IntProperty AIMinAttackDist_29_2477C5804AB8968C0920F8790D819994; // Offset: 0x0c // Size: 0x04
	IntProperty AIMaxAttackDist_30_7148460032C6174A6AF00ED30DEF9994; // Offset: 0x10 // Size: 0x04
	IntProperty BornIslandBulletNum_38_313F40006E88965C3F9EC5D9017AF02D; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> Lowers_a_51_09824E0023E1D5C00B2140E803435431; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> Magazines_a_52_6C0D36C00DDFE4CD564FCEC60C50EDD1; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> Stocks_a_54_62740CC04A4BE64919BB407100C7E4B1; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> UpperSides_a_56_0CAAB0002CB0CF8444507E9802483CE1; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> Muzzles_a_57_7CDB4D804CD01C927C17EFF70A0E7CF1; // Offset: 0x58 // Size: 0x10
	struct TArray<IntProperty> Uppers_a_58_70690EC02BCBD1BF0079F65A02F354E1; // Offset: 0x68 // Size: 0x10
	struct TArray<IntProperty> Cores_a_59_5B8C8E0066BF188057B2D56F0F3135F1; // Offset: 0x78 // Size: 0x10
	struct TArray<IntProperty> Bezels_a_60_66A7E8403202AF7557453D6B0A95F3A1; // Offset: 0x88 // Size: 0x10
	struct TArray<IntProperty> GunLocks_a_61_04C5B88058DB62924278624B0E94B891; // Offset: 0x98 // Size: 0x10
	struct TArray<IntProperty> TacticalAttachs_a_62_340B6A4003827A8B0B444CAE0952D4B1; // Offset: 0xa8 // Size: 0x10
};

