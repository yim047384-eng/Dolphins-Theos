#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AI.AESpawner
// Size: 0x660 // Inherited bytes: 0x618
struct AAESpawner : ASTSpawnerBase {
	// Fields
	struct FScriptMulticastDelegate OnUnitTakeDamage; // Offset: 0x618 // Size: 0x10
	char bEnableTeamAI : 1; // Offset: 0x628 // Size: 0x01
	char pad_0x628_1 : 7; // Offset: 0x628 // Size: 0x01
	char pad_0x629[0x7]; // Offset: 0x629 // Size: 0x07
	struct TArray<struct UActorComponent*> TeamAIClasses; // Offset: 0x630 // Size: 0x10
	IntProperty SpawnerTeamID; // Offset: 0x640 // Size: 0x04
	enum class EBotCategray SpeciesCategory; // Offset: 0x644 // Size: 0x01
	char pad_0x645[0x3]; // Offset: 0x645 // Size: 0x03
	IntProperty SpawnerCampItemID; // Offset: 0x648 // Size: 0x04
	IntProperty GroupID; // Offset: 0x64c // Size: 0x04
	struct TArray<struct UActorComponent*> TeamAIComponents; // Offset: 0x650 // Size: 0x10

	// Functions

	// Object Name: Function AI.AESpawner.SwitchTeamAI
	// Flags: [Final|Native|Public]
	void SwitchTeamAI(bool bEnable); // Offset: 0x103ee7bd0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AESpawner.OnUnitTakeDamageEvent
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnUnitTakeDamageEvent(float Damage, struct FDamageEvent& DamageEvent, struct AActor* Victim, struct AActor* Causer); // Offset: 0x103ee7a80 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function AI.AESpawner.OnUnitSpawned
	// Flags: [Native|Public|HasOutParms]
	void OnUnitSpawned(struct AActor* NewUnit, struct FSTSpawnParam& SpawnParam, struct ASTSpawnerBase* Spawner); // Offset: 0x103ee78fc // Return & Params: Num(3) Size(0xe8)

	// Object Name: Function AI.AESpawner.OnSpawnTimingRipe
	// Flags: [Native|Protected]
	void OnSpawnTimingRipe(bool IsRipe); // Offset: 0x103ee7870 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AESpawner.OnOwnedMobDead
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	void OnOwnedMobDead(struct ASTExtraSimpleCharacter* DeadCharacter, struct AController* Killer, struct AActor* DamageCauser, struct FHitResult& KillingHitInfo, struct FVector KillingHitImpulseDir, struct UDamageType* KillingHitDamageType); // Offset: 0x103ee76a4 // Return & Params: Num(6) Size(0xb8)

	// Object Name: Function AI.AESpawner.OnOwnedFakePlayerDead
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	void OnOwnedFakePlayerDead(struct ASTExtraBaseCharacter* DeadCharacter, struct AController* Killer, struct AActor* DamageCauser, struct FHitResult& KillingHitInfo, struct FVector KillingHitImpulseDir, struct UDamageType* KillingHitDamageType); // Offset: 0x103ee74d8 // Return & Params: Num(6) Size(0xb8)

	// Object Name: Function AI.AESpawner.GetSpeciesCategory
	// Flags: [Final|Native|Public|BlueprintCallable]
	enum class EBotCategray GetSpeciesCategory(); // Offset: 0x103ee74bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AESpawner.GetSpawnerTeamID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSpawnerTeamID(); // Offset: 0x103ee749c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.AESpawner.GetSpawnerGroupID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSpawnerGroupID(); // Offset: 0x103ee747c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.AESpawner.GenerateParamID
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	IntProperty GenerateParamID(IntProperty ConfigID, IntProperty BaseParamID, struct FSTSpawnParam& SpawnParam); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xe4)

	// Object Name: Function AI.AESpawner.DeactivateSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void DeactivateSpawner(); // Offset: 0x103ee7460 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AESpawner.BPOnUnitSpawned
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void BPOnUnitSpawned(struct APawn* AIPawn, IntProperty ConfigID, struct FSTSpawnParam& SpawnParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xe0)

	// Object Name: Function AI.AESpawner.ActivateSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateSpawner(); // Offset: 0x103ee7444 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.AESpawnSubsystem
// Size: 0x3d0 // Inherited bytes: 0x1d0
struct UAESpawnSubsystem : USTSpawnSubsystem {
	// Fields
	DelegateProperty OnCustomSpawnPreCheck; // Offset: 0x1c8 // Size: 0x10
	char bPopQueAfterCustomPreCheckFailed : 1; // Offset: 0x1d8 // Size: 0x01
	struct FMonsterParams CacheMobParams; // Offset: 0x1e0 // Size: 0x60
	struct FFakePlayerParams CacheFPParams; // Offset: 0x240 // Size: 0x14
	struct FAIPlayerParams CacheAIPParams; // Offset: 0x254 // Size: 0x0c
	struct FVehicleParams CacheVehicleParams; // Offset: 0x260 // Size: 0x14
	char pad_0x274_1 : 7; // Offset: 0x274 // Size: 0x01
	char pad_0x275[0x3]; // Offset: 0x275 // Size: 0x03
	struct FDecoratorParams CacheDecoratorParams; // Offset: 0x278 // Size: 0x18
	MapProperty UnitsNumberThreshold; // Offset: 0x290 // Size: 0x50
	char pad_0x2E0[0xf0]; // Offset: 0x2e0 // Size: 0xf0

	// Functions

	// Object Name: Function AI.AESpawnSubsystem.SpawnUnit
	// Flags: [Native|Protected|BlueprintCallable]
	struct AActor* SpawnUnit(struct FSTSpawnParam SpawnParam); // Offset: 0x103ee86f0 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function AI.AESpawnSubsystem.RegisterSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterSpawner(struct ASTSpawnerBase* Spawner); // Offset: 0x103ee866c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AESpawnSubsystem.PreCheck
	// Flags: [Native|Protected|BlueprintCallable]
	bool PreCheck(); // Offset: 0x103ee8630 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AESpawnSubsystem.ModifyThreshold
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void ModifyThreshold(enum class EBotCategray Category, IntProperty Threshold); // Offset: 0x103ee8578 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.AESpawnSubsystem.GetUnitsNumByCategory
	// Flags: [Final|Native|Protected|BlueprintCallable]
	IntProperty GetUnitsNumByCategory(enum class EBotCategray Category); // Offset: 0x103ee84ec // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.AESpawnSubsystem.GetUnitConfigID
	// Flags: [Native|Protected|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetUnitConfigID(struct AActor* Unit); // Offset: 0x103ee8458 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AI.AESpawnSubsystem.GetGroupedSpawners
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct TArray<struct ASTSpawnerBase*> GetGroupedSpawners(IntProperty InGroupID); // Offset: 0x103ee83a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.AESpawnSubsystem.EnQueue
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void EnQueue(struct FSTSpawnParam& SpawnParam, struct ASTSpawnerBase* Spawner); // Offset: 0x103ee825c // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function AI.AESpawnSubsystem.CleanQueue
	// Flags: [Native|Public|BlueprintCallable]
	void CleanQueue(); // Offset: 0x103ee8240 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AESpawnSubsystem.CheckCategoryLimit
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	bool CheckCategoryLimit(struct ASTSpawnerBase* Spawner, IntProperty& AvailableBalance); // Offset: 0x103ee8160 // Return & Params: Num(3) Size(0xd)
};

// Object Name: Class AI.AIActionExecutionComponent
// Size: 0x270 // Inherited bytes: 0x238
struct UAIActionExecutionComponent : ULuaActorComponent {
	// Fields
	struct AController* OwnerController; // Offset: 0x238 // Size: 0x08
	struct ANewFakePlayerAIController* MyAIController; // Offset: 0x240 // Size: 0x08
	struct ASTExtraPlayerController* MyPlayerController; // Offset: 0x248 // Size: 0x08
	struct ASTExtraBaseCharacter* MyPlayerPawn; // Offset: 0x250 // Size: 0x08
	struct UMLAIControllerComponent* MyMLAIControllerComp; // Offset: 0x258 // Size: 0x08
	char pad_0x260[0x10]; // Offset: 0x260 // Size: 0x10

	// Functions

	// Object Name: Function AI.AIActionExecutionComponent.UseItem
	// Flags: [Final|Native|Public]
	void UseItem(IntProperty ItemId, IntProperty WeaponSlot); // Offset: 0x103ee9998 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.SwapAttachmentItem
	// Flags: [Final|Native|Public]
	void SwapAttachmentItem(IntProperty ItemId, IntProperty SourceWeaponSlot, IntProperty TargetWeaponSlot); // Offset: 0x103ee98a8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID
	// Flags: [Final|Native|Public]
	void SetGrenadeLastSelectID(IntProperty WeaponId); // Offset: 0x103ee982c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.AIActionExecutionComponent.SetFocusRotation
	// Flags: [Final|Native|Public]
	void SetFocusRotation(float InPitch, float InYaw, float InRoll); // Offset: 0x103ee973c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.AIActionExecutionComponent.SetCurShootingPose
	// Flags: [Final|Native|Public]
	void SetCurShootingPose(); // Offset: 0x103ee9728 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIActionExecutionComponent.RescueTarget
	// Flags: [Final|Native|Public]
	void RescueTarget(struct ASTExtraBaseCharacter* RescueCharacter); // Offset: 0x103ee96ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.OpenFixedRateOfDoors
	// Flags: [Final|Native|Public]
	void OpenFixedRateOfDoors(float fCheckRealPlayerDistance, float fOpenDoorDistance, float fOpenDoorRate); // Offset: 0x103ee95bc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.AIActionExecutionComponent.OpenDoor
	// Flags: [Final|Native|Public]
	void OpenDoor(); // Offset: 0x103ee95a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIActionExecutionComponent.OnPlayerRespawn
	// Flags: [Final|Native|Public]
	void OnPlayerRespawn(struct AUAEPlayerController* PC); // Offset: 0x103ee952c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.OnFakePlayerRespawn
	// Flags: [Final|Native|Public]
	void OnFakePlayerRespawn(); // Offset: 0x103ee9518 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIActionExecutionComponent.IsValid
	// Flags: [Final|Native|Public]
	bool IsValid(); // Offset: 0x103ee94e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIActionExecutionComponent.IsFreeCamera
	// Flags: [Final|Native|Public]
	bool IsFreeCamera(); // Offset: 0x103ee94b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIActionExecutionComponent.GetPickActorWithID
	// Flags: [Final|Native|Public]
	struct APickUpWrapperActor* GetPickActorWithID(IntProperty UID); // Offset: 0x103ee9424 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter
	// Flags: [Final|Native|Public]
	struct ASTExtraBaseCharacter* GetOwnerBaseCharacter(); // Offset: 0x103ee93f0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.GetBackpackComponent
	// Flags: [Final|Native|Public]
	struct UBackpackComponent* GetBackpackComponent(); // Offset: 0x103ee93bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.DropItem
	// Flags: [Final|Native|Public]
	void DropItem(IntProperty ItemId, IntProperty Count); // Offset: 0x103ee9308 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.DoActionQuickMark
	// Flags: [Final|Native|Public]
	void DoActionQuickMark(IntProperty actorUID, IntProperty ItemId, IntProperty CheckRange); // Offset: 0x103ee9218 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.AIActionExecutionComponent.DoActionMoveNew
	// Flags: [Final|Native|Public]
	void DoActionMoveNew(bool IsStop, bool IsRun, float DirectionX, float DirectionY, float DirectionZ, IntProperty SwimUpRate); // Offset: 0x103ee905c // Return & Params: Num(6) Size(0x14)

	// Object Name: Function AI.AIActionExecutionComponent.DoActionMove
	// Flags: [Final|Native|Public]
	void DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ); // Offset: 0x103ee8f20 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AI.AIActionExecutionComponent.DoActionFreeCamera
	// Flags: [Final|Native|Public]
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll); // Offset: 0x103ee8de4 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AI.AIActionExecutionComponent.DisuseItem
	// Flags: [Final|Native|Public]
	void DisuseItem(IntProperty ItemId, IntProperty WeaponSlot); // Offset: 0x103ee8d30 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.AIActionExecutionComponent.CloseDoor
	// Flags: [Final|Native|Public]
	void CloseDoor(); // Offset: 0x103ee8d1c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.AIBasicStateInfoComponent
// Size: 0x238 // Inherited bytes: 0x238
struct UAIBasicStateInfoComponent : ULuaActorComponent {
	// Functions

	// Object Name: Function AI.AIBasicStateInfoComponent.OnItemStateChanged
	// Flags: [Native|Public|HasDefaults]
	void OnItemStateChanged(struct FVector Location); // Offset: 0x103eea2f0 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AI.AIBasicStateInfoComponent.GetPickActorWithID
	// Flags: [Native|Public]
	struct APickUpWrapperActor* GetPickActorWithID(IntProperty UID); // Offset: 0x103eea25c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class AI.AIBehaviorAdapter_VehicleBase
// Size: 0x390 // Inherited bytes: 0x258
struct UAIBehaviorAdapter_VehicleBase : UVehicleComponent {
	// Fields
	float LoseSightRadius; // Offset: 0x258 // Size: 0x04
	float QueryEnemyRange; // Offset: 0x25c // Size: 0x04
	float QueryEnemyAngle; // Offset: 0x260 // Size: 0x04
	float MinTimeLockTarget; // Offset: 0x264 // Size: 0x04
	float MaxRememberEnemySeconds; // Offset: 0x268 // Size: 0x04
	float PreciseHatredDecreaseSpeed; // Offset: 0x26c // Size: 0x04
	char bCorrectAfterTurnOver : 1; // Offset: 0x270 // Size: 0x01
	char pad_0x270_1 : 7; // Offset: 0x270 // Size: 0x01
	char pad_0x271[0x3]; // Offset: 0x271 // Size: 0x03
	float CorrectAfterTurnOverCD; // Offset: 0x274 // Size: 0x04
	float FollowSegmentTolerance; // Offset: 0x278 // Size: 0x04
	char pad_0x27C[0x4]; // Offset: 0x27c // Size: 0x04
	struct UCurveFloat* CurveThrottleInput; // Offset: 0x280 // Size: 0x08
	float MinAngleWhenPivotSteering; // Offset: 0x288 // Size: 0x04
	char pad_0x28C[0x4]; // Offset: 0x28c // Size: 0x04
	struct UCurveFloat* CurveThrottleRateWhenTurning; // Offset: 0x290 // Size: 0x08
	struct UCurveFloat* CurveSteeringInput; // Offset: 0x298 // Size: 0x08
	bool bUseBrakeWhenTurning; // Offset: 0x2a0 // Size: 0x01
	char pad_0x2A1[0x3]; // Offset: 0x2a1 // Size: 0x03
	float MinRequiredSteeringChange; // Offset: 0x2a4 // Size: 0x04
	float MinLengthRateAlmostReach; // Offset: 0x2a8 // Size: 0x04
	char pad_0x2AC[0x4]; // Offset: 0x2ac // Size: 0x04
	struct UCurveFloat* CurveBrakeAlmostReach; // Offset: 0x2b0 // Size: 0x08
	float SteeringThresholdUseBrake; // Offset: 0x2b8 // Size: 0x04
	float SpeedThresholdUseBrake; // Offset: 0x2bc // Size: 0x04
	char bBlockTest : 1; // Offset: 0x2c0 // Size: 0x01
	char pad_0x2C0_1 : 7; // Offset: 0x2c0 // Size: 0x01
	char pad_0x2C1[0x3]; // Offset: 0x2c1 // Size: 0x03
	float BlockTestingTime; // Offset: 0x2c4 // Size: 0x04
	float BlockSpeedThresholdKMH; // Offset: 0x2c8 // Size: 0x04
	char pad_0x2CC[0x4]; // Offset: 0x2cc // Size: 0x04
	struct APlayerTombBox* DeadInventoryBoxTemplate; // Offset: 0x2d0 // Size: 0x08
	IntProperty DropID; // Offset: 0x2d8 // Size: 0x04
	char pad_0x2DC[0x4]; // Offset: 0x2dc // Size: 0x04
	struct FName WrapperBoxName; // Offset: 0x2e0 // Size: 0x08
	struct APlayerTombBox* DeadTombBox; // Offset: 0x2e8 // Size: 0x08
	bool bDebug; // Offset: 0x2f0 // Size: 0x01
	char pad_0x2F1[0x3]; // Offset: 0x2f1 // Size: 0x03
	IntProperty DebugLevel; // Offset: 0x2f4 // Size: 0x04
	float DebugInterval; // Offset: 0x2f8 // Size: 0x04
	char pad_0x2FC[0x4]; // Offset: 0x2fc // Size: 0x04
	StrProperty BehaviorServiceDebugInfo; // Offset: 0x300 // Size: 0x10
	char pad_0x310[0x50]; // Offset: 0x310 // Size: 0x50
	struct ASTExtraVehicleBase* OwnerVehicle; // Offset: 0x360 // Size: 0x08
	char bCacheMeshOnHit : 1; // Offset: 0x368 // Size: 0x01
	char pad_0x368_1 : 7; // Offset: 0x368 // Size: 0x01
	char pad_0x369[0x27]; // Offset: 0x369 // Size: 0x27

	// Functions

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.Suicide
	// Flags: [Native|Public]
	void Suicide(); // Offset: 0x103eeb484 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo
	// Flags: [Net|Native|Event|NetMulticast|Protected]
	void RPC_Client_SetServiceDebugInfo(StrProperty Info); // Offset: 0x103eeb3e4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.OnInit
	// Flags: [Native|Public]
	void OnInit(); // Offset: 0x103eeb3c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.OnDeath
	// Flags: [Native|Public]
	void OnDeath(struct AController* InstigatedBy); // Offset: 0x103eeb344 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.OnAICPossessed
	// Flags: [Event|Public|BlueprintEvent]
	void OnAICPossessed(struct AController* InController); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate
	// Flags: [Event|Public|BlueprintEvent]
	float LuaCalculateHitRate(float Distance, float BaseHitRate); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.IsAlive
	// Flags: [Native|Public|Const]
	bool IsAlive(); // Offset: 0x103eeb308 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack
	// Flags: [Final|Native|Public|HasOutParms]
	void HandleOnVehicleUnderAttack(struct AController* EventInstigator, struct FDamageEvent& DamageEvent, struct AActor* DamageCauser, float Damage, float OriginDamage); // Offset: 0x103eeb17c // Return & Params: Num(5) Size(0x28)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged
	// Flags: [Native|Protected]
	void HandleOnVehicleHealthStateChanged(enum class ESTExtraVehicleHealthState InVehicleHealthState); // Offset: 0x103eeb0f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	void HandleOnMeshHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Offset: 0x103eeaf68 // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo
	// Flags: [Native|Public]
	void BroadcastServiceDebugInfo(); // Offset: 0x103eeaf4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage
	// Flags: [Event|Public|BlueprintEvent]
	void BPReceiveDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser, enum class EDamageType DamageEventType); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x21)
};

// Object Name: Class AI.AIBehaviorAdapter_Tank
// Size: 0x488 // Inherited bytes: 0x390
struct UAIBehaviorAdapter_Tank : UAIBehaviorAdapter_VehicleBase {
	// Fields
	struct UCurveFloat* AimDurationCurve; // Offset: 0x390 // Size: 0x08
	struct FVector2D AimDurationDeviation; // Offset: 0x398 // Size: 0x08
	float ShootTurretCD; // Offset: 0x3a0 // Size: 0x04
	float BulletExplosionRange; // Offset: 0x3a4 // Size: 0x04
	float AimingLockRange; // Offset: 0x3a8 // Size: 0x04
	float AimingLockRangeWhenFiring; // Offset: 0x3ac // Size: 0x04
	struct FVector2D TurretAimRange; // Offset: 0x3b0 // Size: 0x08
	char bPredictEnemyMove : 1; // Offset: 0x3b8 // Size: 0x01
	char pad_0x3B8_1 : 7; // Offset: 0x3b8 // Size: 0x01
	char pad_0x3B9[0x3]; // Offset: 0x3b9 // Size: 0x03
	struct FVector2D TurretShootRange; // Offset: 0x3bc // Size: 0x08
	char bAimingConstantLerp : 1; // Offset: 0x3c4 // Size: 0x01
	char pad_0x3C4_1 : 7; // Offset: 0x3c4 // Size: 0x01
	char pad_0x3C5[0x3]; // Offset: 0x3c5 // Size: 0x03
	float TurretAimingInterpConstantSpeed; // Offset: 0x3c8 // Size: 0x04
	float TurretAimingInterpSpeed; // Offset: 0x3cc // Size: 0x04
	float SimTurretAimingInterpConstantSpeed; // Offset: 0x3d0 // Size: 0x04
	float TurretAimingErrorTolerance; // Offset: 0x3d4 // Size: 0x04
	char bAlsoCheckArcLength : 1; // Offset: 0x3d8 // Size: 0x01
	char pad_0x3D8_1 : 7; // Offset: 0x3d8 // Size: 0x01
	char pad_0x3D9[0x3]; // Offset: 0x3d9 // Size: 0x03
	float ShootTargetLocationOffset; // Offset: 0x3dc // Size: 0x04
	char bTraceBlockShootTargetLocation : 1; // Offset: 0x3e0 // Size: 0x01
	char pad_0x3E0_1 : 7; // Offset: 0x3e0 // Size: 0x01
	char pad_0x3E1[0x3]; // Offset: 0x3e1 // Size: 0x03
	IntProperty MaxTraceBlockTryTimes; // Offset: 0x3e4 // Size: 0x04
	char bResetTurretAfterDestroy : 1; // Offset: 0x3e8 // Size: 0x01
	char bFailedAimingWhenTurretCollided : 1; // Offset: 0x3e8 // Size: 0x01
	char pad_0x3E8_2 : 6; // Offset: 0x3e8 // Size: 0x01
	char pad_0x3E9[0x7]; // Offset: 0x3e9 // Size: 0x07
	MapProperty BaseHitRate; // Offset: 0x3f0 // Size: 0x50
	float ShootMGCD; // Offset: 0x440 // Size: 0x04
	struct FVector2D ShootMGDuration; // Offset: 0x444 // Size: 0x08
	float ShootMGInterval; // Offset: 0x44c // Size: 0x04
	struct FVector2D ShootUpDownRange; // Offset: 0x450 // Size: 0x08
	struct FVector2D ShootLeftRightRange; // Offset: 0x458 // Size: 0x08
	struct FVector2D ShootLeftRightRangeDistance; // Offset: 0x460 // Size: 0x08
	struct FVector2D ShootTargetSpeedRange; // Offset: 0x468 // Size: 0x08
	struct FVector2D ShootTargetDistanceRangeDueToSpeed; // Offset: 0x470 // Size: 0x08
	struct FVector2D MGShootRange; // Offset: 0x478 // Size: 0x08
	char bShouldMissOnPurpose : 1; // Offset: 0x480 // Size: 0x01
	char bCacheUsingMG : 1; // Offset: 0x480 // Size: 0x01
	char bCacheUsingTurret : 1; // Offset: 0x480 // Size: 0x01
	char pad_0x480_3 : 5; // Offset: 0x480 // Size: 0x01
	char pad_0x481[0x7]; // Offset: 0x481 // Size: 0x07

	// Functions

	// Object Name: Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool UpdateTurretAimingTarget(struct FVector& TargetLocation, float DeltaSeconds, bool FailedWhenCollided); // Offset: 0x103eea890 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.ShootTurret
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ShootTurret(); // Offset: 0x103eea85c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.ShootMachineGun
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ShootMachineGun(); // Offset: 0x103eea828 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.OnInit
	// Flags: [Native|Public]
	void OnInit(); // Offset: 0x103eea80c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.OnDeath
	// Flags: [Native|Public]
	void OnDeath(struct AController* InstigatedBy); // Offset: 0x103eea788 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool IsTurretLockTarget(struct FVector& TargetLocation, float LockRadius); // Offset: 0x103eea6b4 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.IsAlive
	// Flags: [Native|Public|Const]
	bool IsAlive(); // Offset: 0x103eea678 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged
	// Flags: [Native|Public]
	void HandleOnVehicleHealthStateChanged(enum class ESTExtraVehicleHealthState InVehicleHealthState); // Offset: 0x103eea5f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void BroadcastTankShootWeapon(bool IsTurret); // Offset: 0x103eea568 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AI.AIPerceptionChildPickUpComponent
// Size: 0x288 // Inherited bytes: 0x238
struct UAIPerceptionChildPickUpComponent : ULuaActorComponent {
	// Fields
	SetProperty ChildPickUpWrapperActors; // Offset: 0x238 // Size: 0x50

	// Functions

	// Object Name: Function AI.AIPerceptionChildPickUpComponent.OnPickUpWrapperHideStateChange
	// Flags: [Final|Native|Public]
	void OnPickUpWrapperHideStateChange(struct APickUpWrapperActor* PickUpActor, bool bHide); // Offset: 0x103eeb900 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class AI.AIPerceptionDynamicItemComponent
// Size: 0x3c8 // Inherited bytes: 0x238
struct UAIPerceptionDynamicItemComponent : ULuaActorComponent {
	// Fields
	IntProperty Category; // Offset: 0x234 // Size: 0x04
	struct TArray<struct FChildDynamicItem> ChildArray; // Offset: 0x238 // Size: 0x10
	DelegateProperty GetDynamicItemDurabilityDelegate; // Offset: 0x248 // Size: 0x10
	bool CheckVisible; // Offset: 0x258 // Size: 0x01
	char pad_0x25D[0x3]; // Offset: 0x25d // Size: 0x03
	struct TArray<struct UStaticMeshComponent*> CheckVisibleMeshComponents; // Offset: 0x260 // Size: 0x10
	uint32_t CustomUInt32State; // Offset: 0x270 // Size: 0x04
	char pad_0x274[0x4]; // Offset: 0x274 // Size: 0x04
	MapProperty CustomAttributeMap; // Offset: 0x278 // Size: 0x50
	MapProperty IntCustomAttributeMap; // Offset: 0x2c8 // Size: 0x50
	char pad_0x318[0x10]; // Offset: 0x318 // Size: 0x10
	bool IsMovable; // Offset: 0x328 // Size: 0x01
	bool IsCheckVisAngle; // Offset: 0x329 // Size: 0x01
	bool IsFireSpreadingCalCenter; // Offset: 0x32a // Size: 0x01
	bool bEnableState; // Offset: 0x32b // Size: 0x01
	bool bIsDestructibleItem; // Offset: 0x32c // Size: 0x01
	bool bUseMeshMapping; // Offset: 0x32d // Size: 0x01
	char pad_0x32E[0x7a]; // Offset: 0x32e // Size: 0x7a
	struct UPhotonDestructibleMeshComponent* CachedDestructComp; // Offset: 0x3a8 // Size: 0x08
	struct UDamageableComponentBase* CachedDamageableComp; // Offset: 0x3b0 // Size: 0x08
	struct ASTExtraBaseCharacter* CachedCharacterOwner; // Offset: 0x3b8 // Size: 0x08
	char pad_0x3C0[0x8]; // Offset: 0x3c0 // Size: 0x08

	// Functions

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.UpdateIntCustomAttributeValue
	// Flags: [Final|Native|Public]
	void UpdateIntCustomAttributeValue(uint32_t InCustomAttributeID, uint64 InValue, bool bRemove); // Offset: 0x103eec00c // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.UpdateInAICell
	// Flags: [Final|Native|Public]
	void UpdateInAICell(bool bForceUpdate); // Offset: 0x103eebf88 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.UpdateCustomAttributeValue
	// Flags: [Final|Native|Public]
	void UpdateCustomAttributeValue(uint32_t InCustomAttributeID, float InValue, bool bRemove); // Offset: 0x103eebe8c // Return & Params: Num(3) Size(0x9)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.SetEnableState
	// Flags: [Final|Native|Public]
	void SetEnableState(bool bInEnable); // Offset: 0x103eebe08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.RemoveInAICell
	// Flags: [Final|Native|Public]
	void RemoveInAICell(); // Offset: 0x103eebdf4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.RemoveFromCache
	// Flags: [Final|Native|Public]
	void RemoveFromCache(); // Offset: 0x103eebde0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.OnMeshAssetSet
	// Flags: [Final|Native|Public]
	void OnMeshAssetSet(); // Offset: 0x103eebdcc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.GetUniqueID
	// Flags: [Final|Native|Public]
	uint32_t GetUniqueID(struct AActor* DynamicItem); // Offset: 0x103eebd40 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.GetIntCustomAttributeList
	// Flags: [Final|Native|Public|HasOutParms]
	void GetIntCustomAttributeList(struct TArray<struct FIntAIAttribute>& OutIntCustomAttributeList); // Offset: 0x103eebc98 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.AIPerceptionDynamicItemComponent.GetCustomAttributeList
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCustomAttributeList(struct TArray<struct FAIAttribute>& OutCustomAttributeList); // Offset: 0x103eebbf0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AI.AISoundCollectionComponent
// Size: 0x3b8 // Inherited bytes: 0x238
struct UAISoundCollectionComponent : ULuaActorComponent {
	// Fields
	MapProperty CacheStepSounds; // Offset: 0x238 // Size: 0x50
	MapProperty CacheWeaponSounds; // Offset: 0x288 // Size: 0x50
	MapProperty CacheVehicleSounds; // Offset: 0x2d8 // Size: 0x50
	MapProperty CacheGrenadeSounds; // Offset: 0x328 // Size: 0x50
	char pad_0x378[0x18]; // Offset: 0x378 // Size: 0x18
	float ClearStepSoundTime; // Offset: 0x390 // Size: 0x04
	float ClearWeaponSoundTime; // Offset: 0x394 // Size: 0x04
	float ClearVehicleSoundTime; // Offset: 0x398 // Size: 0x04
	float ClearGrenadeSoundTime; // Offset: 0x39c // Size: 0x04
	IntProperty StepSoundMaxNum; // Offset: 0x3a0 // Size: 0x04
	IntProperty WeaponSoundMaxNum; // Offset: 0x3a4 // Size: 0x04
	IntProperty VehicleSoundMaxNum; // Offset: 0x3a8 // Size: 0x04
	IntProperty GrenadeSoundMaxNum; // Offset: 0x3ac // Size: 0x04
	struct AController* OwnerController; // Offset: 0x3b0 // Size: 0x08

	// Functions

	// Object Name: Function AI.AISoundCollectionComponent.OnCollectionHearSound
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void OnCollectionHearSound(enum class ESoundType SoundType, struct FVector& InPos, struct AActor* InSourceActor); // Offset: 0x103eec848 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AI.AISoundCollectionComponent.OnAISoundManagerHear
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void OnAISoundManagerHear(struct AActor* InTargetActor, enum class ESoundType SoundType, struct FVector& InPos, struct AActor* InSourceActor); // Offset: 0x103eec704 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function AI.AISoundCollectionComponent.GetCollectSoundInfo
	// Flags: [Final|Native|Public]
	struct TArray<struct FSoundState> GetCollectSoundInfo(); // Offset: 0x103eec6a0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AI.AIStateInfoComponentBase
// Size: 0x348 // Inherited bytes: 0x238
struct UAIStateInfoComponentBase : UAIBasicStateInfoComponent {
	// Fields
	bool IsTouchedPlayer; // Offset: 0x231 // Size: 0x01
	uint32_t FrameNo; // Offset: 0x234 // Size: 0x04
	struct ASTExtraPlayerController* MyPlayerController; // Offset: 0x238 // Size: 0x08
	IntProperty SkipFrameConfig; // Offset: 0x240 // Size: 0x04
	IntProperty SkipFrameConfigSecond; // Offset: 0x244 // Size: 0x04
	struct AController* OwnerController; // Offset: 0x248 // Size: 0x08
	struct ANewFakePlayerAIController* MyAIController; // Offset: 0x250 // Size: 0x08
	struct UAIActingComponent* AIActingComp; // Offset: 0x258 // Size: 0x08
	struct APawn* MyOwnerPawn; // Offset: 0x260 // Size: 0x08
	struct ABattleRoyaleGameModeBase* MyGameMode; // Offset: 0x268 // Size: 0x08
	struct TArray<struct FDamageSource> DamageSourcesInfoNew; // Offset: 0x270 // Size: 0x10
	MapProperty CacheAINearbyItem; // Offset: 0x280 // Size: 0x50
	struct TArray<struct ASTExtraBaseCharacter*> CacheNearbyEnemies; // Offset: 0x2d0 // Size: 0x10
	struct FCacheNearbyItemState CacheNearbyItemState; // Offset: 0x2e0 // Size: 0x20
	struct UMLAIControllerComponent* MyMLAIControllerComp; // Offset: 0x300 // Size: 0x08
	uint32_t CacheModeMapId; // Offset: 0x308 // Size: 0x04
	char pad_0x311[0x7]; // Offset: 0x311 // Size: 0x07
	struct UMLAISubSystem* MLAISubSystem; // Offset: 0x318 // Size: 0x08
	struct UAIStateInfoDataAsset* AIStateInfoDataAsset; // Offset: 0x320 // Size: 0x08
	struct UMLAIStateInfoManager* MLAIStateInfoManager; // Offset: 0x328 // Size: 0x08
	struct AAIWorldVolume* AIWorldVolume; // Offset: 0x330 // Size: 0x08
	char pad_0x338[0x10]; // Offset: 0x338 // Size: 0x10

