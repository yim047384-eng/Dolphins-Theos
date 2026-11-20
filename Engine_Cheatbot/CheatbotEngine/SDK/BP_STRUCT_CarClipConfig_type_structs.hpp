#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_CarClipConfig_type.BP_STRUCT_CarClipConfig_type
// Size: 0x20 // Inherited bytes: 0x00
struct FBP_STRUCT_CarClipConfig_type {
	// Fields
	IntProperty BottomCutWOffset_0_2DAB5A402164A8D31BB0A9CC06C09524; // Offset: 0x00 // Size: 0x04
	IntProperty ItemID_1_4F726980042FF4723896BC490E5C8604; // Offset: 0x04 // Size: 0x04
	IntProperty TopCutWOffset_2_536389C03E3BAAF51BF9B2C50C540884; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty UnableSeatIndexList_3_0F31E080084A509A39DB518E0C59B184; // Offset: 0x10 // Size: 0x10
};

