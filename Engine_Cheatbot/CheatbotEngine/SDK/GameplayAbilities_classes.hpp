#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b46234 // Return & Params: Num(3) Size(0x25)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, IntProperty Index); // Offset: 0x101b46140 // Return & Params: Num(3) Size(0x25)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b4604c // Return & Params: Num(3) Size(0x25)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b45f58 // Return & Params: Num(3) Size(0x25)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Offset: 0x101b45e58 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, IntProperty StackCount); // Offset: 0x101b45d18 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration); // Offset: 0x101b45bd8 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Offset: 0x101b45a78 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Offset: 0x101b4593c // Return & Params: Num(3) Size(0x41)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Offset: 0x101b457e8 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter filter, struct AActor* FilterActor); // Offset: 0x101b456d0 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsValid(struct FGameplayAttribute Attribute); // Offset: 0x101b45610 // Return & Params: Num(2) Size(0x21)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Offset: 0x101b45510 // Return & Params: Num(2) Size(0xb9)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Offset: 0x101b45410 // Return & Params: Num(2) Size(0xb9)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Offset: 0x101b45310 // Return & Params: Num(2) Size(0xb9)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b45208 // Return & Params: Num(3) Size(0x60)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b45100 // Return & Params: Num(3) Size(0x60)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b45004 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Offset: 0x101b44efc // Return & Params: Num(2) Size(0xc4)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Offset: 0x101b44da4 // Return & Params: Num(3) Size(0x3c)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Offset: 0x101b44c88 // Return & Params: Num(2) Size(0xf0)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Offset: 0x101b44b88 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, IntProperty Index); // Offset: 0x101b44a60 // Return & Params: Num(3) Size(0xb0)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Offset: 0x101b4491c // Return & Params: Num(2) Size(0x140)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal); // Offset: 0x101b44738 // Return & Params: Num(5) Size(0xd9)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction); // Offset: 0x101b445ac // Return & Params: Num(4) Size(0xcd)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Offset: 0x101b44454 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Offset: 0x101b442fc // Return & Params: Num(4) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Offset: 0x101b441a4 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Offset: 0x101b4404c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Offset: 0x101b43f4c // Return & Params: Num(2) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Offset: 0x101b43ea4 // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Offset: 0x101b43da4 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index); // Offset: 0x101b43c88 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetActorCount(struct FGameplayCueParameters Parameters); // Offset: 0x101b43b88 // Return & Params: Num(2) Size(0xbc)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, IntProperty Index); // Offset: 0x101b43a2c // Return & Params: Num(3) Size(0xc8)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b439a8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b43924 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b438a0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b4381c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b43760 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b436dc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b43630 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Offset: 0x101b435b4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ForwardGameplayCueToTarget(struct TScriptInterface<Class> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Offset: 0x101b43430 // Return & Params: Num(3) Size(0xd0)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Offset: 0x101b432cc // Return & Params: Num(3) Size(0x50)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float baseValue, bool& bSuccess); // Offset: 0x101b43054 // Return & Params: Num(7) Size(0x74)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // Offset: 0x101b42e1c // Return & Params: Num(6) Size(0x70)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Offset: 0x101b42ce0 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Offset: 0x101b42bc8 // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b42ae0 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b429f8 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b42910 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b42828 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b42740 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b42654 // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b4256c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b42454 // Return & Params: Num(2) Size(0xa0)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b4236c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Offset: 0x101b421bc // Return & Params: Num(3) Size(0xa1)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, IntProperty Index, struct AActor* Actor); // Offset: 0x101b42088 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // Offset: 0x101b41e94 // Return & Params: Num(4) Size(0x139)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Offset: 0x101b41d20 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Offset: 0x101b41ba0 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Offset: 0x101b41a20 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // Offset: 0x101b418d0 // Return & Params: Num(3) Size(0x60)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Offset: 0x101b4173c // Return & Params: Num(3) Size(0x48)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect); // Offset: 0x101b415fc // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Offset: 0x101b41480 // Return & Params: Num(3) Size(0x50)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Offset: 0x101b41340 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Offset: 0x101b411c4 // Return & Params: Num(3) Size(0x50)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Offset: 0x101b41084 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // Offset: 0x101b40f1c // Return & Params: Num(3) Size(0xe0)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // Offset: 0x101b40e58 // Return & Params: Num(2) Size(0xa8)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle); // Offset: 0x101b40d34 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Offset: 0x101b40c90 // Return & Params: Num(2) Size(0x28)
};

// Object Name: Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1140 // Inherited bytes: 0x1f0
struct UAbilitySystemComponent : UGameplayTasksComponent {
	// Fields
	char pad_0x1F0[0x8]; // Offset: 0x1f0 // Size: 0x08
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // Offset: 0x1f8 // Size: 0x10
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // Offset: 0x208 // Size: 0x10
	char pad_0x218[0xc8]; // Offset: 0x218 // Size: 0xc8
	float OutgoingDuration; // Offset: 0x2e0 // Size: 0x04
	float IncomingDuration; // Offset: 0x2e4 // Size: 0x04
	char pad_0x2E8[0x28]; // Offset: 0x2e8 // Size: 0x28
	struct TArray<StrProperty> ClientDebugStrings; // Offset: 0x310 // Size: 0x10
	struct TArray<StrProperty> ServerDebugStrings; // Offset: 0x320 // Size: 0x10
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // Offset: 0x330 // Size: 0xc8
	char pad_0x3F8[0x50]; // Offset: 0x3f8 // Size: 0x50
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // Offset: 0x448 // Size: 0x10
	char pad_0x458[0x238]; // Offset: 0x458 // Size: 0x238
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // Offset: 0x690 // Size: 0x10
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // Offset: 0x6a0 // Size: 0x30
	char pad_0x6D0[0x8]; // Offset: 0x6d0 // Size: 0x08
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // Offset: 0x6d8 // Size: 0x30
	char pad_0x708[0xb8]; // Offset: 0x708 // Size: 0xb8
	struct AActor* OwnerActor; // Offset: 0x7c0 // Size: 0x08
	struct AActor* AvatarActor; // Offset: 0x7c8 // Size: 0x08
	char pad_0x7D0[0x18]; // Offset: 0x7d0 // Size: 0x18
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // Offset: 0x7e8 // Size: 0x428
	struct FActiveGameplayCueContainer ActiveGameplayCues; // Offset: 0xc10 // Size: 0xd0
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // Offset: 0xce0 // Size: 0xd0
	char pad_0xDB0[0x128]; // Offset: 0xdb0 // Size: 0x128
	struct TArray<char> BlockedAbilityBindings; // Offset: 0xed8 // Size: 0x10
	char pad_0xEE8[0x128]; // Offset: 0xee8 // Size: 0x128
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // Offset: 0x1010 // Size: 0x60
	char pad_0x1070[0x10]; // Offset: 0x1070 // Size: 0x10
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // Offset: 0x1080 // Size: 0xc0

