#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MovieSceneCapture.MovieSceneCapture
// Size: 0x1f0 // Inherited bytes: 0x28
struct UMovieSceneCapture : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
	struct FCaptureProtocolID CaptureType; // Offset: 0x38 // Size: 0x08
	struct UMovieSceneCaptureProtocolSettings* ProtocolSettings; // Offset: 0x40 // Size: 0x08
	struct FMovieSceneCaptureSettings Settings; // Offset: 0x48 // Size: 0x50
	char pad_0x98[0x10]; // Offset: 0x98 // Size: 0x10
	bool bUseSeparateProcess; // Offset: 0xa8 // Size: 0x01
	bool bCloseEditorWhenCaptureStarts; // Offset: 0xa9 // Size: 0x01
	char pad_0xAA[0x6]; // Offset: 0xaa // Size: 0x06
	StrProperty AdditionalCommandLineArguments; // Offset: 0xb0 // Size: 0x10
	StrProperty InheritedCommandLineArguments; // Offset: 0xc0 // Size: 0x10
	char pad_0xD0[0x120]; // Offset: 0xd0 // Size: 0x120
};

// Object Name: Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x1f0 // Inherited bytes: 0x1f0
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Object Name: Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneCaptureProtocolSettings : UObject {
};

// Object Name: Class MovieSceneCapture.FrameGrabberProtocolSettings
// Size: 0x30 // Inherited bytes: 0x28
struct UFrameGrabberProtocolSettings : UMovieSceneCaptureProtocolSettings {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class MovieSceneCapture.AVCaptureSettings
// Size: 0x30 // Inherited bytes: 0x30
struct UAVCaptureSettings : UFrameGrabberProtocolSettings {
};

// Object Name: Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x60 // Inherited bytes: 0x28
struct UCompositionGraphCaptureSettings : UMovieSceneCaptureProtocolSettings {
	// Fields
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // Offset: 0x28 // Size: 0x10
	bool bCaptureFramesInHDR; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	IntProperty HDRCompressionQuality; // Offset: 0x3c // Size: 0x04
	enum class EHDRCaptureGamut CaptureGamut; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
	struct FSoftObjectPath PostProcessingMaterial; // Offset: 0x48 // Size: 0x18
};

// Object Name: Class MovieSceneCapture.BmpImageCaptureSettings
// Size: 0x28 // Inherited bytes: 0x28
struct UBmpImageCaptureSettings : UMovieSceneCaptureProtocolSettings {
};

// Object Name: Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x38 // Inherited bytes: 0x30
struct UImageCaptureSettings : UFrameGrabberProtocolSettings {
	// Fields
	IntProperty CompressionQuality; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneCaptureInterface : UInterface {
};

// Object Name: Class MovieSceneCapture.LevelCapture
// Size: 0x210 // Inherited bytes: 0x1f0
struct ULevelCapture : UMovieSceneCapture {
	// Fields
	bool bAutoStartCapture; // Offset: 0x1f0 // Size: 0x01
	char pad_0x1F1[0xb]; // Offset: 0x1f1 // Size: 0x0b
	struct FGuid PrerequisiteActorId; // Offset: 0x1fc // Size: 0x10
	char pad_0x20C[0x4]; // Offset: 0x20c // Size: 0x04
};

// Object Name: Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneCaptureEnvironment : UObject {
	// Functions

	// Object Name: Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetCaptureFrameNumber(); // Offset: 0x10572bac8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	float GetCaptureElapsedTime(); // Offset: 0x10572ba94 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x48 // Inherited bytes: 0x30
struct UVideoCaptureSettings : UFrameGrabberProtocolSettings {
	// Fields
	bool bUseCompression; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float CompressionQuality; // Offset: 0x34 // Size: 0x04
	StrProperty VideoCodec; // Offset: 0x38 // Size: 0x10
};

