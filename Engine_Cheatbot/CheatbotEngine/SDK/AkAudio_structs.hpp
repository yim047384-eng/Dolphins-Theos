#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// Size: 0x01 // Inherited bytes: 0x00
struct FAkAmbSoundCheckpointRecord {
	// Fields
	bool bCurrentlyPlaying; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct AkAudio.AKAreaVolumeArray
// Size: 0x10 // Inherited bytes: 0x00
struct FAKAreaVolumeArray {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AkAudio.AkCombinedInfo
// Size: 0xc0 // Inherited bytes: 0x00
struct FAkCombinedInfo {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	bool bActive; // Offset: 0x0c // Size: 0x01
	bool bIsUpdateEmmiterTransform; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	struct TArray<StrProperty> EventList; // Offset: 0x10 // Size: 0x10
	MapProperty RTPCList; // Offset: 0x20 // Size: 0x50
	MapProperty SwitchList; // Offset: 0x70 // Size: 0x50
};

// Object Name: ScriptStruct AkAudio.AKErrorInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FAKErrorInfo {
	// Fields
	char AKRESULT_ID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	SetProperty DetailInfo; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct AkAudio.AKFunctionInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FAKFunctionInfo {
	// Fields
	StrProperty FunctionName; // Offset: 0x00 // Size: 0x10
	StrProperty StrParam; // Offset: 0x10 // Size: 0x10
	IntProperty NumParam; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AkAudio.AkRangedEmitterInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FAkRangedEmitterInfo {
	// Fields
	float RangeSquare; // Offset: 0x00 // Size: 0x04
	uint32_t PlayingID; // Offset: 0x04 // Size: 0x04
	StrProperty EventName; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct AkAudio.AkPoly
// Size: 0x10 // Inherited bytes: 0x00
struct FAkPoly {
	// Fields
	struct UAkAcousticTexture* Texture; // Offset: 0x00 // Size: 0x08
	bool EnableSurface; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct AkAudio.AudioOfflineVisualBeatData
// Size: 0x18 // Inherited bytes: 0x00
struct FAudioOfflineVisualBeatData {
	// Fields
	float BeatTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<float> Intensity; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct AkAudio.AkAudioEventTrackKey
// Size: 0x20 // Inherited bytes: 0x00
struct FAkAudioEventTrackKey {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAkAudioEvent* AkAudioEvent; // Offset: 0x08 // Size: 0x08
	StrProperty EventName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x20 // Inherited bytes: 0x18
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct UMovieSceneAkAudioEventSection* Section; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x20 // Inherited bytes: 0x18
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct UMovieSceneAkAudioRTPCSection* Section; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// Size: 0x80 // Inherited bytes: 0x00
struct FMovieSceneAkAudioRTPCSectionData {
	// Fields
	StrProperty RTPCName; // Offset: 0x00 // Size: 0x10
	struct FRichCurve RTPCCurve; // Offset: 0x10 // Size: 0x70
};

