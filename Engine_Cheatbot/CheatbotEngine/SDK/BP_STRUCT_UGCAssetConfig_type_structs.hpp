#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_UGCAssetConfig_type.BP_STRUCT_UGCAssetConfig_type
// Size: 0xb0 // Inherited bytes: 0x00
struct FBP_STRUCT_UGCAssetConfig_type {
	// Fields
	IntProperty AssetID_0_6C1CB6005152E2225E501F6100A93244; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Desc_1_4A0392802C18CB063DA2123E0FA92C93; // Offset: 0x08 // Size: 0x10
	IntProperty ID_4_5F44160067247D64681C18D9000FA954; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty Name_5_03E393000E13964C3DBD91440FAAC835; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> ResArray_a_6_4341AD00601787C843D1519007308321; // Offset: 0x30 // Size: 0x10
	IntProperty ResSeprateType_7_1E557AC007537C097EC0E2E7042CEFE5; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty HDIcon_8_674B1800689BD6DA2E2595D20948F7FE; // Offset: 0x48 // Size: 0x10
	StrProperty Icon_9_37F8B50009EF18043DB023720FA97A5E; // Offset: 0x58 // Size: 0x10
	IntProperty DeviceType_11_0A546F401898C3D950674F5B0033ACA5; // Offset: 0x68 // Size: 0x04
	IntProperty SortWeight_12_7D47F6C00275F1AF0A31276A0673DB64; // Offset: 0x6c // Size: 0x04
	IntProperty TabID_14_3C985BC06772649D7ABBFE950A827624; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<IntProperty> Tags_a_15_3AC9E68016D9AB7C6FD004200827E8F1; // Offset: 0x78 // Size: 0x10
	StrProperty DependResType_17_1FAC59C0589C6DFB6C7642860A0EFE65; // Offset: 0x88 // Size: 0x10
	IntProperty IsSingleMeshAsset_19_32F9BD8073D966146D8741B807428314; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct TArray<StrProperty> DependFeatures_as_20_102F03401139C6AD0AFFB8C602930B63; // Offset: 0xa0 // Size: 0x10
};

