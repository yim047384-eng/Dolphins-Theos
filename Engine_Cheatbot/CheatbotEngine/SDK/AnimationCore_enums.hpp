#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8 {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4
};

// Object Name: Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8 {
	Transform = 0,
	Aim = 1,
	MAX = 2
};

