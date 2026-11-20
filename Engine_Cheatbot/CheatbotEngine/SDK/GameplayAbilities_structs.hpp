#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x358 // Inherited bytes: 0x0c
struct FActiveGameplayEffect : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0xc]; // Offset: 0x0c // Size: 0x0c
	struct FGameplayEffectSpec Spec; // Offset: 0x18 // Size: 0x298
	struct FPredictionKey PredictionKey; // Offset: 0x2b0 // Size: 0x18
	float StartServerWorldTime; // Offset: 0x2c8 // Size: 0x04
	float CachedStartServerWorldTime; // Offset: 0x2cc // Size: 0x04
	float StartWorldTime; // Offset: 0x2d0 // Size: 0x04
	bool bIsInhibited; // Offset: 0x2d4 // Size: 0x01
	char pad_0x2D5[0x83]; // Offset: 0x2d5 // Size: 0x83
};

// Object Name: ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x18 // Inherited bytes: 0x00
struct FPredictionKey {
	// Fields
	int16_t Current; // Offset: 0x00 // Size: 0x02
	int16_t Base; // Offset: 0x02 // Size: 0x02
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UPackageMap* PredictiveConnection; // Offset: 0x08 // Size: 0x08
	bool bIsStale; // Offset: 0x10 // Size: 0x01
	bool bIsServerInitiated; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectSpec
// Size: 0x298 // Inherited bytes: 0x00
struct FGameplayEffectSpec {
	// Fields
	struct UGameplayEffect* Def; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // Offset: 0x08 // Size: 0x10
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // Offset: 0x18 // Size: 0x28
	char pad_0x40[0x10]; // Offset: 0x40 // Size: 0x10
	float Duration; // Offset: 0x50 // Size: 0x04
	float Period; // Offset: 0x54 // Size: 0x04
	float ChanceToApplyToTarget; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct FTagContainerAggregator CapturedSourceTags; // Offset: 0x60 // Size: 0x88
	struct FTagContainerAggregator CapturedTargetTags; // Offset: 0xe8 // Size: 0x88
	struct FGameplayTagContainer DynamicGrantedTags; // Offset: 0x170 // Size: 0x20
	struct FGameplayTagContainer DynamicAssetTags; // Offset: 0x190 // Size: 0x20
	struct TArray<struct FModifierSpec> Modifiers; // Offset: 0x1b0 // Size: 0x10
	IntProperty StackCount; // Offset: 0x1c0 // Size: 0x04
	char bCompletedSourceAttributeCapture : 1; // Offset: 0x1c4 // Size: 0x01
	char bCompletedTargetAttributeCapture : 1; // Offset: 0x1c4 // Size: 0x01
	char bDurationLocked : 1; // Offset: 0x1c4 // Size: 0x01
	char pad_0x1C4_3 : 5; // Offset: 0x1c4 // Size: 0x01
	char pad_0x1C5[0x3]; // Offset: 0x1c5 // Size: 0x03
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // Offset: 0x1c8 // Size: 0x10
	char pad_0x1D8[0xa0]; // Offset: 0x1d8 // Size: 0xa0
	struct FGameplayEffectContextHandle EffectContext; // Offset: 0x278 // Size: 0x18
	float Level; // Offset: 0x290 // Size: 0x04
	char pad_0x294[0x4]; // Offset: 0x294 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// Size: 0x18 // Inherited bytes: 0x00
struct FGameplayEffectContextHandle {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x50 // Inherited bytes: 0x00
struct FGameplayAbilitySpecDef {
	// Fields
	struct UGameplayAbility* Ability; // Offset: 0x00 // Size: 0x08
	IntProperty Level; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FScalableFloat LevelScalableFloat; // Offset: 0x10 // Size: 0x28
	IntProperty InputID; // Offset: 0x38 // Size: 0x04
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct UObject* SourceObject; // Offset: 0x40 // Size: 0x08
	struct FGameplayAbilitySpecHandle AssignedHandle; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// Size: 0x04 // Inherited bytes: 0x00
struct FGameplayAbilitySpecHandle {
	// Fields
	IntProperty Handle; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x28 // Inherited bytes: 0x00
struct FScalableFloat {
	// Fields
	float Value; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FCurveTableRowHandle Curve; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.ModifierSpec
// Size: 0x04 // Inherited bytes: 0x00
struct FModifierSpec {
	// Fields
	float EvaluatedMagnitude; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.TagContainerAggregator
// Size: 0x88 // Inherited bytes: 0x00
struct FTagContainerAggregator {
	// Fields
	struct FGameplayTagContainer CapturedActorTags; // Offset: 0x00 // Size: 0x20
	struct FGameplayTagContainer CapturedSpecTags; // Offset: 0x20 // Size: 0x20
	struct FGameplayTagContainer ScopedTags; // Offset: 0x40 // Size: 0x20
	char pad_0x60[0x28]; // Offset: 0x60 // Size: 0x28
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28 // Inherited bytes: 0x00
struct FGameplayEffectAttributeCaptureSpecContainer {
	// Fields
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // Offset: 0x10 // Size: 0x10
	bool bHasNonSnapshottedAttributes; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Size: 0x38 // Inherited bytes: 0x00
struct FGameplayEffectAttributeCaptureSpec {
	// Fields
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition; // Offset: 0x00 // Size: 0x28
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x28 // Inherited bytes: 0x00
struct FGameplayEffectAttributeCaptureDefinition {
	// Fields
	struct FGameplayAttribute AttributeToCapture; // Offset: 0x00 // Size: 0x20
	enum class EGameplayEffectAttributeCaptureSource AttributeSource; // Offset: 0x20 // Size: 0x01
	bool bSnapshot; // Offset: 0x21 // Size: 0x01
	char pad_0x22[0x6]; // Offset: 0x22 // Size: 0x06
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x20 // Inherited bytes: 0x00
struct FGameplayAttribute {
	// Fields
	StrProperty AttributeName; // Offset: 0x00 // Size: 0x10
	struct UProperty* Attribute; // Offset: 0x10 // Size: 0x08
	struct UStruct* AttributeOwner; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// Size: 0x28 // Inherited bytes: 0x00
struct FGameplayEffectModifiedAttribute {
	// Fields
	struct FGameplayAttribute Attribute; // Offset: 0x00 // Size: 0x20
	float TotalMagnitude; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// Size: 0x08 // Inherited bytes: 0x00
struct FActiveGameplayEffectHandle {
	// Fields
	IntProperty Handle; // Offset: 0x00 // Size: 0x04
	bool bPassedFiltersAndWasExecuted; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// Size: 0x18 // Inherited bytes: 0x00
struct FGameplayEffectSpecHandle {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FGameplayEffectRemovalInfo {
	// Fields
	bool bPrematureRemoval; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty StackCount; // Offset: 0x04 // Size: 0x04
	struct FGameplayEffectContextHandle EffectContext; // Offset: 0x08 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEventData
// Size: 0xa8 // Inherited bytes: 0x00
struct FGameplayEventData {
	// Fields
	struct FGameplayTag EventTag; // Offset: 0x00 // Size: 0x08
	struct AActor* Instigator; // Offset: 0x08 // Size: 0x08
	struct AActor* Target; // Offset: 0x10 // Size: 0x08
	struct UObject* OptionalObject; // Offset: 0x18 // Size: 0x08
	struct UObject* OptionalObject2; // Offset: 0x20 // Size: 0x08
	struct FGameplayEffectContextHandle ContextHandle; // Offset: 0x28 // Size: 0x18
	struct FGameplayTagContainer InstigatorTags; // Offset: 0x40 // Size: 0x20
	struct FGameplayTagContainer TargetTags; // Offset: 0x60 // Size: 0x20
	float EventMagnitude; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct FGameplayAbilityTargetDataHandle TargetData; // Offset: 0x88 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// Size: 0x20 // Inherited bytes: 0x00
struct FGameplayAbilityTargetDataHandle {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FGameplayAbilityActivationInfo {
	// Fields
	enum class EGameplayAbilityActivationMode ActivationMode; // Offset: 0x00 // Size: 0x01
	char bCanBeEndedByOtherInstance : 1; // Offset: 0x01 // Size: 0x01
	char pad_0x1_1 : 7; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct FPredictionKey PredictionKeyWhenActivated; // Offset: 0x08 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectQuery
// Size: 0x138 // Inherited bytes: 0x00
struct FGameplayEffectQuery {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	DelegateProperty CustomMatchDelegate_BP; // Offset: 0x10 // Size: 0x10
	struct FGameplayTagQuery OwningTagQuery; // Offset: 0x20 // Size: 0x48
	struct FGameplayTagQuery EffectTagQuery; // Offset: 0x68 // Size: 0x48
	struct FGameplayTagQuery SourceTagQuery; // Offset: 0xb0 // Size: 0x48
	struct FGameplayAttribute ModifyingAttribute; // Offset: 0xf8 // Size: 0x20
	struct UObject* EffectSource; // Offset: 0x118 // Size: 0x08
	struct UGameplayEffect* EffectDefinition; // Offset: 0x120 // Size: 0x08
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueParameters
// Size: 0xb8 // Inherited bytes: 0x00
struct FGameplayCueParameters {
	// Fields
	float NormalizedMagnitude; // Offset: 0x00 // Size: 0x04
	float RawMagnitude; // Offset: 0x04 // Size: 0x04
	struct FGameplayEffectContextHandle EffectContext; // Offset: 0x08 // Size: 0x18
	struct FGameplayTag MatchedTagName; // Offset: 0x20 // Size: 0x08
	struct FGameplayTag OriginalTag; // Offset: 0x28 // Size: 0x08
	struct FGameplayTagContainer AggregatedSourceTags; // Offset: 0x30 // Size: 0x20
	struct FGameplayTagContainer AggregatedTargetTags; // Offset: 0x50 // Size: 0x20
	struct FVector_NetQuantize10 Location; // Offset: 0x70 // Size: 0x0c
	struct FVector_NetQuantizeNormal Normal; // Offset: 0x7c // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> Instigator; // Offset: 0x88 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> EffectCauser; // Offset: 0x90 // Size: 0x08
	struct TWeakObjectPtr<struct UObject> SourceObject; // Offset: 0x98 // Size: 0x08
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysicalMaterial; // Offset: 0xa0 // Size: 0x08
	IntProperty GameplayEffectLevel; // Offset: 0xa8 // Size: 0x04
	IntProperty AbilityLevel; // Offset: 0xac // Size: 0x04
	struct TWeakObjectPtr<struct USceneComponent> TargetAttachComponent; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x78 // Inherited bytes: 0x00
struct FGameplayEffectSpecForRPC {
	// Fields
	struct UGameplayEffect* Def; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // Offset: 0x08 // Size: 0x10
	struct FGameplayEffectContextHandle EffectContext; // Offset: 0x18 // Size: 0x18
	struct FGameplayTagContainer AggregatedSourceTags; // Offset: 0x30 // Size: 0x20
	struct FGameplayTagContainer AggregatedTargetTags; // Offset: 0x50 // Size: 0x20
	float Level; // Offset: 0x70 // Size: 0x04
	float AbilityLevel; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// Size: 0xc0 // Inherited bytes: 0xb0
struct FReplicatedPredictionKeyMap : FFastArraySerializer {
	// Fields
	struct TArray<struct FReplicatedPredictionKeyItem> PredictionKeys; // Offset: 0xb0 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// Size: 0x28 // Inherited bytes: 0x0c
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FPredictionKey PredictionKey; // Offset: 0x10 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// Size: 0x60 // Inherited bytes: 0x00
struct FMinimalReplicationTagCountMap {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
	struct UAbilitySystemComponent* Owner; // Offset: 0x50 // Size: 0x08
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0xd0 // Inherited bytes: 0xb0
struct FActiveGameplayCueContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FActiveGameplayCue> GameplayCues; // Offset: 0xb0 // Size: 0x10
	struct UAbilitySystemComponent* Owner; // Offset: 0xc0 // Size: 0x08
	char pad_0xC8[0x8]; // Offset: 0xc8 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0xf0 // Inherited bytes: 0x0c
struct FActiveGameplayCue : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FGameplayTag GameplayCueTag; // Offset: 0x10 // Size: 0x08
	struct FPredictionKey PredictionKey; // Offset: 0x18 // Size: 0x18
	struct FGameplayCueParameters Parameters; // Offset: 0x30 // Size: 0xb8
	bool bPredictivelyRemoved; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x428 // Inherited bytes: 0xb0
struct FActiveGameplayEffectsContainer : FFastArraySerializer {
	// Fields
	char pad_0xB0[0x30]; // Offset: 0xb0 // Size: 0x30
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal; // Offset: 0xe0 // Size: 0x10
	char pad_0xF0[0x310]; // Offset: 0xf0 // Size: 0x310
	struct TArray<struct UGameplayEffect*> ApplicationImmunityQueryEffects; // Offset: 0x400 // Size: 0x10
	char pad_0x410[0x18]; // Offset: 0x410 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// Size: 0x30 // Inherited bytes: 0x00
struct FGameplayAbilityLocalAnimMontage {
	// Fields
	struct UAnimMontage* AnimMontage; // Offset: 0x00 // Size: 0x08
	bool PlayBit; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FPredictionKey PredictionKey; // Offset: 0x10 // Size: 0x18
	struct UGameplayAbility* AnimatingAbility; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x30 // Inherited bytes: 0x00
struct FGameplayAbilityRepAnimMontage {
	// Fields
	struct UAnimMontage* AnimMontage; // Offset: 0x00 // Size: 0x08
	float PlayRate; // Offset: 0x08 // Size: 0x04
	float Position; // Offset: 0x0c // Size: 0x04
	float BlendTime; // Offset: 0x10 // Size: 0x04
	char NextSectionID; // Offset: 0x14 // Size: 0x01
	char IsStopped : 1; // Offset: 0x15 // Size: 0x01
	char ForcePlayBit : 1; // Offset: 0x15 // Size: 0x01
	char pad_0x15_2 : 6; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	struct FPredictionKey PredictionKey; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FGameplayAbilitySpecContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FGameplayAbilitySpec> Items; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0x8]; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0x78 // Inherited bytes: 0x0c
struct FGameplayAbilitySpec : FFastArraySerializerItem {
	// Fields
	struct FGameplayAbilitySpecHandle Handle; // Offset: 0x0c // Size: 0x04
	struct UGameplayAbility* Ability; // Offset: 0x10 // Size: 0x08
	IntProperty Level; // Offset: 0x18 // Size: 0x04
	IntProperty InputID; // Offset: 0x1c // Size: 0x04
	struct UObject* SourceObject; // Offset: 0x20 // Size: 0x08
	char ActiveCount; // Offset: 0x28 // Size: 0x01
	char InputPressed : 1; // Offset: 0x29 // Size: 0x01
	char RemoveAfterActivation : 1; // Offset: 0x29 // Size: 0x01
	char PendingRemove : 1; // Offset: 0x29 // Size: 0x01
	char pad_0x29_3 : 5; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
	struct FGameplayAbilityActivationInfo ActivationInfo; // Offset: 0x30 // Size: 0x20
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances; // Offset: 0x50 // Size: 0x10
	struct TArray<struct UGameplayAbility*> ReplicatedInstances; // Offset: 0x60 // Size: 0x10
	struct FActiveGameplayEffectHandle GameplayEffectHandle; // Offset: 0x70 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.AttributeDefaults
// Size: 0x10 // Inherited bytes: 0x00
struct FAttributeDefaults {
	// Fields
	struct UAttributeSet* Attributes; // Offset: 0x00 // Size: 0x08
	struct UDataTable* DefaultStartingTable; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x30 // Inherited bytes: 0x08
struct FAttributeMetaData : FTableRowBase {
	// Fields
	float baseValue; // Offset: 0x08 // Size: 0x04
	float MinValue; // Offset: 0x0c // Size: 0x04
	float MaxValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty DerivedAttributeInfo; // Offset: 0x18 // Size: 0x10
	bool bCanStack; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// Size: 0x10 // Inherited bytes: 0x00
struct FGlobalCurveDataOverride {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAttributeData
// Size: 0x10 // Inherited bytes: 0x00
struct FGameplayAttributeData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	float baseValue; // Offset: 0x08 // Size: 0x04
	float CurrentValue; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.AbilityTriggerData
// Size: 0x10 // Inherited bytes: 0x00
struct FAbilityTriggerData {
	// Fields
	struct FGameplayTag TriggerTag; // Offset: 0x00 // Size: 0x08
	enum class EGameplayAbilityTriggerSource TriggerSource; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FGameplayAbilityBindInfo {
	// Fields
	enum class EGameplayAbilityInputBinds Command; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UGameplayAbility* GameplayAbilityClass; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// Size: 0x10 // Inherited bytes: 0x00
struct FGameplayTargetDataFilterHandle {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// Size: 0x28 // Inherited bytes: 0x00
struct FGameplayTargetDataFilter {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct AActor* SelfActor; // Offset: 0x08 // Size: 0x08
	enum class ETargetDataFilterSelf SelfFilter; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct AActor* RequiredActorClass; // Offset: 0x18 // Size: 0x08
	bool bReverseFilter; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// Size: 0x08 // Inherited bytes: 0x00
struct FGameplayAbilityTargetData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0x90 // Inherited bytes: 0x08
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData {
	// Fields
	struct FHitResult HitResult; // Offset: 0x08 // Size: 0x88
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0x80 // Inherited bytes: 0x08
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData {
	// Fields
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // Offset: 0x10 // Size: 0x60
	struct TArray<struct TWeakObjectPtr<struct AActor>> TargetActorArray; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FGameplayAbilityTargetingLocationInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	enum class EGameplayAbilityTargetingLocationType LocationType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FTransform LiteralTransform; // Offset: 0x10 // Size: 0x30
	struct AActor* SourceActor; // Offset: 0x40 // Size: 0x08
	struct UMeshComponent* SourceComponent; // Offset: 0x48 // Size: 0x08
	struct UGameplayAbility* SourceAbility; // Offset: 0x50 // Size: 0x08
	struct FName SourceSocketName; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0xd0 // Inherited bytes: 0x08
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData {
	// Fields
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // Offset: 0x10 // Size: 0x60
	struct FGameplayAbilityTargetingLocationInfo TargetLocation; // Offset: 0x70 // Size: 0x60
};

// Object Name: ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// Size: 0x18 // Inherited bytes: 0x00
struct FAbilityTaskDebugMessage {
	// Fields
	struct UGameplayTask* FromTask; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.AbilityEndedData
// Size: 0x10 // Inherited bytes: 0x00
struct FAbilityEndedData {
	// Fields
	struct UGameplayAbility* AbilityThatEnded; // Offset: 0x00 // Size: 0x08
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // Offset: 0x08 // Size: 0x04
	bool bReplicateEndAbility; // Offset: 0x0c // Size: 0x01
	bool bWasCancelled; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Size: 0x08 // Inherited bytes: 0x00
struct FGameplayAbilitySpecHandleAndPredictionKey {
	// Fields
	struct FGameplayAbilitySpecHandle AbilityHandle; // Offset: 0x00 // Size: 0x04
	IntProperty PredictionKeyAtCreation; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FGameplayAbilityActorInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> OwnerActor; // Offset: 0x08 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> AvatarActor; // Offset: 0x10 // Size: 0x08
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // Offset: 0x18 // Size: 0x08
	struct TWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // Offset: 0x20 // Size: 0x08
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // Offset: 0x28 // Size: 0x08
	struct TWeakObjectPtr<struct UAnimInstance> AnimInstance; // Offset: 0x30 // Size: 0x08
	struct TWeakObjectPtr<struct UMovementComponent> MovementComponent; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.WorldReticleParameters
// Size: 0x0c // Inherited bytes: 0x00
struct FWorldReticleParameters {
	// Fields
	struct FVector AOEScale; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct GameplayAbilities.PreallocationInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FPreallocationInfo {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
	struct TArray<struct AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x8]; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// Size: 0x170 // Inherited bytes: 0x00
struct FGameplayCuePendingExecute {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
	struct FPredictionKey PredictionKey; // Offset: 0x18 // Size: 0x18
	enum class EGameplayCuePayloadType PayloadType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct UAbilitySystemComponent* OwningComponent; // Offset: 0x38 // Size: 0x08
	struct FGameplayEffectSpecForRPC FromSpec; // Offset: 0x40 // Size: 0x78
	struct FGameplayCueParameters CueParameters; // Offset: 0xb8 // Size: 0xb8
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 // Inherited bytes: 0x00
struct FGameplayCueTag {
	// Fields
	struct FGameplayTag GameplayCueTag; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// Size: 0x58 // Inherited bytes: 0x00
struct FGameplayCueObjectLibrary {
	// Fields
	struct TArray<StrProperty> Paths; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x20]; // Offset: 0x10 // Size: 0x20
	struct UObjectLibrary* ActorObjectLibrary; // Offset: 0x30 // Size: 0x08
	struct UObjectLibrary* StaticObjectLibrary; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x4]; // Offset: 0x40 // Size: 0x04
	bool bShouldSyncScan; // Offset: 0x44 // Size: 0x01
	bool bShouldAsyncLoad; // Offset: 0x45 // Size: 0x01
	bool bShouldSyncLoad; // Offset: 0x46 // Size: 0x01
	char pad_0x47[0x1]; // Offset: 0x47 // Size: 0x01
	struct UGameplayCueSet* CueSet; // Offset: 0x48 // Size: 0x08
	bool bHasBeenInitialized; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueNotifyData
// Size: 0x30 // Inherited bytes: 0x00
struct FGameplayCueNotifyData {
	// Fields
	struct FGameplayTag GameplayCueTag; // Offset: 0x00 // Size: 0x08
	struct FSoftObjectPath GameplayCueNotifyObj; // Offset: 0x08 // Size: 0x18
	struct UObject* LoadedGameplayCueClass; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// Size: 0x80 // Inherited bytes: 0x00
struct FGameplayCueTranslationManager {
	// Fields
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT; // Offset: 0x00 // Size: 0x10
	MapProperty TranslationNameToIndexMap; // Offset: 0x10 // Size: 0x50
	struct UGameplayTagsManager* TagManager; // Offset: 0x60 // Size: 0x08
	char pad_0x68[0x18]; // Offset: 0x68 // Size: 0x18
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// Size: 0x04 // Inherited bytes: 0x00
struct FGameplayCueTranslatorNodeIndex {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// Size: 0x78 // Inherited bytes: 0x00
struct FGameplayCueTranslatorNode {
	// Fields
	struct TArray<struct FGameplayCueTranslationLink> Links; // Offset: 0x00 // Size: 0x10
	struct FGameplayCueTranslatorNodeIndex CachedIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FGameplayTag CachedGameplayTag; // Offset: 0x18 // Size: 0x08
	struct FName CachedGameplayTagName; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x50]; // Offset: 0x28 // Size: 0x50
};

// Object Name: ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// Size: 0x18 // Inherited bytes: 0x00
struct FGameplayCueTranslationLink {
	// Fields
	struct UGameplayCueTranslator* RulesCDO; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// Size: 0x70 // Inherited bytes: 0x00
struct FActiveGameplayEffectQuery {
	// Fields
	char pad_0x0[0x70]; // Offset: 0x00 // Size: 0x70
};

// Object Name: ScriptStruct GameplayAbilities.InheritedTagContainer
// Size: 0x60 // Inherited bytes: 0x00
struct FInheritedTagContainer {
	// Fields
	struct FGameplayTagContainer CombinedTags; // Offset: 0x00 // Size: 0x20
	struct FGameplayTagContainer Added; // Offset: 0x20 // Size: 0x20
	struct FGameplayTagContainer Removed; // Offset: 0x40 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectCue
// Size: 0x48 // Inherited bytes: 0x00
struct FGameplayEffectCue {
	// Fields
	struct FGameplayAttribute MagnitudeAttribute; // Offset: 0x00 // Size: 0x20
	float MinLevel; // Offset: 0x20 // Size: 0x04
	float MaxLevel; // Offset: 0x24 // Size: 0x04
	struct FGameplayTagContainer GameplayCueTags; // Offset: 0x28 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayModifierInfo
// Size: 0x2a0 // Inherited bytes: 0x00
struct FGameplayModifierInfo {
	// Fields
	struct FGameplayAttribute Attribute; // Offset: 0x00 // Size: 0x20
	enum class EGameplayModOp ModifierOp; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct FScalableFloat Magnitude; // Offset: 0x28 // Size: 0x28
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // Offset: 0x50 // Size: 0x1c8
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // Offset: 0x218 // Size: 0x01
	char pad_0x219[0x7]; // Offset: 0x219 // Size: 0x07
	struct FGameplayTagRequirements SourceTags; // Offset: 0x220 // Size: 0x40
	struct FGameplayTagRequirements TargetTags; // Offset: 0x260 // Size: 0x40
};

// Object Name: ScriptStruct GameplayAbilities.GameplayTagRequirements
// Size: 0x40 // Inherited bytes: 0x00
struct FGameplayTagRequirements {
	// Fields
	struct FGameplayTagContainer RequireTags; // Offset: 0x00 // Size: 0x20
	struct FGameplayTagContainer IgnoreTags; // Offset: 0x20 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 // Inherited bytes: 0x00
struct FGameplayModEvaluationChannelSettings {
	// Fields
	enum class EGameplayModEvaluationChannel Channel; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x1c8 // Inherited bytes: 0x00
struct FGameplayEffectModifierMagnitude {
	// Fields
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FScalableFloat ScalableFloatMagnitude; // Offset: 0x08 // Size: 0x28
	struct FAttributeBasedFloat AttributeBasedMagnitude; // Offset: 0x30 // Size: 0xf8
	struct FCustomCalculationBasedFloat CustomMagnitude; // Offset: 0x128 // Size: 0x90
	struct FSetByCallerFloat SetByCallerMagnitude; // Offset: 0x1b8 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.SetByCallerFloat
// Size: 0x10 // Inherited bytes: 0x00
struct FSetByCallerFloat {
	// Fields
	struct FName DataName; // Offset: 0x00 // Size: 0x08
	struct FGameplayTag DataTag; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x90 // Inherited bytes: 0x00
struct FCustomCalculationBasedFloat {
	// Fields
	struct UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // Offset: 0x00 // Size: 0x08
	struct FScalableFloat Coefficient; // Offset: 0x08 // Size: 0x28
	struct FScalableFloat PreMultiplyAdditiveValue; // Offset: 0x30 // Size: 0x28
	struct FScalableFloat PostMultiplyAdditiveValue; // Offset: 0x58 // Size: 0x28
	struct FCurveTableRowHandle FinalLookupCurve; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0xf8 // Inherited bytes: 0x00
struct FAttributeBasedFloat {
	// Fields
	struct FScalableFloat Coefficient; // Offset: 0x00 // Size: 0x28
	struct FScalableFloat PreMultiplyAdditiveValue; // Offset: 0x28 // Size: 0x28
	struct FScalableFloat PostMultiplyAdditiveValue; // Offset: 0x50 // Size: 0x28
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // Offset: 0x78 // Size: 0x28
	struct FCurveTableRowHandle AttributeCurve; // Offset: 0xa0 // Size: 0x10
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType; // Offset: 0xb0 // Size: 0x01
	enum class EGameplayModEvaluationChannel FinalChannel; // Offset: 0xb1 // Size: 0x01
	char pad_0xB2[0x6]; // Offset: 0xb2 // Size: 0x06
	struct FGameplayTagContainer SourceTagFilter; // Offset: 0xb8 // Size: 0x20
	struct FGameplayTagContainer TargetTagFilter; // Offset: 0xd8 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 // Inherited bytes: 0x00
struct FGameplayEffectExecutionDefinition {
	// Fields
	struct UGameplayEffectExecutionCalculation* CalculationClass; // Offset: 0x00 // Size: 0x08
	struct FGameplayTagContainer PassedInTags; // Offset: 0x08 // Size: 0x20
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // Offset: 0x28 // Size: 0x10
	struct TArray<struct UGameplayEffect*> ConditionalGameplayEffectClasses; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// Size: 0x28 // Inherited bytes: 0x00
struct FConditionalGameplayEffect {
	// Fields
	struct UGameplayEffect* EffectClass; // Offset: 0x00 // Size: 0x08
	struct FGameplayTagContainer RequiredSourceTags; // Offset: 0x08 // Size: 0x20
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x280 // Inherited bytes: 0x00
struct FGameplayEffectExecutionScopedModifierInfo {
	// Fields
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // Offset: 0x00 // Size: 0x28
	enum class EGameplayModOp ModifierOp; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // Offset: 0x30 // Size: 0x1c8
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // Offset: 0x1f8 // Size: 0x01
	char pad_0x1F9[0x7]; // Offset: 0x1f9 // Size: 0x07
	struct FGameplayTagRequirements SourceTags; // Offset: 0x200 // Size: 0x40
	struct FGameplayTagRequirements TargetTags; // Offset: 0x240 // Size: 0x40
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18 // Inherited bytes: 0x00
struct FGameplayEffectCustomExecutionOutput {
	// Fields
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // Offset: 0x00 // Size: 0x10
	char bTriggerConditionalGameplayEffects : 1; // Offset: 0x10 // Size: 0x01
	char bHandledStackCountManually : 1; // Offset: 0x10 // Size: 0x01
	char bHandledGameplayCuesManually : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_3 : 5; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x38 // Inherited bytes: 0x00
struct FGameplayModifierEvaluatedData {
	// Fields
	struct FGameplayAttribute Attribute; // Offset: 0x00 // Size: 0x20
	enum class EGameplayModOp ModifierOp; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	float Magnitude; // Offset: 0x24 // Size: 0x04
	struct FActiveGameplayEffectHandle Handle; // Offset: 0x28 // Size: 0x08
	bool IsValid; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// Size: 0xa8 // Inherited bytes: 0x00
struct FGameplayEffectCustomExecutionParameters {
	// Fields
	char pad_0x0[0xa8]; // Offset: 0x00 // Size: 0xa8
};

// Object Name: ScriptStruct GameplayAbilities.GameplayEffectContext
// Size: 0x70 // Inherited bytes: 0x00
struct FGameplayEffectContext {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> Instigator; // Offset: 0x08 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> EffectCauser; // Offset: 0x10 // Size: 0x08
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityCDO; // Offset: 0x18 // Size: 0x08
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityInstanceNotReplicated; // Offset: 0x20 // Size: 0x08
	IntProperty AbilityLevel; // Offset: 0x28 // Size: 0x04
	struct TWeakObjectPtr<struct UObject> SourceObject; // Offset: 0x2c // Size: 0x08
	struct TWeakObjectPtr<struct UAbilitySystemComponent> InstigatorAbilitySystemComponent; // Offset: 0x34 // Size: 0x08
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<struct TWeakObjectPtr<struct AActor>> Actors; // Offset: 0x40 // Size: 0x10
	char pad_0x50[0x10]; // Offset: 0x50 // Size: 0x10
	struct FVector WorldOrigin; // Offset: 0x60 // Size: 0x0c
	bool bHasWorldOrigin; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
};

// Object Name: ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// Size: 0x50 // Inherited bytes: 0x00
struct FGameplayTagResponseTableEntry {
	// Fields
	struct FGameplayTagReponsePair Positive; // Offset: 0x00 // Size: 0x28
	struct FGameplayTagReponsePair Negative; // Offset: 0x28 // Size: 0x28
};

// Object Name: ScriptStruct GameplayAbilities.GameplayTagReponsePair
// Size: 0x28 // Inherited bytes: 0x00
struct FGameplayTagReponsePair {
	// Fields
	struct FGameplayTag Tag; // Offset: 0x00 // Size: 0x08
	struct UGameplayEffect* ResponseGameplayEffect; // Offset: 0x08 // Size: 0x08
	struct TArray<struct UGameplayEffect*> ResponseGameplayEffects; // Offset: 0x10 // Size: 0x10
	IntProperty SoftCountCap; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

