#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum RuntimeMeshComponent.EUpdateFrequency
enum class EUpdateFrequency : uint8 {
	Average = 0,
	Frequent = 1,
	Infrequent = 2,
	VertexBufferFrequent = 3,
	IndexBufferFrequent = 4,
	EUpdateFrequency_MAX = 5
};

// Object Name: Enum RuntimeMeshComponent.ERuntimeMeshCollisionCookingMode
enum class ERuntimeMeshCollisionCookingMode : uint8 {
	CollisionPerformance = 0,
	CookingPerformance = 1,
	ERuntimeMeshCollisionCookingMode_MAX = 2
};

