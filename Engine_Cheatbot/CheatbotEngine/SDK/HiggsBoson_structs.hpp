#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct HiggsBoson.PendingJudgeStruct
// Size: 0x50 // Inherited bytes: 0x00
struct FPendingJudgeStruct {
	// Fields
	SetProperty IntervalSet; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct HiggsBoson.PatchPoint
// Size: 0x0c // Inherited bytes: 0x00
struct FPatchPoint {
	// Fields
	IntProperty Offset; // Offset: 0x00 // Size: 0x04
	uint32_t Old; // Offset: 0x04 // Size: 0x04
	uint32_t New; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct HiggsBoson.MoveInput
// Size: 0x20 // Inherited bytes: 0x00
struct FMoveInput {
	// Fields
	float TimeSeconds; // Offset: 0x00 // Size: 0x04
	float ForwardInputRate; // Offset: 0x04 // Size: 0x04
	float RightInputRate; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	uint64 CurrentStates; // Offset: 0x10 // Size: 0x08
	IntProperty ZeroMoveInputCount; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

