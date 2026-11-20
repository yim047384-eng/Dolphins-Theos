#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GeneralNode.GNNode
// Size: 0x28 // Inherited bytes: 0x28
struct UGNNode : UObject {
};

// Object Name: Class GeneralNode.GNAction
// Size: 0x48 // Inherited bytes: 0x28
struct UGNAction : UGNNode {
	// Fields
	enum class EGNRunRole RunRole; // Offset: 0x28 // Size: 0x01
	bool bActionCanUndo; // Offset: 0x29 // Size: 0x01
	bool bNeedTick; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x1]; // Offset: 0x2b // Size: 0x01
	float TickInterval; // Offset: 0x2c // Size: 0x04
	bool bTargetOwnerIfNoTarget; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float RunDelay; // Offset: 0x34 // Size: 0x04
	bool bNeedUndoOnEnd; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float ActionDuration; // Offset: 0x3c // Size: 0x04
	char pad_0x40[0x8]; // Offset: 0x40 // Size: 0x08
};

// Object Name: Class GeneralNode.GNCondition
// Size: 0x28 // Inherited bytes: 0x28
struct UGNCondition : UGNNode {
};

// Object Name: Class GeneralNode.GNSharedDelegate
// Size: 0x40 // Inherited bytes: 0x28
struct UGNSharedDelegate : UObject {
	// Fields
	struct UObject* FunctionOuter; // Offset: 0x28 // Size: 0x08
	struct FName FunctionName; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08

	// Functions

	// Object Name: Function GeneralNode.GNSharedDelegate.EventTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EventTrigger(); // Offset: 0x10225a248 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GeneralNode.GNSubsystem
// Size: 0x210 // Inherited bytes: 0x30
struct UGNSubsystem : UBattleSubsystem {
	// Fields
	MapProperty InstancedNodes; // Offset: 0x30 // Size: 0x50
	MapProperty UniqueInstancedNodes; // Offset: 0x80 // Size: 0x50
	MapProperty ActionInstances; // Offset: 0xd0 // Size: 0x50
	MapProperty DelegateMap; // Offset: 0x120 // Size: 0x50
	MapProperty MultiDelegateMap; // Offset: 0x170 // Size: 0x50
	char pad_0x1C0[0x50]; // Offset: 0x1c0 // Size: 0x50
};

// Object Name: Class GeneralNode.GNTargetFilter
// Size: 0x28 // Inherited bytes: 0x28
struct UGNTargetFilter : UGNNode {
};

// Object Name: Class GeneralNode.GNTargetPicker
// Size: 0x28 // Inherited bytes: 0x28
struct UGNTargetPicker : UGNNode {
};

