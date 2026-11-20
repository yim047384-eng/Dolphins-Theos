#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_TransSupportConfig_BLUEHOLE_type.BP_STRUCT_TransSupportConfig_BLUEHOLE_type
// Size: 0x3c // Inherited bytes: 0x00
struct FBP_STRUCT_TransSupportConfig_BLUEHOLE_type {
	// Fields
	StrProperty abbreviation_0_576485800BFD34B24C1B5171096239DE; // Offset: 0x00 // Size: 0x10
	StrProperty displayName_1_34DEC5C0314832596E20702806D96E95; // Offset: 0x10 // Size: 0x10
	bool isSupported_2_633B50801434DC72755E836C03183084; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	StrProperty languageCode_3_715457C04402C35F3D3E137D011FE455; // Offset: 0x28 // Size: 0x10
	IntProperty languageID_4_4A0F5C4033CF49852F4DA25701F11F94; // Offset: 0x38 // Size: 0x04
};

