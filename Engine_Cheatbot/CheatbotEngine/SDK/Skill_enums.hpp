#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Skill.UTSkillStopReason
enum class UTSkillStopReason : uint8 {
	SkillStopReason_None = 0,
	SkillStopReason_Finished = 1,
	SkillStopReason_Failed = 2,
	SkillStopReason_Interrupted = 3,
	SkillStopReason_PlayerDieInterrupted = 4,
	SkillStopReason_PlayerDisconnect = 5,
	SkillStopReason_PlayerCancel = 6,
	SkillStopReason_MAX = 7
};

// Object Name: Enum Skill.UTSkillEventType
enum class UTSkillEventType : uint8 {
	SET_KEY_DOWN = 0,
	SET_KEY_UP = 1,
	SET_COLLIDE_TARGET = 2,
	SET_MISS_TARGET = 3,
	SET_HIT_TARGET = 4,
	SET_KILL_TARGET = 5,
	SET_COLLIDE_ACTOR = 6,
	SET_FINDPATH_FINISH = 7,
	SET_SKILL_ACTIVE = 8,
	SET_SKILL_CAST = 9,
	SET_SKILL_INIT = 10,
	SET_PHASE_START = 11,
	SET_PHASE_FINISH = 12,
	SET_PHASE_FINISH_EARLY = 13,
	SET_PHASE_INTERRUPT = 14,
	SET_SKILL_FINISH = 15,
	SET_SKILL_CANCEL = 16,
	SET_SKILL_CLOSE = 17,
	SET_NO_TARGET = 18,
	SET_SKILL_BREAK = 19,
	SET_NO_LOCATION = 20,
	SET_ATTEMPT_ACTIVE = 21,
	SET_SKILL_ACTIVE_AND_BUTTONSLOT = 22,
	SET_SKILL_CLOSE_AND_BUTTONSLOT = 23,
	SET_PHASE_JUMP = 24,
	SET_MAX = 25
};

// Object Name: Enum Skill.ESkillBaseWidgetType
enum class ESkillBaseWidgetType : uint8 {
	None = 0,
	SkillEffect = 1,
	SkillCondition = 2,
	SkillPicker = 3,
	SkillLocationPicker = 4,
	ESkillBaseWidgetType_MAX = 5
};

// Object Name: Enum Skill.ESkillCanBePlayedResult
enum class ESkillCanBePlayedResult : uint8 {
	Success = 0,
	Fail_Default = 1,
	Fail_ProneUseConsumables = 2,
	Fail_PawnState = 3,
	Fail_CD = 4,
	Fail_Disable = 5,
	Fail_NoToken = 6,
	Fail_CheckCondition = 7,
	ESkillCanBePlayedResult_MAX = 8
};

// Object Name: Enum Skill.ESkillCastType
enum class ESkillCastType : uint8 {
	Normal = 1,
	Trigger = 2,
	Passive = 3,
	Max = 4
};

// Object Name: Enum Skill.ESkillBlackboardResetRule
enum class ESkillBlackboardResetRule : uint8 {
	ESBBRR_None = 0,
	ESBBRR_SkillInit = 1,
	ESBBRR_SkillStart = 2,
	ESBBRR_SkillEnd = 3,
	ESBBRR_MAX = 4
};

// Object Name: Enum Skill.ECDOperationType
enum class ECDOperationType : uint8 {
	CD_Set = 0,
	CD_Add = 1,
	CD_Mul = 2,
	CD_MAX = 3
};

// Object Name: Enum Skill.ECDCompare
enum class ECDCompare : uint8 {
	CDC_Bigger = 0,
	CDC_Equal = 1,
	CDC_Smaller = 2,
	CDC_MAX = 3
};

// Object Name: Enum Skill.ECDRole
enum class ECDRole : uint8 {
	CDR_Default = 0,
	CDR_ClientPreAct = 1,
	CDR_ClientOnly = 2,
	CDR_MAX = 3
};

// Object Name: Enum Skill.ESkillConditionRole
enum class ESkillConditionRole : uint8 {
	ESCR_All = 0,
	ESCR_Authority = 1,
	ESCR_Autonomous = 2,
	ESCR_Simulated = 3,
	ESCR_AutonomousSimulated = 4,
	ESCR_AutonomousAuthority = 5,
	ESCR_MAX = 6
};

// Object Name: Enum Skill.ESkillActionRole
enum class ESkillActionRole : uint8 {
	ESAR_All = 0,
	ESAR_Authority = 1,
	ESAR_Autonomous = 2,
	ESAR_Simulated = 3,
	ESAR_AutonomousSimulated = 4,
	ESAR_AutonomousAuthority = 5,
	ESAR_AuthoritySimulated = 6,
	ESAR_MAX = 7
};

// Object Name: Enum Skill.ESkillAddForceDirection
enum class ESkillAddForceDirection : uint8 {
	ESkillDir_SelfToTarget = 0,
	ESkillDir_TargetToSelf = 1,
	ESkillDir_SelfDir = 2,
	ESkillDir_TargetDir = 3,
	ESkillDir_TargetZ = 4,
	ESkillDir_SelfZ = 5,
	ESkillDir_MAX = 6
};

