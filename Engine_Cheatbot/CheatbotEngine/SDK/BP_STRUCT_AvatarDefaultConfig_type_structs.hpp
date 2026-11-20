#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_AvatarDefaultConfig_type.BP_STRUCT_AvatarDefaultConfig_type
// Size: 0x48 // Inherited bytes: 0x00
struct FBP_STRUCT_AvatarDefaultConfig_type {
	// Fields
	IntProperty id_0_582DD74020EEE8C12D00E1A40C84B664; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty pant_1_00F930C0654EFFCD6B08CAF404B7FCD4; // Offset: 0x08 // Size: 0x10
	StrProperty shirt_2_53D54E8062374FD817805CCA0B7038D4; // Offset: 0x18 // Size: 0x10
	StrProperty shoe_3_12522FC065073BE56B0E507104B703D5; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> IngoreSlots_a_4_7117F240470C88771F536A8F0FB09CB1; // Offset: 0x38 // Size: 0x10
};

