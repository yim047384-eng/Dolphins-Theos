#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class SpawnSystem.SpawnSystemSettings
// Size: 0x68 // Inherited bytes: 0x38
struct USpawnSystemSettings : UDeveloperSettings {
	// Fields
	float TickFrequency; // Offset: 0x38 // Size: 0x04
	float SpawnUnitInterval; // Offset: 0x3c // Size: 0x04
	IntProperty TickingSpawnerThreshold; // Offset: 0x40 // Size: 0x04
	bool bShouldSpawnSystemLogout; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	IntProperty MaxWaitSpawnQueSize; // Offset: 0x48 // Size: 0x04
	float VisualDebugRange; // Offset: 0x4c // Size: 0x04
	struct FVector2D VisualDebugSpotCapsule; // Offset: 0x50 // Size: 0x08
	float SpotDrawThickness; // Offset: 0x58 // Size: 0x04
	float SpotDrawFlag; // Offset: 0x5c // Size: 0x04
	IntProperty SpawnerVisualDebugLevel; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04

	// Functions

	// Object Name: Function SpawnSystem.SpawnSystemSettings.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct USpawnSystemSettings* Get(); // Offset: 0x102302dc8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STSpawnerBase
// Size: 0x618 // Inherited bytes: 0x4b0
struct ASTSpawnerBase : AActor {
	// Fields
	char pad_0x4B0[0x60]; // Offset: 0x4b0 // Size: 0x60
	StrProperty LuaFilePath; // Offset: 0x510 // Size: 0x10
	struct USTStrategyTiming* SpawnTiming; // Offset: 0x520 // Size: 0x08
	struct USTStrategyLocation* SpawnLocation; // Offset: 0x528 // Size: 0x08
	struct USTStrategySpecies* SpawnSpecies; // Offset: 0x530 // Size: 0x08
	struct TArray<struct USTStrategyCond*> SpawnConditions; // Offset: 0x538 // Size: 0x10
	char bUseRegion : 1; // Offset: 0x548 // Size: 0x01
	char bDebugDraw : 1; // Offset: 0x548 // Size: 0x01
	char bUsable : 1; // Offset: 0x548 // Size: 0x01
	char bIsMLAI : 1; // Offset: 0x548 // Size: 0x01
	char pad_0x548_4 : 4; // Offset: 0x548 // Size: 0x01
	char pad_0x549[0x3]; // Offset: 0x549 // Size: 0x03
	IntProperty AILevel; // Offset: 0x54c // Size: 0x04
	IntProperty SpawnerCampID; // Offset: 0x550 // Size: 0x04
	enum class ESTSpawnerVolume VolumeType; // Offset: 0x554 // Size: 0x01
	char pad_0x555[0x3]; // Offset: 0x555 // Size: 0x03
	float SphereRadius; // Offset: 0x558 // Size: 0x04
	struct FVector BoxHalfExtent; // Offset: 0x55c // Size: 0x0c
	struct ASTSpawnSpot* SpawnSpotClass; // Offset: 0x568 // Size: 0x08
	struct FScriptMulticastDelegate OnSpawnUnitSuccessDelegate; // Offset: 0x570 // Size: 0x10
	struct FScriptMulticastDelegate OnSpawnedUnitDeadDelegate; // Offset: 0x580 // Size: 0x10
	uint32_t SpawnerID; // Offset: 0x590 // Size: 0x04
	IntProperty MaxUnitsCount; // Offset: 0x594 // Size: 0x04
	IntProperty MaxAliveCount; // Offset: 0x598 // Size: 0x04
	char pad_0x59C[0x4]; // Offset: 0x59c // Size: 0x04
	StrProperty SpawnerDescString; // Offset: 0x5a0 // Size: 0x10
	char bUseAsTrigger : 1; // Offset: 0x5b0 // Size: 0x01
	char bForceSpawn : 1; // Offset: 0x5b0 // Size: 0x01
	char pad_0x5B0_2 : 6; // Offset: 0x5b0 // Size: 0x01
	char bRecycle; // Offset: 0x5b1 // Size: 0x01
	char pad_0x5B2[0x6]; // Offset: 0x5b2 // Size: 0x06
	StrProperty SpawnerSnapshot; // Offset: 0x5b8 // Size: 0x10
	struct TArray<struct ASTSpawnSpot*> SpawnSpots; // Offset: 0x5c8 // Size: 0x10
	struct TArray<struct AActor*> AlivePawns; // Offset: 0x5d8 // Size: 0x10
	char bActive : 1; // Offset: 0x5e8 // Size: 0x01
	char bInitialized : 1; // Offset: 0x5e8 // Size: 0x01
	char bTimeIsRipe : 1; // Offset: 0x5e8 // Size: 0x01
	char pad_0x5E8_3 : 5; // Offset: 0x5e8 // Size: 0x01
	char pad_0x5E9[0x3]; // Offset: 0x5e9 // Size: 0x03
	IntProperty TotalSpawnedUnits; // Offset: 0x5ec // Size: 0x04
	struct USTSpawnSubsystem* SpawnSubsystem; // Offset: 0x5f0 // Size: 0x08
	char pad_0x5F8[0x10]; // Offset: 0x5f8 // Size: 0x10
	IntProperty WaitSpawn; // Offset: 0x608 // Size: 0x04
	char bPlayerEnterRegion : 1; // Offset: 0x60c // Size: 0x01
	char pad_0x60C_1 : 7; // Offset: 0x60c // Size: 0x01
	char pad_0x60D[0xb]; // Offset: 0x60d // Size: 0x0b

