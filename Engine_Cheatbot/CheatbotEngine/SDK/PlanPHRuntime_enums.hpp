#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum PlanPHRuntime.EDirectionType
enum class EDirectionType : uint8 {
	Up = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	EDirectionType_MAX = 4
};

// Object Name: Enum PlanPHRuntime.EHomeAssetType
enum class EHomeAssetType : uint8 {
	CompleteEdgeStyle = 0,
	HalfEdgeStyle = 1,
	ArcStyle = 2,
	DoorStyle = 3,
	FilletWall = 4,
	TwoEdgeWall = 5,
	ThreeEdgeWall = 6,
	BigArcStyle = 7,
	BigArcDoorStyle = 8,
	TwoEdgeDoorStyle = 9,
	PlaneWallStyle = 10,
	PlaneDoorStyle = 11,
	TwoArcWindowStyle = 12,
	EHomeAssetType_MAX = 13
};

