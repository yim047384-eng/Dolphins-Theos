#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct EngineMessages.EngineServiceNotification
// Size: 0x18 // Inherited bytes: 0x00
struct FEngineServiceNotification {
	// Fields
	StrProperty Text; // Offset: 0x00 // Size: 0x10
	double TimeSeconds; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct EngineMessages.EngineServiceTerminate
// Size: 0x10 // Inherited bytes: 0x00
struct FEngineServiceTerminate {
	// Fields
	StrProperty UserName; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size: 0x20 // Inherited bytes: 0x00
struct FEngineServiceExecuteCommand {
	// Fields
	StrProperty Command; // Offset: 0x00 // Size: 0x10
	StrProperty UserName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size: 0x20 // Inherited bytes: 0x00
struct FEngineServiceAuthGrant {
	// Fields
	StrProperty UserName; // Offset: 0x00 // Size: 0x10
	StrProperty UserToGrant; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size: 0x20 // Inherited bytes: 0x00
struct FEngineServiceAuthDeny {
	// Fields
	StrProperty UserName; // Offset: 0x00 // Size: 0x10
	StrProperty UserToDeny; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct EngineMessages.EngineServicePong
// Size: 0x50 // Inherited bytes: 0x00
struct FEngineServicePong {
	// Fields
	StrProperty CurrentLevel; // Offset: 0x00 // Size: 0x10
	IntProperty EngineVersion; // Offset: 0x10 // Size: 0x04
	bool HasBegunPlay; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct FGuid InstanceID; // Offset: 0x18 // Size: 0x10
	StrProperty InstanceType; // Offset: 0x28 // Size: 0x10
	struct FGuid SessionId; // Offset: 0x38 // Size: 0x10
	float WorldTimeSeconds; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct EngineMessages.EngineServicePing
// Size: 0x01 // Inherited bytes: 0x00
struct FEngineServicePing {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

