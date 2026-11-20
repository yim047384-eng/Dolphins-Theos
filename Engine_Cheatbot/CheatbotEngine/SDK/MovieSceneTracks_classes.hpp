#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x80 // Inherited bytes: 0x58
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	// Fields
	struct FName PropertyName; // Offset: 0x58 // Size: 0x08
	StrProperty PropertyPath; // Offset: 0x60 // Size: 0x10
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x70 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 // Inherited bytes: 0x28
struct UMovieSceneTransformOrigin : UInterface {
	// Functions

	// Object Name: Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// Flags: [Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FTransform BP_GetTransformOrigin(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x30)
};

// Object Name: Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0xc0 // Inherited bytes: 0xb0
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	// Fields
	struct FGuid ConstraintId; // Offset: 0xb0 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0xd8 // Inherited bytes: 0xc0
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	// Fields
	struct FName AttachSocketName; // Offset: 0xc0 // Size: 0x08
	struct FName AttachComponentName; // Offset: 0xc8 // Size: 0x08
	enum class EAttachmentRule AttachmentLocationRule; // Offset: 0xd0 // Size: 0x01
	enum class EAttachmentRule AttachmentRotationRule; // Offset: 0xd1 // Size: 0x01
	enum class EAttachmentRule AttachmentScaleRule; // Offset: 0xd2 // Size: 0x01
	enum class EDetachmentRule DetachmentLocationRule; // Offset: 0xd3 // Size: 0x01
	enum class EDetachmentRule DetachmentRotationRule; // Offset: 0xd4 // Size: 0x01
	enum class EDetachmentRule DetachmentScaleRule; // Offset: 0xd5 // Size: 0x01
	char pad_0xD6[0x2]; // Offset: 0xd6 // Size: 0x02
};

// Object Name: Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x68 // Inherited bytes: 0x68
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Object Name: Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x138 // Inherited bytes: 0xc0
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	// Fields
	struct FRichCurve TimingCurve; // Offset: 0xc0 // Size: 0x70
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // Offset: 0x130 // Size: 0x01
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // Offset: 0x131 // Size: 0x01
	char bFollow : 1; // Offset: 0x132 // Size: 0x01
	char bReverse : 1; // Offset: 0x132 // Size: 0x01
	char bForceUpright : 1; // Offset: 0x132 // Size: 0x01
	char pad_0x132_3 : 5; // Offset: 0x132 // Size: 0x01
	bool bUseConstantVelocity; // Offset: 0x133 // Size: 0x01
	char pad_0x134[0x4]; // Offset: 0x134 // Size: 0x04
};

// Object Name: Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x68 // Inherited bytes: 0x68
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Object Name: Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x528 // Inherited bytes: 0xb0
struct UMovieScene3DTransformSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FMovieSceneTransformMask TransformMask; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct FRichCurve Translation[0x3]; // Offset: 0xc0 // Size: 0x150
	struct FRichCurve Rotation[0x3]; // Offset: 0x210 // Size: 0x150
	struct FRichCurve Scale[0x3]; // Offset: 0x360 // Size: 0x150
	struct FRichCurve ManualWeight; // Offset: 0x4b0 // Size: 0x70
	bool bIgnoreGlobalTransform; // Offset: 0x520 // Size: 0x01
	char pad_0x521[0x7]; // Offset: 0x521 // Size: 0x07
};

// Object Name: Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x148 // Inherited bytes: 0xb0
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FIntegralCurve ActorGuidIndexCurve; // Offset: 0xb8 // Size: 0x70
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
	struct TArray<StrProperty> ActorGuidStrings; // Offset: 0x138 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x1e8 // Inherited bytes: 0xb0
struct UMovieSceneAudioSection : UMovieSceneSection {
	// Fields
	struct USoundBase* Sound; // Offset: 0xb0 // Size: 0x08
	float StartOffset; // Offset: 0xb8 // Size: 0x04
	float AudioStartTime; // Offset: 0xbc // Size: 0x04
	float AudioDilationFactor; // Offset: 0xc0 // Size: 0x04
	float AudioVolume; // Offset: 0xc4 // Size: 0x04
	struct FRichCurve SoundVolume; // Offset: 0xc8 // Size: 0x70
	struct FRichCurve PitchMultiplier; // Offset: 0x138 // Size: 0x70
	bool bSuppressSubtitles; // Offset: 0x1a8 // Size: 0x01
	bool bOverrideAttenuation; // Offset: 0x1a9 // Size: 0x01
	char pad_0x1AA[0x6]; // Offset: 0x1aa // Size: 0x06
	struct USoundAttenuation* AttenuationSettings; // Offset: 0x1b0 // Size: 0x08
	DelegateProperty OnQueueSubtitles; // Offset: 0x1b8 // Size: 0x10
	struct FScriptMulticastDelegate OnAudioFinished; // Offset: 0x1c8 // Size: 0x10
	struct FScriptMulticastDelegate OnAudioPlaybackPercent; // Offset: 0x1d8 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> AudioSections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x130 // Inherited bytes: 0xb0
struct UMovieSceneBoolSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	bool DefaultValue; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x7]; // Offset: 0xb9 // Size: 0x07
	struct FIntegralCurve BoolCurve; // Offset: 0xc0 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x128 // Inherited bytes: 0xb0
