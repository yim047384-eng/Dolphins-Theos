#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_VehicleBPTable_type.BP_STRUCT_VehicleBPTable_type
// Size: 0x40 // Inherited bytes: 0x00
struct FBP_STRUCT_VehicleBPTable_type {
	// Fields
	IntProperty ID_0_0D9DF74051BBD583279703B701F172E4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Path_2_2F72974026FE3BC32110651501735958; // Offset: 0x08 // Size: 0x10
	StrProperty CName_3_138BC5001BE2FE5E5E66B36807255925; // Offset: 0x18 // Size: 0x10
	IntProperty VehicleShapeID_4_2C43E38070C85DC025E56CC303F69884; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty LobbyPath_5_4594B5404A7DACE145FA22A607895AE8; // Offset: 0x30 // Size: 0x10
};

