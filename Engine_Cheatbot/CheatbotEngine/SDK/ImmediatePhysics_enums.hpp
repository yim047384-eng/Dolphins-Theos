#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ImmediatePhysics.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	RootBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

