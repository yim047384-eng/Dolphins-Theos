#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MovieScene.MovieSceneSignedObject
// Size: 0x50 // Inherited bytes: 0x28
struct UMovieSceneSignedObject : UObject {
	// Fields
	struct FGuid Signature; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x18]; // Offset: 0x38 // Size: 0x18
};

// Object Name: Class MovieScene.MovieSceneSection
// Size: 0xb0 // Inherited bytes: 0x50
struct UMovieSceneSection : UMovieSceneSignedObject {
	// Fields
	struct FMovieSceneSectionEvalOptions EvalOptions; // Offset: 0x50 // Size: 0x02
	char pad_0x52[0x6]; // Offset: 0x52 // Size: 0x06
	struct FMovieSceneEasingSettings Easing; // Offset: 0x58 // Size: 0x38
	float StartTime; // Offset: 0x90 // Size: 0x04
	float EndTime; // Offset: 0x94 // Size: 0x04
	IntProperty RowIndex; // Offset: 0x98 // Size: 0x04
	IntProperty OverlapPriority; // Offset: 0x9c // Size: 0x04
	char bIsActive : 1; // Offset: 0xa0 // Size: 0x01
	char bIsLocked : 1; // Offset: 0xa0 // Size: 0x01
	char bIsInfinite : 1; // Offset: 0xa0 // Size: 0x01
	char bUseTimeToWeight : 1; // Offset: 0xa0 // Size: 0x01
	char pad_0xA0_4 : 4; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	float PrerollTime; // Offset: 0xa4 // Size: 0x04
	float PostrollTime; // Offset: 0xa8 // Size: 0x04
	struct FOptionalMovieSceneBlendType BlendType; // Offset: 0xac // Size: 0x02
	char pad_0xAE[0x2]; // Offset: 0xae // Size: 0x02
};

// Object Name: Class MovieScene.MovieSceneTrack
// Size: 0x58 // Inherited bytes: 0x50
struct UMovieSceneTrack : UMovieSceneSignedObject {
	// Fields
	struct FMovieSceneTrackEvalOptions EvalOptions; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: Class MovieScene.MovieSceneNameableTrack
// Size: 0x58 // Inherited bytes: 0x58
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Object Name: Class MovieScene.MovieSceneSequence
// Size: 0x2e8 // Inherited bytes: 0x50
struct UMovieSceneSequence : UMovieSceneSignedObject {
	// Fields
	struct FCachedMovieSceneEvaluationTemplate EvaluationTemplate; // Offset: 0x50 // Size: 0x220
	struct FMovieSceneTrackCompilationParams TemplateParameters; // Offset: 0x270 // Size: 0x02
	char pad_0x272[0x6]; // Offset: 0x272 // Size: 0x06
	MapProperty InstancedSubSequenceEvaluationTemplates; // Offset: 0x278 // Size: 0x50
	bool bParentContextsAreSignificant; // Offset: 0x2c8 // Size: 0x01
	char pad_0x2C9[0x1f]; // Offset: 0x2c9 // Size: 0x1f
};

// Object Name: Class MovieScene.MovieSceneSequencePlayer
// Size: 0x7b8 // Inherited bytes: 0x28
struct UMovieSceneSequencePlayer : UObject {
	// Fields
	char pad_0x28[0x348]; // Offset: 0x28 // Size: 0x348
	struct FScriptMulticastDelegate OnPlay; // Offset: 0x370 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayReverse; // Offset: 0x380 // Size: 0x10
	struct FScriptMulticastDelegate OnStop; // Offset: 0x390 // Size: 0x10
	struct FScriptMulticastDelegate OnPreStop; // Offset: 0x3a0 // Size: 0x10
	bool FreezeEndFrame; // Offset: 0x3b0 // Size: 0x01
	char pad_0x3B1[0x7]; // Offset: 0x3b1 // Size: 0x07
	struct FScriptMulticastDelegate OnPause; // Offset: 0x3b8 // Size: 0x10
	struct FScriptMulticastDelegate OnFinished; // Offset: 0x3c8 // Size: 0x10
	struct FScriptMulticastDelegate OnObjectSpawnedEvent; // Offset: 0x3d8 // Size: 0x10
	enum class EMovieScenePlayerStatus status; // Offset: 0x3e8 // Size: 0x01
	char bReversePlayback : 1; // Offset: 0x3e9 // Size: 0x01
	char bPendingFirstUpdate : 1; // Offset: 0x3e9 // Size: 0x01
	char pad_0x3E9_2 : 6; // Offset: 0x3e9 // Size: 0x01
	char pad_0x3EA[0x6]; // Offset: 0x3ea // Size: 0x06
	struct UMovieSceneSequence* Sequence; // Offset: 0x3f0 // Size: 0x08
	float TimeCursorPosition; // Offset: 0x3f8 // Size: 0x04
	float StartTime; // Offset: 0x3fc // Size: 0x04
	float EndTime; // Offset: 0x400 // Size: 0x04
	IntProperty CurrentNumLoops; // Offset: 0x404 // Size: 0x04
	char pad_0x408[0x10]; // Offset: 0x408 // Size: 0x10
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // Offset: 0x418 // Size: 0x28
	char pad_0x440[0x378]; // Offset: 0x440 // Size: 0x378

