#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UgcLua.CreativeLuaVM
// Size: 0x440 // Inherited bytes: 0x28
struct UCreativeLuaVM : UObject {
	// Fields
	uint64 SuspendFrameCounter; // Offset: 0x28 // Size: 0x08
	uint64 RunFrameCounter; // Offset: 0x30 // Size: 0x08
	IntProperty CostCheckInterval; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	double FrameExecuteTime; // Offset: 0x40 // Size: 0x08
	float FrameSuspendMaxDelay; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	double SuspendFrameExecuteTime; // Offset: 0x50 // Size: 0x08
	IntProperty CrossVMAPICost; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct UWorld* World; // Offset: 0x60 // Size: 0x08
	struct AWorldSettings* WorldSettings; // Offset: 0x68 // Size: 0x08
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
	bool bExitWhenFatalOccurs; // Offset: 0x78 // Size: 0x01
	bool bExecuting; // Offset: 0x79 // Size: 0x01
	bool bAbort; // Offset: 0x7a // Size: 0x01
	char pad_0x7B[0x1]; // Offset: 0x7b // Size: 0x01
	IntProperty MaxLoopRunCount; // Offset: 0x7c // Size: 0x04
	IntProperty MaxExecuteAPICount; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty LuaReturnFunctionName; // Offset: 0x88 // Size: 0x10
	StrProperty RedirectorName; // Offset: 0x98 // Size: 0x10
	MapProperty ElapsedTimeMap; // Offset: 0xa8 // Size: 0x50
	MapProperty MaxElapsedTimeMap; // Offset: 0xf8 // Size: 0x50
	MapProperty CountBlockMap; // Offset: 0x148 // Size: 0x50
	char pad_0x198[0xd0]; // Offset: 0x198 // Size: 0xd0
	bool bCanFreeze; // Offset: 0x268 // Size: 0x01
	char pad_0x269[0x7]; // Offset: 0x269 // Size: 0x07
	DelegateProperty AtPanicDelegate; // Offset: 0x270 // Size: 0x10
	struct FScriptMulticastDelegate OnLineCommentDelegate; // Offset: 0x280 // Size: 0x10
	char pad_0x290[0x10]; // Offset: 0x290 // Size: 0x10
	DelegateProperty CodeFinishDelegate; // Offset: 0x2a0 // Size: 0x10
	DelegateProperty CodeOutputDelegate; // Offset: 0x2b0 // Size: 0x10
	DelegateProperty HasEventToRunDelegate; // Offset: 0x2c0 // Size: 0x10
	DelegateProperty PrepareEventDelegate; // Offset: 0x2d0 // Size: 0x10
	DelegateProperty ExecuteDelayedDelegate; // Offset: 0x2e0 // Size: 0x10
	DelegateProperty CodePreExecuteDelegate; // Offset: 0x2f0 // Size: 0x10
	char pad_0x300[0x20]; // Offset: 0x300 // Size: 0x20
	StrProperty MainModule; // Offset: 0x320 // Size: 0x10
	StrProperty EventHandlerName; // Offset: 0x330 // Size: 0x10
	struct TScriptInterface<Class> EntityInterface; // Offset: 0x340 // Size: 0x10
	char pad_0x350[0xf0]; // Offset: 0x350 // Size: 0xf0

	// Functions

