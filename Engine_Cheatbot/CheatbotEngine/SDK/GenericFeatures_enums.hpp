#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum GenericFeatures.EHasAITagStateLogic
enum class EHasAITagStateLogic : uint8 {
	Any = 0,
	All = 1,
	None = 2,
	EHasAITagStateLogic_MAX = 3
};

// Object Name: Enum GenericFeatures.EGenericSearchEnemyRule
enum class EGenericSearchEnemyRule : uint8 {
	Nearest = 0,
	Farthest = 1,
	Random = 2,
	MostHP = 3,
	LeastHP = 4,
	LuaCustom = 5,
	ByBlackboardKey = 255,
	EGenericSearchEnemyRule_MAX = 256
};

