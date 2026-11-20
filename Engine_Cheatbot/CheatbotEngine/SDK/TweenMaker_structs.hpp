#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct TweenMaker.ParallelTween
// Size: 0x20 // Inherited bytes: 0x00
struct FParallelTween {
	// Fields
	struct TArray<struct UBaseTween*> ParallelTweens; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct TweenMaker.DistSquaredToTickInterval
// Size: 0x08 // Inherited bytes: 0x00
struct FDistSquaredToTickInterval {
	// Fields
	float DistSquared; // Offset: 0x00 // Size: 0x04
	float TickInterval; // Offset: 0x04 // Size: 0x04
};