	// Functions

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Offset: 0x101b4c624 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Offset: 0x101b4c51c // Return & Params: Num(3) Size(0x22)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TargetConfirm(); // Offset: 0x101b4c508 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TargetCancel(); // Offset: 0x101b4c4f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Offset: 0x101b4c470 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, IntProperty NewLevel); // Offset: 0x101b4c368 // Return & Params: Num(2) Size(0x13c)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, IntProperty NewLevel); // Offset: 0x101b4c2a8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Offset: 0x101b4c0d0 // Return & Params: Num(4) Size(0xc8)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Offset: 0x101b4bfa8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Offset: 0x101b4be78 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Offset: 0x101b4bcb0 // Return & Params: Num(5) Size(0x60)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Offset: 0x101b4bb08 // Return & Params: Num(5) Size(0x44)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Offset: 0x101b4b99c // Return & Params: Num(4) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Offset: 0x101b4b914 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Offset: 0x101b4b88c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerPrintDebug_RequestWithStrings(struct TArray<StrProperty> Strings); // Offset: 0x101b4b7ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerPrintDebug_Request(); // Offset: 0x101b4b7d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Offset: 0x101b4b684 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Offset: 0x101b4b5c4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Offset: 0x101b4b490 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Offset: 0x101b4b3d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Offset: 0x101b4b2dc // Return & Params: Num(2) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, IntProperty StacksToRemove); // Offset: 0x101b4b1ec // Return & Params: Num(3) Size(0x14)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, IntProperty StacksToRemove); // Offset: 0x101b4b11c // Return & Params: Num(3) Size(0xd)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Offset: 0x101b4b04c // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Offset: 0x101b4af7c // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Offset: 0x101b4aeac // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Offset: 0x101b4addc // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// Flags: [Native|Public]
	void OnRep_ServerDebugString(); // Offset: 0x101b4adc0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// Flags: [Final|Native|Protected]
	void OnRep_ReplicatedAnimMontage(); // Offset: 0x101b4adac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// Flags: [Final|Native|Public]
	void OnRep_OwningActor(); // Offset: 0x101b4ad98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// Flags: [Native|Public]
	void OnRep_ClientDebugString(); // Offset: 0x101b4ad7c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// Flags: [Final|Native|Protected]
	void OnRep_ActivateAbilities(); // Offset: 0x101b4ad68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Offset: 0x101b4ab8c // Return & Params: Num(3) Size(0xf0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b4a9cc // Return & Params: Num(3) Size(0x50)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Offset: 0x101b4a7f0 // Return & Params: Num(3) Size(0xf0)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Offset: 0x101b4a63c // Return & Params: Num(3) Size(0xd8)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Offset: 0x101b4a514 // Return & Params: Num(2) Size(0x90)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b4a398 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Offset: 0x101b4a1e4 // Return & Params: Num(3) Size(0xd8)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Offset: 0x101b4a0e8 // Return & Params: Num(2) Size(0x90)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Offset: 0x101b49f34 // Return & Params: Num(3) Size(0xd8)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b49db8 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Offset: 0x101b49c2c // Return & Params: Num(4) Size(0x40)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayEffectContextHandle MakeEffectContext(); // Offset: 0x101b49bc8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable); // Offset: 0x101b49b14 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Offset: 0x101b49a80 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetUserAbilityActivationInhibited(); // Offset: 0x101b49a4c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Offset: 0x101b49934 // Return & Params: Num(3) Size(0x2c)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Offset: 0x101b4982c // Return & Params: Num(4) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query); // Offset: 0x101b49748 // Return & Params: Num(2) Size(0x148)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Offset: 0x101b496c0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Offset: 0x101b495a8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientPrintDebug_Response(struct TArray<StrProperty> Strings, IntProperty GameFlags); // Offset: 0x101b494c8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Offset: 0x101b493d0 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Offset: 0x101b492d8 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Offset: 0x101b4914c // Return & Params: Num(3) Size(0xc8)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Offset: 0x101b49070 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Offset: 0x101b48fac // Return & Params: Num(2) Size(0x6)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Offset: 0x101b48e04 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Offset: 0x101b48c94 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target); // Offset: 0x101b48b88 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle); // Offset: 0x101b48ac0 // Return & Params: Num(2) Size(0x20)

	// Object Name: DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void AbilityConfirmOrCancel__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void AbilityAbilityKey__DelegateSignature(IntProperty InputID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x598 // Inherited bytes: 0x598
struct AAbilitySystemDebugHUD : AHUD {
};

// Object Name: Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x238 // Inherited bytes: 0x28
struct UAbilitySystemGlobals : UObject {
	// Fields
	struct FSoftClassPath AbilitySystemGlobalsClassName; // Offset: 0x28 // Size: 0x18
	char pad_0x40[0x28]; // Offset: 0x40 // Size: 0x28
	struct FGameplayTag ActivateFailCooldownTag; // Offset: 0x68 // Size: 0x08
	struct FName ActivateFailCooldownName; // Offset: 0x70 // Size: 0x08
	struct FGameplayTag ActivateFailCostTag; // Offset: 0x78 // Size: 0x08
	struct FName ActivateFailCostName; // Offset: 0x80 // Size: 0x08
	struct FGameplayTag ActivateFailTagsBlockedTag; // Offset: 0x88 // Size: 0x08
	struct FName ActivateFailTagsBlockedName; // Offset: 0x90 // Size: 0x08
	struct FGameplayTag ActivateFailTagsMissingTag; // Offset: 0x98 // Size: 0x08
	struct FName ActivateFailTagsMissingName; // Offset: 0xa0 // Size: 0x08
	struct FGameplayTag ActivateFailNetworkingTag; // Offset: 0xa8 // Size: 0x08
	struct FName ActivateFailNetworkingName; // Offset: 0xb0 // Size: 0x08
	IntProperty MinimalReplicationTagCountBits; // Offset: 0xb8 // Size: 0x04
	bool bAllowGameplayModEvaluationChannels; // Offset: 0xbc // Size: 0x01
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // Offset: 0xbd // Size: 0x01
	char pad_0xBE[0x2]; // Offset: 0xbe // Size: 0x02
	struct FName GameplayModEvaluationChannelAliases[0xa]; // Offset: 0xc0 // Size: 0x50
	struct FSoftObjectPath GlobalCurveTableName; // Offset: 0x110 // Size: 0x18
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // Offset: 0x128 // Size: 0x18
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // Offset: 0x140 // Size: 0x18
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // Offset: 0x158 // Size: 0x10
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // Offset: 0x168 // Size: 0x18
	struct FSoftObjectPath GlobalGameplayCueManagerName; // Offset: 0x180 // Size: 0x18
	struct TArray<StrProperty> GameplayCueNotifyPaths; // Offset: 0x198 // Size: 0x10
	struct FSoftObjectPath GameplayTagResponseTableName; // Offset: 0x1a8 // Size: 0x18
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // Offset: 0x1c0 // Size: 0x08
	bool PredictTargetGameplayEffects; // Offset: 0x1c8 // Size: 0x01
	char pad_0x1C9[0x7]; // Offset: 0x1c9 // Size: 0x07
	struct UCurveTable* GlobalCurveTable; // Offset: 0x1d0 // Size: 0x08
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // Offset: 0x1d8 // Size: 0x10
	struct UDataTable* GlobalAttributeMetaDataTable; // Offset: 0x1e8 // Size: 0x08
	struct UGameplayCueManager* GlobalGameplayCueManager; // Offset: 0x1f0 // Size: 0x08
	char pad_0x1F8[0x40]; // Offset: 0x1f8 // Size: 0x40

