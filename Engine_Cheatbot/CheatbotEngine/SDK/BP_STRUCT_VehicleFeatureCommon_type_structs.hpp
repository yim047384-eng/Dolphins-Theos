#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_VehicleFeatureCommon_type.BP_STRUCT_VehicleFeatureCommon_type
// Size: 0x48 // Inherited bytes: 0x00
struct FBP_STRUCT_VehicleFeatureCommon_type {
	// Fields
	StrProperty ComponentClassPath_0_321BB040128B15B71819C30C07DEB378; // Offset: 0x00 // Size: 0x10
	StrProperty KeyID_1_2756D04006D21E5F173D81ED0BC4BC94; // Offset: 0x10 // Size: 0x10
	StrProperty NetSide_5_60C38DC06E887C9B50CAAABF01B8D465; // Offset: 0x20 // Size: 0x10
	IntProperty OpType_3_5C363B000B4EF7947FDD36790C32B4D5; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty VehicleShapeTypes_4_50F7B44025F468936C864C98052957F3; // Offset: 0x38 // Size: 0x10
};

