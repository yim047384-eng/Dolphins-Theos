#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MMKVUnreal.MMKVObject
// Size: 0x30 // Inherited bytes: 0x28
struct UMMKVObject : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function MMKVUnreal.MMKVObject.TotalSize
	// Flags: [Final|Native|Public|Const]
	uint32_t TotalSize(); // Offset: 0x10228c3cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MMKVUnreal.MMKVObject.SetString
	// Flags: [Final|Native|Public]
	bool SetString(StrProperty Key, StrProperty Value); // Offset: 0x10228c2d0 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function MMKVUnreal.MMKVObject.SetInt32
	// Flags: [Final|Native|Public]
	bool SetInt32(StrProperty Key, IntProperty Value); // Offset: 0x10228c1e8 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function MMKVUnreal.MMKVObject.SetErrorLogDelegate
	// Flags: [Final|Native|Static|Public]
	void SetErrorLogDelegate(DelegateProperty handler); // Offset: 0x10228c160 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MMKVUnreal.MMKVObject.SetDouble
	// Flags: [Final|Native|Public]
	bool SetDouble(StrProperty Key, double Value); // Offset: 0x10228c078 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function MMKVUnreal.MMKVObject.SetBuffer
	// Flags: [Final|Native|Public|HasOutParms]
	bool SetBuffer(StrProperty Key, struct TArray<char>& Buffer); // Offset: 0x10228bf6c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function MMKVUnreal.MMKVObject.SetBool
	// Flags: [Final|Native|Public]
	bool SetBool(StrProperty Key, bool Value); // Offset: 0x10228be7c // Return & Params: Num(3) Size(0x12)

	// Object Name: Function MMKVUnreal.MMKVObject.Remove
	// Flags: [Final|Native|Public]
	void Remove(StrProperty Key); // Offset: 0x10228bde4 // Return & Params: Num(1) Size(0x10)

	// Object Name: DelegateFunction MMKVUnreal.MMKVObject.MMKVLogError__DelegateSignature
	// Flags: [Public|Delegate]
	void MMKVLogError__DelegateSignature(StrProperty MapID, IntProperty errorType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function MMKVUnreal.MMKVObject.Init
	// Flags: [Final|Native|Public]
	void Init(StrProperty MMapID, StrProperty RootPath); // Offset: 0x10228bcf8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function MMKVUnreal.MMKVObject.GetValueSize
	// Flags: [Final|Native|Public]
	uint32_t GetValueSize(StrProperty Key); // Offset: 0x10228bc50 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function MMKVUnreal.MMKVObject.GetString
	// Flags: [Final|Native|Public|Const]
	StrProperty GetString(StrProperty Key); // Offset: 0x10228bb80 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function MMKVUnreal.MMKVObject.GetInt32
	// Flags: [Final|Native|Public|Const]
	IntProperty GetInt32(StrProperty Key); // Offset: 0x10228bad8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function MMKVUnreal.MMKVObject.GetDouble
	// Flags: [Final|Native|Public|Const]
	double GetDouble(StrProperty Key); // Offset: 0x10228ba30 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function MMKVUnreal.MMKVObject.GetBuffer
	// Flags: [Final|Native|Public|Const]
	struct TArray<char> GetBuffer(StrProperty Key); // Offset: 0x10228b960 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function MMKVUnreal.MMKVObject.GetBool
	// Flags: [Final|Native|Public|Const]
	bool GetBool(StrProperty Key); // Offset: 0x10228b8b8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MMKVUnreal.MMKVObject.GetAllKeys
	// Flags: [Final|Native|Public|Const]
	MapProperty GetAllKeys(); // Offset: 0x10228b854 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function MMKVUnreal.MMKVObject.ContainsKey
	// Flags: [Final|Native|Public|Const]
	bool ContainsKey(StrProperty Key); // Offset: 0x10228b7ac // Return & Params: Num(2) Size(0x11)
};

