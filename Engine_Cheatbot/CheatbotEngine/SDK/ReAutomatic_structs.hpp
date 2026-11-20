#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ReAutomatic.FindUICondition
// Size: 0x28 // Inherited bytes: 0x00
struct FFindUICondition {
	// Fields
	enum class EUIType UIType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty UINameRegex; // Offset: 0x08 // Size: 0x10
	StrProperty ContainTextRegex; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ReAutomatic.LuaScriptMessage
// Size: 0x18 // Inherited bytes: 0x00
struct FLuaScriptMessage {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty LuaScript; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ReAutomatic.CmdTypes
// Size: 0x01 // Inherited bytes: 0x00
struct FCmdTypes {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ReAutomatic.RemoteControllerInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FRemoteControllerInfo {
	// Fields
	StrProperty ControllerName; // Offset: 0x00 // Size: 0x10
	enum class ERouteType ControllerType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ReAutomatic.RouteSendMessage
// Size: 0x50 // Inherited bytes: 0x00
struct FRouteSendMessage {
	// Fields
	enum class ERouteType FromRouteType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty FromRouteName; // Offset: 0x08 // Size: 0x10
	enum class ERouteType TargetRouteType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	StrProperty TargetRouteName; // Offset: 0x20 // Size: 0x10
	char pad_0x30[0x20]; // Offset: 0x30 // Size: 0x20
};

// Object Name: ScriptStruct ReAutomatic.RawCommandMessage
// Size: 0x20 // Inherited bytes: 0x00
struct FRawCommandMessage {
	// Fields
	StrProperty CmdId; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ReAutomatic.RouteCloseMessage
// Size: 0x18 // Inherited bytes: 0x00
struct FRouteCloseMessage {
	// Fields
	StrProperty RegistName; // Offset: 0x00 // Size: 0x10
	enum class ERouteType RegistType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ReAutomatic.RouteRegistMessage
// Size: 0x18 // Inherited bytes: 0x00
struct FRouteRegistMessage {
	// Fields
	StrProperty RegistName; // Offset: 0x00 // Size: 0x10
	enum class ERouteType RegistType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

