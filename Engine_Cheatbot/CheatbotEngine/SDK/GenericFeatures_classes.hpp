#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GenericFeatures.BehaviorControlComponent
// Size: 0x1a8 // Inherited bytes: 0x178
struct UBehaviorControlComponent : UActorComponent {
	// Fields
	struct TArray<struct UBehaviorTree*> BehaviorTreePath; // Offset: 0x178 // Size: 0x10
	struct APawn* OwnerPawn; // Offset: 0x188 // Size: 0x08
	struct AAIController* AIController; // Offset: 0x190 // Size: 0x08
	struct UBehaviorTreeComponent* BehaviorTreeComp; // Offset: 0x198 // Size: 0x08
	struct UBlackboardComponent* BlackboardComp; // Offset: 0x1a0 // Size: 0x08

	// Functions

	// Object Name: Function GenericFeatures.BehaviorControlComponent.UnPossessed
	// Flags: [Native|Public|BlueprintCallable]
	void UnPossessed(); // Offset: 0x101c6cfc4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.StopBehaviorTree
	// Flags: [Native|Public|BlueprintCallable]
	void StopBehaviorTree(); // Offset: 0x101c6cfa8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.StopBehavior
	// Flags: [Native|Public|BlueprintCallable]
	void StopBehavior(StrProperty Reason); // Offset: 0x101c6cf08 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.RunBehaviorTreeByIndex
	// Flags: [Native|Public|BlueprintCallable]
	bool RunBehaviorTreeByIndex(IntProperty PathIndex); // Offset: 0x101c6ce74 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.ResumeBehavior
	// Flags: [Native|Public|BlueprintCallable]
	void ResumeBehavior(StrProperty Reason); // Offset: 0x101c6cdd4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.RestartBehavior
	// Flags: [Native|Public|BlueprintCallable]
	void RestartBehavior(); // Offset: 0x101c6cdb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.PossessedBy
	// Flags: [Native|Public|BlueprintCallable]
	void PossessedBy(struct AController* NewController); // Offset: 0x101c6cd34 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.PauseBehavior
	// Flags: [Native|Public|BlueprintCallable]
	void PauseBehavior(StrProperty Reason); // Offset: 0x101c6cc94 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericFeatures.BehaviorControlComponent.OnPlayerActiveRegionsChanged
	// Flags: [Native|Public|BlueprintCallable]
	void OnPlayerActiveRegionsChanged(bool bEnter); // Offset: 0x101c6cc08 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class GenericFeatures.BTDecorator_Generic_HasAIState
// Size: 0xa0 // Inherited bytes: 0x60
struct UBTDecorator_Generic_HasAIState : UBTDecorator {
	// Fields
	struct TArray<struct FGameplayTag> States; // Offset: 0x60 // Size: 0x10
	enum class EHasAITagStateLogic LogicOp; // Offset: 0x70 // Size: 0x01
	bool bExact; // Offset: 0x71 // Size: 0x01
	char pad_0x72[0x6]; // Offset: 0x72 // Size: 0x06
	struct FBlackboardKeySelector BBKeyTarget; // Offset: 0x78 // Size: 0x28
};

// Object Name: Class GenericFeatures.BTService_Generic_ChooseEnemy
// Size: 0xe8 // Inherited bytes: 0x68
struct UBTService_Generic_ChooseEnemy : UBTService {
	// Fields
	struct FBlackboardKeySelector BBKeyEnemy; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector BBKeyCanNotSeeTarget; // Offset: 0x90 // Size: 0x28
	struct FBlackboardKeySelector BBKeyDynamicSearchRuleIndex; // Offset: 0xb8 // Size: 0x28
	bool bShowDebugInfo; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x3]; // Offset: 0xe1 // Size: 0x03
	float DebugInfoLife; // Offset: 0xe4 // Size: 0x04
};

// Object Name: Class GenericFeatures.BTTask_Generic_ClearEnemy
// Size: 0x98 // Inherited bytes: 0x70
struct UBTTask_Generic_ClearEnemy : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BBKeyEnemy; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class GenericFeatures.GenericAIController
// Size: 0x620 // Inherited bytes: 0x5b8
struct AGenericAIController : AAIController {
	// Fields
	char pad_0x5B8[0x58]; // Offset: 0x5b8 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x610 // Size: 0x10
};

