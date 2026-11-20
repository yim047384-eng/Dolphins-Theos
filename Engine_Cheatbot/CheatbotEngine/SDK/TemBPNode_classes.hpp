#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class TemBPNode.TemBPLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UTemBPLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function TemBPNode.TemBPLibrary.TempUIMsgInvokeRef
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void TempUIMsgInvokeRef(struct UObject* ObjContext, StrProperty MsgName, StrProperty ModuleName, struct TArray<struct FTemBPDataAddr>& ParamArray); // Offset: 0x101a774f8 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function TemBPNode.TemBPLibrary.TempBridgeEventInvokeRef
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void TempBridgeEventInvokeRef(struct UObject* ObjContext, StrProperty EventType, StrProperty EventID, struct TArray<struct FTemBPDataAddr>& ParamArray); // Offset: 0x101a77374 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function TemBPNode.TemBPLibrary.AddrFromWild
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FTemBPDataAddr AddrFromWild(StrProperty DataType, struct FTemBPDataAddr& InAny); // Offset: 0x101a77368 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function TemBPNode.TemBPLibrary.AddrFromSet
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FTemBPDataAddr AddrFromSet(StrProperty DataType, SetProperty& InAny); // Offset: 0x101a7735c // Return & Params: Num(3) Size(0x78)

	// Object Name: Function TemBPNode.TemBPLibrary.AddrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FTemBPDataAddr AddrFromMap(StrProperty DataType, MapProperty& InAny); // Offset: 0x101a77350 // Return & Params: Num(3) Size(0x78)

	// Object Name: Function TemBPNode.TemBPLibrary.AddrFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FTemBPDataAddr AddrFromArray(StrProperty DataType, struct TArray<IntProperty>& InAny); // Offset: 0x101a77344 // Return & Params: Num(3) Size(0x38)
};

// Object Name: Class TemBPNode.LuaTemBPData
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaTemBPData : UObject {
};

// Object Name: Class TemBPNode.LuaTemBPData_bool
// Size: 0x30 // Inherited bytes: 0x28
struct ULuaTemBPData_bool : ULuaTemBPData {
	// Fields
	bool Data; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: Class TemBPNode.LuaTemBPData_int
// Size: 0x30 // Inherited bytes: 0x28
struct ULuaTemBPData_int : ULuaTemBPData {
	// Fields
	IntProperty Data; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class TemBPNode.LuaTemBPData_float
// Size: 0x30 // Inherited bytes: 0x28
struct ULuaTemBPData_float : ULuaTemBPData {
	// Fields
	float Data; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class TemBPNode.LuaTemBPData_string
// Size: 0x38 // Inherited bytes: 0x28
struct ULuaTemBPData_string : ULuaTemBPData {
	// Fields
	StrProperty Data; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class TemBPNode.LuaTemBPData_object
// Size: 0x30 // Inherited bytes: 0x28
struct ULuaTemBPData_object : ULuaTemBPData {
	// Fields
	struct UObject* Data; // Offset: 0x28 // Size: 0x08
};

