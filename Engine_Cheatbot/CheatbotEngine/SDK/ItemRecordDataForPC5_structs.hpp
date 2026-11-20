#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct ItemRecordDataForPC5.ItemRecordDataForPC5
// Size: 0x30 // Inherited bytes: 0x00
struct FItemRecordDataForPC5 {
	// Fields
	IntProperty ItemID_3_2C55A5F2477A39E2006109BD19E76D0C; // Offset: 0x00 // Size: 0x04
	IntProperty ItemType_5_B88A873B4FDA20CFAF0E798B7EC9084D; // Offset: 0x04 // Size: 0x04
	IntProperty BPID_7_204F423F43E79BBD48973B8D51C6F4D7; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty ItemSmallIcon_10_611147EB460F1885DD467290EF57AAC3; // Offset: 0x10 // Size: 0x10
	StrProperty ItemSmallIcon2_12_D841285E4F88F8A3220502B369A1CAE3; // Offset: 0x20 // Size: 0x10
};

