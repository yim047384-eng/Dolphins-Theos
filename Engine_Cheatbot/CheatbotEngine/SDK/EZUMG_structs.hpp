#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct EZUMG.InputActionEvent
// Size: 0x18 // Inherited bytes: 0x00
struct FInputActionEvent {
	// Fields
	IntProperty PointerIndex; // Offset: 0x00 // Size: 0x04
	float HeldDuration; // Offset: 0x04 // Size: 0x04
	struct FVector2D Position; // Offset: 0x08 // Size: 0x08
	struct FVector2D Delta; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct EZUMG.EnhancedButtonConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FEnhancedButtonConfig {
	// Fields
	float TapThreshold; // Offset: 0x00 // Size: 0x04
	float LongPressThreshold; // Offset: 0x04 // Size: 0x04
	float DragThreshold; // Offset: 0x08 // Size: 0x04
	float SwipeMinDistance; // Offset: 0x0c // Size: 0x04
};

