#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x30 // Inherited bytes: 0x00
struct FCameraLookatTrackingSettings {
	// Fields
	char bEnableLookAtTracking : 1; // Offset: 0x00 // Size: 0x01
	char bDrawDebugLookAtTrackingPosition : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_2 : 6; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float LookAtTrackingInterpSpeed; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
	struct AActor* ActorToTrack; // Offset: 0x18 // Size: 0x08
	struct FVector RelativeOffset; // Offset: 0x20 // Size: 0x0c
	char bAllowRoll : 1; // Offset: 0x2c // Size: 0x01
	char pad_0x2C_1 : 7; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x38 // Inherited bytes: 0x00
struct FCameraFocusSettings {
	// Fields
	enum class ECameraFocusMethod FocusMethod; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ManualFocusDistance; // Offset: 0x04 // Size: 0x04
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // Offset: 0x08 // Size: 0x18
	char bDrawDebugFocusPlane : 1; // Offset: 0x20 // Size: 0x01
	char pad_0x20_1 : 7; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	struct FColor DebugFocusPlaneColor; // Offset: 0x24 // Size: 0x04
	char bSmoothFocusChanges : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_1 : 7; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float FocusSmoothingInterpSpeed; // Offset: 0x2c // Size: 0x04
	float FocusOffset; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x18 // Inherited bytes: 0x00
struct FCameraTrackingFocusSettings {
	// Fields
	struct AActor* ActorToTrack; // Offset: 0x00 // Size: 0x08
	struct FVector RelativeOffset; // Offset: 0x08 // Size: 0x0c
	char bDrawDebugTrackingFocusPoint : 1; // Offset: 0x14 // Size: 0x01
	char pad_0x14_1 : 7; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 // Inherited bytes: 0x00
struct FNamedLensPreset {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct FCameraLensSettings LensSettings; // Offset: 0x10 // Size: 0x14
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x14 // Inherited bytes: 0x00
struct FCameraLensSettings {
	// Fields
	float MinFocalLength; // Offset: 0x00 // Size: 0x04
	float MaxFocalLength; // Offset: 0x04 // Size: 0x04
	float MinFStop; // Offset: 0x08 // Size: 0x04
	float MaxFStop; // Offset: 0x0c // Size: 0x04
	float MinimumFocusDistance; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20 // Inherited bytes: 0x00
struct FNamedFilmbackPreset {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct FCameraFilmbackSettings FilmbackSettings; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0x0c // Inherited bytes: 0x00
struct FCameraFilmbackSettings {
	// Fields
	float SensorWidth; // Offset: 0x00 // Size: 0x04
	float SensorHeight; // Offset: 0x04 // Size: 0x04
	float SensorAspectRatio; // Offset: 0x08 // Size: 0x04
};

