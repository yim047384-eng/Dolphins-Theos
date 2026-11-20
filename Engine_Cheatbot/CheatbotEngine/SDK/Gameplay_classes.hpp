#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Gameplay.BackpackRepActor
// Size: 0x4e8 // Inherited bytes: 0x4c0
struct ABackpackRepActor : APlayerReliableSequentialSyncActor {
	// Fields
	struct UBackpackComponent* BackpackComp; // Offset: 0x4c0 // Size: 0x08
	struct FIncNetArray ItemListNet; // Offset: 0x4c8 // Size: 0x20

	// Functions

	// Object Name: Function Gameplay.BackpackRepActor.OnRep_ItemListNet
	// Flags: [Final|Native|Public]
	void OnRep_ItemListNet(); // Offset: 0x103d64654 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackRepActor.NotifyItemUpdated
	// Flags: [Final|Native|Public|HasOutParms]
	void NotifyItemUpdated(struct FItemDefineID& DefineID, struct FBattleItemData& ItemData); // Offset: 0x103d6454c // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function Gameplay.BackpackRepActor.NotifyItemRemoved
	// Flags: [Final|Native|Public|HasOutParms]
	void NotifyItemRemoved(struct FItemDefineID& DefineID, struct FBattleItemData& ItemData); // Offset: 0x103d64444 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function Gameplay.BackpackRepActor.NotifyItemEmpty
	// Flags: [Final|Native|Public]
	void NotifyItemEmpty(IntProperty Slack); // Offset: 0x103d643c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.BackpackRepActor.NotifyItemAdded
	// Flags: [Final|Native|Public|HasOutParms]
	void NotifyItemAdded(struct FItemDefineID& DefineID, struct FBattleItemData& ItemData); // Offset: 0x103d642c0 // Return & Params: Num(2) Size(0xd8)
};

// Object Name: Class Gameplay.UAEGameMode
// Size: 0x16c0 // Inherited bytes: 0x5e8
struct AUAEGameMode : ALuaGameMode {
	// Fields
	struct TWeakObjectPtr<struct UObject> UtilsPtr; // Offset: 0x5e8 // Size: 0x08
	float GridCheckSize; // Offset: 0x5f0 // Size: 0x04
	float DeepCheckSize; // Offset: 0x5f4 // Size: 0x04
	float HeightCheckSize; // Offset: 0x5f8 // Size: 0x04
	IntProperty MaxPlayerLimit; // Offset: 0x5fc // Size: 0x04
	char pad_0x600[0xc]; // Offset: 0x600 // Size: 0x0c
	bool bEnableClimbing; // Offset: 0x60c // Size: 0x01
	bool IsUseFpsVault; // Offset: 0x60d // Size: 0x01
	bool bBornWithApple; // Offset: 0x60e // Size: 0x01
	bool bUseDefaultResultRules; // Offset: 0x60f // Size: 0x01
	IntProperty AntiDataCD; // Offset: 0x610 // Size: 0x04
	bool PlayerValidCheckResult; // Offset: 0x614 // Size: 0x01
	char pad_0x615[0x3]; // Offset: 0x615 // Size: 0x03
	IntProperty WeatherID; // Offset: 0x618 // Size: 0x04
	char pad_0x61C[0x4]; // Offset: 0x61c // Size: 0x04
	StrProperty WeatherName; // Offset: 0x620 // Size: 0x10
	IntProperty RoomMode; // Offset: 0x630 // Size: 0x04
	IntProperty SeasonIdx; // Offset: 0x634 // Size: 0x04
	float MeteorShowerRatio; // Offset: 0x638 // Size: 0x04
	char pad_0x63C[0x4]; // Offset: 0x63c // Size: 0x04
	StrProperty ItemTableName; // Offset: 0x640 // Size: 0x10
	struct UClass* ItemClassPath; // Offset: 0x650 // Size: 0x28
	StrProperty ReplayPushURL; // Offset: 0x678 // Size: 0x10
	IntProperty ReplayType; // Offset: 0x688 // Size: 0x04
	char pad_0x68C[0x4]; // Offset: 0x68c // Size: 0x04
	StrProperty ReplayTitle; // Offset: 0x690 // Size: 0x10
	enum class EObserverEnemyTraceType EnableObserverEnemyTrace; // Offset: 0x6a0 // Size: 0x01
	char pad_0x6A1[0x7]; // Offset: 0x6a1 // Size: 0x07
	struct TArray<StrProperty> ItemSpawnTableList; // Offset: 0x6a8 // Size: 0x10
	struct TArray<StrProperty> IgnoreItemClassPathList; // Offset: 0x6b8 // Size: 0x10
	struct TArray<struct FDSSwitchInfo> DsSwitch; // Offset: 0x6c8 // Size: 0x10
	struct TArray<IntProperty> TimeIDSwitch; // Offset: 0x6d8 // Size: 0x10
	MapProperty CharacterMoveDragDataMap; // Offset: 0x6e8 // Size: 0x50
	MapProperty ParachuteDragDataMap; // Offset: 0x738 // Size: 0x50
	MapProperty VehicleMoveDrag; // Offset: 0x788 // Size: 0x50
	struct TArray<struct FVehicleCorrectionData> VehicleCorrections; // Offset: 0x7d8 // Size: 0x10
	struct TArray<struct FVehicleProtectionReportData> VehicleProtections; // Offset: 0x7e8 // Size: 0x10
	MapProperty CharacterShootVerifyDataMap; // Offset: 0x7f8 // Size: 0x50
	MapProperty CharacterShootVerifyStatMap; // Offset: 0x848 // Size: 0x50
	uint32_t ServerStartTime; // Offset: 0x898 // Size: 0x04
	bool bOpenChangeWearing; // Offset: 0x89c // Size: 0x01
	bool bEnableVehicleInReady; // Offset: 0x89d // Size: 0x01
	char pad_0x89E[0x2]; // Offset: 0x89e // Size: 0x02
	struct UClass* PickupBoxConfigClassPath; // Offset: 0x8a0 // Size: 0x28
	bool bUseAutoGroupParachuteTeam; // Offset: 0x8c8 // Size: 0x01
	char pad_0x8C9[0x7]; // Offset: 0x8c9 // Size: 0x07
	StrProperty PickupBoxConfigDataTableName; // Offset: 0x8d0 // Size: 0x10
	StrProperty VehicleTableName; // Offset: 0x8e0 // Size: 0x10
	struct UClass* VehicleClassPath; // Offset: 0x8f0 // Size: 0x28
	bool IsUsingSceneDropWeight; // Offset: 0x918 // Size: 0x01
	bool IsRegionItemGenerate; // Offset: 0x919 // Size: 0x01
	char pad_0x91A[0x2]; // Offset: 0x91a // Size: 0x02
	struct FVector RegionCenter; // Offset: 0x91c // Size: 0x0c
	float RegionRadius; // Offset: 0x928 // Size: 0x04
	char pad_0x92C[0x4]; // Offset: 0x92c // Size: 0x04
	MapProperty BattleCustomConfig; // Offset: 0x930 // Size: 0x50
	IntProperty MaxAllowReplicatedCharacterCount; // Offset: 0x980 // Size: 0x04
	IntProperty AINoRepTimeInReady; // Offset: 0x984 // Size: 0x04
	struct AUAEOBState* ObserverPlayerStateClass; // Offset: 0x988 // Size: 0x08
	bool bEnableDamage; // Offset: 0x990 // Size: 0x01
	char pad_0x991[0x3]; // Offset: 0x991 // Size: 0x03
	float NearDeathRestoredOriginHealth; // Offset: 0x994 // Size: 0x04
	float NearDeathDecreateBreathRate; // Offset: 0x998 // Size: 0x04
	float RescueOtherRestoreDuration; // Offset: 0x99c // Size: 0x04
	float RescueSelfRestoreDuration; // Offset: 0x9a0 // Size: 0x04
	float DeadTombBoxLifeSpan; // Offset: 0x9a4 // Size: 0x04
	IntProperty DefaultPlayerBornPointID; // Offset: 0x9a8 // Size: 0x04
	bool bPlayerExitClearPlayerData; // Offset: 0x9ac // Size: 0x01
	bool bEnableDSTickLua; // Offset: 0x9ad // Size: 0x01
	bool bClientIgnoreMLAI; // Offset: 0x9ae // Size: 0x01
	char pad_0x9AF[0x1]; // Offset: 0x9af // Size: 0x01
	StrProperty ActorGridGeneratorClassPath; // Offset: 0x9b0 // Size: 0x10
	struct TArray<struct UGroupSpotSceneComponent*> ItemGroupComponents; // Offset: 0x9c0 // Size: 0x10
	struct AActor* ChosenPlayerStartBuildingGroup; // Offset: 0x9d0 // Size: 0x08
	struct TArray<struct FDynamicTriggerConfig> DynamicTriggerConfigs; // Offset: 0x9d8 // Size: 0x10
	struct TArray<struct AActor*> DynamicTriggers; // Offset: 0x9e8 // Size: 0x10
	IntProperty IsGameModeFpp; // Offset: 0x9f8 // Size: 0x04
	bool IsGameModeBandSpot; // Offset: 0x9fc // Size: 0x01
	char pad_0x9FD[0x3]; // Offset: 0x9fd // Size: 0x03
	struct TArray<struct FDynamicLoadItem> DynamicLoadItemArray; // Offset: 0xa00 // Size: 0x10
	MapProperty DynamicLoadItemMap; // Offset: 0xa10 // Size: 0x50
	struct TArray<struct FVehicleAvatarReplaceCfg> VehicleAvatarReplaceCfgList; // Offset: 0xa60 // Size: 0x10
	bool IsOpenItemGenerate; // Offset: 0xa70 // Size: 0x01
	bool IsOpenVehicleGenerate; // Offset: 0xa71 // Size: 0x01
	char pad_0xA72[0x6]; // Offset: 0xa72 // Size: 0x06
	struct TArray<IntProperty> DynamicLevelArray; // Offset: 0xa78 // Size: 0x10
	StrProperty RoomType; // Offset: 0xa88 // Size: 0x10
	bool bCanLedgeGrab; // Offset: 0xa98 // Size: 0x01
	bool bOpenForbitTeammatePickUp; // Offset: 0xa99 // Size: 0x01
	bool bOpenTeammateImprisonment; // Offset: 0xa9a // Size: 0x01
	char pad_0xA9B[0x1]; // Offset: 0xa9b // Size: 0x01
	IntProperty ZoneID; // Offset: 0xa9c // Size: 0x04
	IntProperty nClientType; // Offset: 0xaa0 // Size: 0x04
	IntProperty MainModeID; // Offset: 0xaa4 // Size: 0x04
	IntProperty RealPlayerNums; // Offset: 0xaa8 // Size: 0x04
	bool bABTestModify; // Offset: 0xaac // Size: 0x01
	char pad_0xAAD[0x4b]; // Offset: 0xaad // Size: 0x4b
	struct FScriptMulticastDelegate OnGameModeStateChanged; // Offset: 0xaf8 // Size: 0x10
	char pad_0xB08[0x110]; // Offset: 0xb08 // Size: 0x110
	DelegateProperty SendTeammateResultWhenChicken; // Offset: 0xc18 // Size: 0x10
	DelegateProperty HaveSentTeamBattleResult; // Offset: 0xc28 // Size: 0x10
	struct FScriptMulticastDelegate SendTeamBattleResult; // Offset: 0xc38 // Size: 0x10
	char pad_0xC48[0x110]; // Offset: 0xc48 // Size: 0x110
	struct FScriptMulticastDelegate SendGameStopJoin; // Offset: 0xd58 // Size: 0x10
	char pad_0xD68[0x420]; // Offset: 0xd68 // Size: 0x420
	bool bIsPreCreatingPlayerController; // Offset: 0x1188 // Size: 0x01
	char pad_0x1189[0x13f]; // Offset: 0x1189 // Size: 0x13f
	float OBInfoTimeStep; // Offset: 0x12c8 // Size: 0x04
	char pad_0x12CC[0x2c]; // Offset: 0x12cc // Size: 0x2c
	struct TArray<struct FAirDropBoxInOb> AirDropBoxInfoList; // Offset: 0x12f8 // Size: 0x10
	struct TArray<struct AUAEPlayerController*> KickFlagControllerList; // Offset: 0x1308 // Size: 0x10
	struct TArray<struct AUAEPlayerController*> ObserverControllerList; // Offset: 0x1318 // Size: 0x10
	char pad_0x1328[0xd8]; // Offset: 0x1328 // Size: 0xd8
	struct AUAEAdvertisementActor* AdvertisementActorBP; // Offset: 0x1400 // Size: 0x08
	struct TArray<struct FAdvertisementActorConfig> AdvConfigList; // Offset: 0x1408 // Size: 0x10
	struct TArray<struct AUAEAdvertisementActor*> AdvActorList; // Offset: 0x1418 // Size: 0x10
	struct TArray<struct FMissionBoardConfig> MissionBoardConfigList; // Offset: 0x1428 // Size: 0x10
	bool bEnablePlaneBanner; // Offset: 0x1438 // Size: 0x01
	char pad_0x1439[0x7]; // Offset: 0x1439 // Size: 0x07
	StrProperty HttpPlaneBannerLeftImgPath; // Offset: 0x1440 // Size: 0x10
	StrProperty HttpPlaneBannerRightImgPath; // Offset: 0x1450 // Size: 0x10
	StrProperty GrenadeEffectPath; // Offset: 0x1460 // Size: 0x10
	bool bUseSpecialGrenadeEffect; // Offset: 0x1470 // Size: 0x01
	bool bAnniversarySignalGunEffect; // Offset: 0x1471 // Size: 0x01
	bool bAvatarDownloadInBattle; // Offset: 0x1472 // Size: 0x01
	bool bOpenAnniversaryActivity; // Offset: 0x1473 // Size: 0x01
	char pad_0x1474[0x4]; // Offset: 0x1474 // Size: 0x04
	StrProperty FestivalAirDropBoxMesh; // Offset: 0x1478 // Size: 0x10
	bool bUseFestivalAirDropBox; // Offset: 0x1488 // Size: 0x01
	char pad_0x1489[0x3]; // Offset: 0x1489 // Size: 0x03
	float FestivalAirDropProb; // Offset: 0x148c // Size: 0x04
	float MonsterDropPar; // Offset: 0x1490 // Size: 0x04
	float SceneDropParam; // Offset: 0x1494 // Size: 0x04
	uint32_t DSOpenSwtich; // Offset: 0x1498 // Size: 0x04
	char pad_0x149C[0x4]; // Offset: 0x149c // Size: 0x04
	struct UItemGeneratorComponent* ItemGenerator; // Offset: 0x14a0 // Size: 0x08
	struct UVehicleAndTreasureBoxGeneratorComponent* VehicleGenerator; // Offset: 0x14a8 // Size: 0x08
	bool bGameNeedReplay; // Offset: 0x14b0 // Size: 0x01
	char pad_0x14B1[0x7]; // Offset: 0x14b1 // Size: 0x07
	struct TArray<uint32_t> NeedReplayPlayers; // Offset: 0x14b8 // Size: 0x10
	struct TArray<struct FSeasonStatueData> SeasonStatueList; // Offset: 0x14c8 // Size: 0x10
	StrProperty SeasonStatueClassPath; // Offset: 0x14d8 // Size: 0x10
	StrProperty StatueBaseClassPath; // Offset: 0x14e8 // Size: 0x10
	struct FStatueBaseData StatueBaseInfo; // Offset: 0x14f8 // Size: 0x68
	IntProperty BattleStopJoin; // Offset: 0x1560 // Size: 0x04
	IntProperty nSignalGunEffectId; // Offset: 0x1564 // Size: 0x04
	struct TArray<struct FCharacterOverrideAttrData> CharacterOverrideAttrs; // Offset: 0x1568 // Size: 0x10
	char pad_0x1578[0xa0]; // Offset: 0x1578 // Size: 0xa0
	bool UseGMSpawnItemSpotDefaultTag; // Offset: 0x1618 // Size: 0x01
	char pad_0x1619[0x7]; // Offset: 0x1619 // Size: 0x07
	StrProperty GMSpawnItemSpotDefaultTag; // Offset: 0x1620 // Size: 0x10
	char pad_0x1630[0x80]; // Offset: 0x1630 // Size: 0x80
	bool bStandAloneGameMode; // Offset: 0x16b0 // Size: 0x01
	bool bStandAloneLuaGenAIData; // Offset: 0x16b1 // Size: 0x01
	char pad_0x16B2[0x2]; // Offset: 0x16b2 // Size: 0x02
	IntProperty StandAloneTestPlayerKey; // Offset: 0x16b4 // Size: 0x04
	struct FName StandAloneTestPlayerType; // Offset: 0x16b8 // Size: 0x08

	// Functions

	// Object Name: Function Gameplay.UAEGameMode.WriteStatistics
	// Flags: [Final|Exec|Native|Public]
	void WriteStatistics(); // Offset: 0x103dc2cd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.SyncPlayerNames
	// Flags: [Native|Public]
	void SyncPlayerNames(); // Offset: 0x103dc2cb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.SyncNewCorpsData
	// Flags: [Native|Public|HasOutParms]
	void SyncNewCorpsData(struct TArray<struct FDSCorpsInfo>& OutCorpsData); // Offset: 0x103dc2c04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.SpawnUAEPawnFor
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent]
	struct APawn* SpawnUAEPawnFor(struct AController* NewPlayer, struct FTransform Trans); // Offset: 0x103dc2b0c // Return & Params: Num(3) Size(0x48)

	// Object Name: Function Gameplay.UAEGameMode.SetVehicleReportEntry
	// Flags: [Final|Native|Public]
	void SetVehicleReportEntry(uint32_t InUniqueID, struct FVehicleReportEntry InEntry); // Offset: 0x103dc2a38 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Gameplay.UAEGameMode.SetPlayerOpenId
	// Flags: [Native|Public]
	void SetPlayerOpenId(uint32_t InPlayerKey, StrProperty InPlayerOpenID); // Offset: 0x103dc295c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.SetMaxWeaponReportNum
	// Flags: [Final|Native|Public]
	void SetMaxWeaponReportNum(IntProperty Num); // Offset: 0x103dc28e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.SetKillerPlayerKey
	// Flags: [Native|Public]
	void SetKillerPlayerKey(struct AController* VictimPlayer, uint32_t KillerPlayerKey); // Offset: 0x103dc2824 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.UAEGameMode.SetGameEndReportData
	// Flags: [Native|Public]
	void SetGameEndReportData(); // Offset: 0x103dc2808 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData
	// Flags: [Native|Public]
	struct FGameModeTeamBattleResultData RetrieveTeamBattleResultData(IntProperty TeamID); // Offset: 0x103dc274c // Return & Params: Num(2) Size(0xe0)

	// Object Name: Function Gameplay.UAEGameMode.RetrieveBattleData
	// Flags: [Native|Public|HasOutParms]
	void RetrieveBattleData(struct FBattleData& OutBattleData); // Offset: 0x103dc26b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart
	// Flags: [Native|Public|BlueprintCallable]
	void RestartPlayerAtPlayerStart(struct AController* NewPlayer, struct AActor* StartSpot); // Offset: 0x103dc25fc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode
	// Flags: [Native|Public]
	void ResetGameParamsFromGameMode(); // Offset: 0x103dc25e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.Rescue
	// Flags: [Native|Public]
	void Rescue(struct APawn* RescueWho, struct APawn* Hero); // Offset: 0x103dc2524 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag
	// Flags: [Native|Public]
	void RegisterItemGroupSpotsByTag(struct FName Tag, struct UGroupSpotSceneComponent* GroupSpotComponent); // Offset: 0x103dc2468 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.RegisterItemGroupSpots
	// Flags: [Native|Public]
	void RegisterItemGroupSpots(struct UGroupSpotSceneComponent* GroupSpotComponent); // Offset: 0x103dc23e4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.RefreshWorldActiveRange
	// Flags: [Native|Public]
	void RefreshWorldActiveRange(); // Offset: 0x103dc23c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.RefreshWatchTeammates
	// Flags: [Native|Public]
	void RefreshWatchTeammates(struct AUAEPlayerController* InController, IntProperty InTeamID); // Offset: 0x103dc2308 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.UAEGameMode.RefreshPlayerNames
	// Flags: [Native|Public]
	void RefreshPlayerNames(uint32_t InPlayerKey, StrProperty InPlayerName, IntProperty TeamID, bool IsLogin, uint64 UID, IntProperty IdxInTeam); // Offset: 0x103dc20cc // Return & Params: Num(6) Size(0x2c)

	// Object Name: Function Gameplay.UAEGameMode.RecoardAlivePlayerNum
	// Flags: [Native|Public]
	IntProperty RecoardAlivePlayerNum(); // Offset: 0x103dc2090 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.PreCreatePlayerController
	// Flags: [Native|Public]
	struct APlayerController* PreCreatePlayerController(uint32_t PlayerKey); // Offset: 0x103dc1ffc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.OnStandAloneGameEnd
	// Flags: [Native|Public]
	void OnStandAloneGameEnd(); // Offset: 0x103dc1fe0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.OnReportNetworkData
	// Flags: [Native|Public]
	void OnReportNetworkData(); // Offset: 0x103dc1fc4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.OnPlayerFiring
	// Flags: [Native|Public]
	void OnPlayerFiring(uint32_t InPlayerKey); // Offset: 0x103dc1f40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd
	// Flags: [Native|Public]
	void OnPlayerControlDestroyEnd(uint32_t PlayerKey); // Offset: 0x103dc1ebc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.OnPlayerBreathChange
	// Flags: [Native|Public]
	void OnPlayerBreathChange(uint32_t InPlayerKey, float InBreath); // Offset: 0x103dc1dfc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.OnObserverLogout
	// Flags: [Native|Protected]
	void OnObserverLogout(struct AUAEPlayerController* InController); // Offset: 0x103dc1d78 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.OnObserverLogin
	// Flags: [Native|Protected]
	void OnObserverLogin(struct AUAEPlayerController* InController); // Offset: 0x103dc1cf4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.OnMsg
	// Flags: [Native|Public|BlueprintCallable]
	void OnMsg(StrProperty Msg); // Offset: 0x103dc1c54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.OnAirDropBoxLanded
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void OnAirDropBoxLanded(IntProperty boxId, struct FVector& pos); // Offset: 0x103dc1b88 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
	// Flags: [Native|Public]
	void OnAirDropBoxEmpty(IntProperty boxId); // Offset: 0x103dc1b04 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted
	// Flags: [Native|Public]
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, struct FName PlayerType, StrProperty Reason); // Offset: 0x103dc19ec // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.UAEGameMode.NotifyPlayerExit
	// Flags: [Native|Public]
	void NotifyPlayerExit(uint32_t PlayerKey, struct FName PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, StrProperty FailureMessage, struct FName ParamState, StrProperty ParamReason); // Offset: 0x103dc16bc // Return & Params: Num(8) Size(0x40)

	// Object Name: Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely
	// Flags: [Native|Public]
	void NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, struct FName PlayerType); // Offset: 0x103dc15fc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged
	// Flags: [Native|Public|HasOutParms]
	void NotifyGameModeParamsChanged(struct FGameModeParams& GameModeParams); // Offset: 0x103dc1564 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.NotifyGameModeLuckmate
	// Flags: [Native|Public]
	void NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID); // Offset: 0x103dc14a8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.NotifyGameModeInit
	// Flags: [Native|Public]
	void NotifyGameModeInit(); // Offset: 0x103dc148c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter
	// Flags: [Native|Public]
	void NotifyExistPlayerReEnter(uint32_t PlayerKey); // Offset: 0x103dc1408 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.NotifyAIPlayerEnter
	// Flags: [Native|Public]
	void NotifyAIPlayerEnter(uint32_t PlayerKey, bool IsMLAI, bool bTeammateAI); // Offset: 0x103dc12f4 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Gameplay.UAEGameMode.NotifyAIDropInfo
	// Flags: [Native|Public|HasOutParms]
	void NotifyAIDropInfo(IntProperty NewAI, struct FDSAIDropInfo& Info); // Offset: 0x103dc11f4 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Gameplay.UAEGameMode.ModifyVehicleDamage
	// Flags: [Native|Public|HasOutParms]
	float ModifyVehicleDamage(float Damage, struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* VictimVehicle, struct AActor* DamageCauser); // Offset: 0x103dc1058 // Return & Params: Num(6) Size(0x34)

	// Object Name: Function Gameplay.UAEGameMode.ModifyDamage
	// Flags: [Native|Public|HasOutParms]
	float ModifyDamage(float Damage, struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AController* VictimController, struct AActor* DamageCauser); // Offset: 0x103dc0ebc // Return & Params: Num(6) Size(0x34)

	// Object Name: Function Gameplay.UAEGameMode.Killed
	// Flags: [Native|Public|HasOutParms]
	void Killed(struct AController* Killer, struct AController* VictimPlayer, struct AActor* DamageCauser, struct APawn* VictimPawn, struct FDamageEvent& DamageEvent); // Offset: 0x103dc0d30 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Gameplay.UAEGameMode.IsStandAloneGameMode
	// Flags: [Native|Public]
	bool IsStandAloneGameMode(); // Offset: 0x103dc0cf4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool IsSatisfyGeneratorArea(struct FVector& Location); // Offset: 0x103dc0c5c // Return & Params: Num(2) Size(0xd)

	// Object Name: Function Gameplay.UAEGameMode.IsCollectingOBData
	// Flags: [Native|Public|Const]
	bool IsCollectingOBData(); // Offset: 0x103dc0c20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEGameMode.InitWorldActiveRange
	// Flags: [Native|Public]
	void InitWorldActiveRange(); // Offset: 0x103dc0c04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitSeasonStatue
	// Flags: [Native|Public]
	void InitSeasonStatue(); // Offset: 0x103dc0be8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitMissionBoard
	// Flags: [Native|Public]
	void InitMissionBoard(); // Offset: 0x103dc0bcc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitGenerator
	// Flags: [Native|Public]
	void InitGenerator(); // Offset: 0x103dc0bb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitGameParamsFromGameMode
	// Flags: [Native|Public]
	void InitGameParamsFromGameMode(); // Offset: 0x103dc0b94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitDynamicTriggers
	// Flags: [Native|Public]
	void InitDynamicTriggers(); // Offset: 0x103dc0b78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitDynamicBuildingGroups
	// Flags: [Native|Public]
	void InitDynamicBuildingGroups(); // Offset: 0x103dc0b5c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.InitBornWithApple
	// Flags: [Native|Public]
	void InitBornWithApple(); // Offset: 0x103dc0b40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.Heartbeat
	// Flags: [Final|Native|Public]
	void Heartbeat(); // Offset: 0x103dc0b2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.HasVehicleReportEntry
	// Flags: [Final|Native|Public]
	bool HasVehicleReportEntry(uint32_t InUniqueID); // Offset: 0x103dc0aa0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEGameMode.HasDynamicBuildingGroup
	// Flags: [Final|Native|Public|Const]
	bool HasDynamicBuildingGroup(); // Offset: 0x103dc0a6c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse
	// Flags: [Native|Public]
	void HandlePlayerPaintDecalResponse(uint32_t PlayerKey, struct FName PlayerType, IntProperty Result, IntProperty DecalId, IntProperty Count); // Offset: 0x103dc08fc // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function Gameplay.UAEGameMode.GotoNearDeath
	// Flags: [Native|Public]
	void GotoNearDeath(struct AController* DamageInstigator, struct APawn* VictimPawn); // Offset: 0x103dc0840 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.GetWeaponReportByWeaponRecord
	// Flags: [Event|Public|BlueprintEvent]
	struct FOnePlayerWeapon GetWeaponReportByWeaponRecord(StrProperty PlayerKey); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Gameplay.UAEGameMode.GetWeaponDamageFromRecord
	// Flags: [Event|Public|BlueprintEvent]
	float GetWeaponDamageFromRecord(StrProperty PlayerKey, IntProperty TargetWeaponType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.GetVehicleReportEntry
	// Flags: [Final|Native|Public]
	struct FVehicleReportEntry GetVehicleReportEntry(uint32_t InUniqueID); // Offset: 0x103dc07a4 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Gameplay.UAEGameMode.GetSurvivingTeamCount
	// Flags: [Native|Public]
	IntProperty GetSurvivingTeamCount(); // Offset: 0x103dc0768 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.GetSurvivingCharacterCount
	// Flags: [Native|Public]
	IntProperty GetSurvivingCharacterCount(); // Offset: 0x103dc072c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.GetRescueDuration
	// Flags: [Native|Event|Public|BlueprintEvent]
	float GetRescueDuration(struct AActor* WhoRescue, struct AActor* RescueWho); // Offset: 0x103dc0660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Gameplay.UAEGameMode.GetPlayerTotalShootNum
	// Flags: [Event|Public|BlueprintEvent]
	IntProperty GetPlayerTotalShootNum(StrProperty PlayerKey); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct AUAEPlayerState*> GetPlayerStateListWithTeamID(IntProperty TeamID, struct FName PlayerType); // Offset: 0x103dc0570 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.UAEGameMode.GetPlayerRealtimeVerifyInfo
	// Flags: [Native|Public|HasOutParms]
	void GetPlayerRealtimeVerifyInfo(uint32_t PlayerKey, struct FRealtimeVerifyInfo& RealtimeVerifyInfo); // Offset: 0x103dc0468 // Return & Params: Num(2) Size(0x78)

	// Object Name: Function Gameplay.UAEGameMode.GetPlayerControllerWithUID
	// Flags: [Final|Native|Public|Const]
	struct AUAEPlayerController* GetPlayerControllerWithUID(uint64 UID); // Offset: 0x103dc03dc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct AUAEPlayerController*> GetPlayerControllerListWithTeamID(IntProperty TeamID, struct FName PlayerType); // Offset: 0x103dc02ec // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum
	// Flags: [Native|Public|HasOutParms]
	void GetPlayerAndRealAiNum(struct FHeartBeatData& Data); // Offset: 0x103dc0254 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.GetObserverControllerList
	// Flags: [Final|Native|Public]
	struct TArray<struct AUAEPlayerController*> GetObserverControllerList(); // Offset: 0x103dc01f0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.GetMonsterNum
	// Flags: [Native|Public|HasOutParms]
	void GetMonsterNum(struct FHeartBeatData& Data); // Offset: 0x103dc0158 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.GetMaxWeaponReportNum
	// Flags: [Final|Native|Public]
	IntProperty GetMaxWeaponReportNum(); // Offset: 0x103dc013c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEGameMode.GetClassicPlaneDirection
	// Flags: [Native|Public|HasDefaults]
	struct FVector GetClassicPlaneDirection(); // Offset: 0x103dc00fc // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
	// Flags: [Final|Native|Public|Const]
	struct AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey, struct FName PlayerType); // Offset: 0x103dc0034 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
	// Flags: [Final|Native|Public|Const]
	struct AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, struct FName PlayerType); // Offset: 0x103dbff6c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.FindPlayerControllerByUId
	// Flags: [Native|Public|Const]
	struct APlayerController* FindPlayerControllerByUId(uint64 UID); // Offset: 0x103dbfed8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.FindControllerWithPlayerKey
	// Flags: [Final|Native|Public|Const]
	struct AController* FindControllerWithPlayerKey(uint32_t PlayerKey, struct FName PlayerType); // Offset: 0x103dbfe10 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	void DestroyNoActiveWorldActor(struct FVector& Location, float& Radius); // Offset: 0x103dbfd2c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController
	// Flags: [Native|Public]
	void DestroyCharacterForPlayerController(struct APlayerController* PC); // Offset: 0x103dbfca8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.DestroyAllPickUpObjs
	// Flags: [Final|Native|Public]
	void DestroyAllPickUpObjs(); // Offset: 0x103dbfc94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.DeleteSeasonStatue
	// Flags: [Native|Public]
	void DeleteSeasonStatue(); // Offset: 0x103dbfc78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.DeleteDynamicLoadItem
	// Flags: [Native|Public]
	void DeleteDynamicLoadItem(); // Offset: 0x103dbfc5c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEGameMode.DebugEnterFriendObserver
	// Flags: [Native|Public]
	void DebugEnterFriendObserver(struct AUAEPlayerController* InController); // Offset: 0x103dbfbd8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups
	// Flags: [Final|Native|Public|HasDefaults]
	void CreateDynamicBuildingGroups(struct FVector Offset); // Offset: 0x103dbfb5c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Gameplay.UAEGameMode.ChangeName
	// Flags: [Native|Public]
	void ChangeName(struct AController* Controller, StrProperty NewName, bool bNameChange); // Offset: 0x103dbfa38 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Gameplay.UAEGameMode.AddAirDropBox
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	void AddAirDropBox(IntProperty boxId, struct FVector& pos); // Offset: 0x103dbf96c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Gameplay.UAEGameState
// Size: 0x650 // Inherited bytes: 0x5c8
struct AUAEGameState : ALuaGameState {
	// Fields
	struct FName RepPropertyCategory; // Offset: 0x5c8 // Size: 0x08
	char pad_0x5D0[0x5]; // Offset: 0x5d0 // Size: 0x05
	bool bTeamIDChgDeactivePawn; // Offset: 0x5d5 // Size: 0x01
	char pad_0x5D6[0x52]; // Offset: 0x5d6 // Size: 0x52
	StrProperty WeaponAttrReloadTableName; // Offset: 0x628 // Size: 0x10
	StrProperty DamageSearchTableName; // Offset: 0x638 // Size: 0x10
	bool IsInitTable; // Offset: 0x648 // Size: 0x01
	bool bOverrideInstigatorEnable; // Offset: 0x649 // Size: 0x01
	char pad_0x64A[0x6]; // Offset: 0x64a // Size: 0x06

