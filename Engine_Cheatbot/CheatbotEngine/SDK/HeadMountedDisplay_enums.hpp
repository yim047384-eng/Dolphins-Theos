#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Object Name: Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Object Name: Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor = 0,
	Eye = 1,
	EHMDTrackingOrigin_MAX = 2
};

// Object Name: Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Object Name: Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

