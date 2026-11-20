#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_LableConfig_type.BP_STRUCT_LableConfig_type
// Size: 0x30 // Inherited bytes: 0x00
struct FBP_STRUCT_LableConfig_type {
	// Fields
	IntProperty ID_0_693D16404D6DAD1D27C48839050DA8D4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty LabelText_1_73893440038992C548086447087B3ED4; // Offset: 0x08 // Size: 0x10
	IntProperty Priority_2_30CACB80375224A06C4199820E0B39C9; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty RecommendedText_3_660E55006B038CAA2385667800230854; // Offset: 0x20 // Size: 0x10
};