	// Functions

	// Object Name: Function Gameplay.UAEGameState.SendLuaDSToClient
	// Flags: [Final|Native|Public|HasOutParms]
	void SendLuaDSToClient(IntProperty ID, struct TArray<char>& Content); // Offset: 0x103dc97a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEGameState.RPC_LuaDSToClient
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void RPC_LuaDSToClient(IntProperty ID, struct TArray<char> Content); // Offset: 0x103dc96c8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEGameState.HasTimeIDSwitch
	// Flags: [Native|Public|BlueprintCallable]
	bool HasTimeIDSwitch(IntProperty TimeID); // Offset: 0x103dc9634 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEGameState.CheckDSSwitchOpen
	// Flags: [Native|Public|BlueprintCallable]
	bool CheckDSSwitchOpen(IntProperty SwitchId); // Offset: 0x103dc95a0 // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class Gameplay.ItemActorComponent
// Size: 0x238 // Inherited bytes: 0x238
struct UItemActorComponent : ULuaActorComponent {
};

// Object Name: Class Gameplay.BaseGeneratorComponent
// Size: 0x338 // Inherited bytes: 0x238
struct UBaseGeneratorComponent : UItemActorComponent {
	// Fields
	bool bWorldTileGenerator; // Offset: 0x231 // Size: 0x01
	bool bModeStateControl; // Offset: 0x232 // Size: 0x01
	IntProperty GenerateSpotCountPerTick; // Offset: 0x234 // Size: 0x04
	StrProperty ItemTableName; // Offset: 0x238 // Size: 0x10
	struct TArray<StrProperty> ItemSpawnTableList; // Offset: 0x248 // Size: 0x10
	struct UUAEDataTable* ItemTable; // Offset: 0x258 // Size: 0x08
	bool IsWriteStatisticsToLog; // Offset: 0x260 // Size: 0x01
	char pad_0x267[0x1]; // Offset: 0x267 // Size: 0x01
	MapProperty AllGroupSpots; // Offset: 0x268 // Size: 0x50
	struct TArray<struct USpotSceneComponent*> AllSpotsToTick; // Offset: 0x2b8 // Size: 0x10
	MapProperty WorldTileSpots; // Offset: 0x2c8 // Size: 0x50
	StrProperty CookedFilePath; // Offset: 0x318 // Size: 0x10
	struct TArray<StrProperty> CookedFileAddPathArray; // Offset: 0x328 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
	// Flags: [Native|Public]
	void RegisterWorldTileSpot(struct USpotSceneComponent* Spot); // Offset: 0x103d65004 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterSpotComponentToTick(struct USpotSceneComponent* SpotComponent); // Offset: 0x103d64f80 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterGroupSpotComponent(struct UGroupSpotSceneComponent* GroupSpotComponent); // Offset: 0x103d64efc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.BaseGeneratorComponent.GetRandomCategory
	// Flags: [Native|Public|HasOutParms]
	StrProperty GetRandomCategory(struct TArray<struct FSpotWeight>& SpotWeights); // Offset: 0x103d64e14 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
	// Flags: [Final|Native|Protected|HasOutParms]
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray& SpotArray); // Offset: 0x103d64d60 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.BaseGeneratorComponent.GenerateSpots
	// Flags: [Native|Public]
	void GenerateSpots(); // Offset: 0x103d64d44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
	// Flags: [Native|Public]
	void GenerateSpotOnTick(float DeltaTime); // Offset: 0x103d64cc0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.BaseGeneratorComponent.GeneratePickupActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct AActor* GeneratePickupActor(struct UObject* ActorClass, struct FVector& ActorLocation, struct FRotator& ActorRotator, enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FItemGenerateSpawnClass ItemData); // Offset: 0x103d64a78 // Return & Params: Num(6) Size(0x108)

	// Object Name: Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
	// Flags: [Final|Native|Protected]
	void CheckTileLevelsVisible(); // Offset: 0x103d64a64 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.ItemGeneratorComponent
// Size: 0xa08 // Inherited bytes: 0x338
struct UItemGeneratorComponent : UBaseGeneratorComponent {
	// Fields
	struct FVector ItemGenerateOffset; // Offset: 0x338 // Size: 0x0c
	enum class ESpotGroupType BornIslandGroupType; // Offset: 0x344 // Size: 0x01
	bool bStatisticsValid; // Offset: 0x345 // Size: 0x01
	char pad_0x346[0x2]; // Offset: 0x346 // Size: 0x02
	struct FItemGenerateStatisticsData ItemStatisticsData; // Offset: 0x348 // Size: 0x110
	SetProperty IgnoreItemClassPathSet; // Offset: 0x458 // Size: 0x50
	struct TArray<struct FSpotGroupProperty> SpotGroupPropertys; // Offset: 0x4a8 // Size: 0x10
	bool UseSpotGroupPropertysEx; // Offset: 0x4b8 // Size: 0x01
	bool UseAreaID; // Offset: 0x4b9 // Size: 0x01
	char pad_0x4BA[0x6]; // Offset: 0x4ba // Size: 0x06
	struct TArray<StrProperty> AreaIDList; // Offset: 0x4c0 // Size: 0x10
	struct TArray<struct FItemRegionCircle> ReplacedGeneratorRegionMap; // Offset: 0x4d0 // Size: 0x10
	struct TArray<struct FSpotGroupProperty> SpotGroupPropertysEx; // Offset: 0x4e0 // Size: 0x10
	struct TArray<struct FExtraItemSpawn> ExtraSpawnItemsList; // Offset: 0x4f0 // Size: 0x10
	MapProperty SpotGroupPropertysDic; // Offset: 0x500 // Size: 0x50
	struct FSpotGroupProperty DefaultSpotGroupProperty; // Offset: 0x550 // Size: 0x28
	struct UCurveFloat* SpotRateCurve; // Offset: 0x578 // Size: 0x08
	struct UCurveFloat* ItemRateCurve; // Offset: 0x580 // Size: 0x08
	MapProperty CategoryRates; // Offset: 0x588 // Size: 0x50
	MapProperty ItemGenerateSpawnDatas; // Offset: 0x5d8 // Size: 0x50
	struct TArray<struct AActor*> BornIslandItems; // Offset: 0x628 // Size: 0x10
	struct TArray<struct UItemGroupSpotSceneComponent*> AllValidGroups; // Offset: 0x638 // Size: 0x10
	bool bIsGenerateBornIslandItems; // Offset: 0x648 // Size: 0x01
	bool bIsGenerateMainlandItems; // Offset: 0x649 // Size: 0x01
	bool bIsGenerateWorldTileItems; // Offset: 0x64a // Size: 0x01
	char pad_0x64B[0x5]; // Offset: 0x64b // Size: 0x05
	struct FDateTime GenerateBornIslandTime; // Offset: 0x650 // Size: 0x08
	struct FDateTime GenerateMainlandTime; // Offset: 0x658 // Size: 0x08
	bool bUseLocalSpotFile; // Offset: 0x660 // Size: 0x01
	char pad_0x661[0x57]; // Offset: 0x661 // Size: 0x57
	struct TArray<struct FRepeatItemSpotData> AllRepeatItemSpotData; // Offset: 0x6b8 // Size: 0x10
	char pad_0x6C8[0x10]; // Offset: 0x6c8 // Size: 0x10
	struct TArray<struct FItemGenerateSpawnClass> AllItemSpotDataToTick; // Offset: 0x6d8 // Size: 0x10
	char pad_0x6E8[0x50]; // Offset: 0x6e8 // Size: 0x50
	StrProperty CookedBandFilePath; // Offset: 0x738 // Size: 0x10
	bool bIsAreaItemLimit; // Offset: 0x748 // Size: 0x01
	char pad_0x749[0x7]; // Offset: 0x749 // Size: 0x07
	struct TArray<struct FAreaItemsLimitEdit> AreaItemsLimit; // Offset: 0x750 // Size: 0x10
	MapProperty AreaItemsLimitMaps; // Offset: 0x760 // Size: 0x50
	bool bUseDynamicSpotConfig; // Offset: 0x7b0 // Size: 0x01
	char pad_0x7B1[0x7]; // Offset: 0x7b1 // Size: 0x07
	struct TArray<struct FDynamicSpotConfig> DynamicSpotConfigs; // Offset: 0x7b8 // Size: 0x10
	char pad_0x7C8[0x50]; // Offset: 0x7c8 // Size: 0x50
	IntProperty RandomSpotCountPerTick; // Offset: 0x818 // Size: 0x04
	char pad_0x81C[0x54]; // Offset: 0x81c // Size: 0x54
	struct FScriptMulticastDelegate PreCalculateCompleted; // Offset: 0x870 // Size: 0x10
	bool bCheckPreCalculateComplete; // Offset: 0x880 // Size: 0x01
	bool bEnablePrimeItemCircle; // Offset: 0x881 // Size: 0x01
	char pad_0x882[0x6]; // Offset: 0x882 // Size: 0x06
	struct TArray<struct FPrimeItemCircleConfig> PrimeItemCircleConfigs; // Offset: 0x888 // Size: 0x10
	char pad_0x898[0x30]; // Offset: 0x898 // Size: 0x30
	MapProperty SpotGroupObjectsMapByLoc; // Offset: 0x8c8 // Size: 0x50
	char pad_0x918[0xa1]; // Offset: 0x918 // Size: 0xa1
	bool bRemovableMode; // Offset: 0x9b9 // Size: 0x01
	char pad_0x9BA[0x2]; // Offset: 0x9ba // Size: 0x02
	IntProperty RemoveGeneratedItemPerTick; // Offset: 0x9bc // Size: 0x04
	IntProperty RemoveDropGroundItemPerTick; // Offset: 0x9c0 // Size: 0x04
	bool bAddHouseActorSerializeData; // Offset: 0x9c4 // Size: 0x01
	char pad_0x9C5[0x43]; // Offset: 0x9c5 // Size: 0x43

	// Functions

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteItemSpotStatisticsDatas(); // Offset: 0x103d96020 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15
	// Flags: [Final|Native|Public]
	void WriteItemClassStatisticsDatas_V15(); // Offset: 0x103d9600c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteItemClassStatisticsDatas(); // Offset: 0x103d95ff8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteGroupStatisticsDatas(); // Offset: 0x103d95fe4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteBuildingStatisticsDatas(); // Offset: 0x103d95fd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteAreaItemStatisticsDatas(); // Offset: 0x103d95fbc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog
	// Flags: [Native|Protected|BlueprintCallable]
	void WriteAllStatisticsDatasToLog(); // Offset: 0x103d95fa0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
	// Flags: [Native|Public|BlueprintCallable]
	void WriteAllStatisticsDatas(); // Offset: 0x103d95f84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.TryLoadItemSpawnTableByTableMgr
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool TryLoadItemSpawnTableByTableMgr(StrProperty tableName); // Offset: 0x103d95ed4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Gameplay.ItemGeneratorComponent.SetRandomSeed
	// Flags: [Final|Native|Public]
	void SetRandomSeed(IntProperty Seed); // Offset: 0x103d95e58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.ItemGeneratorComponent.SetCatetoryRate
	// Flags: [Final|Native|Public]
	void SetCatetoryRate(MapProperty Rates); // Offset: 0x103d95d98 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RemoveSpotInfo
	// Flags: [Final|Native|Public]
	bool RemoveSpotInfo(bool bFirstEnterState); // Offset: 0x103d95d04 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RemoveItemOnTick
	// Flags: [Final|Native|Public]
	void RemoveItemOnTick(); // Offset: 0x103d95cf0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RemoveDropGround
	// Flags: [Final|Native|Public]
	bool RemoveDropGround(bool bFirstEnterState); // Offset: 0x103d95c5c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterItemGenerateSpawnData(struct FItemGenerateSpawnData Data); // Offset: 0x103d95b94 // Return & Params: Num(1) Size(0x68)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
	// Flags: [Native|Public]
	void RegisterBornIslandItem(struct AActor* Item); // Offset: 0x103d95b10 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEDataTable* ReadItemGenerateTable(StrProperty TablePath); // Offset: 0x103d95a1c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.ItemGeneratorComponent.ReAddAllSpot
	// Flags: [Final|Native|Public]
	void ReAddAllSpot(); // Offset: 0x103d95a08 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
	// Flags: [Final|Native|Protected|HasOutParms]
	struct UItemGroupSpotSceneComponent* RandomSingleGroup(struct TArray<struct UGroupSpotSceneComponent*>& Groups, struct FSpotGroupProperty& GroupProperty); // Offset: 0x103d958d4 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomGroupsByType(struct FSpotGroupProperty& GroupProperty); // Offset: 0x103d95818 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
	// Flags: [Native|Protected|BlueprintCallable]
	void RandomBornIslandGroups(); // Offset: 0x103d957fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish
	// Flags: [Final|Native|Public]
	void OnAsyncLoadItemClassFinish(struct UClass* ActorClassPtr, struct FItemGenerateSpawnClass SpawnClass); // Offset: 0x103d95624 // Return & Params: Num(2) Size(0x100)

	// Object Name: Function Gameplay.ItemGeneratorComponent.LuaCustomFunctionAfterGenerate
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void LuaCustomFunctionAfterGenerate(struct FItemGenerateSpawnClass& SpawnClass, struct AActor* ItemActor); // Offset: 0x103d954d8 // Return & Params: Num(2) Size(0xe0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.LuaAddRandomItemClassArray
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaAddRandomItemClassArray(struct FItemGenerateSpawnClass SpawnClass); // Offset: 0x103d953b0 // Return & Params: Num(2) Size(0xd9)

	// Object Name: Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LoadItemGenerateTable(); // Offset: 0x103d95394 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled
	// Flags: [Final|Native|Protected]
	bool IsCatetoryEnabled(); // Offset: 0x103d95360 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.ItemGeneratorComponent.InitCatetorys
	// Flags: [Final|Native|Protected]
	void InitCatetorys(); // Offset: 0x103d9534c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.InitCategoryEx
	// Flags: [Final|Native|Protected]
	void InitCategoryEx(); // Offset: 0x103d95338 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GMTrackGroundCheck
	// Flags: [Final|Native|Public]
	struct TArray<struct FVector> GMTrackGroundCheck(struct UObject* CheckClass, float FloatUp, float FloatDown, float SinkUp, float SinkTop, bool bCheckBounds); // Offset: 0x103d95158 // Return & Params: Num(7) Size(0x30)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GMGenerateAllSpot
	// Flags: [Final|Native|Public]
	bool GMGenerateAllSpot(StrProperty ItemPath); // Offset: 0x103d95064 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GMEnableRefreshAllSpotWithSeed
	// Flags: [Final|Native|Public]
	void GMEnableRefreshAllSpotWithSeed(IntProperty Seed); // Offset: 0x103d94fe8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetSpotTags
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetSpotTags(); // Offset: 0x103d94f84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetSpotLocsByTag
	// Flags: [Final|Native|Public]
	struct TArray<struct FVector> GetSpotLocsByTag(StrProperty ExTag); // Offset: 0x103d94eb4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetSpotLocInPolygon
	// Flags: [Final|Native|Public|HasOutParms]
	IntProperty GetSpotLocInPolygon(struct TArray<struct FVector> Anchors, struct TArray<struct FVector>& OutLocs, IntProperty RandomNum); // Offset: 0x103d94d18 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetSpotLocInCircle
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	IntProperty GetSpotLocInCircle(struct FVector Center, float Radius, struct TArray<struct FVector>& OutLocs, IntProperty RandomNum); // Offset: 0x103d94ba4 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType
	// Flags: [Final|Native|Public]
	struct FSpotGroupProperty GetSpotGroupPropertyByGroupType(enum class ESpotGroupType SpotGroupType); // Offset: 0x103d94b08 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
	// Flags: [Final|Native|Public|HasOutParms]
	bool GetRandomItemClassArray(StrProperty& Value, StrProperty& Category, struct TArray<struct FItemGenerateSpawnClass>& Results, bool RepeatGenerateItem, struct UItemSpotSceneComponent* SpotComponent); // Offset: 0x103d948e4 // Return & Params: Num(6) Size(0x41)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetRandomCategory
	// Flags: [Native|Public|HasOutParms]
	StrProperty GetRandomCategory(struct TArray<struct FSpotWeight>& SpotWeights); // Offset: 0x103d947fc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetItemDefineID
	// Flags: [Event|Public|BlueprintEvent]
	IntProperty GetItemDefineID(struct UObject* PickUpClass); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GetCatetoryRate
	// Flags: [Final|Native|Protected]
	float GetCatetoryRate(StrProperty Catetory); // Offset: 0x103d94754 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
	// Flags: [Native|Public]
	void GenerateSpotOnTick(float DeltaTime); // Offset: 0x103d946d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.ItemGeneratorComponent.GenerateNewRandomSeed
	// Flags: [Final|Native|Public]
	void GenerateNewRandomSeed(); // Offset: 0x103d946bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.FindASpawnLoc
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector FindASpawnLoc(struct UWorld* InWorld, struct FVector TraceStart); // Offset: 0x103d945f0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.ItemGeneratorComponent.EnableRemoveItem
	// Flags: [Final|Native|Public]
	void EnableRemoveItem(); // Offset: 0x103d945dc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.EnableRefreshAllSpot
	// Flags: [Final|Native|Public]
	void EnableRefreshAllSpot(); // Offset: 0x103d945c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.EnablePrimeItemPolygon
	// Flags: [Final|Native|Public]
	void EnablePrimeItemPolygon(struct TArray<struct FVector> Anchors, IntProperty PrimeConfigIndex); // Offset: 0x103d944a4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.ItemGeneratorComponent.EnablePrimeItemCircle
	// Flags: [Final|Native|Public|HasDefaults]
	void EnablePrimeItemCircle(struct FVector Center, float Radius, IntProperty PrimeConfigIndex); // Offset: 0x103d943b0 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Gameplay.ItemGeneratorComponent.EnableDynamicSpotConfigByIndex
	// Flags: [Final|Native|Public]
	void EnableDynamicSpotConfigByIndex(IntProperty DynamicIndex); // Offset: 0x103d94334 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.ItemGeneratorComponent.DoPickUp
	// Flags: [Native|Event|Public|BlueprintEvent]
	void DoPickUp(IntProperty ItemSpotDataIndex, StrProperty Value, StrProperty Category); // Offset: 0x103d94204 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteBornIslandItems(); // Offset: 0x103d941f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool CheckShouldGenerateItem(IntProperty ItemId); // Offset: 0x103d9415c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.ItemGeneratorComponent.CheckRecoverItems
	// Flags: [Final|Native|Public]
	void CheckRecoverItems(); // Offset: 0x103d94148 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGeneratorComponent.CheckInPolygon
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool CheckInPolygon(struct FVector& pos, struct TArray<struct FVector>& Anchors); // Offset: 0x103d94044 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Gameplay.ItemGeneratorComponent.CheckInCircle
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool CheckInCircle(struct FVector& pos, struct FVector& Center, float& Radius); // Offset: 0x103d93f10 // Return & Params: Num(4) Size(0x1d)

