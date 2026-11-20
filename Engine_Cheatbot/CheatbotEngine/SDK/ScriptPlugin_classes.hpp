#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ScriptPlugin.LuaContext
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct ALuaContext : AActor {
	// Fields
	struct ULuaStateWrapper* OwningLuaStateWrapper; // Offset: 0x4b0 // Size: 0x08
	struct UObject* OwningObject; // Offset: 0x4b8 // Size: 0x08
	struct UScriptContextComponent* ScriptContextComponent; // Offset: 0x4c0 // Size: 0x08
};

// Object Name: Class ScriptPlugin.ScriptProfiler
// Size: 0x48 // Inherited bytes: 0x28
struct UScriptProfiler : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
};

// Object Name: Class ScriptPlugin.LuaStateWrapper
// Size: 0xf8 // Inherited bytes: 0x28
struct ULuaStateWrapper : UObject {
	// Fields
	char pad_0x28[0xd0]; // Offset: 0x28 // Size: 0xd0
};

// Object Name: Class ScriptPlugin.NetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UNetInterface : UInterface {
};

// Object Name: Class ScriptPlugin.ScriptBlueprint
// Size: 0xf8 // Inherited bytes: 0xd8
struct UScriptBlueprint : UBlueprint {
	// Fields
	struct TArray<char> ByteCode; // Offset: 0xd8 // Size: 0x10
	StrProperty SourceCode; // Offset: 0xe8 // Size: 0x10
};

// Object Name: Class ScriptPlugin.ScriptBlueprintGeneratedClass
// Size: 0x4c8 // Inherited bytes: 0x498
struct UScriptBlueprintGeneratedClass : UBlueprintGeneratedClass {
	// Fields
	struct TArray<char> ByteCode; // Offset: 0x498 // Size: 0x10
	StrProperty SourceCode; // Offset: 0x4a8 // Size: 0x10
	struct TArray<struct UProperty*> ScriptProperties; // Offset: 0x4b8 // Size: 0x10
};

// Object Name: Class ScriptPlugin.ScriptContext
// Size: 0x30 // Inherited bytes: 0x28
struct UScriptContext : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function ScriptPlugin.ScriptContext.CallScriptFunction
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallScriptFunction(StrProperty FunctionName); // Offset: 0x1019ef6b8 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class ScriptPlugin.ScriptContextComponent
// Size: 0x188 // Inherited bytes: 0x178
struct UScriptContextComponent : UActorComponent {
	// Fields
	char pad_0x178[0x8]; // Offset: 0x178 // Size: 0x08
	struct ULuaStateWrapper* OwningLuaStateWrapper; // Offset: 0x180 // Size: 0x08

	// Functions

	// Object Name: Function ScriptPlugin.ScriptContextComponent.PushScriptArrayIndexData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PushScriptArrayIndexData(StrProperty ParamName, IntProperty Index); // Offset: 0x1019efdf0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues
	// Flags: [Native|Public|BlueprintCallable]
	void PushOneScriptPropertyValues(StrProperty ParamName); // Offset: 0x1019efd04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues
	// Flags: [Native|Public|BlueprintCallable]
	void PushAllScriptPropertyValues(); // Offset: 0x1019efce8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.FetchScriptArrayIndexData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FetchScriptArrayIndexData(StrProperty ParamName, IntProperty Index); // Offset: 0x1019efbc4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues
	// Flags: [Native|Public|BlueprintCallable]
	void FetchOneScriptPropertyValues(StrProperty ParamName); // Offset: 0x1019efad8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues
	// Flags: [Native|Public|BlueprintCallable]
	void FetchAllScriptPropertyValues(); // Offset: 0x1019efabc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallScriptFunctionWithoutFetch(StrProperty FunctionName); // Offset: 0x1019ef9d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallScriptFunction(StrProperty FunctionName); // Offset: 0x1019ef8f4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class ScriptPlugin.ScriptHelperNetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UScriptHelperNetInterface : UObject {
	// Functions

	// Object Name: Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty SendPacket_LuaState(); // Offset: 0x1019f0394 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ScriptPlugin.ScriptHelperNetInterface.Disconnect
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void Disconnect(struct TScriptInterface<Class>& NetInterface); // Offset: 0x1019f0310 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ScriptPlugin.ScriptHelperNetInterface.Connect
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void Connect(struct TScriptInterface<Class>& NetInterface, IntProperty Timeout); // Offset: 0x1019f0250 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class ScriptPlugin.ScriptPluginComponent
// Size: 0x30 // Inherited bytes: 0x28
struct UScriptPluginComponent : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction
	// Flags: [Native|Public|BlueprintCallable]
	bool CallScriptFunction(StrProperty FunctionName); // Offset: 0x1019f05a8 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class ScriptPlugin.ScriptTestActor
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct AScriptTestActor : AActor {
	// Fields
	StrProperty TestString; // Offset: 0x4b0 // Size: 0x10
	float TestValue; // Offset: 0x4c0 // Size: 0x04
	bool TestBool; // Offset: 0x4c4 // Size: 0x01
	char pad_0x4C5[0x3]; // Offset: 0x4c5 // Size: 0x03

	// Functions

	// Object Name: Function ScriptPlugin.ScriptTestActor.TestFunction
	// Flags: [Final|Native|Public]
	float TestFunction(float InValue, float InFactor, bool bMultiply); // Offset: 0x1019f0990 // Return & Params: Num(4) Size(0x10)
};

// Object Name: Class ScriptPlugin.LuaClassBaseObj
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct ALuaClassBaseObj : AActor {
	// Functions

	// Object Name: Function ScriptPlugin.LuaClassBaseObj.ItsATest
	// Flags: [Native|Public]
	StrProperty ItsATest(struct FPlayerInfo Player1, struct TArray<IntProperty> nums, IntProperty X, StrProperty Q, struct TArray<struct FPlayerInfo> Player2); // Offset: 0x1019f0d1c // Return & Params: Num(6) Size(0x80)

	// Object Name: Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage
	// Flags: [Native|Public|BlueprintCallable]
	void HandleUIMessage(StrProperty UIMessage); // Offset: 0x1019f0c7c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ScriptPlugin.LuaClassBaseObj.GetGameStatus
	// Flags: [Native|Public|BlueprintCallable]
	StrProperty GetGameStatus(); // Offset: 0x1019f0c10 // Return & Params: Num(1) Size(0x10)
};

