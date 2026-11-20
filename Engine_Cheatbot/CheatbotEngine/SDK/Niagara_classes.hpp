#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Niagara.NiagaraComponent
// Size: 0xb90 // Inherited bytes: 0x9d0
struct UNiagaraComponent : UFXSystemComponent {
	// Fields
	struct UNiagaraSystem* Asset; // Offset: 0x9c8 // Size: 0x08
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // Offset: 0x9d0 // Size: 0x138
	char bForceSolo : 1; // Offset: 0xb08 // Size: 0x01
	char pad_0xB10_1 : 7; // Offset: 0xb10 // Size: 0x01
	char pad_0xB11[0x1c]; // Offset: 0xb11 // Size: 0x1c
	char bAutoDestroy : 1; // Offset: 0xb2d // Size: 0x01
	char bRenderingEnabled : 1; // Offset: 0xb2d // Size: 0x01
	char bAutoManageAttachment : 1; // Offset: 0xb2d // Size: 0x01
	char pad_0xB2D_3 : 5; // Offset: 0xb2d // Size: 0x01
	char pad_0xB2E[0x2]; // Offset: 0xb2e // Size: 0x02
	struct FScriptMulticastDelegate OnSystemFinished; // Offset: 0xb30 // Size: 0x10
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // Offset: 0xb40 // Size: 0x08
	struct FName AutoAttachSocketName; // Offset: 0xb48 // Size: 0x08
	enum class EAttachmentRule AutoAttachLocationRule; // Offset: 0xb50 // Size: 0x01
	enum class EAttachmentRule AutoAttachRotationRule; // Offset: 0xb51 // Size: 0x01
	enum class EAttachmentRule AutoAttachScaleRule; // Offset: 0xb52 // Size: 0x01
	char pad_0xB53[0x1]; // Offset: 0xb53 // Size: 0x01
	IntProperty PreviewDetailLevel; // Offset: 0xb54 // Size: 0x04
	float PreviewLODDistance; // Offset: 0xb58 // Size: 0x04
	char bEnablePreviewDetailLevel : 1; // Offset: 0xb5c // Size: 0x01
	char bEnablePreviewLODDistance : 1; // Offset: 0xb5c // Size: 0x01
	char pad_0xB5C_2 : 6; // Offset: 0xb5c // Size: 0x01
	char pad_0xB5D[0x33]; // Offset: 0xb5d // Size: 0x33

	// Functions

	// Object Name: Function Niagara.NiagaraComponent.SetSeekDelta
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSeekDelta(float InSeekDelta); // Offset: 0x1020ea95c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.SetRenderingEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRenderingEnabled(bool bInRenderingEnabled); // Offset: 0x1020ea8d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.SetPreviewLODDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Offset: 0x1020ea810 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Niagara.NiagaraComponent.SetPreviewDetailLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, IntProperty PreviewDetailLevel); // Offset: 0x1020ea748 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Niagara.NiagaraComponent.SetPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPaused(bool bInPaused); // Offset: 0x1020ea6c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetNiagaraVariableVec4(StrProperty InVariableName, struct FVector4& InValue); // Offset: 0x1020ea5d4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetNiagaraVariableVec3(StrProperty InVariableName, struct FVector InValue); // Offset: 0x1020ea4fc // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetNiagaraVariableVec2(StrProperty InVariableName, struct FVector2D InValue); // Offset: 0x1020ea428 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetNiagaraVariableQuat(StrProperty InVariableName, struct FQuat& InValue); // Offset: 0x1020ea344 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetNiagaraVariableLinearColor(StrProperty InVariableName, struct FLinearColor& InValue); // Offset: 0x1020ea260 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNiagaraVariableInt(StrProperty InVariableName, IntProperty InValue); // Offset: 0x1020ea188 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNiagaraVariableFloat(StrProperty InVariableName, float InValue); // Offset: 0x1020ea0b0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNiagaraVariableBool(StrProperty InVariableName, bool InValue); // Offset: 0x1020e9fd0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNiagaraVariableActor(StrProperty InVariableName, struct AActor* Actor); // Offset: 0x1020e9f0c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Niagara.NiagaraComponent.SetMaxSimTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxSimTime(float InMaxTime); // Offset: 0x1020e9e90 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.SetForceSolo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetForceSolo(bool bInForceSolo); // Offset: 0x1020e9e0c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.SetDesiredAge
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDesiredAge(float InDesiredAge); // Offset: 0x1020e9d90 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Offset: 0x1020e9d0c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.SetAutoDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoDestroy(bool bInAutoDestroy); // Offset: 0x1020e9c84 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.SetAutoAttachmentParameters
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoAttachmentParameters(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule); // Offset: 0x1020e9b1c // Return & Params: Num(5) Size(0x13)