	// Functions

	// Object Name: Function AI.AIStateInfoComponentBase.QueryItemStates
	// Flags: [Final|Native|Public|HasOutParms]
	void QueryItemStates(IntProperty MaxBoxNum, IntProperty MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingMaxRange, float FindBuildingMinRange, bool InIsUseItemSpotLoc, IntProperty MaxTreasureChestNum, float TreasureChestRange, IntProperty MaxWeedNum, float WeedRange, struct TArray<struct FItemStateData>& ItemStateDatas); // Offset: 0x103eed234 // Return & Params: Num(14) Size(0x48)

	// Object Name: Function AI.AIStateInfoComponentBase.PrintCacheAINearbyItem
	// Flags: [Final|Native|Protected]
	void PrintCacheAINearbyItem(); // Offset: 0x103eed220 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIStateInfoComponentBase.OnPlayerRespawn
	// Flags: [Final|Native|Public]
	void OnPlayerRespawn(struct AUAEPlayerController* PC); // Offset: 0x103eed1a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn
	// Flags: [Final|Native|Public]
	void OnFakePlayerRespawn(); // Offset: 0x103eed190 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd
	// Flags: [Final|Native|Public]
	void OnAIStateRequestEnd(); // Offset: 0x103eed17c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.AIStateInfoComponentBase.IsValid
	// Flags: [Final|Native|Protected|Const]
	bool IsValid(); // Offset: 0x103eed148 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIStateInfoComponentBase.IsAvailableNearbyItemType
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool IsAvailableNearbyItemType(struct FItemDefineID& DefineID); // Offset: 0x103eed0a8 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool IsAvailableBackpackItemType(struct FItemDefineID& DefineID); // Offset: 0x103eed008 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function AI.AIStateInfoComponentBase.HasPlayerAround
	// Flags: [Final|Native|Protected]
	bool HasPlayerAround(); // Offset: 0x103eecfd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.AIStateInfoComponentBase.GetViewForwardVector
	// Flags: [Final|Native|Protected|HasDefaults|Const]
	struct FVector GetViewForwardVector(struct ACharacter* InCharacter); // Offset: 0x103eecf44 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AI.AIStateInfoComponentBase.GetSoundInfo
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct FSoundState> GetSoundInfo(); // Offset: 0x103eecee0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.AIStateInfoComponentBase.GetProgressBarState
	// Flags: [Final|Native|Public]
	struct FProgressBarState GetProgressBarState(); // Offset: 0x103eece78 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo
	// Flags: [Final|Native|Public|Const]
	struct FAIPlayerInteractInfo GetPlayerInteractInfo(); // Offset: 0x103eece14 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter
	// Flags: [Final|Native|Protected|Const]
	struct ASTExtraBaseCharacter* GetOwnerBaseCharacter(); // Offset: 0x103eecde0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.AIStateInfoComponentBase.GetNearbyItemState
	// Flags: [Final|Native|Public|HasOutParms]
	void GetNearbyItemState(struct ASTExtraBaseCharacter* InPawn, bool& OutIsUseCacheItem, struct TArray<struct FItemStateData>& NearbyItems); // Offset: 0x103eecca4 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function AI.AIStateInfoComponentBase.GetFrameNo
	// Flags: [Final|Native|Protected]
	uint32_t GetFrameNo(); // Offset: 0x103eecc88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.AIStateInfoComponentBase.GetDamageSourcesNew
	// Flags: [Final|Native|Public]
	struct TArray<struct FDamageSource> GetDamageSourcesNew(); // Offset: 0x103eecbf8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.AIStateInfoComponentBase.GetAIDestroyBulletProbInfo
	// Flags: [Final|Native|Public|HasOutParms|Const]
	void GetAIDestroyBulletProbInfo(struct TArray<struct FAIDestroyBulletProbInfo>& AIDestroyBulletProbInfoList); // Offset: 0x103eecb50 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.AIStateInfoComponentBase.ClearDamageSources
	// Flags: [Final|Native|Public]
	void ClearDamageSources(); // Offset: 0x103eecb3c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.AIStateInfoDataAsset
// Size: 0x258 // Inherited bytes: 0x30
struct UAIStateInfoDataAsset : UDataAsset {
	// Fields
	MapProperty ProgressSkillConfig; // Offset: 0x30 // Size: 0x50
	struct TArray<IntProperty> AvailableBackpackItemTypes; // Offset: 0x80 // Size: 0x10
	MapProperty AvailableNearbyItemTypes; // Offset: 0x90 // Size: 0x50
	MapProperty GrenadeTypeConfig; // Offset: 0xe0 // Size: 0x50
	MapProperty EquipmentItemIDMappingConfig; // Offset: 0x130 // Size: 0x50
	float VisibleAngle; // Offset: 0x180 // Size: 0x04
	struct FVector HeadOffset; // Offset: 0x184 // Size: 0x0c
	float NearbyEnemyRange; // Offset: 0x190 // Size: 0x04
	float FogWeatherRangeScale; // Offset: 0x194 // Size: 0x04
	IntProperty NearbyEnemyMaxNum; // Offset: 0x198 // Size: 0x04
	bool IsSearchNearItem; // Offset: 0x19c // Size: 0x01
	char pad_0x19D[0x3]; // Offset: 0x19d // Size: 0x03
	IntProperty NearbyItemMaxNum; // Offset: 0x1a0 // Size: 0x04
	IntProperty NearbyMaxBoxNum; // Offset: 0x1a4 // Size: 0x04
	float NearbyAirDropBoxRangeInner; // Offset: 0x1a8 // Size: 0x04
	float NearbyAirDropBoxRangeOuter; // Offset: 0x1ac // Size: 0x04
	float NearbyDeathBoxRange; // Offset: 0x1b0 // Size: 0x04
	float NearbyPickUpWrapperRange; // Offset: 0x1b4 // Size: 0x04
	float CacheNearbyItemRangeCoefficient; // Offset: 0x1b8 // Size: 0x04
	IntProperty NearbyMaxTreasureChestNum; // Offset: 0x1bc // Size: 0x04
	float NearbyTreasureChestRange; // Offset: 0x1c0 // Size: 0x04
	IntProperty NearbyMaxWeedNum; // Offset: 0x1c4 // Size: 0x04
	float NearbyWeedRange; // Offset: 0x1c8 // Size: 0x04
	float NearbyFindBuildingMaxRange; // Offset: 0x1cc // Size: 0x04
	float NearbyFindBuildingMinRange; // Offset: 0x1d0 // Size: 0x04
	float ItemStateChangedRange; // Offset: 0x1d4 // Size: 0x04
	bool IsItemVisiable; // Offset: 0x1d8 // Size: 0x01
	bool IsUseItemSpotLoc; // Offset: 0x1d9 // Size: 0x01
	char pad_0x1DA[0x2]; // Offset: 0x1da // Size: 0x02
	float NearbyObstacleRange; // Offset: 0x1dc // Size: 0x04
	float NearbyThrownRange; // Offset: 0x1e0 // Size: 0x04
	float NearbySmokeRange; // Offset: 0x1e4 // Size: 0x04
	IntProperty NearbyThrownMaxNum; // Offset: 0x1e8 // Size: 0x04
	char pad_0x1EC[0x4]; // Offset: 0x1ec // Size: 0x04
	IntProperty NearbyDoorMaxNum; // Offset: 0x1f0 // Size: 0x04
	float NearbyVehicleRange; // Offset: 0x1f4 // Size: 0x04
	IntProperty NearbyVehicleMaxNum; // Offset: 0x1f8 // Size: 0x04
	float NearbyBulletHoleRange; // Offset: 0x1fc // Size: 0x04
	IntProperty NearbyBulletHoleMaxNum; // Offset: 0x200 // Size: 0x04
	float NearbyDynamicItemsRange; // Offset: 0x204 // Size: 0x04
	float NearbyDynamicItemsVisibleAngle; // Offset: 0x208 // Size: 0x04
	IntProperty NearbyDynamicItemsMaxNum; // Offset: 0x20c // Size: 0x04
	float NearbyMonsterRange; // Offset: 0x210 // Size: 0x04
	IntProperty NearbyMonsterMaxNum; // Offset: 0x214 // Size: 0x04
	float NearbyDigLandScapeActorRange; // Offset: 0x218 // Size: 0x04
	IntProperty NearbyDigLandScapeActorMaxNum; // Offset: 0x21c // Size: 0x04
	bool bIgnoreTreeAIWhenNoPlayerAround; // Offset: 0x220 // Size: 0x01
	char pad_0x221[0x3]; // Offset: 0x221 // Size: 0x03
	float IgnoreTreeAIRadius; // Offset: 0x224 // Size: 0x04
	bool UseBodyTPPCamera; // Offset: 0x228 // Size: 0x01
	char pad_0x229[0x7]; // Offset: 0x229 // Size: 0x07
	struct TArray<IntProperty> IgnoredMonsterIDs; // Offset: 0x230 // Size: 0x10
	struct TArray<enum class EAvatarSlotType> AvailableAvatarSlotTypes; // Offset: 0x240 // Size: 0x10
	uint32_t nCanMLAIBuildAttributeID; // Offset: 0x250 // Size: 0x04
	char pad_0x254[0x4]; // Offset: 0x254 // Size: 0x04
};

// Object Name: Class AI.StateInfoCollectorBase
// Size: 0x58 // Inherited bytes: 0x28
struct UStateInfoCollectorBase : UObject {
	// Fields
	uint32_t CollectType; // Offset: 0x28 // Size: 0x04
	bool HaveGloabalData; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	struct UAIStateInfoDataAsset* AIStateInfoDataAsset; // Offset: 0x30 // Size: 0x08
	struct UMLAIStateInfoManager* MLAIStateInfoManager; // Offset: 0x38 // Size: 0x08
	struct UMLAISubSystem* MLAISubSystem; // Offset: 0x40 // Size: 0x08
	struct ABattleRoyaleGameMode* CurGameMode; // Offset: 0x48 // Size: 0x08
	struct AAIWorldVolume* AIWorldVolume; // Offset: 0x50 // Size: 0x08
};

// Object Name: Class AI.BaseMLAIStateInfoCollector
// Size: 0x250 // Inherited bytes: 0x58
struct UBaseMLAIStateInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffMLBaseAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
};

// Object Name: Class AI.BaseStateInfoCollector
// Size: 0x5f8 // Inherited bytes: 0x58
struct UBaseStateInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffBaseModAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x120
	struct FBaseModGlobalGameState CacheGlobalGameState; // Offset: 0x268 // Size: 0xa8
	struct FBaseModGlobalGameState LastGlobalGameState; // Offset: 0x310 // Size: 0xa8
	struct FDiffBaseModGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x3b8 // Size: 0xf0
	MapProperty DiffStateInfoKeyMap; // Offset: 0x4a8 // Size: 0x50
	SetProperty LastSilentMLAIMap; // Offset: 0x4f8 // Size: 0x50
	SetProperty CurrentSilentMLAIMap; // Offset: 0x548 // Size: 0x50
	char pad_0x598[0x60]; // Offset: 0x598 // Size: 0x60

	// Functions