	// Object Name: Function UgcLua.CreativeLuaVM.Step
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Step(); // Offset: 0x101f56cec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryProfile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUGCLuaMemoryProfile(bool bEnable); // Offset: 0x101f56c68 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryAllocDebugPrint
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUGCLuaMemoryAllocDebugPrint(bool bEnable); // Offset: 0x101f56be4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UgcLua.CreativeLuaVM.SetPerformanceLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPerformanceLog(bool bEnable); // Offset: 0x101f56b60 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UgcLua.CreativeLuaVM.SetNowRC
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNowRC(IntProperty idx); // Offset: 0x101f56ae4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate
	// Flags: [Final|Native|Public]
	void SetCodeOutputDelegate(DelegateProperty InDelegate); // Offset: 0x101f56a54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate
	// Flags: [Final|Native|Public]
	void SetCodeFinishDelegate(DelegateProperty InDelegate); // Offset: 0x101f569c4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UgcLua.CreativeLuaVM.ResetUGCLuaMemoryProfile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetUGCLuaMemoryProfile(); // Offset: 0x101f569b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reset(); // Offset: 0x101f5699c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.RequireMain
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequireMain(); // Offset: 0x101f56988 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.RegisterLuaFunctions
	// Flags: [Final|Native|Public]
	void RegisterLuaFunctions(StrProperty ModuleName, struct TArray<StrProperty> OpenFunctions); // Offset: 0x101f5680c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue
	// Flags: [Final|Native|Public]
	void RegisterLuaAPIStringValue(StrProperty ModuleName, StrProperty Name, StrProperty Value); // Offset: 0x101f565f8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue
	// Flags: [Final|Native|Public]
	void RegisterLuaAPINumberValue(StrProperty ModuleName, StrProperty Name, float Value); // Offset: 0x101f5643c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue
	// Flags: [Final|Native|Public]
	void RegisterLuaAPIBoolValue(StrProperty ModuleName, StrProperty Name, bool Value); // Offset: 0x101f56270 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshLastCommentInfo(); // Offset: 0x101f5625c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.PostInit
	// Flags: [Native|Public|BlueprintCallable]
	void PostInit(); // Offset: 0x101f56240 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.LogBlockExecuteTime
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LogBlockExecuteTime(StrProperty blockId); // Offset: 0x101f561a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UgcLua.CreativeLuaVM.KillJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	void KillJob(IntProperty JobId, bool bReset); // Offset: 0x101f560e4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function UgcLua.CreativeLuaVM.InitEditMods
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void InitEditMods(struct TArray<StrProperty>& mods); // Offset: 0x101f5603c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UgcLua.CreativeLuaVM.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(IntProperty MemLimit); // Offset: 0x101f55fc0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UgcLua.CreativeLuaVM.GetUGCLuaBlockMemoryLiveBytes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetUGCLuaBlockMemoryLiveBytes(StrProperty blockId); // Offset: 0x101f55f18 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function UgcLua.CreativeLuaVM.GetNowRC
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetNowRC(); // Offset: 0x101f55ee4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UgcLua.CreativeLuaVM.GetMemoryUsed
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetMemoryUsed(); // Offset: 0x101f55eb0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UgcLua.CreativeLuaVM.GetLastCommentInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetLastCommentInfo(); // Offset: 0x101f55e4c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UgcLua.CreativeLuaVM.FreezeGameTime
	// Flags: [Final|Native|Public]
	void FreezeGameTime(bool bCond); // Offset: 0x101f55dc8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UgcLua.CreativeLuaVM.ExtractCurrentCode
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ExtractCurrentCode(IntProperty& CodeIdx, StrProperty& code); // Offset: 0x101f55cc8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UgcLua.CreativeLuaVM.ExportUGCLuaMemoryProfileAsSluaStat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool ExportUGCLuaMemoryProfileAsSluaStat(StrProperty FilePath, StrProperty& outFilePath); // Offset: 0x101f55bbc // Return & Params: Num(3) Size(0x21)

	// Object Name: Function UgcLua.CreativeLuaVM.ExeCodeUntilSuspended
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ExeCodeUntilSuspended(); // Offset: 0x101f55ba8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.EnqueueCode
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty EnqueueCode(StrProperty& RuntimeCode, IntProperty& CodeUID); // Offset: 0x101f55a9c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function UgcLua.CreativeLuaVM.DumpUGCLuaBlockMemoryProfile
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty DumpUGCLuaBlockMemoryProfile(IntProperty TopN); // Offset: 0x101f559e8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UgcLua.CreativeLuaVM.DescribeLuaThread
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty DescribeLuaThread(); // Offset: 0x101f55984 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UgcLua.CreativeLuaVM.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Close(); // Offset: 0x101f55970 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UgcLua.CreativeLuaVM.AllowRequire
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AllowRequire(bool bAllow); // Offset: 0x101f558ec // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UgcLua.CreativeEntityInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeEntityInterface : UInterface {
	// Functions

	// Object Name: Function UgcLua.CreativeEntityInterface.UUID2UObject
	// Flags: [Native|Public|HasOutParms]
	struct UObject* UUID2UObject(int64_t& UUID); // Offset: 0x101f55180 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UgcLua.CreativeEntityInterface.UUID2Type
	// Flags: [Native|Public|HasOutParms]
	bool UUID2Type(int64_t& UUID, enum class EEntityType& Type, char& SubType); // Offset: 0x101f5503c // Return & Params: Num(4) Size(0xb)

	// Object Name: Function UgcLua.CreativeEntityInterface.UUID2Key
	// Flags: [Native|Public|HasOutParms]
	uint32_t UUID2Key(int64_t& UUID); // Offset: 0x101f54f98 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UgcLua.CreativeEntityInterface.RemoveUUID
	// Flags: [Native|Public|HasOutParms]
	void RemoveUUID(int64_t& UUID); // Offset: 0x101f54f04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID
	// Flags: [Native|Public|HasOutParms]
	int64_t GetInstanceObjectUUID(int64_t& UUID); // Offset: 0x101f54e60 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject
	// Flags: [Native|Public|HasOutParms]
	int64_t CreateEntityIfNotExistsFromUObject(struct UObject* Object, enum class EEntityType& Type, char& SubType); // Offset: 0x101f54d34 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey
	// Flags: [Native|Public|HasOutParms]
	int64_t CreateEntityIfNotExistsFromKey(uint32_t& Key, enum class EEntityType& Type, char& SubType); // Offset: 0x101f54bf0 // Return & Params: Num(4) Size(0x10)
};