// Object Name: Class GenericFeatures.GenericCharacter
// Size: 0x9a0 // Inherited bytes: 0x8f0
struct AGenericCharacter : ACharacter {
	// Fields
	char pad_0x8F0[0x80]; // Offset: 0x8f0 // Size: 0x80
	uint32_t PlayerKey; // Offset: 0x970 // Size: 0x04
	char pad_0x974[0x4]; // Offset: 0x974 // Size: 0x04
	struct UStateReflectComp* StateReflectComp; // Offset: 0x978 // Size: 0x08
	struct UAttrModifyComponent* AttrModifyComp; // Offset: 0x980 // Size: 0x08
	StrProperty LuaFilePath; // Offset: 0x988 // Size: 0x10
	char pad_0x998[0x8]; // Offset: 0x998 // Size: 0x08

	// Functions

	// Object Name: Function GenericFeatures.GenericCharacter.OnStateLeft
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnStateLeft(struct FGameplayTag State); // Offset: 0x101c6db34 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericCharacter.OnStateEntered
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnStateEntered(struct FGameplayTag State); // Offset: 0x101c6dab0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericCharacter.OnRep_PlayerKey
	// Flags: [Native|Public]
	void OnRep_PlayerKey(); // Offset: 0x101c6da94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericCharacter.IsInObjectPool
	// Flags: [Native|Public|BlueprintCallable]
	bool IsInObjectPool(); // Offset: 0x101c6da58 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericCharacter.IsAlive
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsAlive(); // Offset: 0x101c6da1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericCharacter.HandleStateLeft
	// Flags: [Final|Native|Private]
	void HandleStateLeft(struct FGameplayTag State); // Offset: 0x101c6d9a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericCharacter.HandleStateEntered
	// Flags: [Final|Native|Private]
	void HandleStateEntered(struct FGameplayTag State); // Offset: 0x101c6d924 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericCharacter.GetStateReflectComp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UStateReflectComp* GetStateReflectComp(); // Offset: 0x101c6d908 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class GenericFeatures.GenericChooseEnemyComponent
// Size: 0x1d0 // Inherited bytes: 0x178
struct UGenericChooseEnemyComponent : UActorComponent {
	// Fields
	struct FGenericMonsterSensingConfig SensingConfig; // Offset: 0x178 // Size: 0x48
	struct FGenericSensingRuntimeState RuntimeState; // Offset: 0x1c0 // Size: 0x0c
	char pad_0x1CC[0x4]; // Offset: 0x1cc // Size: 0x04

