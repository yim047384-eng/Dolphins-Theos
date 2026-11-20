#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Object Name: Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Object Name: Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Object Name: Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8 {
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Object Name: Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