	// Functions

	// Object Name: Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	// Flags: [Exec|Native|Public]
	void ToggleIgnoreAbilitySystemCosts(); // Offset: 0x101b4e4c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	// Flags: [Exec|Native|Public]
	void ToggleIgnoreAbilitySystemCooldowns(); // Offset: 0x101b4e4a4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAbilitySystemInterface : UInterface {
};

// Object Name: Class GameplayAbilities.AttributeSet
// Size: 0x30 // Inherited bytes: 0x28
struct UAttributeSet : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 // Inherited bytes: 0x30
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	// Fields
	float MaxHealth; // Offset: 0x2c // Size: 0x04
	float Health; // Offset: 0x30 // Size: 0x04
	float Mana; // Offset: 0x34 // Size: 0x04
	float MaxMana; // Offset: 0x38 // Size: 0x04
	float Damage; // Offset: 0x3c // Size: 0x04
	float SpellDamage; // Offset: 0x40 // Size: 0x04
	float PhysicalDamage; // Offset: 0x44 // Size: 0x04
	float CritChance; // Offset: 0x48 // Size: 0x04
	float CritMultiplier; // Offset: 0x4c // Size: 0x04
	float ArmorDamageReduction; // Offset: 0x50 // Size: 0x04
	float DodgeChance; // Offset: 0x54 // Size: 0x04
	float LifeSteal; // Offset: 0x58 // Size: 0x04
	float Strength; // Offset: 0x5c // Size: 0x04
	float StackingAttribute1; // Offset: 0x60 // Size: 0x04
	float StackingAttribute2; // Offset: 0x64 // Size: 0x04
	float NoStackAttribute; // Offset: 0x68 // Size: 0x04
};

// Object Name: Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x558 // Inherited bytes: 0x538
struct AAbilitySystemTestPawn : ADefaultPawn {
	// Fields
	char pad_0x538[0x18]; // Offset: 0x538 // Size: 0x18
	struct UAbilitySystemComponent* AbilitySystemComponent; // Offset: 0x550 // Size: 0x08
};

// Object Name: Class GameplayAbilities.AbilityTask
// Size: 0x78 // Inherited bytes: 0x60
struct UAbilityTask : UGameplayTask {
	// Fields
	struct UGameplayAbility* Ability; // Offset: 0x60 // Size: 0x08
	struct UAbilitySystemComponent* AbilitySystemComponent; // Offset: 0x68 // Size: 0x08
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb0 // Inherited bytes: 0x78
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	// Fields
	struct FName ForceName; // Offset: 0x78 // Size: 0x08
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x3]; // Offset: 0x81 // Size: 0x03
	struct FVector FinishSetVelocity; // Offset: 0x84 // Size: 0x0c
	float FinishClampVelocity; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct UCharacterMovementComponent* MovementComponent; // Offset: 0x98 // Size: 0x08
	char pad_0xA0[0x10]; // Offset: 0xa0 // Size: 0x10
};

// Object Name: Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xe0 // Inherited bytes: 0xb0
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	// Fields
	struct FScriptMulticastDelegate OnFinish; // Offset: 0xb0 // Size: 0x10
	struct FVector WorldDirection; // Offset: 0xc0 // Size: 0x0c
	float Strength; // Offset: 0xcc // Size: 0x04
	float Duration; // Offset: 0xd0 // Size: 0x04
	bool bIsAdditive; // Offset: 0xd4 // Size: 0x01
	char pad_0xD5[0x3]; // Offset: 0xd5 // Size: 0x03
	struct UCurveFloat* StrengthOverTime; // Offset: 0xd8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Offset: 0x101b4ec7c // Return & Params: Num(11) Size(0x50)
};

// Object Name: Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x108 // Inherited bytes: 0xb0
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	// Fields
	struct FScriptMulticastDelegate OnFinish; // Offset: 0xb0 // Size: 0x10
	struct FScriptMulticastDelegate OnLanded; // Offset: 0xc0 // Size: 0x10
	struct FRotator Rotation; // Offset: 0xd0 // Size: 0x0c
	float Distance; // Offset: 0xdc // Size: 0x04
	float Height; // Offset: 0xe0 // Size: 0x04
	float Duration; // Offset: 0xe4 // Size: 0x04
	float MinimumLandedTriggerTime; // Offset: 0xe8 // Size: 0x04
	bool bFinishOnLanded; // Offset: 0xec // Size: 0x01
	char pad_0xED[0x3]; // Offset: 0xed // Size: 0x03
	struct UCurveVector* PathOffsetCurve; // Offset: 0xf0 // Size: 0x08
	struct UCurveFloat* TimeMappingCurve; // Offset: 0xf8 // Size: 0x08
	char pad_0x100[0x8]; // Offset: 0x100 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// Flags: [Final|Native|Public|HasOutParms]
	void OnLandedCallback(struct FHitResult& Hit); // Offset: 0x101b4f44c // Return & Params: Num(1) Size(0x88)

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Finish(); // Offset: 0x101b4f438 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Offset: 0x101b4f0e4 // Return & Params: Num(14) Size(0x58)
};

// Object Name: Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x128 // Inherited bytes: 0xb0
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	// Fields
	struct FScriptMulticastDelegate OnFinished; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0x8]; // Offset: 0xc0 // Size: 0x08
	struct FVector StartLocation; // Offset: 0xc8 // Size: 0x0c
	struct FVector TargetLocation; // Offset: 0xd4 // Size: 0x0c
	struct AActor* TargetActor; // Offset: 0xe0 // Size: 0x08
	struct FVector TargetLocationOffset; // Offset: 0xe8 // Size: 0x0c
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	float Duration; // Offset: 0xf8 // Size: 0x04
	bool bDisableDestinationReachedInterrupt; // Offset: 0xfc // Size: 0x01
	bool bSetNewMovementMode; // Offset: 0xfd // Size: 0x01
	enum class EMovementMode NewMovementMode; // Offset: 0xfe // Size: 0x01
	bool bRestrictSpeedToExpected; // Offset: 0xff // Size: 0x01
	struct UCurveVector* PathOffsetCurve; // Offset: 0x100 // Size: 0x08
	struct UCurveFloat* TimeMappingCurve; // Offset: 0x108 // Size: 0x08
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // Offset: 0x110 // Size: 0x08
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // Offset: 0x118 // Size: 0x08
	char pad_0x120[0x8]; // Offset: 0x120 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// Flags: [Final|Native|Public]
	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Offset: 0x101b501c0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// Flags: [Final|Native|Protected]
	void OnRep_TargetLocation(); // Offset: 0x101b501ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, IntProperty TargetDataIndex, IntProperty TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Offset: 0x101b4fc38 // Return & Params: Num(20) Size(0x98)

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Offset: 0x101b4f7d4 // Return & Params: Num(18) Size(0x78)
};

