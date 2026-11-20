#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum EZUMG.EEzItemState
enum class EEzItemState : uint8 {
	Normal = 0,
	Selected = 1,
	Disabled = 2,
	EEzItemState_MAX = 3
};

// Object Name: Enum EZUMG.ESectorSizeRule
enum class ESectorSizeRule : uint8 {
	Fixed = 0,
	Fill = 1,
	ESectorSizeRule_MAX = 2
};

// Object Name: Enum EZUMG.ERadialArrangement
enum class ERadialArrangement : uint8 {
	Default = 0,
	AlignFirst = 1,
	AlignCenter = 2,
	ERadialArrangement_MAX = 3
};