	// Object Name: Function AI.BaseStateInfoCollector.RemoveBackpackItemUpdatedMap
	// Flags: [Final|Native|Public]
	void RemoveBackpackItemUpdatedMap(uint32_t PlayerKey, bool AllRemove); // Offset: 0x103ef06a0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function AI.BaseStateInfoCollector.OnBackpackItemListUpdated
	// Flags: [Final|Native|Public]
	void OnBackpackItemListUpdated(uint32_t PlayerKey); // Offset: 0x103ef0624 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.BaseStateInfoCollector.AddBackpackItemListUpdatedDelegate
	// Flags: [Final|Native|Public]
	void AddBackpackItemListUpdatedDelegate(struct UBackpackComponent* InBackpackComp, uint32_t InPlayerKey); // Offset: 0x103ef056c // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class AI.BRBaseStateInfoCollector
// Size: 0x5e0 // Inherited bytes: 0x58
struct UBRBaseStateInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffBRBaseAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x118
	struct FBRBaseGlobalGameState CacheGlobalGameState; // Offset: 0x260 // Size: 0xf0
	struct FBRBaseGlobalGameState LastGlobalGameState; // Offset: 0x350 // Size: 0xf0
	struct FDiffBRBaseGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x440 // Size: 0x168
	char pad_0x5A8[0x30]; // Offset: 0x5a8 // Size: 0x30
	struct UCircleMgrComponent* CircleMgr; // Offset: 0x5d8 // Size: 0x08
};

// Object Name: Class AI.BTD_CheckObstacleInCustomRange
// Size: 0x108 // Inherited bytes: 0x88
struct UBTD_CheckObstacleInCustomRange : UBTDecorator_BlackboardBase {
	// Fields
	enum class EObstacleDetectionSpace ObstacleDetectionType; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct FBlackboardKeySelector BBK_OriginLoc; // Offset: 0x90 // Size: 0x28
	char bDrawDebug : 1; // Offset: 0xb8 // Size: 0x01
	char pad_0xB8_1 : 7; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x3]; // Offset: 0xb9 // Size: 0x03
	IntProperty DrawSegments; // Offset: 0xbc // Size: 0x04
	struct FVector SpaceSize; // Offset: 0xc0 // Size: 0x0c
	float GravityScale; // Offset: 0xcc // Size: 0x04
	float CustomMaxHeight; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct FBlackboardKeySelector BBK_CapsuleSweepFinalLoc; // Offset: 0xd8 // Size: 0x28
	float CapsuleScaleFactor; // Offset: 0x100 // Size: 0x04
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_AttrObserver
// Size: 0xa0 // Inherited bytes: 0x88
struct UBTDecorator_AttrObserver : UBTDecorator_BlackboardBase {
	// Fields
	struct TArray<struct FAIAttrObserver> AttrObserverList; // Offset: 0x88 // Size: 0x10
	char bEnableObserver : 1; // Offset: 0x98 // Size: 0x01
	char pad_0x98_1 : 7; // Offset: 0x98 // Size: 0x01
	bool bUseBlackboardKey; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x6]; // Offset: 0x9a // Size: 0x06
};

// Object Name: Class AI.BTDecorator_BlackboardValueCheck
// Size: 0x90 // Inherited bytes: 0x60
struct UBTDecorator_BlackboardValueCheck : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector StrategyKey; // Offset: 0x60 // Size: 0x28
	char EnumValue; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_CheckAreaID
// Size: 0x98 // Inherited bytes: 0x88
struct UBTDecorator_CheckAreaID : UBTDecorator_BlackboardBase {
	// Fields
	struct TArray<IntProperty> AreaIDs; // Offset: 0x88 // Size: 0x10
};

// Object Name: Class AI.BTDecorator_CheckDSSwitchOpen
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_CheckDSSwitchOpen : UBTDecorator {
	// Fields
	IntProperty SwitchId; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_CheckEnvironment
// Size: 0x90 // Inherited bytes: 0x60
struct UBTDecorator_CheckEnvironment : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector BBKTarget; // Offset: 0x60 // Size: 0x28
	bool bCheckInWater; // Offset: 0x88 // Size: 0x01
	bool bCheckInHouse; // Offset: 0x89 // Size: 0x01
	char pad_0x8A[0x6]; // Offset: 0x8a // Size: 0x06
};

// Object Name: Class AI.BTDecorator_CheckFlyingStatus
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_CheckFlyingStatus : UBTDecorator {
	// Fields
	enum class EAICheckFlyingStatusType CheckItem; // Offset: 0x5a // Size: 0x01
};

// Object Name: Class AI.BTDecorator_CheckInOcclusionPose
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_CheckInOcclusionPose : UBTDecorator {
	// Fields
	enum class EAIOcclusionPointPoseType checkPose; // Offset: 0x5a // Size: 0x01
};

// Object Name: Class AI.BTDecorator_CheckShootingPose
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_CheckShootingPose : UBTDecorator {
	// Fields
	enum class EAICheckShootingPoseType checkPose; // Offset: 0x5a // Size: 0x01
};

// Object Name: Class AI.BTDecorator_DistanceCheck
// Size: 0xe8 // Inherited bytes: 0x60
struct UBTDecorator_DistanceCheck : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector CenterActorBlackBoardKey; // Offset: 0x60 // Size: 0x28
	struct FBlackboardKeySelector TargetActorBlackBoardKey; // Offset: 0x88 // Size: 0x28
	enum class ECompareLengthType CompareOperation; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x3]; // Offset: 0xb1 // Size: 0x03
	float Distance; // Offset: 0xb4 // Size: 0x04
	struct FBlackboardKeySelector CustomCheckDistanceBlackBoardKey; // Offset: 0xb8 // Size: 0x28
	enum class EDistanceCheckType DistanceCheckType; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_DoesDistanceSatisfy
// Size: 0xb8 // Inherited bytes: 0x60
struct UBTDecorator_DoesDistanceSatisfy : UBTDecorator {
	// Fields
	struct FVector2D TestDistanceRange; // Offset: 0x5c // Size: 0x08
	bool bCustomSrcLoc; // Offset: 0x64 // Size: 0x01
	bool bCompareInXY; // Offset: 0x65 // Size: 0x01
	struct FBlackboardKeySelector TargetBlackboardKey; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector SrcBlackboardKey; // Offset: 0x90 // Size: 0x28
};

// Object Name: Class AI.BTDecorator_GameModeCheck
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_GameModeCheck : UBTDecorator {
	// Fields
	IntProperty PlayerNumPerTeam; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_GeneralLineTrace
// Size: 0xc8 // Inherited bytes: 0x60
struct UBTDecorator_GeneralLineTrace : UBTDecorator {
	// Fields
	struct TArray<enum class ECollisionChannel> traceObjectTypes; // Offset: 0x60 // Size: 0x10
	enum class EAIDecoratorGeneralLineTraceType lineTraceType; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	float ForwardTestForwardOffset; // Offset: 0x74 // Size: 0x04
	float ForwardTestHeightOffset; // Offset: 0x78 // Size: 0x04
	bool bIgnoreOwner; // Offset: 0x7c // Size: 0x01
	bool bFromSelfToTarget; // Offset: 0x7d // Size: 0x01
	char pad_0x7E[0x2]; // Offset: 0x7e // Size: 0x02
	struct FBlackboardKeySelector BBKTargetActor; // Offset: 0x80 // Size: 0x28
	bool bOnlyTickInverse; // Offset: 0xa8 // Size: 0x01
	bool bUseSingleTrace; // Offset: 0xa9 // Size: 0x01
	char pad_0xAA[0x6]; // Offset: 0xaa // Size: 0x06
	struct TArray<struct AActor*> IgnoreActorsClass; // Offset: 0xb0 // Size: 0x10
	bool bDebug; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x7]; // Offset: 0xc1 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_HasOccludeBuildActor
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_HasOccludeBuildActor : UBTDecorator {
};

// Object Name: Class AI.BTDecorator_HasPawnState
// Size: 0xa0 // Inherited bytes: 0x88
struct UBTDecorator_HasPawnState : UBTDecorator_BlackboardBase {
	// Fields
	struct TArray<enum class EPawnState> AIStates; // Offset: 0x88 // Size: 0x10
	bool IsMatchAll; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_HasPlayerAIState
// Size: 0x78 // Inherited bytes: 0x60
struct UBTDecorator_HasPlayerAIState : UBTDecorator {
	// Fields
	struct TArray<enum class EPawnState> AIStates; // Offset: 0x60 // Size: 0x10
	bool IsMatchAll; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_HasStaticOccludePos
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_HasStaticOccludePos : UBTDecorator {
};

// Object Name: Class AI.BTDecorator_IsEnemyInBuilding
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_IsEnemyInBuilding : UBTDecorator {
};

// Object Name: Class AI.BTDecorator_IsInSafetyCircle
// Size: 0x90 // Inherited bytes: 0x60
struct UBTDecorator_IsInSafetyCircle : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector CheckTargetBlackboardKey; // Offset: 0x60 // Size: 0x28
	enum class EInSafetyCircleType IsCheackByCircleType; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_IsMovementMode
// Size: 0xa0 // Inherited bytes: 0x88
struct UBTDecorator_IsMovementMode : UBTDecorator_BlackboardBase {
	// Fields
	enum class EMovementMode MovementMode; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct TArray<enum class EMovementMode> MovementModeArray; // Offset: 0x90 // Size: 0x10
};

// Object Name: Class AI.BTDecorator_IsOcclusionExist
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_IsOcclusionExist : UBTDecorator {
};

// Object Name: Class AI.BTDecorator_IsOcclusionSafe
// Size: 0x98 // Inherited bytes: 0x60
struct UBTDecorator_IsOcclusionSafe : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector BBKeyTargetEnemy; // Offset: 0x60 // Size: 0x28
	float CheckRadiusXY; // Offset: 0x88 // Size: 0x04
	float CheckRadiusZ; // Offset: 0x8c // Size: 0x04
	float OcclusionPadAngle; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_IsSkillReady
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_IsSkillReady : UBTDecorator {
	// Fields
	IntProperty SkillID; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_IsWayPointNeedRotate
// Size: 0x88 // Inherited bytes: 0x60
struct UBTDecorator_IsWayPointNeedRotate : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector CurrentEventWayPointActor; // Offset: 0x60 // Size: 0x28
};

// Object Name: Class AI.BTDecorator_ItemNumberCheck
// Size: 0x68 // Inherited bytes: 0x60
struct UBTDecorator_ItemNumberCheck : UBTDecorator {
	// Fields
	enum class EItemNumCheckType checkType; // Offset: 0x5a // Size: 0x01
	IntProperty ItemId; // Offset: 0x5c // Size: 0x04
	IntProperty ItemNum; // Offset: 0x60 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_Mob_CheckJump
// Size: 0xa8 // Inherited bytes: 0x88
struct UBTDecorator_Mob_CheckJump : UBTDecorator_BlackboardBase {
	// Fields
	IntProperty RandomReachablePointRadius; // Offset: 0x88 // Size: 0x04
	struct FVector2D JumpHighRange; // Offset: 0x8c // Size: 0x08
	struct FVector2D JumpLowRange; // Offset: 0x94 // Size: 0x08
	IntProperty JumpStartOffsetZ; // Offset: 0x9c // Size: 0x04
	IntProperty JumpHighThreshold; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_Mob_CheckJumpToLowDirect
// Size: 0x98 // Inherited bytes: 0x88
struct UBTDecorator_Mob_CheckJumpToLowDirect : UBTDecorator_BlackboardBase {
	// Fields
	float JumpToLowThreshold; // Offset: 0x88 // Size: 0x04
	float CheckDistance; // Offset: 0x8c // Size: 0x04
	float JumpToLowSpeed; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_Mob_CheckObstacle
// Size: 0x90 // Inherited bytes: 0x88
struct UBTDecorator_Mob_CheckObstacle : UBTDecorator_BlackboardBase {
	// Fields
	IntProperty CheckDistance; // Offset: 0x88 // Size: 0x04
	IntProperty BackDistance; // Offset: 0x8c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_Mob_CloseEnough
// Size: 0x90 // Inherited bytes: 0x88
struct UBTDecorator_Mob_CloseEnough : UBTDecorator_BlackboardBase {
	// Fields
	float AcceptableDistance; // Offset: 0x88 // Size: 0x04
	bool bCheckDistanceIn2D; // Offset: 0x8c // Size: 0x01
	bool bReachTestIncludesAgentRadius; // Offset: 0x8d // Size: 0x01
	bool bReachTestIncludesGoalRadius; // Offset: 0x8e // Size: 0x01
	bool bCheckInTick; // Offset: 0x8f // Size: 0x01
};

// Object Name: Class AI.BTDecorator_Mob_HasAIState
// Size: 0x78 // Inherited bytes: 0x60
struct UBTDecorator_Mob_HasAIState : UBTDecorator {
	// Fields
	enum class EBPAIState AIState; // Offset: 0x5a // Size: 0x01
	struct TArray<enum class EBPAIState> AdditionalStates; // Offset: 0x60 // Size: 0x10
	enum class EMobHasAIStateLogic LogicOp; // Offset: 0x70 // Size: 0x01
	char pad_0x72[0x6]; // Offset: 0x72 // Size: 0x06
};

// Object Name: Class AI.BTDecorator_Mob_IsTargetAbove
// Size: 0x90 // Inherited bytes: 0x88
struct UBTDecorator_Mob_IsTargetAbove : UBTDecorator_BlackboardBase {
	// Fields
	float AcceptableDistance; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_Mob_LineTrace
// Size: 0x98 // Inherited bytes: 0x88
struct UBTDecorator_Mob_LineTrace : UBTDecorator_BlackboardBase {
	// Fields
	struct TArray<enum class ECollisionChannel> traceObjectTypes; // Offset: 0x88 // Size: 0x10
};

// Object Name: Class AI.BTDecorator_Mob_LinkCheckJumpWall
// Size: 0x90 // Inherited bytes: 0x88
struct UBTDecorator_Mob_LinkCheckJumpWall : UBTDecorator_BlackboardBase {
	// Fields
	IntProperty KeepDistance; // Offset: 0x88 // Size: 0x04
	float LineTraceHeightOffset; // Offset: 0x8c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_Mob_Once
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_Mob_Once : UBTDecorator {
	// Fields
	IntProperty AllowTimes; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_NearTargetLoc
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_NearTargetLoc : UBTDecorator {
	// Fields
	float Range; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_NewCoolDown
// Size: 0x68 // Inherited bytes: 0x60
struct UBTDecorator_NewCoolDown : UBTDecorator_Cooldown {
	// Fields
	bool DoNotCoolDownWhenSubNodeFailed; // Offset: 0x60 // Size: 0x01
	bool bEnableInitializeCoolDown; // Offset: 0x61 // Size: 0x01
	char pad_0x62[0x6]; // Offset: 0x62 // Size: 0x06
};

// Object Name: Class AI.BTDecorator_NewSatisfyAttkDist
// Size: 0x68 // Inherited bytes: 0x60
struct UBTDecorator_NewSatisfyAttkDist : UBTDecorator {
	// Fields
	float DefaultAttackDist; // Offset: 0x5c // Size: 0x04
	bool bIsInversed; // Offset: 0x60 // Size: 0x01
	float ExtraDistance; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_PreCheckLaunchMove
// Size: 0xe8 // Inherited bytes: 0x60
struct UBTDecorator_PreCheckLaunchMove : UBTDecorator {
	// Fields
	bool bUseCustomDestLocation; // Offset: 0x5a // Size: 0x01
	struct FBlackboardKeySelector KeyLaunchToTarget; // Offset: 0x60 // Size: 0x28
	float CustomDestDirAngle; // Offset: 0x88 // Size: 0x04
	float CustomDestDistance; // Offset: 0x8c // Size: 0x04
	bool UsePawnHalfHeightAsOffsetOfTargetLocation; // Offset: 0x90 // Size: 0x01
	char pad_0x92[0x2]; // Offset: 0x92 // Size: 0x02
	struct FVector OffsetOfTargetLocation; // Offset: 0x94 // Size: 0x0c
	struct FVector2D JumpSpeedRange; // Offset: 0xa0 // Size: 0x08
	float JumpSpeedInterval; // Offset: 0xa8 // Size: 0x04
	enum class ESuggestProjVelocityTraceOption JumpProjTraceType; // Offset: 0xac // Size: 0x01
	char pad_0xAD[0x3]; // Offset: 0xad // Size: 0x03
	float OverrideGravityZ; // Offset: 0xb0 // Size: 0x04
	float CollisionRadius; // Offset: 0xb4 // Size: 0x04
	bool bFavorHighArc; // Offset: 0xb8 // Size: 0x01
	bool bDrawDebug; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x6]; // Offset: 0xba // Size: 0x06
	struct FBlackboardKeySelector OutJumpVelocityBlackboardKey; // Offset: 0xc0 // Size: 0x28
};

// Object Name: Class AI.BTDecorator_Probability
// Size: 0xb8 // Inherited bytes: 0x60
struct UBTDecorator_Probability : UBTDecorator {
	// Fields
	float ExecuteProbability; // Offset: 0x5c // Size: 0x04
	bool bUseDifficultyLevel; // Offset: 0x60 // Size: 0x01
	char pad_0x65[0x3]; // Offset: 0x65 // Size: 0x03
	MapProperty DifficultyProbabilityCfg; // Offset: 0x68 // Size: 0x50
};

// Object Name: Class AI.AIQueryShapeDesc_Base
// Size: 0x28 // Inherited bytes: 0x28
struct UAIQueryShapeDesc_Base : UObject {
};

// Object Name: Class AI.AIQueryShapeDesc_Cylinder
// Size: 0x48 // Inherited bytes: 0x28
struct UAIQueryShapeDesc_Cylinder : UAIQueryShapeDesc_Base {
	// Fields
	struct FVector CenterOffset; // Offset: 0x28 // Size: 0x0c
	float RadiusOutside; // Offset: 0x34 // Size: 0x04
	float RadiusInside; // Offset: 0x38 // Size: 0x04
	float Height; // Offset: 0x3c // Size: 0x04
	float Angle; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_QueryTarget
// Size: 0xd8 // Inherited bytes: 0x60
struct UBTDecorator_QueryTarget : UBTDecorator {
	// Fields
	struct UAIQueryShapeDesc_Base* QueryShape; // Offset: 0x60 // Size: 0x08
	char bUsePawnLocationAsCenter : 1; // Offset: 0x68 // Size: 0x01
	char pad_0x68_1 : 7; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x3]; // Offset: 0x69 // Size: 0x03
	IntProperty AcceptPlayerCount; // Offset: 0x6c // Size: 0x04
	char bSavePawnCount : 1; // Offset: 0x70 // Size: 0x01
	char pad_0x70_1 : 7; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	struct FBlackboardKeySelector nSavePawnCount; // Offset: 0x78 // Size: 0x28
	struct FBlackboardKeySelector CenterLocationFromBBD; // Offset: 0xa0 // Size: 0x28
	struct FVector TargetAnchorOffset; // Offset: 0xc8 // Size: 0x0c
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
};

// Object Name: Class AI.BTDecorator_RandomStrategy
// Size: 0xd8 // Inherited bytes: 0x60
struct UBTDecorator_RandomStrategy : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector StrategyKey; // Offset: 0x60 // Size: 0x28
	MapProperty StrategyWeight; // Offset: 0x88 // Size: 0x50
};

// Object Name: Class AI.BTDecorator_SatisfyAttkDist
// Size: 0x68 // Inherited bytes: 0x60
struct UBTDecorator_SatisfyAttkDist : UBTDecorator {
	// Fields
	float AttackDist; // Offset: 0x5c // Size: 0x04
	bool bIsInversed; // Offset: 0x60 // Size: 0x01
	char pad_0x65[0x3]; // Offset: 0x65 // Size: 0x03
};

// Object Name: Class AI.BTDecorator_SatisfyAttkDistWithWeapon
// Size: 0xb8 // Inherited bytes: 0x60
struct UBTDecorator_SatisfyAttkDistWithWeapon : UBTDecorator {
	// Fields
	float DefaultAttackDist; // Offset: 0x5c // Size: 0x04
	bool bIsInversed; // Offset: 0x60 // Size: 0x01
	float ExtraDistance; // Offset: 0x64 // Size: 0x04
	MapProperty WeaponTypeRange; // Offset: 0x68 // Size: 0x50
};

// Object Name: Class AI.BTDecorator_TargetEnemyLandedTimeCheck
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_TargetEnemyLandedTimeCheck : UBTDecorator {
	// Fields
	float LandedCheckTime; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AI.BTDecorator_TargetHasBuff
// Size: 0xa0 // Inherited bytes: 0x60
struct UBTDecorator_TargetHasBuff : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector BBKTarget; // Offset: 0x60 // Size: 0x28
	struct TArray<IntProperty> BuffIDs; // Offset: 0x88 // Size: 0x10
	bool bRequireAll; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
};

// Object Name: Class AI.BTDecorator_WeaponTypeCheck
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_WeaponTypeCheck : UBTDecorator {
	// Fields
	enum class EWeaponTypeNew WeaponType; // Offset: 0x5a // Size: 0x01
};

// Object Name: Class AI.BTService_AdvancedShooting
// Size: 0xf8 // Inherited bytes: 0x68
struct UBTService_AdvancedShooting : UBTService {
	// Fields
	enum class EAIWeaponShootType WeaponShotType; // Offset: 0x61 // Size: 0x01
	float DeviationScale; // Offset: 0x64 // Size: 0x04
	float ShootGunDeviationAngle; // Offset: 0x68 // Size: 0x04
	struct FVector2D RandomShootFreqRange; // Offset: 0x6c // Size: 0x08
	struct FBlackboardKeySelector ReloadBlackBoardKey; // Offset: 0x78 // Size: 0x28
	bool bSetCanSeeTargetFlag; // Offset: 0xa0 // Size: 0x01
	bool bUseTargetEnemyCfg; // Offset: 0xa1 // Size: 0x01
	bool bNeedCheckBullets; // Offset: 0xa2 // Size: 0x01
	struct FVector2D ShootUpDownRange; // Offset: 0xa4 // Size: 0x08
	float TargetWidth; // Offset: 0xac // Size: 0x04
	struct FVector2D ShootLeftRightRange; // Offset: 0xb0 // Size: 0x08
	struct FVector2D ShootLeftRightRangeDistance; // Offset: 0xb8 // Size: 0x08
	struct FVector2D ShootTargetSpeedRange; // Offset: 0xc0 // Size: 0x08
	struct FVector2D ShootTargetDistanceRangeDueToSpeed; // Offset: 0xc8 // Size: 0x08
	bool bForceUseAIControllerRotation; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	float HitRateLerpSpeed; // Offset: 0xd4 // Size: 0x04
	bool bUseLerpHitRate; // Offset: 0xd8 // Size: 0x01
	bool bMissOnPurpose; // Offset: 0xd9 // Size: 0x01
	char pad_0xDA[0x2]; // Offset: 0xda // Size: 0x02
	float ScaleForHitPart; // Offset: 0xdc // Size: 0x04
	bool bStopShootingWhenCannotSee; // Offset: 0xe0 // Size: 0x01
	bool bEnableShootProbabilityCompensate; // Offset: 0xe1 // Size: 0x01
	char pad_0xE2[0x6]; // Offset: 0xe2 // Size: 0x06
	struct UCurveFloat* LowSpeedScaleShootProbabilityCurve; // Offset: 0xe8 // Size: 0x08
	bool bShowDebugLine; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	float LineLifeTime; // Offset: 0xf4 // Size: 0x04
};

// Object Name: Class AI.BTService_CheckAttackTarget
// Size: 0x70 // Inherited bytes: 0x68
struct UBTService_CheckAttackTarget : UBTService {
	// Fields
	float SensedRadius; // Offset: 0x64 // Size: 0x04
	float EquipWeaponSensedRadius; // Offset: 0x68 // Size: 0x04
};

// Object Name: Class AI.BTService_CheckInAIBehaviorRegion
// Size: 0xc0 // Inherited bytes: 0x68
struct UBTService_CheckInAIBehaviorRegion : UBTService {
	// Fields
	struct FBlackboardKeySelector BBKeyIsOutOfMaxDistance; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector BBKeySpawnPoint; // Offset: 0x90 // Size: 0x28
	bool bClearEnemyTargetWhenOutOfMaxDist; // Offset: 0xb8 // Size: 0x01
	bool bUseAIMaxMoveDistanceVolume; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x2]; // Offset: 0xba // Size: 0x02
	float HeightTestOffset; // Offset: 0xbc // Size: 0x04
};

// Object Name: Class AI.BTService_CheckMaxDistanceFromSpawnPoint
// Size: 0xc8 // Inherited bytes: 0x68
struct UBTService_CheckMaxDistanceFromSpawnPoint : UBTService {
	// Fields
	float MaxDistAllowedFromSpawnPoint; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector BBKeyIsOutOfMaxDistance; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector BBKeySpawnPoint; // Offset: 0x90 // Size: 0x28
	bool bClearEnemyTargetWhenOutOfMaxDist; // Offset: 0xb8 // Size: 0x01
	bool bUseAIMaxMoveDistanceVolume; // Offset: 0xb9 // Size: 0x01
	float HeightTestOffset; // Offset: 0xbc // Size: 0x04
	float HeightTestZOffset; // Offset: 0xc0 // Size: 0x04
	char pad_0xC6[0x2]; // Offset: 0xc6 // Size: 0x02
};

// Object Name: Class AI.BTService_CheckMaxDistanceFromTargetPoint
// Size: 0xc0 // Inherited bytes: 0x68
struct UBTService_CheckMaxDistanceFromTargetPoint : UBTService {
	// Fields
	float MaxDistAllowedFromWayPoint; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector BBKeyIsOutOfMaxDistance; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector BBKeyTargetPoint; // Offset: 0x90 // Size: 0x28
	bool bClearEnemyTargetWhenOutOfMaxDist; // Offset: 0xb8 // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
};

// Object Name: Class AI.BTService_ChooseEnemy
// Size: 0x1e8 // Inherited bytes: 0x68
struct UBTService_ChooseEnemy : UBTService {
	// Fields
	enum class EChooseEnemySearchMethod searchEnemyMethod; // Offset: 0x61 // Size: 0x01
	struct FBlackboardKeySelector BBKeySearchEnemyMethodIndex; // Offset: 0x68 // Size: 0x28
	float MaxRememberEnemyTimeInSeconds; // Offset: 0x90 // Size: 0x04
	float MaxRememberLastAttackedMeTimeInSeconds; // Offset: 0x94 // Size: 0x04
	float MaxTraceLastAttackedMeDistance; // Offset: 0x98 // Size: 0x04
	float MinTimeWhenCannotSeeTarget; // Offset: 0x9c // Size: 0x04
	float MinTimeLockTarget; // Offset: 0xa0 // Size: 0x04
	float SensedRadius; // Offset: 0xa4 // Size: 0x04
	float EquipWeaponSensedRadius; // Offset: 0xa8 // Size: 0x04
	float EquipWeaponNightSensedRadius; // Offset: 0xac // Size: 0x04
	float EmergencyRadius; // Offset: 0xb0 // Size: 0x04
	char pad_0xB5[0x3]; // Offset: 0xb5 // Size: 0x03
	struct TArray<struct FWeaponType2Range> WeaponType2Ranges; // Offset: 0xb8 // Size: 0x10
	struct TArray<struct FWeaponTypeToRange> DefaultWeaponTypeToRanges; // Offset: 0xc8 // Size: 0x10
	MapProperty WeatherToRange; // Offset: 0xd8 // Size: 0x50
	MapProperty WeatherTypeToWeatherRange; // Offset: 0x128 // Size: 0x50
	float PVESensedRadius; // Offset: 0x178 // Size: 0x04
	float FinalCircleSensedRate; // Offset: 0x17c // Size: 0x04
	float UnderGroundSensedRate; // Offset: 0x180 // Size: 0x04
	float DarkAreaSensedRate; // Offset: 0x184 // Size: 0x04
	float FinalCircleAIPriorityDistSqRate; // Offset: 0x188 // Size: 0x04
	bool bEnableWarning; // Offset: 0x18c // Size: 0x01
	char pad_0x18D[0x3]; // Offset: 0x18d // Size: 0x03
	float WarningCD; // Offset: 0x190 // Size: 0x04
	bool bEnableSmokingVisibilityCheck; // Offset: 0x194 // Size: 0x01
	enum class ECollisionChannel SmokingVisibilityCheckChannel; // Offset: 0x195 // Size: 0x01
	char pad_0x196[0x2]; // Offset: 0x196 // Size: 0x02
	struct FName SmokingVisibilityCheckTag; // Offset: 0x198 // Size: 0x08
	bool bEnablePeekShootingCheck; // Offset: 0x1a0 // Size: 0x01
	bool bEnablePeekShootingCheckAtOcclusion; // Offset: 0x1a1 // Size: 0x01
	char pad_0x1A2[0x2]; // Offset: 0x1a2 // Size: 0x02
	float PeekShootingCheckAtOcclusionOfOcclusionRadius; // Offset: 0x1a4 // Size: 0x04
	struct TArray<enum class EAIShootingPose> PeekShootingCheckArray_Stand; // Offset: 0x1a8 // Size: 0x10
	struct TArray<enum class EAIShootingPose> PeekShootingCheckArray_Crouch; // Offset: 0x1b8 // Size: 0x10
	bool DoNotAttackNearDeathEnemyFirst; // Offset: 0x1c8 // Size: 0x01
	bool bIgnoreAIWhenNoPlayerAround; // Offset: 0x1c9 // Size: 0x01
	char pad_0x1CA[0x2]; // Offset: 0x1ca // Size: 0x02
	float IgnoreAIRadius; // Offset: 0x1cc // Size: 0x04
	bool bClearEnemyWhenSameTeam; // Offset: 0x1d0 // Size: 0x01
	bool bSenseZombie; // Offset: 0x1d1 // Size: 0x01
	bool bCheckZombieTeam; // Offset: 0x1d2 // Size: 0x01
	bool bSelectEnemyInSafety; // Offset: 0x1d3 // Size: 0x01
	bool bShowDebugInfo; // Offset: 0x1d4 // Size: 0x01
	char pad_0x1D5[0x3]; // Offset: 0x1d5 // Size: 0x03
	float DebugInfoLife; // Offset: 0x1d8 // Size: 0x04
	float DebugRadius; // Offset: 0x1dc // Size: 0x04
	bool bIsBornLandFindEnemy; // Offset: 0x1e0 // Size: 0x01
	char pad_0x1E1[0x7]; // Offset: 0x1e1 // Size: 0x07
};

// Object Name: Class AI.BTService_ChooseEnemyByShape
// Size: 0x200 // Inherited bytes: 0x1e8
struct UBTService_ChooseEnemyByShape : UBTService_ChooseEnemy {
	// Fields
	struct TArray<struct FWeaponTypeToRangeWithPawnState> WeaponTypeToRangeWithPawnStates; // Offset: 0x1e8 // Size: 0x10
	bool bUseVisibilityTrace; // Offset: 0x1f8 // Size: 0x01
	bool bNotValidWeaponRangeForeTrue; // Offset: 0x1f9 // Size: 0x01
	char pad_0x1FA[0x6]; // Offset: 0x1fa // Size: 0x06
};

// Object Name: Class AI.BTService_ChooseEnemySingleTraining
// Size: 0x1e8 // Inherited bytes: 0x1e8
struct UBTService_ChooseEnemySingleTraining : UBTService_ChooseEnemy {
	// Fields
	char bIgnoreVisibility : 1; // Offset: 0x1e1 // Size: 0x01
};

// Object Name: Class AI.BTService_ChooseFightbackEnemy
// Size: 0x70 // Inherited bytes: 0x68
struct UBTService_ChooseFightbackEnemy : UBTService {
	// Fields
	float SensedRadius; // Offset: 0x64 // Size: 0x04
	float EquipWeaponSensedRadius; // Offset: 0x68 // Size: 0x04
	float EmergencyRadius; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTService_ChooseMonsterEnemy
// Size: 0xa0 // Inherited bytes: 0x68
struct UBTService_ChooseMonsterEnemy : UBTService {
	// Fields
	float SensedRadius; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector BBKeyMonsterTarget; // Offset: 0x68 // Size: 0x28
	struct TArray<IntProperty> SupportedMonsterIDs; // Offset: 0x90 // Size: 0x10
};

// Object Name: Class AI.BTService_ChooseTeammate
// Size: 0x90 // Inherited bytes: 0x68
struct UBTService_ChooseTeammate : UBTService {
	// Fields
	enum class EAISearchTeammateType SearchMethod; // Offset: 0x61 // Size: 0x01
	float SensedRadius; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector OutTeammateBlackboardKey; // Offset: 0x68 // Size: 0x28
};

// Object Name: Class AI.BTService_CJChooseEnemy
// Size: 0x170 // Inherited bytes: 0x68
struct UBTService_CJChooseEnemy : UBTService {
	// Fields
	bool bUpdateItemOptimize; // Offset: 0x61 // Size: 0x01
	struct TArray<struct FUpdateItemInterval> UpdateItemIntervalList; // Offset: 0x68 // Size: 0x10
	struct FBlackboardKeySelector OutTargetEnemyActor; // Offset: 0x78 // Size: 0x28
	struct FBlackboardKeySelector OutIsCanNotSeeTarget; // Offset: 0xa0 // Size: 0x28
	float MaxRememberLastAttackedMeTimeInSeconds; // Offset: 0xc8 // Size: 0x04
	IntProperty MaxTraceLastAttackedMeDistance; // Offset: 0xcc // Size: 0x04
	struct TArray<struct FEnemyInfo> EnemyInfoList; // Offset: 0xd0 // Size: 0x10
	float MinTimeLockTarget; // Offset: 0xe0 // Size: 0x04
	float MinTimeWhenCannotSeeTarget; // Offset: 0xe4 // Size: 0x04
	IntProperty SensedRadius; // Offset: 0xe8 // Size: 0x04
	IntProperty EquipWeaponSensedRadius; // Offset: 0xec // Size: 0x04
	bool bUseFanChoose; // Offset: 0xf0 // Size: 0x01
	char pad_0xF2[0x6]; // Offset: 0xf2 // Size: 0x06
	struct TArray<struct FSightFanInfo> FanInfoList; // Offset: 0xf8 // Size: 0x10
	bool bFindNearestEnemyPawn; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x7]; // Offset: 0x109 // Size: 0x07
	struct FBlackboardKeySelector OutNearestEnemyPawnVisible; // Offset: 0x110 // Size: 0x28
	struct FBlackboardKeySelector OutNearestEnemyPawnInVisible; // Offset: 0x138 // Size: 0x28
	float NearestEnemyVisibleMemoryTime; // Offset: 0x160 // Size: 0x04
	IntProperty SensedNearestEnemyVisibleRadius; // Offset: 0x164 // Size: 0x04
	IntProperty SensedNearestEnemyInVisibleRadius; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x4]; // Offset: 0x16c // Size: 0x04
};

// Object Name: Class AI.BTService_ClearTrouble
// Size: 0x90 // Inherited bytes: 0x68
struct UBTService_ClearTrouble : UBTService {
	// Fields
	bool bOpenAIClearTrouble; // Offset: 0x61 // Size: 0x01
	float PathFindTestRadius; // Offset: 0x64 // Size: 0x04
	uint32_t UnreachablePointsToBeInTrouble; // Offset: 0x68 // Size: 0x04
	struct UNavigationQueryFilter* TestPathFilterClass; // Offset: 0x70 // Size: 0x08
	struct FInTroubleTeleportConfig TeleportCfg; // Offset: 0x78 // Size: 0x10
	bool bShowDebugPoint; // Offset: 0x88 // Size: 0x01
	char pad_0x8A[0x6]; // Offset: 0x8a // Size: 0x06
};

// Object Name: Class AI.BTService_Cruising
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_Cruising : UBTService {
};

// Object Name: Class AI.BTService_DebugInfo
// Size: 0x80 // Inherited bytes: 0x68
struct UBTService_DebugInfo : UBTService {
	// Fields
	StrProperty Info; // Offset: 0x68 // Size: 0x10
	bool bShowControllerName; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07

	// Functions

	// Object Name: Function AI.BTService_DebugInfo.GetInfo
	// Flags: [Native|Event|Protected|BlueprintCallable|BlueprintEvent]
	StrProperty GetInfo(); // Offset: 0x103ef9e7c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AI.BTService_DeliverControl
// Size: 0x78 // Inherited bytes: 0x68
struct UBTService_DeliverControl : UBTService {
	// Fields
	struct TArray<struct FDeliverControlRatingConfig> RatingConfig; // Offset: 0x68 // Size: 0x10
};

// Object Name: Class AI.BTService_DetectVehicle
// Size: 0xc0 // Inherited bytes: 0x68
struct UBTService_DetectVehicle : UBTService {
	// Fields
	float QueryRange; // Offset: 0x64 // Size: 0x04
	float DetectionRange; // Offset: 0x68 // Size: 0x04
	float DetectionAngle; // Offset: 0x6c // Size: 0x04
	struct FBlackboardKeySelector BBKeySensedVehicle; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector BBKeyResult; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTService_DetectVehicleRisk
// Size: 0x110 // Inherited bytes: 0x68
struct UBTService_DetectVehicleRisk : UBTService {
	// Fields
	float QueryRange; // Offset: 0x64 // Size: 0x04
	float DetectionRange; // Offset: 0x68 // Size: 0x04
	float SpeedThreshold; // Offset: 0x6c // Size: 0x04
	struct FBlackboardKeySelector SensedRiskyVehicle; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector RunawayPosition; // Offset: 0x98 // Size: 0x28
	struct FBlackboardKeySelector HasNearbyRiskyVehicle; // Offset: 0xc0 // Size: 0x28
	struct FBlackboardKeySelector IsRunningAway; // Offset: 0xe8 // Size: 0x28
};

// Object Name: Class AI.BTService_DistantJudge
// Size: 0xa8 // Inherited bytes: 0x68
struct UBTService_DistantJudge : UBTService {
	// Fields
	struct FBlackboardKeySelector WatchTargetBlackBoardKey; // Offset: 0x68 // Size: 0x28
	struct TArray<struct FAIDistantJudgeNoftify> DistantJudges; // Offset: 0x90 // Size: 0x10
	bool ResetModifyBBData; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x7]; // Offset: 0xa1 // Size: 0x07
};

// Object Name: Class AI.BTService_FightDecisionSystem
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_FightDecisionSystem : UBTService {
	// Fields
	float EnemyTraceRadius; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTService_FlyingChooseEnemy
// Size: 0x80 // Inherited bytes: 0x68
struct UBTService_FlyingChooseEnemy : UBTService {
	// Fields
	bool bIgnoreVisibility; // Offset: 0x61 // Size: 0x01
	bool bIgnoreAI; // Offset: 0x62 // Size: 0x01
	float SensedRadius; // Offset: 0x64 // Size: 0x04
	float SensedAngle; // Offset: 0x68 // Size: 0x04
	float MinTimeLockTarget; // Offset: 0x6c // Size: 0x04
	float MinTimeWhenCannotSeeTarget; // Offset: 0x70 // Size: 0x04
	float MaxRememberEnemyTimeInSeconds; // Offset: 0x74 // Size: 0x04
	bool bUseNewSetCurEnemy; // Offset: 0x78 // Size: 0x01
	char pad_0x7F[0x1]; // Offset: 0x7f // Size: 0x01
};

// Object Name: Class AI.BTService_FlyingTowerDefenseChooseEnemy
// Size: 0xd8 // Inherited bytes: 0x80
struct UBTService_FlyingTowerDefenseChooseEnemy : UBTService_FlyingChooseEnemy {
	// Fields
	bool bEnableTowerDefenseTargeting; // Offset: 0x79 // Size: 0x01
	float SwitchToPlayerThreshold; // Offset: 0x7c // Size: 0x04
	float SwitchBackThreshold; // Offset: 0x80 // Size: 0x04
	float HatredDecreaseSpeed; // Offset: 0x84 // Size: 0x04
	struct FBlackboardKeySelector DefendTargetKey; // Offset: 0x88 // Size: 0x28
	struct FBlackboardKeySelector AttackingPlayerFlagKey; // Offset: 0xb0 // Size: 0x28
};

// Object Name: Class AI.BTService_Focus
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTService_Focus : UBTService_DefaultFocus {
	// Fields
	enum class EAINewFocusPriority AIFocusPriority; // Offset: 0x91 // Size: 0x01
	bool ResetFocus; // Offset: 0x92 // Size: 0x01
	bool ClearFocusWhenCeaseRelevant; // Offset: 0x93 // Size: 0x01
	bool bAdjustByTargetPose; // Offset: 0x94 // Size: 0x01
	float FocusPointOffset_TargetCrouch; // Offset: 0x98 // Size: 0x04
	float FocusPointOffset_TargetProne; // Offset: 0x9c // Size: 0x04
	float FocusPointOffset_TargetStand; // Offset: 0xa0 // Size: 0x04
};

// Object Name: Class AI.BTService_HealthCheck
// Size: 0x90 // Inherited bytes: 0x68
struct UBTService_HealthCheck : UBTService {
	// Fields
	float HealthChangeVaule; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector HealthChangeBlackBoardKey; // Offset: 0x68 // Size: 0x28
};

// Object Name: Class AI.BTService_LookAround
// Size: 0x80 // Inherited bytes: 0x68
struct UBTService_LookAround : UBTService {
	// Fields
	struct FVector2D RotationSpeed; // Offset: 0x64 // Size: 0x08
	struct FVector2D RotationAngle; // Offset: 0x6c // Size: 0x08
	struct FVector2D WaitTimeWhenStop; // Offset: 0x74 // Size: 0x08
	float AcceptToleranceInDegree; // Offset: 0x7c // Size: 0x04
};

// Object Name: Class AI.BTService_Mob_AddHp
// Size: 0x70 // Inherited bytes: 0x68
struct UBTService_Mob_AddHp : UBTService {
	// Fields
	IntProperty BuffID_AddHP; // Offset: 0x64 // Size: 0x04
	enum class EMobAddHPServiceType addHPType; // Offset: 0x68 // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
};

// Object Name: Class AI.BTService_Mob_AdvancedMovementDetector
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_Mob_AdvancedMovementDetector : UBTService {
};

// Object Name: Class AI.BTService_Mob_AutoDestroy
// Size: 0x70 // Inherited bytes: 0x68
struct UBTService_Mob_AutoDestroy : UBTService {
	// Fields
	float CheckRadius; // Offset: 0x64 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTService_Mob_CheckLocation
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_Mob_CheckLocation : UBTService {
	// Fields
	float MaxAllowedDistanceFromSpawnPointSq; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTService_Mob_CheckLoseTarget
// Size: 0x70 // Inherited bytes: 0x68
struct UBTService_Mob_CheckLoseTarget : UBTService {
	// Fields
	float LoseTargetThreshold; // Offset: 0x64 // Size: 0x04
	char bCheckNoPlayerNearby : 1; // Offset: 0x68 // Size: 0x01
	float CheckNoPlayerRange; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTService_Mob_CheckPathExist
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_Mob_CheckPathExist : UBTService {
};

// Object Name: Class AI.BTService_Mob_ChooseEnemy
// Size: 0xd0 // Inherited bytes: 0x68
struct UBTService_Mob_ChooseEnemy : UBTService {
	// Fields
	float MaxRememberEnemyTimeInSeconds; // Offset: 0x64 // Size: 0x04
	float MinTimeLockTarget; // Offset: 0x68 // Size: 0x04
	float MinTimeWhenCannotSeeTarget; // Offset: 0x6c // Size: 0x04
	float SensedRadius; // Offset: 0x70 // Size: 0x04
	enum class EAISearchEnemyType searchType; // Offset: 0x74 // Size: 0x01
	float SensedAngle; // Offset: 0x78 // Size: 0x04
	bool SenseEnemyWithLineTrace; // Offset: 0x7c // Size: 0x01
	char pad_0x7E[0x2]; // Offset: 0x7e // Size: 0x02
	float PreciseHatredDecreaseSpeed; // Offset: 0x80 // Size: 0x04
	bool SensedRadiusAdvanceInNight; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	float LoseSightRadius; // Offset: 0x88 // Size: 0x04
	bool DontAttackWhenTargetInWater; // Offset: 0x8c // Size: 0x01
	bool bEnableWarning; // Offset: 0x8d // Size: 0x01
	char pad_0x8E[0x2]; // Offset: 0x8e // Size: 0x02
	float WarningCD; // Offset: 0x90 // Size: 0x04
	float AttackVehicleInRadius; // Offset: 0x94 // Size: 0x04
	bool AttackVehicleInRadiusEnabled; // Offset: 0x98 // Size: 0x01
	enum class EAISearchEnemyType searchVehicleType; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x6]; // Offset: 0x9a // Size: 0x06
	struct TArray<enum class ESTExtraVehicleShapeType> IgnoreVehicleTypes; // Offset: 0xa0 // Size: 0x10
	struct FName IgnoreTargetIfHasTag; // Offset: 0xb0 // Size: 0x08
	bool bSelectEnemyInSafety; // Offset: 0xb8 // Size: 0x01
	char bDoNotAttackNearDeathEnemyFirst : 1; // Offset: 0xb9 // Size: 0x01
	char bIgnoreNearDeathEnemy : 1; // Offset: 0xb9 // Size: 0x01
	char pad_0xB9_2 : 6; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0xe]; // Offset: 0xba // Size: 0x0e
	struct ASTExtraSimpleCharacter* ControlledMobPawn; // Offset: 0xc8 // Size: 0x08
};

// Object Name: Class AI.BTService_Mob_ChooseEnemyByRule
// Size: 0xd8 // Inherited bytes: 0xd0
struct UBTService_Mob_ChooseEnemyByRule : UBTService_Mob_ChooseEnemy {
	// Fields
	bool bSenseMonster; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
};

// Object Name: Class AI.BTService_Mob_ChooseEnemyBySingleRule
// Size: 0x108 // Inherited bytes: 0xd0
struct UBTService_Mob_ChooseEnemyBySingleRule : UBTService_Mob_ChooseEnemy {
	// Fields
	enum class EAISearchEnemySingleRule SearchEnemySingleRule; // Offset: 0xd0 // Size: 0x01
	enum class EAISearchEnemyEntityType SearchEnemyEntityType; // Offset: 0xd1 // Size: 0x01
	char pad_0xD2[0x6]; // Offset: 0xd2 // Size: 0x06
	struct FBlackboardKeySelector BBKeySearchEnemyMethodIndex; // Offset: 0xd8 // Size: 0x28
	char bRunBaseChooseEnemy : 1; // Offset: 0x100 // Size: 0x01
	char bForceUpdateTarget : 1; // Offset: 0x100 // Size: 0x01
	char pad_0x100_2 : 6; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x7]; // Offset: 0x101 // Size: 0x07
};

// Object Name: Class AI.BTService_Mob_DetectionEnemy
// Size: 0xd0 // Inherited bytes: 0xd0
struct UBTService_Mob_DetectionEnemy : UBTService_Mob_ChooseEnemy {
};

// Object Name: Class AI.BTService_Mob_Hearing
// Size: 0x78 // Inherited bytes: 0x68
struct UBTService_Mob_Hearing : UBTService {
	// Fields
	float MinTimeLockTarget; // Offset: 0x64 // Size: 0x04
	float MaxTimeLockWhenNoNextSound; // Offset: 0x68 // Size: 0x04
	enum class ENoiseSearchType searchType; // Offset: 0x6c // Size: 0x01
	float AcceptableDistance; // Offset: 0x70 // Size: 0x04
	char pad_0x75[0x3]; // Offset: 0x75 // Size: 0x03
};

// Object Name: Class AI.BTService_Mob_MoveBlockTimer
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_Mob_MoveBlockTimer : UBTService {
	// Fields
	float ClearBlockStatusTime; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTService_Mob_OpenDoor
// Size: 0x70 // Inherited bytes: 0x68
struct UBTService_Mob_OpenDoor : UBTService {
	// Fields
	float OpenDoorRangeSq; // Offset: 0x64 // Size: 0x04
	float AutoOpenDoorInterval; // Offset: 0x68 // Size: 0x04
};

// Object Name: Class AI.BTService_Mob_TowerDefenseChooseEnemy
// Size: 0x130 // Inherited bytes: 0xd0
struct UBTService_Mob_TowerDefenseChooseEnemy : UBTService_Mob_ChooseEnemy {
	// Fields
	bool bEnableTowerDefenseTargeting; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	float SwitchToPlayerThreshold; // Offset: 0xd4 // Size: 0x04
	float SwitchBackThreshold; // Offset: 0xd8 // Size: 0x04
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
	struct FBlackboardKeySelector DefendTargetKey; // Offset: 0xe0 // Size: 0x28
	struct FBlackboardKeySelector AttackingPlayerFlagKey; // Offset: 0x108 // Size: 0x28
};

// Object Name: Class AI.BTService_ModifyBlackboardValue
// Size: 0xe0 // Inherited bytes: 0x68
struct UBTService_ModifyBlackboardValue : UBTService {
	// Fields
	bool bEnterModifyBlackboardKey; // Offset: 0x61 // Size: 0x01
	struct FBlackboardKeySelector EnterModifyBlackboardKey; // Offset: 0x68 // Size: 0x28
	StrProperty EnterSetValue; // Offset: 0x90 // Size: 0x10
	bool bExitModifyBlackboardKey; // Offset: 0xa0 // Size: 0x01
	char pad_0xA2[0x6]; // Offset: 0xa2 // Size: 0x06
	struct FBlackboardKeySelector ExitModifyBlackboardKey; // Offset: 0xa8 // Size: 0x28
	StrProperty ExitSetValue; // Offset: 0xd0 // Size: 0x10
};

// Object Name: Class AI.BTService_OccupyHandler
// Size: 0xb8 // Inherited bytes: 0x68
struct UBTService_OccupyHandler : UBTService {
	// Fields
	struct FBlackboardKeySelector OutCurOccupyPointActor; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector OutIsOccupying; // Offset: 0x90 // Size: 0x28
};

// Object Name: Class AI.BTService_OpenDoor
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_OpenDoor : UBTService {
	// Fields
	float OpenDoorRange; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTService_QueryNearestTarget
// Size: 0xb8 // Inherited bytes: 0x68
struct UBTService_QueryNearestTarget : UBTService {
	// Fields
	float RadiusInArea; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector OutNearByPlayer; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector OutHasNearByPlayer; // Offset: 0x90 // Size: 0x28
};

// Object Name: Class AI.BTService_QueryPlayerHoldingWeapon
// Size: 0xb8 // Inherited bytes: 0x68
struct UBTService_QueryPlayerHoldingWeapon : UBTService {
	// Fields
	float RadiusInArea; // Offset: 0x64 // Size: 0x04
	struct FBlackboardKeySelector OutHasPlayerHoldingWeapon; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector OutPlayerWhichHoldingWeapon; // Offset: 0x90 // Size: 0x28
};

// Object Name: Class AI.BTService_RescueHandler
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_RescueHandler : UBTService {
	// Fields
	IntProperty RescueRange; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTService_SensedEnemy
// Size: 0xd0 // Inherited bytes: 0x68
struct UBTService_SensedEnemy : UBTService {
	// Fields
	float IsNotSeeTargetTime; // Offset: 0x64 // Size: 0x04
	float SensedRadius; // Offset: 0x68 // Size: 0x04
	float EquipWeaponSensedRadius; // Offset: 0x6c // Size: 0x04
	float EquipWeaponNightSensedRadius; // Offset: 0x70 // Size: 0x04
	float EmergencyRadius; // Offset: 0x74 // Size: 0x04
	MapProperty AISensedEnemyPoseRatio; // Offset: 0x78 // Size: 0x50
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
};

// Object Name: Class AI.BTService_SenseGrenade
// Size: 0x198 // Inherited bytes: 0x68
struct UBTService_SenseGrenade : UBTService {
	// Fields
	MapProperty GrenadeSenseEnable; // Offset: 0x68 // Size: 0x50
	struct TArray<struct FBPAISenseGrenadeDistanceConfig> SenseDistanceConfig; // Offset: 0xb8 // Size: 0x10
	MapProperty GrenadeClasses; // Offset: 0xc8 // Size: 0x50
	struct TArray<struct FAISenseGrenadeBBKeyInfo> GrenadeBBKeyConfig; // Offset: 0x118 // Size: 0x10
	struct TArray<enum class ECollisionChannel> GrenadeCollisionChannels; // Offset: 0x128 // Size: 0x10
	struct FBlackboardKeySelector BBKeyHasBeenFlashed; // Offset: 0x138 // Size: 0x28
	IntProperty FlashBombBuffID; // Offset: 0x160 // Size: 0x04
	char pad_0x164[0x4]; // Offset: 0x164 // Size: 0x04
	struct FBlackboardKeySelector BBKeyHasSensedGrenade; // Offset: 0x168 // Size: 0x28
	float StopVelocityThreshold; // Offset: 0x190 // Size: 0x04
	char pad_0x194[0x4]; // Offset: 0x194 // Size: 0x04
};

// Object Name: Class AI.BTService_Shooting
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_Shooting : UBTService {
	// Fields
	float DeviationScale; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AI.BTService_SimpleCheckBehindEnemy
// Size: 0xa0 // Inherited bytes: 0x68
struct UBTService_SimpleCheckBehindEnemy : UBTService {
	// Fields
	struct FBlackboardKeySelector IsFoundBehindEnemyKey; // Offset: 0x68 // Size: 0x28
	float SensedRadius; // Offset: 0x90 // Size: 0x04
	float SensedBehindAngle; // Offset: 0x94 // Size: 0x04
	float SensedHeightDiff; // Offset: 0x98 // Size: 0x04
	bool DontAttackWhenTargetInWater; // Offset: 0x9c // Size: 0x01
	bool SenseEnemyWithLineTrace; // Offset: 0x9d // Size: 0x01
	char pad_0x9E[0x2]; // Offset: 0x9e // Size: 0x02
};

// Object Name: Class AI.BTService_SimpleShooting
// Size: 0x80 // Inherited bytes: 0x68
struct UBTService_SimpleShooting : UBTService {
	// Fields
	float DeviationScale; // Offset: 0x64 // Size: 0x04
	struct FVector2D ShootUpDownRange; // Offset: 0x68 // Size: 0x08
	struct FVector2D RandomShootFreqRange; // Offset: 0x70 // Size: 0x08
	bool bShowDebugLine; // Offset: 0x78 // Size: 0x01
	float LineLifeTime; // Offset: 0x7c // Size: 0x04
};

// Object Name: Class AI.BTService_Tank_RotateTurret
// Size: 0xc8 // Inherited bytes: 0x68
struct UBTService_Tank_RotateTurret : UBTService {
	// Fields
	char bResetRotation : 1; // Offset: 0x61 // Size: 0x01
	char bAimingTarget : 1; // Offset: 0x61 // Size: 0x01
	struct FBlackboardKeySelector BBKeyAimingTarget; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector BBKeyAimingFinished; // Offset: 0x90 // Size: 0x28
	float AimingLockRange; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC_2 : 6; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
	struct UAIBehaviorAdapter_Tank* OwnerAdapter; // Offset: 0xc0 // Size: 0x08
};

// Object Name: Class AI.BTService_Tank_Shooting
// Size: 0xc0 // Inherited bytes: 0x68
struct UBTService_Tank_Shooting : UBTService {
	// Fields
	char bForceUseMG : 1; // Offset: 0x61 // Size: 0x01
	char bForceUseTurret : 1; // Offset: 0x61 // Size: 0x01
	char bRecordCoolDownBBK : 1; // Offset: 0x61 // Size: 0x01
	struct FBlackboardKeySelector BBKeyShootingCD; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector BBKeyAimingFailed; // Offset: 0x90 // Size: 0x28
	struct UAIBehaviorAdapter_Tank* OwnerAdapter; // Offset: 0xb8 // Size: 0x08
};

// Object Name: Class AI.BTService_TargetAngleCheck
// Size: 0x98 // Inherited bytes: 0x68
struct UBTService_TargetAngleCheck : UBTService {
	// Fields
	float FocusTime; // Offset: 0x64 // Size: 0x04
	float FocusDegree; // Offset: 0x68 // Size: 0x04
	float DistanceSqr; // Offset: 0x6c // Size: 0x04
	struct FBlackboardKeySelector FocusState; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class AI.BTService_TargetEnemyHP
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_TargetEnemyHP : UBTService {
};

// Object Name: Class AI.BTService_TurnAround
// Size: 0x98 // Inherited bytes: 0x68
struct UBTService_TurnAround : UBTService {
	// Fields
	struct FBlackboardKeySelector OutTatget; // Offset: 0x68 // Size: 0x28
	float TurnAroundVelocity; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

// Object Name: Class AI.BTService_UseSkill
// Size: 0x98 // Inherited bytes: 0x68
struct UBTService_UseSkill : UBTService {
	// Fields
	IntProperty SkillID; // Offset: 0x64 // Size: 0x04
	float CoolDown; // Offset: 0x68 // Size: 0x04
	float CastSkillDistance; // Offset: 0x6c // Size: 0x04
	struct FBlackboardKeySelector SkillTargetBlackBoardKey; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class AI.BTService_VH_ChooseEnemy
// Size: 0x80 // Inherited bytes: 0x68
struct UBTService_VH_ChooseEnemy : UBTService {
	// Fields
	char bUseHatred : 1; // Offset: 0x61 // Size: 0x01
	char bOnlyPlayer : 1; // Offset: 0x61 // Size: 0x01
	enum class EVHQueryEnemyRule QueryEnemyRule; // Offset: 0x62 // Size: 0x01
	struct TArray<struct AActor*> IgnoreActorsClass; // Offset: 0x68 // Size: 0x10
	struct UAIBehaviorAdapter_VehicleBase* OwnerAdapter; // Offset: 0x78 // Size: 0x08
};

// Object Name: Class AI.BTService_WeaponHandler
// Size: 0x68 // Inherited bytes: 0x68
struct UBTService_WeaponHandler : UBTService {
};

// Object Name: Class AI.BTService_WeatherTimeCount
// Size: 0xc8 // Inherited bytes: 0x68
struct UBTService_WeatherTimeCount : UBTService {
	// Fields
	struct FBlackboardKeySelector StartCurrentWeatherCountDownBlackboardKey; // Offset: 0x68 // Size: 0x28
	struct FBlackboardKeySelector IsCurrentWeatherBlackboardKey; // Offset: 0x90 // Size: 0x28
	enum class EWeatherStatusType NewWeatherStatusType; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0xf]; // Offset: 0xb9 // Size: 0x0f
};

// Object Name: Class AI.BTTask_AddItem
// Size: 0xb0 // Inherited bytes: 0x70
struct UBTTask_AddItem : UBTTaskNode {
	// Fields
	struct TArray<struct FTaskAddItem> ItemDatas; // Offset: 0x70 // Size: 0x10
	char bItemIDUseBBK : 1; // Offset: 0x80 // Size: 0x01
	char pad_0x80_1 : 7; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
	struct FBlackboardKeySelector BlackboardKey; // Offset: 0x88 // Size: 0x28
};

// Object Name: Class AI.BTTask_AdvancedWait
// Size: 0xc8 // Inherited bytes: 0x78
struct UBTTask_AdvancedWait : UBTTask_Wait {
	// Fields
	bool bUseDifficultyLevel; // Offset: 0x74 // Size: 0x01
	MapProperty DifficultyTimeCfg; // Offset: 0x78 // Size: 0x50
};

// Object Name: Class AI.BTTask_AdvFindOcclusionPoint
// Size: 0x130 // Inherited bytes: 0x98
struct UBTTask_AdvFindOcclusionPoint : UBTTask_BlackboardBase {
	// Fields
	float SearchRadius; // Offset: 0x98 // Size: 0x04
	float UseLastPointRadius; // Offset: 0x9c // Size: 0x04
	struct FBlackboardKeySelector BBKeyOcclusionLocation; // Offset: 0xa0 // Size: 0x28
	bool bDebug; // Offset: 0xc8 // Size: 0x01
	bool bChoosePointByEnemy; // Offset: 0xc9 // Size: 0x01
	char pad_0xCA[0x2]; // Offset: 0xca // Size: 0x02
	float CirclePainThreshold; // Offset: 0xcc // Size: 0x04
	bool DoNotUseCurrentOcclusionFirst; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	float CurrentOcclusionRadius; // Offset: 0xd4 // Size: 0x04
	struct TArray<enum class EAIAdvFindOcclusionPointPoseType> AcceptableOcclusionTypeArray; // Offset: 0xd8 // Size: 0x10
	bool bUsePointNearSelfCompareToEnemy; // Offset: 0xe8 // Size: 0x01
	bool bUseNavMeshDistance; // Offset: 0xe9 // Size: 0x01
	char pad_0xEA[0x2]; // Offset: 0xea // Size: 0x02
	float MaxNavMeshSearchDistance; // Offset: 0xec // Size: 0x04
	enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod searchBestOcclusionMethod; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	float OcclusionPointChooseZFactor; // Offset: 0xf4 // Size: 0x04
	float OcclusionPointChooseBushFactor; // Offset: 0xf8 // Size: 0x04
	bool ChooseAttackableOcclusionFirst; // Offset: 0xfc // Size: 0x01
	char pad_0xFD[0x3]; // Offset: 0xfd // Size: 0x03
	float ChooseAttackableOcclusionFactor; // Offset: 0x100 // Size: 0x04
	float OcclusionPadAngle_Normal; // Offset: 0x104 // Size: 0x04
	float OcclusionPadAngle_Aggressive; // Offset: 0x108 // Size: 0x04
	bool ChooseAttackableOcclusionWithLineTrace; // Offset: 0x10c // Size: 0x01
	char pad_0x10D[0x3]; // Offset: 0x10d // Size: 0x03
	float SelfStandHalfHeight; // Offset: 0x110 // Size: 0x04
	bool ChooseTagOcclusionEnable; // Offset: 0x114 // Size: 0x01
	char pad_0x115[0x3]; // Offset: 0x115 // Size: 0x03
	StrProperty OcclusionTagForChosen; // Offset: 0x118 // Size: 0x10
	bool bIgnorePossibleAttackableOcclusion; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x7]; // Offset: 0x129 // Size: 0x07
};

// Object Name: Class AI.BTTask_AnimalFindDirectedPoint
// Size: 0xe8 // Inherited bytes: 0x70
struct UBTTask_AnimalFindDirectedPoint : UBTTaskNode {
	// Fields
	struct FVector2D DistanceRange; // Offset: 0x6c // Size: 0x08
	struct FVector2D AngleRange; // Offset: 0x74 // Size: 0x08
	float TraceHeightOffset; // Offset: 0x7c // Size: 0x04
	uint32_t TryFindLocNum; // Offset: 0x80 // Size: 0x04
	bool bDoWaterTest; // Offset: 0x84 // Size: 0x01
	bool bDoNavmeshProjectTest; // Offset: 0x85 // Size: 0x01
	struct UNavigationQueryFilter* ProjectFilterClass; // Offset: 0x88 // Size: 0x08
	bool bDoLimitFindPointArea; // Offset: 0x90 // Size: 0x01
	char pad_0x93[0x5]; // Offset: 0x93 // Size: 0x05
	struct FBlackboardKeySelector TargetBlackboardKey; // Offset: 0x98 // Size: 0x28
	struct FBlackboardKeySelector OutputBlackboardKey; // Offset: 0xc0 // Size: 0x28
};

// Object Name: Class AI.BTTask_AnimalFindRandomPoint
// Size: 0xf0 // Inherited bytes: 0x70
struct UBTTask_AnimalFindRandomPoint : UBTTaskNode {
	// Fields
	struct FVector2D SearchRadiusRange; // Offset: 0x6c // Size: 0x08
	float TraceHeightOffset; // Offset: 0x74 // Size: 0x04
	uint32_t TryFindLocNum; // Offset: 0x78 // Size: 0x04
	bool bDoNavmeshProjectTest; // Offset: 0x7c // Size: 0x01
	struct UNavigationQueryFilter* ProjectFilterClass; // Offset: 0x80 // Size: 0x08
	bool bDoOnlyStaticTrace; // Offset: 0x88 // Size: 0x01
	bool bDoWaterTest; // Offset: 0x89 // Size: 0x01
	bool bDoLimitFindPointArea; // Offset: 0x8a // Size: 0x01
	float CollisionExcludeAngle; // Offset: 0x8c // Size: 0x04
	bool bLimitResultInForwardAngle; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float LimitInForwardAngle; // Offset: 0x94 // Size: 0x04
	struct FBlackboardKeySelector CenterBlackboardKey; // Offset: 0x98 // Size: 0x28
	struct FBlackboardKeySelector OutputBlackboardKey; // Offset: 0xc0 // Size: 0x28
	bool bDebugDraw; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x3]; // Offset: 0xe9 // Size: 0x03
	float DebugDrawPointTime; // Offset: 0xec // Size: 0x04
};

// Object Name: Class AI.BTTask_AnimalMove
// Size: 0xd8 // Inherited bytes: 0xb0
struct UBTTask_AnimalMove : UBTTask_MoveTo {
	// Fields
	enum class EAnimalMovePose MovePose; // Offset: 0xae // Size: 0x01
	bool bRestorePoseWhenFinished; // Offset: 0xaf // Size: 0x01
	bool bOpenCollisionDetect; // Offset: 0xb0 // Size: 0x01
	char pad_0xB3[0x1]; // Offset: 0xb3 // Size: 0x01
	float CollisionDetectAdvancedTime; // Offset: 0xb4 // Size: 0x04
	float CollisionDetectFreq; // Offset: 0xb8 // Size: 0x04
	bool bUseSweep; // Offset: 0xbc // Size: 0x01
	enum class ECollisionChannel TraceChannel; // Offset: 0xbd // Size: 0x01
	bool bRandomAcceptableRadius; // Offset: 0xbe // Size: 0x01
	char pad_0xBF[0x1]; // Offset: 0xbf // Size: 0x01
	struct FVector2D RandomAcceptableRadiusRange; // Offset: 0xc0 // Size: 0x08
	bool MoveWithOutPathFinding; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x3]; // Offset: 0xc9 // Size: 0x03
	float MoveFailReviseLocationInterval; // Offset: 0xcc // Size: 0x04
	float MoveFailLocationSearchRadius; // Offset: 0xd0 // Size: 0x04
	bool bAsyncExecuteTask; // Offset: 0xd4 // Size: 0x01
	bool bShowTargetLoc; // Offset: 0xd5 // Size: 0x01
	bool bShowDetectLine; // Offset: 0xd6 // Size: 0x01
	char pad_0xD7[0x1]; // Offset: 0xd7 // Size: 0x01
};

// Object Name: Class AI.BTTask_AnimalTeleport
// Size: 0xd0 // Inherited bytes: 0x98
struct UBTTask_AnimalTeleport : UBTTask_BlackboardBase {
	// Fields
	float RangeMin; // Offset: 0x98 // Size: 0x04
	float RangeMax; // Offset: 0x9c // Size: 0x04
	bool bDoOnlyStaticTrace; // Offset: 0xa0 // Size: 0x01
	bool OnlyTeleportToLand; // Offset: 0xa1 // Size: 0x01
	bool NotTeleportToHouse; // Offset: 0xa2 // Size: 0x01
	char pad_0xA3[0x1]; // Offset: 0xa3 // Size: 0x01
	float OriginCheckRadius; // Offset: 0xa4 // Size: 0x04
	float DestCheckRadius; // Offset: 0xa8 // Size: 0x04
	float TraceHeightOffset; // Offset: 0xac // Size: 0x04
	float TargetLocZOffset; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct TArray<StrProperty> ValidTraceActorIncludeName; // Offset: 0xb8 // Size: 0x10
	IntProperty TryFindLocNum; // Offset: 0xc8 // Size: 0x04
	bool bForceSuccess; // Offset: 0xcc // Size: 0x01
	char pad_0xCD[0x3]; // Offset: 0xcd // Size: 0x03
};

// Object Name: Class AI.BTTask_BioVH_MoveTo
// Size: 0x138 // Inherited bytes: 0xb0
struct UBTTask_BioVH_MoveTo : UBTTask_MoveTo {
	// Fields
	float ModifyMoveSpeed; // Offset: 0xb0 // Size: 0x04
	char bCheckBlock : 1; // Offset: 0xb4 // Size: 0x01
	char pad_0xB4_1 : 7; // Offset: 0xb4 // Size: 0x01
	enum class EBioVHMoveType MoveType; // Offset: 0xb5 // Size: 0x01
	char bFaceToTarget : 1; // Offset: 0xb6 // Size: 0x01
	char pad_0xB6_1 : 7; // Offset: 0xb6 // Size: 0x01
	char pad_0xB7[0x1]; // Offset: 0xb7 // Size: 0x01
	float FaceToTargetToleranceAngle; // Offset: 0xb8 // Size: 0x04
	float MaxDurationStayStuck; // Offset: 0xbc // Size: 0x04
	float StuckSpeed; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
	struct FBlackboardKeySelector BBKey_OutBlocked; // Offset: 0xc8 // Size: 0x28
	struct FBlackboardKeySelector BBKey_OutCannotReach; // Offset: 0xf0 // Size: 0x28
	float MaxExecutionDuration; // Offset: 0x118 // Size: 0x04
	bool IsCheckStuckUseMovePenetration; // Offset: 0x11c // Size: 0x01
	char pad_0x11D[0x3]; // Offset: 0x11d // Size: 0x03
	IntProperty MoveStuckFrameCount; // Offset: 0x120 // Size: 0x04
	char pad_0x124[0x4]; // Offset: 0x124 // Size: 0x04
	struct ABioVehicleBase* BioVH; // Offset: 0x128 // Size: 0x08
	struct ABioVehicleAIController* BioVHAIC; // Offset: 0x130 // Size: 0x08
};

// Object Name: Class AI.BTTask_ChangeWalkSpeed
// Size: 0xa0 // Inherited bytes: 0x70
struct UBTTask_ChangeWalkSpeed : UBTTaskNode {
	// Fields
	enum class EMobWalkType iWalkType; // Offset: 0x69 // Size: 0x01
	bool bAccelerationConfig; // Offset: 0x6a // Size: 0x01
	struct FBlackboardKeySelector KeyDefaultMaxAcceleration; // Offset: 0x70 // Size: 0x28
	bool IsEnableAcceleration; // Offset: 0x98 // Size: 0x01
	char pad_0x9B[0x1]; // Offset: 0x9b // Size: 0x01
	float MaxAcceleration; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class AI.BTTask_ClearBlackboardData
// Size: 0x98 // Inherited bytes: 0x98
struct UBTTask_ClearBlackboardData : UBTTask_BlackboardBase {
};

// Object Name: Class AI.BTTask_ClearDelivery
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_ClearDelivery : UBTTaskNode {
};

// Object Name: Class AI.BTTask_ConvertActorToRotaion
// Size: 0xc0 // Inherited bytes: 0x70
struct UBTTask_ConvertActorToRotaion : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector ActorBlackboardKey; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector ToRotationKey; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTTask_CopyBlackboardData
// Size: 0xc0 // Inherited bytes: 0x70
struct UBTTask_CopyBlackboardData : UBTTaskNode {
	// Fields
	enum class EModifyBlackboardDataValueType ValueType; // Offset: 0x69 // Size: 0x01
	struct FBlackboardKeySelector SrcBlackboardKey; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector TargetBlackboardKey; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTTask_CrowdMove
// Size: 0xe8 // Inherited bytes: 0x98
struct UBTTask_CrowdMove : UBTTask_BlackboardBase {
	// Fields
	float StopMoveRadius; // Offset: 0x98 // Size: 0x04
	float UpdateDestIntervel; // Offset: 0x9c // Size: 0x04
	bool bOpenPredictMovement; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	float PredictMovementTime; // Offset: 0xa4 // Size: 0x04
	float ForceFacingTargetDist; // Offset: 0xa8 // Size: 0x04
	float TimeLimit; // Offset: 0xac // Size: 0x04
	bool bIsHalfFrame; // Offset: 0xb0 // Size: 0x01
	bool bSmoothLocation; // Offset: 0xb1 // Size: 0x01
	bool bSmoothRotation; // Offset: 0xb2 // Size: 0x01
	char pad_0xB3[0x1]; // Offset: 0xb3 // Size: 0x01
	float SmoothLocationTime; // Offset: 0xb4 // Size: 0x04
	float SmoothRotationTime; // Offset: 0xb8 // Size: 0x04
	bool bOpenExceptCheck; // Offset: 0xbc // Size: 0x01
	bool bOpenDebug; // Offset: 0xbd // Size: 0x01
	bool bSetRotation; // Offset: 0xbe // Size: 0x01
	bool bOpenSeparetionAdjust; // Offset: 0xbf // Size: 0x01
	float TempMoveLocationRadius; // Offset: 0xc0 // Size: 0x04
	float UpdateTempLocIntervel; // Offset: 0xc4 // Size: 0x04
	enum class EAIMovePose MoveType; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
	struct UNavigationQueryFilter* FilterClass; // Offset: 0xd0 // Size: 0x08
	bool bEnableCustomSpeed; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x3]; // Offset: 0xd9 // Size: 0x03
	float CustomSpeedValue; // Offset: 0xdc // Size: 0x04
	float HeightOffsetForPathFinding; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
};

// Object Name: Class AI.BTTask_CrowdMoveToOcclusion
// Size: 0x128 // Inherited bytes: 0xe8
struct UBTTask_CrowdMoveToOcclusion : UBTTask_CrowdMove {
	// Fields
	float SearchRadius; // Offset: 0xe4 // Size: 0x04
	float UseLastPointRadius; // Offset: 0xe8 // Size: 0x04
	float NearDistanceValue; // Offset: 0xec // Size: 0x04
	float PointInNearDistanceValue; // Offset: 0xf0 // Size: 0x04
	bool bChoosePointByEnemy; // Offset: 0xf4 // Size: 0x01
	bool bForceStand; // Offset: 0xf5 // Size: 0x01
	float CirclePainThreshold; // Offset: 0xf8 // Size: 0x04
	char pad_0xFE[0x2]; // Offset: 0xfe // Size: 0x02
	struct FBlackboardKeySelector EnemyBlackboardKey; // Offset: 0x100 // Size: 0x28
};

// Object Name: Class AI.BTTask_DealNextBuildingPathNode
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTask_DealNextBuildingPathNode : UBTTask_BlackboardBase {
	// Fields
	float findSpotXYOffset; // Offset: 0x98 // Size: 0x04
	float findSpotZOffset; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class AI.BTTask_ShortDistanceMove
// Size: 0xe8 // Inherited bytes: 0x98
struct UBTTask_ShortDistanceMove : UBTTask_BlackboardBase {
	// Fields
	enum class EAIMovePose MoveType; // Offset: 0x98 // Size: 0x01
	enum class EAIMoveType MovePathType; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x2]; // Offset: 0x9a // Size: 0x02
	IntProperty SampleNumber; // Offset: 0x9c // Size: 0x04
	struct FVector2D ControllPoint1; // Offset: 0xa0 // Size: 0x08
	struct FVector2D ControllPoint2; // Offset: 0xa8 // Size: 0x08
	struct FVector2D DirectionAngleRange; // Offset: 0xb0 // Size: 0x08
	struct FVector2D MoveTargetDistRange; // Offset: 0xb8 // Size: 0x08
	struct FVector2D ExecutionDuration; // Offset: 0xc0 // Size: 0x08
	float RePlanTime; // Offset: 0xc8 // Size: 0x04
	bool AlwaysSuccess; // Offset: 0xcc // Size: 0x01
	char pad_0xCD[0x3]; // Offset: 0xcd // Size: 0x03
	float AcceptRadius; // Offset: 0xd0 // Size: 0x04
	bool StopOnOverlap; // Offset: 0xd4 // Size: 0x01
	bool UsePathfinding; // Offset: 0xd5 // Size: 0x01
	bool AllowPartialPath; // Offset: 0xd6 // Size: 0x01
	bool ProjectDestinationToNavigation; // Offset: 0xd7 // Size: 0x01
	float ExceptionRandomRadius; // Offset: 0xd8 // Size: 0x04
	bool DebugDrawPath; // Offset: 0xdc // Size: 0x01
	char pad_0xDD[0x3]; // Offset: 0xdd // Size: 0x03
	struct UNavCostModifier* NavCostModifier; // Offset: 0xe0 // Size: 0x08
};

// Object Name: Class AI.BTTask_Escape
// Size: 0x128 // Inherited bytes: 0xe8
struct UBTTask_Escape : UBTTask_ShortDistanceMove {
	// Fields
	float TryLineTestZOffset; // Offset: 0xe8 // Size: 0x04
	float TryLineTestDistance; // Offset: 0xec // Size: 0x04
	IntProperty MaxTrySampleTimes; // Offset: 0xf0 // Size: 0x04
	float MinTrySampleDistance; // Offset: 0xf4 // Size: 0x04
	float MinTryEscapeDistance; // Offset: 0xf8 // Size: 0x04
	float EscapeStopDistance; // Offset: 0xfc // Size: 0x04
	struct FBlackboardKeySelector EnemyBlackboardKey; // Offset: 0x100 // Size: 0x28
};

// Object Name: Class AI.BTTask_MagicMove
// Size: 0xc8 // Inherited bytes: 0xb0
struct UBTTask_MagicMove : UBTTask_MoveTo {
	// Fields
	enum class EAIMovePose MoveType; // Offset: 0xae // Size: 0x01
	bool TickCheckMovePose; // Offset: 0xaf // Size: 0x01
	float TimeLimit; // Offset: 0xb0 // Size: 0x04
	bool ForceSuccess; // Offset: 0xb4 // Size: 0x01
	bool MoveWithOutPathFinding; // Offset: 0xb5 // Size: 0x01
	bool GotoExceptionWhenFailed; // Offset: 0xb6 // Size: 0x01
	struct UNavCostModifier* NavCostModifier; // Offset: 0xb8 // Size: 0x08
	char bForceStandWhenAborted : 1; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1_1 : 7; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x6]; // Offset: 0xc2 // Size: 0x06
};

// Object Name: Class AI.BTTask_FindAndPickItem
// Size: 0xc8 // Inherited bytes: 0xc8
struct UBTTask_FindAndPickItem : UBTTask_MagicMove {
};

// Object Name: Class AI.BTTask_FindAndPickupEquip
// Size: 0xb0 // Inherited bytes: 0xb0
struct UBTTask_FindAndPickupEquip : UBTTask_MoveTo {
};

// Object Name: Class AI.BTTask_FindCustomActorWithTag
// Size: 0xc8 // Inherited bytes: 0x98
struct UBTTask_FindCustomActorWithTag : UBTTask_BlackboardBase {
	// Fields
	float SphereRadius; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct TArray<enum class EObjectTypeQuery> QueryObjectType; // Offset: 0xa0 // Size: 0x10
	struct FName ActorTag; // Offset: 0xb0 // Size: 0x08
	struct AActor* ActorClassFilter; // Offset: 0xb8 // Size: 0x08
	float IgnoreDistance; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
};

// Object Name: Class AI.BTTask_FindFlyingHoverPoint
// Size: 0x138 // Inherited bytes: 0x70
struct UBTTask_FindFlyingHoverPoint : UBTTaskNode {
	// Fields
	enum class EFindFlyingHoverPointHoverType HoverType; // Offset: 0x69 // Size: 0x01
	struct TArray<enum class EST3DNavigationLocProjectStrategy> LocProjectStrategyArray; // Offset: 0x70 // Size: 0x10
	struct FBlackboardKeySelector BBKeyHoverLoc1; // Offset: 0x80 // Size: 0x28
	struct FBlackboardKeySelector BBKeyHoverLoc2; // Offset: 0xa8 // Size: 0x28
	struct FBlackboardKeySelector BBKeyHoverLoc3; // Offset: 0xd0 // Size: 0x28
	struct FBlackboardKeySelector BBKeyHoverLoc4; // Offset: 0xf8 // Size: 0x28
	enum class EFindFlyingHoverPointOneSideShapeOType OneSideShapeOType; // Offset: 0x120 // Size: 0x01
	char pad_0x122[0x2]; // Offset: 0x122 // Size: 0x02
	struct FVector2D OneSideShapeOForwardLength; // Offset: 0x124 // Size: 0x08
	struct FVector2D OneSideShapeOSideDirectionLength; // Offset: 0x12c // Size: 0x08
	char pad_0x134[0x4]; // Offset: 0x134 // Size: 0x04
};

// Object Name: Class AI.BTTask_FindNearestTombBoxTask
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_FindNearestTombBoxTask : UBTTask_BlackboardBase {
	// Fields
	float PlayerBackpackSearchRadius; // Offset: 0x98 // Size: 0x04
	float AirDropSearchRadius; // Offset: 0x9c // Size: 0x04
	float AirDropBoxRadius; // Offset: 0xa0 // Size: 0x04
	float MaxPainFindInBlueCircle; // Offset: 0xa4 // Size: 0x04
};

// Object Name: Class AI.BTTask_FindOcclusionPoint
// Size: 0xd0 // Inherited bytes: 0x98
struct UBTTask_FindOcclusionPoint : UBTTask_BlackboardBase {
	// Fields
	float SearchRadius; // Offset: 0x98 // Size: 0x04
	bool bOcclusionSaveToBlackBoard; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	struct FBlackboardKeySelector BBKeyOcclusionLocation; // Offset: 0xa0 // Size: 0x28
	bool bDebug; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
};

// Object Name: Class AI.BTTask_FindRandPosInOccupyPt
// Size: 0xc8 // Inherited bytes: 0x70
struct UBTTask_FindRandPosInOccupyPt : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector OutOccupyPointActor; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector OutOccupyPos; // Offset: 0x98 // Size: 0x28
	IntProperty MaxTryFindTime; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
};

// Object Name: Class AI.BTTask_FindTargetPTInHardPT
// Size: 0xc0 // Inherited bytes: 0x70
struct UBTTask_FindTargetPTInHardPT : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector InHardPTKey; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector OutTargetPTKey; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTTask_FindWayPoint
// Size: 0xe0 // Inherited bytes: 0x98
struct UBTTask_FindWayPoint : UBTTask_BlackboardBase {
	// Fields
	float InPointRadius; // Offset: 0x98 // Size: 0x04
	char MaxRandIterTimes; // Offset: 0x9c // Size: 0x01
	bool bRandUseNav; // Offset: 0x9d // Size: 0x01
	bool bDebugDraw; // Offset: 0x9e // Size: 0x01
	char pad_0x9F[0x1]; // Offset: 0x9f // Size: 0x01
	float DebugDrawPointTime; // Offset: 0xa0 // Size: 0x04
	float FindPointRange; // Offset: 0xa4 // Size: 0x04
	float RandomTargetLocRadius; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
	struct FBlackboardKeySelector BBK_CurrentWayPoint; // Offset: 0xb0 // Size: 0x28
	bool bFindNextInRange; // Offset: 0xd8 // Size: 0x01
	char bUseNotTeamedWayPoints : 1; // Offset: 0xd9 // Size: 0x01
	char pad_0xD9_1 : 7; // Offset: 0xd9 // Size: 0x01
	char pad_0xDA[0x6]; // Offset: 0xda // Size: 0x06
};

// Object Name: Class AI.BTTask_FindWayPointByIDList
// Size: 0xe8 // Inherited bytes: 0x98
struct UBTTask_FindWayPointByIDList : UBTTask_BlackboardBase {
	// Fields
	bool bDebugDraw; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	float DebugDrawPointTime; // Offset: 0x9c // Size: 0x04
	float FindPointRange; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct FBlackboardKeySelector BBK_CurrentWayPoint; // Offset: 0xa8 // Size: 0x28
	struct TArray<IntProperty> SpecificIDList; // Offset: 0xd0 // Size: 0x10
	enum class EFindWayPointType FindWayPointType; // Offset: 0xe0 // Size: 0x01
	char bUseNotTeamedWayPoints : 1; // Offset: 0xe1 // Size: 0x01
	char pad_0xE1_1 : 7; // Offset: 0xe1 // Size: 0x01
	char pad_0xE2[0x6]; // Offset: 0xe2 // Size: 0x06
};

// Object Name: Class AI.BTTask_FinishOrder
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_FinishOrder : UBTTaskNode {
	// Fields
	char bResult : 1; // Offset: 0x69 // Size: 0x01
};

// Object Name: Class AI.BTTask_FlyAlongSpline
// Size: 0x148 // Inherited bytes: 0x70
struct UBTTask_FlyAlongSpline : UBTTaskNode {
	// Fields
	struct AActor* SplineActorClass; // Offset: 0x70 // Size: 0x08
	struct FVector SplineActorLocation; // Offset: 0x78 // Size: 0x0c
	struct FRotator SplineActorRotation; // Offset: 0x84 // Size: 0x0c
	struct FBlackboardKeySelector BBKeySplineLocation; // Offset: 0x90 // Size: 0x28
	struct FBlackboardKeySelector BBKeySplineActor; // Offset: 0xb8 // Size: 0x28
	float ReachAcceptableDistance; // Offset: 0xe0 // Size: 0x04
	float FullPathDuration; // Offset: 0xe4 // Size: 0x04
	float MaxFlyDuration; // Offset: 0xe8 // Size: 0x04
	float MaxProtectStationaryDuration; // Offset: 0xec // Size: 0x04
	bool bVelocityUpdateUseLerp; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	float VelocityUpdateLerpSpeed; // Offset: 0xf4 // Size: 0x04
	bool bAutoFitSplineWithHorizonalCircle; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x3]; // Offset: 0xf9 // Size: 0x03
	float CircleRadius; // Offset: 0xfc // Size: 0x04
	IntProperty AutoFitFactor; // Offset: 0x100 // Size: 0x04
	float SplineCurveTangentLength; // Offset: 0x104 // Size: 0x04
	float SplineCurveFirstTwoTangentLength; // Offset: 0x108 // Size: 0x04
	bool bStopWhenReadyToAttack; // Offset: 0x10c // Size: 0x01
	char pad_0x10D[0x3]; // Offset: 0x10d // Size: 0x03
	float ExecuteDurationAtLeast; // Offset: 0x110 // Size: 0x04
	struct FVector2D AttackDistRangeToTarget; // Offset: 0x114 // Size: 0x08
	bool bCompareInXY; // Offset: 0x11c // Size: 0x01
	char pad_0x11D[0x3]; // Offset: 0x11d // Size: 0x03
	struct FBlackboardKeySelector BBKeyTargetActor; // Offset: 0x120 // Size: 0x28
};

// Object Name: Class AI.BTTask_FlyTo
// Size: 0xd8 // Inherited bytes: 0x70
struct UBTTask_FlyTo : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BBKeyFlyToTarget; // Offset: 0x70 // Size: 0x28
	float FlySpeedRatio; // Offset: 0x98 // Size: 0x04
	bool bUse3DNavigation; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	float OverrideAgentRadius; // Offset: 0xa0 // Size: 0x04
	bool bEnableFlyCurveSimulate; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	float FlyCurvatureFactor; // Offset: 0xa8 // Size: 0x04
	float FlyCurveSimulationMinAngle; // Offset: 0xac // Size: 0x04
	IntProperty FlyCurveSimulationLineSegemnts; // Offset: 0xb0 // Size: 0x04
	enum class EFlyToPathfindingThread PathfindingThread; // Offset: 0xb4 // Size: 0x01
	char pad_0xB5[0x3]; // Offset: 0xb5 // Size: 0x03
	struct TArray<enum class EST3DNavigationPathfindingPartialStrategy> PartialStrategyArray; // Offset: 0xb8 // Size: 0x10
	bool bBrakingBeforeDestination; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x3]; // Offset: 0xc9 // Size: 0x03
	float DistanceOfBrakingBeforeDestination; // Offset: 0xcc // Size: 0x04
	float FlySpeedRatioOfBrakingBeforeDestination; // Offset: 0xd0 // Size: 0x04
	bool bDrawDebugPath; // Offset: 0xd4 // Size: 0x01
	char pad_0xD5[0x3]; // Offset: 0xd5 // Size: 0x03
};

// Object Name: Class AI.BTTask_ForceIdle
// Size: 0xe8 // Inherited bytes: 0x70
struct UBTTask_ForceIdle : UBTTaskNode {
	// Fields
	bool bUseCustomIdelParam; // Offset: 0x69 // Size: 0x01
	float IdleTime; // Offset: 0x6c // Size: 0x04
	float RandomDeviation; // Offset: 0x70 // Size: 0x04
	bool bRandIdle; // Offset: 0x74 // Size: 0x01
	IntProperty IdleBlendSpaceValue; // Offset: 0x78 // Size: 0x04
	char pad_0x7E[0x2]; // Offset: 0x7e // Size: 0x02
	struct TArray<IntProperty> ValidIdleBSValues; // Offset: 0x80 // Size: 0x10
	struct FBlackboardKeySelector KeyIdleTime; // Offset: 0x90 // Size: 0x28
	struct FBlackboardKeySelector KeyIdleBlendSpaceValue; // Offset: 0xb8 // Size: 0x28
	bool bFinishResetIdle; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
};

// Object Name: Class AI.BTTask_GeneralActivateNextWayPoint
// Size: 0xd0 // Inherited bytes: 0x70
struct UBTTask_GeneralActivateNextWayPoint : UBTTaskNode {
	// Fields
	float FindPointRange; // Offset: 0x6c // Size: 0x04
	float HasReachedRadius; // Offset: 0x70 // Size: 0x04
	struct FBlackboardKeySelector CurrentWayPointActor; // Offset: 0x78 // Size: 0x28
	struct FBlackboardKeySelector LastWayPointActor; // Offset: 0xa0 // Size: 0x28
	bool ReachedEndNoNextWayPointRetFalse; // Offset: 0xc8 // Size: 0x01
	bool bFindNextInRange; // Offset: 0xc9 // Size: 0x01
	bool bSendEvent; // Offset: 0xca // Size: 0x01
	char pad_0xCB[0x5]; // Offset: 0xcb // Size: 0x05
};

// Object Name: Class AI.BTTask_GeneralAIWayPointPathSelector
// Size: 0xa0 // Inherited bytes: 0x70
struct UBTTask_GeneralAIWayPointPathSelector : UBTTaskNode {
	// Fields
	struct FName NameOfWayPointSelector; // Offset: 0x70 // Size: 0x08
	struct FBlackboardKeySelector CurrentEventWayPointActor; // Offset: 0x78 // Size: 0x28
};

// Object Name: Class AI.BTTask_GeneralExecuteEventsOfWayPoint
// Size: 0xd0 // Inherited bytes: 0x70
struct UBTTask_GeneralExecuteEventsOfWayPoint : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector CurrentEventWayPointActor; // Offset: 0x70 // Size: 0x28
	bool bEnableWait; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
	struct UCurveFloat* WaitTimeCurveFloat; // Offset: 0xa0 // Size: 0x08
	float FixedWaitTime; // Offset: 0xa8 // Size: 0x04
	bool bDirectRotateAIOrRotateToControllerRotation; // Offset: 0xac // Size: 0x01
	char pad_0xAD[0x3]; // Offset: 0xad // Size: 0x03
	struct TArray<struct FWayPointEvent> CacheWayPointEvents; // Offset: 0xb0 // Size: 0x10
	struct AAIEventWayPointActor* CurrentEventWayPointActorPtr; // Offset: 0xc0 // Size: 0x08
	char pad_0xC8[0x8]; // Offset: 0xc8 // Size: 0x08
};

// Object Name: Class AI.BTTask_GeneralExecuteEventsOfWayPointNew
// Size: 0x98 // Inherited bytes: 0x70
struct UBTTask_GeneralExecuteEventsOfWayPointNew : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector CurrentEventWayPointActor; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class AI.BTTask_GeneralFindAttackablePosition
// Size: 0xf8 // Inherited bytes: 0x70
struct UBTTask_GeneralFindAttackablePosition : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BBKeyTargetEnemy; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector BBKeyFoundAttackablePosition; // Offset: 0x98 // Size: 0x28
	char bReachableTest : 1; // Offset: 0xc0 // Size: 0x01
	char bFilterOutBehaviorRegion : 1; // Offset: 0xc0 // Size: 0x01
	char bUseNavSystem : 1; // Offset: 0xc0 // Size: 0x01
	char pad_0xC0_3 : 5; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x3]; // Offset: 0xc1 // Size: 0x03
	float MaxAttackableRadius; // Offset: 0xc4 // Size: 0x04
	float ScanMinOuterCircleRadius; // Offset: 0xc8 // Size: 0x04
	float ScanRingWidth; // Offset: 0xcc // Size: 0x04
	IntProperty MaxIterations; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct TArray<struct FGeneralRandLocationRetryRule> retryRules; // Offset: 0xd8 // Size: 0x10
	float HeightTestOffset; // Offset: 0xe8 // Size: 0x04
	bool bUseCapsuleTrace; // Offset: 0xec // Size: 0x01
	char pad_0xED[0x3]; // Offset: 0xed // Size: 0x03
	float TraceCapsuleScale; // Offset: 0xf0 // Size: 0x04
	bool bOnlyLandscape; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
};

// Object Name: Class AI.BTTask_GeneralFindEscapePosition
// Size: 0xf0 // Inherited bytes: 0x70
struct UBTTask_GeneralFindEscapePosition : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BBKeyEscapeTarget; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector BBKeyFoundEscapePosition; // Offset: 0x98 // Size: 0x28
	struct TArray<struct FGeneralRandLocationRetryRule> retryRules; // Offset: 0xc0 // Size: 0x10
	struct FVector2D EscapeDistanceRange; // Offset: 0xd0 // Size: 0x08
	bool bEnableEscapePointReachableTest; // Offset: 0xd8 // Size: 0x01
	bool bEnableMaxNavMeshDistanceCheck; // Offset: 0xd9 // Size: 0x01
	char pad_0xDA[0x2]; // Offset: 0xda // Size: 0x02
	float fMaxNavMeshDistance; // Offset: 0xdc // Size: 0x04
	bool bNoPartialPath; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x3]; // Offset: 0xe1 // Size: 0x03
	float HeightTestOffset; // Offset: 0xe4 // Size: 0x04
	bool bDebug; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
};

// Object Name: Class AI.BTTask_GeneralFindRandomPoint
// Size: 0x158 // Inherited bytes: 0x70
struct UBTTask_GeneralFindRandomPoint : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BBKey_OutPoint; // Offset: 0x70 // Size: 0x28
	IntProperty MaxTryTimes; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct FBlackboardKeySelector BBKey_BasePoint; // Offset: 0xa0 // Size: 0x28
	struct FBlackboardKeySelector BBKey_BaseRadiusRange; // Offset: 0xc8 // Size: 0x28
	struct FBlackboardKeySelector BBKey_BaseAngleRange; // Offset: 0xf0 // Size: 0x28
	struct FVector2D RandomRange; // Offset: 0x118 // Size: 0x08
	struct FVector2D RandomAngle; // Offset: 0x120 // Size: 0x08
	struct TArray<struct FVector2D> RandomAngleExtra; // Offset: 0x128 // Size: 0x10
	char bFilterBuilding : 1; // Offset: 0x138 // Size: 0x01
	char bFilterWater : 1; // Offset: 0x138 // Size: 0x01
	char bReachableTest : 1; // Offset: 0x138 // Size: 0x01
	char bFilterOutBehaviorRegion : 1; // Offset: 0x138 // Size: 0x01
	char bFindSpecialSurface : 1; // Offset: 0x138 // Size: 0x01
	char bUseBlackboardRange : 1; // Offset: 0x138 // Size: 0x01
	char pad_0x138_6 : 2; // Offset: 0x138 // Size: 0x01
	enum class EPhysicalSurface SurfaceType; // Offset: 0x139 // Size: 0x01
	char bUseNavmesh : 1; // Offset: 0x13a // Size: 0x01
	char pad_0x13A_1 : 7; // Offset: 0x13a // Size: 0x01
	char pad_0x13B[0x5]; // Offset: 0x13b // Size: 0x05
	struct FName SpecificNaVName; // Offset: 0x140 // Size: 0x08
	char bTraceBlock : 1; // Offset: 0x148 // Size: 0x01
	char pad_0x148_1 : 7; // Offset: 0x148 // Size: 0x01
	char pad_0x149[0x3]; // Offset: 0x149 // Size: 0x03
	float SweepCapsuleScale; // Offset: 0x14c // Size: 0x04
	enum class ECollisionChannel CollisionChannel; // Offset: 0x150 // Size: 0x01
	char pad_0x151[0x3]; // Offset: 0x151 // Size: 0x03
	float MaxLocationTraceHeightZ; // Offset: 0x154 // Size: 0x04
};

// Object Name: Class AI.BTTask_GeneralSendEventOfEventWayPoint
// Size: 0xc0 // Inherited bytes: 0x70
struct UBTTask_GeneralSendEventOfEventWayPoint : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector CurrentEventWayPointActor; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector EventName; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTTask_GeneralStrategyMove
// Size: 0xc8 // Inherited bytes: 0x98
struct UBTTask_GeneralStrategyMove : UBTTask_BlackboardBase {
	// Fields
	struct FVector2D DirectionAngleRange; // Offset: 0x98 // Size: 0x08
	struct FVector2D MoveTargetDistRange; // Offset: 0xa0 // Size: 0x08
	struct FVector2D ExecutionDuration; // Offset: 0xa8 // Size: 0x08
	float RePlanTime; // Offset: 0xb0 // Size: 0x04
	bool AlwaysSuccess; // Offset: 0xb4 // Size: 0x01
	char pad_0xB5[0x3]; // Offset: 0xb5 // Size: 0x03
	float AcceptRadius; // Offset: 0xb8 // Size: 0x04
	bool StopOnOverlap; // Offset: 0xbc // Size: 0x01
	bool UsePathfinding; // Offset: 0xbd // Size: 0x01
	bool AllowPartialPath; // Offset: 0xbe // Size: 0x01
	bool ProjectDestinationToNavigation; // Offset: 0xbf // Size: 0x01
	float ExceptionRandomRadius; // Offset: 0xc0 // Size: 0x04
	bool bCanMoveWhenNoTarget; // Offset: 0xc4 // Size: 0x01
	bool bCheckWallPass; // Offset: 0xc5 // Size: 0x01
	bool DebugDrawPath; // Offset: 0xc6 // Size: 0x01
	char pad_0xC7[0x1]; // Offset: 0xc7 // Size: 0x01
};

// Object Name: Class AI.BTTask_GeneralTriggerSkillEvent
// Size: 0x88 // Inherited bytes: 0x70
struct UBTTask_GeneralTriggerSkillEvent : UBTTaskNode {
	// Fields
	bool bUseIndex; // Offset: 0x69 // Size: 0x01
	IntProperty skillindex; // Offset: 0x6c // Size: 0x04
	IntProperty SkillID; // Offset: 0x70 // Size: 0x04
	StrProperty EventName; // Offset: 0x78 // Size: 0x10
};

// Object Name: Class AI.BTTask_GetClosestPointFromVehicle
// Size: 0xc0 // Inherited bytes: 0x70
struct UBTTask_GetClosestPointFromVehicle : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector OutClosestPoint; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector OutHasClosestPoint; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTTask_GetRandomAttackablePosition
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_GetRandomAttackablePosition : UBTTask_BlackboardBase {
	// Fields
	float AttackableRadius; // Offset: 0x98 // Size: 0x04
	float KeepDistanceFromTarget; // Offset: 0x9c // Size: 0x04
	float RandomMoveRadius; // Offset: 0xa0 // Size: 0x04
	IntProperty RetryTimes; // Offset: 0xa4 // Size: 0x04
};

// Object Name: Class AI.BTTask_LaunchMove
// Size: 0x120 // Inherited bytes: 0x70
struct UBTTask_LaunchMove : UBTTaskNode {
	// Fields
	bool bUseCacheJumpVelocity; // Offset: 0x69 // Size: 0x01
	struct FBlackboardKeySelector JumpVelocityBlackboardKey; // Offset: 0x70 // Size: 0x28
	bool bUseCustomDestLocation; // Offset: 0x98 // Size: 0x01
	char pad_0x9A[0x6]; // Offset: 0x9a // Size: 0x06
	struct FBlackboardKeySelector KeyLaunchToTarget; // Offset: 0xa0 // Size: 0x28
	float CustomDestDirAngle; // Offset: 0xc8 // Size: 0x04
	float CustomDestDistance; // Offset: 0xcc // Size: 0x04
	bool UsePawnHalfHeightAsOffsetOfTargetLocation; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	struct FVector OffsetOfTargetLocation; // Offset: 0xd4 // Size: 0x0c
	bool bDrawDebugLine; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x3]; // Offset: 0xe1 // Size: 0x03
	struct FVector2D JumpSpeedRange; // Offset: 0xe4 // Size: 0x08
	float JumpSpeedInterval; // Offset: 0xec // Size: 0x04
	enum class ESuggestProjVelocityTraceOption JumpProjTraceType; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	float OverrideGravityZ; // Offset: 0xf4 // Size: 0x04
	float CollisionRadius; // Offset: 0xf8 // Size: 0x04
	bool bFavorHighArc; // Offset: 0xfc // Size: 0x01
	bool bDrawDebug; // Offset: 0xfd // Size: 0x01
	char pad_0xFE[0x2]; // Offset: 0xfe // Size: 0x02
	float CacheLastTossSpeed; // Offset: 0x100 // Size: 0x04
	IntProperty CacheLastIterations; // Offset: 0x104 // Size: 0x04
	struct FVector CacheLastTossVelocity; // Offset: 0x108 // Size: 0x0c
	float CacheLastTossVelocityHorizontal; // Offset: 0x114 // Size: 0x04
	float CacheLastTossVelocityHertical; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x4]; // Offset: 0x11c // Size: 0x04
};

// Object Name: Class AI.BTTask_MagicMoveAndJump
// Size: 0xd0 // Inherited bytes: 0xc8
struct UBTTask_MagicMoveAndJump : UBTTask_MagicMove {
	// Fields
	float MinJumpInterval; // Offset: 0xc4 // Size: 0x04
	float MaxJumpInterval; // Offset: 0xc8 // Size: 0x04
};

// Object Name: Class AI.BTTask_Mob_CastSkill
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTask_Mob_CastSkill : UBTTaskNode {
	// Fields
	IntProperty SkillID; // Offset: 0x6c // Size: 0x04
	IntProperty skillindex; // Offset: 0x70 // Size: 0x04
	bool bFailWhenCastFailed; // Offset: 0x74 // Size: 0x01
};

// Object Name: Class AI.BTTask_Mob_EnterState
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTask_Mob_EnterState : UBTTask_BlackboardBase {
	// Fields
	enum class EBPAIState IState; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
};

// Object Name: Class AI.BTTask_Mob_Explode
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_Mob_Explode : UBTTask_BlackboardBase {
	// Fields
	IntProperty ExplodeSkillIndex; // Offset: 0x98 // Size: 0x04
	IntProperty SkillID; // Offset: 0x9c // Size: 0x04
	enum class UTSkillEventType ExplodeSkillType; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x7]; // Offset: 0xa1 // Size: 0x07
};

// Object Name: Class AI.BTTask_Mob_FaceEnemy
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_Mob_FaceEnemy : UBTTask_BlackboardBase {
	// Fields
	float AcceptableAngle; // Offset: 0x98 // Size: 0x04
	float turnSpeed; // Offset: 0x9c // Size: 0x04
	bool bUsePhysRotate; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	float MaxExecuteTime; // Offset: 0xa4 // Size: 0x04
};

// Object Name: Class AI.BTTask_Mob_FindNextPathPosition
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_Mob_FindNextPathPosition : UBTTaskNode {
	// Fields
	float SearchDistanceFromSpawnPointSq; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTTask_Mob_FindNextPatrolPosition
// Size: 0xd8 // Inherited bytes: 0x70
struct UBTTask_Mob_FindNextPatrolPosition : UBTTaskNode {
	// Fields
	float SearchDistanceFromSpawnPoint; // Offset: 0x6c // Size: 0x04
	bool bEnableRaycastTest; // Offset: 0x70 // Size: 0x01
	float MinSquaredDistanceFromSpawnPoint; // Offset: 0x74 // Size: 0x04
	bool bIsCenterApplyBlackBoardValue; // Offset: 0x78 // Size: 0x01
	char pad_0x7A[0x6]; // Offset: 0x7a // Size: 0x06
	struct FBlackboardKeySelector CustomCenterTarget; // Offset: 0x80 // Size: 0x28
	bool bIsRadiusApplyBlackBoardValue; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x7]; // Offset: 0xa9 // Size: 0x07
	struct FBlackboardKeySelector CustomRadius; // Offset: 0xb0 // Size: 0x28
};

// Object Name: Class AI.BTTask_Mob_FindPosByTarget
// Size: 0xd0 // Inherited bytes: 0x98
struct UBTTask_Mob_FindPosByTarget : UBTTask_BlackboardBase {
	// Fields
	float SearchRadius; // Offset: 0x98 // Size: 0x04
	bool bUseNav; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	struct TArray<struct FMobRandLocationRetryRule> retryRules; // Offset: 0xa0 // Size: 0x10
	bool StopWhenFindPos; // Offset: 0xb0 // Size: 0x01
	bool KeepCloseToEnemy; // Offset: 0xb1 // Size: 0x01
	char pad_0xB2[0x2]; // Offset: 0xb2 // Size: 0x02
	float MinMoveDistance; // Offset: 0xb4 // Size: 0x04
	float HeightTestOffset; // Offset: 0xb8 // Size: 0x04
	bool SimulateMoveWithLineCheck; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
	float SimulateMoveDistance; // Offset: 0xc0 // Size: 0x04
	float SimulateCapsuleRadius; // Offset: 0xc4 // Size: 0x04
	float SimulateCapsuleHalfHeight; // Offset: 0xc8 // Size: 0x04
	bool IsDirForwardToTarget; // Offset: 0xcc // Size: 0x01
	char pad_0xCD[0x3]; // Offset: 0xcd // Size: 0x03
};

// Object Name: Class AI.BTTask_Mob_FindRandomAttackablePosition
// Size: 0xd8 // Inherited bytes: 0x98
struct UBTTask_Mob_FindRandomAttackablePosition : UBTTask_BlackboardBase {
	// Fields
	float AttackableRadius; // Offset: 0x98 // Size: 0x04
	float KeepDistanceFromTarget; // Offset: 0x9c // Size: 0x04
	float MinMoveDistance; // Offset: 0xa0 // Size: 0x04
	bool WithLineTrace; // Offset: 0xa4 // Size: 0x01
	enum class EMobFindAttackablePositionLineTraceType lineTraceType; // Offset: 0xa5 // Size: 0x01
	char pad_0xA6[0x2]; // Offset: 0xa6 // Size: 0x02
	float CustomLineTraceHeightOffset; // Offset: 0xa8 // Size: 0x04
	bool WithLineTraceTop; // Offset: 0xac // Size: 0x01
	char pad_0xAD[0x3]; // Offset: 0xad // Size: 0x03
	float HeightTestOffset; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct TArray<struct FMobRandLocationRetryRule> retryRules; // Offset: 0xb8 // Size: 0x10
	bool ReachableTest; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x3]; // Offset: 0xc9 // Size: 0x03
	float ReachableTestRadius; // Offset: 0xcc // Size: 0x04
	bool EnableTriggerCastSkillBlockAfterFailed; // Offset: 0xd0 // Size: 0x01
	bool bDrawDebug; // Offset: 0xd1 // Size: 0x01
	char pad_0xD2[0x2]; // Offset: 0xd2 // Size: 0x02
	IntProperty TriggerCastSkillBlockAfterFailedTimes; // Offset: 0xd4 // Size: 0x04
};