	// Object Name: Function Niagara.NiagaraComponent.SetAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAsset(struct UNiagaraSystem* InAsset); // Offset: 0x1020e9aa0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Niagara.NiagaraComponent.SetAgeUpdateMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Offset: 0x1020e9a24 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.SeekToDesiredAge
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SeekToDesiredAge(float InDesiredAge); // Offset: 0x1020e99a8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.ResetSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetSystem(); // Offset: 0x1020e9994 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Niagara.NiagaraComponent.ReinitializeSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReinitializeSystem(); // Offset: 0x1020e9980 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Niagara.NiagaraComponent.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPaused(); // Offset: 0x1020e994c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.GetSeekDelta
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSeekDelta(); // Offset: 0x1020e9918 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(StrProperty InEmitterName, StrProperty InValueName); // Offset: 0x1020e97f4 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(StrProperty InEmitterName, StrProperty InValueName); // Offset: 0x1020e96d0 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(StrProperty InEmitterName); // Offset: 0x1020e9600 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraComponent.GetMaxSimTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetMaxSimTime(); // Offset: 0x1020e95cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.GetForceSolo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetForceSolo(); // Offset: 0x1020e95ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.GetDesiredAge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetDesiredAge(); // Offset: 0x1020e9578 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraComponent.GetAsset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UNiagaraSystem* GetAsset(); // Offset: 0x1020e955c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Niagara.NiagaraComponent.GetAgeUpdateMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Offset: 0x1020e9528 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Niagara.NiagaraComponent.DeactivateImmediate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeactivateImmediate(); // Offset: 0x1020e950c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Offset: 0x1020e9458 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Niagara.NiagaraComponent.AdvanceSimulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AdvanceSimulation(IntProperty TickCount, float TickDeltaSeconds); // Offset: 0x1020e93a0 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class Niagara.MovieSceneNiagaraTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0x98 // Inherited bytes: 0x68
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	// Fields
	struct FNiagaraVariable Parameter; // Offset: 0x68 // Size: 0x30
};

// Object Name: Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0x98 // Inherited bytes: 0x98
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Object Name: Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0x98 // Inherited bytes: 0x98
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Object Name: Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0x98 // Inherited bytes: 0x98
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Object Name: Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0x98 // Inherited bytes: 0x98
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Object Name: Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xb0 // Inherited bytes: 0xb0
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
};

// Object Name: Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x68 // Inherited bytes: 0x68
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Object Name: Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xa0 // Inherited bytes: 0x98
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	// Fields
	IntProperty ChannelsUsed; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class Niagara.NiagaraActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct ANiagaraActor : AActor {
	// Fields
	struct UNiagaraComponent* NiagaraComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Niagara.NiagaraDataInterface
// Size: 0x38 // Inherited bytes: 0x28
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x58 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	// Fields
	struct TArray<float> ShaderLUT; // Offset: 0x38 // Size: 0x10
	float LUTMinTime; // Offset: 0x48 // Size: 0x04
	float LUTMaxTime; // Offset: 0x4c // Size: 0x04
	float LUTInvTimeRange; // Offset: 0x50 // Size: 0x04
	char bUseLUT : 1; // Offset: 0x54 // Size: 0x01
	char pad_0x54_1 : 7; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
};

// Object Name: Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x48 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	// Fields
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x218 // Inherited bytes: 0x58
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	// Fields
	struct FRichCurve RedCurve; // Offset: 0x58 // Size: 0x70
	struct FRichCurve GreenCurve; // Offset: 0xc8 // Size: 0x70
	struct FRichCurve BlueCurve; // Offset: 0x138 // Size: 0x70
	struct FRichCurve AlphaCurve; // Offset: 0x1a8 // Size: 0x70
};

// Object Name: Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x48 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	// Fields
	uint32_t Seed; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0xc]; // Offset: 0x3c // Size: 0x0c
};

// Object Name: Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xc8 // Inherited bytes: 0x58
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	// Fields
	struct FRichCurve Curve; // Offset: 0x58 // Size: 0x70
};