	// Object Name: Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath
	// Flags: [Final|Native|Public|HasOutParms]
	void AddIgnoreItemClassPath(struct TArray<StrProperty>& IgnoreItemClassList); // Offset: 0x103d93e68 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.ItemGeneratorComponent.AddDropGround
	// Flags: [Final|Native|Public]
	void AddDropGround(struct AActor* InActor); // Offset: 0x103d93dec // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Gameplay.UAEPlayerState
// Size: 0x13f0 // Inherited bytes: 0x5f8
struct AUAEPlayerState : ALuaPlayerState {
	// Fields
	bool IsForcedNetRelevant; // Offset: 0x5f8 // Size: 0x01
	bool IsSoloCheckTeamID; // Offset: 0x5f9 // Size: 0x01
	char pad_0x5FA[0x2]; // Offset: 0x5fa // Size: 0x02
	float surviveTime; // Offset: 0x5fc // Size: 0x04
	float surviveTimeFromPlane; // Offset: 0x600 // Size: 0x04
	char pad_0x604[0x4]; // Offset: 0x604 // Size: 0x04
	float Pronetime; // Offset: 0x608 // Size: 0x04
	char pad_0x60C[0x8]; // Offset: 0x60c // Size: 0x08
	IntProperty MovingCount; // Offset: 0x614 // Size: 0x04
	float marchDistance; // Offset: 0x618 // Size: 0x04
	float travelDistance; // Offset: 0x61c // Size: 0x04
	float DriveDistance; // Offset: 0x620 // Size: 0x04
	float MonsterCatchupDistance; // Offset: 0x624 // Size: 0x04
	IntProperty destroyVehicleNum; // Offset: 0x628 // Size: 0x04
	IntProperty rescueTimes; // Offset: 0x62c // Size: 0x04
	struct TArray<uint64> RescueTeammatesList; // Offset: 0x630 // Size: 0x10
	IntProperty NormalItemsNum; // Offset: 0x640 // Size: 0x04
	IntProperty SeniorItemsNum; // Offset: 0x644 // Size: 0x04
	IntProperty GVMemberID; // Offset: 0x648 // Size: 0x04
	char pad_0x64C[0x4]; // Offset: 0x64c // Size: 0x04
	struct FName PlayerType; // Offset: 0x650 // Size: 0x08
	uint64 FinalTeamleaderUID; // Offset: 0x658 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x660 // Size: 0x04
	char pad_0x664[0x4]; // Offset: 0x664 // Size: 0x04
	StrProperty PlayerUID; // Offset: 0x668 // Size: 0x10
	StrProperty MLAIStringUID; // Offset: 0x678 // Size: 0x10
	bool bPSEnsure; // Offset: 0x688 // Size: 0x01
	char pad_0x689[0x7]; // Offset: 0x689 // Size: 0x07
	StrProperty iconUrl; // Offset: 0x690 // Size: 0x10
	IntProperty Gender; // Offset: 0x6a0 // Size: 0x04
	IntProperty PlayerLevel; // Offset: 0x6a4 // Size: 0x04
	IntProperty SegmentLevel; // Offset: 0x6a8 // Size: 0x04
	float RealHiddenScore; // Offset: 0x6ac // Size: 0x04
	IntProperty AceImprintShowId; // Offset: 0x6b0 // Size: 0x04
	IntProperty AceImprintBaseId; // Offset: 0x6b4 // Size: 0x04
	IntProperty AvatarBoxId; // Offset: 0x6b8 // Size: 0x04
	IntProperty planeAvatarId; // Offset: 0x6bc // Size: 0x04
	IntProperty Campid; // Offset: 0x6c0 // Size: 0x04
	IntProperty resID; // Offset: 0x6c4 // Size: 0x04
	uint64 UID; // Offset: 0x6c8 // Size: 0x08
	uint64 MLAIDisplayUID; // Offset: 0x6d0 // Size: 0x08
	StrProperty OpenID; // Offset: 0x6d8 // Size: 0x10
	IntProperty ZoneID; // Offset: 0x6e8 // Size: 0x04
	char pad_0x6EC[0x4]; // Offset: 0x6ec // Size: 0x04
	StrProperty Nation; // Offset: 0x6f0 // Size: 0x10
	IntProperty TeamID; // Offset: 0x700 // Size: 0x04
	char pad_0x704[0x4]; // Offset: 0x704 // Size: 0x04
	int64_t IdxInTeam; // Offset: 0x708 // Size: 0x08
	uint64 PreTeamID; // Offset: 0x710 // Size: 0x08
	IntProperty PreTeamChatState; // Offset: 0x718 // Size: 0x04
	IntProperty PlayerBornPointID; // Offset: 0x71c // Size: 0x04
	IntProperty Kills; // Offset: 0x720 // Size: 0x04
	IntProperty KillsBeforeDie; // Offset: 0x724 // Size: 0x04
	IntProperty Knockouts; // Offset: 0x728 // Size: 0x04
	IntProperty AIKills; // Offset: 0x72c // Size: 0x04
	IntProperty RealPlayerKills; // Offset: 0x730 // Size: 0x04
	IntProperty BossKills; // Offset: 0x734 // Size: 0x04
	IntProperty DeathsCount; // Offset: 0x738 // Size: 0x04
	char pad_0x73C[0x4]; // Offset: 0x73c // Size: 0x04
	IntProperty MlAIDeliverNum; // Offset: 0x740 // Size: 0x04
	IntProperty OriginalMlAIDeliverNum; // Offset: 0x744 // Size: 0x04
	IntProperty Assists; // Offset: 0x748 // Size: 0x04
	char pad_0x74C[0x4]; // Offset: 0x74c // Size: 0x04
	struct TArray<uint64> AssistTeammatesList; // Offset: 0x750 // Size: 0x10
	MapProperty AssistKillPlayers; // Offset: 0x760 // Size: 0x50
	struct TArray<IntProperty> OvertimeAssistsTime; // Offset: 0x7b0 // Size: 0x10
	char PlatformGender; // Offset: 0x7c0 // Size: 0x01
	char pad_0x7C1[0x3]; // Offset: 0x7c1 // Size: 0x03
	IntProperty MatchStrategyLabel; // Offset: 0x7c4 // Size: 0x04
	IntProperty MatchLabel; // Offset: 0x7c8 // Size: 0x04
	uint32_t Killer; // Offset: 0x7cc // Size: 0x04
	uint32_t KillerIGPlayerKey; // Offset: 0x7d0 // Size: 0x04
	char pad_0x7D4[0x4]; // Offset: 0x7d4 // Size: 0x04
	StrProperty BeKilledOpenID; // Offset: 0x7d8 // Size: 0x10
	StrProperty KillerName; // Offset: 0x7e8 // Size: 0x10
	uint32_t KillerType; // Offset: 0x7f8 // Size: 0x04
	IntProperty KillerWeaponID; // Offset: 0x7fc // Size: 0x04
	uint32_t KillerDeliveryType; // Offset: 0x800 // Size: 0x04
	uint32_t DeadCircleIndex; // Offset: 0x804 // Size: 0x04
	uint64 MisKillTeammatePlayerKey; // Offset: 0x808 // Size: 0x08
	IntProperty ShootWeaponShotNum; // Offset: 0x810 // Size: 0x04
	IntProperty ShootWeaponShotNumPicth; // Offset: 0x814 // Size: 0x04
	IntProperty ShootWeaponShotAndHitPlayerNum; // Offset: 0x818 // Size: 0x04
	IntProperty ShootWeaponShotAndHitPlayerNumNoAI; // Offset: 0x81c // Size: 0x04
	IntProperty ShootWeaponShotHeadNum; // Offset: 0x820 // Size: 0x04
	IntProperty ShootWeaponShotHeadNumNoAI; // Offset: 0x824 // Size: 0x04
	IntProperty HeadShotNum; // Offset: 0x828 // Size: 0x04
	IntProperty HeadShotNumNoAI; // Offset: 0x82c // Size: 0x04
	IntProperty KillNumByGrende; // Offset: 0x830 // Size: 0x04
	IntProperty UseFragGrenadeNum; // Offset: 0x834 // Size: 0x04
	IntProperty UseSmokeGrenadeNum; // Offset: 0x838 // Size: 0x04
	IntProperty UseFlashGrenadeNum; // Offset: 0x83c // Size: 0x04
	IntProperty UseBurnGrenadeNum; // Offset: 0x840 // Size: 0x04
	IntProperty MaxKillDistance; // Offset: 0x844 // Size: 0x04
	IntProperty HealTimes; // Offset: 0x848 // Size: 0x04
	float DamageAmount; // Offset: 0x84c // Size: 0x04
	float DamageAmountFPP; // Offset: 0x850 // Size: 0x04
	IntProperty FPPSwitchTimes; // Offset: 0x854 // Size: 0x04
	float RealPlayerDamageAmount; // Offset: 0x858 // Size: 0x04
	IntProperty MeleeKillTimes; // Offset: 0x85c // Size: 0x04
	float MeleeDamageAmount; // Offset: 0x860 // Size: 0x04
	float RangedDamagedAmount; // Offset: 0x864 // Size: 0x04
	float VehicleDamageAmount; // Offset: 0x868 // Size: 0x04
	IntProperty FirstMoveBattles; // Offset: 0x86c // Size: 0x04
	IntProperty TotalBattles; // Offset: 0x870 // Size: 0x04
	float HealAmount; // Offset: 0x874 // Size: 0x04
	struct TArray<StrProperty> KillFlow; // Offset: 0x878 // Size: 0x10
	struct TArray<StrProperty> KnockOutFlow; // Offset: 0x888 // Size: 0x10
	struct TArray<struct FKnockOutData> KnockOutList; // Offset: 0x898 // Size: 0x10
	float InDamageAmount; // Offset: 0x8a8 // Size: 0x04
	char pad_0x8AC[0x14]; // Offset: 0x8ac // Size: 0x14
	struct TArray<struct FTLog_PickUpItemFlow> TLog_PickUpItemFlowData; // Offset: 0x8c0 // Size: 0x10
	IntProperty PickUpItemTimes; // Offset: 0x8d0 // Size: 0x04
	bool bIsForbidItemFlowMerge; // Offset: 0x8d4 // Size: 0x01
	char pad_0x8D5[0x3]; // Offset: 0x8d5 // Size: 0x03
	MapProperty ConsumeItemUseCount; // Offset: 0x8d8 // Size: 0x50
	MapProperty TLog_BornLandGrenadeData; // Offset: 0x928 // Size: 0x50
	struct FAIDeliveryTlogData TLog_AIDeliveryTlogData; // Offset: 0x978 // Size: 0x58
	bool bHasSendAIDeliverData; // Offset: 0x9d0 // Size: 0x01
	char pad_0x9D1[0x7]; // Offset: 0x9d1 // Size: 0x07
	MapProperty TLog_PickUpItemIdMap; // Offset: 0x9d8 // Size: 0x50
	struct TArray<struct FGameModeLikeResultData> Like; // Offset: 0xa28 // Size: 0x10
	uint32_t Switch; // Offset: 0xa38 // Size: 0x04
	char pad_0xA3C[0x4]; // Offset: 0xa3c // Size: 0x04
	struct TArray<uint32_t> Self; // Offset: 0xa40 // Size: 0x10
	struct TArray<struct FGameModeTeammateLableCheckData> LabelCheck; // Offset: 0xa50 // Size: 0x10
	struct TArray<struct FUseItemFlow> UseItemFlow; // Offset: 0xa60 // Size: 0x10
	struct TArray<struct FUseBuffFlow> UseBuffFlow; // Offset: 0xa70 // Size: 0x10
	struct TArray<struct FBuildingEnterFlow> BuildingEnterFlow; // Offset: 0xa80 // Size: 0x10
	struct TArray<struct FTLog_PropEquipUnequipFlow> TLog_PropEquipUnequipFlowData; // Offset: 0xa90 // Size: 0x10
	MapProperty TLog_BulletCount; // Offset: 0xaa0 // Size: 0x50
	struct FTLog_SpecialStats TLog_SpecialStats; // Offset: 0xaf0 // Size: 0x08
	bool bIsOutsideBlueCircle; // Offset: 0xaf8 // Size: 0x01
	char pad_0xAF9[0x3]; // Offset: 0xaf9 // Size: 0x03
	float OutsideBlueCircleTime; // Offset: 0xafc // Size: 0x04
	struct TArray<struct FVehicleDriveDisData> VehicleDriveDisDataArray; // Offset: 0xb00 // Size: 0x10
	IntProperty FirstOpenedAirDropBoxNum; // Offset: 0xb10 // Size: 0x04
	IntProperty FirstOpenedPlayerTombBoxNum; // Offset: 0xb14 // Size: 0x04
	IntProperty FirstOpenedTreasureBoxNum; // Offset: 0xb18 // Size: 0x04
	float HitEnemyHeadAmount; // Offset: 0xb1c // Size: 0x04
	struct TArray<IntProperty> BuildFlow; // Offset: 0xb20 // Size: 0x10
	struct TArray<IntProperty> DestroyShelterFlow; // Offset: 0xb30 // Size: 0x10
	float ShelterTakeDamage; // Offset: 0xb40 // Size: 0x04
	float HitShelterDamage; // Offset: 0xb44 // Size: 0x04
	struct FVector LandLocation; // Offset: 0xb48 // Size: 0x0c
	struct FVector ParachuteLocation; // Offset: 0xb54 // Size: 0x0c
	IntProperty LandTime; // Offset: 0xb60 // Size: 0x04
	struct FVector DeadLocation; // Offset: 0xb64 // Size: 0x0c
	StrProperty DeadDamangeType; // Offset: 0xb70 // Size: 0x10
	IntProperty PveDeadAttacker; // Offset: 0xb80 // Size: 0x04
	IntProperty PveStageId; // Offset: 0xb84 // Size: 0x04
	StrProperty DeadTimeStr; // Offset: 0xb88 // Size: 0x10
	IntProperty NearDeathDamageType; // Offset: 0xb98 // Size: 0x04
	uint32_t NearDeathCauserId; // Offset: 0xb9c // Size: 0x04
	bool NearDeathIsHeadShot; // Offset: 0xba0 // Size: 0x01
	char pad_0xBA1[0x3]; // Offset: 0xba1 // Size: 0x03
	IntProperty BeDownTimes; // Offset: 0xba4 // Size: 0x04
	IntProperty BeSavedTimes; // Offset: 0xba8 // Size: 0x04
	char pad_0xBAC[0x4]; // Offset: 0xbac // Size: 0x04
	struct FEquipmentData EquipmentData; // Offset: 0xbb0 // Size: 0x70
	IntProperty PersonalRank; // Offset: 0xc20 // Size: 0x04
	char pad_0xC24[0x8]; // Offset: 0xc24 // Size: 0x08
	bool bIsGameTerminator; // Offset: 0xc2c // Size: 0x01
	char pad_0xC2D[0x3]; // Offset: 0xc2d // Size: 0x03
	IntProperty GamePlayingTime; // Offset: 0xc30 // Size: 0x04
	IntProperty ObserverTime; // Offset: 0xc34 // Size: 0x04
	IntProperty TouchDownAreaID; // Offset: 0xc38 // Size: 0x04
	IntProperty TouchDownLocTypeID; // Offset: 0xc3c // Size: 0x04
	struct TArray<IntProperty> TouchDownAreaList; // Offset: 0xc40 // Size: 0x10
	bool bHasTouchDownAreaList; // Offset: 0xc50 // Size: 0x01
	char pad_0xC51[0x3]; // Offset: 0xc51 // Size: 0x03
	float ReportTouchDownHeight; // Offset: 0xc54 // Size: 0x04
	struct TArray<struct FGameModePlayerTaskData> CompletedTaskList; // Offset: 0xc58 // Size: 0x10
	struct TArray<struct FReportCollection> SpecialCollectionList; // Offset: 0xc68 // Size: 0x10
	struct TArray<struct FWeaponDamageRecord> WeaponDamageRecordList; // Offset: 0xc78 // Size: 0x10
	struct TArray<IntProperty> SecretAreaIDList; // Offset: 0xc88 // Size: 0x10
	struct TArray<struct FSpecialPickItemState> CollectItemRecord; // Offset: 0xc98 // Size: 0x10
	float DrivingHelicopterTime; // Offset: 0xca8 // Size: 0x04
	float InHelicopterTime; // Offset: 0xcac // Size: 0x04
	IntProperty RevivalNum; // Offset: 0xcb0 // Size: 0x04
	IntProperty BeRevivedNum; // Offset: 0xcb4 // Size: 0x04
	IntProperty KillNumInVehicle; // Offset: 0xcb8 // Size: 0x04
	float MaxVehicleToLandHeight; // Offset: 0xcbc // Size: 0x04
	float MaxVehicleInAirInterval; // Offset: 0xcc0 // Size: 0x04
	IntProperty KillPlayerNum; // Offset: 0xcc4 // Size: 0x04
	IntProperty KillAINum; // Offset: 0xcc8 // Size: 0x04
	float TotalSprintDistance; // Offset: 0xccc // Size: 0x04
	float TotalBeenDamageAmount; // Offset: 0xcd0 // Size: 0x04
	float DestroyVehicleWheelNum; // Offset: 0xcd4 // Size: 0x04
	struct TArray<struct FDestroyVehicleWheelFlow> DestroyVehicleWheelFlow; // Offset: 0xcd8 // Size: 0x10
	IntProperty ProneTimes; // Offset: 0xce8 // Size: 0x04
	IntProperty CrouchTimes; // Offset: 0xcec // Size: 0x04
	IntProperty JumpTimes; // Offset: 0xcf0 // Size: 0x04
	IntProperty KillMonsterNum; // Offset: 0xcf4 // Size: 0x04
	MapProperty MonsterID2KillNum; // Offset: 0xcf8 // Size: 0x50
	float TotalDamageAmountToMonsters; // Offset: 0xd48 // Size: 0x04
	float TotalDamageAmountFromMonsters; // Offset: 0xd4c // Size: 0x04
	MapProperty DamageAmountToMonsters; // Offset: 0xd50 // Size: 0x50
	MapProperty DamageAmountFromMonsters; // Offset: 0xda0 // Size: 0x50
	IntProperty MonsterHeadShotKilledTimes; // Offset: 0xdf0 // Size: 0x04
	IntProperty BeMonsterDownTimes; // Offset: 0xdf4 // Size: 0x04
	IntProperty LightCandleNum; // Offset: 0xdf8 // Size: 0x04
	char pad_0xDFC[0x4]; // Offset: 0xdfc // Size: 0x04
	MapProperty ActivityButtonCount; // Offset: 0xe00 // Size: 0x50
	struct TArray<struct FActivityEventReportData> ActivityEventRecordList; // Offset: 0xe50 // Size: 0x10
	float BattleStateTime; // Offset: 0xe60 // Size: 0x04
	bool bIsKickedFromGame; // Offset: 0xe64 // Size: 0x01
	char pad_0xE65[0x3]; // Offset: 0xe65 // Size: 0x03
	float DriveWithTeammateDistance; // Offset: 0xe68 // Size: 0x04
	IntProperty FistKillingCount; // Offset: 0xe6c // Size: 0x04
	IntProperty OpenedAirDropBoxNum; // Offset: 0xe70 // Size: 0x04
	char pad_0xE74[0x4]; // Offset: 0xe74 // Size: 0x04
	MapProperty VehicleUsedMap; // Offset: 0xe78 // Size: 0x50
	struct TArray<StrProperty> DestroyVehicleFlow; // Offset: 0xec8 // Size: 0x10
	IntProperty UseHelicoperNum; // Offset: 0xed8 // Size: 0x04
	char pad_0xEDC[0x4]; // Offset: 0xedc // Size: 0x04
	struct TArray<struct FTLog_KillInfo> PlayerKillAIInfo; // Offset: 0xee0 // Size: 0x10
	struct TArray<struct FTLog_KillInfo> PlayerNearDeathDuoToAI; // Offset: 0xef0 // Size: 0x10
	struct FTLog_KillInfo AIKillPlayerInfo; // Offset: 0xf00 // Size: 0x28
	float UseHelicoperDistance; // Offset: 0xf28 // Size: 0x04
	char CharmRankIndex; // Offset: 0xf2c // Size: 0x01
	char pad_0xF2D[0x3]; // Offset: 0xf2d // Size: 0x03
	SetProperty UseHelicoperRecord; // Offset: 0xf30 // Size: 0x50
	IntProperty FollowState; // Offset: 0xf80 // Size: 0x04
	IntProperty SnowBoardJumpActionCount; // Offset: 0xf84 // Size: 0x04
	IntProperty EmoteOnTelpherCount; // Offset: 0xf88 // Size: 0x04
	IntProperty KillMagicWalkAI; // Offset: 0xf8c // Size: 0x04
	IntProperty SendMagicWalkAI; // Offset: 0xf90 // Size: 0x04
	char pad_0xF94[0x4]; // Offset: 0xf94 // Size: 0x04
	struct TArray<IntProperty> FindBlackMonsterIDs; // Offset: 0xf98 // Size: 0x10
	IntProperty KillSnowManCount; // Offset: 0xfa8 // Size: 0x04
	char pad_0xFAC[0x4]; // Offset: 0xfac // Size: 0x04
	uint64 LuckmateUID; // Offset: 0xfb0 // Size: 0x08
	MapProperty EventCounterMap; // Offset: 0xfb8 // Size: 0x50
	MapProperty GeneralCounterMap; // Offset: 0x1008 // Size: 0x50
	char pad_0x1058[0x8]; // Offset: 0x1058 // Size: 0x08
	DelegateProperty AllowToAddGeneralCount; // Offset: 0x1060 // Size: 0x10
	struct FScriptMulticastDelegate OnGenerelCountChanged; // Offset: 0x1070 // Size: 0x10
	IntProperty VeteranRecruitIndex; // Offset: 0x1080 // Size: 0x04
	char pad_0x1084[0x4]; // Offset: 0x1084 // Size: 0x04
	struct FScriptMulticastDelegate PlayerStateTeamChanged; // Offset: 0x1088 // Size: 0x10
	struct TArray<struct FPlayEmoteData> FPlayEmoteDataArray; // Offset: 0x1098 // Size: 0x10
	struct FGameModePlayerAliasInfo AliasInfo; // Offset: 0x10a8 // Size: 0x48
	IntProperty MemberIdInVoiceRoom; // Offset: 0x10f0 // Size: 0x04
	bool PlayerVoiceEnable; // Offset: 0x10f4 // Size: 0x01
	char pad_0x10F5[0x3]; // Offset: 0x10f5 // Size: 0x03
	struct FGameModePlayerUpassInfo UpassInfo; // Offset: 0x10f8 // Size: 0x38
	IntProperty UpassShow; // Offset: 0x1130 // Size: 0x04
	IntProperty upassKeepBuy; // Offset: 0x1134 // Size: 0x04
	IntProperty upassCurValue; // Offset: 0x1138 // Size: 0x04
	IntProperty pass_type; // Offset: 0x113c // Size: 0x04
	bool UpassIsBuy; // Offset: 0x1140 // Size: 0x01
	char pad_0x1141[0x3]; // Offset: 0x1141 // Size: 0x03
	struct FTLog_Micphone MicphoneTlog; // Offset: 0x1144 // Size: 0x18
	float TeammateMicrophoneTime; // Offset: 0x115c // Size: 0x04
	float TeammateSpeakerTime; // Offset: 0x1160 // Size: 0x04
	float EnemyMicrophoneTime; // Offset: 0x1164 // Size: 0x04
	float EnemySpeakerTime; // Offset: 0x1168 // Size: 0x04
	float TeammateInterphoneTime; // Offset: 0x116c // Size: 0x04
	float EnemyInterphoneTime; // Offset: 0x1170 // Size: 0x04
	float MicrophoneUseTimeStamp; // Offset: 0x1174 // Size: 0x04
	float SpeakerUseTimeStamp; // Offset: 0x1178 // Size: 0x04
	char pad_0x117C[0x24]; // Offset: 0x117c // Size: 0x24
	struct FDamageInfo LuaNearDeathDamageInfo; // Offset: 0x11a0 // Size: 0xb8
	struct FDamageInfo LuaDeathDamageInfo; // Offset: 0x1258 // Size: 0xb8
	struct FName RepPropertyCategory; // Offset: 0x1310 // Size: 0x08
	char pad_0x1318[0x10]; // Offset: 0x1318 // Size: 0x10
	bool IsOnline; // Offset: 0x1328 // Size: 0x01
	char pad_0x1329[0x1f]; // Offset: 0x1329 // Size: 0x1f
	struct FGameBaseInfo GameBaseInfo; // Offset: 0x1348 // Size: 0x90
	char pad_0x13D8[0x8]; // Offset: 0x13d8 // Size: 0x08
	StrProperty RealPlayerName; // Offset: 0x13e0 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.UAEPlayerState.SetRankAndPersonalRank
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRankAndPersonalRank(IntProperty TempRank, IntProperty TempPersonalRank); // Offset: 0x103ddd6f4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void SetGVMemberIDServerCall(IntProperty memberID); // Offset: 0x103ddd670 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.SetGVMemberID
	// Flags: [Final|Native|Public]
	void SetGVMemberID(IntProperty memberID); // Offset: 0x103ddd5f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.SetDeliveryResult
	// Flags: [Final|Native|Public]
	void SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess, IntProperty EventTypeId); // Offset: 0x103ddd4f0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Gameplay.UAEPlayerState.SendLuaDSToClient
	// Flags: [Final|Native|Public|HasOutParms]
	void SendLuaDSToClient(IntProperty ID, struct TArray<char>& Content); // Offset: 0x103ddd40c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerState.RPC_ServerAddGeneralCount
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void RPC_ServerAddGeneralCount(IntProperty ID, IntProperty InCount, bool bReset); // Offset: 0x103ddd30c // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.UAEPlayerState.RPC_LuaDSToClient
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void RPC_LuaDSToClient(IntProperty ID, struct TArray<char> Content); // Offset: 0x103ddd230 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerState.RPC_ChangeOnlyTeamChat
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void RPC_ChangeOnlyTeamChat(IntProperty NewPreTeamChatState); // Offset: 0x103ddd1ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.ReportTaskExtInfo
	// Flags: [Final|Native|Public]
	void ReportTaskExtInfo(IntProperty TaskID, StrProperty ExtInfo); // Offset: 0x103ddd088 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerState.ReportTaskData
	// Flags: [Final|Native|Public]
	void ReportTaskData(IntProperty TaskID, IntProperty process); // Offset: 0x103ddcfd4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerState.ReportSpecialCollection
	// Flags: [Final|Native|Public]
	void ReportSpecialCollection(IntProperty ItemId, IntProperty Count); // Offset: 0x103ddcf20 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerState.ReportSecretAreaID
	// Flags: [Final|Native|Public]
	void ReportSecretAreaID(IntProperty SecretAreaID); // Offset: 0x103ddcea4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLikeTeammate
	// Flags: [Final|Native|Public]
	void ReportLikeTeammate(int64_t BeLikeUID, IntProperty LikeType); // Offset: 0x103ddcdec // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLikeSwitch
	// Flags: [Final|Native|Public]
	void ReportLikeSwitch(IntProperty SwitchSetting); // Offset: 0x103ddcd70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLikeSelf
	// Flags: [Final|Native|Public]
	void ReportLikeSelf(IntProperty LikeType); // Offset: 0x103ddccf4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLandLocType
	// Flags: [Final|Native|Public]
	void ReportLandLocType(IntProperty TouchDownLocType); // Offset: 0x103ddcc78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLandAreaList
	// Flags: [Final|Native|Public|HasOutParms]
	void ReportLandAreaList(struct TArray<IntProperty>& TouchDownAreaIDs); // Offset: 0x103ddcbd0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLandArea
	// Flags: [Final|Native|Public]
	void ReportLandArea(IntProperty TouchDownArea); // Offset: 0x103ddcb54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.ReportLabelCheck
	// Flags: [Final|Native|Public]
	void ReportLabelCheck(IntProperty TeammateUID, IntProperty Result); // Offset: 0x103ddcaa0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerState.RecordUseHelicoper
	// Flags: [Final|Native|Public]
	void RecordUseHelicoper(uint32_t UseHelicoperId); // Offset: 0x103ddca24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.OnRepCampIDBP
	// Flags: [Event|Public|BlueprintEvent]
	void OnRepCampIDBP(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex
	// Flags: [Final|Native|Public]
	void OnRep_VeteranRecruitIndex(); // Offset: 0x103ddca10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum
	// Flags: [Native|Public]
	void OnRep_UpdateKillMonsterNum(); // Offset: 0x103ddc9f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_UID
	// Flags: [Native|Public]
	void OnRep_UID(); // Offset: 0x103ddc9d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_TeamID
	// Flags: [Final|Native|Public]
	void OnRep_TeamID(); // Offset: 0x103ddc9c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_RescueTimesChange
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_RescueTimesChange(); // Offset: 0x103ddc9a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_PreTeamID
	// Flags: [Final|Native|Public]
	void OnRep_PreTeamID(); // Offset: 0x103ddc994 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
	// Flags: [Native|Public]
	void OnRep_PlayerKillsChange(); // Offset: 0x103ddc978 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_PlayerKey
	// Flags: [Native|Public]
	void OnRep_PlayerKey(); // Offset: 0x103ddc95c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_MLAIDisplayUID
	// Flags: [Final|Native|Public]
	void OnRep_MLAIDisplayUID(); // Offset: 0x103ddc948 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_MatchLabel
	// Flags: [Final|Native|Public]
	void OnRep_MatchLabel(); // Offset: 0x103ddc934 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord
	// Flags: [Final|Native|Public]
	void OnRep_CollectItemRecord(); // Offset: 0x103ddc920 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_CampID
	// Flags: [Final|Native|Public]
	void OnRep_CampID(); // Offset: 0x103ddc90c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_bOnlyPreTeamChat
	// Flags: [Final|Native|Public]
	void OnRep_bOnlyPreTeamChat(); // Offset: 0x103ddc8f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnRep_AliasInfo
	// Flags: [Final|Native|Public]
	void OnRep_AliasInfo(); // Offset: 0x103ddc8e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated
	// Flags: [Native|Public]
	void OnClientVeteranRecruitIndexUpdated(); // Offset: 0x103ddc8c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted
	// Flags: [Final|Native|Public]
	bool IsSpecialPickItemCollectionCompleted(IntProperty ItemId); // Offset: 0x103ddc83c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEPlayerState.IsSpecialPickItem
	// Flags: [Final|Native|Public]
	bool IsSpecialPickItem(IntProperty ItemId); // Offset: 0x103ddc7b0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEPlayerState.IsNearDeathDamageInfoValid
	// Flags: [Final|Native|Public]
	bool IsNearDeathDamageInfoValid(); // Offset: 0x103ddc77c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerState.IsItemForbidMerge
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsItemForbidMerge(IntProperty ItemResId); // Offset: 0x103ddc6e8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid
	// Flags: [Final|Native|Public]
	bool IsDeathDamageInfoValid(); // Offset: 0x103ddc6b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerState.GetWeaponReportByWeaponRecord
	// Flags: [Event|Public|BlueprintEvent|Const]
	struct FOnePlayerWeapon GetWeaponReportByWeaponRecord(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Gameplay.UAEPlayerState.GetWeaponRecordData
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	void GetWeaponRecordData(struct FOnePlayerWeapon& OutWeaponInfo); // Offset: 0x103ddc600 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure]
	IntProperty GetVeteranPlayerLevel(); // Offset: 0x103ddc5c4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.GetUserIDByMemberID
	// Flags: [Native|Public]
	uint32_t GetUserIDByMemberID(IntProperty memberID); // Offset: 0x103ddc530 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerState.GetUIDString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetUIDString(); // Offset: 0x103ddc4cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData(); // Offset: 0x103ddc460 // Return & Params: Num(1) Size(0x1c8)

	// Object Name: Function Gameplay.UAEPlayerState.GetTeamID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTeamID(); // Offset: 0x103ddc444 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.GetRank
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetRank(); // Offset: 0x103ddc410 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.GetPlayerTotalShootNum
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	IntProperty GetPlayerTotalShootNum(); // Offset: 0x103ddc3d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.GetPlayerKey
	// Flags: [Final|Native|Public]
	uint32_t GetPlayerKey(); // Offset: 0x103ddc3a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold
	// Flags: [Native|Public|Const]
	struct FGameModePlayerBattleResultData_SuperCold GetPlayerBattleResultData_SuperCold(); // Offset: 0x103ddc330 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
	// Flags: [Native|Public|Const]
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData(); // Offset: 0x103ddc2c4 // Return & Params: Num(1) Size(0x618)

	// Object Name: Function Gameplay.UAEPlayerState.GetMentorPlayerType
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure]
	enum class EMentorPlayerType GetMentorPlayerType(); // Offset: 0x103ddc288 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList
	// Flags: [Native|Public]
	void ForceUpdateCampCharacterList(); // Offset: 0x103ddc26c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.CopyNearDeathDamageInfo
	// Flags: [Final|Native|Public]
	void CopyNearDeathDamageInfo(); // Offset: 0x103ddc258 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.CopyDeathDamageInfo
	// Flags: [Final|Native|Public]
	void CopyDeathDamageInfo(); // Offset: 0x103ddc244 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.ClearTlogData
	// Flags: [Native|Public]
	void ClearTlogData(); // Offset: 0x103ddc228 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.ClearKillNum
	// Flags: [Final|Native|Public]
	void ClearKillNum(); // Offset: 0x103ddc204 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerState.ChangeCollectItemRecord
	// Flags: [Final|Native|Public]
	void ChangeCollectItemRecord(IntProperty InItemID, bool InNewState); // Offset: 0x103ddc148 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEPlayerState.AddGeneralTLogJustForDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddGeneralTLogJustForDelegate(IntProperty ID, IntProperty DeltaCnt, IntProperty CurrValue); // Offset: 0x103ddc058 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Gameplay.UAEPlayerState.AddGeneralCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddGeneralCount(IntProperty ID, IntProperty InCount, bool bReset); // Offset: 0x103ddbf60 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.UAEPlayerState.AddEventCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddEventCount(char EventID, IntProperty InCount, bool bReset); // Offset: 0x103ddbe68 // Return & Params: Num(3) Size(0x9)
};

// Object Name: Class Gameplay.BackpackComponent
// Size: 0x5f0 // Inherited bytes: 0x238
struct UBackpackComponent : ULuaActorComponent {
	// Fields
	char pad_0x238[0x10]; // Offset: 0x238 // Size: 0x10
	struct FScriptMulticastDelegate ItemListUpdatedDelegate; // Offset: 0x248 // Size: 0x10
	struct FScriptMulticastDelegate SingleItemUpdatedDelegate; // Offset: 0x258 // Size: 0x10
	struct FScriptMulticastDelegate SingleItemDeleteDelegate; // Offset: 0x268 // Size: 0x10
	struct FScriptMulticastDelegate BatchItemUpdateDelegate; // Offset: 0x278 // Size: 0x10
	struct FScriptMulticastDelegate BatchItemDeleteDelegate; // Offset: 0x288 // Size: 0x10
	struct FScriptMulticastDelegate AvatarItemUpdatedDelegate; // Offset: 0x298 // Size: 0x10
	struct FScriptMulticastDelegate CapacityUpdatedDelegate; // Offset: 0x2a8 // Size: 0x10
	struct FScriptMulticastDelegate ItemOperationDelegate; // Offset: 0x2b8 // Size: 0x10
	struct FScriptMulticastDelegate ItemOperationInfoDelegate; // Offset: 0x2c8 // Size: 0x10
	struct FScriptMulticastDelegate AssociationOperationDelegate; // Offset: 0x2d8 // Size: 0x10
	struct FScriptMulticastDelegate ItemOperCountDelegate; // Offset: 0x2e8 // Size: 0x10
	struct FScriptMulticastDelegate ItemOperationFailedDelegate; // Offset: 0x2f8 // Size: 0x10
	struct FScriptMulticastDelegate BackPackTipsToPlayerDelegate; // Offset: 0x308 // Size: 0x10
	struct FScriptMulticastDelegate ItemHandleAddDelegate; // Offset: 0x318 // Size: 0x10
	struct FScriptMulticastDelegate AIStateItemListUpdatedDelegate; // Offset: 0x328 // Size: 0x10
	struct FScriptMulticastDelegate ItemUpdatedDelegate; // Offset: 0x338 // Size: 0x10
	struct FScriptMulticastDelegate ItemRemovedDelegate; // Offset: 0x348 // Size: 0x10
	struct TArray<struct FCustomAccessoriesData> CustomAccessoriesData; // Offset: 0x358 // Size: 0x10
	struct TArray<struct FBattleItemPickupAfterLand> BattleItemPickupAfterLandList; // Offset: 0x368 // Size: 0x10
	struct TArray<struct FSpecialPickInfo> specialCountLimit; // Offset: 0x378 // Size: 0x10
	IntProperty CoinsNum; // Offset: 0x388 // Size: 0x04
	bool AllowPickToSafeBox; // Offset: 0x38c // Size: 0x01
	bool AllowPickForceToBackPack; // Offset: 0x38d // Size: 0x01
	char pad_0x38E[0x2]; // Offset: 0x38e // Size: 0x02
	struct FScriptMulticastDelegate CoinsChangedDelegate; // Offset: 0x390 // Size: 0x10
	char pad_0x3A0[0x28]; // Offset: 0x3a0 // Size: 0x28
	struct FIncNetArray ItemListNet; // Offset: 0x3c8 // Size: 0x20
	struct FIncNetArray ItemListNetCache; // Offset: 0x3e8 // Size: 0x20
	MapProperty CacheBattleItemMap; // Offset: 0x408 // Size: 0x50
	struct TArray<struct FItemDefineID> BroadcastInsertItemList; // Offset: 0x458 // Size: 0x10
	struct TArray<struct FItemDefineID> BroadcastUpdateItemList; // Offset: 0x468 // Size: 0x10
	struct TArray<struct FItemDefineID> BroadcastDeleteItemList; // Offset: 0x478 // Size: 0x10
	bool AutoEquipAim; // Offset: 0x488 // Size: 0x01
	bool bForceAutoEquipAim; // Offset: 0x489 // Size: 0x01
	char pad_0x48A[0x6]; // Offset: 0x48a // Size: 0x06
	struct TArray<struct UItemHandleBase*> ItemHandleList; // Offset: 0x490 // Size: 0x10
	MapProperty ItemHandleMap; // Offset: 0x4a0 // Size: 0x50
	IntProperty CapacityThreshold; // Offset: 0x4f0 // Size: 0x04
	float Capacity; // Offset: 0x4f4 // Size: 0x04
	float OccupiedCapacity; // Offset: 0x4f8 // Size: 0x04
	float SafetyBoxCapacity; // Offset: 0x4fc // Size: 0x04
	float SafetyBoxOccupiedCapacity; // Offset: 0x500 // Size: 0x04
	char pad_0x504[0x18]; // Offset: 0x504 // Size: 0x18
	IntProperty virtualitemid; // Offset: 0x51c // Size: 0x04
	char pad_0x520[0x8]; // Offset: 0x520 // Size: 0x08
	bool IsForbidAutoEquipAttachments; // Offset: 0x528 // Size: 0x01
	char pad_0x529[0x7]; // Offset: 0x529 // Size: 0x07
	struct TArray<IntProperty> NeedToShowTypeList; // Offset: 0x530 // Size: 0x10
	bool bVerifyWeaponPackageData; // Offset: 0x540 // Size: 0x01
	bool bEnableBackpackRepActor; // Offset: 0x541 // Size: 0x01
	char pad_0x542[0x6]; // Offset: 0x542 // Size: 0x06
	struct TArray<IntProperty> ForceInBackpackMeelWeaponList; // Offset: 0x548 // Size: 0x10
	bool bShowBounty; // Offset: 0x558 // Size: 0x01
	char pad_0x559[0x7]; // Offset: 0x559 // Size: 0x07
	struct FScriptMulticastDelegate BackpackShowBountyDelegate; // Offset: 0x560 // Size: 0x10
	char pad_0x570[0x8]; // Offset: 0x570 // Size: 0x08
	struct FScriptMulticastDelegate ItemChangeAreaDelegate; // Offset: 0x578 // Size: 0x10
	struct FScriptMulticastDelegate JumpConsumeItemDelegate; // Offset: 0x588 // Size: 0x10
	MapProperty ProxyMap; // Offset: 0x598 // Size: 0x50
	bool bEnableWeaponAttachmentBindToWeapon; // Offset: 0x5e8 // Size: 0x01
	char pad_0x5E9[0x7]; // Offset: 0x5e9 // Size: 0x07

