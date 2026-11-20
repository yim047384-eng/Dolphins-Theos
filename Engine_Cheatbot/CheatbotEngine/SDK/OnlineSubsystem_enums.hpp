#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8 {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Object Name: Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8 {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

