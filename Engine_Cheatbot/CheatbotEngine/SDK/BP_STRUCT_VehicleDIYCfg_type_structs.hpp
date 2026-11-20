#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_VehicleDIYCfg_type.BP_STRUCT_VehicleDIYCfg_type
// Size: 0x54 // Inherited bytes: 0x00
struct FBP_STRUCT_VehicleDIYCfg_type {
	// Fields
	IntProperty ID_0_65D276404AB606457F64B11D06C7B5B4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty MatSlot_1_5CF344005C5B7612767BC56D05E5FA04; // Offset: 0x08 // Size: 0x10
	StrProperty TextureSlot_2_0DAB77C0706DE55D2F9EF18207C642A4; // Offset: 0x18 // Size: 0x10
	StrProperty StaticMeshPath_3_7CCBB380620E9CCA4CFA294E00D02C58; // Offset: 0x28 // Size: 0x10
	IntProperty BanUse_4_5E8062802373AE1840919AE705E2FB25; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty Time_5_035B76C04651F6354500D8F707B4CAF5; // Offset: 0x40 // Size: 0x10
	IntProperty UVIndex_6_4001BBC050A71D332B3FB5B70CC43188; // Offset: 0x50 // Size: 0x04
};