// Object Name: Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x48 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface {
	// Fields
	StrProperty EmitterName; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xe0 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	// Fields
	SetProperty OutputShaderStages; // Offset: 0x38 // Size: 0x50
	SetProperty IterationShaderStages; // Offset: 0x88 // Size: 0x50
	char pad_0xD8[0x8]; // Offset: 0xd8 // Size: 0x08
};

// Object Name: Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x38 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Object Name: Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xb0 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	// Fields
	struct USkeletalMesh* DefaultMesh; // Offset: 0x38 // Size: 0x08
	struct AActor* Source; // Offset: 0x40 // Size: 0x08
	struct USkeletalMeshComponent* SourceComponent; // Offset: 0x48 // Size: 0x08
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct TArray<struct FName> SamplingRegions; // Offset: 0x58 // Size: 0x10
	IntProperty WholeMeshLOD; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<struct FName> SpecificBones; // Offset: 0x70 // Size: 0x10
	struct TArray<struct FName> SpecificSockets; // Offset: 0x80 // Size: 0x10
	bool bUseTriangleSampling; // Offset: 0x90 // Size: 0x01
	bool bUseVertexSampling; // Offset: 0x91 // Size: 0x01
	bool bUseSkeletonSampling; // Offset: 0x92 // Size: 0x01
	char pad_0x93[0x5]; // Offset: 0x93 // Size: 0x05
	StrProperty SourceComponentKeyWord; // Offset: 0x98 // Size: 0x10
	bool bForceUseDefaultMesh; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x7]; // Offset: 0xa9 // Size: 0x07
};

// Object Name: Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x50 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	// Fields
	struct AActor* Source; // Offset: 0x38 // Size: 0x08
	struct TArray<struct FVector> SplineKeyframePoints; // Offset: 0x40 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x68 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	// Fields
	struct UStaticMesh* DefaultMesh; // Offset: 0x38 // Size: 0x08
	struct AActor* Source; // Offset: 0x40 // Size: 0x08
	struct UStaticMeshComponent* SourceComponent; // Offset: 0x48 // Size: 0x08
	struct FNDIStaticMeshSectionFilter SectionFilter; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x8]; // Offset: 0x60 // Size: 0x08
};

// Object Name: Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x40 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	// Fields
	struct UTexture* Texture; // Offset: 0x38 // Size: 0x08
};

// Object Name: Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x138 // Inherited bytes: 0x58
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	// Fields
	struct FRichCurve XCurve; // Offset: 0x58 // Size: 0x70
	struct FRichCurve YCurve; // Offset: 0xc8 // Size: 0x70
};

// Object Name: Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x218 // Inherited bytes: 0x58
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	// Fields
	struct FRichCurve XCurve; // Offset: 0x58 // Size: 0x70
	struct FRichCurve YCurve; // Offset: 0xc8 // Size: 0x70
	struct FRichCurve ZCurve; // Offset: 0x138 // Size: 0x70
	struct FRichCurve WCurve; // Offset: 0x1a8 // Size: 0x70
};

// Object Name: Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1a8 // Inherited bytes: 0x58
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	// Fields
	struct FRichCurve XCurve; // Offset: 0x58 // Size: 0x70
	struct FRichCurve YCurve; // Offset: 0xc8 // Size: 0x70
	struct FRichCurve ZCurve; // Offset: 0x138 // Size: 0x70
};

// Object Name: Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 // Inherited bytes: 0x38
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	// Fields
	struct UVectorField* Field; // Offset: 0x38 // Size: 0x08
	bool bTileX; // Offset: 0x40 // Size: 0x01
	bool bTileY; // Offset: 0x41 // Size: 0x01
	bool bTileZ; // Offset: 0x42 // Size: 0x01
	char pad_0x43[0x5]; // Offset: 0x43 // Size: 0x05
};

