#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8 {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Object Name: Enum ClothingSystemRuntime.EClothTetherMode
enum class EClothTetherMode : uint8 {
	Geodesic = 0,
	Simple = 1,
	EClothTetherMode_MAX = 2
};

// Object Name: Enum ClothingSystemRuntime.EClothSolverMode
enum class EClothSolverMode : uint8 {
	GaussSeidel = 0,
	Jacobi = 1,
	EClothSolverMode_MAX = 2
};

// Object Name: Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class MaskTarget_PhysMesh : uint8 {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	SelfCollisionMask = 5,
	PhysicsStiffness = 6,
	ShapeMatchingMask = 7,
	ClothLayerMask = 8,
	AnimDriveStiffnessWeightMap = 9,
	AnimDriveDampingWeightMap = 10,
	MaskTarget_MAX = 11
};

