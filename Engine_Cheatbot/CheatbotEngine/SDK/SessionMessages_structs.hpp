#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x01 // Inherited bytes: 0x00
struct FSessionServiceLogUnsubscribe {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x01 // Inherited bytes: 0x00
struct FSessionServiceLogSubscribe {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 // Inherited bytes: 0x00
struct FSessionServiceLog {
	// Fields
	struct FName Category; // Offset: 0x00 // Size: 0x08
	StrProperty Data; // Offset: 0x08 // Size: 0x10
	struct FGuid InstanceID; // Offset: 0x18 // Size: 0x10
	double TimeSeconds; // Offset: 0x28 // Size: 0x08
	char Verbosity; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct SessionMessages.SessionServicePong
// Size: 0x98 // Inherited bytes: 0x00
struct FSessionServicePong {
	// Fields
	bool Authorized; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty BuildDate; // Offset: 0x08 // Size: 0x10
	StrProperty DeviceName; // Offset: 0x18 // Size: 0x10
	struct FGuid InstanceID; // Offset: 0x28 // Size: 0x10
	StrProperty InstanceName; // Offset: 0x38 // Size: 0x10
	bool IsConsoleBuild; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	StrProperty PlatformName; // Offset: 0x50 // Size: 0x10
	struct FGuid SessionId; // Offset: 0x60 // Size: 0x10
	StrProperty SessionName; // Offset: 0x70 // Size: 0x10
	StrProperty SessionOwner; // Offset: 0x80 // Size: 0x10
	bool Standalone; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
};

// Object Name: ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 // Inherited bytes: 0x00
struct FSessionServicePing {
	// Fields
	StrProperty UserName; // Offset: 0x00 // Size: 0x10
};

