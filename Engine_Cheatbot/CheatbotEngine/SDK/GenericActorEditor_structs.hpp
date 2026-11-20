#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct GenericActorEditor.ActorEditorCharacterMovementSyncData
// Size: 0x50 // Inherited bytes: 0x00
struct FActorEditorCharacterMovementSyncData {
	// Fields
	float MaxAcceleration; // Offset: 0x00 // Size: 0x04
	float BrakingFriction; // Offset: 0x04 // Size: 0x04
	float MaxWalkSpeed; // Offset: 0x08 // Size: 0x04
	float MaxWalkSpeedCrouched; // Offset: 0x0c // Size: 0x04
	float MaxSwimSpeed; // Offset: 0x10 // Size: 0x04
	float MaxFlySpeed; // Offset: 0x14 // Size: 0x04
	float MaxCustomMovementSpeed; // Offset: 0x18 // Size: 0x04
	float JumpZVelocity; // Offset: 0x1c // Size: 0x04
	float GravityScale; // Offset: 0x20 // Size: 0x04
	float AirControl; // Offset: 0x24 // Size: 0x04
	float FallingLateralFriction; // Offset: 0x28 // Size: 0x04
	float BrakingDecelerationWalking; // Offset: 0x2c // Size: 0x04
	float BrakingDecelerationFalling; // Offset: 0x30 // Size: 0x04
	float BrakingDecelerationFlying; // Offset: 0x34 // Size: 0x04
	float BrakingDecelerationSwimming; // Offset: 0x38 // Size: 0x04
	float GroundFriction; // Offset: 0x3c // Size: 0x04
	bool bOrientRotationToMovement; // Offset: 0x40 // Size: 0x01
	bool bUseControllerDesiredRotation; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x2]; // Offset: 0x42 // Size: 0x02
	struct FRotator RotationRate; // Offset: 0x44 // Size: 0x0c
};

