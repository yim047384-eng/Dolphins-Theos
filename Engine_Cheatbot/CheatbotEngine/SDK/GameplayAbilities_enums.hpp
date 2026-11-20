#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8 {
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8 {
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8 {
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	Rejected = 4,
	EGameplayAbilityActivationMode_MAX = 5
};

// Object Name: Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8 {
	GenericConfirm = 0,
	GenericCancel = 1,
	InputPressed = 2,
	InputReleased = 3,
	GenericSignalFromClient = 4,
	GenericSignalFromServer = 5,
	GameCustom1 = 6,
	GameCustom2 = 7,
	GameCustom3 = 8,
	GameCustom4 = 9,
	GameCustom5 = 10,
	GameCustom6 = 11,
	MAX = 12
};

// Object Name: Enum GameplayAbilities.EReplicationMode
enum class EReplicationMode : uint8 {
	Minimal = 0,
	Mixed = 1,
	Full = 2,
	EReplicationMode_MAX = 3
};

// Object Name: Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8 {
	WaitingOnGame = 1,
	WaitingOnUser = 2,
	WaitingOnAvatar = 4,
	EAbilityTaskWaitState_MAX = 5
};

// Object Name: Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8 {
	AlignFromTargetToSource = 0,
	AlignToTargetForward = 1,
	AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

// Object Name: Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8 {
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3
};

// Object Name: Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8 {
	None = 0,
	GreaterThan = 1,
	LessThan = 2,
	GreaterThanOrEqualTo = 3,
	LessThanOrEqualTo = 4,
	NotEqualTo = 5,
	ExactlyEqualTo = 6,
	MAX = 7
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8 {
	Ability1 = 0,
	Ability2 = 1,
	Ability3 = 2,
	Ability4 = 3,
	Ability5 = 4,
	Ability6 = 5,
	Ability7 = 6,
	Ability8 = 7,
	Ability9 = 8,
	EGameplayAbilityInputBinds_MAX = 9
};

// Object Name: Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class ETargetAbilitySelfSelection : uint8 {
	TASS_Permit = 0,
	TASS_Forbid = 1,
	TASS_Require = 2,
	TASS_MAX = 3
};

// Object Name: Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8 {
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8 {
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8 {
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8 {
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8 {
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8 {
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};

// Object Name: Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8 {
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8 {
	EffectContext = 0,
	CueParameters = 1,
	FromSpec = 2,
	EGameplayCuePayloadType_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8 {
	ClearEntireStack = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8 {
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};

// Object Name: Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8 {
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2
};

// Object Name: Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8 {
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3
};

// Object Name: Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8 {
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};

// Object Name: Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8 {
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};

// Object Name: Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8 {
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2
};

// Object Name: Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8 {
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4
};

// Object Name: Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8 {
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3
};

// Object Name: Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8 {
	Additive = 0,
	Multiplicitive = 1,
	Division = 2,
	Override = 3,
	Max = 4
};

// Object Name: Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8 {
	Channel0 = 0,
	Channel1 = 1,
	Channel2 = 2,
	Channel3 = 3,
	Channel4 = 4,
	Channel5 = 5,
	Channel6 = 6,
	Channel7 = 7,
	Channel8 = 8,
	Channel9 = 9,
	Channel_MAX = 10,
	EGameplayModEvaluationChannel_MAX = 11
};

