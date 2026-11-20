#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ClientNet.IMSDKLoginResult
// Size: 0x40 // Inherited bytes: 0x00
struct FIMSDKLoginResult {
	// Fields
	IntProperty imsdkRetCode; // Offset: 0x00 // Size: 0x04
	IntProperty thirdRetCode; // Offset: 0x04 // Size: 0x04
	StrProperty OpenID; // Offset: 0x08 // Size: 0x10
	StrProperty Token; // Offset: 0x18 // Size: 0x10
	int64_t tokenExpire; // Offset: 0x28 // Size: 0x08
	StrProperty retExtraJson; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ClientNet.IMSDKExtraInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FIMSDKExtraInfo {
	// Fields
	MapProperty ExtraInfo; // Offset: 0x00 // Size: 0x50
};

