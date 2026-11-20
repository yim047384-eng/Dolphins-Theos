#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_VehicleFeatureAirdrop_type.BP_STRUCT_VehicleFeatureAirdrop_type
// Size: 0x48 // Inherited bytes: 0x00
struct FBP_STRUCT_VehicleFeatureAirdrop_type {
	// Fields
	StrProperty ComponentClassPath_0_646BCA402EC992973F33D5C501783008; // Offset: 0x00 // Size: 0x10
	StrProperty KeyID_1_20AFEA402297661F5E1F445802EED464; // Offset: 0x10 // Size: 0x10
	StrProperty NetSide_5_62C2A7C0016E74C7146765130BD02D45; // Offset: 0x20 // Size: 0x10
	IntProperty OpType_3_06A2550024B35DDC4C9E03CA0E943B45; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty VehicleShapeTypes_4_0434CE401CC8F41D32BE75D50A433F03; // Offset: 0x38 // Size: 0x10
};