// Object Name: Class Niagara.NiagaraRendererProperties
// Size: 0x30 // Inherited bytes: 0x28
struct UNiagaraRendererProperties : UNiagaraMergeable {
	// Fields
	IntProperty SortOrderHint; // Offset: 0x28 // Size: 0x04
	bool bIsEnabled; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: Class Niagara.NiagaraDecalRendererProperties
// Size: 0x3a0 // Inherited bytes: 0x30
struct UNiagaraDecalRendererProperties : UNiagaraRendererProperties {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x30 // Size: 0x08
	float DecalScreenSizeFade; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct FNiagaraVariableAttributeBinding PositionBinding; // Offset: 0x40 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DecalOrientationBinding; // Offset: 0xd0 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DecalSizeBinding; // Offset: 0x160 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DecalFadeBinding; // Offset: 0x1f0 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DecalSortOrderBinding; // Offset: 0x280 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DecalVisibleBinding; // Offset: 0x310 // Size: 0x90
};

// Object Name: Class Niagara.NiagaraEditorDataBase
// Size: 0x28 // Inherited bytes: 0x28
struct UNiagaraEditorDataBase : UObject {
};

// Object Name: Class Niagara.NiagaraEmitter
// Size: 0x170 // Inherited bytes: 0x28
struct UNiagaraEmitter : UObject {
	// Fields
	bool bLocalSpace; // Offset: 0x28 // Size: 0x01
	bool bBoneSpace; // Offset: 0x29 // Size: 0x01
	bool bDeterminism; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x1]; // Offset: 0x2b // Size: 0x01
	IntProperty RandomSeed; // Offset: 0x2c // Size: 0x04
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // Offset: 0x30 // Size: 0x28
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // Offset: 0x58 // Size: 0x28
	struct FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // Offset: 0x80 // Size: 0x28
	struct FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // Offset: 0xa8 // Size: 0x28
	char bHasPendingFallbackEmitterChange : 1; // Offset: 0xd0 // Size: 0x01
	char bIsFallbackEmitter : 1; // Offset: 0xd0 // Size: 0x01
	char pad_0xD0_2 : 6; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
	struct UNiagaraEmitter* CPUFallbackEmitter; // Offset: 0xd8 // Size: 0x08
	enum class ENiagaraSimTarget SimTarget; // Offset: 0xe0 // Size: 0x01
	char bUseFallbackEmitter : 1; // Offset: 0xe1 // Size: 0x01
	char pad_0xE1_1 : 7; // Offset: 0xe1 // Size: 0x01
	char pad_0xE2[0x2]; // Offset: 0xe2 // Size: 0x02
	struct FBox FixedBounds; // Offset: 0xe4 // Size: 0x1c
	IntProperty MinDetailLevel; // Offset: 0x100 // Size: 0x04
	IntProperty MaxDetailLevel; // Offset: 0x104 // Size: 0x04
	char bInterpolatedSpawning : 1; // Offset: 0x108 // Size: 0x01
	char bFixedBounds : 1; // Offset: 0x108 // Size: 0x01
	char bUseMinDetailLevel : 1; // Offset: 0x108 // Size: 0x01
	char bUseMaxDetailLevel : 1; // Offset: 0x108 // Size: 0x01
	char bRequiresPersistentIDs : 1; // Offset: 0x108 // Size: 0x01
	char pad_0x108_5 : 3; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x3]; // Offset: 0x109 // Size: 0x03
	float MaxDeltaTimePerTick; // Offset: 0x10c // Size: 0x04
	char bLimitDeltaTime : 1; // Offset: 0x110 // Size: 0x01
	char pad_0x110_1 : 7; // Offset: 0x110 // Size: 0x01
	char pad_0x111[0x7]; // Offset: 0x111 // Size: 0x07
	StrProperty UniqueEmitterName; // Offset: 0x118 // Size: 0x10
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // Offset: 0x128 // Size: 0x10
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // Offset: 0x138 // Size: 0x10
	struct UNiagaraScript* GPUComputeScript; // Offset: 0x148 // Size: 0x08
	struct TArray<struct FName> SharedEventGeneratorIds; // Offset: 0x150 // Size: 0x10
	struct UNiagaraEmitter* Parent; // Offset: 0x160 // Size: 0x08
	struct UNiagaraEmitter* ParentAtLastMerge; // Offset: 0x168 // Size: 0x08
};