	// Functions

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.SelectFromCandidates
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct ACharacter* SelectFromCandidates(struct TArray<struct ACharacter*>& Filtered, enum class EGenericSearchEnemyRule Rule); // Offset: 0x101c6e3a8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.IsValidEnemy
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsValidEnemy(struct ACharacter* Target, bool& bOutIsNearDeath, bool bUseMonsterFilter); // Offset: 0x101c6e284 // Return & Params: Num(4) Size(0xb)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.IsTargetAlive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsTargetAlive(struct ACharacter* Target); // Offset: 0x101c6e208 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.IsEnemyByActor
	// Flags: [Final|Native|Public|Const]
	bool IsEnemyByActor(struct ACharacter* InTarget); // Offset: 0x101c6e17c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.GetTargetHealth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetTargetHealth(struct ACharacter* Target); // Offset: 0x101c6e100 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.GetSensingConfig
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGenericMonsterSensingConfig GetSensingConfig(); // Offset: 0x101c6e0a0 // Return & Params: Num(1) Size(0x48)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.GetOwnerMonster
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AGenericMonsterBase* GetOwnerMonster(); // Offset: 0x101c6e06c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.CollectPlayerCandidates
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void CollectPlayerCandidates(struct TArray<struct ACharacter*>& OutPlayers); // Offset: 0x101c6dfbc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericFeatures.GenericChooseEnemyComponent.CollectMonsterCandidates
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void CollectMonsterCandidates(struct TArray<struct ACharacter*>& OutMonsters); // Offset: 0x101c6df0c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class GenericFeatures.GenericMonsterBase
// Size: 0xb50 // Inherited bytes: 0x9a0
struct AGenericMonsterBase : AGenericCharacter {
	// Fields
	char pad_0x9A0[0x68]; // Offset: 0x9a0 // Size: 0x68
	struct FScriptMulticastDelegate OnMonsterSetPlayedIdleIndex; // Offset: 0xa08 // Size: 0x10
	struct FMonsterIdleIndex MonsterIdleIndex; // Offset: 0xa18 // Size: 0x08
	struct FScriptMulticastDelegate OnMonsterHurting; // Offset: 0xa20 // Size: 0x10
	struct FScriptMulticastDelegate OnEnemyChanged; // Offset: 0xa30 // Size: 0x10
	float WalkSpeed; // Offset: 0xa40 // Size: 0x04
	float RunSpeed; // Offset: 0xa44 // Size: 0x04
	float SpeedScale; // Offset: 0xa48 // Size: 0x04
	IntProperty TeamID; // Offset: 0xa4c // Size: 0x04
	IntProperty Campid; // Offset: 0xa50 // Size: 0x04
	IntProperty MonsterLevel; // Offset: 0xa54 // Size: 0x04
	StrProperty CharacterName; // Offset: 0xa58 // Size: 0x10
	struct UUTSkillManagerComponent* SkillManager; // Offset: 0xa68 // Size: 0x08
	struct USTBuffSystemComponent* BuffSystem; // Offset: 0xa70 // Size: 0x08
	struct USimulateSyncSmoothComponent* SimulateSyncSmooth; // Offset: 0xa78 // Size: 0x08
	struct UGenericChooseEnemyComponent* ChooseEnemyComponent; // Offset: 0xa80 // Size: 0x08
	struct UBehaviorControlComponent* BehaviorControlComp; // Offset: 0xa88 // Size: 0x08
	bool bEnableSimulateSyncSmooth; // Offset: 0xa90 // Size: 0x01
	char pad_0xA91[0x3]; // Offset: 0xa91 // Size: 0x03
	float MovementTickInterval; // Offset: 0xa94 // Size: 0x04
	enum class ERegionSizeIndex RegionSize; // Offset: 0xa98 // Size: 0x01
	bool bRegionStatic; // Offset: 0xa99 // Size: 0x01
	char AutoDormancyType; // Offset: 0xa9a // Size: 0x01
	char pad_0xA9B[0x1]; // Offset: 0xa9b // Size: 0x01
	float SpawnAnimTime; // Offset: 0xa9c // Size: 0x04
	char pad_0xAA0[0x18]; // Offset: 0xaa0 // Size: 0x18
	float LandDuration; // Offset: 0xab8 // Size: 0x04
	float InAirVelocityThreshold; // Offset: 0xabc // Size: 0x04
	float MoveSpeedTolerance; // Offset: 0xac0 // Size: 0x04
	char pad_0xAC4[0x4]; // Offset: 0xac4 // Size: 0x04
	bool bAllowVehicleKnockback; // Offset: 0xac8 // Size: 0x01
	char pad_0xAC9[0x3]; // Offset: 0xac9 // Size: 0x03
	float VehicleHitLaunchPitchDeg; // Offset: 0xacc // Size: 0x04
	float VehicleHitRefMinImpulse; // Offset: 0xad0 // Size: 0x04
	float VehicleHitRefMaxImpulse; // Offset: 0xad4 // Size: 0x04
	float VehicleHitMinLaunchVelocity; // Offset: 0xad8 // Size: 0x04
	float VehicleHitMaxLaunchVelocity; // Offset: 0xadc // Size: 0x04
	bool bAllowLaunchAirState; // Offset: 0xae0 // Size: 0x01
	char pad_0xAE1[0x3]; // Offset: 0xae1 // Size: 0x03
	float DelayCheckLaunchAirState; // Offset: 0xae4 // Size: 0x04
	float MinLaunchAirGroundTime; // Offset: 0xae8 // Size: 0x04
	float MaxLaunchAirGroundTime; // Offset: 0xaec // Size: 0x04
	float LaunchAirRiseUpDuration; // Offset: 0xaf0 // Size: 0x04
	char pad_0xAF4[0x1c]; // Offset: 0xaf4 // Size: 0x1c
	float StunBeginAnimTime; // Offset: 0xb10 // Size: 0x04
	float StunAnimTime; // Offset: 0xb14 // Size: 0x04
	float StunRecoveryAnimTime; // Offset: 0xb18 // Size: 0x04
	char pad_0xB1C[0x1c]; // Offset: 0xb1c // Size: 0x1c
	bool CloseCollisionForMeshOnDS; // Offset: 0xb38 // Size: 0x01
	bool bForceAnimationUpdatedOnClient; // Offset: 0xb39 // Size: 0x01
	bool bHideMeshUntilAnimAssetsLoaded; // Offset: 0xb3a // Size: 0x01
	char pad_0xB3B[0x1]; // Offset: 0xb3b // Size: 0x01
	float ShowMeshDelayAfterAnimAssetsLoaded; // Offset: 0xb3c // Size: 0x04
	struct FScriptMulticastDelegate OnEditorKeyPressedDelegate; // Offset: 0xb40 // Size: 0x10

	// Functions

