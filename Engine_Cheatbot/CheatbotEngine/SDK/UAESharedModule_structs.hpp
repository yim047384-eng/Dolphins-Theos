#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct UAESharedModule.UAEBlackboardParameter
// Size: 0x98 // Inherited bytes: 0x00
struct FUAEBlackboardParameter {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	enum class EUAEBlackboardType Type; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FUAEBlackboardParameterDefaultValue DefaultValue; // Offset: 0x10 // Size: 0x88
};

// Object Name: ScriptStruct UAESharedModule.UAEBlackboardParameterDefaultValue
// Size: 0x88 // Inherited bytes: 0x00
struct FUAEBlackboardParameterDefaultValue {
	// Fields
	struct UObject* DefaultObject; // Offset: 0x00 // Size: 0x28
	struct UClass* DefaultClass; // Offset: 0x28 // Size: 0x28
	char DefaultEnum; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	IntProperty DefaultInt; // Offset: 0x54 // Size: 0x04
	float DefaultFloat; // Offset: 0x58 // Size: 0x04
	bool DefaultBool; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
	StrProperty DefaultString; // Offset: 0x60 // Size: 0x10
	struct FName DefaultName; // Offset: 0x70 // Size: 0x08
	struct FVector DefaultVector; // Offset: 0x78 // Size: 0x0c
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
};

// Object Name: ScriptStruct UAESharedModule.UAEBlackboardKeySelector
// Size: 0x08 // Inherited bytes: 0x00
struct FUAEBlackboardKeySelector {
	// Fields
	struct FName SelectedKeyName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct UAESharedModule.UAEBlackboardKeySelectorIndex
// Size: 0x10 // Inherited bytes: 0x08
struct FUAEBlackboardKeySelectorIndex : FUAEBlackboardKeySelector {
	// Fields
	IntProperty Index; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct UAESharedModule.UAEBlackboardContainer
// Size: 0x3c0 // Inherited bytes: 0x00
struct FUAEBlackboardContainer {
	// Fields
	MapProperty ObjectParamMap; // Offset: 0x00 // Size: 0x50
	MapProperty WeakObjectParamMap; // Offset: 0x50 // Size: 0x50
	MapProperty ClassParamMap; // Offset: 0xa0 // Size: 0x50
	MapProperty EnumParamMap; // Offset: 0xf0 // Size: 0x50
	MapProperty IntParamMap; // Offset: 0x140 // Size: 0x50
	MapProperty UIntParamMap; // Offset: 0x190 // Size: 0x50
	MapProperty FloatParamMap; // Offset: 0x1e0 // Size: 0x50
	MapProperty BoolParamMap; // Offset: 0x230 // Size: 0x50
	MapProperty StringParamMap; // Offset: 0x280 // Size: 0x50
	MapProperty NameParamMap; // Offset: 0x2d0 // Size: 0x50
	MapProperty VectorParamMap; // Offset: 0x320 // Size: 0x50
	MapProperty RotatorParamMap; // Offset: 0x370 // Size: 0x50
};