// Object Name: Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x100 // Inherited bytes: 0xb0
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	// Fields
	struct FScriptMulticastDelegate OnTimedOut; // Offset: 0xb0 // Size: 0x10
	struct FScriptMulticastDelegate OnTimedOutAndDestinationReached; // Offset: 0xc0 // Size: 0x10
	struct FVector StartLocation; // Offset: 0xd0 // Size: 0x0c
	struct FVector TargetLocation; // Offset: 0xdc // Size: 0x0c
	float Duration; // Offset: 0xe8 // Size: 0x04
	bool bSetNewMovementMode; // Offset: 0xec // Size: 0x01
	enum class EMovementMode NewMovementMode; // Offset: 0xed // Size: 0x01
	bool bRestrictSpeedToExpected; // Offset: 0xee // Size: 0x01
	char pad_0xEF[0x1]; // Offset: 0xef // Size: 0x01
	struct UCurveVector* PathOffsetCurve; // Offset: 0xf0 // Size: 0x08
	char pad_0xF8[0x8]; // Offset: 0xf8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Offset: 0x101b50558 // Return & Params: Num(12) Size(0x50)
};

// Object Name: Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x108 // Inherited bytes: 0xb0
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	// Fields
	struct FScriptMulticastDelegate OnFinish; // Offset: 0xb0 // Size: 0x10
	struct FVector Location; // Offset: 0xc0 // Size: 0x0c
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	struct AActor* LocationActor; // Offset: 0xd0 // Size: 0x08
	float Strength; // Offset: 0xd8 // Size: 0x04
	float Duration; // Offset: 0xdc // Size: 0x04
	float Radius; // Offset: 0xe0 // Size: 0x04
	bool bIsPush; // Offset: 0xe4 // Size: 0x01
	bool bIsAdditive; // Offset: 0xe5 // Size: 0x01
	bool bNoZForce; // Offset: 0xe6 // Size: 0x01
	char pad_0xE7[0x1]; // Offset: 0xe7 // Size: 0x01
	struct UCurveFloat* StrengthDistanceFalloff; // Offset: 0xe8 // Size: 0x08
	struct UCurveFloat* StrengthOverTime; // Offset: 0xf0 // Size: 0x08
	bool bUseFixedWorldDirection; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x3]; // Offset: 0xf9 // Size: 0x03
	struct FRotator FixedWorldDirection; // Offset: 0xfc // Size: 0x0c

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Offset: 0x101b50a1c // Return & Params: Num(18) Size(0x78)
};

// Object Name: Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xc0 // Inherited bytes: 0x78
struct UAbilityTask_MoveToLocation : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnTargetLocationReached; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x4]; // Offset: 0x88 // Size: 0x04
	struct FVector StartLocation; // Offset: 0x8c // Size: 0x0c
	struct FVector TargetLocation; // Offset: 0x98 // Size: 0x0c
	float DurationOfMovement; // Offset: 0xa4 // Size: 0x04
	char pad_0xA8[0x8]; // Offset: 0xa8 // Size: 0x08
	struct UCurveFloat* LerpCurve; // Offset: 0xb0 // Size: 0x08
	struct UCurveVector* LerpCurveVector; // Offset: 0xb8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Offset: 0x101b510a0 // Return & Params: Num(7) Size(0x38)
};

// Object Name: Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x90 // Inherited bytes: 0x78
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnSync; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Offset: 0x101b5148c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// Flags: [Final|Native|Public]
	void OnSignalCallback(); // Offset: 0x101b51478 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x100 // Inherited bytes: 0x78
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnCompleted; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate OnBlendOut; // Offset: 0x88 // Size: 0x10
	struct FScriptMulticastDelegate OnInterrupted; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnCancelled; // Offset: 0xa8 // Size: 0x10
	char pad_0xB8[0x48]; // Offset: 0xb8 // Size: 0x48

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// Flags: [Final|Native|Public]
	void OnMontageInterrupted(); // Offset: 0x101b51aa4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// Flags: [Final|Native|Public]
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Offset: 0x101b519e4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// Flags: [Final|Native|Public]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Offset: 0x101b51924 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // Offset: 0x101b51734 // Return & Params: Num(8) Size(0x38)
};

// Object Name: Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb0 // Inherited bytes: 0x78
struct UAbilityTask_Repeat : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnPerformAction; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate OnFinished; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x18]; // Offset: 0x98 // Size: 0x18

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, IntProperty TotalActionCount); // Offset: 0x101b51d54 // Return & Params: Num(4) Size(0x18)
};

// Object Name: Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xb8 // Inherited bytes: 0x78
struct UAbilityTask_SpawnActor : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate Success; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate DidNotSpawn; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x20]; // Offset: 0x98 // Size: 0x20

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class); // Offset: 0x101b522cc // Return & Params: Num(4) Size(0x38)

	// Object Name: Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Offset: 0x101b52190 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor); // Offset: 0x101b51ff4 // Return & Params: Num(5) Size(0x39)
};

// Object Name: Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb0 // Inherited bytes: 0x78
struct UAbilityTask_StartAbilityState : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnStateEnded; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate OnStateInterrupted; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x18]; // Offset: 0x98 // Size: 0x18

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Offset: 0x101b52648 // Return & Params: Num(4) Size(0x20)
};

// Object Name: Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa0 // Inherited bytes: 0x78
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate TimeElapsed; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x18]; // Offset: 0x88 // Size: 0x18

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration); // Offset: 0x101b52be8 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration); // Offset: 0x101b52abc // Return & Params: Num(5) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Offset: 0x101b52a08 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Offset: 0x101b528f8 // Return & Params: Num(4) Size(0x19)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x130 // Inherited bytes: 0x78
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnActivate; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0xa8]; // Offset: 0x88 // Size: 0xa8

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Offset: 0x101b5332c // Return & Params: Num(5) Size(0x58)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Offset: 0x101b53194 // Return & Params: Num(5) Size(0x60)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Offset: 0x101b53014 // Return & Params: Num(6) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// Flags: [Final|Native|Public]
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Offset: 0x101b52f98 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf0 // Inherited bytes: 0x78
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnCommit; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x68]; // Offset: 0x88 // Size: 0x68

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Offset: 0x101b53938 // Return & Params: Num(4) Size(0x60)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Offset: 0x101b53804 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// Flags: [Final|Native|Public]
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Offset: 0x101b53788 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xd0 // Inherited bytes: 0x78
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnChange; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x48]; // Offset: 0x88 // Size: 0x48

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce); // Offset: 0x101b53f28 // Return & Params: Num(8) Size(0x50)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce); // Offset: 0x101b53d5c // Return & Params: Num(6) Size(0x48)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x100 // Inherited bytes: 0x78
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnChange; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x78]; // Offset: 0x88 // Size: 0x78

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce); // Offset: 0x101b54390 // Return & Params: Num(7) Size(0x60)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xc8 // Inherited bytes: 0x78
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnChange; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x40]; // Offset: 0x88 // Size: 0x40

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce); // Offset: 0x101b55a68 // Return & Params: Num(6) Size(0x40)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x90 // Inherited bytes: 0x78
struct UAbilityTask_WaitCancel : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnCancel; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Offset: 0x101b55e68 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// Flags: [Final|Native|Public]
	void OnLocalCancelCallback(); // Offset: 0x101b55e54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// Flags: [Final|Native|Public]
	void OnCancelCallback(); // Offset: 0x101b55e40 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0x98 // Inherited bytes: 0x78