	// Object Name: Function GenericFeatures.GenericMonsterBase.SetTeamID
	// Flags: [Native|Public|BlueprintCallable]
	void SetTeamID(IntProperty NewTeamId); // Offset: 0x101c71054 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.SetSpeedScale
	// Flags: [Native|Public|BlueprintCallable]
	void SetSpeedScale(float NewSpeedScale); // Offset: 0x101c70fd0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.SetMonsterIdleIndex
	// Flags: [Native|Public|BlueprintCallable]
	void SetMonsterIdleIndex(IntProperty NewIndex); // Offset: 0x101c70f4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.SetCharacterName
	// Flags: [Native|Public|BlueprintCallable]
	void SetCharacterName(StrProperty NewCharacterName); // Offset: 0x101c70eac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericFeatures.GenericMonsterBase.SetCampID
	// Flags: [Native|Public|BlueprintCallable]
	void SetCampID(IntProperty NewCampID); // Offset: 0x101c70e28 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.SelectEnemyByLua
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct ACharacter* SelectEnemyByLua(struct TArray<struct ACharacter*>& Candidates); // Offset: 0x101c70d68 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function GenericFeatures.GenericMonsterBase.ReviseSenseDistanceByActor
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	float ReviseSenseDistanceByActor(float InDistance, struct AActor* InTarget); // Offset: 0x101c70c98 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function GenericFeatures.GenericMonsterBase.ReceivedPlayerActiveRegionsChanged
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedPlayerActiveRegionsChanged(bool bEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericMonsterBase.OnSmoothComponentSnapshotPreReplicate
	// Flags: [Final|Native|Public]
	void OnSmoothComponentSnapshotPreReplicate(); // Offset: 0x101c70c84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.OnRep_MonsterIdleIndex
	// Flags: [Native|Protected]
	void OnRep_MonsterIdleIndex(); // Offset: 0x101c70c68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.OnRep_CampID
	// Flags: [Native|Public]
	void OnRep_CampID(); // Offset: 0x101c70c4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirRiseUp
	// Flags: [Native|Public|BlueprintCallable]
	void LeaveLaunchAirRiseUp(); // Offset: 0x101c70c30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirGround
	// Flags: [Native|Public|BlueprintCallable]
	void LeaveLaunchAirGround(); // Offset: 0x101c70c14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.LaunchCharacterWithParam
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void LaunchCharacterWithParam(struct FVector LaunchVelocity, bool bChangeState); // Offset: 0x101c70b4c // Return & Params: Num(2) Size(0xd)

	// Object Name: Function GenericFeatures.GenericMonsterBase.IsValidEnemyTarget
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool IsValidEnemyTarget(struct AActor* InTarget); // Offset: 0x101c70ab8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericFeatures.GenericMonsterBase.IsEnemyByActor
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool IsEnemyByActor(struct ACharacter* InTarget); // Offset: 0x101c70a24 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetTeamID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTeamID(); // Offset: 0x101c709e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetSpeedScale
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSpeedScale(); // Offset: 0x101c709ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetSensingConfig
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGenericMonsterSensingConfig GetSensingConfig(); // Offset: 0x101c7094c // Return & Params: Num(1) Size(0x48)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetMonsterIdleIndex
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetMonsterIdleIndex(); // Offset: 0x101c70910 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetCurrentSpeed
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetCurrentSpeed(); // Offset: 0x101c708d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetChooseEnemyComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGenericChooseEnemyComponent* GetChooseEnemyComponent(); // Offset: 0x101c708a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetCharacterName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetCharacterName(); // Offset: 0x101c70834 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetCampID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCampID(); // Offset: 0x101c707f8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterBase.GetBuffComponent
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct USTBuffSystemComponent* GetBuffComponent(); // Offset: 0x101c707bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonsterBase.FinishStunRecovery
	// Flags: [Native|Public|BlueprintCallable]
	void FinishStunRecovery(); // Offset: 0x101c707a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.ExitSpawnState
	// Flags: [Native|Public|BlueprintCallable]
	void ExitSpawnState(); // Offset: 0x101c70784 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.EnterStunRecovery
	// Flags: [Native|Public|BlueprintCallable]
	void EnterStunRecovery(); // Offset: 0x101c70768 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.EnterStun
	// Flags: [Native|Public|BlueprintCallable]
	void EnterStun(); // Offset: 0x101c7074c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.DoHurting
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void DoHurting(struct FVector HurtDir); // Offset: 0x101c706c8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function GenericFeatures.GenericMonsterBase.ClearStunState
	// Flags: [Native|Public|BlueprintCallable]
	void ClearStunState(); // Offset: 0x101c706ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.ClearLaunchAirState
	// Flags: [Native|Public|BlueprintCallable]
	void ClearLaunchAirState(); // Offset: 0x101c70690 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.CheckLaunchAirState
	// Flags: [Native|Public|BlueprintCallable]
	void CheckLaunchAirState(); // Offset: 0x101c70674 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericMonsterBase.ChangeWalkSpeed
	// Flags: [Native|Public|BlueprintCallable]
	void ChangeWalkSpeed(enum class EMobWalkType InWalkType); // Offset: 0x101c705f0 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class GenericFeatures.GenericMonster
// Size: 0xc80 // Inherited bytes: 0xb50
struct AGenericMonster : AGenericMonsterBase {
	// Fields
	char pad_0xB50[0xa0]; // Offset: 0xb50 // Size: 0xa0
	float HealthMax; // Offset: 0xbf0 // Size: 0x04
	float Health; // Offset: 0xbf4 // Size: 0x04
	struct TArray<enum class EDamageableGameObjectType> DamageableGameObjectTypes; // Offset: 0xbf8 // Size: 0x10
	float TakeDamageScale; // Offset: 0xc08 // Size: 0x04
	float DamageScale; // Offset: 0xc0c // Size: 0x04
	struct UCurveFloat* VehicleSpeedDamageCurve; // Offset: 0xc10 // Size: 0x08
	float VehicleHitDamageScale; // Offset: 0xc18 // Size: 0x04
	float VehicleHitMinDamageSpeedKmh; // Offset: 0xc1c // Size: 0x04
	float VehicleHitRefDamageSpeedKmh; // Offset: 0xc20 // Size: 0x04
	float VehicleHitMinDamageImpulse; // Offset: 0xc24 // Size: 0x04
	float VehicleHitRefDamageImpulse; // Offset: 0xc28 // Size: 0x04
	float VehicleHitMinDamage; // Offset: 0xc2c // Size: 0x04
	float VehicleHitMaxDamage; // Offset: 0xc30 // Size: 0x04
	float DeadAnimTime; // Offset: 0xc34 // Size: 0x04
	float HurtAnimTime; // Offset: 0xc38 // Size: 0x04
	char IsInvincible : 1; // Offset: 0xc3c // Size: 0x01
	char pad_0xC3C_1 : 7; // Offset: 0xc3c // Size: 0x01
	char pad_0xC3D[0x1]; // Offset: 0xc3d // Size: 0x01
	bool bForceOpenPawnCollision; // Offset: 0xc3e // Size: 0x01
	bool bShowGenericHPBar; // Offset: 0xc3f // Size: 0x01
	IntProperty GenericHPBarPlanID; // Offset: 0xc40 // Size: 0x04
	IntProperty CustomHPBarType; // Offset: 0xc44 // Size: 0x04
	IntProperty CustomHPBarScreenMarkID; // Offset: 0xc48 // Size: 0x04
	char pad_0xC4C[0x4]; // Offset: 0xc4c // Size: 0x04
	StrProperty CustomHPBarUIConfig; // Offset: 0xc50 // Size: 0x10
	char pad_0xC60[0x10]; // Offset: 0xc60 // Size: 0x10
	struct UPartHitComponentBase* PartHitComp; // Offset: 0xc70 // Size: 0x08
	char pad_0xC78[0x8]; // Offset: 0xc78 // Size: 0x08

	// Functions

	// Object Name: Function GenericFeatures.GenericMonster.SetTakeDamageScale
	// Flags: [Native|Public|BlueprintCallable]
	void SetTakeDamageScale(float NewTakeDamageScale); // Offset: 0x101c6f314 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.SetIsInvincible
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsInvincible(bool bInvincible, char InMaskBit); // Offset: 0x101c6f24c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function GenericFeatures.GenericMonster.SetHealthMax
	// Flags: [Native|Public|BlueprintCallable]
	void SetHealthMax(float NewHealthMax); // Offset: 0x101c6f1c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.SetHealth
	// Flags: [Native|Public|BlueprintCallable]
	void SetHealth(float NewHealth); // Offset: 0x101c6f144 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.SetDamageScale
	// Flags: [Native|Public|BlueprintCallable]
	void SetDamageScale(float NewDamageScale); // Offset: 0x101c6f0c0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.OnTargetTakeDamage
	// Flags: [Native|Public]
	float OnTargetTakeDamage(struct AActor* DamageTarget, float Damage, struct AController* EventInstigator); // Offset: 0x101c6efb4 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function GenericFeatures.GenericMonster.OnDie
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnDie(struct APawn* Causer); // Offset: 0x101c6ef38 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonster.HandleTargetTakeDamage
	// Flags: [Native|Event|Public|BlueprintEvent]
	float HandleTargetTakeDamage(struct AActor* DamageTarget, float Damage, struct AController* EventInstigator); // Offset: 0x101c6ee2c // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function GenericFeatures.GenericMonster.GetTakeDamageScale
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetTakeDamageScale(); // Offset: 0x101c6edf0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.GetPartHitComponentBase
	// Flags: [Native|Public|BlueprintCallable]
	struct UPartHitComponentBase* GetPartHitComponentBase(); // Offset: 0x101c6edb4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonster.GetIsInvincible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsInvincible(); // Offset: 0x101c6ed94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericMonster.GetHealthMax
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetHealthMax(); // Offset: 0x101c6ed58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.GetHealth
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetHealth(); // Offset: 0x101c6ed1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.GetDamageScale
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetDamageScale(); // Offset: 0x101c6ece0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonster.CalcVehicleHitDamage
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent]
	float CalcVehicleHitDamage(struct ASTExtraVehicleBase* OtherVehicle, struct FVector HitImpulseDirection, float HitSpeed); // Offset: 0x101c6ebd4 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function GenericFeatures.GenericMonster.BPReceiveDamage
	// Flags: [Event|Public|BlueprintEvent]
	void BPReceiveDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser, enum class EDamageType DamageEventType); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x21)

