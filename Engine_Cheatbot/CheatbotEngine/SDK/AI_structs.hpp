#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AI.ActionMoveData
// Size: 0x10 // Inherited bytes: 0x00
struct FActionMoveData {
	// Fields
	bool IsStop; // Offset: 0x00 // Size: 0x01
	bool IsRun; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float DirectionX; // Offset: 0x04 // Size: 0x04
	float DirectionY; // Offset: 0x08 // Size: 0x04
	float DirectionZ; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct AI.CacheNearbyItemState
// Size: 0x20 // Inherited bytes: 0x00
struct FCacheNearbyItemState {
	// Fields
	struct TArray<struct FItemStateData> States; // Offset: 0x00 // Size: 0x10
	struct FVector Position; // Offset: 0x10 // Size: 0x0c
	bool IsDirty; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct AI.AIStateInfoBase
// Size: 0x18 // Inherited bytes: 0x00
struct FAIStateInfoBase {
	// Fields
	uint64 UnChanged; // Offset: 0x00 // Size: 0x08
	struct TArray<StrProperty> IgnoreNames; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct AI.UniqueStateInfo
// Size: 0x20 // Inherited bytes: 0x18
struct FUniqueStateInfo : FAIStateInfoBase {
	// Fields
	uint64 diff_mark_id; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct AI.ItemStateData
// Size: 0x50 // Inherited bytes: 0x20
struct FItemStateData : FUniqueStateInfo {
	// Fields
	IntProperty Type; // Offset: 0x20 // Size: 0x04
	IntProperty Category; // Offset: 0x24 // Size: 0x04
	IntProperty ID; // Offset: 0x28 // Size: 0x04
	IntProperty UID; // Offset: 0x2c // Size: 0x04
	float Durability; // Offset: 0x30 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x34 // Size: 0x0c
	uint32_t player_id; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	uint64 unique_id; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct AI.AIStateXYZ
// Size: 0x0c // Inherited bytes: 0x00
struct FAIStateXYZ {
	// Fields
	float X; // Offset: 0x00 // Size: 0x04
	float Y; // Offset: 0x04 // Size: 0x04
	float Z; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct AI.ChildDynamicItem
// Size: 0x20 // Inherited bytes: 0x00
struct FChildDynamicItem {
	// Fields
	IntProperty Category; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ChildName; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct AI.CacheSoundState
// Size: 0x38 // Inherited bytes: 0x00
struct FCacheSoundState {
	// Fields
	struct FSoundState SoundState; // Offset: 0x00 // Size: 0x30
	float Time; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct AI.SoundState
// Size: 0x30 // Inherited bytes: 0x18
struct FSoundState : FAIStateInfoBase {
	// Fields
	IntProperty Type; // Offset: 0x18 // Size: 0x04
	struct FAIStateXYZ Location; // Offset: 0x1c // Size: 0x0c
	uint32_t ID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIVehicleStateData
// Size: 0x80 // Inherited bytes: 0x00
struct FAIVehicleStateData {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct AI.AIVehicleHatredInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FAIVehicleHatredInfo {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct AI.BTTaskMobOnceMemory
// Size: 0x04 // Inherited bytes: 0x00
struct FBTTaskMobOnceMemory {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct AI.ShootingAimConfigContainer
// Size: 0x50 // Inherited bytes: 0x00
struct FShootingAimConfigContainer {
	// Fields
	MapProperty AimConfig; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct AI.ShootingAimConfig
// Size: 0x14 // Inherited bytes: 0x00
struct FShootingAimConfig {
	// Fields
	enum class EAIWeaponShootType WeaponShotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float AimDeviationScale; // Offset: 0x04 // Size: 0x04
	float MinAimDeviationScale; // Offset: 0x08 // Size: 0x04
	struct FVector2D RandomShootFreqRange; // Offset: 0x0c // Size: 0x08
};

// Object Name: ScriptStruct AI.DifficultyShootingConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FDifficultyShootingConfig {
	// Fields
	enum class EAIWeaponShootType WeaponShotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float DeviationScale; // Offset: 0x04 // Size: 0x04
	struct FVector2D RandomShootFreqRange; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct AI.BTAICheckInAIBehaviorRegionMemory
// Size: 0x2c // Inherited bytes: 0x00
struct FBTAICheckInAIBehaviorRegionMemory {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	struct FVector SpawnLocation; // Offset: 0x04 // Size: 0x0c
	struct FBox MaxMoveDistanceVolumeBox; // Offset: 0x10 // Size: 0x1c
};

// Object Name: ScriptStruct AI.BTAICheckMaxDistanceFromSpawnPointMemory
// Size: 0x2c // Inherited bytes: 0x00
struct FBTAICheckMaxDistanceFromSpawnPointMemory {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	struct FVector SpawnLocation; // Offset: 0x04 // Size: 0x0c
	struct FBox MaxMoveDistanceVolumeBox; // Offset: 0x10 // Size: 0x1c
};

// Object Name: ScriptStruct AI.WeatherToRange
// Size: 0x10 // Inherited bytes: 0x00
struct FWeatherToRange {
	// Fields
	struct TArray<struct FWeaponTypeToRange> Ranges; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AI.WeaponTypeToRange
// Size: 0x08 // Inherited bytes: 0x00
struct FWeaponTypeToRange {
	// Fields
	enum class EWeaponTypeNew WeaponType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Range; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.WeaponType2Range
// Size: 0x0c // Inherited bytes: 0x00
struct FWeaponType2Range {
	// Fields
	enum class EWeaponTypeNew WeaponType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Range; // Offset: 0x04 // Size: 0x04
	float NightRange; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct AI.WeaponTypeToRangeWithPawnState
// Size: 0x58 // Inherited bytes: 0x00
struct FWeaponTypeToRangeWithPawnState {
	// Fields
	enum class EWeaponTypeNew WeaponType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	MapProperty StateRange; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct AI.ShapeRangeParam
// Size: 0x0c // Inherited bytes: 0x00
struct FShapeRangeParam {
	// Fields
	float CircleR; // Offset: 0x00 // Size: 0x04
	float SectorR; // Offset: 0x04 // Size: 0x04
	float SectorDegree; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct AI.SightFanInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FSightFanInfo {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float Angle; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.InTroubleTeleportConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FInTroubleTeleportConfig {
	// Fields
	float SrcCheckRadius; // Offset: 0x00 // Size: 0x04
	float DstCheckRadius; // Offset: 0x04 // Size: 0x04
	uint32_t TryFindDstLocNum; // Offset: 0x08 // Size: 0x04
	bool OnlyTeleportToLand; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct AI.AIDistantJudgeNoftify
// Size: 0x30 // Inherited bytes: 0x00
struct FAIDistantJudgeNoftify {
	// Fields
	float RightValue; // Offset: 0x00 // Size: 0x04
	IntProperty SetBBValue; // Offset: 0x04 // Size: 0x04
	struct FBlackboardKeySelector NotifyBlackBoardKey; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct AI.BTFlyingChooseEnemyMemory
// Size: 0x0c // Inherited bytes: 0x00
struct FBTFlyingChooseEnemyMemory {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct AI.BTMobAddHpMemory
// Size: 0x01 // Inherited bytes: 0x00
struct FBTMobAddHpMemory {
	// Fields
	bool HPBuffAdded; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct AI.BTMobCheckLoseTargetMemory
// Size: 0x08 // Inherited bytes: 0x00
struct FBTMobCheckLoseTargetMemory {
	// Fields
	bool LastLoseTarget; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float LoseTargetElapsedTime; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTMobHearingMemory
// Size: 0x28 // Inherited bytes: 0x00
struct FBTMobHearingMemory {
	// Fields
	struct FNoiseInfo LastChosenNoiseInfo; // Offset: 0x00 // Size: 0x24
	float LockNoiseElapsedTime; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTMobMoveBlockTimerMemory
// Size: 0x04 // Inherited bytes: 0x00
struct FBTMobMoveBlockTimerMemory {
	// Fields
	float BlockElapsedTime; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTAISenseGrenadeMemory
// Size: 0x260 // Inherited bytes: 0x00
struct FBTAISenseGrenadeMemory {
	// Fields
	MapProperty GrenadeSensedDistance; // Offset: 0x00 // Size: 0x50
	MapProperty GrenadeSensedDistanceSquared; // Offset: 0x50 // Size: 0x50
	float fMaxSenseDistance; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x11c]; // Offset: 0xa4 // Size: 0x11c
	MapProperty GrenadeBBKeyInfo; // Offset: 0x1c0 // Size: 0x50
	MapProperty GrenadeClassesMap; // Offset: 0x210 // Size: 0x50
};

// Object Name: ScriptStruct AI.AISenseGrenadeBBKeyInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FAISenseGrenadeBBKeyInfo {
	// Fields
	enum class EAISenseGrenadeType GrenadeType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FBlackboardKeySelector BBKeyGrenadeActor; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct AI.BPAISenseGrenadeDistanceConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FBPAISenseGrenadeDistanceConfig {
	// Fields
	enum class EAISenseGrenadeType GrenadeType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float GrenadeSenseDistance; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.AISenseGrenadeClassConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FAISenseGrenadeClassConfig {
	// Fields
	struct TArray<struct UObject*> IncludeClassArray; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AI.TaskAddItem
// Size: 0x08 // Inherited bytes: 0x00
struct FTaskAddItem {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ItemCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.DifficultyTimeConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FDifficultyTimeConfig {
	// Fields
	float WaitTime; // Offset: 0x00 // Size: 0x04
	float RandomDeviation; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTTaskCrowdMoveMemory
// Size: 0x78 // Inherited bytes: 0x00
struct FBTTaskCrowdMoveMemory {
	// Fields
	char pad_0x0[0x78]; // Offset: 0x00 // Size: 0x78
};

// Object Name: ScriptStruct AI.BTTaskFlyAlongSplineMemory
// Size: 0x1c // Inherited bytes: 0x00
struct FBTTaskFlyAlongSplineMemory {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
};

// Object Name: ScriptStruct AI.BTTaskForceIdleMemory
// Size: 0x0c // Inherited bytes: 0x00
struct FBTTaskForceIdleMemory {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct AI.GeneralRandLocationRetryRule
// Size: 0x0c // Inherited bytes: 0x00
struct FGeneralRandLocationRetryRule {
	// Fields
	float AngleRangeMin; // Offset: 0x00 // Size: 0x04
	float AngleRangeMax; // Offset: 0x04 // Size: 0x04
	float ScanStep; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTLaunchMoveSpeedCurve
// Size: 0x04 // Inherited bytes: 0x00
struct FBTLaunchMoveSpeedCurve {
	// Fields
	float DistanceThreshold; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTTaskMobExplodeMemory
// Size: 0x01 // Inherited bytes: 0x00
struct FBTTaskMobExplodeMemory {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct AI.MobRandLocationRetryRule
// Size: 0x0c // Inherited bytes: 0x00
struct FMobRandLocationRetryRule {
	// Fields
	float AngleRangeMin; // Offset: 0x00 // Size: 0x04
	float AngleRangeMax; // Offset: 0x04 // Size: 0x04
	IntProperty RetryTimes; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTTaskGetNearDeathCharNearbyMemory
// Size: 0x0c // Inherited bytes: 0x00
struct FBTTaskGetNearDeathCharNearbyMemory {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct AI.BTTaskMobGetRandomAttackTargetInRadius
// Size: 0x08 // Inherited bytes: 0x00
struct FBTTaskMobGetRandomAttackTargetInRadius {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct AI.BTTaskGetVehicleNearbyMemory
// Size: 0x0c // Inherited bytes: 0x00
struct FBTTaskGetVehicleNearbyMemory {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct AI.BTTaskMoveAroundMemory
// Size: 0xa0 // Inherited bytes: 0x00
struct FBTTaskMoveAroundMemory {
	// Fields
	char pad_0x0[0x68]; // Offset: 0x00 // Size: 0x68
	struct AActor* FocusActor; // Offset: 0x68 // Size: 0x08
	char pad_0x70[0x30]; // Offset: 0x70 // Size: 0x30
};

// Object Name: ScriptStruct AI.BTTaskRotateToTargetMemory
// Size: 0x08 // Inherited bytes: 0x00
struct FBTTaskRotateToTargetMemory {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct AI.BlackBoardSubTreeConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FBlackBoardSubTreeConfig {
	// Fields
	struct FBlackboardKeySelector BBKey; // Offset: 0x00 // Size: 0x28
	struct UBehaviorTree* SubBehaviorAsset; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct AI.LocationRetryRule
// Size: 0x0c // Inherited bytes: 0x00
struct FLocationRetryRule {
	// Fields
	float AngleRangeMin; // Offset: 0x00 // Size: 0x04
	float AngleRangeMax; // Offset: 0x04 // Size: 0x04
	float ScanStep; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct AI.AITaskNodeThrowGrenadeTargetLocRandomableConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig {
	// Fields
	float RandomRange; // Offset: 0x00 // Size: 0x04
	IntProperty RandomTimes; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTAICharacterCastSkillMemory
// Size: 0x34 // Inherited bytes: 0x00
struct FBTAICharacterCastSkillMemory {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	struct FVector FocusLocation; // Offset: 0x04 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> FocusActor; // Offset: 0x10 // Size: 0x08
	struct FVector TossTargetLoc; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FVector GrenadeThrowStartLoc; // Offset: 0x28 // Size: 0x0c
};

// Object Name: ScriptStruct AI.FindBuildingRatingConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FFindBuildingRatingConfig {
	// Fields
	IntProperty Rating; // Offset: 0x00 // Size: 0x04
	float SearchRadius; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct AI.BTTaskParachuteJumpBaseMemory
// Size: 0x20 // Inherited bytes: 0x00
struct FBTTaskParachuteJumpBaseMemory {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct AI.TriggeredCustomDamageEvent
// Size: 0xf0 // Inherited bytes: 0x00
struct FTriggeredCustomDamageEvent {
	// Fields
	struct FCustomDamageEventRow Event; // Offset: 0x00 // Size: 0xe8
	float TimeTriggered; // Offset: 0xe8 // Size: 0x04
	char pad_0xEC[0x4]; // Offset: 0xec // Size: 0x04
};

// Object Name: ScriptStruct AI.CustomDamageEventRow
// Size: 0xe8 // Inherited bytes: 0x08
struct FCustomDamageEventRow : FTableRowBase {
	// Fields
	bool bProcessedLocally; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	struct FGuid EventID; // Offset: 0x0c // Size: 0x10
	bool bEnabled; // Offset: 0x1c // Size: 0x01
	bool bClientOnly; // Offset: 0x1d // Size: 0x01
	bool bReplicate; // Offset: 0x1e // Size: 0x01
	bool bOnlyReplicateWhenRelevant; // Offset: 0x1f // Size: 0x01
	char EventTriggerType; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	float TriggerCooldown; // Offset: 0x24 // Size: 0x04
	float HealthPercentageThreshold; // Offset: 0x28 // Size: 0x04
	bool bTriggerWhenDead; // Offset: 0x2c // Size: 0x01
	char EventReactionType; // Offset: 0x2d // Size: 0x01
	char pad_0x2E[0x2]; // Offset: 0x2e // Size: 0x02
	struct UClass* ActorClassToSpawn; // Offset: 0x30 // Size: 0x28
	bool bTriggersGlobalCooldown; // Offset: 0x58 // Size: 0x01
	bool bLockedByGlobalCooldown; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x6]; // Offset: 0x5a // Size: 0x06
	struct UClass* OnCooldownActorClassToSpawn; // Offset: 0x60 // Size: 0x28
	bool bDestroySpawnedParticlesWithOwner; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct FName AttachComponentTag; // Offset: 0x90 // Size: 0x08
	struct FName SpawnSocketName; // Offset: 0x98 // Size: 0x08
	struct FName CustomSpawnTransformTag; // Offset: 0xa0 // Size: 0x08
	bool bSpawnAtRandomPointInBoundingBox; // Offset: 0xa8 // Size: 0x01
	bool bUseCustomSpawnRotation; // Offset: 0xa9 // Size: 0x01
	char MinToSpawn; // Offset: 0xaa // Size: 0x01
	char MaxToSpawn; // Offset: 0xab // Size: 0x01
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
	struct FName ActorSpawnTag; // Offset: 0xb0 // Size: 0x08
	struct FName MeshComponentTag; // Offset: 0xb8 // Size: 0x08
	IntProperty MeshInstanceIndex; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
	struct FName BoneName; // Offset: 0xc8 // Size: 0x08
	struct FName PhysicsAssetProfileName; // Offset: 0xd0 // Size: 0x08
	struct FName CollisionPrimitiveTag; // Offset: 0xd8 // Size: 0x08
	char pad_0xE0[0x8]; // Offset: 0xe0 // Size: 0x08
};

// Object Name: ScriptStruct AI.DiffMercenaryJumpObstacleAllPlayerInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffMercenaryJumpObstacleAllPlayerInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.MercenaryJumpObstacleAIStateInfo
// Size: 0x78 // Inherited bytes: 0x20
struct FMercenaryJumpObstacleAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FJumpObstacleInfo jump_obstacle_info; // Offset: 0x20 // Size: 0x58
};

// Object Name: ScriptStruct AI.JumpObstacleInfo
// Size: 0x58 // Inherited bytes: 0x18
struct FJumpObstacleInfo : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ ObstacleCenter; // Offset: 0x18 // Size: 0x0c
	struct FAIStateXYZ ObstacleNearest; // Offset: 0x24 // Size: 0x0c
	struct FAIStateXYZ ObstacleHighest; // Offset: 0x30 // Size: 0x0c
	struct FAIStateXYZ JumpV; // Offset: 0x3c // Size: 0x0c
	struct FAIStateXYZ LandSpot; // Offset: 0x48 // Size: 0x0c
	bool is_valid_jump; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
};

// Object Name: ScriptStruct AI.DiffLandScapeAllPlayerInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffLandScapeAllPlayerInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.LandScapeAIStateInfo
// Size: 0x30 // Inherited bytes: 0x20
struct FLandScapeAIStateInfo : FUniqueStateInfo {
	// Fields
	struct TArray<struct FLandScapeDestroyState> landscape_destroy_info; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct AI.LandScapeDestroyState
// Size: 0x38 // Inherited bytes: 0x20
struct FLandScapeDestroyState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	struct FAIStateXYZ Location; // Offset: 0x24 // Size: 0x0c
	IntProperty Radius; // Offset: 0x30 // Size: 0x04
	IntProperty Depth; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffLandScapeAIStateInfo
// Size: 0x58 // Inherited bytes: 0x20
struct FDiffLandScapeAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FDiffLandScapeDestroyStateList landscape_destroy_info; // Offset: 0x20 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffLandScapeDestroyStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffLandScapeDestroyStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FLandScapeDestroyState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint32_t> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffLandScapeGlobalGameInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffLandScapeGlobalGameInfo : FAIStateInfoBase {
	// Fields
	struct FDiffLandScapeChangeStateList landscape_change_info; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffLandScapeChangeStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffLandScapeChangeStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FLandScapeChangeState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.LandScapeChangeState
// Size: 0x38 // Inherited bytes: 0x20
struct FLandScapeChangeState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FLandScapeChange> changes; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.LandScapeChange
// Size: 0x48 // Inherited bytes: 0x20
struct FLandScapeChange : FUniqueStateInfo {
	// Fields
	IntProperty component_index_x; // Offset: 0x20 // Size: 0x04
	IntProperty component_index_y; // Offset: 0x24 // Size: 0x04
	IntProperty component_x1; // Offset: 0x28 // Size: 0x04
	IntProperty component_y1; // Offset: 0x2c // Size: 0x04
	IntProperty component_x2; // Offset: 0x30 // Size: 0x04
	IntProperty component_y2; // Offset: 0x34 // Size: 0x04
	struct TArray<uint16_t> heights_data; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffMPBaseAllPlayersInfo
// Size: 0x118 // Inherited bytes: 0x18
struct FDiffMPBaseAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
	struct TArray<uint64> del_item_id; // Offset: 0x108 // Size: 0x10
};

// Object Name: ScriptStruct AI.MPBaseAIStateInfo
// Size: 0x88 // Inherited bytes: 0x20
struct FMPBaseAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FMPBaseAIPlayerState State; // Offset: 0x20 // Size: 0x38
	struct FDeathMatchAIPlayerEquipment deathmatch_backpack; // Offset: 0x58 // Size: 0x30
};

// Object Name: ScriptStruct AI.DeathMatchAIPlayerEquipment
// Size: 0x30 // Inherited bytes: 0x18
struct FDeathMatchAIPlayerEquipment : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIGameModePlayerWeaponSchemeInfo> weapon_scheme_info_list; // Offset: 0x18 // Size: 0x10
	IntProperty cur_weapon_scheme_index; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIGameModePlayerWeaponSchemeInfo
// Size: 0x30 // Inherited bytes: 0x18
struct FAIGameModePlayerWeaponSchemeInfo : FAIStateInfoBase {
	// Fields
	IntProperty scheme_index; // Offset: 0x18 // Size: 0x04
	bool is_locked; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	struct TArray<struct FAIGameModePlayerWeaponSchemeSlotInfo> slot_list; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIGameModePlayerWeaponSchemeSlotInfo
// Size: 0x38 // Inherited bytes: 0x18
struct FAIGameModePlayerWeaponSchemeSlotInfo : FAIStateInfoBase {
	// Fields
	IntProperty slot_index; // Offset: 0x18 // Size: 0x04
	IntProperty item_id; // Offset: 0x1c // Size: 0x04
	IntProperty Count; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<IntProperty> attach_list; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.MPBaseAIPlayerState
// Size: 0x38 // Inherited bytes: 0x18
struct FMPBaseAIPlayerState : FAIStateInfoBase {
	// Fields
	uint32_t ID; // Offset: 0x18 // Size: 0x04
	bool is_invincible; // Offset: 0x1c // Size: 0x01
	bool in_shoveling; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	IntProperty death_count; // Offset: 0x20 // Size: 0x04
	float survive_time; // Offset: 0x24 // Size: 0x04
	float kd_ratio; // Offset: 0x28 // Size: 0x04
	IntProperty continue_kill; // Offset: 0x2c // Size: 0x04
	IntProperty revenge; // Offset: 0x30 // Size: 0x04
	IntProperty top_spot_end; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffMPBaseGlobalGameState
// Size: 0x68 // Inherited bytes: 0x18
struct FDiffMPBaseGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffMPBaseAIGameState Game; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct AI.DiffMPBaseAIGameState
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffMPBaseAIGameState : FAIStateInfoBase {
	// Fields
	struct FDiffTeamScoreDataList team_score_datas; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffTeamScoreDataList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffTeamScoreDataList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FTeamScoreData> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.TeamScoreData
// Size: 0x28 // Inherited bytes: 0x20
struct FTeamScoreData : FUniqueStateInfo {
	// Fields
	IntProperty team_id; // Offset: 0x20 // Size: 0x04
	IntProperty team_score; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffBRBaseAllPlayersInfo
// Size: 0x118 // Inherited bytes: 0x18
struct FDiffBRBaseAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
	struct TArray<uint64> del_item_id; // Offset: 0x108 // Size: 0x10
};

// Object Name: ScriptStruct AI.BRBaseAIStateInfo
// Size: 0x98 // Inherited bytes: 0x20
struct FBRBaseAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FBRBaseAIPlayerState State; // Offset: 0x20 // Size: 0x60
	uint32_t deliver_target_id; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct TArray<struct FAIRecipients> recipients; // Offset: 0x88 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIRecipients
// Size: 0x38 // Inherited bytes: 0x18
struct FAIRecipients : FAIStateInfoBase {
	// Fields
	uint32_t ID; // Offset: 0x18 // Size: 0x04
	uint32_t team_id; // Offset: 0x1c // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x20 // Size: 0x0c
	float Hp; // Offset: 0x2c // Size: 0x04
	uint32_t Type; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct AI.BRBaseAIPlayerState
// Size: 0x60 // Inherited bytes: 0x18
struct FBRBaseAIPlayerState : FAIStateInfoBase {
	// Fields
	IntProperty expect_delivery_num; // Offset: 0x18 // Size: 0x04
	IntProperty remain_delivery_num; // Offset: 0x1c // Size: 0x04
	bool is_diving; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty revival_count; // Offset: 0x24 // Size: 0x04
	uint32_t parachute_state; // Offset: 0x28 // Size: 0x04
	uint32_t plane_id; // Offset: 0x2c // Size: 0x04
	IntProperty parallel_world_id; // Offset: 0x30 // Size: 0x04
	bool is_be_spectated; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	uint32_t related_id; // Offset: 0x38 // Size: 0x04
	bool can_parachute_jump; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	uint32_t follow_state; // Offset: 0x40 // Size: 0x04
	uint32_t leader_id; // Offset: 0x44 // Size: 0x04
	uint32_t parachute_type; // Offset: 0x48 // Size: 0x04
	IntProperty revival_type; // Offset: 0x4c // Size: 0x04
	struct FAIStateXYZ target_position; // Offset: 0x50 // Size: 0x0c
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffBRBaseGlobalGameState
// Size: 0x168 // Inherited bytes: 0x18
struct FDiffBRBaseGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffAirDropBoxStateList air_drop_box_states; // Offset: 0x18 // Size: 0x38
	struct FDiffSpecialMeshStateList special_meshes; // Offset: 0x50 // Size: 0x38
	struct FRedZoneState red_zone; // Offset: 0x88 // Size: 0x30
	struct FSafetyAreaState safety_area; // Offset: 0xb8 // Size: 0x48
	struct FDiffPlaneInfoList airplane_list; // Offset: 0x100 // Size: 0x38
	struct FGlobalControlInfo control_info; // Offset: 0x138 // Size: 0x20
	struct TArray<uint32_t> silent_list; // Offset: 0x158 // Size: 0x10
};

// Object Name: ScriptStruct AI.GlobalControlInfo
// Size: 0x20 // Inherited bytes: 0x18
struct FGlobalControlInfo : FAIStateInfoBase {
	// Fields
	IntProperty airdrop_tag; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffPlaneInfoList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffPlaneInfoList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FPlaneInfo> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.PlaneInfo
// Size: 0x88 // Inherited bytes: 0x20
struct FPlaneInfo : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	uint32_t Type; // Offset: 0x24 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct FFlightInfo flight_info; // Offset: 0x38 // Size: 0x50
};

// Object Name: ScriptStruct AI.FlightInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FFlightInfo : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ start_loc; // Offset: 0x18 // Size: 0x0c
	struct FAIStateXYZ end_loc; // Offset: 0x24 // Size: 0x0c
	struct FAIStateXYZ can_jump_loc; // Offset: 0x30 // Size: 0x0c
	struct FAIStateXYZ force_jump_loc; // Offset: 0x3c // Size: 0x0c
	IntProperty player_num; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct AI.SafetyAreaState
// Size: 0x48 // Inherited bytes: 0x18
struct FSafetyAreaState : FAIStateInfoBase {
	// Fields
	IntProperty State; // Offset: 0x18 // Size: 0x04
	struct FAIStateXYZ Center; // Offset: 0x1c // Size: 0x0c
	float Radius; // Offset: 0x28 // Size: 0x04
	struct FAIStateXYZ next_center; // Offset: 0x2c // Size: 0x0c
	float next_radius; // Offset: 0x38 // Size: 0x04
	IntProperty Time; // Offset: 0x3c // Size: 0x04
	IntProperty total_time; // Offset: 0x40 // Size: 0x04
	IntProperty circle_index; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct AI.RedZoneState
// Size: 0x30 // Inherited bytes: 0x18
struct FRedZoneState : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ Center; // Offset: 0x18 // Size: 0x0c
	float Radius; // Offset: 0x24 // Size: 0x04
	float remain_time; // Offset: 0x28 // Size: 0x04
	float start_time; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffSpecialMeshStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffSpecialMeshStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FSpecialMeshState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.SpecialMeshState
// Size: 0x40 // Inherited bytes: 0x20
struct FSpecialMeshState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x24 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x30 // Size: 0x0c
	IntProperty custom_state; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffAirDropBoxStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAirDropBoxStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAirDropBoxState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.AirDropBoxState
// Size: 0x38 // Inherited bytes: 0x20
struct FAirDropBoxState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	IntProperty Type; // Offset: 0x24 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffNearbyMonsterAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffNearbyMonsterAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.NearbyMonsterAIStateInfo
// Size: 0x40 // Inherited bytes: 0x20
struct FNearbyMonsterAIStateInfo : FUniqueStateInfo {
	// Fields
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
	struct TArray<uint64> monster_states_index; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffNearbyMonsterGlobalGameState
// Size: 0x68 // Inherited bytes: 0x18
struct FDiffNearbyMonsterGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffMonsterGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct AI.DiffMonsterGlobalNearbyInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffMonsterGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct FDiffMonsterStates monster_states; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffMonsterStates
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffMonsterStates : FAIStateInfoBase {
	// Fields
	struct TArray<struct FMonsterState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.MonsterState
// Size: 0x80 // Inherited bytes: 0x20
struct FMonsterState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	IntProperty Category; // Offset: 0x24 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x28 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x34 // Size: 0x0c
	struct FAIStateXYZ Speed; // Offset: 0x40 // Size: 0x0c
	float Hp; // Offset: 0x4c // Size: 0x04
	float hp_max; // Offset: 0x50 // Size: 0x04
	IntProperty using_skill_id; // Offset: 0x54 // Size: 0x04
	IntProperty skill_phase_index; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct TArray<struct FAIAttribute> Attributes; // Offset: 0x60 // Size: 0x10
	struct TArray<struct FIntAIAttribute> int_attributes; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct AI.IntAIAttribute
// Size: 0x30 // Inherited bytes: 0x20
struct FIntAIAttribute : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	uint64 Value; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct AI.AIAttribute
// Size: 0x28 // Inherited bytes: 0x20
struct FAIAttribute : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	float Value; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffDestructibleItemAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffDestructibleItemAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.DestructibleItemAIStateInfo
// Size: 0x40 // Inherited bytes: 0x20
struct FDestructibleItemAIStateInfo : FUniqueStateInfo {
	// Fields
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
	struct TArray<uint64> destructible_items_index; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffDestructibleItemGlobalGameState
// Size: 0x68 // Inherited bytes: 0x18
struct FDiffDestructibleItemGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffDestructibleItemGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct AI.DiffDestructibleItemGlobalNearbyInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffDestructibleItemGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct FDiffDestructibleItemStateList destructible_items; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffDestructibleItemStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffDestructibleItemStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDestructibleItem> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DestructibleItem
// Size: 0x60 // Inherited bytes: 0x20
struct FDestructibleItem : FUniqueStateInfo {
	// Fields
	IntProperty Category; // Offset: 0x20 // Size: 0x04
	uint32_t ID; // Offset: 0x24 // Size: 0x04
	struct FAIStateXYZ Center; // Offset: 0x28 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x34 // Size: 0x0c
	struct TArray<bool> fragment_states; // Offset: 0x40 // Size: 0x10
	struct FAIStateXYZ Scale; // Offset: 0x50 // Size: 0x0c
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffDynamicItemAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffDynamicItemAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.DynamicItemAIStateInfo
// Size: 0x40 // Inherited bytes: 0x20
struct FDynamicItemAIStateInfo : FUniqueStateInfo {
	// Fields
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
	struct TArray<uint64> dynamic_items_index; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffDynamicItemGlobalGameState
// Size: 0x68 // Inherited bytes: 0x18
struct FDiffDynamicItemGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffDynamicItemGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct AI.DiffDynamicItemGlobalNearbyInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffDynamicItemGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct FDiffDynamicItemStateList dynamic_items; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffDynamicItemStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffDynamicItemStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDynamicItem> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DynamicItem
// Size: 0x80 // Inherited bytes: 0x20
struct FDynamicItem : FUniqueStateInfo {
	// Fields
	IntProperty Category; // Offset: 0x20 // Size: 0x04
	uint32_t ID; // Offset: 0x24 // Size: 0x04
	struct FAIStateXYZ Center; // Offset: 0x28 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x34 // Size: 0x0c
	float Durability; // Offset: 0x40 // Size: 0x04
	uint32_t Custom; // Offset: 0x44 // Size: 0x04
	struct FAIStateXYZ Scale; // Offset: 0x48 // Size: 0x0c
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FAIAttribute> custom_attribute_list; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FIntAIAttribute> int_custom_attribute_list; // Offset: 0x68 // Size: 0x10
	IntProperty parallel_world_id; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffDynamicItem
// Size: 0xd0 // Inherited bytes: 0x20
struct FDiffDynamicItem : FUniqueStateInfo {
	// Fields
	IntProperty Category; // Offset: 0x20 // Size: 0x04
	uint32_t ID; // Offset: 0x24 // Size: 0x04
	struct FAIStateXYZ Center; // Offset: 0x28 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x34 // Size: 0x0c
	float Durability; // Offset: 0x40 // Size: 0x04
	uint32_t Custom; // Offset: 0x44 // Size: 0x04
	struct FAIStateXYZ Scale; // Offset: 0x48 // Size: 0x0c
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct FDiffAIAttributeList custom_attribute_list; // Offset: 0x58 // Size: 0x38
	struct FDiffIntAIAttributeList int_custom_attribute_list; // Offset: 0x90 // Size: 0x38
	IntProperty parallel_world_id; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffIntAIAttributeList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffIntAIAttributeList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FIntAIAttribute> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffAIAttributeList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAIAttributeList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIAttribute> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffNearbyPlayerAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffNearbyPlayerAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.NearbyPlayerAIStateInfo
// Size: 0x30 // Inherited bytes: 0x20
struct FNearbyPlayerAIStateInfo : FUniqueStateInfo {
	// Fields
	struct TArray<struct FAINearbyPlayer> nearby_player; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct AI.AINearbyPlayer
// Size: 0x40 // Inherited bytes: 0x20
struct FAINearbyPlayer : FUniqueStateInfo {
	// Fields
	struct FAISimplifyState State; // Offset: 0x20 // Size: 0x20
};

// Object Name: ScriptStruct AI.AISimplifyState
// Size: 0x20 // Inherited bytes: 0x18
struct FAISimplifyState : FAIStateInfoBase {
	// Fields
	uint32_t ID; // Offset: 0x18 // Size: 0x04
	bool has_smoke; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct AI.DiffNearbyPlayerAIStateInfo
// Size: 0x58 // Inherited bytes: 0x20
struct FDiffNearbyPlayerAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FDiffAINearbyPlayerList nearby_player; // Offset: 0x20 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffAINearbyPlayerList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAINearbyPlayerList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAINearbyPlayer> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffNearbyDoorAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffNearbyDoorAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.NearbyDoorAIStateInfo
// Size: 0x40 // Inherited bytes: 0x20
struct FNearbyDoorAIStateInfo : FUniqueStateInfo {
	// Fields
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
	struct TArray<uint64> nearby_door_index; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffNearbyDoorGlobalGameState
// Size: 0x68 // Inherited bytes: 0x18
struct FDiffNearbyDoorGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffDoorGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct AI.DiffDoorGlobalNearbyInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffDoorGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct FDiffDoorStateList nearby_door; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffDoorStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffDoorStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDoorState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DoorState
// Size: 0x48 // Inherited bytes: 0x20
struct FDoorState : FUniqueStateInfo {
	// Fields
	struct FAIStateXYZ Position; // Offset: 0x20 // Size: 0x0c
	IntProperty State; // Offset: 0x2c // Size: 0x04
	uint32_t ID; // Offset: 0x30 // Size: 0x04
	struct FAIStateXYZ Rotation; // Offset: 0x34 // Size: 0x0c
	IntProperty Type; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffVehicleAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffVehicleAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.VehicleAIStateInfo
// Size: 0x148 // Inherited bytes: 0x20
struct FVehicleAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FVehicleAIPlayerState State; // Offset: 0x20 // Size: 0x20
	struct FVehicleState vehicle_state; // Offset: 0x40 // Size: 0xe8
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
	struct TArray<uint64> nearby_vehicles_index; // Offset: 0x138 // Size: 0x10
};

// Object Name: ScriptStruct AI.VehicleState
// Size: 0xe8 // Inherited bytes: 0x20
struct FVehicleState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x24 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x30 // Size: 0x0c
	float Hp; // Offset: 0x3c // Size: 0x04
	float gas; // Offset: 0x40 // Size: 0x04
	struct FAIStateXYZ Speed; // Offset: 0x44 // Size: 0x0c
	uint32_t damaged_num; // Offset: 0x50 // Size: 0x04
	uint32_t Category; // Offset: 0x54 // Size: 0x04
	bool is_reverse; // Offset: 0x58 // Size: 0x01
	bool has_player; // Offset: 0x59 // Size: 0x01
	bool is_full; // Offset: 0x5a // Size: 0x01
	char pad_0x5B[0x5]; // Offset: 0x5b // Size: 0x05
	struct FCameraState Camera; // Offset: 0x60 // Size: 0x40
	IntProperty location_state; // Offset: 0xa0 // Size: 0x04
	bool is_attached; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	uint32_t special_states; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
	struct TArray<float> wheels_hp; // Offset: 0xb0 // Size: 0x10
	struct TArray<struct FVehicleDamageInfo> damage_info; // Offset: 0xc0 // Size: 0x10
	bool is_has_collision; // Offset: 0xd0 // Size: 0x01
	bool is_using_horn; // Offset: 0xd1 // Size: 0x01
	char pad_0xD2[0x2]; // Offset: 0xd2 // Size: 0x02
	uint32_t born_island_owner_id; // Offset: 0xd4 // Size: 0x04
	uint32_t vehicle_avatar_id; // Offset: 0xd8 // Size: 0x04
	uint32_t custom_state; // Offset: 0xdc // Size: 0x04
	float special_energy; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
};

// Object Name: ScriptStruct AI.VehicleDamageInfo
// Size: 0x30 // Inherited bytes: 0x18
struct FVehicleDamageInfo : FAIStateInfoBase {
	// Fields
	uint32_t vehicle_id; // Offset: 0x18 // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x1c // Size: 0x04
	float Damage; // Offset: 0x20 // Size: 0x04
	IntProperty damage_type; // Offset: 0x24 // Size: 0x04
	bool is_kill; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct AI.CameraState
// Size: 0x40 // Inherited bytes: 0x18
struct FCameraState : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ Position; // Offset: 0x18 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x24 // Size: 0x0c
	struct FAIStateXYZ view_position; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct AI.VehicleAIPlayerState
// Size: 0x20 // Inherited bytes: 0x18
struct FVehicleAIPlayerState : FAIStateInfoBase {
	// Fields
	IntProperty vehicle_role; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffVehicleGlobalGameState
// Size: 0x78 // Inherited bytes: 0x18
struct FDiffVehicleGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffVehicleGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x50
	struct TArray<struct FAIStateXYZ> vehicle_spot_position; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffVehicleGlobalNearbyInfo
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffVehicleGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct FDiffVehicleStateList nearby_vehicles; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffVehicleStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffVehicleStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FVehicleState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffBaseNearbyAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffBaseNearbyAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.BaseNearbyAIStateInfo
// Size: 0x88 // Inherited bytes: 0x20
struct FBaseNearbyAIStateInfo : FUniqueStateInfo {
	// Fields
	struct TArray<uint64> nearby_item_index; // Offset: 0x20 // Size: 0x10
	struct TArray<uint64> nearby_thrown_index; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x48]; // Offset: 0x40 // Size: 0x48
};

// Object Name: ScriptStruct AI.DiffBaseNearbyGlobalGameState
// Size: 0xa0 // Inherited bytes: 0x18
struct FDiffBaseNearbyGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDiffBaseGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x88
};

// Object Name: ScriptStruct AI.DiffBaseGlobalNearbyInfo
// Size: 0x88 // Inherited bytes: 0x18
struct FDiffBaseGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct FDiffItemStateDataList nearby_item; // Offset: 0x18 // Size: 0x38
	struct FDiffAINearbyThrownList nearby_thrown; // Offset: 0x50 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffAINearbyThrownList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAINearbyThrownList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAINearbyThrown> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.AINearbyThrown
// Size: 0x48 // Inherited bytes: 0x20
struct FAINearbyThrown : FUniqueStateInfo {
	// Fields
	IntProperty Type; // Offset: 0x20 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x24 // Size: 0x0c
	float remain_time; // Offset: 0x30 // Size: 0x04
	float explode_time; // Offset: 0x34 // Size: 0x04
	bool is_held; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	uint32_t ActorId; // Offset: 0x3c // Size: 0x04
	uint32_t sourceid; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffItemStateDataList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffItemStateDataList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FItemStateData> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffMLBaseAllPlayersInfo
// Size: 0x108 // Inherited bytes: 0x18
struct FDiffMLBaseAllPlayersInfo : FAIStateInfoBase {
	// Fields
	MapProperty AllAIStateInfo; // Offset: 0x18 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x68 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xb8 // Size: 0x50
};

// Object Name: ScriptStruct AI.MLBaseAIStateInfo
// Size: 0x130 // Inherited bytes: 0x20
struct FMLBaseAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FAIHeardSound Sound; // Offset: 0x20 // Size: 0x28
	struct FProgressBarState progress_bar; // Offset: 0x48 // Size: 0x28
	struct FAIPlayerHitInfo player_hit_info; // Offset: 0x70 // Size: 0x30
	struct FAIStateConfig Config; // Offset: 0xa0 // Size: 0x20
	struct FDamageRateInfo damage_rate_info; // Offset: 0xc0 // Size: 0x40
	struct TArray<struct FAIDestroyBulletProbInfo> destroy_bullet_prob_info; // Offset: 0x100 // Size: 0x10
	struct TArray<struct FDamageSource> all_damage_source; // Offset: 0x110 // Size: 0x10
	struct TArray<struct FAIBulletHole> all_bullet_hole; // Offset: 0x120 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIBulletHole
// Size: 0x38 // Inherited bytes: 0x18
struct FAIBulletHole : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ hole_pos; // Offset: 0x18 // Size: 0x0c
	struct FAIStateXYZ hole_source_pos; // Offset: 0x24 // Size: 0x0c
	uint32_t hole_source_id; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct AI.DamageSource
// Size: 0x30 // Inherited bytes: 0x18
struct FDamageSource : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ damage_source; // Offset: 0x18 // Size: 0x0c
	IntProperty damage_type; // Offset: 0x24 // Size: 0x04
	IntProperty damage_weapon_type; // Offset: 0x28 // Size: 0x04
	uint32_t damage_source_id; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIDestroyBulletProbInfo
// Size: 0xa0 // Inherited bytes: 0x20
struct FAIDestroyBulletProbInfo : FUniqueStateInfo {
	// Fields
	IntProperty bullet_id; // Offset: 0x20 // Size: 0x04
	float low_hp_threshold; // Offset: 0x24 // Size: 0x04
	struct FSingleDestroyBulletProbInfo low_hp_destroy_bullet_info; // Offset: 0x28 // Size: 0x28
	struct FSingleDestroyBulletProbInfo high_hp_destroy_bullet_info; // Offset: 0x50 // Size: 0x28
	struct FSingleDestroyBulletProbInfo fatal_Damage_destroy_bullet_info; // Offset: 0x78 // Size: 0x28
};

// Object Name: ScriptStruct AI.SingleDestroyBulletProbInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FSingleDestroyBulletProbInfo : FAIStateInfoBase {
	// Fields
	float max_destroy_time_float; // Offset: 0x18 // Size: 0x04
	IntProperty max_destroy_num; // Offset: 0x1c // Size: 0x04
	float destroy_cd_float; // Offset: 0x20 // Size: 0x04
	float destroy_bullet_prob; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AI.DamageRateInfo
// Size: 0x40 // Inherited bytes: 0x18
struct FDamageRateInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDamageRate> damage_rate_map; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FDamageRate> revive_damage_rate_map; // Offset: 0x28 // Size: 0x10
	float near_death_damage_rate; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct AI.DamageRate
// Size: 0x20 // Inherited bytes: 0x18
struct FDamageRate : FAIStateInfoBase {
	// Fields
	float Hp; // Offset: 0x18 // Size: 0x04
	float Rate; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIStateConfig
// Size: 0x20 // Inherited bytes: 0x18
struct FAIStateConfig : FAIStateInfoBase {
	// Fields
	IntProperty Level; // Offset: 0x18 // Size: 0x04
	IntProperty Style; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIPlayerHitInfo
// Size: 0x30 // Inherited bytes: 0x18
struct FAIPlayerHitInfo : FAIStateInfoBase {
	// Fields
	IntProperty fire_count; // Offset: 0x18 // Size: 0x04
	IntProperty hit_count; // Offset: 0x1c // Size: 0x04
	IntProperty hit_head_count; // Offset: 0x20 // Size: 0x04
	IntProperty hit_count_filter; // Offset: 0x24 // Size: 0x04
	IntProperty hit_head_filter; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.ProgressBarState
// Size: 0x28 // Inherited bytes: 0x18
struct FProgressBarState : FAIStateInfoBase {
	// Fields
	IntProperty Type; // Offset: 0x18 // Size: 0x04
	float remain_time; // Offset: 0x1c // Size: 0x04
	uint32_t targetid; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AI.AIHeardSound
// Size: 0x28 // Inherited bytes: 0x18
struct FAIHeardSound : FAIStateInfoBase {
	// Fields
	struct TArray<struct FSoundState> heard_sound; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffMLBaseAIStateInfo
// Size: 0x158 // Inherited bytes: 0x20
struct FDiffMLBaseAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FAIHeardSound Sound; // Offset: 0x20 // Size: 0x28
	struct FProgressBarState progress_bar; // Offset: 0x48 // Size: 0x28
	struct FAIPlayerHitInfo player_hit_info; // Offset: 0x70 // Size: 0x30
	struct FAIStateConfig Config; // Offset: 0xa0 // Size: 0x20
	struct FDamageRateInfo damage_rate_info; // Offset: 0xc0 // Size: 0x40
	struct FDiffAIDestroyBulletProbInfoList destroy_bullet_prob_info; // Offset: 0x100 // Size: 0x38
	struct TArray<struct FAIBulletHole> all_bullet_hole; // Offset: 0x138 // Size: 0x10
	struct TArray<struct FDamageSource> all_damage_source; // Offset: 0x148 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffAIDestroyBulletProbInfoList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAIDestroyBulletProbInfoList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIDestroyBulletProbInfo> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffBaseModAllPlayersInfo
// Size: 0x120 // Inherited bytes: 0x18
struct FDiffBaseModAllPlayersInfo : FAIStateInfoBase {
	// Fields
	uint32_t Key; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	MapProperty AllAIStateInfo; // Offset: 0x20 // Size: 0x50
	MapProperty AllDiffAIStateInfo; // Offset: 0x70 // Size: 0x50
	MapProperty DebugAllAIStateInfo; // Offset: 0xc0 // Size: 0x50
	struct TArray<uint64> del_item_id; // Offset: 0x110 // Size: 0x10
};

// Object Name: ScriptStruct AI.BaseModAIStateInfo
// Size: 0x2f0 // Inherited bytes: 0x20
struct FBaseModAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FBaseModAIPlayerState State; // Offset: 0x20 // Size: 0x170
	struct FAIPlayerInteractInfo player_interact_info; // Offset: 0x190 // Size: 0x58
	struct FCameraState Camera; // Offset: 0x1e8 // Size: 0x40
	struct FAIPlayerWeapon Weapon; // Offset: 0x228 // Size: 0x28
	struct FAIPlayerBackpack BackPack; // Offset: 0x250 // Size: 0x28
	struct FAIPlayerEquipment equipment; // Offset: 0x278 // Size: 0x28
	uint32_t Key; // Offset: 0x2a0 // Size: 0x04
	uint32_t ai_style; // Offset: 0x2a4 // Size: 0x04
	struct TArray<struct FChatMsgInfo> chatmsg_info_list; // Offset: 0x2a8 // Size: 0x10
	struct TArray<struct FSignMsgInfo> signmsg_info_list; // Offset: 0x2b8 // Size: 0x10
	struct TArray<struct FMapMarkInfo> mapmark_info_list; // Offset: 0x2c8 // Size: 0x10
	struct TArray<struct FAIAvatarInfo> avatar_info; // Offset: 0x2d8 // Size: 0x10
	uint32_t ai_provider; // Offset: 0x2e8 // Size: 0x04
	char pad_0x2EC[0x4]; // Offset: 0x2ec // Size: 0x04
};

// Object Name: ScriptStruct AI.AIAvatarInfo
// Size: 0x20 // Inherited bytes: 0x18
struct FAIAvatarInfo : FAIStateInfoBase {
	// Fields
	IntProperty slot_id; // Offset: 0x18 // Size: 0x04
	IntProperty item_id; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct AI.MapMarkInfo
// Size: 0x38 // Inherited bytes: 0x18
struct FMapMarkInfo : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ mapmark_loc; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FAIStateXYZ> mapmultimark_list; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.SignMsgInfo
// Size: 0x30 // Inherited bytes: 0x18
struct FSignMsgInfo : FAIStateInfoBase {
	// Fields
	struct FAIStateXYZ hit_pos; // Offset: 0x18 // Size: 0x0c
	uint32_t item_id; // Offset: 0x24 // Size: 0x04
	uint32_t msg_type; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.ChatMsgInfo
// Size: 0x40 // Inherited bytes: 0x18
struct FChatMsgInfo : FAIStateInfoBase {
	// Fields
	StrProperty msg_content; // Offset: 0x18 // Size: 0x10
	uint32_t item_id; // Offset: 0x28 // Size: 0x04
	uint32_t msg_id; // Offset: 0x2c // Size: 0x04
	struct FAIStateXYZ hit_position; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIPlayerEquipment
// Size: 0x28 // Inherited bytes: 0x18
struct FAIPlayerEquipment : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIEquipmentInfo> equipment_item; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIEquipmentInfo
// Size: 0x30 // Inherited bytes: 0x20
struct FAIEquipmentInfo : FUniqueStateInfo {
	// Fields
	IntProperty Category; // Offset: 0x20 // Size: 0x04
	uint32_t ID; // Offset: 0x24 // Size: 0x04
	float Durability; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIPlayerBackpack
// Size: 0x28 // Inherited bytes: 0x18
struct FAIPlayerBackpack : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIBackpackItem> backpack_item; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIBackpackItem
// Size: 0x30 // Inherited bytes: 0x20
struct FAIBackpackItem : FUniqueStateInfo {
	// Fields
	IntProperty Category; // Offset: 0x20 // Size: 0x04
	uint32_t ID; // Offset: 0x24 // Size: 0x04
	uint32_t Count; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIPlayerWeapon
// Size: 0x28 // Inherited bytes: 0x18
struct FAIPlayerWeapon : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIWeaponStateInfo> player_weapon; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIWeaponStateInfo
// Size: 0x50 // Inherited bytes: 0x20
struct FAIWeaponStateInfo : FUniqueStateInfo {
	// Fields
	IntProperty slot_id; // Offset: 0x20 // Size: 0x04
	IntProperty Category; // Offset: 0x24 // Size: 0x04
	IntProperty Type; // Offset: 0x28 // Size: 0x04
	IntProperty Bullet; // Offset: 0x2c // Size: 0x04
	float remain_reloading; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<IntProperty> attachments; // Offset: 0x38 // Size: 0x10
	IntProperty bullet_in_backpak; // Offset: 0x48 // Size: 0x04
	uint32_t weapon_avatar_id; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct AI.AIPlayerInteractInfo
// Size: 0x58 // Inherited bytes: 0x18
struct FAIPlayerInteractInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIDamageInfo> active_damage; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FAIDamageInfo> passive_damage; // Offset: 0x28 // Size: 0x10
	struct TArray<uint32_t> kill_list; // Offset: 0x38 // Size: 0x10
	struct TArray<uint32_t> knock_down_list; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIDamageInfo
// Size: 0x30 // Inherited bytes: 0x18
struct FAIDamageInfo : FAIStateInfoBase {
	// Fields
	uint32_t PlayerKey; // Offset: 0x18 // Size: 0x04
	float Damage; // Offset: 0x1c // Size: 0x04
	IntProperty damage_type; // Offset: 0x20 // Size: 0x04
	IntProperty damage_weapon_type; // Offset: 0x24 // Size: 0x04
	uint32_t damage_part; // Offset: 0x28 // Size: 0x04
	float damage_before_cal_armor; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct AI.BaseModAIPlayerState
// Size: 0x170 // Inherited bytes: 0x18
struct FBaseModAIPlayerState : FAIStateInfoBase {
	// Fields
	uint32_t ID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	uint64 unique_id; // Offset: 0x20 // Size: 0x08
	StrProperty player_name; // Offset: 0x28 // Size: 0x10
	IntProperty team_id; // Offset: 0x38 // Size: 0x04
	IntProperty team_index; // Offset: 0x3c // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x40 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x4c // Size: 0x0c
	struct FAIStateXYZ Speed; // Offset: 0x58 // Size: 0x0c
	float Hp; // Offset: 0x64 // Size: 0x04
	float Energy; // Offset: 0x68 // Size: 0x04
	float dying_hp; // Offset: 0x6c // Size: 0x04
	float oxygen; // Offset: 0x70 // Size: 0x04
	IntProperty active_weapon_slot; // Offset: 0x74 // Size: 0x04
	IntProperty weapon_status; // Offset: 0x78 // Size: 0x04
	bool is_switching; // Offset: 0x7c // Size: 0x01
	char pad_0x7D[0x3]; // Offset: 0x7d // Size: 0x03
	IntProperty alive_state; // Offset: 0x80 // Size: 0x04
	IntProperty kill_count; // Offset: 0x84 // Size: 0x04
	IntProperty assist_count; // Offset: 0x88 // Size: 0x04
	IntProperty Damages; // Offset: 0x8c // Size: 0x04
	bool is_left_probe; // Offset: 0x90 // Size: 0x01
	bool is_right_probe; // Offset: 0x91 // Size: 0x01
	bool is_floating; // Offset: 0x92 // Size: 0x01
	char pad_0x93[0x1]; // Offset: 0x93 // Size: 0x01
	IntProperty using_skill_id; // Offset: 0x94 // Size: 0x04
	IntProperty skill_phase_index; // Offset: 0x98 // Size: 0x04
	bool is_pose_acting; // Offset: 0x9c // Size: 0x01
	bool is_picking; // Offset: 0x9d // Size: 0x01
	char pad_0x9E[0x2]; // Offset: 0x9e // Size: 0x02
	IntProperty body_state; // Offset: 0xa0 // Size: 0x04
	IntProperty location_state; // Offset: 0xa4 // Size: 0x04
	bool has_smoke; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x3]; // Offset: 0xa9 // Size: 0x03
	IntProperty player_type; // Offset: 0xac // Size: 0x04
	IntProperty ai_level; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct TArray<struct FAIAttribute> Attributes; // Offset: 0xb8 // Size: 0x10
	struct TArray<struct FIntAIAttribute> int_attributes; // Offset: 0xc8 // Size: 0x10
	struct TArray<struct FStrAIAttribute> str_attributes; // Offset: 0xd8 // Size: 0x10
	struct TArray<uint64> pawn_state_list; // Offset: 0xe8 // Size: 0x10
	bool is_lost_connection; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x3]; // Offset: 0xf9 // Size: 0x03
	IntProperty ai_kill_count; // Offset: 0xfc // Size: 0x04
	bool in_delivery_pool; // Offset: 0x100 // Size: 0x01
	bool has_gone; // Offset: 0x101 // Size: 0x01
	bool in_afk; // Offset: 0x102 // Size: 0x01
	char pad_0x103[0x1]; // Offset: 0x103 // Size: 0x01
	IntProperty emote_id; // Offset: 0x104 // Size: 0x04
	bool is_move_has_collision; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x3]; // Offset: 0x109 // Size: 0x03
	float rating_score; // Offset: 0x10c // Size: 0x04
	float real_hidden_score; // Offset: 0x110 // Size: 0x04
	float realscore_mu; // Offset: 0x114 // Size: 0x04
	float realscore_sigma; // Offset: 0x118 // Size: 0x04
	IntProperty zone_id; // Offset: 0x11c // Size: 0x04
	IntProperty Gender; // Offset: 0x120 // Size: 0x04
	char pad_0x124[0x4]; // Offset: 0x124 // Size: 0x04
	StrProperty OpenID; // Offset: 0x128 // Size: 0x10
	IntProperty high_hp_destroy_bullet_num; // Offset: 0x138 // Size: 0x04
	IntProperty low_hp_destroy_bullet_num; // Offset: 0x13c // Size: 0x04
	IntProperty fatal_damage_destroy_bullet_num; // Offset: 0x140 // Size: 0x04
	bool is_weapon_near_wall; // Offset: 0x144 // Size: 0x01
	char pad_0x145[0x3]; // Offset: 0x145 // Size: 0x03
	struct FAIStateXYZ head_position; // Offset: 0x148 // Size: 0x0c
	struct FAIStateXYZ muzzle_position; // Offset: 0x154 // Size: 0x0c
	uint32_t ally_master_id; // Offset: 0x160 // Size: 0x04
	IntProperty first_lang_id; // Offset: 0x164 // Size: 0x04
	IntProperty received_fatal_destroy_bullet_num; // Offset: 0x168 // Size: 0x04
	IntProperty feature_id; // Offset: 0x16c // Size: 0x04
};

// Object Name: ScriptStruct AI.StrAIAttribute
// Size: 0x38 // Inherited bytes: 0x20
struct FStrAIAttribute : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty Value; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffBaseModAIStateInfo
// Size: 0x3d8 // Inherited bytes: 0x20
struct FDiffBaseModAIStateInfo : FUniqueStateInfo {
	// Fields
	struct FDiffBaseModAIPlayerState State; // Offset: 0x20 // Size: 0x1e0
	struct FAIPlayerInteractInfo player_interact_info; // Offset: 0x200 // Size: 0x58
	struct FCameraState Camera; // Offset: 0x258 // Size: 0x40
	struct FDiffAIPlayerWeapon Weapon; // Offset: 0x298 // Size: 0x50
	struct FDiffAIPlayerBackpack BackPack; // Offset: 0x2e8 // Size: 0x50
	struct FDiffAIPlayerEquipment equipment; // Offset: 0x338 // Size: 0x50
	uint32_t Key; // Offset: 0x388 // Size: 0x04
	uint32_t ai_style; // Offset: 0x38c // Size: 0x04
	struct TArray<struct FChatMsgInfo> chatmsg_info_list; // Offset: 0x390 // Size: 0x10
	struct TArray<struct FSignMsgInfo> signmsg_info_list; // Offset: 0x3a0 // Size: 0x10
	struct TArray<struct FMapMarkInfo> mapmark_info_list; // Offset: 0x3b0 // Size: 0x10
	struct TArray<struct FAIAvatarInfo> avatar_info; // Offset: 0x3c0 // Size: 0x10
	uint32_t ai_provider; // Offset: 0x3d0 // Size: 0x04
	char pad_0x3D4[0x4]; // Offset: 0x3d4 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffAIPlayerEquipment
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffAIPlayerEquipment : FAIStateInfoBase {
	// Fields
	struct FDiffAIEquipmentInfoList equipment_item; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffAIEquipmentInfoList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAIEquipmentInfoList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIEquipmentInfo> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffAIPlayerBackpack
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffAIPlayerBackpack : FAIStateInfoBase {
	// Fields
	struct FDiffAIBackpackItemList backpack_item; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffAIBackpackItemList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAIBackpackItemList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIBackpackItem> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffAIPlayerWeapon
// Size: 0x50 // Inherited bytes: 0x18
struct FDiffAIPlayerWeapon : FAIStateInfoBase {
	// Fields
	struct FDiffAIWeaponStateInfoList player_weapon; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffAIWeaponStateInfoList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffAIWeaponStateInfoList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIWeaponStateInfo> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffBaseModAIPlayerState
// Size: 0x1e0 // Inherited bytes: 0x18
struct FDiffBaseModAIPlayerState : FAIStateInfoBase {
	// Fields
	uint32_t ID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	uint64 unique_id; // Offset: 0x20 // Size: 0x08
	StrProperty player_name; // Offset: 0x28 // Size: 0x10
	IntProperty team_id; // Offset: 0x38 // Size: 0x04
	IntProperty team_index; // Offset: 0x3c // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x40 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x4c // Size: 0x0c
	struct FAIStateXYZ Speed; // Offset: 0x58 // Size: 0x0c
	float Hp; // Offset: 0x64 // Size: 0x04
	float Energy; // Offset: 0x68 // Size: 0x04
	float dying_hp; // Offset: 0x6c // Size: 0x04
	float oxygen; // Offset: 0x70 // Size: 0x04
	IntProperty active_weapon_slot; // Offset: 0x74 // Size: 0x04
	IntProperty weapon_status; // Offset: 0x78 // Size: 0x04
	bool is_switching; // Offset: 0x7c // Size: 0x01
	char pad_0x7D[0x3]; // Offset: 0x7d // Size: 0x03
	IntProperty alive_state; // Offset: 0x80 // Size: 0x04
	IntProperty kill_count; // Offset: 0x84 // Size: 0x04
	IntProperty assist_count; // Offset: 0x88 // Size: 0x04
	IntProperty Damages; // Offset: 0x8c // Size: 0x04
	bool is_left_probe; // Offset: 0x90 // Size: 0x01
	bool is_right_probe; // Offset: 0x91 // Size: 0x01
	bool is_floating; // Offset: 0x92 // Size: 0x01
	char pad_0x93[0x1]; // Offset: 0x93 // Size: 0x01
	IntProperty using_skill_id; // Offset: 0x94 // Size: 0x04
	IntProperty skill_phase_index; // Offset: 0x98 // Size: 0x04
	bool is_pose_acting; // Offset: 0x9c // Size: 0x01
	bool is_picking; // Offset: 0x9d // Size: 0x01
	bool is_weapon_near_wall; // Offset: 0x9e // Size: 0x01
	char pad_0x9F[0x1]; // Offset: 0x9f // Size: 0x01
	IntProperty body_state; // Offset: 0xa0 // Size: 0x04
	IntProperty location_state; // Offset: 0xa4 // Size: 0x04
	bool has_smoke; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x3]; // Offset: 0xa9 // Size: 0x03
	IntProperty player_type; // Offset: 0xac // Size: 0x04
	IntProperty ai_level; // Offset: 0xb0 // Size: 0x04
	bool is_move_has_collision; // Offset: 0xb4 // Size: 0x01
	bool is_lost_connection; // Offset: 0xb5 // Size: 0x01
	char pad_0xB6[0x2]; // Offset: 0xb6 // Size: 0x02
	float rating_score; // Offset: 0xb8 // Size: 0x04
	float real_hidden_score; // Offset: 0xbc // Size: 0x04
	float realscore_mu; // Offset: 0xc0 // Size: 0x04
	float realscore_sigma; // Offset: 0xc4 // Size: 0x04
	IntProperty zone_id; // Offset: 0xc8 // Size: 0x04
	bool in_delivery_pool; // Offset: 0xcc // Size: 0x01
	char pad_0xCD[0x3]; // Offset: 0xcd // Size: 0x03
	struct FDiffAIAttributeList Attributes; // Offset: 0xd0 // Size: 0x38
	struct FDiffIntAIAttributeList int_attributes; // Offset: 0x108 // Size: 0x38
	struct FDiffStrAIAttributeList str_attributes; // Offset: 0x140 // Size: 0x38
	struct TArray<uint64> pawn_state_list; // Offset: 0x178 // Size: 0x10
	IntProperty ai_kill_count; // Offset: 0x188 // Size: 0x04
	IntProperty Gender; // Offset: 0x18c // Size: 0x04
	StrProperty OpenID; // Offset: 0x190 // Size: 0x10
	bool has_gone; // Offset: 0x1a0 // Size: 0x01
	bool in_afk; // Offset: 0x1a1 // Size: 0x01
	char pad_0x1A2[0x2]; // Offset: 0x1a2 // Size: 0x02
	IntProperty emote_id; // Offset: 0x1a4 // Size: 0x04
	IntProperty high_hp_destroy_bullet_num; // Offset: 0x1a8 // Size: 0x04
	IntProperty low_hp_destroy_bullet_num; // Offset: 0x1ac // Size: 0x04
	IntProperty fatal_damage_destroy_bullet_num; // Offset: 0x1b0 // Size: 0x04
	struct FAIStateXYZ head_position; // Offset: 0x1b4 // Size: 0x0c
	struct FAIStateXYZ muzzle_position; // Offset: 0x1c0 // Size: 0x0c
	uint32_t ally_master_id; // Offset: 0x1cc // Size: 0x04
	IntProperty first_lang_id; // Offset: 0x1d0 // Size: 0x04
	IntProperty received_fatal_destroy_bullet_num; // Offset: 0x1d4 // Size: 0x04
	IntProperty feature_id; // Offset: 0x1d8 // Size: 0x04
	char pad_0x1DC[0x4]; // Offset: 0x1dc // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffStrAIAttributeList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffStrAIAttributeList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FStrAIAttribute> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffBaseModGlobalGameState
// Size: 0xf0 // Inherited bytes: 0x18
struct FDiffBaseModGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FBaseModAIGameState Game; // Offset: 0x18 // Size: 0x68
	struct FDiffSpecialZoneStateList special_zones; // Offset: 0x80 // Size: 0x38
	struct FDiffBattleVoiceRoomInfoList voice_room_list; // Offset: 0xb8 // Size: 0x38
};

// Object Name: ScriptStruct AI.DiffBattleVoiceRoomInfoList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffBattleVoiceRoomInfoList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FBattleVoiceRoomInfo> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.BattleVoiceRoomInfo
// Size: 0x48 // Inherited bytes: 0x20
struct FBattleVoiceRoomInfo : FUniqueStateInfo {
	// Fields
	uint32_t team_id; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty battle_voice_room_id; // Offset: 0x28 // Size: 0x10
	StrProperty battle_voice_server_url; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffSpecialZoneStateList
// Size: 0x38 // Inherited bytes: 0x18
struct FDiffSpecialZoneStateList : FAIStateInfoBase {
	// Fields
	struct TArray<struct FSpecialZoneState> Values; // Offset: 0x18 // Size: 0x10
	struct TArray<uint64> del_item_id; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.SpecialZoneState
// Size: 0x88 // Inherited bytes: 0x20
struct FSpecialZoneState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	struct FAIStateXYZ Center; // Offset: 0x24 // Size: 0x0c
	float Radius; // Offset: 0x30 // Size: 0x04
	uint32_t Type; // Offset: 0x34 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x38 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x44 // Size: 0x0c
	IntProperty custom_state; // Offset: 0x50 // Size: 0x04
	struct FAIStateXYZ Scale; // Offset: 0x54 // Size: 0x0c
	uint32_t extra_state; // Offset: 0x60 // Size: 0x04
	float Health; // Offset: 0x64 // Size: 0x04
	struct TArray<struct FAIAttribute> custom_attribute_list; // Offset: 0x68 // Size: 0x10
	struct TArray<struct FIntAIAttribute> int_custom_attribute_list; // Offset: 0x78 // Size: 0x10
};

// Object Name: ScriptStruct AI.BaseModAIGameState
// Size: 0x68 // Inherited bytes: 0x18
struct FBaseModAIGameState : FAIStateInfoBase {
	// Fields
	bool is_over; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty alive_player_count; // Offset: 0x1c // Size: 0x04
	IntProperty Stage; // Offset: 0x20 // Size: 0x04
	uint32_t mode_map; // Offset: 0x24 // Size: 0x04
	uint32_t mode_type; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty game_ds_version; // Offset: 0x30 // Size: 0x10
	IntProperty zone_id; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	uint64 left_time; // Offset: 0x48 // Size: 0x08
	uint64 stage_time; // Offset: 0x50 // Size: 0x08
	IntProperty can_jump_sky; // Offset: 0x58 // Size: 0x04
	IntProperty newbie_score; // Offset: 0x5c // Size: 0x04
	IntProperty newbie_match_count; // Offset: 0x60 // Size: 0x04
	IntProperty mod_game_type; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct AI.DiffSpecialZoneState
// Size: 0xd8 // Inherited bytes: 0x20
struct FDiffSpecialZoneState : FUniqueStateInfo {
	// Fields
	uint32_t ID; // Offset: 0x20 // Size: 0x04
	struct FAIStateXYZ Center; // Offset: 0x24 // Size: 0x0c
	float Radius; // Offset: 0x30 // Size: 0x04
	uint32_t Type; // Offset: 0x34 // Size: 0x04
	struct FAIStateXYZ Position; // Offset: 0x38 // Size: 0x0c
	struct FAIStateXYZ Rotation; // Offset: 0x44 // Size: 0x0c
	IntProperty custom_state; // Offset: 0x50 // Size: 0x04
	struct FAIStateXYZ Scale; // Offset: 0x54 // Size: 0x0c
	uint32_t extra_state; // Offset: 0x60 // Size: 0x04
	float Health; // Offset: 0x64 // Size: 0x04
	struct FDiffAIAttributeList custom_attribute_list; // Offset: 0x68 // Size: 0x38
	struct FDiffIntAIAttributeList int_custom_attribute_list; // Offset: 0xa0 // Size: 0x38
};

// Object Name: ScriptStruct AI.LandScapeGlobalGameInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FLandScapeGlobalGameInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FLandScapeChangeState> landscape_change_info; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.MPBaseGlobalGameState
// Size: 0x40 // Inherited bytes: 0x18
struct FMPBaseGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FMPBaseAIGameState Game; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct AI.MPBaseAIGameState
// Size: 0x28 // Inherited bytes: 0x18
struct FMPBaseAIGameState : FAIStateInfoBase {
	// Fields
	struct TArray<struct FTeamScoreData> team_score_datas; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.GlobalGameStateMPBase
// Size: 0x40 // Inherited bytes: 0x18
struct FGlobalGameStateMPBase : FAIStateInfoBase {
	// Fields
	struct FMPBaseAIGameState Game; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct AI.BRBaseGlobalGameState
// Size: 0xf0 // Inherited bytes: 0x18
struct FBRBaseGlobalGameState : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAirDropBoxState> air_drop_box_states; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FSpecialMeshState> special_meshes; // Offset: 0x28 // Size: 0x10
	struct FRedZoneState red_zone; // Offset: 0x38 // Size: 0x30
	struct FSafetyAreaState safety_area; // Offset: 0x68 // Size: 0x48
	struct TArray<struct FPlaneInfo> airplane_list; // Offset: 0xb0 // Size: 0x10
	struct FGlobalControlInfo control_info; // Offset: 0xc0 // Size: 0x20
	struct TArray<uint32_t> silent_list; // Offset: 0xe0 // Size: 0x10
};

// Object Name: ScriptStruct AI.NearbyMonsterGlobalGameState
// Size: 0x40 // Inherited bytes: 0x18
struct FNearbyMonsterGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FMonsterGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct AI.MonsterGlobalNearbyInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FMonsterGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FMonsterState> monster_states; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.DestructibleItemGlobalGameState
// Size: 0x40 // Inherited bytes: 0x18
struct FDestructibleItemGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDestructibleItemGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct AI.DestructibleItemGlobalNearbyInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FDestructibleItemGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDestructibleItem> destructible_items; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.DynamicItemGlobalGameState
// Size: 0x40 // Inherited bytes: 0x18
struct FDynamicItemGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDynamicItemGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct AI.DynamicItemGlobalNearbyInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FDynamicItemGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDynamicItem> dynamic_items; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.NearbyDoorGlobalGameState
// Size: 0x40 // Inherited bytes: 0x18
struct FNearbyDoorGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FDoorGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct AI.DoorGlobalNearbyInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FDoorGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FDoorState> nearby_door; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.VehicleGlobalGameState
// Size: 0x50 // Inherited bytes: 0x18
struct FVehicleGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FVehicleGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x28
	struct TArray<struct FAIStateXYZ> vehicle_spot_position; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct AI.VehicleGlobalNearbyInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FVehicleGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FVehicleState> nearby_vehicles; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AI.VehicleDamageInfoContainer
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleDamageInfoContainer {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AI.NearbyBaseGlobalGameState
// Size: 0x50 // Inherited bytes: 0x18
struct FNearbyBaseGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FBaseGlobalNearbyInfo global_nearby_info; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct AI.BaseGlobalNearbyInfo
// Size: 0x38 // Inherited bytes: 0x18
struct FBaseGlobalNearbyInfo : FAIStateInfoBase {
	// Fields
	struct TArray<struct FItemStateData> nearby_item; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FAINearbyThrown> nearby_thrown; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct AI.BaseModGlobalGameState
// Size: 0xa8 // Inherited bytes: 0x18
struct FBaseModGlobalGameState : FAIStateInfoBase {
	// Fields
	struct FBaseModAIGameState Game; // Offset: 0x18 // Size: 0x68
	struct TArray<struct FSpecialZoneState> special_zones; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FBattleVoiceRoomInfo> voice_room_list; // Offset: 0x90 // Size: 0x10
	char pad_0xA0[0x8]; // Offset: 0xa0 // Size: 0x08
};

// Object Name: ScriptStruct AI.AIDamageSources
// Size: 0x48 // Inherited bytes: 0x18
struct FAIDamageSources : FAIStateInfoBase {
	// Fields
	struct TArray<struct FAIStateXYZ> damage_source; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> damage_type; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> damage_weapon_type; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct AI.BulletHole
// Size: 0x18 // Inherited bytes: 0x00
struct FBulletHole {
	// Fields
	struct FVector ImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector SourcePoint; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct AI.BulletHoleRecordInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FBulletHoleRecordInfo : FBulletHole {
	// Fields
	struct APawn* ShootPawn; // Offset: 0x18 // Size: 0x08
	uint32_t ShooterId; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct AI.DebugAIParamConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FDebugAIParamConfig {
	// Fields
	IntProperty DistMin; // Offset: 0x00 // Size: 0x04
	IntProperty DistMax; // Offset: 0x04 // Size: 0x04
	StrProperty NameAndDegree; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct AI.DiffCmd
// Size: 0x40 // Inherited bytes: 0x00
struct FDiffCmd {
	// Fields
	struct UProperty* Property; // Offset: 0x00 // Size: 0x08
	struct UProperty* DiffProperty; // Offset: 0x08 // Size: 0x08
	struct UProperty* ValueProperty; // Offset: 0x10 // Size: 0x08
	struct UProperty* DelItemProperty; // Offset: 0x18 // Size: 0x08
	struct UProperty* UnChangedProperty; // Offset: 0x20 // Size: 0x08
	struct UProperty* DiffUnChangedProperty; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct AI.PropertyNameListIDMap
// Size: 0x50 // Inherited bytes: 0x00
struct FPropertyNameListIDMap {
	// Fields
	MapProperty PropertyNameListIDMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct AI.DiffListIDMap
// Size: 0x50 // Inherited bytes: 0x00
struct FDiffListIDMap {
	// Fields
	MapProperty ListIDMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct AI.CollectorArray
// Size: 0x10 // Inherited bytes: 0x00
struct FCollectorArray {
	// Fields
	struct TArray<struct UStateInfoCollectorBase*> Collectors; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AI.CollectorInitInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FCollectorInitInfo {
	// Fields
	StrProperty CollectorName; // Offset: 0x00 // Size: 0x10
	struct TArray<enum class EStatePlayerType> CollectPlayerType; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct AI.AIAttribute_CastEnergyWithCount
// Size: 0x1c // Inherited bytes: 0x00
struct FAIAttribute_CastEnergyWithCount {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
};