struct UAbilityTask_WaitConfirm : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnConfirm; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Offset: 0x101b56150 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// Flags: [Final|Native|Public]
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Offset: 0x101b560d4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa0 // Inherited bytes: 0x78
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnConfirm; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate OnCancel; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x8]; // Offset: 0x98 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Offset: 0x101b5640c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// Flags: [Final|Native|Public]
	void OnLocalConfirmCallback(); // Offset: 0x101b563f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// Flags: [Final|Native|Public]
	void OnLocalCancelCallback(); // Offset: 0x101b563e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// Flags: [Final|Native|Public]
	void OnConfirmCallback(); // Offset: 0x101b563d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// Flags: [Final|Native|Public]
	void OnCancelCallback(); // Offset: 0x101b563bc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x90 // Inherited bytes: 0x78
struct UAbilityTask_WaitDelay : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnFinish; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Offset: 0x101b56744 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b0 // Inherited bytes: 0x78
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	// Fields
	char pad_0x78[0x128]; // Offset: 0x78 // Size: 0x128
	struct UAbilitySystemComponent* ExternalOwner; // Offset: 0x1a0 // Size: 0x08
	char pad_0x1A8[0x8]; // Offset: 0x1a8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// Flags: [Final|Native|Public|HasOutParms]
	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Offset: 0x101b56964 // Return & Params: Num(3) Size(0x2a8)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d0 // Inherited bytes: 0x1b0
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	// Fields
	struct FScriptMulticastDelegate OnApplied; // Offset: 0x1b0 // Size: 0x10
	char pad_0x1C0[0x10]; // Offset: 0x1c0 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Offset: 0x101b56f3c // Return & Params: Num(8) Size(0xc8)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Offset: 0x101b56c48 // Return & Params: Num(8) Size(0xb8)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d0 // Inherited bytes: 0x1b0
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	// Fields
	struct FScriptMulticastDelegate OnApplied; // Offset: 0x1b0 // Size: 0x10
	char pad_0x1C0[0x10]; // Offset: 0x1c0 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Offset: 0x101b57740 // Return & Params: Num(8) Size(0xc8)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Offset: 0x101b5744c // Return & Params: Num(8) Size(0xb8)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x120 // Inherited bytes: 0x78
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate bLocked; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x88]; // Offset: 0x88 // Size: 0x88
	struct UAbilitySystemComponent* ExternalOwner; // Offset: 0x110 // Size: 0x08
	char pad_0x118[0x8]; // Offset: 0x118 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Offset: 0x101b57c50 // Return & Params: Num(6) Size(0xa0)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xb8 // Inherited bytes: 0x78
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnRemoved; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate InvalidHandle; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x20]; // Offset: 0x98 // Size: 0x20

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Offset: 0x101b580dc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// Flags: [Final|Native|Public|HasOutParms]
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Offset: 0x101b5801c // Return & Params: Num(1) Size(0x20)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb0 // Inherited bytes: 0x78
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnChange; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate InvalidHandle; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x18]; // Offset: 0x98 // Size: 0x18

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Offset: 0x101b58480 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// Flags: [Final|Native|Public]
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, IntProperty NewCount, IntProperty OldCount); // Offset: 0x101b58388 // Return & Params: Num(3) Size(0x10)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xa8 // Inherited bytes: 0x78
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate EventReceived; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08
	struct UAbilitySystemComponent* OptionalExternalTarget; // Offset: 0x90 // Size: 0x08
	char pad_0x98[0x10]; // Offset: 0x98 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Offset: 0x101b5872c // Return & Params: Num(5) Size(0x28)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa0 // Inherited bytes: 0x78
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	// Fields
	char pad_0x78[0x10]; // Offset: 0x78 // Size: 0x10
	struct UAbilitySystemComponent* OptionalExternalTarget; // Offset: 0x88 // Size: 0x08
	char pad_0x90[0x10]; // Offset: 0x90 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// Flags: [Native|Public]
	void GameplayTagCallback(struct FGameplayTag Tag, IntProperty NewCount); // Offset: 0x101b58fac // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb0 // Inherited bytes: 0xa0
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	// Fields
	struct FScriptMulticastDelegate Added; // Offset: 0xa0 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Offset: 0x101b58a18 // Return & Params: Num(5) Size(0x28)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb0 // Inherited bytes: 0xa0
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	// Fields
	struct FScriptMulticastDelegate Removed; // Offset: 0xa0 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Offset: 0x101b58d08 // Return & Params: Num(5) Size(0x28)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0x98 // Inherited bytes: 0x78
struct UAbilityTask_WaitInputPress : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnPress; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Offset: 0x101b591e4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// Flags: [Final|Native|Public]
	void OnPressCallback(); // Offset: 0x101b591d0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0x98 // Inherited bytes: 0x78
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnRelease; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Offset: 0x101b594b4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// Flags: [Final|Native|Public]
	void OnReleaseCallback(); // Offset: 0x101b594a0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0x98 // Inherited bytes: 0x78
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnChange; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// Flags: [Final|Native|Public]
	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Offset: 0x101b59828 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Offset: 0x101b59770 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x88 // Inherited bytes: 0x78
struct UAbilityTask_WaitOverlap : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnOverlap; // Offset: 0x78 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Offset: 0x101b59c94 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Offset: 0x101b59b0c // Return & Params: Num(5) Size(0xb0)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xb8 // Inherited bytes: 0x78
struct UAbilityTask_WaitTargetData : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate ValidData; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate Cancelled; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x8]; // Offset: 0x98 // Size: 0x08
	struct AGameplayAbilityTargetActor* TargetActor; // Offset: 0xa0 // Size: 0x08
	char pad_0xA8[0x10]; // Offset: 0xa8 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Offset: 0x101b5a454 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class); // Offset: 0x101b5a31c // Return & Params: Num(5) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// Flags: [Final|Native|Public]
	void OnTargetDataReplicatedCancelledCallback(); // Offset: 0x101b5a308 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// Flags: [Final|Native|Public|HasOutParms]
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag); // Offset: 0x101b5a214 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// Flags: [Final|Native|Public|HasOutParms]
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data); // Offset: 0x101b5a16c // Return & Params: Num(1) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// Flags: [Final|Native|Public|HasOutParms]
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data); // Offset: 0x101b5a0c4 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Offset: 0x101b5a010 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Offset: 0x101b59f00 // Return & Params: Num(4) Size(0x19)
};

// Object Name: Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xa0 // Inherited bytes: 0x78
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	// Fields
	struct FScriptMulticastDelegate OnVelocityChage; // Offset: 0x78 // Size: 0x10
	struct UMovementComponent* CachedMovementComponent; // Offset: 0x88 // Size: 0x08
	char pad_0x90[0x10]; // Offset: 0x90 // Size: 0x10

	// Functions

	// Object Name: Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Offset: 0x101b5a920 // Return & Params: Num(4) Size(0x20)
};