// Object Name: Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 // Inherited bytes: 0x28
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Object Name: Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 // Inherited bytes: 0x28
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	// Fields
	uint32_t NumParticles; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy); // Offset: 0x1020f28d8 // Return & Params: Num(8) Size(0x40)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, bool bAutoDestroy); // Offset: 0x1020f2764 // Return & Params: Num(6) Size(0x38)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, StrProperty OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Offset: 0x1020f2658 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, StrProperty OverrideName, struct UStaticMesh* StaticMesh); // Offset: 0x1020f254c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, StrProperty OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Offset: 0x1020f2440 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.IsAllowNiagaraGPUParticles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsAllowNiagaraGPUParticles(struct UObject* WorldContextObject); // Offset: 0x1020f23c4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.GetReadbackParticleCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetReadbackParticleCount(); // Offset: 0x1020f2390 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Offset: 0x1020f22dc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.GetGPUReadbackDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetGPUReadbackDelay(); // Offset: 0x1020f22a8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.GetGPUParticleCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetGPUParticleCount(); // Offset: 0x1020f2274 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.GetDeadParticleCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetDeadParticleCount(); // Offset: 0x1020f2240 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraFunctionLibrary.GetCPUParticleCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetCPUParticleCount(); // Offset: 0x1020f220c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Niagara.NiagaraLightRendererProperties
// Size: 0x3a0 // Inherited bytes: 0x30
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	// Fields
	char bUseInverseSquaredFalloff : 1; // Offset: 0x2d // Size: 0x01
	char bAffectsTranslucency : 1; // Offset: 0x2d // Size: 0x01
	char bOverrideRenderingEnabled : 1; // Offset: 0x2d // Size: 0x01
	float RadiusScale; // Offset: 0x30 // Size: 0x04
	struct FVector ColorAdd; // Offset: 0x34 // Size: 0x0c
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // Offset: 0x40 // Size: 0x90
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // Offset: 0xd0 // Size: 0x90
	struct FNiagaraVariableAttributeBinding PositionBinding; // Offset: 0x160 // Size: 0x90
	struct FNiagaraVariableAttributeBinding ColorBinding; // Offset: 0x1f0 // Size: 0x90
	struct FNiagaraVariableAttributeBinding RadiusBinding; // Offset: 0x280 // Size: 0x90
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // Offset: 0x310 // Size: 0x90
};

// Object Name: Class Niagara.NiagaraMeshRendererProperties
// Size: 0x718 // Inherited bytes: 0x30
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	// Fields
	struct UStaticMesh* ParticleMesh; // Offset: 0x30 // Size: 0x08
	enum class ENiagaraSortMode SortMode; // Offset: 0x38 // Size: 0x01
	char bOverrideMaterials : 1; // Offset: 0x39 // Size: 0x01
	char bSortOnlyWhenTranslucent : 1; // Offset: 0x39 // Size: 0x01
	char pad_0x39_2 : 6; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x6]; // Offset: 0x3a // Size: 0x06
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // Offset: 0x40 // Size: 0x10
	enum class ENiagaraMeshFacingMode FacingMode; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct FNiagaraVariableAttributeBinding PositionBinding; // Offset: 0x58 // Size: 0x90
	struct FNiagaraVariableAttributeBinding ColorBinding; // Offset: 0xe8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding VelocityBinding; // Offset: 0x178 // Size: 0x90
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // Offset: 0x208 // Size: 0x90
	struct FNiagaraVariableAttributeBinding ScaleBinding; // Offset: 0x298 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // Offset: 0x328 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // Offset: 0x3b8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // Offset: 0x448 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // Offset: 0x4d8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // Offset: 0x568 // Size: 0x90
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // Offset: 0x5f8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // Offset: 0x688 // Size: 0x90
};

// Object Name: Class Niagara.NiagaraParameterCollectionInstance
// Size: 0x128 // Inherited bytes: 0x28
struct UNiagaraParameterCollectionInstance : UObject {
	// Fields
	struct UNiagaraParameterCollection* Collection; // Offset: 0x28 // Size: 0x08
	struct TArray<struct FNiagaraVariable> OverridenParameters; // Offset: 0x30 // Size: 0x10
	struct FNiagaraParameterStore ParameterStorage; // Offset: 0x40 // Size: 0xe8

