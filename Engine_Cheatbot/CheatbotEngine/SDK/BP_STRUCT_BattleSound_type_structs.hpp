#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BattleSound_type.BP_STRUCT_BattleSound_type
// Size: 0x3c // Inherited bytes: 0x00
struct FBP_STRUCT_BattleSound_type {
	// Fields
	StrProperty Bank_0_184E3DC068C2BF413A229E4A0982F59B; // Offset: 0x00 // Size: 0x10
	IntProperty ID_1_2A476200426F1DEA2637969B03D982A4; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty Region_2_79F1F7C0268B0C797F1F0D4403F807DE; // Offset: 0x18 // Size: 0x10
	StrProperty Event_3_1B79FF4077296A014966EB0F082BF7C4; // Offset: 0x28 // Size: 0x10
	IntProperty SoundID_4_46DBA4405283EB7B3BA231390F57D0E4; // Offset: 0x38 // Size: 0x04
};