// Object Name: Class GameplayAbilities.GameplayAbility
// Size: 0x440 // Inherited bytes: 0x28
struct UGameplayAbility : UObject {
	// Fields
	char pad_0x28[0x68]; // Offset: 0x28 // Size: 0x68
	struct FGameplayTagContainer AbilityTags; // Offset: 0x90 // Size: 0x20
	char pad_0xB0[0x18]; // Offset: 0xb0 // Size: 0x18
	bool bReplicateInputDirectly; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x28]; // Offset: 0xc9 // Size: 0x28
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // Offset: 0xf1 // Size: 0x01
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // Offset: 0xf2 // Size: 0x01
	bool bServerRespectsRemoteAbilityCancellation; // Offset: 0xf3 // Size: 0x01
	bool bRetriggerInstancedAbility; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // Offset: 0xf8 // Size: 0x20
	struct FGameplayEventData CurrentEventData; // Offset: 0x118 // Size: 0xa8
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // Offset: 0x1c0 // Size: 0x01
	char pad_0x1C1[0x7]; // Offset: 0x1c1 // Size: 0x07
	struct UGameplayEffect* CostGameplayEffectClass; // Offset: 0x1c8 // Size: 0x08
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // Offset: 0x1d0 // Size: 0x10
	struct UGameplayEffect* CooldownGameplayEffectClass; // Offset: 0x1e0 // Size: 0x08
	struct FGameplayTagQuery CancelAbilitiesMatchingTagQuery; // Offset: 0x1e8 // Size: 0x48
	struct FGameplayTagQuery ConstTagQuery; // Offset: 0x230 // Size: 0x48
	struct FGameplayTagContainer CancelAbilitiesWithTag; // Offset: 0x278 // Size: 0x20
	struct FGameplayTagContainer BlockAbilitiesWithTag; // Offset: 0x298 // Size: 0x20
	struct FGameplayTagContainer ActivationOwnedTags; // Offset: 0x2b8 // Size: 0x20
	struct FGameplayTagContainer ActivationRequiredTags; // Offset: 0x2d8 // Size: 0x20
	struct FGameplayTagContainer ActivationBlockedTags; // Offset: 0x2f8 // Size: 0x20
	struct FGameplayTagContainer SourceRequiredTags; // Offset: 0x318 // Size: 0x20
	struct FGameplayTagContainer SourceBlockedTags; // Offset: 0x338 // Size: 0x20
	struct FGameplayTagContainer TargetRequiredTags; // Offset: 0x358 // Size: 0x20
	struct FGameplayTagContainer TargetBlockedTags; // Offset: 0x378 // Size: 0x20
	struct TArray<struct UGameplayTask*> ActiveTasks; // Offset: 0x398 // Size: 0x10
	char pad_0x3A8[0x70]; // Offset: 0x3a8 // Size: 0x70
	struct UAnimMontage* CurrentMontage; // Offset: 0x418 // Size: 0x08
	bool bIsActive; // Offset: 0x420 // Size: 0x01
	bool bIsCancelable; // Offset: 0x421 // Size: 0x01
	char pad_0x422[0x16]; // Offset: 0x422 // Size: 0x16
	bool bIsBlockingOtherAbilities; // Offset: 0x438 // Size: 0x01
	char pad_0x439[0x7]; // Offset: 0x439 // Size: 0x07

	// Functions

	// Object Name: Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// Flags: [Native|Public|BlueprintCallable]
	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Offset: 0x101b5cc74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// Flags: [Native|Public|BlueprintCallable]
	void SetCanBeCanceled(bool bCanBeCanceled); // Offset: 0x101b5cbe8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	// Flags: [Native|Protected|BlueprintCallable]
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Offset: 0x101b5cab4 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveGrantedByEffect(); // Offset: 0x101b5caa0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.MontageStop
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void MontageStop(float OverrideBlendOutTime); // Offset: 0x101b5ca24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Offset: 0x101b5c970 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void MontageJumpToSection(struct FName SectionName); // Offset: 0x101b5c8f4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Offset: 0x101b5c848 // Return & Params: Num(2) Size(0x70)

	// Object Name: Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Offset: 0x101b5c7ec // Return & Params: Num(1) Size(0x60)

	// Object Name: Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level); // Offset: 0x101b5c6fc // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// Flags: [Event|Protected|BlueprintEvent|Const]
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xe9)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Offset: 0x101b5c678 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// Flags: [Event|Protected|BlueprintEvent]
	void K2_OnEndAbility(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Offset: 0x101b5c548 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Offset: 0x101b5c41c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_EndAbility
	// Flags: [Native|Protected|BlueprintCallable]
	void K2_EndAbility(); // Offset: 0x101b5c400 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	// Flags: [Event|Public|BlueprintEvent]
	void K2_CommitExecute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// Flags: [Native|Public|BlueprintCallable]
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Offset: 0x101b5c364 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// Flags: [Native|Public|BlueprintCallable]
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Offset: 0x101b5c284 // Return & Params: Num(3) Size(0x3)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	// Flags: [Native|Public|BlueprintCallable]
	bool K2_CommitAbility(); // Offset: 0x101b5c248 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// Flags: [Native|Public|BlueprintCallable]
	bool K2_CheckAbilityCost(); // Offset: 0x101b5c20c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// Flags: [Native|Public|BlueprintCallable]
	bool K2_CheckAbilityCooldown(); // Offset: 0x101b5c1d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CancelAbility
	// Flags: [Final|Native|Public|BlueprintCallable]
	void K2_CancelAbility(); // Offset: 0x101b5c1bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent|Const]
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer& RelevantTags); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x61)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Offset: 0x101b5c034 // Return & Params: Num(3) Size(0x48)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Offset: 0x101b5bf40 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Offset: 0x101b5bdcc // Return & Params: Num(3) Size(0x21)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xa8)

	// Object Name: Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// Flags: [Event|Protected|BlueprintEvent]
	void K2_ActivateAbility(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void InvalidateClientPredictionKey(); // Offset: 0x101b5bdb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Offset: 0x101b5bd84 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetOwningActorFromActorInfo(); // Offset: 0x101b5bd50 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Offset: 0x101b5bcec // Return & Params: Num(1) Size(0x18)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetCurrentSourceObject(); // Offset: 0x101b5bcb8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UAnimMontage* GetCurrentMontage(); // Offset: 0x101b5bc84 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetCooldownTimeRemaining(); // Offset: 0x101b5bc50 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	// Flags: [Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Offset: 0x101b5bb54 // Return & Params: Num(2) Size(0x38)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetAvatarActorFromActorInfo(); // Offset: 0x101b5bb20 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayAbilityActorInfo GetActorInfo(); // Offset: 0x101b5bad8 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetAbilityLevel(); // Offset: 0x101b5baa4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void EndTaskByInstanceName(struct FName InstanceName); // Offset: 0x101b5ba28 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.EndAbilityState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Offset: 0x101b5b9ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Offset: 0x101b5b8ec // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void CancelTaskByInstanceName(struct FName InstanceName); // Offset: 0x101b5b870 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, IntProperty StacksToRemove); // Offset: 0x101b5b770 // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, IntProperty StacksToRemove); // Offset: 0x101b5b670 // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, IntProperty GameplayEffectLevel, IntProperty Stacks); // Offset: 0x101b5b4c0 // Return & Params: Num(5) Size(0x40)

	// Object Name: Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, IntProperty GameplayEffectLevel, IntProperty Stacks); // Offset: 0x101b5b3b8 // Return & Params: Num(4) Size(0x18)
};