	// Functions

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetVectorParameter(StrProperty InVariableName, struct FVector InValue); // Offset: 0x1020f3e54 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetVector4Parameter(StrProperty InVariableName, struct FVector4& InValue); // Offset: 0x1020f3d64 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetVector2DParameter(StrProperty InVariableName, struct FVector2D InValue); // Offset: 0x1020f3c90 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetQuatParameter(StrProperty InVariableName, struct FQuat& InValue); // Offset: 0x1020f3bac // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIntParameter(StrProperty InVariableName, IntProperty InValue); // Offset: 0x1020f3ad4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFloatParameter(StrProperty InVariableName, float InValue); // Offset: 0x1020f39fc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetColorParameter(StrProperty InVariableName, struct FLinearColor InValue); // Offset: 0x1020f3924 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBoolParameter(StrProperty InVariableName, bool InValue); // Offset: 0x1020f3844 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector GetVectorParameter(StrProperty InVariableName); // Offset: 0x1020f3794 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector4 GetVector4Parameter(StrProperty InVariableName); // Offset: 0x1020f36e4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D GetVector2DParameter(StrProperty InVariableName); // Offset: 0x1020f3638 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FQuat GetQuatParameter(StrProperty InVariableName); // Offset: 0x1020f3584 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetIntParameter(StrProperty InVariableName); // Offset: 0x1020f34dc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetFloatParameter(StrProperty InVariableName); // Offset: 0x1020f3434 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FLinearColor GetColorParameter(StrProperty InVariableName); // Offset: 0x1020f3384 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetBoolParameter(StrProperty InVariableName); // Offset: 0x1020f32dc // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Niagara.NiagaraParameterCollection
// Size: 0x58 // Inherited bytes: 0x28
struct UNiagaraParameterCollection : UObject {
	// Fields
	struct FName Namespace; // Offset: 0x28 // Size: 0x08
	struct TArray<struct FNiagaraVariable> Parameters; // Offset: 0x30 // Size: 0x10
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // Offset: 0x40 // Size: 0x08
	struct FGuid CompileId; // Offset: 0x48 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraPreviewBase
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct ANiagaraPreviewBase : AActor {
	// Functions

	// Object Name: Function Niagara.NiagaraPreviewBase.SetSystem
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SetSystem(struct UNiagaraSystem* InSystem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Niagara.NiagaraPreviewBase.SetLabelText
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)
};

// Object Name: Class Niagara.NiagaraPreviewAxis
// Size: 0x28 // Inherited bytes: 0x28
struct UNiagaraPreviewAxis : UObject {
	// Functions

	// Object Name: Function Niagara.NiagaraPreviewAxis.Num
	// Flags: [Native|Event|Public|BlueprintEvent]
	IntProperty Num(); // Offset: 0x1020f4c7c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Niagara.NiagaraPreviewAxis.ApplyToPreview
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, IntProperty PreviewIndex, bool bIsXAxis, StrProperty& OutLabelText); // Offset: 0x1020f4b08 // Return & Params: Num(4) Size(0x20)
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x40 // Inherited bytes: 0x28
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	// Fields
	StrProperty Param; // Offset: 0x28 // Size: 0x10
	IntProperty Count; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x48 // Inherited bytes: 0x40
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	// Fields
	IntProperty Min; // Offset: 0x3c // Size: 0x04
	IntProperty Max; // Offset: 0x40 // Size: 0x04
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x48 // Inherited bytes: 0x40
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	// Fields
	float Min; // Offset: 0x3c // Size: 0x04
	float Max; // Offset: 0x40 // Size: 0x04
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x50 // Inherited bytes: 0x40
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	// Fields
	struct FVector2D Min; // Offset: 0x3c // Size: 0x08
	struct FVector2D Max; // Offset: 0x44 // Size: 0x08
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x58 // Inherited bytes: 0x40
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	// Fields
	struct FVector Min; // Offset: 0x3c // Size: 0x0c
	struct FVector Max; // Offset: 0x48 // Size: 0x0c
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 // Inherited bytes: 0x40
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	// Fields
	struct FVector4 Min; // Offset: 0x40 // Size: 0x10
	struct FVector4 Max; // Offset: 0x50 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x60 // Inherited bytes: 0x40
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	// Fields
	struct FLinearColor Min; // Offset: 0x3c // Size: 0x10
	struct FLinearColor Max; // Offset: 0x4c // Size: 0x10
};

// Object Name: Class Niagara.NiagaraPreviewGrid
// Size: 0x500 // Inherited bytes: 0x4b0
struct ANiagaraPreviewGrid : AActor {
	// Fields
	struct UNiagaraSystem* System; // Offset: 0x4b0 // Size: 0x08
	enum class ENiagaraPreviewGridResetMode ResetMode; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B9[0x7]; // Offset: 0x4b9 // Size: 0x07
	struct UNiagaraPreviewAxis* PreviewAxisX; // Offset: 0x4c0 // Size: 0x08
	struct UNiagaraPreviewAxis* PreviewAxisY; // Offset: 0x4c8 // Size: 0x08
	struct ANiagaraPreviewBase* PreviewClass; // Offset: 0x4d0 // Size: 0x08
	float SpacingX; // Offset: 0x4d8 // Size: 0x04
	float SpacingY; // Offset: 0x4dc // Size: 0x04
	IntProperty NumX; // Offset: 0x4e0 // Size: 0x04
	IntProperty NumY; // Offset: 0x4e4 // Size: 0x04
	struct TArray<struct UChildActorComponent*> PreviewComponents; // Offset: 0x4e8 // Size: 0x10
	char pad_0x4F8[0x8]; // Offset: 0x4f8 // Size: 0x08

