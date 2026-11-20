#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CreativeLua.CreativeBridgeLuaVM
// Size: 0x470 // Inherited bytes: 0x440
struct UCreativeBridgeLuaVM : UCreativeLuaVM {
	// Fields
	char pad_0x440[0x8]; // Offset: 0x440 // Size: 0x08
	struct UObject* LuaVMManager; // Offset: 0x448 // Size: 0x08
	StrProperty RegisterUGCVMFunctionHandlerName; // Offset: 0x450 // Size: 0x10
	StrProperty UGCVMPostInitFunctionHandlerName; // Offset: 0x460 // Size: 0x10

	// Functions

	// Object Name: Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError
	// Flags: [Final|Native|Public|Const]
	void UGCLuaError(IntProperty errCode); // Offset: 0x101f48158 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUGCSuspendStateFix(bool bEnable); // Offset: 0x101f480d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler
	// Flags: [Final|Native|Public]
	void RegisterSluaCallUgcluaEventHandler(); // Offset: 0x101f480c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CreativeLua.CreativeBridgeLuaVM.PostInit
	// Flags: [Native|Public|BlueprintCallable]
	void PostInit(); // Offset: 0x101f480a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetUGCSuspendStateFix(); // Offset: 0x101f48070 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class CreativeLua.CreativeEnvLuaVM
// Size: 0x80 // Inherited bytes: 0x28
struct UCreativeEnvLuaVM : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
};

// Object Name: Class CreativeLua.CreativeEnvLuaVMFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeEnvLuaVMFactory : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function CreativeLua.CreativeEnvLuaVMFactory.CreateCreativeEnvLuaVM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCreativeEnvLuaVM* CreateCreativeEnvLuaVM(StrProperty InLuaFilePath, struct UObject* WorldContextObject); // Offset: 0x101f485a4 // Return & Params: Num(3) Size(0x20)
};