	// Object Name: Function GenericFeatures.GenericMonster.BPPreTakeDamage
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	float BPPreTakeDamage(float DamageAmount, struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Offset: 0x101c6ea74 // Return & Params: Num(5) Size(0x2c)
};

// Object Name: Class GenericFeatures.GenericMonsterAnimInstance
// Size: 0x1850 // Inherited bytes: 0x1780
struct UGenericMonsterAnimInstance : UDataDriverAnimInstance {
	// Fields
	struct FVector Velocity; // Offset: 0x177c // Size: 0x0c
	float Speed; // Offset: 0x1788 // Size: 0x04
	float RandomIdleIndex; // Offset: 0x178c // Size: 0x04
	IntProperty RandomIdleIndexInt; // Offset: 0x1790 // Size: 0x04
	struct FGameplayTag RandomIdleBS1DTag; // Offset: 0x1798 // Size: 0x08
	struct FVector HurtDirection; // Offset: 0x17a0 // Size: 0x0c
	float HurtingAccumulate; // Offset: 0x17ac // Size: 0x04
	bool bIsHurting; // Offset: 0x17b0 // Size: 0x01
	char pad_0x17B1[0x3]; // Offset: 0x17b1 // Size: 0x03
	float HurtingAnimPlayRate; // Offset: 0x17b4 // Size: 0x04
	struct FGameplayTag HurtBSTag; // Offset: 0x17b8 // Size: 0x08
	MapProperty StateToMontageParamMap; // Offset: 0x17c0 // Size: 0x50
	bool bMonsterIdleIndexDelegateBound; // Offset: 0x1810 // Size: 0x01
	char pad_0x1811[0x7]; // Offset: 0x1811 // Size: 0x07
	struct AGenericMonsterBase* CachedOwnerMonster; // Offset: 0x1818 // Size: 0x08
	bool bMonsterHurtingDelegateBound; // Offset: 0x1820 // Size: 0x01
	char pad_0x1821[0x7]; // Offset: 0x1821 // Size: 0x07
	struct UStateReflectComp* CachedStateReflectComp; // Offset: 0x1828 // Size: 0x08
	struct TArray<struct FGameplayTag> PendingMontageTags; // Offset: 0x1830 // Size: 0x10
	bool bAnimAssetsLoadedDelegateBound; // Offset: 0x1840 // Size: 0x01
	char pad_0x1841[0xf]; // Offset: 0x1841 // Size: 0x0f

