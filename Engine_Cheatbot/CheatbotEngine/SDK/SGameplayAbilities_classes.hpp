#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate
// Size: 0x130 // Inherited bytes: 0x130
struct UAbilityTask_Tick_WaitAbilityActivate : UAbilityTask_WaitAbilityActivate {
	// Functions

	// Object Name: Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirementsInTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirementsInTick(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Offset: 0x101b7b010 // Return & Params: Num(5) Size(0x58)

	// Object Name: Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Offset: 0x101b7ae78 // Return & Params: Num(5) Size(0x60)

	// Object Name: Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Offset: 0x101b7acf8 // Return & Params: Num(6) Size(0x28)
};

// Object Name: Class SGameplayAbilities.SAbilitySystemBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct USAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.RequestGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGameplayTag RequestGameplayTag(StrProperty InTagName, bool ErrorIfNotFound); // Offset: 0x101b7b4f8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.CreateGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct FGameplayTagContainer CreateGameplayTagContainer(struct TArray<struct FGameplayTag>& SourceTags); // Offset: 0x101b7b428 // Return & Params: Num(2) Size(0x30)
};

// Object Name: Class SGameplayAbilities.SAbilitySystemComponent
// Size: 0x1218 // Inherited bytes: 0x1140
struct USAbilitySystemComponent : UAbilitySystemComponent {
	// Fields
	char pad_0x1140[0x58]; // Offset: 0x1140 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x1198 // Size: 0x10
	struct TArray<struct UGameplayAbility*> PreloadedAbilities; // Offset: 0x11a8 // Size: 0x10
	struct TArray<struct FGameplayAbilitySpecHandle> PreloadedAbilityHandles; // Offset: 0x11b8 // Size: 0x10
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x11c8 // Size: 0x50

	// Functions

	// Object Name: Function SGameplayAbilities.SAbilitySystemComponent.TryActivateAbilitiesByTagString
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool TryActivateAbilitiesByTagString(StrProperty AbilityTag, bool bAllowRemoteActivation); // Offset: 0x101b7b910 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function SGameplayAbilities.SAbilitySystemComponent.ReloadAbilities
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReloadAbilities(); // Offset: 0x101b7b8fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SGameplayAbilities.SAbilitySystemComponent.GiveAbilityByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FGameplayAbilitySpecHandle GiveAbilityByClass(struct UGameplayAbility* AbilityClass); // Offset: 0x101b7b870 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function SGameplayAbilities.SAbilitySystemComponent.CancelAbilitiesByTagString
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CancelAbilitiesByTagString(StrProperty AbilityTag); // Offset: 0x101b7b78c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class SGameplayAbilities.SGameplayAbility
// Size: 0x4a8 // Inherited bytes: 0x440
struct USGameplayAbility : UGameplayAbility {
	// Fields
	char pad_0x440[0x58]; // Offset: 0x440 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x498 // Size: 0x10

	// Functions

	// Object Name: Function SGameplayAbilities.SGameplayAbility.K2_OnGiveAbility
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void K2_OnGiveAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpec& Spec); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb8)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddTargetRequiredTag
	// Flags: [Final|Native|Public]
	void AddTargetRequiredTag(StrProperty TagName); // Offset: 0x101b7c530 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddTargetBlockedTag
	// Flags: [Final|Native|Public]
	void AddTargetBlockedTag(StrProperty TagName); // Offset: 0x101b7c44c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddSourceRequiredTag
	// Flags: [Final|Native|Public]
	void AddSourceRequiredTag(StrProperty TagName); // Offset: 0x101b7c368 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddSourceBlockedTag
	// Flags: [Final|Native|Public]
	void AddSourceBlockedTag(StrProperty TagName); // Offset: 0x101b7c284 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddCancelAbilityTag
	// Flags: [Final|Native|Public]
	void AddCancelAbilityTag(StrProperty TagName); // Offset: 0x101b7c1a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddBlockAbilityTag
	// Flags: [Final|Native|Public]
	void AddBlockAbilityTag(StrProperty TagName); // Offset: 0x101b7c0bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddActivationRequiredTag
	// Flags: [Final|Native|Public]
	void AddActivationRequiredTag(StrProperty TagName); // Offset: 0x101b7bfd8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddActivationOwnedTag
	// Flags: [Final|Native|Public]
	void AddActivationOwnedTag(StrProperty TagName); // Offset: 0x101b7bef4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddActivationBlockedTag
	// Flags: [Final|Native|Public]
	void AddActivationBlockedTag(StrProperty TagName); // Offset: 0x101b7be10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SGameplayAbilities.SGameplayAbility.AddAbilityTag
	// Flags: [Final|Native|Public]
	void AddAbilityTag(StrProperty TagName); // Offset: 0x101b7bd2c // Return & Params: Num(1) Size(0x10)
};

