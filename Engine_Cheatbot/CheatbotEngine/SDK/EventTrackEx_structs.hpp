#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct EventTrackEx.MovieSceneXTEventSectionData
// Size: 0x20 // Inherited bytes: 0x00
struct FMovieSceneXTEventSectionData {
	// Fields
	struct TArray<float> KeyTimes; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FXTEventPayload> KeyValues; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct EventTrackEx.XTEventPayload
// Size: 0x78 // Inherited bytes: 0x00
struct FXTEventPayload {
	// Fields
	struct FName EventName; // Offset: 0x00 // Size: 0x08
	StrProperty MsgName; // Offset: 0x08 // Size: 0x10
	StrProperty Param1; // Offset: 0x18 // Size: 0x10
	StrProperty Param2; // Offset: 0x28 // Size: 0x10
	StrProperty Param3; // Offset: 0x38 // Size: 0x10
	StrProperty Param4; // Offset: 0x48 // Size: 0x10
	StrProperty Param5; // Offset: 0x58 // Size: 0x10
	StrProperty Param6; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct EventTrackEx.MovieSceneXTEventSectionTemplate
// Size: 0x50 // Inherited bytes: 0x18
struct FMovieSceneXTEventSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieSceneXTEventSectionData EventData; // Offset: 0x18 // Size: 0x20
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // Offset: 0x38 // Size: 0x10
	char bFireEventsWhenForwards : 1; // Offset: 0x48 // Size: 0x01
	char bFireEventsWhenBackwards : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_2 : 6; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct EventTrackEx.MovieSceneXTQTETemplate
// Size: 0x20 // Inherited bytes: 0x18
struct FMovieSceneXTQTETemplate : FMovieSceneEvalTemplate {
	// Fields
	struct UMovieSceneXTQTESection* Section; // Offset: 0x18 // Size: 0x08
};

