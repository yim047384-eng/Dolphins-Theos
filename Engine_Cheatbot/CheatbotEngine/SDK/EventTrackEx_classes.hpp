#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class EventTrackEx.MovieSceneXTEventSection
// Size: 0x1c0 // Inherited bytes: 0xb0
struct UMovieSceneXTEventSection : UMovieSceneSection {
	// Fields
	struct FNameCurve Events; // Offset: 0xb0 // Size: 0x68
	struct FMovieSceneXTEventSectionData EventData; // Offset: 0x118 // Size: 0x20
	char pad_0x138[0x88]; // Offset: 0x138 // Size: 0x88
};

// Object Name: Class EventTrackEx.MovieSceneXTEventTrack
// Size: 0x78 // Inherited bytes: 0x58
struct UMovieSceneXTEventTrack : UMovieSceneNameableTrack {
	// Fields
	char bFireEventsWhenForwards : 1; // Offset: 0x55 // Size: 0x01
	char bFireEventsWhenBackwards : 1; // Offset: 0x55 // Size: 0x01
	enum class EFireEventsAtPosition EventPosition; // Offset: 0x56 // Size: 0x01
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // Offset: 0x58 // Size: 0x10
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x68 // Size: 0x10
};

// Object Name: Class EventTrackEx.MovieSceneXTQTESection
// Size: 0xd8 // Inherited bytes: 0xb0
struct UMovieSceneXTQTESection : UMovieSceneSection {
	// Fields
	StrProperty MsgName; // Offset: 0xb0 // Size: 0x10
	struct TArray<float> Times; // Offset: 0xc0 // Size: 0x10
	enum class EXTQTEOperationArea OperationArea; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
};

// Object Name: Class EventTrackEx.MovieSceneXTQTETrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneXTQTETrack : UMovieSceneTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

