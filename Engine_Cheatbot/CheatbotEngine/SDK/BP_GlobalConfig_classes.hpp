#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_GlobalConfig.BP_GlobalConfig_C
// Size: 0x4d0 // Inherited bytes: 0x4c0
struct ABP_GlobalConfig_C : AGlobalConfigActor {
	// Fields
	struct UBP_WaveConfig_C* BP_WaveConfig; // Offset: 0x4c0 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x4c8 // Size: 0x08

	// Functions

	// Object Name: Function BP_GlobalConfig.BP_GlobalConfig_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

