#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8 {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	EMobileCSMQuality_MAX = 3
};

