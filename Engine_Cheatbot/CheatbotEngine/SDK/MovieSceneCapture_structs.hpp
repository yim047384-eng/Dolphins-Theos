#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size: 0x10 // Inherited bytes: 0x00
struct FCompositionGraphCapturePasses {
	// Fields
	struct TArray<StrProperty> Value; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneCapture.CaptureProtocolID
// Size: 0x08 // Inherited bytes: 0x00
struct FCaptureProtocolID {
	// Fields
	struct FName Identifier; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x50 // Inherited bytes: 0x00
struct FMovieSceneCaptureSettings {
	// Fields
	struct FDirectoryPath OutputDirectory; // Offset: 0x00 // Size: 0x10
	struct AGameModeBase* GameModeOverride; // Offset: 0x10 // Size: 0x08
	StrProperty OutputFormat; // Offset: 0x18 // Size: 0x10
	bool bOverwriteExisting; // Offset: 0x28 // Size: 0x01
	bool bUseRelativeFrameNumbers; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x2]; // Offset: 0x2a // Size: 0x02
	IntProperty HandleFrames; // Offset: 0x2c // Size: 0x04
	char ZeroPadFrameNumbers; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	IntProperty FrameRate; // Offset: 0x34 // Size: 0x04
	IntProperty BitRate; // Offset: 0x38 // Size: 0x04
	struct FCaptureResolution Resolution; // Offset: 0x3c // Size: 0x08
	bool bEnableTextureStreaming; // Offset: 0x44 // Size: 0x01
	bool bCinematicEngineScalability; // Offset: 0x45 // Size: 0x01
	bool bCinematicMode; // Offset: 0x46 // Size: 0x01
	bool bAllowMovement; // Offset: 0x47 // Size: 0x01
	bool bAllowTurning; // Offset: 0x48 // Size: 0x01
	bool bShowPlayer; // Offset: 0x49 // Size: 0x01
	bool bShowHUD; // Offset: 0x4a // Size: 0x01
	char pad_0x4B[0x5]; // Offset: 0x4b // Size: 0x05
};

// Object Name: ScriptStruct MovieSceneCapture.CaptureResolution
// Size: 0x08 // Inherited bytes: 0x00
struct FCaptureResolution {
	// Fields
	uint32_t ResX; // Offset: 0x00 // Size: 0x04
	uint32_t ResY; // Offset: 0x04 // Size: 0x04
};

