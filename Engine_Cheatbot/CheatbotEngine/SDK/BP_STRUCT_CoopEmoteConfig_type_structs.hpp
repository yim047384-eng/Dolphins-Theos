#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_CoopEmoteConfig_type.BP_STRUCT_CoopEmoteConfig_type
// Size: 0x25 // Inherited bytes: 0x00
struct FBP_STRUCT_CoopEmoteConfig_type {
	// Fields
	IntProperty CasterEmotionID_0_18D1F04052513CC515FC559B01D9A014; // Offset: 0x00 // Size: 0x04
	IntProperty JoinerEmotionID_2_6E73318022F1B57842B36CB60539C2A4; // Offset: 0x04 // Size: 0x04
	IntProperty PreEmotionID_3_7A8681802D0A21C620B763CF0DE82544; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> TargetOffsetArray_a_4_259B01004D350F9E03CD992A04D01691; // Offset: 0x10 // Size: 0x10
	IntProperty TargetRotate_5_07AA3340044B7B1517FFB15D022EF8D5; // Offset: 0x20 // Size: 0x04
	bool bCanShowInLobby_6_4A4B4EC036F13FBB643FB6DC05D12BB9; // Offset: 0x24 // Size: 0x01
};

