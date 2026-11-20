#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Skill.PrivateNodeLuaInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UPrivateNodeLuaInterface : ULuaOverriderInterface {
	// Functions

	// Object Name: Function Skill.PrivateNodeLuaInterface.SetPrivateUniqueKey
	// Flags: [Native|Public]
	void SetPrivateUniqueKey(StrProperty NewKey); // Offset: 0x101cb0ee0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.PrivateNodeLuaInterface.GetPrivateUniqueKey
	// Flags: [Native|Public]
	StrProperty GetPrivateUniqueKey(); // Offset: 0x101cb0e74 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Skill.UniqueKeyOwnerLuaInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUniqueKeyOwnerLuaInterface : ULuaOverriderInterface {
};

// Object Name: Class Skill.SharedDelegate
// Size: 0x48 // Inherited bytes: 0x28
struct USharedDelegate : UObject {
	// Fields
	struct UObject* FunctionOuter; // Offset: 0x28 // Size: 0x08
	struct FName FunctionName; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10

	// Functions

	// Object Name: Function Skill.SharedDelegate.EventTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EventTrigger(); // Offset: 0x101cb14c4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Skill.LuaEventSharedDelegate
// Size: 0x48 // Inherited bytes: 0x48
struct ULuaEventSharedDelegate : USharedDelegate {
};

// Object Name: Class Skill.SharedDelegateManager
// Size: 0x140 // Inherited bytes: 0x30
struct USharedDelegateManager : UWorldSubsystem {
	// Fields
	MapProperty DelegateMap; // Offset: 0x30 // Size: 0x50
	MapProperty MultiDelegateMap; // Offset: 0x80 // Size: 0x50
	MapProperty LuaEventRegistMap; // Offset: 0xd0 // Size: 0x50
	struct TArray<struct USharedDelegate*> CacheSharedDelegates; // Offset: 0x120 // Size: 0x10
	struct TArray<struct ULuaEventSharedDelegate*> CacheLuaEventSharedDelegates; // Offset: 0x130 // Size: 0x10
};

// Object Name: Class Skill.SkillNodeLuaInterface
// Size: 0x28 // Inherited bytes: 0x28
struct USkillNodeLuaInterface : UInterface {
};

// Object Name: Class Skill.UTSkillBaseWidget
// Size: 0x78 // Inherited bytes: 0x28
struct UUTSkillBaseWidget : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
	bool bWidgetEnabled; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	StrProperty EffectName; // Offset: 0x50 // Size: 0x10
	struct AActor* BuffTargetActor; // Offset: 0x60 // Size: 0x08
	struct TWeakObjectPtr<struct AUTSkill> OwnerSkill; // Offset: 0x68 // Size: 0x08
	struct UActorComponent* CurOwnerActorComponent; // Offset: 0x70 // Size: 0x08

	// Functions

	// Object Name: Function Skill.UTSkillBaseWidget.IsSetValueAsNewDataWhenNotExist
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsSetValueAsNewDataWhenNotExist(struct FName& KeyName); // Offset: 0x101cbd044 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillBaseWidget.GetUAEBlackboard
	// Flags: [Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct UUAEBlackboard* GetUAEBlackboard(); // Offset: 0x101cbd008 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillBaseWidget.GetOwnerSkillManager
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUTSkillManagerComponent* GetOwnerSkillManager(); // Offset: 0x101cbcfcc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillBaseWidget.GetOwnerSkillID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetOwnerSkillID(); // Offset: 0x101cbcf98 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillBaseWidget.GetOwnerPawn
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetOwnerPawn(); // Offset: 0x101cbcf5c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Skill.SkillTriggerData
// Size: 0x90 // Inherited bytes: 0x78
struct USkillTriggerData : UUTSkillBaseWidget {
	// Fields
	struct TArray<struct FUAEBlackboardKeySelector> UploadSkillTriggerData; // Offset: 0x78 // Size: 0x10
	enum class UTSkillEventType CurSkillEvent; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07

	// Functions

	// Object Name: Function Skill.SkillTriggerData.GetSkillEventType
	// Flags: [Final|Native|Public|BlueprintCallable]
	enum class UTSkillEventType GetSkillEventType(); // Offset: 0x101cb1c18 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Skill.SkillTriggerData_Lua
// Size: 0x1b8 // Inherited bytes: 0x90
struct USkillTriggerData_Lua : USkillTriggerData {
	// Fields
	char pad_0x90[0xc0]; // Offset: 0x90 // Size: 0xc0
	MapProperty ActionParams; // Offset: 0x150 // Size: 0x50
	bool bEnableLuaPrivateData; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A1[0x7]; // Offset: 0x1a1 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0x1a8 // Size: 0x10
};

// Object Name: Class Skill.UTSkill
// Size: 0x7f8 // Inherited bytes: 0x570
struct AUTSkill : ALuaActor {
	// Fields
	char pad_0x570[0x20]; // Offset: 0x570 // Size: 0x20
	bool bNeedSync; // Offset: 0x590 // Size: 0x01
	char pad_0x591[0x7]; // Offset: 0x591 // Size: 0x07
	StrProperty SkillName; // Offset: 0x598 // Size: 0x10
	struct FName SkillGroup; // Offset: 0x5a8 // Size: 0x08
	bool bSinglePhaseRep; // Offset: 0x5b0 // Size: 0x01
	enum class ESkillCastType SkillCastType; // Offset: 0x5b1 // Size: 0x01
	bool bShouldMonopolize; // Offset: 0x5b2 // Size: 0x01
	bool bMonopolizeSelf; // Offset: 0x5b3 // Size: 0x01
	bool bConsumeDelayTask; // Offset: 0x5b4 // Size: 0x01
	char pad_0x5B5[0x3]; // Offset: 0x5b5 // Size: 0x03
	IntProperty SkillID; // Offset: 0x5b8 // Size: 0x04
	IntProperty SkillTemplateID; // Offset: 0x5bc // Size: 0x04
	SetProperty SkillTags; // Offset: 0x5c0 // Size: 0x50
	bool bMeleeSkill; // Offset: 0x610 // Size: 0x01
	bool bMoveSkill; // Offset: 0x611 // Size: 0x01
	bool bCheckFirstPhaseConditions; // Offset: 0x612 // Size: 0x01
	bool bNeedCheckSimulateCondition; // Offset: 0x613 // Size: 0x01
	bool bNeedAutonomousClientSimulate; // Offset: 0x614 // Size: 0x01
	bool bAutoShowRegisteredSkillUI; // Offset: 0x615 // Size: 0x01
	bool bKeepCastingWhenDisconnect; // Offset: 0x616 // Size: 0x01
	char pad_0x617[0x1]; // Offset: 0x617 // Size: 0x01
	struct FUTSkillCreateData BaseData; // Offset: 0x618 // Size: 0x70
	bool bCoolDownWhenStop; // Offset: 0x688 // Size: 0x01
	char pad_0x689[0x3]; // Offset: 0x689 // Size: 0x03
	IntProperty CoolDownWhenStopIndex; // Offset: 0x68c // Size: 0x04
	bool bUseNewSkillCD; // Offset: 0x690 // Size: 0x01
	char pad_0x691[0x7]; // Offset: 0x691 // Size: 0x07
	struct TArray<struct FUTSkillBlackboardParameter> SkillBlackboardParamList; // Offset: 0x698 // Size: 0x10
	bool bSetBlackboardDefaultData; // Offset: 0x6a8 // Size: 0x01
	bool bGsListener; // Offset: 0x6a9 // Size: 0x01
	bool bRecycleWhenStop; // Offset: 0x6aa // Size: 0x01
	bool bHasBlackboradSync; // Offset: 0x6ab // Size: 0x01
	char pad_0x6AC[0x4]; // Offset: 0x6ac // Size: 0x04
	StrProperty SkillTimeScaleAttrName; // Offset: 0x6b0 // Size: 0x10
	struct FName SkillTimeScaleBlackboardKey; // Offset: 0x6c0 // Size: 0x08
	struct USkillTriggerData* SkillTriggerData; // Offset: 0x6c8 // Size: 0x08
	MapProperty InstancedNodeNameToMemoryMap; // Offset: 0x6d0 // Size: 0x50
	IntProperty InstancedNodesTotalSize; // Offset: 0x720 // Size: 0x04
	char pad_0x724[0x4]; // Offset: 0x724 // Size: 0x04
	struct TArray<StrProperty> ParentFolderPath; // Offset: 0x728 // Size: 0x10
	IntProperty CurComponentNameIndex; // Offset: 0x738 // Size: 0x04
	char pad_0x73C[0xa4]; // Offset: 0x73c // Size: 0xa4
	struct TWeakObjectPtr<struct UUTSkillManagerComponent> SpecificSkillCompRef; // Offset: 0x7e0 // Size: 0x08
	struct TWeakObjectPtr<struct UUAEBlackboard> SpecificBlackBlackRef; // Offset: 0x7e8 // Size: 0x08
	struct UActorComponent* CurOwnerActorComponent; // Offset: 0x7f0 // Size: 0x08

	// Functions