	// Functions

	// Object Name: Function Gameplay.BackpackComponent.UseItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool UseItem(struct FItemDefineID DefineID, struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x103d5f8bc // Return & Params: Num(4) Size(0x42)

	// Object Name: Function Gameplay.BackpackComponent.UpdateStoreAreaOccupiedCapacity
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent]
	float UpdateStoreAreaOccupiedCapacity(float& StoreAreaOccupiedCapacity, enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5f7dc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Gameplay.BackpackComponent.UpdateOccupiedCapacity
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void UpdateOccupiedCapacity(); // Offset: 0x103d5f7c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.UpdateCapacity
	// Flags: [Native|Event|Protected|BlueprintEvent]
	float UpdateCapacity(); // Offset: 0x103d5f784 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive
	// Flags: [Final|Native|Public]
	void UnlockUpdateItemListReceive(); // Offset: 0x103d5f770 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.TryMergeItemHandles
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void TryMergeItemHandles(struct FItemDefineID& DefineID, enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5f69c // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.TakeItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty TakeItem(struct FItemDefineID DefineID, IntProperty Count, bool bCallHandleDrop); // Offset: 0x103d5f57c // Return & Params: Num(4) Size(0x24)

	// Object Name: Function Gameplay.BackpackComponent.SwapItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool SwapItem(struct FItemDefineID DefineID1, struct FItemDefineID DefineID2); // Offset: 0x103d5f48c // Return & Params: Num(3) Size(0x31)

	// Object Name: Function Gameplay.BackpackComponent.SetForceAutoEquipAim
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetForceAutoEquipAim(bool bInAutoEquipAim); // Offset: 0x103d5f408 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.SetChangeWeaponSchemeState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetChangeWeaponSchemeState(bool bInIsChangeWeaponScheme); // Offset: 0x103d5f384 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.ServerSetShowBounty
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void ServerSetShowBounty(bool bInShowBounty); // Offset: 0x103d5f2f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.ServerSetDropMeelWeapon
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate]
	void ServerSetDropMeelWeapon(bool NewValue); // Offset: 0x103d5f26c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.ServerSetCustomAccessories
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void ServerSetCustomAccessories(IntProperty WeaponItemId, IntProperty Index, IntProperty ItemId, bool bIsSetOrRemove); // Offset: 0x103d5f134 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Gameplay.BackpackComponent.ServerEnableItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void ServerEnableItem(struct FItemDefineID DefineID, bool bUse); // Offset: 0x103d5f050 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.RPC_Multicast_AllItem
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	void RPC_Multicast_AllItem(struct FIncNetArray Items); // Offset: 0x103d5ef88 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.ReturnItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ReturnItem(struct FItemDefineID DefineID, IntProperty Count, bool bCallHandlePickup); // Offset: 0x103d5ee68 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function Gameplay.BackpackComponent.RemoveItemHandle
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool RemoveItemHandle(struct FItemDefineID& DefineID); // Offset: 0x103d5edc0 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.ReceiveItemList
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void ReceiveItemList(); // Offset: 0x103d5eda4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.ReceiveCapacity
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void ReceiveCapacity(); // Offset: 0x103d5ed88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.PreCheckCanPickupBagAvatar
	// Flags: [Native|Event|Public|BlueprintEvent]
	IntProperty PreCheckCanPickupBagAvatar(struct UBattleItemHandleBase* NewHandle, struct UBattleItemHandleBase* OldHandle, enum class EBattleItemUseReason reson); // Offset: 0x103d5ec80 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Gameplay.BackpackComponent.PostItemHandleEquippingState
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void PostItemHandleEquippingState(struct FItemDefineID& DefineID, bool bEquipping); // Offset: 0x103d5eba4 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickupItemFromWrapperDetail(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason, enum class EBattleItemClientPickupType BattleItemClientPickupType); // Offset: 0x103d5e9f8 // Return & Params: Num(5) Size(0x73)

	// Object Name: Function Gameplay.BackpackComponent.PickUpItem_Default
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickUpItem_Default(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x103d5e88c // Return & Params: Num(4) Size(0x72)

	// Object Name: Function Gameplay.BackpackComponent.PickupItem
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickupItem(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason, enum class EBattleItemClientPickupType BattleItemClientPickupType); // Offset: 0x103d5e6e0 // Return & Params: Num(5) Size(0x73)

	// Object Name: Function Gameplay.BackpackComponent.PickupBattleItemOnPlane
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PickupBattleItemOnPlane(); // Offset: 0x103d5e6cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickItem_IntoSafetyBox(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x103d5e560 // Return & Params: Num(4) Size(0x72)

	// Object Name: Function Gameplay.BackpackComponent.PickItem_IntoBackpack
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickItem_IntoBackpack(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x103d5e3f4 // Return & Params: Num(4) Size(0x72)

	// Object Name: Function Gameplay.BackpackComponent.OnRep_specialCountLimit
	// Flags: [Final|Native|Public]
	void OnRep_specialCountLimit(); // Offset: 0x103d5e3e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.OnRep_ItemListNet
	// Flags: [Final|Native|Public]
	void OnRep_ItemListNet(); // Offset: 0x103d5e3cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.OnRep_CoinsNum
	// Flags: [Final|Native|Public]
	void OnRep_CoinsNum(); // Offset: 0x103d5e3b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.OnRep_Capacity
	// Flags: [Final|Native|Protected]
	void OnRep_Capacity(); // Offset: 0x103d5e3a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.NotifyItemUpdated
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void NotifyItemUpdated(struct FItemDefineID& DefineID); // Offset: 0x103d5e30c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.BackpackComponent.NotifyItemRemoved
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void NotifyItemRemoved(struct FItemDefineID& DefineID); // Offset: 0x103d5e274 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.BackpackComponent.NotifyItemListUpdated
	// Flags: [Native|Public|BlueprintCallable]
	void NotifyItemListUpdated(); // Offset: 0x103d5e258 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.NotifyCapacityUpdated
	// Flags: [Native|Public|BlueprintCallable]
	void NotifyCapacityUpdated(); // Offset: 0x103d5e23c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.NewItemHandle
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent|Const]
	struct UBattleItemHandleBase* NewItemHandle(struct FItemDefineID& DefineID); // Offset: 0x103d5e194 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.NewItemDefineID
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent]
	struct FItemDefineID NewItemDefineID(struct FItemDefineID& DefineID); // Offset: 0x103d5e0dc // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void ModifyItemHandleEquippingState(struct UItemHandleBase* ItemHandle, bool bEquipping); // Offset: 0x103d5e01c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.BackpackComponent.ModifyItemHandleCount
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void ModifyItemHandleCount(struct UItemHandleBase* ItemHandle, IntProperty Count); // Offset: 0x103d5df64 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.BackpackComponent.ModifyAutoPickClipType
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void ModifyAutoPickClipType(IntProperty InAutoPickClipType); // Offset: 0x103d5dee0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.BackpackComponent.ModifyAimNotAutoUse
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate]
	void ModifyAimNotAutoUse(bool bAdd); // Offset: 0x103d5de54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.LockUpdateItemListReceive
	// Flags: [Final|Native|Public]
	void LockUpdateItemListReceive(); // Offset: 0x103d5de40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.ItemNet2Data
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FBattleItemData ItemNet2Data(struct FNetArrayUnit& NetItem); // Offset: 0x103d5dd5c // Return & Params: Num(2) Size(0x110)

	// Object Name: Function Gameplay.BackpackComponent.IsNeedToShowInBackpack
	// Flags: [Final|Native|Public]
	bool IsNeedToShowInBackpack(IntProperty TypeDefineID); // Offset: 0x103d5dcd0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemTypes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsItemListUpdatedHasSomeItemTypes(struct TArray<IntProperty>& ItemTypes); // Offset: 0x103d5dc18 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemSubTypes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsItemListUpdatedHasSomeItemSubTypes(struct TArray<IntProperty>& ItemSubTypes); // Offset: 0x103d5db60 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItems
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsItemListUpdatedHasSomeItems(struct TArray<IntProperty>& ItemTypeSpecificIDs); // Offset: 0x103d5daa8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsItemListUpdatedHasOneItemType(IntProperty itemType); // Offset: 0x103d5da1c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemSubType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsItemListUpdatedHasOneItemSubType(IntProperty ItemSubType); // Offset: 0x103d5d990 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItem
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsItemListUpdatedHasOneItem(IntProperty ItemTypeSpecificID); // Offset: 0x103d5d904 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.IsItemExist
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	bool IsItemExist(struct FItemDefineID& DefineID); // Offset: 0x103d5d85c // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsEnableWeaponAttachmentBindToWeapon(); // Offset: 0x103d5d828 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.IsEnableBackpackRepActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsEnableBackpackRepActor(); // Offset: 0x103d5d7f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCustomIgnoreAccessories(IntProperty WeaponId, IntProperty Index); // Offset: 0x103d5d730 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.BackpackComponent.IsCustomAccessories
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCustomAccessories(IntProperty WeaponId, IntProperty ItemId); // Offset: 0x103d5d66c // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.BackpackComponent.IsChangeWeaponScheme
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsChangeWeaponScheme(); // Offset: 0x103d5d638 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.IsBackPackContainItemId
	// Flags: [Final|Native|Public|Const]
	bool IsBackPackContainItemId(IntProperty ItemId); // Offset: 0x103d5d5ac // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.IsAutoUse
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	bool IsAutoUse(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange
	// Flags: [Final|Native|Public|Const]
	bool HasUnEquipItemByDefindIdRange(IntProperty LowValue, IntProperty HighValue); // Offset: 0x103d5d4e8 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.BackpackComponent.HasTagSub
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool HasTagSub(IntProperty ItemId, struct FName& TagName); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Gameplay.BackpackComponent.HasItemBySubType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasItemBySubType(IntProperty SubType); // Offset: 0x103d5d45c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.HasItemBySpecificID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasItemBySpecificID(IntProperty SpecificID); // Offset: 0x103d5d3d0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.HasItemByDefineID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool HasItemByDefineID(struct FItemDefineID& DefineID); // Offset: 0x103d5d330 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.HasItemByDefindIdRange
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasItemByDefindIdRange(IntProperty LowValue, IntProperty HighValue); // Offset: 0x103d5d26c // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.BackpackComponent.HasAllItem
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<IntProperty> HasAllItem(struct TArray<struct FBattleItemData>& ItemDataArray, bool bExcludeEquippingItem); // Offset: 0x103d5d140 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Gameplay.BackpackComponent.HandleDropInDisuse
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void HandleDropInDisuse(struct FItemDefineID& DefineID, struct UBattleItemHandleBase* ItemHandle, enum class EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse); // Offset: 0x103d5cfec // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Gameplay.BackpackComponent.GetWorld_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWorld* GetWorld_BP(); // Offset: 0x103d5cfb8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId
	// Flags: [Final|Native|Public|Const]
	IntProperty GetUnEquipItemNumByItemId(IntProperty ItemId); // Offset: 0x103d5cf2c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.BackpackComponent.GetSpecialItemNow
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FSpecialPickInfo GetSpecialItemNow(struct FItemDefineID DefineID); // Offset: 0x103d5ce8c // Return & Params: Num(2) Size(0x24)

	// Object Name: Function Gameplay.BackpackComponent.GetSpecialItemBefore
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FSpecialPickInfo GetSpecialItemBefore(IntProperty ItemResId); // Offset: 0x103d5cdfc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.BackpackComponent.GetSafetyBoxCapacity
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	float GetSafetyBoxCapacity(); // Offset: 0x103d5cdc0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FBattleItemData GetLeastElectrictyBattleItemData(struct FItemDefineID DefineID, enum class EBattleItemAdditionalDataType AdditionalDataNameType); // Offset: 0x103d5ccc0 // Return & Params: Num(3) Size(0xe0)

	// Object Name: Function Gameplay.BackpackComponent.GetItemSubType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	IntProperty GetItemSubType(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.BackpackComponent.GetItemListBySpecialID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FBattleItemData> GetItemListBySpecialID(struct TArray<IntProperty>& SpecialIDArray, bool bIgnoreEquipping, enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5cb4c // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Gameplay.BackpackComponent.GetItemListByDefineID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FBattleItemData> GetItemListByDefineID(struct FItemDefineID& DefineID); // Offset: 0x103d5ca84 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Gameplay.BackpackComponent.GetItemHandleMap
	// Flags: [Native|Protected|BlueprintCallable]
	MapProperty GetItemHandleMap(); // Offset: 0x103d5ca44 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Gameplay.BackpackComponent.GetItemHandleList
	// Flags: [Native|Protected|BlueprintCallable]
	struct TArray<struct UItemHandleBase*> GetItemHandleList(); // Offset: 0x103d5ca04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.BackpackComponent.GetItemCountByType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetItemCountByType(IntProperty InItemType); // Offset: 0x103d5c978 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetItemCountByItemSpecialID(IntProperty InItemSpecialID); // Offset: 0x103d5c8ec // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.BackpackComponent.GetItemByDefineID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FBattleItemData GetItemByDefineID(struct FItemDefineID& DefineID); // Offset: 0x103d5c824 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function Gameplay.BackpackComponent.GetItemAttrsFlag
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	IntProperty GetItemAttrsFlag(IntProperty ItemId); // Offset: 0x103d5c790 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.BackpackComponent.GetItemAssociateWeights
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	float GetItemAssociateWeights(struct FBattleItemData& InItemData); // Offset: 0x103d5c6d4 // Return & Params: Num(2) Size(0xc4)

	// Object Name: Function Gameplay.BackpackComponent.GetFirstItemBySubType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FBattleItemData GetFirstItemBySubType(IntProperty SubType); // Offset: 0x103d5c620 // Return & Params: Num(2) Size(0xc8)

	// Object Name: Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FBattleItemData GetFirstItemByDefineIDIgnoreInstance(struct FItemDefineID& DefineID); // Offset: 0x103d5c558 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function Gameplay.BackpackComponent.GetCurrentPickupItemDefineID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FItemDefineID GetCurrentPickupItemDefineID(); // Offset: 0x103d5c50c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID& DefineID); // Offset: 0x103d5c450 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Gameplay.BackpackComponent.GetAllItemList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FBattleItemData> GetAllItemList(enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5c39c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.BackpackComponent.GetAIPickupType
	// Flags: [Native|Event|Public|BlueprintEvent]
	enum class EBattleItemClientPickupType GetAIPickupType(IntProperty ItemId); // Offset: 0x103d5c308 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.BackpackComponent.ForceNetUpdate
	// Flags: [Native|Public|BlueprintCallable]
	void ForceNetUpdate(); // Offset: 0x103d5c2ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.BackpackComponent.DropItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool DropItem(struct FItemDefineID DefineID, IntProperty Count, enum class EBattleItemDropReason Reason); // Offset: 0x103d5c1d0 // Return & Params: Num(4) Size(0x1e)

	// Object Name: Function Gameplay.BackpackComponent.DisuseItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool DisuseItem(struct FItemDefineID DefineID, enum class EBattleItemDisuseReason Reason); // Offset: 0x103d5c0f0 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function Gameplay.BackpackComponent.CreateItemHandleInternal
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent|Const]
	struct UBattleItemHandleBase* CreateItemHandleInternal(struct FItemDefineID& DefineID); // Offset: 0x103d5c048 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.CreateItemHandle
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UItemHandleBase* CreateItemHandle(struct FItemDefineID& DefineID); // Offset: 0x103d5bfa0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.ConsumeItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ConsumeItem(struct FItemDefineID DefineID, IntProperty Count); // Offset: 0x103d5bec8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientBroadcastItemOperationFailedDelegate(struct FItemDefineID DefineID, enum class EBattleItemOperationType OperationType, enum class EBattleItemOperationFailedReason FailedReason); // Offset: 0x103d5bdc8 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void ClientBroadcastItemOperationDelegate(struct FItemDefineID DefineID, enum class EBattleItemOperationType OperationType, char Reason); // Offset: 0x103d5bcc8 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function Gameplay.BackpackComponent.ClientBroadcastItemChangeAreaDelegate
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientBroadcastItemChangeAreaDelegate(IntProperty TypeSpecificID, enum class EBattleItemChangeAreaType OperationType, IntProperty Num, bool bToSafeBox); // Offset: 0x103d5bb8c // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty CheckSpecialMaxCountForItem(struct FItemDefineID& DefineID, IntProperty Count); // Offset: 0x103d5bab0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool CheckSkillPropItemCanBePickup(struct UBackpackComponent* BackpackComp, struct FItemDefineID DefineID); // Offset: 0x103d5b9cc // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Gameplay.BackpackComponent.CheckPickUpItemDefaultSuccess
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CheckPickUpItemDefaultSuccess(struct FItemDefineID& DefineID, bool bPickupSucc, bool bAutoEquip); // Offset: 0x103d5b894 // Return & Params: Num(4) Size(0x1b)

