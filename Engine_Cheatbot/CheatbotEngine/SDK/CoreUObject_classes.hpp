#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CoreUObject.Object
// Size: 0x28 // Inherited bytes: 0x00
struct UObject {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28

	// Functions

	// Object Name: Function CoreUObject.Object.ExecuteUbergraph
	// Flags: [Event|Public|BlueprintEvent]
	void ExecuteUbergraph(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class CoreUObject.Interface
// Size: 0x28 // Inherited bytes: 0x28
struct UInterface : UObject {
};

// Object Name: Class CoreUObject.Field
// Size: 0x30 // Inherited bytes: 0x28
struct UField : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class CoreUObject.Struct
// Size: 0x88 // Inherited bytes: 0x30
struct UStruct : UField {
	// Fields
	char pad_0x30[0x58]; // Offset: 0x30 // Size: 0x58
};

// Object Name: Class CoreUObject.Package
// Size: 0x158 // Inherited bytes: 0x28
struct UPackage : UObject {
	// Fields
	char pad_0x28[0x130]; // Offset: 0x28 // Size: 0x130
};

// Object Name: Class CoreUObject.Class
// Size: 0x3a0 // Inherited bytes: 0x88
struct UClass : UStruct {
	// Fields
	char pad_0x88[0x318]; // Offset: 0x88 // Size: 0x318
};

// Object Name: Class CoreUObject.GCObjectReferencer
// Size: 0x78 // Inherited bytes: 0x28
struct UGCObjectReferencer : UObject {
	// Fields
	char pad_0x28[0x50]; // Offset: 0x28 // Size: 0x50
};

// Object Name: Class CoreUObject.TextBuffer
// Size: 0x50 // Inherited bytes: 0x28
struct UTextBuffer : UObject {
	// Fields
	char pad_0x28[0x28]; // Offset: 0x28 // Size: 0x28
};

// Object Name: Class CoreUObject.ScriptStruct
// Size: 0x98 // Inherited bytes: 0x88
struct UScriptStruct : UStruct {
	// Fields
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10
};

// Object Name: Class CoreUObject.Function
// Size: 0xc0 // Inherited bytes: 0x88
struct UFunction : UStruct {
	// Fields
	char pad_0x88[0x38]; // Offset: 0x88 // Size: 0x38
};

// Object Name: Class CoreUObject.DelegateFunction
// Size: 0xc0 // Inherited bytes: 0xc0
struct UDelegateFunction : UFunction {
};

// Object Name: Class CoreUObject.DynamicClass
// Size: 0x408 // Inherited bytes: 0x3a0
struct UDynamicClass : UClass {
	// Fields
	char pad_0x3A0[0x68]; // Offset: 0x3a0 // Size: 0x68
};

// Object Name: Class CoreUObject.PackageMap
// Size: 0xe0 // Inherited bytes: 0x28
struct UPackageMap : UObject {
	// Fields
	char pad_0x28[0xb8]; // Offset: 0x28 // Size: 0xb8
};

// Object Name: Class CoreUObject.Enum
// Size: 0x60 // Inherited bytes: 0x30
struct UEnum : UField {
	// Fields
	char pad_0x30[0x30]; // Offset: 0x30 // Size: 0x30
};

// Object Name: Class CoreUObject.Property
// Size: 0x70 // Inherited bytes: 0x30
struct UProperty : UField {
	// Fields
	char pad_0x30[0x40]; // Offset: 0x30 // Size: 0x40
};

// Object Name: Class CoreUObject.EnumProperty
// Size: 0x80 // Inherited bytes: 0x70
struct UEnumProperty : UProperty {
	// Fields
	char pad_0x70[0x10]; // Offset: 0x70 // Size: 0x10
};

// Object Name: Class CoreUObject.LinkerPlaceholderClass
// Size: 0x540 // Inherited bytes: 0x3a0
struct ULinkerPlaceholderClass : UClass {
	// Fields
	char pad_0x3A0[0x1a0]; // Offset: 0x3a0 // Size: 0x1a0
};

// Object Name: Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xd8 // Inherited bytes: 0x28
struct ULinkerPlaceholderExportObject : UObject {
	// Fields
	char pad_0x28[0xb0]; // Offset: 0x28 // Size: 0xb0
};

// Object Name: Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x260 // Inherited bytes: 0xc0
struct ULinkerPlaceholderFunction : UFunction {
	// Fields
	char pad_0xC0[0x1a0]; // Offset: 0xc0 // Size: 0x1a0
};

// Object Name: Class CoreUObject.MetaData
// Size: 0xc8 // Inherited bytes: 0x28
struct UMetaData : UObject {
	// Fields
	char pad_0x28[0xa0]; // Offset: 0x28 // Size: 0xa0
};

// Object Name: Class CoreUObject.ObjectRedirector
// Size: 0x30 // Inherited bytes: 0x28
struct UObjectRedirector : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class CoreUObject.ArrayProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UArrayProperty : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.ObjectPropertyBase
// Size: 0x78 // Inherited bytes: 0x70
struct UObjectPropertyBase : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.BoolProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UBoolProperty : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.NumericProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UNumericProperty : UProperty {
};

// Object Name: Class CoreUObject.ByteProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UByteProperty : UNumericProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.ObjectProperty
// Size: 0x78 // Inherited bytes: 0x78
struct UObjectProperty : UObjectPropertyBase {
};

// Object Name: Class CoreUObject.ClassProperty
// Size: 0x80 // Inherited bytes: 0x78
struct UClassProperty : UObjectProperty {
	// Fields
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08
};

// Object Name: Class CoreUObject.DelegateProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UDelegateProperty : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.DoubleProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UDoubleProperty : UNumericProperty {
};

// Object Name: Class CoreUObject.FloatProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UFloatProperty : UNumericProperty {
};

