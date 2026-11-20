#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CommonLib.TextWidgetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UTextWidgetInterface : UInterface {
	// Functions

	// Object Name: Function CommonLib.TextWidgetInterface.GetTextContent
	// Flags: [Native|Public|Const]
	StrProperty GetTextContent(); // Offset: 0x10614c33c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class CommonLib.LuaService
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaService : UInterface {
};

// Object Name: Class CommonLib.CommonLuaLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCommonLuaLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function CommonLib.CommonLuaLibrary.IsMatch
	// Flags: [Final|Native|Static|Public]
	bool IsMatch(StrProperty Source, StrProperty regex); // Offset: 0x10614c7c8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function CommonLib.CommonLuaLibrary.GetName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetName(struct UObject* Obj); // Offset: 0x10614c724 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CommonLib.CommonLuaLibrary.GetModNames
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetModNames(); // Offset: 0x10614c6c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CommonLib.CommonLuaLibrary.GetGWorld
	// Flags: [Final|Native|Static|Public]
	struct UWorld* GetGWorld(); // Offset: 0x10614c68c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CommonLib.CommonLuaLibrary.GetFullName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetFullName(struct UObject* Obj); // Offset: 0x10614c5e8 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class CommonLib.RuntimeFilesDownloaderLibrary
// Size: 0x98 // Inherited bytes: 0x28
struct URuntimeFilesDownloaderLibrary : UObject {
	// Fields
	struct FScriptMulticastDelegate OnProgress; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x18]; // Offset: 0x38 // Size: 0x18
	struct FScriptMulticastDelegate OnResult; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x18]; // Offset: 0x60 // Size: 0x18
	StrProperty FileURL; // Offset: 0x78 // Size: 0x10
	StrProperty FileSavePath; // Offset: 0x88 // Size: 0x10

	// Functions

	// Object Name: Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct URuntimeFilesDownloaderLibrary* DownloadFile(StrProperty URL, StrProperty SavePath); // Offset: 0x10614cbec // Return & Params: Num(3) Size(0x28)

	// Object Name: Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct URuntimeFilesDownloaderLibrary* CreateDownloader(); // Offset: 0x10614cbb8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class CommonLib.ServiceManager
// Size: 0x78 // Inherited bytes: 0x28
struct UServiceManager : UObject {
	// Fields
	MapProperty Services; // Offset: 0x28 // Size: 0x50

	// Functions

	// Object Name: Function CommonLib.ServiceManager.UnregisterService
	// Flags: [Final|Native|Public]
	void UnregisterService(struct UObject* ServiceType, StrProperty serviceName); // Offset: 0x10614d188 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CommonLib.ServiceManager.RegisterService
	// Flags: [Final|Native|Public]
	void RegisterService(struct UObject* Service, struct UObject* ServiceType, StrProperty serviceName); // Offset: 0x10614d07c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function CommonLib.ServiceManager.GetService
	// Flags: [Final|Native|Public]
	struct UObject* GetService(struct UObject* ServiceType, StrProperty serviceName); // Offset: 0x10614cf98 // Return & Params: Num(3) Size(0x20)
};

