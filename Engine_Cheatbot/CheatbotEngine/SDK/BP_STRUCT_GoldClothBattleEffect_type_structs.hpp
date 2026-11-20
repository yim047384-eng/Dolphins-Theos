#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_GoldClothBattleEffect_type.BP_STRUCT_GoldClothBattleEffect_type
// Size: 0x98 // Inherited bytes: 0x00
struct FBP_STRUCT_GoldClothBattleEffect_type {
	// Fields
	IntProperty ID_0_4D32D30005469EBA79DDCD8208D7C5E4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty KillEffect_1_4B5AE60034DEB0B85EE344FF077AE2A4; // Offset: 0x08 // Size: 0x10
	struct TArray<IntProperty> NewSkill_a_2_42E7EA00114F797223C233C90FDA6641; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> OriSkill_a_3_52C20A004AC2254660BCE6F10FDA8261; // Offset: 0x28 // Size: 0x10
	StrProperty CallStatue_4_7ACD0C401FA8AC75782BBD41066F3AB5; // Offset: 0x38 // Size: 0x10
	IntProperty Level_5_07A9ADC00C403BC77DB01EE20C6141CC; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	StrProperty CallIcon_6_1176710026295A1023A5CE6E01073DEE; // Offset: 0x50 // Size: 0x10
	IntProperty CallTip_7_61699A000E50489A34510A730B106750; // Offset: 0x60 // Size: 0x04
	IntProperty CallTipSocial_8_3FFC50C05B879D47482B327B0E95F82C; // Offset: 0x64 // Size: 0x04
	StrProperty CallSkyMaterial_9_7DE1284063361B2379662AC908CAF85C; // Offset: 0x68 // Size: 0x10
	IntProperty CallTime_10_059312803FB8501423649AAE01066B85; // Offset: 0x78 // Size: 0x04
	bool KillBroadcastIndependent_11_7AA7930030E608241DEAD1F003565044; // Offset: 0x7c // Size: 0x01
	char pad_0x7D[0x3]; // Offset: 0x7d // Size: 0x03
	StrProperty CallStatueLOD_12_4755040079764446631F2AEB03AC07C4; // Offset: 0x80 // Size: 0x10
	IntProperty KingEliminationOverrideID_13_772C03802AD936CE1470FA170B7945F4; // Offset: 0x90 // Size: 0x04
	IntProperty ExecutePlanID_14_216F0A801E2F98083F020C680514B224; // Offset: 0x94 // Size: 0x04
};

