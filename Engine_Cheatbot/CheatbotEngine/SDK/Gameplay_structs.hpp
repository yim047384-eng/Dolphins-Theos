#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Gameplay.ItemOperationInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FItemOperationInfo {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	enum class EBattleItemOperationType BattleItemOperationType; // Offset: 0x18 // Size: 0x01
	char Reason; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	IntProperty Count; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerPetInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FGameModePlayerPetInfo {
	// Fields
	IntProperty PetId; // Offset: 0x00 // Size: 0x04
	IntProperty PetLevel; // Offset: 0x04 // Size: 0x04
	IntProperty PetCfgId; // Offset: 0x08 // Size: 0x04
	IntProperty PetColor; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> PetAvatarList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DailyTaskStoreInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FDailyTaskStoreInfo {
	// Fields
	IntProperty TaskID; // Offset: 0x00 // Size: 0x04
	IntProperty State; // Offset: 0x04 // Size: 0x04
	IntProperty Progress; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerEffectItemInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FPlayerEffectItemInfo {
	// Fields
	IntProperty Slot; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerParams
// Size: 0x3f8 // Inherited bytes: 0x00
struct FGameModePlayerParams {
	// Fields
	bool bEnablePlaneBanner; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty PlanetailResLink; // Offset: 0x08 // Size: 0x10
	uint64 UID; // Offset: 0x18 // Size: 0x08
	StrProperty OpenID; // Offset: 0x20 // Size: 0x10
	IntProperty ZoneID; // Offset: 0x30 // Size: 0x04
	uint8_t PlatID; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	struct FName PlayerType; // Offset: 0x38 // Size: 0x08
	StrProperty PlayerName; // Offset: 0x40 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x50 // Size: 0x04
	IntProperty TeamID; // Offset: 0x54 // Size: 0x04
	int64_t IdxInTeam; // Offset: 0x58 // Size: 0x08
	uint64 PreTeamID; // Offset: 0x60 // Size: 0x08
	IntProperty PlayerBornPointID; // Offset: 0x68 // Size: 0x04
	bool bTeamLeader; // Offset: 0x6c // Size: 0x01
	bool bIsGM; // Offset: 0x6d // Size: 0x01
	char Gender; // Offset: 0x6e // Size: 0x01
	char SpeciesType; // Offset: 0x6f // Size: 0x01
	char SpeciesGrade; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	StrProperty PIC_URL; // Offset: 0x78 // Size: 0x10
	IntProperty Level; // Offset: 0x88 // Size: 0x04
	IntProperty Segment_Level; // Offset: 0x8c // Size: 0x04
	IntProperty AceImprintShowId; // Offset: 0x90 // Size: 0x04
	IntProperty AceImprintBaseId; // Offset: 0x94 // Size: 0x04
	IntProperty AvatarBoxId; // Offset: 0x98 // Size: 0x04
	bool bAIPlayer; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	uint64 MLAIDisplayUID; // Offset: 0xa0 // Size: 0x08
	struct TArray<struct FGameModePlayerItem> ItemList; // Offset: 0xa8 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> fireworksInfo; // Offset: 0xb8 // Size: 0x10
	struct TArray<IntProperty> equip_plating_list; // Offset: 0xc8 // Size: 0x10
	struct TArray<struct FGameModePlayerRolewearInfo> AllWear; // Offset: 0xd8 // Size: 0x10
	IntProperty RolewearIndex; // Offset: 0xe8 // Size: 0x04
	char pad_0xEC[0x4]; // Offset: 0xec // Size: 0x04
	struct TArray<struct FGameModePlayerExpressionItem> ExpressionItemList; // Offset: 0xf0 // Size: 0x10
	struct TArray<struct FGameModePlayerTaskData> TaskDataList; // Offset: 0x100 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> WeaponAvatarList; // Offset: 0x110 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> VehicleAvatarList; // Offset: 0x120 // Size: 0x10
	struct TArray<struct FVehicleAvatarData> VehicleAdvanceAvatarList; // Offset: 0x130 // Size: 0x10
	struct FGameModePlayerEquipmentAvatar EquipmentAvatar; // Offset: 0x140 // Size: 0x30
	struct TArray<struct FGameModeWeaponDIYPlanData> WeaponDIYPlanData; // Offset: 0x170 // Size: 0x10
	IntProperty VehicleSkinInReady; // Offset: 0x180 // Size: 0x04
	char pad_0x184[0x4]; // Offset: 0x184 // Size: 0x04
	struct FGameModePlayerAliasInfo AliasInfo; // Offset: 0x188 // Size: 0x48
	struct FGameModePlayerUpassInfo UpassInfo; // Offset: 0x1d0 // Size: 0x38
	struct FGameModePlayerPetInfo PetInfo; // Offset: 0x208 // Size: 0x20
	struct TArray<struct FGameModePlayerPetInfo> AdditionalPetInfo; // Offset: 0x228 // Size: 0x10
	IntProperty UsingAdditionalPetIndex; // Offset: 0x238 // Size: 0x04
	char pad_0x23C[0x4]; // Offset: 0x23c // Size: 0x04
	struct TArray<struct FGameModePlayerKnapsackExtInfo> KnapsackExtInfoList; // Offset: 0x240 // Size: 0x10
	struct TArray<struct FGameModePlayeWeaponSchemeInfo> WeaponSchemeInfoList; // Offset: 0x250 // Size: 0x10
	IntProperty CurWeaponSchemeIndex; // Offset: 0x260 // Size: 0x04
	IntProperty PveLevel; // Offset: 0x264 // Size: 0x04
	struct TArray<IntProperty> CharSkillList; // Offset: 0x268 // Size: 0x10
	struct FGameModePlayerBanChat banChat; // Offset: 0x278 // Size: 0x18
	struct FGameModePlayerBanChat banTarget; // Offset: 0x290 // Size: 0x18
	struct TArray<struct FSpecialPickItem> SpecialPickItem; // Offset: 0x2a8 // Size: 0x10
	struct FAchievementPrize EquippedAchievementPrize; // Offset: 0x2b8 // Size: 0x0c
	char pad_0x2C4[0x4]; // Offset: 0x2c4 // Size: 0x04
	struct TArray<IntProperty> audioChat; // Offset: 0x2c8 // Size: 0x10
	struct FName CurrentPlayerState; // Offset: 0x2d8 // Size: 0x08
	struct FName CurrentCharacterState; // Offset: 0x2e0 // Size: 0x08
	float SyncedTimestamp; // Offset: 0x2e8 // Size: 0x04
	float DestinyValue; // Offset: 0x2ec // Size: 0x04
	float WarmScore; // Offset: 0x2f0 // Size: 0x04
	float AIAllocMarkValue; // Offset: 0x2f4 // Size: 0x04
	IntProperty LeaderCount; // Offset: 0x2f8 // Size: 0x04
	char pad_0x2FC[0x4]; // Offset: 0x2fc // Size: 0x04
	uint64 LastGameLeaderUID; // Offset: 0x300 // Size: 0x08
	struct TArray<uint64> LastGameTeammatesUID; // Offset: 0x308 // Size: 0x10
	uint64 LastGameBattleID; // Offset: 0x318 // Size: 0x08
	float RatingScore; // Offset: 0x320 // Size: 0x04
	bool bDoPlayerUseAutoFollow; // Offset: 0x324 // Size: 0x01
	char pad_0x325[0x3]; // Offset: 0x325 // Size: 0x03
	float MaxRankingScore; // Offset: 0x328 // Size: 0x04
	uint32_t ObserverFlags; // Offset: 0x32c // Size: 0x04
	uint64 WatchPlayerKey; // Offset: 0x330 // Size: 0x08
	bool bIsHawkEyeSpectator; // Offset: 0x338 // Size: 0x01
	char pad_0x339[0x3]; // Offset: 0x339 // Size: 0x03
	IntProperty HawkEyeSpectateMaxMatchCount; // Offset: 0x33c // Size: 0x04
	IntProperty HawkEyeSpectateUsedMatchCount; // Offset: 0x340 // Size: 0x04
	char PlatformGender; // Offset: 0x344 // Size: 0x01
	char pad_0x345[0x3]; // Offset: 0x345 // Size: 0x03
	IntProperty planeAvatarId; // Offset: 0x348 // Size: 0x04
	IntProperty DyeDebugFlag; // Offset: 0x34c // Size: 0x04
	StrProperty Nation; // Offset: 0x350 // Size: 0x10
	IntProperty MatchLabel; // Offset: 0x360 // Size: 0x04
	bool OnlyTeammateSeeAvatar; // Offset: 0x364 // Size: 0x01
	char pad_0x365[0x3]; // Offset: 0x365 // Size: 0x03
	int64_t LastGameResultTime; // Offset: 0x368 // Size: 0x08
	int64_t CorpsID; // Offset: 0x370 // Size: 0x08
	int64_t Campid; // Offset: 0x378 // Size: 0x08
	bool bUsedSimulation; // Offset: 0x380 // Size: 0x01
	bool bRoomCanKickPlayer; // Offset: 0x381 // Size: 0x01
	bool bCanDownloadInBattle; // Offset: 0x382 // Size: 0x01
	char pad_0x383[0x5]; // Offset: 0x383 // Size: 0x05
	StrProperty IpCountryStr; // Offset: 0x388 // Size: 0x10
	bool bRoomOwner; // Offset: 0x398 // Size: 0x01
	char pad_0x399[0x3]; // Offset: 0x399 // Size: 0x03
	IntProperty VeteranRecruitIndex; // Offset: 0x39c // Size: 0x04
	IntProperty MatchStrategyLabel; // Offset: 0x3a0 // Size: 0x04
	char pad_0x3A4[0x4]; // Offset: 0x3a4 // Size: 0x04
	struct TArray<struct FDailyTaskStoreInfo> DailyTaskStoreList; // Offset: 0x3a8 // Size: 0x10
	IntProperty LandId; // Offset: 0x3b8 // Size: 0x04
	IntProperty FollowType; // Offset: 0x3bc // Size: 0x04
	uint64 FollowUID; // Offset: 0x3c0 // Size: 0x08
	uint32_t TaskSyncToDsTs; // Offset: 0x3c8 // Size: 0x04
	char pad_0x3CC[0x4]; // Offset: 0x3cc // Size: 0x04
	uint64 LuckmateUID; // Offset: 0x3d0 // Size: 0x08
	StrProperty GameAPPIDFromDS; // Offset: 0x3d8 // Size: 0x10
	float RealHiddenScore; // Offset: 0x3e8 // Size: 0x04
	float RealScoreMu; // Offset: 0x3ec // Size: 0x04
	float RealScoreSigma; // Offset: 0x3f0 // Size: 0x04
	char pad_0x3F4[0x4]; // Offset: 0x3f4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AchievementPrize
// Size: 0x0c // Inherited bytes: 0x00
struct FAchievementPrize {
	// Fields
	IntProperty MedalAvatarID; // Offset: 0x00 // Size: 0x04
	IntProperty NotifyTitleAvatarID; // Offset: 0x04 // Size: 0x04
	IntProperty ScoreBoardAvatarID; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.SpecialPickItem
// Size: 0x0c // Inherited bytes: 0x00
struct FSpecialPickItem {
	// Fields
	IntProperty item_id; // Offset: 0x00 // Size: 0x04
	IntProperty cur_count; // Offset: 0x04 // Size: 0x04
	IntProperty total_count; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerBanChat
// Size: 0x18 // Inherited bytes: 0x00
struct FGameModePlayerBanChat {
	// Fields
	IntProperty end_time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Reason; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayeWeaponSchemeInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FGameModePlayeWeaponSchemeInfo {
	// Fields
	IntProperty SchemeIndex; // Offset: 0x00 // Size: 0x04
	bool IsLocked; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct TArray<struct FGameModePlayeWeaponSchemeSlotInfo> SlotList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayeWeaponSchemeSlotInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FGameModePlayeWeaponSchemeSlotInfo {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> AttachList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayerKnapsackExtInfo
// Size: 0x90 // Inherited bytes: 0x00
struct FGameModePlayerKnapsackExtInfo {
	// Fields
	struct FGameModePlayerKnapsackSingleInfo KnapsackExtInfo; // Offset: 0x00 // Size: 0x88
	bool IsLocked; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	IntProperty WearIndex; // Offset: 0x8c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerKnapsackSingleInfo
// Size: 0x88 // Inherited bytes: 0x00
struct FGameModePlayerKnapsackSingleInfo {
	// Fields
	IntProperty Parachute; // Offset: 0x00 // Size: 0x04
	IntProperty ParachuteGlider; // Offset: 0x04 // Size: 0x04
	IntProperty BagSkin; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> BagSkinList; // Offset: 0x10 // Size: 0x10
	IntProperty HelmetSkin; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<IntProperty> HelmetSkinList; // Offset: 0x28 // Size: 0x10
	IntProperty FlySkin; // Offset: 0x38 // Size: 0x04
	IntProperty GrenadeSkin; // Offset: 0x3c // Size: 0x04
	struct FGameModePlayerConsumableAvatar ConsumableAvatarList; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> WeaponList; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> VehicleSkinList; // Offset: 0x60 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> BackPackPendantList; // Offset: 0x70 // Size: 0x10
	IntProperty ShowVehicleSkin; // Offset: 0x80 // Size: 0x04
	IntProperty WingmanSkin; // Offset: 0x84 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerItem
// Size: 0x20 // Inherited bytes: 0x00
struct FGameModePlayerItem {
	// Fields
	IntProperty ItemTableID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> AdditionIntData; // Offset: 0x08 // Size: 0x10
	bool bDropped; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.GameModePlayerConsumableAvatar
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModePlayerConsumableAvatar {
	// Fields
	IntProperty GrenadeAvatarShoulei; // Offset: 0x00 // Size: 0x04
	IntProperty GrenadeAvatarSmoke; // Offset: 0x04 // Size: 0x04
	IntProperty GrenadeAvatarStun; // Offset: 0x08 // Size: 0x04
	IntProperty GrenadeAvatarBurn; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerUpassInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FGameModePlayerUpassInfo {
	// Fields
	IntProperty updateTime; // Offset: 0x00 // Size: 0x04
	IntProperty upassLevel; // Offset: 0x04 // Size: 0x04
	IntProperty upassScore; // Offset: 0x08 // Size: 0x04
	bool isBattleTitle; // Offset: 0x0c // Size: 0x01
	bool isUI; // Offset: 0x0d // Size: 0x01
	bool battleShow; // Offset: 0x0e // Size: 0x01
	bool isBuy; // Offset: 0x0f // Size: 0x01
	StrProperty iconUrl; // Offset: 0x10 // Size: 0x10
	bool mainSwitch; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty upassKeepBuy; // Offset: 0x24 // Size: 0x04
	IntProperty upassCurValue; // Offset: 0x28 // Size: 0x04
	IntProperty pass_type; // Offset: 0x2c // Size: 0x04
	IntProperty nUpassPrimePlusCard; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerAliasInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FGameModePlayerAliasInfo {
	// Fields
	IntProperty aliasID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty aliasTitle; // Offset: 0x08 // Size: 0x10
	StrProperty aliasNation; // Offset: 0x18 // Size: 0x10
	IntProperty aliasRank; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty aliasPartnerName; // Offset: 0x30 // Size: 0x10
	IntProperty aliasPartnerRelation; // Offset: 0x40 // Size: 0x04
	IntProperty aliasRankID; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModeWeaponDIYPlanData
// Size: 0x08 // Inherited bytes: 0x00
struct FGameModeWeaponDIYPlanData {
	// Fields
	IntProperty WeaponAvatarID; // Offset: 0x00 // Size: 0x04
	IntProperty PlanID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerEquipmentAvatar
// Size: 0x30 // Inherited bytes: 0x00
struct FGameModePlayerEquipmentAvatar {
	// Fields
	IntProperty BagAvatar; // Offset: 0x00 // Size: 0x04
	IntProperty HelmetAvatar; // Offset: 0x04 // Size: 0x04
	IntProperty ArmorAvatar; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> BagAvatarList; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> HelmetAvatarList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleAvatarData
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleAvatarData {
	// Fields
	IntProperty VehicleSkinID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> VehicleStyleIDList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FVehicleAvatarStyle> VehicleAvatarStyle; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleAvatarStyle
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleAvatarStyle {
	// Fields
	IntProperty ModelID; // Offset: 0x00 // Size: 0x04
	IntProperty ColorID; // Offset: 0x04 // Size: 0x04
	IntProperty PatternID; // Offset: 0x08 // Size: 0x04
	IntProperty ParticleID; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerTaskData
// Size: 0x18 // Inherited bytes: 0x00
struct FGameModePlayerTaskData {
	// Fields
	IntProperty task_id; // Offset: 0x00 // Size: 0x04
	IntProperty process; // Offset: 0x04 // Size: 0x04
	StrProperty ext_info; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayerExpressionItem
// Size: 0x20 // Inherited bytes: 0x20
struct FGameModePlayerExpressionItem : FGameModePlayerItem {
};

// Object Name: ScriptStruct Gameplay.GameModePlayerRolewearInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FGameModePlayerRolewearInfo {
	// Fields
	struct TArray<struct FGameModePlayerItem> RolewearInfo; // Offset: 0x00 // Size: 0x10
	bool IsLocked; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.LobbyWatchInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FLobbyWatchInfo {
	// Fields
	uint32_t WatchedPlayerKey; // Offset: 0x00 // Size: 0x04
	bool bIsHawkEyeSpectator; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.VehicleAvatarSkinList
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleAvatarSkinList {
	// Fields
	struct TArray<IntProperty> SkinList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModeWeaponAvatarData
// Size: 0x08 // Inherited bytes: 0x00
struct FGameModeWeaponAvatarData {
	// Fields
	IntProperty ParentID; // Offset: 0x00 // Size: 0x04
	IntProperty AvatarSpecificID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerItems
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModePlayerItems {
	// Fields
	struct TArray<struct FGameModePlayerItem> Items; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerOBInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FPlayerOBInfo {
	// Fields
	bool IsEnableOB; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	uint64 UID; // Offset: 0x08 // Size: 0x08
	IntProperty ZoneID; // Offset: 0x10 // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x14 // Size: 0x04
	IntProperty BattleMode; // Offset: 0x18 // Size: 0x04
	bool ValidBattleInfo; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	IntProperty GameCount; // Offset: 0x20 // Size: 0x04
	IntProperty WinCount; // Offset: 0x24 // Size: 0x04
	IntProperty TopTenCount; // Offset: 0x28 // Size: 0x04
	IntProperty KillNum; // Offset: 0x2c // Size: 0x04
	float KDNum; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct FTPlanExtraOBInfo TPlanInfo; // Offset: 0x38 // Size: 0x20
};

// Object Name: ScriptStruct Gameplay.TPlanExtraOBInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FTPlanExtraOBInfo {
	// Fields
	IntProperty GameCount; // Offset: 0x00 // Size: 0x04
	IntProperty Military; // Offset: 0x04 // Size: 0x04
	int64_t Income; // Offset: 0x08 // Size: 0x08
	float EscapeRate; // Offset: 0x10 // Size: 0x04
	IntProperty KillNum; // Offset: 0x14 // Size: 0x04
	float KDNum; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerNetStats
// Size: 0x40 // Inherited bytes: 0x00
struct FPlayerNetStats {
	// Fields
	StrProperty ClientAddr; // Offset: 0x00 // Size: 0x10
	StrProperty LocalAddr; // Offset: 0x10 // Size: 0x10
	float AvgPing; // Offset: 0x20 // Size: 0x04
	float MaxPing; // Offset: 0x24 // Size: 0x04
	float HighPingPercent; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x14]; // Offset: 0x2c // Size: 0x14
};

// Object Name: ScriptStruct Gameplay.WeatherInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FWeatherInfo {
	// Fields
	StrProperty WeatherLevelName; // Offset: 0x00 // Size: 0x10
	IntProperty WeatherID; // Offset: 0x10 // Size: 0x04
	float WeatherTime; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModeStateChangedParams
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModeStateChangedParams {
	// Fields
	struct FName GameModeState; // Offset: 0x00 // Size: 0x08
	bool bAliveOnNonePlayer; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.TLog_ActivityEventType
// Size: 0x10 // Inherited bytes: 0x00
struct FTLog_ActivityEventType {
	// Fields
	char ActivityEventID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector ActivityEventLoc; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.PlayerAnimData
// Size: 0x10 // Inherited bytes: 0x00
struct FPlayerAnimData {
	// Fields
	struct UAnimationAsset* Animation; // Offset: 0x00 // Size: 0x08
	float Rate; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CustomAccessoriesData
// Size: 0x0c // Inherited bytes: 0x00
struct FCustomAccessoriesData {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	IntProperty Index; // Offset: 0x04 // Size: 0x04
	IntProperty ItemId; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerVehAnimList
// Size: 0x188 // Inherited bytes: 0x00
struct FPlayerVehAnimList {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	IntProperty FrameCounter; // Offset: 0x04 // Size: 0x04
	struct UAnimationAsset* IdleAnim; // Offset: 0x08 // Size: 0x08
	struct UAnimationAsset* IdleGunAnimLayerBlend; // Offset: 0x10 // Size: 0x08
	struct UAnimationAsset* IdleMotorbikeAnim; // Offset: 0x18 // Size: 0x08
	struct UAnimationAsset* VacateMotorbikeAnim; // Offset: 0x20 // Size: 0x08
	struct UAnimationAsset* IdleMotorBikeDirverLeaningAnim; // Offset: 0x28 // Size: 0x08
	struct UAnimationAsset* IdleMotorBikeDirverLeaningLowSpeedAnim; // Offset: 0x30 // Size: 0x08
	struct UAnimationAsset* MotorBikeDirverLeaningGroundPitchAnim; // Offset: 0x38 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseDriverOffAnim; // Offset: 0x40 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithGunDriverOffAnim; // Offset: 0x48 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithDualGunDriverOffAnim; // Offset: 0x50 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithMeleeDriverOffAnim; // Offset: 0x58 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithThrowObjDriverOffAnim; // Offset: 0x60 // Size: 0x08
	struct UAnimationAsset* PassengerDriverOffAimAim; // Offset: 0x68 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleLeaningAnim; // Offset: 0x70 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseDriverOnAnim; // Offset: 0x78 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithGunDriverOnAnim; // Offset: 0x80 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithMeleeDriverOnAnim; // Offset: 0x88 // Size: 0x08
	struct UAnimationAsset* PassengerMotorBikeIdleBaseWithThrowObjDriverOnAnim; // Offset: 0x90 // Size: 0x08
	struct UAnimationAsset* LeanOutAnim; // Offset: 0x98 // Size: 0x08
	struct UAnimationAsset* LeanInAnim; // Offset: 0xa0 // Size: 0x08
	struct UAnimationAsset* AimAnim; // Offset: 0xa8 // Size: 0x08
	struct UAnimationAsset* WeaponIdleAddition; // Offset: 0xb0 // Size: 0x08
	struct UAnimationAsset* WeaponAimAddition; // Offset: 0xb8 // Size: 0x08
	struct UAnimationAsset* WeaponDualAimAddition; // Offset: 0xc0 // Size: 0x08
	struct UAnimationAsset* WeaponReloadAddition; // Offset: 0xc8 // Size: 0x08
	struct UAnimationAsset* SurfBoard_IdleAnim; // Offset: 0xd0 // Size: 0x08
	struct UAnimationAsset* SurfBoard_MoveAnim; // Offset: 0xd8 // Size: 0x08
	struct UAnimationAsset* SurfBoard_JumpAnim; // Offset: 0xe0 // Size: 0x08
	struct UAnimationAsset* SurfBoard_LandAnim; // Offset: 0xe8 // Size: 0x08
	struct UAnimationAsset* SurfBoard_JumpLeftTurnAnim; // Offset: 0xf0 // Size: 0x08
	struct UAnimationAsset* SurfBoard_JumpRightTurnAnim; // Offset: 0xf8 // Size: 0x08
	struct UAnimationAsset* Ski_JumpStationary; // Offset: 0x100 // Size: 0x08
	struct UAnimationAsset* Ski_DownTurnLR; // Offset: 0x108 // Size: 0x08
	struct UAnimationAsset* Ski_DownTurnRL; // Offset: 0x110 // Size: 0x08
	struct UAnimationAsset* Ski_DownTurnFD; // Offset: 0x118 // Size: 0x08
	struct UAnimationAsset* Ski_Falling; // Offset: 0x120 // Size: 0x08
	struct UAnimationAsset* Ski_DownFallLandingAdditive; // Offset: 0x128 // Size: 0x08
	struct UAnimationAsset* Ski_DownFallLandingHard; // Offset: 0x130 // Size: 0x08
	struct UAnimationAsset* VehicleWeaponIdleAnim; // Offset: 0x138 // Size: 0x08
	struct UAnimationAsset* VehicleWeaponEquipAnim; // Offset: 0x140 // Size: 0x08
	struct UAnimationAsset* VehicleWeaponUnEquipAnim; // Offset: 0x148 // Size: 0x08
	struct UAnimationAsset* VehicleWeaponReloadAnim; // Offset: 0x150 // Size: 0x08
	struct UAnimationAsset* VehicleWeaponAimOffsetAnim; // Offset: 0x158 // Size: 0x08
	struct UAnimationAsset* MotorgliderSteerAnim; // Offset: 0x160 // Size: 0x08
	struct UAnimationAsset* MotorgliderIdleAnim; // Offset: 0x168 // Size: 0x08
	struct UAnimationAsset* VehicleDriverForwardAnim; // Offset: 0x170 // Size: 0x08
	struct UAnimationAsset* DyingInVehicleIdleAnim; // Offset: 0x178 // Size: 0x08
	struct UAnimationAsset* HoldGrenadeAimModify; // Offset: 0x180 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GameModeAIPlayerParams
// Size: 0x408 // Inherited bytes: 0x3f8
struct FGameModeAIPlayerParams : FGameModePlayerParams {
	// Fields
	uint8_t AIType; // Offset: 0x3f4 // Size: 0x01
	uint32_t AILevel; // Offset: 0x3f8 // Size: 0x04
	bool bMLAIPlayer; // Offset: 0x3fc // Size: 0x01
	bool bMLDelivery; // Offset: 0x3fd // Size: 0x01
	char pad_0x3FF[0x1]; // Offset: 0x3ff // Size: 0x01
	uint32_t MLBotType; // Offset: 0x400 // Size: 0x04
	bool bBornIslandAI; // Offset: 0x404 // Size: 0x01
	bool bAITakeOver; // Offset: 0x405 // Size: 0x01
	char pad_0x406[0x2]; // Offset: 0x406 // Size: 0x02
};

// Object Name: ScriptStruct Gameplay.PlayerPickUpInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerPickUpInfo {
	// Fields
	uint64 PlayerUID; // Offset: 0x00 // Size: 0x08
	IntProperty ItemSpesificID; // Offset: 0x08 // Size: 0x04
	IntProperty Count; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> DataList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameDataMining
// Size: 0x48 // Inherited bytes: 0x00
struct FGameDataMining {
	// Fields
	StrProperty BattleID; // Offset: 0x00 // Size: 0x10
	struct FVector PlaneStartPoint; // Offset: 0x10 // Size: 0x0c
	struct FVector PlaneEndPoint; // Offset: 0x1c // Size: 0x0c
	struct TArray<struct FCircleDataMining> CircleDataMining; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FGameWatchReport> WatchReport; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameWatchReport
// Size: 0x38 // Inherited bytes: 0x00
struct FGameWatchReport {
	// Fields
	uint16_t AreaID; // Offset: 0x00 // Size: 0x02
	uint8_t PlatID; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x5]; // Offset: 0x03 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x08 // Size: 0x10
	uint64 player_uid; // Offset: 0x18 // Size: 0x08
	float total_time; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FWatchFlow> watch_flow; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.WatchFlow
// Size: 0x10 // Inherited bytes: 0x00
struct FWatchFlow {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t sec; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CircleDataMining
// Size: 0x14 // Inherited bytes: 0x00
struct FCircleDataMining {
	// Fields
	struct FVector WhiteCircleCenter; // Offset: 0x00 // Size: 0x0c
	bool bDestinyCircle; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty LeftPlayerNum; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerShowUpassInfo
// Size: 0xb0 // Inherited bytes: 0x00
struct FGameModePlayerShowUpassInfo {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	IntProperty updateTime; // Offset: 0x10 // Size: 0x04
	IntProperty upassLevel; // Offset: 0x14 // Size: 0x04
	IntProperty upassScore; // Offset: 0x18 // Size: 0x04
	IntProperty planeAvatarId; // Offset: 0x1c // Size: 0x04
	bool isBattleTitle; // Offset: 0x20 // Size: 0x01
	bool isUI; // Offset: 0x21 // Size: 0x01
	bool battleShow; // Offset: 0x22 // Size: 0x01
	bool isBuy; // Offset: 0x23 // Size: 0x01
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty iconUrl; // Offset: 0x28 // Size: 0x10
	StrProperty Nation; // Offset: 0x38 // Size: 0x10
	struct FGameModePlayerAliasInfo AliasInfo; // Offset: 0x48 // Size: 0x48
	IntProperty upassKeepBuy; // Offset: 0x90 // Size: 0x04
	IntProperty upassCurValue; // Offset: 0x94 // Size: 0x04
	IntProperty pass_type; // Offset: 0x98 // Size: 0x04
	IntProperty nUpassPrimePlusCard; // Offset: 0x9c // Size: 0x04
	StrProperty PlayerUID; // Offset: 0xa0 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DSSwitchInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FDSSwitchInfo {
	// Fields
	IntProperty KeyNum; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty SValue; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayerBattleResultData
// Size: 0x618 // Inherited bytes: 0x00
struct FGameModePlayerBattleResultData {
	// Fields
	StrProperty Reason; // Offset: 0x00 // Size: 0x10
	IntProperty RemainingPlayerCount; // Offset: 0x10 // Size: 0x04
	IntProperty TotalPlayerCount; // Offset: 0x14 // Size: 0x04
	IntProperty RemainingTeamCount; // Offset: 0x18 // Size: 0x04
	IntProperty TotalTeamCount; // Offset: 0x1c // Size: 0x04
	float OnlineTime; // Offset: 0x20 // Size: 0x04
	bool IsSolo; // Offset: 0x24 // Size: 0x01
	bool IsSafeExit; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
	uint64 Killer; // Offset: 0x28 // Size: 0x08
	uint64 killer_ig_uid; // Offset: 0x30 // Size: 0x08
	uint64 KillerAIDisplayUID; // Offset: 0x38 // Size: 0x08
	StrProperty KillerName; // Offset: 0x40 // Size: 0x10
	StrProperty BeKilledOpenID; // Offset: 0x50 // Size: 0x10
	uint32_t KillerType; // Offset: 0x60 // Size: 0x04
	uint32_t KillerDeliveryType; // Offset: 0x64 // Size: 0x04
	IntProperty KillerWeaponID; // Offset: 0x68 // Size: 0x04
	uint32_t DeadCircleIndex; // Offset: 0x6c // Size: 0x04
	IntProperty ShootWeaponShotNum; // Offset: 0x70 // Size: 0x04
	IntProperty ShootWeaponShotNumPicth; // Offset: 0x74 // Size: 0x04
	IntProperty ShootWeaponShotAndHitPlayerNum; // Offset: 0x78 // Size: 0x04
	IntProperty ShootWeaponShotAndHitPlayerNumNoAI; // Offset: 0x7c // Size: 0x04
	IntProperty ShootWeaponShotHeadNum; // Offset: 0x80 // Size: 0x04
	IntProperty ShootWeaponShotHeadNumNoAI; // Offset: 0x84 // Size: 0x04
	IntProperty HealTimes; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct TArray<StrProperty> KillFlow; // Offset: 0x90 // Size: 0x10
	struct TArray<StrProperty> KnockOutFlow; // Offset: 0xa0 // Size: 0x10
	struct TArray<struct FTLog_PickUpItemFlow> TLog_PickUpItemFlowData; // Offset: 0xb0 // Size: 0x10
	MapProperty TLog_BornLandGrenadeData; // Offset: 0xc0 // Size: 0x50
	IntProperty PickUpItemTimes; // Offset: 0x110 // Size: 0x04
	char pad_0x114[0x4]; // Offset: 0x114 // Size: 0x04
	MapProperty TLog_BulletCount; // Offset: 0x118 // Size: 0x50
	uint64 parachute_leader_uid; // Offset: 0x168 // Size: 0x08
	struct TArray<struct FUseItemFlow> UseItemFlow; // Offset: 0x170 // Size: 0x10
	struct TArray<struct FUseBuffFlow> UseBuffFlow; // Offset: 0x180 // Size: 0x10
	struct TArray<struct FBuildingEnterFlow> BuildingEnterFlow; // Offset: 0x190 // Size: 0x10
	struct TArray<struct FDestroyVehicleWheelFlow> DestroyVehicleWheelFlow; // Offset: 0x1a0 // Size: 0x10
	IntProperty destroyVehicleNum; // Offset: 0x1b0 // Size: 0x04
	IntProperty is_escape; // Offset: 0x1b4 // Size: 0x04
	struct TArray<struct FTLog_KillInfo> PlayerKillAIInfo; // Offset: 0x1b8 // Size: 0x10
	struct TArray<struct FTLog_KillInfo> PlayerNearDeathDuoToAI; // Offset: 0x1c8 // Size: 0x10
	struct FTLog_KillInfo AIKillPlayerInfo; // Offset: 0x1d8 // Size: 0x28
	struct TArray<struct FGameModeTeammateBattleResultData> TeammateList; // Offset: 0x200 // Size: 0x10
	struct TArray<struct FGameModeLikeResultData> Like; // Offset: 0x210 // Size: 0x10
	struct TArray<uint64> BeLiked; // Offset: 0x220 // Size: 0x10
	uint32_t Switch; // Offset: 0x230 // Size: 0x04
	char pad_0x234[0x4]; // Offset: 0x234 // Size: 0x04
	struct TArray<uint32_t> Self; // Offset: 0x238 // Size: 0x10
	struct TArray<struct FGameModeTeammateLableCheckData> LabelCheck; // Offset: 0x248 // Size: 0x10
	struct FVector LandLocation; // Offset: 0x258 // Size: 0x0c
	IntProperty LandTime; // Offset: 0x264 // Size: 0x04
	struct FVector ParachuteLocation; // Offset: 0x268 // Size: 0x0c
	struct FVector DeadLocation; // Offset: 0x274 // Size: 0x0c
	StrProperty DeadDamangeType; // Offset: 0x280 // Size: 0x10
	IntProperty PveDeadAttacker; // Offset: 0x290 // Size: 0x04
	IntProperty PveStageId; // Offset: 0x294 // Size: 0x04
	StrProperty DeadTimeStr; // Offset: 0x298 // Size: 0x10
	StrProperty logoutime; // Offset: 0x2a8 // Size: 0x10
	float Pronetime; // Offset: 0x2b8 // Size: 0x04
	float BeInWaterTime; // Offset: 0x2bc // Size: 0x04
	float SwimmingDistance; // Offset: 0x2c0 // Size: 0x04
	IntProperty BeDownTimes; // Offset: 0x2c4 // Size: 0x04
	IntProperty BeSavedTimes; // Offset: 0x2c8 // Size: 0x04
	IntProperty PickUpAirDrops; // Offset: 0x2cc // Size: 0x04
	struct FEquipmentData EquipmentData; // Offset: 0x2d0 // Size: 0x70
	IntProperty Rank; // Offset: 0x340 // Size: 0x04
	IntProperty TotalScore; // Offset: 0x344 // Size: 0x04
	IntProperty ProneTimes; // Offset: 0x348 // Size: 0x04
	IntProperty CrouchTimes; // Offset: 0x34c // Size: 0x04
	IntProperty JumpTimes; // Offset: 0x350 // Size: 0x04
	IntProperty TouchDownAreaID; // Offset: 0x354 // Size: 0x04
	IntProperty TouchDownLocTypeID; // Offset: 0x358 // Size: 0x04
	char pad_0x35C[0x4]; // Offset: 0x35c // Size: 0x04
	struct TArray<IntProperty> TouchDownAreaList; // Offset: 0x360 // Size: 0x10
	struct TArray<struct FGameModePlayerTaskData> CompletedTaskList; // Offset: 0x370 // Size: 0x10
	struct TArray<struct FReportCollection> SpecialCollectionList; // Offset: 0x380 // Size: 0x10
	struct TArray<struct FWeaponDamageRecord> WeaponDamageRecordList; // Offset: 0x390 // Size: 0x10
	struct FGrenadeDamageRecord GrenadeDamageRecord; // Offset: 0x3a0 // Size: 0x28
	struct FKniveDamageRecord KniveDamageRecord; // Offset: 0x3c8 // Size: 0x28
	struct TArray<IntProperty> SecretAreaIDList; // Offset: 0x3f0 // Size: 0x10
	IntProperty KillNumInVehicle; // Offset: 0x400 // Size: 0x04
	float TotalSprintDistance; // Offset: 0x404 // Size: 0x04
	float TotalBeenDamageAmount; // Offset: 0x408 // Size: 0x04
	float DestroyVehicleWheelNum; // Offset: 0x40c // Size: 0x04
	struct TArray<IntProperty> BuildFlow; // Offset: 0x410 // Size: 0x10
	struct TArray<IntProperty> DestroyShelterFlow; // Offset: 0x420 // Size: 0x10
	float ShelterTakeDamage; // Offset: 0x430 // Size: 0x04
	float HitShelterDamage; // Offset: 0x434 // Size: 0x04
	struct TArray<struct FVehicleDriveDisData> VehicleDriveDisDataArray; // Offset: 0x438 // Size: 0x10
	struct TArray<struct FKnockOutData> KnockOutList; // Offset: 0x448 // Size: 0x10
	bool IsKickedFromGame; // Offset: 0x458 // Size: 0x01
	char pad_0x459[0x3]; // Offset: 0x459 // Size: 0x03
	IntProperty KillMonsterNum; // Offset: 0x45c // Size: 0x04
	IntProperty LightCandleNum; // Offset: 0x460 // Size: 0x04
	IntProperty KillMagicWalkAI; // Offset: 0x464 // Size: 0x04
	IntProperty SendMagicWalkAI; // Offset: 0x468 // Size: 0x04
	float BattleStateTime; // Offset: 0x46c // Size: 0x04
	bool bIsGameTerminator; // Offset: 0x470 // Size: 0x01
	char pad_0x471[0x7]; // Offset: 0x471 // Size: 0x07
	MapProperty ActivityButtonCount; // Offset: 0x478 // Size: 0x50
	struct FTLog_SpecialStats TLog_SpecialStats; // Offset: 0x4c8 // Size: 0x08
	float TotalDamage; // Offset: 0x4d0 // Size: 0x04
	IntProperty FirstMoveBattles; // Offset: 0x4d4 // Size: 0x04
	IntProperty TotalBattles; // Offset: 0x4d8 // Size: 0x04
	float DamageAmountFPP; // Offset: 0x4dc // Size: 0x04
	IntProperty FPPSwitchTimes; // Offset: 0x4e0 // Size: 0x04
	IntProperty MeleeKillTimes; // Offset: 0x4e4 // Size: 0x04
	float MeleeDamageAmount; // Offset: 0x4e8 // Size: 0x04
	float RangedDamagedAmount; // Offset: 0x4ec // Size: 0x04
	float VehicleDamageAmount; // Offset: 0x4f0 // Size: 0x04
	IntProperty OpenAirDropBoxesNum; // Offset: 0x4f4 // Size: 0x04
	IntProperty FollowState; // Offset: 0x4f8 // Size: 0x04
	char pad_0x4FC[0x4]; // Offset: 0x4fc // Size: 0x04
	struct TArray<StrProperty> DestroyVehicleFlow; // Offset: 0x500 // Size: 0x10
	IntProperty UseHelicoperNum; // Offset: 0x510 // Size: 0x04
	float UseHelicoperDistance; // Offset: 0x514 // Size: 0x04
	IntProperty RevivalNum; // Offset: 0x518 // Size: 0x04
	IntProperty BeRevivedNum; // Offset: 0x51c // Size: 0x04
	IntProperty DrivingHelicopterTime; // Offset: 0x520 // Size: 0x04
	IntProperty InHelicopterTime; // Offset: 0x524 // Size: 0x04
	IntProperty SnowBoardJumpActionCount; // Offset: 0x528 // Size: 0x04
	IntProperty EmoteOnTelpherCount; // Offset: 0x52c // Size: 0x04
	struct TArray<IntProperty> FindBlackMonsterIDs; // Offset: 0x530 // Size: 0x10
	IntProperty KillSnowManCount; // Offset: 0x540 // Size: 0x04
	char pad_0x544[0x4]; // Offset: 0x544 // Size: 0x04
	MapProperty EventCounterMap; // Offset: 0x548 // Size: 0x50
	MapProperty GeneralCounterMap; // Offset: 0x598 // Size: 0x50
	struct FTLog_Micphone MicphoneTlog; // Offset: 0x5e8 // Size: 0x18
	IntProperty NormalItemNum; // Offset: 0x600 // Size: 0x04
	IntProperty SeniorItemNum; // Offset: 0x604 // Size: 0x04
	struct TArray<struct FSpecialWeaponRecord> SpecicalWeaponRecordList; // Offset: 0x608 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.SpecialWeaponRecord
// Size: 0x08 // Inherited bytes: 0x00
struct FSpecialWeaponRecord {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	IntProperty FireCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.TLog_Micphone
// Size: 0x18 // Inherited bytes: 0x00
struct FTLog_Micphone {
	// Fields
	float TeammateMicrophoneTime; // Offset: 0x00 // Size: 0x04
	float TeammateSpeakerTime; // Offset: 0x04 // Size: 0x04
	float EnemyMicrophoneTime; // Offset: 0x08 // Size: 0x04
	float EnemySpeakerTime; // Offset: 0x0c // Size: 0x04
	float TeammateInterphoneTime; // Offset: 0x10 // Size: 0x04
	float EnemyInterphoneTime; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.TLog_SpecialStats
// Size: 0x08 // Inherited bytes: 0x00
struct FTLog_SpecialStats {
	// Fields
	float MonsterDamageInNight1; // Offset: 0x00 // Size: 0x04
	float MonsterDamageInNight2; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.KnockOutData
// Size: 0x10 // Inherited bytes: 0x00
struct FKnockOutData {
	// Fields
	uint64 AttackerID; // Offset: 0x00 // Size: 0x08
	IntProperty Times; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleDriveDisData
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleDriveDisData {
	// Fields
	uint64 DriverID; // Offset: 0x00 // Size: 0x08
	IntProperty VehicleType; // Offset: 0x08 // Size: 0x04
	IntProperty AvatarID; // Offset: 0x0c // Size: 0x04
	float DriveDistance; // Offset: 0x10 // Size: 0x04
	float DriveTime; // Offset: 0x14 // Size: 0x04
	float VehicleJumpDistanceMax; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<uint64> PeopleInCar; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.KniveDamageRecord
// Size: 0x28 // Inherited bytes: 0x00
struct FKniveDamageRecord {
	// Fields
	IntProperty HeadShootCount; // Offset: 0x00 // Size: 0x04
	IntProperty LimbsShootCount; // Offset: 0x04 // Size: 0x04
	IntProperty BodyShootCount; // Offset: 0x08 // Size: 0x04
	IntProperty HandShootCount; // Offset: 0x0c // Size: 0x04
	IntProperty FootShootCount; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FKniveDamageRecordItem> Knives; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.KniveDamageRecordItem
// Size: 0x1c // Inherited bytes: 0x00
struct FKniveDamageRecordItem {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	float TotalDamage; // Offset: 0x04 // Size: 0x04
	IntProperty KillCount; // Offset: 0x08 // Size: 0x04
	IntProperty KnockNumber; // Offset: 0x0c // Size: 0x04
	IntProperty AvatarID; // Offset: 0x10 // Size: 0x04
	IntProperty TotalUseTime; // Offset: 0x14 // Size: 0x04
	IntProperty TotalOwnTime; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GrenadeDamageRecord
// Size: 0x28 // Inherited bytes: 0x00
struct FGrenadeDamageRecord {
	// Fields
	IntProperty HitCount; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> HitDistanceArray; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FGrenadeDamageRecordItem> Grenades; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GrenadeDamageRecordItem
// Size: 0x18 // Inherited bytes: 0x00
struct FGrenadeDamageRecordItem {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	float TotalDamage; // Offset: 0x04 // Size: 0x04
	IntProperty FireCount; // Offset: 0x08 // Size: 0x04
	IntProperty KillCount; // Offset: 0x0c // Size: 0x04
	IntProperty KnockNumber; // Offset: 0x10 // Size: 0x04
	IntProperty AvatarID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.WeaponDamageRecord
// Size: 0x60 // Inherited bytes: 0x00
struct FWeaponDamageRecord {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	float TotalDamage; // Offset: 0x04 // Size: 0x04
	IntProperty FireCount; // Offset: 0x08 // Size: 0x04
	IntProperty HeadShootCount; // Offset: 0x0c // Size: 0x04
	IntProperty LimbsShootCount; // Offset: 0x10 // Size: 0x04
	IntProperty BodyShootCount; // Offset: 0x14 // Size: 0x04
	IntProperty HandShootCount; // Offset: 0x18 // Size: 0x04
	IntProperty FootShootCount; // Offset: 0x1c // Size: 0x04
	IntProperty UniqueHitCount; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<IntProperty> HitDistanceArray; // Offset: 0x28 // Size: 0x10
	IntProperty TotalUseTime; // Offset: 0x38 // Size: 0x04
	IntProperty TotalOwnTime; // Offset: 0x3c // Size: 0x04
	IntProperty KillCount; // Offset: 0x40 // Size: 0x04
	IntProperty KnockNumber; // Offset: 0x44 // Size: 0x04
	struct TArray<IntProperty> Associations; // Offset: 0x48 // Size: 0x10
	IntProperty AvatarID; // Offset: 0x58 // Size: 0x04
	IntProperty DIYPlanID; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ReportCollection
// Size: 0x08 // Inherited bytes: 0x00
struct FReportCollection {
	// Fields
	IntProperty item_id; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.EquipmentData
// Size: 0x70 // Inherited bytes: 0x00
struct FEquipmentData {
	// Fields
	IntProperty HelmetID; // Offset: 0x00 // Size: 0x04
	IntProperty ArmorID; // Offset: 0x04 // Size: 0x04
	IntProperty BackPackID; // Offset: 0x08 // Size: 0x04
	IntProperty MainWeapon1ID; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> MainWeapon1AttachmentsID; // Offset: 0x10 // Size: 0x10
	IntProperty MainWeapon2ID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<IntProperty> MainWeapon2AttachmentsID; // Offset: 0x28 // Size: 0x10
	IntProperty ViceWeaponID; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<IntProperty> ViceWeaponAttachmentsID; // Offset: 0x40 // Size: 0x10
	IntProperty CloseWeaponID; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<IntProperty> ThrowWeaponsID; // Offset: 0x58 // Size: 0x10
	uint8_t IsLuckyClothing; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.GameModeTeammateLableCheckData
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModeTeammateLableCheckData {
	// Fields
	uint32_t Mask; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	uint64 UID; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GameModeLikeResultData
// Size: 0x18 // Inherited bytes: 0x00
struct FGameModeLikeResultData {
	// Fields
	struct TArray<uint32_t> Like; // Offset: 0x00 // Size: 0x10
	uint64 UID; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GameModeTeammateBattleResultData
// Size: 0x1c8 // Inherited bytes: 0x00
struct FGameModeTeammateBattleResultData {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	uint64 UID; // Offset: 0x10 // Size: 0x08
	IntProperty Kill; // Offset: 0x18 // Size: 0x04
	IntProperty AIKills; // Offset: 0x1c // Size: 0x04
	StrProperty State; // Offset: 0x20 // Size: 0x10
	float travelDistance; // Offset: 0x30 // Size: 0x04
	float marchDistance; // Offset: 0x34 // Size: 0x04
	float DriveDistance; // Offset: 0x38 // Size: 0x04
	float MonsterCatchupDistance; // Offset: 0x3c // Size: 0x04
	float DamageAmount; // Offset: 0x40 // Size: 0x04
	float RealPlayerDamageAmount; // Offset: 0x44 // Size: 0x04
	float HealAmount; // Offset: 0x48 // Size: 0x04
	IntProperty AssistNum; // Offset: 0x4c // Size: 0x04
	struct TArray<uint64> AssistTeammatesList; // Offset: 0x50 // Size: 0x10
	IntProperty HeadShotNum; // Offset: 0x60 // Size: 0x04
	IntProperty HeadShotNumNoAI; // Offset: 0x64 // Size: 0x04
	float surviveTime; // Offset: 0x68 // Size: 0x04
	float surviveTimeFromPlane; // Offset: 0x6c // Size: 0x04
	IntProperty rescueTimes; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<uint64> RescueTeammatesList; // Offset: 0x78 // Size: 0x10
	IntProperty DestroyVehicles; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct TArray<StrProperty> KillFlow; // Offset: 0x90 // Size: 0x10
	struct TArray<StrProperty> KnockOutFlow; // Offset: 0xa0 // Size: 0x10
	float OutsideBlueCircleTime; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct TArray<struct FVehicleDriveDisData> VehicleDriveDisDataArray; // Offset: 0xb8 // Size: 0x10
	IntProperty FirstOpenedAirDropBoxNum; // Offset: 0xc8 // Size: 0x04
	float HitEnemyHeadAmount; // Offset: 0xcc // Size: 0x04
	float TotalBeenDamageAmount; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct TArray<struct FPlayEmoteData> FPlayEmoteDataArray; // Offset: 0xd8 // Size: 0x10
	IntProperty FirstOpenedPlayerTombBoxNum; // Offset: 0xe8 // Size: 0x04
	float InDamageAmount; // Offset: 0xec // Size: 0x04
	IntProperty ProneTimes; // Offset: 0xf0 // Size: 0x04
	IntProperty CrouchTimes; // Offset: 0xf4 // Size: 0x04
	IntProperty JumpTimes; // Offset: 0xf8 // Size: 0x04
	IntProperty KillMonsterNum; // Offset: 0xfc // Size: 0x04
	MapProperty MonsterID2KillNum; // Offset: 0x100 // Size: 0x50
	IntProperty LightCandleNum; // Offset: 0x150 // Size: 0x04
	char pad_0x154[0x4]; // Offset: 0x154 // Size: 0x04
	MapProperty ActivityButtonCount; // Offset: 0x158 // Size: 0x50
	float TotalDamageAmountToMonsters; // Offset: 0x1a8 // Size: 0x04
	float TotalDamageAmountFromMonsters; // Offset: 0x1ac // Size: 0x04
	IntProperty MonsterHeadShotKilledTimes; // Offset: 0x1b0 // Size: 0x04
	IntProperty BeMonsterDownTimes; // Offset: 0x1b4 // Size: 0x04
	bool bIsGameTerminator; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x3]; // Offset: 0x1b9 // Size: 0x03
	IntProperty mainWeaponID; // Offset: 0x1bc // Size: 0x04
	float MaxWeaponAccurate; // Offset: 0x1c0 // Size: 0x04
	float MaxWeaponHeadShotRate; // Offset: 0x1c4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayEmoteData
// Size: 0x08 // Inherited bytes: 0x00
struct FPlayEmoteData {
	// Fields
	IntProperty EmoteIndex; // Offset: 0x00 // Size: 0x04
	IntProperty AreaID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.TLog_KillInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FTLog_KillInfo {
	// Fields
	IntProperty FakePlayerID; // Offset: 0x00 // Size: 0x04
	IntProperty DeadTime; // Offset: 0x04 // Size: 0x04
	IntProperty AILastFightTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> PlayerAreas; // Offset: 0x10 // Size: 0x10
	IntProperty ArmorID; // Offset: 0x20 // Size: 0x04
	IntProperty HelmetID; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DestroyVehicleWheelFlow
// Size: 0x08 // Inherited bytes: 0x00
struct FDestroyVehicleWheelFlow {
	// Fields
	IntProperty AreaID; // Offset: 0x00 // Size: 0x04
	IntProperty UseCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.BuildingEnterFlow
// Size: 0x58 // Inherited bytes: 0x00
struct FBuildingEnterFlow {
	// Fields
	IntProperty BuildingID; // Offset: 0x00 // Size: 0x04
	IntProperty EnterCount; // Offset: 0x04 // Size: 0x04
	MapProperty AreaCountMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.UseBuffFlow
// Size: 0x58 // Inherited bytes: 0x00
struct FUseBuffFlow {
	// Fields
	IntProperty BuffID; // Offset: 0x00 // Size: 0x04
	IntProperty UseCount; // Offset: 0x04 // Size: 0x04
	MapProperty AreaCountMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.UseItemFlow
// Size: 0x58 // Inherited bytes: 0x00
struct FUseItemFlow {
	// Fields
	IntProperty ItemSpesificID; // Offset: 0x00 // Size: 0x04
	IntProperty UseCount; // Offset: 0x04 // Size: 0x04
	MapProperty AreaCountMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.TLog_BornLandGrenadeData
// Size: 0x10 // Inherited bytes: 0x00
struct FTLog_BornLandGrenadeData {
	// Fields
	IntProperty PickupCount; // Offset: 0x00 // Size: 0x04
	IntProperty ThrowCount; // Offset: 0x04 // Size: 0x04
	IntProperty HitOthersCount; // Offset: 0x08 // Size: 0x04
	IntProperty HitedByOthersCount; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.TLog_PickUpItemFlow
// Size: 0x40 // Inherited bytes: 0x00
struct FTLog_PickUpItemFlow {
	// Fields
	IntProperty ItemSpesificID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	struct FVector Location; // Offset: 0x08 // Size: 0x0c
	IntProperty SourceType; // Offset: 0x14 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty TimeStr; // Offset: 0x20 // Size: 0x10
	uint64 InstanceID; // Offset: 0x30 // Size: 0x08
	uint64 OwnerUID; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GameModePlayerBattleResultData_SuperCold
// Size: 0x38 // Inherited bytes: 0x00
struct FGameModePlayerBattleResultData_SuperCold {
	// Fields
	IntProperty MakeFiresNum; // Offset: 0x00 // Size: 0x04
	IntProperty DeerBBQNum; // Offset: 0x04 // Size: 0x04
	IntProperty ChichenBBQNum; // Offset: 0x08 // Size: 0x04
	IntProperty UseKFNum; // Offset: 0x0c // Size: 0x04
	IntProperty UseUAVNum; // Offset: 0x10 // Size: 0x04
	IntProperty KFUsingTime; // Offset: 0x14 // Size: 0x04
	IntProperty UAVUsingTime; // Offset: 0x18 // Size: 0x04
	IntProperty SkateboardUsingCount; // Offset: 0x1c // Size: 0x04
	IntProperty SkateboardUsingTime; // Offset: 0x20 // Size: 0x04
	IntProperty SkateboardUsingDistance; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FKillAnimalData> AnimalKillFlow; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.KillAnimalData
// Size: 0x08 // Inherited bytes: 0x00
struct FKillAnimalData {
	// Fields
	char AnimalType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty KillNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.OnePlayerWeapon
// Size: 0x20 // Inherited bytes: 0x00
struct FOnePlayerWeapon {
	// Fields
	StrProperty PlayerID; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FWeaponReport> Weapons; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.WeaponReport
// Size: 0x68 // Inherited bytes: 0x00
struct FWeaponReport {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	IntProperty FireCount; // Offset: 0x04 // Size: 0x04
	IntProperty AdsFireCount; // Offset: 0x08 // Size: 0x04
	IntProperty HitCount; // Offset: 0x0c // Size: 0x04
	IntProperty UniqueHitCount; // Offset: 0x10 // Size: 0x04
	IntProperty KillCount; // Offset: 0x14 // Size: 0x04
	float TotalDamage; // Offset: 0x18 // Size: 0x04
	float TotalMonsterDamage; // Offset: 0x1c // Size: 0x04
	float TotalRealPlayerDamage; // Offset: 0x20 // Size: 0x04
	float TotalNormalAIDamage; // Offset: 0x24 // Size: 0x04
	float TotalMLAIDamage; // Offset: 0x28 // Size: 0x04
	IntProperty TotalOwnTime; // Offset: 0x2c // Size: 0x04
	IntProperty TotalUseTime; // Offset: 0x30 // Size: 0x04
	IntProperty KnockDownCount; // Offset: 0x34 // Size: 0x04
	IntProperty HeadShootCount; // Offset: 0x38 // Size: 0x04
	IntProperty KillAICount; // Offset: 0x3c // Size: 0x04
	IntProperty KnockDownAICount; // Offset: 0x40 // Size: 0x04
	IntProperty HeadShootAICount; // Offset: 0x44 // Size: 0x04
	IntProperty HitAICount; // Offset: 0x48 // Size: 0x04
	IntProperty UniqueHitAICount; // Offset: 0x4c // Size: 0x04
	IntProperty UseCount; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FHitFlow> HitFlow; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HitFlow
// Size: 0x38 // Inherited bytes: 0x00
struct FHitFlow {
	// Fields
	IntProperty AimType; // Offset: 0x00 // Size: 0x04
	IntProperty Distance; // Offset: 0x04 // Size: 0x04
	IntProperty IsKill; // Offset: 0x08 // Size: 0x04
	float Damage; // Offset: 0x0c // Size: 0x04
	bool bFallOnGround; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct TArray<char> PlayerStates; // Offset: 0x18 // Size: 0x10
	char HitPos; // Offset: 0x28 // Size: 0x01
	bool IsAI; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x2]; // Offset: 0x2a // Size: 0x02
	uint32_t HitPlayerKey; // Offset: 0x2c // Size: 0x04
	IntProperty TimeStamp; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameBaseInfo
// Size: 0x90 // Inherited bytes: 0x00
struct FGameBaseInfo {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	StrProperty GameAppID; // Offset: 0x10 // Size: 0x10
	StrProperty OpenID; // Offset: 0x20 // Size: 0x10
	uint16_t AreaID; // Offset: 0x30 // Size: 0x02
	uint8_t PlatID; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x5]; // Offset: 0x33 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x38 // Size: 0x10
	uint64 BattleID; // Offset: 0x48 // Size: 0x08
	StrProperty UserName; // Offset: 0x50 // Size: 0x10
	uint64 RoleID; // Offset: 0x60 // Size: 0x08
	uint8_t RoleType; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
	StrProperty PicUrl; // Offset: 0x70 // Size: 0x10
	StrProperty GameAPPIDFromDS; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DamageInfo
// Size: 0xb8 // Inherited bytes: 0x00
struct FDamageInfo {
	// Fields
	uint32_t DamageType; // Offset: 0x00 // Size: 0x04
	bool bIsHeadShot; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float Distance; // Offset: 0x08 // Size: 0x04
	uint32_t Time; // Offset: 0x0c // Size: 0x04
	uint32_t DamageValue; // Offset: 0x10 // Size: 0x04
	uint32_t AttackerID; // Offset: 0x14 // Size: 0x04
	struct FVector AttackerLoc; // Offset: 0x18 // Size: 0x0c
	uint32_t AttackerBulletNumInClip; // Offset: 0x24 // Size: 0x04
	uint32_t AttackerSightType; // Offset: 0x28 // Size: 0x04
	uint32_t AttackerWeaponType; // Offset: 0x2c // Size: 0x04
	uint32_t AttackerWeaponScopeID; // Offset: 0x30 // Size: 0x04
	uint32_t AttackerShotTimes; // Offset: 0x34 // Size: 0x04
	uint64 AttackerState; // Offset: 0x38 // Size: 0x08
	struct TArray<char> AttackerStateArray; // Offset: 0x40 // Size: 0x10
	bool bAttackerMoving; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	uint64 VictimID; // Offset: 0x58 // Size: 0x08
	uint32_t VictimType; // Offset: 0x60 // Size: 0x04
	uint32_t VictimDeliveryType; // Offset: 0x64 // Size: 0x04
	IntProperty CircleIndex; // Offset: 0x68 // Size: 0x04
	struct FVector VictimLoc; // Offset: 0x6c // Size: 0x0c
	uint32_t VictimState; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct TArray<char> VictimStateArray; // Offset: 0x80 // Size: 0x10
	bool bVictimInWater; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	IntProperty VictimVehicleType; // Offset: 0x94 // Size: 0x04
	float VictimVelocity; // Offset: 0x98 // Size: 0x04
	uint32_t AttackerAreaID; // Offset: 0x9c // Size: 0x04
	uint32_t AlivePlayerNum; // Offset: 0xa0 // Size: 0x04
	uint32_t VictimTeamID; // Offset: 0xa4 // Size: 0x04
	IntProperty FloorType; // Offset: 0xa8 // Size: 0x04
	uint32_t AttackerWeaponAvatarID; // Offset: 0xac // Size: 0x04
	uint32_t AttackerVehicleShapeType; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ActivityEventReportData
// Size: 0x14 // Inherited bytes: 0x00
struct FActivityEventReportData {
	// Fields
	char EventID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	struct FVector Location; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.SpecialPickItemState
// Size: 0x08 // Inherited bytes: 0x00
struct FSpecialPickItemState {
	// Fields
	IntProperty item_id; // Offset: 0x00 // Size: 0x04
	bool bIsCollectionCompleted; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.TLog_PropEquipUnequipFlow
// Size: 0x18 // Inherited bytes: 0x00
struct FTLog_PropEquipUnequipFlow {
	// Fields
	IntProperty ItemSpesificID; // Offset: 0x00 // Size: 0x04
	enum class ETLog_BackpackEquipmentSlotType SlotType; // Offset: 0x04 // Size: 0x01
	bool bEquip; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	StrProperty TimeStr; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AIDeliveryTlogData
// Size: 0x58 // Inherited bytes: 0x00
struct FAIDeliveryTlogData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	MapProperty DeliveryMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.AIDeliveryInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FAIDeliveryInfo {
	// Fields
	IntProperty DeliveryStartTime; // Offset: 0x00 // Size: 0x04
	bool bSuccess; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty DeliveryArrivalTime; // Offset: 0x08 // Size: 0x04
	IntProperty EventTypeId; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.BuildMaterialData
// Size: 0x08 // Inherited bytes: 0x00
struct FBuildMaterialData {
	// Fields
	IntProperty MatID; // Offset: 0x00 // Size: 0x04
	IntProperty MatCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.MonsterTreasureBoxData
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterTreasureBoxData {
	// Fields
	float BoxStartTime; // Offset: 0x00 // Size: 0x04
	struct FVector BoxLocation; // Offset: 0x04 // Size: 0x0c
	uint64 BoxStartPlayer; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.PlayerBaseInfoInOB
// Size: 0x24 // Inherited bytes: 0x00
struct FPlayerBaseInfoInOB {
	// Fields
	struct FVector_NetQuantize Location; // Offset: 0x00 // Size: 0x0c
	IntProperty Health; // Offset: 0x0c // Size: 0x04
	IntProperty HealthMax; // Offset: 0x10 // Size: 0x04
	IntProperty LiveState; // Offset: 0x14 // Size: 0x04
	IntProperty KillNum; // Offset: 0x18 // Size: 0x04
	IntProperty KillNumBeforeDie; // Offset: 0x1c // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerStaticInfoInOB
// Size: 0x58 // Inherited bytes: 0x00
struct FPlayerStaticInfoInOB {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
	StrProperty PlayerOpenID; // Offset: 0x20 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x30 // Size: 0x10
	IntProperty TeamID; // Offset: 0x40 // Size: 0x04
	char IndexInMap; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	uint64 UID; // Offset: 0x48 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AllStarReportData
// Size: 0x08 // Inherited bytes: 0x00
struct FAllStarReportData {
	// Fields
	bool bShowReportFlag; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty BeReportedNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DailyTaskReportInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FDailyTaskReportInfo {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	uint32_t TaskSyncToDsTs; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FDailyTaskStoreInfo> TaskInfo; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FDailyTaskAwardInfo> RewardInfo; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DailyTaskAwardInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FDailyTaskAwardInfo {
	// Fields
	IntProperty TaskID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FTaskAwardItemInfo> AwardList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.TaskAwardItemInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FTaskAwardItemInfo {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ItemNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerInfoInOB
// Size: 0xa0 // Inherited bytes: 0x24
struct FPlayerInfoInOB : FPlayerBaseInfoInOB {
	// Fields
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	uint64 UID; // Offset: 0x28 // Size: 0x08
	StrProperty PlayerName; // Offset: 0x30 // Size: 0x10
	StrProperty PlayerOpenID; // Offset: 0x40 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x50 // Size: 0x10
	bool ShowPicUrl; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
	IntProperty TeamID; // Offset: 0x64 // Size: 0x04
	StrProperty TeamName; // Offset: 0x68 // Size: 0x10
	struct TWeakObjectPtr<struct APawn> Character; // Offset: 0x78 // Size: 0x08
	bool IsFiring; // Offset: 0x80 // Size: 0x01
	bool bHasDied; // Offset: 0x81 // Size: 0x01
	char pad_0x82[0x1e]; // Offset: 0x82 // Size: 0x1e
};

// Object Name: ScriptStruct Gameplay.ParachuteData
// Size: 0x90 // Inherited bytes: 0x00
struct FParachuteData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	float SlideDuration; // Offset: 0x08 // Size: 0x04
	char FollowState; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FVector ClientLandLocation; // Offset: 0x10 // Size: 0x0c
	struct FVector ClientLocation; // Offset: 0x1c // Size: 0x0c
	struct FVector ServerLandLocation; // Offset: 0x28 // Size: 0x0c
	float SlideStartTime; // Offset: 0x34 // Size: 0x04
	float SlideEndTime; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty InputCount; // Offset: 0x40 // Size: 0x10
	StrProperty PositionCheck; // Offset: 0x50 // Size: 0x10
	StrProperty ClientPositionDiff; // Offset: 0x60 // Size: 0x10
	float LastCorrectionTime; // Offset: 0x70 // Size: 0x04
	float LastCorrectionHeight; // Offset: 0x74 // Size: 0x04
	struct FVector LastCorrectionLocation; // Offset: 0x78 // Size: 0x0c
	struct FVector LastCorrectedLocation; // Offset: 0x84 // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.PlayerPositionFlow
// Size: 0x48 // Inherited bytes: 0x00
struct FPlayerPositionFlow {
	// Fields
	struct FPlayBaseInfo PlayerBaseInfo; // Offset: 0x00 // Size: 0x30
	IntProperty FirstPointTimestamp; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<struct FIntPosition2D> PointList; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.IntPosition2D
// Size: 0x08 // Inherited bytes: 0x00
struct FIntPosition2D {
	// Fields
	IntProperty X; // Offset: 0x00 // Size: 0x04
	IntProperty Y; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayBaseInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FPlayBaseInfo {
	// Fields
	uint64 RoleID; // Offset: 0x00 // Size: 0x08
	StrProperty OpenID; // Offset: 0x08 // Size: 0x10
	uint8_t PlatID; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x1]; // Offset: 0x19 // Size: 0x01
	uint16_t AreaID; // Offset: 0x1a // Size: 0x02
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty ZoneID; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleMoveFlow
// Size: 0x40 // Inherited bytes: 0x00
struct FVehicleMoveFlow {
	// Fields
	uint64 RoleID; // Offset: 0x00 // Size: 0x08
	StrProperty OpenID; // Offset: 0x08 // Size: 0x10
	uint8_t PlatID; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x1]; // Offset: 0x19 // Size: 0x01
	uint16_t AreaID; // Offset: 0x1a // Size: 0x02
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty ZoneID; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FVehicleMovePoint> PointList; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleMovePoint
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleMovePoint {
	// Fields
	uint32_t UniqueId; // Offset: 0x00 // Size: 0x04
	uint8_t Type; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty X; // Offset: 0x08 // Size: 0x04
	IntProperty Y; // Offset: 0x0c // Size: 0x04
	IntProperty Z; // Offset: 0x10 // Size: 0x04
	IntProperty Speed; // Offset: 0x14 // Size: 0x04
	uint8_t VehicleN2oUse; // Offset: 0x18 // Size: 0x01
	uint8_t VehicleCarPetUse; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	IntProperty VehicleMoveDistance; // Offset: 0x1c // Size: 0x04
	IntProperty TimeStamp; // Offset: 0x20 // Size: 0x04
	uint8_t RoleType; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.UAEWindowRepData
// Size: 0x50 // Inherited bytes: 0x00
struct FUAEWindowRepData {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	StrProperty PathToLoad; // Offset: 0x30 // Size: 0x10
	IntProperty ID; // Offset: 0x40 // Size: 0x04
	bool bBroken; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	struct APawn* LastInstigatorPawn; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.OBPlayerWeaponRecord
// Size: 0x18 // Inherited bytes: 0x00
struct FOBPlayerWeaponRecord {
	// Fields
	uint64 OBPlayerWeaponRecord_UID; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FOBSingleWeaponRecord> WeaponReport; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.OBSingleWeaponRecord
// Size: 0x10 // Inherited bytes: 0x00
struct FOBSingleWeaponRecord {
	// Fields
	IntProperty OBSingleWeaponRecord_WeaponID; // Offset: 0x00 // Size: 0x04
	float TotalDamage; // Offset: 0x04 // Size: 0x04
	IntProperty KillCount; // Offset: 0x08 // Size: 0x04
	IntProperty KnockDownCount; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AIPlayerInfoInOB
// Size: 0x20 // Inherited bytes: 0x00
struct FAIPlayerInfoInOB {
	// Fields
	StrProperty PlayerKey; // Offset: 0x00 // Size: 0x10
	IntProperty TeamID; // Offset: 0x10 // Size: 0x04
	struct TWeakObjectPtr<struct APawn> Character; // Offset: 0x14 // Size: 0x08
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.FriendObserver
// Size: 0x18 // Inherited bytes: 0x00
struct FFriendObserver {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	char Gender; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.DIYMergedTexData
// Size: 0x48 // Inherited bytes: 0x00
struct FDIYMergedTexData {
	// Fields
	struct TArray<struct FDIYOneTexData> TextureList; // Offset: 0x00 // Size: 0x10
	IntProperty TexPathID; // Offset: 0x10 // Size: 0x04
	struct FDIYParamData DIYParam; // Offset: 0x14 // Size: 0x30
	IntProperty SlotID; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DIYParamData
// Size: 0x30 // Inherited bytes: 0x00
struct FDIYParamData {
	// Fields
	IntProperty Direction; // Offset: 0x00 // Size: 0x04
	IntProperty ColorID; // Offset: 0x04 // Size: 0x04
	float Opacity; // Offset: 0x08 // Size: 0x04
	float Rotation; // Offset: 0x0c // Size: 0x04
	float ScaleX; // Offset: 0x10 // Size: 0x04
	float ScaleY; // Offset: 0x14 // Size: 0x04
	float OffSetX; // Offset: 0x18 // Size: 0x04
	float OffSetY; // Offset: 0x1c // Size: 0x04
	float UClipX; // Offset: 0x20 // Size: 0x04
	float UClipY; // Offset: 0x24 // Size: 0x04
	float VClipX; // Offset: 0x28 // Size: 0x04
	float VClipY; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DIYOneTexData
// Size: 0x34 // Inherited bytes: 0x00
struct FDIYOneTexData {
	// Fields
	IntProperty TexPathID; // Offset: 0x00 // Size: 0x04
	struct FDIYParamData DIYParam; // Offset: 0x04 // Size: 0x30
};

// Object Name: ScriptStruct Gameplay.ResponResult
// Size: 0x01 // Inherited bytes: 0x00
struct FResponResult {
	// Fields
	bool bResponed; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Gameplay.WeaponDIYData
// Size: 0x50 // Inherited bytes: 0x01
struct FWeaponDIYData : FResponResult {
	// Fields
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty WeaponId; // Offset: 0x04 // Size: 0x04
	IntProperty PlanID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FDIYMergedTexData> DIYData; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> MatParam; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> MirroParam; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> SlotMatParam; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleMoveDragData
// Size: 0x20 // Inherited bytes: 0x00
struct FVehicleMoveDragData {
	// Fields
	struct TArray<struct FVehicleMoveDrag> MoveDrag; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVehicleMoveDrag> SimulatedMoveDrag; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleMoveDrag
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleMoveDrag {
	// Fields
	IntProperty Minute; // Offset: 0x00 // Size: 0x04
	char VehicleType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct TArray<char> Reasons; // Offset: 0x08 // Size: 0x10
	struct TArray<IntProperty> Counters; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HisarData
// Size: 0x38 // Inherited bytes: 0x00
struct FHisarData {
	// Fields
	struct FAppInstallData AppInstallData; // Offset: 0x00 // Size: 0x28
	StrProperty DeviceID; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AppInstallData
// Size: 0x28 // Inherited bytes: 0x00
struct FAppInstallData {
	// Fields
	int64_t FirstInstallTime; // Offset: 0x00 // Size: 0x08
	struct FGuid Guid; // Offset: 0x08 // Size: 0x10
	StrProperty GuidStr; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HitFireBtnFlow
// Size: 0x80 // Inherited bytes: 0x00
struct FHitFireBtnFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	uint64 BattleID; // Offset: 0x40 // Size: 0x08
	uint64 UID; // Offset: 0x48 // Size: 0x08
	IntProperty MapID; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty ClientVersion; // Offset: 0x58 // Size: 0x10
	IntProperty MatchMode; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<struct FHitFireBtnSampleCluster> HitFireBtnSampleClusterArray; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HitFireBtnSampleCluster
// Size: 0x18 // Inherited bytes: 0x00
struct FHitFireBtnSampleCluster {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FHitFireBtnSample> HitFireBtnSampleArray; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HitFireBtnSample
// Size: 0x18 // Inherited bytes: 0x00
struct FHitFireBtnSample {
	// Fields
	float LocX; // Offset: 0x00 // Size: 0x04
	float LocY; // Offset: 0x04 // Size: 0x04
	uint64 StartFrame; // Offset: 0x08 // Size: 0x08
	uint64 EndFrame; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.AntiDataFlow
// Size: 0x88 // Inherited bytes: 0x00
struct FAntiDataFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	uint64 BattleID; // Offset: 0x40 // Size: 0x08
	uint64 UID; // Offset: 0x48 // Size: 0x08
	StrProperty ClientVersion; // Offset: 0x50 // Size: 0x10
	IntProperty MatchMode; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	StrProperty FlowDataStr; // Offset: 0x68 // Size: 0x10
	StrProperty FlowDataStr2; // Offset: 0x78 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.BattleResultData
// Size: 0x88 // Inherited bytes: 0x00
struct FBattleResultData {
	// Fields
	StrProperty Reason; // Offset: 0x00 // Size: 0x10
	uint32_t RemainingPlayerCount; // Offset: 0x10 // Size: 0x04
	uint32_t TotalPlayerCount; // Offset: 0x14 // Size: 0x04
	uint32_t RemainingTeamCount; // Offset: 0x18 // Size: 0x04
	uint32_t TotalTeamCount; // Offset: 0x1c // Size: 0x04
	bool IsSolo; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	uint32_t ShootWeaponShotNum; // Offset: 0x24 // Size: 0x04
	uint32_t ShootWeaponShotAndHitPlayerNum; // Offset: 0x28 // Size: 0x04
	uint32_t HealTimes; // Offset: 0x2c // Size: 0x04
	float marchDistance; // Offset: 0x30 // Size: 0x04
	float DriveDistance; // Offset: 0x34 // Size: 0x04
	uint32_t destroyVehicleNum; // Offset: 0x38 // Size: 0x04
	uint32_t add_exp; // Offset: 0x3c // Size: 0x04
	uint32_t add_gold; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	uint64 battle_id; // Offset: 0x48 // Size: 0x08
	uint32_t max_game_num; // Offset: 0x50 // Size: 0x04
	uint32_t person_rank; // Offset: 0x54 // Size: 0x04
	uint32_t team_rank; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct TArray<struct FMemBTResultData> BP_ARRAY_TeammateList; // Offset: 0x60 // Size: 0x10
	struct FResultRatingData BP_STRUCT_BTRating; // Offset: 0x70 // Size: 0x18
};

// Object Name: ScriptStruct Gameplay.ResultRatingData
// Size: 0x18 // Inherited bytes: 0x00
struct FResultRatingData {
	// Fields
	IntProperty rank_rating; // Offset: 0x00 // Size: 0x04
	IntProperty kill_rating; // Offset: 0x04 // Size: 0x04
	IntProperty win_rating; // Offset: 0x08 // Size: 0x04
	IntProperty change_rank_rating; // Offset: 0x0c // Size: 0x04
	IntProperty change_kill_rating; // Offset: 0x10 // Size: 0x04
	IntProperty change_win_rating; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.MemBTResultData
// Size: 0x58 // Inherited bytes: 0x00
struct FMemBTResultData {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	uint32_t Kill; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty State; // Offset: 0x18 // Size: 0x10
	float travelDistance; // Offset: 0x28 // Size: 0x04
	float DamageAmount; // Offset: 0x2c // Size: 0x04
	float surviveTime; // Offset: 0x30 // Size: 0x04
	uint32_t AssistNum; // Offset: 0x34 // Size: 0x04
	uint32_t HeadShotNum; // Offset: 0x38 // Size: 0x04
	uint32_t rescueTimes; // Offset: 0x3c // Size: 0x04
	float HealAmount; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	uint64 UID; // Offset: 0x48 // Size: 0x08
	uint8_t ShouldShowAddFriendBtn; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.DIYVehicleParamData
// Size: 0x28 // Inherited bytes: 0x00
struct FDIYVehicleParamData {
	// Fields
	IntProperty TexPathID; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FVector Normal; // Offset: 0x10 // Size: 0x0c
	float Rotation; // Offset: 0x1c // Size: 0x04
	float Scale; // Offset: 0x20 // Size: 0x04
	bool Mirror; // Offset: 0x24 // Size: 0x01
	bool bEnableDepthCompare; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
};

// Object Name: ScriptStruct Gameplay.VehCharAnimData
// Size: 0x40 // Inherited bytes: 0x00
struct FVehCharAnimData {
	// Fields
	enum class ECharacterVehicleAnimType VehAnimType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimationAsset* VehAnimSoftPtr; // Offset: 0x08 // Size: 0x28
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.LobbyCharacterWeaponAnimData
// Size: 0x28 // Inherited bytes: 0x00
struct FLobbyCharacterWeaponAnimData {
	// Fields
	enum class ELobbyCharacterPosIndex PosIndex; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty CharPosName; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FLobbyCharacterGenderWeaponAnimData> GenderWeaponAnimList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.LobbyCharacterGenderWeaponAnimData
// Size: 0x78 // Inherited bytes: 0x00
struct FLobbyCharacterGenderWeaponAnimData {
	// Fields
	enum class ELobbyCharacterAnimType GenderType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty GenderTypeName; // Offset: 0x08 // Size: 0x10
	struct UAnimationAsset* WeaponAnimSoftPtr; // Offset: 0x18 // Size: 0x28
	struct UAnimationAsset* WeaponAddAnimSoftPtr; // Offset: 0x40 // Size: 0x28
	struct TArray<struct UAnimationAsset*> WeaponPlayAnimSoftPtrArray; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GridGeneratorSpawnData
// Size: 0x10 // Inherited bytes: 0x00
struct FGridGeneratorSpawnData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	IntProperty UniqueId; // Offset: 0x08 // Size: 0x04
	enum class ERegionSizeIndex RegionSize; // Offset: 0x0c // Size: 0x01
	bool bBeforeFighting; // Offset: 0x0d // Size: 0x01
	bool bDontTrigger; // Offset: 0x0e // Size: 0x01
	char pad_0xF[0x1]; // Offset: 0x0f // Size: 0x01
};

// Object Name: ScriptStruct Gameplay.SpotGroupProperty
// Size: 0x28 // Inherited bytes: 0x00
struct FSpotGroupProperty {
	// Fields
	enum class ESpotGroupType SpotGroupType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SpotGroupPercent; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FSpotTypeProperty> SpotTypeProperties; // Offset: 0x08 // Size: 0x10
	bool bRepeatGenerateItem; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float RepeatGenerateItemCDMin; // Offset: 0x1c // Size: 0x04
	float RepeatGenerateItemCDMax; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.SpotTypeProperty
// Size: 0x38 // Inherited bytes: 0x00
struct FSpotTypeProperty {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SpotPercentMin; // Offset: 0x04 // Size: 0x04
	IntProperty SpotPercentMax; // Offset: 0x08 // Size: 0x04
	IntProperty SpotPercentDot; // Offset: 0x0c // Size: 0x04
	IntProperty ItemPerSpotMin; // Offset: 0x10 // Size: 0x04
	IntProperty ItemPerSpotMax; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FSpotWeight> WeightsPerValue; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FSpotWeight> WeightsPerCategory; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.SpotWeight
// Size: 0x18 // Inherited bytes: 0x00
struct FSpotWeight {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	IntProperty Weight; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ItemGenerateSpawnData
// Size: 0x68 // Inherited bytes: 0x00
struct FItemGenerateSpawnData {
	// Fields
	IntProperty KeyID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ItemValue; // Offset: 0x08 // Size: 0x10
	StrProperty ItemCategory; // Offset: 0x18 // Size: 0x10
	IntProperty ItemWeight; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty ItemPath; // Offset: 0x30 // Size: 0x10
	IntProperty ItemStackCount; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty ItemTogetherPath; // Offset: 0x48 // Size: 0x10
	IntProperty ItemTogetherStackCount; // Offset: 0x58 // Size: 0x04
	IntProperty ItemTogetherCountMin; // Offset: 0x5c // Size: 0x04
	IntProperty ItemTogetherCountMax; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AIStrategyInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FAIStrategyInfo {
	// Fields
	int64_t TS; // Offset: 0x00 // Size: 0x08
	uint8_t circle; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	uint64 BattleID; // Offset: 0x10 // Size: 0x08
	IntProperty MapID; // Offset: 0x18 // Size: 0x04
	IntProperty rai; // Offset: 0x1c // Size: 0x04
	IntProperty fai; // Offset: 0x20 // Size: 0x04
	IntProperty Zone; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FAIstrategyPlayerTeam> Teams; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AIstrategyPlayerTeam
// Size: 0x20 // Inherited bytes: 0x00
struct FAIstrategyPlayerTeam {
	// Fields
	struct TArray<struct FAIstrategyPlayerInfo> teamMember; // Offset: 0x00 // Size: 0x10
	struct TArray<StrProperty> countries; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AIstrategyPlayerInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FAIstrategyPlayerInfo {
	// Fields
	struct TArray<uint64> PlayerInfo; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.SpecialPickInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FSpecialPickInfo {
	// Fields
	IntProperty item_id; // Offset: 0x00 // Size: 0x04
	IntProperty cur_count; // Offset: 0x04 // Size: 0x04
	IntProperty total_count; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.IncNetArray
// Size: 0x20 // Inherited bytes: 0x00
struct FIncNetArray {
	// Fields
	struct TArray<struct FNetArrayUnit> IncArray; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.NetArrayUnit
// Size: 0x50 // Inherited bytes: 0x00
struct FNetArrayUnit {
	// Fields
	struct FBattleItemNet Unit; // Offset: 0x00 // Size: 0x48
	bool bMarkDelete; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.BattleItemNet
// Size: 0x48 // Inherited bytes: 0x00
struct FBattleItemNet {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	IntProperty Count; // Offset: 0x18 // Size: 0x04
	bool bEquipping; // Offset: 0x1c // Size: 0x01
	enum class EItemStoreArea ItemStoreArea; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FItemAssociation> Associations; // Offset: 0x30 // Size: 0x10
	IntProperty Durability; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.WorldTileSpotArray
// Size: 0x18 // Inherited bytes: 0x00
struct FWorldTileSpotArray {
	// Fields
	IntProperty WorldCompositionID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct USpotSceneComponent*> AllSpotComponents; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GroupSpotComponentArray
// Size: 0x18 // Inherited bytes: 0x00
struct FGroupSpotComponentArray {
	// Fields
	enum class ESpotGroupType GroupType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UGroupSpotSceneComponent*> AllGroupComponents; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerAvatarData
// Size: 0x18 // Inherited bytes: 0x01
struct FPlayerAvatarData : FResponResult {
	// Fields
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FAvatarBackpack> AvatarBackpackData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AvatarBackpack
// Size: 0x20 // Inherited bytes: 0x00
struct FAvatarBackpack {
	// Fields
	struct TArray<IntProperty> WeaponAvatarList; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> VehicleAvatarList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerInfoData
// Size: 0xe8 // Inherited bytes: 0x01
struct FPlayerInfoData : FResponResult {
	// Fields
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty PlayerType; // Offset: 0x08 // Size: 0x10
	StrProperty PlayerName; // Offset: 0x18 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x28 // Size: 0x04
	bool bIsGM; // Offset: 0x2c // Size: 0x01
	char PlayerGender; // Offset: 0x2d // Size: 0x01
	char pad_0x2E[0x2]; // Offset: 0x2e // Size: 0x02
	IntProperty TeamID; // Offset: 0x30 // Size: 0x04
	bool UsePlayerInfoTeamID; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	int64_t Campid; // Offset: 0x38 // Size: 0x08
	IntProperty PlayerBornPointID; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<struct FGameModePlayerItem> ItemList; // Offset: 0x48 // Size: 0x10
	struct TArray<struct FGameModePlayerExpressionItem> ExpressionItemList; // Offset: 0x58 // Size: 0x10
	struct FGameModePlayerEquipmentAvatar EquipmentAvatar; // Offset: 0x68 // Size: 0x30
	struct TArray<struct FGameModePlayerRolewearInfo> AllWear; // Offset: 0x98 // Size: 0x10
	struct FGameModePlayerUpassInfo UpassInfo; // Offset: 0xa8 // Size: 0x38
	IntProperty planeAvatarId; // Offset: 0xe0 // Size: 0x04
	IntProperty RolewearIndex; // Offset: 0xe4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GenerateMonsterFlow
// Size: 0x28 // Inherited bytes: 0x00
struct FGenerateMonsterFlow {
	// Fields
	StrProperty BattleID; // Offset: 0x00 // Size: 0x10
	IntProperty BattleMode; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FGenerateMonsterPhaseFlow> GenerateMonsterPhaseList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GenerateMonsterPhaseFlow
// Size: 0x18 // Inherited bytes: 0x00
struct FGenerateMonsterPhaseFlow {
	// Fields
	IntProperty WeatherID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FGenerateOneMonsterFlow> GenerateOneMonsterFlowList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GenerateOneMonsterFlow
// Size: 0x10 // Inherited bytes: 0x00
struct FGenerateOneMonsterFlow {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	IntProperty GenerateNum; // Offset: 0x04 // Size: 0x04
	IntProperty DeadNum; // Offset: 0x08 // Size: 0x04
	IntProperty KilledByPlayerNum; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModeParams
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModeParams {
	// Fields
	struct FName CurrentGameModeState; // Offset: 0x00 // Size: 0x08
	IntProperty MaxKillTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CharacterStateChangedParams
// Size: 0x18 // Inherited bytes: 0x00
struct FCharacterStateChangedParams {
	// Fields
	struct FPlayerID PlayerID; // Offset: 0x00 // Size: 0x10
	struct FName CharacterState; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.PlayerID
// Size: 0x10 // Inherited bytes: 0x00
struct FPlayerID {
	// Fields
	struct FName PlayerType; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DSPlayerTeamParams
// Size: 0x18 // Inherited bytes: 0x00
struct FDSPlayerTeamParams {
	// Fields
	struct FPlayerID PlayerID; // Offset: 0x00 // Size: 0x10
	IntProperty TeamID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerStateChangedParams
// Size: 0x38 // Inherited bytes: 0x00
struct FPlayerStateChangedParams {
	// Fields
	struct FPlayerID PlayerID; // Offset: 0x00 // Size: 0x10
	struct FName PlayerState; // Offset: 0x10 // Size: 0x08
	StrProperty Reason; // Offset: 0x18 // Size: 0x10
	StrProperty BanMsg; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePatchTableData
// Size: 0x140 // Inherited bytes: 0x00
struct FGameModePatchTableData {
	// Fields
	MapProperty Item; // Offset: 0x00 // Size: 0x50
	MapProperty PickUpCountSetting; // Offset: 0x50 // Size: 0x50
	MapProperty BackpackMapping; // Offset: 0xa0 // Size: 0x50
	MapProperty WeaponAttachments; // Offset: 0xf0 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.WeaponAttachmentsTableStruct
// Size: 0x7c // Inherited bytes: 0x00
struct FWeaponAttachmentsTableStruct {
	// Fields
	IntProperty KeyID; // Offset: 0x00 // Size: 0x04
	IntProperty Muzzle1ID; // Offset: 0x04 // Size: 0x04
	IntProperty Muzzle2ID; // Offset: 0x08 // Size: 0x04
	IntProperty Muzzle3ID; // Offset: 0x0c // Size: 0x04
	IntProperty Muzzle4ID; // Offset: 0x10 // Size: 0x04
	IntProperty Muzzle5ID; // Offset: 0x14 // Size: 0x04
	IntProperty Muzzle6ID; // Offset: 0x18 // Size: 0x04
	IntProperty Upper1ID; // Offset: 0x1c // Size: 0x04
	IntProperty Upper2ID; // Offset: 0x20 // Size: 0x04
	IntProperty Upper3ID; // Offset: 0x24 // Size: 0x04
	IntProperty Upper4ID; // Offset: 0x28 // Size: 0x04
	IntProperty Upper5ID; // Offset: 0x2c // Size: 0x04
	IntProperty Upper6ID; // Offset: 0x30 // Size: 0x04
	IntProperty Upper7ID; // Offset: 0x34 // Size: 0x04
	IntProperty Stock1ID; // Offset: 0x38 // Size: 0x04
	IntProperty Stock2ID; // Offset: 0x3c // Size: 0x04
	IntProperty Magazine1ID; // Offset: 0x40 // Size: 0x04
	IntProperty Magazine2ID; // Offset: 0x44 // Size: 0x04
	IntProperty Magazine3ID; // Offset: 0x48 // Size: 0x04
	IntProperty Magazine4ID; // Offset: 0x4c // Size: 0x04
	IntProperty Magazine5ID; // Offset: 0x50 // Size: 0x04
	IntProperty Magazine6ID; // Offset: 0x54 // Size: 0x04
	IntProperty Lower1ID; // Offset: 0x58 // Size: 0x04
	IntProperty Lower2ID; // Offset: 0x5c // Size: 0x04
	IntProperty Lower3ID; // Offset: 0x60 // Size: 0x04
	IntProperty Lower4ID; // Offset: 0x64 // Size: 0x04
	IntProperty Lower5ID; // Offset: 0x68 // Size: 0x04
	IntProperty BulletID; // Offset: 0x6c // Size: 0x04
	IntProperty ProposeBulletNum; // Offset: 0x70 // Size: 0x04
	IntProperty AIMinAttackDist; // Offset: 0x74 // Size: 0x04
	IntProperty AIMaxAttackDist; // Offset: 0x78 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.BackpackMappingTableStruct
// Size: 0x20 // Inherited bytes: 0x00
struct FBackpackMappingTableStruct {
	// Fields
	IntProperty SkinID; // Offset: 0x00 // Size: 0x04
	IntProperty ItemIDLv1; // Offset: 0x04 // Size: 0x04
	IntProperty ItemIDLv2; // Offset: 0x08 // Size: 0x04
	IntProperty ItemIDLv3; // Offset: 0x0c // Size: 0x04
	IntProperty SkinItemIDLv1; // Offset: 0x10 // Size: 0x04
	IntProperty SkinItemIDLv2; // Offset: 0x14 // Size: 0x04
	IntProperty SkinItemIDLv3; // Offset: 0x18 // Size: 0x04
	IntProperty LobbyShowItemID; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PickUpCountSettingTableStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FPickUpCountSettingTableStruct {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty PickUpMaxCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ItemTableStruct
// Size: 0xb0 // Inherited bytes: 0x00
struct FItemTableStruct {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty itemType; // Offset: 0x04 // Size: 0x04
	IntProperty ItemSubType; // Offset: 0x08 // Size: 0x04
	IntProperty BPID; // Offset: 0x0c // Size: 0x04
	IntProperty Durability; // Offset: 0x10 // Size: 0x04
	IntProperty AIFullVaule; // Offset: 0x14 // Size: 0x04
	bool Equippable; // Offset: 0x18 // Size: 0x01
	bool Consumable; // Offset: 0x19 // Size: 0x01
	bool AutoEquipandDrop; // Offset: 0x1a // Size: 0x01
	char pad_0x1B[0x1]; // Offset: 0x1b // Size: 0x01
	IntProperty MaxCount; // Offset: 0x1c // Size: 0x04
	IntProperty WeightforOrder; // Offset: 0x20 // Size: 0x04
	IntProperty UnitWeight_f; // Offset: 0x24 // Size: 0x04
	IntProperty RedEmotionFightId; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty PickupSound; // Offset: 0x30 // Size: 0x10
	StrProperty DropSound; // Offset: 0x40 // Size: 0x10
	StrProperty EquipSound; // Offset: 0x50 // Size: 0x10
	StrProperty UnEquipSound; // Offset: 0x60 // Size: 0x10
	StrProperty PickUpBank; // Offset: 0x70 // Size: 0x10
	StrProperty DropBank; // Offset: 0x80 // Size: 0x10
	StrProperty EquipBank; // Offset: 0x90 // Size: 0x10
	StrProperty UnEquipBank; // Offset: 0xa0 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DSNetSaturateResult
// Size: 0x10 // Inherited bytes: 0x00
struct FDSNetSaturateResult {
	// Fields
	float SaturateTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	uint64 SaturateFrames; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.VehicleMoveDragDataFriendly
// Size: 0x20 // Inherited bytes: 0x00
struct FVehicleMoveDragDataFriendly {
	// Fields
	struct TArray<struct FVehicleMoveDragFriendly> MoveDrag; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVehicleMoveDragFriendly> SimulatedMoveDrag; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleMoveDragFriendly
// Size: 0x58 // Inherited bytes: 0x00
struct FVehicleMoveDragFriendly {
	// Fields
	IntProperty Minute; // Offset: 0x00 // Size: 0x04
	char VehicleType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	MapProperty Counters; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.VehicleProtectionReportData
// Size: 0x60 // Inherited bytes: 0x00
struct FVehicleProtectionReportData {
	// Fields
	char VehicleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	MapProperty Counters; // Offset: 0x08 // Size: 0x50
	bool FromClient; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.VehicleCorrectionData
// Size: 0x58 // Inherited bytes: 0x00
struct FVehicleCorrectionData {
	// Fields
	char VehicleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	MapProperty Counters; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.CharacterShootVerifyStat
// Size: 0x50 // Inherited bytes: 0x00
struct FCharacterShootVerifyStat {
	// Fields
	MapProperty ShootVerifyStat; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.CharacterShootVerifyData
// Size: 0x50 // Inherited bytes: 0x00
struct FCharacterShootVerifyData {
	// Fields
	MapProperty ShootVerifyFailed; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.ParachuteDragData
// Size: 0x08 // Inherited bytes: 0x00
struct FParachuteDragData {
	// Fields
	uint32_t MyDrag; // Offset: 0x00 // Size: 0x04
	uint32_t OtherDrag; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CharacterMoveDragData
// Size: 0x20 // Inherited bytes: 0x00
struct FCharacterMoveDragData {
	// Fields
	struct TArray<struct FCharacterMoveDrag> Drag; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FCharacterSimulateMoveDrag> SimulateDrag; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.CharacterSimulateMoveDrag
// Size: 0x10 // Inherited bytes: 0x00
struct FCharacterSimulateMoveDrag {
	// Fields
	IntProperty Minute; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	IntProperty DragCount; // Offset: 0x08 // Size: 0x04
	IntProperty ShakeCount; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CharacterMoveDrag
// Size: 0x68 // Inherited bytes: 0x00
struct FCharacterMoveDrag {
	// Fields
	IntProperty Minute; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty ReasonCount; // Offset: 0x08 // Size: 0x50
	struct TArray<struct FDistanceDragData> ExceedsDistances; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DistanceDragData
// Size: 0x18 // Inherited bytes: 0x00
struct FDistanceDragData {
	// Fields
	float CX; // Offset: 0x00 // Size: 0x04
	float CY; // Offset: 0x04 // Size: 0x04
	float CZ; // Offset: 0x08 // Size: 0x04
	float SX; // Offset: 0x0c // Size: 0x04
	float SY; // Offset: 0x10 // Size: 0x04
	float sz; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleAvatarReplaceCfg
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleAvatarReplaceCfg {
	// Fields
	IntProperty OriginID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> SkinIDList; // Offset: 0x08 // Size: 0x10
	struct TArray<float> ProbabilityDistribute; // Offset: 0x18 // Size: 0x10
	IntProperty MaxNum; // Offset: 0x28 // Size: 0x04
	IntProperty CurrentNum; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModeIslandParams
// Size: 0x14 // Inherited bytes: 0x00
struct FGameModeIslandParams {
	// Fields
	IntProperty IslandDefaultLifeTime; // Offset: 0x00 // Size: 0x04
	IntProperty IslandSpecialLifeTime; // Offset: 0x04 // Size: 0x04
	IntProperty IslandMinimumPlayerNum; // Offset: 0x08 // Size: 0x04
	IntProperty IslandMinimumAliveTime; // Offset: 0x0c // Size: 0x04
	IntProperty IslandInactivePlayerKickoutTime; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DynamicBattleRankInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FDynamicBattleRankInfo {
	// Fields
	IntProperty BattleRank; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	uint64 PlayerUID; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.InfectionRoundTlogData
// Size: 0xe8 // Inherited bytes: 0x00
struct FInfectionRoundTlogData {
	// Fields
	IntProperty Round; // Offset: 0x00 // Size: 0x04
	IntProperty WinCamp; // Offset: 0x04 // Size: 0x04
	float PlayTime; // Offset: 0x08 // Size: 0x04
	bool bSpawnRevenger; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float RevengerExistTime; // Offset: 0x10 // Size: 0x04
	IntProperty RevengerDoSkillCount; // Offset: 0x14 // Size: 0x04
	IntProperty ZombieReviveCount; // Offset: 0x18 // Size: 0x04
	IntProperty NormalZombieDoSkillCount; // Offset: 0x1c // Size: 0x04
	IntProperty InvisibleZombieDoSkillCount; // Offset: 0x20 // Size: 0x04
	IntProperty ThrowerZombieDoSkillCount; // Offset: 0x24 // Size: 0x04
	IntProperty MotherZombieDoSkillCount; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FInfectionPlayerDeadTlogData> DeadList; // Offset: 0x30 // Size: 0x10
	IntProperty NormalZombieChooseTimes; // Offset: 0x40 // Size: 0x04
	IntProperty InvisibleZombieChooseTimes; // Offset: 0x44 // Size: 0x04
	struct TArray<IntProperty> ZombieLevelList; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> EnhancerUserList; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FInfectionSpringUseData> SpringUseList; // Offset: 0x68 // Size: 0x10
	MapProperty GuidCount; // Offset: 0x78 // Size: 0x50
	IntProperty PlayerNumber; // Offset: 0xc8 // Size: 0x04
	float ZombieAbsorbingTime; // Offset: 0xcc // Size: 0x04
	float RevengerAbsorbingTime; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct TArray<struct FInfectionRoundPlayerTlogData> playerList; // Offset: 0xd8 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.InfectionRoundPlayerTlogData
// Size: 0xf8 // Inherited bytes: 0x00
struct FInfectionRoundPlayerTlogData {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	StrProperty Country; // Offset: 0x58 // Size: 0x10
	uint64 CharacterID; // Offset: 0x68 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x70 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	uint64 RoleID; // Offset: 0x80 // Size: 0x08
	uint8_t RoleType; // Offset: 0x88 // Size: 0x01
	uint8_t RoleTypeEnd; // Offset: 0x89 // Size: 0x01
	char pad_0x8A[0x2]; // Offset: 0x8a // Size: 0x02
	uint32_t RoleTypeSwitchTime; // Offset: 0x8c // Size: 0x04
	float PlayerJumpHeightMax; // Offset: 0x90 // Size: 0x04
	float PlayerJumpSpeedMax; // Offset: 0x94 // Size: 0x04
	uint32_t PlayerMoveDistance; // Offset: 0x98 // Size: 0x04
	uint32_t PlayerMoveTime; // Offset: 0x9c // Size: 0x04
	struct TArray<float> PlayerMoveSpeedArray; // Offset: 0xa0 // Size: 0x10
	uint32_t PlayerKilled; // Offset: 0xb0 // Size: 0x04
	uint32_t PlayerHurtCount; // Offset: 0xb4 // Size: 0x04
	uint32_t PlayerDamageCount; // Offset: 0xb8 // Size: 0x04
	uint32_t KillingCount; // Offset: 0xbc // Size: 0x04
	uint32_t AssistCount; // Offset: 0xc0 // Size: 0x04
	uint32_t GunKillingTimes; // Offset: 0xc4 // Size: 0x04
	uint32_t HeadshotCounts; // Offset: 0xc8 // Size: 0x04
	float DamageAmount; // Offset: 0xcc // Size: 0x04
	uint32_t GunHitTimes; // Offset: 0xd0 // Size: 0x04
	uint32_t GunShotTimes; // Offset: 0xd4 // Size: 0x04
	uint32_t MovingDistance; // Offset: 0xd8 // Size: 0x04
	uint32_t HealAmount; // Offset: 0xdc // Size: 0x04
	uint32_t CureCount; // Offset: 0xe0 // Size: 0x04
	uint32_t CareRoundCheckUp; // Offset: 0xe4 // Size: 0x04
	uint32_t KillZombiesCount; // Offset: 0xe8 // Size: 0x04
	uint32_t KillHumanCount; // Offset: 0xec // Size: 0x04
	float Damage4Avenger; // Offset: 0xf0 // Size: 0x04
	IntProperty Headshot4Avenger; // Offset: 0xf4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.InfectionRoundTlogGuidData
// Size: 0x0c // Inherited bytes: 0x00
struct FInfectionRoundTlogGuidData {
	// Fields
	IntProperty GuidTriggerCount; // Offset: 0x00 // Size: 0x04
	IntProperty GuidHandCloseCount; // Offset: 0x04 // Size: 0x04
	IntProperty GuidArriveCloseCount; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.InfectionSpringUseData
// Size: 0x1c // Inherited bytes: 0x00
struct FInfectionSpringUseData {
	// Fields
	IntProperty SpringTag; // Offset: 0x00 // Size: 0x04
	IntProperty NormalPlayerUseTimes; // Offset: 0x04 // Size: 0x04
	IntProperty AvengerPlayerUseTimes; // Offset: 0x08 // Size: 0x04
	IntProperty MotherZombieUseTimes; // Offset: 0x0c // Size: 0x04
	IntProperty NormalZombieUseTimes; // Offset: 0x10 // Size: 0x04
	IntProperty InvisibleZombieUseTimes; // Offset: 0x14 // Size: 0x04
	IntProperty ThrowerZombieUseTimes; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.InfectionPlayerDeadTlogData
// Size: 0x20 // Inherited bytes: 0x00
struct FInfectionPlayerDeadTlogData {
	// Fields
	IntProperty DeadPawnSubType; // Offset: 0x00 // Size: 0x04
	float DeadPosiX; // Offset: 0x04 // Size: 0x04
	float DeadPosiY; // Offset: 0x08 // Size: 0x04
	float DeadPosiZ; // Offset: 0x0c // Size: 0x04
	IntProperty KillPawnSubType; // Offset: 0x10 // Size: 0x04
	float KillPosiX; // Offset: 0x14 // Size: 0x04
	float KillPosiY; // Offset: 0x18 // Size: 0x04
	float KillPosiZ; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.InfectionZombieLevelData
// Size: 0x08 // Inherited bytes: 0x00
struct FInfectionZombieLevelData {
	// Fields
	IntProperty Level; // Offset: 0x00 // Size: 0x04
	IntProperty Num; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.InfectionBattleResultData
// Size: 0x28 // Inherited bytes: 0x00
struct FInfectionBattleResultData {
	// Fields
	struct TArray<struct FInfectionPlayerBattleResultData> playerList; // Offset: 0x00 // Size: 0x10
	IntProperty PlayTime; // Offset: 0x10 // Size: 0x04
	IntProperty KillZombieNum; // Offset: 0x14 // Size: 0x04
	IntProperty InfectedHumanNum; // Offset: 0x18 // Size: 0x04
	IntProperty BecomeHeroNum; // Offset: 0x1c // Size: 0x04
	uint64 EscapePlayerUid; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.InfectionPlayerBattleResultData
// Size: 0x88 // Inherited bytes: 0x00
struct FInfectionPlayerBattleResultData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	IntProperty PlayerScore; // Offset: 0x20 // Size: 0x04
	IntProperty Rank; // Offset: 0x24 // Size: 0x04
	IntProperty Kills; // Offset: 0x28 // Size: 0x04
	IntProperty Infections; // Offset: 0x2c // Size: 0x04
	IntProperty DamageAmount; // Offset: 0x30 // Size: 0x04
	IntProperty RoundNum; // Offset: 0x34 // Size: 0x04
	float GamePlayTime; // Offset: 0x38 // Size: 0x04
	IntProperty BeMatrixMonsterTimes; // Offset: 0x3c // Size: 0x04
	IntProperty BeRevengerPlayerTimes; // Offset: 0x40 // Size: 0x04
	IntProperty RevengerPlayerKillWinTimes; // Offset: 0x44 // Size: 0x04
	IntProperty BeMonsterWinTimes; // Offset: 0x48 // Size: 0x04
	IntProperty BePersonWinTimes; // Offset: 0x4c // Size: 0x04
	IntProperty UseSpringJumpTimes; // Offset: 0x50 // Size: 0x04
	IntProperty UseEnhancerTimes; // Offset: 0x54 // Size: 0x04
	IntProperty DamageToMonster; // Offset: 0x58 // Size: 0x04
	IntProperty DamageToRevengerPlayer; // Offset: 0x5c // Size: 0x04
	IntProperty ChooseZombieFirstTimes; // Offset: 0x60 // Size: 0x04
	IntProperty ChooseZombieSecondTimes; // Offset: 0x64 // Size: 0x04
	float TotalDamage; // Offset: 0x68 // Size: 0x04
	float TotalSprintDistance; // Offset: 0x6c // Size: 0x04
	IntProperty OpenAirDropBoxesNum; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<StrProperty> KillFlow; // Offset: 0x78 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleBattleResultData
// Size: 0x68 // Inherited bytes: 0x00
struct FVehicleBattleResultData {
	// Fields
	struct TArray<struct FVehiclePlayerBattleResultData> playerList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVehicleCampKills> VehicleCampKills; // Offset: 0x10 // Size: 0x10
	IntProperty WinCampID; // Offset: 0x20 // Size: 0x04
	float GamePlayTime; // Offset: 0x24 // Size: 0x04
	IntProperty MatchPointNum; // Offset: 0x28 // Size: 0x04
	IntProperty WinCampTreasureScore; // Offset: 0x2c // Size: 0x04
	IntProperty FailCampTreasureScore; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<struct FVehicleBattleVehicleStatiscs> VehicleStaticsList; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FVehicleBattleWeaponStatiscs> WeaponStatiscsList; // Offset: 0x48 // Size: 0x10
	IntProperty VehicleStuckResetTimes; // Offset: 0x58 // Size: 0x04
	IntProperty HealthPropItemTimes; // Offset: 0x5c // Size: 0x04
	IntProperty NormalPropItemTimes; // Offset: 0x60 // Size: 0x04
	IntProperty SuperPropItemTimes; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleBattleWeaponStatiscs
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleBattleWeaponStatiscs {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	IntProperty ChooseTimes; // Offset: 0x04 // Size: 0x04
	IntProperty TotalDamage; // Offset: 0x08 // Size: 0x04
	IntProperty Kills; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleBattleVehicleStatiscs
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleBattleVehicleStatiscs {
	// Fields
	IntProperty VehicleID; // Offset: 0x00 // Size: 0x04
	IntProperty ChooseTimes; // Offset: 0x04 // Size: 0x04
	IntProperty DeadTimes; // Offset: 0x08 // Size: 0x04
	IntProperty Kills; // Offset: 0x0c // Size: 0x04
	float VehicleWeaponDamage; // Offset: 0x10 // Size: 0x04
	float HitDamage; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleCampKills
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleCampKills {
	// Fields
	IntProperty Campid; // Offset: 0x00 // Size: 0x04
	IntProperty Kills; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehiclePlayerBattleResultData
// Size: 0x98 // Inherited bytes: 0x00
struct FVehiclePlayerBattleResultData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	IntProperty TeamID; // Offset: 0x20 // Size: 0x04
	IntProperty Campid; // Offset: 0x24 // Size: 0x04
	IntProperty Score; // Offset: 0x28 // Size: 0x04
	IntProperty Distance; // Offset: 0x2c // Size: 0x04
	IntProperty KillNum; // Offset: 0x30 // Size: 0x04
	IntProperty AssistKillNum; // Offset: 0x34 // Size: 0x04
	IntProperty DriverKillNum; // Offset: 0x38 // Size: 0x04
	IntProperty ShooterKillNum; // Offset: 0x3c // Size: 0x04
	IntProperty BeKillNum; // Offset: 0x40 // Size: 0x04
	IntProperty TeamKillNum; // Offset: 0x44 // Size: 0x04
	IntProperty GetItemNum; // Offset: 0x48 // Size: 0x04
	IntProperty OpenTreasureNum; // Offset: 0x4c // Size: 0x04
	IntProperty ShootTreasureNum; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FUseItemFlow> UseItemFlow; // Offset: 0x58 // Size: 0x10
	IntProperty StrikeKillVehicleNum; // Offset: 0x68 // Size: 0x04
	IntProperty ItemKillVehicleNum; // Offset: 0x6c // Size: 0x04
	IntProperty GunKillVehicleNum; // Offset: 0x70 // Size: 0x04
	float CauseDamage; // Offset: 0x74 // Size: 0x04
	IntProperty GemStoneCount; // Offset: 0x78 // Size: 0x04
	bool HasFinished; // Offset: 0x7c // Size: 0x01
	char pad_0x7D[0x3]; // Offset: 0x7d // Size: 0x03
	float FinishedTime; // Offset: 0x80 // Size: 0x04
	bool IsEscape; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	IntProperty VehicleID; // Offset: 0x88 // Size: 0x04
	IntProperty VehicleShapeType; // Offset: 0x8c // Size: 0x04
	float ExitPlayerPlayTime; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleReportList
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleReportList {
	// Fields
	struct TArray<struct FVehicleReportEntry> VehicleReports; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleReportEntry
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleReportEntry {
	// Fields
	uint32_t VehicleID; // Offset: 0x00 // Size: 0x04
	IntProperty VehicleShapeType; // Offset: 0x04 // Size: 0x04
	bool IsDestroyed; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float FirstAttackedTime; // Offset: 0x0c // Size: 0x04
	float LastAttackedTime; // Offset: 0x10 // Size: 0x04
	bool Drived; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.AIProxyNetInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FAIProxyNetInfo {
	// Fields
	uint32_t MaxBufferUsedSize; // Offset: 0x00 // Size: 0x04
	float MaxSendSpeed; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AntiCheatDetailData
// Size: 0x28 // Inherited bytes: 0x00
struct FAntiCheatDetailData {
	// Fields
	uint16_t AreaID; // Offset: 0x00 // Size: 0x02
	uint8_t PlatID; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x5]; // Offset: 0x03 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FWeaponAntiData> WeaponAntiDataList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.WeaponAntiData
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponAntiData {
	// Fields
	uint16_t MuzzleFloorHeight; // Offset: 0x00 // Size: 0x02
	int16_t MuzzleActorHeadHeight; // Offset: 0x02 // Size: 0x02
	uint16_t ImplactPointAndActorDis; // Offset: 0x04 // Size: 0x02
	uint16_t ImplactPointAndBulletDis; // Offset: 0x06 // Size: 0x02
	uint16_t ImplactPoinPosChange; // Offset: 0x08 // Size: 0x02
	uint16_t BulletAndGunAngle; // Offset: 0x0a // Size: 0x02
	uint16_t NetDelay; // Offset: 0x0c // Size: 0x02
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	uint32_t ShooterPosDis; // Offset: 0x10 // Size: 0x04
	uint32_t VictmPosDis; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AntiMoveCheatFlow
// Size: 0x28 // Inherited bytes: 0x00
struct FAntiMoveCheatFlow {
	// Fields
	uint16_t AreaID; // Offset: 0x00 // Size: 0x02
	uint8_t PlatID; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x5]; // Offset: 0x03 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x08 // Size: 0x10
	IntProperty CheatType1; // Offset: 0x18 // Size: 0x04
	IntProperty CheatType2; // Offset: 0x1c // Size: 0x04
	IntProperty CheatType3; // Offset: 0x20 // Size: 0x04
	float Ping; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AntiCheatMovementRawData
// Size: 0x18 // Inherited bytes: 0x00
struct FAntiCheatMovementRawData {
	// Fields
	int16_t MinVelocity; // Offset: 0x00 // Size: 0x02
	int16_t MaxVelocity; // Offset: 0x02 // Size: 0x02
	int16_t AvgVelocity; // Offset: 0x04 // Size: 0x02
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	uint64 PlayerStatus; // Offset: 0x08 // Size: 0x08
	int16_t PlayerPing; // Offset: 0x10 // Size: 0x02
	char SpecialFlags; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
};

// Object Name: ScriptStruct Gameplay.ZNQBattleResultData
// Size: 0x4c // Inherited bytes: 0x00
struct FZNQBattleResultData {
	// Fields
	IntProperty DuckGameCount; // Offset: 0x00 // Size: 0x04
	IntProperty BeeGameCount; // Offset: 0x04 // Size: 0x04
	IntProperty BlindBoxCount; // Offset: 0x08 // Size: 0x04
	IntProperty DuckShootingRangeCount; // Offset: 0x0c // Size: 0x04
	IntProperty ActivedDuckGameNum; // Offset: 0x10 // Size: 0x04
	IntProperty ActivedBeeGameNum; // Offset: 0x14 // Size: 0x04
	IntProperty ActivedBlindBoxNum; // Offset: 0x18 // Size: 0x04
	IntProperty ActivedDuckShootingRangeNum; // Offset: 0x1c // Size: 0x04
	IntProperty MaxCoinCarried; // Offset: 0x20 // Size: 0x04
	IntProperty ParachutePlaygroundPlayer; // Offset: 0x24 // Size: 0x04
	IntProperty DuckGameHighCount; // Offset: 0x28 // Size: 0x04
	IntProperty DuckGameMiddleCount; // Offset: 0x2c // Size: 0x04
	IntProperty DuckGameLowCount; // Offset: 0x30 // Size: 0x04
	IntProperty BeeGameHighCount; // Offset: 0x34 // Size: 0x04
	IntProperty BeeGameMiddleCount; // Offset: 0x38 // Size: 0x04
	IntProperty BeeGameLowCount; // Offset: 0x3c // Size: 0x04
	IntProperty DuckShootingRangeHighCount; // Offset: 0x40 // Size: 0x04
	IntProperty DuckShootingRangeMiddleCount; // Offset: 0x44 // Size: 0x04
	IntProperty DuckShootingRangeLowCount; // Offset: 0x48 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.HardPointBattleResultData
// Size: 0x28 // Inherited bytes: 0x00
struct FHardPointBattleResultData {
	// Fields
	float HardPointEnterOccupiedStateMaxTime; // Offset: 0x00 // Size: 0x04
	IntProperty TotalPoint; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FTLog_HardPointActorFlow> HardPointActorFlowList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FHardPointTeamBattleResultData> TeamResultDatas; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HardPointTeamBattleResultData
// Size: 0x18 // Inherited bytes: 0x00
struct FHardPointTeamBattleResultData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FHardPointPlayerBattleResultData> TeamPlayerResultDatas; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HardPointPlayerBattleResultData
// Size: 0x30 // Inherited bytes: 0x00
struct FHardPointPlayerBattleResultData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty OccupyScore; // Offset: 0x08 // Size: 0x04
	float OccupyTime; // Offset: 0x0c // Size: 0x04
	IntProperty OccupyNum; // Offset: 0x10 // Size: 0x04
	float DamageToTheInHardPointEnemy; // Offset: 0x14 // Size: 0x04
	IntProperty PickUpWeaponBoxNum; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FTLog_PickUpItemFlow> PickUpItemFlowData; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.TLog_HardPointActorFlow
// Size: 0x28 // Inherited bytes: 0x00
struct FTLog_HardPointActorFlow {
	// Fields
	IntProperty HardPointID; // Offset: 0x00 // Size: 0x04
	float ActivatedTime; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> OccupiedTeamSequenceRecords; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FHardPointActorTeamScoreResultData> TeamScoreDataList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HardPointActorTeamScoreResultData
// Size: 0x08 // Inherited bytes: 0x00
struct FHardPointActorTeamScoreResultData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty Score; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CharacterOverrideAttrData
// Size: 0x18 // Inherited bytes: 0x00
struct FCharacterOverrideAttrData {
	// Fields
	StrProperty AttrName; // Offset: 0x00 // Size: 0x10
	float AttrValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.StatueBaseData
// Size: 0x68 // Inherited bytes: 0x00
struct FStatueBaseData {
	// Fields
	StrProperty ClassPath; // Offset: 0x00 // Size: 0x10
	StrProperty MatPath; // Offset: 0x10 // Size: 0x10
	StrProperty TeamFlag; // Offset: 0x20 // Size: 0x10
	StrProperty TeamName; // Offset: 0x30 // Size: 0x10
	struct FVector Loc; // Offset: 0x40 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x4c // Size: 0x0c
	struct FVector Scale; // Offset: 0x58 // Size: 0x0c
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.SeasonStatueData
// Size: 0x78 // Inherited bytes: 0x00
struct FSeasonStatueData {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct FVector Loc; // Offset: 0x10 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x1c // Size: 0x0c
	struct FVector Scale; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty Nation; // Offset: 0x38 // Size: 0x10
	IntProperty AGender; // Offset: 0x48 // Size: 0x04
	IntProperty Head; // Offset: 0x4c // Size: 0x04
	IntProperty hair; // Offset: 0x50 // Size: 0x04
	IntProperty WeaponId; // Offset: 0x54 // Size: 0x04
	struct TArray<IntProperty> AvatarList; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> AvatarWithAdditionList; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DSCorpsInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FDSCorpsInfo {
	// Fields
	uint64 CorpsID; // Offset: 0x00 // Size: 0x08
	StrProperty CorpsName; // Offset: 0x08 // Size: 0x10
	IntProperty Icon; // Offset: 0x18 // Size: 0x04
	IntProperty SegmentLevel; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DynamicTriggerConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FDynamicTriggerConfig {
	// Fields
	struct TArray<struct FDynamicTriggerTransform> Transforms; // Offset: 0x00 // Size: 0x10
	StrProperty TriggerClassPath; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DynamicTriggerTransform
// Size: 0x18 // Inherited bytes: 0x00
struct FDynamicTriggerTransform {
	// Fields
	struct FVector Loc; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.MissionBoardConfig
// Size: 0x50 // Inherited bytes: 0x00
struct FMissionBoardConfig {
	// Fields
	StrProperty ResPath; // Offset: 0x00 // Size: 0x10
	struct FVector Loc; // Offset: 0x10 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x1c // Size: 0x0c
	struct FVector Scale; // Offset: 0x28 // Size: 0x0c
	float Progress; // Offset: 0x34 // Size: 0x04
	StrProperty CountOrTime; // Offset: 0x38 // Size: 0x10
	IntProperty TipId; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AdvertisementActorConfig
// Size: 0x50 // Inherited bytes: 0x00
struct FAdvertisementActorConfig {
	// Fields
	StrProperty ResPath; // Offset: 0x00 // Size: 0x10
	StrProperty HttpImgPath; // Offset: 0x10 // Size: 0x10
	struct FVector Loc; // Offset: 0x20 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x2c // Size: 0x0c
	struct FVector Scale; // Offset: 0x38 // Size: 0x0c
	IntProperty ID; // Offset: 0x44 // Size: 0x04
	IntProperty CulDistance; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DynamicLoadItem
// Size: 0x40 // Inherited bytes: 0x00
struct FDynamicLoadItem {
	// Fields
	struct TArray<struct FDynamicBuildingGroupTransform> TransArray; // Offset: 0x00 // Size: 0x10
	IntProperty ActID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty Path; // Offset: 0x18 // Size: 0x10
	bool IsClearAfterStart; // Offset: 0x28 // Size: 0x01
	bool IsPlayerStartPot; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
	struct TArray<IntProperty> PosIdxList; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DynamicBuildingGroupTransform
// Size: 0x18 // Inherited bytes: 0x00
struct FDynamicBuildingGroupTransform {
	// Fields
	float LocX; // Offset: 0x00 // Size: 0x04
	float LocY; // Offset: 0x04 // Size: 0x04
	float LocZ; // Offset: 0x08 // Size: 0x04
	float RotX; // Offset: 0x0c // Size: 0x04
	float RotY; // Offset: 0x10 // Size: 0x04
	float RotZ; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.RoomCustomParams
// Size: 0x40 // Inherited bytes: 0x00
struct FRoomCustomParams {
	// Fields
	IntProperty CircleSpeedMultiplicator; // Offset: 0x00 // Size: 0x04
	bool bAutoOpendoor; // Offset: 0x04 // Size: 0x01
	bool bAutoPickup; // Offset: 0x05 // Size: 0x01
	bool bAudioVisual; // Offset: 0x06 // Size: 0x01
	bool bShowSkull; // Offset: 0x07 // Size: 0x01
	bool bAutoAimAt; // Offset: 0x08 // Size: 0x01
	bool bGunRemoveBullet; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	IntProperty BlueCircleDamageMultiplicator; // Offset: 0x0c // Size: 0x04
	bool bUseFirstWhiteCircleDelayTime; // Offset: 0x10 // Size: 0x01
	bool bUseFirstSafeZoneAppearTime; // Offset: 0x11 // Size: 0x01
	bool bUseFirstWhiteCircleRadiusMultiplicator; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x1]; // Offset: 0x13 // Size: 0x01
	IntProperty FirstWhiteCircleDelayTime; // Offset: 0x14 // Size: 0x04
	IntProperty FirstSafeZoneAppearTime; // Offset: 0x18 // Size: 0x04
	IntProperty FirstWhiteCircleRadiusMultiplicator; // Offset: 0x1c // Size: 0x04
	bool EnableRedZone; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<struct FCustomCircleParams> CustomCircleParamsList; // Offset: 0x28 // Size: 0x10
	bool bFuzzyInformation; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.CustomCircleParams
// Size: 0x1c // Inherited bytes: 0x00
struct FCustomCircleParams {
	// Fields
	IntProperty Stage; // Offset: 0x00 // Size: 0x04
	IntProperty delayTime; // Offset: 0x04 // Size: 0x04
	IntProperty SafeZoneAppeartime; // Offset: 0x08 // Size: 0x04
	IntProperty LastTime; // Offset: 0x0c // Size: 0x04
	IntProperty CircleDamage; // Offset: 0x10 // Size: 0x04
	IntProperty BlueCircleRadius; // Offset: 0x14 // Size: 0x04
	IntProperty WhiteCircleRadius; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.BattleCustomConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FBattleCustomConfig {
	// Fields
	StrProperty Config; // Offset: 0x00 // Size: 0x10
	float Value; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.BattleData
// Size: 0x08 // Inherited bytes: 0x00
struct FBattleData {
	// Fields
	IntProperty WatcherNum; // Offset: 0x00 // Size: 0x04
	IntProperty CircleNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModeGameOverData
// Size: 0x01 // Inherited bytes: 0x00
struct FGameModeGameOverData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Gameplay.GameModeTeamBattleResultData
// Size: 0xd8 // Inherited bytes: 0x00
struct FGameModeTeamBattleResultData {
	// Fields
	StrProperty Reason; // Offset: 0x00 // Size: 0x10
	IntProperty RemainTeamCount; // Offset: 0x10 // Size: 0x04
	IntProperty RemainAlivePlayerCount; // Offset: 0x14 // Size: 0x04
	float PlaneDirectionX; // Offset: 0x18 // Size: 0x04
	float PlaneDirectionY; // Offset: 0x1c // Size: 0x04
	MapProperty PlayersLogoutTime; // Offset: 0x20 // Size: 0x50
	MapProperty PlayersOnlineTime; // Offset: 0x70 // Size: 0x50
	struct TArray<struct FGameModeCorpsDetailData> RealTimeCorpsRank; // Offset: 0xc0 // Size: 0x10
	bool bIsGameTerminator; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.GameModeCorpsDetailData
// Size: 0x30 // Inherited bytes: 0x00
struct FGameModeCorpsDetailData {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	IntProperty CorpsHeadIcon; // Offset: 0x10 // Size: 0x04
	IntProperty KilledNum; // Offset: 0x14 // Size: 0x04
	IntProperty SegmentLevel; // Offset: 0x18 // Size: 0x04
	IntProperty RealtimeRank; // Offset: 0x1c // Size: 0x04
	IntProperty DefeatPlayerNum; // Offset: 0x20 // Size: 0x04
	float TotalDamage; // Offset: 0x24 // Size: 0x04
	float SurvivalTime; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerTotalWeaponsConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FPlayerTotalWeaponsConfig {
	// Fields
	IntProperty DefaultSelectedIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FPlayerWeaponsConfig> WeaponsConfigList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerWeaponsConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerWeaponsConfig {
	// Fields
	StrProperty ConfigName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FSingleWeaponConfig> WeaponDataList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.SingleWeaponConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FSingleWeaponConfig {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> AttachMentIDList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.BornItem
// Size: 0x0c // Inherited bytes: 0x00
struct FBornItem {
	// Fields
	IntProperty BornItemID; // Offset: 0x00 // Size: 0x04
	IntProperty BornItemCount; // Offset: 0x04 // Size: 0x04
	IntProperty BornItemFlags; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameModePlayerItemPackInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FGameModePlayerItemPackInfo {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	uint64 InstanceID; // Offset: 0x10 // Size: 0x08
	IntProperty ItemDurability; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FGameModePlayerItemAttachData> AttachList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayerItemAttachData
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModePlayerItemAttachData {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GameModePlayerWeaponPackInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FGameModePlayerWeaponPackInfo {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	uint64 InstanceID; // Offset: 0x10 // Size: 0x08
	IntProperty WeaponDurability; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FGameModePlayerWeaponAttachData> AttachList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayerWeaponAttachData
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModePlayerWeaponAttachData {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GameModePlayerArmorPackInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FGameModePlayerArmorPackInfo {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
	IntProperty ItemDurability; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FGameModePlayerArmorAttachData> AttachList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameModePlayerArmorAttachData
// Size: 0x10 // Inherited bytes: 0x00
struct FGameModePlayerArmorAttachData {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.SocialIslandGameResult
// Size: 0x70 // Inherited bytes: 0x00
struct FSocialIslandGameResult {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FDailyTaskStoreInfo> TaskInfo; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FDailyTaskAwardInfo> RewardInfo; // Offset: 0x20 // Size: 0x10
	IntProperty HighScoreCount; // Offset: 0x30 // Size: 0x04
	IntProperty TrainCount; // Offset: 0x34 // Size: 0x04
	IntProperty TotalTargetScore; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<uint64> Interaction; // Offset: 0x40 // Size: 0x10
	IntProperty StayTime; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<IntProperty> DuelDurations; // Offset: 0x58 // Size: 0x10
	IntProperty DuelApplyCount; // Offset: 0x68 // Size: 0x04
	IntProperty DuelStartCount; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerOBBattleInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FPlayerOBBattleInfo {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty BattleMode; // Offset: 0x08 // Size: 0x04
	bool ValidBattleInfo; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty GameCount; // Offset: 0x10 // Size: 0x04
	IntProperty WinCount; // Offset: 0x14 // Size: 0x04
	IntProperty TopTenCount; // Offset: 0x18 // Size: 0x04
	IntProperty KillNum; // Offset: 0x1c // Size: 0x04
	StrProperty KDNum; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ReportFatalDamage
// Size: 0x30 // Inherited bytes: 0x00
struct FReportFatalDamage {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	uint64 PlayerUID; // Offset: 0x10 // Size: 0x08
	uint64 OriginUID; // Offset: 0x18 // Size: 0x08
	double OccurTime; // Offset: 0x20 // Size: 0x08
	bool bIsDeliver; // Offset: 0x28 // Size: 0x01
	bool bIsMLAI; // Offset: 0x29 // Size: 0x01
	bool bIsPlayerAI; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
};

// Object Name: ScriptStruct Gameplay.ParachuteInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FParachuteInfo {
	// Fields
	IntProperty LeaderCount; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	uint64 LastGameLeaderUID; // Offset: 0x08 // Size: 0x08
	struct TArray<uint64> LastGameTeammatesUID; // Offset: 0x10 // Size: 0x10
	uint64 LastGameBattleID; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.ThemeRewardStateInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FThemeRewardStateInfo {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	IntProperty State; // Offset: 0x04 // Size: 0x04
	float LastUseTimeStamp; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DeathMatchBattleResultData
// Size: 0x58 // Inherited bytes: 0x00
struct FDeathMatchBattleResultData {
	// Fields
	enum class EDeathMatchSubModeType SubModeType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FDeathMatchTeamBattleResultData> TeamResultDatas; // Offset: 0x08 // Size: 0x10
	IntProperty PlayerNumber; // Offset: 0x18 // Size: 0x04
	IntProperty RealPlayerNumber; // Offset: 0x1c // Size: 0x04
	IntProperty PlayTime; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	uint64 FirstKillPlayer; // Offset: 0x28 // Size: 0x08
	uint64 LastKillPlayer; // Offset: 0x30 // Size: 0x08
	StrProperty VsTeamGameFlow; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FBRTDMWinLevelInfoTeamScoreResultData> WinLevelInfo; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.BRTDMWinLevelInfoTeamScoreResultData
// Size: 0x08 // Inherited bytes: 0x00
struct FBRTDMWinLevelInfoTeamScoreResultData {
	// Fields
	IntProperty LevelIndex; // Offset: 0x00 // Size: 0x04
	IntProperty WinBornArea; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.DeathMatchTeamBattleResultData
// Size: 0x30 // Inherited bytes: 0x00
struct FDeathMatchTeamBattleResultData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Result; // Offset: 0x08 // Size: 0x10
	IntProperty TeamRank; // Offset: 0x18 // Size: 0x04
	IntProperty TeamScore; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FDeathMatchPlayerBattleResultData> TeamPlayerResultDatas; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DeathMatchPlayerBattleResultData
// Size: 0x268 // Inherited bytes: 0x00
struct FDeathMatchPlayerBattleResultData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	IntProperty TeamID; // Offset: 0x20 // Size: 0x04
	IntProperty PlayerScore; // Offset: 0x24 // Size: 0x04
	IntProperty Rank; // Offset: 0x28 // Size: 0x04
	IntProperty Kills; // Offset: 0x2c // Size: 0x04
	IntProperty rescueTimes; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<uint64> RescueTeammatesList; // Offset: 0x38 // Size: 0x10
	IntProperty Assists; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct TArray<uint64> AssistTeammatesList; // Offset: 0x50 // Size: 0x10
	IntProperty OccupyScore; // Offset: 0x60 // Size: 0x04
	IntProperty Deaths; // Offset: 0x64 // Size: 0x04
	IntProperty MaxContinuouKills; // Offset: 0x68 // Size: 0x04
	IntProperty SuperGodNum; // Offset: 0x6c // Size: 0x04
	IntProperty RevengeNum; // Offset: 0x70 // Size: 0x04
	IntProperty DieInBaseRegionNum; // Offset: 0x74 // Size: 0x04
	IntProperty DamageAmount; // Offset: 0x78 // Size: 0x04
	IntProperty HeadShotNum; // Offset: 0x7c // Size: 0x04
	IntProperty ShootWeaponShotNum; // Offset: 0x80 // Size: 0x04
	IntProperty ShootWeaponShotAndHitPlayerNum; // Offset: 0x84 // Size: 0x04
	IntProperty GunKillingTimes; // Offset: 0x88 // Size: 0x04
	IntProperty MeleeKillTimes; // Offset: 0x8c // Size: 0x04
	float RangedDamagedAmount; // Offset: 0x90 // Size: 0x04
	float MeleeDamageAmount; // Offset: 0x94 // Size: 0x04
	float MovingDistance; // Offset: 0x98 // Size: 0x04
	float HealAmount; // Offset: 0x9c // Size: 0x04
	IntProperty CureCount; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct FEquipmentData EquipmentData; // Offset: 0xa8 // Size: 0x70
	struct TArray<uint64> TeamMemberList; // Offset: 0x118 // Size: 0x10
	MapProperty MedalList; // Offset: 0x128 // Size: 0x50
	struct TArray<struct FTimeToMedal> TimeToMedalList; // Offset: 0x178 // Size: 0x10
	float surviveTime; // Offset: 0x188 // Size: 0x04
	char pad_0x18C[0x4]; // Offset: 0x18c // Size: 0x04
	struct TArray<struct FTLog_PickUpItemFlow> TLog_PickUpItemFlowData; // Offset: 0x190 // Size: 0x10
	struct TArray<struct FUseItemFlow> UseItemFlow; // Offset: 0x1a0 // Size: 0x10
	float TotalDamage; // Offset: 0x1b0 // Size: 0x04
	float TotalSprintDistance; // Offset: 0x1b4 // Size: 0x04
	IntProperty OpenAirDropBoxesNum; // Offset: 0x1b8 // Size: 0x04
	char pad_0x1BC[0x4]; // Offset: 0x1bc // Size: 0x04
	struct FOnePlayerWeapon WeaponRecord; // Offset: 0x1c0 // Size: 0x20
	float Pronetime; // Offset: 0x1e0 // Size: 0x04
	char pad_0x1E4[0x4]; // Offset: 0x1e4 // Size: 0x04
	struct TArray<StrProperty> KillFlow; // Offset: 0x1e8 // Size: 0x10
	bool HasEscape; // Offset: 0x1f8 // Size: 0x01
	char pad_0x1F9[0x7]; // Offset: 0x1f9 // Size: 0x07
	StrProperty VsReadinessSwitchFlow; // Offset: 0x200 // Size: 0x10
	IntProperty CostGold; // Offset: 0x210 // Size: 0x04
	char pad_0x214[0x4]; // Offset: 0x214 // Size: 0x04
	MapProperty GeneralCounterMap; // Offset: 0x218 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.TimeToMedal
// Size: 0x08 // Inherited bytes: 0x00
struct FTimeToMedal {
	// Fields
	IntProperty MedalID; // Offset: 0x00 // Size: 0x04
	float TimeStamp; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerDeathRoundData
// Size: 0x38 // Inherited bytes: 0x00
struct FPlayerDeathRoundData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty TeamID; // Offset: 0x08 // Size: 0x04
	IntProperty Kills; // Offset: 0x0c // Size: 0x04
	IntProperty DamageAmount; // Offset: 0x10 // Size: 0x04
	float HealAmount; // Offset: 0x14 // Size: 0x04
	float surviveTime; // Offset: 0x18 // Size: 0x04
	IntProperty ShootWeaponShotNum; // Offset: 0x1c // Size: 0x04
	IntProperty ShootWeaponShotAndHitPlayerNum; // Offset: 0x20 // Size: 0x04
	IntProperty Deaths; // Offset: 0x24 // Size: 0x04
	IntProperty PlayTime; // Offset: 0x28 // Size: 0x04
	struct FVector DeadLocation; // Offset: 0x2c // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.AirDropBoxDataFlow
// Size: 0x20 // Inherited bytes: 0x00
struct FAirDropBoxDataFlow {
	// Fields
	struct TArray<struct FAirDropBoxData> AirDropBoxDataList; // Offset: 0x00 // Size: 0x10
	StrProperty BattleID; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AirDropBoxData
// Size: 0x38 // Inherited bytes: 0x00
struct FAirDropBoxData {
	// Fields
	IntProperty AirDropBoxId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FAirDropBoxDataItem> DataList; // Offset: 0x08 // Size: 0x10
	IntProperty Reason; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	uint64 CallerPlayerID; // Offset: 0x20 // Size: 0x08
	struct FVector Location; // Offset: 0x28 // Size: 0x0c
	float DropTime; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AirDropBoxDataItem
// Size: 0x08 // Inherited bytes: 0x00
struct FAirDropBoxDataItem {
	// Fields
	IntProperty ItemSpesificID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerAssistInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerAssistInfo {
	// Fields
	uint64 KillerUID; // Offset: 0x00 // Size: 0x08
	uint64 VictimUID; // Offset: 0x08 // Size: 0x08
	struct TArray<uint64> AssistUIDArray; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PickUpSpecialItemFlow
// Size: 0x08 // Inherited bytes: 0x00
struct FPickUpSpecialItemFlow {
	// Fields
	IntProperty ItemSpesificID; // Offset: 0x00 // Size: 0x04
	IntProperty pickCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.HeavyWeaponBoxItemFlow
// Size: 0x20 // Inherited bytes: 0x00
struct FHeavyWeaponBoxItemFlow {
	// Fields
	StrProperty BoxName; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> ItemIdList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.HeavyWeaponBoxOpenPlayerFlow
// Size: 0x28 // Inherited bytes: 0x00
struct FHeavyWeaponBoxOpenPlayerFlow {
	// Fields
	StrProperty BoxName; // Offset: 0x00 // Size: 0x10
	IntProperty WaitTimeFromActiveToOpen; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	int64_t UID; // Offset: 0x18 // Size: 0x08
	uint32_t TeamID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.HeavyWeaponBoxActivationFlow
// Size: 0x18 // Inherited bytes: 0x00
struct FHeavyWeaponBoxActivationFlow {
	// Fields
	StrProperty BoxName; // Offset: 0x00 // Size: 0x10
	int64_t ActiveTime; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.HeavyWeaponBoxSpawnFlow
// Size: 0x28 // Inherited bytes: 0x00
struct FHeavyWeaponBoxSpawnFlow {
	// Fields
	StrProperty BoxName; // Offset: 0x00 // Size: 0x10
	int64_t SpawnTime; // Offset: 0x10 // Size: 0x08
	StrProperty SpawnLocation; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ItemRegionCircle
// Size: 0x38 // Inherited bytes: 0x00
struct FItemRegionCircle {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	float Radius; // Offset: 0x0c // Size: 0x04
	float RadiusSquared2D; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x24]; // Offset: 0x14 // Size: 0x24
};

// Object Name: ScriptStruct Gameplay.GroupTypeSceneComponents
// Size: 0x18 // Inherited bytes: 0x00
struct FGroupTypeSceneComponents {
	// Fields
	IntProperty GroupType; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct USceneComponent*> SceneComponents; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ItemSpawnClass
// Size: 0x10 // Inherited bytes: 0x00
struct FItemSpawnClass {
	// Fields
	struct UObject* ItemClass; // Offset: 0x00 // Size: 0x08
	IntProperty ItemCount; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ItemSpawnData
// Size: 0x70 // Inherited bytes: 0x00
struct FItemSpawnData {
	// Fields
	struct FName RowName; // Offset: 0x00 // Size: 0x08
	IntProperty KeyID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty ItemValue; // Offset: 0x10 // Size: 0x10
	StrProperty ItemCategory; // Offset: 0x20 // Size: 0x10
	IntProperty ItemWeight; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty ItemPath; // Offset: 0x38 // Size: 0x10
	IntProperty ItemStackCount; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	StrProperty ItemTogetherPath; // Offset: 0x50 // Size: 0x10
	IntProperty ItemTogetherStackCount; // Offset: 0x60 // Size: 0x04
	IntProperty ItemTogetherCountMin; // Offset: 0x64 // Size: 0x04
	IntProperty ItemTogetherCountMax; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PrimeCircleArea
// Size: 0x18 // Inherited bytes: 0x00
struct FPrimeCircleArea {
	// Fields
	struct TArray<struct FVector> Anchors; // Offset: 0x00 // Size: 0x10
	IntProperty PrimeConfigIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PrimeItemCircleConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FPrimeItemCircleConfig {
	// Fields
	struct TArray<struct FSpotGroupProperty> PrimeItemCircleProperties; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DynamicSpotConfig
// Size: 0x58 // Inherited bytes: 0x00
struct FDynamicSpotConfig {
	// Fields
	StrProperty Comment; // Offset: 0x00 // Size: 0x10
	bool bDefaultEnable; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty DynamicSpotPath; // Offset: 0x18 // Size: 0x10
	struct FCustomSpotConfig CustomSpotConfig; // Offset: 0x28 // Size: 0x1c
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<struct FSpotGroupProperty> SpotGroupProperties; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.CustomSpotConfig
// Size: 0x1c // Inherited bytes: 0x00
struct FCustomSpotConfig {
	// Fields
	bool bGenerateAtBeginning; // Offset: 0x00 // Size: 0x01
	bool bGroupNumCtrl; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty NeedGroupMin; // Offset: 0x04 // Size: 0x04
	IntProperty NeedGroupMax; // Offset: 0x08 // Size: 0x04
	bool bSpotPerGroupNumCtrl; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty NeedSpotPerGroupMin; // Offset: 0x10 // Size: 0x04
	IntProperty NeedSpotPerGroupMax; // Offset: 0x14 // Size: 0x04
	bool bUseCookedRotator; // Offset: 0x18 // Size: 0x01
	bool bOverrideNearItem; // Offset: 0x19 // Size: 0x01
	bool bNearItem; // Offset: 0x1a // Size: 0x01
	bool bUseDefaultSpotGroupProperties; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct Gameplay.RepeatItemSpotData
// Size: 0x130 // Inherited bytes: 0x00
struct FRepeatItemSpotData {
	// Fields
	char pad_0x0[0xd0]; // Offset: 0x00 // Size: 0xd0
	float RepeatGenerateCD; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	int64_t LastGenerateItemTime; // Offset: 0xd8 // Size: 0x08
	MapProperty CacheItemValeCategory; // Offset: 0xe0 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.ItemGenerateSpawnDataArray
// Size: 0x20 // Inherited bytes: 0x00
struct FItemGenerateSpawnDataArray {
	// Fields
	StrProperty ValueCatetory; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FItemGenerateSpawnData> AllGenerateSpawnDatas; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ExtraItemSpawn
// Size: 0x28 // Inherited bytes: 0x00
struct FExtraItemSpawn {
	// Fields
	IntProperty SpawnPercent; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty SpawnItemValue; // Offset: 0x08 // Size: 0x10
	StrProperty SpawnItemCategory; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AreaItemsLimit
// Size: 0xc0 // Inherited bytes: 0x00
struct FAreaItemsLimit {
	// Fields
	struct FRegionID RegionID; // Offset: 0x00 // Size: 0x0c
	bool IsBeginGenerateItem; // Offset: 0x0c // Size: 0x01
	bool IsCheckRecoverItem; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	struct TArray<struct FVector> AvailablePosi; // Offset: 0x10 // Size: 0x10
	MapProperty ItemsMaxLimit; // Offset: 0x20 // Size: 0x50
	MapProperty ItemsMinLimit; // Offset: 0x70 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.AreaItemsNum
// Size: 0x18 // Inherited bytes: 0x00
struct FAreaItemsNum {
	// Fields
	IntProperty LimitNum; // Offset: 0x00 // Size: 0x04
	IntProperty CurNum; // Offset: 0x04 // Size: 0x04
	StrProperty WrapperPath; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AreaItemsLimitEdit
// Size: 0x28 // Inherited bytes: 0x00
struct FAreaItemsLimitEdit {
	// Fields
	IntProperty AreaX; // Offset: 0x00 // Size: 0x04
	IntProperty AreaY; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FGenerateItemLimit> ItemsMaxLimitEdit; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FGenerateItemLimit> ItemsMinLimitEdit; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GenerateItemLimit
// Size: 0x18 // Inherited bytes: 0x00
struct FGenerateItemLimit {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ItemNum; // Offset: 0x04 // Size: 0x04
	StrProperty WrapperPath; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ItemGenerateTableRow
// Size: 0x40 // Inherited bytes: 0x08
struct FItemGenerateTableRow : FTableRowBase {
	// Fields
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty Value; // Offset: 0x10 // Size: 0x10
	StrProperty Catetory; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FItemGenerateSpawnData> AllGenerateSpawnDatas; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ItemSpotSceneComponentArray
// Size: 0x18 // Inherited bytes: 0x00
struct FItemSpotSceneComponentArray {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UItemSpotSceneComponent*> AllSpots; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.RevivalRecordBaseInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FRevivalRecordBaseInfo {
	// Fields
	StrProperty OpenID; // Offset: 0x00 // Size: 0x10
	uint16_t AreaID; // Offset: 0x10 // Size: 0x02
	uint8_t PlatID; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x18 // Size: 0x10
	StrProperty UserName; // Offset: 0x28 // Size: 0x10
	uint64 RoleID; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.ReportIDCardDestroyFlow
// Size: 0x58 // Inherited bytes: 0x40
struct FReportIDCardDestroyFlow : FRevivalRecordBaseInfo {
	// Fields
	char DestroyReason; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
	StrProperty DestroyTime; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ReportIDCardPickUpFlow
// Size: 0x50 // Inherited bytes: 0x40
struct FReportIDCardPickUpFlow : FRevivalRecordBaseInfo {
	// Fields
	uint64 PickerUID; // Offset: 0x40 // Size: 0x08
	IntProperty RemainingCountDown; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ReportIDCardProduceFlow
// Size: 0x50 // Inherited bytes: 0x40
struct FReportIDCardProduceFlow : FRevivalRecordBaseInfo {
	// Fields
	StrProperty DeathTime; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ReportRevivalFlow
// Size: 0x78 // Inherited bytes: 0x40
struct FReportRevivalFlow : FRevivalRecordBaseInfo {
	// Fields
	char RevivalFailedReason; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
	StrProperty TowerLocation; // Offset: 0x48 // Size: 0x10
	StrProperty RevivalTime; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FPlayerRevivalInfo> PlayerRevivalInfos; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerRevivalInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FPlayerRevivalInfo {
	// Fields
	int64_t RevivedPlayerUID; // Offset: 0x00 // Size: 0x08
	int64_t PickerUID; // Offset: 0x08 // Size: 0x08
	IntProperty TimeAfterIDCardPicked; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.FingerTouchFlow
// Size: 0x98 // Inherited bytes: 0x00
struct FFingerTouchFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	uint64 BattleID; // Offset: 0x40 // Size: 0x08
	uint64 UID; // Offset: 0x48 // Size: 0x08
	IntProperty MapID; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty ClientVersion; // Offset: 0x58 // Size: 0x10
	IntProperty MatchMode; // Offset: 0x68 // Size: 0x04
	IntProperty ViewportWidth; // Offset: 0x6c // Size: 0x04
	IntProperty ViewportHeight; // Offset: 0x70 // Size: 0x04
	float DPIScale; // Offset: 0x74 // Size: 0x04
	struct TArray<struct FFingerTouchCluster> Clusters; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FFireSample> FireSamples; // Offset: 0x88 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.FireSample
// Size: 0x28 // Inherited bytes: 0x00
struct FFireSample {
	// Fields
	float LocX; // Offset: 0x00 // Size: 0x04
	float LocY; // Offset: 0x04 // Size: 0x04
	double StartTime; // Offset: 0x08 // Size: 0x08
	double EndTime; // Offset: 0x10 // Size: 0x08
	uint64 StartFrame; // Offset: 0x18 // Size: 0x08
	uint64 EndFrame; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.FingerTouchCluster
// Size: 0x18 // Inherited bytes: 0x00
struct FFingerTouchCluster {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FFingerTouchSample> Samples; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.FingerTouchSample
// Size: 0x1c // Inherited bytes: 0x00
struct FFingerTouchSample {
	// Fields
	IntProperty FingerIndex; // Offset: 0x00 // Size: 0x04
	float PressLocX; // Offset: 0x04 // Size: 0x04
	float PressLocY; // Offset: 0x08 // Size: 0x04
	float PressTime; // Offset: 0x0c // Size: 0x04
	float ReleaseLocX; // Offset: 0x10 // Size: 0x04
	float ReleaseLocY; // Offset: 0x14 // Size: 0x04
	float ReleaseTime; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.TssAntiFlow
// Size: 0x1c // Inherited bytes: 0x00
struct FTssAntiFlow {
	// Fields
	IntProperty GunID; // Offset: 0x00 // Size: 0x04
	IntProperty KillAICnt; // Offset: 0x04 // Size: 0x04
	IntProperty KillRealPlayerCnt; // Offset: 0x08 // Size: 0x04
	uint32_t ShotTime; // Offset: 0x0c // Size: 0x04
	uint32_t SendIndex; // Offset: 0x10 // Size: 0x04
	char ErrorCode; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	uint32_t ReportLog; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerNetworkData
// Size: 0x10 // Inherited bytes: 0x00
struct FPlayerNetworkData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty TotalOutOfOrderPackets; // Offset: 0x08 // Size: 0x04
	IntProperty MaxOutOfOrderPacketsPerSec; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ClientNetworkData
// Size: 0x30 // Inherited bytes: 0x00
struct FClientNetworkData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty AvgPing; // Offset: 0x08 // Size: 0x04
	IntProperty MaxPing; // Offset: 0x0c // Size: 0x04
	IntProperty MinPing; // Offset: 0x10 // Size: 0x04
	IntProperty LostPackRate; // Offset: 0x14 // Size: 0x04
	IntProperty AvgNoOutlier; // Offset: 0x18 // Size: 0x04
	IntProperty StdNoOutlier; // Offset: 0x1c // Size: 0x04
	IntProperty NumNoOutlier; // Offset: 0x20 // Size: 0x04
	IntProperty InLoss; // Offset: 0x24 // Size: 0x04
	IntProperty OutLoss; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.NetworkData
// Size: 0x2c // Inherited bytes: 0x00
struct FNetworkData {
	// Fields
	IntProperty AlivePlayerNum; // Offset: 0x00 // Size: 0x04
	IntProperty ConnectionNum; // Offset: 0x04 // Size: 0x04
	IntProperty OnlineNum; // Offset: 0x08 // Size: 0x04
	IntProperty HighPingNum; // Offset: 0x0c // Size: 0x04
	IntProperty NoConPktPerSec; // Offset: 0x10 // Size: 0x04
	IntProperty NoConBadPktPerSec; // Offset: 0x14 // Size: 0x04
	IntProperty DisConPktPerSec; // Offset: 0x18 // Size: 0x04
	IntProperty WorstFrameMSPerSec; // Offset: 0x1c // Size: 0x04
	IntProperty BlockNonConnBurst; // Offset: 0x20 // Size: 0x04
	IntProperty BlockNetConnBurst; // Offset: 0x24 // Size: 0x04
	IntProperty DropPktCntPerSec; // Offset: 0x28 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.HeartBeatData
// Size: 0x18 // Inherited bytes: 0x00
struct FHeartBeatData {
	// Fields
	IntProperty AlivePlayerNum; // Offset: 0x00 // Size: 0x04
	IntProperty AINum; // Offset: 0x04 // Size: 0x04
	IntProperty MonsterNum; // Offset: 0x08 // Size: 0x04
	IntProperty ConnectionNum; // Offset: 0x0c // Size: 0x04
	IntProperty OnlineNum; // Offset: 0x10 // Size: 0x04
	IntProperty HighPingNum; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.EquipmentFlow
// Size: 0x78 // Inherited bytes: 0x00
struct FEquipmentFlow {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty EventType; // Offset: 0x08 // Size: 0x04
	IntProperty GameTime; // Offset: 0x0c // Size: 0x04
	IntProperty MainWeapon1ID; // Offset: 0x10 // Size: 0x04
	IntProperty MainWeapon2ID; // Offset: 0x14 // Size: 0x04
	IntProperty ViceWeaponID; // Offset: 0x18 // Size: 0x04
	IntProperty HelmetID; // Offset: 0x1c // Size: 0x04
	IntProperty VestID; // Offset: 0x20 // Size: 0x04
	IntProperty BackPackID; // Offset: 0x24 // Size: 0x04
	MapProperty Equipments; // Offset: 0x28 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.RealtimeVerifyInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FRealtimeVerifyInfo {
	// Fields
	uint16_t AreaID; // Offset: 0x00 // Size: 0x02
	uint8_t PlatID; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x5]; // Offset: 0x03 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x08 // Size: 0x10
	IntProperty HitCountsNoAI; // Offset: 0x18 // Size: 0x04
	IntProperty HeadshotCountsNoAI; // Offset: 0x1c // Size: 0x04
	IntProperty ShotCounts; // Offset: 0x20 // Size: 0x04
	IntProperty Kills; // Offset: 0x24 // Size: 0x04
	IntProperty PrisonBreaks; // Offset: 0x28 // Size: 0x04
	IntProperty JumpMaxHeight2; // Offset: 0x2c // Size: 0x04
	IntProperty SkeletonLengthCheckInvaildNum; // Offset: 0x30 // Size: 0x04
	IntProperty MuzzleAndOwnerPosInVaildNum; // Offset: 0x34 // Size: 0x04
	IntProperty ImpactActorPosOffsetBigNum; // Offset: 0x38 // Size: 0x04
	IntProperty TotalImpactCharacterNum; // Offset: 0x3c // Size: 0x04
	IntProperty WeaponScopeHeightBigNum; // Offset: 0x40 // Size: 0x04
	IntProperty WeaponScopeDisBigNum; // Offset: 0x44 // Size: 0x04
	IntProperty OwnerHeadAndMuzzleBlockNum; // Offset: 0x48 // Size: 0x04
	IntProperty ImpactPointAndBulletDisBigNum; // Offset: 0x4c // Size: 0x04
	IntProperty ShootVerifyInvalidNum; // Offset: 0x50 // Size: 0x04
	float TotalSkeletonLengthMax; // Offset: 0x54 // Size: 0x04
	IntProperty TimeAccTimes; // Offset: 0x58 // Size: 0x04
	IntProperty SpeedQuickCheck; // Offset: 0x5c // Size: 0x04
	float ShootVerifyClientHitAABBCount; // Offset: 0x60 // Size: 0x04
	float ShootVerifyDSAABBMissCount; // Offset: 0x64 // Size: 0x04
	float PlayerZ; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.SecMrpcsFlow
// Size: 0x88 // Inherited bytes: 0x00
struct FSecMrpcsFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	StrProperty UserName; // Offset: 0x58 // Size: 0x10
	uint64 SvrRoleID; // Offset: 0x68 // Size: 0x08
	char SecMrpcsFlowID; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	StrProperty MrpcsFlowStr; // Offset: 0x78 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ClientSecMrpcsFlow
// Size: 0x18 // Inherited bytes: 0x00
struct FClientSecMrpcsFlow {
	// Fields
	char SecMrpcsFlowID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<char> MrpcsFlowData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameMisKillFlow
// Size: 0x80 // Inherited bytes: 0x00
struct FGameMisKillFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	uint64 MyRoleID; // Offset: 0x28 // Size: 0x08
	StrProperty MyOpenID; // Offset: 0x30 // Size: 0x10
	uint16_t AreaID; // Offset: 0x40 // Size: 0x02
	uint8_t PlatID; // Offset: 0x42 // Size: 0x01
	char pad_0x43[0x5]; // Offset: 0x43 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x48 // Size: 0x10
	uint64 BattleID; // Offset: 0x58 // Size: 0x08
	StrProperty DeadDamangeType; // Offset: 0x60 // Size: 0x10
	uint64 TeammateRoleID; // Offset: 0x70 // Size: 0x08
	IntProperty bConfirmMisKill; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameEndReport
// Size: 0xb0 // Inherited bytes: 0x00
struct FGameEndReport {
	// Fields
	IntProperty PvePoliceOfficeTriggerCount; // Offset: 0x00 // Size: 0x04
	IntProperty PveZombieGrenadeCount; // Offset: 0x04 // Size: 0x04
	IntProperty PveGenerateZombieByNoTeamMate; // Offset: 0x08 // Size: 0x04
	IntProperty NoneAIGameTime; // Offset: 0x0c // Size: 0x04
	MapProperty AISpawnCountMap; // Offset: 0x10 // Size: 0x50
	MapProperty AIEnterFightingCountMap; // Offset: 0x60 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.VerifyInfoFlow
// Size: 0x40 // Inherited bytes: 0x00
struct FVerifyInfoFlow {
	// Fields
	StrProperty GameAppID; // Offset: 0x00 // Size: 0x10
	StrProperty OpenID; // Offset: 0x10 // Size: 0x10
	uint64 UID; // Offset: 0x20 // Size: 0x08
	uint64 BattleID; // Offset: 0x28 // Size: 0x08
	IntProperty LocationX; // Offset: 0x30 // Size: 0x04
	IntProperty LocationY; // Offset: 0x34 // Size: 0x04
	IntProperty LocationZ; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VoiceTeamQuit
// Size: 0x30 // Inherited bytes: 0x00
struct FVoiceTeamQuit {
	// Fields
	StrProperty AntsVoiceTeamID; // Offset: 0x00 // Size: 0x10
	StrProperty AntsVoiceRoomID; // Offset: 0x10 // Size: 0x10
	IntProperty AntsVoiceTeamMemberID; // Offset: 0x20 // Size: 0x04
	IntProperty AntsVoiceRoomMemberID; // Offset: 0x24 // Size: 0x04
	uint64 UID; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.VoiceTeamCreate
// Size: 0x30 // Inherited bytes: 0x00
struct FVoiceTeamCreate {
	// Fields
	StrProperty AntsVoiceTeamID; // Offset: 0x00 // Size: 0x10
	StrProperty AntsVoiceRoomID; // Offset: 0x10 // Size: 0x10
	IntProperty AntsVoiceTeamMemberID; // Offset: 0x20 // Size: 0x04
	IntProperty AntsVoiceRoomMemberID; // Offset: 0x24 // Size: 0x04
	uint64 UID; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.WatchGamePlayerInfoClickFlow
// Size: 0x10 // Inherited bytes: 0x00
struct FWatchGamePlayerInfoClickFlow {
	// Fields
	uint64 WatchPlayer_UID; // Offset: 0x00 // Size: 0x08
	IntProperty WatchTimes; // Offset: 0x08 // Size: 0x04
	float Duration; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting
// Size: 0x118 // Inherited bytes: 0x00
struct FGameSetting {
	// Fields
	uint64 RoleID; // Offset: 0x00 // Size: 0x08
	struct FGameSetting_BasicSetting BasicSetting; // Offset: 0x08 // Size: 0x2c
	struct FGameSetting_ArtQuality ArtQuality; // Offset: 0x34 // Size: 0x08
	struct FGameSetting_Operate Operate; // Offset: 0x3c // Size: 0x08
	struct FGameSetting_Vehicle Vehicle; // Offset: 0x44 // Size: 0x08
	struct FGameSetting_Sensibility Sensibility; // Offset: 0x4c // Size: 0x88
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct FGameSetting_PickUp PickUp; // Offset: 0xd8 // Size: 0x40
};

// Object Name: ScriptStruct Gameplay.GameSetting_PickUp
// Size: 0x40 // Inherited bytes: 0x00
struct FGameSetting_PickUp {
	// Fields
	bool AutoPickUpSwitcher; // Offset: 0x00 // Size: 0x01
	bool AutoPickupPistol; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FGameSetting_PickUp_Drug Drug; // Offset: 0x04 // Size: 0x18
	struct FGamesetting_PickUp_Grenade Grenade; // Offset: 0x1c // Size: 0x10
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FGameSetting_PickUp_WeaponBullet> WeaponBulletList; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GameSetting_PickUp_WeaponBullet
// Size: 0x08 // Inherited bytes: 0x00
struct FGameSetting_PickUp_WeaponBullet {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	IntProperty BulletCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.Gamesetting_PickUp_Grenade
// Size: 0x10 // Inherited bytes: 0x00
struct FGamesetting_PickUp_Grenade {
	// Fields
	IntProperty IncendiaryBomb; // Offset: 0x00 // Size: 0x04
	IntProperty ShockBomb; // Offset: 0x04 // Size: 0x04
	IntProperty SmokeBomb; // Offset: 0x08 // Size: 0x04
	IntProperty GrenadeFragmented; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_PickUp_Drug
// Size: 0x18 // Inherited bytes: 0x00
struct FGameSetting_PickUp_Drug {
	// Fields
	IntProperty MedicalTreatment; // Offset: 0x00 // Size: 0x04
	IntProperty Bandage; // Offset: 0x04 // Size: 0x04
	IntProperty PainKiller; // Offset: 0x08 // Size: 0x04
	IntProperty Adrenaline; // Offset: 0x0c // Size: 0x04
	IntProperty EnergyDrink; // Offset: 0x10 // Size: 0x04
	IntProperty FirstAidKit; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_Sensibility
// Size: 0x88 // Inherited bytes: 0x00
struct FGameSetting_Sensibility {
	// Fields
	IntProperty CameraLensSensibility; // Offset: 0x00 // Size: 0x04
	struct FGameSetting_Sensibility_FreeCam Sens_FreeCamera; // Offset: 0x04 // Size: 0x0c
	struct FGameSetting_Sensibility_Cam Sens_Camera; // Offset: 0x10 // Size: 0x28
	struct FGameSetting_Sensibility_Fire Sens_Fire; // Offset: 0x38 // Size: 0x28
	struct FGameSetting_Sensibility_Gyroscope Sens_Gyroscope; // Offset: 0x60 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.GameSetting_Sensibility_Gyroscope
// Size: 0x28 // Inherited bytes: 0x00
struct FGameSetting_Sensibility_Gyroscope {
	// Fields
	float GyroscopeSenNoneSniper; // Offset: 0x00 // Size: 0x04
	float GyroscopeSenNoneSniperFP; // Offset: 0x04 // Size: 0x04
	float GyroscopeSenRedDotSniper; // Offset: 0x08 // Size: 0x04
	float GyroscopeSen2XSniper; // Offset: 0x0c // Size: 0x04
	float GyroscopeSen3XSniper; // Offset: 0x10 // Size: 0x04
	float GyroscopeSen4XSniper; // Offset: 0x14 // Size: 0x04
	float GyroscopeSen6XSniper; // Offset: 0x18 // Size: 0x04
	float GyroscopeSen8XSniper; // Offset: 0x1c // Size: 0x04
	float GyroscopeShoulderSniper; // Offset: 0x20 // Size: 0x04
	float GyroscopeShoulderSniperFP; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_Sensibility_Fire
// Size: 0x28 // Inherited bytes: 0x00
struct FGameSetting_Sensibility_Fire {
	// Fields
	float FireCamLensSenNoneSniper; // Offset: 0x00 // Size: 0x04
	float FireCamLensSenNoneSniperFP; // Offset: 0x04 // Size: 0x04
	float FireCamLensSenRedDotSniper; // Offset: 0x08 // Size: 0x04
	float FireCamLensSen2XSniper; // Offset: 0x0c // Size: 0x04
	float FireCamLensSen3XSniper; // Offset: 0x10 // Size: 0x04
	float FireCamLensSen4XSniper; // Offset: 0x14 // Size: 0x04
	float FireCamLensSen6XSniper; // Offset: 0x18 // Size: 0x04
	float FireCamLensSen8XSniper; // Offset: 0x1c // Size: 0x04
	float FireCamLensSenShoulderSniper; // Offset: 0x20 // Size: 0x04
	float FireCamLensSenShoulderSniperFP; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_Sensibility_Cam
// Size: 0x28 // Inherited bytes: 0x00
struct FGameSetting_Sensibility_Cam {
	// Fields
	float CamLensSenNoneSniper; // Offset: 0x00 // Size: 0x04
	float CamLensSenNoneSniperFP; // Offset: 0x04 // Size: 0x04
	float CamLensSenRedDotSniper; // Offset: 0x08 // Size: 0x04
	float CamLensSen2XSniper; // Offset: 0x0c // Size: 0x04
	float CamLensSen3XSniper; // Offset: 0x10 // Size: 0x04
	float CamLensSen4XSniper; // Offset: 0x14 // Size: 0x04
	float CamLensSen6XSniper; // Offset: 0x18 // Size: 0x04
	float CamLensSen8XSniper; // Offset: 0x1c // Size: 0x04
	float CamLensSenShoulderSniper; // Offset: 0x20 // Size: 0x04
	float CamLensSenShoulderSniperFP; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_Sensibility_FreeCam
// Size: 0x0c // Inherited bytes: 0x00
struct FGameSetting_Sensibility_FreeCam {
	// Fields
	float VehicleEye; // Offset: 0x00 // Size: 0x04
	float ParachuteEye; // Offset: 0x04 // Size: 0x04
	float CamFpFreeEye; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_Vehicle
// Size: 0x08 // Inherited bytes: 0x00
struct FGameSetting_Vehicle {
	// Fields
	IntProperty VehicleControlMode; // Offset: 0x00 // Size: 0x04
	IntProperty DrivingViewMode; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameSetting_Operate
// Size: 0x08 // Inherited bytes: 0x00
struct FGameSetting_Operate {
	// Fields
	IntProperty FireMode; // Offset: 0x00 // Size: 0x04
	bool Touch_3D_Switcher; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.GameSetting_ArtQuality
// Size: 0x08 // Inherited bytes: 0x00
struct FGameSetting_ArtQuality {
	// Fields
	IntProperty ArtStyle; // Offset: 0x00 // Size: 0x04
	bool AntiAliasingSwitch; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.GameSetting_BasicSetting
// Size: 0x2c // Inherited bytes: 0x00
struct FGameSetting_BasicSetting {
	// Fields
	IntProperty CrossHairColor; // Offset: 0x00 // Size: 0x04
	bool AimAssist; // Offset: 0x04 // Size: 0x01
	bool WallFeedBack; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	IntProperty SingleShotWeaponShootMode; // Offset: 0x08 // Size: 0x04
	IntProperty ShotGunShootMode; // Offset: 0x0c // Size: 0x04
	bool LeftRightShoot; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty LRShootMode; // Offset: 0x14 // Size: 0x04
	bool LRShootSniperSwitch; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty LeftHandFire; // Offset: 0x1c // Size: 0x04
	IntProperty Gyroscope; // Offset: 0x20 // Size: 0x04
	bool AutoOpenDoor; // Offset: 0x24 // Size: 0x01
	bool IntelligentDrugs; // Offset: 0x25 // Size: 0x01
	bool ActorAnimationSwitch; // Offset: 0x26 // Size: 0x01
	bool FPViewSwitch; // Offset: 0x27 // Size: 0x01
	bool ShoulderEnable; // Offset: 0x28 // Size: 0x01
	bool ShoulderMode; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x2]; // Offset: 0x2a // Size: 0x02
};

// Object Name: ScriptStruct Gameplay.SecPlayerKillFlow
// Size: 0x108 // Inherited bytes: 0x00
struct FSecPlayerKillFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	StrProperty UserName; // Offset: 0x58 // Size: 0x10
	uint64 SvrRoleID; // Offset: 0x68 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x70 // Size: 0x08
	uint8_t SecPlayerKillFlowID; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	IntProperty GunID; // Offset: 0x7c // Size: 0x04
	uint64 KilledPlayerRoleID; // Offset: 0x80 // Size: 0x08
	struct FRecoilInfo RecoilInfo; // Offset: 0x88 // Size: 0x36
	char pad_0xBE[0x2]; // Offset: 0xbe // Size: 0x02
	IntProperty LocationX; // Offset: 0xc0 // Size: 0x04
	IntProperty LocationY; // Offset: 0xc4 // Size: 0x04
	IntProperty LocationZ; // Offset: 0xc8 // Size: 0x04
	IntProperty KilledLocationX; // Offset: 0xcc // Size: 0x04
	IntProperty KilledLocationY; // Offset: 0xd0 // Size: 0x04
	IntProperty KilledLocationZ; // Offset: 0xd4 // Size: 0x04
	IntProperty BornPointID; // Offset: 0xd8 // Size: 0x04
	IntProperty KilledBornPointID; // Offset: 0xdc // Size: 0x04
	IntProperty TeamID; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
	StrProperty GameModeID; // Offset: 0xe8 // Size: 0x10
	uint64 PawnState; // Offset: 0xf8 // Size: 0x08
	uint64 KilledPawnState; // Offset: 0x100 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.RecoilInfo
// Size: 0x36 // Inherited bytes: 0x00
struct FRecoilInfo {
	// Fields
	int16_t VerticalRecoilMin; // Offset: 0x00 // Size: 0x02
	int16_t VerticalRecoilMax; // Offset: 0x02 // Size: 0x02
	int16_t VerticalRecoilVariation; // Offset: 0x04 // Size: 0x02
	int16_t VerticalRecoveryModifier; // Offset: 0x06 // Size: 0x02
	int16_t VerticalRecoveryClamp; // Offset: 0x08 // Size: 0x02
	int16_t VerticalRecoveryMax; // Offset: 0x0a // Size: 0x02
	int16_t LeftMax; // Offset: 0x0c // Size: 0x02
	int16_t RightMax; // Offset: 0x0e // Size: 0x02
	int16_t HorizontalTendency; // Offset: 0x10 // Size: 0x02
	int16_t BulletPerSwitch; // Offset: 0x12 // Size: 0x02
	int16_t TimePerSwitch; // Offset: 0x14 // Size: 0x02
	bool SwitchOnTime; // Offset: 0x16 // Size: 0x01
	char pad_0x17[0x1]; // Offset: 0x17 // Size: 0x01
	int16_t RecoilSpeedVertical; // Offset: 0x18 // Size: 0x02
	int16_t RecoilSpeedHorizontal; // Offset: 0x1a // Size: 0x02
	int16_t RecovertySpeedVertical; // Offset: 0x1c // Size: 0x02
	int16_t RecoilValueClimb; // Offset: 0x1e // Size: 0x02
	int16_t RecoilValueFail; // Offset: 0x20 // Size: 0x02
	int16_t RecoilModifierStand; // Offset: 0x22 // Size: 0x02
	int16_t RecoilModifierCrouch; // Offset: 0x24 // Size: 0x02
	int16_t RecoilModifierProne; // Offset: 0x26 // Size: 0x02
	int16_t RecoilHorizontalMinScalar; // Offset: 0x28 // Size: 0x02
	int16_t BurstEmptyDelay; // Offset: 0x2a // Size: 0x02
	bool ShootSightReturn; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x1]; // Offset: 0x2d // Size: 0x01
	int16_t ShootSightReturnSpeed; // Offset: 0x2e // Size: 0x02
	int16_t AccessoriesVRecoilFactor; // Offset: 0x30 // Size: 0x02
	int16_t AccessoriesHRecoilFactor; // Offset: 0x32 // Size: 0x02
	int16_t AccessoriesRecoveryFactor; // Offset: 0x34 // Size: 0x02
};

// Object Name: ScriptStruct Gameplay.ClientSecPlayerKillFlow
// Size: 0x90 // Inherited bytes: 0x00
struct FClientSecPlayerKillFlow {
	// Fields
	int64_t ClientStartTime; // Offset: 0x00 // Size: 0x08
	uint8_t SecPlayerKillFlowID; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty GunID; // Offset: 0x0c // Size: 0x04
	uint32_t KilledPlayerKey; // Offset: 0x10 // Size: 0x04
	struct FRecoilInfo RecoilInfo; // Offset: 0x14 // Size: 0x36
	char pad_0x4A[0x2]; // Offset: 0x4a // Size: 0x02
	IntProperty LocationX; // Offset: 0x4c // Size: 0x04
	IntProperty LocationY; // Offset: 0x50 // Size: 0x04
	IntProperty LocationZ; // Offset: 0x54 // Size: 0x04
	IntProperty KilledLocationX; // Offset: 0x58 // Size: 0x04
	IntProperty KilledLocationY; // Offset: 0x5c // Size: 0x04
	IntProperty KilledLocationZ; // Offset: 0x60 // Size: 0x04
	IntProperty KilledTeamID; // Offset: 0x64 // Size: 0x04
	IntProperty TeamID; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty GameModeID; // Offset: 0x70 // Size: 0x10
	uint64 PawnState; // Offset: 0x80 // Size: 0x08
	uint64 KilledPawnState; // Offset: 0x88 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.PlayerBehaviorFlow
// Size: 0x98 // Inherited bytes: 0x00
struct FPlayerBehaviorFlow {
	// Fields
	uint64 FrameCounter; // Offset: 0x00 // Size: 0x08
	uint64 BattleID; // Offset: 0x08 // Size: 0x08
	bool IsTargetPlayer; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty Name; // Offset: 0x18 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x28 // Size: 0x04
	uint32_t RelevantPlayerKey; // Offset: 0x2c // Size: 0x04
	IntProperty LocationX; // Offset: 0x30 // Size: 0x04
	IntProperty LocationY; // Offset: 0x34 // Size: 0x04
	IntProperty LocationZ; // Offset: 0x38 // Size: 0x04
	IntProperty RotationP; // Offset: 0x3c // Size: 0x04
	IntProperty RotationY; // Offset: 0x40 // Size: 0x04
	IntProperty RotationR; // Offset: 0x44 // Size: 0x04
	StrProperty Stats; // Offset: 0x48 // Size: 0x10
	bool IsDying; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	float Breath; // Offset: 0x5c // Size: 0x04
	IntProperty SpeedX; // Offset: 0x60 // Size: 0x04
	IntProperty SpeedY; // Offset: 0x64 // Size: 0x04
	IntProperty SpeedZ; // Offset: 0x68 // Size: 0x04
	float Health; // Offset: 0x6c // Size: 0x04
	float Energy; // Offset: 0x70 // Size: 0x04
	IntProperty CurrentWeaponID; // Offset: 0x74 // Size: 0x04
	IntProperty Ammo; // Offset: 0x78 // Size: 0x04
	IntProperty SightId; // Offset: 0x7c // Size: 0x04
	bool IsBeAttacking; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x3]; // Offset: 0x81 // Size: 0x03
	IntProperty BeAttackDirX; // Offset: 0x84 // Size: 0x04
	IntProperty BeAttackDirY; // Offset: 0x88 // Size: 0x04
	IntProperty BeAttackDirZ; // Offset: 0x8c // Size: 0x04
	IntProperty MedicineId; // Offset: 0x90 // Size: 0x04
	bool IsHaveSound; // Offset: 0x94 // Size: 0x01
	char pad_0x95[0x3]; // Offset: 0x95 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.HurtFlow
// Size: 0x120 // Inherited bytes: 0x00
struct FHurtFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	uint64 RoleID; // Offset: 0x88 // Size: 0x08
	uint8_t RoleType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	StrProperty EnemyOpenID; // Offset: 0x98 // Size: 0x10
	StrProperty EnemyUserName; // Offset: 0xa8 // Size: 0x10
	uint64 EnemyRoleID; // Offset: 0xb8 // Size: 0x08
	IntProperty EnemyRoleType; // Offset: 0xc0 // Size: 0x04
	uint32_t HurtTime; // Offset: 0xc4 // Size: 0x04
	IntProperty HurtType; // Offset: 0xc8 // Size: 0x04
	IntProperty HitType; // Offset: 0xcc // Size: 0x04
	IntProperty DamageStart; // Offset: 0xd0 // Size: 0x04
	IntProperty DamageReduce; // Offset: 0xd4 // Size: 0x04
	IntProperty ArmorDef; // Offset: 0xd8 // Size: 0x04
	IntProperty HPstart; // Offset: 0xdc // Size: 0x04
	IntProperty HPEnd; // Offset: 0xe0 // Size: 0x04
	IntProperty ArmorHPStart1; // Offset: 0xe4 // Size: 0x04
	IntProperty ArmorHPEnd1; // Offset: 0xe8 // Size: 0x04
	IntProperty ArmorHPStart2; // Offset: 0xec // Size: 0x04
	IntProperty ArmorHPEnd2; // Offset: 0xf0 // Size: 0x04
	IntProperty CarHPStart; // Offset: 0xf4 // Size: 0x04
	IntProperty CarHPEnd; // Offset: 0xf8 // Size: 0x04
	IntProperty FallHeight; // Offset: 0xfc // Size: 0x04
	IntProperty HypoxiaTime; // Offset: 0x100 // Size: 0x04
	IntProperty HypoxiaHurtTotal; // Offset: 0x104 // Size: 0x04
	IntProperty PlayerKilled; // Offset: 0x108 // Size: 0x04
	IntProperty ArmorKill; // Offset: 0x10c // Size: 0x04
	IntProperty CarKill; // Offset: 0x110 // Size: 0x04
	IntProperty IfIsAI; // Offset: 0x114 // Size: 0x04
	IntProperty CircleIndex; // Offset: 0x118 // Size: 0x04
	uint32_t HurtFlowID; // Offset: 0x11c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.SecAttackFlow
// Size: 0xc0 // Inherited bytes: 0x00
struct FSecAttackFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint8_t PlatID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x1]; // Offset: 0x39 // Size: 0x01
	uint16_t AreaID; // Offset: 0x3a // Size: 0x02
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	uint64 RoleID; // Offset: 0x60 // Size: 0x08
	StrProperty TargetUserName; // Offset: 0x68 // Size: 0x10
	StrProperty TargetOpenID; // Offset: 0x78 // Size: 0x10
	uint64 TargetRoleID; // Offset: 0x88 // Size: 0x08
	StrProperty HitPart; // Offset: 0x90 // Size: 0x10
	IntProperty GunID; // Offset: 0xa0 // Size: 0x04
	char PlayerKill; // Offset: 0xa4 // Size: 0x01
	char pad_0xA5[0x3]; // Offset: 0xa5 // Size: 0x03
	uint64 AttackFlowID; // Offset: 0xa8 // Size: 0x08
	IntProperty KillAICnt; // Offset: 0xb0 // Size: 0x04
	IntProperty KillRealPlayerCnt; // Offset: 0xb4 // Size: 0x04
	int16_t BulletDown; // Offset: 0xb8 // Size: 0x02
	char pad_0xBA[0x6]; // Offset: 0xba // Size: 0x06
};

// Object Name: ScriptStruct Gameplay.AttackFlow
// Size: 0x1d8 // Inherited bytes: 0x00
struct FAttackFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	uint64 RoleID; // Offset: 0x88 // Size: 0x08
	uint8_t RoleType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	StrProperty TargetOpenID; // Offset: 0x98 // Size: 0x10
	StrProperty TargetUserName; // Offset: 0xa8 // Size: 0x10
	uint64 TargetRoleID; // Offset: 0xb8 // Size: 0x08
	uint8_t TargetRoleType; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x7]; // Offset: 0xc1 // Size: 0x07
	StrProperty GunName; // Offset: 0xc8 // Size: 0x10
	StrProperty GunPartsType; // Offset: 0xd8 // Size: 0x10
	uint8_t SightType; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x3]; // Offset: 0xe9 // Size: 0x03
	IntProperty BulletSpeed; // Offset: 0xec // Size: 0x04
	uint8_t MagazineMax; // Offset: 0xf0 // Size: 0x01
	uint8_t MagazineLeft; // Offset: 0xf1 // Size: 0x01
	char pad_0xF2[0x2]; // Offset: 0xf2 // Size: 0x02
	IntProperty ShotFrequency; // Offset: 0xf4 // Size: 0x04
	IntProperty BulletDamage; // Offset: 0xf8 // Size: 0x04
	int16_t BulletDown; // Offset: 0xfc // Size: 0x02
	char BulletDamageReduce; // Offset: 0xfe // Size: 0x01
	char pad_0xFF[0x1]; // Offset: 0xff // Size: 0x01
	IntProperty Recoil; // Offset: 0x100 // Size: 0x04
	IntProperty ReloadTime; // Offset: 0x104 // Size: 0x04
	StrProperty PlayerState; // Offset: 0x108 // Size: 0x10
	char ShotPose; // Offset: 0x118 // Size: 0x01
	char FireType; // Offset: 0x119 // Size: 0x01
	char bHoldBreath : 1; // Offset: 0x11a // Size: 0x01
	char pad_0x11A_1 : 7; // Offset: 0x11a // Size: 0x01
	char Sideways; // Offset: 0x11b // Size: 0x01
	IntProperty ShootingDeviationX; // Offset: 0x11c // Size: 0x04
	IntProperty ShootingDeviationY; // Offset: 0x120 // Size: 0x04
	uint32_t ZeroDistance; // Offset: 0x124 // Size: 0x04
	uint32_t ShotTime; // Offset: 0x128 // Size: 0x04
	IntProperty HitTime; // Offset: 0x12c // Size: 0x04
	IntProperty PlayerPositionX; // Offset: 0x130 // Size: 0x04
	IntProperty PlayerPositionY; // Offset: 0x134 // Size: 0x04
	IntProperty PlayerPositionZ; // Offset: 0x138 // Size: 0x04
	IntProperty GunPositionX; // Offset: 0x13c // Size: 0x04
	IntProperty GunPositionY; // Offset: 0x140 // Size: 0x04
	IntProperty GunPositionZ; // Offset: 0x144 // Size: 0x04
	IntProperty BulletsBornPositionX; // Offset: 0x148 // Size: 0x04
	IntProperty BulletsBornPositionY; // Offset: 0x14c // Size: 0x04
	IntProperty BulletsBornPositionZ; // Offset: 0x150 // Size: 0x04
	uint32_t LastHitTime; // Offset: 0x154 // Size: 0x04
	uint32_t BulletFlyDistance; // Offset: 0x158 // Size: 0x04
	uint32_t BulletFlyTime; // Offset: 0x15c // Size: 0x04
	IntProperty HitPositionX; // Offset: 0x160 // Size: 0x04
	IntProperty HitPositionY; // Offset: 0x164 // Size: 0x04
	IntProperty HitPositionZ; // Offset: 0x168 // Size: 0x04
	char HitPart; // Offset: 0x16c // Size: 0x01
	char bHitCar : 1; // Offset: 0x16d // Size: 0x01
	char bTireOut : 1; // Offset: 0x16d // Size: 0x01
	char pad_0x16D_2 : 6; // Offset: 0x16d // Size: 0x01
	char BulletCost; // Offset: 0x16e // Size: 0x01
	char pad_0x16F[0x1]; // Offset: 0x16f // Size: 0x01
	IntProperty HPstart; // Offset: 0x170 // Size: 0x04
	IntProperty HPEnd; // Offset: 0x174 // Size: 0x04
	IntProperty ArmorHPStart; // Offset: 0x178 // Size: 0x04
	IntProperty ArmorHPEnd; // Offset: 0x17c // Size: 0x04
	IntProperty CarHPStart; // Offset: 0x180 // Size: 0x04
	IntProperty CarHPEnd; // Offset: 0x184 // Size: 0x04
	char PlayerKill; // Offset: 0x188 // Size: 0x01
	char bArmorKill : 1; // Offset: 0x189 // Size: 0x01
	char bCarKill : 1; // Offset: 0x189 // Size: 0x01
	char pad_0x189_2 : 6; // Offset: 0x189 // Size: 0x01
	char pad_0x18A[0x2]; // Offset: 0x18a // Size: 0x02
	IntProperty RecoilMoveX; // Offset: 0x18c // Size: 0x04
	IntProperty RecoilMoveY; // Offset: 0x190 // Size: 0x04
	IntProperty WeaponAimFOV; // Offset: 0x194 // Size: 0x04
	IntProperty BulletDamageDebuff; // Offset: 0x198 // Size: 0x04
	IntProperty BulletDamageBuff; // Offset: 0x19c // Size: 0x04
	IntProperty BulletType; // Offset: 0x1a0 // Size: 0x04
	uint32_t AtackFlowID; // Offset: 0x1a4 // Size: 0x04
	IntProperty AutoAimSpeed; // Offset: 0x1a8 // Size: 0x04
	IntProperty AutoAimSpeedRateMax; // Offset: 0x1ac // Size: 0x04
	IntProperty AutoAimRangeMax; // Offset: 0x1b0 // Size: 0x04
	IntProperty AutoAimRangeRateMax; // Offset: 0x1b4 // Size: 0x04
	IntProperty GunID; // Offset: 0x1b8 // Size: 0x04
	IntProperty IfIsOnCar; // Offset: 0x1bc // Size: 0x04
	bool InMoveablePlatform; // Offset: 0x1c0 // Size: 0x01
	char pad_0x1C1[0x3]; // Offset: 0x1c1 // Size: 0x03
	IntProperty KillAICnt; // Offset: 0x1c4 // Size: 0x04
	IntProperty KillRealPlayerCnt; // Offset: 0x1c8 // Size: 0x04
	float CameraRotationX; // Offset: 0x1cc // Size: 0x04
	float CameraRotationY; // Offset: 0x1d0 // Size: 0x04
	float CameraRotationZ; // Offset: 0x1d4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AimFlow
// Size: 0x128 // Inherited bytes: 0x00
struct FAimFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	uint64 RoleID; // Offset: 0x88 // Size: 0x08
	uint8_t RoleType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	IntProperty AimTime; // Offset: 0x94 // Size: 0x04
	StrProperty ShotCDTime; // Offset: 0x98 // Size: 0x10
	IntProperty ShotCount; // Offset: 0xa8 // Size: 0x04
	IntProperty ShotHitCount; // Offset: 0xac // Size: 0x04
	IntProperty ShotHeadHitCount; // Offset: 0xb0 // Size: 0x04
	IntProperty ShotPersonHitCount; // Offset: 0xb4 // Size: 0x04
	IntProperty ShotPersonKillCount; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	StrProperty HitDistance; // Offset: 0xc0 // Size: 0x10
	StrProperty HitEachDistance; // Offset: 0xd0 // Size: 0x10
	StrProperty HitAngle; // Offset: 0xe0 // Size: 0x10
	StrProperty HitEachCdTime; // Offset: 0xf0 // Size: 0x10
	StrProperty HitPartInfo; // Offset: 0x100 // Size: 0x10
	StrProperty PlayerState; // Offset: 0x110 // Size: 0x10
	char bHoldBreath : 1; // Offset: 0x120 // Size: 0x01
	char pad_0x120_1 : 7; // Offset: 0x120 // Size: 0x01
	uint8_t SightType; // Offset: 0x121 // Size: 0x01
	char pad_0x122[0x2]; // Offset: 0x122 // Size: 0x02
	uint32_t AimFlowID; // Offset: 0x124 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameEndFlow
// Size: 0x200 // Inherited bytes: 0x00
struct FGameEndFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	uint64 RoleID; // Offset: 0x88 // Size: 0x08
	uint8_t RoleType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	StrProperty ClientVersion; // Offset: 0x98 // Size: 0x10
	uint32_t OverTime; // Offset: 0xa8 // Size: 0x04
	uint8_t EndType; // Offset: 0xac // Size: 0x01
	char KillCount; // Offset: 0xad // Size: 0x01
	char AssistsCount; // Offset: 0xae // Size: 0x01
	char DropCount; // Offset: 0xaf // Size: 0x01
	char SaveCount; // Offset: 0xb0 // Size: 0x01
	char RebornCount; // Offset: 0xb1 // Size: 0x01
	char AliveType : 1; // Offset: 0xb2 // Size: 0x01
	char pad_0xB2_1 : 7; // Offset: 0xb2 // Size: 0x01
	char pad_0xB3[0x1]; // Offset: 0xb3 // Size: 0x01
	IntProperty GoldGet; // Offset: 0xb4 // Size: 0x04
	IntProperty DiamondGet; // Offset: 0xb8 // Size: 0x04
	IntProperty ExpGet; // Offset: 0xbc // Size: 0x04
	char WinRank; // Offset: 0xc0 // Size: 0x01
	char TotalPlayers; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x2]; // Offset: 0xc2 // Size: 0x02
	IntProperty PlayerRank; // Offset: 0xc4 // Size: 0x04
	IntProperty RankEnd; // Offset: 0xc8 // Size: 0x04
	IntProperty TeamID; // Offset: 0xcc // Size: 0x04
	StrProperty TeamPlayer1; // Offset: 0xd0 // Size: 0x10
	StrProperty TeamPlayer2; // Offset: 0xe0 // Size: 0x10
	StrProperty TeamPlayer3; // Offset: 0xf0 // Size: 0x10
	char TeamPlayer1AliveType : 1; // Offset: 0x100 // Size: 0x01
	char TeamPlayer2AliveType : 1; // Offset: 0x100 // Size: 0x01
	char TeamPlayer3AliveType : 1; // Offset: 0x100 // Size: 0x01
	char pad_0x100_3 : 5; // Offset: 0x100 // Size: 0x01
	char TeamPlayer1Kill; // Offset: 0x101 // Size: 0x01
	char TeamPlayer2Kill; // Offset: 0x102 // Size: 0x01
	char TeamPlayer3Kill; // Offset: 0x103 // Size: 0x01
	uint32_t GameEndFlowID; // Offset: 0x104 // Size: 0x04
	char AIKillCount; // Offset: 0x108 // Size: 0x01
	char KillHeadShotCount; // Offset: 0x109 // Size: 0x01
	char RoundCircleCount; // Offset: 0x10a // Size: 0x01
	char PlayerLastKillGet; // Offset: 0x10b // Size: 0x01
	IntProperty ChangeWearingCount; // Offset: 0x10c // Size: 0x04
	struct TArray<IntProperty> ChangeWearingCountInReady; // Offset: 0x110 // Size: 0x10
	struct TArray<IntProperty> ChangeWearingCountInBattle; // Offset: 0x120 // Size: 0x10
	float AllowChangeWearingTime; // Offset: 0x130 // Size: 0x04
	float BattleStateTime; // Offset: 0x134 // Size: 0x04
	struct TArray<IntProperty> UseQuickMsgIDArray; // Offset: 0x138 // Size: 0x10
	struct TArray<IntProperty> UseQuickMsgCountArray; // Offset: 0x148 // Size: 0x10
	struct TArray<IntProperty> UseWheelMsgIDArray; // Offset: 0x158 // Size: 0x10
	struct TArray<IntProperty> UseWheelMsgCountArray; // Offset: 0x168 // Size: 0x10
	struct TArray<IntProperty> InexistentAvatarStat; // Offset: 0x178 // Size: 0x10
	struct TArray<IntProperty> InexistentAvatarInBornStat; // Offset: 0x188 // Size: 0x10
	struct TArray<IntProperty> InexistentWeaponAvatarStat; // Offset: 0x198 // Size: 0x10
	struct TArray<IntProperty> InexistentVehicleAvatarStat; // Offset: 0x1a8 // Size: 0x10
	IntProperty InexistentPlaneAvatarStat; // Offset: 0x1b8 // Size: 0x04
	IntProperty InexistentEmoteAvatarStat; // Offset: 0x1bc // Size: 0x04
	char ShowMsgCnt; // Offset: 0x1c0 // Size: 0x01
	char UserConfirmCnt; // Offset: 0x1c1 // Size: 0x01
	char UserCancelCnt; // Offset: 0x1c2 // Size: 0x01
	char UserDoNothingCnt; // Offset: 0x1c3 // Size: 0x01
	float FPSBeforeAdapt; // Offset: 0x1c4 // Size: 0x04
	float FPSAfterAdapt; // Offset: 0x1c8 // Size: 0x04
	float TeammateMicrophoneTime; // Offset: 0x1cc // Size: 0x04
	float TeammateSpeakerTime; // Offset: 0x1d0 // Size: 0x04
	float EnemyMicrophoneTime; // Offset: 0x1d4 // Size: 0x04
	float EnemySpeakerTime; // Offset: 0x1d8 // Size: 0x04
	float TeammateInterphoneTime; // Offset: 0x1dc // Size: 0x04
	float EnemyInterphoneTime; // Offset: 0x1e0 // Size: 0x04
	char PlayerUseQuickSight; // Offset: 0x1e4 // Size: 0x01
	char PlayerUseShoulderCnt; // Offset: 0x1e5 // Size: 0x01
	char pad_0x1E6[0x2]; // Offset: 0x1e6 // Size: 0x02
	IntProperty MaxVehicleToLandHeight; // Offset: 0x1e8 // Size: 0x04
	IntProperty MaxVehicleInAirInterval; // Offset: 0x1ec // Size: 0x04
	IntProperty PlayerMoveSpeedMax; // Offset: 0x1f0 // Size: 0x04
	IntProperty PlayerJumpHeightMax; // Offset: 0x1f4 // Size: 0x04
	IntProperty PlayerJumpSpeedMax; // Offset: 0x1f8 // Size: 0x04
	char pad_0x1FC[0x4]; // Offset: 0x1fc // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.TeammatHurtFlow
// Size: 0x10 // Inherited bytes: 0x00
struct FTeammatHurtFlow {
	// Fields
	struct TArray<struct FTeammatHurtFlowNode> TeammatHurtList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.TeammatHurtFlowNode
// Size: 0x60 // Inherited bytes: 0x00
struct FTeammatHurtFlowNode {
	// Fields
	StrProperty HurtPlayerName; // Offset: 0x00 // Size: 0x10
	IntProperty GameModeType; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty MakeHurtPlayerName; // Offset: 0x18 // Size: 0x10
	StrProperty DataTimes; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	StrProperty OpenID; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ForbitPickFlow
// Size: 0x10 // Inherited bytes: 0x00
struct FForbitPickFlow {
	// Fields
	struct TArray<struct FForbitPickFlowNode> forbitList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ForbitPickFlowNode
// Size: 0x48 // Inherited bytes: 0x00
struct FForbitPickFlowNode {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	uint16_t AreaID; // Offset: 0x10 // Size: 0x02
	uint8_t PlatID; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
	StrProperty ZoneID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> forbitNumList; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ClientGameEndFlow
// Size: 0x148 // Inherited bytes: 0x00
struct FClientGameEndFlow {
	// Fields
	int64_t ClientStartTime; // Offset: 0x00 // Size: 0x08
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x08 // Size: 0x10
	StrProperty ClientVersion; // Offset: 0x18 // Size: 0x10
	uint32_t OverTime; // Offset: 0x28 // Size: 0x04
	uint8_t EndType; // Offset: 0x2c // Size: 0x01
	char KillCount; // Offset: 0x2d // Size: 0x01
	char AssistsCount; // Offset: 0x2e // Size: 0x01
	char DropCount; // Offset: 0x2f // Size: 0x01
	char SaveCount; // Offset: 0x30 // Size: 0x01
	char RebornCount; // Offset: 0x31 // Size: 0x01
	char AliveType : 1; // Offset: 0x32 // Size: 0x01
	char pad_0x32_1 : 7; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x1]; // Offset: 0x33 // Size: 0x01
	IntProperty GoldGet; // Offset: 0x34 // Size: 0x04
	IntProperty DiamondGet; // Offset: 0x38 // Size: 0x04
	IntProperty ExpGet; // Offset: 0x3c // Size: 0x04
	char WinRank; // Offset: 0x40 // Size: 0x01
	char TotalPlayers; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x2]; // Offset: 0x42 // Size: 0x02
	IntProperty PlayerRank; // Offset: 0x44 // Size: 0x04
	IntProperty RankEnd; // Offset: 0x48 // Size: 0x04
	IntProperty TeamID; // Offset: 0x4c // Size: 0x04
	StrProperty TeamPlayer1; // Offset: 0x50 // Size: 0x10
	StrProperty TeamPlayer2; // Offset: 0x60 // Size: 0x10
	StrProperty TeamPlayer3; // Offset: 0x70 // Size: 0x10
	char TeamPlayer1AliveType : 1; // Offset: 0x80 // Size: 0x01
	char TeamPlayer2AliveType : 1; // Offset: 0x80 // Size: 0x01
	char TeamPlayer3AliveType : 1; // Offset: 0x80 // Size: 0x01
	char pad_0x80_3 : 5; // Offset: 0x80 // Size: 0x01
	char TeamPlayer1Kill; // Offset: 0x81 // Size: 0x01
	char TeamPlayer2Kill; // Offset: 0x82 // Size: 0x01
	char TeamPlayer3Kill; // Offset: 0x83 // Size: 0x01
	uint32_t GameEndFlowID; // Offset: 0x84 // Size: 0x04
	char RoundCircleCount; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct TArray<IntProperty> UseQuickMsgIDArray; // Offset: 0x90 // Size: 0x10
	struct TArray<IntProperty> UseQuickMsgCountArray; // Offset: 0xa0 // Size: 0x10
	struct TArray<IntProperty> UseWheelMsgIDArray; // Offset: 0xb0 // Size: 0x10
	struct TArray<IntProperty> UseWheelMsgCountArray; // Offset: 0xc0 // Size: 0x10
	struct TArray<IntProperty> InexistentAvatarStat; // Offset: 0xd0 // Size: 0x10
	struct TArray<IntProperty> InexistentAvatarInBornStat; // Offset: 0xe0 // Size: 0x10
	struct TArray<IntProperty> InexistentWeaponAvatarStat; // Offset: 0xf0 // Size: 0x10
	struct TArray<IntProperty> InexistentVehicleAvatarStat; // Offset: 0x100 // Size: 0x10
	IntProperty InexistentPlaneAvatarStat; // Offset: 0x110 // Size: 0x04
	IntProperty InexistentEmoteAvatarStat; // Offset: 0x114 // Size: 0x04
	char ShowMsgCnt; // Offset: 0x118 // Size: 0x01
	char UserConfirmCnt; // Offset: 0x119 // Size: 0x01
	char UserCancelCnt; // Offset: 0x11a // Size: 0x01
	char UserDoNothingCnt; // Offset: 0x11b // Size: 0x01
	float FPSBeforeAdapt; // Offset: 0x11c // Size: 0x04
	float FPSAfterAdapt; // Offset: 0x120 // Size: 0x04
	float TeammateMicrophoneTime; // Offset: 0x124 // Size: 0x04
	float TeammateSpeakerTime; // Offset: 0x128 // Size: 0x04
	float EnemyMicrophoneTime; // Offset: 0x12c // Size: 0x04
	float EnemySpeakerTime; // Offset: 0x130 // Size: 0x04
	float TeammateInterphoneTime; // Offset: 0x134 // Size: 0x04
	float EnemyInterphoneTime; // Offset: 0x138 // Size: 0x04
	char PlayerUseQuickSight; // Offset: 0x13c // Size: 0x01
	char PlayerUseShoulderCnt; // Offset: 0x13d // Size: 0x01
	char pad_0x13E[0x2]; // Offset: 0x13e // Size: 0x02
	IntProperty PlayerMoveSpeedMax; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.InexistentAvatarFlow
// Size: 0x1e0 // Inherited bytes: 0x00
struct FInexistentAvatarFlow {
	// Fields
	char pad_0x0[0x1e0]; // Offset: 0x00 // Size: 0x1e0
};

// Object Name: ScriptStruct Gameplay.DSFinalCircleFlow
// Size: 0xb8 // Inherited bytes: 0x00
struct FDSFinalCircleFlow {
	// Fields
	int64_t dtEventTime; // Offset: 0x00 // Size: 0x08
	uint64 BattleID; // Offset: 0x08 // Size: 0x08
	uint64 RoleID; // Offset: 0x10 // Size: 0x08
	uint32_t GameStartTime; // Offset: 0x18 // Size: 0x04
	uint32_t FlowReportTime; // Offset: 0x1c // Size: 0x04
	uint32_t NewCircleBornTime; // Offset: 0x20 // Size: 0x04
	IntProperty NewCircleCount; // Offset: 0x24 // Size: 0x04
	IntProperty RecoveryTotal; // Offset: 0x28 // Size: 0x04
	IntProperty EnergyRecoveryTotal; // Offset: 0x2c // Size: 0x04
	IntProperty PlayerMoveDis; // Offset: 0x30 // Size: 0x04
	IntProperty PlayerDriveMoveDis; // Offset: 0x34 // Size: 0x04
	IntProperty PlayerDriveMoveTime; // Offset: 0x38 // Size: 0x04
	IntProperty PlayerCreepMoveTime; // Offset: 0x3c // Size: 0x04
	IntProperty RecordType; // Offset: 0x40 // Size: 0x04
	IntProperty PlayerKillRealPlayerCount; // Offset: 0x44 // Size: 0x04
	IntProperty PlayerKillMLDeliverAICount; // Offset: 0x48 // Size: 0x04
	IntProperty PlayerKillMLAICount; // Offset: 0x4c // Size: 0x04
	IntProperty PlayerKillBehaviorTreeDeliverAICount; // Offset: 0x50 // Size: 0x04
	IntProperty PlayerKillBehaviorTreeAICount; // Offset: 0x54 // Size: 0x04
	IntProperty KillerType; // Offset: 0x58 // Size: 0x04
	IntProperty KnockDownRealPlayerCount; // Offset: 0x5c // Size: 0x04
	IntProperty KnockDownMLDeliverAICount; // Offset: 0x60 // Size: 0x04
	IntProperty KnockDownMLAICount; // Offset: 0x64 // Size: 0x04
	IntProperty KnockDownBehaviorTreeDeliverAICount; // Offset: 0x68 // Size: 0x04
	IntProperty KnockDownBehaviorTreeAICount; // Offset: 0x6c // Size: 0x04
	IntProperty BeKnockDownRealPlayerCount; // Offset: 0x70 // Size: 0x04
	IntProperty BeKnockDownMLDeliverAICount; // Offset: 0x74 // Size: 0x04
	IntProperty BeKnockDownMLAICount; // Offset: 0x78 // Size: 0x04
	IntProperty BeKnockDownBehaviorTreeDeliverAICount; // Offset: 0x7c // Size: 0x04
	IntProperty BeKnockDownBehaviorTreeAICount; // Offset: 0x80 // Size: 0x04
	IntProperty DamageRealPlayerAmount; // Offset: 0x84 // Size: 0x04
	IntProperty DamageMLDeliverAIAmount; // Offset: 0x88 // Size: 0x04
	IntProperty DamageMLAIAmount; // Offset: 0x8c // Size: 0x04
	IntProperty DamageBehaviorTreeDeliverAIAmount; // Offset: 0x90 // Size: 0x04
	IntProperty DamageBehaviorTreeAIAmount; // Offset: 0x94 // Size: 0x04
	IntProperty DamageFromRealPlayerAmount; // Offset: 0x98 // Size: 0x04
	IntProperty DamageFromMLDeliverAIAmount; // Offset: 0x9c // Size: 0x04
	IntProperty DamageFromMLAIAmount; // Offset: 0xa0 // Size: 0x04
	IntProperty DamageFromBehaviorTreeDeliverAIAmount; // Offset: 0xa4 // Size: 0x04
	IntProperty DamageFromBehaviorTreeAIAmount; // Offset: 0xa8 // Size: 0x04
	IntProperty TeammateNum; // Offset: 0xac // Size: 0x04
	IntProperty MapID; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CircleFlow
// Size: 0x2b0 // Inherited bytes: 0x00
struct FCircleFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x88 // Size: 0x10
	uint64 RoleID; // Offset: 0x98 // Size: 0x08
	uint8_t RoleType; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	uint32_t GameStartTime; // Offset: 0xa4 // Size: 0x04
	uint32_t NewCircleBornTime; // Offset: 0xa8 // Size: 0x04
	IntProperty NewCirclePositionX; // Offset: 0xac // Size: 0x04
	IntProperty NewCirclePositionY; // Offset: 0xb0 // Size: 0x04
	IntProperty NewCirclePositionRadius; // Offset: 0xb4 // Size: 0x04
	IntProperty NewCircleCount; // Offset: 0xb8 // Size: 0x04
	IntProperty PlayerPositionX; // Offset: 0xbc // Size: 0x04
	IntProperty PlayerPositionY; // Offset: 0xc0 // Size: 0x04
	IntProperty PlayerPositionZ; // Offset: 0xc4 // Size: 0x04
	IntProperty PlayerHP; // Offset: 0xc8 // Size: 0x04
	uint32_t OldCircleMoveTime; // Offset: 0xcc // Size: 0x04
	uint32_t OldCircleMoveEndTime; // Offset: 0xd0 // Size: 0x04
	IntProperty PlayerOutTime; // Offset: 0xd4 // Size: 0x04
	IntProperty CirclePoisonCount; // Offset: 0xd8 // Size: 0x04
	IntProperty CirclePoisonMin; // Offset: 0xdc // Size: 0x04
	IntProperty CirclePoisonMax; // Offset: 0xe0 // Size: 0x04
	IntProperty CirclePoisonAvg; // Offset: 0xe4 // Size: 0x04
	IntProperty CirclePoisonTotal; // Offset: 0xe8 // Size: 0x04
	IntProperty CirclePoisonDrop; // Offset: 0xec // Size: 0x04
	IntProperty CirclePoisonDead; // Offset: 0xf0 // Size: 0x04
	IntProperty RecoveryCount; // Offset: 0xf4 // Size: 0x04
	IntProperty RecoveryMin; // Offset: 0xf8 // Size: 0x04
	IntProperty RecoveryMax; // Offset: 0xfc // Size: 0x04
	IntProperty RecoveryTotal; // Offset: 0x100 // Size: 0x04
	IntProperty EnergyRecoveryCount; // Offset: 0x104 // Size: 0x04
	IntProperty EnergyRecoveryMin; // Offset: 0x108 // Size: 0x04
	IntProperty EnergyRecoveryMax; // Offset: 0x10c // Size: 0x04
	IntProperty EnergyRecoveryTotal; // Offset: 0x110 // Size: 0x04
	char pad_0x114[0x4]; // Offset: 0x114 // Size: 0x04
	StrProperty RecoveryItemCounts; // Offset: 0x118 // Size: 0x10
	IntProperty EnergyStartLv; // Offset: 0x128 // Size: 0x04
	IntProperty EnergyStartTime; // Offset: 0x12c // Size: 0x04
	StrProperty EnergyItemUse; // Offset: 0x130 // Size: 0x10
	IntProperty EnergyLvTimeInfo; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	StrProperty EnergyRunFastTime; // Offset: 0x148 // Size: 0x10
	StrProperty EnergyRecoveryLvTimeInfo; // Offset: 0x158 // Size: 0x10
	IntProperty EnergyEndLv; // Offset: 0x168 // Size: 0x04
	IntProperty EnergyEndTime; // Offset: 0x16c // Size: 0x04
	IntProperty PlayerMoveDis; // Offset: 0x170 // Size: 0x04
	IntProperty PlayerSpeedMax; // Offset: 0x174 // Size: 0x04
	IntProperty PlayerSpeedAvg; // Offset: 0x178 // Size: 0x04
	IntProperty PlayerCarSpeedMax; // Offset: 0x17c // Size: 0x04
	IntProperty PlayerCarSpeedAvg; // Offset: 0x180 // Size: 0x04
	IntProperty PlayerSquatMoveDis; // Offset: 0x184 // Size: 0x04
	IntProperty PlayerSquatMoveTime; // Offset: 0x188 // Size: 0x04
	IntProperty PlayerCreepMoveDis; // Offset: 0x18c // Size: 0x04
	IntProperty PlayerCreepMoveTime; // Offset: 0x190 // Size: 0x04
	IntProperty PlayerRunMoveDis; // Offset: 0x194 // Size: 0x04
	IntProperty PlayerRunMoveTime; // Offset: 0x198 // Size: 0x04
	IntProperty PlayerDriveMoveDis; // Offset: 0x19c // Size: 0x04
	IntProperty PlayerDriveMoveTime; // Offset: 0x1a0 // Size: 0x04
	IntProperty PlayerCar; // Offset: 0x1a4 // Size: 0x04
	IntProperty PlayerCameraDistanceMax; // Offset: 0x1a8 // Size: 0x04
	uint32_t SecCircleFlowID; // Offset: 0x1ac // Size: 0x04
	IntProperty RecordType; // Offset: 0x1b0 // Size: 0x04
	char AutoAimType; // Offset: 0x1b4 // Size: 0x01
	char pad_0x1B5[0x3]; // Offset: 0x1b5 // Size: 0x03
	IntProperty AutoAimTime; // Offset: 0x1b8 // Size: 0x04
	IntProperty PlayerKillCount; // Offset: 0x1bc // Size: 0x04
	IntProperty PlayerKillAICount; // Offset: 0x1c0 // Size: 0x04
	IntProperty PlayerHeadKillCount; // Offset: 0x1c4 // Size: 0x04
	IntProperty PlayerKillRealPlayerCount; // Offset: 0x1c8 // Size: 0x04
	IntProperty PlayerKillMLDeliverAICount; // Offset: 0x1cc // Size: 0x04
	IntProperty PlayerKillMLAICount; // Offset: 0x1d0 // Size: 0x04
	IntProperty PlayerKillBehaviorTreeDeliverAICount; // Offset: 0x1d4 // Size: 0x04
	IntProperty PlayerKillBehaviorTreeAICount; // Offset: 0x1d8 // Size: 0x04
	IntProperty KillerType; // Offset: 0x1dc // Size: 0x04
	IntProperty KnockDownRealPlayerCount; // Offset: 0x1e0 // Size: 0x04
	IntProperty KnockDownMLDeliverAICount; // Offset: 0x1e4 // Size: 0x04
	IntProperty KnockDownMLAICount; // Offset: 0x1e8 // Size: 0x04
	IntProperty KnockDownBehaviorTreeDeliverAICount; // Offset: 0x1ec // Size: 0x04
	IntProperty KnockDownBehaviorTreeAICount; // Offset: 0x1f0 // Size: 0x04
	IntProperty BeKnockDownRealPlayerCount; // Offset: 0x1f4 // Size: 0x04
	IntProperty BeKnockDownMLDeliverAICount; // Offset: 0x1f8 // Size: 0x04
	IntProperty BeKnockDownMLAICount; // Offset: 0x1fc // Size: 0x04
	IntProperty BeKnockDownBehaviorTreeDeliverAICount; // Offset: 0x200 // Size: 0x04
	IntProperty BeKnockDownBehaviorTreeAICount; // Offset: 0x204 // Size: 0x04
	IntProperty DamageRealPlayerAmount; // Offset: 0x208 // Size: 0x04
	IntProperty DamageMLDeliverAIAmount; // Offset: 0x20c // Size: 0x04
	IntProperty DamageMLAIAmount; // Offset: 0x210 // Size: 0x04
	IntProperty DamageBehaviorTreeDeliverAIAmount; // Offset: 0x214 // Size: 0x04
	IntProperty DamageBehaviorTreeAIAmount; // Offset: 0x218 // Size: 0x04
	IntProperty DamageFromRealPlayerAmount; // Offset: 0x21c // Size: 0x04
	IntProperty DamageFromMLDeliverAIAmount; // Offset: 0x220 // Size: 0x04
	IntProperty DamageFromMLAIAmount; // Offset: 0x224 // Size: 0x04
	IntProperty DamageFromBehaviorTreeDeliverAIAmount; // Offset: 0x228 // Size: 0x04
	IntProperty DamageFromBehaviorTreeAIAmount; // Offset: 0x22c // Size: 0x04
	IntProperty AssistCount; // Offset: 0x230 // Size: 0x04
	IntProperty AirDropCount; // Offset: 0x234 // Size: 0x04
	IntProperty PickUpItemTimes; // Offset: 0x238 // Size: 0x04
	IntProperty RescueCount; // Offset: 0x23c // Size: 0x04
	IntProperty ShotWeaponCount; // Offset: 0x240 // Size: 0x04
	IntProperty PlayerHatID; // Offset: 0x244 // Size: 0x04
	IntProperty PlayerMaskID; // Offset: 0x248 // Size: 0x04
	IntProperty PlayerShirtID; // Offset: 0x24c // Size: 0x04
	IntProperty PlayerPantsID; // Offset: 0x250 // Size: 0x04
	IntProperty MedicineEnergyCnt; // Offset: 0x254 // Size: 0x04
	IntProperty MedicineAdrenalineCnt; // Offset: 0x258 // Size: 0x04
	IntProperty MedicinePainkillerCnt; // Offset: 0x25c // Size: 0x04
	IntProperty MedicineBandageCnt; // Offset: 0x260 // Size: 0x04
	IntProperty MedicineFirstAidKitCnt; // Offset: 0x264 // Size: 0x04
	IntProperty MedicineTreatmentCnt; // Offset: 0x268 // Size: 0x04
	float OccupiedCapacity; // Offset: 0x26c // Size: 0x04
	float ArmorPoints; // Offset: 0x270 // Size: 0x04
	IntProperty TeammateNum; // Offset: 0x274 // Size: 0x04
	IntProperty MainWeaponId1; // Offset: 0x278 // Size: 0x04
	IntProperty MainWeaponBulletId1; // Offset: 0x27c // Size: 0x04
	IntProperty MainWeaponBulletNum1; // Offset: 0x280 // Size: 0x04
	IntProperty MainWeaponId2; // Offset: 0x284 // Size: 0x04
	IntProperty MainWeaponBulletId2; // Offset: 0x288 // Size: 0x04
	IntProperty MainWeaponBulletNum2; // Offset: 0x28c // Size: 0x04
	IntProperty SubWeaponID; // Offset: 0x290 // Size: 0x04
	IntProperty SubWeaponBulletId; // Offset: 0x294 // Size: 0x04
	IntProperty SubWeaponBulletNum; // Offset: 0x298 // Size: 0x04
	char pad_0x29C[0x4]; // Offset: 0x29c // Size: 0x04
	StrProperty MrpcsFlowStr; // Offset: 0x2a0 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DSCircleFlow
// Size: 0x28 // Inherited bytes: 0x00
struct FDSCircleFlow {
	// Fields
	uint32_t GameStartTime; // Offset: 0x00 // Size: 0x04
	uint32_t NewCircleBornTime; // Offset: 0x04 // Size: 0x04
	IntProperty NewCircleCount; // Offset: 0x08 // Size: 0x04
	IntProperty RecoveryTotal; // Offset: 0x0c // Size: 0x04
	IntProperty EnergyRecoveryTotal; // Offset: 0x10 // Size: 0x04
	IntProperty PlayerMoveDis; // Offset: 0x14 // Size: 0x04
	IntProperty PlayerDriveMoveDis; // Offset: 0x18 // Size: 0x04
	IntProperty PlayerDriveMoveTime; // Offset: 0x1c // Size: 0x04
	IntProperty PlayerCreepMoveTime; // Offset: 0x20 // Size: 0x04
	IntProperty RecordType; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ClientCircleFlow
// Size: 0x158 // Inherited bytes: 0x00
struct FClientCircleFlow {
	// Fields
	int64_t ClientStartTime; // Offset: 0x00 // Size: 0x08
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x08 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x18 // Size: 0x10
	uint32_t GameStartTime; // Offset: 0x28 // Size: 0x04
	uint32_t NewCircleBornTime; // Offset: 0x2c // Size: 0x04
	IntProperty NewCirclePositionX; // Offset: 0x30 // Size: 0x04
	IntProperty NewCirclePositionY; // Offset: 0x34 // Size: 0x04
	IntProperty NewCirclePositionRadius; // Offset: 0x38 // Size: 0x04
	IntProperty NewCircleCount; // Offset: 0x3c // Size: 0x04
	IntProperty PlayerPositionX; // Offset: 0x40 // Size: 0x04
	IntProperty PlayerPositionY; // Offset: 0x44 // Size: 0x04
	IntProperty PlayerPositionZ; // Offset: 0x48 // Size: 0x04
	IntProperty PlayerHP; // Offset: 0x4c // Size: 0x04
	uint32_t OldCircleMoveTime; // Offset: 0x50 // Size: 0x04
	uint32_t OldCircleMoveEndTime; // Offset: 0x54 // Size: 0x04
	uint32_t PlayerOutTime; // Offset: 0x58 // Size: 0x04
	IntProperty CirclePoisonCount; // Offset: 0x5c // Size: 0x04
	IntProperty CirclePoisonMin; // Offset: 0x60 // Size: 0x04
	IntProperty CirclePoisonMax; // Offset: 0x64 // Size: 0x04
	IntProperty CirclePoisonAvg; // Offset: 0x68 // Size: 0x04
	IntProperty CirclePoisonTotal; // Offset: 0x6c // Size: 0x04
	IntProperty CirclePoisonDrop; // Offset: 0x70 // Size: 0x04
	IntProperty CirclePoisonDead; // Offset: 0x74 // Size: 0x04
	IntProperty RecoveryCount; // Offset: 0x78 // Size: 0x04
	IntProperty RecoveryMin; // Offset: 0x7c // Size: 0x04
	IntProperty RecoveryMax; // Offset: 0x80 // Size: 0x04
	IntProperty RecoveryTotal; // Offset: 0x84 // Size: 0x04
	IntProperty EnergyRecoveryCount; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct TArray<struct FRecoveryItemCount> RecoveryItemCounts; // Offset: 0x90 // Size: 0x10
	IntProperty EnergyRecoveryMin; // Offset: 0xa0 // Size: 0x04
	IntProperty EnergyRecoveryMax; // Offset: 0xa4 // Size: 0x04
	IntProperty EnergyRecoveryTotal; // Offset: 0xa8 // Size: 0x04
	IntProperty EnergyStartLv; // Offset: 0xac // Size: 0x04
	IntProperty EnergyStartTime; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	StrProperty EnergyItemUse; // Offset: 0xb8 // Size: 0x10
	IntProperty EnergyLvTimeInfo; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	StrProperty EnergyRunFastTime; // Offset: 0xd0 // Size: 0x10
	StrProperty EnergyRecoveryLvTimeInfo; // Offset: 0xe0 // Size: 0x10
	IntProperty EnergyEndLv; // Offset: 0xf0 // Size: 0x04
	IntProperty EnergyEndTime; // Offset: 0xf4 // Size: 0x04
	IntProperty PlayerMoveDis; // Offset: 0xf8 // Size: 0x04
	IntProperty PlayerSpeedMax; // Offset: 0xfc // Size: 0x04
	IntProperty PlayerSpeedAvg; // Offset: 0x100 // Size: 0x04
	IntProperty PlayerCarSpeedMax; // Offset: 0x104 // Size: 0x04
	IntProperty PlayerCarSpeedAvg; // Offset: 0x108 // Size: 0x04
	IntProperty PlayerSquatMoveDis; // Offset: 0x10c // Size: 0x04
	IntProperty PlayerSquatMoveTime; // Offset: 0x110 // Size: 0x04
	IntProperty PlayerCreepMoveDis; // Offset: 0x114 // Size: 0x04
	IntProperty PlayerCreepMoveTime; // Offset: 0x118 // Size: 0x04
	IntProperty PlayerRunMoveDis; // Offset: 0x11c // Size: 0x04
	IntProperty PlayerRunMoveTime; // Offset: 0x120 // Size: 0x04
	IntProperty PlayerDriveMoveDis; // Offset: 0x124 // Size: 0x04
	IntProperty PlayerDriveMoveTime; // Offset: 0x128 // Size: 0x04
	IntProperty PlayerCar; // Offset: 0x12c // Size: 0x04
	IntProperty PlayerCameraDistanceMax; // Offset: 0x130 // Size: 0x04
	uint32_t SecCircleFlowID; // Offset: 0x134 // Size: 0x04
	IntProperty RecordType; // Offset: 0x138 // Size: 0x04
	char AutoAimType; // Offset: 0x13c // Size: 0x01
	char pad_0x13D[0x3]; // Offset: 0x13d // Size: 0x03
	IntProperty AutoAimTime; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	struct TArray<char> MrpcsFlowData; // Offset: 0x148 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.RecoveryItemCount
// Size: 0x08 // Inherited bytes: 0x00
struct FRecoveryItemCount {
	// Fields
	uint32_t ItemId; // Offset: 0x00 // Size: 0x04
	uint32_t Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.JumpFlow
// Size: 0x150 // Inherited bytes: 0x00
struct FJumpFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	uint64 RoleID; // Offset: 0x88 // Size: 0x08
	uint8_t RoleType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	StrProperty PicUrl; // Offset: 0x98 // Size: 0x10
	StrProperty MapName; // Offset: 0xa8 // Size: 0x10
	uint8_t WeatherID; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x7]; // Offset: 0xb9 // Size: 0x07
	int64_t GameStartTime; // Offset: 0xc0 // Size: 0x08
	uint32_t StartJumpTime; // Offset: 0xc8 // Size: 0x04
	uint32_t EndJumpTime; // Offset: 0xcc // Size: 0x04
	uint32_t PlayerJumpTime; // Offset: 0xd0 // Size: 0x04
	uint32_t PlayerOpenTime; // Offset: 0xd4 // Size: 0x04
	uint32_t PlayerLandTime; // Offset: 0xd8 // Size: 0x04
	IntProperty PlayerJumpPositionX; // Offset: 0xdc // Size: 0x04
	IntProperty PlayerJumpPositionY; // Offset: 0xe0 // Size: 0x04
	IntProperty PlayerJumpPositionZ; // Offset: 0xe4 // Size: 0x04
	IntProperty PlaneJumpPositionX; // Offset: 0xe8 // Size: 0x04
	IntProperty PlaneJumpPositionY; // Offset: 0xec // Size: 0x04
	IntProperty PlaneJumpPositionZ; // Offset: 0xf0 // Size: 0x04
	IntProperty PlayerLandPositionX; // Offset: 0xf4 // Size: 0x04
	IntProperty PlayerLandPositionY; // Offset: 0xf8 // Size: 0x04
	IntProperty PlayerLandPositionZ; // Offset: 0xfc // Size: 0x04
	uint32_t PlayerLandDistance; // Offset: 0x100 // Size: 0x04
	uint32_t PlayerSpeedMax1; // Offset: 0x104 // Size: 0x04
	uint32_t PlayerSpeedMax2; // Offset: 0x108 // Size: 0x04
	char pad_0x10C[0x4]; // Offset: 0x10c // Size: 0x04
	StrProperty AntsVoiceTeamID; // Offset: 0x110 // Size: 0x10
	StrProperty AntsVoiceRoomID; // Offset: 0x120 // Size: 0x10
	IntProperty AntsVoiceTeamMemberID; // Offset: 0x130 // Size: 0x04
	IntProperty AntsVoiceRoomMemberID; // Offset: 0x134 // Size: 0x04
	StrProperty FollowPlayerUID; // Offset: 0x138 // Size: 0x10
	uint32_t ExitFollowTime; // Offset: 0x148 // Size: 0x04
	char pad_0x14C[0x4]; // Offset: 0x14c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ClientJumpFlow
// Size: 0xc0 // Inherited bytes: 0x00
struct FClientJumpFlow {
	// Fields
	int64_t ClientStartTime; // Offset: 0x00 // Size: 0x08
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x08 // Size: 0x10
	StrProperty MapName; // Offset: 0x18 // Size: 0x10
	uint8_t WeatherID; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	int64_t GameStartTime; // Offset: 0x30 // Size: 0x08
	uint32_t StartJumpTime; // Offset: 0x38 // Size: 0x04
	uint32_t EndJumpTime; // Offset: 0x3c // Size: 0x04
	uint32_t PlayerJumpTime; // Offset: 0x40 // Size: 0x04
	uint32_t PlayerOpenTime; // Offset: 0x44 // Size: 0x04
	uint32_t PlayerLandTime; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	StrProperty FollowPlayerUID; // Offset: 0x50 // Size: 0x10
	uint32_t ExitFollowTime; // Offset: 0x60 // Size: 0x04
	IntProperty PlayerJumpPositionX; // Offset: 0x64 // Size: 0x04
	IntProperty PlayerJumpPositionY; // Offset: 0x68 // Size: 0x04
	IntProperty PlayerJumpPositionZ; // Offset: 0x6c // Size: 0x04
	IntProperty PlaneJumpPositionX; // Offset: 0x70 // Size: 0x04
	IntProperty PlaneJumpPositionY; // Offset: 0x74 // Size: 0x04
	IntProperty PlaneJumpPositionZ; // Offset: 0x78 // Size: 0x04
	IntProperty PlayerLandPositionX; // Offset: 0x7c // Size: 0x04
	IntProperty PlayerLandPositionY; // Offset: 0x80 // Size: 0x04
	IntProperty PlayerLandPositionZ; // Offset: 0x84 // Size: 0x04
	uint32_t PlayerLandDistance; // Offset: 0x88 // Size: 0x04
	uint32_t PlayerSpeedMax1; // Offset: 0x8c // Size: 0x04
	uint32_t PlayerSpeedMax2; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	StrProperty AntsVoiceTeamID; // Offset: 0x98 // Size: 0x10
	StrProperty AntsVoiceRoomID; // Offset: 0xa8 // Size: 0x10
	IntProperty AntsVoiceTeamMemberID; // Offset: 0xb8 // Size: 0x04
	IntProperty AntsVoiceRoomMemberID; // Offset: 0xbc // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GameStartFlow
// Size: 0x1b8 // Inherited bytes: 0x00
struct FGameStartFlow {
	// Fields
	StrProperty GameSvrId; // Offset: 0x00 // Size: 0x10
	int64_t dtEventTime; // Offset: 0x10 // Size: 0x08
	StrProperty GameAppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	uint16_t AreaID; // Offset: 0x38 // Size: 0x02
	uint8_t PlatID; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x5]; // Offset: 0x3b // Size: 0x05
	StrProperty ZoneID; // Offset: 0x40 // Size: 0x10
	uint64 BattleID; // Offset: 0x50 // Size: 0x08
	int64_t ClientStartTime; // Offset: 0x58 // Size: 0x08
	IntProperty MrpcsFlowcount_; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x68 // Size: 0x10
	StrProperty UserName; // Offset: 0x78 // Size: 0x10
	uint64 RoleID; // Offset: 0x88 // Size: 0x08
	uint8_t RoleType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	StrProperty PicUrl; // Offset: 0x98 // Size: 0x10
	uint32_t SvrUserMoney1; // Offset: 0xa8 // Size: 0x04
	uint32_t SvrUserMoney2; // Offset: 0xac // Size: 0x04
	uint32_t SvrUserMoney3; // Offset: 0xb0 // Size: 0x04
	IntProperty SvrRoundRank; // Offset: 0xb4 // Size: 0x04
	IntProperty SvrRoundRank1; // Offset: 0xb8 // Size: 0x04
	IntProperty SvrRoundRank2; // Offset: 0xbc // Size: 0x04
	IntProperty SvrRoundRank3; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0x4]; // Offset: 0xc4 // Size: 0x04
	uint64 SvrRoleID; // Offset: 0xc8 // Size: 0x08
	uint8_t SvrRoleType; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
	StrProperty SvrMapName; // Offset: 0xd8 // Size: 0x10
	uint8_t SvrWeatherid; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
	StrProperty SvrItemList; // Offset: 0xf0 // Size: 0x10
	int64_t WaitStartTime; // Offset: 0x100 // Size: 0x08
	int64_t WaitEndTime; // Offset: 0x108 // Size: 0x08
	StrProperty MapName; // Offset: 0x110 // Size: 0x10
	uint8_t WeatherID; // Offset: 0x120 // Size: 0x01
	char pad_0x121[0x7]; // Offset: 0x121 // Size: 0x07
	StrProperty ItemList; // Offset: 0x128 // Size: 0x10
	uint8_t GameType; // Offset: 0x138 // Size: 0x01
	uint8_t TeamType; // Offset: 0x139 // Size: 0x01
	char AutoMatch; // Offset: 0x13a // Size: 0x01
	char PlayerCount; // Offset: 0x13b // Size: 0x01
	IntProperty TeamID; // Offset: 0x13c // Size: 0x04
	StrProperty TeamPlayer1; // Offset: 0x140 // Size: 0x10
	StrProperty TeamPlayer2; // Offset: 0x150 // Size: 0x10
	StrProperty TeamPlayer3; // Offset: 0x160 // Size: 0x10
	IntProperty TeamPlayer1Rank; // Offset: 0x170 // Size: 0x04
	IntProperty TeamPlayer2Rank; // Offset: 0x174 // Size: 0x04
	IntProperty TeamPlayer3Rank; // Offset: 0x178 // Size: 0x04
	uint32_t SecGameStartFlowFlowID; // Offset: 0x17c // Size: 0x04
	StrProperty AntsVoiceTeamID; // Offset: 0x180 // Size: 0x10
	StrProperty AntsVoiceRoomID; // Offset: 0x190 // Size: 0x10
	IntProperty AntsVoiceTeamMemberID; // Offset: 0x1a0 // Size: 0x04
	IntProperty AntsVoiceRoomMemberID; // Offset: 0x1a4 // Size: 0x04
	StrProperty IP; // Offset: 0x1a8 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.ClientGameStartFlow
// Size: 0xa8 // Inherited bytes: 0x00
struct FClientGameStartFlow {
	// Fields
	int64_t ClientStartTime; // Offset: 0x00 // Size: 0x08
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x08 // Size: 0x10
	StrProperty MapName; // Offset: 0x18 // Size: 0x10
	uint8_t WeatherID; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	StrProperty ItemList; // Offset: 0x30 // Size: 0x10
	uint8_t TeamType; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	IntProperty TeamID; // Offset: 0x44 // Size: 0x04
	StrProperty TeamPlayer1; // Offset: 0x48 // Size: 0x10
	StrProperty TeamPlayer2; // Offset: 0x58 // Size: 0x10
	StrProperty TeamPlayer3; // Offset: 0x68 // Size: 0x10
	uint32_t SecGameStartFlowFlowID; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	StrProperty AntsVoiceTeamID; // Offset: 0x80 // Size: 0x10
	StrProperty AntsVoiceRoomID; // Offset: 0x90 // Size: 0x10
	IntProperty AntsVoiceTeamMemberID; // Offset: 0xa0 // Size: 0x04
	IntProperty AntsVoiceRoomMemberID; // Offset: 0xa4 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.IntPosition3D
// Size: 0x0c // Inherited bytes: 0x00
struct FIntPosition3D {
	// Fields
	IntProperty X; // Offset: 0x00 // Size: 0x04
	IntProperty Y; // Offset: 0x04 // Size: 0x04
	IntProperty Z; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerRouteFlow
// Size: 0x78 // Inherited bytes: 0x00
struct FPlayerRouteFlow {
	// Fields
	StrProperty GameAppID; // Offset: 0x00 // Size: 0x10
	uint8_t PlatID; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty OpenID; // Offset: 0x18 // Size: 0x10
	uint64 UID; // Offset: 0x28 // Size: 0x08
	uint64 BattleID; // Offset: 0x30 // Size: 0x08
	uint8_t SeasonID; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	StrProperty PlayerName; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FPosAndTime> Route; // Offset: 0x50 // Size: 0x10
	struct FPosAndTime End; // Offset: 0x60 // Size: 0x18
};

// Object Name: ScriptStruct Gameplay.PosAndTime
// Size: 0x18 // Inherited bytes: 0x00
struct FPosAndTime {
	// Fields
	IntProperty LocationX; // Offset: 0x00 // Size: 0x04
	IntProperty LocationY; // Offset: 0x04 // Size: 0x04
	IntProperty LocationZ; // Offset: 0x08 // Size: 0x04
	IntProperty Time; // Offset: 0x0c // Size: 0x04
	uint64 PlayerState; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.ItemGenerateSpawnClass
// Size: 0xd8 // Inherited bytes: 0x00
struct FItemGenerateSpawnClass {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UObject* ItemClass; // Offset: 0x08 // Size: 0x08
	StrProperty ItemPath; // Offset: 0x10 // Size: 0x10
	IntProperty ItemCount; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty MetaData; // Offset: 0x28 // Size: 0x10
	StrProperty ItemValue; // Offset: 0x38 // Size: 0x10
	StrProperty ItemCategory; // Offset: 0x48 // Size: 0x10
	bool bRepeatGenerateItem; // Offset: 0x58 // Size: 0x01
	bool IsNearItem; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x2]; // Offset: 0x5a // Size: 0x02
	struct FVector SpotGenerateLoc; // Offset: 0x5c // Size: 0x0c
	struct FVector SpotGroupLoc; // Offset: 0x68 // Size: 0x0c
	struct FRotator SpotRotator; // Offset: 0x74 // Size: 0x0c
	IntProperty SpotPercent; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty SpotDefaultTag; // Offset: 0x88 // Size: 0x10
	char pad_0x98[0x8]; // Offset: 0x98 // Size: 0x08
	struct AActor* HostActor; // Offset: 0xa0 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> AttachedActor; // Offset: 0xa8 // Size: 0x08
	char pad_0xB0[0x14]; // Offset: 0xb0 // Size: 0x14
	IntProperty SpotIndex; // Offset: 0xc4 // Size: 0x04
	bool Random; // Offset: 0xc8 // Size: 0x01
	bool IsStickToTheGround; // Offset: 0xc9 // Size: 0x01
	char pad_0xCA[0x2]; // Offset: 0xca // Size: 0x02
	struct FVector RelativeLoc; // Offset: 0xcc // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.VehicleSpotDebugData
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleSpotDebugData {
	// Fields
	StrProperty VehicleSpotName; // Offset: 0x00 // Size: 0x10
	enum class ESpotType SpotType; // Offset: 0x10 // Size: 0x01
	enum class ESpotGroupType SpotGroupType; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	StrProperty VehiclePath; // Offset: 0x18 // Size: 0x10
	float VehicleLocationX; // Offset: 0x28 // Size: 0x04
	float VehicleLocationY; // Offset: 0x2c // Size: 0x04
	float VehicleLocationZ; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleGenerateStatisticsData
// Size: 0x60 // Inherited bytes: 0x00
struct FVehicleGenerateStatisticsData {
	// Fields
	struct TArray<struct FVehicleSpotStatisticsData> VehicleSpotStatisticsData; // Offset: 0x00 // Size: 0x10
	MapProperty VehicleClassStatisticsData; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.VehicleClassStatisticsData
// Size: 0x20 // Inherited bytes: 0x08
struct FVehicleClassStatisticsData : FTableRowBase {
	// Fields
	StrProperty VehiclePath; // Offset: 0x08 // Size: 0x10
	bool bValidPath; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty AllVehicleCount; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleSpotStatisticsData
// Size: 0x30 // Inherited bytes: 0x08
struct FVehicleSpotStatisticsData : FTableRowBase {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	StrProperty VehiclePath; // Offset: 0x10 // Size: 0x10
	float VehicleLocationX; // Offset: 0x20 // Size: 0x04
	float VehicleLocationY; // Offset: 0x24 // Size: 0x04
	float VehicleLocationZ; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ItemGenerateStatisticsData
// Size: 0x110 // Inherited bytes: 0x00
struct FItemGenerateStatisticsData {
	// Fields
	IntProperty AllGroupSpotCount; // Offset: 0x00 // Size: 0x04
	IntProperty AllValidGroupSpotCount; // Offset: 0x04 // Size: 0x04
	IntProperty AllSpotCount; // Offset: 0x08 // Size: 0x04
	IntProperty AllValidSpotCount; // Offset: 0x0c // Size: 0x04
	MapProperty GroupStatisticsData; // Offset: 0x10 // Size: 0x50
	MapProperty BuildingStatisticsData; // Offset: 0x60 // Size: 0x50
	MapProperty ItemStatisticsData; // Offset: 0xb0 // Size: 0x50
	struct TArray<struct FAreaItemStatisticsData> AreaItemStatisticsData; // Offset: 0x100 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.AreaItemStatisticsData
// Size: 0x50 // Inherited bytes: 0x08
struct FAreaItemStatisticsData : FTableRowBase {
	// Fields
	StrProperty ItemName; // Offset: 0x08 // Size: 0x10
	IntProperty UID; // Offset: 0x18 // Size: 0x04
	IntProperty ItemId; // Offset: 0x1c // Size: 0x04
	IntProperty GroupType; // Offset: 0x20 // Size: 0x04
	IntProperty SpotType; // Offset: 0x24 // Size: 0x04
	StrProperty AreaName; // Offset: 0x28 // Size: 0x10
	struct FVector Location; // Offset: 0x38 // Size: 0x0c
	float X; // Offset: 0x44 // Size: 0x04
	float Y; // Offset: 0x48 // Size: 0x04
	IntProperty GameTime; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ItemClassStatisticsData
// Size: 0x38 // Inherited bytes: 0x08
struct FItemClassStatisticsData : FTableRowBase {
	// Fields
	StrProperty ItemPath; // Offset: 0x08 // Size: 0x10
	bool bValidPath; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty ItemCount; // Offset: 0x1c // Size: 0x04
	StrProperty ItemTogetherPath; // Offset: 0x20 // Size: 0x10
	IntProperty ItemTogetherCount; // Offset: 0x30 // Size: 0x04
	bool bValidTogetherPath; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.BuildingStatisticsData
// Size: 0x80 // Inherited bytes: 0x08
struct FBuildingStatisticsData : FTableRowBase {
	// Fields
	StrProperty BuildingName; // Offset: 0x08 // Size: 0x10
	float BuildingLocationX; // Offset: 0x18 // Size: 0x04
	float BuildingLocationY; // Offset: 0x1c // Size: 0x04
	IntProperty AllGroupSpotCount; // Offset: 0x20 // Size: 0x04
	IntProperty AllValidGroupSpotCount; // Offset: 0x24 // Size: 0x04
	IntProperty AllSpotCount; // Offset: 0x28 // Size: 0x04
	IntProperty AllValidSpotCount; // Offset: 0x2c // Size: 0x04
	MapProperty SpotStatisticsData; // Offset: 0x30 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.ItemSpotStatisticsData
// Size: 0x18 // Inherited bytes: 0x08
struct FItemSpotStatisticsData : FTableRowBase {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty AllSpotCount; // Offset: 0x0c // Size: 0x04
	IntProperty AllValidSpotCount; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.ItemGroupStatisticsData
// Size: 0x20 // Inherited bytes: 0x08
struct FItemGroupStatisticsData : FTableRowBase {
	// Fields
	enum class ESpotGroupType SpotGroupType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty AllGroupSpotCount; // Offset: 0x0c // Size: 0x04
	IntProperty AllValidGroupSpotCount; // Offset: 0x10 // Size: 0x04
	IntProperty AllSpotCount; // Offset: 0x14 // Size: 0x04
	IntProperty AllValidSpotCount; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.SpotStatisticsData
// Size: 0x60 // Inherited bytes: 0x08
struct FSpotStatisticsData : FTableRowBase {
	// Fields
	enum class ESpotGroupType GroupType; // Offset: 0x08 // Size: 0x01
	enum class ESpotType SpotType; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	StrProperty AreaName; // Offset: 0x10 // Size: 0x10
	StrProperty SpotDefaultTag; // Offset: 0x20 // Size: 0x10
	bool NearItem; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct FVector Location; // Offset: 0x34 // Size: 0x0c
	float X; // Offset: 0x40 // Size: 0x04
	float Y; // Offset: 0x44 // Size: 0x04
	float Z; // Offset: 0x48 // Size: 0x04
	bool RandomRot; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
	struct FRotator Rotator; // Offset: 0x50 // Size: 0x0c
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleGenerateRandomInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleGenerateRandomInfo {
	// Fields
	StrProperty VehicleType; // Offset: 0x00 // Size: 0x10
	StrProperty VehiclePath; // Offset: 0x10 // Size: 0x10
	float FuelPercent; // Offset: 0x20 // Size: 0x04
	bool SnapFloor; // Offset: 0x24 // Size: 0x01
	bool bActiveByStartVolume; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
};

// Object Name: ScriptStruct Gameplay.VehicleGenerateSpawnData
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleGenerateSpawnData {
	// Fields
	IntProperty KeyID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty VehicleType; // Offset: 0x08 // Size: 0x10
	StrProperty VehiclePath; // Offset: 0x18 // Size: 0x10
	IntProperty VehicleWeight; // Offset: 0x28 // Size: 0x04
	bool SnapFloor; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.TreasureBoxSpotProperty
// Size: 0x20 // Inherited bytes: 0x00
struct FTreasureBoxSpotProperty {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FSpotWeight> WeightsPerCategory; // Offset: 0x08 // Size: 0x10
	IntProperty TotalCountRangeMin; // Offset: 0x18 // Size: 0x04
	IntProperty TotalCountRangeMax; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.VehicleSpotProperty
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleSpotProperty {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FSpotWeight> WeightsPerCategory; // Offset: 0x08 // Size: 0x10
	IntProperty FuelPercentMin; // Offset: 0x18 // Size: 0x04
	IntProperty FuelPercentMax; // Offset: 0x1c // Size: 0x04
	bool bActiveByStartVolume; // Offset: 0x20 // Size: 0x01
	enum class EVehicleSpotRandomType RandomType; // Offset: 0x21 // Size: 0x01
	char pad_0x22[0x2]; // Offset: 0x22 // Size: 0x02
	float TotalCountMultiplierWithPalyerCount; // Offset: 0x24 // Size: 0x04
	IntProperty TotalCountRangeMin; // Offset: 0x28 // Size: 0x04
	IntProperty TotalCountRangeMax; // Offset: 0x2c // Size: 0x04
	float ProbabilityPersent; // Offset: 0x30 // Size: 0x04
	float ProbabilityPersentWithPalyerCount; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.CharCustomAnimInstacneData
// Size: 0x20 // Inherited bytes: 0x00
struct FCharCustomAnimInstacneData {
	// Fields
	struct FUAEBlackboardKeySelector CustomAnimInstacneType; // Offset: 0x00 // Size: 0x08
	struct UAnimInstance* CustomAnimInstacneSoftPtr; // Offset: 0x08 // Size: 0x08
	StrProperty CustomAnimInstanceName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.CharCustomAnimData
// Size: 0x58 // Inherited bytes: 0x00
struct FCharCustomAnimData {
	// Fields
	struct FUAEBlackboardKeySelector CustomAnimType; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* CustomAnimSoftPtr; // Offset: 0x08 // Size: 0x28
	struct UAnimationAsset* CustomAnim; // Offset: 0x30 // Size: 0x08
	StrProperty CustomAnimName; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x10]; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.CharParachuteAnimData
// Size: 0x48 // Inherited bytes: 0x00
struct FCharParachuteAnimData {
	// Fields
	enum class ECharacterParachuteAnimType ParachuteAnimType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimationAsset* ParachuteAnimSoftPtr; // Offset: 0x08 // Size: 0x28
	struct UAnimationAsset* ParachuteAnim; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GetAnimUtil
// Size: 0x20 // Inherited bytes: 0x00
struct FGetAnimUtil {
	// Fields
	struct TArray<struct FSoftObjectPath> PendingList; // Offset: 0x00 // Size: 0x10
	struct UUAECharacterAnimListSubSystem* AnimListSubSystem; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.CharacterVehAnimModifyData
// Size: 0x38 // Inherited bytes: 0x00
struct FCharacterVehAnimModifyData {
	// Fields
	enum class ESVehAnimVehicleType VehicleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SeatIdx; // Offset: 0x04 // Size: 0x04
	enum class ECharacterVehicleAnimType VehicleAnimType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct UAnimationAsset* VehicleAnimSoftPtr; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.CharAnimModifyData
// Size: 0x38 // Inherited bytes: 0x00
struct FCharAnimModifyData {
	// Fields
	IntProperty AppliedGameMode; // Offset: 0x00 // Size: 0x04
	enum class ECharaAnimListType ModifyAnimListType; // Offset: 0x04 // Size: 0x01
	enum class ECharacterAnimType AnimType; // Offset: 0x05 // Size: 0x01
	enum class ECharacterPoseType PoseType; // Offset: 0x06 // Size: 0x01
	enum class ECharacterJumpType JumpType; // Offset: 0x07 // Size: 0x01
	enum class ECharacterJumpPhase JumpPhase; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct UAnimationAsset* PoseAnimSoftPtr; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.CharacterMovementAnimData
// Size: 0xa0 // Inherited bytes: 0x00
struct FCharacterMovementAnimData {
	// Fields
	enum class ECharacterAnimType AnimType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName AnimTypeName; // Offset: 0x08 // Size: 0x08
	struct FChararacterPoseAnimData PoseAnim_Stand; // Offset: 0x10 // Size: 0x30
	struct FChararacterPoseAnimData PoseAnim_Crouch; // Offset: 0x40 // Size: 0x30
	struct FChararacterPoseAnimData PoseAnim_Prone; // Offset: 0x70 // Size: 0x30
};

// Object Name: ScriptStruct Gameplay.ChararacterPoseAnimData
// Size: 0x30 // Inherited bytes: 0x00
struct FChararacterPoseAnimData {
	// Fields
	enum class ECharacterPoseType PoseType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimationAsset* PoseAnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.AsyncLoadCharAnimParams
// Size: 0x28 // Inherited bytes: 0x00
struct FAsyncLoadCharAnimParams {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.CharacterAnimStartAsynLoadParam
// Size: 0x02 // Inherited bytes: 0x00
struct FCharacterAnimStartAsynLoadParam {
	// Fields
	enum class ECharacterAnimTypeAsynLoaded AnimType; // Offset: 0x00 // Size: 0x01
	enum class ECharacterViewType CharacterViewType; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct Gameplay.CharacterAnimAsynLoadCompleteParam
// Size: 0x48 // Inherited bytes: 0x00
struct FCharacterAnimAsynLoadCompleteParam {
	// Fields
	enum class ECharacterAnimTypeAsynLoaded AnimTypeAsynLoaded; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty AnimsCatorgeryName; // Offset: 0x08 // Size: 0x10
	enum class ECharacterViewType CharacterViewType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct UAnimationAsset* SoftPtrAnimation; // Offset: 0x20 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.CharacterAsynLoadedTypeAnim
// Size: 0x78 // Inherited bytes: 0x00
struct FCharacterAsynLoadedTypeAnim {
	// Fields
	enum class ECharacterAnimTypeAsynLoaded AnimTypeAsynLoaded; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty AnimsCatorgeryName; // Offset: 0x08 // Size: 0x10
	struct FCharacterAnimTypeAsynLoadedPhaseData Anim; // Offset: 0x18 // Size: 0x60
};

// Object Name: ScriptStruct Gameplay.CharacterAnimTypeAsynLoadedPhaseData
// Size: 0x60 // Inherited bytes: 0x00
struct FCharacterAnimTypeAsynLoadedPhaseData {
	// Fields
	StrProperty PhaseName; // Offset: 0x00 // Size: 0x10
	MapProperty PhaseAnimSoftPtr; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.CharacterShovelAnimData
// Size: 0xc0 // Inherited bytes: 0x00
struct FCharacterShovelAnimData {
	// Fields
	struct FCharacterShovelPhaseData ShovelPhase_Enter; // Offset: 0x00 // Size: 0x30
	struct FCharacterShovelPhaseData ShovelPhase_Shoveling; // Offset: 0x30 // Size: 0x30
	struct FCharacterShovelPhaseData ShovelPhase_Leave; // Offset: 0x60 // Size: 0x30
	struct FCharacterShovelPhaseData ShovelPhase_Crouch_Leave; // Offset: 0x90 // Size: 0x30
};

// Object Name: ScriptStruct Gameplay.CharacterShovelPhaseData
// Size: 0x30 // Inherited bytes: 0x00
struct FCharacterShovelPhaseData {
	// Fields
	enum class ECharacterShovelPhase ShovelPhase; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimationAsset* PhaseAnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.CharacterJumpAnimData
// Size: 0x1c0 // Inherited bytes: 0x00
struct FCharacterJumpAnimData {
	// Fields
	enum class ECharacterJumpType JumpType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName JumpTypeName; // Offset: 0x08 // Size: 0x08
	struct FChararacterJumpPhaseData JumpPhase_PreJump; // Offset: 0x10 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_FallLoop0; // Offset: 0x40 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_FallLoop1; // Offset: 0x70 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_Land0; // Offset: 0xa0 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_Land1; // Offset: 0xd0 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_GrenadeJump_1; // Offset: 0x100 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_GrenadeJump_2; // Offset: 0x130 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_GrenadeFall_1; // Offset: 0x160 // Size: 0x30
	struct FChararacterJumpPhaseData JumpPhase_GrenadeFall_2; // Offset: 0x190 // Size: 0x30
};

// Object Name: ScriptStruct Gameplay.ChararacterJumpPhaseData
// Size: 0x30 // Inherited bytes: 0x00
struct FChararacterJumpPhaseData {
	// Fields
	enum class ECharacterJumpPhase JumpPhase; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimationAsset* PhaseAnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct Gameplay.AsyncLoadCharVehAnimParams
// Size: 0x18 // Inherited bytes: 0x00
struct FAsyncLoadCharVehAnimParams {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Gameplay.DynamicLoadActors
// Size: 0x10 // Inherited bytes: 0x00
struct FDynamicLoadActors {
	// Fields
	struct TArray<struct AActor*> ActorArray; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DSAIDropInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FDSAIDropInfo {
	// Fields
	uint64 BattleID; // Offset: 0x00 // Size: 0x08
	IntProperty nts; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FDSAIDropItem> ais; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DSAIDropItem
// Size: 0x10 // Inherited bytes: 0x00
struct FDSAIDropItem {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty Time; // Offset: 0x08 // Size: 0x04
	uint8_t hlv; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Gameplay.SpawnItemStat
// Size: 0x38 // Inherited bytes: 0x00
struct FSpawnItemStat {
	// Fields
	StrProperty ItemCategory; // Offset: 0x00 // Size: 0x10
	StrProperty ItemValue; // Offset: 0x10 // Size: 0x10
	IntProperty Together; // Offset: 0x20 // Size: 0x04
	IntProperty Count; // Offset: 0x24 // Size: 0x04
	StrProperty TriggerName; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.DamageMatchGroup
// Size: 0x50 // Inherited bytes: 0x00
struct FDamageMatchGroup {
	// Fields
	MapProperty DamageMatchPairs; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.SeqActorBindingData
// Size: 0x18 // Inherited bytes: 0x00
struct FSeqActorBindingData {
	// Fields
	StrProperty TrackName; // Offset: 0x00 // Size: 0x10
	struct AActor* BindingActor; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.CharSpecialLevelSequenceData
// Size: 0xf0 // Inherited bytes: 0x00
struct FCharSpecialLevelSequenceData {
	// Fields
	enum class ECharSpecialLevelSequenceType LevelSequenceType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FLevelSequenceConfig LevelSequenceConfig; // Offset: 0x08 // Size: 0xe8
};

// Object Name: ScriptStruct Gameplay.LevelSequenceConfig
// Size: 0xe8 // Inherited bytes: 0x00
struct FLevelSequenceConfig {
	// Fields
	struct FSoftClassPath SequenceActorTemplate; // Offset: 0x00 // Size: 0x18
	struct ULevelSequence* LevelSequence; // Offset: 0x18 // Size: 0x28
	float LevelSequenceDuration; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	MapProperty TrackBindingInfos; // Offset: 0x48 // Size: 0x50
	MapProperty TrackBindingObjects; // Offset: 0x98 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.LobbyAsyncLoadCharAnimParams
// Size: 0x20 // Inherited bytes: 0x00
struct FLobbyAsyncLoadCharAnimParams {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Gameplay.PlayerAMInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FPlayerAMInfo {
	// Fields
	uint64 PlayerUID; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FBattleItemSpectatingData> PlayerCollectItem; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FBattleItemSpectatingData> PlayerUseItem; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerSightUsageInfoCompress
// Size: 0x18 // Inherited bytes: 0x00
struct FPlayerSightUsageInfoCompress {
	// Fields
	struct TArray<char> TotalUseTime; // Offset: 0x00 // Size: 0x10
	char Index; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct Gameplay.PlayerSightUsageInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerSightUsageInfo {
	// Fields
	struct TArray<float> LastStartTime; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> TotalUsage; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerStatisticForPCOB
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerStatisticForPCOB {
	// Fields
	struct TArray<IntProperty> StatisticInt; // Offset: 0x00 // Size: 0x10
	struct TArray<float> StatisticFloat; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.GatherPlayerInfoForPCOB
// Size: 0x08 // Inherited bytes: 0x00
struct FGatherPlayerInfoForPCOB {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.GatherPlayerFloatInfoForPCOB
// Size: 0x10 // Inherited bytes: 0x08
struct FGatherPlayerFloatInfoForPCOB : FGatherPlayerInfoForPCOB {
	// Fields
	float Num; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.GatherPlayerIntInfoForPCOB
// Size: 0x10 // Inherited bytes: 0x08
struct FGatherPlayerIntInfoForPCOB : FGatherPlayerInfoForPCOB {
	// Fields
	IntProperty Num; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerFiringList
// Size: 0x10 // Inherited bytes: 0x00
struct FPlayerFiringList {
	// Fields
	uint64 PlayerFiringIndexLow; // Offset: 0x00 // Size: 0x08
	uint64 PlayerFiringIndexHigh; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Gameplay.PlayerBreathInfoList
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerBreathInfoList {
	// Fields
	uint64 PlayerIndexLow; // Offset: 0x00 // Size: 0x08
	uint64 PlayerIndexHigh; // Offset: 0x08 // Size: 0x08
	struct TArray<char> BreathList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.PlayerKeyIndexForSort
// Size: 0x08 // Inherited bytes: 0x00
struct FPlayerKeyIndexForSort {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	uint32_t Index; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlanAGPlayerReportData
// Size: 0x30 // Inherited bytes: 0x00
struct FPlanAGPlayerReportData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty TeamID; // Offset: 0x08 // Size: 0x04
	IntProperty TwoTargetScore; // Offset: 0x0c // Size: 0x04
	IntProperty FiveTargetScore; // Offset: 0x10 // Size: 0x04
	IntProperty FourColorTargetScore; // Offset: 0x14 // Size: 0x04
	IntProperty GophersTargetScore; // Offset: 0x18 // Size: 0x04
	IntProperty DishTargetScore; // Offset: 0x1c // Size: 0x04
	IntProperty AirdropTargetScore; // Offset: 0x20 // Size: 0x04
	IntProperty SpeedUpTargetNum; // Offset: 0x24 // Size: 0x04
	IntProperty BulletNum; // Offset: 0x28 // Size: 0x04
	float CurrentCityShootingAccuracy; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlanAGTeamReportData
// Size: 0x88 // Inherited bytes: 0x00
struct FPlanAGTeamReportData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty TwoTargetScore; // Offset: 0x04 // Size: 0x04
	IntProperty FiveTargetScore; // Offset: 0x08 // Size: 0x04
	IntProperty FourColorTargetScore; // Offset: 0x0c // Size: 0x04
	IntProperty GophersTargetScore; // Offset: 0x10 // Size: 0x04
	IntProperty DishTargetScore; // Offset: 0x14 // Size: 0x04
	IntProperty AirdropTargetScore; // Offset: 0x18 // Size: 0x04
	IntProperty SpeedUpTargetNum; // Offset: 0x1c // Size: 0x04
	IntProperty CurrentCityTwoTargetScore; // Offset: 0x20 // Size: 0x04
	IntProperty CurrentCityFiveTargetScore; // Offset: 0x24 // Size: 0x04
	IntProperty CurrentCityFourColorTargetScore; // Offset: 0x28 // Size: 0x04
	IntProperty CurrentCityGophersTargetScore; // Offset: 0x2c // Size: 0x04
	IntProperty CurrentCityDishTargetScore; // Offset: 0x30 // Size: 0x04
	IntProperty CurrentCityAirdropTargetScore; // Offset: 0x34 // Size: 0x04
	IntProperty CurrentCitySpeedUpTargetNum; // Offset: 0x38 // Size: 0x04
	float ShootingAccuracy; // Offset: 0x3c // Size: 0x04
	float TeamChecktime; // Offset: 0x40 // Size: 0x04
	IntProperty TeamOrder; // Offset: 0x44 // Size: 0x04
	float CurrentCityStayTime; // Offset: 0x48 // Size: 0x04
	float OverTime; // Offset: 0x4c // Size: 0x04
	struct TArray<float> StageCompletedTime; // Offset: 0x50 // Size: 0x10
	struct TArray<float> EnterStageTimeStamp; // Offset: 0x60 // Size: 0x10
	IntProperty VehicleResetNum; // Offset: 0x70 // Size: 0x04
	IntProperty Fuel; // Offset: 0x74 // Size: 0x04
	IntProperty FuelMax; // Offset: 0x78 // Size: 0x04
	IntProperty Speed; // Offset: 0x7c // Size: 0x04
	IntProperty RefuelingTime; // Offset: 0x80 // Size: 0x04
	float CompletionProgress; // Offset: 0x84 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.AirDropBoxInOb
// Size: 0x14 // Inherited bytes: 0x00
struct FAirDropBoxInOb {
	// Fields
	IntProperty boxId; // Offset: 0x00 // Size: 0x04
	bool Flying; // Offset: 0x04 // Size: 0x01
	bool IsEmpty; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	struct FVector pos; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct Gameplay.TeamInfoInOB
// Size: 0x38 // Inherited bytes: 0x00
struct FTeamInfoInOB {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty TeamName; // Offset: 0x08 // Size: 0x10
	bool IsShowLogo; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	StrProperty LogoPicUrl; // Offset: 0x20 // Size: 0x10
	IntProperty KillNum; // Offset: 0x30 // Size: 0x04
	IntProperty LiveMemberNum; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerAfterMatchAPI
// Size: 0x48 // Inherited bytes: 0x00
struct FPlayerAfterMatchAPI {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	IntProperty InDamage; // Offset: 0x04 // Size: 0x04
	IntProperty Heal; // Offset: 0x08 // Size: 0x04
	IntProperty HeadShotNum; // Offset: 0x0c // Size: 0x04
	IntProperty SurvivalTime; // Offset: 0x10 // Size: 0x04
	IntProperty DriveDistance; // Offset: 0x14 // Size: 0x04
	IntProperty marchDistance; // Offset: 0x18 // Size: 0x04
	IntProperty Assists; // Offset: 0x1c // Size: 0x04
	float OutsideBlueCircleTime; // Offset: 0x20 // Size: 0x04
	IntProperty Knockouts; // Offset: 0x24 // Size: 0x04
	IntProperty rescueTimes; // Offset: 0x28 // Size: 0x04
	IntProperty UseSmokeGrenadeNum; // Offset: 0x2c // Size: 0x04
	IntProperty UseFragGrenadeNum; // Offset: 0x30 // Size: 0x04
	IntProperty UseBurnGrenadeNum; // Offset: 0x34 // Size: 0x04
	IntProperty UseFlashGrenadeNum; // Offset: 0x38 // Size: 0x04
	IntProperty PoisonTotalDamage; // Offset: 0x3c // Size: 0x04
	IntProperty UseSelfRescueTime; // Offset: 0x40 // Size: 0x04
	IntProperty UseEmergencyCallTime; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.PlayerRealTimeAPI
// Size: 0x28 // Inherited bytes: 0x00
struct FPlayerRealTimeAPI {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	IntProperty AIKillNum; // Offset: 0x04 // Size: 0x04
	IntProperty GotAirDropNum; // Offset: 0x08 // Size: 0x04
	IntProperty MaxKillDistance; // Offset: 0x0c // Size: 0x04
	IntProperty Damage; // Offset: 0x10 // Size: 0x04
	IntProperty KillNumInVehicle; // Offset: 0x14 // Size: 0x04
	IntProperty KillNumByGrenade; // Offset: 0x18 // Size: 0x04
	IntProperty Rank; // Offset: 0x1c // Size: 0x04
	bool IsOutsideBlueCircle; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty BossKillNum; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Gameplay.UAESpawnActorParam
// Size: 0x90 // Inherited bytes: 0x00
struct FUAESpawnActorParam {
	// Fields
	IntProperty TemplateID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UObject* ActorClass; // Offset: 0x08 // Size: 0x08
	struct FVector SpawnLocation; // Offset: 0x10 // Size: 0x0c
	struct FRotator SpawnRotator; // Offset: 0x1c // Size: 0x0c
	struct FVector SpawnOffsetLoc; // Offset: 0x28 // Size: 0x0c
	enum class ESpawnActorCollisionHandlingMethod CollisionHandling; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	float RandomRadius; // Offset: 0x38 // Size: 0x04
	bool RandomRotYaw; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct TArray<struct AActor*> TraceAvoidClass; // Offset: 0x40 // Size: 0x10
	struct AActor* Owner; // Offset: 0x50 // Size: 0x08
	struct APawn* Instigator; // Offset: 0x58 // Size: 0x08
	StrProperty MakerName; // Offset: 0x60 // Size: 0x10
	bool IsTracePos; // Offset: 0x70 // Size: 0x01
	bool IsHalfCapsulePull; // Offset: 0x71 // Size: 0x01
	enum class EActorSpawnType SpawnType; // Offset: 0x72 // Size: 0x01
	char pad_0x73[0x1]; // Offset: 0x73 // Size: 0x01
	IntProperty ZTraceOffset; // Offset: 0x74 // Size: 0x04
	IntProperty MonsterBornType; // Offset: 0x78 // Size: 0x04
	IntProperty MonsterFrontBornType; // Offset: 0x7c // Size: 0x04
	enum class EFeatureSetType FeatureSetType; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0xf]; // Offset: 0x81 // Size: 0x0f
};

// Object Name: ScriptStruct Gameplay.UAESpotDataSerialize
// Size: 0x210 // Inherited bytes: 0x00
struct FUAESpotDataSerialize {
	// Fields
	char pad_0x0[0x210]; // Offset: 0x00 // Size: 0x210
};

// Object Name: ScriptStruct Gameplay.UAEWindowPackageData
// Size: 0x60 // Inherited bytes: 0x00
struct FUAEWindowPackageData {
	// Fields
	struct TWeakObjectPtr<struct AUAEHouseActor> HouseActor; // Offset: 0x00 // Size: 0x08
	struct UObject* WindowClass; // Offset: 0x08 // Size: 0x08
	struct FUAEWindowRepData WindowData; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct Gameplay.BackupVehicleSpotData
// Size: 0x24 // Inherited bytes: 0x00
struct FBackupVehicleSpotData {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	enum class ESpotGroupType SpotGroupType; // Offset: 0x04 // Size: 0x01
	enum class ESpotType SpotType; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	struct FVector SpotGenerateLoc; // Offset: 0x08 // Size: 0x0c
	struct FRotator SpotRotator; // Offset: 0x14 // Size: 0x0c
	bool bRandomRotation; // Offset: 0x20 // Size: 0x01
	bool bUsed; // Offset: 0x21 // Size: 0x01
	char pad_0x22[0x2]; // Offset: 0x22 // Size: 0x02
};

// Object Name: ScriptStruct Gameplay.VehicleSpotComponentArray
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleSpotComponentArray {
	// Fields
	enum class ESpotType SpotType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UVehicleSpotSceneComponent*> AllSpots; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.VehicleGenerateSpawnDataArray
// Size: 0x20 // Inherited bytes: 0x00
struct FVehicleGenerateSpawnDataArray {
	// Fields
	StrProperty Catetory; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVehicleGenerateSpawnData> AllGenerateSpawnDatas; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.TotalWeaponReport
// Size: 0x28 // Inherited bytes: 0x00
struct FTotalWeaponReport {
	// Fields
	StrProperty BattleID; // Offset: 0x00 // Size: 0x10
	IntProperty BattleMode; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FOnePlayerWeapon> TotalWeaponRecord; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Gameplay.WeatherLevelInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FWeatherLevelInfo {
	// Fields
	IntProperty WeatherID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty WeatherLevelName; // Offset: 0x08 // Size: 0x10
	float WeatherTime; // Offset: 0x18 // Size: 0x04
	IntProperty WeatherSyncCount; // Offset: 0x1c // Size: 0x04
};

