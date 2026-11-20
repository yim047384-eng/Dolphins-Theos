#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum IOSDeviceProfileSelector.ECompareType
enum class ECompareType : uint8 {
	CMP_Equal = 0,
	CMP_Less = 1,
	CMP_LessEqual = 2,
	CMP_Greater = 3,
	CMP_GreaterEqual = 4,
	CMP_NotEqual = 5,
	CMP_Regex = 6,
	CMP_MAX = 7
};

// Object Name: Enum IOSDeviceProfileSelector.ESourceType
enum class ESourceType : uint8 {
	SRC_PreviousRegexMatch = 0,
	SRC_DeviceModel = 1,
	SRC_iOSVersion = 2,
	SRC_MAX = 3
};

