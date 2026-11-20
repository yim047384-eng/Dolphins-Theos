#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8 {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2
};

// Object Name: Enum AkAudio.ECustomAKAreaType
enum class ECustomAKAreaType : uint8 {
	EAT_NormalArea = 0,
	EAT_ApartArea = 1,
	EAT_ApartArea2 = 2,
	EAT_TransitionArea = 3,
	EAT_MAX = 4
};

// Object Name: Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8 {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3
};

// Object Name: Enum AkAudio.PanningRule
enum class PanningRule : uint8 {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2
};

// Object Name: Enum AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8 {
	Ak_Parent = 0,
	Ak_1_1 = 1,
	Ak_2_1 = 2,
	Ak_3_1 = 3,
	Ak_4_1 = 4,
	Ak_5_2 = 5,
	Ak_7_2 = 6,
	Ak_5_1_3 = 7,
	Ak_7_1_3 = 8,
	Ak_7_1_5 = 9,
	Ak_Auro_9_2 = 10,
	Ak_Auro_10_2 = 11,
	Ak_Auro_11_2 = 12,
	Ak_Auro_13_2 = 13,
	Ak_Ambisonics_1st_order = 14,
	Ak_Ambisonics_2nd_order = 15,
	Ak_Ambisonics_3rd_order = 16,
	Ak_MAX = 17
};

// Object Name: Enum AkAudio.EFrequencyRange
enum class EFrequencyRange : uint8 {
	SubBass = 0,
	Bass = 1,
	LowMid = 2,
	Mid = 3,
	UpperMid = 4,
	High = 5,
	VeryHigh = 6,
	Decibal = 7,
	EFrequencyRange_MAX = 8
};