// Object Name: Class AI.BTTask_Mob_GetNearDeathCharNearby
// Size: 0xc8 // Inherited bytes: 0x98
struct UBTTask_Mob_GetNearDeathCharNearby : UBTTask_BlackboardBase {
	// Fields
	struct FBlackboardKeySelector TargetChar; // Offset: 0x98 // Size: 0x28
	float SearchRadius; // Offset: 0xc0 // Size: 0x04
	float CheckInterval; // Offset: 0xc4 // Size: 0x04
};

// Object Name: Class AI.BTTask_Mob_GetRandomAttackTargetInRadius
// Size: 0xb8 // Inherited bytes: 0x98
struct UBTTask_Mob_GetRandomAttackTargetInRadius : UBTTask_BlackboardBase {
	// Fields
	IntProperty TriggerMinTimes; // Offset: 0x98 // Size: 0x04
	IntProperty TriggerMaxTimes; // Offset: 0x9c // Size: 0x04
	IntProperty ChooseCurEnemyProbability; // Offset: 0xa0 // Size: 0x04
	enum class ESearchType searchType; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	float SearchRadius; // Offset: 0xa8 // Size: 0x04
	struct FVector SpecificLocation; // Offset: 0xac // Size: 0x0c
};

// Object Name: Class AI.BTTask_Mob_GetRandomSkill
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTask_Mob_GetRandomSkill : UBTTask_BlackboardBase {
	// Fields
	bool DontChangeSkillWhenTargetNearBossContainer; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
};

