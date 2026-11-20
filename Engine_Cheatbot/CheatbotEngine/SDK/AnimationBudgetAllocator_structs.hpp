#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimationBudgetAllocatorParameters {
	// Fields
	float BudgetInMs; // Offset: 0x00 // Size: 0x04
	float MinQuality; // Offset: 0x04 // Size: 0x04
	IntProperty MaxTickRate; // Offset: 0x08 // Size: 0x04
	float WorkUnitSmoothingSpeed; // Offset: 0x0c // Size: 0x04
	float AlwaysTickFalloffAggression; // Offset: 0x10 // Size: 0x04
	float InterpolationFalloffAggression; // Offset: 0x14 // Size: 0x04
	IntProperty InterpolationMaxRate; // Offset: 0x18 // Size: 0x04
	IntProperty MaxInterpolatedComponents; // Offset: 0x1c // Size: 0x04
	float InterpolationTickMultiplier; // Offset: 0x20 // Size: 0x04
	float InitialEstimatedWorkUnitTimeMs; // Offset: 0x24 // Size: 0x04
	IntProperty MaxTickedOffsreenComponents; // Offset: 0x28 // Size: 0x04
	IntProperty StateChangeThrottleInFrames; // Offset: 0x2c // Size: 0x04
	float BudgetFactorBeforeReducedWork; // Offset: 0x30 // Size: 0x04
	float BudgetFactorBeforeReducedWorkEpsilon; // Offset: 0x34 // Size: 0x04
	float BudgetPressureSmoothingSpeed; // Offset: 0x38 // Size: 0x04
	IntProperty ReducedWorkThrottleMinInFrames; // Offset: 0x3c // Size: 0x04
	IntProperty ReducedWorkThrottleMaxInFrames; // Offset: 0x40 // Size: 0x04
	float BudgetFactorBeforeAggressiveReducedWork; // Offset: 0x44 // Size: 0x04
	IntProperty ReducedWorkThrottleMaxPerFrame; // Offset: 0x48 // Size: 0x04
	float BudgetPressureBeforeEmergencyReducedWork; // Offset: 0x4c // Size: 0x04
};

