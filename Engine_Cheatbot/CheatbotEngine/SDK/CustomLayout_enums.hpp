#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum CustomLayout.EAnchorsType
enum class EAnchorsType : uint8 {
	TopLeft = 0,
	TopCenter = 1,
	TopRight = 2,
	MidLeft = 3,
	MidCenter = 4,
	MidRight = 5,
	BottomLeft = 6,
	BottomCenter = 7,
	BottomRight = 8,
	Other = 9,
	EAnchorsType_MAX = 10
};

// Object Name: Enum CustomLayout.ESCPDisplayState
enum class ESCPDisplayState : uint8 {
	Foreground = 1,
	Background = 2,
	Hidden = 3,
	ESCPDisplayState_MAX = 4
};

