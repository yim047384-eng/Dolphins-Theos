#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponBPTable_type.BP_STRUCT_WeaponBPTable_type
// Size: 0x58 // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponBPTable_type {
	// Fields
	StrProperty CName_0_CD600C314161E84152102388BAC2C6E5; // Offset: 0x00 // Size: 0x10
	StrProperty Path_1_4B3A115440CA4D3ED6BB1CAE5312F1D0; // Offset: 0x10 // Size: 0x10
	IntProperty ID_2_CE3ED80D47C51A8880AD2CBC79F2E6D0; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty Wrapper_3_1417B6C029873FAD0DDBA26505064332; // Offset: 0x28 // Size: 0x10
	StrProperty LobbyPath_4_4623DFC03FE9DCA3544D323C06AB9278; // Offset: 0x38 // Size: 0x10
	StrProperty WeaponClass_6_06A7B680656FDD4E11BFC0FA01E01EC3; // Offset: 0x48 // Size: 0x10
};