// Object Name: Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x440 // Inherited bytes: 0x440
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Object Name: Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x478 // Inherited bytes: 0x440
struct UGameplayAbility_Montage : UGameplayAbility {
	// Fields
	struct UAnimMontage* MontageToPlay; // Offset: 0x440 // Size: 0x08
	float PlayRate; // Offset: 0x448 // Size: 0x04
	char pad_0x44C[0x4]; // Offset: 0x44c // Size: 0x04
	struct FName SectionName; // Offset: 0x450 // Size: 0x08
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // Offset: 0x458 // Size: 0x10
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // Offset: 0x468 // Size: 0x10
};

// Object Name: Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xd8 // Inherited bytes: 0xd8
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Object Name: Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 // Inherited bytes: 0x30
struct UGameplayAbilitySet : UDataAsset {
	// Fields
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // Offset: 0x30 // Size: 0x10
};

// Object Name: Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5b0 // Inherited bytes: 0x4b0
struct AGameplayAbilityTargetActor : AActor {
	// Fields
	bool ShouldProduceTargetDataOnServer; // Offset: 0x4a9 // Size: 0x01
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // Offset: 0x4b0 // Size: 0x60
	char pad_0x511[0x2f]; // Offset: 0x511 // Size: 0x2f
	struct APlayerController* MasterPC; // Offset: 0x540 // Size: 0x08
	struct UGameplayAbility* OwningAbility; // Offset: 0x548 // Size: 0x08
	bool bDestroyOnConfirmation; // Offset: 0x550 // Size: 0x01
	char pad_0x551[0x7]; // Offset: 0x551 // Size: 0x07
	struct AActor* SourceActor; // Offset: 0x558 // Size: 0x08
	struct FWorldReticleParameters ReticleParams; // Offset: 0x560 // Size: 0x0c
	char pad_0x56C[0x4]; // Offset: 0x56c // Size: 0x04
	struct AGameplayAbilityWorldReticle* ReticleClass; // Offset: 0x570 // Size: 0x08
	struct FGameplayTargetDataFilterHandle filter; // Offset: 0x578 // Size: 0x10
	bool bDebug; // Offset: 0x588 // Size: 0x01
	char pad_0x589[0x17]; // Offset: 0x589 // Size: 0x17
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // Offset: 0x5a0 // Size: 0x08
	char pad_0x5A8[0x8]; // Offset: 0x5a8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// Flags: [Native|Public]
	void ConfirmTargeting(); // Offset: 0x101b606f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// Flags: [Native|Public]
	void CancelTargeting(); // Offset: 0x101b606d8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5d0 // Inherited bytes: 0x5b0
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	// Fields
	float MaxRange; // Offset: 0x5a8 // Size: 0x04
	struct FCollisionProfileName TraceProfile; // Offset: 0x5b0 // Size: 0x08
	bool bTraceAffectsAimPitch; // Offset: 0x5b8 // Size: 0x01
	char pad_0x5BD[0x13]; // Offset: 0x5bd // Size: 0x13
};

// Object Name: Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x5f0 // Inherited bytes: 0x5d0
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	// Fields
	float CollisionRadius; // Offset: 0x5c4 // Size: 0x04
	float CollisionHeight; // Offset: 0x5c8 // Size: 0x04
	char pad_0x5D8[0x18]; // Offset: 0x5d8 // Size: 0x18
};

// Object Name: Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x600 // Inherited bytes: 0x5f0
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	// Fields
	struct UObject* PlacedActorClass; // Offset: 0x5e8 // Size: 0x08
	struct UMaterialInterface* PlacedActorMaterial; // Offset: 0x5f0 // Size: 0x08
};

// Object Name: Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5b0 // Inherited bytes: 0x5b0
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	// Fields
	float Radius; // Offset: 0x5a8 // Size: 0x04
};

// Object Name: Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5d0 // Inherited bytes: 0x5d0
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Object Name: Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x4d0 // Inherited bytes: 0x4b0
struct AGameplayAbilityWorldReticle : AActor {
	// Fields
	struct FWorldReticleParameters Parameters; // Offset: 0x4ac // Size: 0x0c
	bool bFaceOwnerFlat; // Offset: 0x4b8 // Size: 0x01
	bool bSnapToTargetedActor; // Offset: 0x4b9 // Size: 0x01
	bool bIsTargetValid; // Offset: 0x4ba // Size: 0x01
	bool bIsTargetAnActor; // Offset: 0x4bb // Size: 0x01
	struct APlayerController* MasterPC; // Offset: 0x4c0 // Size: 0x08
	struct AActor* TargetingActor; // Offset: 0x4c8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// Flags: [Event|Public|BlueprintEvent]
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnValidTargetChanged(bool bNewValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// Flags: [Event|Public|BlueprintEvent]
	void OnTargetingAnActor(bool bNewValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// Flags: [Event|Public|BlueprintEvent]
	void OnParametersInitialized(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FaceTowardSource(bool bFaceIn2D); // Offset: 0x101b62064 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x4e8 // Inherited bytes: 0x4d0
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	// Fields
	struct UCapsuleComponent* CollisionComponent; // Offset: 0x4d0 // Size: 0x08
	struct TArray<struct UActorComponent*> VisualizationComponents; // Offset: 0x4d8 // Size: 0x10
};

// Object Name: Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayCueInterface : UInterface {
	// Functions

	// Object Name: Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	void ForwardGameplayCueToParent(); // Offset: 0x101b62958 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc0)
};

// Object Name: Class GameplayAbilities.GameplayCueManager
// Size: 0x2f8 // Inherited bytes: 0x30
struct UGameplayCueManager : UDataAsset {
	// Fields
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // Offset: 0x30 // Size: 0x58
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // Offset: 0x88 // Size: 0x58
	char pad_0xE0[0x1b8]; // Offset: 0xe0 // Size: 0x1b8
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // Offset: 0x298 // Size: 0x10
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // Offset: 0x2a8 // Size: 0x10
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // Offset: 0x2b8 // Size: 0x10
	IntProperty GameplayCueSendContextCount; // Offset: 0x2c8 // Size: 0x04
	char pad_0x2CC[0x4]; // Offset: 0x2cc // Size: 0x04
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // Offset: 0x2d0 // Size: 0x10
	char pad_0x2E0[0x18]; // Offset: 0x2e0 // Size: 0x18
};

// Object Name: Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x518 // Inherited bytes: 0x4b0
struct AGameplayCueNotify_Actor : AActor {
	// Fields
	bool bAutoDestroyOnRemove; // Offset: 0x4a9 // Size: 0x01
	float AutoDestroyDelay; // Offset: 0x4ac // Size: 0x04
	bool WarnIfTimelineIsStillRunning; // Offset: 0x4b0 // Size: 0x01
	bool WarnIfLatentActionIsStillRunning; // Offset: 0x4b1 // Size: 0x01
	char pad_0x4B7[0x1]; // Offset: 0x4b7 // Size: 0x01
	struct FGameplayTag GameplayCueTag; // Offset: 0x4b8 // Size: 0x08
	struct FGameplayTagReferenceHelper ReferenceHelper; // Offset: 0x4c0 // Size: 0x10
	struct FName GameplayCueName; // Offset: 0x4d0 // Size: 0x08
	bool bAutoAttachToOwner; // Offset: 0x4d8 // Size: 0x01
	bool IsOverride; // Offset: 0x4d9 // Size: 0x01
	bool bUniqueInstancePerInstigator; // Offset: 0x4da // Size: 0x01
	bool bUniqueInstancePerSourceObject; // Offset: 0x4db // Size: 0x01
	bool bAllowMultipleOnActiveEvents; // Offset: 0x4dc // Size: 0x01
	bool bAllowMultipleWhileActiveEvents; // Offset: 0x4dd // Size: 0x01
	char pad_0x4DE[0x2]; // Offset: 0x4de // Size: 0x02
	IntProperty NumPreallocatedInstances; // Offset: 0x4e0 // Size: 0x04
	char pad_0x4E4[0x34]; // Offset: 0x4e4 // Size: 0x34

	// Functions

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b634b8 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b63380 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// Flags: [Native|Public]
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Offset: 0x101b632fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b631c4 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b6308c // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc8)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// Flags: [Native|Public|BlueprintCallable]
	void K2_EndGameplayCue(); // Offset: 0x101b63070 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x50 // Inherited bytes: 0x28
struct UGameplayCueNotify_Static : UObject {
	// Fields
	struct FGameplayTag GameplayCueTag; // Offset: 0x28 // Size: 0x08
	struct FGameplayTagReferenceHelper ReferenceHelper; // Offset: 0x30 // Size: 0x10
	struct FName GameplayCueName; // Offset: 0x40 // Size: 0x08
	bool IsOverride; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07

	// Functions

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b641c8 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b64090 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b63f58 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Offset: 0x101b63e20 // Return & Params: Num(3) Size(0xc1)

	// Object Name: Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc8)
};

// Object Name: Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x60 // Inherited bytes: 0x50
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	// Fields
	struct USoundBase* Sound; // Offset: 0x50 // Size: 0x08
	struct UParticleSystem* ParticleSystem; // Offset: 0x58 // Size: 0x08
};

// Object Name: Class GameplayAbilities.GameplayCueSet
// Size: 0x90 // Inherited bytes: 0x30
struct UGameplayCueSet : UDataAsset {
	// Fields
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x50]; // Offset: 0x40 // Size: 0x50
};

// Object Name: Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayCueTranslator : UObject {
};

