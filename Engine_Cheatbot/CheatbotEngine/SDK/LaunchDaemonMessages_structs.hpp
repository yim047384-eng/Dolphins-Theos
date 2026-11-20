#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct LaunchDaemonMessages.IOSLaunchDaemonLaunchApp
// Size: 0x20 // Inherited bytes: 0x00
struct FIOSLaunchDaemonLaunchApp {
	// Fields
	StrProperty AppID; // Offset: 0x00 // Size: 0x10
	StrProperty Parameters; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct LaunchDaemonMessages.IOSLaunchDaemonPong
// Size: 0x48 // Inherited bytes: 0x00
struct FIOSLaunchDaemonPong {
	// Fields
	StrProperty DeviceID; // Offset: 0x00 // Size: 0x10
	StrProperty DeviceName; // Offset: 0x10 // Size: 0x10
	StrProperty DeviceStatus; // Offset: 0x20 // Size: 0x10
	StrProperty DeviceType; // Offset: 0x30 // Size: 0x10
	bool bCanPowerOff; // Offset: 0x40 // Size: 0x01
	bool bCanPowerOn; // Offset: 0x41 // Size: 0x01
	bool bCanReboot; // Offset: 0x42 // Size: 0x01
	char pad_0x43[0x5]; // Offset: 0x43 // Size: 0x05
};

// Object Name: ScriptStruct LaunchDaemonMessages.IOSLaunchDaemonPing
// Size: 0x01 // Inherited bytes: 0x00
struct FIOSLaunchDaemonPing {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

