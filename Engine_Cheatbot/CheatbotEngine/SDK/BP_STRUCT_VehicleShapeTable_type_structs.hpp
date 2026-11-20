#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_VehicleShapeTable_type.BP_STRUCT_VehicleShapeTable_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_VehicleShapeTable_type {
	// Fields
	StrProperty MeshBasePath_0_417CD1001B80DC1E44CCF1BC0A899508; // Offset: 0x00 // Size: 0x10
	StrProperty BPPath_1_04FA93804ECCC4B06DEB74AB015A0988; // Offset: 0x10 // Size: 0x10
	IntProperty ID_2_63908F0075AF39C00FB6A5F00F6121F4; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty AnimBPPath_3_12EBB4C05FB48819333454CC00540308; // Offset: 0x28 // Size: 0x10
};

