#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct IOSDeviceProfileSelector.ProfileMatch
// Size: 0x20 // Inherited bytes: 0x00
struct FProfileMatch {
	// Fields
	StrProperty Profile; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FProfileMatchItem> Match; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct IOSDeviceProfileSelector.ProfileMatchItem
// Size: 0x18 // Inherited bytes: 0x00
struct FProfileMatchItem {
	// Fields
	enum class ESourceType SourceType; // Offset: 0x00 // Size: 0x01
	enum class ECompareType CompareType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty MatchString; // Offset: 0x08 // Size: 0x10
};

