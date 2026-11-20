#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Object Name: Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

