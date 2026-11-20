#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct PlanCHRuntime.PlanCH_CommonOccupy
// Size: 0x20 // Inherited bytes: 0x00
struct FPlanCH_CommonOccupy {
	// Fields
	IntProperty LandId; // Offset: 0x00 // Size: 0x04
	bool bOccupied; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty BeginTime; // Offset: 0x08 // Size: 0x04
	IntProperty EndTime; // Offset: 0x0c // Size: 0x04
	StrProperty PlayerUID; // Offset: 0x10 // Size: 0x10
};

