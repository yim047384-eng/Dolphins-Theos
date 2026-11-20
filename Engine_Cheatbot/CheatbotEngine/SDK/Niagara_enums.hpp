#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8 {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Object Name: Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8 {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Object Name: Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8 {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleGPUComputeScript = 7,
	EmitterSpawnScript = 8,
	EmitterUpdateScript = 9,
	SystemSpawnScript = 10,
	SystemUpdateScript = 11,
	ENiagaraScriptUsage_MAX = 12
};

// Object Name: Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8 {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Object Name: Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8 {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Object Name: Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8 {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Object Name: Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8 {
	TickDeltaTime = 0,
	DesiredAge = 1,
	ENiagaraAgeUpdateMode_MAX = 2
};

// Object Name: Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8 {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Object Name: Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8 {
	None = 0,
	SkinOnTheFly = 1,
	PreSkin = 2,
	ENDISkeletalMesh_MAX = 3
};

// Object Name: Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8 {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Object Name: Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8 {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Object Name: Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8 {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Object Name: Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8 {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Object Name: Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8 {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Object Name: Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8 {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Object Name: Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8 {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Object Name: Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8 {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Object Name: Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8 {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Object Name: Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8 {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Object Name: Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8 {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Object Name: Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8 {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5
};

// Object Name: Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8 {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3
};

// Object Name: Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8 {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Object Name: Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8 {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Object Name: Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

