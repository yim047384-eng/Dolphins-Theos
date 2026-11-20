#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EmotionLimitCfg_type.BP_STRUCT_EmotionLimitCfg_type
// Size: 0x20 // Inherited bytes: 0x00
struct FBP_STRUCT_EmotionLimitCfg_type {
	// Fields
	IntProperty EmotionID_0_39ADBA004BA228B64C0DC2D4017A5474; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> ItemID_a_1_23CBB70022789A6E58DE973B00DCBCB1; // Offset: 0x08 // Size: 0x10
	IntProperty TipsID_2_527C6B4045A742C14C2201D5005A0AB4; // Offset: 0x18 // Size: 0x04
	IntProperty IsShow_3_661F374048D856A10B4E0EC702E2E407; // Offset: 0x1c // Size: 0x04
};

