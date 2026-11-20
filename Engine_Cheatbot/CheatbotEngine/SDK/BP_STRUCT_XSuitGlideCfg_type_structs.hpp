#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_XSuitGlideCfg_type.BP_STRUCT_XSuitGlideCfg_type
// Size: 0x50 // Inherited bytes: 0x00
struct FBP_STRUCT_XSuitGlideCfg_type {
	// Fields
	IntProperty GlideID_0_51AD7E8006794C3E097CF0C70EA83E24; // Offset: 0x00 // Size: 0x04
	IntProperty SpecialGlideID_1_5AC10EC0763BBA1D241BCEB704EF2374; // Offset: 0x04 // Size: 0x04
	IntProperty XSuitID1_2_509B90C0005572A13F0DFEAB02D9F3A1; // Offset: 0x08 // Size: 0x04
	IntProperty XSuitID7_3_50A19240005572A73F0DFEA502D9F3A7; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> LocationOffsetArray_a_4_0FED19C012EEAE1F38E3F00A03461BD1; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> SpecialLocationOffsetArray_a_5_2CF6EA005DD9E58211A95EF904554C11; // Offset: 0x20 // Size: 0x10
	IntProperty MatID1_6_68529A006783B8C83D400C6E0030F4F1; // Offset: 0x30 // Size: 0x04
	IntProperty MatID2_7_68539A406783B8C93D400C6D0030F4F2; // Offset: 0x34 // Size: 0x04
	IntProperty MatNum1_8_56E722C044DA28F16AB809580310C401; // Offset: 0x38 // Size: 0x04
	IntProperty MatNum2_9_56E8230044DA28F26AB809590310C402; // Offset: 0x3c // Size: 0x04
	StrProperty BranchIconColor_10_4425978051C211360CBC3B0205F875C2; // Offset: 0x40 // Size: 0x10
};

