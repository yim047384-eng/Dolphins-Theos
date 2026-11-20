#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8 {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Object Name: Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8 {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

