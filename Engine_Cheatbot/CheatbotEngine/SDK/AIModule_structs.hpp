#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AIModule.AIRequestID
// Size: 0x04 // Inherited bytes: 0x00
struct FAIRequestID {
	// Fields
	uint32_t RequestID; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct AIModule.AIStimulus
// Size: 0x60 // Inherited bytes: 0x00
struct FAIStimulus {
	// Fields
	float Age; // Offset: 0x00 // Size: 0x04
	float ExpirationAge; // Offset: 0x04 // Size: 0x04
	float Strength; // Offset: 0x08 // Size: 0x04
	struct FVector StimulusLocation; // Offset: 0x0c // Size: 0x0c
	struct FVector ReceiverLocation; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FName Tag; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
	IntProperty iExtraData_1; // Offset: 0x40 // Size: 0x04
	IntProperty iExtraData_2; // Offset: 0x44 // Size: 0x04
	IntProperty iExtraData_3; // Offset: 0x48 // Size: 0x04
	float fExtraData_1; // Offset: 0x4c // Size: 0x04
	float fExtraData_2; // Offset: 0x50 // Size: 0x04
	float fExtraData_3; // Offset: 0x54 // Size: 0x04
	char pad_0x58_0 : 1; // Offset: 0x58 // Size: 0x01
	char bSuccessfullySensed : 1; // Offset: 0x58 // Size: 0x01
	char pad_0x58_2 : 6; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
};

// Object Name: ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 // Inherited bytes: 0x00
struct FBlackboardKeySelector {
	// Fields
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // Offset: 0x00 // Size: 0x10
	struct FName SelectedKeyName; // Offset: 0x10 // Size: 0x08
	struct UBlackboardKeyType* SelectedKeyType; // Offset: 0x18 // Size: 0x08
	char SelectedKeyID; // Offset: 0x20 // Size: 0x01
	char bNoneIsAllowedValue : 1; // Offset: 0x21 // Size: 0x01
	char pad_0x21_1 : 7; // Offset: 0x21 // Size: 0x01
	char pad_0x22[0x6]; // Offset: 0x22 // Size: 0x06
};

// Object Name: ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20 // Inherited bytes: 0x00
struct FAIDataProviderValue {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UProperty* CachedProperty; // Offset: 0x08 // Size: 0x08
	struct UAIDataProvider* DataBinding; // Offset: 0x10 // Size: 0x08
	struct FName DataField; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x28 // Inherited bytes: 0x20
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	// Fields
	struct UProperty* PropertyType; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 // Inherited bytes: 0x28
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	// Fields
	bool DefaultValue; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 // Inherited bytes: 0x28
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	// Fields
	float DefaultValue; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 // Inherited bytes: 0x28
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	// Fields
	IntProperty DefaultValue; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30 // Inherited bytes: 0x20
struct FAIDataProviderStructValue : FAIDataProviderValue {
	// Fields
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FActorPerceptionBlueprintInfo {
	// Fields
	struct AActor* Target; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FAIStimulus> LastSensedStimuli; // Offset: 0x08 // Size: 0x10
	char bIsHostile : 1; // Offset: 0x18 // Size: 0x01
	char pad_0x18_1 : 7; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x04 // Inherited bytes: 0x00
struct FAISenseAffiliationFilter {
	// Fields
	char bDetectEnemies : 1; // Offset: 0x00 // Size: 0x01
	char bDetectNeutrals : 1; // Offset: 0x00 // Size: 0x01
	char bDetectFriendlies : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 // Inherited bytes: 0x00
struct FAIDamageEvent {
	// Fields
	float Amount; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FVector HitLocation; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct AActor* DamagedActor; // Offset: 0x20 // Size: 0x08
	struct AActor* Instigator; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AINoiseEvent
// Size: 0x30 // Inherited bytes: 0x00
struct FAINoiseEvent {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	struct FVector NoiseLocation; // Offset: 0x04 // Size: 0x0c
	float Loudness; // Offset: 0x10 // Size: 0x04
	float MaxRange; // Offset: 0x14 // Size: 0x04
	struct AActor* Instigator; // Offset: 0x18 // Size: 0x08
	struct FName Tag; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 // Inherited bytes: 0x00
struct FAIPredictionEvent {
	// Fields
	struct AActor* Requestor; // Offset: 0x00 // Size: 0x08
	struct AActor* PredictedActor; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AISightEvent
// Size: 0x18 // Inherited bytes: 0x00
struct FAISightEvent {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct AActor* SeenActor; // Offset: 0x08 // Size: 0x08
	struct AActor* Observer; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 // Inherited bytes: 0x00
struct FAITeamStimulusEvent {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
	struct AActor* Broadcaster; // Offset: 0x28 // Size: 0x08
	struct AActor* Enemy; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AITouchEvent
// Size: 0x20 // Inherited bytes: 0x00
struct FAITouchEvent {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct AActor* TouchReceiver; // Offset: 0x10 // Size: 0x08
	struct AActor* OtherActor; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 // Inherited bytes: 0x00
struct FAIMoveRequest {
	// Fields
	struct AActor* GoalActor; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x38]; // Offset: 0x08 // Size: 0x38
};

// Object Name: ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FBehaviorTreeTemplateInfo {
	// Fields
	struct UBehaviorTree* Asset; // Offset: 0x00 // Size: 0x08
	struct UBTCompositeNode* Template; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 // Inherited bytes: 0x00
struct FBlackboardEntry {
	// Fields
	struct FName EntryName; // Offset: 0x00 // Size: 0x08
	struct UBlackboardKeyType* KeyType; // Offset: 0x08 // Size: 0x08
	char bInstanceSynced : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_1 : 7; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 // Inherited bytes: 0x00
struct FBTCompositeChild {
	// Fields
	struct UBTCompositeNode* ChildComposite; // Offset: 0x00 // Size: 0x08
	struct UBTTaskNode* ChildTask; // Offset: 0x08 // Size: 0x08
	struct TArray<struct UBTDecorator*> Decorators; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x04 // Inherited bytes: 0x00
struct FBTDecoratorLogic {
	// Fields
	enum class EBTDecoratorLogic Operation; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x1]; // Offset: 0x01 // Size: 0x01
	uint16_t Number; // Offset: 0x02 // Size: 0x02
};

// Object Name: ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 // Inherited bytes: 0x00
struct FCrowdAvoidanceSamplingPattern {
	// Fields
	struct TArray<float> Angles; // Offset: 0x00 // Size: 0x10
	struct TArray<float> Radii; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1c // Inherited bytes: 0x00
struct FCrowdAvoidanceConfig {
	// Fields
	float VelocityBias; // Offset: 0x00 // Size: 0x04
	float DesiredVelocityWeight; // Offset: 0x04 // Size: 0x04
	float CurrentVelocityWeight; // Offset: 0x08 // Size: 0x04
	float SideBiasWeight; // Offset: 0x0c // Size: 0x04
	float ImpactTimeWeight; // Offset: 0x10 // Size: 0x04
	float ImpactTimeRange; // Offset: 0x14 // Size: 0x04
	char CustomPatternIdx; // Offset: 0x18 // Size: 0x01
	char AdaptiveDivisions; // Offset: 0x19 // Size: 0x01
	char AdaptiveRings; // Offset: 0x1a // Size: 0x01
	char AdaptiveDepth; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x178 // Inherited bytes: 0x00
struct FEnvQueryInstanceCache {
	// Fields
	struct UEnvQuery* Template; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x170]; // Offset: 0x08 // Size: 0x170
};

// Object Name: ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68 // Inherited bytes: 0x00
struct FEnvQueryRequest {
	// Fields
	struct UEnvQuery* QueryTemplate; // Offset: 0x00 // Size: 0x08
	struct UObject* Owner; // Offset: 0x08 // Size: 0x08
	struct UWorld* World; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x50]; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48 // Inherited bytes: 0x00
struct FEQSParametrizedQueryExecutionRequest {
	// Fields
	struct UEnvQuery* QueryTemplate; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FAIDynamicParam> QueryConfig; // Offset: 0x08 // Size: 0x10
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // Offset: 0x18 // Size: 0x28
	enum class EEnvQueryRunMode RunMode; // Offset: 0x40 // Size: 0x01
	char bUseBBKeyForQueryTemplate : 1; // Offset: 0x41 // Size: 0x01
	char pad_0x41_1 : 7; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x6]; // Offset: 0x42 // Size: 0x06
};

// Object Name: ScriptStruct AIModule.AIDynamicParam
// Size: 0x38 // Inherited bytes: 0x00
struct FAIDynamicParam {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	enum class EAIParamType ParamType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float Value; // Offset: 0x0c // Size: 0x04
	struct FBlackboardKeySelector BBKey; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 // Inherited bytes: 0x00
struct FEnvQueryResult {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct UEnvQueryItemType* itemType; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x14]; // Offset: 0x18 // Size: 0x14
	IntProperty OptionIndex; // Offset: 0x2c // Size: 0x04
	IntProperty QueryID; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0xc]; // Offset: 0x34 // Size: 0x0c
};

// Object Name: ScriptStruct AIModule.EnvOverlapData
// Size: 0x1c // Inherited bytes: 0x00
struct FEnvOverlapData {
	// Fields
	float ExtentX; // Offset: 0x00 // Size: 0x04
	float ExtentY; // Offset: 0x04 // Size: 0x04
	float ExtentZ; // Offset: 0x08 // Size: 0x04
	struct FVector ShapeOffset; // Offset: 0x0c // Size: 0x0c
	enum class ECollisionChannel OverlapChannel; // Offset: 0x18 // Size: 0x01
	enum class EEnvOverlapShape OverlapShape; // Offset: 0x19 // Size: 0x01
	char bOnlyBlockingHits : 1; // Offset: 0x1a // Size: 0x01
	char bOverlapComplex : 1; // Offset: 0x1a // Size: 0x01
	char pad_0x1A_2 : 6; // Offset: 0x1a // Size: 0x01
	char pad_0x1B[0x1]; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct AIModule.EnvTraceData
// Size: 0x30 // Inherited bytes: 0x00
struct FEnvTraceData {
	// Fields
	IntProperty VersionNum; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UNavigationQueryFilter* NavigationFilter; // Offset: 0x08 // Size: 0x08
	float ProjectDown; // Offset: 0x10 // Size: 0x04
	float ProjectUp; // Offset: 0x14 // Size: 0x04
	float ExtentX; // Offset: 0x18 // Size: 0x04
	float ExtentY; // Offset: 0x1c // Size: 0x04
	float ExtentZ; // Offset: 0x20 // Size: 0x04
	float PostProjectionVerticalOffset; // Offset: 0x24 // Size: 0x04
	enum class ETraceTypeQuery TraceChannel; // Offset: 0x28 // Size: 0x01
	enum class ECollisionChannel SerializedChannel; // Offset: 0x29 // Size: 0x01
	enum class EEnvTraceShape TraceShape; // Offset: 0x2a // Size: 0x01
	enum class EEnvQueryTrace TraceMode; // Offset: 0x2b // Size: 0x01
	char bTraceComplex : 1; // Offset: 0x2c // Size: 0x01
	char bOnlyBlockingHits : 1; // Offset: 0x2c // Size: 0x01
	char bCanTraceOnNavMesh : 1; // Offset: 0x2c // Size: 0x01
	char bCanTraceOnGeometry : 1; // Offset: 0x2c // Size: 0x01
	char bCanDisableTrace : 1; // Offset: 0x2c // Size: 0x01
	char bCanProjectDown : 1; // Offset: 0x2c // Size: 0x01
	char pad_0x2C_6 : 2; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct AIModule.EnvDirection
// Size: 0x20 // Inherited bytes: 0x00
struct FEnvDirection {
	// Fields
	struct UEnvQueryContext* LineFrom; // Offset: 0x00 // Size: 0x08
	struct UEnvQueryContext* LineTo; // Offset: 0x08 // Size: 0x08
	struct UEnvQueryContext* Rotation; // Offset: 0x10 // Size: 0x08
	enum class EEnvDirection DirMode; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 // Inherited bytes: 0x00
struct FEnvNamedValue {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	enum class EAIParamType ParamType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float Value; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct AIModule.GenericTeamId
// Size: 0x01 // Inherited bytes: 0x00
struct FGenericTeamId {
	// Fields
	char TeamID; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct AIModule.PawnActionStack
// Size: 0x08 // Inherited bytes: 0x00
struct FPawnActionStack {
	// Fields
	struct UPawnAction* TopAction; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 // Inherited bytes: 0x00
struct FPawnActionEvent {
	// Fields
	struct UPawnAction* Action; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

