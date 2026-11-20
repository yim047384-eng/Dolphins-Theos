#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct OilingStateInfo.OilingStateInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FOilingStateInfo {
	// Fields
	IntProperty CurState_2_3A9376B249A6ABD5E84084B040716B82; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct ASTExtraVehicleBase* OilingVehicle_10_4CA2C5624881E1CFC8B2CC9C31ABB223; // Offset: 0x08 // Size: 0x08
};

