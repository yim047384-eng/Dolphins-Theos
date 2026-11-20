#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_RareItemCfg_type.BP_STRUCT_RareItemCfg_type
// Size: 0x98 // Inherited bytes: 0x00
struct FBP_STRUCT_RareItemCfg_type {
	// Fields
	IntProperty ItemId_0_55BFBEC07701C41544D45E42080B2824; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Path_1_7CF17300760414C62D59F2D009D66908; // Offset: 0x08 // Size: 0x10
	IntProperty RareType_2_23881AC04B9D705F2709505A092376E5; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty PathIcon_4_38B2D5406371AFD77F54A0AF0905303E; // Offset: 0x20 // Size: 0x10
	StrProperty CornerPath_5_01B30D403311FBA129EBCE9E0D10CF98; // Offset: 0x30 // Size: 0x10
	IntProperty CameraId_6_71B5ED401FE338AB2B78521707955264; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<IntProperty> ItemId_a_10_09B94EC074B98A8B714843F10B282251; // Offset: 0x48 // Size: 0x10
	StrProperty SceneId_9_7A76968016EB4F9E68C6C8470982D494; // Offset: 0x58 // Size: 0x10
	struct TArray<IntProperty> EmotionId_a_11_0EBE01C0482026016790533D033EC661; // Offset: 0x68 // Size: 0x10
	StrProperty SpecialBpPath_12_76AE2FC0098C22DF2CD1573D0AE46A88; // Offset: 0x78 // Size: 0x10
	struct TArray<float> TColor_af_13_6B73CE002BBDE83852BC223A00CB2DD6; // Offset: 0x88 // Size: 0x10
};

