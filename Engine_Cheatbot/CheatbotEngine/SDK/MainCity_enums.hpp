#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MainCity.ECarryBackAnimState
enum class ECarryBackAnimState : uint8 {
	None = 0,
	CarryBack = 1,
	BeCarryBack = 2,
	ECarryBackAnimState_MAX = 3
};

// Object Name: Enum MainCity.EHoldingHandsIKMode
enum class EHoldingHandsIKMode : uint8 {
	HH_Default = 0,
	HH_SIMPLEIK = 1,
	HH_MAX = 2
};

// Object Name: Enum MainCity.ESeesawState
enum class ESeesawState : uint8 {
	Seesaw_None = 0,
	Seesaw_Idle = 1,
	Seesaw_InMatch = 2,
	Seesaw_EnterField = 3,
	Seesaw_InBattle = 4,
	Seesaw_InBattle_SpeedUp = 5,
	Seesaw_Settle = 6,
	Seesaw_Finished = 7,
	Seesaw_MAX = 8
};

// Object Name: Enum MainCity.ESeesawSeatState
enum class ESeesawSeatState : uint8 {
	Seat_Idle = 0,
	Seat_Waiting = 1,
	Seat_Entering = 2,
	Seat_Entered = 3,
	Seat_Exiting = 4,
	Seat_MAX = 5
};

