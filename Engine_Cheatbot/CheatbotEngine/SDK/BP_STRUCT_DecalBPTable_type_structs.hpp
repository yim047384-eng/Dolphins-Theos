#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_DecalBPTable_type.BP_STRUCT_DecalBPTable_type
// Size: 0x60 // Inherited bytes: 0x00
struct FBP_STRUCT_DecalBPTable_type {
	// Fields
	IntProperty ID_0_0CAD9D8055C0CD6A25A0DCEE0A0553D4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Path_1_0033FD807638E0C45A483151055262A8; // Offset: 0x08 // Size: 0x10
	StrProperty CName_2_6D7E0B40638C94B731ACB8980538E865; // Offset: 0x18 // Size: 0x10
	StrProperty DefaultTexturePath_3_3BA6EB00368C49AC4F31B2080CB16AE8; // Offset: 0x28 // Size: 0x10
	StrProperty FlipBookTexturePath_4_75157F4004E82529477143F20510B968; // Offset: 0x38 // Size: 0x10
	IntProperty soundID_5_6F0D27C03EADFE7B44B5857B0ACC1DD4; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	StrProperty soundPath_6_09E147C024FF3AFD468FAA630C1C6268; // Offset: 0x50 // Size: 0x10
};