	// Object Name: Function Gameplay.BackpackComponent.CheckLeftLimitCountForItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	IntProperty CheckLeftLimitCountForItem(IntProperty InItemID, IntProperty InCount); // Offset: 0x103d5b7c8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Gameplay.BackpackComponent.CheckItemEmptyInBackpack
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckItemEmptyInBackpack(IntProperty InItemID); // Offset: 0x103d5b74c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.BackpackComponent.CheckItemAttrsFlag
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool CheckItemAttrsFlag(IntProperty ItemId, enum class EItemAttrs ItemAttrEnum); // Offset: 0x103d5b67c // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Gameplay.BackpackComponent.CheckCapacityForItem
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	IntProperty CheckCapacityForItem(struct FItemDefineID& DefineID, IntProperty Count, enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5b55c // Return & Params: Num(4) Size(0x24)

	// Object Name: Function Gameplay.BackpackComponent.ChangeItemStoreAreaNew
	// Flags: [Native|Public|BlueprintCallable]
	bool ChangeItemStoreAreaNew(struct FItemDefineID DefineID, IntProperty InItemNum, enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5b440 // Return & Params: Num(4) Size(0x1e)

	// Object Name: Function Gameplay.BackpackComponent.ChangeItemStoreArea
	// Flags: [Native|Public|BlueprintCallable]
	bool ChangeItemStoreArea(struct FItemDefineID DefineID, IntProperty InItemNum, enum class EItemStoreArea InItemStoreArea); // Offset: 0x103d5b324 // Return & Params: Num(4) Size(0x1e)

	// Object Name: Function Gameplay.BackpackComponent.CantDrop
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool CantDrop(); // Offset: 0x103d5b2e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.BackpackComponent.CanDisuseToBackpack
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool CanDisuseToBackpack(struct FItemDefineID DefineID); // Offset: 0x103d5b244 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool CacheItemAssociationBeforeDisuse(struct FItemDefineID DefineID, enum class EBattleItemDisuseReason Reason); // Offset: 0x103d5b164 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BroadcastItemOperCountDelegate(struct FItemDefineID& DefineID, enum class EBattleItemOperationType OperationType, IntProperty Count); // Offset: 0x103d5b054 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BroadcastItemOperationInfoDelegate(struct FItemOperationInfo& ItemOperationInfo); // Offset: 0x103d5afc4 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BroadcastItemOperationFailedDelegate(struct FItemDefineID& DefineID, enum class EBattleItemOperationType OperationType, enum class EBattleItemOperationFailedReason FailedReason); // Offset: 0x103d5aeb4 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BroadcastItemOperationDelegate(struct FItemDefineID& DefineID, enum class EBattleItemOperationType OperationType, char Reason); // Offset: 0x103d5ada4 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function Gameplay.BackpackComponent.BroadcastItemChangeAreaDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BroadcastItemChangeAreaDelegate(IntProperty TypeSpecificID, enum class EBattleItemChangeAreaType OperationType, IntProperty Num, bool bToSafeBox); // Offset: 0x103d5ac70 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Gameplay.BackpackComponent.AlternativePickupItem
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool AlternativePickupItem(struct FItemDefineID& DefineID); // Offset: 0x103d5abc8 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.BackpackComponent.AddItemHandle
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool AddItemHandle(struct FItemDefineID& DefineID, struct UItemHandleBase* ItemHandle); // Offset: 0x103d5aae4 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AddBattleItemPickupOnPlane(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason, enum class EBattleItemClientPickupType BattleItemClientPickupType); // Offset: 0x103d5a950 // Return & Params: Num(4) Size(0x72)
};

// Object Name: Class Gameplay.UAECharacter
// Size: 0xae0 // Inherited bytes: 0x8f0
struct AUAECharacter : ACharacter {
	// Fields
	char pad_0x8F0[0x58]; // Offset: 0x8f0 // Size: 0x58
	IntProperty iRegionCharacter; // Offset: 0x948 // Size: 0x04
	char pad_0x94C[0x4]; // Offset: 0x94c // Size: 0x04
	struct FName RepPropertyCategory; // Offset: 0x950 // Size: 0x08
	struct FName PlayerType; // Offset: 0x958 // Size: 0x08
	StrProperty PlayerName; // Offset: 0x960 // Size: 0x10
	StrProperty Nation; // Offset: 0x970 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x980 // Size: 0x04
	char pad_0x984[0x4]; // Offset: 0x984 // Size: 0x04
	StrProperty PlayerUID; // Offset: 0x988 // Size: 0x10
	IntProperty TeamID; // Offset: 0x998 // Size: 0x04
	char pad_0x99C[0x4]; // Offset: 0x99c // Size: 0x04
	struct FScriptMulticastDelegate OnTeamIDChange; // Offset: 0x9a0 // Size: 0x10
	bool bTeamLeader; // Offset: 0x9b0 // Size: 0x01
	char pad_0x9B1[0x3]; // Offset: 0x9b1 // Size: 0x03
	IntProperty Campid; // Offset: 0x9b4 // Size: 0x04
	IntProperty resID; // Offset: 0x9b8 // Size: 0x04
	enum class ECharacterGender DefaultCharacterGender; // Offset: 0x9bc // Size: 0x01
	char pad_0x9BD[0x3]; // Offset: 0x9bd // Size: 0x03
	struct TArray<struct FGameModePlayerItem> InitialItemList; // Offset: 0x9c0 // Size: 0x10
	struct FGameModePlayerUpassInfo UpassInfo; // Offset: 0x9d0 // Size: 0x38
	struct FGameModePlayerPetInfo PetInfo; // Offset: 0xa08 // Size: 0x20
	IntProperty planeAvatarId; // Offset: 0xa28 // Size: 0x04
	IntProperty DyeDebugFlag; // Offset: 0xa2c // Size: 0x04
	struct TArray<struct FGameModePlayerTaskData> InitialTaskDataList; // Offset: 0xa30 // Size: 0x10
	bool bIsAI; // Offset: 0xa40 // Size: 0x01
	bool bIsMLAI; // Offset: 0xa41 // Size: 0x01
	bool bIsAIWithPet; // Offset: 0xa42 // Size: 0x01
	bool bAINeedCheckBullets; // Offset: 0xa43 // Size: 0x01
	float DestinyValue; // Offset: 0xa44 // Size: 0x04
	char pad_0xA48[0xc]; // Offset: 0xa48 // Size: 0x0c
	float RatingScore; // Offset: 0xa54 // Size: 0x04
	bool UseWholeBodyModel; // Offset: 0xa58 // Size: 0x01
	bool bEnsure; // Offset: 0xa59 // Size: 0x01
	bool bMEnsure; // Offset: 0xa5a // Size: 0x01
	bool bRepEnsure; // Offset: 0xa5b // Size: 0x01
	bool bRepMEnsure; // Offset: 0xa5c // Size: 0x01
	bool DefaultIsUseWholeBodyModel; // Offset: 0xa5d // Size: 0x01
	char pad_0xA5E[0x12]; // Offset: 0xa5e // Size: 0x12
	StrProperty LuaFilePath; // Offset: 0xa70 // Size: 0x10
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xa80 // Size: 0x50
	char pad_0xAD0[0x10]; // Offset: 0xad0 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.UAECharacter.SetNetCullDistanceSquared
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNetCullDistanceSquared(float fNetCullDistanceSquared); // Offset: 0x103db4d14 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAECharacter.SetMEnsure
	// Flags: [Native|Public|BlueprintCallable]
	void SetMEnsure(bool bMValue); // Offset: 0x103db4c88 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.SetEnsure
	// Flags: [Native|Public|BlueprintCallable]
	void SetEnsure(bool bValue); // Offset: 0x103db4bfc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.SendLuaDSToClient
	// Flags: [Final|Native|Public|HasOutParms]
	void SendLuaDSToClient(IntProperty ID, struct TArray<char>& Content); // Offset: 0x103db4b18 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAECharacter.RPC_LuaDSToClient
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void RPC_LuaDSToClient(IntProperty ID, struct TArray<char> Content); // Offset: 0x103db4a3c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAECharacter.PostRep_PlayerUID
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostRep_PlayerUID(); // Offset: 0x103db4a20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.OnRep_UseWholeModel
	// Flags: [Final|Native|Public]
	void OnRep_UseWholeModel(); // Offset: 0x103db4a0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.OnRep_TeamID
	// Flags: [Final|Native|Public]
	void OnRep_TeamID(); // Offset: 0x103db49f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.OnRep_ResId
	// Flags: [Native|Public]
	void OnRep_ResId(); // Offset: 0x103db49dc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.OnRep_PlayerUID
	// Flags: [Final|Native|Public]
	void OnRep_PlayerUID(); // Offset: 0x103db49c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.OnRep_PlayerKey
	// Flags: [Native|Public]
	void OnRep_PlayerKey(); // Offset: 0x103db49ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.OnRep_CampID
	// Flags: [Final|Native|Public]
	void OnRep_CampID(); // Offset: 0x103db4998 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAECharacter.IsDefaultCharType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDefaultCharType(); // Offset: 0x103db495c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.GetTeamID
	// Flags: [Final|Native|Public|Const]
	IntProperty GetTeamID(); // Offset: 0x103db4940 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAECharacter.GetRepMEnsure
	// Flags: [Final|Native|Public]
	bool GetRepMEnsure(); // Offset: 0x103db490c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.GetRepEnsure
	// Flags: [Final|Native|Public]
	bool GetRepEnsure(); // Offset: 0x103db48d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.GetPlayerKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetPlayerKey(); // Offset: 0x103db4874 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAECharacter.GetPhysicsType
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	IntProperty GetPhysicsType(); // Offset: 0x103db4838 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<struct UActorComponent*> GetNonSimulatedComponents_OnFighting(); // Offset: 0x103db47cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<struct UActorComponent*> GetNonSimulatedComponents_NonTeammates(); // Offset: 0x103db4760 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAECharacter.GetNonSimulatedComponents
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<struct UActorComponent*> GetNonSimulatedComponents(); // Offset: 0x103db46f4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAECharacter.GetNonDedicatedComponents
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<struct UActorComponent*> GetNonDedicatedComponents(); // Offset: 0x103db4688 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAECharacter.GetMovementBaseComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPrimitiveComponent* GetMovementBaseComponent(); // Offset: 0x103db4654 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAECharacter.GetMEnsure
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetMEnsure(); // Offset: 0x103db4618 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.GetEnsure
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetEnsure(); // Offset: 0x103db45dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacter.GetCampID
	// Flags: [Final|Native|Public]
	IntProperty GetCampID(); // Offset: 0x103db45a8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientAcknowledgeReconnection_3(uint32_t Token); // Offset: 0x103db4524 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Gameplay.ItemSceneComponent
// Size: 0x3a0 // Inherited bytes: 0x3a0
struct UItemSceneComponent : USceneComponent {
};

// Object Name: Class Gameplay.GroupSpotSceneComponent
// Size: 0x3b0 // Inherited bytes: 0x3a0
struct UGroupSpotSceneComponent : UItemSceneComponent {
	// Fields
	enum class ESpotGroupType GroupType; // Offset: 0x399 // Size: 0x01
	bool bNearItem; // Offset: 0x39a // Size: 0x01
	IntProperty WorldCompositionID; // Offset: 0x39c // Size: 0x04
	float LastGenerateItemTime; // Offset: 0x3a0 // Size: 0x04
	float GenerateItemTimeCD; // Offset: 0x3a4 // Size: 0x04
	bool bPickup; // Offset: 0x3a8 // Size: 0x01
	bool bRepeatGenerateItem; // Offset: 0x3a9 // Size: 0x01
	bool bIsValidGroup; // Offset: 0x3aa // Size: 0x01

	// Functions

	// Object Name: Function Gameplay.GroupSpotSceneComponent.SetGroupValid
	// Flags: [Native|Public]
	void SetGroupValid(bool Valid); // Offset: 0x103d9165c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.GroupSpotSceneComponent.IsValidGroup
	// Flags: [Native|Public]
	bool IsValidGroup(); // Offset: 0x103d91620 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
	// Flags: [Final|Native|Public]
	IntProperty FindWorldCompositionID(); // Offset: 0x103d915ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.GroupSpotSceneComponent.DoPickUp
	// Flags: [Final|Native|Public]
	void DoPickUp(); // Offset: 0x103d915d8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.ItemGroupSpotSceneComponent
// Size: 0x3f0 // Inherited bytes: 0x3b0
struct UItemGroupSpotSceneComponent : UGroupSpotSceneComponent {
	// Fields
	char pad_0x3B0[0x8]; // Offset: 0x3b0 // Size: 0x08
	enum class ERegionSizeIndex RegionSize; // Offset: 0x3b8 // Size: 0x01
	char pad_0x3B9[0x7]; // Offset: 0x3b9 // Size: 0x07
	struct UItemGeneratorComponent* ItemGenerator; // Offset: 0x3c0 // Size: 0x08
	struct TArray<struct UItemSpotSceneComponent*> SpotsCacheCur; // Offset: 0x3c8 // Size: 0x10
	struct TArray<struct UItemSpotSceneComponent*> SpotsCacheAll; // Offset: 0x3d8 // Size: 0x10
	char pad_0x3E8[0x8]; // Offset: 0x3e8 // Size: 0x08

	// Functions

	// Object Name: Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
	// Flags: [Final|Native|Public|HasOutParms]
	void SetGroupProperty(struct UItemGeneratorComponent* Generator, struct FSpotGroupProperty& Property); // Offset: 0x103d9b658 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots
	// Flags: [Final|Native|Protected]
	void RepeatSpots(); // Offset: 0x103d9b644 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot
	// Flags: [Final|Native|Protected]
	void RepeatSingleSpot(struct UItemSpotSceneComponent* Spot); // Offset: 0x103d9b5c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomSpotByType(enum class ESpotType SpotType, struct TArray<struct UItemSpotSceneComponent*>& AllSpots, struct FSpotTypeProperty& Property); // Offset: 0x103d9b464 // Return & Params: Num(3) Size(0x50)

	// Object Name: Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomSingleSpot(struct TArray<struct UItemSpotSceneComponent*>& Spots, struct FSpotTypeProperty& Property); // Offset: 0x103d9b348 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD
	// Flags: [Final|Native|Public|HasOutParms]
	float RandomRepeatGenerateItemCD(struct FSpotGroupProperty& GroupProperty); // Offset: 0x103d9b284 // Return & Params: Num(2) Size(0x2c)
};

// Object Name: Class Gameplay.SpotSceneComponent
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct USpotSceneComponent : UItemSceneComponent {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x399 // Size: 0x01
	IntProperty ID; // Offset: 0x39c // Size: 0x04
	IntProperty WorldCompositionID; // Offset: 0x3a0 // Size: 0x04
	float HalfHeight; // Offset: 0x3a4 // Size: 0x04
	IntProperty SpotProbability; // Offset: 0x3a8 // Size: 0x04
	float LineOffsetZ; // Offset: 0x3ac // Size: 0x04
	bool bRepeatGenerateItem; // Offset: 0x3b0 // Size: 0x01
	bool bIsSpotValid; // Offset: 0x3b1 // Size: 0x01
	char pad_0x3B7[0x9]; // Offset: 0x3b7 // Size: 0x09

	// Functions

	// Object Name: Function Gameplay.SpotSceneComponent.SetSpotValid
	// Flags: [Native|Public]
	void SetSpotValid(bool Valid); // Offset: 0x103db1c24 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.SpotSceneComponent.LineTraceSingle
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool LineTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, struct FHitResult& OutHit, bool bIgnoreSelf); // Offset: 0x103db19a8 // Return & Params: Num(8) Size(0xc2)

	// Object Name: Function Gameplay.SpotSceneComponent.IsSpotValid
	// Flags: [Native|Public]
	bool IsSpotValid(); // Offset: 0x103db196c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.SpotSceneComponent.GetRandomCategory
	// Flags: [Native|Protected|HasOutParms]
	StrProperty GetRandomCategory(struct TArray<struct FSpotWeight>& SpotWeights); // Offset: 0x103db1884 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.SpotSceneComponent.GenerateSpot
	// Flags: [Native|Public]
	bool GenerateSpot(); // Offset: 0x103db1848 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.SpotSceneComponent.GenerateActor
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	struct AActor* GenerateActor(struct UObject* ActorClass, struct FVector& ActorLocation, struct FRotator& ActorRotator, enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod); // Offset: 0x103db16e0 // Return & Params: Num(5) Size(0x30)
};

// Object Name: Class Gameplay.ItemSpotSceneComponent
// Size: 0x440 // Inherited bytes: 0x3c0
struct UItemSpotSceneComponent : USpotSceneComponent {
	// Fields
	IntProperty AIGroupID; // Offset: 0x3b4 // Size: 0x04
	bool bForceSpawn; // Offset: 0x3b8 // Size: 0x01
	enum class ESpotGroupType SpotGroupType; // Offset: 0x3ba // Size: 0x01
	float RepeatGenerateItemCD; // Offset: 0x3bc // Size: 0x04
	struct UItemGeneratorComponent* ItemGenerator; // Offset: 0x3c0 // Size: 0x08
	struct TArray<struct FItemGenerateSpawnClass> AllItems; // Offset: 0x3c8 // Size: 0x10
	struct UGroupSpotSceneComponent* GroupSpotSceneComponent; // Offset: 0x3d8 // Size: 0x08
	MapProperty CacheItemValeCategory; // Offset: 0x3e0 // Size: 0x50
	struct TArray<struct TWeakObjectPtr<struct AActor>> CacheItems; // Offset: 0x430 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
	// Flags: [Final|Native|Public|HasOutParms]
	void SetSpotProperty(IntProperty CompositionID, enum class ESpotGroupType GroupType, struct UItemGeneratorComponent* Generator, struct FSpotTypeProperty& Property, struct UGroupSpotSceneComponent* Component, bool RepeatGenerateItem); // Offset: 0x103d9be54 // Return & Params: Num(6) Size(0x51)

	// Object Name: Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty
	// Flags: [Final|Native|Public|HasOutParms]
	void RepeatSpotProperty(struct FSpotTypeProperty& Property); // Offset: 0x103d9bda8 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function Gameplay.ItemSpotSceneComponent.GenerateSpot
	// Flags: [Native|Public]
	bool GenerateSpot(); // Offset: 0x103d9bd6c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.ItemSpotSceneComponent.GenerateItems
	// Flags: [Final|Native|Protected|HasOutParms]
	void GenerateItems(struct TArray<struct FItemGenerateSpawnClass>& AllItemClass); // Offset: 0x103d9bcc4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.ItemSpotSceneComponent.DoPickUp
	// Flags: [Final|Native|Public]
	void DoPickUp(StrProperty ItemValue, StrProperty ItemCategory); // Offset: 0x103d9bb48 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory
	// Flags: [Final|Native|Public]
	IntProperty CountCacheItemValeCategory(); // Offset: 0x103d9bb14 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.ItemSpotSceneComponent.ClearCacheItems
	// Flags: [Final|Native|Public]
	void ClearCacheItems(); // Offset: 0x103d9bb00 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.UAEHouseActor
// Size: 0x678 // Inherited bytes: 0x580
struct AUAEHouseActor : AUAENetActor {
	// Fields
	IntProperty iRegionHouse; // Offset: 0x580 // Size: 0x04
	float WindowHideDistanceSquared; // Offset: 0x584 // Size: 0x04
	float WindowLoadDistanceSquared; // Offset: 0x588 // Size: 0x04
	float WindowLoadDistanceSquaredOnVeryLowDevice; // Offset: 0x58c // Size: 0x04
	float WindowLoadDistanceSquaredOnServer; // Offset: 0x590 // Size: 0x04
	char pad_0x594[0x4]; // Offset: 0x594 // Size: 0x04
	struct TArray<struct FUAEWindowRepData> WindowList; // Offset: 0x598 // Size: 0x10
	MapProperty WindowComponents; // Offset: 0x5a8 // Size: 0x50
	bool bEnableWindow; // Offset: 0x5f8 // Size: 0x01
	bool bShouldConsiderDistance; // Offset: 0x5f9 // Size: 0x01
	char pad_0x5FA[0x66]; // Offset: 0x5fa // Size: 0x66
	bool SerializeDataUse; // Offset: 0x660 // Size: 0x01
	bool IsStickToTheGround; // Offset: 0x661 // Size: 0x01
	char pad_0x662[0x6]; // Offset: 0x662 // Size: 0x06
	struct TArray<char> SerializeData; // Offset: 0x668 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.UAEHouseActor.RecordBreakWindowTlog
	// Flags: [Final|Native|Public]
	void RecordBreakWindowTlog(struct APlayerController* EventInstigator); // Offset: 0x103dc9e54 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEHouseActor.ProcessWindowCreateList
	// Flags: [Final|Native|Static|Public]
	void ProcessWindowCreateList(); // Offset: 0x103dc9e40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEHouseActor.OnRep_WindowList
	// Flags: [Final|Native|Private]
	void OnRep_WindowList(); // Offset: 0x103dc9e2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEHouseActor.ClearWindowList
	// Flags: [Final|Native|Public]
	void ClearWindowList(); // Offset: 0x103dc9e18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void BroadcastWindowRepDataUpdated(struct FUAEWindowRepData InRepData); // Offset: 0x103dc9d18 // Return & Params: Num(1) Size(0x50)
};

// Object Name: Class Gameplay.UAEGameplayStatics
// Size: 0x28 // Inherited bytes: 0x28
struct UUAEGameplayStatics : UGameplayStatics {
	// Functions

	// Object Name: Function Gameplay.UAEGameplayStatics.GetGameBridge
	// Flags: [Final|Native|Static|Public]
	struct UGameplayDelegates* GetGameBridge(struct UObject* WorldContextObject); // Offset: 0x103dc9348 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Gameplay.UAEProjectile
// Size: 0x5b0 // Inherited bytes: 0x570
struct AUAEProjectile : ALuaActor {
	// Fields
	char bNetUseDistanceRelevancy : 1; // Offset: 0x569 // Size: 0x01
	IntProperty GrenadeItemID; // Offset: 0x56c // Size: 0x04
	bool IsServerAlreadyExplodedCpp; // Offset: 0x570 // Size: 0x01
	struct FVector ProjInitialRelativeOffset; // Offset: 0x574 // Size: 0x0c
	struct FVector ProjStandOffset; // Offset: 0x580 // Size: 0x0c
	struct FVector ProjCrouchOffset; // Offset: 0x58c // Size: 0x0c
	struct FVector ProjProneOffset; // Offset: 0x598 // Size: 0x0c
	enum class ECharacterPoseType ProjPrevoisOwnerPose; // Offset: 0x5a4 // Size: 0x01
	char pad_0x5A6_1 : 7; // Offset: 0x5a6 // Size: 0x01
	char pad_0x5A7[0x1]; // Offset: 0x5a7 // Size: 0x01
	float SpawnSeconds; // Offset: 0x5a8 // Size: 0x04
	bool bShowGrenadeWarningFlag; // Offset: 0x5ac // Size: 0x01
	bool bIsGroundedOnServerCpp; // Offset: 0x5ad // Size: 0x01
	char pad_0x5AE[0x2]; // Offset: 0x5ae // Size: 0x02

	// Functions

	// Object Name: Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void WorkAsBuffApplierEvent(StrProperty& BuffName, struct APawn* BuffTarget); // Offset: 0x103ddf080 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable|NetValidate]
	void TimeoutExplodeMulticast_CPP(); // Offset: 0x103ddf064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	void TimeoutExplodeMulticast_BPEvent(); // Offset: 0x103ddf048 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset
	// Flags: [Final|Native|Public|HasDefaults]
	void SetActorInitialRelativeOffset(struct FVector Offset, struct FVector StandOffset, struct FVector CrouchOffset, struct FVector ProneOffset, enum class ECharacterPoseType PrevoisOwnerPose); // Offset: 0x103ddeecc // Return & Params: Num(5) Size(0x31)

	// Object Name: Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient
	// Flags: [Event|Public|BlueprintEvent]
	void ServerNotifyGroundEventOnClient(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
	// Flags: [Final|Native|Public]
	void OnRep_IsServerAlreadyExplodedCpp(); // Offset: 0x103ddeeb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp
	// Flags: [Final|Native|Public]
	void OnRep_IsGroundedOnServerCpp(); // Offset: 0x103ddeea4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.OnProjectileStopOnServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnProjectileStopOnServer(); // Offset: 0x103ddee90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.OnProjectileStopOnClient
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnProjectileStopOnClient(); // Offset: 0x103ddee7c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
	// Flags: [Native|Event|Public|BlueprintEvent]
	void IsServerAlreadyExplodedCppNotify(); // Offset: 0x103ddee60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.IsOwnerAutomous
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsOwnerAutomous(); // Offset: 0x103ddee2c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEProjectile.GlassDetect
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GlassDetect(struct FVector& Start, struct FVector& End); // Offset: 0x103dded54 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEProjectile.GetRemainingEffectTime
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	float GetRemainingEffectTime(); // Offset: 0x103dded18 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEProjectile.ChangeGrenadeMarkerState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangeGrenadeMarkerState(bool bNewState); // Offset: 0x103ddec94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEProjectile.CallExplode
	// Flags: [Native|Event|Public|BlueprintEvent]
	void CallExplode(); // Offset: 0x103ddec78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEProjectile.BroadcastClientExplode
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable|NetValidate]
	void BroadcastClientExplode(); // Offset: 0x103ddec5c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.UAEOBState
// Size: 0x540 // Inherited bytes: 0x540
struct AUAEOBState : APlayerState {
};

// Object Name: Class Gameplay.UAEPlayerController
// Size: 0x1530 // Inherited bytes: 0x8e0
struct AUAEPlayerController : ALuaPlayerController {
	// Fields
	struct FScriptMulticastDelegate OnPlayerKeyRepDelegate; // Offset: 0x8e0 // Size: 0x10
	StrProperty DSVersion; // Offset: 0x8f0 // Size: 0x10
	struct FName RepPropertyCategory; // Offset: 0x900 // Size: 0x08
	struct FName PlayerType; // Offset: 0x908 // Size: 0x08
	StrProperty PlayerName; // Offset: 0x910 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x920 // Size: 0x04
	char pad_0x924[0x4]; // Offset: 0x924 // Size: 0x04
	uint64 UID; // Offset: 0x928 // Size: 0x08
	StrProperty PlayerOpenID; // Offset: 0x930 // Size: 0x10
	IntProperty TeamID; // Offset: 0x940 // Size: 0x04
	char pad_0x944[0x4]; // Offset: 0x944 // Size: 0x04
	int64_t IdxInTeam; // Offset: 0x948 // Size: 0x08
	IntProperty Campid; // Offset: 0x950 // Size: 0x04
	struct FVector CharacterLocation; // Offset: 0x954 // Size: 0x0c
	IntProperty RoomMode; // Offset: 0x960 // Size: 0x04
	char pad_0x964[0x4]; // Offset: 0x964 // Size: 0x04
	struct FWeatherInfo WeatherInfo; // Offset: 0x968 // Size: 0x18
	IntProperty planeAvatarId; // Offset: 0x980 // Size: 0x04
	IntProperty DyeDebugFlag; // Offset: 0x984 // Size: 0x04
	IntProperty PlayerStartID; // Offset: 0x988 // Size: 0x04
	bool bUsedSimulation; // Offset: 0x98c // Size: 0x01
	char pad_0x98D[0x3]; // Offset: 0x98d // Size: 0x03
	struct FPlayerNetStats NetStats; // Offset: 0x990 // Size: 0x40
	bool bEnablePlaneBanner; // Offset: 0x9d0 // Size: 0x01
	char pad_0x9D1[0x7]; // Offset: 0x9d1 // Size: 0x07
	StrProperty PlanetailResLink; // Offset: 0x9d8 // Size: 0x10
	IntProperty InPacketLossRate; // Offset: 0x9e8 // Size: 0x04
	IntProperty OutPacketLossRate; // Offset: 0x9ec // Size: 0x04
	IntProperty ClientNetworkType; // Offset: 0x9f0 // Size: 0x04
	char pad_0x9F4[0x4]; // Offset: 0x9f4 // Size: 0x04
	struct TArray<struct TWeakObjectPtr<struct AActor>> LastReplicatedActors; // Offset: 0x9f8 // Size: 0x10
	char pad_0xA08[0x10]; // Offset: 0xa08 // Size: 0x10
	bool bIsForReplay; // Offset: 0xa18 // Size: 0x01
	bool bIsGlobalObserverForReplay; // Offset: 0xa19 // Size: 0x01
	char pad_0xA1A[0x2]; // Offset: 0xa1a // Size: 0x02
	IntProperty GameReplayType; // Offset: 0xa1c // Size: 0x04
	bool bDisableProcessPlayerInput; // Offset: 0xa20 // Size: 0x01
	bool bNoAttenuationGlobalVoice; // Offset: 0xa21 // Size: 0x01
	char pad_0xA22[0x6]; // Offset: 0xa22 // Size: 0x06
	struct FGameModePlayerUpassInfo InitialUpassInfo; // Offset: 0xa28 // Size: 0x38
	struct TArray<struct FGameModePlayerUpassInfo> InitialUpassInfoList; // Offset: 0xa60 // Size: 0x10
	struct TArray<struct FPlayerOBInfo> PlayerOBInfoList; // Offset: 0xa70 // Size: 0x10
	IntProperty LobbyShowWeaponID; // Offset: 0xa80 // Size: 0x04
	bool bIsGM; // Offset: 0xa84 // Size: 0x01
	char pad_0xA85[0x3]; // Offset: 0xa85 // Size: 0x03
	StrProperty Nation; // Offset: 0xa88 // Size: 0x10
	bool bIsTeammateEscaped; // Offset: 0xa98 // Size: 0x01
	char pad_0xA99[0x7]; // Offset: 0xa99 // Size: 0x07
	enum class ECharacterGender DefaultCharacterGender; // Offset: 0xaa0 // Size: 0x01
	char pad_0xAA1[0x3]; // Offset: 0xaa1 // Size: 0x03
	IntProperty DefaultCharacterHeadID; // Offset: 0xaa4 // Size: 0x04
	struct TArray<struct FGameModePlayerItem> InitialItemList; // Offset: 0xaa8 // Size: 0x10
	struct TArray<struct FGameModePlayerRolewearInfo> InitialAllWear; // Offset: 0xab8 // Size: 0x10
	IntProperty RolewearIndex; // Offset: 0xac8 // Size: 0x04
	char pad_0xACC[0x4]; // Offset: 0xacc // Size: 0x04
	struct TArray<IntProperty> equip_plating_list; // Offset: 0xad0 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> InitialSharedSkin; // Offset: 0xae0 // Size: 0x10
	struct FGameModePlayerKnapsackSingleInfo InitialSharedKnapsack; // Offset: 0xaf0 // Size: 0x88
	bool bSharedSkinOpened; // Offset: 0xb78 // Size: 0x01
	bool bUsingSharedSkin; // Offset: 0xb79 // Size: 0x01
	bool bSubscribeBagOpened; // Offset: 0xb7a // Size: 0x01
	char pad_0xB7B[0x1]; // Offset: 0xb7b // Size: 0x01
	IntProperty FashionBagStartIndex; // Offset: 0xb7c // Size: 0x04
	IntProperty VehicleSkinInReady; // Offset: 0xb80 // Size: 0x04
	bool bSpwanInVehiclePlayerStart; // Offset: 0xb84 // Size: 0x01
	char pad_0xB85[0x3]; // Offset: 0xb85 // Size: 0x03
	struct TArray<struct FGameModePlayerItem> InitialWeaponAvatarList; // Offset: 0xb88 // Size: 0x10
	struct FGameModePlayerPetInfo InitialPetInfo; // Offset: 0xb98 // Size: 0x20
	struct TArray<struct FGameModePlayerPetInfo> AdditionalPetInfo; // Offset: 0xbb8 // Size: 0x10
	IntProperty UsingAdditionalPetIndex; // Offset: 0xbc8 // Size: 0x04
	char pad_0xBCC[0x4]; // Offset: 0xbcc // Size: 0x04
	struct TArray<struct FGameModePlayerKnapsackExtInfo> InitialKnapsackExtInfo; // Offset: 0xbd0 // Size: 0x10
	struct TArray<struct FGameModePlayeWeaponSchemeInfo> InitialWeaponSchemeInfo; // Offset: 0xbe0 // Size: 0x10
	struct TArray<struct FPlayerEffectItemInfo> InitialEffectItemInfo; // Offset: 0xbf0 // Size: 0x10
	struct FScriptMulticastDelegate OnInitialWeaponScheme; // Offset: 0xc00 // Size: 0x10
	struct FScriptMulticastDelegate OnInitialEffectItem; // Offset: 0xc10 // Size: 0x10
	struct FScriptMulticastDelegate OnLongTimeNoReceived; // Offset: 0xc20 // Size: 0x10
	IntProperty CurWeaponSchemeIndex; // Offset: 0xc30 // Size: 0x04
	IntProperty PveLevel; // Offset: 0xc34 // Size: 0x04
	struct TArray<IntProperty> InitialCharSkillList; // Offset: 0xc38 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> InitialVehicleAvatarList; // Offset: 0xc48 // Size: 0x10
	struct TArray<struct FGameModePlayerItems> InitialVehicleAvatarSkinList; // Offset: 0xc58 // Size: 0x10
	IntProperty nVehicleSwitchEffectId; // Offset: 0xc68 // Size: 0x04
	IntProperty ShowVehicleSkin; // Offset: 0xc6c // Size: 0x04
	struct TArray<struct FGameModePlayerItem> InitialBackPackPendantList; // Offset: 0xc70 // Size: 0x10
	struct TArray<struct FVehicleAvatarData> InitialVehicleAdvanceAvatarList; // Offset: 0xc80 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> InitialVehicleMusicList; // Offset: 0xc90 // Size: 0x10
	struct FGameModePlayerConsumableAvatar InitialConsumableAvatar; // Offset: 0xca0 // Size: 0x10
	struct FGameModePlayerEquipmentAvatar InitialEquipmentAvatar; // Offset: 0xcb0 // Size: 0x30
	MapProperty WeaponAvatarItemList; // Offset: 0xce0 // Size: 0x50
	char pad_0xD30[0xa0]; // Offset: 0xd30 // Size: 0xa0
	MapProperty GrenadeAvatarItemList; // Offset: 0xdd0 // Size: 0x50
	struct TArray<struct FGameModeWeaponAvatarData> WeaponAvatarDataList; // Offset: 0xe20 // Size: 0x10
	MapProperty VehicleAvatarList; // Offset: 0xe30 // Size: 0x50
	MapProperty VehicleAdvanceAvatarList; // Offset: 0xe80 // Size: 0x50
	MapProperty VehicleAvatarSkinList; // Offset: 0xed0 // Size: 0x50
	struct TArray<IntProperty> VehicleMusicList; // Offset: 0xf20 // Size: 0x10
	struct TArray<IntProperty> DefaultVehicleMusic; // Offset: 0xf30 // Size: 0x10
	struct TArray<struct FGameModePlayerExpressionItem> InitialExpressionItemList; // Offset: 0xf40 // Size: 0x10
	struct TArray<struct FGameModeWeaponDIYPlanData> InitialWeaponDIYPlanData; // Offset: 0xf50 // Size: 0x10
	MapProperty WeaponDIYPlanDataMap; // Offset: 0xf60 // Size: 0x50
	MapProperty InitialWeaponPendantList; // Offset: 0xfb0 // Size: 0x50
	struct TArray<struct FGameModePlayerTaskData> InitialTaskDataList; // Offset: 0x1000 // Size: 0x10
	struct TArray<struct FSpecialPickItem> InitialSpecialPickItemList; // Offset: 0x1010 // Size: 0x10
	struct TArray<struct FDailyTaskStoreInfo> DailyTaskStoreList; // Offset: 0x1020 // Size: 0x10
	uint32_t TaskSyncToDsTs; // Offset: 0x1030 // Size: 0x04
	char pad_0x1034[0x4]; // Offset: 0x1034 // Size: 0x04
	struct FScriptMulticastDelegate OnPlayerGotoSpectatingDelegate; // Offset: 0x1038 // Size: 0x10
	char pad_0x1048[0x10]; // Offset: 0x1048 // Size: 0x10
	struct FScriptMulticastDelegate OnReceiveUIMessage; // Offset: 0x1058 // Size: 0x10
	int64_t LastGameResultTime; // Offset: 0x1068 // Size: 0x08
	bool bRoomCanKickPlayer; // Offset: 0x1070 // Size: 0x01
	bool bCanDownloadInBattle; // Offset: 0x1071 // Size: 0x01
	char pad_0x1072[0x6]; // Offset: 0x1072 // Size: 0x06
	StrProperty IpCountryStr; // Offset: 0x1078 // Size: 0x10
	bool bRoomOwner; // Offset: 0x1088 // Size: 0x01
	bool bOpenChangeWearing; // Offset: 0x1089 // Size: 0x01
	char pad_0x108A[0x2]; // Offset: 0x108a // Size: 0x02
	uint32_t ObserverFlags; // Offset: 0x108c // Size: 0x04
	bool bIsSpectating; // Offset: 0x1090 // Size: 0x01
	char pad_0x1091[0x3]; // Offset: 0x1091 // Size: 0x03
	struct FLobbyWatchInfo LobbyWatchInfo; // Offset: 0x1094 // Size: 0x08
	IntProperty HawkEyeSpectateMaxMatchCount; // Offset: 0x109c // Size: 0x04
	IntProperty HawkEyeSpectateUsedMatchCount; // Offset: 0x10a0 // Size: 0x04
	bool bIsWatchEnd; // Offset: 0x10a4 // Size: 0x01
	char pad_0x10A5[0x3]; // Offset: 0x10a5 // Size: 0x03
	float UpdateOBCircleCounter; // Offset: 0x10a8 // Size: 0x04
	float UpdateOBCircleInterval; // Offset: 0x10ac // Size: 0x04
	bool bAllowAutoSelectTeamMate; // Offset: 0x10b0 // Size: 0x01
	bool bWaitRetryGotoSpectating; // Offset: 0x10b1 // Size: 0x01
	char pad_0x10B2[0x6]; // Offset: 0x10b2 // Size: 0x06
	struct TArray<StrProperty> FriendObservers; // Offset: 0x10b8 // Size: 0x10
	char pad_0x10C8[0x1]; // Offset: 0x10c8 // Size: 0x01
	bool bCanLedgeGrab; // Offset: 0x10c9 // Size: 0x01
	char pad_0x10CA[0x6]; // Offset: 0x10ca // Size: 0x06
	bool bIsSpectatingEnemy; // Offset: 0x10d0 // Size: 0x01
	char pad_0x10D1[0x5f]; // Offset: 0x10d1 // Size: 0x5f
	struct TWeakObjectPtr<struct UUAEUserWidget> InGameUIRoot; // Offset: 0x1130 // Size: 0x08
	struct TArray<struct FSoftClassPath> LevelUpdateNetActorClassPaths; // Offset: 0x1138 // Size: 0x10
	struct TArray<struct AActor*> LevelUpdateNetActorClassList; // Offset: 0x1148 // Size: 0x10
	char pad_0x1158[0x53]; // Offset: 0x1158 // Size: 0x53
	bool bExited; // Offset: 0x11ab // Size: 0x01
	bool bReconnected; // Offset: 0x11ac // Size: 0x01
	bool bReconnecting; // Offset: 0x11ad // Size: 0x01
	char pad_0x11AE[0x2]; // Offset: 0x11ae // Size: 0x02
	float ReconnectTimestamp; // Offset: 0x11b0 // Size: 0x04
	char pad_0x11B4[0xc]; // Offset: 0x11b4 // Size: 0x0c
	struct FScriptMulticastDelegate PlayerControllerLostDelegate; // Offset: 0x11c0 // Size: 0x10
	struct FScriptMulticastDelegate SyncDailyTaskInfoDelegate; // Offset: 0x11d0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerControllerRecoveredDelegate; // Offset: 0x11e0 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayerControllerReconnectStarted; // Offset: 0x11f0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerControllerReconnectedDelegate; // Offset: 0x1200 // Size: 0x10
	struct FScriptMulticastDelegate PlayerControllerAboutToRespawnDelegate; // Offset: 0x1210 // Size: 0x10
	struct FScriptMulticastDelegate PlayerControllerRespawnedDelegate; // Offset: 0x1220 // Size: 0x10
	struct FScriptMulticastDelegate PlayerControllerAboutToExitDelegate; // Offset: 0x1230 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayerQuitSpectatingForClient; // Offset: 0x1240 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayerControllerBattleBeginPlay; // Offset: 0x1250 // Size: 0x10
	struct FScriptMulticastDelegate OnInitGameUI; // Offset: 0x1260 // Size: 0x10
	char pad_0x1270[0x10]; // Offset: 0x1270 // Size: 0x10
	bool bCanWatchEnemyInRoomMode; // Offset: 0x1280 // Size: 0x01
	char pad_0x1281[0x107]; // Offset: 0x1281 // Size: 0x107
	struct TArray<struct UObject*> SecurityObjs; // Offset: 0x1388 // Size: 0x10
	bool IsDelayNotifyEnterBattleUntilLevelLoad; // Offset: 0x1398 // Size: 0x01
	char pad_0x1399[0x3]; // Offset: 0x1399 // Size: 0x03
	float NotifyTimeOut; // Offset: 0x139c // Size: 0x04
	float DelayCloseLoadingTime; // Offset: 0x13a0 // Size: 0x04
	char pad_0x13A4[0x4]; // Offset: 0x13a4 // Size: 0x04
	StrProperty NeedLoadLevelName; // Offset: 0x13a8 // Size: 0x10
	StrProperty NeedLoadedLevelFullName; // Offset: 0x13b8 // Size: 0x10
	bool IsTickHouse; // Offset: 0x13c8 // Size: 0x01
	char pad_0x13C9[0xf]; // Offset: 0x13c9 // Size: 0x0f
	IntProperty AntiDataCD; // Offset: 0x13d8 // Size: 0x04
	IntProperty ModeID; // Offset: 0x13dc // Size: 0x04
	bool bOpenReconnectUseCharViewPoint; // Offset: 0x13e0 // Size: 0x01
	char pad_0x13E1[0xcf]; // Offset: 0x13e1 // Size: 0xcf
	float ClientToDSFlowLimitTime; // Offset: 0x14b0 // Size: 0x04
	float ClientToDSFlowLimit; // Offset: 0x14b4 // Size: 0x04
	char pad_0x14B8[0x20]; // Offset: 0x14b8 // Size: 0x20
	StrProperty UsingNetObjectPathNameMappingCSV; // Offset: 0x14d8 // Size: 0x10
	StrProperty UsingOodleNetworkDicPath; // Offset: 0x14e8 // Size: 0x10
	char pad_0x14F8[0x20]; // Offset: 0x14f8 // Size: 0x20
	struct ANetworkReportActor* NetworkReportActor; // Offset: 0x1518 // Size: 0x08
	char pad_0x1520[0x10]; // Offset: 0x1520 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.UAEPlayerController.UseingWeaponScheme
	// Flags: [Final|Native|Public]
	bool UseingWeaponScheme(); // Offset: 0x103dd8504 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation
	// Flags: [Final|Exec|Native|Public]
	void TestShowLongTimeNoOperation(); // Offset: 0x103dd84c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara
	// Flags: [Final|Exec|Native|Public]
	void TestCastUIMsgWithPara(StrProperty strMsg, StrProperty module, IntProperty TestID); // Offset: 0x103dd8398 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo
	// Flags: [Final|Native|Public]
	void SyncDailyTaskStoreInfo(struct TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList); // Offset: 0x103dd82b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.SetUsedSimulationCVar
	// Flags: [Final|Native|Public]
	void SetUsedSimulationCVar(bool Value); // Offset: 0x103dd8230 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate
	// Flags: [Final|Native|Static|Public]
	void SetTargetMsgReceiveDelegate(struct UGameInstance* InGameInstance, DelegateProperty InDelegate); // Offset: 0x103dd816c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.SetPanels
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPanels(struct TArray<struct UUAEUserWidget*>& panels); // Offset: 0x103dd80bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.SetIsInPetSpectator
	// Flags: [Final|Native|Public]
	void SetIsInPetSpectator(bool inIsInPetSpectator); // Offset: 0x103dd8038 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate
	// Flags: [Final|Native|Static|Public]
	void SetDSMsgReceiveDelegate(DelegateProperty InDelegate); // Offset: 0x103dd7fb0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate
	// Flags: [Final|Native|Static|Public]
	void SetClientMsgReceiveDelegate(struct UGameInstance* InGameInstance, DelegateProperty InDelegate); // Offset: 0x103dd7eec // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.ServerUpdateLevelVisibility
	// Flags: [Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerUpdateLevelVisibility(struct FName PackageName, bool bIsVisible); // Offset: 0x103dd7e2c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.UAEPlayerController.ServerSetVoiceId
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void ServerSetVoiceId(IntProperty VoiceID); // Offset: 0x103dd7da8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.ServerRepListDispatch
	// Flags: [Final|Native|Public]
	void ServerRepListDispatch(struct UObject* InObject); // Offset: 0x103dd7d2c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.ServerRepComponentsDispatch
	// Flags: [Final|Native|Public]
	void ServerRepComponentsDispatch(struct UObject* InObject); // Offset: 0x103dd7cb0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.ServerKickSelf
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerKickSelf(); // Offset: 0x103dd7c94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ServerGotoSpectating
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerGotoSpectating(struct APawn* ViewTarget); // Offset: 0x103dd7c10 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.ServerExitGame
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerExitGame(); // Offset: 0x103dd7bf4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerAcknowledgeReconnection_2(uint32_t Token); // Offset: 0x103dd7b70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.SendNetObjectPathNameMappingHashToServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void SendNetObjectPathNameMappingHashToServer(uint32_t VersionHash); // Offset: 0x103dd7aec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.SendLuaDSToClient
	// Flags: [Final|Native|Public|HasOutParms]
	void SendLuaDSToClient(IntProperty ID, struct TArray<char>& Content, bool IsUnreliable); // Offset: 0x103dd79b4 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Gameplay.UAEPlayerController.SendLuaClientToDS
	// Flags: [Final|Native|Public|HasOutParms]
	void SendLuaClientToDS(IntProperty ID, struct TArray<char>& Content, bool IsUnreliable); // Offset: 0x103dd787c // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_Server_SyncClientNetInfo(IntProperty InLoss, IntProperty OutLoss, IntProperty InNetworkType); // Offset: 0x103dd7784 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_Server_ReportClientNetInfo(IntProperty AvgPing, IntProperty MaxPing, IntProperty MinPing, IntProperty LostPackRate, IntProperty AvgNoOutlier, IntProperty StdNoOutlier, IntProperty NumNoOutlier, IntProperty InLoss, IntProperty OutLoss); // Offset: 0x103dd752c // Return & Params: Num(9) Size(0x24)

	// Object Name: Function Gameplay.UAEPlayerController.RPC_LuaDSToClient_NR
	// Flags: [Net|Native|Event|Public|NetClient|NetValidate]
	void RPC_LuaDSToClient_NR(IntProperty ID, struct TArray<char> Content); // Offset: 0x103dd7450 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.RPC_LuaDSToClient
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void RPC_LuaDSToClient(IntProperty ID, struct TArray<char> Content); // Offset: 0x103dd7374 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.RPC_LuaClientToDS_NR
	// Flags: [Net|Native|Event|Public|NetServer|NetValidate]
	void RPC_LuaClientToDS_NR(IntProperty ID, struct TArray<char> Content); // Offset: 0x103dd7298 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.RPC_LuaClientToDS
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_LuaClientToDS(IntProperty ID, struct TArray<char> Content); // Offset: 0x103dd71bc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.Respawn
	// Flags: [Native|Public|BlueprintCallable]
	void Respawn(); // Offset: 0x103dd71a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar
	// Flags: [Final|Native|Public]
	void ResetUsedSimulationCVar(); // Offset: 0x103dd718c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ReleaseInGameUI
	// Flags: [Native|Public|BlueprintCallable]
	void ReleaseInGameUI(); // Offset: 0x103dd7170 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ReceivePostLoginInit
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivePostLoginInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.PrintStatistics
	// Flags: [Final|Exec|Native|Public]
	void PrintStatistics(); // Offset: 0x103dd715c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.PlayerStartIDReceived
	// Flags: [Final|Native|Protected]
	void PlayerStartIDReceived(); // Offset: 0x103dd7148 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList
	// Flags: [Native|Public]
	void OnRep_WeaponAvatarDataList(); // Offset: 0x103dd712c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_UsingOodleNetworkDicPath
	// Flags: [Final|Native|Public]
	void OnRep_UsingOodleNetworkDicPath(); // Offset: 0x103dd7118 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_UsingNetObjectPathNameMappingCSV
	// Flags: [Final|Native|Public]
	void OnRep_UsingNetObjectPathNameMappingCSV(); // Offset: 0x103dd7104 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_UsedSimulation
	// Flags: [Native|Public]
	void OnRep_UsedSimulation(); // Offset: 0x103dd70e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_PveLevel
	// Flags: [Native|Public]
	void OnRep_PveLevel(); // Offset: 0x103dd70cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList
	// Flags: [Final|Native|Public]
	void OnRep_PlayerOBInfoList(); // Offset: 0x103dd70b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_PlayerKey
	// Flags: [Final|Native|Public]
	void OnRep_PlayerKey(); // Offset: 0x103dd70a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_LobbyWatchInfo
	// Flags: [Native|Public]
	void OnRep_LobbyWatchInfo(); // Offset: 0x103dd7088 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime
	// Flags: [Native|Public]
	void OnRep_LastGameResultTime(); // Offset: 0x103dd706c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy
	// Flags: [Native|Protected]
	void OnRep_IsSpectatingEnemy(); // Offset: 0x103dd7050 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_IsSpectating
	// Flags: [Native|Public]
	void OnRep_IsSpectating(); // Offset: 0x103dd7034 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_IsObserver
	// Flags: [Native|Public]
	void OnRep_IsObserver(); // Offset: 0x103dd7018 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo
	// Flags: [Final|Native|Public]
	void OnRep_InitialWeaponSchemeInfo(); // Offset: 0x103dd7004 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar
	// Flags: [Native|Public]
	void OnRep_InitialEquipmentAvatar(); // Offset: 0x103dd6fe8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_InitialEffectItemInfo
	// Flags: [Final|Native|Public]
	void OnRep_InitialEffectItemInfo(); // Offset: 0x103dd6fd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar
	// Flags: [Native|Public]
	void OnRep_InitialConsumableAvatar(); // Offset: 0x103dd6fb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_FriendObservers
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_FriendObservers(); // Offset: 0x103dd6f9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex
	// Flags: [Final|Native|Public]
	void OnRep_CurWeaponSchemeIndex(); // Offset: 0x103dd6f88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnRep_bRoomOwner
	// Flags: [Native|Public]
	void OnRep_bRoomOwner(); // Offset: 0x103dd6f6c // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Gameplay.UAEPlayerController.OnPlayerKeyRepDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnPlayerKeyRepDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnNetObjectPathNameMappingTableAsyncLoad
	// Flags: [Final|Native|Public]
	void OnNetObjectPathNameMappingTableAsyncLoad(); // Offset: 0x103dd6f58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.OnMemberVoice
	// Flags: [Native|Public]
	void OnMemberVoice(IntProperty Member, IntProperty status, StrProperty UserInfo); // Offset: 0x103dd6e40 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.NotifyEnterBattle
	// Flags: [Native|Public]
	void NotifyEnterBattle(); // Offset: 0x103dd6e24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.LuaDSToClient_Implementation
	// Flags: [Final|Native|Public|HasOutParms]
	void LuaDSToClient_Implementation(IntProperty ID, struct TArray<char>& Content); // Offset: 0x103dd6d40 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.LuaClientToDS_Implementation
	// Flags: [Final|Native|Public|HasOutParms]
	void LuaClientToDS_Implementation(IntProperty ID, struct TArray<char>& Content); // Offset: 0x103dd6c5c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.KickSelf
	// Flags: [Final|Exec|Native|Public]
	void KickSelf(); // Offset: 0x103dd6c48 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.IsTeammateSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsTeammateSpectator(); // Offset: 0x103dd6c14 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsSpectatorOrDemoPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsSpectatorOrDemoPlayer(); // Offset: 0x103dd6be0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsSpectator(); // Offset: 0x103dd6bac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsRoomMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsRoomMode(); // Offset: 0x103dd6b88 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsPureSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPureSpectator(); // Offset: 0x103dd6b54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsObserver
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsObserver(); // Offset: 0x103dd6b20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsInSpectatingEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInSpectatingEnemy(); // Offset: 0x103dd6aec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsInSpectating
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInSpectating(); // Offset: 0x103dd6ab8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsInPetSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsInPetSpectator(); // Offset: 0x103dd6a84 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsHawkEyeSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsHawkEyeSpectator(); // Offset: 0x103dd6a50 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFriendOrEnemySpectator(); // Offset: 0x103dd6a1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsFriendObserver
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFriendObserver(); // Offset: 0x103dd69e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsFriendNotHawkEyeObserver
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFriendNotHawkEyeObserver(); // Offset: 0x103dd69b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsExited
	// Flags: [Final|Native|Public]
	bool IsExited(); // Offset: 0x103dd6980 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsDemoRecSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDemoRecSpectator(); // Offset: 0x103dd694c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsDemoPlaySpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDemoPlaySpectator(); // Offset: 0x103dd6918 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDemoPlayGlobalObserver(); // Offset: 0x103dd68e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.IsDeathSpectator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDeathSpectator(); // Offset: 0x103dd68b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.InitWithPlayerParams
	// Flags: [Final|Native|Public|HasOutParms]
	void InitWithPlayerParams(struct FGameModePlayerParams& Params); // Offset: 0x103dd67fc // Return & Params: Num(1) Size(0x3f8)

	// Object Name: Function Gameplay.UAEPlayerController.InitWeaponAvatarItems
	// Flags: [Native|Public]
	void InitWeaponAvatarItems(); // Offset: 0x103dd67e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.InitVehicleMusicList
	// Flags: [Native|Public]
	void InitVehicleMusicList(); // Offset: 0x103dd67c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.InitVehicleAvatarSkinList
	// Flags: [Native|Public]
	void InitVehicleAvatarSkinList(); // Offset: 0x103dd67a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.InitVehicleAvatarList
	// Flags: [Native|Public]
	void InitVehicleAvatarList(); // Offset: 0x103dd678c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList
	// Flags: [Native|Public]
	void InitVehicleAdvanceAvatarList(); // Offset: 0x103dd6770 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.InitIngameUI
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void InitIngameUI(); // Offset: 0x103dd6754 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.InitGrenadeAvatarList
	// Flags: [Native|Public]
	void InitGrenadeAvatarList(bool ReInitial); // Offset: 0x103dd66c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEPlayerController.HasAnySpectatorReplayFlag
	// Flags: [Native|Public|Const]
	bool HasAnySpectatorReplayFlag(uint32_t InFlag); // Offset: 0x103dd6634 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Gameplay.UAEPlayerController.GotoSpectating
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GotoSpectating(IntProperty PlayerID); // Offset: 0x103dd65a0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.GetWeaponPandentReflect
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetWeaponPandentReflect(IntProperty wraponID, IntProperty& pendantID); // Offset: 0x103dd64c8 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GetWeaponAvatarItemId(IntProperty ID); // Offset: 0x103dd6434 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName
	// Flags: [Final|Native|Public|HasOutParms]
	void GetVisibleLevelsLoadedName(struct TArray<StrProperty>& VisibleLevels); // Offset: 0x103dd638c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.GetLobbyWatchedPlayerKeyAsString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetLobbyWatchedPlayerKeyAsString(); // Offset: 0x103dd6328 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.GetEffectItemBySlot
	// Flags: [Final|Native|Public]
	struct FPlayerEffectItemInfo GetEffectItemBySlot(char SlotIndex); // Offset: 0x103dd6298 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId
	// Flags: [Final|Native|Public]
	struct FDailyTaskStoreInfo GetDailyTaskStoreInfoByTaskId(IntProperty TaskID); // Offset: 0x103dd6208 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId
	// Flags: [Final|Native|Public]
	IntProperty GetCurrentWeaponSchemeMainSlotItemId(); // Offset: 0x103dd61d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.GetCurrentPetInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FGameModePlayerPetInfo GetCurrentPetInfo(); // Offset: 0x103dd616c // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey
	// Flags: [Native|Public|Const]
	uint32_t GetCurrentOBPlayerKey(); // Offset: 0x103dd6130 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCurrentOBPlayerInfoIndex(); // Offset: 0x103dd60fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.GenerateKillBroadcastItemID
	// Flags: [Event|Public|BlueprintEvent]
	IntProperty GenerateKillBroadcastItemID(IntProperty ClothAvatarID, IntProperty PlayerUID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Gameplay.UAEPlayerController.ForceNetReady
	// Flags: [Final|Exec|Native|Public]
	void ForceNetReady(); // Offset: 0x103dd60e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ExitGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ExitGame(); // Offset: 0x103dd60d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ExhaustCPU
	// Flags: [Final|Exec|Native|Public]
	void ExhaustCPU(); // Offset: 0x103dd60c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ExecDSCommand
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ExecDSCommand(StrProperty DSCommand); // Offset: 0x103dd6020 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEPlayerController.ExcuteIntRecord
	// Flags: [Final|Native|Public]
	void ExcuteIntRecord(StrProperty Key, IntProperty Count); // Offset: 0x103dd5efc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
	// Flags: [Final|Native|Public]
	void ExcuteIntCounterRecord(StrProperty Key, IntProperty Count); // Offset: 0x103dd5dd8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.UAEPlayerController.EnableInGameUI
	// Flags: [Final|Exec|Native|Public]
	void EnableInGameUI(); // Offset: 0x103dd5dc4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpUAENetActors
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void DumpUAENetActors(); // Offset: 0x103dd5db0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpRegions
	// Flags: [Final|Exec|Native|Public]
	void DumpRegions(); // Offset: 0x103dd5d9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpNetActors
	// Flags: [Final|Exec|Native|Public]
	void DumpNetActors(); // Offset: 0x103dd5d88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpCharacters
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void DumpCharacters(); // Offset: 0x103dd5d74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpAllUI
	// Flags: [Final|Exec|Native|Public]
	void DumpAllUI(); // Offset: 0x103dd5d60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpAllObjects
	// Flags: [Final|Exec|Native|Public]
	void DumpAllObjects(); // Offset: 0x103dd5d4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DumpAllActors
	// Flags: [Final|Exec|Native|Public]
	void DumpAllActors(); // Offset: 0x103dd5d38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DoCrash
	// Flags: [Final|Exec|Native|Public]
	void DoCrash(); // Offset: 0x103dd5d24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DisableInGameUI
	// Flags: [Final|Exec|Native|Public]
	void DisableInGameUI(); // Offset: 0x103dd5d10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DelayEnterBattleCheck
	// Flags: [Native|Event|Public|BlueprintEvent]
	void DelayEnterBattleCheck(); // Offset: 0x103dd5cf4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.DealWithPickUpFailed
	// Flags: [Native|Event|Public|BlueprintEvent]
	void DealWithPickUpFailed(struct FItemDefineID DefineID); // Offset: 0x103dd5c60 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientShowTeammateEscapeNotice(); // Offset: 0x103dd5c44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ClientSendOodleNetworkAckToServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ClientSendOodleNetworkAckToServer(); // Offset: 0x103dd5c28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientRPC_CastUIMsgWithStrings(StrProperty strMsg, StrProperty module, IntProperty TipsID, StrProperty Param1, StrProperty Param2); // Offset: 0x103dd5a4c // Return & Params: Num(5) Size(0x48)

	// Object Name: Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientRPC_CastUIMsgParams(StrProperty strMsg, StrProperty module, IntProperty Type); // Offset: 0x103dd5918 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientRPC_CastUIMsg(StrProperty strMsg, StrProperty module); // Offset: 0x103dd5824 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.UAEPlayerController.ClientRepListReq
	// Flags: [Final|Native|Public]
	void ClientRepListReq(struct UObject* InObject); // Offset: 0x103dd57a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.ClientRepComponentsReq
	// Flags: [Final|Native|Public]
	void ClientRepComponentsReq(struct UObject* InObject); // Offset: 0x103dd572c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientInitPlayerOBInfoButton(); // Offset: 0x103dd5710 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientBroadcastRespawnComplete(); // Offset: 0x103dd56f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientBroadcastReconnectionSuccessful(); // Offset: 0x103dd56d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientAcknowledgeReconnection_4(uint32_t Token); // Offset: 0x103dd5654 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit
	// Flags: [Native|Public]
	void CheckPlayerOBInfoButtonInit(); // Offset: 0x103dd5638 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
	// Flags: [Native|Public|BlueprintCallable]
	bool CheckAcknowledgedPawn(struct APawn* InPawn); // Offset: 0x103dd55a4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.UAEPlayerController.CastUIMsg
	// Flags: [Exec|Native|Public|BlueprintCallable]
	void CastUIMsg(StrProperty strMsg, StrProperty module); // Offset: 0x103dd54b0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.UAEPlayerController.CanPickUpItem
	// Flags: [Native|Event|Public|BlueprintEvent]
	enum class EPickUpCheckResult CanPickUpItem(struct FItemDefineID DefineID); // Offset: 0x103dd540c // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Gameplay.UAEPlayerController.BroadcastUIMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BroadcastUIMessage(StrProperty MessageName, IntProperty TipsIDOrType, StrProperty Param1, StrProperty Param2); // Offset: 0x103dd528c // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Gameplay.UAEPlayerController.BroadcastRespawnComplete
	// Flags: [Final|Native|Public]
	void BroadcastRespawnComplete(); // Offset: 0x103dd5278 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.ActorGridGeneratorInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UActorGridGeneratorInterface : UInterface {
};

// Object Name: Class Gameplay.AutoRotationComponent
// Size: 0x3d0 // Inherited bytes: 0x3a0
struct UAutoRotationComponent : USceneComponent {
	// Fields
	enum class EAutoRotationMode RotationMode; // Offset: 0x399 // Size: 0x01
	bool bTickOnDedicatedServer; // Offset: 0x39a // Size: 0x01
	float RotationRate; // Offset: 0x39c // Size: 0x04
	float PendulumAngle; // Offset: 0x3a0 // Size: 0x04
	struct UCurveVector* CurveData; // Offset: 0x3a8 // Size: 0x08
	char pad_0x3B2[0x1e]; // Offset: 0x3b2 // Size: 0x1e
};

// Object Name: Class Gameplay.ConfigInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UConfigInterface : UInterface {
};

// Object Name: Class Gameplay.DynamicSpotContainerComponent
// Size: 0x248 // Inherited bytes: 0x238
struct UDynamicSpotContainerComponent : ULuaActorComponent {
	// Fields
	bool SerializeDataUse; // Offset: 0x231 // Size: 0x01
	struct TArray<char> SerializeData; // Offset: 0x238 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.DynamicSpotContainerComponent.UseSerializeData
	// Flags: [Final|Native|Public]
	void UseSerializeData(); // Offset: 0x103d6607c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.FoliageFakeCollision
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AFoliageFakeCollision : AActor {
	// Fields
	struct UCapsuleComponent* CollisionComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Gameplay.GameModeConfigComponent
// Size: 0x190 // Inherited bytes: 0x178
struct UGameModeConfigComponent : UActorComponent {
	// Fields
	IntProperty appleGrenadeID; // Offset: 0x178 // Size: 0x04
	IntProperty appleGrenadeCount; // Offset: 0x17c // Size: 0x04
	struct TArray<IntProperty> forbitPickItemTypeList; // Offset: 0x180 // Size: 0x10
};

// Object Name: Class Gameplay.PatchTableUtils
// Size: 0x28 // Inherited bytes: 0x28
struct UPatchTableUtils : UBlueprintFunctionLibrary {
};

// Object Name: Class Gameplay.GameModeStatisticsComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UGameModeStatisticsComponent : UActorComponent {
};

// Object Name: Class Gameplay.GameplayDelegates
// Size: 0x3b8 // Inherited bytes: 0x30
struct UGameplayDelegates : UGameInstanceSubsystem {
	// Fields
	struct FScriptMulticastDelegate GameModeStateChangeEvent; // Offset: 0x30 // Size: 0x10
	struct FScriptMulticastDelegate ActorOverlapEvent; // Offset: 0x40 // Size: 0x10
	struct FScriptMulticastDelegate ActorDieEvent; // Offset: 0x50 // Size: 0x10
	struct FScriptMulticastDelegate PawnDieEvent; // Offset: 0x60 // Size: 0x10
	struct FScriptMulticastDelegate CharacterDieEvent; // Offset: 0x70 // Size: 0x10
	struct FScriptMulticastDelegate EnterAreaTriggerEvent; // Offset: 0x80 // Size: 0x10
	struct FScriptMulticastDelegate ExitAreaTriggerEvent; // Offset: 0x90 // Size: 0x10
	struct FScriptMulticastDelegate PawnPickupItemEvent; // Offset: 0xa0 // Size: 0x10
	struct FScriptMulticastDelegate VehicleOverlapEvent; // Offset: 0xb0 // Size: 0x10
	struct FScriptMulticastDelegate InteractiveActorBeginEvent; // Offset: 0xc0 // Size: 0x10
	struct FScriptMulticastDelegate InteractiveActorDoneEvent; // Offset: 0xd0 // Size: 0x10
	struct FScriptMulticastDelegate CharacterStartSkill; // Offset: 0xe0 // Size: 0x10
	struct FScriptMulticastDelegate CharacterStopSkill; // Offset: 0xf0 // Size: 0x10
	struct FScriptMulticastDelegate CharacterStartSkillPhase; // Offset: 0x100 // Size: 0x10
	struct FScriptMulticastDelegate CharacterStopSkillPhase; // Offset: 0x110 // Size: 0x10
	struct FScriptMulticastDelegate CharacterStartSkillCooldown; // Offset: 0x120 // Size: 0x10
	struct FScriptMulticastDelegate CharacterStopSkillCooldown; // Offset: 0x130 // Size: 0x10
	struct FScriptMulticastDelegate CharacterAddSkill; // Offset: 0x140 // Size: 0x10
	struct FScriptMulticastDelegate CharacterRemoveSkill; // Offset: 0x150 // Size: 0x10
	struct FScriptMulticastDelegate PlayerJoinEvent; // Offset: 0x160 // Size: 0x10
	struct FScriptMulticastDelegate PlayerExitEvent; // Offset: 0x170 // Size: 0x10
	struct FScriptMulticastDelegate PlayerRealExitEvent; // Offset: 0x180 // Size: 0x10
	struct FScriptMulticastDelegate ProjectileStopEvent; // Offset: 0x190 // Size: 0x10
	struct FScriptMulticastDelegate ProjectileBounceEvent; // Offset: 0x1a0 // Size: 0x10
	struct FScriptMulticastDelegate DecoraterActorSpawnEvent; // Offset: 0x1b0 // Size: 0x10
	struct FScriptMulticastDelegate RemoteEvent; // Offset: 0x1c0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerDamageQueryEvent; // Offset: 0x1d0 // Size: 0x10
	struct FScriptMulticastDelegate PawnNearDeathEvent; // Offset: 0x1e0 // Size: 0x10
	struct FScriptMulticastDelegate PawnNearDeathOrRescuedEvent; // Offset: 0x1f0 // Size: 0x10
	struct FScriptMulticastDelegate OnAIPawnSpawnEvent; // Offset: 0x200 // Size: 0x10
	struct FScriptMulticastDelegate OnCharacterRespawnEvent; // Offset: 0x210 // Size: 0x10
	struct FScriptMulticastDelegate ChooseEnemyLoseTargetEvent; // Offset: 0x220 // Size: 0x10
	struct FScriptMulticastDelegate FindEnemyWarningEvent; // Offset: 0x230 // Size: 0x10
	struct FScriptMulticastDelegate ModFindEnemyWarningEvent; // Offset: 0x240 // Size: 0x10
	struct FScriptMulticastDelegate TaskInterActiveActorBeginEvent; // Offset: 0x250 // Size: 0x10
	struct FScriptMulticastDelegate TaskInterActiveActorDoneEvent; // Offset: 0x260 // Size: 0x10
	struct FScriptMulticastDelegate LevelAddedEvent; // Offset: 0x270 // Size: 0x10
	struct FScriptMulticastDelegate DSLuaGMEvent; // Offset: 0x280 // Size: 0x10
	struct FScriptMulticastDelegate OnWeaponFireEvent; // Offset: 0x290 // Size: 0x10
	struct FScriptMulticastDelegate PlayerPickUpItemEvent; // Offset: 0x2a0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerDropItemEvent; // Offset: 0x2b0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerUseItemEvent; // Offset: 0x2c0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerDisUseItemEvent; // Offset: 0x2d0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerSwapItemEvent; // Offset: 0x2e0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerEquipItemEvent; // Offset: 0x2f0 // Size: 0x10
	struct FScriptMulticastDelegate PlayerUnEquipItemEvent; // Offset: 0x300 // Size: 0x10
	struct FScriptMulticastDelegate PlayerConsumeEvent; // Offset: 0x310 // Size: 0x10
	struct FScriptMulticastDelegate PawnChangeTeamEvent; // Offset: 0x320 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayReplayBegin; // Offset: 0x330 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayReplayEnd; // Offset: 0x340 // Size: 0x10
	struct FScriptMulticastDelegate PlayerEventForReplay; // Offset: 0x350 // Size: 0x10
	char pad_0x360[0x58]; // Offset: 0x360 // Size: 0x58
};

// Object Name: Class Gameplay.GeneratorActorAIInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGeneratorActorAIInterface : UInterface {
	// Functions

	// Object Name: Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint
	// Flags: [Native|Public|HasDefaults]
	void RegisterAIPickupPoint(struct FVector BuildingLoc, struct FVector SpotLoc, struct AActor* PickUpActor); // Offset: 0x103d90320 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class Gameplay.GeneratorActorInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGeneratorActorInterface : UInterface {
	// Functions

	// Object Name: Function Gameplay.GeneratorActorInterface.SetExtendData
	// Flags: [Native|Public]
	void SetExtendData(StrProperty Key, IntProperty Value); // Offset: 0x103d90aec // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.GeneratorActorInterface.SetAttachedActor
	// Flags: [Native|Public]
	void SetAttachedActor(struct AActor* AttachedActor); // Offset: 0x103d90a68 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.GeneratorActorInterface.InitDataNew
	// Flags: [Native|Public]
	void InitDataNew(IntProperty ItemCount, StrProperty Value, StrProperty Category, bool RepeatGenerateItem, IntProperty SpotDataIndex); // Offset: 0x103d90814 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Gameplay.GeneratorActorInterface.InitData
	// Flags: [Native|Public]
	void InitData(struct UItemSpotSceneComponent* ItemSpotSceneComponent, IntProperty ItemCount, StrProperty Value, StrProperty Category, bool RepeatGenerateItem); // Offset: 0x103d905c0 // Return & Params: Num(5) Size(0x31)

	// Object Name: Function Gameplay.GeneratorActorInterface.GetItemId
	// Flags: [Native|Public]
	IntProperty GetItemId(); // Offset: 0x103d90584 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Gameplay.GeneratorVehicleInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGeneratorVehicleInterface : UInterface {
	// Functions

	// Object Name: Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn
	// Flags: [Native|Public]
	void SetSafeSpawn(bool ab_IsSafeSpawn); // Offset: 0x103d91154 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.GeneratorVehicleInterface.ServerDetachAllPlayerFromSeatByGenerator
	// Flags: [Native|Public]
	void ServerDetachAllPlayerFromSeatByGenerator(bool bMustExit, bool bApplyVehicleVelocity); // Offset: 0x103d9107c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Gameplay.GeneratorVehicleInterface.InitVehicle
	// Flags: [Native|Public]
	void InitVehicle(IntProperty FuelPercent, bool bEngineOn, bool bInHouse); // Offset: 0x103d90f68 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation
	// Flags: [Native|Public|HasDefaults]
	void CheckSpawnLocation(struct FVector SpawnLocation, float MaxSpawnDistance); // Offset: 0x103d90ea8 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Gameplay.GlobalConfigActor
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct AGlobalConfigActor : AActor {
	// Fields
	char pad_0x4B0[0x8]; // Offset: 0x4b0 // Size: 0x08
	bool bInitComponents; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B9[0x7]; // Offset: 0x4b9 // Size: 0x07

	// Functions

	// Object Name: Function Gameplay.GlobalConfigActor.Init
	// Flags: [Native|Public|BlueprintCallable]
	void Init(); // Offset: 0x103d91450 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.ImplItemRegionInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UImplItemRegionInterface : UInterface {
	// Functions

	// Object Name: Function Gameplay.ImplItemRegionInterface.GetRegion
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct FItemRegionCircle GetRegion(StrProperty Tag); // Offset: 0x103d91d38 // Return & Params: Num(2) Size(0x48)
};

// Object Name: Class Gameplay.ItemBandSpotSceneComponent
// Size: 0x400 // Inherited bytes: 0x3c0
struct UItemBandSpotSceneComponent : USpotSceneComponent {
	// Fields
	StrProperty SpotItemValue; // Offset: 0x3b8 // Size: 0x10
	StrProperty SpotItemCategory; // Offset: 0x3c8 // Size: 0x10
	StrProperty ConditionItemValue; // Offset: 0x3d8 // Size: 0x10
	StrProperty ConditionItemCategory; // Offset: 0x3e8 // Size: 0x10
};

// Object Name: Class Gameplay.ItemConfigActorComponent
// Size: 0x1d8 // Inherited bytes: 0x178
struct UItemConfigActorComponent : UActorComponent {
	// Fields
	struct TArray<struct FItemSpawnData> ItemSpawnDatas; // Offset: 0x178 // Size: 0x10
	MapProperty AllSpotGroups; // Offset: 0x188 // Size: 0x50

	// Functions

	// Object Name: Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterGroupSceneComponent(IntProperty GroupType, struct USceneComponent* GroupSceneComponent); // Offset: 0x103d92a88 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FItemSpawnClass> RandomItemSpawnClass(StrProperty ItemValue, StrProperty ItemCategory); // Offset: 0x103d928d8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct USceneComponent*> RandomGroupSceneComponents(IntProperty GroupType, IntProperty Persent); // Offset: 0x103d927ec // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
	// Flags: [Final|Native|Public]
	struct USceneComponent* RandomGroupSceneComponent(struct TArray<struct USceneComponent*> AllGroups); // Offset: 0x103d926f8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.ItemConfigActorComponent.LoadActorClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* LoadActorClass(StrProperty Path); // Offset: 0x103d92604 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
	// Flags: [Final|Native|Public]
	struct TArray<struct FItemSpawnClass> GetItemSpawnClass(struct FItemSpawnData Data); // Offset: 0x103d92500 // Return & Params: Num(2) Size(0x80)
};

// Object Name: Class Gameplay.ItemCountArea
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AItemCountArea : AActor {
	// Fields
	struct UBoxComponent* Area; // Offset: 0x4b0 // Size: 0x08

	// Functions

	// Object Name: Function Gameplay.ItemCountArea.IsInArea
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	bool IsInArea(struct FVector& Position); // Offset: 0x103d92df4 // Return & Params: Num(2) Size(0xd)
};

// Object Name: Class Gameplay.ItemGenerateInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UItemGenerateInterface : UInterface {
};

// Object Name: Class Gameplay.ItemGroupRepeatSpotComponent
// Size: 0x470 // Inherited bytes: 0x3b0
struct UItemGroupRepeatSpotComponent : UGroupSpotSceneComponent {
	// Fields
	IntProperty GenerateNumPerFrame; // Offset: 0x3ac // Size: 0x04
	float RepeatGenerateItemTimer; // Offset: 0x3b0 // Size: 0x04
	IntProperty GroupID; // Offset: 0x3b4 // Size: 0x04
	StrProperty GroupTag; // Offset: 0x3b8 // Size: 0x10
	struct TArray<struct UItemSpotSceneComponent*> Spots; // Offset: 0x3c8 // Size: 0x10
	struct TArray<struct UItemSpotSceneComponent*> PendingGenerateSpots; // Offset: 0x3d8 // Size: 0x10
	struct UItemGeneratorComponent* ItemGenerator; // Offset: 0x3e8 // Size: 0x08
	struct FSpotGroupProperty SpotGroupProperty; // Offset: 0x3f0 // Size: 0x28
	MapProperty SpotTypePropertys; // Offset: 0x418 // Size: 0x50
	bool bInitialize; // Offset: 0x468 // Size: 0x01
	bool bEnable; // Offset: 0x469 // Size: 0x01
	char pad_0x46E[0x2]; // Offset: 0x46e // Size: 0x02

	// Functions

	// Object Name: Function Gameplay.ItemGroupRepeatSpotComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x103d9af20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll
	// Flags: [Final|Native|Public]
	void SetPropertySpotAll(); // Offset: 0x103d9af0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AUAEGameMode* GetGameMode(); // Offset: 0x103d9aed8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GenerateSpotAll(); // Offset: 0x103d9aec4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems
	// Flags: [Final|Native|Public]
	void ClearAllSpotItems(); // Offset: 0x103d9aeb0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.LuaBTDecoratorBase
// Size: 0x1a8 // Inherited bytes: 0x60
struct ULuaBTDecoratorBase : UBTDecorator {
	// Fields
	char pad_0x60[0x60]; // Offset: 0x60 // Size: 0x60
	struct AAIController* ActorOwner; // Offset: 0xc0 // Size: 0x08
	struct TArray<struct FName> ObservedKeyNames; // Offset: 0xc8 // Size: 0x10
	char pad_0xD8[0x10]; // Offset: 0xd8 // Size: 0x10
	char bShowPropertyDetails : 1; // Offset: 0xe8 // Size: 0x01
	char bCheckConditionOnlyBlackBoardChanges : 1; // Offset: 0xe8 // Size: 0x01
	char bIsObservingBB : 1; // Offset: 0xe8 // Size: 0x01
	char pad_0xE8_3 : 5; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
	MapProperty LuaNodeParams; // Offset: 0xf0 // Size: 0x50
	MapProperty LuaBlackboardParams; // Offset: 0x140 // Size: 0x50
	float TickInterval; // Offset: 0x190 // Size: 0x04
	float TickIntervalRandomDeviation; // Offset: 0x194 // Size: 0x04
	StrProperty LuaFilePath; // Offset: 0x198 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveObserverDeactivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveObserverDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveObserverActivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveObserverActivated
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionFinishAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.PerformConditionCheckAI
	// Flags: [Event|Protected|BlueprintEvent]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.PerformConditionCheck
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	bool PerformConditionCheck(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.IsDecoratorObserverActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsDecoratorObserverActive(); // Offset: 0x103d9c3a0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.LuaBTDecoratorBase.IsDecoratorExecutionActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsDecoratorExecutionActive(); // Offset: 0x103d9c36c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Gameplay.LuaBTNodeInterface
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaBTNodeInterface : UInterface {
	// Functions

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Offset: 0x103d9d8e8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsString(struct FName& KeyName, StrProperty StringValue); // Offset: 0x103d9d7a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsRotator(struct FName& KeyName, struct FRotator RotatorValue); // Offset: 0x103d9d6cc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Offset: 0x103d9d5f4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Offset: 0x103d9d51c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsInt(struct FName& KeyName, IntProperty IntValue); // Offset: 0x103d9d444 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Offset: 0x103d9d36c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Offset: 0x103d9d294 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // Offset: 0x103d9d1bc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTNodeInterface.SetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Offset: 0x103d9d0dc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTNodeInterface.IsVectorValueSet
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool IsVectorValueSet(struct FName& KeyName); // Offset: 0x103d9d038 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FVector GetValueAsVector(struct FName& KeyName); // Offset: 0x103d9cf90 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	StrProperty GetValueAsString(struct FName& KeyName); // Offset: 0x103d9cec4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Offset: 0x103d9ce1c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct UObject* GetValueAsObject(struct FName& KeyName); // Offset: 0x103d9cd78 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct FName GetValueAsName(struct FName& KeyName); // Offset: 0x103d9ccd4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetValueAsInt(struct FName& KeyName); // Offset: 0x103d9cc30 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	float GetValueAsFloat(struct FName& KeyName); // Offset: 0x103d9cb8c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	char GetValueAsEnum(struct FName& KeyName); // Offset: 0x103d9cae8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct UObject* GetValueAsClass(struct FName& KeyName); // Offset: 0x103d9ca44 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTNodeInterface.GetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetValueAsBool(struct FName& KeyName); // Offset: 0x103d9c9a0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.LuaBTNodeInterface.ClearValue
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void ClearValue(struct FName& KeyName); // Offset: 0x103d9c90c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Gameplay.LuaBTServiceBase
// Size: 0x198 // Inherited bytes: 0x68
struct ULuaBTServiceBase : UBTService {
	// Fields
	char pad_0x68[0x60]; // Offset: 0x68 // Size: 0x60
	struct AAIController* ActorOwner; // Offset: 0xc8 // Size: 0x08
	char pad_0xD0[0x10]; // Offset: 0xd0 // Size: 0x10
	char bShowPropertyDetails : 1; // Offset: 0xe0 // Size: 0x01
	char bShowEventDetails : 1; // Offset: 0xe0 // Size: 0x01
	char pad_0xE0_2 : 6; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
	MapProperty LuaNodeParams; // Offset: 0xe8 // Size: 0x50
	MapProperty LuaBlackboardParams; // Offset: 0x138 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x188 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveSearchStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveSearchStart
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveSearchStart(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveDeactivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveDeactivation
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveDeactivation(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveActivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTServiceBase.ReceiveActivation
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveActivation(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTServiceBase.IsServiceActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsServiceActive(); // Offset: 0x103d9e0dc // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Gameplay.LuaBTTaskBase
// Size: 0x1b8 // Inherited bytes: 0x70
struct ULuaBTTaskBase : UBTTaskNode {
	// Fields
	char pad_0x70[0x60]; // Offset: 0x70 // Size: 0x60
	struct AAIController* ActorOwner; // Offset: 0xd0 // Size: 0x08
	char pad_0xD8[0x18]; // Offset: 0xd8 // Size: 0x18
	char bShowPropertyDetails : 1; // Offset: 0xf0 // Size: 0x01
	char pad_0xF0_1 : 7; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x7]; // Offset: 0xf1 // Size: 0x07
	MapProperty LuaNodeParams; // Offset: 0xf8 // Size: 0x50
	MapProperty LuaBlackboardParams; // Offset: 0x148 // Size: 0x50
	float TickInterval; // Offset: 0x198 // Size: 0x04
	float TickIntervalRandomDeviation; // Offset: 0x19c // Size: 0x04
	char pad_0x1A0[0x8]; // Offset: 0x1a0 // Size: 0x08
	StrProperty LuaFilePath; // Offset: 0x1a8 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetFinishOnMessageWithId(struct FName MessageName, IntProperty RequestID); // Offset: 0x103d9e638 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTTaskBase.SetFinishOnMessage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetFinishOnMessage(struct FName MessageName); // Offset: 0x103d9e5bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTTaskBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Gameplay.LuaBTTaskBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTTaskBase.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecute(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTTaskBase.ReceiveAbortAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.LuaBTTaskBase.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveAbort(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.LuaBTTaskBase.IsTaskExecuting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsTaskExecuting(); // Offset: 0x103d9e588 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.LuaBTTaskBase.IsTaskAborting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsTaskAborting(); // Offset: 0x103d9e554 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.LuaBTTaskBase.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void FinishExecute(bool bSuccess); // Offset: 0x103d9e4d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.LuaBTTaskBase.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void FinishAbort(); // Offset: 0x103d9e4bc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.MissionBoardComponent
// Size: 0x1d8 // Inherited bytes: 0x178
struct UMissionBoardComponent : UActorComponent {
	// Fields
	struct FMissionBoardConfig Config; // Offset: 0x178 // Size: 0x50
	struct FScriptMulticastDelegate OnRepConfigDelegate; // Offset: 0x1c8 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.MissionBoardComponent.OnRep_Config
	// Flags: [Final|Native|Public]
	void OnRep_Config(); // Offset: 0x103d9ebec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetUtcLeftSecondsByConfig(); // Offset: 0x103d9ebb8 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Gameplay.NetworkExceptionHandleSubsystem
// Size: 0x40 // Inherited bytes: 0x30
struct UNetworkExceptionHandleSubsystem : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: Class Gameplay.NetworkReportActor
// Size: 0x500 // Inherited bytes: 0x4b0
struct ANetworkReportActor : AActor {
	// Fields
	IntProperty LossRateArrayNum; // Offset: 0x4ac // Size: 0x04
	IntProperty MaxCacheLossRateArrayNum; // Offset: 0x4b0 // Size: 0x04
	StrProperty InPacketLossRateArrayStr; // Offset: 0x4b8 // Size: 0x10
	StrProperty OutPacketLossRateArrayStr; // Offset: 0x4c8 // Size: 0x10
	char pad_0x4D8[0x28]; // Offset: 0x4d8 // Size: 0x28

	// Functions

	// Object Name: Function Gameplay.NetworkReportActor.RPC_Server_SyncClientPkgLossArrayInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_Server_SyncClientPkgLossArrayInfo(struct TArray<char> InLoss, struct TArray<char> OutLoss); // Offset: 0x103d9ef4c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.NetworkReportActor.ResetAllNetworkData
	// Flags: [Final|Native|Public]
	void ResetAllNetworkData(); // Offset: 0x103d9ef38 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.NewWeatherComponent
// Size: 0x240 // Inherited bytes: 0x238
struct UNewWeatherComponent : ULuaActorComponent {
	// Fields
	char pad_0x238[0x8]; // Offset: 0x238 // Size: 0x08

	// Functions

	// Object Name: Function Gameplay.NewWeatherComponent.LuaInit
	// Flags: [Event|Public|BlueprintEvent]
	void LuaInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.UAEAdvertisementActor
// Size: 0x5a8 // Inherited bytes: 0x4c0
struct AUAEAdvertisementActor : AStaticMeshActor {
	// Fields
	char pad_0x4C0[0x58]; // Offset: 0x4c0 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x518 // Size: 0x10
	bool bMultiAdvertisement; // Offset: 0x528 // Size: 0x01
	char pad_0x529[0x7]; // Offset: 0x529 // Size: 0x07
	MapProperty IdTextureMap; // Offset: 0x530 // Size: 0x50
	struct UStaticMesh* StaticMesh; // Offset: 0x580 // Size: 0x08
	StrProperty StaticMeshPath; // Offset: 0x588 // Size: 0x10
	struct UFrontendHUD* FrontendHUD; // Offset: 0x598 // Size: 0x08
	IntProperty ID; // Offset: 0x5a0 // Size: 0x04
	float NetCullDistance; // Offset: 0x5a4 // Size: 0x04

	// Functions

	// Object Name: Function Gameplay.UAEAdvertisementActor.SetStaticMeshPath
	// Flags: [Native|Public]
	void SetStaticMeshPath(StrProperty InMeshPath); // Offset: 0x103db2654 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEAdvertisementActor.SetStaticMesh
	// Flags: [Native|Public]
	void SetStaticMesh(struct UStaticMesh* InStaticMesh); // Offset: 0x103db25d0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEAdvertisementActor.SetScale
	// Flags: [Native|Public|HasDefaults]
	void SetScale(struct FVector InScale); // Offset: 0x103db254c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Gameplay.UAEAdvertisementActor.SetId
	// Flags: [Final|Native|Public]
	void SetId(IntProperty InputID); // Offset: 0x103db24d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEAdvertisementActor.SetCulDistance
	// Flags: [Native|Public]
	void SetCulDistance(float CulDistance); // Offset: 0x103db244c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEAdvertisementActor.RequestHttpImageByUrl
	// Flags: [Final|Native|Public]
	void RequestHttpImageByUrl(StrProperty PicUrl); // Offset: 0x103db23b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEAdvertisementActor.ReplaceTexture
	// Flags: [Final|Native|Protected]
	void ReplaceTexture(struct UTexture2D* Texture); // Offset: 0x103db2338 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRequestImgSuccess(struct UTexture2D* Texture, StrProperty RequestedURL); // Offset: 0x103db225c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath
	// Flags: [Event|Public|BlueprintEvent]
	void OnRep_MeshPath(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEAdvertisementActor.OnRep_Id
	// Flags: [Event|Public|BlueprintEvent]
	void OnRep_Id(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEAdvertisementActor.OnClientLoadMesh
	// Flags: [Event|Public|BlueprintEvent]
	void OnClientLoadMesh(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEAdvertisementActor.InitImageDownloadUtil
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitImageDownloadUtil(); // Offset: 0x103db2248 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.RegionableAdvertisementActor
// Size: 0x5b8 // Inherited bytes: 0x5a8
struct ARegionableAdvertisementActor : AUAEAdvertisementActor {
	// Fields
	char pad_0x5A8[0x8]; // Offset: 0x5a8 // Size: 0x08
	enum class ERegionSizeIndex RegionSize; // Offset: 0x5b0 // Size: 0x01
	bool bRegionStatic; // Offset: 0x5b1 // Size: 0x01
	char pad_0x5B2[0x6]; // Offset: 0x5b2 // Size: 0x06

	// Functions

	// Object Name: Function Gameplay.RegionableAdvertisementActor.ReceivedPlayerActiveRegionsChanged
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedPlayerActiveRegionsChanged(bool bEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Gameplay.SpotGeneratorStruct
// Size: 0x28 // Inherited bytes: 0x28
struct USpotGeneratorStruct : UObject {
};

// Object Name: Class Gameplay.TriggerActionSpawnItemInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UTriggerActionSpawnItemInterface : UInterface {
};

// Object Name: Class Gameplay.UAEActorMap
// Size: 0x500 // Inherited bytes: 0x4b0
struct AUAEActorMap : AInfo {
	// Fields
	MapProperty ActorsMap; // Offset: 0x4b0 // Size: 0x50
};

// Object Name: Class Gameplay.UAEBuffApplierActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AUAEBuffApplierActor : AActor {
	// Fields
	struct AController* InstigatorController; // Offset: 0x4b0 // Size: 0x08

	// Functions

	// Object Name: Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController
	// Flags: [Native|Public|Const]
	struct AController* GetTheInstigatorController(); // Offset: 0x103db2b54 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Gameplay.AnimInstanceCacheCustomAnimInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAnimInstanceCacheCustomAnimInterface : UInterface {
};

// Object Name: Class Gameplay.UAECharAnimListCompBase
// Size: 0x2d8 // Inherited bytes: 0x2c8
struct UUAECharAnimListCompBase : UUAEAnimListComponentBase {
	// Fields
	struct TArray<struct FCharacterAsynLoadedTypeAnim> CharacterAsynLoadedAnims; // Offset: 0x2c8 // Size: 0x10
};

// Object Name: Class Gameplay.UAEChaCustomAnimListComponent
// Size: 0x3c0 // Inherited bytes: 0x2d8
struct UUAEChaCustomAnimListComponent : UUAECharAnimListCompBase {
	// Fields
	char pad_0x2D8[0x8]; // Offset: 0x2d8 // Size: 0x08
	bool bLoadAnimOnBeginPlay; // Offset: 0x2e0 // Size: 0x01
	char pad_0x2E1[0x3]; // Offset: 0x2e1 // Size: 0x03
	IntProperty CharacterAnimOverrideType; // Offset: 0x2e4 // Size: 0x04
	MapProperty CharAnimEnumName; // Offset: 0x2e8 // Size: 0x50
	struct TArray<struct FCharCustomAnimData> CharCustomAnimDataList; // Offset: 0x338 // Size: 0x10
	MapProperty CharFeatureAnimInstanceEnumName; // Offset: 0x348 // Size: 0x50
	struct TArray<struct FCharCustomAnimInstacneData> CharCustomAnimInstanceDataList; // Offset: 0x398 // Size: 0x10
	char pad_0x3A8[0x18]; // Offset: 0x3a8 // Size: 0x18

	// Functions

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.SetCharacterAnimOverrideType
	// Flags: [Final|Native|Public]
	void SetCharacterAnimOverrideType(IntProperty AnimOverrideType); // Offset: 0x103db34e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.ReleaseCustomAnimAssets
	// Flags: [Final|Native|Public]
	void ReleaseCustomAnimAssets(); // Offset: 0x103db34d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.HasAnimAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	bool HasAnimAsyncLoadingFinished(); // Offset: 0x103db349c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetOwnerName
	// Flags: [Final|Native|Public|Const]
	StrProperty GetOwnerName(); // Offset: 0x103db3430 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetCharacterCustomAnimInstance
	// Flags: [Final|Native|Public]
	struct UAnimInstance* GetCharacterCustomAnimInstance(StrProperty AnimName); // Offset: 0x103db3384 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetCharacterCustomAnim
	// Flags: [Final|Native|Public|Const]
	struct UAnimationAsset* GetCharacterCustomAnim(StrProperty AnimName); // Offset: 0x103db32dc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetBlendSpace1D
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UBlendSpace1D* GetBlendSpace1D(StrProperty AnimAssetName); // Offset: 0x103db3234 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetBlendSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UBlendSpace* GetBlendSpace(StrProperty AnimAssetName); // Offset: 0x103db318c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetAnimSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UAnimSequence* GetAnimSequence(StrProperty AnimAssetName); // Offset: 0x103db30e4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetAnimMontage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UAnimMontage* GetAnimMontage(StrProperty AnimAssetName); // Offset: 0x103db303c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.GetAimOffsetBlendSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UAimOffsetBlendSpace* GetAimOffsetBlendSpace(StrProperty AnimAssetName); // Offset: 0x103db2f94 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAEChaCustomAnimListComponent.CallRequestLoadAnimAssets
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallRequestLoadAnimAssets(); // Offset: 0x103db2f80 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.AnimInstanceCacheParachuteAnimInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAnimInstanceCacheParachuteAnimInterface : UInterface {
};

// Object Name: Class Gameplay.UAEChaParachuteAnimListComponent
// Size: 0x310 // Inherited bytes: 0x2d8
struct UUAEChaParachuteAnimListComponent : UUAECharAnimListCompBase {
	// Fields
	struct TArray<struct FCharParachuteAnimData> CharParachuteAnimDataList; // Offset: 0x2d8 // Size: 0x10
	char pad_0x2E8[0x28]; // Offset: 0x2e8 // Size: 0x28

	// Functions

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets
	// Flags: [Final|Native|Public]
	void ReleaseParachuteAnimAssets(); // Offset: 0x103db3e4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	void OnParachuteAnimAsyncLoadingFinished(StrProperty AnimLoaded); // Offset: 0x103db3d68 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	void OnAnimListAsyncLoadingFinished(); // Offset: 0x103db3d54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	bool HasAnimAsyncLoadingFinished(); // Offset: 0x103db3d20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent
	// Flags: [Final|Native|Public]
	void HandleAsyncLoadingFinishedEvent(); // Offset: 0x103db3d0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName
	// Flags: [Final|Native|Public|Const]
	StrProperty GetOwnerName(); // Offset: 0x103db3ca0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim
	// Flags: [Final|Native|Public|Const]
	struct UAnimationAsset* GetCharacterParachuteAnim(enum class ECharacterParachuteAnimType AnimType, IntProperty AnimOverrideType); // Offset: 0x103db3bd8 // Return & Params: Num(3) Size(0x10)
};

// Object Name: Class Gameplay.UAECharacterAnimListComponent
// Size: 0x3a0 // Inherited bytes: 0x2d8
struct UUAECharacterAnimListComponent : UUAECharAnimListCompBase {
	// Fields
	struct TArray<struct FCharacterMovementAnimData> CharacterMovementAnimEditList; // Offset: 0x2d8 // Size: 0x10
	struct TArray<struct FCharacterMovementAnimData> CharacterFPPAnimEditList; // Offset: 0x2e8 // Size: 0x10
	struct TArray<struct FCharacterJumpAnimData> CharacterJumpEditList; // Offset: 0x2f8 // Size: 0x10
	struct TArray<struct FCharacterJumpAnimData> CharacterJumpEditListFPP; // Offset: 0x308 // Size: 0x10
	struct UCurveFloat* FallingIKCurve; // Offset: 0x318 // Size: 0x08
	struct TArray<struct FCharacterShovelAnimData> CharacterShovelEditList; // Offset: 0x320 // Size: 0x10
	struct TArray<struct FCharacterShovelAnimData> CharacterShovelEditListFPP; // Offset: 0x330 // Size: 0x10
	struct TArray<struct FCharAnimModifyData> CharAnimModifyList; // Offset: 0x340 // Size: 0x10
	struct TArray<struct FCharacterVehAnimModifyData> CharVehAnimModifyList; // Offset: 0x350 // Size: 0x10
	bool IsInitByBeginPlay; // Offset: 0x360 // Size: 0x01
	bool EnablePreLoadingFinish; // Offset: 0x361 // Size: 0x01
	bool CurrentIsTPP; // Offset: 0x362 // Size: 0x01
	bool CurrentHoldShield; // Offset: 0x363 // Size: 0x01
	bool bRandomIdleAnimSections; // Offset: 0x364 // Size: 0x01
	char pad_0x365[0x3]; // Offset: 0x365 // Size: 0x03
	struct TArray<struct FName> RandomAnimMontageSections; // Offset: 0x368 // Size: 0x10
	char pad_0x378[0x8]; // Offset: 0x378 // Size: 0x08
	struct FGetAnimUtil GetAnimUtil; // Offset: 0x380 // Size: 0x20

	// Functions

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.SetAnimListMapValueData
	// Flags: [Final|Native|Public|HasOutParms]
	void SetAnimListMapValueData(struct UAnimationAsset*& AnimPtr, struct FAnimListMapValueData& AnimListValue); // Offset: 0x103dbd708 // Return & Params: Num(2) Size(0x38)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished
	// Flags: [Final|Native|Public]
	bool OnPreLoadingFinished(struct FAsyncLoadCharAnimParams LoadingParam); // Offset: 0x103dbd62c // Return & Params: Num(2) Size(0x29)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew2
	// Flags: [Final|Native|Public]
	void OnAsyncLoadingFinishedNew2(struct FAsyncLoadCharAnimParams LoadingParam); // Offset: 0x103dbd560 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew
	// Flags: [Final|Native|Public]
	void OnAsyncLoadingFinishedNew(struct FAsyncLoadCharAnimParams LoadingParam); // Offset: 0x103dbd494 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.InitAnimListMap
	// Flags: [Final|Native|Public]
	void InitAnimListMap(bool IsFPP); // Offset: 0x103dbd410 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct FPlayerAnimData> GetCharacterShovelAnim(); // Offset: 0x103dbd3ac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct FPlayerAnimData> GetCharacterJumpAnim(enum class ECharacterJumpType JumpType); // Offset: 0x103dbd2f8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset
	// Flags: [Final|Native|Private|HasOutParms]
	struct UAnimationAsset* GetAnimationAsset(struct UAnimationAsset*& AnimPtr); // Offset: 0x103dbd20c // Return & Params: Num(2) Size(0x30)
};

// Object Name: Class Gameplay.UAECharacterAnimListSubSystem
// Size: 0x80 // Inherited bytes: 0x30
struct UUAECharacterAnimListSubSystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x50]; // Offset: 0x30 // Size: 0x50
};

// Object Name: Class Gameplay.UAEChaVehAnimListComponent
// Size: 0x308 // Inherited bytes: 0x2d8
struct UUAEChaVehAnimListComponent : UUAECharAnimListCompBase {
	// Fields
	bool DefaultLoadAllAnim; // Offset: 0x2d8 // Size: 0x01
	char pad_0x2D9[0x7]; // Offset: 0x2d9 // Size: 0x07
	struct TArray<struct FVehCharAnimData> VehCharAnimDataList; // Offset: 0x2e0 // Size: 0x10
	char pad_0x2F0[0x18]; // Offset: 0x2f0 // Size: 0x18

	// Functions

	// Object Name: Function Gameplay.UAEChaVehAnimListComponent.SetVehCharAnimDataList
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVehCharAnimDataList(struct TArray<struct FVehCharAnimData> InVehCharAnimDataList); // Offset: 0x103dbeec4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	void OnIdleAnimListAsyncLoadingFinished(); // Offset: 0x103dbeeb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	void OnAnimListAsyncLoadingFinished(struct FAsyncLoadCharVehAnimParams LoadingParam); // Offset: 0x103dbedd8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ChangeAnimData(struct TArray<struct FVehCharAnimData>& InAnimData); // Offset: 0x103dbed30 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Gameplay.UAEIndependentSpot
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct AUAEIndependentSpot : AActor {
	// Fields
	bool bIsEditorOnly; // Offset: 0x4a9 // Size: 0x01
	enum class EIndependentSpotType SpotType; // Offset: 0x4aa // Size: 0x01
};

// Object Name: Class Gameplay.UAELevelSequenceActor
// Size: 0x780 // Inherited bytes: 0x550
struct AUAELevelSequenceActor : ALevelSequenceActor {
	// Fields
	char pad_0x550[0x58]; // Offset: 0x550 // Size: 0x58
	bool bPlayOnServer; // Offset: 0x5a8 // Size: 0x01
	char pad_0x5A9[0x3]; // Offset: 0x5a9 // Size: 0x03
	float ClientSyncTime; // Offset: 0x5ac // Size: 0x04
	bool bUseSelfTransformOrigin; // Offset: 0x5b0 // Size: 0x01
	bool bAutoDestroy; // Offset: 0x5b1 // Size: 0x01
	char pad_0x5B2[0x2]; // Offset: 0x5b2 // Size: 0x02
	float DestroySelfDelayTime; // Offset: 0x5b4 // Size: 0x04
	bool bInitPlayerBeforeBeginPlay; // Offset: 0x5b8 // Size: 0x01
	enum class ESequenceRelevantType RelevantType; // Offset: 0x5b9 // Size: 0x01
	bool bCameraOnlyOwnerUse; // Offset: 0x5ba // Size: 0x01
	enum class ELevelSequenceStartPlayType LevelSequenceStartPlayType; // Offset: 0x5bb // Size: 0x01
	char pad_0x5BC[0x4]; // Offset: 0x5bc // Size: 0x04
	struct TArray<struct FMovieSceneBindingOverrideData> NetSyncBindingData; // Offset: 0x5c0 // Size: 0x10
	float AuthorityStartPlayTime; // Offset: 0x5d0 // Size: 0x04
	char pad_0x5D4[0x4]; // Offset: 0x5d4 // Size: 0x04
	StrProperty LevelSequenceAssetPath; // Offset: 0x5d8 // Size: 0x10
	MapProperty GreenSequenceMap; // Offset: 0x5e8 // Size: 0x50
	char pad_0x638[0x8]; // Offset: 0x638 // Size: 0x08
	struct TArray<struct FSeqActorBindingData> TrackBindingData; // Offset: 0x640 // Size: 0x10
	struct TArray<StrProperty> DisabledTrackNames; // Offset: 0x650 // Size: 0x10
	char pad_0x660[0x50]; // Offset: 0x660 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x6b0 // Size: 0x10
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x6c0 // Size: 0x50
	char pad_0x710[0x18]; // Offset: 0x710 // Size: 0x18
	bool bIsCheckOwnerPassWall; // Offset: 0x728 // Size: 0x01
	char pad_0x729[0x7]; // Offset: 0x729 // Size: 0x07
	struct TArray<struct AActor*> OwnerPassWallIgnoreActors; // Offset: 0x730 // Size: 0x10
	struct TArray<enum class ECollisionChannel> PasswallIgnoreChannels; // Offset: 0x740 // Size: 0x10
	struct FVector OwnerStartLoc; // Offset: 0x750 // Size: 0x0c
	struct FVector LastValidLoc; // Offset: 0x75c // Size: 0x0c
	char pad_0x768[0x1]; // Offset: 0x768 // Size: 0x01
	bool bIsCheckOwnerSnapToFloor; // Offset: 0x769 // Size: 0x01
	char pad_0x76A[0x2]; // Offset: 0x76a // Size: 0x02
	float OwnerSnapToFloorMaxDist; // Offset: 0x76c // Size: 0x04
	char pad_0x770[0x10]; // Offset: 0x770 // Size: 0x10

	// Functions

	// Object Name: Function Gameplay.UAELevelSequenceActor.UpdateTrackBindingData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateTrackBindingData(); // Offset: 0x103dcb8d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.UpdateSequence
	// Flags: [Native|Public|BlueprintCallable]
	void UpdateSequence(StrProperty LevelSequencePath); // Offset: 0x103dcb838 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAELevelSequenceActor.UpdatePlayback
	// Flags: [Native|Public|BlueprintCallable]
	void UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer); // Offset: 0x103dcb6d0 // Return & Params: Num(4) Size(0x4)

	// Object Name: Function Gameplay.UAELevelSequenceActor.UpdateInstanceData
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void UpdateInstanceData(struct FVector& OffsetVector, struct FRotator& OffsetRotation); // Offset: 0x103dcb5f0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAELevelSequenceActor.StopMontageParticle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopMontageParticle(struct FName SlotName); // Offset: 0x103dcb574 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAELevelSequenceActor.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x103dcb560 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.SetUseSelfTransformOrigin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUseSelfTransformOrigin(bool bInUse); // Offset: 0x103dcb4dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAELevelSequenceActor.SetTrackBindingInfo
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void SetTrackBindingInfo(MapProperty& TrackBindingInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Gameplay.UAELevelSequenceActor.SetTrackBindingData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetTrackBindingData(struct TArray<struct FSeqActorBindingData>& InTrackBindingData); // Offset: 0x103dcb434 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAELevelSequenceActor.SetNetSyncBinding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetNetSyncBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Offset: 0x103dcb2d8 // Return & Params: Num(3) Size(0x29)

	// Object Name: Function Gameplay.UAELevelSequenceActor.SetLevelSequenceAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLevelSequenceAssetPath(StrProperty InLevelSequenceAssetPath); // Offset: 0x103dcb240 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAELevelSequenceActor.SetDisabledTrackNames
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetDisabledTrackNames(struct TArray<StrProperty>& InDisabledTrackNames); // Offset: 0x103dcb198 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ResetNetSyncBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetNetSyncBindings(); // Offset: 0x103dcb184 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ResetNetSyncBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetNetSyncBinding(struct FMovieSceneObjectBindingID Binding); // Offset: 0x103dcb0e4 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.UAELevelSequenceActor.RemoveNetSyncBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveNetSyncBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Offset: 0x103dcb008 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReleaseCameraCutTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReleaseCameraCutTrack(); // Offset: 0x103dcaff4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnStop
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnStop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnPreStop
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPreStop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnPlayReverse
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPlayReverse(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnPause
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPause(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnObjectSpawned
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void ReceiveOnObjectSpawned(struct UObject* InObject, struct FGuid& InBindingID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Gameplay.UAELevelSequenceActor.ReceiveOnFinished
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnFinished(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(float InPlaytime); // Offset: 0x103dcaf78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnSequenceFinished
	// Flags: [Final|Native|Public]
	void OnSequenceFinished(); // Offset: 0x103dcaf64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnRep_NetSyncBindingData
	// Flags: [Final|Native|Public]
	void OnRep_NetSyncBindingData(); // Offset: 0x103dcaf50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnRep_LevelSequenceAssetPath
	// Flags: [Final|Native|Protected]
	void OnRep_LevelSequenceAssetPath(); // Offset: 0x103dcaf3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnRep_DisabledTrackNames
	// Flags: [Final|Native|Protected]
	void OnRep_DisabledTrackNames(); // Offset: 0x103dcaf28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnRep_bUseSelfTransformOrigin
	// Flags: [Final|Native|Protected]
	void OnRep_bUseSelfTransformOrigin(); // Offset: 0x103dcaf14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnRep_AuthorityStartPlayTime
	// Flags: [Final|Native|Protected]
	void OnRep_AuthorityStartPlayTime(); // Offset: 0x103dcaf00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.OnObjectSpawnedEvent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void OnObjectSpawnedEvent(struct UObject* InObject, struct FGuid& InBindingID, struct FMovieSceneSequenceID InSequenceID); // Offset: 0x103dcadf0 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Gameplay.UAELevelSequenceActor.HasActiveSequenceActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool HasActiveSequenceActor(); // Offset: 0x103dcadbc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAELevelSequenceActor.HandleOwnerReady
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void HandleOwnerReady(); // Offset: 0x103dcada0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.GoToEndAndStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GoToEndAndStop(); // Offset: 0x103dcad8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.UAELevelSequenceActor.GetPossessableOrSpawnableByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FMovieSceneObjectBindingID GetPossessableOrSpawnableByName(StrProperty NameKeyString); // Offset: 0x103dcacd0 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Gameplay.UAELevelSequenceActor.GetFirstPossessableTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FMovieSceneObjectBindingID GetFirstPossessableTrack(); // Offset: 0x103dcac84 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* InLevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct AUAELevelSequenceActor*& OutActor); // Offset: 0x103dcab14 // Return & Params: Num(5) Size(0x48)

	// Object Name: Function Gameplay.UAELevelSequenceActor.CheckStartPlayValid
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool CheckStartPlayValid(); // Offset: 0x103dcaad8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Gameplay.UAELevelSequenceActor.AddNetSyncBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddNetSyncBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Offset: 0x103dca9b8 // Return & Params: Num(3) Size(0x21)
};

// Object Name: Class Gameplay.AELobbyCharAnimListComp
// Size: 0x338 // Inherited bytes: 0x2d8
struct UAELobbyCharAnimListComp : UUAECharAnimListCompBase {
	// Fields
	struct TArray<struct FLobbyCharacterWeaponAnimData> CharacterWeaponAnimEditList; // Offset: 0x2d8 // Size: 0x10
	struct TArray<struct FLobbyCharacterWeaponAnimData> AvatarSceneCharacterWeaponAnimEditList; // Offset: 0x2e8 // Size: 0x10
	struct TArray<struct FLobbyCharacterWeaponAnimData> LobbyWithCarCharacterWeaponAnimEditList; // Offset: 0x2f8 // Size: 0x10
	struct TArray<struct FLobbyCharacterWeaponAnimData> LobbySystemCharacterWeaponAnimEditList; // Offset: 0x308 // Size: 0x10
	struct UAnimationAsset* SwitchPoseAnimAdd; // Offset: 0x318 // Size: 0x08
	IntProperty resultAvatarPoseIndex; // Offset: 0x320 // Size: 0x04
	char pad_0x324[0x14]; // Offset: 0x324 // Size: 0x14

	// Functions

	// Object Name: Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished
	// Flags: [Final|Native|Public]
	void OnAsyncLoadingFinished(struct FLobbyAsyncLoadCharAnimParams LoadingParam); // Offset: 0x103dccc5c // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Gameplay.AELobbyCharAnimListComp.InitPendingList
	// Flags: [Final|Native|Public|HasOutParms]
	void InitPendingList(struct TArray<struct FLobbyCharacterWeaponAnimData>& animEditList, struct TArray<struct FSoftObjectPath>& PendingList); // Offset: 0x103dccb44 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim
	// Flags: [Final|Native|Public|Const]
	struct UAnimationAsset* GetCharacterAnim(enum class ELobbyCharacterPosIndex PosIdx, enum class ELobbyCharacterAnimType GenderType, IntProperty WeaponAnimType, enum class ECharacterShowSceneType sceneType); // Offset: 0x103dcca04 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap
	// Flags: [Final|Native|Public|HasOutParms]
	void BuildAnimMap(struct TArray<struct FLobbyCharacterWeaponAnimData>& AnimList, enum class ECharacterShowSceneType sceneType); // Offset: 0x103dcc910 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Gameplay.UAESimpleSceneActor
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct AUAESimpleSceneActor : AActor {
};

// Object Name: Class Gameplay.UAESpawnActorComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UUAESpawnActorComponent : UActorComponent {
	// Functions

	// Object Name: Function Gameplay.UAESpawnActorComponent.UAESpawnActor
	// Flags: [Native|Public|BlueprintCallable]
	struct AActor* UAESpawnActor(struct FUAESpawnActorParam Param); // Offset: 0x103de15cc // Return & Params: Num(2) Size(0x98)

	// Object Name: Function Gameplay.UAESpawnActorComponent.PrepareSpawnData
	// Flags: [Native|Event|Public|BlueprintEvent]
	struct UObject* PrepareSpawnData(IntProperty TemplateID); // Offset: 0x103de1538 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Gameplay.UAESpawnActorComponent.InitializeActor
	// Flags: [Native|Event|Public|BlueprintEvent]
	void InitializeActor(struct AActor* InActor, IntProperty TemplateID); // Offset: 0x103de1478 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class Gameplay.UAESpotGroupObject
// Size: 0x90 // Inherited bytes: 0x28
struct UUAESpotGroupObject : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	struct UObject* Host; // Offset: 0x80 // Size: 0x08
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08
};

// Object Name: Class Gameplay.UAEWindowComponent
// Size: 0xc40 // Inherited bytes: 0xbd0
struct UUAEWindowComponent : UStaticMeshComponent {
	// Fields
	IntProperty ID; // Offset: 0xbc8 // Size: 0x04
	bool bBroken; // Offset: 0xbcc // Size: 0x01
	struct APawn* LastInstigatorPawn; // Offset: 0xbd0 // Size: 0x08
	struct UStaticMesh* BrokenMesh; // Offset: 0xbd8 // Size: 0x08
	struct UParticleSystem* BrokenEffect; // Offset: 0xbe0 // Size: 0x08
	char pad_0xBED[0x53]; // Offset: 0xbed // Size: 0x53

	// Functions

	// Object Name: Function Gameplay.UAEWindowComponent.NotifyServerBroken
	// Flags: [Event|Protected|BlueprintEvent]
	void NotifyServerBroken(struct APlayerController* Instigator); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
	// Flags: [Final|Native|Protected]
	void NotifyRepDataUpdated(bool bInitial, bool bLocal); // Offset: 0x103de1eb8 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
	// Flags: [Event|Protected|BlueprintEvent]
	void LocalHandleWindowBrokenBP(bool bInitial, bool bLocal); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void LocalHandleWindowBroken(bool bInitial, bool bLocal); // Offset: 0x103de1de8 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Gameplay.UAEWindowComponent.HandleBroken
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleBroken(struct APlayerController* Instigator, bool bLocal); // Offset: 0x103de1d28 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Gameplay.UAEWindowComponent.GetRepData
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FUAEWindowRepData GetRepData(); // Offset: 0x103de1cc0 // Return & Params: Num(1) Size(0x50)
};

// Object Name: Class Gameplay.VehicleConfigActorComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UVehicleConfigActorComponent : UActorComponent {
	// Functions

	// Object Name: Function Gameplay.VehicleConfigActorComponent.LoadActorClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* LoadActorClass(StrProperty Path); // Offset: 0x103de22a0 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Gameplay.VehicleAndTreasureBoxGeneratorComponent
// Size: 0x650 // Inherited bytes: 0x338
struct UVehicleAndTreasureBoxGeneratorComponent : UBaseGeneratorComponent {
	// Fields
	bool bUseLocalSpotFile; // Offset: 0x338 // Size: 0x01
	bool bCanBackupVehicleSpotDatas; // Offset: 0x339 // Size: 0x01
	char pad_0x33A[0x6]; // Offset: 0x33a // Size: 0x06
	struct TArray<struct UVehicleSpotSceneComponent*> VehicleSpotSceneComponentList; // Offset: 0x340 // Size: 0x10
	enum class ERegionType RegionType; // Offset: 0x350 // Size: 0x01
	char pad_0x351[0x7]; // Offset: 0x351 // Size: 0x07
	struct TArray<struct FBackupVehicleSpotData> BackupVehicleSpotDatas; // Offset: 0x358 // Size: 0x10
	struct TArray<struct FVehicleSpotProperty> VehicleSpotPropertys; // Offset: 0x368 // Size: 0x10
	struct TArray<struct FTreasureBoxSpotProperty> TreasureBoxSpotPropertys; // Offset: 0x378 // Size: 0x10
	bool bStatisticsValid; // Offset: 0x388 // Size: 0x01
	bool bIsRandom; // Offset: 0x389 // Size: 0x01
	char pad_0x38A[0x6]; // Offset: 0x38a // Size: 0x06
	MapProperty AllVehicleSpots; // Offset: 0x390 // Size: 0x50
	MapProperty AllTreasureBoxSpots; // Offset: 0x3e0 // Size: 0x50
	MapProperty VehicleGenerateSpawnDatas; // Offset: 0x430 // Size: 0x50
	struct FVehicleGenerateStatisticsData VehicleStatisticsData; // Offset: 0x480 // Size: 0x60
	struct UUAEDataTable* VehicleDataTable; // Offset: 0x4e0 // Size: 0x08
	struct TArray<struct FBackupVehicleSpotData> AllDynamicVehicleSpot; // Offset: 0x4e8 // Size: 0x10
	bool bRemovableMode; // Offset: 0x4f8 // Size: 0x01
	char pad_0x4F9[0x7]; // Offset: 0x4f9 // Size: 0x07
	SetProperty PauseVehicleSpotObjectSet; // Offset: 0x500 // Size: 0x50
	struct TArray<struct TWeakObjectPtr<struct AActor>> GeneratedActorArray; // Offset: 0x550 // Size: 0x10
	char pad_0x560[0x18]; // Offset: 0x560 // Size: 0x18
	struct FScriptMulticastDelegate OnVehicleGeneratedDelegate; // Offset: 0x578 // Size: 0x10
	struct FScriptMulticastDelegate OnVehicleGenerateEndDelegate; // Offset: 0x588 // Size: 0x10
	DelegateProperty CanGenerateVehicleDelegate; // Offset: 0x598 // Size: 0x10
	SetProperty IgnoreClassPathSet; // Offset: 0x5a8 // Size: 0x50
	bool bEnableLevelIndex; // Offset: 0x5f8 // Size: 0x01
	char pad_0x5F9[0x57]; // Offset: 0x5f9 // Size: 0x57

	// Functions

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsFromSpotFile
	// Flags: [Final|Native|Public]
	void WriteVehicleSpotStatisticsFromSpotFile(); // Offset: 0x103de4004 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15
	// Flags: [Final|Native|Public]
	void WriteVehicleSpotStatisticsDatas_V15(); // Offset: 0x103de3ff0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteVehicleSpotStatisticsDatas(); // Offset: 0x103de3fdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15
	// Flags: [Final|Native|Public]
	void WriteVehicleClassStatisticsDatas_V15(); // Offset: 0x103de3fc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteVehicleClassStatisticsDatas(); // Offset: 0x103de3fb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void WriteAllVehicleStatisticsDatasToLog(); // Offset: 0x103de3fa0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15
	// Flags: [Final|Native|Public|BlueprintCallable]
	void WriteAllVehicleStatisticsDatas_V15(); // Offset: 0x103de3f8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void WriteAllVehicleStatisticsDatas(); // Offset: 0x103de3f78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.SetAllVehicleNumRate
	// Flags: [Final|Native|Public]
	void SetAllVehicleNumRate(MapProperty Rates); // Offset: 0x103de3eb8 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.ResumeGenerate
	// Flags: [Final|Native|Public]
	void ResumeGenerate(); // Offset: 0x103de3ea4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void RegisterVehicleGenerateSpawnData(struct FVehicleGenerateSpawnData& Data); // Offset: 0x103de3df4 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterSpotFromSingleFile
	// Flags: [Final|Native|Public]
	void RegisterSpotFromSingleFile(StrProperty SpotFilePath); // Offset: 0x103de3d10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterGroupSpotComponent(struct UGroupSpotSceneComponent* GroupSpotComponent); // Offset: 0x103de3c8c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty& Property, struct FVehicleSpotComponentArray& Spots); // Offset: 0x103de3b64 // Return & Params: Num(2) Size(0x38)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomTreasureBoxSingleSpots(struct TArray<struct UVehicleSpotSceneComponent*>& AllSpots, struct FTreasureBoxSpotProperty& Property); // Offset: 0x103de3a48 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomSpotsByType(struct FVehicleSpotProperty& Property, struct FVehicleSpotComponentArray& Spots); // Offset: 0x103de3920 // Return & Params: Num(2) Size(0x50)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomSingleSpots(struct TArray<struct UVehicleSpotSceneComponent*>& AllSpots, struct FVehicleSpotProperty& Property); // Offset: 0x103de3804 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups
	// Flags: [Native|Public|BlueprintCallable]
	void RandomGroups(); // Offset: 0x103de37e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.PauseGenerate
	// Flags: [Final|Native|Public]
	void PauseGenerate(); // Offset: 0x103de37d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable
	// Flags: [Event|Public|BlueprintEvent]
	void LoadVehicleGenerateTable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GMGenerateAllVehicleSpot
	// Flags: [Final|Native|Public]
	bool GMGenerateAllVehicleSpot(StrProperty VehiclePath); // Offset: 0x103de36e0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory
	// Flags: [Final|Native|Public|HasOutParms]
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoWithCategory(struct FVehicleSpotProperty& SpotProperty, StrProperty Category); // Offset: 0x103de3554 // Return & Params: Num(3) Size(0x70)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
	// Flags: [Final|Native|Public]
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(enum class ESpotType SpotType, StrProperty InCategory); // Offset: 0x103de3440 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo
	// Flags: [Final|Native|Public|HasOutParms]
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty& SpotProperty, StrProperty InCategory); // Offset: 0x103de32fc // Return & Params: Num(3) Size(0x70)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo
	// Flags: [Final|Native|Public|HasOutParms]
	struct FVehicleGenerateRandomInfo GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty& SpotProperty); // Offset: 0x103de3218 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTraceLevelName
	// Flags: [Final|Native|Public]
	StrProperty GetTraceLevelName(StrProperty SpotFileName, int16_t LevelIndex); // Offset: 0x103de3108 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass
	// Flags: [Final|Native|Public]
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(StrProperty Category); // Offset: 0x103de3038 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory
	// Flags: [Native|Protected|HasOutParms]
	StrProperty GetRandomCategory(struct TArray<struct FSpotWeight>& SpotWeights); // Offset: 0x103de2f50 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetAlreadyGeneratedVehicleNum
	// Flags: [Final|Native|Public|Const]
	IntProperty GetAlreadyGeneratedVehicleNum(); // Offset: 0x103de2f34 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick
	// Flags: [Native|Protected]
	void GenerateSpotOnTick(float DeltaTime); // Offset: 0x103de2eb0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.EndGenerate
	// Flags: [Final|Native|Public]
	void EndGenerate(); // Offset: 0x103de2e9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.EnableRemovableMode
	// Flags: [Final|Native|Public]
	void EnableRemovableMode(); // Offset: 0x103de2e88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool DynamicSpawnVehicleBySpotId(IntProperty ID, StrProperty Category); // Offset: 0x103de2d54 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups
	// Flags: [Final|Native|Protected]
	void DeleteGroups(); // Offset: 0x103de2d40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool CanDynamicSpawnVehicle(struct FVector SpawnLocation, struct FVector TestLocationOffset, struct FVector TestBoxSize); // Offset: 0x103de2c34 // Return & Params: Num(4) Size(0x25)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount
	// Flags: [Final|Native|Protected]
	void AddVehicleSpotCount(enum class ESpotType SpotType, StrProperty Path, float LocationX, float LocationY, float LocationZ); // Offset: 0x103de2a50 // Return & Params: Num(5) Size(0x24)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount
	// Flags: [Final|Native|Protected]
	void AddVehicleClassCount(StrProperty Path, bool IsValid, IntProperty Count); // Offset: 0x103de28dc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddIgnoreClassPath
	// Flags: [Final|Native|Public|HasOutParms]
	void AddIgnoreClassPath(struct TArray<StrProperty>& IgnoreItemClassList); // Offset: 0x103de2834 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Gameplay.VehicleGeneratorComponent
// Size: 0x450 // Inherited bytes: 0x338
struct UVehicleGeneratorComponent : UBaseGeneratorComponent {
	// Fields
	struct TArray<struct FVehicleSpotProperty> VehicleSpotPropertys; // Offset: 0x338 // Size: 0x10
	bool bStatisticsValid; // Offset: 0x348 // Size: 0x01
	bool bIsRandom; // Offset: 0x349 // Size: 0x01
	char pad_0x34A[0x6]; // Offset: 0x34a // Size: 0x06
	MapProperty AllVehicleSpots; // Offset: 0x350 // Size: 0x50
	MapProperty VehicleGenerateSpawnDatas; // Offset: 0x3a0 // Size: 0x50
	struct FVehicleGenerateStatisticsData VehicleStatisticsData; // Offset: 0x3f0 // Size: 0x60

	// Functions

	// Object Name: Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteVehicleSpotStatisticsDatas(); // Offset: 0x103de5784 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
	// Flags: [Final|Native|Protected]
	void WriteVehicleClassStatisticsDatas(); // Offset: 0x103de5770 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void WriteAllVehicleStatisticsDatas(); // Offset: 0x103de575c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterVehicleGenerateSpawnData(struct FVehicleGenerateSpawnData Data); // Offset: 0x103de5698 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterGroupSpotComponent(struct UGroupSpotSceneComponent* GroupSpotComponent); // Offset: 0x103de5614 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomSpotsByType(struct FVehicleSpotProperty& Property, struct FVehicleSpotComponentArray& Spots); // Offset: 0x103de54ec // Return & Params: Num(2) Size(0x50)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
	// Flags: [Final|Native|Protected|HasOutParms]
	void RandomSingleSpots(struct TArray<struct UVehicleSpotSceneComponent*>& AllSpots, struct FVehicleSpotProperty& Property); // Offset: 0x103de53d0 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.RandomGroups
	// Flags: [Native|Public|BlueprintCallable]
	void RandomGroups(); // Offset: 0x103de53b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LoadVehicleGenerateTable(); // Offset: 0x103de5398 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
	// Flags: [Final|Native|Public]
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(enum class ESpotType SpotType); // Offset: 0x103de52dc // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo
	// Flags: [Final|Native|Public|HasOutParms]
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty& SpotProperty); // Offset: 0x103de51f8 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
	// Flags: [Final|Native|Public]
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(StrProperty Category); // Offset: 0x103de50e0 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.GetRandomCategory
	// Flags: [Native|Protected|HasOutParms]
	StrProperty GetRandomCategory(struct TArray<struct FSpotWeight>& SpotWeights); // Offset: 0x103de4ff8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
	// Flags: [Native|Protected]
	void GenerateSpotOnTick(float DeltaTime); // Offset: 0x103de4f74 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.DeleteGroups
	// Flags: [Final|Native|Protected]
	void DeleteGroups(); // Offset: 0x103de4f60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
	// Flags: [Final|Native|Protected]
	void AddVehicleSpotCount(enum class ESpotType SpotType, StrProperty Path, float LocationX, float LocationY, float LocationZ); // Offset: 0x103de4d7c // Return & Params: Num(5) Size(0x24)

	// Object Name: Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
	// Flags: [Final|Native|Protected]
	void AddVehicleClassCount(StrProperty Path, bool IsValid, IntProperty Count); // Offset: 0x103de4c08 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class Gameplay.VehicleGroupSpotSceneComponent
// Size: 0x3b0 // Inherited bytes: 0x3b0
struct UVehicleGroupSpotSceneComponent : UGroupSpotSceneComponent {
};

// Object Name: Class Gameplay.VehicleSpotObject
// Size: 0xc0 // Inherited bytes: 0x28
struct UVehicleSpotObject : UObject {
	// Fields
	char pad_0x28[0x48]; // Offset: 0x28 // Size: 0x48
	struct FVehicleGenerateRandomInfo SpotRandomInfo; // Offset: 0x70 // Size: 0x28
	struct UVehicleAndTreasureBoxGeneratorComponent* VehicleGenerator; // Offset: 0x98 // Size: 0x08
	char pad_0xA0[0x20]; // Offset: 0xa0 // Size: 0x20

	// Functions

	// Object Name: Function Gameplay.VehicleSpotObject.OnVehicleGenerateEnd
	// Flags: [Final|Native|Public]
	void OnVehicleGenerateEnd(); // Offset: 0x103de5e70 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Gameplay.VehicleSpotObject.OnTraceLevelShown
	// Flags: [Final|Native|Public]
	void OnTraceLevelShown(); // Offset: 0x103de5e5c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Gameplay.VehicleSpotSceneComponent
// Size: 0x420 // Inherited bytes: 0x3c0
struct UVehicleSpotSceneComponent : USpotSceneComponent {
	// Fields
	enum class ESpotGroupType SpotGroupType; // Offset: 0x3c0 // Size: 0x01
	enum class ERegionType RegionType; // Offset: 0x3c1 // Size: 0x01
	bool bHasGenerateSpot; // Offset: 0x3c2 // Size: 0x01
	bool bRandomRotation; // Offset: 0x3c3 // Size: 0x01
	float RandomRotationMin; // Offset: 0x3c4 // Size: 0x04
	float RandomRotationMax; // Offset: 0x3c8 // Size: 0x04
	char pad_0x3CC[0x4]; // Offset: 0x3cc // Size: 0x04
	struct FVehicleGenerateRandomInfo SpotRandomInfo; // Offset: 0x3d0 // Size: 0x28
	bool IsEnableVehicleSpawnRestore; // Offset: 0x3f8 // Size: 0x01
	char pad_0x3F9[0x3]; // Offset: 0x3f9 // Size: 0x03
	float VehicleSpawnRestoreOffset; // Offset: 0x3fc // Size: 0x04
	char pad_0x400[0x20]; // Offset: 0x400 // Size: 0x20

	// Functions

	// Object Name: Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void SetSpotRandomInfo(struct FVehicleGenerateRandomInfo& RandomInfo); // Offset: 0x103de6060 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
	// Flags: [Native|Public]
	bool GenerateSpot(); // Offset: 0x103de6024 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Gameplay.WeatherConfigComponent
// Size: 0x180 // Inherited bytes: 0x178
struct UWeatherConfigComponent : UActorComponent {
	// Fields
	char pad_0x178[0x8]; // Offset: 0x178 // Size: 0x08
};

