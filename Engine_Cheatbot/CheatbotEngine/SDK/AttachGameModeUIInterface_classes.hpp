#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AttachGameModeUIInterface.AttachGameModeUIInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct UAttachGameModeUIInterface_C : UInterface {
	// Functions

	// Object Name: Function AttachGameModeUIInterface.AttachGameModeUIInterface_C.AttachPveZombieBossHealth
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AttachPveZombieBossHealth(struct UUAEUserWidget* BossHealth, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AttachGameModeUIInterface.AttachGameModeUIInterface_C.AttachColdModeUI
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AttachColdModeUI(struct UWidget* PlayerState, struct UWidget* fireArmo, struct UWidget* coldTime, struct UWidget* skillBtn, struct UWidget* Temp, struct UWidget* SnowBoard, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x31)
};

