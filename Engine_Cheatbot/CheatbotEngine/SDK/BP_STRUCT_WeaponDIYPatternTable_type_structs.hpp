#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponDIYPatternTable_type.BP_STRUCT_WeaponDIYPatternTable_type
// Size: 0x30 // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponDIYPatternTable_type {
	// Fields
	IntProperty ID_0_226BAE406BDC69532A372FEB06291874; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PatternPath_1_0710E5C02A9BF0434B2DE2C40D2F8198; // Offset: 0x08 // Size: 0x10
	IntProperty UniqueID_2_735A2C00726FA8746CAB7F5C0321A0F4; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<IntProperty> UVInfo_a_6_7BA908C0188400D1149B1C070CEDEE51; // Offset: 0x20 // Size: 0x10
};