// Object Name: Enum Skill.ESkillStage
enum class ESkillStage : uint8 {
	None = 1,
	Prepare = 2,
	Start = 3,
	Stop = 4,
	ESkillStage_MAX = 5
};

// Object Name: Enum Skill.ESkillAttrOperator
enum class ESkillAttrOperator : uint8 {
	None = 0,
	Plus = 1,
	Multiply = 2,
	Set = 3,
	ESkillAttrOperator_MAX = 4
};

// Object Name: Enum Skill.FSkillType
enum class FSkillType : uint8 {
	None = 0,
	Medicine = 1,
	Damage = 2,
	FSkillType_MAX = 3
};

// Object Name: Enum Skill.ESkillIconStatus
enum class ESkillIconStatus : uint8 {
	IConBtnNone = 0,
	IconBtnNormal = 1,
	IconBtnActive = 2,
	IconBtnInCD = 3,
	IconBtnDown = 4,
	IconBtnUp = 5,
	IconBtnClick = 6,
	IconBtnHovered = 7,
	IconBtnUnHovered = 8,
	ESkillIconStatus_MAX = 9
};

// Object Name: Enum Skill.UTSkillTargetType
enum class UTSkillTargetType : uint8 {
	STT_FRIEND = 0,
	STT_ENEMY = 1,
	STT_ALL = 2,
	STT_MAX = 3
};

// Object Name: Enum Skill.UTPickerTargetType
enum class UTPickerTargetType : uint8 {
	PTT_FRIEND = 0,
	PTT_ENEMY = 1,
	PTT_ALL = 2,
	PTT_Self = 3,
	PTT_MAX = 4
};

// Object Name: Enum Skill.ETriggerSkillFailed
enum class ETriggerSkillFailed : uint8 {
	TriggerSkillFailed_NoSkill = 0,
	TriggerSkillFailed_VerifyFailed = 1,
	TriggerSkillFailed_MAX = 2
};

// Object Name: Enum Skill.ESkillMutexType
enum class ESkillMutexType : uint8 {
	ESMT_Y = 0,
	ESMT_X = 1,
	ESMT_XY = 2,
	ESMT_MAX = 3
};

// Object Name: Enum Skill.ESkillEndConditionType
enum class ESkillEndConditionType : uint8 {
	ESECT_MyHP = 0,
	ESECT_MyHPAndSD = 1,
	ESECT_FrinedHP = 2,
	ESECT_ExistsEnemy = 3,
	ESECT_ExistsEnemy2 = 4,
	ESECT_ExistsEnemyAndFriends = 5,
	ESECT_AnyTime = 6,
	ESECT_None = 7,
	ESECT_MAX = 8
};

// Object Name: Enum Skill.ESkillConditionType
enum class ESkillConditionType : uint8 {
	ESCT_MyHP = 0,
	ESCT_MyHPAndSD = 1,
	ESCT_MyHPAndSDNoEmeny = 2,
	ESCT_FrinedHP = 3,
	ESCT_ExistsEnemy = 4,
	ESCT_ExistsEnemy2 = 5,
	ESCT_ExistsEnemyAndFriends = 6,
	ESCT_AnyTime = 7,
	ESCT_None = 8,
	ESCT_MAX = 9
};

// Object Name: Enum Skill.UTSkillPhaseType
enum class UTSkillPhaseType : uint8 {
	SPT_SEQUENCE = 0,
	SPT_WAIT = 1,
	SPT_FINAL_SKILL_PHASE = 2,
	SPT_Keep = 3,
	SPT_JUMP = 4,
	SPT_MAX = 5
};

// Object Name: Enum Skill.UTSkillPickerRole
enum class UTSkillPickerRole : uint8 {
	SPR_Authority = 0,
	SPR_Autonomous = 1,
	SPR_Both = 2,
	SPR_MAX = 3
};

// Object Name: Enum Skill.UTSkillPickerType
enum class UTSkillPickerType : uint8 {
	SPT_SELF = 0,
	SPT_TARGET = 1,
	SPT_VIEWPOINT = 2,
	SPT_VIEWPOINT_STATIC = 3,
	SPT_RECT = 4,
	SPT_CIRCLE = 5,
	SPT_CAPSULE = 6,
	SPT_FAN = 7,
	SPT_CROSSHAIR = 8,
	SPT_CUSTOM = 9,
	SPT_DESTINATION = 10,
	SPT_VIEWPOINT_NORMAL = 11,
	SPT_BLACKBOARD = 12,
	SPT_SELFVEHICLE = 13,
	SPT_DEFAULT = 14,
	SPT_MAX = 15
};

// Object Name: Enum Skill.ESkillDebugEventType
enum class ESkillDebugEventType : uint8 {
	ES_SkillStart = 0,
	ES_SkillPhaseStart = 1,
	ES_SkillInterrupt = 2,
	ES_OutputStats = 3,
	ES_SkillEnd = 4,
	ES_MAX = 5
};

