#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CosHelper.CosBase
// Size: 0x28 // Inherited bytes: 0x28
struct UCosBase : UObject {
	// Functions

	// Object Name: Function CosHelper.CosBase.GetContent
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<char> GetContent(); // Offset: 0x10217f590 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class CosHelper.CosHelper
// Size: 0x110 // Inherited bytes: 0x28
struct UCosHelper : UObject {
	// Fields
	char pad_0x28[0xe8]; // Offset: 0x28 // Size: 0xe8
};

// Object Name: Class CosHelper.CosHelperBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCosHelperBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.UploadFileMemory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UCosRequest* UploadFileMemory(struct UCosHelper* CosHelper, struct TArray<char>& FileMemoryBuffer, StrProperty URIPathName, StrProperty URLParameters, DelegateProperty OnCosRequestCompleted); // Offset: 0x102180008 // Return & Params: Num(6) Size(0x50)

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.UploadFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCosRequest* UploadFile(struct UCosHelper* CosHelper, StrProperty FilePathName, StrProperty URIPathName, StrProperty URLParameters, DelegateProperty OnCosRequestCompleted); // Offset: 0x10217fe38 // Return & Params: Num(6) Size(0x50)

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.InitCosInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FCosHelperInitializeInfo InitCosInfo(StrProperty Section); // Offset: 0x10217fd78 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.GetFileInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCosRequest* GetFileInfo(struct UCosHelper* CosHelper, StrProperty URIPathName, StrProperty URLParameters, IntProperty FileInfoType, DelegateProperty OnCosRequestCompleted); // Offset: 0x10217fbbc // Return & Params: Num(6) Size(0x48)

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.DownloadFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCosRequest* DownloadFile(struct UCosHelper* CosHelper, StrProperty URIPathName, StrProperty URLParameters, StrProperty SavedPathName, DelegateProperty OnCosRequestCompleted); // Offset: 0x10217f9ec // Return & Params: Num(6) Size(0x50)

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.DestroyCosHelper
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DestroyCosHelper(struct UCosHelper* CosHelper); // Offset: 0x10217f978 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CosHelper.CosHelperBlueprintLibrary.ConstructCosHelper
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UCosHelper* ConstructCosHelper(struct FCosHelperInitializeInfo& InitializeInfo); // Offset: 0x10217f8b4 // Return & Params: Num(2) Size(0x60)
};

// Object Name: Class CosHelper.CosRequest
// Size: 0x38 // Inherited bytes: 0x28
struct UCosRequest : UCosBase {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class CosHelper.CosResponse
// Size: 0x90 // Inherited bytes: 0x28
struct UCosResponse : UCosBase {
	// Fields
	char pad_0x28[0x68]; // Offset: 0x28 // Size: 0x68

	// Functions

	// Object Name: Function CosHelper.CosResponse.IsOK
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOK(); // Offset: 0x1021808f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CosHelper.CosResponse.GetResponseCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetResponseCode(); // Offset: 0x1021808c4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CosHelper.CosResponse.GetRequestURL
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetRequestURL(); // Offset: 0x102180860 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CosHelper.CosResponse.GetFileInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetFileInfo(enum class ECosHelperFileInfoType InFileInfoType); // Offset: 0x1021807ac // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CosHelper.CosResponse.GetContentAsString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetContentAsString(); // Offset: 0x102180748 // Return & Params: Num(1) Size(0x10)
};