	// Functions

	// Object Name: Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeactivatePreviews(); // Offset: 0x1020f55f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Niagara.NiagaraPreviewGrid.ActivatePreviews
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ActivatePreviews(bool bReset); // Offset: 0x1020f556c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x868 // Inherited bytes: 0x30
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x30 // Size: 0x08
	enum class ENiagaraRibbonFacingMode FacingMode; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float UV0TilingDistance; // Offset: 0x3c // Size: 0x04
	struct FVector2D UV0Scale; // Offset: 0x40 // Size: 0x08
	struct FVector2D UV0Offset; // Offset: 0x48 // Size: 0x08
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	float UV1TilingDistance; // Offset: 0x54 // Size: 0x04
	struct FVector2D UV1Scale; // Offset: 0x58 // Size: 0x08
	struct FVector2D UV1Offset; // Offset: 0x60 // Size: 0x08
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // Offset: 0x68 // Size: 0x01
	enum class ENiagaraRibbonDrawDirection DrawDirection; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x2]; // Offset: 0x6a // Size: 0x02
	float CurveTension; // Offset: 0x6c // Size: 0x04
	enum class ENiagaraRibbonTessellationMode TessellationMode; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	IntProperty TessellationFactor; // Offset: 0x74 // Size: 0x04
	bool bUseConstantFactor; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	float TessellationAngle; // Offset: 0x7c // Size: 0x04
	bool bScreenSpaceTessellation; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
	struct FNiagaraVariableAttributeBinding PositionBinding; // Offset: 0x88 // Size: 0x90
	struct FNiagaraVariableAttributeBinding ColorBinding; // Offset: 0x118 // Size: 0x90
	struct FNiagaraVariableAttributeBinding VelocityBinding; // Offset: 0x1a8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // Offset: 0x238 // Size: 0x90
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // Offset: 0x2c8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // Offset: 0x358 // Size: 0x90
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // Offset: 0x3e8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // Offset: 0x478 // Size: 0x90
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // Offset: 0x508 // Size: 0x90
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // Offset: 0x598 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // Offset: 0x628 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // Offset: 0x6b8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // Offset: 0x748 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // Offset: 0x7d8 // Size: 0x90
};

// Object Name: Class Niagara.NiagaraScript
// Size: 0x680 // Inherited bytes: 0x28
struct UNiagaraScript : UObject {
	// Fields
	enum class ENiagaraScriptUsage Usage; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty UsageIndex; // Offset: 0x2c // Size: 0x04
	struct FGuid UsageId; // Offset: 0x30 // Size: 0x10
	struct FNiagaraParameterStore RapidIterationParameters; // Offset: 0x40 // Size: 0xe8
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStoreCPU; // Offset: 0x128 // Size: 0x108
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStoreGPU; // Offset: 0x230 // Size: 0x108
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // Offset: 0x338 // Size: 0x50
	struct FNiagaraVMExecutableDataId LastGeneratedVMId; // Offset: 0x388 // Size: 0x50
	char pad_0x3D8[0x180]; // Offset: 0x3d8 // Size: 0x180
	struct FNiagaraVMExecutableData CachedScriptVM; // Offset: 0x558 // Size: 0x108
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // Offset: 0x660 // Size: 0x10
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // Offset: 0x670 // Size: 0x10

	// Functions

	// Object Name: Function Niagara.NiagaraScript.OnCompilationComplete
	// Flags: [Final|Native|Public]
	void OnCompilationComplete(); // Offset: 0x1020f5fa8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 // Inherited bytes: 0x28
struct UNiagaraScriptSourceBase : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
};

