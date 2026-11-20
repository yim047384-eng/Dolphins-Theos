#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass InteractiveComponent.InteractiveComponent_C
// Size: 0x610 // Inherited bytes: 0x5a0
struct UInteractiveComponent_C : UInteractiveComponentBase {
	// Fields
	struct FSoftObjectPath BtnImage; // Offset: 0x5a0 // Size: 0x18
	IntProperty TextId; // Offset: 0x5b8 // Size: 0x04
	char pad_0x5BC[0x4]; // Offset: 0x5bc // Size: 0x04
	struct FSoftObjectPath DisabledMaterial; // Offset: 0x5c0 // Size: 0x18
	struct FSoftObjectPath DefaultMaterial; // Offset: 0x5d8 // Size: 0x18
	struct FSoftObjectPath AudioEvent; // Offset: 0x5f0 // Size: 0x18
	bool AutoStandWhenInteract; // Offset: 0x608 // Size: 0x01
	bool bShowGuide; // Offset: 0x609 // Size: 0x01
	char pad_0x60A[0x2]; // Offset: 0x60a // Size: 0x02
	IntProperty ButtonPriority; // Offset: 0x60c // Size: 0x04
};

