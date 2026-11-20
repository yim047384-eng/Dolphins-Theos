#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct GenericFeatures.GenericSensingRuntimeState
// Size: 0x0c // Inherited bytes: 0x00
struct FGenericSensingRuntimeState {
	// Fields
	float CanNotSeeTargetElapsedTime; // Offset: 0x00 // Size: 0x04
	float LockTargetElapsedTime; // Offset: 0x04 // Size: 0x04
	float RememberEnemyElapsedTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct GenericFeatures.GenericMonsterSensingConfig
// Size: 0x48 // Inherited bytes: 0x00
struct FGenericMonsterSensingConfig {
	// Fields
	float SensedRadius; // Offset: 0x00 // Size: 0x04
	float LoseSightRadius; // Offset: 0x04 // Size: 0x04
	float SensedAngle; // Offset: 0x08 // Size: 0x04
	float MaxRememberEnemyTime; // Offset: 0x0c // Size: 0x04
	float MinTimeLockTarget; // Offset: 0x10 // Size: 0x04
	float MinTimeWhenCannotSeeTarget; // Offset: 0x14 // Size: 0x04
	bool bIncludePlayer; // Offset: 0x18 // Size: 0x01
	bool bIncludeMonster; // Offset: 0x19 // Size: 0x01
	struct FGenericMonsterSensingFilterConfig PlayerFilter; // Offset: 0x1a // Size: 0x0a
	struct FGenericMonsterSensingFilterConfig MonsterFilter; // Offset: 0x24 // Size: 0x0a
	enum class ECollisionChannel VisibilityTraceChannel; // Offset: 0x2e // Size: 0x01
	char pad_0x2F[0x1]; // Offset: 0x2f // Size: 0x01
	float VisibilityTraceStartZ; // Offset: 0x30 // Size: 0x04
	float VisibilityTraceEndZ; // Offset: 0x34 // Size: 0x04
	enum class EGenericSearchEnemyRule SearchRule; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	struct FName IgnoreTargetIfHasTag; // Offset: 0x40 // Size: 0x08
};

// Object Name: ScriptStruct GenericFeatures.GenericMonsterSensingFilterConfig
// Size: 0x0a // Inherited bytes: 0x00
struct FGenericMonsterSensingFilterConfig {
	// Fields
	bool bEnableTargetAliveCheck; // Offset: 0x00 // Size: 0x01
	bool bEnableIgnoreTagCheck; // Offset: 0x01 // Size: 0x01
	bool bEnableFactionCheck; // Offset: 0x02 // Size: 0x01
	bool bEnableDistanceCheck; // Offset: 0x03 // Size: 0x01
	bool bEnableAngleCheck; // Offset: 0x04 // Size: 0x01
	bool bEnableNearDeathCheck; // Offset: 0x05 // Size: 0x01
	bool bDoNotAttackNearDeathEnemyFirst; // Offset: 0x06 // Size: 0x01
	bool bEnableWaterCheck; // Offset: 0x07 // Size: 0x01
	bool bEnableVisibilityCheck; // Offset: 0x08 // Size: 0x01
	bool bEnableLuaTargetOverride; // Offset: 0x09 // Size: 0x01
};

// Object Name: ScriptStruct GenericFeatures.HitBoxTagInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FHitBoxTagInfo {
	// Fields
	struct FBodyTypeDef BodyTypeDef; // Offset: 0x00 // Size: 0x08
	StrProperty HitBoxTag; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct GenericFeatures.StateRelationEntry
// Size: 0x48 // Inherited bytes: 0x00
struct FStateRelationEntry {
	// Fields
	struct FGameplayTag Tag; // Offset: 0x00 // Size: 0x08
	struct FGameplayTagContainer BlockedBy; // Offset: 0x08 // Size: 0x20
	struct FGameplayTagContainer Cancel; // Offset: 0x28 // Size: 0x20
};

