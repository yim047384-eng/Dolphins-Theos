#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum GeneralNode.EGNActionState
enum class EGNActionState : uint8 {
	Uninitialized = 0,
	DelayRun = 1,
	Running = 2,
	Finished = 3,
	EGNActionState_MAX = 4
};

// Object Name: Enum GeneralNode.EGNRunRole
enum class EGNRunRole : uint8 {
	All = 7,
	Authority = 4,
	Autonomous = 2,
	Simulated = 1,
	AutonomousSimulated = 3,
	AutonomousAuthority = 6,
	AuthoritySimulated = 5,
	EGNRunRole_MAX = 8
};