// Object Name: Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Object Name: Class GameplayAbilities.GameplayEffect
// Size: 0x638 // Inherited bytes: 0x28
struct UGameplayEffect : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	enum class EGameplayEffectDurationType DurationPolicy; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // Offset: 0x38 // Size: 0x1c8
	struct FScalableFloat Period; // Offset: 0x200 // Size: 0x28
	bool bExecutePeriodicEffectOnApplication; // Offset: 0x228 // Size: 0x01
	char pad_0x229[0x7]; // Offset: 0x229 // Size: 0x07
	struct TArray<struct FGameplayModifierInfo> Modifiers; // Offset: 0x230 // Size: 0x10
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // Offset: 0x240 // Size: 0x10
	struct FScalableFloat ChanceToApplyToTarget; // Offset: 0x250 // Size: 0x28
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // Offset: 0x278 // Size: 0x10
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // Offset: 0x288 // Size: 0x10
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // Offset: 0x298 // Size: 0x10
	struct TArray<struct UGameplayEffect*> OverflowEffects; // Offset: 0x2a8 // Size: 0x10
	bool bDenyOverflowApplication; // Offset: 0x2b8 // Size: 0x01
	bool bClearStackOnOverflow; // Offset: 0x2b9 // Size: 0x01
	char pad_0x2BA[0x6]; // Offset: 0x2ba // Size: 0x06
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // Offset: 0x2c0 // Size: 0x10
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // Offset: 0x2d0 // Size: 0x10
	bool bRequireModifierSuccessToTriggerCues; // Offset: 0x2e0 // Size: 0x01
	bool bSuppressStackingCues; // Offset: 0x2e1 // Size: 0x01
	char pad_0x2E2[0x6]; // Offset: 0x2e2 // Size: 0x06
	struct TArray<struct FGameplayEffectCue> GameplayCues; // Offset: 0x2e8 // Size: 0x10
	struct UGameplayEffectUIData* UIData; // Offset: 0x2f8 // Size: 0x08
	struct FInheritedTagContainer InheritableGameplayEffectTags; // Offset: 0x300 // Size: 0x60
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // Offset: 0x360 // Size: 0x60
	struct FGameplayTagRequirements OngoingTagRequirements; // Offset: 0x3c0 // Size: 0x40
	struct FGameplayTagRequirements ApplicationTagRequirements; // Offset: 0x400 // Size: 0x40
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // Offset: 0x440 // Size: 0x60
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // Offset: 0x4a0 // Size: 0x40
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // Offset: 0x4e0 // Size: 0x138
	char pad_0x618[0x1]; // Offset: 0x618 // Size: 0x01
	enum class EGameplayEffectStackingType StackingType; // Offset: 0x619 // Size: 0x01
	char pad_0x61A[0x2]; // Offset: 0x61a // Size: 0x02
	IntProperty StackLimitCount; // Offset: 0x61c // Size: 0x04
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // Offset: 0x620 // Size: 0x01
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // Offset: 0x621 // Size: 0x01
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // Offset: 0x622 // Size: 0x01
	char pad_0x623[0x5]; // Offset: 0x623 // Size: 0x05
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // Offset: 0x628 // Size: 0x10
};

// Object Name: Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 // Inherited bytes: 0x28
struct UGameplayEffectCalculation : UObject {
	// Fields
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayEffectCustomApplicationRequirement : UObject {
	// Functions

	// Object Name: Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC); // Offset: 0x101b6e6a8 // Return & Params: Num(4) Size(0x2a9)
};

// Object Name: Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 // Inherited bytes: 0x38
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	// Fields
	bool bRequiresPassedInTags; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07

	// Functions

	// Object Name: Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Offset: 0x101b6ec90 // Return & Params: Num(2) Size(0xc0)
};

// Object Name: Class GameplayAbilities.GameplayEffectTemplate
// Size: 0x638 // Inherited bytes: 0x638
struct UGameplayEffectTemplate : UGameplayEffect {
};

// Object Name: Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayEffectUIData : UObject {
};

// Object Name: Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 // Inherited bytes: 0x28
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	// Fields
	struct FText Description; // Offset: 0x28 // Size: 0x18
};

// Object Name: Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 // Inherited bytes: 0x38
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	// Fields
	bool bAllowNonNetAuthorityDependencyRegistration; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07

	// Functions

	// Object Name: Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // Offset: 0x101b6fcf4 // Return & Params: Num(2) Size(0x29c)
};

// Object Name: Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1d0 // Inherited bytes: 0x30
struct UGameplayTagReponseTable : UDataAsset {
	// Fields
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x190]; // Offset: 0x40 // Size: 0x190

	// Functions

	// Object Name: Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// Flags: [Final|Native|Protected]
	void TagResponseEvent(struct FGameplayTag Tag, IntProperty NewCount, struct UAbilitySystemComponent* ASC, IntProperty idx); // Offset: 0x101b780c4 // Return & Params: Num(4) Size(0x1c)
};

// Object Name: Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UTickableAttributeSetInterface : UInterface {
};

