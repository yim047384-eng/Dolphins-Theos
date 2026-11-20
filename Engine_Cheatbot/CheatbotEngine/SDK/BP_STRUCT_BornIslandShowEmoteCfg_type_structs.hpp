#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BornIslandShowEmoteCfg_type.BP_STRUCT_BornIslandShowEmoteCfg_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_BornIslandShowEmoteCfg_type {
	// Fields
	IntProperty EmotionID_0_224585404917DD8D3BC7819409D45694; // Offset: 0x00 // Size: 0x04
	IntProperty ItemID_1_7AEF124039CEB7D7164E2B1E028A5614; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> LocationOffsetArray_a_2_7F4F23000B2A4E044C786AC10BA3FE51; // Offset: 0x08 // Size: 0x10
	IntProperty PrepareEmotionID_3_6CEEB9004DC032867FA3171B07E846C4; // Offset: 0x18 // Size: 0x04
	IntProperty ID_4_7C36EE802CE81B4454DD69C400F7C154; // Offset: 0x1c // Size: 0x04
	IntProperty ShapeID_5_19ED4AC044155AF7453F997301E715D4; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<IntProperty> AppearLocationOffset_a_6_3BB93980601484EA532FFBAC0831B901; // Offset: 0x28 // Size: 0x10
};

