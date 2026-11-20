#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8 {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

