#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class HelpshiftUE4.HelpshiftUE4Settings
// Size: 0x70 // Inherited bytes: 0x28
struct UHelpshiftUE4Settings : UObject {
	// Fields
	StrProperty APIKey; // Offset: 0x28 // Size: 0x10
	StrProperty DomainName; // Offset: 0x38 // Size: 0x10
	StrProperty AppID_iOS; // Offset: 0x48 // Size: 0x10
	StrProperty AppID_Android; // Offset: 0x58 // Size: 0x10
	bool FirebaseIntegration; // Offset: 0x68 // Size: 0x01
	bool EnableLogging; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x6]; // Offset: 0x6a // Size: 0x06
};

