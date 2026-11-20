#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum OodleNetworkHandlerComponent.EOodleNetworkEnableMode
enum class EOodleNetworkEnableMode : uint8 {
	AlwaysEnabled = 0,
	WhenCompressedPacketReceived = 1,
	EOodleNetworkEnableMode_MAX = 2
};

