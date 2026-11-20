#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_ItemTag_type.BP_STRUCT_ItemTag_type
// Size: 0x28 // Inherited bytes: 0x00
struct FBP_STRUCT_ItemTag_type {
	// Fields
	IntProperty ItemID_1_185737400629DB3B56D2C7AF03F483F4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<StrProperty> TagName_as_4_737004406F16E7B11E690C3306610C03; // Offset: 0x08 // Size: 0x10
	struct TArray<IntProperty> TagValue_a_5_3984468035926C4E76307A7D0E60E451; // Offset: 0x18 // Size: 0x10
};

