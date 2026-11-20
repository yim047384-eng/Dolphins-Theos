#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_NicknameColorCfg_type.BP_STRUCT_NicknameColorCfg_type
// Size: 0x5c // Inherited bytes: 0x00
struct FBP_STRUCT_NicknameColorCfg_type {
	// Fields
	StrProperty ColorName_0_3D5612C036FBE2C71E9D1DF00BC3B1B5; // Offset: 0x00 // Size: 0x10
	IntProperty PlanID_1_48A778C03251B65F1F4AF3A90EA10894; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty StyleName_2_520A57400E804D552CBB04AD088EA3A5; // Offset: 0x18 // Size: 0x10
	StrProperty GetJumpUrl_3_789B6E807EB3C79A4234BFA10C0B729C; // Offset: 0x28 // Size: 0x10
	StrProperty DarkColorName_4_47A8B3406894BD5B156FE6E008C71A85; // Offset: 0x38 // Size: 0x10
	StrProperty DarkStyleName_5_5C5CF7C00BA0EE696826B3D80B89EA75; // Offset: 0x48 // Size: 0x10
	IntProperty Season_6_42102D002A4B286C1D5125BD0E69041E; // Offset: 0x58 // Size: 0x04
};

