#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class YGamePipeline.YGamePipelineHelper
// Size: 0x50 // Inherited bytes: 0x28
struct UYGamePipelineHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate PipeDataRevMsg; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate PipeDataRevMsgT; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08

	// Functions

	// Object Name: Function YGamePipeline.YGamePipelineHelper.SendDataWithKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SendDataWithKey(StrProperty MsgKey, struct TArray<char> Data); // Offset: 0x10236bc90 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.SendData
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SendData(StrProperty MsgInfo); // Offset: 0x10236bb9c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.Release
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Release(); // Offset: 0x10236bb88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.RecvdDataWithKeyTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RecvdDataWithKeyTest(StrProperty MsgKey); // Offset: 0x10236ba94 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.RecvDataTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RecvDataTest(StrProperty MsgInfo); // Offset: 0x10236b9a0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.Log
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Log(StrProperty LogInfo); // Offset: 0x10236b8bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.IsConnected
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsConnected(); // Offset: 0x10236b888 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Init(); // Offset: 0x10236b854 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function YGamePipeline.YGamePipelineHelper.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UYGamePipelineHelper* Get(); // Offset: 0x10236b820 // Return & Params: Num(1) Size(0x8)
};

