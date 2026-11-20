#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GameplayTagEvent.UAEGameplayTagEventNodeBase
// Size: 0xe0 // Inherited bytes: 0x28
struct UUAEGameplayTagEventNodeBase : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	struct FGameplayTagQuery Requirements; // Offset: 0x80 // Size: 0x48
	StrProperty LuaFilePath; // Offset: 0xc8 // Size: 0x10
	bool bInitialAutoVerify; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x7]; // Offset: 0xd9 // Size: 0x07

	// Functions

	// Object Name: Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Validate
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void Validate(struct AActor* NodeTarget, struct UObject* Observer); // Offset: 0x102252c24 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnUnregistered
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void OnUnregistered(struct AActor* NodeTarget, struct UObject* Observer); // Offset: 0x102252b68 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnRegistered
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void OnRegistered(struct AActor* NodeTarget, struct UObject* Observer); // Offset: 0x102252aac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Invalidate
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void Invalidate(struct AActor* NodeTarget, struct UObject* Observer); // Offset: 0x1022529f0 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class GameplayTagEvent.UAEGameplayTagImposerSubsystem
// Size: 0x170 // Inherited bytes: 0x30
struct UUAEGameplayTagImposerSubsystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x140]; // Offset: 0x30 // Size: 0x140

	// Functions

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UntagActor
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	void UntagActor(struct AActor* Actor, struct TArray<struct FGameplayTag>& InTags); // Offset: 0x102253f70 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagQueryUpdatedEvent
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	void UnregisterActorTagQueryUpdatedEvent(struct AActor* Actor, IntProperty Handle); // Offset: 0x102253ec0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagChangedEvent
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool UnregisterActorTagChangedEvent(struct AActor* Actor, struct FGameplayTag& InTag, DelegateProperty& InDelegate); // Offset: 0x102253d8c // Return & Params: Num(4) Size(0x21)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.TagActor
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	void TagActor(struct AActor* Actor, struct TArray<struct FGameplayTag>& InTags); // Offset: 0x102253cb0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllMatchingTags
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	void RemoveAllMatchingTags(struct AActor* Actor, struct FGameplayTag& Tag); // Offset: 0x102253bf0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllActorTagEventNode
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	void RemoveAllActorTagEventNode(struct AActor* TargetActor); // Offset: 0x102253b74 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveActorTagEventNode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	void RemoveActorTagEventNode(struct UObject* WorldContextObject, IntProperty Handle); // Offset: 0x102253ac4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagQueryUpdatedEvent
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	IntProperty RegisterActorTagQueryUpdatedEvent(struct AActor* Actor, struct FGameplayTagQuery& Query, DelegateProperty& InDelegate); // Offset: 0x102253960 // Return & Params: Num(4) Size(0x64)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagChangedEvent
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool RegisterActorTagChangedEvent(struct AActor* Actor, struct FGameplayTag& InTag, DelegateProperty& InDelegate); // Offset: 0x10225382c // Return & Params: Num(4) Size(0x21)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.OnActorEndPlay
	// Flags: [Final|Native|Protected]
	void OnActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Offset: 0x102253774 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.Get
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UUAEGameplayTagImposerSubsystem* Get(struct UObject* WorldContextObject); // Offset: 0x1022536f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.FindFirstActorWithTag
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct AActor* FindFirstActorWithTag(struct UObject* WorldContextObject, struct FGameplayTag& SearchTag, bool bExactMatch); // Offset: 0x1022535e4 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.FindActorsWithTag
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	IntProperty FindActorsWithTag(struct UObject* WorldContextObject, struct FGameplayTag& SearchTag, struct TArray<struct AActor*>& OutActors, bool bExactMatch); // Offset: 0x10225345c // Return & Params: Num(5) Size(0x28)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ClearActorTags
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	void ClearActorTags(struct AActor* Actor, bool bNotifyAll); // Offset: 0x1022533a4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ApplyActorTagEventNode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	IntProperty ApplyActorTagEventNode(struct AActor* TargetActor, struct UObject* NodeOwner, struct UUAEGameplayTagEventNodeBase* NodeBase); // Offset: 0x1022532b4 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasMatchingTag
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool ActorHasMatchingTag(struct AActor* Actor, struct FGameplayTag& TagToCheck, bool bExactMatch); // Offset: 0x1022531a0 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAnyTags
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool ActorHasAnyTags(struct AActor* Actor, struct TArray<struct FGameplayTag>& InTags, bool bExactMatch); // Offset: 0x102253068 // Return & Params: Num(4) Size(0x1a)

	// Object Name: Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAllTags
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool ActorHasAllTags(struct AActor* Actor, struct TArray<struct FGameplayTag>& InTags, bool bExactMatch); // Offset: 0x102252f30 // Return & Params: Num(4) Size(0x1a)
};

