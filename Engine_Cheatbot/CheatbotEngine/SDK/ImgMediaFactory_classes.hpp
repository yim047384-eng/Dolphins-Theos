#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ImgMediaFactory.ImgMediaSettings
// Size: 0x50 // Inherited bytes: 0x28
struct UImgMediaSettings : UObject {
	// Fields
	float DefaultFps; // Offset: 0x28 // Size: 0x04
	float CacheBehindPercentage; // Offset: 0x2c // Size: 0x04
	float CacheSizeGB; // Offset: 0x30 // Size: 0x04
	uint32_t ExrDecoderThreads; // Offset: 0x34 // Size: 0x04
	StrProperty DefaultProxy; // Offset: 0x38 // Size: 0x10
	bool UseDefaultProxy; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

