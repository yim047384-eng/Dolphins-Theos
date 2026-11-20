#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4
};

// Object Name: Enum KawaiiPhysics.EComplianceType
enum class EComplianceType : uint8 {
	Leather = 0,
	Rubber = 1,
	Silk = 2,
	Custom = 3,
	EComplianceType_MAX = 4
};

// Object Name: Enum KawaiiPhysics.ELateralConstraintMode
enum class ELateralConstraintMode : uint8 {
	PBD = 0,
	XPBD = 1,
	ELateralConstraintMode_MAX = 2
};

// Object Name: Enum KawaiiPhysics.EKawaiiPhysicsSimulationSpace
enum class EKawaiiPhysicsSimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	EKawaiiPhysicsSimulationSpace_MAX = 2
};

