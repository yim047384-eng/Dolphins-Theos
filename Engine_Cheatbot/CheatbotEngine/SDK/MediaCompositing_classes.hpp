#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MediaCompositing.MediaPlane
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AMediaPlane : AActor {
	// Fields
	struct UMediaPlaneComponent* MediaPlane; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class MediaCompositing.MediaPlaneComponent
// Size: 0xa90 // Inherited bytes: 0x9d0
struct UMediaPlaneComponent : UPrimitiveComponent {
	// Fields
	struct FMediaPlaneParameters Plane; // Offset: 0x9c8 // Size: 0x38
	char pad_0xA08[0x88]; // Offset: 0xa08 // Size: 0x88

	// Functions

	// Object Name: Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMediaPlane(struct FMediaPlaneParameters Plane); // Offset: 0x102397aa4 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
	// Flags: [Final|Native|Public]
	void OnRenderTextureChanged(); // Offset: 0x102397a90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MediaCompositing.MediaPlaneComponent.GetPlane
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FMediaPlaneParameters GetPlane(); // Offset: 0x102397a60 // Return & Params: Num(1) Size(0x38)
};

// Object Name: Class MediaCompositing.MediaPlaneFrustumComponent
// Size: 0x9d0 // Inherited bytes: 0x9d0
struct UMediaPlaneFrustumComponent : UPrimitiveComponent {
};

// Object Name: Class MediaCompositing.MovieSceneMediaSection
// Size: 0xe0 // Inherited bytes: 0xb0
struct UMovieSceneMediaSection : UMovieSceneSection {
	// Fields
	struct UMediaSource* MediaSource; // Offset: 0xb0 // Size: 0x08
	bool bLooping; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x3]; // Offset: 0xb9 // Size: 0x03
	float StartTimeOffset; // Offset: 0xbc // Size: 0x04
	struct UMediaTexture* MediaTexture; // Offset: 0xc0 // Size: 0x08
	struct UMediaSoundComponent* MediaSoundComponent; // Offset: 0xc8 // Size: 0x08
	bool bUseExternalMediaPlayer; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
	struct UMediaPlayer* ExternalMediaPlayer; // Offset: 0xd8 // Size: 0x08
};

// Object Name: Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneMediaTrack : UMovieScenePropertyTrack {
};

