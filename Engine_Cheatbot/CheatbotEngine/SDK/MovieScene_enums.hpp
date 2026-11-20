#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Object Name: Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	EMovieSceneBlendType_MAX = 5
};

// Object Name: Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Object Name: Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Object Name: Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Object Name: Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Object Name: Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	KeepState = 0,
	RestoreState = 1,
	EMovieSceneCompletionMode_MAX = 2
};

// Object Name: Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Object Name: Enum MovieScene.ESpawnUserQualitySettingLevel
enum class ESpawnUserQualitySettingLevel : uint8 {
	UserQualitySettingLevel_Low = 0,
	UserQualitySettingLevel_Middle = 1,
	UserQualitySettingLevel_High = 2,
	UserQualitySettingLevel_MAX = 3
};

// Object Name: Enum MovieScene.ESpawnDeviceLevel
enum class ESpawnDeviceLevel : uint8 {
	DeviceLevel_Low = 0,
	DeviceLevel_Middle = 1,
	DeviceLevel_High = 2,
	DeviceLevel_MAX = 3
};

// Object Name: Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

