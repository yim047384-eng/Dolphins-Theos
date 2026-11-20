#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0x1d8 // Inherited bytes: 0x00
struct FStructSerializerTestStruct {
	// Fields
	struct FStructSerializerNumericTestStruct Numerics; // Offset: 0x00 // Size: 0x30
	struct FStructSerializerBooleanTestStruct Booleans; // Offset: 0x30 // Size: 0x08
	struct FStructSerializerObjectTestStruct Objects; // Offset: 0x38 // Size: 0x10
	struct FStructSerializerBuiltinTestStruct Builtins; // Offset: 0x48 // Size: 0x60
	struct FStructSerializerArrayTestStruct Arrays; // Offset: 0xa8 // Size: 0x40
	struct FStructSerializerMapTestStruct Maps; // Offset: 0xe8 // Size: 0xf0
};

// Object Name: ScriptStruct Serialization.StructSerializerMapTestStruct
// Size: 0xf0 // Inherited bytes: 0x00
struct FStructSerializerMapTestStruct {
	// Fields
	MapProperty IntToStr; // Offset: 0x00 // Size: 0x50
	MapProperty StrToStr; // Offset: 0x50 // Size: 0x50
	MapProperty StrToVec; // Offset: 0xa0 // Size: 0x50
};

// Object Name: ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x40 // Inherited bytes: 0x00
struct FStructSerializerArrayTestStruct {
	// Fields
	struct TArray<IntProperty> Int32Array; // Offset: 0x00 // Size: 0x10
	IntProperty StaticSingleElement; // Offset: 0x10 // Size: 0x04
	IntProperty StaticInt32Array[0x3]; // Offset: 0x14 // Size: 0x0c
	float StaticFloatArray[0x3]; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FVector> VectorArray; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0x60 // Inherited bytes: 0x00
struct FStructSerializerBuiltinTestStruct {
	// Fields
	struct FGuid Guid; // Offset: 0x00 // Size: 0x10
	struct FName Name; // Offset: 0x10 // Size: 0x08
	StrProperty String; // Offset: 0x18 // Size: 0x10
	struct FRotator Rotator; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct FText Text; // Offset: 0x38 // Size: 0x18
	struct FVector Vector; // Offset: 0x50 // Size: 0x0c
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FStructSerializerObjectTestStruct {
	// Fields
	struct UObject* Class; // Offset: 0x00 // Size: 0x08
	struct UObject* ObjectPtr; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FStructSerializerBooleanTestStruct {
	// Fields
	bool BoolFalse; // Offset: 0x00 // Size: 0x01
	bool BoolTrue; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	uint32_t Bitfield; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 // Inherited bytes: 0x00
struct FStructSerializerNumericTestStruct {
	// Fields
	uint8_t Int8; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x1]; // Offset: 0x01 // Size: 0x01
	int16_t Int16; // Offset: 0x02 // Size: 0x02
	IntProperty Int32; // Offset: 0x04 // Size: 0x04
	int64_t Int64; // Offset: 0x08 // Size: 0x08
	char UInt8; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x1]; // Offset: 0x11 // Size: 0x01
	uint16_t UInt16; // Offset: 0x12 // Size: 0x02
	uint32_t UInt32; // Offset: 0x14 // Size: 0x04
	uint64 UInt64; // Offset: 0x18 // Size: 0x08
	float Float; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	double Double; // Offset: 0x28 // Size: 0x08
};

