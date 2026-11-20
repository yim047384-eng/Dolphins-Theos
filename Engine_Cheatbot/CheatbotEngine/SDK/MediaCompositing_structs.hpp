#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct MediaCompositing.MediaPlaneParameters
// Size: 0x38 // Inherited bytes: 0x00
struct FMediaPlaneParameters {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x00 // Size: 0x08
	struct FName TextureParameterName; // Offset: 0x08 // Size: 0x08
	bool bFillScreen; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector2D FillScreenAmount; // Offset: 0x14 // Size: 0x08
	struct FVector2D FixedSize; // Offset: 0x1c // Size: 0x08
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct UTexture* RenderTexture; // Offset: 0x28 // Size: 0x08
	struct UMaterialInstanceDynamic* DynamicMaterial; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x48 // Inherited bytes: 0x18
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieSceneMediaSectionParams Params; // Offset: 0x18 // Size: 0x30
};

// Object Name: ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x30 // Inherited bytes: 0x00
struct FMovieSceneMediaSectionParams {
	// Fields
	struct UMediaSoundComponent* MediaSoundComponent; // Offset: 0x00 // Size: 0x08
	struct UMediaSource* MediaSource; // Offset: 0x08 // Size: 0x08
	struct UMediaTexture* MediaTexture; // Offset: 0x10 // Size: 0x08
	struct UMediaPlayer* MediaPlayer; // Offset: 0x18 // Size: 0x08
	float SectionStartTime; // Offset: 0x20 // Size: 0x04
	float SectionEndTime; // Offset: 0x24 // Size: 0x04
	bool bLooping; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float StartTimeOffset; // Offset: 0x2c // Size: 0x04
};

