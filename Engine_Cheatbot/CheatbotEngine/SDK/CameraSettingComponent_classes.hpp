#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CameraSettingComponent.CameraSettingComponent_C
// Size: 0x18c // Inherited bytes: 0x178
struct UCameraSettingComponent_C : UActorComponent {
	// Fields
	float Current Target Arm Length; // Offset: 0x178 // Size: 0x04
	float CurrentCameraLagSpeed; // Offset: 0x17c // Size: 0x04
	struct FVector CurrentSocketOffset; // Offset: 0x180 // Size: 0x0c

	// Functions

	// Object Name: Function CameraSettingComponent.CameraSettingComponent_C.SaveCurCameraSetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SaveCurCameraSetting(struct USpringArmComponent* SprintArm); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CameraSettingComponent.CameraSettingComponent_C.LerpCameraSettings
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LerpCameraSettings(float LerpAlpha, struct FSTR_CameraSetting CameraSettings, struct USpringArmComponent* SpringArm); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)
};

