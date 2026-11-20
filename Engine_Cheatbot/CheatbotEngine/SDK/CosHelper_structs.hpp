#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct CosHelper.CosHelperInitializeInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FCosHelperInitializeInfo {
	// Fields
	bool bUseAuthorization; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SignExpirationTime; // Offset: 0x04 // Size: 0x04
	StrProperty AppID; // Offset: 0x08 // Size: 0x10
	StrProperty BucketName; // Offset: 0x18 // Size: 0x10
	StrProperty Region; // Offset: 0x28 // Size: 0x10
	StrProperty SecretId; // Offset: 0x38 // Size: 0x10
	StrProperty SecretKey; // Offset: 0x48 // Size: 0x10
};

