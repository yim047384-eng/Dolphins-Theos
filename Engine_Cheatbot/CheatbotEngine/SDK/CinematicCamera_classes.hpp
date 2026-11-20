#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CinematicCamera.CameraRig_Crane
// Size: 0x4e0 // Inherited bytes: 0x4b0
struct ACameraRig_Crane : AActor {
	// Fields
	float CranePitch; // Offset: 0x4ac // Size: 0x04
	float CraneYaw; // Offset: 0x4b0 // Size: 0x04
	float CraneArmLength; // Offset: 0x4b4 // Size: 0x04
	bool bLockMountPitch; // Offset: 0x4b8 // Size: 0x01
	bool bLockMountYaw; // Offset: 0x4b9 // Size: 0x01
	char pad_0x4BE[0x2]; // Offset: 0x4be // Size: 0x02
	struct USceneComponent* TransformComponent; // Offset: 0x4c0 // Size: 0x08
	struct USceneComponent* CraneYawControl; // Offset: 0x4c8 // Size: 0x08
	struct USceneComponent* CranePitchControl; // Offset: 0x4d0 // Size: 0x08
	struct USceneComponent* CraneCameraMount; // Offset: 0x4d8 // Size: 0x08
};

// Object Name: Class CinematicCamera.CameraRig_Rail
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct ACameraRig_Rail : AActor {
	// Fields
	float CurrentPositionOnRail; // Offset: 0x4ac // Size: 0x04
	struct USceneComponent* TransformComponent; // Offset: 0x4b0 // Size: 0x08
	struct USplineComponent* RailSplineComponent; // Offset: 0x4b8 // Size: 0x08
	struct USceneComponent* RailCameraMount; // Offset: 0x4c0 // Size: 0x08
};

// Object Name: Class CinematicCamera.CineCameraActor
// Size: 0xa80 // Inherited bytes: 0xa40
struct ACineCameraActor : ACameraActor {
	// Fields
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // Offset: 0xa40 // Size: 0x30
	char pad_0xA70[0x10]; // Offset: 0xa70 // Size: 0x10

	// Functions

	// Object Name: Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UCineCameraComponent* GetCineCameraComponent(); // Offset: 0x1055362ec // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class CinematicCamera.CineCameraComponent
// Size: 0xa50 // Inherited bytes: 0x9a0
struct UCineCameraComponent : UCameraComponent {
	// Fields
	struct FCameraFilmbackSettings FilmbackSettings; // Offset: 0x994 // Size: 0x0c
	struct FCameraLensSettings LensSettings; // Offset: 0x9a0 // Size: 0x14
	struct FCameraFocusSettings FocusSettings; // Offset: 0x9b8 // Size: 0x38
	float CurrentFocalLength; // Offset: 0x9f0 // Size: 0x04
	float CurrentAperture; // Offset: 0x9f4 // Size: 0x04
	float CurrentFocusDistance; // Offset: 0x9f8 // Size: 0x04
	char pad_0xA04[0x4]; // Offset: 0xa04 // Size: 0x04
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // Offset: 0xa08 // Size: 0x10
	struct TArray<struct FNamedLensPreset> LensPresets; // Offset: 0xa18 // Size: 0x10
	StrProperty DefaultFilmbackPresetName; // Offset: 0xa28 // Size: 0x10
	StrProperty DefaultLensPresetName; // Offset: 0xa38 // Size: 0x10
	float DefaultLensFocalLength; // Offset: 0xa48 // Size: 0x04
	float DefaultLensFStop; // Offset: 0xa4c // Size: 0x04

	// Functions

	// Object Name: Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLensPresetByName(StrProperty InPresetName); // Offset: 0x105536b84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFilmbackPresetByName(StrProperty InPresetName); // Offset: 0x105536aec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetVerticalFieldOfView(); // Offset: 0x105536ab8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CinematicCamera.CineCameraComponent.GetLensPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetLensPresetName(); // Offset: 0x105536a54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetHorizontalFieldOfView(); // Offset: 0x105536a20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetFilmbackPresetName(); // Offset: 0x1055369bc // Return & Params: Num(1) Size(0x10)
};

