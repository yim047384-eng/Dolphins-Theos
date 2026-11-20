#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8 {
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11,
	ETouchIndex_MAX = 12
};

// Object Name: Enum InputCore.EControllerHand
enum class EControllerHand : uint8 {
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	Special_2 = 6,
	Special_3 = 7,
	Special_4 = 8,
	Special_5 = 9,
	Special_6 = 10,
	Special_7 = 11,
	Special_8 = 12,
	Special_9 = 13,
	Special_10 = 14,
	Special_11 = 15,
	Special_12 = 16,
	EControllerHand_MAX = 17
};

// Object Name: Enum InputCore.ETouchType
enum class ETouchType : uint8 {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	Ended = 3,
	NumTypes = 4,
	ETouchType_MAX = 5
};

// Object Name: Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8 {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3
};