struct UMovieSceneByteSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FIntegralCurve ByteCurve; // Offset: 0xb8 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0x88 // Inherited bytes: 0x80
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	// Fields
	struct UEnum* Enum; // Offset: 0x80 // Size: 0x08
};

// Object Name: Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0xf0 // Inherited bytes: 0xb0
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	// Fields
	struct FMovieSceneCameraAnimSectionData AnimData; // Offset: 0xb0 // Size: 0x20
	struct UCameraAnim* CameraAnim; // Offset: 0xd0 // Size: 0x08
	float PlayRate; // Offset: 0xd8 // Size: 0x04
	float PlayScale; // Offset: 0xdc // Size: 0x04
	float BlendInTime; // Offset: 0xe0 // Size: 0x04
	float BlendOutTime; // Offset: 0xe4 // Size: 0x04
	bool bLooping; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
};

// Object Name: Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xc0 // Inherited bytes: 0xb0
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	// Fields
	struct FGuid CameraGuid; // Offset: 0xb0 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0xf0 // Inherited bytes: 0xb0
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	// Fields
	struct FMovieSceneCameraShakeSectionData ShakeData; // Offset: 0xb0 // Size: 0x20
	struct UCameraShake* ShakeClass; // Offset: 0xd0 // Size: 0x08
	float PlayScale; // Offset: 0xd8 // Size: 0x04
	enum class ECameraAnimPlaySpace PlaySpace; // Offset: 0xdc // Size: 0x01
	char pad_0xDD[0x3]; // Offset: 0xdd // Size: 0x03
	struct FRotator UserDefinedPlaySpace; // Offset: 0xe0 // Size: 0x0c
	char pad_0xEC[0x4]; // Offset: 0xec // Size: 0x04
};

// Object Name: Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneSubSection
// Size: 0x118 // Inherited bytes: 0xb0
struct UMovieSceneSubSection : UMovieSceneSection {
	// Fields
	struct FMovieSceneSectionParameters Parameters; // Offset: 0xb0 // Size: 0x14
	float StartOffset; // Offset: 0xc4 // Size: 0x04
	float TimeScale; // Offset: 0xc8 // Size: 0x04
	float PrerollTime; // Offset: 0xcc // Size: 0x04
	struct UMovieSceneSequence* SubSequence; // Offset: 0xd0 // Size: 0x08
	struct TLazyObjectPtr<struct AActor> ActorToRecord; // Offset: 0xd8 // Size: 0x1c
	char pad_0xF4[0x4]; // Offset: 0xf4 // Size: 0x04
	StrProperty TargetSequenceName; // Offset: 0xf8 // Size: 0x10
	struct FDirectoryPath TargetPathToRecordTo; // Offset: 0x108 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x130 // Inherited bytes: 0x118
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	// Fields
	struct FText DisplayName; // Offset: 0x118 // Size: 0x18
};

// Object Name: Class MovieSceneTracks.MovieSceneSubTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x68 // Inherited bytes: 0x68
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x278 // Inherited bytes: 0xb0
struct UMovieSceneColorSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FRichCurve RedCurve; // Offset: 0xb8 // Size: 0x70
	struct FRichCurve GreenCurve; // Offset: 0x128 // Size: 0x70
	struct FRichCurve BlueCurve; // Offset: 0x198 // Size: 0x70
	struct FRichCurve AlphaCurve; // Offset: 0x208 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0x88 // Inherited bytes: 0x80
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	// Fields
	bool bIsSlateColor; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
};

// Object Name: Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x128 // Inherited bytes: 0xb0
struct UMovieSceneEnumSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FIntegralCurve EnumCurve; // Offset: 0xb8 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0x88 // Inherited bytes: 0x80
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	// Fields
	struct UEnum* Enum; // Offset: 0x80 // Size: 0x08
};

