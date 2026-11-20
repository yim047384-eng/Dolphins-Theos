#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Object Name: Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Object Name: Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Object Name: Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

