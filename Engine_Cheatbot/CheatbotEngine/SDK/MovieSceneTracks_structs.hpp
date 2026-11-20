#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x40 // Inherited bytes: 0x18
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FGuid AttachGuid; // Offset: 0x18 // Size: 0x10
	struct FName AttachSocketName; // Offset: 0x28 // Size: 0x08
	struct FName AttachComponentName; // Offset: 0x30 // Size: 0x08
	enum class EAttachmentRule AttachmentLocationRule; // Offset: 0x38 // Size: 0x01
	enum class EAttachmentRule AttachmentRotationRule; // Offset: 0x39 // Size: 0x01
	enum class EAttachmentRule AttachmentScaleRule; // Offset: 0x3a // Size: 0x01
	enum class EDetachmentRule DetachmentLocationRule; // Offset: 0x3b // Size: 0x01
	enum class EDetachmentRule DetachmentRotationRule; // Offset: 0x3c // Size: 0x01
	enum class EDetachmentRule DetachmentScaleRule; // Offset: 0x3d // Size: 0x01
	char pad_0x3E[0x2]; // Offset: 0x3e // Size: 0x02
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xa0 // Inherited bytes: 0x18
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FGuid PathGuid; // Offset: 0x18 // Size: 0x10
	struct FRichCurve TimingCurve; // Offset: 0x28 // Size: 0x70
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // Offset: 0x98 // Size: 0x01
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // Offset: 0x99 // Size: 0x01
	char bFollow : 1; // Offset: 0x9a // Size: 0x01
	char bReverse : 1; // Offset: 0x9a // Size: 0x01
	char bForceUpright : 1; // Offset: 0x9a // Size: 0x01
	char bUseConstantVelocity : 1; // Offset: 0x9a // Size: 0x01
	char pad_0x9A_4 : 4; // Offset: 0x9a // Size: 0x01
	char pad_0x9B[0x5]; // Offset: 0x9b // Size: 0x05
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x04 // Inherited bytes: 0x00
struct FMovieSceneTransformMask {
	// Fields
	uint32_t Mask; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x78 // Inherited bytes: 0x08
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	// Fields
	struct FVector Location; // Offset: 0x08 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x14 // Size: 0x0c
	struct FVector Scale; // Offset: 0x20 // Size: 0x0c
	float Time; // Offset: 0x2c // Size: 0x04
	char pad_0x30[0x48]; // Offset: 0x30 // Size: 0x48
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 // Inherited bytes: 0x08
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	// Fields
	struct FVector Scale; // Offset: 0x08 // Size: 0x0c
	float Time; // Offset: 0x14 // Size: 0x04
	char pad_0x18[0x18]; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 // Inherited bytes: 0x08
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	// Fields
	struct FRotator Rotation; // Offset: 0x08 // Size: 0x0c
	float Time; // Offset: 0x14 // Size: 0x04
	char pad_0x18[0x18]; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 // Inherited bytes: 0x08
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	// Fields
	struct FVector Location; // Offset: 0x08 // Size: 0x0c
	float Time; // Offset: 0x14 // Size: 0x04
	char pad_0x18[0x18]; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x488 // Inherited bytes: 0x18
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieScene3DTransformTemplateData TemplateData; // Offset: 0x18 // Size: 0x470
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x470 // Inherited bytes: 0x00
struct FMovieScene3DTransformTemplateData {
	// Fields
	struct FRichCurve TranslationCurve[0x3]; // Offset: 0x00 // Size: 0x150
	struct FRichCurve RotationCurve[0x3]; // Offset: 0x150 // Size: 0x150
	struct FRichCurve ScaleCurve[0x3]; // Offset: 0x2a0 // Size: 0x150
	struct FRichCurve ManualWeight; // Offset: 0x3f0 // Size: 0x70
	enum class EMovieSceneBlendType BlendType; // Offset: 0x460 // Size: 0x01
	char pad_0x461[0x3]; // Offset: 0x461 // Size: 0x03
	struct FMovieSceneTransformMask Mask; // Offset: 0x464 // Size: 0x04
	bool bIgnoreGlobalTransform; // Offset: 0x468 // Size: 0x01
	char pad_0x469[0x7]; // Offset: 0x469 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xc0 // Inherited bytes: 0x18
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieScenePropertySectionData PropertyData; // Offset: 0x18 // Size: 0x28
	struct FIntegralCurve ActorGuidIndexCurve; // Offset: 0x40 // Size: 0x70
	struct TArray<struct FGuid> ActorGuids; // Offset: 0xb0 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x158 // Inherited bytes: 0x18
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieSceneAudioSectionTemplateData AudioData; // Offset: 0x18 // Size: 0x140
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// Size: 0x140 // Inherited bytes: 0x00
struct FMovieSceneAudioSectionTemplateData {
	// Fields
	struct USoundBase* Sound; // Offset: 0x00 // Size: 0x08
	float AudioStartOffset; // Offset: 0x08 // Size: 0x04
	struct FFloatRange AudioRange; // Offset: 0x0c // Size: 0x10
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FRichCurve AudioPitchMultiplierCurve; // Offset: 0x20 // Size: 0x70
	struct FRichCurve AudioVolumeCurve; // Offset: 0x90 // Size: 0x70
	IntProperty RowIndex; // Offset: 0x100 // Size: 0x04
	bool bOverrideAttenuation; // Offset: 0x104 // Size: 0x01
	char pad_0x105[0x3]; // Offset: 0x105 // Size: 0x03
	struct USoundAttenuation* AttenuationSettings; // Offset: 0x108 // Size: 0x08
	DelegateProperty OnQueueSubtitles; // Offset: 0x110 // Size: 0x10
	struct FScriptMulticastDelegate OnAudioFinished; // Offset: 0x120 // Size: 0x10
	struct FScriptMulticastDelegate OnAudioPlaybackPercent; // Offset: 0x130 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 // Inherited bytes: 0x00
struct FMovieSceneCameraAnimSectionData {
	// Fields
	struct UCameraAnim* CameraAnim; // Offset: 0x00 // Size: 0x08
	float PlayRate; // Offset: 0x08 // Size: 0x04
	float PlayScale; // Offset: 0x0c // Size: 0x04
	float BlendInTime; // Offset: 0x10 // Size: 0x04
	float BlendOutTime; // Offset: 0x14 // Size: 0x04
	bool bLooping; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
// Size: 0x18 // Inherited bytes: 0x18
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : FMovieSceneEvalTemplate {
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x18 // Inherited bytes: 0x18
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x40 // Inherited bytes: 0x18
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	// Fields
	struct FMovieSceneCameraShakeSectionData SourceData; // Offset: 0x18 // Size: 0x20
	float SectionStartTime; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 // Inherited bytes: 0x00
struct FMovieSceneCameraShakeSectionData {
	// Fields
	struct UCameraShake* ShakeClass; // Offset: 0x00 // Size: 0x08
	float PlayScale; // Offset: 0x08 // Size: 0x04
	enum class ECameraAnimPlaySpace PlaySpace; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FRotator UserDefinedPlaySpace; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x40 // Inherited bytes: 0x18
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	// Fields
	struct FMovieSceneCameraAnimSectionData SourceData; // Offset: 0x18 // Size: 0x20
	float SectionStartTime; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x70 // Inherited bytes: 0x18
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FGuid CameraGuid; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FTransform CutTransform; // Offset: 0x30 // Size: 0x30
	bool bHasCutTransform; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0xf]; // Offset: 0x61 // Size: 0x0f
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x60 // Inherited bytes: 0x08
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	// Fields
	struct FLinearColor Color; // Offset: 0x08 // Size: 0x10
	float Time; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x44]; // Offset: 0x1c // Size: 0x44
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x208 // Inherited bytes: 0x40
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FRichCurve Curves[0x4]; // Offset: 0x40 // Size: 0x1c0
	enum class EMovieSceneBlendType BlendType; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x7]; // Offset: 0x201 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x20 // Inherited bytes: 0x00
struct FMovieSceneEventSectionData {
	// Fields
	struct TArray<float> KeyTimes; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FEventPayload> KeyValues; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 // Inherited bytes: 0x00
struct FEventPayload {
	// Fields
	struct FName EventName; // Offset: 0x00 // Size: 0x08
	struct FMovieSceneEventParameters Parameters; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 // Inherited bytes: 0x00
struct FMovieSceneEventParameters {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0x50 // Inherited bytes: 0x18
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieSceneEventSectionData EventData; // Offset: 0x18 // Size: 0x20
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // Offset: 0x38 // Size: 0x10
	char bFireEventsWhenForwards : 1; // Offset: 0x48 // Size: 0x01
	char bFireEventsWhenBackwards : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_2 : 6; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xa0 // Inherited bytes: 0x18
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FRichCurve FadeCurve; // Offset: 0x18 // Size: 0x70
	struct FLinearColor FadeColor; // Offset: 0x88 // Size: 0x10
	char bFadeAudio : 1; // Offset: 0x98 // Size: 0x01
	char pad_0x98_1 : 7; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x30 // Inherited bytes: 0x18
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	enum class ELevelVisibility Visibility; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct TArray<struct FName> LevelNames; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x48 // Inherited bytes: 0x18
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FColorParameterNameAndCurves> Colors; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x1d0 // Inherited bytes: 0x00
struct FColorParameterNameAndCurves {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	IntProperty Index; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FRichCurve RedCurve; // Offset: 0x10 // Size: 0x70
	struct FRichCurve GreenCurve; // Offset: 0x80 // Size: 0x70
	struct FRichCurve BlueCurve; // Offset: 0xf0 // Size: 0x70
	struct FRichCurve AlphaCurve; // Offset: 0x160 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x160 // Inherited bytes: 0x00
struct FVectorParameterNameAndCurves {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	IntProperty Index; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FRichCurve XCurve; // Offset: 0x10 // Size: 0x70
	struct FRichCurve YCurve; // Offset: 0x80 // Size: 0x70
	struct FRichCurve ZCurve; // Offset: 0xf0 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0x80 // Inherited bytes: 0x00
struct FScalarParameterNameAndCurve {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	IntProperty Index; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FRichCurve ParameterCurve; // Offset: 0x10 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x50 // Inherited bytes: 0x48
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	// Fields
	struct UMaterialParameterCollection* MPC; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x50 // Inherited bytes: 0x48
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	// Fields
	IntProperty MaterialIndex; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x48 // Inherited bytes: 0x48
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0x88 // Inherited bytes: 0x18
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FIntegralCurve ParticleKeys; // Offset: 0x18 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0x98 // Inherited bytes: 0x18
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	// Fields
	IntProperty MaterialIndex; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FStringCurve BoolCurve; // Offset: 0x20 // Size: 0x78
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x4b0 // Inherited bytes: 0x40
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FMovieScene3DTransformTemplateData TemplateData; // Offset: 0x40 // Size: 0x470
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x208 // Inherited bytes: 0x40
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FRichCurve ComponentCurves[0x4]; // Offset: 0x40 // Size: 0x1c0
	IntProperty NumChannelsUsed; // Offset: 0x200 // Size: 0x04
	enum class EMovieSceneBlendType BlendType; // Offset: 0x204 // Size: 0x01
	char pad_0x205[0x3]; // Offset: 0x205 // Size: 0x03
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xb8 // Inherited bytes: 0x40
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FStringCurve StringCurve; // Offset: 0x40 // Size: 0x78
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xb8 // Inherited bytes: 0x40
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FIntegralCurve IntegerCurve; // Offset: 0x40 // Size: 0x70
	enum class EMovieSceneBlendType BlendType; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xb0 // Inherited bytes: 0x40
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FIntegralCurve EnumCurve; // Offset: 0x40 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xb0 // Inherited bytes: 0x40
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FIntegralCurve ByteCurve; // Offset: 0x40 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xb8 // Inherited bytes: 0x40
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FRichCurve FloatCurve; // Offset: 0x40 // Size: 0x70
	enum class EMovieSceneBlendType BlendType; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xb0 // Inherited bytes: 0x40
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FIntegralCurve BoolCurve; // Offset: 0x40 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0x90 // Inherited bytes: 0x00
struct FMovieSceneSkeletalAnimationParams {
	// Fields
	struct UAnimSequenceBase* Animation; // Offset: 0x00 // Size: 0x08
	float StartOffset; // Offset: 0x08 // Size: 0x04
	float EndOffset; // Offset: 0x0c // Size: 0x04
	float PlayRate; // Offset: 0x10 // Size: 0x04
	char bReverse : 1; // Offset: 0x14 // Size: 0x01
	char pad_0x14_1 : 7; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct FName SlotName; // Offset: 0x18 // Size: 0x08
	struct FRichCurve Weight; // Offset: 0x20 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0xb0 // Inherited bytes: 0x18
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // Offset: 0x18 // Size: 0x98
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0x98 // Inherited bytes: 0x90
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	// Fields
	float SectionStartTime; // Offset: 0x90 // Size: 0x04
	float SectionEndTime; // Offset: 0x94 // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0x88 // Inherited bytes: 0x18
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FRichCurve SlomoCurve; // Offset: 0x18 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0x88 // Inherited bytes: 0x18
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FIntegralCurve Curve; // Offset: 0x18 // Size: 0x70
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x50 // Inherited bytes: 0x08
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	// Fields
	char pad_0x8[0x40]; // Offset: 0x08 // Size: 0x40
	float Time; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x60 // Inherited bytes: 0x50
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	// Fields
	struct FVector4 Vector; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x58 // Inherited bytes: 0x50
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	// Fields
	struct FVector Vector; // Offset: 0x4c // Size: 0x0c
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x58 // Inherited bytes: 0x50
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	// Fields
	struct FVector2D Vector; // Offset: 0x4c // Size: 0x08
};

// Object Name: ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xb8 // Inherited bytes: 0xb0
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
	// Fields
	bool bTemporarilyHiddenInGame; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