// Object Name: Class AI.BTTask_Mob_GetTargetVehicle
// Size: 0xc0 // Inherited bytes: 0x98
struct UBTTask_Mob_GetTargetVehicle : UBTTask_BlackboardBase {
	// Fields
	struct FBlackboardKeySelector TargetVehicle; // Offset: 0x98 // Size: 0x28
};

// Object Name: Class AI.BTTask_Mob_GetVehicleNearby
// Size: 0xc8 // Inherited bytes: 0x98
struct UBTTask_Mob_GetVehicleNearby : UBTTask_BlackboardBase {
	// Fields
	struct FBlackboardKeySelector TargetVehicle; // Offset: 0x98 // Size: 0x28
	float SearchRadius; // Offset: 0xc0 // Size: 0x04
	float CheckInterval; // Offset: 0xc4 // Size: 0x04
};

// Object Name: Class AI.BTTask_Mob_LeaveState
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTask_Mob_LeaveState : UBTTask_BlackboardBase {
	// Fields
	enum class EBPAIState IState; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
};

// Object Name: Class AI.BTTask_Mob_LinkGetJumpVelocity
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_Mob_LinkGetJumpVelocity : UBTTask_BlackboardBase {
	// Fields
	float JumpForwardOffset; // Offset: 0x98 // Size: 0x04
	struct FVector2D JumpSpeedRange; // Offset: 0x9c // Size: 0x08
	enum class ESuggestProjVelocityTraceOption Stride_JumpProjTraceType; // Offset: 0xa4 // Size: 0x01
	bool SetJumpFaceAngle; // Offset: 0xa5 // Size: 0x01
	char pad_0xA6[0x2]; // Offset: 0xa6 // Size: 0x02
};

// Object Name: Class AI.BTTask_Mob_MoveTo
// Size: 0xd0 // Inherited bytes: 0xb0
struct UBTTask_Mob_MoveTo : UBTTask_MoveTo {
	// Fields
	float BlockTimeLimit; // Offset: 0xb0 // Size: 0x04
	float BlockVelocitySizeThreshold; // Offset: 0xb4 // Size: 0x04
	bool BlockDistCheck; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x3]; // Offset: 0xb9 // Size: 0x03
	float BlockThresholdValidMoveDist; // Offset: 0xbc // Size: 0x04
	float BlockThresholdValidMoveTime; // Offset: 0xc0 // Size: 0x04
	float BlockThresholdValidVelocitySize; // Offset: 0xc4 // Size: 0x04
	bool ForceSuccess; // Offset: 0xc8 // Size: 0x01
	bool GotoExceptionWhenFailed; // Offset: 0xc9 // Size: 0x01
	bool SupportWalkType; // Offset: 0xca // Size: 0x01
	enum class EMobWalkType iWalkType; // Offset: 0xcb // Size: 0x01
	char bMobUsePathFinding : 1; // Offset: 0xcc // Size: 0x01
	char pad_0xCC_1 : 7; // Offset: 0xcc // Size: 0x01
	bool bEnableDebugLog; // Offset: 0xcd // Size: 0x01
	bool bUseNodeMemoryForBlockState; // Offset: 0xce // Size: 0x01
	char pad_0xCF[0x1]; // Offset: 0xcf // Size: 0x01
};

// Object Name: Class AI.BTTask_Mob_NewFindPatrolPosition
// Size: 0xb0 // Inherited bytes: 0x70
struct UBTTask_Mob_NewFindPatrolPosition : UBTTaskNode {
	// Fields
	float SearchDistanceFromSpawnPoint; // Offset: 0x6c // Size: 0x04
	float MinMoveDistance; // Offset: 0x70 // Size: 0x04
	float fHalfAngle; // Offset: 0x74 // Size: 0x04
	IntProperty MaxExecuteTimes; // Offset: 0x78 // Size: 0x04
	float ExceptionRandomRadius; // Offset: 0x7c // Size: 0x04
	bool bEnableRaycastTest; // Offset: 0x80 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	struct FBlackboardKeySelector KeyTargetLocation; // Offset: 0x88 // Size: 0x28
};

// Object Name: Class AI.BTTask_Mob_SnakeMove
// Size: 0xb8 // Inherited bytes: 0x98
struct UBTTask_Mob_SnakeMove : UBTTask_BlackboardBase {
	// Fields
	float NormalDis; // Offset: 0x98 // Size: 0x04
	struct FVector2D DisOffset; // Offset: 0x9c // Size: 0x08
	struct FVector2D AngleOffset; // Offset: 0xa4 // Size: 0x08
	float TaskMaxTime; // Offset: 0xac // Size: 0x04
	float AcceptRadius; // Offset: 0xb0 // Size: 0x04
	bool StopOnOverlap; // Offset: 0xb4 // Size: 0x01
	bool UsePathfinding; // Offset: 0xb5 // Size: 0x01
	bool AllowPartialPath; // Offset: 0xb6 // Size: 0x01
	bool ProjectDestinationToNavigation; // Offset: 0xb7 // Size: 0x01
};

// Object Name: Class AI.BTTask_Mob_Suicide
// Size: 0x98 // Inherited bytes: 0x98
struct UBTTask_Mob_Suicide : UBTTask_BlackboardBase {
};

// Object Name: Class AI.BTTask_Mob_SwimDirect
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_Mob_SwimDirect : UBTTask_BlackboardBase {
	// Fields
	float SwimVelocitySize; // Offset: 0x98 // Size: 0x04
	float AcceptableRadius; // Offset: 0x9c // Size: 0x04
	bool bReachTestIncludesAgentRadius; // Offset: 0xa0 // Size: 0x01
	bool bReachTestIncludesGoalRadius; // Offset: 0xa1 // Size: 0x01
	char pad_0xA2[0x6]; // Offset: 0xa2 // Size: 0x06
};

// Object Name: Class AI.BTTask_MobCMD_CastSkill
// Size: 0x98 // Inherited bytes: 0x70
struct UBTTask_MobCMD_CastSkill : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector SkillIndexBlackBoardKey; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class AI.BTTask_ModifyBlackboardData
// Size: 0xb0 // Inherited bytes: 0x98
struct UBTTask_ModifyBlackboardData : UBTTask_BlackboardBase {
	// Fields
	enum class EModifyBlackboardDataValueType ValueType; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
	StrProperty SetValue; // Offset: 0xa0 // Size: 0x10
};

// Object Name: Class AI.BTTask_MoveAround
// Size: 0xf8 // Inherited bytes: 0x98
struct UBTTask_MoveAround : UBTTask_BlackboardBase {
	// Fields
	float MoveRadius; // Offset: 0x98 // Size: 0x04
	float RotationSpeed; // Offset: 0x9c // Size: 0x04
	enum class EAIMovePose MoveType; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	struct FVector2D WaitTimeRange; // Offset: 0xa4 // Size: 0x08
	struct FVector2D ExecutionDuration; // Offset: 0xac // Size: 0x08
	float AcceptRadius; // Offset: 0xb4 // Size: 0x04
	bool bIncludeNeighborVerts; // Offset: 0xb8 // Size: 0x01
	bool bSetFocus; // Offset: 0xb9 // Size: 0x01
	bool bCanMoveWhenNoTarget; // Offset: 0xba // Size: 0x01
	char pad_0xBB[0x1]; // Offset: 0xbb // Size: 0x01
	struct FVector2D DirectionAngleRange; // Offset: 0xbc // Size: 0x08
	struct FVector2D MoveTargetDistRange; // Offset: 0xc4 // Size: 0x08
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	struct FBlackboardKeySelector EnemyBlackboardKey; // Offset: 0xd0 // Size: 0x28
};

// Object Name: Class AI.BTTask_MoveToOcclusion
// Size: 0x170 // Inherited bytes: 0xc8
struct UBTTask_MoveToOcclusion : UBTTask_MagicMove {
	// Fields
	float SearchRadius; // Offset: 0xc4 // Size: 0x04
	float UseLastPointRadius; // Offset: 0xc8 // Size: 0x04
	bool bChoosePointByEnemy; // Offset: 0xcc // Size: 0x01
	bool bForceStand; // Offset: 0xcd // Size: 0x01
	float CirclePainThreshold; // Offset: 0xd0 // Size: 0x04
	bool DoNotUseCurrentOcclusionFirst; // Offset: 0xd4 // Size: 0x01
	char pad_0xD7[0x1]; // Offset: 0xd7 // Size: 0x01
	float CurrentOcclusionRadius; // Offset: 0xd8 // Size: 0x04
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
	struct TArray<enum class EAIMoveToOcclusionPoseType> AcceptableOcclusionTypeArray; // Offset: 0xe0 // Size: 0x10
	bool bUsePointNearSelfCompareToEnemy; // Offset: 0xf0 // Size: 0x01
	bool bUseNavMeshDistance; // Offset: 0xf1 // Size: 0x01
	char pad_0xF2[0x2]; // Offset: 0xf2 // Size: 0x02
	float MaxNavMeshSearchDistance; // Offset: 0xf4 // Size: 0x04
	enum class EAIMoveToOcclusionSearchBestOcclusionMethod searchBestOcclusionMethod; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x3]; // Offset: 0xf9 // Size: 0x03
	float OcclusionPointChooseZFactor; // Offset: 0xfc // Size: 0x04
	float OcclusionPointChooseBushFactor; // Offset: 0x100 // Size: 0x04
	bool ChooseAttackableOcclusionFirst; // Offset: 0x104 // Size: 0x01
	char pad_0x105[0x3]; // Offset: 0x105 // Size: 0x03
	float ChooseAttackableOcclusionFactor; // Offset: 0x108 // Size: 0x04
	float OcclusionPadAngle_Normal; // Offset: 0x10c // Size: 0x04
	float OcclusionPadAngle_Aggressive; // Offset: 0x110 // Size: 0x04
	bool ChooseAttackableOcclusionWithLineTrace; // Offset: 0x114 // Size: 0x01
	char pad_0x115[0x3]; // Offset: 0x115 // Size: 0x03
	float SelfStandHalfHeight; // Offset: 0x118 // Size: 0x04
	bool ChooseTagOcclusionEnable; // Offset: 0x11c // Size: 0x01
	char pad_0x11D[0x3]; // Offset: 0x11d // Size: 0x03
	StrProperty OcclusionTagForChosen; // Offset: 0x120 // Size: 0x10
	bool bIgnorePossibleAttackableOcclusion; // Offset: 0x130 // Size: 0x01
	char bChooseGeneratedOcclusionPoints : 1; // Offset: 0x131 // Size: 0x01
	char pad_0x131_1 : 7; // Offset: 0x131 // Size: 0x01
	bool bDebug; // Offset: 0x132 // Size: 0x01
	char pad_0x133[0x5]; // Offset: 0x133 // Size: 0x05
	struct FBlackboardKeySelector EnemyBlackboardKey; // Offset: 0x138 // Size: 0x28
	enum class EAIMoveToOcclusionMovingPoseType MovingPoseType; // Offset: 0x160 // Size: 0x01
	char pad_0x161[0x3]; // Offset: 0x161 // Size: 0x03
	float MoveToOcclusionKeepCurPoseDistance; // Offset: 0x164 // Size: 0x04
	enum class EAIMoveToOcclusionFinishMovePoseType finishMovePoseType; // Offset: 0x168 // Size: 0x01
	char pad_0x169[0x3]; // Offset: 0x169 // Size: 0x03
	float OccupiedRadius; // Offset: 0x16c // Size: 0x04
};