	// Functions

	// Object Name: Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEventByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	float PlayMontageWithAnimEventByName(struct FName& InTag); // Offset: 0x101c6fc50 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	float PlayMontageWithAnimEvent(struct FGameplayTag& EventTag); // Offset: 0x101c6fbb4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterRandomIdleIndexSet
	// Flags: [Native|Protected]
	void OnMonsterRandomIdleIndexSet(IntProperty NewIndex); // Offset: 0x101c6fb30 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterHurting
	// Flags: [Native|Protected|HasDefaults]
	void OnMonsterHurting(struct AGenericMonsterBase* Monster, struct FVector HurtDir); // Offset: 0x101c6fa70 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function GenericFeatures.GenericMonsterAnimInstance.HandleStateEntered
	// Flags: [Final|Native|Protected]
	void HandleStateEntered(struct FGameplayTag State); // Offset: 0x101c6f9f4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonsterAnimInstance.GetMonsterShareParams
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGenericMonsterAnimShareParamsComp* GetMonsterShareParams(); // Offset: 0x101c6f9c0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class GenericFeatures.GenericMonsterAnimShareParamsComp
// Size: 0x550 // Inherited bytes: 0x4b0
struct UGenericMonsterAnimShareParamsComp : UDataDriverAnimShareParamsComp {
	// Fields
	struct FSoftObjectPath AnimDataAsset; // Offset: 0x4b0 // Size: 0x18
	int64_t AnimAssetContextKey; // Offset: 0x4c8 // Size: 0x08
	MapProperty StateToAnimParamMap; // Offset: 0x4d0 // Size: 0x50
	char pad_0x520[0x18]; // Offset: 0x520 // Size: 0x18
	struct UStateReflectComp* CachedStateRef; // Offset: 0x538 // Size: 0x08
	struct FName AnimSourceKey; // Offset: 0x540 // Size: 0x08
	bool bAnimAssetsLoaded; // Offset: 0x548 // Size: 0x01
	char pad_0x549[0x7]; // Offset: 0x549 // Size: 0x07

