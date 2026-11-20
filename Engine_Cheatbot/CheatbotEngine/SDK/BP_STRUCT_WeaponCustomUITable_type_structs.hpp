#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponCustomUITable_type.BP_STRUCT_WeaponCustomUITable_type
// Size: 0x48 // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponCustomUITable_type {
	// Fields
	struct TArray<IntProperty> AttachmentIDArray_a_0_2994D5805A66ADFA49FF99DF0F642E81; // Offset: 0x00 // Size: 0x10
	StrProperty CustomUIPath_1_6C2849C036A924D310490F8B08FCC898; // Offset: 0x10 // Size: 0x10
	StrProperty ID_2_3D1763801B994D7E21261DFF0E357A14; // Offset: 0x20 // Size: 0x10
	bool NeedScope_3_7C585DC0270CDB17789EB71108CE3E35; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct TArray<IntProperty> WeaponIDList_a_4_5BB635006CEE9CAA560FFA330EA49191; // Offset: 0x38 // Size: 0x10
};

