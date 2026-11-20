#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ActorSequence.ActorSequence
// Size: 0x310 // Inherited bytes: 0x2e8
struct UActorSequence : UMovieSceneSequence {
	// Fields
	struct UMovieScene* MovieScene; // Offset: 0x2e8 // Size: 0x08
	struct FActorSequenceObjectReferenceMap ObjectReferences; // Offset: 0x2f0 // Size: 0x20
};

// Object Name: Class ActorSequence.ActorSequenceComponent
// Size: 0x1b8 // Inherited bytes: 0x178
struct UActorSequenceComponent : UActorComponent {
	// Fields
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // Offset: 0x178 // Size: 0x28
	struct UActorSequence* Sequence; // Offset: 0x1a0 // Size: 0x08
	struct UActorSequencePlayer* SequencePlayer; // Offset: 0x1a8 // Size: 0x08
	bool bAutoPlay; // Offset: 0x1b0 // Size: 0x01
	bool bRunOnServer; // Offset: 0x1b1 // Size: 0x01
	bool bEnableOptimize; // Offset: 0x1b2 // Size: 0x01
	char pad_0x1B3[0x5]; // Offset: 0x1b3 // Size: 0x05

	// Functions

	// Object Name: Function ActorSequence.ActorSequenceComponent.StopPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopPlay(); // Offset: 0x10239d7ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ActorSequence.ActorSequenceComponent.StartPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartPlay(float StartTime); // Offset: 0x10239d770 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ActorSequence.ActorSequenceComponent.OnStopOrFinsh
	// Flags: [Final|Native|Private]
	void OnStopOrFinsh(); // Offset: 0x10239d75c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ActorSequence.ActorSequenceComponent.GetLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetLength(); // Offset: 0x10239d728 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class ActorSequence.ActorSequencePlayer
// Size: 0x7b8 // Inherited bytes: 0x7b8
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