	// Object Name: Function Skill.UTSkill.VerifyServerSkillData
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool VerifyServerSkillData(struct UUTSkillManagerComponent* SkillManagerComponent, enum class UTSkillEventType InEventType); // Offset: 0x101cb2dd8 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Skill.UTSkill.StopSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable]
	void StopSkillCoolDown(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty CoolDownIndex); // Offset: 0x101cb2d18 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkill.ResetSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable]
	void ResetSkillCoolDown(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty CoolDownIndex); // Offset: 0x101cb2c58 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkill.OnEvent
	// Flags: [Native|Public|BlueprintCallable]
	bool OnEvent(struct UUTSkillManagerComponent* SkillManagerComponent, enum class UTSkillEventType TheEventType, IntProperty PhaseIndex); // Offset: 0x101cb2b4c // Return & Params: Num(4) Size(0x11)

	// Object Name: Function Skill.UTSkill.JumpToPhase
	// Flags: [Native|Public]
	bool JumpToPhase(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty PhaseId); // Offset: 0x101cb2a7c // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Skill.UTSkill.IsMeleeSkill
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsMeleeSkill(); // Offset: 0x101cb2a40 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkill.IsEnableSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable]
	bool IsEnableSkillCoolDown(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cb29ac // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkill.IsCDOK
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	bool IsCDOK(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty CoolDownIndex); // Offset: 0x101cb28dc // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Skill.UTSkill.HandleVerifyServerSkillDataFail
	// Flags: [Native|Event|Public|BlueprintEvent]
	void HandleVerifyServerSkillDataFail(struct UUTSkillManagerComponent* SkillManagerComponent, enum class UTSkillEventType InEventType); // Offset: 0x101cb281c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkill.GetSpecificSkillManager
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UUTSkillManagerComponent* GetSpecificSkillManager(); // Offset: 0x101cb27e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkill.GetSpecificBlackboard
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UUAEBlackboard* GetSpecificBlackboard(); // Offset: 0x101cb27b4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkill.GetSkillPhaseByName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UUTSkillPhase* GetSkillPhaseByName(StrProperty PhaseName); // Offset: 0x101cb2704 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Skill.UTSkill.GetSkillPhase
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UUTSkillPhase* GetSkillPhase(IntProperty PhaseIndex); // Offset: 0x101cb2670 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkill.GetSkillID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSkillID(); // Offset: 0x101cb2634 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkill.GetSkillEffectByPhaseName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UUTSkillBaseWidget* GetSkillEffectByPhaseName(StrProperty PhaseName, StrProperty EffectName); // Offset: 0x101cb2530 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkill.GetSkillEffectByPhaseIndex
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UUTSkillBaseWidget* GetSkillEffectByPhaseIndex(IntProperty PhaseIndex, StrProperty EffectName); // Offset: 0x101cb2444 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Skill.UTSkill.GetSkillDurationScale
	// Flags: [Native|Public]
	float GetSkillDurationScale(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cb23b0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkill.GetCurSkillPhaseIndex
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GetCurSkillPhaseIndex(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cb231c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkill.GetCurSkillPhase
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	struct UUTSkillPhase* GetCurSkillPhase(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cb2288 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkill.GetCoolDownTime
	// Flags: [Native|Public|BlueprintCallable]
	float GetCoolDownTime(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty CoolDownIndex); // Offset: 0x101cb21b8 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Skill.UTSkill.DoSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable]
	void DoSkillCoolDown(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty CoolDownIndex); // Offset: 0x101cb20f8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkill.CanBePlayed
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	enum class ESkillCanBePlayedResult CanBePlayed(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cb2064 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class Skill.UTSkillEffect
// Size: 0x88 // Inherited bytes: 0x78
struct UUTSkillEffect : UUTSkillBaseWidget {
	// Fields
	struct TArray<struct UObject*> CacheSoftObject; // Offset: 0x78 // Size: 0x10

	// Functions

	// Object Name: Function Skill.UTSkillEffect.UpdateAction
	// Flags: [Native|Public]
	void UpdateAction(struct UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds); // Offset: 0x101cbd7c0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillEffect.UndoAction
	// Flags: [Native|Public]
	void UndoAction(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cbd73c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillEffect.PreCloseSkill
	// Flags: [Native|Public]
	void PreCloseSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cbd680 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillEffect.PostInitSkill
	// Flags: [Native|Public]
	void PostInitSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cbd5c4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillEffect.PostActiveSkill
	// Flags: [Native|Public]
	void PostActiveSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cbd508 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone
	// Flags: [Final|Native|Public]
	void OnAsyncLoadSoftPathDone(); // Offset: 0x101cbd4f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillEffect.GetOwnerSkill
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct AUTSkill* GetOwnerSkill(); // Offset: 0x101cbd4c0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillEffect.DoHurtAppearance
	// Flags: [Native|Public]
	void DoHurtAppearance(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* Victim); // Offset: 0x101cbd404 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillEffect.DoAction
	// Flags: [Native|Public]
	bool DoAction(struct UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped); // Offset: 0x101cbd32c // Return & Params: Num(3) Size(0xa)
};

// Object Name: Class Skill.UTSkillAction
// Size: 0xa8 // Inherited bytes: 0x88
struct UUTSkillAction : UUTSkillEffect {
	// Fields
	struct FUTSkillActionCreateData BaseData; // Offset: 0x88 // Size: 0x08
	struct UUTSkillAction* OwnerPeriodAction; // Offset: 0x90 // Size: 0x08
	char pad_0x98[0x8]; // Offset: 0x98 // Size: 0x08
	struct UObject* EventObj; // Offset: 0xa0 // Size: 0x08

	// Functions

	// Object Name: Function Skill.UTSkillAction.UpdateAction_Internal
	// Flags: [Native|Public]
	void UpdateAction_Internal(float DeltaSeconds); // Offset: 0x101cb3fac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillAction.UpdateAction
	// Flags: [Final|Native|Public]
	void UpdateAction(struct UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds); // Offset: 0x101cb3ef4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillAction.UndoAction_Internal
	// Flags: [Native|Public]
	void UndoAction_Internal(); // Offset: 0x101cb3ed8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillAction.UndoAction
	// Flags: [Final|Native|Public]
	void UndoAction(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cb3e5c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillAction.TimerRealDoAction
	// Flags: [Final|Native|Public]
	void TimerRealDoAction(struct UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped); // Offset: 0x101cb3d9c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillAction.Reset_Internal
	// Flags: [Native|Public]
	void Reset_Internal(); // Offset: 0x101cb3d80 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillAction.Reset
	// Flags: [Final|Native|Public]
	void Reset(struct UActorComponent* SkillManagerComponent); // Offset: 0x101cb3d04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillAction.RealDoHurtAppearance_Internal
	// Flags: [Native|Public]
	void RealDoHurtAppearance_Internal(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* Victim); // Offset: 0x101cb3c48 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillAction.RealDoHurtAppearance
	// Flags: [Final|Native|Public]
	void RealDoHurtAppearance(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* Victim); // Offset: 0x101cb3b94 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillAction.RealDoAction_Internal
	// Flags: [Native|Public]
	bool RealDoAction_Internal(); // Offset: 0x101cb3b58 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillAction.RealDoAction
	// Flags: [Final|Native|Public]
	bool RealDoAction(struct UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped); // Offset: 0x101cb3a88 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Skill.UTSkillAction.OnAsyncLoadAssetDone
	// Flags: [Final|Native|Public]
	void OnAsyncLoadAssetDone(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* SkillAppearanceVictim, bool bSkillAppearance); // Offset: 0x101cb3990 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillAction.JudgeNeedPhaseWait
	// Flags: [Native|Public]
	bool JudgeNeedPhaseWait(); // Offset: 0x101cb3954 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillAction.DoHurtAppearance
	// Flags: [Final|Native|Public]
	void DoHurtAppearance(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* Victim); // Offset: 0x101cb38a0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillAction.DoAction
	// Flags: [Native|Public]
	bool DoAction(struct UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped); // Offset: 0x101cb37c8 // Return & Params: Num(3) Size(0xa)
};

// Object Name: Class Skill.UTSkillAction_Lua
// Size: 0x1d0 // Inherited bytes: 0xa8
struct UUTSkillAction_Lua : UUTSkillAction {
	// Fields
	char pad_0xA8[0xc0]; // Offset: 0xa8 // Size: 0xc0
	MapProperty ActionParams; // Offset: 0x168 // Size: 0x50
	bool bEnableLuaPrivateData; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x7]; // Offset: 0x1b9 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0x1c0 // Size: 0x10
};

// Object Name: Class Skill.UTSkillAction_LuaContainer
// Size: 0x1e0 // Inherited bytes: 0x1d0
struct UUTSkillAction_LuaContainer : UUTSkillAction_Lua {
	// Fields
	struct UUTSkillAction* Action; // Offset: 0x1d0 // Size: 0x08
	bool bDefaultDoAction; // Offset: 0x1d8 // Size: 0x01
	bool bDefaultUpdateAction; // Offset: 0x1d9 // Size: 0x01
	bool bDefaultResetAction; // Offset: 0x1da // Size: 0x01
	bool bDefaultUndoAction; // Offset: 0x1db // Size: 0x01
	char pad_0x1DC[0x4]; // Offset: 0x1dc // Size: 0x04

	// Functions

	// Object Name: Function Skill.UTSkillAction_LuaContainer.UpdateActionInContainer
	// Flags: [Final|Native|Public]
	void UpdateActionInContainer(struct UActorComponent* SkillManagerComponent, float DeltaSeconds); // Offset: 0x101cb4844 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillAction_LuaContainer.UndoActionInContainer
	// Flags: [Final|Native|Public]
	void UndoActionInContainer(struct UActorComponent* SkillManagerComponent); // Offset: 0x101cb47c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillAction_LuaContainer.ResetActionInContainer
	// Flags: [Final|Native|Public]
	void ResetActionInContainer(struct UActorComponent* SkillManagerComponent); // Offset: 0x101cb474c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillAction_LuaContainer.RealDoActionInContainer
	// Flags: [Final|Native|Public]
	bool RealDoActionInContainer(struct UActorComponent* SkillManagerComponent); // Offset: 0x101cb46c0 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class Skill.UTSkillBlackboardInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillBlackboardInterface : UInterface {
	// Functions

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsWeakObject(IntProperty SkillID, struct FName& KeyName, struct UObject* ObjectValue); // Offset: 0x101cb6f3c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsVector(IntProperty SkillID, struct FName& KeyName, struct FVector VectorValue); // Offset: 0x101cb6e28 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsUInt
	// Flags: [Native|Public|HasOutParms]
	void SetValueAsUInt(IntProperty SkillID, struct FName& KeyName, uint32_t UIntValue); // Offset: 0x101cb6d14 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsString(IntProperty SkillID, struct FName& KeyName, StrProperty StringValue); // Offset: 0x101cb6b90 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsRotator(IntProperty SkillID, struct FName& KeyName, struct FRotator VectorValue); // Offset: 0x101cb6a7c // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsObject(IntProperty SkillID, struct FName& KeyName, struct UObject* ObjectValue); // Offset: 0x101cb6968 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsName(IntProperty SkillID, struct FName& KeyName, struct FName NameValue); // Offset: 0x101cb6854 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsInt(IntProperty SkillID, struct FName& KeyName, IntProperty IntValue); // Offset: 0x101cb6740 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsFloat(IntProperty SkillID, struct FName& KeyName, float FloatValue); // Offset: 0x101cb662c // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsEnum(IntProperty SkillID, struct FName& KeyName, char EnumValue); // Offset: 0x101cb6518 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsClass(IntProperty SkillID, struct FName& KeyName, struct UObject* ClassValue); // Offset: 0x101cb6404 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.SetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsBool(IntProperty SkillID, struct FName& KeyName, bool BoolValue); // Offset: 0x101cb62e8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistWeakObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistWeakObject(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb6208 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistVector
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistVector(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb6128 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistUInt
	// Flags: [Native|Public|HasOutParms|Const]
	bool IsExistUInt(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb6048 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistString(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5f68 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistRotator
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistRotator(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5e88 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistObject(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5da8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistName(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5cc8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistInt(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5be8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistFloat(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5b08 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistEnum(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5a28 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistClass(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5948 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.IsExistBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistBool(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5868 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsWeakObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsWeakObject(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5788 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsWeakActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetValueAsWeakActor(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb56a8 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetValueAsVector(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb55c4 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsUInt
	// Flags: [Native|Public|HasOutParms|Const]
	uint32_t GetValueAsUInt(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb54e4 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetValueAsString(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb53dc // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FRotator GetValueAsRotator(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb52f8 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsObject(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5218 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FName GetValueAsName(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5138 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetValueAsInt(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb5058 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	float GetValueAsFloat(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb4f78 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	char GetValueAsEnum(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb4e98 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsClass(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb4db8 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetValueAsBool(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb4cd8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetValueAsActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetValueAsActor(IntProperty SkillID, struct FName& KeyName); // Offset: 0x101cb4bf8 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAEBlackboard* GetUAEBlackboardBySkillID(IntProperty SkillID); // Offset: 0x101cb4b64 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Skill.UTSkillCDBase
// Size: 0xc0 // Inherited bytes: 0x90
struct UUTSkillCDBase : ULuaObject {
	// Fields
	struct TWeakObjectPtr<struct UUTSkillManagerComponent> OwnerSkillManager; // Offset: 0x90 // Size: 0x08
	struct TWeakObjectPtr<struct AUTSkill> OwnerSkill; // Offset: 0x98 // Size: 0x08
	float TimeScale; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<char> SyncContent; // Offset: 0xa8 // Size: 0x10
	bool bIgnoreCastSkillCheck; // Offset: 0xb8 // Size: 0x01
	enum class ECDRole CDRole; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x6]; // Offset: 0xba // Size: 0x06

	// Functions

	// Object Name: Function Skill.UTSkillCDBase.BindLua
	// Flags: [Final|Native|Public]
	void BindLua(StrProperty luaPath); // Offset: 0x101cb7d80 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Skill.UTSkillCondition
// Size: 0x80 // Inherited bytes: 0x78
struct UUTSkillCondition : UUTSkillBaseWidget {
	// Fields
	bool bTickCheckCondition; // Offset: 0x78 // Size: 0x01
	enum class ESkillConditionRole ConditionRole; // Offset: 0x79 // Size: 0x01
	char pad_0x7A[0x6]; // Offset: 0x7a // Size: 0x06

	// Functions

	// Object Name: Function Skill.UTSkillCondition.PreCloseSkill
	// Flags: [Native|Public]
	void PreCloseSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cbc78c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillCondition.PostInitSkill
	// Flags: [Native|Public]
	void PostInitSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cbc6d0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillCondition.PostActiveSkill
	// Flags: [Native|Public]
	void PostActiveSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cbc614 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillCondition.IsTargetOK
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsTargetOK(struct UActorComponent* SkillManagerComponent, struct AActor* Target); // Offset: 0x101cbc548 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillCondition.IsOK_Internal
	// Flags: [Native|Event|Protected|BlueprintEvent]
	bool IsOK_Internal(); // Offset: 0x101cbc50c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillCondition.IsOK
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsOK(struct UActorComponent* SkillManagerComponent); // Offset: 0x101cbc478 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillCondition.GetOwnerSkill
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct AUTSkill* GetOwnerSkill(); // Offset: 0x101cbc444 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Skill.UTSkillCondition_Lua
// Size: 0x1a8 // Inherited bytes: 0x80
struct UUTSkillCondition_Lua : UUTSkillCondition {
	// Fields
	char pad_0x80[0xc0]; // Offset: 0x80 // Size: 0xc0
	MapProperty ConditionParams; // Offset: 0x140 // Size: 0x50
	bool bEnableLuaPrivateData; // Offset: 0x190 // Size: 0x01
	char pad_0x191[0x7]; // Offset: 0x191 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0x198 // Size: 0x10
};

// Object Name: Class Skill.UTSkillEvent
// Size: 0x30 // Inherited bytes: 0x28
struct UUTSkillEvent : UObject {
	// Fields
	enum class UTSkillEventType SkillEventType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: Class Skill.UTSkillEventEffectMapForEditor
// Size: 0xc0 // Inherited bytes: 0x78
struct UUTSkillEventEffectMapForEditor : UUTSkillBaseWidget {
	// Fields
	enum class UTSkillEventType SkillEventType; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	struct TArray<struct FName> InterestedOwnerTags; // Offset: 0x80 // Size: 0x10
	struct UUTSkillEffect* SkillEffect; // Offset: 0x90 // Size: 0x08
	bool bUndoExecute; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
	struct TArray<struct FSkillConditionWarpper> Conditions; // Offset: 0xa0 // Size: 0x10
	struct TArray<struct FSkillConditionWarpper> TargetConditions; // Offset: 0xb0 // Size: 0x10
};

// Object Name: Class Skill.UTSkillInstancedNodeContainerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillInstancedNodeContainerInterface : UInterface {
};

// Object Name: Class Skill.UTSkillInstancedNodeInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillInstancedNodeInterface : UInterface {
	// Functions

	// Object Name: Function Skill.UTSkillInstancedNodeInterface.PostOverrideLua
	// Flags: [Native|Public]
	void PostOverrideLua(); // Offset: 0x101cbe39c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Skill.UTSkillInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillInterface : UInterface {
	// Functions

	// Object Name: Function Skill.UTSkillInterface.IsNeedCheckAutoSkill
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsNeedCheckAutoSkill(); // Offset: 0x101cbf938 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillInterface.HasSkillToken
	// Flags: [Native|Public]
	bool HasSkillToken(IntProperty SkillID); // Offset: 0x101cbf8a4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillInterface.HandleSkillStart
	// Flags: [Native|Event|Public|BlueprintEvent]
	void HandleSkillStart(IntProperty SkillID); // Offset: 0x101cbf820 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillInterface.HandleSkillEnd
	// Flags: [Native|Event|Public|BlueprintEvent]
	void HandleSkillEnd(IntProperty SkillID, enum class UTSkillStopReason Reason); // Offset: 0x101cbf760 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillInterface.GetSkillManager
	// Flags: [Native|Public|Const]
	struct UUTSkillManagerComponent* GetSkillManager(); // Offset: 0x101cbf724 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillInterface.ClearSkillToken
	// Flags: [Native|Public]
	void ClearSkillToken(IntProperty SkillID); // Offset: 0x101cbf6a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillInterface.ClearAllSkillToken
	// Flags: [Native|Public]
	void ClearAllSkillToken(); // Offset: 0x101cbf684 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillInterface.AddSkillToken
	// Flags: [Native|Public]
	void AddSkillToken(IntProperty SkillID); // Offset: 0x101cbf600 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Skill.UTSkillLocationPickerFilter
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillLocationPickerFilter : UObject {
	// Functions

	// Object Name: Function Skill.UTSkillLocationPickerFilter.CheckAdjustLocation
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	bool CheckAdjustLocation(struct FSkillLocationFilterContext& Context, struct FVector& InLocation, struct FVector& OutLocation); // Offset: 0x101cbffc8 // Return & Params: Num(4) Size(0x29)
};

// Object Name: Class Skill.UTSkillLocationPicker
// Size: 0x88 // Inherited bytes: 0x78
struct UUTSkillLocationPicker : UUTSkillBaseWidget {
	// Fields
	struct TArray<struct UUTSkillLocationPickerFilter*> CheckAdjustFilters; // Offset: 0x78 // Size: 0x10
};

// Object Name: Class Skill.UTSkillManagerComponent
// Size: 0xf50 // Inherited bytes: 0x238
struct UUTSkillManagerComponent : ULuaActorComponent {
	// Fields
	char pad_0x238[0x58]; // Offset: 0x238 // Size: 0x58
	struct APawn* OwnerPawn; // Offset: 0x290 // Size: 0x08
	char pad_0x298[0x14]; // Offset: 0x298 // Size: 0x14
	IntProperty NetAutoSkillID; // Offset: 0x2ac // Size: 0x04
	char pad_0x2B0[0x8]; // Offset: 0x2b0 // Size: 0x08
	bool bEnableSkillCoolDown; // Offset: 0x2b8 // Size: 0x01
	bool bGMDirectTriggerSkill; // Offset: 0x2b9 // Size: 0x01
	char pad_0x2BA[0x6]; // Offset: 0x2ba // Size: 0x06
	struct AActor* OwnerActor; // Offset: 0x2c0 // Size: 0x08
	bool DestroySkillsOnDie; // Offset: 0x2c8 // Size: 0x01
	char pad_0x2C9[0x7]; // Offset: 0x2c9 // Size: 0x07
	MapProperty SkillIDToSkills; // Offset: 0x2d0 // Size: 0x50
	MapProperty SkillIDBlackboardMap; // Offset: 0x320 // Size: 0x50
	MapProperty ActorBlackboardMap; // Offset: 0x370 // Size: 0x50
	struct FScriptMulticastDelegate ChangeActorBlackboard; // Offset: 0x3c0 // Size: 0x10
	MapProperty SkillBaseDataMaps; // Offset: 0x3d0 // Size: 0x50
	struct TArray<struct FUTSkillLastCastInfo> LastCastArray; // Offset: 0x420 // Size: 0x10
	struct FScriptMulticastDelegate OnSkillCast; // Offset: 0x430 // Size: 0x10
	struct FSkillActiveRepData SyncSkillActiveStateDatas; // Offset: 0x440 // Size: 0xe0
	struct FSkillAttrRepData SyncSkillAttrRepData; // Offset: 0x520 // Size: 0xe0
	struct FSkillDynamicRepData SyncDynamicRepData; // Offset: 0x600 // Size: 0xe0
	MapProperty IDToSyncSkillCDDatas; // Offset: 0x6e0 // Size: 0x50
	MapProperty ButtonSlotToSkillID; // Offset: 0x730 // Size: 0x50
	struct FTeammateSkillCDRepData TeammateSkillCDRepData; // Offset: 0x780 // Size: 0x10
	MapProperty SkillID2PackageIndex; // Offset: 0x790 // Size: 0x50
	struct TArray<struct FSkillCDRepData> SyncSkillCDDatas; // Offset: 0x7e0 // Size: 0x10
	char pad_0x7F0[0x90]; // Offset: 0x7f0 // Size: 0x90
	struct FUTSkillHitInfo SkillHitInfo; // Offset: 0x880 // Size: 0x38
	struct FUTSkillHitEnvInfo SkillHitEnvInfo; // Offset: 0x8b8 // Size: 0x30
	struct TArray<StrProperty> MutexMontageGroupBeenPlayed; // Offset: 0x8e8 // Size: 0x10
	char pad_0x8F8[0x4]; // Offset: 0x8f8 // Size: 0x04
	IntProperty SkillSynRandomSeed; // Offset: 0x8fc // Size: 0x04
	struct FRandomStream SkillSynRandStream; // Offset: 0x900 // Size: 0x08
	IntProperty SkillSynRandomSeedExpireCount; // Offset: 0x908 // Size: 0x04
	char pad_0x90C[0x4]; // Offset: 0x90c // Size: 0x04
	struct TArray<struct FSkillParamater> SkillParamaters; // Offset: 0x910 // Size: 0x10
	struct FScriptMulticastDelegate OnSkillInitSignature; // Offset: 0x920 // Size: 0x10
	struct FScriptMulticastDelegate InitOneSkillEvent; // Offset: 0x930 // Size: 0x10
	struct FScriptMulticastDelegate SkillStartEvent; // Offset: 0x940 // Size: 0x10
	struct FScriptMulticastDelegate SkillStopEvent; // Offset: 0x950 // Size: 0x10
	struct FScriptMulticastDelegate SkillPhaseChangeEvent; // Offset: 0x960 // Size: 0x10
	struct FScriptMulticastDelegate SkillLevelChangeEvent; // Offset: 0x970 // Size: 0x10
	struct FScriptMulticastDelegate SkillSkinIDChangeEvent; // Offset: 0x980 // Size: 0x10
	struct FScriptMulticastDelegate SkillDoCoolDownEvent; // Offset: 0x990 // Size: 0x10
	struct FScriptMulticastDelegate SkillUpdateCDEvent; // Offset: 0x9a0 // Size: 0x10
	struct TArray<IntProperty> PendingRemoveSkillID; // Offset: 0x9b0 // Size: 0x10
	char pad_0x9C0[0x50]; // Offset: 0x9c0 // Size: 0x50
	struct TArray<struct FUTReplaceSkillData> ReplacedSkillDatas; // Offset: 0xa10 // Size: 0x10
	MapProperty DisableSkillTagsMap; // Offset: 0xa20 // Size: 0x50
	MapProperty DisableSkillIDsMap; // Offset: 0xa70 // Size: 0x50
	struct FScriptMulticastDelegate OnSkillDisableChangeDelegate; // Offset: 0xac0 // Size: 0x10
	MapProperty LimitSkillTagsMap; // Offset: 0xad0 // Size: 0x50
	MapProperty LimitSkillIDMap; // Offset: 0xb20 // Size: 0x50
	struct FMultiSkillSynData NewSkillSynData; // Offset: 0xb70 // Size: 0xf0
	struct FSkillSinglePhaseData NewSkillSinglePhaseData; // Offset: 0xc60 // Size: 0xf0
	char pad_0xD50[0x8]; // Offset: 0xd50 // Size: 0x08
	struct FScriptMulticastDelegate OnSkillEventDelegate; // Offset: 0xd58 // Size: 0x10
	MapProperty SkillSimulateDataMap; // Offset: 0xd68 // Size: 0x50
	SetProperty AsyncLoadingSkillInst; // Offset: 0xdb8 // Size: 0x50
	struct FUTSkillExecQueue SkillExecQueue; // Offset: 0xe08 // Size: 0xb0
	struct FUTSkillEventHistory SkillEventHistory; // Offset: 0xeb8 // Size: 0x50
	struct FUTSkillComboState SkillComboState; // Offset: 0xf08 // Size: 0x18
	IntProperty AsyncSkillComboSkillID; // Offset: 0xf20 // Size: 0x04
	char pad_0xF24[0x4]; // Offset: 0xf24 // Size: 0x04
	uint64 NetClientSimulateInstID; // Offset: 0xf28 // Size: 0x08
	char pad_0xF30[0x10]; // Offset: 0xf30 // Size: 0x10
	struct FScriptMulticastDelegate CreativeSkillDelegate; // Offset: 0xf40 // Size: 0x10

	// Functions

	// Object Name: Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateSyncSkillCDData(IntProperty SkillID); // Offset: 0x101cc6b5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegisterActorBlackBorad(struct AActor* InActor); // Offset: 0x101cc6ae0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.TryDeleteOneSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TryDeleteOneSkill(IntProperty SkillID, bool IsImmediately, bool bResetCD); // Offset: 0x101cc69d4 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Skill.UTSkillManagerComponent.TryAddOneSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TryAddOneSkill(IntProperty SkillID, bool bActive, IntProperty ButtonSlot); // Offset: 0x101cc68d0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.TriggerSkillWithParams
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool TriggerSkillWithParams(IntProperty SkillID, struct TArray<StrProperty>& InKeyStrings, bool bEnable); // Offset: 0x101cc6788 // Return & Params: Num(4) Size(0x1a)

	// Object Name: Function Skill.UTSkillManagerComponent.TriggerSkillWithID
	// Flags: [Native|Public|BlueprintCallable]
	bool TriggerSkillWithID(IntProperty SkillID, bool bEnable); // Offset: 0x101cc66b4 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Skill.UTSkillManagerComponent.TriggerLocalEventWithID
	// Flags: [Native|Public|BlueprintCallable]
	bool TriggerLocalEventWithID(enum class UTSkillEventType SkillEventType, IntProperty SkillID); // Offset: 0x101cc65e4 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.TriggerEventWithID
	// Flags: [Native|Public|BlueprintCallable]
	bool TriggerEventWithID(enum class UTSkillEventType SkillEventType, IntProperty SkillID); // Offset: 0x101cc6514 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.TriggerEvent
	// Flags: [Native|Public|BlueprintCallable]
	void TriggerEvent(IntProperty SkillID, enum class UTSkillEventType EventType); // Offset: 0x101cc6454 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.TraceTarget
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	bool TraceTarget(struct FVector StartTrace, struct FVector EndTrace, enum class UTPickerTargetType TargetType, float Radius, struct AActor*& TargetActor); // Offset: 0x101cc62c0 // Return & Params: Num(6) Size(0x29)

	// Object Name: Function Skill.UTSkillManagerComponent.SyncOneSkillState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, IntProperty RequestID); // Offset: 0x101cc61b4 // Return & Params: Num(3) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.StopSkillAll
	// Flags: [Native|Public|BlueprintCallable]
	void StopSkillAll(enum class UTSkillStopReason StopReason); // Offset: 0x101cc6130 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.StopSkill
	// Flags: [Native|Public|BlueprintCallable]
	void StopSkill(IntProperty SkillID, enum class UTSkillStopReason StopReason); // Offset: 0x101cc6070 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.StopCurSkill
	// Flags: [Final|Native|Public]
	void StopCurSkill(enum class UTSkillStopReason StopReason); // Offset: 0x101cc5ff4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.StopAllMonopolizeSkill
	// Flags: [Native|Public|BlueprintCallable]
	void StopAllMonopolizeSkill(enum class UTSkillStopReason StopReason); // Offset: 0x101cc5f70 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetupOwnerAndSystem(); // Offset: 0x101cc5f3c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillTagsLimit
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSkillTagsLimit(struct TArray<IntProperty>& SkillTags, bool bLimit, StrProperty TriggerKey); // Offset: 0x101cc5dec // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillTagsDisable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSkillTagsDisable(struct TArray<IntProperty>& SkillTags, bool bDisable, StrProperty TriggerKey); // Offset: 0x101cc5c9c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillSkinID
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetSkillSkinID(IntProperty SkillID, IntProperty InSkillSkinID); // Offset: 0x101cc5bd8 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillOwner
	// Flags: [Native|Public|BlueprintCallable]
	void SetSkillOwner(struct AActor* tempActor); // Offset: 0x101cc5b54 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetSkillLevel(IntProperty SkillID, IntProperty SkillLevel); // Offset: 0x101cc5a90 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillIDsLimit
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSkillIDsLimit(struct TArray<IntProperty>& SkillIDs, bool bLimit, StrProperty TriggerKey); // Offset: 0x101cc5940 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillIDsDisable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSkillIDsDisable(struct TArray<IntProperty>& SkillIDs, bool bDisable, StrProperty TriggerKey); // Offset: 0x101cc57f0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillCDTimeScale
	// Flags: [Event|Public|BlueprintEvent]
	void SetSkillCDTimeScale(IntProperty SkillID, float Scale, IntProperty ScaleType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillCDIndexTimeScale
	// Flags: [Event|Public|BlueprintEvent]
	void SetSkillCDIndexTimeScale(IntProperty SkillID, IntProperty SkillCDIndex, float Scale, IntProperty ScaleType); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.SetSkillActive
	// Flags: [Native|Public|BlueprintCallable]
	bool SetSkillActive(IntProperty SkillID, bool bActive, bool bForceSet, IntProperty ButtonSlot); // Offset: 0x101cc5690 // Return & Params: Num(5) Size(0xd)

	// Object Name: Function Skill.UTSkillManagerComponent.SetAutoSkillID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoSkillID(IntProperty InSkillID); // Offset: 0x101cc5614 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.SetAllSkillCDTimeScale
	// Flags: [Event|Public|BlueprintEvent]
	void SetAllSkillCDTimeScale(float Scale); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParamsAndTssData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerTriggerEvent_WithParamsAndTssData(IntProperty SkillID, enum class UTSkillEventType EventType, uint64 InstID, struct TArray<char> Content, struct TArray<char> TssData, uint64 PackageIndex); // Offset: 0x101cc542c // Return & Params: Num(6) Size(0x38)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParams
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerTriggerEvent_WithParams(IntProperty SkillID, enum class UTSkillEventType EventType, uint64 InstID, struct TArray<char> Content, uint64 PackageIndex); // Offset: 0x101cc5298 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithIDAndTssData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerTriggerEvent_WithIDAndTssData(IntProperty SkillID, enum class UTSkillEventType EventType, uint64 InstID, struct TArray<char> TssData, uint64 PackageIndex); // Offset: 0x101cc5104 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerTriggerEvent_WithID(IntProperty SkillID, enum class UTSkillEventType EventType, uint64 InstID, uint64 PackageIndex); // Offset: 0x101cc4fd0 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerTriggerEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerTriggerEvent(IntProperty SkillID, enum class UTSkillEventType EventType); // Offset: 0x101cc4f10 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerStopSkillCombo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	void ServerStopSkillCombo(IntProperty SkillID); // Offset: 0x101cc4e8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerStopSkill
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	void ServerStopSkill(IntProperty SkillID, enum class UTSkillStopReason StopReason); // Offset: 0x101cc4dcc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerStopAllSkill
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerStopAllSkill(enum class UTSkillStopReason StopReason); // Offset: 0x101cc4d48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerStopAllMonopolizeSkill
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerStopAllMonopolizeSkill(enum class UTSkillStopReason StopReason); // Offset: 0x101cc4cc4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerStartSkill
	// Flags: [Native|Public|BlueprintCallable]
	bool ServerStartSkill(IntProperty SkillID, bool bAutoCast); // Offset: 0x101cc4bf0 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
	// Flags: [Net|Native|Event|Public|NetServer|NetValidate]
	void ServerNotifyRandomSeed(IntProperty Seed); // Offset: 0x101cc4b6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.ResetTeammateSkillCDData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetTeammateSkillCDData(); // Offset: 0x101cc4b58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.ResetSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable]
	void ResetSkillCoolDown(IntProperty SkillID, IntProperty CDIndex); // Offset: 0x101cc4a9c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.ResetSkill
	// Flags: [Native|Public|BlueprintCallable]
	void ResetSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD); // Offset: 0x101cc4980 // Return & Params: Num(3) Size(0x3)

	// Object Name: Function Skill.UTSkillManagerComponent.ResetAllSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable]
	void ResetAllSkillCoolDown(); // Offset: 0x101cc4964 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.RequestSkillStates
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState); // Offset: 0x101cc488c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Skill.UTSkillManagerComponent.RepSkillHitInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RepSkillHitInfo(); // Offset: 0x101cc4878 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.RepLastCastTime
	// Flags: [Final|Native|Public]
	void RepLastCastTime(); // Offset: 0x101cc4864 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.ReplaceSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReplaceSkill(IntProperty OldSkillID, IntProperty NewSkillID); // Offset: 0x101cc47b0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.RemoveReplacedSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveReplacedSkill(IntProperty OldSkillID); // Offset: 0x101cc4734 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveAllSkillUIWidget(); // Offset: 0x101cc4720 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterActorBlackBorad(struct AActor* InActor, struct UUAEBlackboard* RegisterBlackboard); // Offset: 0x101cc466c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.RefreshSkillRepData
	// Flags: [Final|Native|Public]
	void RefreshSkillRepData(); // Offset: 0x101cc4658 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.RecordSkillException
	// Flags: [Native|Event|Public|BlueprintEvent]
	void RecordSkillException(struct AActor* InActor, IntProperty InSkillID, enum class ENetRole InRole, StrProperty InNetMode, StrProperty InFuncName); // Offset: 0x101cc44b0 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Skill.UTSkillManagerComponent.RandRangeSyn
	// Flags: [Final|Native|Public]
	IntProperty RandRangeSyn(IntProperty StartIndex, IntProperty EndIndex); // Offset: 0x101cc43ec // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.QuerySkill
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AUTSkill* QuerySkill(IntProperty SkillID); // Offset: 0x101cc4358 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.QueryOrNewSkill
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AUTSkill* QueryOrNewSkill(IntProperty SkillID); // Offset: 0x101cc42c4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.PreTriggerSkillEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreTriggerSkillEvent(IntProperty InSkillID); // Offset: 0x101cc4240 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.PostTriggerSkillEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostTriggerSkillEvent(IntProperty InSkillID); // Offset: 0x101cc41bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
	// Flags: [Native|Public]
	void PlayHurtSkillEffect(struct FUTSkillHitInfo TheSkillHitInfo); // Offset: 0x101cc40d8 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function Skill.UTSkillManagerComponent.OnStopSkill
	// Flags: [Native|Public]
	void OnStopSkill(struct AUTSkill* Skill, enum class UTSkillStopReason StopReason); // Offset: 0x101cc4018 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRespawned
	// Flags: [Native|Public]
	void OnRespawned(); // Offset: 0x101cc3ffc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
	// Flags: [Native|Public]
	void OnRep_SkillHitInfo(); // Offset: 0x101cc3fe0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas
	// Flags: [Final|Native|Public]
	void OnRep_SkillCDDatas(); // Offset: 0x101cc3fcc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_SkillAttrRepData
	// Flags: [Final|Native|Public]
	void OnRep_SkillAttrRepData(); // Offset: 0x101cc3fb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState
	// Flags: [Final|Native|Public]
	void OnRep_SkillActiveState(); // Offset: 0x101cc3fa4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill
	// Flags: [Final|Native|Public]
	void OnRep_ReplaceSkill(); // Offset: 0x101cc3f90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_NewSkillSynData
	// Flags: [Final|Native|Public]
	void OnRep_NewSkillSynData(); // Offset: 0x101cc3f7c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_NewSkillSinglePhaseData
	// Flags: [Final|Native|Public]
	void OnRep_NewSkillSinglePhaseData(); // Offset: 0x101cc3f68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_NetClientSimulateInstID
	// Flags: [Final|Native|Public]
	void OnRep_NetClientSimulateInstID(); // Offset: 0x101cc3f54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_NetAutoSkillID
	// Flags: [Final|Native|Public]
	void OnRep_NetAutoSkillID(); // Offset: 0x101cc3f40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_EnableSkillEncrypt
	// Flags: [Final|Native|Public]
	void OnRep_EnableSkillEncrypt(); // Offset: 0x101cc3f2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData
	// Flags: [Final|Native|Public]
	void OnRep_DynamicRepData(); // Offset: 0x101cc3f18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRep_AsyncSkillComboSkillID
	// Flags: [Final|Native|Public]
	void OnRep_AsyncSkillComboSkillID(); // Offset: 0x101cc3f04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnRecycled
	// Flags: [Native|Public]
	void OnRecycled(); // Offset: 0x101cc3ee8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.OnInterruptSkill
	// Flags: [Native|Public]
	void OnInterruptSkill(struct AUTSkill* Skill, enum class UTSkillStopReason StopReason); // Offset: 0x101cc3e28 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.NewUAEBlackboard
	// Flags: [Final|Native|Public|BlueprintCallable]
	void NewUAEBlackboard(IntProperty SkillID); // Offset: 0x101cc3dac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.NeedSimulateStoppedNewSkill
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool NeedSimulateStoppedNewSkill(IntProperty InSkillID); // Offset: 0x101cc3d18 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.LocalTriggerNewSkillFail
	// Flags: [Final|Native|Public]
	void LocalTriggerNewSkillFail(struct AUTSkill* InNewSkill, uint64 InstID); // Offset: 0x101cc3c64 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.LocalStopSkillAllWithExcludeArray
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void LocalStopSkillAllWithExcludeArray(struct TArray<IntProperty>& InExcludeArry, enum class UTSkillStopReason StopReason); // Offset: 0x101cc3b68 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Skill.UTSkillManagerComponent.IsSkillNeedPackageVerify
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsSkillNeedPackageVerify(IntProperty SkillID); // Offset: 0x101cc3ad4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsSkillInit
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsSkillInit(IntProperty InSkillID); // Offset: 0x101cc3a48 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsSkillIDDisable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsSkillIDDisable(IntProperty InSkillID); // Offset: 0x101cc39bc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsSkillCanUse
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsSkillCanUse(); // Offset: 0x101cc3988 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.IsSkillActived
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsSkillActived(IntProperty SkillID); // Offset: 0x101cc38fc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
	// Flags: [Native|Public]
	bool IsReadyToCastSkill(IntProperty SkillID); // Offset: 0x101cc3868 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsPendingCastSkillID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPendingCastSkillID(IntProperty InSkillID); // Offset: 0x101cc37d4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsPendingCastSkill
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPendingCastSkill(); // Offset: 0x101cc3798 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	bool IsEnableSkillCoolDown(); // Offset: 0x101cc375c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCurrentUseSkillID(IntProperty InSkillID); // Offset: 0x101cc36d0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsCastingSkillTag
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCastingSkillTag(IntProperty InSkillTag); // Offset: 0x101cc363c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsCastingSkillID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCastingSkillID(IntProperty InSkillID); // Offset: 0x101cc35a8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.IsCastingSkill
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCastingSkill(); // Offset: 0x101cc356c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.HasSkillEventFromLastCast
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasSkillEventFromLastCast(IntProperty SkillID, enum class UTSkillEventType EventType); // Offset: 0x101cc34a4 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventFail
	// Flags: [Event|Public|BlueprintEvent]
	void HandleTriggerParamsEventFail(IntProperty SkillID, enum class UTSkillEventType EventType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent
	// Flags: [Event|Public|BlueprintEvent]
	bool HandleTriggerParamsEvent(IntProperty SkillID, enum class UTSkillEventType EventType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Skill.UTSkillManagerComponent.HandleSkillStop
	// Flags: [Native|Public]
	void HandleSkillStop(IntProperty SkillID, struct AUTSkill* InSkill, enum class UTSkillStopReason StopReason); // Offset: 0x101cc33a8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillManagerComponent.HandleSkillStart
	// Flags: [Native|Public]
	void HandleSkillStart(IntProperty SkillID, struct AUTSkill* InSkill); // Offset: 0x101cc32e8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.HandleGMDirectTriggerSkillEvent
	// Flags: [Event|Public|BlueprintEvent]
	bool HandleGMDirectTriggerSkillEvent(IntProperty SkillID, IntProperty SkillPlayRet); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAEBlackboard* GetUAEBlackboardBySkillID(IntProperty SkillID); // Offset: 0x101cc3254 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetUAEBlackboard
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEBlackboard* GetUAEBlackboard(struct AUTSkill* InSkill); // Offset: 0x101cc31c8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillWidget
	// Flags: [Native|Public|BlueprintCallable]
	struct UUTSkillWidget* GetSkillWidget(IntProperty SkillID); // Offset: 0x101cc3134 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillSynDataString
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetSkillSynDataString(StrProperty PrefixText, bool bWithLastData); // Offset: 0x101cc301c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetSkillSlotBySkillID(IntProperty SkillID); // Offset: 0x101cc2f90 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetSkillSlotBySkill(struct AUTSkill* Skill); // Offset: 0x101cc2f04 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillSkinID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSkillSkinID(IntProperty SkillID); // Offset: 0x101cc2e78 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillSinglePhaseDataString
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetSkillSinglePhaseDataString(StrProperty PrefixText, bool bWithLastData); // Offset: 0x101cc2d60 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillsByGroup
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct AUTSkill*> GetSkillsByGroup(struct FName SkillGroup); // Offset: 0x101cc2ca4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSkillLevel(IntProperty SkillID); // Offset: 0x101cc2c18 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillIDByClass
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GetSkillIDByClass(struct UObject* SkillClass); // Offset: 0x101cc2b84 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillExecString
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetSkillExecString(); // Offset: 0x101cc2b20 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillEventTimestamp
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetSkillEventTimestamp(IntProperty SkillID, enum class UTSkillEventType EventType, float& OutTimestamp); // Offset: 0x101cc2a0c // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillCurPhase
	// Flags: [Final|Native|Public]
	IntProperty GetSkillCurPhase(struct AUTSkill* Skill); // Offset: 0x101cc2980 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillByName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AUTSkill* GetSkillByName(StrProperty SkillName); // Offset: 0x101cc2884 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillByClassName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AUTSkill* GetSkillByClassName(StrProperty SkillClassName); // Offset: 0x101cc2788 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillButtonSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetSkillButtonSlot(IntProperty SkillID); // Offset: 0x101cc26fc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkillBaseData
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FUTSkillRuntimeData GetSkillBaseData(IntProperty SkillID); // Offset: 0x101cc2668 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Skill.UTSkillManagerComponent.GetSkill
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AUTSkill* GetSkill(IntProperty SkillID); // Offset: 0x101cc25d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetReplacedSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetReplacedSkill(IntProperty OldSkillID); // Offset: 0x101cc2548 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety
	// Flags: [Native|Public|BlueprintCallable]
	enum class ENetRole GetRealOwnerRoleSafety(); // Offset: 0x101cc250c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillManagerComponent.GetMutexRelation
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	enum class ESkillMutexType GetMutexRelation(struct AUTSkill* CurSkill, struct AUTSkill* NewSkill); // Offset: 0x101cc2440 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillManagerComponent.GetLastCastTime
	// Flags: [Final|Native|Public]
	float GetLastCastTime(IntProperty SkillID); // Offset: 0x101cc23b4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetLastCastFinishTime
	// Flags: [Final|Native|Public]
	float GetLastCastFinishTime(IntProperty SkillID); // Offset: 0x101cc2328 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurSkills
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct AUTSkill*> GetCurSkills(); // Offset: 0x101cc22c4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurSkillPhase
	// Flags: [Final|Native|Public]
	struct UUTSkillPhase* GetCurSkillPhase(); // Offset: 0x101cc2290 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurSkillID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetCurSkillID(struct AUTSkill* Skill); // Offset: 0x101cc2204 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AUTSkill* GetCurSkill(); // Offset: 0x101cc21d0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<IntProperty> GetCurMonopolizeSkills(); // Offset: 0x101cc216c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkillPhase
	// Flags: [Final|Native|Public]
	struct UUTSkillPhase* GetCurMonopolizedSkillPhase(); // Offset: 0x101cc2138 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AUTSkill* GetCurMonopolizedSkill(); // Offset: 0x101cc2104 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCurAllSkillIDs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<IntProperty> GetCurAllSkillIDs(); // Offset: 0x101cc20a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCoolDownTime
	// Flags: [Final|Native|Public]
	float GetCoolDownTime(IntProperty SkillID, IntProperty CoolDownIndex); // Offset: 0x101cc1fdc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Skill.UTSkillManagerComponent.GetCastingSkillIDs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<IntProperty> GetCastingSkillIDs(); // Offset: 0x101cc1f78 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.GetButtonSlotSkillID
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetButtonSlotSkillID(IntProperty ButtonSlot); // Offset: 0x101cc1eec // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Skill.UTSkillManagerComponent.DynamicRemoveSkill
	// Flags: [Native|Public|BlueprintCallable]
	void DynamicRemoveSkill(IntProperty InSkillID); // Offset: 0x101cc1e68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.DynamicAddSkill
	// Flags: [Native|Public|BlueprintCallable]
	void DynamicAddSkill(IntProperty InSkillID); // Offset: 0x101cc1de4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillManagerComponent.ClientTriggerEventSuccess_WithID
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void ClientTriggerEventSuccess_WithID(IntProperty SkillID, uint64 PackageIndex); // Offset: 0x101cc1d24 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.ClientTriggerEventFailed_WithID
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void ClientTriggerEventFailed_WithID(IntProperty SkillID, enum class ETriggerSkillFailed FailedReason, uint64 PackageIndex); // Offset: 0x101cc1c28 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.ClientStopPreActionSkill
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientStopPreActionSkill(IntProperty SkillID, uint64 InstID); // Offset: 0x101cc1b68 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.ClientStopOneSkill
	// Flags: [Final|Native|Public]
	void ClientStopOneSkill(uint64 InstID, bool bSinglePhaseRep, enum class UTSkillStopReason StopReason); // Offset: 0x101cc1a64 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Skill.UTSkillManagerComponent.ClientStartSkill
	// Flags: [Native|Public|BlueprintCallable]
	void ClientStartSkill(IntProperty SkillID, bool bAutoCast); // Offset: 0x101cc19a0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Skill.UTSkillManagerComponent.ClientSimulateOneSkill
	// Flags: [Final|Native|Public]
	void ClientSimulateOneSkill(uint64 InstID, IntProperty SkillID, IntProperty PhaseIndex, bool bSinglePhaseRep); // Offset: 0x101cc186c // Return & Params: Num(4) Size(0x11)

	// Object Name: Function Skill.UTSkillManagerComponent.ClearSkill
	// Flags: [Native|Public|BlueprintCallable]
	void ClearSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD); // Offset: 0x101cc1750 // Return & Params: Num(3) Size(0x3)

	// Object Name: Function Skill.UTSkillManagerComponent.ClearRepParams
	// Flags: [Native|Public]
	void ClearRepParams(); // Offset: 0x101cc1734 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.ClearInitParams
	// Flags: [Native|Public]
	void ClearInitParams(); // Offset: 0x101cc1718 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillManagerComponent.CheckAIIsCDOKBySkillID
	// Flags: [Final|Native|Public]
	bool CheckAIIsCDOKBySkillID(IntProperty SkillID, IntProperty CoolDownIndex); // Offset: 0x101cc1654 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Skill.UTSkillManagerComponent.CacheSkillWidget
	// Flags: [Native|Public|BlueprintCallable]
	void CacheSkillWidget(IntProperty SkillID, struct UUTSkillWidget* Widget); // Offset: 0x101cc1594 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillManagerComponent.AddOrRemoveIngoreSkillIDWhenStopAllSkills
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddOrRemoveIngoreSkillIDWhenStopAllSkills(enum class UTSkillStopReason InStopReason, IntProperty InSkillID, bool bAdd); // Offset: 0x101cc149c // Return & Params: Num(3) Size(0x9)
};

// Object Name: Class Skill.UTSkillNodeBlackboardInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillNodeBlackboardInterface : UInterface {
	// Functions

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsWeakObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsWeakObject(struct FName& KeyName, struct UObject* ObjectValue); // Offset: 0x101cd1f60 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Offset: 0x101cd1e88 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsUInt
	// Flags: [Native|Public|HasOutParms]
	void SetValueAsUInt(struct FName& KeyName, uint32_t UIntValue); // Offset: 0x101cd1db0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsString(struct FName& KeyName, StrProperty StringValue); // Offset: 0x101cd1c6c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Offset: 0x101cd1b94 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Offset: 0x101cd1abc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Offset: 0x101cd19e4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsInt(struct FName& KeyName, IntProperty IntValue); // Offset: 0x101cd190c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Offset: 0x101cd1834 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Offset: 0x101cd175c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // Offset: 0x101cd1684 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.SetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Offset: 0x101cd15a4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsSetValueAsNewDataWhenNotExist
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsSetValueAsNewDataWhenNotExist(struct FName& KeyName); // Offset: 0x101cd1500 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistWeakObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistWeakObject(struct FName& KeyName); // Offset: 0x101cd145c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistVector
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistVector(struct FName& KeyName); // Offset: 0x101cd13b8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistUInt
	// Flags: [Native|Public|HasOutParms|Const]
	bool IsExistUInt(struct FName& KeyName); // Offset: 0x101cd1314 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistString(struct FName& KeyName); // Offset: 0x101cd1270 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistRotator
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistRotator(struct FName& KeyName); // Offset: 0x101cd11cc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistObject(struct FName& KeyName); // Offset: 0x101cd1128 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistName(struct FName& KeyName); // Offset: 0x101cd1084 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistInt(struct FName& KeyName); // Offset: 0x101cd0fe0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistFloat(struct FName& KeyName); // Offset: 0x101cd0f3c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistEnum(struct FName& KeyName); // Offset: 0x101cd0e98 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistClass(struct FName& KeyName); // Offset: 0x101cd0df4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.IsExistBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistBool(struct FName& KeyName); // Offset: 0x101cd0d50 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsWeakObject(struct FName& KeyName); // Offset: 0x101cd0cac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetValueAsWeakActor(struct FName& KeyName); // Offset: 0x101cd0c08 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetValueAsVector(struct FName& KeyName); // Offset: 0x101cd0b60 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsUInt
	// Flags: [Native|Public|HasOutParms|Const]
	uint32_t GetValueAsUInt(struct FName& KeyName); // Offset: 0x101cd0abc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetValueAsString(struct FName& KeyName); // Offset: 0x101cd09f0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Offset: 0x101cd0948 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsObject(struct FName& KeyName); // Offset: 0x101cd08a4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FName GetValueAsName(struct FName& KeyName); // Offset: 0x101cd0800 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetValueAsInt(struct FName& KeyName); // Offset: 0x101cd075c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	float GetValueAsFloat(struct FName& KeyName); // Offset: 0x101cd06b8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	char GetValueAsEnum(struct FName& KeyName); // Offset: 0x101cd0614 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsClass(struct FName& KeyName); // Offset: 0x101cd0570 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetValueAsBool(struct FName& KeyName); // Offset: 0x101cd04cc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetValueAsActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetValueAsActor(struct FName& KeyName); // Offset: 0x101cd0428 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.GetUAEBlackboard
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAEBlackboard* GetUAEBlackboard(); // Offset: 0x101cd03ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.AddValueByKeySelector
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void AddValueByKeySelector(enum class EUAEBlackboardType BBType, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cd031c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillNodeBlackboardInterface.AddValueByKeName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void AddValueByKeName(enum class EUAEBlackboardType BBType, struct FName& KeyName); // Offset: 0x101cd024c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Skill.UTSkillPhase
// Size: 0xe8 // Inherited bytes: 0x28
struct UUTSkillPhase : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
	StrProperty PhaseName; // Offset: 0x40 // Size: 0x10
	bool bPhaseEnabled; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	struct TWeakObjectPtr<struct AUTSkill> OwnerSkill; // Offset: 0x54 // Size: 0x08
	IntProperty PhaseIndex; // Offset: 0x5c // Size: 0x04
	IntProperty ActionsTopHalfCount; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct FUTSkillPhaseCreateData BaseData; // Offset: 0x68 // Size: 0x78
	struct UUTSkillPicker* InEffectPickerOnAction; // Offset: 0xe0 // Size: 0x08

	// Functions

	// Object Name: Function Skill.UTSkillPhase.TryJumpToPhase
	// Flags: [Final|Native|Public]
	bool TryJumpToPhase(struct UUTSkillManagerComponent* SkillManagerComponent, IntProperty PhaseId); // Offset: 0x101cd35a4 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Skill.UTSkillPhase.StopPhase
	// Flags: [Native|Public]
	void StopPhase(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cd3520 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillPhase.StartPhase
	// Flags: [Native|Public]
	void StartPhase(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cd349c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillPhase.RepeatPhase
	// Flags: [Native|Public]
	void RepeatPhase(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cd3418 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillPhase.PlaySkillHurtEffect
	// Flags: [Native|Public]
	bool PlaySkillHurtEffect(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* Victim); // Offset: 0x101cd334c // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillPhase.PlaySkillHurtAppearances
	// Flags: [Native|Public]
	bool PlaySkillHurtAppearances(struct UUTSkillManagerComponent* SkillManagerComponent, struct AActor* Victim); // Offset: 0x101cd3280 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillPhase.PickTargets
	// Flags: [Native|Public]
	void PickTargets(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cd31fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillPhase.OnEvent
	// Flags: [Native|Public]
	bool OnEvent(struct UUTSkillManagerComponent* SkillManagerComponent, enum class UTSkillEventType TheEventType); // Offset: 0x101cd312c // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Skill.UTSkillPhase.OnCustomEvent
	// Flags: [Native|Public]
	bool OnCustomEvent(struct UUTSkillManagerComponent* SkillManagerComponent, enum class UTSkillEventType TheEventType); // Offset: 0x101cd305c // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Skill.UTSkillPhase.ForceStopPhase
	// Flags: [Native|Public]
	bool ForceStopPhase(struct UUTSkillManagerComponent* SkillManagerComponent); // Offset: 0x101cd2fc8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Skill.UTSkillPhase.ClearAttachments
	// Flags: [Final|Native|Public]
	bool ClearAttachments(); // Offset: 0x101cd2f94 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Skill.UTSkillPickerFilter
// Size: 0x28 // Inherited bytes: 0x28
struct UUTSkillPickerFilter : UObject {
	// Functions

	// Object Name: Function Skill.UTSkillPickerFilter.IsValidFilterActor
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsValidFilterActor(struct AActor* InActor, struct AActor* Owner); // Offset: 0x101cd4098 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Skill.UTSkillPickerFilter.HandleFilterArray
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void HandleFilterArray(struct TArray<struct FUTSkillPickedTarget>& inArray, struct AActor* Owner); // Offset: 0x101cd3f9c // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Skill.UTSkillPicker
// Size: 0x108 // Inherited bytes: 0x78
struct UUTSkillPicker : UUTSkillBaseWidget {
	// Fields
	struct FUTSkillPickerCreateData BaseData; // Offset: 0x78 // Size: 0x50
	struct TArray<struct UObject*> FilterTemplates; // Offset: 0xc8 // Size: 0x10
	char pad_0xD8[0x10]; // Offset: 0xd8 // Size: 0x10
	struct TArray<struct FUTSkillPickedTarget> PickedResultTargets; // Offset: 0xe8 // Size: 0x10
	struct TArray<struct UUTSkillPickerFilter*> Filters; // Offset: 0xf8 // Size: 0x10

	// Functions

	// Object Name: Function Skill.UTSkillPicker.PickTargetsInner
	// Flags: [Native|Protected|HasDefaults|BlueprintCallable]
	bool PickTargetsInner(struct FVector OriginPoint); // Offset: 0x101cd439c // Return & Params: Num(2) Size(0xd)

	// Object Name: Function Skill.UTSkillPicker.PickTargets
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool PickTargets(struct FVector OriginPoint); // Offset: 0x101cd4310 // Return & Params: Num(2) Size(0xd)
};

// Object Name: Class Skill.UTSkillFunctionBase
// Size: 0xa8 // Inherited bytes: 0x78
struct UUTSkillFunctionBase : UUTSkillBaseWidget {
	// Fields
	struct FSkillFuncNameSelector DoActionFuncKey; // Offset: 0x78 // Size: 0x10
	struct FSkillFuncNameSelector UndoActionFuncKey; // Offset: 0x88 // Size: 0x10
	struct FSkillFuncNameSelector ConditionFuncKey; // Offset: 0x98 // Size: 0x10
};

// Object Name: Class Skill.UTSkillSpecificAction
// Size: 0x108 // Inherited bytes: 0xa8
struct UUTSkillSpecificAction : UUTSkillAction {
	// Fields
	struct FSkillFuncNameSelector DoActionFuncKey; // Offset: 0xa8 // Size: 0x10
	struct FSkillFuncNameSelector ResetActionFuncKey; // Offset: 0xb8 // Size: 0x10
	struct FSkillFuncNameSelector UndoActionFuncKey; // Offset: 0xc8 // Size: 0x10
	StrProperty DoActionLuaFunc; // Offset: 0xd8 // Size: 0x10
	StrProperty ResetActionLuaFunc; // Offset: 0xe8 // Size: 0x10
	StrProperty UndoActionLuaFunc; // Offset: 0xf8 // Size: 0x10

	// Functions

	// Object Name: Function Skill.UTSkillSpecificAction.UpdateAction_Internal
	// Flags: [Native|Public|BlueprintCallable]
	void UpdateAction_Internal(float DeltaSeconds); // Offset: 0x101cd4a68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillSpecificAction.UndoAction_Internal
	// Flags: [Native|Public|BlueprintCallable]
	void UndoAction_Internal(); // Offset: 0x101cd4a4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillSpecificAction.Reset_Internal
	// Flags: [Native|Public|BlueprintCallable]
	void Reset_Internal(); // Offset: 0x101cd4a30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillSpecificAction.RealDoAction_Internal
	// Flags: [Native|Public|BlueprintCallable]
	bool RealDoAction_Internal(); // Offset: 0x101cd49f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Skill.UTSkillSpecificAction.PreCloseSkill
	// Flags: [Native|Public]
	void PreCloseSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cd4938 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillSpecificAction.PostInitSkill
	// Flags: [Native|Public]
	void PostInitSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cd487c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Skill.UTSkillSpecificAction.PostActiveSkill
	// Flags: [Native|Public]
	void PostActiveSkill(struct UUTSkillManagerComponent* SkillManagerComponent, struct AUTSkill* CurOwnerSkill); // Offset: 0x101cd47c0 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Skill.UTSkillSpecificCondition
// Size: 0xa0 // Inherited bytes: 0x80
struct UUTSkillSpecificCondition : UUTSkillCondition {
	// Fields
	struct FSkillFuncNameSelector ConditionFuncKey; // Offset: 0x80 // Size: 0x10
	StrProperty LuaConditionFunc; // Offset: 0x90 // Size: 0x10
};

// Object Name: Class Skill.SkillUtil
// Size: 0x28 // Inherited bytes: 0x28
struct USkillUtil : UBlueprintFunctionLibrary {
};

// Object Name: Class Skill.UTSkillWidget
// Size: 0x4a0 // Inherited bytes: 0x488
struct UUTSkillWidget : ULuaUAEUserWidget {
	// Fields
	struct UUTSkillManagerComponent* SkillManager; // Offset: 0x488 // Size: 0x08
	IntProperty SkillID; // Offset: 0x490 // Size: 0x04
	float TickInterval; // Offset: 0x494 // Size: 0x04
	bool bEnableTick; // Offset: 0x498 // Size: 0x01
	char pad_0x499[0x7]; // Offset: 0x499 // Size: 0x07

	// Functions

	// Object Name: Function Skill.UTSkillWidget.SetSkillManager
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSkillManager(struct UUTSkillManagerComponent* Manager); // Offset: 0x101cd5464 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillWidget.SetSkillID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSkillID(IntProperty InSkillID); // Offset: 0x101cd53e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillWidget.RemoveSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveSelf(); // Offset: 0x101cd53d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Skill.UTSkillWidget.GetSkillManager
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUTSkillManagerComponent* GetSkillManager(); // Offset: 0x101cd53b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillWidget.GetSkillID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSkillID(); // Offset: 0x101cd5384 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Skill.UTSkillWidget.GetSkillCDBases
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UUTSkillCDBase*> GetSkillCDBases(); // Offset: 0x101cd534c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Skill.UTSkillWidget.GetSkill
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AUTSkill* GetSkill(); // Offset: 0x101cd5318 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillWidget.GetLocalPlayerController
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct APlayerController* GetLocalPlayerController(); // Offset: 0x101cd52e4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Skill.UTSkillWidget.BindLua
	// Flags: [Final|Native|Public]
	void BindLua(StrProperty luaPath); // Offset: 0x101cd5200 // Return & Params: Num(1) Size(0x10)
};

