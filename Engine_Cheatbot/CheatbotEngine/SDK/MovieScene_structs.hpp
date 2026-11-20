#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x04 // Inherited bytes: 0x00
struct FMovieSceneSequenceID {
	// Fields
	uint32_t Value; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 // Inherited bytes: 0x00
struct FMovieSceneEvalTemplateBase {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x18 // Inherited bytes: 0x10
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	// Fields
	enum class EMovieSceneCompletionMode CompletionMode; // Offset: 0x09 // Size: 0x01
	struct UMovieSceneSection* SourceSection; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 // Inherited bytes: 0x10
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase {
};

// Object Name: ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 // Inherited bytes: 0x00
struct FMovieSceneObjectBindingID {
	// Fields
	IntProperty SequenceID; // Offset: 0x00 // Size: 0x04
	enum class EMovieSceneObjectBindingSpace Space; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FGuid Guid; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 // Inherited bytes: 0x00
struct FMovieSceneTrackLabels {
	// Fields
	struct TArray<StrProperty> Strings; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 // Inherited bytes: 0x00
struct FMovieSceneEditorData {
	// Fields
	MapProperty ExpansionStates; // Offset: 0x00 // Size: 0x50
	struct FFloatRange WorkingRange; // Offset: 0x50 // Size: 0x10
	struct FFloatRange ViewRange; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x01 // Inherited bytes: 0x00
struct FMovieSceneExpansionState {
	// Fields
	bool bExpanded; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 // Inherited bytes: 0x00
struct FMovieSceneBinding {
	// Fields
	struct FGuid ObjectGuid; // Offset: 0x00 // Size: 0x10
	StrProperty BindingName; // Offset: 0x10 // Size: 0x10
	struct TArray<struct UMovieSceneTrack*> Tracks; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 // Inherited bytes: 0x00
struct FMovieSceneBindingOverrideData {
	// Fields
	struct FMovieSceneObjectBindingID ObjectBindingId; // Offset: 0x00 // Size: 0x18
	struct TWeakObjectPtr<struct UObject> Object; // Offset: 0x18 // Size: 0x08
	bool bOverridesDefault; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
};

// Object Name: ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x02 // Inherited bytes: 0x00
struct FOptionalMovieSceneBlendType {
	// Fields
	enum class EMovieSceneBlendType BlendType; // Offset: 0x00 // Size: 0x01
	bool bIsValid; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x38 // Inherited bytes: 0x00
struct FMovieSceneEvalTemplatePtr {
	// Fields
	char pad_0x0[0x38]; // Offset: 0x00 // Size: 0x38
};

// Object Name: ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x01 // Inherited bytes: 0x00
struct FMovieSceneEmptyStruct {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 // Inherited bytes: 0x00
struct FMovieSceneEvaluationField {
	// Fields
	struct TArray<struct FFloatRange> Ranges; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x20 // Inherited bytes: 0x00
struct FMovieSceneEvaluationMetaData {
	// Fields
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 // Inherited bytes: 0x00
struct FMovieSceneOrderedEvaluationKey {
	// Fields
	struct FMovieSceneEvaluationKey Key; // Offset: 0x00 // Size: 0x0c
	uint32_t EvaluationIndex; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0x0c // Inherited bytes: 0x00
struct FMovieSceneEvaluationKey {
	// Fields
	struct FMovieSceneSequenceID SequenceID; // Offset: 0x00 // Size: 0x04
	struct FMovieSceneTrackIdentifier TrackIdentifier; // Offset: 0x04 // Size: 0x04
	uint32_t SectionIdentifier; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x04 // Inherited bytes: 0x00
struct FMovieSceneTrackIdentifier {
	// Fields
	uint32_t Value; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FMovieSceneEvaluationGroup {
	// Fields
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x08 // Inherited bytes: 0x00
struct FMovieSceneEvaluationFieldTrackPtr {
	// Fields
	struct FMovieSceneSequenceID SequenceID; // Offset: 0x00 // Size: 0x04
	struct FMovieSceneTrackIdentifier TrackIdentifier; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0x0c // Inherited bytes: 0x08
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	// Fields
	IntProperty SegmentIndex; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x0c // Inherited bytes: 0x00
struct FMovieSceneEvaluationGroupLUTIndex {
	// Fields
	IntProperty LUTOffset; // Offset: 0x00 // Size: 0x04
	IntProperty NumInitPtrs; // Offset: 0x04 // Size: 0x04
	IntProperty NumEvalPtrs; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x220 // Inherited bytes: 0x00
struct FMovieSceneEvaluationTemplate {
	// Fields
	MapProperty Tracks; // Offset: 0x00 // Size: 0x50
	char pad_0x50[0x50]; // Offset: 0x50 // Size: 0x50
	struct FMovieSceneEvaluationField EvaluationField; // Offset: 0xa0 // Size: 0x30
	struct FMovieSceneSequenceHierarchy Hierarchy; // Offset: 0xd0 // Size: 0xa0
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // Offset: 0x170 // Size: 0xa8
	char bHasLegacyTrackInstances : 1; // Offset: 0x218 // Size: 0x01
	char bKeepStaleTracks : 1; // Offset: 0x218 // Size: 0x01
	char pad_0x218_2 : 6; // Offset: 0x218 // Size: 0x01
	char pad_0x219[0x7]; // Offset: 0x219 // Size: 0x07
};

// Object Name: ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xa8 // Inherited bytes: 0x00
struct FMovieSceneTemplateGenerationLedger {
	// Fields
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty TrackReferenceCounts; // Offset: 0x08 // Size: 0x50
	MapProperty TrackSignatureToTrackIdentifier; // Offset: 0x58 // Size: 0x50
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackIdentifiers
// Size: 0x10 // Inherited bytes: 0x00
struct FMovieSceneTrackIdentifiers {
	// Fields
	struct TArray<struct FMovieSceneTrackIdentifier> Data; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0xa0 // Inherited bytes: 0x00
struct FMovieSceneSequenceHierarchy {
	// Fields
	MapProperty SubSequences; // Offset: 0x00 // Size: 0x50
	MapProperty Hierarchy; // Offset: 0x50 // Size: 0x50
};

// Object Name: ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 // Inherited bytes: 0x00
struct FMovieSceneSequenceHierarchyNode {
	// Fields
	struct FMovieSceneSequenceID ParentID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FMovieSceneSequenceID> Children; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0x50 // Inherited bytes: 0x00
struct FMovieSceneSubSequenceData {
	// Fields
	struct UMovieSceneSequence* Sequence; // Offset: 0x00 // Size: 0x08
	struct UObject* SequenceKeyObject; // Offset: 0x08 // Size: 0x08
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // Offset: 0x10 // Size: 0x08
	struct FGuid SourceSequenceSignature; // Offset: 0x18 // Size: 0x10
	struct FMovieSceneSequenceID DeterministicSequenceID; // Offset: 0x28 // Size: 0x04
	struct FFloatRange PreRollRange; // Offset: 0x2c // Size: 0x10
	struct FFloatRange PostRollRange; // Offset: 0x3c // Size: 0x10
	IntProperty HierarchicalBias; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x08 // Inherited bytes: 0x00
struct FMovieSceneSequenceTransform {
	// Fields
	float TimeScale; // Offset: 0x00 // Size: 0x04
	float Offset; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0x80 // Inherited bytes: 0x00
struct FMovieSceneEvaluationTrack {
	// Fields
	struct FGuid ObjectBindingId; // Offset: 0x00 // Size: 0x10
	uint16_t EvaluationPriority; // Offset: 0x10 // Size: 0x02
	enum class EEvaluationMethod EvaluationMethod; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
	struct TArray<struct FMovieSceneSegment> Segments; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // Offset: 0x28 // Size: 0x10
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // Offset: 0x38 // Size: 0x38
	struct FName EvaluationGroup; // Offset: 0x70 // Size: 0x08
	char bEvaluateInPreroll : 1; // Offset: 0x78 // Size: 0x01
	char bEvaluateInPostroll : 1; // Offset: 0x78 // Size: 0x01
	char pad_0x78_2 : 6; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 // Inherited bytes: 0x00
struct FMovieSceneTrackImplementationPtr {
	// Fields
	char pad_0x0[0x38]; // Offset: 0x00 // Size: 0x38
};

// Object Name: ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x50 // Inherited bytes: 0x00
struct FMovieSceneSegment {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
// Size: 0x220 // Inherited bytes: 0x220
struct FCachedMovieSceneEvaluationTemplate : FMovieSceneEvaluationTemplate {
};

// Object Name: ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
// Size: 0x18 // Inherited bytes: 0x00
struct FMovieSceneSequenceCachedSignature {
	// Fields
	struct TWeakObjectPtr<struct UMovieSceneSequence> Sequence; // Offset: 0x00 // Size: 0x08
	struct FGuid CachedSignature; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FMovieSceneKeyStruct {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
// Size: 0x20 // Inherited bytes: 0x18
struct FMovieSceneLegacyTrackInstanceTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct UMovieSceneTrack* Track; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 // Inherited bytes: 0x00
struct FMovieScenePossessable {
	// Fields
	struct FGuid Guid; // Offset: 0x00 // Size: 0x10
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	struct UObject* PossessedObjectClass; // Offset: 0x20 // Size: 0x08
	struct FGuid ParentGuid; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x40 // Inherited bytes: 0x18
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FMovieScenePropertySectionData PropertyData; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x28 // Inherited bytes: 0x00
struct FMovieScenePropertySectionData {
	// Fields
	struct FName PropertyName; // Offset: 0x00 // Size: 0x08
	StrProperty PropertyPath; // Offset: 0x08 // Size: 0x10
	struct FName FunctionName; // Offset: 0x18 // Size: 0x08
	struct FName NotifyFunctionName; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38 // Inherited bytes: 0x00
struct FMovieSceneEasingSettings {
	// Fields
	float AutoEaseInTime; // Offset: 0x00 // Size: 0x04
	float AutoEaseOutTime; // Offset: 0x04 // Size: 0x04
	struct TScriptInterface<Class> EaseIn; // Offset: 0x08 // Size: 0x10
	bool bManualEaseIn; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float ManualEaseInTime; // Offset: 0x1c // Size: 0x04
	struct TScriptInterface<Class> EaseOut; // Offset: 0x20 // Size: 0x10
	bool bManualEaseOut; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float ManualEaseOutTime; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 // Inherited bytes: 0x00
struct FMovieSceneSectionEvalOptions {
	// Fields
	bool bCanEditCompletionMode; // Offset: 0x00 // Size: 0x01
	enum class EMovieSceneCompletionMode CompletionMode; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x14 // Inherited bytes: 0x00
struct FMovieSceneSectionParameters {
	// Fields
	float StartOffset; // Offset: 0x00 // Size: 0x04
	float TimeScale; // Offset: 0x04 // Size: 0x04
	IntProperty HierarchicalBias; // Offset: 0x08 // Size: 0x04
	float PrerollTime; // Offset: 0x0c // Size: 0x04
	float PostrollTime; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.SectionEvaluationData
// Size: 0x0c // Inherited bytes: 0x00
struct FSectionEvaluationData {
	// Fields
	IntProperty ImplIndex; // Offset: 0x00 // Size: 0x04
	float ForcedTime; // Offset: 0x04 // Size: 0x04
	enum class ESectionEvaluationFlags Flags; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FMovieSceneSequencePlaybackSettings {
	// Fields
	IntProperty LoopCount; // Offset: 0x00 // Size: 0x04
	float PlayRate; // Offset: 0x04 // Size: 0x04
	bool bRandomStartTime; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float StartTime; // Offset: 0x0c // Size: 0x04
	bool bRestoreState; // Offset: 0x10 // Size: 0x01
	bool bDisableMovementInput; // Offset: 0x11 // Size: 0x01
	bool bDisableLookAtInput; // Offset: 0x12 // Size: 0x01
	bool bHidePlayer; // Offset: 0x13 // Size: 0x01
	bool bHideHud; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct TScriptInterface<Class> BindingOverrides; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x40 // Inherited bytes: 0x00
struct FMovieSceneSpawnable {
	// Fields
	struct FGuid Guid; // Offset: 0x00 // Size: 0x10
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	struct UObject* ObjectTemplate; // Offset: 0x20 // Size: 0x08
	struct TArray<struct FGuid> ChildPossessables; // Offset: 0x28 // Size: 0x10
	enum class ESpawnOwnership Ownership; // Offset: 0x38 // Size: 0x01
	enum class ESpawnDeviceLevel DeviceLevel; // Offset: 0x39 // Size: 0x01
	enum class ESpawnUserQualitySettingLevel UserQualitySettingLevel; // Offset: 0x3a // Size: 0x01
	char UnValidDeviceLevel; // Offset: 0x3b // Size: 0x01
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 // Inherited bytes: 0x00
struct FMovieSceneTrackEvalOptions {
	// Fields
	char bCanEvaluateNearestSection : 1; // Offset: 0x00 // Size: 0x01
	char bEvalNearestSection : 1; // Offset: 0x00 // Size: 0x01
	char bEvaluateInPreroll : 1; // Offset: 0x00 // Size: 0x01
	char bEvaluateInPostroll : 1; // Offset: 0x00 // Size: 0x01
	char bEvaluateNearestSection : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_5 : 3; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct MovieScene.MovieSceneTrackCompilationParams
// Size: 0x02 // Inherited bytes: 0x00
struct FMovieSceneTrackCompilationParams {
	// Fields
	bool bForEditorPreview; // Offset: 0x00 // Size: 0x01
	bool bDuringBlueprintCompile; // Offset: 0x01 // Size: 0x01
};

