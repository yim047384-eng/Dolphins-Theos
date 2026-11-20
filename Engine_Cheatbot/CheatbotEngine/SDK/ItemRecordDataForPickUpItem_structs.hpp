#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct ItemRecordDataForPickUpItem.ItemRecordDataForPickUpItem
// Size: 0x38 // Inherited bytes: 0x00
struct FItemRecordDataForPickUpItem {
	// Fields
	IntProperty ItemQuality_2_57317B6445BC085DEB976BA75243898C; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ItemName_5_BF8A1C3B459F160493D2AE9737ED9A19; // Offset: 0x08 // Size: 0x10
	StrProperty ItemSmallIcon_7_4D06C0564F647615E27BA8AD9A90AD98; // Offset: 0x18 // Size: 0x10
	StrProperty SpecialIcon_9_60C59FC4412490D0F832B1AFFA17820D; // Offset: 0x28 // Size: 0x10
};