// Object Name: Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1c0 // Inherited bytes: 0xb0
struct UMovieSceneEventSection : UMovieSceneSection {
	// Fields
	struct FNameCurve Events; // Offset: 0xb0 // Size: 0x68
	struct FMovieSceneEventSectionData EventData; // Offset: 0x118 // Size: 0x20
	char pad_0x138[0x88]; // Offset: 0x138 // Size: 0x88
};

// Object Name: Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x78 // Inherited bytes: 0x58
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	// Fields
	char bFireEventsWhenForwards : 1; // Offset: 0x55 // Size: 0x01
	char bFireEventsWhenBackwards : 1; // Offset: 0x55 // Size: 0x01
	enum class EFireEventsAtPosition EventPosition; // Offset: 0x56 // Size: 0x01
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // Offset: 0x58 // Size: 0x10
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x68 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x128 // Inherited bytes: 0xb0
struct UMovieSceneFloatSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FRichCurve FloatCurve; // Offset: 0xb8 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x140 // Inherited bytes: 0x128
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	// Fields
	struct FLinearColor FadeColor; // Offset: 0x128 // Size: 0x10
	char bFadeAudio : 1; // Offset: 0x138 // Size: 0x01
	char pad_0x138_1 : 7; // Offset: 0x138 // Size: 0x01
	char pad_0x139[0x7]; // Offset: 0x139 // Size: 0x07
};

// Object Name: Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x128 // Inherited bytes: 0xb0
struct UMovieSceneIntegerSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FIntegralCurve IntegerCurve; // Offset: 0xb8 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0xc0 // Inherited bytes: 0xb0
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	// Fields
	enum class ELevelVisibility Visibility; // Offset: 0xae // Size: 0x01
	struct TArray<struct FName> LevelNames; // Offset: 0xb0 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x70 // Inherited bytes: 0x68
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	// Fields
	struct UMaterialParameterCollection* MPC; // Offset: 0x68 // Size: 0x08
};

// Object Name: Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x70 // Inherited bytes: 0x68
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	// Fields
	IntProperty MaterialIndex; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0xe0 // Inherited bytes: 0xb0
struct UMovieSceneParameterSection : UMovieSceneSection {
	// Fields
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // Offset: 0xb0 // Size: 0x10
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // Offset: 0xc0 // Size: 0x10
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // Offset: 0xd0 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x120 // Inherited bytes: 0xb0
struct UMovieSceneParticleSection : UMovieSceneSection {
	// Fields
	struct FIntegralCurve ParticleKeys; // Offset: 0xb0 // Size: 0x70
};

// Object Name: Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> ParticleSections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0x88 // Inherited bytes: 0x80
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	// Fields
	IntProperty MaterialIndex; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
};

// Object Name: Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x168 // Inherited bytes: 0xb0
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	// Fields
	struct FMovieSceneSkeletalAnimationParams Params; // Offset: 0xb0 // Size: 0x90
	struct UAnimSequence* AnimSequence; // Offset: 0x140 // Size: 0x08
	struct UAnimSequenceBase* Animation; // Offset: 0x148 // Size: 0x08
	float StartOffset; // Offset: 0x150 // Size: 0x04
	float EndOffset; // Offset: 0x154 // Size: 0x04
	float PlayRate; // Offset: 0x158 // Size: 0x04
	char bReverse : 1; // Offset: 0x15c // Size: 0x01
	char pad_0x15C_1 : 7; // Offset: 0x15c // Size: 0x01
	char pad_0x15D[0x3]; // Offset: 0x15d // Size: 0x03
	struct FName SlotName; // Offset: 0x160 // Size: 0x08
};

// Object Name: Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x70 // Inherited bytes: 0x58
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> AnimationSections; // Offset: 0x58 // Size: 0x10
	bool bUseLegacySectionIndexBlend; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
};

// Object Name: Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x128 // Inherited bytes: 0x128
struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
};

// Object Name: Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x130 // Inherited bytes: 0x130
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Object Name: Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x78 // Inherited bytes: 0x58
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
	struct FGuid ObjectGuid; // Offset: 0x68 // Size: 0x10
};

// Object Name: Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x130 // Inherited bytes: 0xb0
struct UMovieSceneStringSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FStringCurve StringCurve; // Offset: 0xb8 // Size: 0x78
};

// Object Name: Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Object Name: Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x280 // Inherited bytes: 0xb0
struct UMovieSceneVectorSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FRichCurve Curves[0x4]; // Offset: 0xb8 // Size: 0x1c0
	IntProperty ChannelsUsed; // Offset: 0x278 // Size: 0x04
	char pad_0x27C[0x4]; // Offset: 0x27c // Size: 0x04
};

// Object Name: Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0x88 // Inherited bytes: 0x80
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	// Fields
	IntProperty NumChannelsUsed; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
};

// Object Name: Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

