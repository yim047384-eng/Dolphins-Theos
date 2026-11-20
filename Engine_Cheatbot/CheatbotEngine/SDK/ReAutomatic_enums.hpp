#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ReAutomatic.EUIType
enum class EUIType : uint8 {
	Any = 0,
	Clickable = 1,
	TextInput = 2,
	Scrollable = 3,
	Text = 4,
	Checkable = 5,
	EUIType_MAX = 6
};

// Object Name: Enum ReAutomatic.ERouteProtoID
enum class ERouteProtoID : uint8 {
	Regist = 0,
	NormalMessage = 1,
	Close = 2,
	HeartBeat = 3,
	Log = 4,
	ListDevice = 5,
	Max = 5
};

// Object Name: Enum ReAutomatic.ERouteType
enum class ERouteType : uint8 {
	RouteServer = 0,
	LocalController = 1,
	MobileDevice = 2,
	UnrealEngine = 3,
	WebService = 4,
	Max = 4
};