// Object Name: Class AI.BTTask_MoveToSafeArea
// Size: 0xd8 // Inherited bytes: 0xc8
struct UBTTask_MoveToSafeArea : UBTTask_MagicMove {
	// Fields
	float RadiusScale; // Offset: 0xc4 // Size: 0x04
	float BlueCircleOffsetRadius; // Offset: 0xc8 // Size: 0x04
	struct FVector2D RandomLength; // Offset: 0xcc // Size: 0x08
};

// Object Name: Class AI.BTTask_PickUpItemAtTombBox
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTask_PickUpItemAtTombBox : UBTTaskNode {
	// Fields
	float DeltaTime; // Offset: 0x6c // Size: 0x04
	IntProperty MaxPickCount; // Offset: 0x70 // Size: 0x04
};

// Object Name: Class AI.BTTask_RotateToTarget
// Size: 0xb0 // Inherited bytes: 0x70
struct UBTTask_RotateToTarget : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector InRotationTarget; // Offset: 0x70 // Size: 0x28
	struct UCurveFloat* TimeCurve; // Offset: 0x98 // Size: 0x08
	float DefaultWaitTime; // Offset: 0xa0 // Size: 0x04
	float FinishWaitTime; // Offset: 0xa4 // Size: 0x04
	bool bShowLog; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x7]; // Offset: 0xa9 // Size: 0x07
};

// Object Name: Class AI.BTTask_RunBBSubTree
// Size: 0x98 // Inherited bytes: 0x70
struct UBTTask_RunBBSubTree : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector SubBehaviorTreeBlackBoardKey; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class AI.BTTask_RunMultiDynamicSubTree
// Size: 0x88 // Inherited bytes: 0x70
struct UBTTask_RunMultiDynamicSubTree : UBTTaskNode {
	// Fields
	struct UBehaviorTree* MainBehaviorAsset; // Offset: 0x70 // Size: 0x08
	struct TArray<struct FBlackBoardSubTreeConfig> SubBehaviorAssetArray; // Offset: 0x78 // Size: 0x10
};

// Object Name: Class AI.BTTask_SeekFlyPoint
// Size: 0x100 // Inherited bytes: 0x70
struct UBTTask_SeekFlyPoint : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BBKeyTargetEnemy; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector BBKeyFoundFlyPoint; // Offset: 0x98 // Size: 0x28
	enum class ESeekFlyPointCenterLocType ChooseFlyPointCenterLocType; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x3]; // Offset: 0xc1 // Size: 0x03
	struct FVector2D ChooseFlyPointHorizontalRadiusRange; // Offset: 0xc4 // Size: 0x08
	struct FVector2D ChooseFlyPointHeightRange; // Offset: 0xcc // Size: 0x08
	enum class ESeekFlyPointHorizontalAngleType HorizontalAngleType; // Offset: 0xd4 // Size: 0x01
	char pad_0xD5[0x3]; // Offset: 0xd5 // Size: 0x03
	struct FVector2D ChooseFlyPointAngleRange; // Offset: 0xd8 // Size: 0x08
	float AcceptableMinMoveDistance; // Offset: 0xe0 // Size: 0x04
	float AcceptableMinVerticalAngle; // Offset: 0xe4 // Size: 0x04
	float AcceptableMaxHorizontalAngleFromLastMove; // Offset: 0xe8 // Size: 0x04
	IntProperty MaxSearchTimes; // Offset: 0xec // Size: 0x04
	IntProperty PerConditionExtraSearchTimes; // Offset: 0xf0 // Size: 0x04
	float OverrideAgentRadius; // Offset: 0xf4 // Size: 0x04
	bool bFirstInChooseAsBornLocation; // Offset: 0xf8 // Size: 0x01
	bool FlyToLastPointWhenFailed; // Offset: 0xf9 // Size: 0x01
	char pad_0xFA[0x6]; // Offset: 0xfa // Size: 0x06
};

// Object Name: Class AI.BTTask_SetDownwardPos
// Size: 0xe8 // Inherited bytes: 0x70
struct UBTTask_SetDownwardPos : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector ActorBlackboardKey; // Offset: 0x70 // Size: 0x28
	struct FBlackboardKeySelector PosBlackboardKey; // Offset: 0x98 // Size: 0x28
	float DownwardTraceDistance; // Offset: 0xc0 // Size: 0x04
	float OffsetZ; // Offset: 0xc4 // Size: 0x04
	struct TArray<struct UObject*> TracableObjectTemplate; // Offset: 0xc8 // Size: 0x10
	bool bForceSuccess; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x3]; // Offset: 0xd9 // Size: 0x03
	float SearchRadius; // Offset: 0xdc // Size: 0x04
	bool bIgnoreStartPenetratingLoc; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
};

// Object Name: Class AI.BTTask_SpawnItem
// Size: 0xb0 // Inherited bytes: 0x98
struct UBTTask_SpawnItem : UBTTask_BlackboardBase {
	// Fields
	float CheckNoPlayerRadiusSquare; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct TArray<struct FAIEquipSpawnGroupDataBase> SpawnEquipDataBase; // Offset: 0xa0 // Size: 0x10
};

// Object Name: Class AI.BTTask_StrategyMove
// Size: 0xf0 // Inherited bytes: 0x98
struct UBTTask_StrategyMove : UBTTask_BlackboardBase {
	// Fields
	bool bIsSimpleCharacter; // Offset: 0x98 // Size: 0x01
	enum class EAIMovePose MoveType; // Offset: 0x99 // Size: 0x01
	enum class EAIMoveType MovePathType; // Offset: 0x9a // Size: 0x01
	char pad_0x9B[0x1]; // Offset: 0x9b // Size: 0x01
	IntProperty SampleNumber; // Offset: 0x9c // Size: 0x04
	struct FVector2D ControllPoint1; // Offset: 0xa0 // Size: 0x08
	struct FVector2D ControllPoint2; // Offset: 0xa8 // Size: 0x08
	struct FVector2D DirectionAngleRange; // Offset: 0xb0 // Size: 0x08
	struct FVector2D MoveTargetDistRange; // Offset: 0xb8 // Size: 0x08
	struct FVector2D ExecutionDuration; // Offset: 0xc0 // Size: 0x08
	bool bStopMoveWhenExecutionDurationRanOut; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x3]; // Offset: 0xc9 // Size: 0x03
	float RePlanTime; // Offset: 0xcc // Size: 0x04
	bool AlwaysSuccess; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x3]; // Offset: 0xd1 // Size: 0x03
	float AcceptRadius; // Offset: 0xd4 // Size: 0x04
	bool StopOnOverlap; // Offset: 0xd8 // Size: 0x01
	bool UsePathfinding; // Offset: 0xd9 // Size: 0x01
	bool AllowPartialPath; // Offset: 0xda // Size: 0x01
	bool ProjectDestinationToNavigation; // Offset: 0xdb // Size: 0x01
	float ExceptionRandomRadius; // Offset: 0xdc // Size: 0x04
	bool bCanMoveWhenNoTarget; // Offset: 0xe0 // Size: 0x01
	bool bCheckWallPass; // Offset: 0xe1 // Size: 0x01
	bool DebugDrawPath; // Offset: 0xe2 // Size: 0x01
	char pad_0xE3[0x5]; // Offset: 0xe3 // Size: 0x05
	struct UNavCostModifier* NavCostModifier; // Offset: 0xe8 // Size: 0x08
};

// Object Name: Class AI.BTTask_SummonActor
// Size: 0xc0 // Inherited bytes: 0x70
struct UBTTask_SummonActor : UBTTaskNode {
	// Fields
	struct AActor* SummonActorClass; // Offset: 0x70 // Size: 0x08
	IntProperty SummonNum; // Offset: 0x78 // Size: 0x04
	IntProperty MaxSummonNum; // Offset: 0x7c // Size: 0x04
	IntProperty MonsterResID; // Offset: 0x80 // Size: 0x04
	bool bUseSummonPoint; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	struct TArray<enum class EObjectTypeQuery> QueryObjectType; // Offset: 0x88 // Size: 0x10
	float SphereRadius; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct AActor* SummonLocationClass; // Offset: 0xa0 // Size: 0x08
	struct FVector OffsetMax; // Offset: 0xa8 // Size: 0x0c
	struct FVector OffsetMin; // Offset: 0xb4 // Size: 0x0c

	// Functions

	// Object Name: Function AI.BTTask_SummonActor.GetSummonLocations
	// Flags: [Native|Event|Public|BlueprintEvent]
	struct TArray<struct FVector> GetSummonLocations(struct AActor* Invoker); // Offset: 0x103f12804 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class AI.BTTask_SwimInput
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_SwimInput : UBTTaskNode {
	// Fields
	float SwimUpRate; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTTask_TeleportToSpecLoc
// Size: 0xb8 // Inherited bytes: 0x98
struct UBTTask_TeleportToSpecLoc : UBTTask_BlackboardBase {
	// Fields
	float RangeMin; // Offset: 0x98 // Size: 0x04
	float RangeMax; // Offset: 0x9c // Size: 0x04
	bool OnlyTeleportToLand; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	float OriginCheckSquare; // Offset: 0xa4 // Size: 0x04
	float DestCheckSquare; // Offset: 0xa8 // Size: 0x04
	float TraceHeight; // Offset: 0xac // Size: 0x04
	IntProperty HouseCheckTimes; // Offset: 0xb0 // Size: 0x04
	bool bCheckSight; // Offset: 0xb4 // Size: 0x01
	bool bForceSuccess; // Offset: 0xb5 // Size: 0x01
	char pad_0xB6[0x2]; // Offset: 0xb6 // Size: 0x02
};

// Object Name: Class AI.BTTask_TryFightback
// Size: 0xd8 // Inherited bytes: 0xc8
struct UBTTask_TryFightback : UBTTask_MagicMove {
	// Fields
	float MaxTraceRadius; // Offset: 0xc4 // Size: 0x04
	float MaxTraceTime; // Offset: 0xc8 // Size: 0x04
	float CheckTargetVisableTimeIntervel; // Offset: 0xcc // Size: 0x04
	bool bIsCheckHasWeapon; // Offset: 0xd0 // Size: 0x01
	float MinEnemyInSightTime; // Offset: 0xd4 // Size: 0x04
};

// Object Name: Class AI.BTTask_VH_Locate
// Size: 0x118 // Inherited bytes: 0x70
struct UBTTask_VH_Locate : UBTTaskNode {
	// Fields
	enum class ELocateType LocateType; // Offset: 0x69 // Size: 0x01
	struct FBlackboardKeySelector BBKey_OutPoint; // Offset: 0x70 // Size: 0x28
	IntProperty MaxTryTimes; // Offset: 0x98 // Size: 0x04
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	struct FBlackboardKeySelector BBKey_BasePoint; // Offset: 0xa0 // Size: 0x28
	struct FVector2D RandomRange; // Offset: 0xc8 // Size: 0x08
	float RandomAngle; // Offset: 0xd0 // Size: 0x04
	struct FVector2D AttackRange; // Offset: 0xd4 // Size: 0x08
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
	struct TArray<struct FLocationRetryRule> retryRules; // Offset: 0xe0 // Size: 0x10
	float HeightTestOffset; // Offset: 0xf0 // Size: 0x04
	char bFilterBuilding : 1; // Offset: 0xf4 // Size: 0x01
	char bFilterWater : 1; // Offset: 0xf4 // Size: 0x01
	char bFilterOutBehaviorRegion : 1; // Offset: 0xf4 // Size: 0x01
	char bReachableTest : 1; // Offset: 0xf4 // Size: 0x01
	char bUseNavmesh : 1; // Offset: 0xf4 // Size: 0x01
	char pad_0xF4_5 : 3; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	struct FName SpecificNaVName; // Offset: 0xf8 // Size: 0x08
	enum class ECollisionChannel CollisionChannel; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
	float MaxLocationTraceHeightZ; // Offset: 0x104 // Size: 0x04
	char bDebug : 1; // Offset: 0x108 // Size: 0x01
	char pad_0x108_1 : 7; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x7]; // Offset: 0x109 // Size: 0x07
	struct UAIBehaviorAdapter_Tank* OwnerAdapter; // Offset: 0x110 // Size: 0x08
};

// Object Name: Class AI.BTTask_VH_NavigateTo
// Size: 0xf8 // Inherited bytes: 0xb0
struct UBTTask_VH_NavigateTo : UBTTask_MoveTo {
	// Fields
	enum class EAIVHMoveType AIVHMoveType; // Offset: 0xae // Size: 0x01
	char bLimitTime : 1; // Offset: 0xaf // Size: 0x01
	struct FVector2D ExecutionDuration; // Offset: 0xb0 // Size: 0x08
	char bModifyUsePathFinding : 1; // Offset: 0xb8 // Size: 0x01
	char bStopEngineWhenTaskFinished : 1; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9_3 : 5; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x2]; // Offset: 0xba // Size: 0x02
	float AcceptableAngle; // Offset: 0xbc // Size: 0x04
	struct FVector2D DirectionAngleRange; // Offset: 0xc0 // Size: 0x08
	struct FVector2D MoveTargetDistRange; // Offset: 0xc8 // Size: 0x08
	float ThrottleInputScale; // Offset: 0xd0 // Size: 0x04
	char bNoSteering : 1; // Offset: 0xd4 // Size: 0x01
	char pad_0xD4_1 : 7; // Offset: 0xd4 // Size: 0x01
	char pad_0xD5[0x3]; // Offset: 0xd5 // Size: 0x03
	struct FVector2D Deviation; // Offset: 0xd8 // Size: 0x08
	float DistanceExtendRate; // Offset: 0xe0 // Size: 0x04
	float Throttle; // Offset: 0xe4 // Size: 0x04
	float TowardAngle; // Offset: 0xe8 // Size: 0x04
	char bTrackingTargetWhenRotateToward : 1; // Offset: 0xec // Size: 0x01
	char pad_0xEC_1 : 7; // Offset: 0xec // Size: 0x01
	char pad_0xED[0x3]; // Offset: 0xed // Size: 0x03
	struct UAIBehaviorAdapter_Tank* OwnerAdapter; // Offset: 0xf0 // Size: 0x08
};

// Object Name: Class AI.BTTask_WayPointDirectMove
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTask_WayPointDirectMove : UBTTask_BlackboardBase {
	// Fields
	bool bAllowPartialPath; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	float AcceptableRadius; // Offset: 0x9c // Size: 0x04
	bool bAllowStrafe; // Offset: 0xa0 // Size: 0x01
	bool bReachTestIncludesAgentRadius; // Offset: 0xa1 // Size: 0x01
	bool bReachTestIncludesGoalRadius; // Offset: 0xa2 // Size: 0x01
	bool bProjectGoalLocation; // Offset: 0xa3 // Size: 0x01
	bool bUsePathfinding; // Offset: 0xa4 // Size: 0x01
	bool bMoveToActor; // Offset: 0xa5 // Size: 0x01
	char pad_0xA6[0x2]; // Offset: 0xa6 // Size: 0x02
};

// Object Name: Class AI.BTTask_WayPointListMove
// Size: 0xb8 // Inherited bytes: 0x98
struct UBTTask_WayPointListMove : UBTTask_BlackboardBase {
	// Fields
	bool bAllowPartialPath; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	float AcceptableRadius; // Offset: 0x9c // Size: 0x04
	bool bAllowStrafe; // Offset: 0xa0 // Size: 0x01
	bool bReachTestIncludesAgentRadius; // Offset: 0xa1 // Size: 0x01
	bool bReachTestIncludesGoalRadius; // Offset: 0xa2 // Size: 0x01
	bool bProjectGoalLocation; // Offset: 0xa3 // Size: 0x01
	bool bUsePathfinding; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	struct TArray<struct FVector> OverrideWayPointList; // Offset: 0xa8 // Size: 0x10
};

// Object Name: Class AI.BTTaskNode_CastSkill
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTaskNode_CastSkill : UBTTaskNode {
	// Fields
	IntProperty skillindex; // Offset: 0x6c // Size: 0x04
	IntProperty SkillID; // Offset: 0x70 // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_CharacterCastNoneTargetSkill
// Size: 0xd8 // Inherited bytes: 0x98
struct UBTTaskNode_CharacterCastNoneTargetSkill : UBTTask_BlackboardBase {
	// Fields
	IntProperty SkillID; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct FBlackboardKeySelector SkillIDBlackBoardKey; // Offset: 0xa0 // Size: 0x28
	IntProperty RescueRange; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	struct ASTExtraBaseCharacter* RescueCharacter; // Offset: 0xd0 // Size: 0x08
};

// Object Name: Class AI.BTTaskNode_CharacterCastOnTargetSkill
// Size: 0xc8 // Inherited bytes: 0x98
struct UBTTaskNode_CharacterCastOnTargetSkill : UBTTask_BlackboardBase {
	// Fields
	IntProperty SkillID; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct FBlackboardKeySelector SkillIDBlackBoardKey; // Offset: 0xa0 // Size: 0x28
};

// Object Name: Class AI.BTTaskNode_CharacterCastSkill
// Size: 0x198 // Inherited bytes: 0x98
struct UBTTaskNode_CharacterCastSkill : UBTTask_BlackboardBase {
	// Fields
	enum class EAITaskNodeThrowGrenadeMethod throwMethod; // Offset: 0x98 // Size: 0x01
	bool bUseHighThrowFirst; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x2]; // Offset: 0x9a // Size: 0x02
	struct FVector2D AcceptableHighThrowPitchRangle; // Offset: 0x9c // Size: 0x08
	struct FVector2D AcceptableLowThrowPitchRangle; // Offset: 0xa4 // Size: 0x08
	struct FVector HighThrowStartOffset_Stand; // Offset: 0xac // Size: 0x0c
	struct FVector HighThrowStartOffset_Crouch; // Offset: 0xb8 // Size: 0x0c
	struct FVector HighThrowStartOffset_Prone; // Offset: 0xc4 // Size: 0x0c
	struct FVector LowThrowStartOffset_Stand; // Offset: 0xd0 // Size: 0x0c
	struct FVector LowThrowStartOffset_Crouch; // Offset: 0xdc // Size: 0x0c
	struct FVector LowThrowStartOffset_Prone; // Offset: 0xe8 // Size: 0x0c
	float HighThrowSpeed; // Offset: 0xf4 // Size: 0x04
	float LowThrowSpeed; // Offset: 0xf8 // Size: 0x04
	struct FRotator HighThrowViewOffsetRotation; // Offset: 0xfc // Size: 0x0c
	struct FRotator LowThrowViewOffsetRotation; // Offset: 0x108 // Size: 0x0c
	float ProjectileCollisionRadius; // Offset: 0x114 // Size: 0x04
	enum class ESuggestProjVelocityTraceOption ProjVelocityTraceType; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x3]; // Offset: 0x119 // Size: 0x03
	float fReplanThrowAngleDistance; // Offset: 0x11c // Size: 0x04
	struct TArray<struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig> TargetLocRandomableConfig; // Offset: 0x120 // Size: 0x10
	bool bDebug; // Offset: 0x130 // Size: 0x01
	char pad_0x131[0x3]; // Offset: 0x131 // Size: 0x03
	IntProperty SkillID; // Offset: 0x134 // Size: 0x04
	struct FBlackboardKeySelector SkillIDBlackBoardKey; // Offset: 0x138 // Size: 0x28
	bool bNeedCheckItem; // Offset: 0x160 // Size: 0x01
	char pad_0x161[0x3]; // Offset: 0x161 // Size: 0x03
	IntProperty CheckExitItemID; // Offset: 0x164 // Size: 0x04
	IntProperty CheckExitItemType; // Offset: 0x168 // Size: 0x04
	float SkillMinReleaseInterval; // Offset: 0x16c // Size: 0x04
	float SkillMaxReleaseInterval; // Offset: 0x170 // Size: 0x04
	float FaceToTargetSpeed; // Offset: 0x174 // Size: 0x04
	float HighThrowDistance; // Offset: 0x178 // Size: 0x04
	char pad_0x17C[0x4]; // Offset: 0x17c // Size: 0x04
	struct UCurveFloat* HighThrowDistanceToPitchCurve; // Offset: 0x180 // Size: 0x08
	struct UCurveFloat* LowThrowDistanceToPitchCurve; // Offset: 0x188 // Size: 0x08
	bool UseNewTargetLocWhenNormalModeAiming; // Offset: 0x190 // Size: 0x01
	char pad_0x191[0x7]; // Offset: 0x191 // Size: 0x07
};