// Object Name: Class CoreUObject.IntProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UIntProperty : UNumericProperty {
};

// Object Name: Class CoreUObject.Int16Property
// Size: 0x70 // Inherited bytes: 0x70
struct UInt16Property : UNumericProperty {
};

// Object Name: Class CoreUObject.Int64Property
// Size: 0x70 // Inherited bytes: 0x70
struct UInt64Property : UNumericProperty {
};

// Object Name: Class CoreUObject.Int8Property
// Size: 0x70 // Inherited bytes: 0x70
struct UInt8Property : UNumericProperty {
};

// Object Name: Class CoreUObject.InterfaceProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UInterfaceProperty : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.LazyObjectProperty
// Size: 0x78 // Inherited bytes: 0x78
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Object Name: Class CoreUObject.MapProperty
// Size: 0xa8 // Inherited bytes: 0x70
struct UMapProperty : UProperty {
	// Fields
	char pad_0x70[0x38]; // Offset: 0x70 // Size: 0x38
};

// Object Name: Class CoreUObject.MulticastDelegateProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UMulticastDelegateProperty : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.NameProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UNameProperty : UProperty {
};

// Object Name: Class CoreUObject.SetProperty
// Size: 0x98 // Inherited bytes: 0x70
struct USetProperty : UProperty {
	// Fields
	char pad_0x70[0x28]; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class CoreUObject.SoftObjectProperty
// Size: 0x78 // Inherited bytes: 0x78
struct USoftObjectProperty : UObjectPropertyBase {
};

// Object Name: Class CoreUObject.SoftClassProperty
// Size: 0x80 // Inherited bytes: 0x78
struct USoftClassProperty : USoftObjectProperty {
	// Fields
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08
};

// Object Name: Class CoreUObject.StrProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UStrProperty : UProperty {
};

// Object Name: Class CoreUObject.StructProperty
// Size: 0x78 // Inherited bytes: 0x70
struct UStructProperty : UProperty {
	// Fields
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class CoreUObject.UInt16Property
// Size: 0x70 // Inherited bytes: 0x70
struct UUInt16Property : UNumericProperty {
};

// Object Name: Class CoreUObject.UInt32Property
// Size: 0x70 // Inherited bytes: 0x70
struct UUInt32Property : UNumericProperty {
};

// Object Name: Class CoreUObject.UInt64Property
// Size: 0x70 // Inherited bytes: 0x70
struct UUInt64Property : UNumericProperty {
};

// Object Name: Class CoreUObject.WeakObjectProperty
// Size: 0x78 // Inherited bytes: 0x78
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Object Name: Class CoreUObject.TextProperty
// Size: 0x70 // Inherited bytes: 0x70
struct UTextProperty : UProperty {
};

