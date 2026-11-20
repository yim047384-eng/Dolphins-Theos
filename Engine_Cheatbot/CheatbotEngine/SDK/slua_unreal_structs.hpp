#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct slua_unreal.SluaBPVar
// Size: 0x20 // Inherited bytes: 0x00
struct FSluaBPVar {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct slua_unreal.LuaNetSerialization
// Size: 0x50 // Inherited bytes: 0x00
struct FLuaNetSerialization {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct slua_unreal.LuaPatchRPCFrame
// Size: 0x40 // Inherited bytes: 0x00
struct FLuaPatchRPCFrame {
	// Fields
	char pad_0x0[0x40]; // Offset: 0x00 // Size: 0x40
};

// Object Name: ScriptStruct slua_unreal.unctionProfileCallInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FunctionProfileCallInfo {
	// Fields
	struct FLuaFunctionDefine functionDefine; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	int64_t begTime; // Offset: 0x10 // Size: 0x08
	bool bIsCoroutineBegin; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x17]; // Offset: 0x19 // Size: 0x17
};

// Object Name: ScriptStruct slua_unreal.LuaFunctionDefine
// Size: 0x0c // Inherited bytes: 0x00
struct FLuaFunctionDefine {
	// Fields
	uint32_t fileNameIndex; // Offset: 0x00 // Size: 0x04
	uint32_t functionNameIndex; // Offset: 0x04 // Size: 0x04
	IntProperty lineDefined; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct slua_unreal.unctionProfileNode
// Size: 0x30 // Inherited bytes: 0x00
struct FunctionProfileNode {
	// Fields
	struct FLuaFunctionDefine functionDefine; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	int64_t costTime; // Offset: 0x10 // Size: 0x08
	IntProperty countOfCalls; // Offset: 0x18 // Size: 0x04
	IntProperty layerIdx; // Offset: 0x1c // Size: 0x04
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct slua_unreal.ileMemInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FileMemInfo {
	// Fields
	uint32_t fileNameIndex; // Offset: 0x00 // Size: 0x04
	IntProperty LineNumber; // Offset: 0x04 // Size: 0x04
	float Size; // Offset: 0x08 // Size: 0x04
	float difference; // Offset: 0x0c // Size: 0x04
};

