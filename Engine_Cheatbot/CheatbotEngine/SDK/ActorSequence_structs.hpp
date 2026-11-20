#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 // Inherited bytes: 0x00
struct FActorSequenceObjectReferenceMap {
	// Fields
	struct TArray<struct FGuid> BindingIds; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FActorSequenceObjectReferences> References; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 // Inherited bytes: 0x00
struct FActorSequenceObjectReferences {
	// Fields
	struct TArray<struct FActorSequenceObjectReference> Array; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 // Inherited bytes: 0x00
struct FActorSequenceObjectReference {
	// Fields
	enum class EActorSequenceObjectReferenceType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FGuid ActorId; // Offset: 0x04 // Size: 0x10
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty PathToComponent; // Offset: 0x18 // Size: 0x10
};

