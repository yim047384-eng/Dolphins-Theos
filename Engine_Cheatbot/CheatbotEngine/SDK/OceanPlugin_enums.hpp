#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8 {
	LookAtLocation = 0,
	FollowCamera = 1,
	FollowPawn = 2,
	Stationary = 3,
	EFollowMethod_MAX = 4
};

