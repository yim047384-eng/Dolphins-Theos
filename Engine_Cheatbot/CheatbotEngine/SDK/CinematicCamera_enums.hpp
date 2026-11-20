#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	None = 0,
	Manual = 1,
	Tracking = 2,
	ECameraFocusMethod_MAX = 3
};