	// Functions

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x1053bb198 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartPlayingNextTick(); // Offset: 0x1053bb184 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlayRate(float PlayRate); // Offset: 0x1053bb108 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.SetPlayLoopCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlayLoopCount(IntProperty NumLoops); // Offset: 0x1053bb08c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Offset: 0x1053bafd8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackPosition(float NewPlaybackPosition); // Offset: 0x1053baf5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.Scrub
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Scrub(); // Offset: 0x1053baf48 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayReverse(); // Offset: 0x1053baf34 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayLooping(IntProperty NumLoops); // Offset: 0x1053baeb8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(); // Offset: 0x1053baea4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Pause(); // Offset: 0x1053bae90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.JumpToPositionEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JumpToPositionEx(float NewPlaybackPosition); // Offset: 0x1053bae14 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JumpToPosition(float NewPlaybackPosition); // Offset: 0x1053bad98 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlaying(); // Offset: 0x1053bad64 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPaused(); // Offset: 0x1053bad30 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GoToEndAndStop(); // Offset: 0x1053bad1c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlayRate(); // Offset: 0x1053bace8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlaybackStart(); // Offset: 0x1053baccc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlaybackPosition(); // Offset: 0x1053bac98 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPlaybackEnd(); // Offset: 0x1053bac7c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GetLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetLength(); // Offset: 0x1053bac48 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Offset: 0x1053bab70 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangePlaybackDirection(); // Offset: 0x1053bab5c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class MovieScene.MovieScene
// Size: 0xd8 // Inherited bytes: 0x50
struct UMovieScene : UMovieSceneSignedObject {
	// Fields
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FMovieScenePossessable> Possessables; // Offset: 0x60 // Size: 0x10
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // Offset: 0x70 // Size: 0x10
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // Offset: 0x80 // Size: 0x10
	struct UMovieSceneTrack* CameraCutTrack; // Offset: 0x90 // Size: 0x08
	struct FFloatRange SelectionRange; // Offset: 0x98 // Size: 0x10
	struct FFloatRange PlaybackRange; // Offset: 0xa8 // Size: 0x10
	bool bForceFixedFrameIntervalPlayback; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x3]; // Offset: 0xb9 // Size: 0x03
	float FixedFrameInterval; // Offset: 0xbc // Size: 0x04
	float InTime; // Offset: 0xc0 // Size: 0x04
	float OutTime; // Offset: 0xc4 // Size: 0x04
	float StartTime; // Offset: 0xc8 // Size: 0x04
	float EndTime; // Offset: 0xcc // Size: 0x04
	bool bLowDeviceFrameRateLimitEnabled; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	IntProperty LowDeviceFrameLimit; // Offset: 0xd4 // Size: 0x04
};

// Object Name: Class MovieScene.MovieSceneBindingOverrides
// Size: 0x98 // Inherited bytes: 0x28
struct UMovieSceneBindingOverrides : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x58]; // Offset: 0x40 // Size: 0x58
};

// Object Name: Class MovieScene.MovieSceneBindingOverridesInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneBindingOverridesInterface : UInterface {
};

// Object Name: Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Object Name: Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 // Inherited bytes: 0x28
struct UMovieSceneBuiltInEasingFunction : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	enum class EMovieSceneBuiltInEasing Type; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 // Inherited bytes: 0x28
struct UMovieSceneEasingExternalCurve : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct UCurveFloat* Curve; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneEasingFunction : UInterface {
	// Functions

	// Object Name: Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	float OnEvaluate(float Interp); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class MovieScene.MovieSceneFolder
// Size: 0x70 // Inherited bytes: 0x28
struct UMovieSceneFolder : UObject {
	// Fields
	struct FName FolderName; // Offset: 0x28 // Size: 0x08
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // Offset: 0x30 // Size: 0x10
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // Offset: 0x40 // Size: 0x10
	struct TArray<StrProperty> ChildObjectBindingStrings; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x10]; // Offset: 0x60 // Size: 0x10
};

// Object Name: Class MovieScene.MovieSceneSegmentCompilerTestTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneSegmentCompilerTestTrack : UMovieSceneTrack {
	// Fields
	bool bHighPassFilter; // Offset: 0x55 // Size: 0x01
	struct TArray<struct UMovieSceneSection*> SectionArray; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieScene.MovieSceneSegmentCompilerTestSection
// Size: 0xb0 // Inherited bytes: 0xb0
struct UMovieSceneSegmentCompilerTestSection : UMovieSceneSection {
};

