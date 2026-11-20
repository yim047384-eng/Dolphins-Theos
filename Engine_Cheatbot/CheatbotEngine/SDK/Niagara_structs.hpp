#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x48 // Inherited bytes: 0x18
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	// Fields
	struct FNiagaraVariable Parameter; // Offset: 0x18 // Size: 0x30
};

// Object Name: ScriptStruct Niagara.NiagaraVariable
// Size: 0x30 // Inherited bytes: 0x00
struct FNiagaraVariable {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FNiagaraTypeDefinition TypeDef; // Offset: 0x08 // Size: 0x18
	struct TArray<char> VarData; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraTypeDefinition
// Size: 0x18 // Inherited bytes: 0x00
struct FNiagaraTypeDefinition {
	// Fields
	struct UStruct* Struct; // Offset: 0x00 // Size: 0x08
	struct UEnum* Enum; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0xb8 // Inherited bytes: 0x48
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	// Fields
	struct FIntegralCurve BoolCurve; // Offset: 0x48 // Size: 0x70
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x208 // Inherited bytes: 0x48
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	// Fields
	struct FRichCurve RedChannel; // Offset: 0x48 // Size: 0x70
	struct FRichCurve GreenChannel; // Offset: 0xb8 // Size: 0x70
	struct FRichCurve BlueChannel; // Offset: 0x128 // Size: 0x70
	struct FRichCurve AlphaChannel; // Offset: 0x198 // Size: 0x70
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0xb8 // Inherited bytes: 0x48
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	// Fields
	struct FRichCurve FloatChannel; // Offset: 0x48 // Size: 0x70
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0xb8 // Inherited bytes: 0x48
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	// Fields
	struct FIntegralCurve IntegerChannel; // Offset: 0x48 // Size: 0x70
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x18 // Inherited bytes: 0x10
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	// Fields
	float SpawnSectionStartFrame; // Offset: 0x0c // Size: 0x04
	float SpawnSectionEndFrame; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x18 // Inherited bytes: 0x18
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate {
};

// Object Name: ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x210 // Inherited bytes: 0x48
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	// Fields
	struct FRichCurve VectorChannels[0x4]; // Offset: 0x48 // Size: 0x1c0
	IntProperty ChannelsUsed; // Offset: 0x208 // Size: 0x04
	char pad_0x20C[0x4]; // Offset: 0x20c // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size: 0x30 // Inherited bytes: 0x00
struct FNiagaraVariableDataInterfaceBinding {
	// Fields
	struct FNiagaraVariable BoundVariable; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size: 0x90 // Inherited bytes: 0x00
struct FNiagaraVariableAttributeBinding {
	// Fields
	struct FNiagaraVariable BoundVariable; // Offset: 0x00 // Size: 0x30
	struct FNiagaraVariable DataSetVariable; // Offset: 0x30 // Size: 0x30
	struct FNiagaraVariable DefaultValueIfNonExistent; // Offset: 0x60 // Size: 0x30
};

// Object Name: ScriptStruct Niagara.NiagaraVariableInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FNiagaraVariableInfo {
	// Fields
	struct FNiagaraVariable Variable; // Offset: 0x00 // Size: 0x30
	struct FText Definition; // Offset: 0x30 // Size: 0x18
	struct UNiagaraDataInterface* DataInterface; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size: 0x78 // Inherited bytes: 0x00
struct FVMExternalFunctionBindingInfo {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FName OwnerName; // Offset: 0x08 // Size: 0x08
	struct TArray<bool> InputParamLocations; // Offset: 0x10 // Size: 0x10
	IntProperty NumOutputs; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	MapProperty Specifiers; // Offset: 0x28 // Size: 0x50
};

// Object Name: ScriptStruct Niagara.NiagaraStatScope
// Size: 0x10 // Inherited bytes: 0x00
struct FNiagaraStatScope {
	// Fields
	struct FName FullName; // Offset: 0x00 // Size: 0x08
	struct FName FriendlyName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FNiagaraScriptDataInterfaceCompileInfo {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	IntProperty UserPtrIdx; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FNiagaraTypeDefinition Type; // Offset: 0x10 // Size: 0x18
	struct TArray<struct FNiagaraFunctionSignature> RegisteredFunctions; // Offset: 0x28 // Size: 0x10
	struct FName RegisteredParameterMapRead; // Offset: 0x38 // Size: 0x08
	struct FName RegisteredParameterMapWrite; // Offset: 0x40 // Size: 0x08
	bool bIsPlaceholder; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct Niagara.NiagaraFunctionSignature
// Size: 0x88 // Inherited bytes: 0x00
struct FNiagaraFunctionSignature {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FNiagaraVariable> Inputs; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FNiagaraVariable> Outputs; // Offset: 0x18 // Size: 0x10
	struct FName OwnerName; // Offset: 0x28 // Size: 0x08
	bool bRequiresContext; // Offset: 0x30 // Size: 0x01
	bool bMemberFunction; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
	MapProperty FunctionSpecifiers; // Offset: 0x38 // Size: 0x50
};

// Object Name: ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FNiagaraScriptDataInterfaceInfo {
	// Fields
	struct UNiagaraDataInterface* DataInterface; // Offset: 0x00 // Size: 0x08
	struct FName Name; // Offset: 0x08 // Size: 0x08
	IntProperty UserPtrIdx; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FNiagaraTypeDefinition Type; // Offset: 0x18 // Size: 0x18
	struct FName RegisteredParameterMapRead; // Offset: 0x30 // Size: 0x08
	struct FName RegisteredParameterMapWrite; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size: 0x01 // Inherited bytes: 0x00
struct FNiagaraScriptDataUsageInfo {
	// Fields
	bool bReadsAttributeData; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Niagara.NiagaraDataSetProperties
// Size: 0x20 // Inherited bytes: 0x00
struct FNiagaraDataSetProperties {
	// Fields
	struct FNiagaraDataSetID ID; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FNiagaraVariable> Variables; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraDataSetID
// Size: 0x10 // Inherited bytes: 0x00
struct FNiagaraDataSetID {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	enum class ENiagaraDataSetType Type; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Niagara.MeshTriCoordinate
// Size: 0x10 // Inherited bytes: 0x00
struct FMeshTriCoordinate {
	// Fields
	IntProperty Tri; // Offset: 0x00 // Size: 0x04
	struct FVector BaryCoord; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size: 0x10 // Inherited bytes: 0x00
struct FNDIStaticMeshSectionFilter {
	// Fields
	struct TArray<IntProperty> AllowedMaterialSlots; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size: 0x28 // Inherited bytes: 0x00
struct FNiagaraEmitterScriptProperties {
	// Fields
	struct UNiagaraScript* Script; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size: 0x30 // Inherited bytes: 0x00
struct FNiagaraEventGeneratorProperties {
	// Fields
	IntProperty MaxEventsPerFrame; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName ID; // Offset: 0x08 // Size: 0x08
	struct FNiagaraDataSetProperties SetProps; // Offset: 0x10 // Size: 0x20
};

// Object Name: ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size: 0x18 // Inherited bytes: 0x00
struct FNiagaraEventReceiverProperties {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FName SourceEventGenerator; // Offset: 0x08 // Size: 0x08
	struct FName SourceEmitter; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x58 // Inherited bytes: 0x28
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	// Fields
	enum class EScriptExecutionMode ExecutionMode; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	uint32_t SpawnNumber; // Offset: 0x2c // Size: 0x04
	uint32_t MaxEventsPerFrame; // Offset: 0x30 // Size: 0x04
	struct FGuid SourceEmitterID; // Offset: 0x34 // Size: 0x10
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct FName SourceEventName; // Offset: 0x48 // Size: 0x08
	bool bRandomSpawnNumber; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	uint32_t MinSpawnNumber; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraEmitterHandle
// Size: 0x30 // Inherited bytes: 0x00
struct FNiagaraEmitterHandle {
	// Fields
	struct FGuid ID; // Offset: 0x00 // Size: 0x10
	struct FName IdName; // Offset: 0x10 // Size: 0x08
	bool bIsEnabled; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct FName Name; // Offset: 0x20 // Size: 0x08
	struct UNiagaraEmitter* Instance; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size: 0x2c // Inherited bytes: 0x00
struct FNiagaraCollisionEventPayload {
	// Fields
	struct FVector CollisionPos; // Offset: 0x00 // Size: 0x0c
	struct FVector CollisionNormal; // Offset: 0x0c // Size: 0x0c
	struct FVector CollisionVelocity; // Offset: 0x18 // Size: 0x0c
	IntProperty ParticleIndex; // Offset: 0x24 // Size: 0x04
	IntProperty PhysicalMaterialIndex; // Offset: 0x28 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraParameters
// Size: 0x10 // Inherited bytes: 0x00
struct FNiagaraParameters {
	// Fields
	struct TArray<struct FNiagaraVariable> Parameters; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraParameterStore
// Size: 0xe8 // Inherited bytes: 0x00
struct FNiagaraParameterStore {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Owner; // Offset: 0x08 // Size: 0x08
	MapProperty ParameterOffsets; // Offset: 0x10 // Size: 0x50
	struct TArray<char> ParameterData; // Offset: 0x60 // Size: 0x10
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; // Offset: 0x70 // Size: 0x10
	char pad_0x80[0x68]; // Offset: 0x80 // Size: 0x68
};

// Object Name: ScriptStruct Niagara.NiagaraVMExecutableData
// Size: 0x108 // Inherited bytes: 0x00
struct FNiagaraVMExecutableData {
	// Fields
	struct TArray<char> ByteCode; // Offset: 0x00 // Size: 0x10
	IntProperty NumUserPtrs; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FNiagaraParameters Parameters; // Offset: 0x18 // Size: 0x10
	struct FNiagaraParameters InternalParameters; // Offset: 0x28 // Size: 0x10
	MapProperty DataSetToParameters; // Offset: 0x38 // Size: 0x50
	struct TArray<struct FNiagaraVariable> Attributes; // Offset: 0x88 // Size: 0x10
	struct FNiagaraScriptDataUsageInfo DataUsage; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // Offset: 0xa0 // Size: 0x10
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // Offset: 0xb0 // Size: 0x10
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // Offset: 0xc0 // Size: 0x10
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // Offset: 0xd0 // Size: 0x10
	struct TArray<struct FNiagaraStatScope> StatScopes; // Offset: 0xe0 // Size: 0x10
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // Offset: 0xf0 // Size: 0x10
	enum class ENiagaraScriptCompileStatus LastCompileStatus; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x7]; // Offset: 0x101 // Size: 0x07
};

// Object Name: ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size: 0x50 // Inherited bytes: 0x00
struct FNiagaraVMExecutableDataId {
	// Fields
	struct FGuid CompilerVersionID; // Offset: 0x00 // Size: 0x10
	enum class ENiagaraScriptUsage ScriptUsageType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FGuid ScriptUsageTypeID; // Offset: 0x14 // Size: 0x10
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<StrProperty> AdditionalDefines; // Offset: 0x28 // Size: 0x10
	struct FGuid BaseScriptID; // Offset: 0x38 // Size: 0x10
	bool bIsScriptOptimized; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct Niagara.NiagaraModuleDependency
// Size: 0x28 // Inherited bytes: 0x00
struct FNiagaraModuleDependency {
	// Fields
	struct FName ID; // Offset: 0x00 // Size: 0x08
	enum class ENiagaraModuleDependencyType Type; // Offset: 0x08 // Size: 0x01
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct FText Description; // Offset: 0x10 // Size: 0x18
};

// Object Name: ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0x108 // Inherited bytes: 0xe8
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	// Fields
	IntProperty ParameterSize; // Offset: 0xe8 // Size: 0x04
	uint32_t PaddedParameterSize; // Offset: 0xec // Size: 0x04
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // Offset: 0xf0 // Size: 0x10
	char bInitialized : 1; // Offset: 0x100 // Size: 0x01
	char pad_0x100_1 : 7; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x7]; // Offset: 0x101 // Size: 0x07
};

// Object Name: ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FNiagaraScriptExecutionPaddingInfo {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size: 0x78 // Inherited bytes: 0x00
struct FNiagaraSystemCompileRequest {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UObject*> RootObjects; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x60]; // Offset: 0x18 // Size: 0x60
};

// Object Name: ScriptStruct Niagara.EmitterCompiledScriptPair
// Size: 0x80 // Inherited bytes: 0x00
struct FEmitterCompiledScriptPair {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct Niagara.NiagaraEmitterSpawnAttributes
// Size: 0x10 // Inherited bytes: 0x00
struct FNiagaraEmitterSpawnAttributes {
	// Fields
	struct TArray<struct FName> SpawnAttributes; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraVariableMetaData
// Size: 0xc8 // Inherited bytes: 0x00
struct FNiagaraVariableMetaData {
	// Fields
	struct FText Description; // Offset: 0x00 // Size: 0x18
	struct FText CategoryName; // Offset: 0x18 // Size: 0x18
	bool bAdvancedDisplay; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	IntProperty EditorSortPriority; // Offset: 0x34 // Size: 0x04
	bool bInlineEditConditionToggle; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	struct FNiagaraInputConditionMetadata EditCondition; // Offset: 0x40 // Size: 0x18
	struct FNiagaraInputConditionMetadata VisibleCondition; // Offset: 0x58 // Size: 0x18
	MapProperty PropertyMetaData; // Offset: 0x70 // Size: 0x50
	bool bIsStaticSwitch; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x3]; // Offset: 0xc1 // Size: 0x03
	IntProperty StaticSwitchDefaultValue; // Offset: 0xc4 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size: 0x18 // Inherited bytes: 0x00
struct FNiagaraInputConditionMetadata {
	// Fields
	struct FName InputName; // Offset: 0x00 // Size: 0x08
	struct TArray<StrProperty> TargetValues; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraID
// Size: 0x08 // Inherited bytes: 0x00
struct FNiagaraID {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	IntProperty AcquireTag; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraSpawnInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FNiagaraSpawnInfo {
	// Fields
	IntProperty Count; // Offset: 0x00 // Size: 0x04
	float LOD1Scale; // Offset: 0x04 // Size: 0x04
	float LOD2Scale; // Offset: 0x08 // Size: 0x04
	float InterpStartDt; // Offset: 0x0c // Size: 0x04
	float IntervalDt; // Offset: 0x10 // Size: 0x04
	IntProperty SpawnGroup; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 // Inherited bytes: 0x00
struct FNiagaraMatrix {
	// Fields
	struct FVector4 Row0; // Offset: 0x00 // Size: 0x10
	struct FVector4 Row1; // Offset: 0x10 // Size: 0x10
	struct FVector4 Row2; // Offset: 0x20 // Size: 0x10
	struct FVector4 Row3; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Niagara.NiagaraTestStruct
// Size: 0x48 // Inherited bytes: 0x00
struct FNiagaraTestStruct {
	// Fields
	struct FVector Vector1; // Offset: 0x00 // Size: 0x0c
	struct FVector Vector2; // Offset: 0x0c // Size: 0x0c
	struct FNiagaraTestStructInner InnerStruct1; // Offset: 0x18 // Size: 0x18
	struct FNiagaraTestStructInner InnerStruct2; // Offset: 0x30 // Size: 0x18
};

// Object Name: ScriptStruct Niagara.NiagaraTestStructInner
// Size: 0x18 // Inherited bytes: 0x00
struct FNiagaraTestStructInner {
	// Fields
	struct FVector InnerVector1; // Offset: 0x00 // Size: 0x0c
	struct FVector InnerVector2; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Niagara.NiagaraParameterMap
// Size: 0x01 // Inherited bytes: 0x00
struct FNiagaraParameterMap {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Niagara.NiagaraNumeric
// Size: 0x01 // Inherited bytes: 0x00
struct FNiagaraNumeric {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Niagara.NiagaraBool
// Size: 0x04 // Inherited bytes: 0x00
struct FNiagaraBool {
	// Fields
	IntProperty Value; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraInt32
// Size: 0x04 // Inherited bytes: 0x00
struct FNiagaraInt32 {
	// Fields
	IntProperty Value; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraFloat
// Size: 0x04 // Inherited bytes: 0x00
struct FNiagaraFloat {
	// Fields
	float Value; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0x138 // Inherited bytes: 0xe8
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	// Fields
	MapProperty UserParameterRedirects; // Offset: 0xe8 // Size: 0x50
};

