#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct ScannedMarkInfo.ScannedMarkInfo
// Size: 0x24 // Inherited bytes: 0x00
struct FScannedMarkInfo {
	// Fields
	IntProperty MapMarkID_23_DD6512214828073CB19EE79C2DD319C4; // Offset: 0x00 // Size: 0x04
	bool IsLuaConfig_6_C465AED548C2796DC74D81888A92B82C; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	StrProperty QuickSignClass_22_0770EA874EC68CD1B41017BBE635E490; // Offset: 0x08 // Size: 0x10
	IntProperty QuickSignShareDistance_7_B3EF8CAB45FC4E0B12169790D924E5C7; // Offset: 0x18 // Size: 0x04
	IntProperty VisibleType_10_9185F04544916B1C0364A2B54476FE90; // Offset: 0x1c // Size: 0x04
	float Duration_13_0180E37F436A4E0E6BADBB85FFD9D68C; // Offset: 0x20 // Size: 0x04
};