	// Functions

	// Object Name: Function GenericFeatures.GenericMonsterAnimShareParamsComp.IsAnimAssetsLoaded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsAnimAssetsLoaded(); // Offset: 0x101c70180 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateLeft
	// Flags: [Final|Native|Protected]
	void HandleStateLeft(struct FGameplayTag State); // Offset: 0x101c70104 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateEntered
	// Flags: [Final|Native|Protected]
	void HandleStateEntered(struct FGameplayTag State); // Offset: 0x101c70088 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericMonsterAnimShareParamsComp.GetLoadedAnimAsset
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UAnimationAsset* GetLoadedAnimAsset(struct FGameplayTag& Tag); // Offset: 0x101c6ffec // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class GenericFeatures.GenericMonsterEditor
// Size: 0xc80 // Inherited bytes: 0xc80
struct AGenericMonsterEditor : AGenericMonster {
};

// Object Name: Class GenericFeatures.GenericNPC
// Size: 0xb50 // Inherited bytes: 0xb50
struct AGenericNPC : AGenericMonsterBase {
};

// Object Name: Class GenericFeatures.GenericPartHitComponent
// Size: 0x2e0 // Inherited bytes: 0x178
struct UGenericPartHitComponent : UPartHitComponentBase {
	// Fields
	struct ACharacter* OwnerCharacter; // Offset: 0x178 // Size: 0x08
	float UpdateHitBoxDeltaTime; // Offset: 0x180 // Size: 0x04
	bool bActivePartHit; // Offset: 0x184 // Size: 0x01
	char pad_0x185[0x3]; // Offset: 0x185 // Size: 0x03
	uint64 LastPartHitRefreshBoxCollisionFrameNum; // Offset: 0x188 // Size: 0x08
	MapProperty TagToPoseMap; // Offset: 0x190 // Size: 0x50
	MapProperty HitBoxTagMapData; // Offset: 0x1e0 // Size: 0x50
	struct FHitBoxTagInfo UselessHitBoxData; // Offset: 0x230 // Size: 0x18
	struct TArray<struct UPrimitiveComponent*> HitBoxList; // Offset: 0x248 // Size: 0x10
	char pad_0x258[0x20]; // Offset: 0x258 // Size: 0x20
	MapProperty NewHitBodyPosMap; // Offset: 0x278 // Size: 0x50
	float PawnCollisionCountdown; // Offset: 0x2c8 // Size: 0x04
	bool bIsRefreshPawnCollision; // Offset: 0x2cc // Size: 0x01
	char pad_0x2CD[0x3]; // Offset: 0x2cd // Size: 0x03
	float BoxCollisionCountdown; // Offset: 0x2d0 // Size: 0x04
	bool bIsRefreshBoxCollision; // Offset: 0x2d4 // Size: 0x01
	enum class EHitPartJugementType ClientHitPartJudgment; // Offset: 0x2d5 // Size: 0x01
	char pad_0x2D6[0x1]; // Offset: 0x2d6 // Size: 0x01
	bool bDebugDrawHitPos; // Offset: 0x2d7 // Size: 0x01
	bool bCloseCharacterMeshCollision; // Offset: 0x2d8 // Size: 0x01
	char pad_0x2D9[0x7]; // Offset: 0x2d9 // Size: 0x07

