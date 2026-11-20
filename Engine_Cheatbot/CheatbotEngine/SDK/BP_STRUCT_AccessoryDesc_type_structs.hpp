#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_AccessoryDesc_type.BP_STRUCT_AccessoryDesc_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_AccessoryDesc_type {
	// Fields
	struct TArray<IntProperty> Descriptions_a_0_5D34BE002EC637482CCDD42604F29ED1; // Offset: 0x00 // Size: 0x10
	IntProperty ID_1_3A6EF3804E8E42BC2D440109028E3584; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> Marks_a_2_0934DFC065AD5ACF1D62975806A1CC31; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> Descriptions2_a_3_5EB34A80181E4A606822BF710F294011; // Offset: 0x28 // Size: 0x10
};

