#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_RegionConfig_type.BP_STRUCT_RegionConfig_type
// Size: 0x8c // Inherited bytes: 0x00
struct FBP_STRUCT_RegionConfig_type {
	// Fields
	StrProperty RegionName_0_6FD56A274264F9D23BF6E78649990B96; // Offset: 0x00 // Size: 0x10
	StrProperty RegionCode_1_5DC6C7FB4FECF18D480EFAA3DE14C386; // Offset: 0x10 // Size: 0x10
	StrProperty NationLang_2_E7700BFA44598D0C74CD639FE4FC307D; // Offset: 0x20 // Size: 0x10
	IntProperty IsNation_3_00FBDD66481A878845FE90B9489F0408; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty res_path_4_1CDB9AEE44DDB2ADB7DB72921E8181A7; // Offset: 0x38 // Size: 0x10
	StrProperty sort_key_5_CBE9558C47B42D474F2C8F9D0A3E0021; // Offset: 0x48 // Size: 0x10
	StrProperty channels_7_1FF007005FFA1D9A6400BA67081DEF53; // Offset: 0x58 // Size: 0x10
	StrProperty reserveSpeed_8_0F578F4067C2058558E70C3208D08F84; // Offset: 0x68 // Size: 0x10
	bool saveDataSwitch_9_6EE31AC02D136BA30297A2D5081D0658; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	IntProperty ContinentId_10_230C0BC073A74B992EA01894063D1AD4; // Offset: 0x7c // Size: 0x04
	IntProperty Region_11_31F78D001E5A5CBE2C9EFE69067DA8FE; // Offset: 0x80 // Size: 0x04
	IntProperty UseSlideAge_12_1FDC9EC0023F237D489817B708996AF5; // Offset: 0x84 // Size: 0x04
	IntProperty UseFamilyCenter_13_74DA30002C6BB32004CE502303D60702; // Offset: 0x88 // Size: 0x04
};

