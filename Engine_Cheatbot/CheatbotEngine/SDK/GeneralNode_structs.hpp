#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct GeneralNode.GNMultiSharedDelegateWrap
// Size: 0x18 // Inherited bytes: 0x00
struct FGNMultiSharedDelegateWrap {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Outer; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct GeneralNode.GNSharedDelegateWrap
// Size: 0x18 // Inherited bytes: 0x00
struct FGNSharedDelegateWrap {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Outer; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct GeneralNode.GNUniqueInstancedNodeKey
// Size: 0x10 // Inherited bytes: 0x00
struct FGNUniqueInstancedNodeKey {
	// Fields
	struct UObject* Object; // Offset: 0x00 // Size: 0x08
	struct FName Key; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct GeneralNode.GNComponentPicker
// Size: 0x10 // Inherited bytes: 0x00
struct FGNComponentPicker {
	// Fields
	struct UActorComponent* ComponentClass; // Offset: 0x00 // Size: 0x08
	struct FName ComponentTag; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct GeneralNode.GNActionRunData
// Size: 0x48 // Inherited bytes: 0x00
struct FGNActionRunData {
	// Fields
	struct UGNAction* Action; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UGNCondition*> Conditions; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UGNTargetPicker*> TargetPickers; // Offset: 0x18 // Size: 0x10
	struct TArray<struct UGNTargetFilter*> TargetFilters; // Offset: 0x28 // Size: 0x10
	struct FGNContext Context; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct GeneralNode.GNContext
// Size: 0x10 // Inherited bytes: 0x00
struct FGNContext {
	// Fields
	struct AActor* Owner; // Offset: 0x00 // Size: 0x08
	struct UObject* SourceObject; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct GeneralNode.GNActionInstance
// Size: 0x68 // Inherited bytes: 0x00
struct FGNActionInstance {
	// Fields
	struct UGNAction* Action; // Offset: 0x00 // Size: 0x08
	struct FGNContext Context; // Offset: 0x08 // Size: 0x10
	struct FGNTargetContext TargetContext; // Offset: 0x18 // Size: 0x20
	char pad_0x38[0x30]; // Offset: 0x38 // Size: 0x30
};

// Object Name: ScriptStruct GeneralNode.GNTargetContext
// Size: 0x20 // Inherited bytes: 0x00
struct FGNTargetContext {
	// Fields
	struct TArray<struct UObject*> Targets; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVector> TargetLocations; // Offset: 0x10 // Size: 0x10
};