// Object Name: Class Niagara.NiagaraSettings
// Size: 0x68 // Inherited bytes: 0x38
struct UNiagaraSettings : UDeveloperSettings {
	// Fields
	struct TArray<struct FSoftObjectPath> AdditionalParameterTypes; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FSoftObjectPath> AdditionalPayloadTypes; // Offset: 0x48 // Size: 0x10
	struct TArray<struct FSoftObjectPath> AdditionalParameterEnums; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraSpriteRendererProperties
// Size: 0xa08 // Inherited bytes: 0x30
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x30 // Size: 0x08
	enum class ENiagaraSpriteAlignment Alignment; // Offset: 0x38 // Size: 0x01
	enum class ENiagaraSpriteFacingMode FacingMode; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	struct FVector CustomFacingVectorMask; // Offset: 0x3c // Size: 0x0c
	struct FVector2D PivotInUVSpace; // Offset: 0x48 // Size: 0x08
	enum class ENiagaraSortMode SortMode; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	struct FVector2D SubImageSize; // Offset: 0x54 // Size: 0x08
	char bSubImageBlend : 1; // Offset: 0x5c // Size: 0x01
	char bRemoveHMDRollInVR : 1; // Offset: 0x5c // Size: 0x01
	char bSortOnlyWhenTranslucent : 1; // Offset: 0x5c // Size: 0x01
	char pad_0x5C_3 : 5; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
	float MinFacingCameraBlendDistance; // Offset: 0x60 // Size: 0x04
	float MaxFacingCameraBlendDistance; // Offset: 0x64 // Size: 0x04
	struct FNiagaraVariableAttributeBinding PositionBinding; // Offset: 0x68 // Size: 0x90
	struct FNiagaraVariableAttributeBinding ColorBinding; // Offset: 0xf8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding VelocityBinding; // Offset: 0x188 // Size: 0x90
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // Offset: 0x218 // Size: 0x90
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // Offset: 0x2a8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // Offset: 0x338 // Size: 0x90
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // Offset: 0x3c8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // Offset: 0x458 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // Offset: 0x4e8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // Offset: 0x578 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // Offset: 0x608 // Size: 0x90
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // Offset: 0x698 // Size: 0x90
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // Offset: 0x728 // Size: 0x90
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // Offset: 0x7b8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // Offset: 0x848 // Size: 0x90
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // Offset: 0x8d8 // Size: 0x90
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // Offset: 0x968 // Size: 0x90
	char pad_0x9F8[0x10]; // Offset: 0x9f8 // Size: 0x10
};

// Object Name: Class Niagara.NiagaraSystem
// Size: 0x1e8 // Inherited bytes: 0x28
struct UNiagaraSystem : UFXSystemAsset {
	// Fields
	bool bDumpDebugSystemInfo; // Offset: 0x28 // Size: 0x01
	bool bDumpDebugEmitterInfo; // Offset: 0x29 // Size: 0x01
	char bFixedBounds : 1; // Offset: 0x2a // Size: 0x01
	char pad_0x2A_1 : 7; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // Offset: 0x30 // Size: 0x10
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // Offset: 0x40 // Size: 0x10
	struct UNiagaraScript* SystemSpawnScript; // Offset: 0x50 // Size: 0x08
	struct UNiagaraScript* SystemUpdateScript; // Offset: 0x58 // Size: 0x08
	struct TArray<struct FNiagaraEmitterSpawnAttributes> EmitterSpawnAttributes; // Offset: 0x60 // Size: 0x10
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // Offset: 0x70 // Size: 0x138
	struct FBox FixedBounds; // Offset: 0x1a8 // Size: 0x1c
	bool bAutoDeactivate; // Offset: 0x1c4 // Size: 0x01
	char pad_0x1C5[0x3]; // Offset: 0x1c5 // Size: 0x03
	float WarmupTime; // Offset: 0x1c8 // Size: 0x04
	IntProperty WarmupTickCount; // Offset: 0x1cc // Size: 0x04
	float WarmupTickDelta; // Offset: 0x1d0 // Size: 0x04
	bool bHasSystemScriptDIsWithPerInstanceData; // Offset: 0x1d4 // Size: 0x01
	char pad_0x1D5[0x3]; // Offset: 0x1d5 // Size: 0x03
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // Offset: 0x1d8 // Size: 0x10
};

