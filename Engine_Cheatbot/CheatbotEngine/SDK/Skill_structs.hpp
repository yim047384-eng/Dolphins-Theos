#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Skill.LuaEventRegistWrap
// Size: 0x40 // Inherited bytes: 0x00
struct FLuaEventRegistWrap {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
	struct UObject* Outer; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Skill.MultiSharedDelegateWrap
// Size: 0x20 // Inherited bytes: 0x00
struct FMultiSharedDelegateWrap {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Outer; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Skill.SharedDelegateWrap
// Size: 0x20 // Inherited bytes: 0x00
struct FSharedDelegateWrap {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UObject* Outer; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Skill.SkillMetaData
// Size: 0x60 // Inherited bytes: 0x00
struct FSkillMetaData {
	// Fields
	StrProperty SkillName; // Offset: 0x00 // Size: 0x10
	MapProperty PhaseToActionsMetaData; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct Skill.ActionsMetaData
// Size: 0x50 // Inherited bytes: 0x00
struct FActionsMetaData {
	// Fields
	MapProperty ActionMetaData; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Skill.ActionMetaData
// Size: 0x20 // Inherited bytes: 0x00
struct FActionMetaData {
	// Fields
	enum class ESkillBaseWidgetType ActionType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Value; // Offset: 0x08 // Size: 0x10
	IntProperty Count; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Skill.UTSkillActionCreateData
// Size: 0x08 // Inherited bytes: 0x00
struct FUTSkillActionCreateData {
	// Fields
	enum class ESkillActionRole ActionRole; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float delayTime; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Skill.UTSkillBlackboardParameter
// Size: 0xa8 // Inherited bytes: 0x98
struct FUTSkillBlackboardParameter : FUAEBlackboardParameter {
	// Fields
	struct TArray<enum class ESkillBlackboardResetRule> ResetRuleArray; // Offset: 0x98 // Size: 0x10
};

// Object Name: ScriptStruct Skill.TeammateSkillCDRepData
// Size: 0x10 // Inherited bytes: 0x00
struct FTeammateSkillCDRepData {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	float CDStartTime; // Offset: 0x04 // Size: 0x04
	float CDEndTime; // Offset: 0x08 // Size: 0x04
	IntProperty UseCount; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Skill.SkillCDRepData
// Size: 0x18 // Inherited bytes: 0x00
struct FSkillCDRepData {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FUTSkillSyncData_CD> CDSyncDatas; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Skill.UTSkillSyncData_CD
// Size: 0x18 // Inherited bytes: 0x00
struct FUTSkillSyncData_CD {
	// Fields
	IntProperty SkillCDIndex; // Offset: 0x00 // Size: 0x04
	float SkillTimeScale; // Offset: 0x04 // Size: 0x04
	struct FSkillNetBytesData CDSyncDatas; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Skill.SkillNetBytesData
// Size: 0x10 // Inherited bytes: 0x00
struct FSkillNetBytesData {
	// Fields
	struct TArray<char> Data; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Skill.UTSkillComboInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FUTSkillComboInfo {
	// Fields
	IntProperty ComboNextSkillID; // Offset: 0x00 // Size: 0x04
	bool bLongPressToCombo; // Offset: 0x04 // Size: 0x01
	bool bClickToCombo; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float ClickTimeLimitBeforeSkillStop; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Skill.UTSkillComboState
// Size: 0x18 // Inherited bytes: 0x00
struct FUTSkillComboState {
	// Fields
	IntProperty CurSkillID; // Offset: 0x00 // Size: 0x04
	IntProperty CurInstID; // Offset: 0x04 // Size: 0x04
	struct FTimerHandle TimerHandle; // Offset: 0x08 // Size: 0x08
	float LocalStopTime; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Skill.UTSkillBBUploadData
// Size: 0x10 // Inherited bytes: 0x00
struct FUTSkillBBUploadData {
	// Fields
	struct TArray<struct FName> KeyNames; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Skill.SkillConditionWarpper
// Size: 0x08 // Inherited bytes: 0x00
struct FSkillConditionWarpper {
	// Fields
	struct UUTSkillCondition* SkillCondition; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Skill.UTSkillEventHistory
// Size: 0x50 // Inherited bytes: 0x00
struct FUTSkillEventHistory {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Skill.UTSkillExecQueue
// Size: 0xb0 // Inherited bytes: 0x00
struct FUTSkillExecQueue {
	// Fields
	char pad_0x0[0xb0]; // Offset: 0x00 // Size: 0xb0
};

// Object Name: ScriptStruct Skill.UTSkillInstance
// Size: 0xe0 // Inherited bytes: 0x00
struct FUTSkillInstance {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	IntProperty CurPhaseIndex; // Offset: 0x04 // Size: 0x04
	IntProperty LastPhaseIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	uint64 InstanceID; // Offset: 0x10 // Size: 0x08
	IntProperty SkillSlot; // Offset: 0x18 // Size: 0x04
	IntProperty Level; // Offset: 0x1c // Size: 0x04
	IntProperty ActiveState; // Offset: 0x20 // Size: 0x04
	IntProperty SkillCDIndex; // Offset: 0x24 // Size: 0x04
	enum class UTSkillStopReason StopReason; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FUTSkillCreateData SkillBaseData; // Offset: 0x30 // Size: 0x70
	struct TWeakObjectPtr<struct AUTSkill> CurSkill; // Offset: 0xa0 // Size: 0x08
	struct TWeakObjectPtr<struct UUTSkillWidget> CurSkillWidget; // Offset: 0xa8 // Size: 0x08
	struct TWeakObjectPtr<struct UUTSkillManagerComponent> OwnerComp; // Offset: 0xb0 // Size: 0x08
	struct TArray<struct TWeakObjectPtr<struct AActor>> SkillActors; // Offset: 0xb8 // Size: 0x10
	struct TArray<struct TWeakObjectPtr<struct AActor>> SkillSharePickedTargets; // Offset: 0xc8 // Size: 0x10
	bool bGsListener; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x7]; // Offset: 0xd9 // Size: 0x07
};

// Object Name: ScriptStruct Skill.UTSkillCreateData
// Size: 0x70 // Inherited bytes: 0x00
struct FUTSkillCreateData {
	// Fields
	IntProperty SkillGroupIndex; // Offset: 0x00 // Size: 0x04
	float Interval; // Offset: 0x04 // Size: 0x04
	float IntervalSincePrevFinish; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty CoolDownMessage; // Offset: 0x10 // Size: 0x10
	IntProperty CoolDownMessageID; // Offset: 0x20 // Size: 0x04
	bool bEnableRepeat; // Offset: 0x24 // Size: 0x01
	bool bEnableCombo; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
	struct FUTSkillComboInfo ComboInfo; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<struct UUTSkillPhase*> Phases; // Offset: 0x38 // Size: 0x10
	struct UUTSkillEffect* SkillActiveAction; // Offset: 0x48 // Size: 0x08
	struct UUTSkillEffect* SkillCloseAction; // Offset: 0x50 // Size: 0x08
	struct TArray<struct UUTSkillCDBase*> SkillCDs; // Offset: 0x58 // Size: 0x10
	char pad_0x68[0x8]; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct Skill.SkillParamater
// Size: 0x20 // Inherited bytes: 0x00
struct FSkillParamater {
	// Fields
	bool bUseTag; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName SkillTag; // Offset: 0x08 // Size: 0x08
	enum class FSkillType SkillType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float CDRecoveryScale; // Offset: 0x14 // Size: 0x04
	float SkillRuntimeScale; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Skill.SkillParamaterModifier
// Size: 0x20 // Inherited bytes: 0x20
struct FSkillParamaterModifier : FSkillParamater {
	// Fields
	enum class ESkillAttrOperator CDRecoveryScaleOP; // Offset: 0x1c // Size: 0x01
	enum class ESkillAttrOperator SkillRuntimeScaleOp; // Offset: 0x1d // Size: 0x01
};

// Object Name: ScriptStruct Skill.SkillDynamicRepData
// Size: 0xe0 // Inherited bytes: 0x00
struct FSkillDynamicRepData {
	// Fields
	struct TArray<IntProperty> SkillData; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0xd0]; // Offset: 0x10 // Size: 0xd0
};

// Object Name: ScriptStruct Skill.SkillAttrRepData
// Size: 0xe0 // Inherited bytes: 0x00
struct FSkillAttrRepData {
	// Fields
	struct TArray<struct FSkillAttrData> SkillData; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0xd0]; // Offset: 0x10 // Size: 0xd0
};

// Object Name: ScriptStruct Skill.SkillAttrData
// Size: 0x0c // Inherited bytes: 0x00
struct FSkillAttrData {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	IntProperty SkillLevel; // Offset: 0x04 // Size: 0x04
	IntProperty SkillSkinID; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Skill.SkillActiveRepData
// Size: 0xe0 // Inherited bytes: 0x00
struct FSkillActiveRepData {
	// Fields
	struct TArray<struct FSkillActiveData> SkillData; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0xd0]; // Offset: 0x10 // Size: 0xd0
};

// Object Name: ScriptStruct Skill.SkillActiveData
// Size: 0x0c // Inherited bytes: 0x00
struct FSkillActiveData {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	IntProperty SkillButtonSlot; // Offset: 0x04 // Size: 0x04
	bool bActive; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Skill.UTSkillRuntimeData
// Size: 0x20 // Inherited bytes: 0x00
struct FUTSkillRuntimeData {
	// Fields
	bool bSkillActived; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SkillButtonSlot; // Offset: 0x04 // Size: 0x04
	bool bShowSkillMainWidget; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct TArray<struct UUTSkillCDBase*> SkillCDs; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Skill.UTReplaceSkillData
// Size: 0x08 // Inherited bytes: 0x00
struct FUTReplaceSkillData {
	// Fields
	IntProperty OldSkillID; // Offset: 0x00 // Size: 0x04
	IntProperty NewSkillID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Skill.SkillSinglePhaseData
// Size: 0xf0 // Inherited bytes: 0x00
struct FSkillSinglePhaseData {
	// Fields
	struct TArray<struct FUTSkillSynSinglePhaseData> SkillData; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FUTSkillSynSinglePhaseData> LastSkillData; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0xd0]; // Offset: 0x20 // Size: 0xd0
};

// Object Name: ScriptStruct Skill.UTSkillSynSinglePhaseData
// Size: 0x30 // Inherited bytes: 0x00
struct FUTSkillSynSinglePhaseData {
	// Fields
	uint64 InstanceID; // Offset: 0x00 // Size: 0x08
	IntProperty SkillID; // Offset: 0x08 // Size: 0x04
	IntProperty CurSkillPhase; // Offset: 0x0c // Size: 0x04
	enum class UTSkillStopReason StopReason; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct FSkillNetBytesData BlackboardBytesData; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Skill.MultiSkillSynData
// Size: 0xf0 // Inherited bytes: 0x00
struct FMultiSkillSynData {
	// Fields
	struct TArray<struct FUTMultiSkillSynData> SkillData; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FUTMultiSkillSynData> LastSkillData; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0xd0]; // Offset: 0x20 // Size: 0xd0
};

// Object Name: ScriptStruct Skill.UTMultiSkillSynData
// Size: 0x40 // Inherited bytes: 0x00
struct FUTMultiSkillSynData {
	// Fields
	bool bEnableRepeat; // Offset: 0x00 // Size: 0x01
	enum class UTSkillStopReason StopReason; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
	IntProperty SkillID; // Offset: 0x10 // Size: 0x04
	IntProperty PhaseIndexes; // Offset: 0x14 // Size: 0x04
	struct FSkillNetBytesData PhaseIndexArray; // Offset: 0x18 // Size: 0x10
	struct FSkillNetBytesData BlackboardBytesData; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Skill.UTSkillSimulateData
// Size: 0x20 // Inherited bytes: 0x00
struct FUTSkillSimulateData {
	// Fields
	uint64 InstanceID; // Offset: 0x00 // Size: 0x08
	IntProperty SkillID; // Offset: 0x08 // Size: 0x04
	bool bSinglePhaseRep; // Offset: 0x0c // Size: 0x01
	enum class UTSkillStopReason StopReason; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	struct TArray<IntProperty> SimlatePhaseIndexs; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Skill.UTSkillHitEnvInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FUTSkillHitEnvInfo {
	// Fields
	struct TArray<struct AActor*> ToPawn; // Offset: 0x00 // Size: 0x10
	struct AActor* FromPawn; // Offset: 0x10 // Size: 0x08
	IntProperty SkillID; // Offset: 0x18 // Size: 0x04
	IntProperty SkillPhaseID; // Offset: 0x1c // Size: 0x04
	enum class EPhysicalSurface HitSurfaceType; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	struct FVector HitEnvLocation; // Offset: 0x24 // Size: 0x0c
};

// Object Name: ScriptStruct Skill.UTSkillHitInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FUTSkillHitInfo {
	// Fields
	struct TArray<struct AActor*> ToPawn; // Offset: 0x00 // Size: 0x10
	struct AActor* FromPawn; // Offset: 0x10 // Size: 0x08
	IntProperty SkillID; // Offset: 0x18 // Size: 0x04
	IntProperty SkillPhaseID; // Offset: 0x1c // Size: 0x04
	float TimeSeconds; // Offset: 0x20 // Size: 0x04
	bool IsHeadShot; // Offset: 0x24 // Size: 0x01
	enum class EPhysicalSurface HitSurfaceType; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
	struct FVector HitEnvLocation; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Skill.SkillLocationFilterContext
// Size: 0x10 // Inherited bytes: 0x00
struct FSkillLocationFilterContext {
	// Fields
	struct AActor* OwnerPawn; // Offset: 0x00 // Size: 0x08
	struct AUTSkill* OwnerSkill; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Skill.SkillLimitKeySet
// Size: 0x50 // Inherited bytes: 0x00
struct FSkillLimitKeySet {
	// Fields
	SetProperty KeySet; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Skill.SkillDisableKeySet
// Size: 0x50 // Inherited bytes: 0x00
struct FSkillDisableKeySet {
	// Fields
	SetProperty KeySet; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Skill.UTSkillLastCastInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FUTSkillLastCastInfo {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	float LastCastTime; // Offset: 0x04 // Size: 0x04
	float LastCastFinishTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Skill.UTSkillAutoTriggerCondition
// Size: 0x28 // Inherited bytes: 0x00
struct FUTSkillAutoTriggerCondition {
	// Fields
	enum class ESkillConditionType Condition; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Param_W; // Offset: 0x04 // Size: 0x04
	IntProperty Param_X; // Offset: 0x08 // Size: 0x04
	IntProperty Param_Y; // Offset: 0x0c // Size: 0x04
	IntProperty Param_Z; // Offset: 0x10 // Size: 0x04
	enum class ESkillEndConditionType EndCondition; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	IntProperty Param_A; // Offset: 0x18 // Size: 0x04
	IntProperty Param_B; // Offset: 0x1c // Size: 0x04
	IntProperty Param_C; // Offset: 0x20 // Size: 0x04
	IntProperty Param_D; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Skill.UTSkillPhaseCreateData
// Size: 0x78 // Inherited bytes: 0x00
struct FUTSkillPhaseCreateData {
	// Fields
	float PhaseDuration; // Offset: 0x00 // Size: 0x04
	float AltPhaseDuration; // Offset: 0x04 // Size: 0x04
	bool bMustHasTarget; // Offset: 0x08 // Size: 0x01
	bool bCoolDown; // Offset: 0x09 // Size: 0x01
	bool bCoolDownAfterPhase; // Offset: 0x0a // Size: 0x01
	bool bAllowSimulateEvent; // Offset: 0x0b // Size: 0x01
	bool bKeepTickState; // Offset: 0x0c // Size: 0x01
	bool bKeepTickStateWithConditionCheck; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	IntProperty CoolDownIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct UUTSkillCondition*> PhaseConditions; // Offset: 0x18 // Size: 0x10
	struct UUTSkillPicker* Picker; // Offset: 0x28 // Size: 0x08
	struct TArray<struct UUTSkillEffect*> Actions; // Offset: 0x30 // Size: 0x10
	struct TArray<struct UUTSkillEffect*> HurtAppearances; // Offset: 0x40 // Size: 0x10
	enum class UTSkillPhaseType PhaseType; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	IntProperty JumpPhaseIndex; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FUAEBlackboardKeySelector> SyncBBKArray; // Offset: 0x58 // Size: 0x10
	struct TArray<struct UUTSkillEventEffectMapForEditor*> EditorEventEffectMap; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct Skill.UTSkillEventActionMap
// Size: 0x30 // Inherited bytes: 0x00
struct FUTSkillEventActionMap {
	// Fields
	enum class UTSkillEventType SkillEventType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UUTSkillEffect* Action; // Offset: 0x08 // Size: 0x08
	struct TArray<struct UUTSkillCondition*> Conditions; // Offset: 0x10 // Size: 0x10
	struct TArray<struct UUTSkillCondition*> TargetConditions; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Skill.UTSkillPickedTarget
// Size: 0x38 // Inherited bytes: 0x00
struct FUTSkillPickedTarget {
	// Fields
	struct TWeakObjectPtr<struct AActor> Target; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> TargetComponent; // Offset: 0x08 // Size: 0x08
	bool IsHeadShot; // Offset: 0x10 // Size: 0x01
	char HitPos; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	struct FName BoneName; // Offset: 0x18 // Size: 0x08
	struct FVector HitEnvLocation; // Offset: 0x20 // Size: 0x0c
	float HitAngleCos; // Offset: 0x2c // Size: 0x04
	enum class EPhysicalSurface HitPhysMatType; // Offset: 0x30 // Size: 0x01
	bool IgnoreTakeDamage; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
};

// Object Name: ScriptStruct Skill.UTSkillPickerCreateData
// Size: 0x50 // Inherited bytes: 0x00
struct FUTSkillPickerCreateData {
	// Fields
	enum class UTSkillPickerType PickerType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FUAEBlackboardKeySelector PickerOriginBlackboardKey; // Offset: 0x08 // Size: 0x08
	enum class UTPickerTargetType PickerTargetType; // Offset: 0x10 // Size: 0x01
	enum class UTSkillPickerRole PickerTargetRole; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
	IntProperty PickerMaxCount; // Offset: 0x14 // Size: 0x04
	bool bIncludeOwner; // Offset: 0x18 // Size: 0x01
	bool bIgnoreEnableAnyDamageTagIfOwnerIsSelf; // Offset: 0x19 // Size: 0x01
	bool bOnlyHero; // Offset: 0x1a // Size: 0x01
	bool bPickDoor; // Offset: 0x1b // Size: 0x01
	bool bPickImplImpactInterface; // Offset: 0x1c // Size: 0x01
	bool bForceSimPick; // Offset: 0x1d // Size: 0x01
	bool bEnableTrace; // Offset: 0x1e // Size: 0x01
	bool bEnableVehicleTrace; // Offset: 0x1f // Size: 0x01
	bool bIsUsingViewRotation; // Offset: 0x20 // Size: 0x01
	bool bIgnoreViewRotationPitch; // Offset: 0x21 // Size: 0x01
	bool bPickByTrace; // Offset: 0x22 // Size: 0x01
	bool IsCheckHeadshot; // Offset: 0x23 // Size: 0x01
	bool bUseNewOffset; // Offset: 0x24 // Size: 0x01
	bool bIgnoreOwnerVehicleWhenTracePlayer; // Offset: 0x25 // Size: 0x01
	bool bIgnoreTargetVehicleWhenTracePlayer; // Offset: 0x26 // Size: 0x01
	bool bIgnoreDriverCharacter; // Offset: 0x27 // Size: 0x01
	bool bOwnerActorMustBuilding; // Offset: 0x28 // Size: 0x01
	bool bUse2DAngle; // Offset: 0x29 // Size: 0x01
	bool bSortByDistInNarrowAngle; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x1]; // Offset: 0x2b // Size: 0x01
	float NarrowAngleInDegree; // Offset: 0x2c // Size: 0x04
	bool bSortByDistInNarrowBox; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct FVector NarrowBoxExtent; // Offset: 0x34 // Size: 0x0c
	struct FVector TargetLocationOffset; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Skill.SkillFuncNameSelector
// Size: 0x10 // Inherited bytes: 0x00
struct FSkillFuncNameSelector {
	// Fields
	struct FName SelectedKeyName; // Offset: 0x00 // Size: 0x08
	bool bLuaFunction; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Skill.SkillFlowExecutionStep
// Size: 0x70 // Inherited bytes: 0x00
struct FSkillFlowExecutionStep {
	// Fields
	char pad_0x0[0x70]; // Offset: 0x00 // Size: 0x70
};

// Object Name: ScriptStruct Skill.SkillFlowStatsLog
// Size: 0x20 // Inherited bytes: 0x00
struct FSkillFlowStatsLog {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

