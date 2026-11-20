#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_SeasonPickUpCountSetting_type.BP_STRUCT_SeasonPickUpCountSetting_type
// Size: 0x40 // Inherited bytes: 0x00
struct FBP_STRUCT_SeasonPickUpCountSetting_type {
	// Fields
	IntProperty ItemID_0_2D9A138069DA5C9055BEAA920FA5E494; // Offset: 0x00 // Size: 0x04
	IntProperty PickUpDefaultCount_1_61CBB30018F58FF05CB5D8D008E4A714; // Offset: 0x04 // Size: 0x04
	IntProperty PickUpMaxCount_2_7E7B8B4066C9C4852A96267D09CDE8A4; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty Description_3_3E5E4D805505C81A0D74E6CA0DE791AE; // Offset: 0x10 // Size: 0x10
	StrProperty IconPath_4_02DA720033ED93CE4C955872074626F8; // Offset: 0x20 // Size: 0x10
	StrProperty Name_5_7CA22CC023D446CB6ADA9FBA054FE955; // Offset: 0x30 // Size: 0x10
};

