#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_PromptConfigTable_type.BP_STRUCT_PromptConfigTable_type
// Size: 0x30 // Inherited bytes: 0x00
struct FBP_STRUCT_PromptConfigTable_type {
	// Fields
	bool bCanCancelSkill_0_5F5F03C031F3AC616DB4EFD8014EC48C; // Offset: 0x00 // Size: 0x01
	bool bShowAnim_1_11AAB7807FD1075E63B17BE60416DDCD; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty Icon_2_1EB177C03641B4DF1C56659507D9148E; // Offset: 0x08 // Size: 0x10
	IntProperty ID_3_5F7798C075573FC7504F45510AD7D934; // Offset: 0x18 // Size: 0x04
	float PromptDuration_f_4_39E758C0524F10D72BC7C64E0B108D46; // Offset: 0x1c // Size: 0x04
	StrProperty TimeAdjustAttr_5_37D37AC050D0C68B37D4F91E0A4628E2; // Offset: 0x20 // Size: 0x10
};

