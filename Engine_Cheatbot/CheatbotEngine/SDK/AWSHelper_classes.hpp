#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AWSHelper.AWSHelper
// Size: 0x178 // Inherited bytes: 0x28
struct UAWSHelper : UObject {
	// Fields
	char pad_0x28[0xa8]; // Offset: 0x28 // Size: 0xa8
	MapProperty DownloadFilePaths; // Offset: 0xd0 // Size: 0x50
	float Timeout; // Offset: 0x120 // Size: 0x04
	char pad_0x124[0x54]; // Offset: 0x124 // Size: 0x54
};

// Object Name: Class AWSHelper.AWSHelperBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAWSHelperBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AWSHelper.AWSHelperBlueprintLibrary.UploadFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void UploadFile(struct UAWSHelper* CosHelper, StrProperty FromFilePath, StrProperty ToURL, StrProperty NoneMatchHeader, DelegateProperty& OnComplete, DelegateProperty& OnProgress); // Offset: 0x10214c2f4 // Return & Params: Num(6) Size(0x58)

	// Object Name: Function AWSHelper.AWSHelperBlueprintLibrary.UploadBinary
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void UploadBinary(struct UAWSHelper* CosHelper, struct TArray<char>& FromBinaries, StrProperty ToURL, StrProperty NoneMatchHeader, DelegateProperty& OnComplete, DelegateProperty& OnProgress); // Offset: 0x10214c07c // Return & Params: Num(6) Size(0x58)

	// Object Name: Function AWSHelper.AWSHelperBlueprintLibrary.DownloadFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void DownloadFile(struct UAWSHelper* CosHelper, StrProperty FromURL, StrProperty ToFilePath, DelegateProperty& OnComplete, DelegateProperty& OnProgress); // Offset: 0x10214be6c // Return & Params: Num(5) Size(0x48)

	// Object Name: Function AWSHelper.AWSHelperBlueprintLibrary.DownloadBinary
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void DownloadBinary(struct UAWSHelper* CosHelper, StrProperty FromURL, DelegateProperty& OnComplete, DelegateProperty& OnProgress); // Offset: 0x10214bcb0 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function AWSHelper.AWSHelperBlueprintLibrary.DestroyAWSHelper
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DestroyAWSHelper(struct UAWSHelper* AWSHelper); // Offset: 0x10214bc3c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AWSHelper.AWSHelperBlueprintLibrary.ConstructAWSHelper
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAWSHelper* ConstructAWSHelper(); // Offset: 0x10214bc08 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AWSHelper.AWSResponse
// Size: 0x70 // Inherited bytes: 0x28
struct UAWSResponse : UObject {
	// Fields
	char pad_0x28[0x48]; // Offset: 0x28 // Size: 0x48

	// Functions

	// Object Name: Function AWSHelper.AWSResponse.IsOK
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOK(); // Offset: 0x10214ca08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AWSHelper.AWSResponse.GetResponseCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetResponseCode(); // Offset: 0x10214c9d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AWSHelper.AWSResponse.GetRequestURL
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetRequestURL(); // Offset: 0x10214c970 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AWSHelper.AWSResponse.GetErrorMessage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetErrorMessage(); // Offset: 0x10214c90c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AWSHelper.AWSResponse.GetErrorCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetErrorCode(); // Offset: 0x10214c8a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AWSHelper.AWSResponse.GetContentAsString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetContentAsString(); // Offset: 0x10214c844 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AWSHelper.AWSResponse.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<char> GetContent(); // Offset: 0x10214c80c // Return & Params: Num(1) Size(0x10)
};

