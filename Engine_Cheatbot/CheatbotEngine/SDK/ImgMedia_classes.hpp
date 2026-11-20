#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ImgMedia.ImgMediaSource
// Size: 0x60 // Inherited bytes: 0x38
struct UImgMediaSource : UBaseMediaSource {
	// Fields
	float FramesPerSecondOverride; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty ProxyOverride; // Offset: 0x40 // Size: 0x10
	struct FDirectoryPath SequencePath; // Offset: 0x50 // Size: 0x10

	// Functions

	// Object Name: Function ImgMedia.ImgMediaSource.SetSequencePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSequencePath(StrProperty Path); // Offset: 0x1023925b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ImgMedia.ImgMediaSource.GetSequencePath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetSequencePath(); // Offset: 0x102392550 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ImgMedia.ImgMediaSource.GetProxies
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetProxies(struct TArray<StrProperty>& OutProxies); // Offset: 0x1023924a8 // Return & Params: Num(1) Size(0x10)
};

