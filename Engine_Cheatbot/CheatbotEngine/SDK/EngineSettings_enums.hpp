#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8 {
	FavorTop = 0,
	FavorBottom = 1,
	EThreePlayerSplitScreenType_MAX = 2
};

// Object Name: Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2
};

