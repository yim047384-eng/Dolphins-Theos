#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum IOSRuntimeSettings.EIOSMetalShaderStandard
enum class EIOSMetalShaderStandard : uint8 {
	IOSMetalSLStandard_1_1 = 0,
	IOSMetalSLStandard_1_2 = 1,
	IOSMetalSLStandard_1_3 = 2,
	IOSMetalSLStandard_2_1 = 3,
	IOSMetalSLStandard_2_2 = 4,
	IOSMetalSLStandard_2_3 = 5,
	IOSMetalSLStandard_2_4 = 6,
	IOSMetalSLStandard_2_5 = 7,
	IOSMetalSLStandard_MAX = 8
};

// Object Name: Enum IOSRuntimeSettings.EIOSVersion
enum class EIOSVersion : uint8 {
	IOS_62 = 6,
	IOS_8 = 7,
	IOS_9 = 8,
	IOS_10 = 9,
	IOS_11 = 10,
	IOS_12 = 11,
	IOS_13 = 12,
	IOS_14 = 13,
	IOS_15 = 14,
	IOS_16 = 15,
	IOS_MAX = 16
};

// Object Name: Enum IOSRuntimeSettings.EPowerUsageFrameRateLock
enum class EPowerUsageFrameRateLock : uint8 {
	PUFRL_None = 0,
	PUFRL_21 = 20,
	PUFRL_31 = 30,
	PUFRL_61 = 60,
	PUFRL_MAX = 61
};