	// Functions

	// Object Name: Function GenericFeatures.GenericPartHitComponent.UpdatePoseCollisionShapes
	// Flags: [Native|Public|BlueprintCallable]
	void UpdatePoseCollisionShapes(enum class ESTEPoseState PoseState); // Offset: 0x101c74994 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.UpdateAllInstanceBodyTransform
	// Flags: [Native|Public|BlueprintCallable]
	void UpdateAllInstanceBodyTransform(IntProperty Type); // Offset: 0x101c74910 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.RefreshWorldBoxCollision
	// Flags: [Exec|Native|Public|BlueprintCallable]
	void RefreshWorldBoxCollision(float countdown); // Offset: 0x101c7488c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.RefreshByStateChange
	// Flags: [Final|Native|Public]
	void RefreshByStateChange(struct FGameplayTag State); // Offset: 0x101c74810 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.InitBodyHitBox
	// Flags: [Native|Public|BlueprintCallable]
	void InitBodyHitBox(); // Offset: 0x101c747f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.GetHitBoxByState
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPrimitiveComponent* GetHitBoxByState(enum class ESTEPoseState InPoseState); // Offset: 0x101c74768 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByHitPos
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	enum class EAvatarDamagePosition GetHitBodyTypeByHitPos(struct FVector& InHitPos); // Offset: 0x101c746c8 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByBoneName
	// Flags: [Native|Public|BlueprintCallable]
	enum class EAvatarDamagePosition GetHitBodyTypeByBoneName(StrProperty InBoneName); // Offset: 0x101c74618 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.GetHitBodyType
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	enum class EAvatarDamagePosition GetHitBodyType(struct FVector& InHitPos, struct FVector& InImpactVec, StrProperty InBoneName); // Offset: 0x101c744c8 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.GetCurHitPartJudgementType
	// Flags: [Native|Public]
	enum class EHitPartJugementType GetCurHitPartJudgementType(); // Offset: 0x101c7448c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.CloseBodyBulletCollision
	// Flags: [Native|Public|BlueprintCallable]
	void CloseBodyBulletCollision(); // Offset: 0x101c74470 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GenericFeatures.GenericPartHitComponent.CalcHitBodyType
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	enum class EAvatarDamagePosition CalcHitBodyType(struct FVector& InHitPos, struct FVector& InProjvec, struct FVector& InCenterPos, struct FBodyTypeDef& InBodyDef); // Offset: 0x101c742ec // Return & Params: Num(5) Size(0x2d)
};

// Object Name: Class GenericFeatures.StateReflectComp
// Size: 0x1c0 // Inherited bytes: 0x178
struct UStateReflectComp : UActorComponent {
	// Fields
	struct UStateRelationDataAsset* RelationData; // Offset: 0x178 // Size: 0x08
	struct FScriptMulticastDelegate OnStateEntered; // Offset: 0x180 // Size: 0x10
	struct FScriptMulticastDelegate OnStateLeft; // Offset: 0x190 // Size: 0x10
	struct FGameplayTagContainer CurrentStates; // Offset: 0x1a0 // Size: 0x20

	// Functions

	// Object Name: Function GenericFeatures.StateReflectComp.OnRep_CurrentStates
	// Flags: [Final|Native|Protected]
	void OnRep_CurrentStates(struct FGameplayTagContainer OldStates); // Offset: 0x101c751bc // Return & Params: Num(1) Size(0x20)

	// Object Name: Function GenericFeatures.StateReflectComp.LeaveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LeaveState(struct FGameplayTag State); // Offset: 0x101c75140 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericFeatures.StateReflectComp.HasState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasState(struct FGameplayTag State, bool bExact); // Offset: 0x101c75070 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function GenericFeatures.StateReflectComp.GetCurrentStates
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGameplayTagContainer GetCurrentStates(); // Offset: 0x101c75004 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function GenericFeatures.StateReflectComp.EnterState
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool EnterState(struct FGameplayTag State); // Offset: 0x101c74f78 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericFeatures.StateReflectComp.CanEnterState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool CanEnterState(struct FGameplayTag State); // Offset: 0x101c74eec // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class GenericFeatures.StateRelationDataAsset
// Size: 0x90 // Inherited bytes: 0x30
struct UStateRelationDataAsset : UDataAsset {
	// Fields
	struct TArray<struct FStateRelationEntry> Entries; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x50]; // Offset: 0x40 // Size: 0x50
};