	// Functions

	// Object Name: Function SpawnSystem.STSpawnerBase.Thinking
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void Thinking(float DeltaTime); // Offset: 0x1023049fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.Switch
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Switch(bool IsSwitchOn); // Offset: 0x102304978 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.StopSpawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopSpawn(); // Offset: 0x102304964 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.SetSpawnerID
	// Flags: [Final|Native|Public]
	void SetSpawnerID(uint32_t ID); // Offset: 0x1023048ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.OnUnitSpawned
	// Flags: [Native|Public|HasOutParms]
	void OnUnitSpawned(struct AActor* NewUnit, struct FSTSpawnParam& SpawnParam, struct ASTSpawnerBase* Spawner); // Offset: 0x102304768 // Return & Params: Num(3) Size(0xe8)

	// Object Name: Function SpawnSystem.STSpawnerBase.OnUnitDead
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnUnitDead(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Offset: 0x1023046b0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SpawnSystem.STSpawnerBase.OnSpawnTimingRipe
	// Flags: [Native|Protected]
	void OnSpawnTimingRipe(bool IsRipe); // Offset: 0x102304624 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.OnSpawnerDeactivate
	// Flags: [Event|Protected|BlueprintEvent]
	void OnSpawnerDeactivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.OnSpawnerActivate
	// Flags: [Event|Protected|BlueprintEvent]
	void OnSpawnerActivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.OnRep_SpawnerID
	// Flags: [Final|Native|Protected]
	void OnRep_SpawnerID(); // Offset: 0x102304610 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.Multicast_SpawnerSnapshot
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	void Multicast_SpawnerSnapshot(StrProperty Timing, StrProperty Species, StrProperty Location, StrProperty Conditions, StrProperty Extra, bool IsActive, bool IsUsable); // Offset: 0x102304388 // Return & Params: Num(7) Size(0x52)

	// Object Name: Function SpawnSystem.STSpawnerBase.Multicast_AlivePawnsChange
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	void Multicast_AlivePawnsChange(struct APawn* Unit, bool IsBorn, bool IsAllDead); // Offset: 0x102304274 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function SpawnSystem.STSpawnerBase.ModifyMaxAlive
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ModifyMaxAlive(IntProperty NewAlive); // Offset: 0x1023041f8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.IsUsable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsUsable(); // Offset: 0x1023041d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.IsPlayerEnterRegion
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlayerEnterRegion(); // Offset: 0x1023041a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.IsInitialized
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInitialized(); // Offset: 0x102304188 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsActive(); // Offset: 0x102304168 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.InitSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void InitSpawner(); // Offset: 0x10230414c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetTotalSpawnedNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTotalSpawnedNum(); // Offset: 0x102304130 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct USTSpawnSubsystem* GetSpawnSystem(); // Offset: 0x1023040fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnSpots
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct ASTSpawnSpot*> GetSpawnSpots(); // Offset: 0x1023040e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSpawnRadius(); // Offset: 0x102304094 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector GetSpawnLocation(); // Offset: 0x102304000 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetSpawnExtent(); // Offset: 0x102303fd8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnerSnapshot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetSpawnerSnapshot(); // Offset: 0x102303f48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnerID
	// Flags: [Final|Native|Public|Const]
	uint32_t GetSpawnerID(); // Offset: 0x102303f2c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetSpawnerDesc
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetSpawnerDesc(); // Offset: 0x102303e9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetReferencedCount
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	IntProperty GetReferencedCount(); // Offset: 0x102303e60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetMaxUnits
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetMaxUnits(); // Offset: 0x102303e44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetMaxAlive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetMaxAlive(); // Offset: 0x102303e28 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetIsForceSpawn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsForceSpawn(); // Offset: 0x102303e08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnerBase.GetAliveUnits
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct AActor*> GetAliveUnits(); // Offset: 0x102303d78 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnerBase.FindSpot
	// Flags: [Final|Native|Protected]
	struct ASTSpawnSpot* FindSpot(StrProperty SpotID); // Offset: 0x102303c84 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function SpawnSystem.STSpawnerBase.DeactivateSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void DeactivateSpawner(); // Offset: 0x102303c68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.CheckTriggerGuest
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool CheckTriggerGuest(struct AActor* Guest); // Offset: 0x102303bf0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SpawnSystem.STSpawnerBase.CheckOwnedUnit
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool CheckOwnedUnit(struct AActor* InUnit); // Offset: 0x102303b64 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SpawnSystem.STSpawnerBase.AnalyseConfigData
	// Flags: [Native|Protected|BlueprintCallable]
	void AnalyseConfigData(); // Offset: 0x102303b48 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnerBase.ActivateSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateSpawner(); // Offset: 0x102303b2c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class SpawnSystem.STSpawnSpot
// Size: 0x518 // Inherited bytes: 0x4b0
struct ASTSpawnSpot : AActor {
	// Fields
	struct TArray<struct FUnitInitConfig> SpotInitConfig; // Offset: 0x4b0 // Size: 0x10
	IntProperty AliveThresholdCfg; // Offset: 0x4c0 // Size: 0x04
	IntProperty NumberThresholdCfg; // Offset: 0x4c4 // Size: 0x04
	StrProperty SpotID; // Offset: 0x4c8 // Size: 0x10
	IntProperty SpotWeigh; // Offset: 0x4d8 // Size: 0x04
	enum class ESpawnSpotType SpotType; // Offset: 0x4dc // Size: 0x01
	char pad_0x4DD[0x3]; // Offset: 0x4dd // Size: 0x03
	IntProperty SquadIndex; // Offset: 0x4e0 // Size: 0x04
	IntProperty UnitIndex; // Offset: 0x4e4 // Size: 0x04
	struct FVector2D CapsuleSize; // Offset: 0x4e8 // Size: 0x08
	float MultiPosRangeMin; // Offset: 0x4f0 // Size: 0x04
	char pad_0x4F4[0x4]; // Offset: 0x4f4 // Size: 0x04
	struct ASTSpawnerBase* OwnerSpawner; // Offset: 0x4f8 // Size: 0x08
	char pad_0x500[0x18]; // Offset: 0x500 // Size: 0x18

	// Functions

	// Object Name: Function SpawnSystem.STSpawnSpot.OnUnitSpawnedSuc
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnUnitSpawnedSuc(uint32_t InSpawnerID, struct APawn* AIPawn, struct FSTSpawnParam& SpawnParam); // Offset: 0x102305b68 // Return & Params: Num(3) Size(0xe0)

	// Object Name: Function SpawnSystem.STSpawnSpot.OnUnitDead
	// Flags: [Final|Native|Protected]
	void OnUnitDead(uint32_t InSpawnerID, struct APawn* AIPawn); // Offset: 0x102305ab0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnSpot.IsSpotValid
	// Flags: [Final|Native|Public|Const]
	bool IsSpotValid(); // Offset: 0x102305a5c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnSpot.HasModifySpecies
	// Flags: [Final|Native|Public|Const]
	bool HasModifySpecies(); // Offset: 0x102305a28 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetSpotWeigh
	// Flags: [Final|Native|Public|Const]
	IntProperty GetSpotWeigh(); // Offset: 0x102305a0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetSpotUnitIndex
	// Flags: [Final|Native|Public|Const]
	IntProperty GetSpotUnitIndex(); // Offset: 0x1023059f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetSpotType
	// Flags: [Final|Native|Public|Const]
	enum class ESpawnSpotType GetSpotType(); // Offset: 0x1023059d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetSpotSquadIndex
	// Flags: [Final|Native|Public|Const]
	IntProperty GetSpotSquadIndex(); // Offset: 0x1023059b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetSpotID
	// Flags: [Final|Native|Public|Const]
	StrProperty GetSpotID(); // Offset: 0x102305928 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetNumberThresholdCfg
	// Flags: [Final|Native|Public|Const]
	IntProperty GetNumberThresholdCfg(); // Offset: 0x10230590c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetMultiPositions
	// Flags: [Final|Native|Public]
	struct TArray<struct FVector> GetMultiPositions(IntProperty ReqCount, IntProperty MaxCount, IntProperty TryTimes); // Offset: 0x1023057e4 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetCacheSpawnedCount
	// Flags: [Final|Native|Public|Const]
	IntProperty GetCacheSpawnedCount(); // Offset: 0x1023057c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetCacheAliveCount
	// Flags: [Final|Native|Public|Const]
	IntProperty GetCacheAliveCount(); // Offset: 0x1023057ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSpot.GetAliveThresholdCfg
	// Flags: [Final|Native|Public|Const]
	IntProperty GetAliveThresholdCfg(); // Offset: 0x102305790 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class SpawnSystem.STSpawnSubsystem
// Size: 0x1d0 // Inherited bytes: 0x30
struct USTSpawnSubsystem : UBattleSubsystem {
	// Fields
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
	struct FScriptMulticastDelegate OnSpawnSysUnitSpawnedSuc; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnSpawnSysAfterUnitInit; // Offset: 0x48 // Size: 0x10
	MapProperty SpawnersMap; // Offset: 0x58 // Size: 0x50
	char pad_0xA8[0x88]; // Offset: 0xa8 // Size: 0x88
	float TickFrequency; // Offset: 0x130 // Size: 0x04
	IntProperty ThinkTimesPerFrame; // Offset: 0x134 // Size: 0x04
	float ReadySpawnFrequency; // Offset: 0x138 // Size: 0x04
	IntProperty MaxWaitSpawnQueSize; // Offset: 0x13c // Size: 0x04
	bool bWaitSpawnInOrder; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x57]; // Offset: 0x141 // Size: 0x57
	IntProperty RecAliveUnits; // Offset: 0x198 // Size: 0x04
	char pad_0x19C[0x4]; // Offset: 0x19c // Size: 0x04
	IntProperty WaitSpawnInOrderIndex; // Offset: 0x1a0 // Size: 0x04
	char pad_0x1A4[0x2c]; // Offset: 0x1a4 // Size: 0x2c

	// Functions

	// Object Name: Function SpawnSystem.STSpawnSubsystem.UnregisterSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void UnregisterSpawner(struct ASTSpawnerBase* Spawner); // Offset: 0x102306b38 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.UnitFindSpawner
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ASTSpawnerBase* UnitFindSpawner(IntProperty UnitUID); // Offset: 0x102306aac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.StopSpawner
	// Flags: [Final|Native|Public]
	void StopSpawner(uint32_t SpawnerID); // Offset: 0x102306a30 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.SpawnUnit
	// Flags: [Native|Protected|BlueprintCallable]
	struct AActor* SpawnUnit(struct FSTSpawnParam SpawnParam); // Offset: 0x102306910 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.RegisterSpawner
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterSpawner(struct ASTSpawnerBase* Spawner); // Offset: 0x10230688c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.RecordProgress
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void RecordProgress(); // Offset: 0x102306878 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.ReadySpawn
	// Flags: [Native|Protected|BlueprintCallable]
	void ReadySpawn(float DeltaTime); // Offset: 0x1023067f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.PreCheck
	// Flags: [Native|Protected|BlueprintCallable]
	bool PreCheck(); // Offset: 0x1023067b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.OrderSpawnerThinking
	// Flags: [Native|Protected|BlueprintCallable]
	void OrderSpawnerThinking(float DeltaTime); // Offset: 0x102306734 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.ModifyConfiguration
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ModifyConfiguration(float TickFreq, IntProperty ThinkTimes); // Offset: 0x10230667c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.InitUnit
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	void InitUnit(struct APawn* AIPawn, struct TArray<struct FUnitInitConfig>& Configs); // Offset: 0x102306590 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.GetUnitConfigID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetUnitConfigID(struct AActor* Unit); // Offset: 0x1023064fc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.GetAllUnits
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct AActor*> GetAllUnits(); // Offset: 0x102306498 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.FindSpawner
	// Flags: [Final|Native|Public|Const]
	struct ASTSpawnerBase* FindSpawner(uint32_t SpawnerID); // Offset: 0x10230640c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.EnQueue
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void EnQueue(struct FSTSpawnParam& SpawnParam, struct ASTSpawnerBase* Spawner); // Offset: 0x1023062c4 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.CleanQueue
	// Flags: [Native|Public|BlueprintCallable]
	void CleanQueue(); // Offset: 0x1023062a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STSpawnSubsystem.CheckCategoryLimit
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool CheckCategoryLimit(struct ASTSpawnerBase* Spawner, IntProperty& AvailableBalance); // Offset: 0x1023061c8 // Return & Params: Num(3) Size(0xd)
};

// Object Name: Class SpawnSystem.STSpawnSystemGameplayStatics
// Size: 0x28 // Inherited bytes: 0x28
struct USTSpawnSystemGameplayStatics : UGameplayStatics {
	// Functions

	// Object Name: Function SpawnSystem.STSpawnSystemGameplayStatics.UnitFindSpawnerByUObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ASTSpawnerBase* UnitFindSpawnerByUObject(struct UObject* Object); // Offset: 0x102307684 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SpawnSystem.STSpawnSystemGameplayStatics.UnitFindSpawner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ASTSpawnerBase* UnitFindSpawner(struct UObject* WorldContextObject, IntProperty UnitUID); // Offset: 0x1023075cc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function SpawnSystem.STSpawnSystemGameplayStatics.ProjectPointToFloorWithComplexCollisionCheck
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FVector ProjectPointToFloorWithComplexCollisionCheck(struct UObject* WorldContextObject, struct FVector& Origin, bool& bOutHit, bool bCheckComplex, struct FHitResult& HitResult, float OffsetHeight); // Offset: 0x1023073c0 // Return & Params: Num(7) Size(0xb0)

	// Object Name: Function SpawnSystem.STSpawnSystemGameplayStatics.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsEditor(); // Offset: 0x10230738c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STSpawnSystemGameplayStatics.FindNearbyGroundLoc
	// Flags: [Final|Native|Static|Public|HasDefaults]
	struct TArray<struct FVector> FindNearbyGroundLoc(struct UObject* WorldContextObject, IntProperty OutCount, struct FVector InCenterLoc, float RangeMin, float RangeMax, float TraceHeight, IntProperty TryTimes); // Offset: 0x102307184 // Return & Params: Num(8) Size(0x38)
};

// Object Name: Class SpawnSystem.STSpawnVisualDebug
// Size: 0xe0 // Inherited bytes: 0x28
struct USTSpawnVisualDebug : UObject {
	// Fields
	char pad_0x28[0xb8]; // Offset: 0x28 // Size: 0xb8

	// Functions

	// Object Name: Function SpawnSystem.STSpawnVisualDebug.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct USTSpawnVisualDebug* Get(); // Offset: 0x102307998 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STSpeciesDataAsset
// Size: 0x70 // Inherited bytes: 0x30
struct USTSpeciesDataAsset : UDataAsset {
	// Fields
	struct TArray<struct FUnitConfig> UnitConfig; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FSquadConfig> SquadConfig; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FGroupConfig> GroupConfig; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FSpeciesRatioStruct> RatioConfig; // Offset: 0x60 // Size: 0x10
};

// Object Name: Class SpawnSystem.STStrategyBase
// Size: 0xe0 // Inherited bytes: 0x28
struct USTStrategyBase : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x80 // Size: 0x10
	char bShouldCD : 1; // Offset: 0x90 // Size: 0x01
	char pad_0x90_1 : 7; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float ConfigCDDuration; // Offset: 0x94 // Size: 0x04
	struct ASTSpawnerBase* OwnerSpawner; // Offset: 0x98 // Size: 0x08
	char bSTActive : 1; // Offset: 0xa0 // Size: 0x01
	char bTickEnable : 1; // Offset: 0xa0 // Size: 0x01
	char pad_0xA0_2 : 6; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	float CDCounter; // Offset: 0xa4 // Size: 0x04
	StrProperty OwnerName; // Offset: 0xa8 // Size: 0x10
	StrProperty StrategyName; // Offset: 0xb8 // Size: 0x10
	StrProperty StrategySnapshot; // Offset: 0xc8 // Size: 0x10
	char pad_0xD8[0x8]; // Offset: 0xd8 // Size: 0x08

	// Functions

	// Object Name: Function SpawnSystem.STStrategyBase.UpdateSnapshot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateSnapshot(StrProperty New); // Offset: 0x102307fb0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STStrategyBase.TickStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void TickStrategy(float DeltaTime); // Offset: 0x102307f2c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STStrategyBase.ResetCD
	// Flags: [Native|Protected|BlueprintCallable]
	void ResetCD(); // Offset: 0x102307f10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyBase.OnStrategyDeactivate
	// Flags: [Event|Protected|BlueprintEvent]
	void OnStrategyDeactivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyBase.OnStrategyActivate
	// Flags: [Event|Protected|BlueprintEvent]
	void OnStrategyActivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyBase.IsSTActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsSTActive(); // Offset: 0x102307ef0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STStrategyBase.IsOnCD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOnCD(); // Offset: 0x102307ebc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STStrategyBase.GetTickEnable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetTickEnable(); // Offset: 0x102307e9c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STStrategyBase.GetStrategyDesc
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetStrategyDesc(); // Offset: 0x102307e0c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STStrategyBase.GetSnapshot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetSnapshot(); // Offset: 0x102307d7c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STStrategyBase.GetOwnerSpawner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ASTSpawnerBase* GetOwnerSpawner(); // Offset: 0x102307d60 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SpawnSystem.STStrategyBase.DeactivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void DeactivateStrategy(); // Offset: 0x102307d44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyBase.CDRemaining
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float CDRemaining(); // Offset: 0x102307d28 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STStrategyBase.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x102307ca4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategyCond
// Size: 0xe0 // Inherited bytes: 0xe0
struct USTStrategyCond : USTStrategyBase {
	// Functions

	// Object Name: Function SpawnSystem.STStrategyCond.LuaCheckCondition
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool LuaCheckCondition(); // Offset: 0x1023085f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STStrategyCond.CheckCondition
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool CheckCondition(); // Offset: 0x1023085bc // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class SpawnSystem.STStrategyCond_Hide
// Size: 0x108 // Inherited bytes: 0xe0
struct USTStrategyCond_Hide : USTStrategyCond {
	// Fields
	float Radius; // Offset: 0xdc // Size: 0x04
	float Height; // Offset: 0xe0 // Size: 0x04
	struct FVector CharacterFOV; // Offset: 0xe4 // Size: 0x0c
	char bUseLineTrace : 1; // Offset: 0xf0 // Size: 0x01
	char pad_0xF4_1 : 7; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	struct ACharacter* ClassFilter; // Offset: 0xf8 // Size: 0x08
	char bUseSpawnerLoc : 1; // Offset: 0x100 // Size: 0x01
	char pad_0x100_1 : 7; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x7]; // Offset: 0x101 // Size: 0x07

	// Functions

	// Object Name: Function SpawnSystem.STStrategyCond_Hide.CheckCondition
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool CheckCondition(); // Offset: 0x1023087f4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class SpawnSystem.STStrategyCond_Quantity
// Size: 0xe8 // Inherited bytes: 0xe0
struct USTStrategyCond_Quantity : USTStrategyCond {
	// Fields
	char bLimitAlive : 1; // Offset: 0xdc // Size: 0x01
	char bCustomQuantity : 1; // Offset: 0xdc // Size: 0x01
	IntProperty ThresholdQuantity; // Offset: 0xe0 // Size: 0x04
	IntProperty AliveNumberLimit; // Offset: 0xe4 // Size: 0x04

	// Functions

	// Object Name: Function SpawnSystem.STStrategyCond_Quantity.CheckCondition
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool CheckCondition(); // Offset: 0x102308a40 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STStrategyCond_Quantity.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x1023089bc // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategyLocation
// Size: 0x100 // Inherited bytes: 0xe0
struct USTStrategyLocation : USTStrategyBase {
	// Fields
	DelegateProperty OnGenerateSpawnLocationDelegate; // Offset: 0xe0 // Size: 0x10
	struct TArray<struct FSpawnSpotInfo> CacheSpotInfosArray; // Offset: 0xf0 // Size: 0x10

	// Functions

	// Object Name: Function SpawnSystem.STStrategyLocation.GetSpawnLocation
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetSpawnLocation(struct AActor* Requester, IntProperty ReferenceCount, struct TArray<struct FSpawnSpotInfo>& OutArr); // Offset: 0x102308c4c // Return & Params: Num(4) Size(0x21)
};

// Object Name: Class SpawnSystem.STStrategyLocation_Root
// Size: 0x100 // Inherited bytes: 0x100
struct USTStrategyLocation_Root : USTStrategyLocation {
	// Functions

	// Object Name: Function SpawnSystem.STStrategyLocation_Root.GetSpawnLocation
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetSpawnLocation(struct AActor* Requester, IntProperty ReferenceCount, struct TArray<struct FSpawnSpotInfo>& OutArr); // Offset: 0x10230bb08 // Return & Params: Num(4) Size(0x21)
};

// Object Name: Class SpawnSystem.STStrategyLocation_Spots
// Size: 0x100 // Inherited bytes: 0x100
struct USTStrategyLocation_Spots : USTStrategyLocation {
	// Functions

	// Object Name: Function SpawnSystem.STStrategyLocation_Spots.GetSpawnLocation
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetSpawnLocation(struct AActor* Requester, IntProperty ReferenceCount, struct TArray<struct FSpawnSpotInfo>& OutArr); // Offset: 0x10230bdac // Return & Params: Num(4) Size(0x21)
};

// Object Name: Class SpawnSystem.STStrategySpecies
// Size: 0x108 // Inherited bytes: 0xe0
struct USTStrategySpecies : USTStrategyBase {
	// Fields
	char bUseLuaConfigs : 1; // Offset: 0xdc // Size: 0x01
	struct USTSpeciesDataAsset* SpeciesData; // Offset: 0xe0 // Size: 0x08
	DelegateProperty SupplySpawnSpeciesDelegate; // Offset: 0xe8 // Size: 0x10
	struct TArray<struct FUnitConfig> CacheSpeciesArray; // Offset: 0xf8 // Size: 0x10

	// Functions

	// Object Name: Function SpawnSystem.STStrategySpecies.Supply
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FUnitConfig> Supply(IntProperty ReferencedCount, struct TArray<struct FSpawnSpotInfo>& SpotSpecies); // Offset: 0x10230c17c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function SpawnSystem.STStrategySpecies.GeAllCacheConfigIDs
	// Flags: [Final|Native|Public]
	struct TArray<IntProperty> GeAllCacheConfigIDs(); // Offset: 0x10230c118 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpawnSystem.STStrategySpecies.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x10230c094 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategySpecies_SquadRatio
// Size: 0x160 // Inherited bytes: 0x108
struct USTStrategySpecies_SquadRatio : USTStrategySpecies {
	// Fields
	IntProperty RatioIndex; // Offset: 0x108 // Size: 0x04
	char pad_0x10C[0x54]; // Offset: 0x10c // Size: 0x54

	// Functions

	// Object Name: Function SpawnSystem.STStrategySpecies_SquadRatio.Supply
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FUnitConfig> Supply(IntProperty ReferencedCount, struct TArray<struct FSpawnSpotInfo>& SpotSpecies); // Offset: 0x10230c608 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function SpawnSystem.STStrategySpecies_SquadRatio.ReadSquadRatios
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ReadSquadRatios(IntProperty ReferencedCount, struct TArray<struct FUnitRatio>& RatioConfig); // Offset: 0x10230c524 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function SpawnSystem.STStrategySpecies_SquadRatio.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x10230c4a0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategySpecies_Static
// Size: 0x128 // Inherited bytes: 0x108
struct USTStrategySpecies_Static : USTStrategySpecies {
	// Fields
	enum class EReadSpeciesData HowDataRead; // Offset: 0x108 // Size: 0x01
	char pad_0x109[0x3]; // Offset: 0x109 // Size: 0x03
	IntProperty GroupIndex; // Offset: 0x10c // Size: 0x04
	IntProperty SquadIndex; // Offset: 0x110 // Size: 0x04
	IntProperty UnitIndex; // Offset: 0x114 // Size: 0x04
	char pad_0x118[0x10]; // Offset: 0x118 // Size: 0x10

	// Functions

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.WeightedReadUnit
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void WeightedReadUnit(IntProperty ReferencedCount, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230d56c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.WeightedReadSquad
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void WeightedReadSquad(IntProperty ReferencedCount, struct FSquadConfig& SquadConfig, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230d410 // Return & Params: Num(3) Size(0x58)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.WeightedReadGroup
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void WeightedReadGroup(IntProperty ReferencedCount, struct FGroupConfig& GroupConfig, struct TArray<struct FSquadConfig>& Squads, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230d248 // Return & Params: Num(4) Size(0x50)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.Supply
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FUnitConfig> Supply(IntProperty ReferencedCount, struct TArray<struct FSpawnSpotInfo>& SpotSpecies); // Offset: 0x10230d124 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.ReadSpotSpecies
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void ReadSpotSpecies(IntProperty& ReferencedCount, struct TArray<struct FSpawnSpotInfo>& SpotSpecies, struct TArray<struct FSquadConfig>& Squads, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230cf4c // Return & Params: Num(4) Size(0x38)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.OrderedReadUnit
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void OrderedReadUnit(IntProperty ReferencedCount, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230ce68 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.OrderedReadSquad
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void OrderedReadSquad(IntProperty ReferencedCount, struct FSquadConfig& SquadConfig, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230cd0c // Return & Params: Num(3) Size(0x58)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.OrderedReadGroup
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void OrderedReadGroup(IntProperty ReferencedCount, struct FGroupConfig& GroupConfig, struct TArray<struct FSquadConfig>& Squads, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230cb44 // Return & Params: Num(4) Size(0x50)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.ManuallyReadUnit
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void ManuallyReadUnit(IntProperty ReferencedCount, IntProperty Index, struct TArray<struct FUnitConfig>& Units); // Offset: 0x10230ca24 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function SpawnSystem.STStrategySpecies_Static.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x10230c9a0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategyTiming
// Size: 0xf0 // Inherited bytes: 0xe0
struct USTStrategyTiming : USTStrategyBase {
	// Fields
	struct FScriptMulticastDelegate OnSpawnTimingUp; // Offset: 0xe0 // Size: 0x10

	// Functions

	// Object Name: Function SpawnSystem.STStrategyTiming.TimeIsRipe
	// Flags: [Final|Native|Public]
	void TimeIsRipe(); // Offset: 0x10230da68 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class SpawnSystem.STStrategyTiming_Period
// Size: 0x110 // Inherited bytes: 0xf0
struct USTStrategyTiming_Period : USTStrategyTiming {
	// Fields
	char bFirstDelay : 1; // Offset: 0xf0 // Size: 0x01
	char pad_0xF0_1 : 7; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	float FirstDelayDuration; // Offset: 0xf4 // Size: 0x04
	char bLoop : 1; // Offset: 0xf8 // Size: 0x01
	char pad_0xF8_1 : 7; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x3]; // Offset: 0xf9 // Size: 0x03
	float PeriodDuration; // Offset: 0xfc // Size: 0x04
	char pad_0x100[0x10]; // Offset: 0x100 // Size: 0x10

	// Functions

	// Object Name: Function SpawnSystem.STStrategyTiming_Period.TickStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void TickStrategy(float DeltaTime); // Offset: 0x10230dcac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STStrategyTiming_Period.OnReachTimer
	// Flags: [Final|Native|Protected]
	void OnReachTimer(); // Offset: 0x10230dc98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyTiming_Period.OnFirstDelay
	// Flags: [Final|Native|Protected]
	void OnFirstDelay(); // Offset: 0x10230dc84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyTiming_Period.DeactivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void DeactivateStrategy(); // Offset: 0x10230dc68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyTiming_Period.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x10230dbe4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategyTiming_Trigger
// Size: 0x110 // Inherited bytes: 0xf0
struct USTStrategyTiming_Trigger : USTStrategyTiming {
	// Fields
	enum class ESTSpawnerVolume VolumeType; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	struct FVector CenterLocation; // Offset: 0xf4 // Size: 0x0c
	float SphereRadius; // Offset: 0x100 // Size: 0x04
	struct FVector BoxExtent; // Offset: 0x104 // Size: 0x0c

	// Functions

	// Object Name: Function SpawnSystem.STStrategyTiming_Trigger.TickStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void TickStrategy(float DeltaTime); // Offset: 0x10230e044 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STStrategyTiming_Trigger.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x10230dfc0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpawnSystem.STStrategyTiming_Wave
// Size: 0x130 // Inherited bytes: 0xf0
struct USTStrategyTiming_Wave : USTStrategyTiming {
	// Fields
	struct TArray<IntProperty> ConfigWaveAlive; // Offset: 0xf0 // Size: 0x10
	IntProperty WaveInterval; // Offset: 0x100 // Size: 0x04
	char bTriggerToStart : 1; // Offset: 0x104 // Size: 0x01
	char bDelayToStart : 1; // Offset: 0x104 // Size: 0x01
	char pad_0x104_2 : 6; // Offset: 0x104 // Size: 0x01
	char pad_0x105[0x3]; // Offset: 0x105 // Size: 0x03
	IntProperty DelayDurationToStart; // Offset: 0x108 // Size: 0x04
	bool bRecycle; // Offset: 0x10c // Size: 0x01
	char pad_0x10D[0x3]; // Offset: 0x10d // Size: 0x03
	struct USTStrategyTiming_Trigger* TriggerHelper; // Offset: 0x110 // Size: 0x08
	IntProperty CurrentWave; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x14]; // Offset: 0x11c // Size: 0x14

	// Functions

	// Object Name: Function SpawnSystem.STStrategyTiming_Wave.TickStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void TickStrategy(float DeltaTime); // Offset: 0x10230e44c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STStrategyTiming_Wave.ResetCD
	// Flags: [Native|Protected|BlueprintCallable]
	void ResetCD(); // Offset: 0x10230e430 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyTiming_Wave.OnTriggerToStartWave
	// Flags: [Final|Native|Protected]
	void OnTriggerToStartWave(bool IsRipe); // Offset: 0x10230e3ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpawnSystem.STStrategyTiming_Wave.OnDelayToStartWave
	// Flags: [Final|Native|Protected]
	void OnDelayToStartWave(); // Offset: 0x10230e398 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpawnSystem.STStrategyTiming_Wave.GetCurrentWave
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCurrentWave(); // Offset: 0x10230e37c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpawnSystem.STStrategyTiming_Wave.ActivateStrategy
	// Flags: [Native|Public|BlueprintCallable]
	void ActivateStrategy(struct ASTSpawnerBase* Owner); // Offset: 0x10230e2f8 // Return & Params: Num(1) Size(0x8)
};