// Object Name: Class AI.BTTaskNode_CheckOcclusionSafe
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTaskNode_CheckOcclusionSafe : UBTTask_BlackboardBase {
	// Fields
	float CheckRadius; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_ClearCurrentEnemy
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_ClearCurrentEnemy : UBTTaskNode {
};

// Object Name: Class AI.BTTaskNode_ClearFocus
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_ClearFocus : UBTTaskNode {
	// Fields
	enum class EAINewFocusPriority ClearedFocus; // Offset: 0x69 // Size: 0x01
};

// Object Name: Class AI.BTTaskNode_EmptyShot
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_EmptyShot : UBTTaskNode {
	// Fields
	float FireTime; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_EquipItemDirectly
// Size: 0x80 // Inherited bytes: 0x70
struct UBTTaskNode_EquipItemDirectly : UBTTaskNode {
	// Fields
	float CheckNoPlayerRadiusSquare; // Offset: 0x6c // Size: 0x04
	struct TArray<struct FAIEquipSpawnGroup> RandomSpawnEquipGroupSet; // Offset: 0x70 // Size: 0x10
};

// Object Name: Class AI.BTTaskNode_EquipOrUnWeapon
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_EquipOrUnWeapon : UBTTaskNode {
	// Fields
	bool Equip; // Offset: 0x69 // Size: 0x01
	bool FailedWhenEquipSuccess; // Offset: 0x6a // Size: 0x01
	bool bEquipGrenade; // Offset: 0x6b // Size: 0x01
	IntProperty GrenadeID; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_FindBuilding
// Size: 0xc0 // Inherited bytes: 0x98
struct UBTTaskNode_FindBuilding : UBTTask_BlackboardBase {
	// Fields
	struct TArray<struct FFindBuildingRatingConfig> RatingConfig; // Offset: 0x98 // Size: 0x10
	bool OnlySafeBuildings; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x3]; // Offset: 0xa9 // Size: 0x03
	float MaxMoveSpeed; // Offset: 0xac // Size: 0x04
	float findSpotXYOffset; // Offset: 0xb0 // Size: 0x04
	float findSpotZOffset; // Offset: 0xb4 // Size: 0x04
	float GoBackThreshold; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_FindItemSpot
// Size: 0x98 // Inherited bytes: 0x98
struct UBTTaskNode_FindItemSpot : UBTTask_BlackboardBase {
};

// Object Name: Class AI.BTTaskNode_FindPosByTarget
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTaskNode_FindPosByTarget : UBTTask_BlackboardBase {
	// Fields
	float SearchRadius; // Offset: 0x98 // Size: 0x04
	bool bUseNav; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
};

// Object Name: Class AI.BTTaskNode_ForceSuccess
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_ForceSuccess : UBTTaskNode {
	// Fields
	bool IsForceSuccess; // Offset: 0x69 // Size: 0x01
};

// Object Name: Class AI.BTTaskNode_HumanAction
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_HumanAction : UBTTaskNode {
	// Fields
	enum class EAIPoseState SetAction; // Offset: 0x69 // Size: 0x01
};

// Object Name: Class AI.BTTaskNode_MeleeAttack
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_MeleeAttack : UBTTaskNode {
};

// Object Name: Class AI.BTTaskNode_MonsterCastSkill
// Size: 0xa8 // Inherited bytes: 0x98
struct UBTTaskNode_MonsterCastSkill : UBTTask_BlackboardBase {
	// Fields
	IntProperty skillindex; // Offset: 0x98 // Size: 0x04
	IntProperty SkillID; // Offset: 0x9c // Size: 0x04
	enum class UTSkillEventType SkillType; // Offset: 0xa0 // Size: 0x01
	bool bCanCastWithoutTarget; // Offset: 0xa1 // Size: 0x01
	bool bIgnoreSkillCastDistanceCheck; // Offset: 0xa2 // Size: 0x01
	char pad_0xA3[0x5]; // Offset: 0xa3 // Size: 0x05
};

// Object Name: Class AI.BTTaskNode_MonsterJumpToPos
// Size: 0x98 // Inherited bytes: 0x98
struct UBTTaskNode_MonsterJumpToPos : UBTTask_BlackboardBase {
};

// Object Name: Class AI.BTTaskNode_NewParachuteJumpBase
// Size: 0xb8 // Inherited bytes: 0x70
struct UBTTaskNode_NewParachuteJumpBase : UBTTaskNode {
	// Fields
	float RandomStartJumpTime; // Offset: 0x6c // Size: 0x04
	float RandomEndJumpTime; // Offset: 0x70 // Size: 0x04
	float JumpRadius; // Offset: 0x74 // Size: 0x04
	float JumpHeight; // Offset: 0x78 // Size: 0x04
	float MoveForwardRate; // Offset: 0x7c // Size: 0x04
	float OpenParachuteHeight; // Offset: 0x80 // Size: 0x04
	float CheckOpenParachuteFreq; // Offset: 0x84 // Size: 0x04
	float ForceForwardHeight; // Offset: 0x88 // Size: 0x04
	float CloseParachuteHeight; // Offset: 0x8c // Size: 0x04
	float CheckCloseParachuteFreq; // Offset: 0x90 // Size: 0x04
	float LockFocusTime; // Offset: 0x94 // Size: 0x04
	float DelayClearParachuteTime; // Offset: 0x98 // Size: 0x04
	float MaxFallingTime; // Offset: 0x9c // Size: 0x04
	bool bNotiyParachuteComp; // Offset: 0xa0 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	struct FName IgnoreOpen; // Offset: 0xa8 // Size: 0x08
	bool UseFakePlayerAIControllerDoLandingSuccess; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07

	// Functions

	// Object Name: Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute
	// Flags: [Final|Native|Protected]
	void DelayClearParachute(struct ASTExtraPlayerCharacter* ControlledPawn); // Offset: 0x103f1847c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AI.BTTaskNode_NewParachuteJump
// Size: 0xb8 // Inherited bytes: 0xb8
struct UBTTaskNode_NewParachuteJump : UBTTaskNode_NewParachuteJumpBase {
};

// Object Name: Class AI.BTTaskNode_NewParachuteJumpBigEvent
// Size: 0xc0 // Inherited bytes: 0xb8
struct UBTTaskNode_NewParachuteJumpBigEvent : UBTTaskNode_NewParachuteJump {
	// Fields
	struct FVector JumpTargetPosition; // Offset: 0xb4 // Size: 0x0c
};

// Object Name: Class AI.BTTaskNode_NewParachuteJumpDoubleCircle
// Size: 0xc8 // Inherited bytes: 0xb8
struct UBTTaskNode_NewParachuteJumpDoubleCircle : UBTTaskNode_NewParachuteJumpBase {
	// Fields
	float OuterRadiusDeltaValue; // Offset: 0xb4 // Size: 0x04
	float InnerRadiusDeltaValue; // Offset: 0xb8 // Size: 0x04
	float JumpRangeDistance; // Offset: 0xbc // Size: 0x04
	float MaxTargetPositonDistance; // Offset: 0xc0 // Size: 0x04
	IntProperty MaxAttempt; // Offset: 0xc4 // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_ParachuteJump
// Size: 0x80 // Inherited bytes: 0x70
struct UBTTaskNode_ParachuteJump : UBTTaskNode {
	// Fields
	float TimeLimit; // Offset: 0x6c // Size: 0x04
	float RandomRadius; // Offset: 0x70 // Size: 0x04
	float JumpStartTime; // Offset: 0x74 // Size: 0x04
	float JumpEndTime; // Offset: 0x78 // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_ParachuteJumpV3
// Size: 0x98 // Inherited bytes: 0x70
struct UBTTaskNode_ParachuteJumpV3 : UBTTaskNode {
	// Fields
	float RandomStartJumpTime; // Offset: 0x6c // Size: 0x04
	float RandomEndJumpTime; // Offset: 0x70 // Size: 0x04
	float JumpRadius; // Offset: 0x74 // Size: 0x04
	float JumpHeight; // Offset: 0x78 // Size: 0x04
	float RandomAccelerateStart; // Offset: 0x7c // Size: 0x04
	float RandomAccelerateEnd; // Offset: 0x80 // Size: 0x04
	float OpenParachuteHeight; // Offset: 0x84 // Size: 0x04
	float CheckOpenParachuteFreq; // Offset: 0x88 // Size: 0x04
	float CloseParachuteHeight; // Offset: 0x8c // Size: 0x04
	float CheckCloseParachuteFreq; // Offset: 0x90 // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_PickItemsAtSpot
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTaskNode_PickItemsAtSpot : UBTTaskNode {
	// Fields
	float DeltaTime; // Offset: 0x6c // Size: 0x04
	IntProperty MaxPickCount; // Offset: 0x70 // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_PlayEmote
// Size: 0x110 // Inherited bytes: 0x70
struct UBTTaskNode_PlayEmote : UBTTaskNode {
	// Fields
	MapProperty RandomEmoteIDWithWeightMap; // Offset: 0x70 // Size: 0x50
	MapProperty EmotePlayTimeMap; // Offset: 0xc0 // Size: 0x50
};

// Object Name: Class AI.BTTaskNode_PlaySound
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_PlaySound : UBTTaskNode {
	// Fields
	IntProperty SoundID; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_PostLuaEvent
// Size: 0xb0 // Inherited bytes: 0x70
struct UBTTaskNode_PostLuaEvent : UBTTaskNode {
	// Fields
	StrProperty EventType; // Offset: 0x70 // Size: 0x10
	StrProperty EventID; // Offset: 0x80 // Size: 0x10
	StrProperty CallLuaFuncName; // Offset: 0x90 // Size: 0x10
	StrProperty Params; // Offset: 0xa0 // Size: 0x10
};

// Object Name: Class AI.BTTaskNode_RefreshWeaponBBD
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_RefreshWeaponBBD : UBTTaskNode {
};

// Object Name: Class AI.BTTaskNode_Rescue
// Size: 0x98 // Inherited bytes: 0x98
struct UBTTaskNode_Rescue : UBTTask_BlackboardBase {
};

// Object Name: Class AI.BTTaskNode_StopMeleeAttack
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTaskNode_StopMeleeAttack : UBTTask_BlackboardBase {
	// Fields
	float StopTimeout; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class AI.BTTaskNode_StopShooting
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTaskNode_StopShooting : UBTTaskNode {
};

// Object Name: Class AI.BTTaskNode_TakeMedicine
// Size: 0x80 // Inherited bytes: 0x70
struct UBTTaskNode_TakeMedicine : UBTTaskNode {
	// Fields
	IntProperty MedicineIndex; // Offset: 0x6c // Size: 0x04
	char pad_0x74[0xc]; // Offset: 0x74 // Size: 0x0c
};

// Object Name: Class AI.CustomDamageEventComponent
// Size: 0x370 // Inherited bytes: 0x238
struct UCustomDamageEventComponent : ULuaActorComponent {
	// Fields
	struct FScriptMulticastDelegate OnSpawnActor; // Offset: 0x238 // Size: 0x10
	struct UDataTable* EventDataTable; // Offset: 0x248 // Size: 0x28
	float ActorSpawnGlobalCooldown; // Offset: 0x270 // Size: 0x04
	char pad_0x274[0x4]; // Offset: 0x274 // Size: 0x04
	struct FScriptMulticastDelegate OnThrowBox; // Offset: 0x278 // Size: 0x10
	char pad_0x288[0x4]; // Offset: 0x288 // Size: 0x04
	float OwnerHealthPercentage; // Offset: 0x28c // Size: 0x04
	char pad_0x290[0x10]; // Offset: 0x290 // Size: 0x10
	struct TArray<struct FTriggeredCustomDamageEvent> ClientEvents; // Offset: 0x2a0 // Size: 0x10
	char pad_0x2B0[0x70]; // Offset: 0x2b0 // Size: 0x70
	MapProperty CacheUObjectMap; // Offset: 0x320 // Size: 0x50

	// Functions

	// Object Name: Function AI.CustomDamageEventComponent.OnRep_ClientEvents
	// Flags: [Final|Native|Protected]
	void OnRep_ClientEvents(); // Offset: 0x103f199c8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.CharacterCustomDamageEventComponent
// Size: 0x378 // Inherited bytes: 0x370
struct UCharacterCustomDamageEventComponent : UCustomDamageEventComponent {
	// Fields
	char pad_0x370[0x8]; // Offset: 0x370 // Size: 0x08

	// Functions

	// Object Name: Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent
	// Flags: [Final|Native|Public|HasOutParms]
	void OnTakeDamageEvent(float Damage, struct FDamageEvent& DamageEvent, struct AActor* Victim, struct AActor* Causer); // Offset: 0x103f19330 // Return & Params: Num(4) Size(0x28)
};

// Object Name: Class AI.MercenaryAICharacterBase
// Size: 0x7450 // Inherited bytes: 0x7430
struct AMercenaryAICharacterBase : ASTExtraPlayerCharacter {
	// Fields
	float AttachedActorFoldWeaponMinAngle; // Offset: 0x742c // Size: 0x04
	bool bShouldUseGameModeNetCullingDist; // Offset: 0x7430 // Size: 0x01
	float AttachedActorFoldWeaponMaxAngle; // Offset: 0x7434 // Size: 0x04
	float AttachedPlayerHeightOffset; // Offset: 0x7438 // Size: 0x04
	struct FVector GrenadeThrowOffset; // Offset: 0x743c // Size: 0x0c
	char pad_0x7449[0x7]; // Offset: 0x7449 // Size: 0x07
};

// Object Name: Class AI.MercenaryJumpObstacleInfoCollector
// Size: 0x250 // Inherited bytes: 0x58
struct UMercenaryJumpObstacleInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffMercenaryJumpObstacleAllPlayerInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
};

// Object Name: Class AI.MercenaryPassengerCameraModifierBase
// Size: 0xb8 // Inherited bytes: 0x48
struct UMercenaryPassengerCameraModifierBase : UCameraModifier {
	// Fields
	struct FVector2D LimitViewYawRange_Grenade; // Offset: 0x44 // Size: 0x08
	struct FPassengerCameraViewLimit TppViewLimit; // Offset: 0x4c // Size: 0x24
	struct FPassengerCameraViewLimit FppViewLimit; // Offset: 0x70 // Size: 0x24
	struct FPassengerCameraViewLimit BowViewLimit; // Offset: 0x94 // Size: 0x24
};

// Object Name: Class AI.MLAIControllerComponent
// Size: 0x848 // Inherited bytes: 0x238
struct UMLAIControllerComponent : ULuaActorComponent {
	// Fields
	struct UActorComponent* AISoundCollectCompClass; // Offset: 0x238 // Size: 0x08
	struct UActorComponent* MLAIParachuteJumpCompClass; // Offset: 0x240 // Size: 0x08
	struct UAIActionExecutionComponent* AIActionExecutionComp; // Offset: 0x248 // Size: 0x08
	struct UAIBasicStateInfoComponent* AIStateInfoComp; // Offset: 0x250 // Size: 0x08
	struct UAISoundCollectionComponent* AISoundCollectComp; // Offset: 0x258 // Size: 0x08
	struct UMLAIParachuteJumpComponent* MLAIParachuteJumpComp; // Offset: 0x260 // Size: 0x08
	struct UTeammateMLAIControllerComponent* TeammateMLAIControllerComp; // Offset: 0x268 // Size: 0x08
	float HearRadius; // Offset: 0x270 // Size: 0x04
	char pad_0x274[0x4]; // Offset: 0x274 // Size: 0x04
	MapProperty CameraViewPitchLimitDataMap; // Offset: 0x278 // Size: 0x50
	struct FCameraViewPitchLimitData FreeFallCameraViewPitchLimitData; // Offset: 0x2c8 // Size: 0x08
	struct FVector PrePos; // Offset: 0x2d0 // Size: 0x0c
	float PreTickTime; // Offset: 0x2dc // Size: 0x04
	char pad_0x2E0[0x8]; // Offset: 0x2e0 // Size: 0x08
	struct AController* OwnerController; // Offset: 0x2e8 // Size: 0x08
	struct ANewFakePlayerAIController* MyAIController; // Offset: 0x2f0 // Size: 0x08
	struct ASTExtraPlayerController* MyPlayerController; // Offset: 0x2f8 // Size: 0x08
	char pad_0x300[0x14]; // Offset: 0x300 // Size: 0x14
	float FindNavLocationRadius; // Offset: 0x314 // Size: 0x04
	IntProperty MaxNavLocationFindTimes; // Offset: 0x318 // Size: 0x04
	bool bUseLerpRotation; // Offset: 0x31c // Size: 0x01
	char pad_0x31D[0x3]; // Offset: 0x31d // Size: 0x03
	float LerpRotationThreshold; // Offset: 0x320 // Size: 0x04
	bool IsForceTargetRotation; // Offset: 0x324 // Size: 0x01
	char pad_0x325[0x3]; // Offset: 0x325 // Size: 0x03
	float FirstLerpRotationDeltaTime; // Offset: 0x328 // Size: 0x04
	float FreeCameraTurnVelocity; // Offset: 0x32c // Size: 0x04
	float TurnVelocity; // Offset: 0x330 // Size: 0x04
	char pad_0x334[0x4]; // Offset: 0x334 // Size: 0x04
	struct FAIShootingPoseOffsetInfo shootingPoseOffsetInfo; // Offset: 0x338 // Size: 0x70
	float AutoOpenDoorRange; // Offset: 0x3a8 // Size: 0x04
	char pad_0x3AC[0x8]; // Offset: 0x3ac // Size: 0x08
	bool IsModifyDamageLuaOverride; // Offset: 0x3b4 // Size: 0x01
	char pad_0x3B5[0x3]; // Offset: 0x3b5 // Size: 0x03
	float RatingDamageScaleLuaOverride; // Offset: 0x3b8 // Size: 0x04
	bool bShouldSendVehicleInfo; // Offset: 0x3bc // Size: 0x01
	char pad_0x3BD[0x1b]; // Offset: 0x3bd // Size: 0x1b
	bool IsChangeStatePC; // Offset: 0x3d8 // Size: 0x01
	char pad_0x3D9[0x3]; // Offset: 0x3d9 // Size: 0x03
	uint32_t AllyMasterID; // Offset: 0x3dc // Size: 0x04
	uint32_t AIProvider; // Offset: 0x3e0 // Size: 0x04
	char pad_0x3E4[0x464]; // Offset: 0x3e4 // Size: 0x464

	// Functions

	// Object Name: Function AI.MLAIControllerComponent.UnBindDelegates
	// Flags: [Final|Native|Public]
	void UnBindDelegates(bool IsEndPlay); // Offset: 0x103f2f02c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.SetShowDebugAILevelTime
	// Flags: [Final|Native|Static|Public]
	void SetShowDebugAILevelTime(float InSetShowDebugAILevelTime); // Offset: 0x103f2efb8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.SetMLAIStyle
	// Flags: [Final|Native|Public]
	void SetMLAIStyle(uint32_t NewAIStyle); // Offset: 0x103f2ef3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.SetLuaAIParamConfigString
	// Flags: [Final|Native|Public]
	void SetLuaAIParamConfigString(StrProperty InAIParamConfigString, IntProperty InLuaAIParamType); // Offset: 0x103f2ee18 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AI.MLAIControllerComponent.SetIsMLAI
	// Flags: [Final|Native|Public]
	void SetIsMLAI(bool InIsMLAI); // Offset: 0x103f2ed94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.SetCurShootingPose
	// Flags: [Final|Native|Public]
	void SetCurShootingPose(enum class EAIShootingPose InCurAIShootingPose); // Offset: 0x103f2ed18 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.SetAllyMasterID
	// Flags: [Final|Native|Public]
	void SetAllyMasterID(uint32_t InAllyMasterID); // Offset: 0x103f2ec9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.SetAIProvider
	// Flags: [Final|Native|Public]
	void SetAIProvider(uint32_t AIProvider); // Offset: 0x103f2ec20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.SetAIParams
	// Flags: [Final|Native|Public|HasOutParms]
	void SetAIParams(struct FGameModeAIPlayerParams& InAIParams); // Offset: 0x103f2eb6c // Return & Params: Num(1) Size(0x408)

	// Object Name: Function AI.MLAIControllerComponent.SetAILevel
	// Flags: [Final|Native|Public]
	void SetAILevel(uint32_t NewAILevel); // Offset: 0x103f2eaf0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.IsValid
	// Flags: [Final|Native|Public]
	bool IsValid(); // Offset: 0x103f2eabc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.IsTeammateMLAI
	// Flags: [Final|Native|Public]
	bool IsTeammateMLAI(); // Offset: 0x103f2ea88 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.IsFreeCamera
	// Flags: [Final|Native|Public]
	bool IsFreeCamera(); // Offset: 0x103f2ea54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.InitAIStateInfoComponent
	// Flags: [Final|Native|Public]
	void InitAIStateInfoComponent(struct UAIBasicStateInfoComponent* AIStateInfoComponent); // Offset: 0x103f2e9d8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.InitAIActionExecutionComponent
	// Flags: [Final|Native|Public]
	void InitAIActionExecutionComponent(struct UAIActionExecutionComponent* InAIActionExecutionComponent); // Offset: 0x103f2e95c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults]
	struct FRotator GetViewRotation(); // Offset: 0x103f2e924 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AI.MLAIControllerComponent.GetViewForwardVector
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector GetViewForwardVector(); // Offset: 0x103f2e8ec // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AI.MLAIControllerComponent.GetOwnerBaseCharacter
	// Flags: [Final|Native|Public]
	struct ASTExtraBaseCharacter* GetOwnerBaseCharacter(); // Offset: 0x103f2e8b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.GetMLAIStyle
	// Flags: [Final|Native|Public|Const]
	uint32_t GetMLAIStyle(); // Offset: 0x103f2e884 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp
	// Flags: [Final|Native|Public|Const]
	struct UMLAIParachuteJumpComponent* GetMLAIParachuteJumpComp(); // Offset: 0x103f2e868 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.GetIsMLAI
	// Flags: [Final|Native|Public|Const]
	bool GetIsMLAI(); // Offset: 0x103f2e834 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIControllerComponent.GetBackpackComponent
	// Flags: [Final|Native|Public]
	struct UBackpackComponent* GetBackpackComponent(); // Offset: 0x103f2e800 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.GetAllyMasterID
	// Flags: [Final|Native|Public|Const]
	uint32_t GetAllyMasterID(); // Offset: 0x103f2e7cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.GetAIStateInfoComp
	// Flags: [Final|Native|Public|Const]
	struct UAIBasicStateInfoComponent* GetAIStateInfoComp(); // Offset: 0x103f2e7b0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.GetAIProvider
	// Flags: [Final|Native|Public|Const]
	uint32_t GetAIProvider(); // Offset: 0x103f2e77c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.GetAIParams
	// Flags: [Final|Native|Public|Const]
	struct FGameModeAIPlayerParams GetAIParams(); // Offset: 0x103f2e744 // Return & Params: Num(1) Size(0x408)

	// Object Name: Function AI.MLAIControllerComponent.GetAILevel
	// Flags: [Final|Native|Public|Const]
	uint32_t GetAILevel(); // Offset: 0x103f2e710 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAIControllerComponent.GetAIActionExecutionComp
	// Flags: [Final|Native|Public|Const]
	struct UAIActionExecutionComponent* GetAIActionExecutionComp(); // Offset: 0x103f2e6f4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIControllerComponent.FreshShootingPose
	// Flags: [Final|Native|Public]
	void FreshShootingPose(); // Offset: 0x103f2e6e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIControllerComponent.DoActionFreeCamera
	// Flags: [Final|Native|Public]
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll); // Offset: 0x103f2e5a4 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool CheckCameraViewPitchLimit(struct FRotator& InOutTargetRot); // Offset: 0x103f2e50c // Return & Params: Num(2) Size(0xd)

	// Object Name: Function AI.MLAIControllerComponent.BindDelegates
	// Flags: [Final|Native|Public]
	void BindDelegates(); // Offset: 0x103f2e4f8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.MLAIDestructibleInfoCollector
// Size: 0x388 // Inherited bytes: 0x58
struct UMLAIDestructibleInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffDestructibleItemAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FDestructibleItemGlobalGameState CacheGlobalGameState; // Offset: 0x250 // Size: 0x40
	struct FDestructibleItemGlobalGameState LastGlobalGameState; // Offset: 0x290 // Size: 0x40
	struct FDiffDestructibleItemGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x2d0 // Size: 0x68
	MapProperty CacheDestructibleItems; // Offset: 0x338 // Size: 0x50
};

// Object Name: Class AI.MLAIDynamicItemInfoCollector
// Size: 0x388 // Inherited bytes: 0x58
struct UMLAIDynamicItemInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffDynamicItemAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FDynamicItemGlobalGameState CacheGlobalGameState; // Offset: 0x250 // Size: 0x40
	struct FDynamicItemGlobalGameState LastGlobalGameState; // Offset: 0x290 // Size: 0x40
	struct FDiffDynamicItemGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x2d0 // Size: 0x68
	MapProperty CacheDynamicItems; // Offset: 0x338 // Size: 0x50
};

// Object Name: Class AI.MLAILandScapeInfoCollector
// Size: 0x2f0 // Inherited bytes: 0x58
struct UMLAILandScapeInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffLandScapeAllPlayerInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FLandScapeGlobalGameInfo CacheGlobalGameState; // Offset: 0x250 // Size: 0x28
	struct FLandScapeGlobalGameInfo LastGlobalGameState; // Offset: 0x278 // Size: 0x28
	struct FDiffLandScapeGlobalGameInfo DiffGlobalGameStateGeneral; // Offset: 0x2a0 // Size: 0x50
};

// Object Name: Class AI.MLAINearbyDoorInfoCollector
// Size: 0x388 // Inherited bytes: 0x58
struct UMLAINearbyDoorInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffNearbyDoorAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FNearbyDoorGlobalGameState CacheGlobalGameState; // Offset: 0x250 // Size: 0x40
	struct FNearbyDoorGlobalGameState LastGlobalGameState; // Offset: 0x290 // Size: 0x40
	struct FDiffNearbyDoorGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x2d0 // Size: 0x68
	MapProperty CacheDoorStates; // Offset: 0x338 // Size: 0x50
};

// Object Name: Class AI.MLAINearbyMonsterInfoCollector
// Size: 0x388 // Inherited bytes: 0x58
struct UMLAINearbyMonsterInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffNearbyMonsterAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FNearbyMonsterGlobalGameState CacheGlobalGameState; // Offset: 0x250 // Size: 0x40
	struct FNearbyMonsterGlobalGameState LastGlobalGameState; // Offset: 0x290 // Size: 0x40
	MapProperty CacheMonsterStats; // Offset: 0x2d0 // Size: 0x50
	struct FDiffNearbyMonsterGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x320 // Size: 0x68
};

// Object Name: Class AI.MLAINearbyPlayerInfoCollector
// Size: 0x250 // Inherited bytes: 0x58
struct UMLAINearbyPlayerInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffNearbyPlayerAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
};

// Object Name: Class AI.MLAINearbyStateInfoCollector
// Size: 0x430 // Inherited bytes: 0x58
struct UMLAINearbyStateInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffBaseNearbyAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FNearbyBaseGlobalGameState CacheGlobalGameState; // Offset: 0x250 // Size: 0x50
	struct FNearbyBaseGlobalGameState LastGlobalGameState; // Offset: 0x2a0 // Size: 0x50
	struct FDiffBaseNearbyGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x2f0 // Size: 0xa0
	MapProperty CacheItemData; // Offset: 0x390 // Size: 0x50
	MapProperty CacheAINearbyThrown; // Offset: 0x3e0 // Size: 0x50
};

// Object Name: Class AI.MLAIParachuteJumpComponent
// Size: 0x290 // Inherited bytes: 0x238
struct UMLAIParachuteJumpComponent : ULuaActorComponent {
	// Fields
	float JumpRadius; // Offset: 0x234 // Size: 0x04
	float JumpHeight; // Offset: 0x238 // Size: 0x04
	float OpenParachuteHeight; // Offset: 0x23c // Size: 0x04
	float CheckOpenParachuteFreq; // Offset: 0x240 // Size: 0x04
	float CloseParachuteHeight; // Offset: 0x244 // Size: 0x04
	float CheckCloseParachuteFreq; // Offset: 0x248 // Size: 0x04
	float DelayClearParachuteTime; // Offset: 0x24c // Size: 0x04
	float MaxFallingTime; // Offset: 0x250 // Size: 0x04
	enum class EMLAIJumpingPhase JumpingPhase; // Offset: 0x254 // Size: 0x01
	struct ANewFakePlayerAIController* OwnerController; // Offset: 0x258 // Size: 0x08
	struct ASTExtraPlayerController* OwnerPlayerController; // Offset: 0x260 // Size: 0x08
	float FallingTime; // Offset: 0x268 // Size: 0x04
	float CheckCountTime; // Offset: 0x26c // Size: 0x04
	bool bLandingInLowHeight; // Offset: 0x270 // Size: 0x01
	char pad_0x272[0x2]; // Offset: 0x272 // Size: 0x02
	struct FVector LastLocation; // Offset: 0x274 // Size: 0x0c
	bool bDellJumpToLandExcute; // Offset: 0x280 // Size: 0x01
	bool bNotiyParachuteComp; // Offset: 0x281 // Size: 0x01
	char pad_0x282[0x6]; // Offset: 0x282 // Size: 0x06
	struct FName IgnoreOpen; // Offset: 0x288 // Size: 0x08

	// Functions

	// Object Name: Function AI.MLAIParachuteJumpComponent.ParachuteMove
	// Flags: [Final|Native|Public]
	void ParachuteMove(float ForwardRate, float RightRate); // Offset: 0x103f309b4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.MLAIParachuteJumpComponent.OpenParachute
	// Flags: [Final|Native|Public]
	void OpenParachute(); // Offset: 0x103f309a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIParachuteJumpComponent.OnAIEnterFighting
	// Flags: [Final|Native|Public]
	void OnAIEnterFighting(); // Offset: 0x103f3098c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIParachuteJumpComponent.JumpFromPoint
	// Flags: [Final|Native|Public]
	void JumpFromPoint(); // Offset: 0x103f30978 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIParachuteJumpComponent.JumpFromPlane
	// Flags: [Final|Native|Public]
	void JumpFromPlane(); // Offset: 0x103f30964 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void EnterParachuteJumpPhase(struct FVector& StartLoc, struct FRotator& StartRot); // Offset: 0x103f30884 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAIParachuteJumpComponent.EndJump
	// Flags: [Final|Native|Public]
	void EndJump(bool bSuccess); // Offset: 0x103f30800 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIParachuteJumpComponent.CloseParachute
	// Flags: [Final|Native|Public]
	void CloseParachute(); // Offset: 0x103f307ec // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.MLAIStateInfoManager
// Size: 0x550 // Inherited bytes: 0x28
struct UMLAIStateInfoManager : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x80 // Size: 0x10
	bool bDiffSwitch; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	struct UAIStateInfoDataAsset* AIStateInfoDataAsset; // Offset: 0x98 // Size: 0x08
	struct TArray<struct UStateInfoCollectorBase*> StateInfoCollectorList; // Offset: 0xa0 // Size: 0x10
	MapProperty PlayerTypeStateInfoCollectorMap; // Offset: 0xb0 // Size: 0x50
	struct UMLAISubSystem* MLAISubSystem; // Offset: 0x100 // Size: 0x08
	MapProperty CollectorNameToClassMap; // Offset: 0x108 // Size: 0x50
	MapProperty CacheMLAIs; // Offset: 0x158 // Size: 0x50
	MapProperty CachePlayerAndBTAIs; // Offset: 0x1a8 // Size: 0x50
	MapProperty CacheCandidateAIs; // Offset: 0x1f8 // Size: 0x50
	MapProperty AlreadySendDeadStateMap; // Offset: 0x248 // Size: 0x50
	MapProperty DiffPlayerIDToListIDMap; // Offset: 0x298 // Size: 0x50
	MapProperty DiffAIPlayerInfoListIDMaps; // Offset: 0x2e8 // Size: 0x50
	char pad_0x338[0x20]; // Offset: 0x338 // Size: 0x20
	struct ABattleRoyaleGameMode* GameMode; // Offset: 0x358 // Size: 0x08
	char pad_0x360[0xa0]; // Offset: 0x360 // Size: 0xa0
	bool CheckGlobalGameStateShouldCollectInfo; // Offset: 0x400 // Size: 0x01
	enum class EStatePlayerType CheckGlobalCollectPlayerType; // Offset: 0x401 // Size: 0x01
	bool bUseCombineAIStateInfo; // Offset: 0x402 // Size: 0x01
	char pad_0x403[0xad]; // Offset: 0x403 // Size: 0xad
	MapProperty AIStateInfoCompMap; // Offset: 0x4b0 // Size: 0x50
	MapProperty MLAIControllerCompMap; // Offset: 0x500 // Size: 0x50

	// Functions

	// Object Name: Function AI.MLAIStateInfoManager.StartRequestCache
	// Flags: [Native|Public]
	void StartRequestCache(); // Offset: 0x103f472e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIStateInfoManager.SetUseNewDiffCmds
	// Flags: [Final|Native|Public]
	void SetUseNewDiffCmds(bool InUseNewDiffCmds); // Offset: 0x103f47260 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIStateInfoManager.SetOpenHeadAndMuzzleInfo
	// Flags: [Final|Native|Public]
	void SetOpenHeadAndMuzzleInfo(bool InOpenHeadAndMuzzleInfo); // Offset: 0x103f471dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAIStateInfoManager.ResetWhiteList
	// Flags: [Final|Native|Public]
	void ResetWhiteList(); // Offset: 0x103f471c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIStateInfoManager.InitCollectorList
	// Flags: [Final|Native|Public]
	void InitCollectorList(struct TArray<struct FCollectorInitInfo> CollectorInitInfoList); // Offset: 0x103f470e4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.MLAIStateInfoManager.InitCollector
	// Flags: [Native|Public]
	void InitCollector(); // Offset: 0x103f470c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIStateInfoManager.Init
	// Flags: [Final|Native|Public]
	void Init(struct UWorld* InWorld); // Offset: 0x103f4704c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIStateInfoManager.GetSinglePlayerStateInfoToCache
	// Flags: [Final|Native|Public]
	void GetSinglePlayerStateInfoToCache(struct UWorld* InWorld, struct ASTExtraPlayerCharacter* Player); // Offset: 0x103f46f98 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AI.MLAIStateInfoManager.GetGlobalGameStateToCache
	// Flags: [Final|Native|Public]
	void GetGlobalGameStateToCache(struct UWorld* InWorld); // Offset: 0x103f46f1c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIStateInfoManager.GetDiffGlobalGameStateToCacheGeneral
	// Flags: [Final|Native|Public]
	void GetDiffGlobalGameStateToCacheGeneral(struct UWorld* InWorld); // Offset: 0x103f46ea0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIStateInfoManager.GetDiffAllPlayerAIStateInfoToCacheGeneral
	// Flags: [Final|Native|Public]
	void GetDiffAllPlayerAIStateInfoToCacheGeneral(struct UWorld* InWorld); // Offset: 0x103f46e24 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIStateInfoManager.GetAllPlayerStateInfoToCache
	// Flags: [Final|Native|Public]
	void GetAllPlayerStateInfoToCache(struct UWorld* InWorld); // Offset: 0x103f46da8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAIStateInfoManager.EndRequestCache
	// Flags: [Native|Public]
	void EndRequestCache(); // Offset: 0x103f46d8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAIStateInfoManager.CollectCandidateAIStateInfoToCache
	// Flags: [Final|Native|Public|HasOutParms]
	void CollectCandidateAIStateInfoToCache(struct UWorld* InWorld, enum class EStatePlayerType CollectPlayerType, struct FAIActingCandidateData& CandidateData); // Offset: 0x103f46c68 // Return & Params: Num(3) Size(0x48)

	// Object Name: Function AI.MLAIStateInfoManager.CollectAIStateInfoToCache
	// Flags: [Final|Native|Public]
	void CollectAIStateInfoToCache(struct UWorld* InWorld, enum class EStatePlayerType CollectPlayerType, struct ASTExtraBaseCharacter* PlayerPawn); // Offset: 0x103f46b74 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class AI.MLAISubSystem
// Size: 0xa58 // Inherited bytes: 0x30
struct UMLAISubSystem : UWorldSubsystem {
	// Fields
	struct FScriptMulticastDelegate OnAIStateRequestEnd; // Offset: 0x30 // Size: 0x10
	MapProperty CachePlayerDamageInfo; // Offset: 0x40 // Size: 0x50
	MapProperty CacheVehicleDamageInfo; // Offset: 0x90 // Size: 0x50
	IntProperty MaxCacheDamageInfoNum; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
	struct TArray<struct UAIBasicStateInfoComponent*> AIStateInfoComps; // Offset: 0xe8 // Size: 0x10
	struct TArray<struct FBulletHoleRecordInfo> CacheBulletHoles; // Offset: 0xf8 // Size: 0x10
	struct TArray<IntProperty> PlayerAvailableBackpackItemTypes; // Offset: 0x108 // Size: 0x10
	struct TArray<StrProperty> TeammateStateWhiteList; // Offset: 0x118 // Size: 0x10
	struct TArray<struct TWeakObjectPtr<struct AAirDropBoxActor>> AirDropBoxActors; // Offset: 0x128 // Size: 0x10
	char pad_0x138[0x3c0]; // Offset: 0x138 // Size: 0x3c0
	MapProperty AlreadySendDeadStateMap; // Offset: 0x4f8 // Size: 0x50
	char pad_0x548[0x8]; // Offset: 0x548 // Size: 0x08
	struct FRedZoneState CacheRedZoneInfo; // Offset: 0x550 // Size: 0x30
	float AirAttackTotalTime; // Offset: 0x580 // Size: 0x04
	char pad_0x584[0x4]; // Offset: 0x584 // Size: 0x04
	struct UAirAttackComponent* AirAttackComp; // Offset: 0x588 // Size: 0x08
	struct FBRBaseGlobalGameState GlobalGameState; // Offset: 0x590 // Size: 0xf0
	struct TArray<struct FSpecialZoneState> SpecialZones; // Offset: 0x680 // Size: 0x10
	char pad_0x690[0x70]; // Offset: 0x690 // Size: 0x70
	MapProperty CachePlayerRevivalTypes; // Offset: 0x700 // Size: 0x50
	struct UMLAIStateInfoManager* MLAIStateInfoManager; // Offset: 0x750 // Size: 0x08
	MapProperty VoiceRoomInfoMap; // Offset: 0x758 // Size: 0x50
	MapProperty VoiceServerURLMap; // Offset: 0x7a8 // Size: 0x50
	MapProperty ItemDurabilityMap; // Offset: 0x7f8 // Size: 0x50
	IntProperty AirDropTag; // Offset: 0x848 // Size: 0x04
	char pad_0x84C[0x4]; // Offset: 0x84c // Size: 0x04
	float ProduceSoundInterval; // Offset: 0x850 // Size: 0x04
	IntProperty nCanJumpToSky; // Offset: 0x854 // Size: 0x04
	IntProperty nNewbieRealHiddenScore; // Offset: 0x858 // Size: 0x04
	IntProperty nNewbieMatchCount; // Offset: 0x85c // Size: 0x04
	IntProperty nModGameType; // Offset: 0x860 // Size: 0x04
	IntProperty OverrideMapID; // Offset: 0x864 // Size: 0x04
	SetProperty TeammateMLAITeamIDSet; // Offset: 0x868 // Size: 0x50
	struct TArray<uint32_t> SilentMLAIList; // Offset: 0x8b8 // Size: 0x10
	bool WhitelistPlayerStatesSwitch; // Offset: 0x8c8 // Size: 0x01
	char pad_0x8C9[0x7]; // Offset: 0x8c9 // Size: 0x07
	struct TArray<uint32_t> PlayerWhitelist; // Offset: 0x8d0 // Size: 0x10
	MapProperty PlayerWhiteMercenary2MasterMap; // Offset: 0x8e0 // Size: 0x50
	bool IncludesMasterTeammatesSwitch; // Offset: 0x930 // Size: 0x01
	char pad_0x931[0x3]; // Offset: 0x931 // Size: 0x03
	float MercenaryPerceptionDist; // Offset: 0x934 // Size: 0x04
	float MasterPerceptionDist; // Offset: 0x938 // Size: 0x04
	float UpdateMercenaryPlayerWhiteInterval; // Offset: 0x93c // Size: 0x04
	SetProperty AICheckVisibilityFilteredActors; // Offset: 0x940 // Size: 0x50
	struct TArray<struct TWeakObjectPtr<struct UAIPerceptionDynamicItemComponent>> CachedDynamicItemComponents; // Offset: 0x990 // Size: 0x10
	struct TArray<struct TWeakObjectPtr<struct UAIPerceptionDynamicItemComponent>> CachedDestructibleItemComponents; // Offset: 0x9a0 // Size: 0x10
	char pad_0x9B0[0x58]; // Offset: 0x9b0 // Size: 0x58
	struct TArray<struct ASpecialZoneActor*> CacheDynamicSpecialZone; // Offset: 0xa08 // Size: 0x10
	struct TArray<struct ASpecialZoneActor*> PendingUpdateSpecialZones; // Offset: 0xa18 // Size: 0x10
	char pad_0xA28[0x18]; // Offset: 0xa28 // Size: 0x18
	struct ABattleRoyaleGameMode* CurGameMode; // Offset: 0xa40 // Size: 0x08
	char pad_0xA48[0x8]; // Offset: 0xa48 // Size: 0x08
	struct UDataTableProxy* ItemTable; // Offset: 0xa50 // Size: 0x08

	// Functions

	// Object Name: Function AI.MLAISubSystem.UpdateSpecialZoneStateChanged
	// Flags: [Final|Native|Public]
	void UpdateSpecialZoneStateChanged(struct ASpecialZoneActor* InSpecialZone); // Offset: 0x103f4ab48 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.UpdateSpecialZoneInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void UpdateSpecialZoneInfo(struct FSpecialZoneState& NewZoneInfo); // Offset: 0x103f4aa74 // Return & Params: Num(1) Size(0x88)

	// Object Name: Function AI.MLAISubSystem.UpdateRedZoneState
	// Flags: [Final|Native|Public]
	void UpdateRedZoneState(struct UWorld* InWorld); // Offset: 0x103f4a9f8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.UpdateMercenaryPlayerWhite
	// Flags: [Final|Native|Public]
	void UpdateMercenaryPlayerWhite(); // Offset: 0x103f4a9e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAISubSystem.UpdateAirDropBoxStates
	// Flags: [Final|Native|Public]
	void UpdateAirDropBoxStates(); // Offset: 0x103f4a9d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAISubSystem.UnregisterSpecialMapping
	// Flags: [Final|Native|Public]
	void UnregisterSpecialMapping(StrProperty Key); // Offset: 0x103f4a938 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.UnregisterDynamicItemComponent
	// Flags: [Final|Native|Public]
	void UnregisterDynamicItemComponent(struct UAIPerceptionDynamicItemComponent* InDynamicItemComp); // Offset: 0x103f4a8bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.UnregisterDestructibleItemComponent
	// Flags: [Final|Native|Public]
	void UnregisterDestructibleItemComponent(struct UAIPerceptionDynamicItemComponent* InComp); // Offset: 0x103f4a840 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.StartRequestCache
	// Flags: [Final|Native|Public]
	void StartRequestCache(); // Offset: 0x103f4a82c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAISubSystem.SetWhitelistPlayerStatesSwitch
	// Flags: [Final|Native|Public]
	void SetWhitelistPlayerStatesSwitch(bool InSwitch, bool InReset, bool InCheckGlobalState); // Offset: 0x103f4a718 // Return & Params: Num(3) Size(0x3)

	// Object Name: Function AI.MLAISubSystem.SetVehicleWeekPointConfig
	// Flags: [Final|Native|Public]
	void SetVehicleWeekPointConfig(MapProperty InVehicleWeekPointConfig); // Offset: 0x103f4a658 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetUseTablePool
	// Flags: [Final|Native|Public]
	void SetUseTablePool(IntProperty InUseTablePool); // Offset: 0x103f4a5dc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.SetStrAIAttribute
	// Flags: [Final|Native|Public]
	void SetStrAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, StrProperty InAttributeValue); // Offset: 0x103f4a4cc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.SetReportAllDynamicItems
	// Flags: [Final|Native|Public]
	void SetReportAllDynamicItems(bool bInEnable); // Offset: 0x103f4a448 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAISubSystem.SetPlayerRevivalType
	// Flags: [Final|Native|Public]
	void SetPlayerRevivalType(uint32_t InPlayerKey, IntProperty InRevivalType); // Offset: 0x103f4a394 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.SetPlayerAttributeModifyCompConfig
	// Flags: [Final|Native|Public]
	void SetPlayerAttributeModifyCompConfig(MapProperty InAttributeModifyCompConfig); // Offset: 0x103f4a2d4 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetPawnStateConfig
	// Flags: [Final|Native|Public]
	void SetPawnStateConfig(MapProperty InPawnStateConfig); // Offset: 0x103f4a214 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetOverrideMapID
	// Flags: [Final|Native|Public]
	void SetOverrideMapID(IntProperty InOverrideMapID); // Offset: 0x103f4a198 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.SetOpenBTCameraInfo
	// Flags: [Final|Native|Public]
	void SetOpenBTCameraInfo(bool InOpenBTCameraInfo); // Offset: 0x103f4a114 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAISubSystem.SetNonMLAIBuffConfig
	// Flags: [Final|Native|Public]
	void SetNonMLAIBuffConfig(MapProperty InBuffIDs); // Offset: 0x103f4a054 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetNewbieRealHiddenScore
	// Flags: [Final|Native|Public]
	void SetNewbieRealHiddenScore(IntProperty InNewbieRealHiddenScore); // Offset: 0x103f49fd8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.SetNewbieMatchCount
	// Flags: [Final|Native|Public]
	void SetNewbieMatchCount(IntProperty InNewbieMatchCount); // Offset: 0x103f49f5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.SetNeedAllInfo
	// Flags: [Final|Native|Static|Public]
	void SetNeedAllInfo(bool bInNeedAllInfo); // Offset: 0x103f49ee0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAISubSystem.SetModGameType
	// Flags: [Final|Native|Public]
	void SetModGameType(IntProperty InModGameType); // Offset: 0x103f49e64 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.SetMLAIStateInfoManager
	// Flags: [Final|Native|Public]
	void SetMLAIStateInfoManager(struct UMLAIStateInfoManager* InMLAIStateInfoManager); // Offset: 0x103f49de8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.SetMLAIBuffConfig
	// Flags: [Final|Native|Public]
	void SetMLAIBuffConfig(MapProperty InBuffIDs); // Offset: 0x103f49d28 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetIntAIAttribute
	// Flags: [Final|Native|Public]
	void SetIntAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, uint64 InAttributeValue); // Offset: 0x103f49c38 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.SetCDSkillConfig
	// Flags: [Final|Native|Public]
	void SetCDSkillConfig(MapProperty InAttributeCDSkillConfigs); // Offset: 0x103f49b78 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetBackpackItemUpdatedMapSwitch
	// Flags: [Final|Native|Static|Public]
	void SetBackpackItemUpdatedMapSwitch(bool bInSwitch); // Offset: 0x103f49afc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAISubSystem.SetAirDropLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void SetAirDropLocation(IntProperty InAirDropTag, struct FVector& AirDropLocation); // Offset: 0x103f49a38 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.SetAIAttributeModifyCompConfig
	// Flags: [Final|Native|Public]
	void SetAIAttributeModifyCompConfig(MapProperty InAttributeModifyCompConfig); // Offset: 0x103f49978 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AI.MLAISubSystem.SetAIAttribute_CastEnergyWithCount
	// Flags: [Final|Native|Public]
	void SetAIAttribute_CastEnergyWithCount(uint32_t InPlayerKey, uint32_t InAttributeID, IntProperty InCurCount, float InCurEnergy, float InLastActiveTime, IntProperty InMaxCount, float InMaxEnergy, float InDeltaEnergy); // Offset: 0x103f49764 // Return & Params: Num(8) Size(0x20)

	// Object Name: Function AI.MLAISubSystem.SetAIAttribute
	// Flags: [Final|Native|Public]
	void SetAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, float InAttributeValue); // Offset: 0x103f49674 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.MLAISubSystem.ResetAttributeIDToPlayerKeysMap
	// Flags: [Final|Native|Public]
	void ResetAttributeIDToPlayerKeysMap(uint32_t InAttributeID, struct TArray<uint32_t> InPlayerKeys); // Offset: 0x103f49550 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.RemoveSpecialZoneInfo
	// Flags: [Final|Native|Public]
	void RemoveSpecialZoneInfo(uint32_t ZoneID, uint32_t Type); // Offset: 0x103f4949c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.RemoveMercenary2MasterMap
	// Flags: [Final|Native|Public]
	void RemoveMercenary2MasterMap(struct APawn* MercenaryAI, struct APawn* Master); // Offset: 0x103f493e8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.RemoveFromSilentMLAIList
	// Flags: [Final|Native|Public]
	void RemoveFromSilentMLAIList(uint32_t InPlayerKey); // Offset: 0x103f4936c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.RemoveFromPlayerWhitelist
	// Flags: [Final|Native|Public]
	void RemoveFromPlayerWhitelist(uint32_t InPlayerKey); // Offset: 0x103f492f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.RemoveAICheckVisibilityFilteredActor
	// Flags: [Final|Native|Public]
	void RemoveAICheckVisibilityFilteredActor(uint32_t ActorId); // Offset: 0x103f49274 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.RegisterSpecialMapping
	// Flags: [Final|Native|Public]
	void RegisterSpecialMapping(StrProperty Key, IntProperty Value); // Offset: 0x103f4919c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AI.MLAISubSystem.RegisterDynamicItemComponent
	// Flags: [Final|Native|Public]
	void RegisterDynamicItemComponent(struct UAIPerceptionDynamicItemComponent* InDynamicItemComp); // Offset: 0x103f49120 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.RegisterDestructibleItemComponent
	// Flags: [Final|Native|Public]
	void RegisterDestructibleItemComponent(struct UAIPerceptionDynamicItemComponent* InComp); // Offset: 0x103f490a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.OnVehicleDamageInfo
	// Flags: [Final|Native|Public]
	void OnVehicleDamageInfo(struct AController* InstigatorController, struct AController* VictimController, IntProperty DamageTypeId, float Damage, bool bIsFatalHealthCost, struct AActor* DamageCauser, struct AActor* VictimVehicle); // Offset: 0x103f48eb8 // Return & Params: Num(7) Size(0x30)

	// Object Name: Function AI.MLAISubSystem.OnPlayerStartFire
	// Flags: [Final|Native|Public]
	void OnPlayerStartFire(uint32_t PlayerKey, IntProperty Count); // Offset: 0x103f48e04 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.OnPlayerPickUpItem
	// Flags: [Final|Native|Public]
	void OnPlayerPickUpItem(uint32_t InPlayerKey); // Offset: 0x103f48d88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.OnPlayerDamageInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void OnPlayerDamageInfo(struct ASTExtraPlayerState* InstigatorPlayerState, struct ASTExtraPlayerState* VictimPlayerState, float Damage, struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, struct AActor* DamageCauser, bool bIsNearDeathHealthCost); // Offset: 0x103f48b34 // Return & Params: Num(8) Size(0x39)

	// Object Name: Function AI.MLAISubSystem.OnItemStateChanged
	// Flags: [Final|Native|Public|HasDefaults]
	void OnItemStateChanged(struct FVector Location); // Offset: 0x103f48ab8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AI.MLAISubSystem.OnAirDropBoxSpawn
	// Flags: [Final|Native|Public]
	void OnAirDropBoxSpawn(struct AAirDropBoxActor* AirDropBoxActor); // Offset: 0x103f48a3c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.OnAirAttackInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void OnAirAttackInfo(enum class EAirAttackInfo airattacktype, IntProperty waveIndex, struct FAirAttackOrder& InAirAttackOrder, struct FVector& InAirAttackArea); // Offset: 0x103f4889c // Return & Params: Num(4) Size(0x64)

	// Object Name: Function AI.MLAISubSystem.IsAvailableBackpackItemType
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool IsAvailableBackpackItemType(struct FItemDefineID& DefineID); // Offset: 0x103f487fc // Return & Params: Num(2) Size(0x19)

	// Object Name: Function AI.MLAISubSystem.IsAIBotGame
	// Flags: [Final|Native|Public]
	bool IsAIBotGame(); // Offset: 0x103f487c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAISubSystem.InsertPlayerWhitelist
	// Flags: [Final|Native|Public]
	void InsertPlayerWhitelist(uint32_t InPlayerKey); // Offset: 0x103f4874c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.InsertIntoSilentMLAIList
	// Flags: [Final|Native|Public]
	void InsertIntoSilentMLAIList(uint32_t InPlayerKey); // Offset: 0x103f486d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.GetVoiceRoomInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void GetVoiceRoomInfo(struct TArray<struct FBattleVoiceRoomInfo>& BattleVoiceRoomInfos); // Offset: 0x103f48628 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.GetServerIPAddress
	// Flags: [Final|Native|Public]
	StrProperty GetServerIPAddress(); // Offset: 0x103f485c4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.GetLossTime
	// Flags: [Final|Native|Public]
	float GetLossTime(struct ASTExtraPlayerController* PlayerController); // Offset: 0x103f48538 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AI.MLAISubSystem.GetItemDurability
	// Flags: [Final|Native|Public]
	IntProperty GetItemDurability(IntProperty InTypeSpecificID); // Offset: 0x103f484ac // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.GetCacheStrAIAttributes
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCacheStrAIAttributes(uint32_t InPlayerKey, struct TArray<struct FStrAIAttribute>& StrAttributes); // Offset: 0x103f483c8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.GetCacheIntAIAttributes
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCacheIntAIAttributes(uint32_t InPlayerKey, struct TArray<struct FIntAIAttribute>& IntAttributes); // Offset: 0x103f482e4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.GetCacheAIAttributes
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCacheAIAttributes(uint32_t InPlayerKey, struct TArray<struct FAIAttribute>& Attributes); // Offset: 0x103f48200 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.GetAndCheckAirDopTag
	// Flags: [Final|Native|Public]
	IntProperty GetAndCheckAirDopTag(); // Offset: 0x103f481cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.FindPlayerWhiteRange
	// Flags: [Final|Native|Public|HasDefaults]
	void FindPlayerWhiteRange(struct FVector InLocation, float InRange); // Offset: 0x103f48114 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AI.MLAISubSystem.FindMasterTeamMateList
	// Flags: [Final|Native|Public]
	void FindMasterTeamMateList(struct APawn* Master); // Offset: 0x103f48098 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.EndRequestCache
	// Flags: [Final|Native|Public]
	void EndRequestCache(); // Offset: 0x103f48084 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAISubSystem.ClearSpecialMappings
	// Flags: [Final|Native|Public]
	void ClearSpecialMappings(); // Offset: 0x103f48070 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAISubSystem.ClearAttributeIDToPlayerKeysMap
	// Flags: [Final|Native|Public]
	void ClearAttributeIDToPlayerKeysMap(uint32_t InAttributeID); // Offset: 0x103f47ff4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.ChangeMLAIInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void ChangeMLAIInfo(struct AFakePlayerAIController* AIController, StrProperty Name, uint64 DisplayUID, struct FPlayerOBInfo& OBInfo); // Offset: 0x103f47e88 // Return & Params: Num(4) Size(0x78)

	// Object Name: Function AI.MLAISubSystem.CanGetState
	// Flags: [Final|Native|Public]
	bool CanGetState(uint32_t InPlayerKey); // Offset: 0x103f47dfc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function AI.MLAISubSystem.CanFindInSilentMLAIList
	// Flags: [Final|Native|Public]
	bool CanFindInSilentMLAIList(uint32_t InPlayerKey); // Offset: 0x103f47d70 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function AI.MLAISubSystem.AddVoiceServerURLInfo
	// Flags: [Final|Native|Public]
	void AddVoiceServerURLInfo(uint32_t PlayerKey, StrProperty BattleVoiceServerURL); // Offset: 0x103f47c9c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.AddVoiceRoomInfo
	// Flags: [Final|Native|Public]
	void AddVoiceRoomInfo(uint32_t TeamID, StrProperty BattleVoiceRoomID); // Offset: 0x103f47bc8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AI.MLAISubSystem.AddTeammateMLAITeamID
	// Flags: [Final|Native|Public]
	void AddTeammateMLAITeamID(uint32_t TeamID); // Offset: 0x103f47b4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.MLAISubSystem.AddPendingUpdateSpecialZone
	// Flags: [Final|Native|Public]
	void AddPendingUpdateSpecialZone(struct ASpecialZoneActor* InSpecialZone); // Offset: 0x103f47ad0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAISubSystem.AddMercenary2MasterMap
	// Flags: [Final|Native|Public]
	void AddMercenary2MasterMap(struct APawn* MercenaryAI, struct APawn* Master, bool bIncludesTeammates); // Offset: 0x103f479d8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AI.MLAISubSystem.AddAICheckVisibilityFilteredActor
	// Flags: [Final|Native|Public]
	void AddAICheckVisibilityFilteredActor(uint32_t ActorId); // Offset: 0x103f4795c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AI.MLAITrainingComponent
// Size: 0x1b0 // Inherited bytes: 0x178
struct UMLAITrainingComponent : UActorComponent {
	// Fields
	bool IsBeginRequestAIState; // Offset: 0x178 // Size: 0x01
	bool IsEndRequestAIState; // Offset: 0x179 // Size: 0x01
	bool bPauseGameAfterSendPacket; // Offset: 0x17a // Size: 0x01
	char pad_0x17B[0x5]; // Offset: 0x17b // Size: 0x05
	struct APlayerState* PauseGamePlayerState; // Offset: 0x180 // Size: 0x08
	bool bIsPausing; // Offset: 0x188 // Size: 0x01
	char pad_0x189[0x27]; // Offset: 0x189 // Size: 0x27

	// Functions

	// Object Name: Function AI.MLAITrainingComponent.StopRunnable
	// Flags: [Final|Native|Public]
	void StopRunnable(); // Offset: 0x103f4c504 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.MLAITrainingComponent.SetPauseGamePlayerState
	// Flags: [Final|Native|Public]
	void SetPauseGamePlayerState(struct APlayerState* InPlayerState); // Offset: 0x103f4c488 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.MLAITrainingComponent.SetPause
	// Flags: [Final|Native|Public]
	bool SetPause(bool bInPause, float InPauseTime); // Offset: 0x103f4c3b8 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function AI.MLAITrainingComponent.SendAIStateRequest
	// Flags: [Final|Native|Public]
	void SendAIStateRequest(struct TArray<char> Packet); // Offset: 0x103f4c2d4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.MLAITrainingComponent.IsRequestAIState
	// Flags: [Final|Native|Public]
	bool IsRequestAIState(); // Offset: 0x103f4c2a0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.MLAITrainingComponent.InitRunnable
	// Flags: [Final|Native|Public]
	void InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval); // Offset: 0x103f4c1b0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AI.MLAITrainingComponent.EndRequestAIState
	// Flags: [Final|Native|Public]
	void EndRequestAIState(); // Offset: 0x103f4c19c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.MPStateInfoCollector
// Size: 0x3b8 // Inherited bytes: 0x58
struct UMPStateInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffMPBaseAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x118
	struct FMPBaseGlobalGameState CacheGlobalGameState; // Offset: 0x260 // Size: 0x40
	struct FMPBaseGlobalGameState LastGlobalGameState; // Offset: 0x2a0 // Size: 0x40
	struct FMPBaseGlobalGameState DiffGlobalGameState; // Offset: 0x2e0 // Size: 0x40
	struct FDiffMPBaseGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x320 // Size: 0x68
	char pad_0x388[0x30]; // Offset: 0x388 // Size: 0x30
};

// Object Name: Class AI.SpecialZoneShapeComponent
// Size: 0x9d0 // Inherited bytes: 0x9d0
struct USpecialZoneShapeComponent : UPrimitiveComponent {
	// Fields
	float SphereRadius; // Offset: 0x9c8 // Size: 0x04
};

// Object Name: Class AI.SpecialZoneActor
// Size: 0x6c0 // Inherited bytes: 0x570
struct ASpecialZoneActor : ALuaActor {
	// Fields
	IntProperty ZoneID; // Offset: 0x56c // Size: 0x04
	float Radius; // Offset: 0x570 // Size: 0x04
	IntProperty Type; // Offset: 0x574 // Size: 0x04
	bool IsDynamic; // Offset: 0x578 // Size: 0x01
	IntProperty CustomState; // Offset: 0x57c // Size: 0x04
	MapProperty CustomAttributeMap; // Offset: 0x580 // Size: 0x50
	MapProperty IntCustomAttributeMap; // Offset: 0x5d0 // Size: 0x50
	bool IsDestructibleMesh; // Offset: 0x620 // Size: 0x01
	bool IsInstanced; // Offset: 0x621 // Size: 0x01
	char pad_0x623[0x1]; // Offset: 0x623 // Size: 0x01
	IntProperty InstancedMaxNum; // Offset: 0x624 // Size: 0x04
	MapProperty StaticMeshNameToType; // Offset: 0x628 // Size: 0x50
	bool CheckNearHaveAI; // Offset: 0x678 // Size: 0x01
	char pad_0x679[0x3]; // Offset: 0x679 // Size: 0x03
	float CheckAIDist; // Offset: 0x67c // Size: 0x04
	struct USpecialZoneShapeComponent* SpecialZoneShapeComponent; // Offset: 0x680 // Size: 0x08
	struct AActor* CacheParentActor; // Offset: 0x688 // Size: 0x08
	char pad_0x690[0x4]; // Offset: 0x690 // Size: 0x04
	uint32_t ExtraState; // Offset: 0x694 // Size: 0x04
	float Health; // Offset: 0x698 // Size: 0x04
	bool IsSpawnBTAINeedCheck; // Offset: 0x69c // Size: 0x01
	enum class ESpecialZoneType SpecialZoneType; // Offset: 0x69d // Size: 0x01
	char pad_0x69E[0xa]; // Offset: 0x69e // Size: 0x0a
	struct AAIWorldVolume* AIWorldVolume; // Offset: 0x6a8 // Size: 0x08
	struct UInstancedStaticMeshComponent* CacheInstancedMeshComp; // Offset: 0x6b0 // Size: 0x08
	struct USTDestructionComponent* CacheDestructibleMeshComp; // Offset: 0x6b8 // Size: 0x08

	// Functions

	// Object Name: Function AI.SpecialZoneActor.UpdateType
	// Flags: [Final|Native|Public]
	void UpdateType(IntProperty InType); // Offset: 0x103f4d1e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.SpecialZoneActor.UpdateIntCustomAttributeValue
	// Flags: [Final|Native|Public|HasOutParms]
	void UpdateIntCustomAttributeValue(uint32_t& InCustomAttributeID, uint64& InValue, bool& bRemove); // Offset: 0x103f4d0bc // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AI.SpecialZoneActor.UpdateHealth
	// Flags: [Final|Native|Public]
	void UpdateHealth(float InHealth); // Offset: 0x103f4d040 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.SpecialZoneActor.UpdateExtraState
	// Flags: [Final|Native|Public]
	void UpdateExtraState(uint32_t InExtraState); // Offset: 0x103f4cfc4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.SpecialZoneActor.UpdateCustomState
	// Flags: [Final|Native|Public]
	void UpdateCustomState(IntProperty InCustomState); // Offset: 0x103f4cf48 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.SpecialZoneActor.UpdateCustomAttributeValue
	// Flags: [Final|Native|Public|HasOutParms]
	void UpdateCustomAttributeValue(uint32_t& InCustomAttributeID, float& InValue, bool& bRemove); // Offset: 0x103f4ce1c // Return & Params: Num(3) Size(0x9)

	// Object Name: Function AI.SpecialZoneActor.HandleFragmentsStateChanged
	// Flags: [Final|Native|Public|HasOutParms]
	void HandleFragmentsStateChanged(IntProperty FragmentItemIndex, enum class EPhotonFracturedMeshFragmentState State, struct TArray<enum class EPhotonFracturedMeshFragmentState>& FragmentState); // Offset: 0x103f4ccfc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AI.SpecialZoneActor.GetSpecialZoneState
	// Flags: [Final|Native|Public]
	struct FSpecialZoneState GetSpecialZoneState(); // Offset: 0x103f4cc98 // Return & Params: Num(1) Size(0x88)

	// Object Name: Function AI.SpecialZoneActor.GetIntCustomAttributeList
	// Flags: [Final|Native|Public|HasOutParms]
	void GetIntCustomAttributeList(struct TArray<struct FIntAIAttribute>& OutIntCustomAttributeList); // Offset: 0x103f4cbf0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.SpecialZoneActor.GetCustomAttributeList
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCustomAttributeList(struct TArray<struct FAIAttribute>& OutCustomAttributeList); // Offset: 0x103f4cb48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AI.SpecialZoneActor.ClearCustomAttributeMap
	// Flags: [Final|Native|Public]
	void ClearCustomAttributeMap(); // Offset: 0x103f4cb34 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.STStrategyLocation_Range
// Size: 0x150 // Inherited bytes: 0x100
struct USTStrategyLocation_Range : USTStrategyLocation {
	// Fields
	char bUseNavmesh : 1; // Offset: 0x100 // Size: 0x01
	char pad_0x100_1 : 7; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
	float Range; // Offset: 0x104 // Size: 0x04
	IntProperty MaxTryTimes; // Offset: 0x108 // Size: 0x04
	char bCheckPlayerSight : 1; // Offset: 0x10c // Size: 0x01
	char pad_0x10C_1 : 7; // Offset: 0x10c // Size: 0x01
	char pad_0x10D[0x3]; // Offset: 0x10d // Size: 0x03
	float VerticalOffset; // Offset: 0x110 // Size: 0x04
	float PlayerViewDistance; // Offset: 0x114 // Size: 0x04
	enum class ECollisionChannel CollisionChannel; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x3]; // Offset: 0x119 // Size: 0x03
	float MaxLocationTraceHeightZ; // Offset: 0x11c // Size: 0x04
	struct TArray<struct FSpawnArea> CustomAreas; // Offset: 0x120 // Size: 0x10
	bool bOnlyOnLandscape; // Offset: 0x130 // Size: 0x01
	char pad_0x131[0x7]; // Offset: 0x131 // Size: 0x07
	struct FName LandscapeTag; // Offset: 0x138 // Size: 0x08
	char pad_0x140[0x10]; // Offset: 0x140 // Size: 0x10

	// Functions

	// Object Name: Function AI.STStrategyLocation_Range.ModifyBaseLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void ModifyBaseLocation(struct FVector InLocation); // Offset: 0x103f4d9fc // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AI.STStrategyLocation_Range.GetSpawnLocation
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetSpawnLocation(struct AActor* Requester, IntProperty ReferenceCount, struct TArray<struct FSpawnSpotInfo>& OutArr); // Offset: 0x103f4d8c4 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function AI.STStrategyLocation_Range.AddSpawnArea
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddSpawnArea(struct FSpawnArea NewArea, bool ForceAdd); // Offset: 0x103f4d800 // Return & Params: Num(2) Size(0x21)

	// Object Name: Function AI.STStrategyLocation_Range.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x103f4d77c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AI.STStrategySpecies_Candidate
// Size: 0x108 // Inherited bytes: 0x108
struct USTStrategySpecies_Candidate : USTStrategySpecies {
	// Functions

	// Object Name: Function AI.STStrategySpecies_Candidate.Supply
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FUnitConfig> Supply(IntProperty ReferencedCount, struct TArray<struct FSpawnSpotInfo>& SpotSpecies); // Offset: 0x103f50484 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function AI.STStrategySpecies_Candidate.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x103f50400 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AI.STStrategySpecies_Lua
// Size: 0x108 // Inherited bytes: 0x108
struct USTStrategySpecies_Lua : USTStrategySpecies {
	// Functions

	// Object Name: Function AI.STStrategySpecies_Lua.Supply
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FUnitConfig> Supply(IntProperty ReferencedCount, struct TArray<struct FSpawnSpotInfo>& SpotSpecies); // Offset: 0x103f50798 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function AI.STStrategySpecies_Lua.LuaSupply
	// Flags: [Event|Public|BlueprintEvent]
	void LuaSupply(IntProperty ReferencedCount); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AI.STStrategyTiming_Event
// Size: 0x110 // Inherited bytes: 0xf0
struct USTStrategyTiming_Event : USTStrategyTiming {
	// Fields
	StrProperty EventID; // Offset: 0xf0 // Size: 0x10
	StrProperty EventName; // Offset: 0x100 // Size: 0x10

	// Functions

	// Object Name: Function AI.STStrategyTiming_Event.TickStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void TickStrategy(float DeltaTime); // Offset: 0x103f50b64 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast
	// Flags: [Final|Native|Public]
	void OnSpawnEventBroadcast(uint32_t SpawnerID); // Offset: 0x103f50ae8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.STStrategyTiming_Event.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x103f50a64 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AI.TeammateMLAIControllerComponent
// Size: 0x680 // Inherited bytes: 0x238
struct UTeammateMLAIControllerComponent : ULuaActorComponent {
	// Fields
	StrProperty DefaultLuaFilePath; // Offset: 0x238 // Size: 0x10
	struct FGameModeAIPlayerParams AIParams; // Offset: 0x248 // Size: 0x408
	uint32_t AILevel; // Offset: 0x650 // Size: 0x04
	uint32_t MLAIStyle; // Offset: 0x654 // Size: 0x04
	uint32_t TargetPlayerKey; // Offset: 0x658 // Size: 0x04
	char pad_0x65C[0x4]; // Offset: 0x65c // Size: 0x04
	struct ASTExtraPlayerController* OwnerPlayerController; // Offset: 0x660 // Size: 0x08
	float DefaultExitTime; // Offset: 0x668 // Size: 0x04
	char pad_0x66C[0x4]; // Offset: 0x66c // Size: 0x04
	struct FTimerHandle TeammateMLAIExitTimer; // Offset: 0x670 // Size: 0x08
	bool bIsTakeOverTeammate; // Offset: 0x678 // Size: 0x01
	char pad_0x679[0x7]; // Offset: 0x679 // Size: 0x07

	// Functions

	// Object Name: Function AI.TeammateMLAIControllerComponent.SetMLAIStyle
	// Flags: [Final|Native|Public]
	void SetMLAIStyle(uint32_t NewAIStyle); // Offset: 0x103f51150 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.TeammateMLAIControllerComponent.SetIsMLAI
	// Flags: [Final|Native|Public]
	void SetIsMLAI(bool InIsMLAI); // Offset: 0x103f510cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.TeammateMLAIControllerComponent.SetAIParams
	// Flags: [Final|Native|Public|HasOutParms]
	void SetAIParams(struct FGameModeAIPlayerParams& InAIParams); // Offset: 0x103f51018 // Return & Params: Num(1) Size(0x408)

	// Object Name: Function AI.TeammateMLAIControllerComponent.SetAILevel
	// Flags: [Final|Native|Public]
	void SetAILevel(uint32_t NewAILevel); // Offset: 0x103f50f9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.TeammateMLAIControllerComponent.OnTeammateMLAILost
	// Flags: [Final|Native|Public]
	void OnTeammateMLAILost(); // Offset: 0x103f50f88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.TeammateMLAIControllerComponent.OnTeammateMLAIExit
	// Flags: [Final|Native|Public|Const]
	void OnTeammateMLAIExit(); // Offset: 0x103f50f74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnControllerStateChanged(enum class EStateType StateType); // Offset: 0x103f50ef0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.TeammateMLAIControllerComponent.IsTakeOverTeammate
	// Flags: [Final|Native|Public|Const]
	bool IsTakeOverTeammate(); // Offset: 0x103f50ebc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.TeammateMLAIControllerComponent.GetMLAIStyle
	// Flags: [Final|Native|Public|Const]
	uint32_t GetMLAIStyle(); // Offset: 0x103f50e88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.TeammateMLAIControllerComponent.GetAIParams
	// Flags: [Final|Native|Public|Const]
	struct FGameModeAIPlayerParams GetAIParams(); // Offset: 0x103f50e50 // Return & Params: Num(1) Size(0x408)

	// Object Name: Function AI.TeammateMLAIControllerComponent.GetAILevel
	// Flags: [Final|Native|Public|Const]
	uint32_t GetAILevel(); // Offset: 0x103f50e1c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AI.VehicleAIController
// Size: 0x940 // Inherited bytes: 0x8b0
struct AVehicleAIController : ABasicAIController {
	// Fields
	struct ASTExtraVehicleBase* ControlledVehicle; // Offset: 0x8b0 // Size: 0x08
	struct FAIVehicleStateData AIVehicleStateData; // Offset: 0x8b8 // Size: 0x80
	struct UAIBehaviorAdapter_VehicleBase* AIBehaviorAdapter; // Offset: 0x938 // Size: 0x08

	// Functions

	// Object Name: Function AI.VehicleAIController.SetCurEnemy
	// Flags: [Native|Public]
	void SetCurEnemy(struct APawn* NewEnemy); // Offset: 0x103f51730 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.VehicleAIController.GetVehiclePathFollow
	// Flags: [Final|Native|Public]
	struct UVehiclePathFollowingComponent* GetVehiclePathFollow(); // Offset: 0x103f516fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.VehicleAIController.GetCurEnemy
	// Flags: [Native|Public]
	struct APawn* GetCurEnemy(); // Offset: 0x103f516c0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AI.VehicleAIController.GetAIHitRate
	// Flags: [Native|Public]
	float GetAIHitRate(float Distance); // Offset: 0x103f5162c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AI.VehicleAIController.ExplodeAndDeath
	// Flags: [Native|Public]
	void ExplodeAndDeath(); // Offset: 0x103f51610 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.VehicleAIController.DelayInitVehicleWeapon
	// Flags: [Final|Native|Protected]
	void DelayInitVehicleWeapon(); // Offset: 0x103f515fc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AI.VehicleAIUserComponent
// Size: 0x368 // Inherited bytes: 0x368
struct UVehicleAIUserComponent : UVehicleUserComponentBase {
	// Functions

	// Object Name: Function AI.VehicleAIUserComponent.ServerVehicleLeanOut
	// Flags: [Native|Public|BlueprintCallable]
	void ServerVehicleLeanOut(bool bLeanOut); // Offset: 0x103f51f44 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.VehicleAIUserComponent.ServerExitVehicleEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ServerExitVehicleEx(bool bMustExit); // Offset: 0x103f51ec0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AI.VehicleAIUserComponent.ServerExitVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ServerExitVehicle(); // Offset: 0x103f51eac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.VehicleAIUserComponent.ServerEnterVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ServerEnterVehicle(struct ASTExtraVehicleBase* InVehicle, char SeatType); // Offset: 0x103f51df4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat
	// Flags: [Native|Public|BlueprintCallable]
	void ServerChangeVehicleSeat(IntProperty InSeatIndex); // Offset: 0x103f51d70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AI.VehicleAIUserComponent.MulticastExitVehicle
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void MulticastExitVehicle(); // Offset: 0x103f51d54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AI.VehicleAIUserComponent.MulticastEnterVehicle
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void MulticastEnterVehicle(struct ASTExtraVehicleBase* InVehicle, struct ASTExtraPlayerCharacter* Pawn, bool bSuccess, char SeatType, IntProperty SeatIndex); // Offset: 0x103f51bd4 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void MulticastChangeVehicleSeat(IntProperty InSeatIndex); // Offset: 0x103f51b50 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AI.VehicleCustomDamageEventComponent
// Size: 0x378 // Inherited bytes: 0x370
struct UVehicleCustomDamageEventComponent : UCustomDamageEventComponent {
	// Fields
	char pad_0x370[0x8]; // Offset: 0x370 // Size: 0x08

	// Functions

	// Object Name: Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged
	// Flags: [Final|Native|Public]
	void OnVehicleHPFuelChanged(float Hp, float Fuel); // Offset: 0x103f52330 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class AI.VehiclePathFollowingComponent
// Size: 0x370 // Inherited bytes: 0x348
struct UVehiclePathFollowingComponent : UPathFollowingComponent {
	// Fields
	float Writable_Throttle; // Offset: 0x344 // Size: 0x04
	char bWritable_SteeringOnly : 1; // Offset: 0x348 // Size: 0x01
	char bWritable_ThrottleOnly : 1; // Offset: 0x348 // Size: 0x01
	char pad_0x34C_2 : 6; // Offset: 0x34c // Size: 0x01
	char pad_0x34D[0x3]; // Offset: 0x34d // Size: 0x03
	struct UAIBehaviorAdapter_VehicleBase* VehicleAdapter; // Offset: 0x350 // Size: 0x08
	bool bPathDebug; // Offset: 0x358 // Size: 0x01
	char pad_0x359[0x17]; // Offset: 0x359 // Size: 0x17
};

// Object Name: Class AI.VehicleStateInfoCollector
// Size: 0x400 // Inherited bytes: 0x58
struct UVehicleStateInfoCollector : UStateInfoCollectorBase {
	// Fields
	MapProperty LastAllPlayerStateInfoMap; // Offset: 0x58 // Size: 0x50
	MapProperty CurrentAllPlayerStateInfoMap; // Offset: 0xa8 // Size: 0x50
	MapProperty CacheAllPlayersInfo; // Offset: 0xf8 // Size: 0x50
	struct FDiffVehicleAllPlayersInfo CacheDiffAllPlayersInfoGeneral; // Offset: 0x148 // Size: 0x108
	struct FVehicleGlobalGameState CacheGlobalGameState; // Offset: 0x250 // Size: 0x50
	struct FVehicleGlobalGameState LastGlobalGameState; // Offset: 0x2a0 // Size: 0x50
	struct FDiffVehicleGlobalGameState DiffGlobalGameStateGeneral; // Offset: 0x2f0 // Size: 0x78
	MapProperty CacheVehicleStates; // Offset: 0x368 // Size: 0x50
	char pad_0x3B8[0x48]; // Offset: 0x3b8 // Size: 0x48

	// Functions

	// Object Name: Function AI.VehicleStateInfoCollector.HandleGameModeStateChanged
	// Flags: [Final|Native|Public|HasOutParms]
	void HandleGameModeStateChanged(struct FGameModeStateChangedParams& Params); // Offset: 0x103f526f8 // Return & Params: Num(1) Size(0x10)
};

