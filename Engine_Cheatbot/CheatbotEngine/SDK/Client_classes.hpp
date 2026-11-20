#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Client.AppBaseConfig
// Size: 0x150 // Inherited bytes: 0x28
struct UAppBaseConfig : UObject {
	// Fields
	IntProperty PUBLISH_REGION_ID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty PUBLISH_AREA; // Offset: 0x30 // Size: 0x10
	StrProperty IMSDK_GAME_ID; // Offset: 0x40 // Size: 0x10
	StrProperty GEMAppID; // Offset: 0x50 // Size: 0x10
	uint32_t TSSGameId; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	uint64 GameID; // Offset: 0x68 // Size: 0x08
	StrProperty GameKey; // Offset: 0x70 // Size: 0x10
	uint64 VoiceSdkGameId; // Offset: 0x80 // Size: 0x08
	StrProperty VoiceSdkGameKey; // Offset: 0x88 // Size: 0x10
	StrProperty APPID_FACEBOOK; // Offset: 0x98 // Size: 0x10
	StrProperty APPID_APPLE; // Offset: 0xa8 // Size: 0x10
	StrProperty APPID_GOOGLE; // Offset: 0xb8 // Size: 0x10
	StrProperty APPID_TWITTER; // Offset: 0xc8 // Size: 0x10
	StrProperty APPID_NosCHAT; // Offset: 0xd8 // Size: 0x10
	StrProperty APPID_VK; // Offset: 0xe8 // Size: 0x10
	StrProperty APPID_LINE; // Offset: 0xf8 // Size: 0x10
	StrProperty APPID_BgBg; // Offset: 0x108 // Size: 0x10
	StrProperty GUID_GAMEMASTER; // Offset: 0x118 // Size: 0x10
	StrProperty GEMCtrlURL; // Offset: 0x128 // Size: 0x10
	StrProperty TMFPCtrlURL; // Offset: 0x138 // Size: 0x10
	IntProperty SubsideFeatureLevel; // Offset: 0x148 // Size: 0x04
	char pad_0x14C[0x4]; // Offset: 0x14c // Size: 0x04
};

// Object Name: Class Client.AsyncLoadHelper
// Size: 0xe0 // Inherited bytes: 0x28
struct UAsyncLoadHelper : UObject {
	// Fields
	MapProperty PreloadObjectMap; // Offset: 0x28 // Size: 0x50
	char pad_0x78[0x68]; // Offset: 0x78 // Size: 0x68

	// Functions

	// Object Name: Function Client.AsyncLoadHelper.SetMaxTaskNum
	// Flags: [Final|Native|Public]
	void SetMaxTaskNum(IntProperty Num); // Offset: 0x103be29ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.AsyncLoadHelper.RunNextTask
	// Flags: [Final|Native|Public]
	void RunNextTask(); // Offset: 0x103be29d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.AsyncLoadHelper.OnLoadCallBack
	// Flags: [Final|Native|Public|HasDefaults]
	void OnLoadCallBack(struct FSoftObjectPath softObjPath); // Offset: 0x103be290c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Client.AsyncLoadHelper.ClearOneTask
	// Flags: [Final|Native|Public]
	void ClearOneTask(StrProperty ObjectPath); // Offset: 0x103be2828 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.AsyncLoadHelper.ClearAllTask
	// Flags: [Final|Native|Public]
	void ClearAllTask(); // Offset: 0x103be2814 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.AsyncLoadHelper.AddTask
	// Flags: [Final|Native|Public]
	void AddTask(StrProperty ObjectPath, IntProperty LoadPriority); // Offset: 0x103be26f0 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class Client.AsyncLoadWidgetBlueprint
// Size: 0x80 // Inherited bytes: 0x28
struct UAsyncLoadWidgetBlueprint : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate BeforeLoad; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate AfterLoad; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnCancelled; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x28]; // Offset: 0x58 // Size: 0x28

	// Functions

	// Object Name: Function Client.AsyncLoadWidgetBlueprint.Cancel
	// Flags: [Native|Public|BlueprintCallable]
	void Cancel(); // Offset: 0x103be2f5c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.AsyncLoadWidgetBlueprint.AsyncLoadWidgetBlueprint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAsyncLoadWidgetBlueprint* AsyncLoadWidgetBlueprint(StrProperty BlueprintPath, IntProperty Priority); // Offset: 0x103be2e38 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.AsyncLoadWidgetBlueprint.AfterLoadCallback
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void AfterLoadCallback(struct FSoftObjectPath& SoftObjectPath); // Offset: 0x103be2d78 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Client.AsyncLoadWidgetBlueprint.Activate
	// Flags: [Native|Public|BlueprintCallable]
	void Activate(); // Offset: 0x103be2d5c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.AsyncTaskCDNDownloader
// Size: 0x98 // Inherited bytes: 0x28
struct UAsyncTaskCDNDownloader : UBlueprintAsyncActionBase {
	// Fields
	char pad_0x28[0x30]; // Offset: 0x28 // Size: 0x30
	struct FScriptMulticastDelegate onRequestHandler; // Offset: 0x58 // Size: 0x10
	char pad_0x68[0x30]; // Offset: 0x68 // Size: 0x30

	// Functions

	// Object Name: Function Client.AsyncTaskCDNDownloader.DownloadCDNContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAsyncTaskCDNDownloader* DownloadCDNContent(StrProperty URL, IntProperty loaderType, StrProperty savedDir, bool breakpointContinualTransfer); // Offset: 0x103be33cc // Return & Params: Num(5) Size(0x38)
};

// Object Name: Class Client.AsyncTaskDownloader
// Size: 0x98 // Inherited bytes: 0x28
struct UAsyncTaskDownloader : UBlueprintAsyncActionBase {
	// Fields
	char pad_0x28[0x30]; // Offset: 0x28 // Size: 0x30
	struct FScriptMulticastDelegate onRequestHandler; // Offset: 0x58 // Size: 0x10
	char pad_0x68[0x30]; // Offset: 0x68 // Size: 0x30

	// Functions

	// Object Name: Function Client.AsyncTaskDownloader.DownloadContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAsyncTaskDownloader* DownloadContent(StrProperty URL, IntProperty loaderType, StrProperty savedDir, bool breakpointContinualTransfer); // Offset: 0x103be3970 // Return & Params: Num(5) Size(0x38)
};

// Object Name: Class Client.BattleScriptHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UBattleScriptHelper : UObject {
	// Functions

	// Object Name: Function Client.BattleScriptHelper.SyncNewBattlePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms]
	uint32_t SyncNewBattlePlayer(struct UBattleUtils* Utils, uint64 UID, struct FPlayerInfoData& Info); // Offset: 0x103be4208 // Return & Params: Num(4) Size(0xfc)

	// Object Name: Function Client.BattleScriptHelper.SyncGameInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SyncGameInfo(struct UBattleUtils* Utils, struct FBattleGameInfo& Info); // Offset: 0x103be4120 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Client.BattleScriptHelper.SyncGameExit
	// Flags: [Final|Native|Static|Public]
	void SyncGameExit(struct UBattleUtils* Utils); // Offset: 0x103be40ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.BattleScriptHelper.SyncBattlePlayerExit
	// Flags: [Final|Native|Static|Public]
	void SyncBattlePlayerExit(struct UBattleUtils* Utils, uint64 UID, struct FName PlayerType, StrProperty Reason); // Offset: 0x103be3f0c // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Client.BattleScriptHelper.ResponPlayerWeaponDIYData
	// Flags: [Final|Native|Static|Public]
	void ResponPlayerWeaponDIYData(struct UBattleUtils* Utils, uint64 PlayerUID, struct FWeaponDIYData InWeaponDIYData); // Offset: 0x103be3dd0 // Return & Params: Num(3) Size(0x60)

	// Object Name: Function Client.BattleScriptHelper.GenerateAIPlayerParams
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GenerateAIPlayerParams(struct UBattleUtils* Utils, struct FPlayerInfoData& Info); // Offset: 0x103be3cf0 // Return & Params: Num(2) Size(0xf0)
};

// Object Name: Class Client.BattlePlayer
// Size: 0x188 // Inherited bytes: 0x28
struct UBattlePlayer : UObject {
	// Fields
	uint64 UID; // Offset: 0x28 // Size: 0x08
	struct FPlayerInfoData PlayerInfoData; // Offset: 0x30 // Size: 0xe8
	struct FPlayerAvatarData PlayerAvatarData; // Offset: 0x118 // Size: 0x18
	MapProperty WeaponDIYData; // Offset: 0x130 // Size: 0x50
	struct UBattleUtils* OwningBattleUtils; // Offset: 0x180 // Size: 0x08

	// Functions

	// Object Name: Function Client.BattlePlayer.ExtractGameModePlayerParams
	// Flags: [Final|Native|Public|Const]
	struct FGameModePlayerParams ExtractGameModePlayerParams(); // Offset: 0x103be46bc // Return & Params: Num(1) Size(0x3f8)
};

// Object Name: Class Client.BattleAIPlayer
// Size: 0x188 // Inherited bytes: 0x188
struct UBattleAIPlayer : UBattlePlayer {
	// Functions

	// Object Name: Function Client.BattleAIPlayer.ExtractGameModeAIPlayerParams
	// Flags: [Final|Native|Public|Const]
	struct FGameModeAIPlayerParams ExtractGameModeAIPlayerParams(); // Offset: 0x103be487c // Return & Params: Num(1) Size(0x408)
};

// Object Name: Class Client.BattleUtils
// Size: 0x550 // Inherited bytes: 0x28
struct UBattleUtils : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	struct UGameFrontendHUD* OwningFrontendHUD; // Offset: 0x80 // Size: 0x08
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10
	struct AUAEGameMode* BattleGameMode; // Offset: 0x98 // Size: 0x08
	struct TArray<struct UBattlePlayer*> BattlePlayerList; // Offset: 0xa0 // Size: 0x10
	struct FBattleGameInfo CachedBattleGameInfo; // Offset: 0xb0 // Size: 0x38
	struct FGameModeAIPlayerParams CachedAIPlayerParams; // Offset: 0xe8 // Size: 0x408
	StrProperty LuaFilePath; // Offset: 0x4f0 // Size: 0x10
	char pad_0x500[0x50]; // Offset: 0x500 // Size: 0x50

	// Functions

	// Object Name: Function Client.BattleUtils.SyncNewBattlePlayer
	// Flags: [Final|Native|Public|HasOutParms]
	uint32_t SyncNewBattlePlayer(uint64 UID, struct FPlayerInfoData& Info); // Offset: 0x103be5768 // Return & Params: Num(3) Size(0xf4)

	// Object Name: Function Client.BattleUtils.SyncGameInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void SyncGameInfo(struct FBattleGameInfo& Info); // Offset: 0x103be56b4 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function Client.BattleUtils.SyncGameExit
	// Flags: [Final|Native|Public]
	void SyncGameExit(); // Offset: 0x103be56a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.BattleUtils.SyncBattlePlayerExit
	// Flags: [Final|Native|Public]
	void SyncBattlePlayerExit(uint64 UID, struct FName PlayerType, StrProperty Reason); // Offset: 0x103be5538 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BattleUtils.RetrievePlayerParams
	// Flags: [Final|Native|Public|Const]
	struct FGameModePlayerParams RetrievePlayerParams(struct FPlayerID PlayerID); // Offset: 0x103be5478 // Return & Params: Num(2) Size(0x408)

	// Object Name: Function Client.BattleUtils.RetrieveAIPlayerParams
	// Flags: [Final|Native|Public]
	struct FGameModeAIPlayerParams RetrieveAIPlayerParams(struct FPlayerID PlayerID); // Offset: 0x103be53b8 // Return & Params: Num(2) Size(0x418)

	// Object Name: Function Client.BattleUtils.ResponPlayerWeaponDIYData
	// Flags: [Final|Native|Public]
	void ResponPlayerWeaponDIYData(uint64 PlayerUID, struct FWeaponDIYData InWeaponDIYData); // Offset: 0x103be52a8 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function Client.BattleUtils.RequestSomePlayersBattleData
	// Flags: [Final|Native|Public]
	void RequestSomePlayersBattleData(struct TArray<uint64> PlayerUIDList, char DataType); // Offset: 0x103be5184 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.BattleUtils.RequestPlayerWeaponDIYData
	// Flags: [Final|Native|Public]
	void RequestPlayerWeaponDIYData(uint64 PlayerUID, IntProperty WeaponSkinID, IntProperty PlanID); // Offset: 0x103be5094 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Client.BattleUtils.RequestOnePlayersBattleData
	// Flags: [Final|Native|Public]
	void RequestOnePlayersBattleData(uint64 PlayerUID, char DataType); // Offset: 0x103be4fdc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.BattleUtils.RequestAllPlayersBattleData
	// Flags: [Final|Native|Public]
	void RequestAllPlayersBattleData(char DataType); // Offset: 0x103be4f60 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BattleUtils.OnPostLoadMapWithWorld
	// Flags: [Final|Native|Public]
	void OnPostLoadMapWithWorld(struct UWorld* World); // Offset: 0x103be4ee4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.BattleUtils.NewBattlePlayer
	// Flags: [Final|Native|Public]
	struct UBattlePlayer* NewBattlePlayer(); // Offset: 0x103be4eb0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.BattleUtils.NewBattleAIPlayer
	// Flags: [Final|Native|Public]
	struct UBattleAIPlayer* NewBattleAIPlayer(); // Offset: 0x103be4e7c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.BattleUtils.HandleGameModeStateChanged
	// Flags: [Final|Native|Public|HasOutParms]
	void HandleGameModeStateChanged(struct FGameModeStateChangedParams& Params); // Offset: 0x103be4dec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BattleUtils.GetBattleGameMode
	// Flags: [Final|Native|Public|Const]
	struct AUAEGameMode* GetBattleGameMode(); // Offset: 0x103be4db8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.BattleUtils.GenerateAIPlayerParams
	// Flags: [Final|Native|Public|HasOutParms]
	void GenerateAIPlayerParams(struct FPlayerInfoData& Info); // Offset: 0x103be4d04 // Return & Params: Num(1) Size(0xe8)

	// Object Name: Function Client.BattleUtils.FindPlayerByUID
	// Flags: [Final|Native|Public|Const]
	struct UBattlePlayer* FindPlayerByUID(uint64 UID, struct FName PlayerType); // Offset: 0x103be4c40 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.BattleUtils.FindPlayerByPlayerName
	// Flags: [Final|Native|Public|Const]
	struct UBattlePlayer* FindPlayerByPlayerName(StrProperty PlayerName, struct FName PlayerType); // Offset: 0x103be4b0c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BattleUtils.FindPlayerByPlayerKey
	// Flags: [Final|Native|Public|Const]
	struct UBattlePlayer* FindPlayerByPlayerKey(uint32_t PlayerKey, struct FName PlayerType); // Offset: 0x103be4a44 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class Client.BattleWindowMgr
// Size: 0x28 // Inherited bytes: 0x28
struct UBattleWindowMgr : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.BattleWindowMgr.ShowUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ShowUI(struct UObject* WorldContextObject, StrProperty WindowName, struct UObject* ObjectParam); // Offset: 0x103be61b4 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BattleWindowMgr.SetInstance
	// Flags: [Final|Native|Static|Public]
	void SetInstance(struct UBattleWindowMgrLuaUtils* InInstance, struct ULuaStateWrapper* InLuaStateWrapper); // Offset: 0x103be6108 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.BattleWindowMgr.HideUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void HideUI(struct UObject* WorldContextObject, StrProperty WindowName); // Offset: 0x103be5fec // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.BattleWindowMgr.CheckWindowOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CheckWindowOpen(struct UObject* WorldContextObject, StrProperty WindowName); // Offset: 0x103be5ec8 // Return & Params: Num(3) Size(0x19)
};

// Object Name: Class Client.BattleWindowMgrLuaUtils
// Size: 0x70 // Inherited bytes: 0x28
struct UBattleWindowMgrLuaUtils : UObject {
	// Fields
	struct TWeakObjectPtr<struct ULuaStateWrapper> LuaStateWrapper; // Offset: 0x28 // Size: 0x08
	StrProperty LuaManagerName; // Offset: 0x30 // Size: 0x10
	StrProperty ShowUI; // Offset: 0x40 // Size: 0x10
	StrProperty HideUI; // Offset: 0x50 // Size: 0x10
	StrProperty CheckWindowOpen; // Offset: 0x60 // Size: 0x10
};

// Object Name: Class Client.BugReporter
// Size: 0xa0 // Inherited bytes: 0x28
struct UBugReporter : UObject {
	// Fields
	char pad_0x28[0x78]; // Offset: 0x28 // Size: 0x78

	// Functions

	// Object Name: Function Client.BugReporter.SendScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SendScreenShot(StrProperty ErrorReason, StrProperty errorDescription, StrProperty ImagePath, float X, float Y, float Z); // Offset: 0x103be6ab4 // Return & Params: Num(6) Size(0x3c)

	// Object Name: Function Client.BugReporter.SendLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SendLog(StrProperty ErrorReason, StrProperty errorDescription, float X, float Y, float Z, bool pullAll, bool zipLogUpload); // Offset: 0x103be67e4 // Return & Params: Num(7) Size(0x2e)

	// Object Name: Function Client.BugReporter.ReadZipLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReadZipLog(StrProperty Filename); // Offset: 0x103be6700 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BugReporter.CompressLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> CompressLog(bool pullAllLog); // Offset: 0x103be6644 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Client.BuildConfig
// Size: 0x58 // Inherited bytes: 0x28
struct UBuildConfig : UObject {
	// Fields
	StrProperty branch_name; // Offset: 0x28 // Size: 0x10
	StrProperty build_no; // Offset: 0x38 // Size: 0x10
	StrProperty build_url; // Offset: 0x48 // Size: 0x10
};

// Object Name: Class Client.BusinessHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UBusinessHelper : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.BusinessHelper.XorEncryptDecrypt
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty XorEncryptDecrypt(StrProperty Data, bool bEncrypt, StrProperty Key); // Offset: 0x103be8a00 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.BusinessHelper.UIGetResWithPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UObject* UIGetResWithPath(StrProperty DesManagerName); // Offset: 0x103be8968 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.BusinessHelper.UIGetLuaManagerByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ALuaClassObj* UIGetLuaManagerByName(struct UUAEUserWidget* pUIClass, StrProperty InManagerName); // Offset: 0x103be8894 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BusinessHelper.UIGetLuaManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ALuaClassObj* UIGetLuaManager(struct UUAEUserWidget* pUIClass); // Offset: 0x103be8818 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.BusinessHelper.StopUIStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StopUIStat(StrProperty UIName, bool bReport); // Offset: 0x103be8740 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.BusinessHelper.StopTimeWatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float StopTimeWatch(); // Offset: 0x103be870c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.StartUIStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StartUIStat(StrProperty UIName); // Offset: 0x103be867c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.StartTimeWatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StartTimeWatch(); // Offset: 0x103be8668 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.BusinessHelper.SpecialBase64Encode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SpecialBase64Encode(StrProperty Data); // Offset: 0x103be8598 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.BusinessHelper.SpecialBase64Decode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SpecialBase64Decode(StrProperty Data); // Offset: 0x103be84c8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.BusinessHelper.SetUIStatMaxClickTimes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetUIStatMaxClickTimes(IntProperty Times); // Offset: 0x103be8454 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.LoadAssetFromPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UObject* LoadAssetFromPath(StrProperty DesManagerName); // Offset: 0x103be83bc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.BusinessHelper.IsSplitMiniPakVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsSplitMiniPakVersion(); // Offset: 0x103be8388 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.IsSplitMapPakVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsSplitMapPakVersion(); // Offset: 0x103be8354 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.IsFit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsFit(); // Offset: 0x103be8320 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.IsFirstGaming
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsFirstGaming(); // Offset: 0x103be82ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.IsClassOf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsClassOf(struct UObject* Object, struct UObject* Class); // Offset: 0x103be8238 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Client.BusinessHelper.IsChildOf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsChildOf(struct UObject* ChildClass, struct UObject* Class); // Offset: 0x103be8184 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Client.BusinessHelper.IsCEVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsCEVersion(); // Offset: 0x103be8150 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.IsAppFromStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsAppFromStore(); // Offset: 0x103be811c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.HasDownloadedBasePak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool HasDownloadedBasePak(); // Offset: 0x103be80e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.BusinessHelper.GetXORKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetXORKey(); // Offset: 0x103be8084 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetWidgetByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UUAEUserWidget* GetWidgetByName(struct UUAEUserWidget* pUIClass, StrProperty InManagerName, StrProperty InWidgtName); // Offset: 0x103be7f5c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function Client.BusinessHelper.GetVoiceSdkGameId
	// Flags: [Final|Native|Static|Public]
	uint64 GetVoiceSdkGameId(); // Offset: 0x103be7f28 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.BusinessHelper.GetTSSGameId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetTSSGameId(); // Offset: 0x103be7ef4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetTime(); // Offset: 0x103be7ec0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetSplitMapConfigInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSplitMapConfigInfo(); // Offset: 0x103be7e5c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetPublishRegionID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetPublishRegionID(); // Offset: 0x103be7e28 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetPublishRegion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPublishRegion(); // Offset: 0x103be7dc4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetPathFromUserWidgetToViewport
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPathFromUserWidgetToViewport(struct UUserWidget* UserWidget, bool withObjectNum); // Offset: 0x103be7ccc // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BusinessHelper.GetPackChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPackChannel(); // Offset: 0x103be7c68 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetOpenId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetOpenId(); // Offset: 0x103be7c04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetObjectClassName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetObjectClassName(struct UObject* Object); // Offset: 0x103be7b60 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.BusinessHelper.GetMobileBasePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetMobileBasePath(StrProperty InPath); // Offset: 0x103be7aa0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.BusinessHelper.GetLuaManagerByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ALuaClassObj* GetLuaManagerByName(struct UUAEUserWidget* pUIClass, StrProperty InManagerName); // Offset: 0x103be79cc // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BusinessHelper.GetITopGameId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetITopGameId(); // Offset: 0x103be7968 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetInGameLocalConnectURL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetInGameLocalConnectURL(); // Offset: 0x103be7904 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetIMSDKEnv
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetIMSDKEnv(); // Offset: 0x103be78d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetDeviceQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetDeviceQualityLevel(); // Offset: 0x103be789c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetDeviceOrientation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetDeviceOrientation(); // Offset: 0x103be7868 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetDataTable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UUAEDataTable* GetDataTable(StrProperty tableName); // Offset: 0x103be77d0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.BusinessHelper.GetCurrentNetworkState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetCurrentNetworkState(); // Offset: 0x103be779c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetChildByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UWidget* GetChildByName(struct UUserWidget* pParent, StrProperty Name); // Offset: 0x103be76c8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.BusinessHelper.GetBuildURL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetBuildURL(); // Offset: 0x103be7664 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetBuildNo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetBuildNo(); // Offset: 0x103be7600 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetBranchName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetBranchName(); // Offset: 0x103be759c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetBase64Key
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetBase64Key(); // Offset: 0x103be7538 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetAppVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetAppVersion(); // Offset: 0x103be74d4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.GetAOSSHOPID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetAOSSHOPID(); // Offset: 0x103be74a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.BusinessHelper.GetAOSSHOP
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetAOSSHOP(); // Offset: 0x103be743c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.BusinessHelper.FullGC
	// Flags: [Final|Native|Static|Public]
	void FullGC(); // Offset: 0x103be7428 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.BusinessHelper.ClearDisplayLookupTable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearDisplayLookupTable(); // Offset: 0x103be7414 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.BusinessHelper.BroadCastMSG
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void BroadCastMSG(struct UFrontendHUD* FrontendHUD, StrProperty DesManagerName, StrProperty Msg); // Offset: 0x103be72f4 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.BusinessHelper.Base64Encode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty Base64Encode(StrProperty Data); // Offset: 0x103be7224 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.BusinessHelper.Base64Decode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty Base64Decode(StrProperty Data); // Offset: 0x103be7154 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Client.IntlHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UIntlHelper : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.IntlHelper.UpdateXGPushNightTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UpdateXGPushNightTag(bool bInit); // Offset: 0x103beb758 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.IntlHelper.UpdateXGPushDayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UpdateXGPushDayTag(bool bInit); // Offset: 0x103beb6dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.IntlHelper.UpdateVoiceUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UpdateVoiceUrl(StrProperty regionVoiceUrl); // Offset: 0x103beb64c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.UnInitTweenMaker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnInitTweenMaker(); // Offset: 0x103beb638 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.TimeFormatString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty TimeFormatString(StrProperty Format, IntProperty hours, IntProperty Mins, IntProperty secs); // Offset: 0x103beb4bc // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Client.IntlHelper.SaveXGTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SaveXGTags(StrProperty Language, StrProperty timezone, StrProperty Region); // Offset: 0x103beb384 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.IntlHelper.OnSwitchLanguage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OnSwitchLanguage(); // Offset: 0x103beb370 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.OnChoosingZone
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OnChoosingZone(IntProperty ZoneID, StrProperty AddrIP, StrProperty regionVoiceUrl); // Offset: 0x103beb250 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.IntlHelper.IsRemoteNotificationsEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsRemoteNotificationsEnabled(); // Offset: 0x103beb21c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.IntlHelper.IsHelpshiftEnable4CurrentChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsHelpshiftEnable4CurrentChannel(); // Offset: 0x103beb1e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.IntlHelper.IsHelpshiftEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsHelpshiftEnable(); // Offset: 0x103beb1b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.IntlHelper.IsAwakedByAdjust
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsAwakedByAdjust(); // Offset: 0x103beb180 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.IntlHelper.InitTweenMaker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void InitTweenMaker(); // Offset: 0x103beb16c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.HelpshiftUploadLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void HelpshiftUploadLog(); // Offset: 0x103beb158 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.HelpshiftShowSingleFAQWithInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void HelpshiftShowSingleFAQWithInfo(StrProperty publishID, MapProperty& hsMetaInfo, StrProperty ExtraTags, StrProperty hsIssueFieldsJson); // Offset: 0x103beafb0 // Return & Params: Num(4) Size(0x80)

	// Object Name: Function Client.IntlHelper.HelpshiftShowFAQsWithInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void HelpshiftShowFAQsWithInfo(MapProperty& hsMetaInfo, StrProperty ExtraTags, StrProperty hsIssueFieldsJson); // Offset: 0x103beae60 // Return & Params: Num(3) Size(0x70)

	// Object Name: Function Client.IntlHelper.HelpshiftShowFAQs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void HelpshiftShowFAQs(); // Offset: 0x103beae4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.HelpshiftShowConversionWithInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void HelpshiftShowConversionWithInfo(MapProperty& hsMetaInfo, StrProperty hsIssueFieldsJson); // Offset: 0x103bead50 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function Client.IntlHelper.HelpshiftShowConversion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void HelpshiftShowConversion(); // Offset: 0x103bead3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.HelpshiftRequestUnreadMessagesCount
	// Flags: [Final|Native|Static|Public]
	void HelpshiftRequestUnreadMessagesCount(); // Offset: 0x103bead28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.HelpshiftGetUnreadMessgesCount
	// Flags: [Final|Native|Static|Public]
	IntProperty HelpshiftGetUnreadMessgesCount(); // Offset: 0x103beacf4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlHelper.HelpshiftClearUnreadMessgesCount
	// Flags: [Final|Native|Static|Public]
	void HelpshiftClearUnreadMessgesCount(); // Offset: 0x103beace0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.GetTranslationText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetTranslationText(StrProperty Key); // Offset: 0x103beac20 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.IntlHelper.GetSavedXGTimezoneTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSavedXGTimezoneTag(); // Offset: 0x103beabbc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetSavedXGRegionTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSavedXGRegionTag(); // Offset: 0x103beab58 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetSavedXGPushNightTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSavedXGPushNightTag(); // Offset: 0x103beaaf4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetSavedXGPushDayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSavedXGPushDayTag(); // Offset: 0x103beaa90 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetSavedXGLanguageTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSavedXGLanguageTag(); // Offset: 0x103beaa2c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetPlayerUCLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPlayerUCLevel(); // Offset: 0x103bea9c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetLocalTimezone
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetLocalTimezone(); // Offset: 0x103bea994 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlHelper.GetLocalizeStringWithString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizeStringWithString(StrProperty sourceString, IntProperty numStringIndex, StrProperty string1, StrProperty string2, StrProperty string3, StrProperty string4); // Offset: 0x103bea744 // Return & Params: Num(7) Size(0x68)

	// Object Name: Function Client.IntlHelper.GetLocalizeStringWithNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizeStringWithNum(IntProperty ID, IntProperty numStringIndex, StrProperty string1, StrProperty string2, StrProperty string3, StrProperty string4); // Offset: 0x103bea514 // Return & Params: Num(7) Size(0x58)

	// Object Name: Function Client.IntlHelper.GetLocalizeStrByStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizeStrByStr(StrProperty Source, StrProperty string1, StrProperty string2, StrProperty string3, StrProperty string4); // Offset: 0x103bea304 // Return & Params: Num(6) Size(0x60)

	// Object Name: Function Client.IntlHelper.GetLocalizeStrByID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizeStrByID(IntProperty ID, StrProperty string1, StrProperty string2, StrProperty string3, StrProperty string4); // Offset: 0x103bea10c // Return & Params: Num(6) Size(0x58)

	// Object Name: Function Client.IntlHelper.GetLocalizationStringWithID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizationStringWithID(IntProperty ID); // Offset: 0x103bea068 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.IntlHelper.GetLocalizationString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizationString(StrProperty Key); // Offset: 0x103be9fa8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.IntlHelper.GetLocalizationBattleStringWithID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLocalizationBattleStringWithID(IntProperty ID); // Offset: 0x103be9f04 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.IntlHelper.GetHistoryErrorCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetHistoryErrorCode(); // Offset: 0x103be9ea0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetGameMasterVID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetGameMasterVID(); // Offset: 0x103be9e3c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetDeepLinkUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDeepLinkUrl(); // Offset: 0x103be9dd8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlHelper.GetCurrentZoneID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetCurrentZoneID(); // Offset: 0x103be9da4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlHelper.FormatLocalizeStrByStr
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	StrProperty FormatLocalizeStrByStr(StrProperty Source, struct TArray<StrProperty>& stringArr); // Offset: 0x103be9c80 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.IntlHelper.DirectToNotificationSetup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DirectToNotificationSetup(); // Offset: 0x103be9c6c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.ClearAdjustDeepLink
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearAdjustDeepLink(); // Offset: 0x103be9c58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.AdjustParaAnalysis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AdjustParaAnalysis(); // Offset: 0x103be9c44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlHelper.AddErrorCodeToHistory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddErrorCodeToHistory(StrProperty InErrorCode); // Offset: 0x103be9bb4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Client.TestHUD
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct ATestHUD : AActor {
	// Functions

	// Object Name: Function Client.TestHUD.TestFunctionNOParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TestFunctionNOParam(); // Offset: 0x103bec7cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.TestHUD.TestFunctionBP_LUA
	// Flags: [Event|Public|BlueprintEvent]
	float TestFunctionBP_LUA(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.TestFunctionBP
	// Flags: [Event|Public|BlueprintEvent]
	float TestFunctionBP(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_Lua
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_Lua(); // Offset: 0x103bec798 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_CPlus_Call
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_CPlus_Call(); // Offset: 0x103bec764 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_CPlus
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_CPlus(); // Offset: 0x103bec730 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_BP_CPP
	// Flags: [Event|Public|BlueprintEvent]
	float Function_BP_CPP(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_BP_Call_LUA
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_BP_Call_LUA(); // Offset: 0x103bec6fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_BP_Call_CPP
	// Flags: [Event|Public|BlueprintEvent]
	float Function_BP_Call_CPP(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_BP_Call_CPlus
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_BP_Call_CPlus(); // Offset: 0x103bec6c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_BP_Call
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_BP_Call(); // Offset: 0x103bec694 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TestHUD.Function_BP
	// Flags: [Final|Native|Public|BlueprintCallable]
	float Function_BP(); // Offset: 0x103bec660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.CDNUpdate
// Size: 0x368 // Inherited bytes: 0x28
struct UCDNUpdate : UObject {
	// Fields
	char pad_0x28[0x90]; // Offset: 0x28 // Size: 0x90
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0xb8 // Size: 0x08
	char pad_0xC0[0x2a8]; // Offset: 0xc0 // Size: 0x2a8

	// Functions

	// Object Name: Function Client.CDNUpdate.StartUpdateApp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartUpdateApp(); // Offset: 0x103bef6dc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.CDNUpdate.StartAppUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartAppUpdate(bool StartGrayUpdate); // Offset: 0x103bef658 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.CDNUpdate.OnRequestProgress
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void OnRequestProgress(struct FCDNDownloaderInfo& Info); // Offset: 0x103bef5a4 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Client.CDNUpdate.OnRequestComplete
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void OnRequestComplete(struct FCDNDownloaderInfo& Info); // Offset: 0x103bef4f0 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Client.CDNUpdate.IsUpdating
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsUpdating(); // Offset: 0x103bef4bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.CDNUpdate.IsGrayUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsGrayUpdate(); // Offset: 0x103bef488 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.CDNUpdate.GetCurStage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetCurStage(float& percent, IntProperty& GetCurVal, IntProperty& GetMaxVal); // Offset: 0x103bef34c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Client.CDNUpdate.FinishUpdate
	// Flags: [Final|Native|Public]
	void FinishUpdate(); // Offset: 0x103bef338 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.CDNUpdate.ContinueUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ContinueUpdate(); // Offset: 0x103bef324 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.CDNUpdate.CancelUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CancelUpdate(); // Offset: 0x103bef310 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.CentauriManager
// Size: 0x1f0 // Inherited bytes: 0x28
struct UCentauriManager : UObject {
	// Fields
	char pad_0x28[0x28]; // Offset: 0x28 // Size: 0x28
	StrProperty payChannel; // Offset: 0x50 // Size: 0x10
	StrProperty ZoneID; // Offset: 0x60 // Size: 0x10
	StrProperty goodsZoneID; // Offset: 0x70 // Size: 0x10
	StrProperty offerID; // Offset: 0x80 // Size: 0x10
	IntProperty iAOSShop; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	StrProperty offerID_H5; // Offset: 0x98 // Size: 0x10
	StrProperty offerID_WOW; // Offset: 0xa8 // Size: 0x10
	StrProperty offerID_WOWH5; // Offset: 0xb8 // Size: 0x10
	StrProperty payChannel_H5; // Offset: 0xc8 // Size: 0x10
	char pad_0xD8[0x58]; // Offset: 0xd8 // Size: 0x58
	StrProperty IDCInfo; // Offset: 0x130 // Size: 0x10
	char pad_0x140[0x18]; // Offset: 0x140 // Size: 0x18
	StrProperty PAY_TYPE_UC; // Offset: 0x158 // Size: 0x10
	StrProperty PAY_TYPE_GOODS; // Offset: 0x168 // Size: 0x10
	StrProperty PAY_TYPE_SUBSCRIBE; // Offset: 0x178 // Size: 0x10
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0x188 // Size: 0x08
	char pad_0x190[0x60]; // Offset: 0x190 // Size: 0x60

	// Functions

	// Object Name: Function Client.CentauriManager.TickCentauriPackage
	// Flags: [Final|Native|Private]
	void TickCentauriPackage(); // Offset: 0x103bf1ebc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.CentauriManager.Tick
	// Flags: [Final|Native|Public]
	void Tick(float DeltaTime); // Offset: 0x103bf1e40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.CentauriManager.SwitchPayChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SwitchPayChannel(enum class ECentauriMultiPayChannelSwitch switchChannel); // Offset: 0x103bf1dc4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.CentauriManager.Subscribe
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Subscribe(StrProperty productid, StrProperty InPayItem, StrProperty Country, StrProperty currency, StrProperty serviceCode, StrProperty serviceName, bool autoPay, StrProperty basePlanId, StrProperty gwOfferId, StrProperty InChannelExtras, StrProperty InAppExtends); // Offset: 0x103bf19e0 // Return & Params: Num(11) Size(0xa8)

	// Object Name: Function Client.CentauriManager.SetZoneID
	// Flags: [Final|Native|Public]
	void SetZoneID(StrProperty inZoneID, StrProperty inGoodsZoneID); // Offset: 0x103bf1864 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.CentauriManager.SetRoleInfo
	// Flags: [Final|Native|Public]
	void SetRoleInfo(IntProperty InChannel, StrProperty OpenID); // Offset: 0x103bf1740 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.CentauriManager.SetPayEnvironment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPayEnvironment(StrProperty InPayEnvironment); // Offset: 0x103bf16a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.SetInIDC
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetInIDC(StrProperty InInIDC); // Offset: 0x103bf1610 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.SetIDCInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIDCInfo(StrProperty InIDCInfo); // Offset: 0x103bf1578 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.SetFrontendHUD
	// Flags: [Final|Native|Public]
	void SetFrontendHUD(struct UGameFrontendHUD* InFrontendHUD); // Offset: 0x103bf14fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.CentauriManager.Reprovide
	// Flags: [Final|Native|Public]
	void Reprovide(); // Offset: 0x103bf14e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.CentauriManager.Pay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Pay(StrProperty productid, StrProperty InPayItem, StrProperty Country, StrProperty currency, StrProperty InChannelExtras, StrProperty InAppExtends, StrProperty InPayChannel, StrProperty InURL, bool bUseWOW); // Offset: 0x103bf11b4 // Return & Params: Num(9) Size(0x81)

	// Object Name: Function Client.CentauriManager.ModifySubscribe
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ModifySubscribe(StrProperty newProductid, StrProperty Country, StrProperty currency, StrProperty serviceCode, StrProperty serviceName, bool autoPay, StrProperty basePlanId, StrProperty gwOfferId, StrProperty InChannelExtras, StrProperty InAppExtends); // Offset: 0x103bf0e24 // Return & Params: Num(10) Size(0x98)

	// Object Name: Function Client.CentauriManager.IsH5PayEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsH5PayEnable(); // Offset: 0x103bf0df0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.CentauriManager.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Initialize(enum class ECentauriMultiPayChannelSwitch envior, bool bUseWOW); // Offset: 0x103bf0d30 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Client.CentauriManager.H5Pay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void H5Pay(StrProperty Country, StrProperty InChannelExtras, StrProperty InAppExtends, bool bUseWOW); // Offset: 0x103bf0ba8 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Client.CentauriManager.GoodsPresent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GoodsPresent(StrProperty productid, StrProperty InPayItem, StrProperty Price, StrProperty Country, StrProperty currency, StrProperty MetaData, StrProperty InChannelExtras, StrProperty InAppExtends, StrProperty InPayChannel, StrProperty InURL, bool bUseWOW); // Offset: 0x103bf07bc // Return & Params: Num(11) Size(0xa1)

	// Object Name: Function Client.CentauriManager.Goods
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Goods(StrProperty productid, StrProperty InPayItem, StrProperty Price, StrProperty Country, StrProperty currency, StrProperty InChannelExtras, StrProperty InAppExtends, StrProperty InPayChannel, StrProperty InURL, bool bUseWOW); // Offset: 0x103bf0430 // Return & Params: Num(10) Size(0x91)

	// Object Name: Function Client.CentauriManager.GetProductInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetProductInfo(MapProperty listProductID, bool bUseWOW); // Offset: 0x103bf0320 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function Client.CentauriManager.getPF
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty getPF(); // Offset: 0x103bf02bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetPaymentProductId
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPaymentProductId(); // Offset: 0x103bf0258 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetPayChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPayChannel(); // Offset: 0x103bf01f4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetPackChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPackChannel(); // Offset: 0x103bf0190 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetOfferIDForWOWH5
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetOfferIDForWOWH5(); // Offset: 0x103bf012c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetOfferIDForWOW
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetOfferIDForWOW(); // Offset: 0x103bf00c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetOfferID
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetOfferID(); // Offset: 0x103bf0064 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetNativePackageTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetNativePackageTag(); // Offset: 0x103bf0000 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.CentauriManager.GetMPInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetMPInfo(StrProperty Country, StrProperty currency, StrProperty InAppExtends, StrProperty InDrmInfo, bool bUseWOW); // Offset: 0x103befe24 // Return & Params: Num(5) Size(0x41)

	// Object Name: Function Client.CentauriManager.GetIntroPrice
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetIntroPrice(MapProperty listProductID, bool bUseWOW); // Offset: 0x103befd14 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function Client.CentauriManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCentauriManager* GetInstance(); // Offset: 0x103befce0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.CentauriManager.GetAOSSHOP
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetAOSSHOP(); // Offset: 0x103befcac // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.ClientNetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UClientNetInterface : UNetInterface {
};

// Object Name: Class Client.CommonItemBase
// Size: 0x2c8 // Inherited bytes: 0x2c8
struct UCommonItemBase : ULuaUserWidget {
};

// Object Name: Class Client.CompressTextureHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UCompressTextureHelper : UObject {
	// Functions

	// Object Name: Function Client.CompressTextureHelper.TestGetTexture2DFromDisk_KTX2
	// Flags: [Final|Native|Static|Public]
	struct UTexture2D* TestGetTexture2DFromDisk_KTX2(StrProperty PathName); // Offset: 0x103bf4120 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Client.DataTunnel
// Size: 0x28 // Inherited bytes: 0x28
struct UDataTunnel : UObject {
};

// Object Name: Class Client.DragDropTextBox
// Size: 0xcb0 // Inherited bytes: 0xcb0
struct UDragDropTextBox : UEditableTextBox {
};

// Object Name: Class Client.GameBackendUtils
// Size: 0x30 // Inherited bytes: 0x30
struct UGameBackendUtils : UBackendUtils {
	// Functions

	// Object Name: Function Client.GameBackendUtils.GetTableManager
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAETableManager* GetTableManager(); // Offset: 0x103bf4618 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.GameBackendHUD
// Size: 0xb0 // Inherited bytes: 0xb0
struct UGameBackendHUD : UBackendHUD {
	// Functions

	// Object Name: Function Client.GameBackendHUD.GetUtils
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGameBackendUtils* GetUtils(); // Offset: 0x103bf4900 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameBackendHUD.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UGameBackendHUD* GetInstance(); // Offset: 0x103bf48cc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameBackendHUD.GetGameFrontendHUDByGameInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGameFrontendHUD* GetGameFrontendHUDByGameInstance(struct UGameInstance* GameInstance); // Offset: 0x103bf4840 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.GameBackendHUD.GetFirstGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGameFrontendHUD* GetFirstGameFrontendHUD(struct UObject* WorldContextObject); // Offset: 0x103bf47b4 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Client.GameBusinessManager
// Size: 0x180 // Inherited bytes: 0x108
struct UGameBusinessManager : ULogicManagerBase {
	// Fields
	struct TArray<struct FGameWidgetConfig> WidgetConfigList; // Offset: 0x108 // Size: 0x10
	char pad_0x118[0x50]; // Offset: 0x118 // Size: 0x50
	struct AUAEPlayerController* OwningController; // Offset: 0x168 // Size: 0x08
	char pad_0x170[0x8]; // Offset: 0x170 // Size: 0x08
	struct ALuaClassObj* LuaObject; // Offset: 0x178 // Size: 0x08

	// Functions

	// Object Name: Function Client.GameBusinessManager.GetWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAEUserWidget* GetWidget(IntProperty Index); // Offset: 0x103bf4ca0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.GameBusinessManager.GetLuaObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ALuaClassObj* GetLuaObject(); // Offset: 0x103bf4c6c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameBusinessManager.GetGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGameFrontendHUD* GetGameFrontendHUD(); // Offset: 0x103bf4c38 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.GameFrontendHUD
// Size: 0xb70 // Inherited bytes: 0x230
struct UGameFrontendHUD : UFrontendHUD {
	// Fields
	struct FScriptMulticastDelegate OnHandleWebviewActionDelegate; // Offset: 0x230 // Size: 0x10
	struct FScriptMulticastDelegate OnGetTicketNotifyDelegate; // Offset: 0x240 // Size: 0x10
	struct FScriptMulticastDelegate OnHandleServerListDownload; // Offset: 0x250 // Size: 0x10
	struct FScriptMulticastDelegate OnUIStatReport; // Offset: 0x260 // Size: 0x10
	struct FScriptMulticastDelegate OnCloudGMReceive; // Offset: 0x270 // Size: 0x10
	struct FScriptMulticastDelegate OnReportClientTool; // Offset: 0x280 // Size: 0x10
	bool bDuringLobbyEntry; // Offset: 0x290 // Size: 0x01
	char pad_0x291[0x7]; // Offset: 0x291 // Size: 0x07
	uint64 LastDuringLobbyEntryFrame; // Offset: 0x298 // Size: 0x08
	StrProperty LobbyEntryOptions; // Offset: 0x2a0 // Size: 0x10
	StrProperty LobbyEntryLastGameStatus; // Offset: 0x2b0 // Size: 0x10
	StrProperty CSVTableRelativeDir; // Offset: 0x2c0 // Size: 0x10
	MapProperty GameStatusMap; // Offset: 0x2d0 // Size: 0x50
	bool EnableTickLog; // Offset: 0x320 // Size: 0x01
	char pad_0x321[0x1]; // Offset: 0x321 // Size: 0x01
	bool bEnableReportMemory; // Offset: 0x322 // Size: 0x01
	char pad_0x323[0x5]; // Offset: 0x323 // Size: 0x05
	struct FScriptMulticastDelegate OnDeleteFileNotifyEvent; // Offset: 0x328 // Size: 0x10
	char pad_0x338[0x8]; // Offset: 0x338 // Size: 0x08
	struct FScriptMulticastDelegate OnLoadODPaksBinFinishNotifyEvent; // Offset: 0x340 // Size: 0x10
	char pad_0x350[0x58]; // Offset: 0x350 // Size: 0x58
	struct UVoiceSDKInterface* VoiceSDK; // Offset: 0x3a8 // Size: 0x08
	struct UBugReporter* GameBugReporter; // Offset: 0x3b0 // Size: 0x08
	struct UGMLogShare* LogShare; // Offset: 0x3b8 // Size: 0x08
	IntProperty MaxUpdateRetryTimes; // Offset: 0x3c0 // Size: 0x04
	char pad_0x3C4[0xc]; // Offset: 0x3c4 // Size: 0x0c
	struct UGDolphinUpdater* GDolphin; // Offset: 0x3d0 // Size: 0x08
	struct UTranslator* Translator; // Offset: 0x3d8 // Size: 0x08
	struct UHttpWrapper* HttpWrapper; // Offset: 0x3e0 // Size: 0x08
	struct UGCPufferDownloader* GPuffer; // Offset: 0x3e8 // Size: 0x08
	struct ULaggingReporter* LaggingReporter; // Offset: 0x3f0 // Size: 0x08
	char pad_0x3F8[0x8]; // Offset: 0x3f8 // Size: 0x08
	struct UAsyncTaskDownloader* DownloadTask; // Offset: 0x400 // Size: 0x08
	char pad_0x408[0x44]; // Offset: 0x408 // Size: 0x44
	bool bUseDolphinUpdateFirst; // Offset: 0x44c // Size: 0x01
	bool bEnableUseDolphinUpdate; // Offset: 0x44d // Size: 0x01
	bool bEnableUseCDNUpdate; // Offset: 0x44e // Size: 0x01
	bool bUseDolphinUpdateAfterCDNFailed; // Offset: 0x44f // Size: 0x01
	bool bUseCDNUpdateAfterDolphinFailed; // Offset: 0x450 // Size: 0x01
	bool bEnableEditorPufferDownload; // Offset: 0x451 // Size: 0x01
	bool bIsWaitingUpdateStateData; // Offset: 0x452 // Size: 0x01
	bool IsUsingDolphinUpdate; // Offset: 0x453 // Size: 0x01
	bool IsUsingCDNUpdate; // Offset: 0x454 // Size: 0x01
	char pad_0x455[0x13]; // Offset: 0x455 // Size: 0x13
	struct UCDNUpdate* CDNUpdater; // Offset: 0x468 // Size: 0x08
	IntProperty ODPaksPoolSize; // Offset: 0x470 // Size: 0x04
	IntProperty ODPaksPoolSizeLowend; // Offset: 0x474 // Size: 0x04
	IntProperty ODPaksPoolSizeLowendThreshold; // Offset: 0x478 // Size: 0x04
	bool ODPaksEnable; // Offset: 0x47c // Size: 0x01
	char pad_0x47D[0x23]; // Offset: 0x47d // Size: 0x23
	struct TScriptInterface<Class> ClientNetInterface; // Offset: 0x4a0 // Size: 0x10
	struct FName UnrealNetworkStatus; // Offset: 0x4b0 // Size: 0x08
	char pad_0x4B8[0x18]; // Offset: 0x4b8 // Size: 0x18
	float UnrealNetworkConnectingTimer; // Offset: 0x4d0 // Size: 0x04
	char pad_0x4D4[0x18]; // Offset: 0x4d4 // Size: 0x18
	float UnrealNetworkConnectingTime; // Offset: 0x4ec // Size: 0x04
	float UnrealNetworkConnectingTimeAsan; // Offset: 0x4f0 // Size: 0x04
	bool bUseDynamicCreateLuaManager; // Offset: 0x4f4 // Size: 0x01
	char pad_0x4F5[0x3]; // Offset: 0x4f5 // Size: 0x03
	struct TArray<StrProperty> PersistentLuaManager; // Offset: 0x4f8 // Size: 0x10
	char pad_0x508[0x10]; // Offset: 0x508 // Size: 0x10
	bool bPatchReInitSequence; // Offset: 0x518 // Size: 0x01
	char pad_0x519[0x7]; // Offset: 0x519 // Size: 0x07
	struct ULuaStateWrapper* LuaStateWrapper; // Offset: 0x520 // Size: 0x08
	struct ULuaEventBridge* LuaEventBridgeInstace; // Offset: 0x528 // Size: 0x08
	struct UBattleWindowMgrLuaUtils* LuaBattleWindowMgr; // Offset: 0x530 // Size: 0x08
	struct ULuaBlueprintMgr* LuaBlueprintSysMgr; // Offset: 0x538 // Size: 0x08
	char pad_0x540[0x8]; // Offset: 0x540 // Size: 0x08
	StrProperty ScriptBPRelativeDir; // Offset: 0x548 // Size: 0x10
	StrProperty ScriptRelativeDir; // Offset: 0x558 // Size: 0x10
	StrProperty InGameLuaDir; // Offset: 0x568 // Size: 0x10
	StrProperty PreloadLuaFileRelativePath; // Offset: 0x578 // Size: 0x10
	struct TArray<StrProperty> LuaDirList; // Offset: 0x588 // Size: 0x10
	struct TArray<StrProperty> NoGCPackage; // Offset: 0x598 // Size: 0x10
	float LuaTickTime; // Offset: 0x5a8 // Size: 0x04
	bool bCallLuaTick; // Offset: 0x5ac // Size: 0x01
	bool bAutoLoginEnable; // Offset: 0x5ad // Size: 0x01
	char pad_0x5AE[0x2a]; // Offset: 0x5ae // Size: 0x2a
	IntProperty PingFirstReportIntervalSecond; // Offset: 0x5d8 // Size: 0x04
	IntProperty PingReportIntervalSecond; // Offset: 0x5dc // Size: 0x04
	IntProperty LossSyncIntervalSecond; // Offset: 0x5e0 // Size: 0x04
	IntProperty PlayerStatusReportIntervalSecond; // Offset: 0x5e4 // Size: 0x04
	IntProperty LossArraySyncIntervalSecond; // Offset: 0x5e8 // Size: 0x04
	char pad_0x5EC[0x4]; // Offset: 0x5ec // Size: 0x04
	IntProperty vmInstrumentOptimization; // Offset: 0x5f0 // Size: 0x04
	char pad_0x5F4[0x4]; // Offset: 0x5f4 // Size: 0x04
	struct UTssManager* TssMgr; // Offset: 0x5f8 // Size: 0x08
	char pad_0x600[0x4]; // Offset: 0x600 // Size: 0x04
	float PingReportInterval; // Offset: 0x604 // Size: 0x04
	char pad_0x608[0x110]; // Offset: 0x608 // Size: 0x110
	int64_t DeactivatedThreshold; // Offset: 0x718 // Size: 0x08
	int64_t TimePassThreshold; // Offset: 0x720 // Size: 0x08
	uint32_t ImageDownloadClearDayCount; // Offset: 0x728 // Size: 0x04
	char pad_0x72C[0x4]; // Offset: 0x72c // Size: 0x04
	struct FScriptMulticastDelegate UIStackChangeDelegate; // Offset: 0x730 // Size: 0x10
	struct FScriptMulticastDelegate UIStackRecoverDelegate; // Offset: 0x740 // Size: 0x10
	struct FScriptMulticastDelegate OnFRefreshAdaptationUIEvent; // Offset: 0x750 // Size: 0x10
	struct FScriptMulticastDelegate OnFRefreshAdaptationExUIEvent; // Offset: 0x760 // Size: 0x10
	struct FScriptMulticastDelegate EnterBattleStageDelegate; // Offset: 0x770 // Size: 0x10
	struct FScriptMulticastDelegate OnAfterInitedDolphinDelegate; // Offset: 0x780 // Size: 0x10
	struct FScriptMulticastDelegate OnDolphinVersionInfoDelegate; // Offset: 0x790 // Size: 0x10
	struct FScriptMulticastDelegate OnDolphinNoticeInstallApkDelegate; // Offset: 0x7a0 // Size: 0x10
	struct FScriptMulticastDelegate OnDolphinProgressDelegate; // Offset: 0x7b0 // Size: 0x10
	struct FScriptMulticastDelegate OnDolphinErrorDelegate; // Offset: 0x7c0 // Size: 0x10
	struct FScriptMulticastDelegate OnRepairOverMaxTimesDelegate; // Offset: 0x7d0 // Size: 0x10
	struct FScriptMulticastDelegate OnUpdateFinishedDelegate; // Offset: 0x7e0 // Size: 0x10
	struct FScriptMulticastDelegate OnRestartGameDelegate; // Offset: 0x7f0 // Size: 0x10
	struct FScriptMulticastDelegate OnInitIMSDKEnvDelegate; // Offset: 0x800 // Size: 0x10
	struct FScriptMulticastDelegate OnGetEnableCDNGetVersionDelegate; // Offset: 0x810 // Size: 0x10
	struct FScriptMulticastDelegate OnAfterLoadedEditorLoginDelegate; // Offset: 0x820 // Size: 0x10
	struct FScriptMulticastDelegate OnClearUIBeforeReInitLuaStateDelegate; // Offset: 0x830 // Size: 0x10
	struct FScriptMulticastDelegate OnInitStateDelegate; // Offset: 0x840 // Size: 0x10
	struct FScriptMulticastDelegate OnStartPufferUpdateDelegage; // Offset: 0x850 // Size: 0x10
	struct FScriptMulticastDelegate OnGetUpdateStateCDNConfigUrlDelegate; // Offset: 0x860 // Size: 0x10
	struct FScriptMulticastDelegate OnGetCDNUpdateInfoDelegate; // Offset: 0x870 // Size: 0x10
	struct FScriptMulticastDelegate OnQuickLoginDelegate; // Offset: 0x880 // Size: 0x10
	struct FScriptMulticastDelegate OnGetRegionNoByCountryNoDelegate; // Offset: 0x890 // Size: 0x10
	struct FScriptMulticastDelegate OnPhoneMailLoginCallbackDelegate; // Offset: 0x8a0 // Size: 0x10
	struct FScriptMulticastDelegate OnLoginSDKCallbackDelegate; // Offset: 0x8b0 // Size: 0x10
	struct FScriptMulticastDelegate OnFileModifiedDelegate; // Offset: 0x8c0 // Size: 0x10
	struct FScriptMulticastDelegate OnLauncherEventCallback; // Offset: 0x8d0 // Size: 0x10
	char pad_0x8E0[0xc8]; // Offset: 0x8e0 // Size: 0xc8
	struct UImageDownloader* ImageDownloaderInGame; // Offset: 0x9a8 // Size: 0x08
	IntProperty FpsForWindowClient; // Offset: 0x9b0 // Size: 0x04
	char pad_0x9B4[0x4]; // Offset: 0x9b4 // Size: 0x04
	struct UUDPPingCollector* UDPPingCollector; // Offset: 0x9b8 // Size: 0x08
	bool UIElemLayoutJsonConfigSwitch; // Offset: 0x9c0 // Size: 0x01
	bool NationAllSwitch; // Offset: 0x9c1 // Size: 0x01
	bool NationBattleSwitch; // Offset: 0x9c2 // Size: 0x01
	bool NationRankSwitch; // Offset: 0x9c3 // Size: 0x01
	bool SelfieSwitch; // Offset: 0x9c4 // Size: 0x01
	bool ReportBugSwitch; // Offset: 0x9c5 // Size: 0x01
	bool FirstVoicePopupSwitch; // Offset: 0x9c6 // Size: 0x01
	bool GDPRForbidVoiceSwitch; // Offset: 0x9c7 // Size: 0x01
	bool GDPRSettingSwitch; // Offset: 0x9c8 // Size: 0x01
	char pad_0x9C9[0x3]; // Offset: 0x9c9 // Size: 0x03
	IntProperty GDPRUserType; // Offset: 0x9cc // Size: 0x04
	bool bShouldShowAdaptTipInLobby; // Offset: 0x9d0 // Size: 0x01
	char pad_0x9D1[0x3]; // Offset: 0x9d1 // Size: 0x03
	float fLaggingFPSDiffThreshold; // Offset: 0x9d4 // Size: 0x04
	float fLaggingFPSDiffThresholdMin; // Offset: 0x9d8 // Size: 0x04
	float fLaggingFPSDiffThresholdMax; // Offset: 0x9dc // Size: 0x04
	float fLaggingFrameTimeThreshold; // Offset: 0x9e0 // Size: 0x04
	float fLaggingFrameTimeThresholdMin; // Offset: 0x9e4 // Size: 0x04
	float fLaggingFrameTimeThresholdMax; // Offset: 0x9e8 // Size: 0x04
	float fFPSReportInterval; // Offset: 0x9ec // Size: 0x04
	char pad_0x9F0[0x10]; // Offset: 0x9f0 // Size: 0x10
	bool bUnLoadNoGcPackage; // Offset: 0xa00 // Size: 0x01
	char pad_0xA01[0x7]; // Offset: 0xa01 // Size: 0x07
	struct TArray<struct UPackage*> NoGcPackages; // Offset: 0xa08 // Size: 0x10
	bool bFlushAsyncLoadingBeforeGC; // Offset: 0xa18 // Size: 0x01
	bool bEnableJMLog; // Offset: 0xa19 // Size: 0x01
	char pad_0xA1A[0xb6]; // Offset: 0xa1a // Size: 0xb6
	bool bEnableH5Cache; // Offset: 0xad0 // Size: 0x01
	bool bCheckWorldNameForLoadConfig; // Offset: 0xad1 // Size: 0x01
	char pad_0xAD2[0x6]; // Offset: 0xad2 // Size: 0x06
	struct UColorBlindnessMgr* ColorBlindnessMgrInstace; // Offset: 0xad8 // Size: 0x08
	struct TArray<struct FNativeHUDTickContainer> NativeHUDTickList; // Offset: 0xae0 // Size: 0x10
	bool IsNativeHUDTickLock; // Offset: 0xaf0 // Size: 0x01
	bool IsShutDown; // Offset: 0xaf1 // Size: 0x01
	char pad_0xAF2[0x2]; // Offset: 0xaf2 // Size: 0x02
	IntProperty NativeHUDTickIndex; // Offset: 0xaf4 // Size: 0x04
	struct UAsyncLoadHelper* AsyncLoadHelper; // Offset: 0xaf8 // Size: 0x08
	StrProperty BattleUtilsClassName; // Offset: 0xb00 // Size: 0x10
	struct UBattleUtils* BattleUtils; // Offset: 0xb10 // Size: 0x08
	char pad_0xB18[0x8]; // Offset: 0xb18 // Size: 0x08
	DelegateProperty OnImagePickDetectEvent; // Offset: 0xb20 // Size: 0x10
	DelegateProperty OnVideoPickEvent; // Offset: 0xb30 // Size: 0x10
	DelegateProperty OnPermissionResultEvent; // Offset: 0xb40 // Size: 0x10
	struct FScriptMulticastDelegate OnDeviceRotationChangedEvent; // Offset: 0xb50 // Size: 0x10
	StrProperty CurrentMapName; // Offset: 0xb60 // Size: 0x10

	// Functions

	// Object Name: Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegisterUIShowHideEventDelegate(StrProperty Source); // Offset: 0x103bf7ec4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.TimeStatisticStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TimeStatisticStop(IntProperty Type, StrProperty Name); // Offset: 0x103bf7da0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.TimeStatisticStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TimeStatisticStart(IntProperty Type); // Offset: 0x103bf7d24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.TickUdpCollector
	// Flags: [Final|Native|Public]
	void TickUdpCollector(float DeltaTime); // Offset: 0x103bf7ca8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.StatisVisibilityWidget
	// Flags: [Final|Native|Public]
	void StatisVisibilityWidget(struct UWidget* Widget); // Offset: 0x103bf7c2c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.StatisLoadedTexture
	// Flags: [Final|Native|Public]
	void StatisLoadedTexture(struct UTexture* Texture); // Offset: 0x103bf7bb0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.StartUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool StartUpdate(); // Offset: 0x103bf7b7c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.StartGrayUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool StartGrayUpdate(); // Offset: 0x103bf7b48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.StartDolphinUpdateAfterCDNUpdateFailed
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartDolphinUpdateAfterCDNUpdateFailed(); // Offset: 0x103bf7b34 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.StartCDNUpdateAfterDolphinUpdateFailed
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartCDNUpdateAfterDolphinUpdateFailed(); // Offset: 0x103bf7b20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.ShutdownUnrealNetwork
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShutdownUnrealNetwork(); // Offset: 0x103bf7b04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.SetShouldShowAdaptTipInLobby
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetShouldShowAdaptTipInLobby(bool bShoudShow); // Offset: 0x103bf7a80 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.SetGameSubMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGameSubMode(StrProperty SubMode); // Offset: 0x103bf79e8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.SetGameStatusMap
	// Flags: [Final|Native|Public|HasOutParms]
	void SetGameStatusMap(MapProperty& InGameStatusMap); // Offset: 0x103bf793c // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.GameFrontendHUD.SetClientEnterBattleStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClientEnterBattleStage(StrProperty InStageStr); // Offset: 0x103bf78a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.SetAccountByWebLogin
	// Flags: [Final|Native|Public]
	void SetAccountByWebLogin(IntProperty Channel, StrProperty OpenID, StrProperty UserId, StrProperty TokenID, IntProperty expireTime); // Offset: 0x103bf76e8 // Return & Params: Num(5) Size(0x3c)

	// Object Name: Function Client.GameFrontendHUD.RetryDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RetryDownload(); // Offset: 0x103bf76d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.RetryCDNDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RetryCDNDownload(); // Offset: 0x103bf76c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.RequestPhotoPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestPhotoPermission(DelegateProperty PermissionResultEvent); // Offset: 0x103bf7630 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.RequestCameraPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestCameraPermission(DelegateProperty PermissionResultEvent); // Offset: 0x103bf75a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.ReportNetContinuousSaturate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReportNetContinuousSaturate(); // Offset: 0x103bf758c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.RemoveSuppotAdaptationBind
	// Flags: [Final|Native|Public]
	void RemoveSuppotAdaptationBind(struct UPanelSlot* PanelSlot); // Offset: 0x103bf7510 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.ReleaseLuaBlueprintSysMgr
	// Flags: [Final|Native|Public]
	void ReleaseLuaBlueprintSysMgr(); // Offset: 0x103bf74f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.ReleaseInGameUIManager
	// Flags: [Final|Native|Public]
	void ReleaseInGameUIManager(); // Offset: 0x103bf74e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.ReleaseBattleUtils
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReleaseBattleUtils(); // Offset: 0x103bf74d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterUserSettingsDelegate(DelegateProperty Delegate); // Offset: 0x103bf7440 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterUIShowHideEventDelegate(StrProperty Source, DelegateProperty Delegate); // Offset: 0x103bf7308 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.GameFrontendHUD.PickVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PickVideo(DelegateProperty VideoPickEvent, IntProperty MaxSize, float MaxDuration); // Offset: 0x103bf7200 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.PickImageDetectQRCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PickImageDetectQRCode(DelegateProperty ImagePickDetectEvent); // Offset: 0x103bf7170 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.OnWebviewNotify
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms]
	void OnWebviewNotify(struct FWebviewInfoWrapper& webviewinfo); // Offset: 0x103bf70c4 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Client.GameFrontendHUD.OnWebviewActionNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnWebviewActionNotify(StrProperty URL); // Offset: 0x103bf6fe0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.OnUAAssistantEvent
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms]
	void OnUAAssistantEvent(struct FUAAssistantInfoWrapper& UAAssistentInfo); // Offset: 0x103bf6f30 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Client.GameFrontendHUD.OnSDKCallbackEvent
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms]
	void OnSDKCallbackEvent(struct FSDKCallbackInfoWrapper& sdkCallbackInfo); // Offset: 0x103bf6e80 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Client.GameFrontendHUD.OnRequestComplete
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void OnRequestComplete(struct FCDNDownloaderInfo& Info); // Offset: 0x103bf6dcc // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Client.GameFrontendHUD.OnRefreshAccountInfo
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnRefreshAccountInfo(bool Result, IntProperty InChannel, StrProperty InOpenid); // Offset: 0x103bf6c5c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.OnQuickLoginNotify
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms]
	void OnQuickLoginNotify(struct FWakeupInfoWrapper& wakeupinfo); // Offset: 0x103bf6bb0 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.GameFrontendHUD.OnPlatformFriendNotify
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms]
	void OnPlatformFriendNotify(struct FPlatformFriendInfoMap& PlatformFriendInfoMap); // Offset: 0x103bf6af8 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Client.GameFrontendHUD.OnNotUpdateFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnNotUpdateFinished(); // Offset: 0x103bf6ae4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.OnLoginFlowNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnLoginFlowNotify(IntProperty _Flow, IntProperty _Param, StrProperty ExtraData); // Offset: 0x103bf6978 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.OnHttpImgResponse
	// Flags: [Final|Native|Protected]
	void OnHttpImgResponse(struct UTexture2D* Texture, struct UImageDownloader* downloader); // Offset: 0x103bf68c4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.OnGroupNotify
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms]
	void OnGroupNotify(struct FGroupInfoWrapper& groupInfo); // Offset: 0x103bf6814 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.GameFrontendHUD.OnGetTicketNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnGetTicketNotify(StrProperty Ticket); // Offset: 0x103bf6730 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.OnGetShortUrlNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnGetShortUrlNotify(IntProperty Ret, StrProperty shortUrl); // Offset: 0x103bf660c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.OnGetCountryNoNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnGetCountryNoNotify(IntProperty Country); // Offset: 0x103bf6590 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.OnGenQRImgNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnGenQRImgNotify(IntProperty Ret, IntProperty Size, StrProperty imgPath); // Offset: 0x103bf6480 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.OnGameMasterEvent
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnGameMasterEvent(StrProperty EventName, IntProperty Ret); // Offset: 0x103bf635c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.GameFrontendHUD.OnConnectorNetStateChangeNotify
	// Flags: [Final|RequiredAPI|Native|Public]
	void OnConnectorNetStateChangeNotify(IntProperty State, IntProperty EventParam1, IntProperty EventParam2, IntProperty EventParam3); // Offset: 0x103bf6234 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.OnCheckUpdateStateFinished
	// Flags: [Final|Native|Private|HasOutParms]
	void OnCheckUpdateStateFinished(struct FDownloaderInfo& Info); // Offset: 0x103bf6188 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function Client.GameFrontendHUD.OnAreaChanged
	// Flags: [Final|Native|Public]
	void OnAreaChanged(StrProperty InArea); // Offset: 0x103bf60f0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.NotifyLoadingUIOperation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void NotifyLoadingUIOperation(IntProperty OperationType); // Offset: 0x103bf6074 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.MakeToSuppotAdaptation
	// Flags: [Final|Native|Public]
	void MakeToSuppotAdaptation(struct UPanelSlot* PanelSlot); // Offset: 0x103bf5ff8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.LuaDoString
	// Flags: [Native|Public|BlueprintCallable|Const]
	void LuaDoString(StrProperty LuaString); // Offset: 0x103bf5f58 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.IsWindowOB
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsWindowOB(); // Offset: 0x103bf5f24 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.IsODPaksBinLoaded
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsODPaksBinLoaded(); // Offset: 0x103bf5ef0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.IsInstallPlatform
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsInstallPlatform(StrProperty Platform); // Offset: 0x103bf5dfc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.GameFrontendHUD.IsCEHideLobbyUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCEHideLobbyUI(); // Offset: 0x103bf5dc8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.HasAnyNetMsgToHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasAnyNetMsgToHandle(); // Offset: 0x103bf5d94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.GetWidgetRenderCanChange
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetWidgetRenderCanChange(); // Offset: 0x103bf5d60 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.GetVoiceSDKInterface
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UVoiceSDKInterface* GetVoiceSDKInterface(); // Offset: 0x103bf5d24 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetUserSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct USaveGame* GetUserSettings(); // Offset: 0x103bf5ce8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetUpdater
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UGDolphinUpdater* GetUpdater(); // Offset: 0x103bf5ccc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetTranslator
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTranslator* GetTranslator(); // Offset: 0x103bf5cb0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetShouldShowAdaptTipInLobby
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetShouldShowAdaptTipInLobby(); // Offset: 0x103bf5c7c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.GetSettingSubsystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct USettingSubsystem* GetSettingSubsystem(); // Offset: 0x103bf5c48 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetPufferDownloader
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UGCPufferDownloader* GetPufferDownloader(); // Offset: 0x103bf5c2c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetPlayerStatusReportInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPlayerStatusReportInfo(); // Offset: 0x103bf5bc8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetPingReportInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPingReportInfo(); // Offset: 0x103bf5b64 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetPhotoPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetPhotoPermission(); // Offset: 0x103bf5b30 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.GetPacketLossReportInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPacketLossReportInfo(); // Offset: 0x103bf5acc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetLuaStateWrapper
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULuaStateWrapper* GetLuaStateWrapper(); // Offset: 0x103bf5a98 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetLuaEventBridge
	// Flags: [Final|Native|Public]
	struct ULuaEventBridge* GetLuaEventBridge(); // Offset: 0x103bf5a64 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetLuaBlueprintSysMgr
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ULuaBlueprintMgr* GetLuaBlueprintSysMgr(); // Offset: 0x103bf5a30 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetHttpWrapper
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UHttpWrapper* GetHttpWrapper(); // Offset: 0x103bf5a14 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetGameSubMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetGameSubMode(); // Offset: 0x103bf59dc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetGameState
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AGameStateBase* GetGameState(); // Offset: 0x103bf59a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetFPSReportInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetFPSReportInfo(); // Offset: 0x103bf5944 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetEffectSettingMgr
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UEffectSettingMgr* GetEffectSettingMgr(); // Offset: 0x103bf5908 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetDetailNetInfoFromDPM
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetDetailNetInfoFromDPM(); // Offset: 0x103bf58d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.GetColorBlindnessMgr
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UColorBlindnessMgr* GetColorBlindnessMgr(); // Offset: 0x103bf5898 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetClientNetObj
	// Flags: [Final|Native|Public|Const]
	struct UObject* GetClientNetObj(); // Offset: 0x103bf5864 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetClientEnterBattleStageCostTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetClientEnterBattleStageCostTime(); // Offset: 0x103bf5800 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetClientEnterBattleStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetClientEnterBattleStage(); // Offset: 0x103bf57c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetCameraPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetCameraPermission(); // Offset: 0x103bf5794 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.GetBugReporter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UBugReporter* GetBugReporter(); // Offset: 0x103bf5760 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetBattleUtils
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UBattleUtils* GetBattleUtils(); // Offset: 0x103bf572c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.GetBattleIDHexStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetBattleIDHexStr(); // Offset: 0x103bf56c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.GetAsyncLoadHelper
	// Flags: [Final|Native|Public]
	struct UAsyncLoadHelper* GetAsyncLoadHelper(); // Offset: 0x103bf5694 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.FinishModifyUserSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishModifyUserSettings(); // Offset: 0x103bf5680 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.EnableLobbyEntry
	// Flags: [Final|Native|Public]
	bool EnableLobbyEntry(); // Offset: 0x103bf564c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.EnableFPSAndMemoryLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableFPSAndMemoryLog(bool bEnable); // Offset: 0x103bf55c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameFrontendHUD.DispatchLongTimeNoOperation
	// Flags: [Final|Native|Public|HasOutParms]
	void DispatchLongTimeNoOperation(IntProperty& TimeOutCounter); // Offset: 0x103bf553c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameFrontendHUD.DestroyDolphin
	// Flags: [Final|Native|Public]
	void DestroyDolphin(); // Offset: 0x103bf5528 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.CvmRotateClockwise
	// Flags: [Final|Native|Public]
	float CvmRotateClockwise(float Yaw, float DeltaTime); // Offset: 0x103bf5464 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Client.GameFrontendHUD.CreateQRCodeTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTexture2D* CreateQRCodeTexture(StrProperty Text); // Offset: 0x103bf53bc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GameFrontendHUD.CreateInGameUIManager
	// Flags: [Final|Native|Public]
	void CreateInGameUIManager(); // Offset: 0x103bf53a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.CreateBattleUtils
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CreateBattleUtils(); // Offset: 0x103bf5394 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.CallGlobalScriptFunctionWithString
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallGlobalScriptFunctionWithString(StrProperty InFunctionName, StrProperty Arg1); // Offset: 0x103bf52a0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.GameFrontendHUD.CallGlobalScriptFunction
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallGlobalScriptFunction(StrProperty InFunctionName); // Offset: 0x103bf5200 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameFrontendHUD.BeginModifyUserSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BeginModifyUserSettings(); // Offset: 0x103bf51ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.BattleUtilsGameEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BattleUtilsGameEnd(); // Offset: 0x103bf51d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.AfterLoadedEditorLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AfterLoadedEditorLogin(); // Offset: 0x103bf51c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GameFrontendHUD.AddAdaptationWidgetDelegateEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddAdaptationWidgetDelegateEx(struct UPanelSlot* PanelSlot); // Offset: 0x103bf5148 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameFrontendHUD.AddAdaptationWidgetDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddAdaptationWidgetDelegate(struct UPanelSlot* PanelSlot); // Offset: 0x103bf50cc // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.GameFrontendUtils
// Size: 0x378 // Inherited bytes: 0x378
struct UGameFrontendUtils : UFrontendUtils {
};

// Object Name: Class Client.GameJoyInterface
// Size: 0x48 // Inherited bytes: 0x28
struct UGameJoyInterface : UObject {
	// Fields
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x18]; // Offset: 0x30 // Size: 0x18

	// Functions

	// Object Name: Function Client.GameJoyInterface.ShareVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShareVideo(IntProperty Channel); // Offset: 0x103bffd44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameJoyInterface.SetGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGameFrontendHUD(struct UGameFrontendHUD* InHUD); // Offset: 0x103bffcc8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameJoyInterface.OnVideoShare
	// Flags: [Final|Native|Private]
	void OnVideoShare(StrProperty Msg); // Offset: 0x103bffbe4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GameJoyInterface.OnShowVideoPlayer
	// Flags: [Final|Native|Private]
	void OnShowVideoPlayer(IntProperty IsShow); // Offset: 0x103bffb68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameJoyInterface.OnRecordingStart
	// Flags: [Final|Native|Private]
	void OnRecordingStart(IntProperty status); // Offset: 0x103bffaec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameJoyInterface.OnRecordingEnd
	// Flags: [Final|Native|Private]
	void OnRecordingEnd(int64_t Duration); // Offset: 0x103bffa70 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GameJoyInterface.OnManualRecordingStart
	// Flags: [Final|Native|Private]
	void OnManualRecordingStart(IntProperty status); // Offset: 0x103bff9f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameJoyInterface.OnCheckSDKPermission
	// Flags: [Final|Native|Private]
	void OnCheckSDKPermission(bool IsSuccess); // Offset: 0x103bff970 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameJoyInterface.OnCheckSDKFeature
	// Flags: [Final|Native|Private]
	void OnCheckSDKFeature(IntProperty sdkFeatureInt); // Offset: 0x103bff8f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GameJoyInterface.IsSDKFeatureSupport
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsSDKFeatureSupport(); // Offset: 0x103bff8c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GameJoyInterface.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UGameJoyInterface* GetInstance(); // Offset: 0x103bff88c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.GDolphinUpdater
// Size: 0x2e8 // Inherited bytes: 0x28
struct UGDolphinUpdater : UObject {
	// Fields
	char pad_0x28[0x50]; // Offset: 0x28 // Size: 0x50
	MapProperty pakHashList; // Offset: 0x78 // Size: 0x50
	char pad_0xC8[0x88]; // Offset: 0xc8 // Size: 0x88
	bool AllowIOSBGDownload; // Offset: 0x150 // Size: 0x01
	bool AllowIOSBGDownloadPush; // Offset: 0x151 // Size: 0x01
	bool DisableJPKRBGDownloadNightPush; // Offset: 0x152 // Size: 0x01
	char pad_0x153[0x1]; // Offset: 0x153 // Size: 0x01
	IntProperty DisableJPKRBGDownloadNightPushAfterHour; // Offset: 0x154 // Size: 0x04
	IntProperty DisableJPKRBGDownloadNightPushBeforeHour; // Offset: 0x158 // Size: 0x04
	IntProperty IOSBGDownloadPushDelaySeconds; // Offset: 0x15c // Size: 0x04
	bool EnableRandomBackupURL; // Offset: 0x160 // Size: 0x01
	bool EnablePufferUpdate; // Offset: 0x161 // Size: 0x01
	bool UseLocalSrcVersionWhenUpdateFailed; // Offset: 0x162 // Size: 0x01
	char pad_0x163[0x15]; // Offset: 0x163 // Size: 0x15
	StrProperty UpdateInfoPath; // Offset: 0x178 // Size: 0x10
	bool OpenDebugLog; // Offset: 0x188 // Size: 0x01
	char pad_0x189[0x15f]; // Offset: 0x189 // Size: 0x15f

	// Functions

	// Object Name: Function Client.GDolphinUpdater.StartAppUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartAppUpdate(); // Offset: 0x103c008e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.SetEnableCDNGetVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEnableCDNGetVersion(bool Enable); // Offset: 0x103c00860 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GDolphinUpdater.OnUpdateError
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnUpdateError(IntProperty curVersionStage, IntProperty ErrorCode); // Offset: 0x103c007ac // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.GDolphinUpdater.OnDolphinBGDownloadDone
	// Flags: [Final|Native|Public]
	void OnDolphinBGDownloadDone(); // Offset: 0x103c00798 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.OnAreaChanged
	// Flags: [Final|Native|Private]
	void OnAreaChanged(StrProperty InArea); // Offset: 0x103c00700 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GDolphinUpdater.IsUpdating
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsUpdating(); // Offset: 0x103c006cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GDolphinUpdater.IsGrayUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsGrayUpdate(); // Offset: 0x103c00698 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GDolphinUpdater.IsExamine
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsExamine(); // Offset: 0x103c00664 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GDolphinUpdater.Install
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Install(); // Offset: 0x103c00650 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.GetTotalValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetTotalValue(); // Offset: 0x103c0061c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GDolphinUpdater.GetCurValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetCurValue(); // Offset: 0x103c005e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GDolphinUpdater.GetCurStage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetCurStage(float& percent, IntProperty& GetCurVal, IntProperty& GetMaxVal); // Offset: 0x103c004ac // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Client.GDolphinUpdater.GetCurPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetCurPercent(); // Offset: 0x103c00478 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GDolphinUpdater.GetChannelIDWithHUD
	// Flags: [Final|Native|Private]
	uint32_t GetChannelIDWithHUD(struct UGameFrontendHUD* InGameFrontendHUD); // Offset: 0x103c003ec // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.GDolphinUpdater.GetChannelID
	// Flags: [Final|Native|Private]
	uint32_t GetChannelID(); // Offset: 0x103c003b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GDolphinUpdater.FinishUpdate
	// Flags: [Final|Native|Public]
	void FinishUpdate(); // Offset: 0x103c003a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.FinishPufferUpdate
	// Flags: [Final|Native|Public]
	void FinishPufferUpdate(); // Offset: 0x103c00390 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.EnableIOSBGDownload4G
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableIOSBGDownload4G(bool bEnableCellularAccess); // Offset: 0x103c0030c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GDolphinUpdater.EnableCDNGetVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool EnableCDNGetVersion(); // Offset: 0x103c002d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GDolphinUpdater.DynamicAdjustDolphinSystemParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DynamicAdjustDolphinSystemParameter(MapProperty InConiguration); // Offset: 0x103c00218 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.GDolphinUpdater.ContinueUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ContinueUpdate(); // Offset: 0x103c00204 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.CancelUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CancelUpdate(); // Offset: 0x103c001f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GDolphinUpdater.CancelAppUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CancelAppUpdate(); // Offset: 0x103c001dc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.AvatarItemDownloadPuffer
// Size: 0x30 // Inherited bytes: 0x30
struct UAvatarItemDownloadPuffer : UAvatarItemDownload {
	// Functions

	// Object Name: Function Client.AvatarItemDownloadPuffer.StartDownloadItem
	// Flags: [Native|Public]
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, DelegateProperty OnItemDownloadDelegate); // Offset: 0x103c016e4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.AvatarItemDownloadPuffer.StartBatchDownloadItem
	// Flags: [Native|Public]
	void StartBatchDownloadItem(struct TArray<uint32_t> ItemIDs, uint32_t Priority, DelegateProperty OnBatchItemDownloadDelegate); // Offset: 0x103c01564 // Return & Params: Num(3) Size(0x28)
};

// Object Name: Class Client.GCPufferDownloader
// Size: 0x530 // Inherited bytes: 0x28
struct UGCPufferDownloader : UObject {
	// Fields
	char pad_0x28[0x3a8]; // Offset: 0x28 // Size: 0x3a8
	bool Disable; // Offset: 0x3d0 // Size: 0x01
	char pad_0x3D1[0x97]; // Offset: 0x3d1 // Size: 0x97
	StrProperty DownloadDir; // Offset: 0x468 // Size: 0x10
	StrProperty PufferTmpDir; // Offset: 0x478 // Size: 0x10
	uint32_t CleanFlagVer; // Offset: 0x488 // Size: 0x04
	char pad_0x48C[0x4]; // Offset: 0x48c // Size: 0x04
	struct TArray<StrProperty> CleanFileNamePattern; // Offset: 0x490 // Size: 0x10
	bool PreFetchPakEnable; // Offset: 0x4a0 // Size: 0x01
	bool PreFetchFileClearEnable; // Offset: 0x4a1 // Size: 0x01
	bool PreFetchConvertEnable; // Offset: 0x4a2 // Size: 0x01
	char pad_0x4A3[0x5]; // Offset: 0x4a3 // Size: 0x05
	struct TArray<StrProperty> PreFetchPakNames; // Offset: 0x4a8 // Size: 0x10
	uint32_t PreFetchReserveredDiskSpace; // Offset: 0x4b8 // Size: 0x04
	bool PreFetchODPak_Enable; // Offset: 0x4bc // Size: 0x01
	char pad_0x4BD[0x3]; // Offset: 0x4bd // Size: 0x03
	IntProperty PreFetchODPaks_MaxNum; // Offset: 0x4c0 // Size: 0x04
	IntProperty PreFetchODPaks_BatchSize; // Offset: 0x4c4 // Size: 0x04
	IntProperty PreFetchODPaks_FetchedNum; // Offset: 0x4c8 // Size: 0x04
	IntProperty PreFetchODPaks_FetchedIndex; // Offset: 0x4cc // Size: 0x04
	struct TArray<StrProperty> PreFetchODPaks_Filenames; // Offset: 0x4d0 // Size: 0x10
	bool AllowIOSBGDownload; // Offset: 0x4e0 // Size: 0x01
	bool AllowIOSBGDownloadPush; // Offset: 0x4e1 // Size: 0x01
	bool DisableJPKRBGDownloadNightPush; // Offset: 0x4e2 // Size: 0x01
	char pad_0x4E3[0x1]; // Offset: 0x4e3 // Size: 0x01
	IntProperty DisableJPKRBGDownloadNightPushAfterHour; // Offset: 0x4e4 // Size: 0x04
	IntProperty DisableJPKRBGDownloadNightPushBeforeHour; // Offset: 0x4e8 // Size: 0x04
	IntProperty IOSBGDownloadPushDelaySeconds; // Offset: 0x4ec // Size: 0x04
	bool DisableBGDownloadNotification; // Offset: 0x4f0 // Size: 0x01
	char pad_0x4F1[0x3]; // Offset: 0x4f1 // Size: 0x03
	IntProperty OptiHttpConfig_uEnableAverageShardingStrategy; // Offset: 0x4f4 // Size: 0x04
	IntProperty OptiHttpConfig_uAverageShardingSize; // Offset: 0x4f8 // Size: 0x04
	IntProperty OptiHttpConfig_uEnableDynamicExpansionMaxTask; // Offset: 0x4fc // Size: 0x04
	float PreFetchODPaks_StartTime; // Offset: 0x500 // Size: 0x04
	char pad_0x504[0x4]; // Offset: 0x504 // Size: 0x04
	StrProperty PreFetchODPaks_ConfigName; // Offset: 0x508 // Size: 0x10
	char pad_0x518[0x18]; // Offset: 0x518 // Size: 0x18

	// Functions

	// Object Name: Function Client.GCPufferDownloader.StopTask
	// Flags: [Final|Native|Public]
	bool StopTask(uint64 TaskID); // Offset: 0x103c04388 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.GCPufferDownloader.StopMergeBinDiffPak
	// Flags: [Final|Native|Public]
	IntProperty StopMergeBinDiffPak(IntProperty outterTaskID); // Offset: 0x103c042fc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.GCPufferDownloader.StopCheckDownloadFileFraming
	// Flags: [Final|Native|Public]
	bool StopCheckDownloadFileFraming(IntProperty outterTaskID); // Offset: 0x103c04270 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.GCPufferDownloader.StopBGDownloadNotification
	// Flags: [Final|Native|Public]
	void StopBGDownloadNotification(); // Offset: 0x103c0425c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.GCPufferDownloader.StopAllTask
	// Flags: [Final|Native|Public]
	bool StopAllTask(); // Offset: 0x103c04228 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.StartDownloadItem
	// Flags: [Final|Native|Public]
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, DelegateProperty downloadDelegate); // Offset: 0x103c04124 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.GCPufferDownloader.StartBGDownloadNotification
	// Flags: [Final|Native|Public]
	void StartBGDownloadNotification(uint64 InDownloadedSize); // Offset: 0x103c040a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.GCPufferDownloader.StartBatchDownloadItem
	// Flags: [Final|Native|Public]
	void StartBatchDownloadItem(struct TArray<uint32_t> ItemIDs, uint32_t Priority, DelegateProperty OnBatchItemDownloadDelegate); // Offset: 0x103c03f30 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.GCPufferDownloader.SetTempProductIdBase
	// Flags: [Final|Native|Public]
	void SetTempProductIdBase(IntProperty ProductIdRaw); // Offset: 0x103c03eb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.SetPrefetchConfig
	// Flags: [Final|Native|Public]
	void SetPrefetchConfig(bool pakEnable, bool fileClearEnable, bool convertEnable, IntProperty reserveredDiskSpace, StrProperty FileList, IntProperty InPreFetchODPaksMaxNum, IntProperty InPreFetchODPaksBatchSize); // Offset: 0x103c03c38 // Return & Params: Num(7) Size(0x20)

	// Object Name: Function Client.GCPufferDownloader.SetIOSBGDownloadAttribute
	// Flags: [Final|Native|Public]
	void SetIOSBGDownloadAttribute(bool bEnableCellularAccess, bool bEnableResumeData, IntProperty nMinFileSize, IntProperty nMaxTasks); // Offset: 0x103c03af4 // Return & Params: Num(4) Size(0xc)

	// Object Name: Function Client.GCPufferDownloader.SetImmDLPollingTime
	// Flags: [Final|Native|Public]
	bool SetImmDLPollingTime(IntProperty InPollingTime); // Offset: 0x103c03a68 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.GCPufferDownloader.SetImmDLMaxTask
	// Flags: [Final|Native|Public]
	bool SetImmDLMaxTask(IntProperty InMaxTask); // Offset: 0x103c039dc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.GCPufferDownloader.SetImmDLMaxSpeed
	// Flags: [Final|Native|Public]
	bool SetImmDLMaxSpeed(uint64 MaxSpeed); // Offset: 0x103c03950 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.GCPufferDownloader.SetImmDLMaxDownloadsPerTask
	// Flags: [Final|Native|Public]
	bool SetImmDLMaxDownloadsPerTask(IntProperty InMaxDownloadsPerTask); // Offset: 0x103c038c4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.GCPufferDownloader.SetImmDLGapSize
	// Flags: [Final|Native|Public]
	bool SetImmDLGapSize(IntProperty InGapSize); // Offset: 0x103c03838 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.GCPufferDownloader.SetBattleDownloadSwitch
	// Flags: [Final|Native|Public]
	void SetBattleDownloadSwitch(bool Enable); // Offset: 0x103c037b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.ReturnSplitMiniPakFilelist_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty ReturnSplitMiniPakFilelist_LuaState(); // Offset: 0x103c0379c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.ReturnSplitLobbyPakFileList_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty ReturnSplitLobbyPakFileList_LuaState(); // Offset: 0x103c03784 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.ReturnLocalFiles_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty ReturnLocalFiles_LuaState(); // Offset: 0x103c0376c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.RequestFile
	// Flags: [Final|Native|Public]
	uint64 RequestFile(StrProperty FilePath, bool ForceUpdate, StrProperty InUA); // Offset: 0x103c03628 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function Client.GCPufferDownloader.RemountPakFiles
	// Flags: [Final|Native|Public]
	bool RemountPakFiles(); // Offset: 0x103c035f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.ReadFile
	// Flags: [Final|Native|Public]
	StrProperty ReadFile(StrProperty Filename); // Offset: 0x103c034dc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.GCPufferDownloader.PreFetchPakFiles
	// Flags: [Final|Native|Public]
	bool PreFetchPakFiles(); // Offset: 0x103c034a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.PreFetchODPakFilesUpdate
	// Flags: [Final|Native|Public]
	IntProperty PreFetchODPakFilesUpdate(); // Offset: 0x103c03474 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.PreFetchODPakFilesPreProcess
	// Flags: [Final|Native|Public]
	bool PreFetchODPakFilesPreProcess(bool Start); // Offset: 0x103c033e0 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Client.GCPufferDownloader.PreFetchODPakFilesPostProcess
	// Flags: [Final|Native|Public]
	bool PreFetchODPakFilesPostProcess(IntProperty ErrorCode); // Offset: 0x103c03354 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.GCPufferDownloader.PreFetchODPakFiles
	// Flags: [Final|Native|Public]
	bool PreFetchODPakFiles(bool Start); // Offset: 0x103c032c0 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Client.GCPufferDownloader.OnItemDownloadedInFighting
	// Flags: [Final|Native|Public]
	void OnItemDownloadedInFighting(StrProperty PackHash, StrProperty ErrorCode); // Offset: 0x103c03144 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.GCPufferDownloader.OnHashGenerateFinished
	// Flags: [Final|Native|Public]
	void OnHashGenerateFinished(IntProperty outterTaskID, StrProperty hashCode); // Offset: 0x103c03020 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GCPufferDownloader.MoveFileTo
	// Flags: [Final|Native|Public]
	IntProperty MoveFileTo(StrProperty Filename, StrProperty From, StrProperty To); // Offset: 0x103c02dfc // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.GCPufferDownloader.MoveFile
	// Flags: [Final|Native|Public]
	IntProperty MoveFile(StrProperty From, StrProperty To); // Offset: 0x103c02c70 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.GCPufferDownloader.MergeBinDiffPak
	// Flags: [Final|Native|Public]
	IntProperty MergeBinDiffPak(IntProperty outterTaskID, StrProperty PakFilenameOld, StrProperty PakFilenameDiff, StrProperty PakFilenameNew, bool fast); // Offset: 0x103c029c4 // Return & Params: Num(6) Size(0x40)

	// Object Name: Function Client.GCPufferDownloader.IsODPaks
	// Flags: [Final|Native|Public]
	bool IsODPaks(StrProperty FilePath); // Offset: 0x103c028d0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.GCPufferDownloader.IsODFileExists
	// Flags: [Final|Native|Public]
	bool IsODFileExists(StrProperty Path); // Offset: 0x103c02828 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.GCPufferDownloader.IsInitSuccess
	// Flags: [Final|Native|Public]
	bool IsInitSuccess(); // Offset: 0x103c027f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.IsFileReady
	// Flags: [Final|Native|Public]
	bool IsFileReady(StrProperty FilePath); // Offset: 0x103c02700 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.GCPufferDownloader.IsFileExist
	// Flags: [Final|Native|Public]
	bool IsFileExist(StrProperty Filename, StrProperty extension); // Offset: 0x103c02574 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.GCPufferDownloader.InitializeODPaks
	// Flags: [Final|Native|Public]
	bool InitializeODPaks(); // Offset: 0x103c02540 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.GetTempWorkPath
	// Flags: [Final|Native|Public]
	StrProperty GetTempWorkPath(); // Offset: 0x103c024dc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GCPufferDownloader.GetProductIDBase
	// Flags: [Final|Native|Public|HasOutParms]
	void GetProductIDBase(struct TArray<IntProperty>& ProductIDs); // Offset: 0x103c02434 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GCPufferDownloader.GetProductID
	// Flags: [Final|Native|Public|HasOutParms]
	void GetProductID(struct TArray<IntProperty>& ProductIDs); // Offset: 0x103c0238c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GCPufferDownloader.GetODPakNum
	// Flags: [Final|Native|Public]
	IntProperty GetODPakNum(); // Offset: 0x103c02358 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.GetODPakName
	// Flags: [Final|Native|Public]
	StrProperty GetODPakName(StrProperty Path); // Offset: 0x103c02288 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.GCPufferDownloader.GetInitErrcode
	// Flags: [Final|Native|Public]
	uint32_t GetInitErrcode(); // Offset: 0x103c02254 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.GetFileSizeCompressed
	// Flags: [Final|Native|Public]
	uint64 GetFileSizeCompressed(StrProperty FilePath); // Offset: 0x103c02160 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GCPufferDownloader.GetFileSize
	// Flags: [Final|Native|Public]
	float GetFileSize(StrProperty Filename); // Offset: 0x103c0206c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.GCPufferDownloader.GetDownloadPath
	// Flags: [Final|Native|Public]
	StrProperty GetDownloadPath(); // Offset: 0x103c02008 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GCPufferDownloader.GetCurrentSpeed
	// Flags: [Final|Native|Public]
	float GetCurrentSpeed(); // Offset: 0x103c01fd4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.GetBatchODPaksDownloadList_LuaState
	// Flags: [Final|Native|Public]
	IntProperty GetBatchODPaksDownloadList_LuaState(); // Offset: 0x103c01fbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.GCPufferDownloader.EnableUseOldInterface
	// Flags: [Final|Native|Public]
	void EnableUseOldInterface(bool Enable); // Offset: 0x103c01f38 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.DynamicAdjustPufferSystemParameter
	// Flags: [Final|Native|Public]
	void DynamicAdjustPufferSystemParameter(IntProperty InPufferParameterKey, StrProperty InPufferParameterValue); // Offset: 0x103c01e64 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GCPufferDownloader.DeleteFileEvenIfUnfinished
	// Flags: [Final|Native|Public]
	bool DeleteFileEvenIfUnfinished(StrProperty FilePath); // Offset: 0x103c01d70 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.GCPufferDownloader.DeleteFile
	// Flags: [Final|Native|Static|Public]
	bool DeleteFile(StrProperty fullPath); // Offset: 0x103c01c8c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.GCPufferDownloader.ConvertPreFetchFiles
	// Flags: [Final|Native|Public]
	bool ConvertPreFetchFiles(); // Offset: 0x103c01c58 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.ConvertItemIdToPakName
	// Flags: [Final|Native|Public]
	StrProperty ConvertItemIdToPakName(uint32_t ItemId); // Offset: 0x103c01ba4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.GCPufferDownloader.ClearUselessODPaks
	// Flags: [Final|Native|Public]
	bool ClearUselessODPaks(); // Offset: 0x103c01b70 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.ClearPreFetchODPaksFiles
	// Flags: [Final|Native|Public]
	bool ClearPreFetchODPaksFiles(); // Offset: 0x103c01b3c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.ClearPreFetchFiles
	// Flags: [Final|Native|Public]
	bool ClearPreFetchFiles(); // Offset: 0x103c01b08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.GCPufferDownloader.CheckDownloadFileFraming
	// Flags: [Final|Native|Public]
	bool CheckDownloadFileFraming(IntProperty outterTaskID, StrProperty Filename, IntProperty chunkSize); // Offset: 0x103c01994 // Return & Params: Num(4) Size(0x1d)
};

// Object Name: Class Client.GMLogShare
// Size: 0x30 // Inherited bytes: 0x28
struct UGMLogShare : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function Client.GMLogShare.ShareLogFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ShareLogFile(StrProperty InLogFileName); // Offset: 0x103c0575c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.GMLogShare.Init
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void Init(); // Offset: 0x103c05748 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.IMSDKNotice
// Size: 0xa8 // Inherited bytes: 0x28
struct UIMSDKNotice : UObject {
	// Fields
	char pad_0x28[0x80]; // Offset: 0x28 // Size: 0x80

	// Functions

	// Object Name: Function Client.IMSDKNotice.GetNotice
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FIMSDKNoticeInfo> GetNotice(StrProperty Scene); // Offset: 0x103c0619c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.IMSDKNotice.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UIMSDKNotice* GetInstance(); // Offset: 0x103c06168 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.IMSDKNotice.ClearNotice
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearNotice(); // Offset: 0x103c06154 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.HttpWrapper
// Size: 0xb0 // Inherited bytes: 0x28
struct UHttpWrapper : UObject {
	// Fields
	struct FScriptMulticastDelegate OnResponseEvent; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnImageDownloadResponseEvent; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x68]; // Offset: 0x48 // Size: 0x68

	// Functions

	// Object Name: Function Client.HttpWrapper.SimplePostForLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SimplePostForLua(StrProperty URL, StrProperty Content, IntProperty Priority, IntProperty QueueType); // Offset: 0x103c06cc0 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Client.HttpWrapper.SetQueueSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetQueueSize(IntProperty QueueType, IntProperty InSize); // Offset: 0x103c06c0c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.HttpWrapper.SetQueueEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetQueueEnable(bool InEnableQueue); // Offset: 0x103c06b8c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.HttpWrapper.SetPoolEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPoolEnable(bool InEnablePool); // Offset: 0x103c06b04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.HttpWrapper.RequestForLua
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty RequestForLua(StrProperty URL, StrProperty Verb, MapProperty& Headers, StrProperty Content, IntProperty Priority, IntProperty QueueType); // Offset: 0x103c068c8 // Return & Params: Num(7) Size(0x8c)

	// Object Name: Function Client.HttpWrapper.ImageDownloadRequestForLua
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty ImageDownloadRequestForLua(StrProperty URL, StrProperty Verb, MapProperty& Headers, StrProperty Content, IntProperty Priority); // Offset: 0x103c066c8 // Return & Params: Num(6) Size(0x88)

	// Object Name: Function Client.HttpWrapper.GetQueueEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetQueueEnable(); // Offset: 0x103c066ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.HttpWrapper.GetPoolEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetPoolEnable(); // Offset: 0x103c06684 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.HttpWrapper.GetInternalIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetInternalIndex(); // Offset: 0x103c06668 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.HttpWrapper.CancelRequestAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CancelRequestAll(IntProperty QueueType); // Offset: 0x103c065ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.HttpWrapper.CancelRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CancelRequest(IntProperty QueueType, IntProperty ReqIndex); // Offset: 0x103c06538 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class Client.ImageDownloader
// Size: 0xb0 // Inherited bytes: 0x28
struct UImageDownloader : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFail; // Offset: 0x38 // Size: 0x10
	StrProperty FileURL; // Offset: 0x48 // Size: 0x10
	StrProperty CompreesedFileUrl; // Offset: 0x58 // Size: 0x10
	StrProperty FileSavePath; // Offset: 0x68 // Size: 0x10
	StrProperty CompreesedFileSavePath; // Offset: 0x78 // Size: 0x10
	StrProperty UrlHash; // Offset: 0x88 // Size: 0x10
	StrProperty CompreesedUrlHash; // Offset: 0x98 // Size: 0x10
	bool InvalidImageFormat; // Offset: 0xa8 // Size: 0x01
	bool SaveDiskFile; // Offset: 0xa9 // Size: 0x01
	bool ForceUpdate; // Offset: 0xaa // Size: 0x01
	char pad_0xAB[0x5]; // Offset: 0xab // Size: 0x05

	// Functions

	// Object Name: Function Client.ImageDownloader.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Start(StrProperty URL); // Offset: 0x103c0b878 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ImageDownloader.MakeDownloaderInGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UImageDownloader* MakeDownloaderInGame(); // Offset: 0x103c0b844 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ImageDownloader.MakeDownloader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UImageDownloader* MakeDownloader(); // Offset: 0x103c0b810 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ImageDownloader.GetTextureFromUrlWithoutDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTexture2D* GetTextureFromUrlWithoutDownload(StrProperty URL); // Offset: 0x103c0b71c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ImageDownloader.CheckAndGetEncryptUrl
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	StrProperty CheckAndGetEncryptUrl(StrProperty& InURL); // Offset: 0x103c0b64c // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Client.ImageDownloadUtil
// Size: 0x28 // Inherited bytes: 0x28
struct UImageDownloadUtil : UObject {
	// Functions

	// Object Name: Function Client.ImageDownloadUtil.SaveImageDownloadDiskFile
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SaveImageDownloadDiskFile(struct TArray<char>& OutArray, StrProperty SavePath); // Offset: 0x103c0c2e0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ImageDownloadUtil.GetTextureFromMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTexture2D* GetTextureFromMemory(StrProperty PathName); // Offset: 0x103c0c1ec // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ImageDownloadUtil.GetTexture2DFromDisk
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTexture2D* GetTexture2DFromDisk(StrProperty SavePath, bool IsCompressed); // Offset: 0x103c0c0b0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ImageDownloadUtil.GetTexture2DFromArrayWithSRGB
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTexture2D* GetTexture2DFromArrayWithSRGB(struct TArray<char>& OutArray, bool IsCompressed, bool bSRGB); // Offset: 0x103c0bf5c // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Client.ImageDownloadUtil.GetTexture2DFromArray
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTexture2D* GetTexture2DFromArray(struct TArray<char>& OutArray, bool IsCompressed); // Offset: 0x103c0be58 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ImageDownloadUtil.GetLocalImageFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetLocalImageFormat(StrProperty Path); // Offset: 0x103c0bd64 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ImageDownloadUtil.CheckDiskFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckDiskFile(StrProperty ImgDir, StrProperty SubDir); // Offset: 0x103c0bbe8 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Client.InGameUIManager
// Size: 0x378 // Inherited bytes: 0x180
struct UInGameUIManager : UGameBusinessManager {
	// Fields
	char pad_0x180[0x8]; // Offset: 0x180 // Size: 0x08
	struct TArray<struct UObject*> InGameUIList; // Offset: 0x188 // Size: 0x10
	char pad_0x198[0x68]; // Offset: 0x198 // Size: 0x68
	MapProperty WidgetsMap; // Offset: 0x200 // Size: 0x50
	MapProperty PendingAsyncLoadRequests; // Offset: 0x250 // Size: 0x50
	char pad_0x2A0[0xd8]; // Offset: 0x2a0 // Size: 0xd8

	// Functions

	// Object Name: Function Client.InGameUIManager.SubUIWidgetListWithMountData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubUIWidgetListWithMountData(struct TArray<struct FInGameWidgetData>& InGameWidgetDataList, struct TArray<StrProperty>& GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly, IntProperty inUIControlState); // Offset: 0x103c0d39c // Return & Params: Num(6) Size(0x28)

	// Object Name: Function Client.InGameUIManager.SubUIWidgetList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubUIWidgetList(struct TArray<struct FGameWidgetConfig>& InWidgetConfigList, struct TArray<StrProperty>& GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly); // Offset: 0x103c0d1a0 // Return & Params: Num(5) Size(0x23)

	// Object Name: Function Client.InGameUIManager.SubDynamicUIWidgetList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubDynamicUIWidgetList(struct TArray<struct FDynamicWidgetData>& DynamicWidgetMap); // Offset: 0x103c0d0f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.InGameUIManager.OnAsyncLoadWidgetClassObj
	// Flags: [Final|Native|Public]
	void OnAsyncLoadWidgetClassObj(struct UObject* InClassObj, IntProperty RequestID); // Offset: 0x103c0d040 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.InGameUIManager.HandleUIMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleUIMessage(StrProperty UIMessage); // Offset: 0x103c0cfa8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.InGameUIManager.HandleMountWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleMountWidget(struct UInGameUIManager* IngameManager); // Offset: 0x103c0cf2c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.InGameUIManager.HandleDynamicDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleDynamicDestroy(); // Offset: 0x103c0cf18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.InGameUIManager.HandleDynamicCreation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleDynamicCreation(bool isAsyncLoad); // Offset: 0x103c0ce94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.InGameUIManager.GetWidgetHandleAsyncWithCallBack
	// Flags: [Final|Native|Public]
	void GetWidgetHandleAsyncWithCallBack(StrProperty WidgetKey, DelegateProperty InCallback); // Offset: 0x103c0cda8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.InGameUIManager.GetWidgetHandle
	// Flags: [Final|Native|Public]
	struct UUAEUserWidget* GetWidgetHandle(StrProperty WidgetKey); // Offset: 0x103c0cd00 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.InGameUIManager.GetMountCanvasPanel
	// Flags: [Final|Native|Public]
	struct UCanvasPanel* GetMountCanvasPanel(StrProperty MountOuterName, StrProperty MountName); // Offset: 0x103c0cc04 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.InGameUIManager.ChangeSubUIWidgetList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ChangeSubUIWidgetList(struct TArray<struct FGameWidgetConfig>& InWidgetConfigList); // Offset: 0x103c0cb5c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.InGameUIManager.ChangeInvalidWorldNameList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ChangeInvalidWorldNameList(struct TArray<StrProperty>& InList); // Offset: 0x103c0cab4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Client.IntlSDKComplianceHelper
// Size: 0x90 // Inherited bytes: 0x28
struct UIntlSDKComplianceHelper : UObject {
	// Fields
	StrProperty IntlSdkGameId; // Offset: 0x28 // Size: 0x10
	StrProperty IntlSdkUrl; // Offset: 0x38 // Size: 0x10
	StrProperty IntlSdkUrlDebug; // Offset: 0x48 // Size: 0x10
	StrProperty IntlSdkKey; // Offset: 0x58 // Size: 0x10
	bool IntlSdkEnable; // Offset: 0x68 // Size: 0x01
	bool IntlLogEnable; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x6]; // Offset: 0x6a // Size: 0x06
	StrProperty IntlHttpDnsIP; // Offset: 0x70 // Size: 0x10
	StrProperty IntlPf; // Offset: 0x80 // Size: 0x10

	// Functions

	// Object Name: Function Client.IntlSDKComplianceHelper.SetUserProfile
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetUserProfile(StrProperty InRegion); // Offset: 0x103c0e5a0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.IntlSDKComplianceHelper.SetParentStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetParentStatus(IntProperty ParentCertificateStatus); // Offset: 0x103c0e524 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlSDKComplianceHelper.SetLogConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLogConfig(bool enableConsoleLog, bool enableFileLog, IntProperty LogLevel); // Offset: 0x103c0e418 // Return & Params: Num(3) Size(0x8)

	// Object Name: Function Client.IntlSDKComplianceHelper.SetEUAgreeStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEUAgreeStatus(IntProperty AgreeStatus); // Offset: 0x103c0e39c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlSDKComplianceHelper.SetAdulthood
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAdulthood(IntProperty AgeStatus); // Offset: 0x103c0e320 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlSDKComplianceHelper.SendVoiceControlEmail
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SendVoiceControlEmail(StrProperty InEmail, StrProperty InUserName); // Offset: 0x103c0e234 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.IntlSDKComplianceHelper.SendEmail
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SendEmail(StrProperty InEmail, StrProperty UserName, IntProperty InScene); // Offset: 0x103c0e108 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.IntlSDKComplianceHelper.QueryUserStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QueryUserStatus(); // Offset: 0x103c0e0f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlSDKComplianceHelper.QueryIsEEA
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QueryIsEEA(StrProperty InRegion); // Offset: 0x103c0e05c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlSDKComplianceHelper.QueryConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QueryConfig(); // Offset: 0x103c0e048 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlSDKComplianceHelper.OpenConsentSocial
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenConsentSocial(StrProperty InBaseUrl, StrProperty InParamJson, StrProperty InExtraJson); // Offset: 0x103c0df08 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.IntlSDKComplianceHelper.OpenAgeGate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenAgeGate(StrProperty InBaseUrl, StrProperty InParamJson, StrProperty InExtraJson); // Offset: 0x103c0ddc8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.IntlSDKComplianceHelper.OnMSDKEvnSwitched
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnMSDKEvnSwitched(IntProperty Env); // Offset: 0x103c0dd4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.IntlSDKComplianceHelper.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UIntlSDKComplianceHelper* GetInstance(); // Offset: 0x103c0dd18 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.IntlSDKComplianceHelper.ComplianceInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ComplianceInit(); // Offset: 0x103c0dd04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlSDKComplianceHelper.CommitBirthday
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CommitBirthday(StrProperty InBirthday); // Offset: 0x103c0dc6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.IntlSDKComplianceHelper.ClearUserStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearUserStatus(); // Offset: 0x103c0dc58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.IntlSDKComplianceHelper.ChangeRegion
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangeRegion(StrProperty InRegion); // Offset: 0x103c0dbc0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Client.LaggingReporter
// Size: 0x98 // Inherited bytes: 0x28
struct ULaggingReporter : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0x48]; // Offset: 0x50 // Size: 0x48
};

// Object Name: Class Client.LiveBroadcast
// Size: 0x38 // Inherited bytes: 0x28
struct ULiveBroadcast : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function Client.LiveBroadcast.SetFullScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFullScreen(bool FullScreen); // Offset: 0x103c0f028 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.LiveBroadcast.OpenLiveBroadcast
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenLiveBroadcast(StrProperty URL, float Margin); // Offset: 0x103c0ef04 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.LiveBroadcast.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ULiveBroadcast* GetInstance(); // Offset: 0x103c0eed0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.LiveBroadcast.CloseWebView
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseWebView(); // Offset: 0x103c0eebc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.LiveBroadcast.C2JSetString
	// Flags: [Final|Native|Static|Public]
	void C2JSetString(StrProperty str); // Offset: 0x103c0ede0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LiveBroadcast.C2JSetIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void C2JSetIndex(IntProperty Index); // Offset: 0x103c0ed64 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.LoadTexture
// Size: 0x28 // Inherited bytes: 0x28
struct ULoadTexture : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.LoadTexture.LoadTexture2D
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTexture2D* LoadTexture2D(StrProperty ImagePath, bool& IsValid, IntProperty& OutWidth, IntProperty& OutHeight); // Offset: 0x103c0f400 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Client.LoadTexture.GetTexture2DFromDiskFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UTexture2D* GetTexture2DFromDiskFile(StrProperty FilePath); // Offset: 0x103c0f368 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Client.LobbyChatSecurity
// Size: 0x28 // Inherited bytes: 0x28
struct ULobbyChatSecurity : UObject {
	// Functions

	// Object Name: Function Client.LobbyChatSecurity.GetKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetKey(StrProperty OpenID); // Offset: 0x103c0f748 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Client.LobbyDecalBakingComponent
// Size: 0x3d0 // Inherited bytes: 0x3a0
struct ULobbyDecalBakingComponent : USceneComponent {
	// Fields
	struct TArray<struct FDecalParameter> DecalParams; // Offset: 0x3a0 // Size: 0x10
	struct UTextureRenderTarget2D* DecalRenderTarget; // Offset: 0x3b0 // Size: 0x08
	struct ADecalBakingActor* DecalBakingActor; // Offset: 0x3b8 // Size: 0x08
	IntProperty RTSize; // Offset: 0x3c0 // Size: 0x04
	char pad_0x3C4[0xc]; // Offset: 0x3c4 // Size: 0x0c

	// Functions

	// Object Name: Function Client.LobbyDecalBakingComponent.SwitchDecalParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SwitchDecalParam(IntProperty From, IntProperty To); // Offset: 0x103c0fe4c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.LobbyDecalBakingComponent.SavePng
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool SavePng(struct USceneCaptureComponent2D* SceneCapComp, StrProperty ImagePath, struct FLinearColor ClearColor); // Offset: 0x103c0fcd8 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.LobbyDecalBakingComponent.ReplaceOneDecalParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReplaceOneDecalParam(struct UStaticMeshComponent* MeshComp, IntProperty Index, struct UDecalBakingParameterComponent* DecalParamComponent); // Offset: 0x103c0fbe4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.LobbyDecalBakingComponent.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(); // Offset: 0x103c0fbd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.LobbyDecalBakingComponent.DelOneDecalParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DelOneDecalParam(IntProperty Index); // Offset: 0x103c0fb54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.LobbyDecalBakingComponent.Baking
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Baking(struct UStaticMeshComponent* MeshComp, struct UMaterial* DecaledMaterial, bool Async); // Offset: 0x103c0fa5c // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Client.LobbyDecalBakingComponent.AddOneDecalParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddOneDecalParam(struct UStaticMeshComponent* MeshComp, struct UDecalBakingParameterComponent* DecalParamComponent); // Offset: 0x103c0f9a8 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Client.LobbyMatChgActor
// Size: 0x4c8 // Inherited bytes: 0x4b0
struct ALobbyMatChgActor : AActor {
	// Fields
	struct UStaticMeshComponent* stMesh; // Offset: 0x4b0 // Size: 0x08
	struct TArray<struct FLobbyBgMatData> matWaitToChangeList; // Offset: 0x4b8 // Size: 0x10

	// Functions

	// Object Name: Function Client.LobbyMatChgActor.ChangeMaterialToIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangeMaterialToIdx(IntProperty idx); // Offset: 0x103c1035c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.LobbyModelUtils
// Size: 0x28 // Inherited bytes: 0x28
struct ULobbyModelUtils : UObject {
	// Functions

	// Object Name: Function Client.LobbyModelUtils.TickAndRefreshBoneForGivenSkMeshComp
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	void TickAndRefreshBoneForGivenSkMeshComp(struct USkeletalMeshComponent* InSkMesh); // Offset: 0x103c10828 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.LobbyModelUtils.GetActorBoundingBox
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	struct FAABBBox GetActorBoundingBox(struct AActor* InActor, bool EnableDrawDebugBox); // Offset: 0x103c10758 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.LobbyModelUtils.DeprojectScreenToWorldFast
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable]
	bool DeprojectScreenToWorldFast(struct APlayerController* Player, struct FVector2D& ScreenPosition, struct FVector& WorldPosition, struct FVector& WorldDirection); // Offset: 0x103c105fc // Return & Params: Num(5) Size(0x29)
};

// Object Name: Class Client.LobbySceneCaptureActor
// Size: 0x520 // Inherited bytes: 0x4b0
struct ALobbySceneCaptureActor : AActor {
	// Fields
	struct FScriptMulticastDelegate OnCaptureError; // Offset: 0x4b0 // Size: 0x10
	StrProperty PicturePath; // Offset: 0x4c0 // Size: 0x10
	struct FVector2D RTSize; // Offset: 0x4d0 // Size: 0x08
	bool AlphaFullCorrect; // Offset: 0x4d8 // Size: 0x01
	bool AlphaReverse; // Offset: 0x4d9 // Size: 0x01
	char pad_0x4DA[0x2]; // Offset: 0x4da // Size: 0x02
	float AlphaRate; // Offset: 0x4dc // Size: 0x04
	bool AlphaChannelEnable; // Offset: 0x4e0 // Size: 0x01
	bool GammaCorrect; // Offset: 0x4e1 // Size: 0x01
	bool HSSave; // Offset: 0x4e2 // Size: 0x01
	bool ClearDrawRT; // Offset: 0x4e3 // Size: 0x01
	char pad_0x4E4[0x4]; // Offset: 0x4e4 // Size: 0x04
	struct UMaterialInstance* WriteMat; // Offset: 0x4e8 // Size: 0x08
	struct UTextureRenderTarget2D* DrawRT; // Offset: 0x4f0 // Size: 0x08
	struct USceneCaptureComponent2D* Capture2D; // Offset: 0x4f8 // Size: 0x08
	struct USceneCaptureComponent2D* AlphaCapture2D; // Offset: 0x500 // Size: 0x08
	float ScreenWidth; // Offset: 0x508 // Size: 0x04
	float ScreenHeight; // Offset: 0x50c // Size: 0x04
	struct FVector2D AABBBoxLeftPoint; // Offset: 0x510 // Size: 0x08
	struct FVector2D AABBBoxRightPoint; // Offset: 0x518 // Size: 0x08

	// Functions

	// Object Name: Function Client.LobbySceneCaptureActor.ResizeRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResizeRT(); // Offset: 0x103c10bd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.LobbySceneCaptureActor.LogError
	// Flags: [Final|Native|Private]
	void LogError(StrProperty FilePath); // Offset: 0x103c10aec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LobbySceneCaptureActor.Capture
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Capture(); // Offset: 0x103c10ad8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.LuaBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.LuaBlueprintLibrary.StringToLVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FLuaBPVar StringToLVar(struct UObject* WorldContextObject, StrProperty Value); // Offset: 0x103c12eb4 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function Client.LuaBlueprintLibrary.RequireAndCallLuaWithArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void RequireAndCallLuaWithArgs(struct UObject* WorldContextObject, StrProperty& ModulePath, StrProperty& FunctionName, struct FLuaBPVar& InA, struct FLuaBPVar& InB, struct FLuaBPVar& InC, struct FLuaBPVar& InD, struct FLuaBPVar& OutA, struct FLuaBPVar& OutB, struct FLuaBPVar& OutC, struct FLuaBPVar& OutD); // Offset: 0x103c129d0 // Return & Params: Num(11) Size(0x128)

	// Object Name: Function Client.LuaBlueprintLibrary.ObjectToLVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FLuaBPVar ObjectToLVar(struct UObject* WorldContextObject, struct UObject* O); // Offset: 0x103c128f0 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.LuaBlueprintLibrary.LVarToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty LVarToString(struct UObject* WorldContextObject, struct FLuaBPVar& Value); // Offset: 0x103c127e0 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function Client.LuaBlueprintLibrary.LVarToObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* LVarToObject(struct UObject* WorldContextObject, struct FLuaBPVar& Value); // Offset: 0x103c126f8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.LuaBlueprintLibrary.LVarToInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty LVarToInt(struct UObject* WorldContextObject, struct FLuaBPVar& Value); // Offset: 0x103c12610 // Return & Params: Num(3) Size(0x2c)

	// Object Name: Function Client.LuaBlueprintLibrary.LVarToFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float LVarToFloat(struct UObject* WorldContextObject, struct FLuaBPVar& Value); // Offset: 0x103c12528 // Return & Params: Num(3) Size(0x2c)

	// Object Name: Function Client.LuaBlueprintLibrary.LVarToBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool LVarToBool(struct UObject* WorldContextObject, struct FLuaBPVar& Value); // Offset: 0x103c12440 // Return & Params: Num(3) Size(0x29)

	// Object Name: Function Client.LuaBlueprintLibrary.IntToLVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FLuaBPVar IntToLVar(struct UObject* WorldContextObject, IntProperty Value); // Offset: 0x103c12360 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.LuaBlueprintLibrary.FloatToLVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FLuaBPVar FloatToLVar(struct UObject* WorldContextObject, float Value); // Offset: 0x103c12280 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.LuaBlueprintLibrary.CallLuaWithMultiArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CallLuaWithMultiArgs(struct UObject* WorldContextObject, StrProperty& Function, struct FLuaBPVar& InA, struct FLuaBPVar& InB, struct FLuaBPVar& InC, struct FLuaBPVar& InD, struct FLuaBPVar& InE, struct FLuaBPVar& InF, struct FLuaBPVar& OutA, struct FLuaBPVar& OutB, struct FLuaBPVar& OutC, struct FLuaBPVar& OutD); // Offset: 0x103c11d24 // Return & Params: Num(12) Size(0x158)

	// Object Name: Function Client.LuaBlueprintLibrary.CallLuaWithHUD
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CallLuaWithHUD(struct UObject* WorldContextObject, struct UGameFrontendHUD* GameFrontendHUD, StrProperty& Function, struct FLuaBPVar& InA, struct FLuaBPVar& InB, struct FLuaBPVar& InC, struct FLuaBPVar& InD, struct FLuaBPVar& OutA, struct FLuaBPVar& OutB, struct FLuaBPVar& OutC, struct FLuaBPVar& OutD); // Offset: 0x103c11870 // Return & Params: Num(11) Size(0x120)

	// Object Name: Function Client.LuaBlueprintLibrary.CallLuaWithArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CallLuaWithArgs(struct UObject* WorldContextObject, StrProperty& Function, struct FLuaBPVar& InA, struct FLuaBPVar& InB, struct FLuaBPVar& InC, struct FLuaBPVar& InD, struct FLuaBPVar& OutA, struct FLuaBPVar& OutB, struct FLuaBPVar& OutC, struct FLuaBPVar& OutD); // Offset: 0x103c113f4 // Return & Params: Num(10) Size(0x118)

	// Object Name: Function Client.LuaBlueprintLibrary.CallLua
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CallLua(struct UObject* WorldContextObject, StrProperty& Function, struct FLuaBPVar& OutA, struct FLuaBPVar& OutB, struct FLuaBPVar& OutC, struct FLuaBPVar& OutD); // Offset: 0x103c11148 // Return & Params: Num(6) Size(0x98)

	// Object Name: Function Client.LuaBlueprintLibrary.BoolToLVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FLuaBPVar BoolToLVar(struct UObject* WorldContextObject, bool Value); // Offset: 0x103c11060 // Return & Params: Num(3) Size(0x30)
};

// Object Name: Class Client.LuaBlueprintMgr
// Size: 0x80 // Inherited bytes: 0x28
struct ULuaBlueprintMgr : UObject {
	// Fields
	MapProperty SystemMap; // Offset: 0x28 // Size: 0x50
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08

	// Functions

	// Object Name: Function Client.LuaBlueprintMgr.GetSystemByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ULuaBluepirntSys* GetSystemByName(StrProperty SystemName); // Offset: 0x103c15dbc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.LuaBlueprintMgr.AddSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddSystem(StrProperty SystemName, StrProperty BPPath); // Offset: 0x103c15c40 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Client.LuaBluepirntSys
// Size: 0x98 // Inherited bytes: 0x28
struct ULuaBluepirntSys : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x80 // Size: 0x10
	char pad_0x90[0x8]; // Offset: 0x90 // Size: 0x08

	// Functions

	// Object Name: Function Client.LuaBluepirntSys.Init
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void Init(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.LuaClassObj
// Size: 0x518 // Inherited bytes: 0x4c8
struct ALuaClassObj : ALuaContext {
	// Fields
	struct UGameBusinessManager* pManager; // Offset: 0x4c8 // Size: 0x08
	char pad_0x4D0[0x2]; // Offset: 0x4d0 // Size: 0x02
	bool bClearSourceCodeAfterInitialized; // Offset: 0x4d2 // Size: 0x01
	char pad_0x4D3[0x45]; // Offset: 0x4d3 // Size: 0x45

	// Functions

	// Object Name: Function Client.LuaClassObj.SubUIWidgetList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubUIWidgetList(struct TArray<struct FGameWidgetConfig>& InWidgetConfigList, struct TArray<StrProperty>& GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget); // Offset: 0x103c16bb8 // Return & Params: Num(6) Size(0x24)

	// Object Name: Function Client.LuaClassObj.SubShowHideEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubShowHideEvent(struct TArray<StrProperty>& WidgetPathList); // Offset: 0x103c16b10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.SubDefaultSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SubDefaultSceneCamera(IntProperty sceneCameraIndex); // Offset: 0x103c16a94 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.LuaClassObj.SubDefaultChildUI
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubDefaultChildUI(struct TArray<StrProperty>& childList); // Offset: 0x103c169ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.SubDefaultBaseUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SubDefaultBaseUI(StrProperty baseUI); // Offset: 0x103c16954 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.SubCollapseWidgetList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SubCollapseWidgetList(StrProperty RootWidgetName, struct TArray<StrProperty>& ChildWidgetNames); // Offset: 0x103c16858 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.LuaClassObj.SetWidgetZorder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWidgetZorder(IntProperty Index, IntProperty ZOrder); // Offset: 0x103c167a4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.LuaClassObj.RestoreWidgetZorder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RestoreWidgetZorder(IntProperty Index); // Offset: 0x103c16728 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.LuaClassObj.RestoreAllWidgetZorder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RestoreAllWidgetZorder(); // Offset: 0x103c16714 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.LuaClassObj.IsTopStackPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsTopStackPanel(); // Offset: 0x103c166e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.LuaClassObj.IsPushedPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsPushedPanel(); // Offset: 0x103c166ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.LuaClassObj.HandleUIMessageNoFetch
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleUIMessageNoFetch(StrProperty UIMessage); // Offset: 0x103c16614 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.HandleUIMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleUIMessage(StrProperty UIMessage); // Offset: 0x103c1657c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.HandleStopAsyncLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleStopAsyncLoad(); // Offset: 0x103c16568 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.LuaClassObj.HandleDynamicDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleDynamicDestroy(); // Offset: 0x103c16554 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.LuaClassObj.HandleDynamicCreationInternal
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleDynamicCreationInternal(bool isAsyncLoad); // Offset: 0x103c164d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.LuaClassObj.HandleDynamicCreation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleDynamicCreation(bool isAsyncLoad); // Offset: 0x103c1644c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.LuaClassObj.HandleCollapseWidgetList
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleCollapseWidgetList(StrProperty RootWidgetName); // Offset: 0x103c163b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.GetTopStackPanelSrcTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetTopStackPanelSrcTag(); // Offset: 0x103c16350 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.GetTopStackPanelDstTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetTopStackPanelDstTag(); // Offset: 0x103c162ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.GetGameStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetGameStatus(); // Offset: 0x103c16288 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.ChangeSubUIWidgetList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ChangeSubUIWidgetList(struct TArray<struct FGameWidgetConfig>& InWidgetConfigList); // Offset: 0x103c161e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.LuaClassObj.AddToTopStackPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddToTopStackPanel(); // Offset: 0x103c161cc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.MaskBox
// Size: 0x160 // Inherited bytes: 0x118
struct UMaskBox : UContentWidget {
	// Fields
	IntProperty InvalidateFrameCount; // Offset: 0x114 // Size: 0x04
	IntProperty Phase; // Offset: 0x118 // Size: 0x04
	IntProperty PhaseCount; // Offset: 0x11c // Size: 0x04
	bool IgnoreStretch; // Offset: 0x120 // Size: 0x01
	bool UpdateRenderTarget; // Offset: 0x121 // Size: 0x01
	IntProperty MaskType; // Offset: 0x124 // Size: 0x04
	struct FVector2D MaskTransformPivot; // Offset: 0x128 // Size: 0x08
	struct FVector2D MaskTransformScale; // Offset: 0x130 // Size: 0x08
	float MaskTransformAngle; // Offset: 0x138 // Size: 0x04
	char pad_0x13E[0x2]; // Offset: 0x13e // Size: 0x02
	struct UMaterialInterface* MaskMaterial; // Offset: 0x140 // Size: 0x08
	struct UTexture2D* MaskTexture; // Offset: 0x148 // Size: 0x08
	char pad_0x150[0x10]; // Offset: 0x150 // Size: 0x10

	// Functions

	// Object Name: Function Client.MaskBox.SetMaskTransformScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetMaskTransformScale(struct FVector2D Scale); // Offset: 0x103c17858 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskBox.SetMaskTransformPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetMaskTransformPivot(struct FVector2D Pivot); // Offset: 0x103c177e0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskBox.SetMaskTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaskTransformAngle(float Angle); // Offset: 0x103c17764 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.MaskBox.SetMaskMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaskMaterial(struct UMaterialInterface* EffectMaterial); // Offset: 0x103c176e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskBox.SetBrushFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromTexture(struct UTexture2D* Texture); // Offset: 0x103c1766c // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction Client.MaskBox.GetVector2D__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	struct FVector2D GetVector2D__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskBox.GetMaskMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UMaterialInstanceDynamic* GetMaskMaterial(); // Offset: 0x103c17638 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.MaskImage
// Size: 0x2c0 // Inherited bytes: 0x288
struct UMaskImage : UImage {
	// Fields
	bool bIgnoreStretch; // Offset: 0x284 // Size: 0x01
	IntProperty MaskType; // Offset: 0x288 // Size: 0x04
	struct FVector2D MaskTransformPivot; // Offset: 0x28c // Size: 0x08
	struct FVector2D MaskTransformScale; // Offset: 0x294 // Size: 0x08
	float MaskTransformAngle; // Offset: 0x29c // Size: 0x04
	struct UMaterialInterface* MaskMaterial; // Offset: 0x2a0 // Size: 0x08
	struct UTexture2D* MaskTexture; // Offset: 0x2a8 // Size: 0x08
	char pad_0x2B1[0xf]; // Offset: 0x2b1 // Size: 0x0f

	// Functions

	// Object Name: Function Client.MaskImage.SetMaskTransformScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetMaskTransformScale(struct FVector2D Scale); // Offset: 0x103c17d78 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskImage.SetMaskTransformPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetMaskTransformPivot(struct FVector2D Pivot); // Offset: 0x103c17d00 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskImage.SetMaskTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaskTransformAngle(float Angle); // Offset: 0x103c17c84 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.MaskImage.SetMaskTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaskTexture(struct UTexture2D* Texture); // Offset: 0x103c17c08 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskImage.SetMaskMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaskMaterial(struct UMaterialInterface* InEffectMaterial); // Offset: 0x103c17b8c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.MaskImage.GetMaskMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UMaterialInstanceDynamic* GetMaskMaterial(); // Offset: 0x103c17b58 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.NewButton
// Size: 0x520 // Inherited bytes: 0x520
struct UNewButton : UButton {
	// Fields
	enum class EButtonClickSoundTypes ClickSound; // Offset: 0x519 // Size: 0x01

	// Functions

	// Object Name: Function Client.NewButton.SetClickSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClickSound(enum class EButtonClickSoundTypes inSoundType); // Offset: 0x103c180b4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Client.PandoraV2Helper
// Size: 0xd0 // Inherited bytes: 0x28
struct UPandoraV2Helper : UObject {
	// Fields
	struct FScriptMulticastDelegate CallGameDelegate; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate JumpDelegate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate AddUserWidgetToGameDelegate; // Offset: 0x48 // Size: 0x10
	struct FScriptMulticastDelegate RemoveUserWidgetFromGameDelegate; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate PlaySoundDelegate; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate GetAccountTokenDelegate; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate GetCurrencyDelegate; // Offset: 0x88 // Size: 0x10
	struct FScriptMulticastDelegate ShowItemTipsDelegate; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate ShowItemIconDelegate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate ShowItemDelegate; // Offset: 0xb8 // Size: 0x10
	char pad_0xC8[0x8]; // Offset: 0xc8 // Size: 0x08

	// Functions

	// Object Name: Function Client.PandoraV2Helper.SetUserData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetUserData(MapProperty& InUserdata); // Offset: 0x103c189d4 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.PandoraV2Helper.SetSDKVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSDKVersion(IntProperty InSDKVer); // Offset: 0x103c18958 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.PandoraV2Helper.SetSDKCoreDataPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSDKCoreDataPath(StrProperty InPath); // Offset: 0x103c188c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.PandoraV2Helper.SetPandoraEnable
	// Flags: [Final|Native|Public]
	void SetPandoraEnable(bool Enable); // Offset: 0x103c1883c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.PandoraV2Helper.SetLuaCoreData
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetLuaCoreData(StrProperty InFilePath); // Offset: 0x103c18794 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.PandoraV2Helper.SetLogEnable
	// Flags: [Final|Native|Static|Public]
	void SetLogEnable(bool Enable); // Offset: 0x103c18718 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.PandoraV2Helper.ResumeLuaGC
	// Flags: [Final|Native|Public]
	void ResumeLuaGC(); // Offset: 0x103c18704 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.PandoraV2Helper.RefreshUserDataTokens
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshUserDataTokens(); // Offset: 0x103c186f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.PandoraV2Helper.PauseLuaGC
	// Flags: [Final|Native|Public]
	void PauseLuaGC(); // Offset: 0x103c186dc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.PandoraV2Helper.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(bool InEnable, IntProperty InEnv, bool InEnablePixUI); // Offset: 0x103c185d4 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Client.PandoraV2Helper.GetSDKVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetSDKVersion(); // Offset: 0x103c185a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.PandoraV2Helper.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UPandoraV2Helper* Get(); // Offset: 0x103c1856c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.PandoraV2Helper.Do
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Do(StrProperty InCmdJson, IntProperty InMsgType); // Offset: 0x103c18494 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.PandoraV2Helper.Deinit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Deinit(); // Offset: 0x103c18480 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.PandoraV2Helper.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Close(); // Offset: 0x103c1846c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.PublishAreaMgr
// Size: 0x28 // Inherited bytes: 0x28
struct UPublishAreaMgr : UObject {
	// Functions

	// Object Name: Function Client.PublishAreaMgr.SelectArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SelectArea(StrProperty InArea); // Offset: 0x103c19398 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.PublishAreaMgr.IsMultiAreaBuild
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsMultiAreaBuild(); // Offset: 0x103c19364 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.PublishAreaMgr.GetString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetString(StrProperty InKey, StrProperty InDefaultValue); // Offset: 0x103c19250 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.PublishAreaMgr.GetPublishAreas
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPublishAreas(); // Offset: 0x103c191ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.PublishAreaMgr.GetInt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetInt(StrProperty InKey, IntProperty InDefaultValue); // Offset: 0x103c19114 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.PublishAreaMgr.GetBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetBool(StrProperty InKey, bool InDefaultValue); // Offset: 0x103c19034 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Client.PublishAreaMgr.GetArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetArea(); // Offset: 0x103c18fd0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Client.SavedFileUtil
// Size: 0x28 // Inherited bytes: 0x28
struct USavedFileUtil : UObject {
	// Functions

	// Object Name: Function Client.SavedFileUtil.LoadFileToArrayAsync
	// Flags: [Final|Native|Static|Public]
	IntProperty LoadFileToArrayAsync(StrProperty AssetPath, struct FSluaBPVar Callback); // Offset: 0x103c1a2bc // Return & Params: Num(3) Size(0x34)

	// Object Name: Function Client.SavedFileUtil.GetFileCreationTime
	// Flags: [Final|Native|Static|Public]
	int64_t GetFileCreationTime(StrProperty Filename); // Offset: 0x103c1a1d8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.SavedFileUtil.GetDirSizeAsync
	// Flags: [Final|Native|Static|Public]
	void GetDirSizeAsync(StrProperty Dir, bool Recursive, struct FSluaBPVar Callback); // Offset: 0x103c1a034 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function Client.SavedFileUtil.GetDirSize
	// Flags: [Final|Native|Static|Public]
	int64_t GetDirSize(StrProperty Dir, bool Recursive); // Offset: 0x103c19f00 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.SavedFileUtil.FindFilesAsync
	// Flags: [Final|Native|Static|Public]
	void FindFilesAsync(StrProperty Dir, StrProperty Pattern, bool Recursive, struct FSluaBPVar Callback); // Offset: 0x103c19cc4 // Return & Params: Num(4) Size(0x48)

	// Object Name: Function Client.SavedFileUtil.FindFiles
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> FindFiles(StrProperty dirPath, StrProperty extension, bool Recursive); // Offset: 0x103c19ad4 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.SavedFileUtil.DeleteDirectoryAsync
	// Flags: [Final|Native|Static|Public]
	void DeleteDirectoryAsync(StrProperty Dir, struct FSluaBPVar Callback); // Offset: 0x103c19978 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Client.SavedFileUtil.CleanupDirectoryBySize
	// Flags: [Final|Native|Static|Public]
	bool CleanupDirectoryBySize(StrProperty Dir, IntProperty MaxSize, StrProperty extension); // Offset: 0x103c197b8 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.SavedFileUtil.CancelLoadSavedFile
	// Flags: [Final|Native|Static|Public]
	bool CancelLoadSavedFile(IntProperty Handle); // Offset: 0x103c1973c // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class Client.ScatterPlot
// Size: 0x1e8 // Inherited bytes: 0x100
struct UScatterPlot : UWidget {
	// Fields
	struct FSlateBrush PointBrush; // Offset: 0x100 // Size: 0xb8
	struct TArray<struct FScatterPlotPoint> Points; // Offset: 0x1b8 // Size: 0x10
	struct UCurveFloat* WeightToScaleCurve; // Offset: 0x1c8 // Size: 0x08
	struct UCurveLinearColor* WeightToColorCurve; // Offset: 0x1d0 // Size: 0x08
	char pad_0x1D8[0x10]; // Offset: 0x1d8 // Size: 0x10

	// Functions

	// Object Name: Function Client.ScatterPlot.SetPoints
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetPoints(struct TArray<struct FScatterPlotPoint>& InPoints); // Offset: 0x103c1aa80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScatterPlot.SetPointBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetPointBrush(struct FSlateBrush& InBrush); // Offset: 0x103c1a9d4 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function Client.ScatterPlot.Empty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Empty(IntProperty Slack); // Offset: 0x103c1a958 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScatterPlot.Apply
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void Apply(); // Offset: 0x103c1a944 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScatterPlot.Add
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void Add(struct FScatterPlotPoint& InPoint); // Offset: 0x103c1a8a4 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class Client.ScreenInput
// Size: 0x80 // Inherited bytes: 0x28
struct UScreenInput : UObject {
	// Fields
	struct FScriptMulticastDelegate OnScreenTouch; // Offset: 0x28 // Size: 0x10
	DelegateProperty OnMouseButtonUp; // Offset: 0x38 // Size: 0x10
	DelegateProperty OnMouseButtonDown; // Offset: 0x48 // Size: 0x10
	DelegateProperty OnMotionDetected; // Offset: 0x58 // Size: 0x10
	char pad_0x68[0x18]; // Offset: 0x68 // Size: 0x18

	// Functions

	// Object Name: Function Client.ScreenInput.Shutdown
	// Flags: [Final|Native|Public]
	void Shutdown(); // Offset: 0x103c1aebc // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Client.ScreenInput.OnScreenTouch__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnScreenTouch__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Client.ScreenInput.OnMouseButtonDown__DelegateSignature
	// Flags: [Public|Delegate|HasOutParms|HasDefaults]
	void OnMouseButtonDown__DelegateSignature(struct FVector2D& ContainerPos); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction Client.ScreenInput.OnMotionDetected__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	void OnMotionDetected__DelegateSignature(struct FVector Tilt, struct FVector RotationRate, struct FVector Gravity, struct FVector Acceleration); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function Client.ScreenInput.Init
	// Flags: [Final|Native|Public]
	void Init(); // Offset: 0x103c1aea8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.ScreenshotMaker
// Size: 0x28 // Inherited bytes: 0x28
struct UScreenshotMaker : UObject {
	// Functions

	// Object Name: Function Client.ScreenshotMaker.SetDefaultShowUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetDefaultShowUI(bool ShowUI); // Offset: 0x103c1c520 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScreenshotMaker.SaveToPhotosAlbumEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SaveToPhotosAlbumEx(StrProperty pathStr); // Offset: 0x103c1c43c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScreenshotMaker.SaveToPhotosAlbum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SaveToPhotosAlbum(StrProperty pathStr); // Offset: 0x103c1c358 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScreenshotMaker.ResizePicture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ResizePicture(StrProperty pathStr, float Scale, StrProperty savePathStr); // Offset: 0x103c1c198 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScreenshotMaker.ReMakePicture
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void ReMakePicture(StrProperty pathStr, struct FVector4 Vector4); // Offset: 0x103c1c070 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScreenshotMaker.ReMakeMomentPicture
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	StrProperty ReMakeMomentPicture(StrProperty srcPath, struct FVector4 Vector4); // Offset: 0x103c1bf1c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScreenshotMaker.MosaicPictureByLocalImage
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool MosaicPictureByLocalImage(struct TArray<StrProperty>& Paths, StrProperty toPath, IntProperty Width, float Scale); // Offset: 0x103c1bd48 // Return & Params: Num(5) Size(0x29)

	// Object Name: Function Client.ScreenshotMaker.MakeWidgetScreenshot
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UTextureRenderTarget2D* MakeWidgetScreenshot(struct UWidget* Widget, struct FVector2D DrawSize, float Scale); // Offset: 0x103c1bc58 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Client.ScreenshotMaker.MakePictureWithName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MakePictureWithName(StrProperty PicName); // Offset: 0x103c1bb50 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScreenshotMaker.MakePictureToLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MakePictureToLua(struct UGameFrontendHUD* InFrontendHUD, StrProperty tableName, StrProperty FunctionName, bool isShowUI); // Offset: 0x103c1b920 // Return & Params: Num(5) Size(0x40)

	// Object Name: Function Client.ScreenshotMaker.MakePictureByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MakePictureByName(StrProperty PicName, bool ShowUI); // Offset: 0x103c1b7c8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScreenshotMaker.MakePicture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MakePicture(bool isShowUI); // Offset: 0x103c1b71c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScreenshotMaker.MakeBugReprotPic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MakeBugReprotPic(bool isShowUI); // Offset: 0x103c1b670 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScreenshotMaker.HasCaptured
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool HasCaptured(StrProperty pathStr); // Offset: 0x103c1b58c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScreenshotMaker.GetSaveStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetSaveStatus(); // Offset: 0x103c1b558 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScreenshotMaker.GetPhotoHash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetPhotoHash(StrProperty pathStr, IntProperty algorithmVersion); // Offset: 0x103c1b434 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScreenshotMaker.GetMomentThumbPictureFullPathFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetMomentThumbPictureFullPathFiles(); // Offset: 0x103c1b3d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScreenshotMaker.GetMomentPictureFullPathFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetMomentPictureFullPathFiles(); // Offset: 0x103c1b36c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScreenshotMaker.GetHashFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	IntProperty GetHashFromArray(struct TArray<char>& inArray, IntProperty algorithmVersion); // Offset: 0x103c1b278 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScreenshotMaker.CropAndResizePicture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CropAndResizePicture(StrProperty pathStr, float Scale, float cropWidthScale, float cropHeightScale, StrProperty savePathStr); // Offset: 0x103c1b02c // Return & Params: Num(5) Size(0x30)
};

// Object Name: Class Client.ScriptHelperClient
// Size: 0x28 // Inherited bytes: 0x28
struct UScriptHelperClient : UObject {
	// Functions

	// Object Name: Function Client.ScriptHelperClient.WriteFileAtPath
	// Flags: [Final|Native|Static|Public]
	bool WriteFileAtPath(StrProperty FilePath, StrProperty Content); // Offset: 0x103c3d5b4 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.WakeupFromSuspendSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void WakeupFromSuspendSound(); // Offset: 0x103c3d5a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.VPNTearDown
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNTearDown(); // Offset: 0x103c3d56c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.VPNSetUserInfo
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNSetUserInfo(StrProperty InUserId, StrProperty InUserToken, StrProperty InAppId); // Offset: 0x103c3d42c // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.ScriptHelperClient.VPNSetPortRange
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNSetPortRange(IntProperty Min, IntProperty Max); // Offset: 0x103c3d378 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.VPNSetNodelist
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNSetNodelist(StrProperty InNodelist); // Offset: 0x103c3d2e0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.VPNPrepare
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNPrepare(); // Offset: 0x103c3d2ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.VPNHandUp
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNHandUp(); // Offset: 0x103c3d278 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.VPNGetNodeRegionList
	// Flags: [Final|Native|Static|Public]
	StrProperty VPNGetNodeRegionList(); // Offset: 0x103c3d214 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.VPNDialUp
	// Flags: [Final|Native|Static|Public]
	IntProperty VPNDialUp(StrProperty InRegion); // Offset: 0x103c3d17c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.Vibrate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void Vibrate(IntProperty Param); // Offset: 0x103c3d108 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.VerifySavFileData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool VerifySavFileData(IntProperty CompressedSize, IntProperty UncompressedSize, struct TArray<char>& ByteArray, IntProperty ToCheckEndWithCDLength); // Offset: 0x103c3cfa0 // Return & Params: Num(5) Size(0x1d)

	// Object Name: Function Client.ScriptHelperClient.USFSIsNewestVersion
	// Flags: [Final|Native|Static|Public]
	bool USFSIsNewestVersion(); // Offset: 0x103c3cf6c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.USFSGetUpgradeDiffList
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> USFSGetUpgradeDiffList(); // Offset: 0x103c3cf08 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSDeletePkg_V2
	// Flags: [Final|Native|Static|Public]
	void USFSDeletePkg_V2(StrProperty PkgOrig); // Offset: 0x103c3ce2c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSDeletePkg
	// Flags: [Final|Native|Static|Public]
	void USFSDeletePkg(StrProperty PkgOrig); // Offset: 0x103c3cd50 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextUpdatePkgPatch
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextUpdatePkgPatch(MapProperty PkgPaths); // Offset: 0x103c3cc98 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextUpdatePkgDiff
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextUpdatePkgDiff(struct TArray<StrProperty> PkgDiffPaths); // Offset: 0x103c3cbbc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextUpdatePkgBinDiff
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextUpdatePkgBinDiff(struct TArray<StrProperty> PkgDiffPaths); // Offset: 0x103c3cae0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextUpdatePkg
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextUpdatePkg(struct TArray<StrProperty> PkgPaths); // Offset: 0x103c3ca04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextSwitchWrite
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextSwitchWrite(bool bSwitch); // Offset: 0x103c3c988 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextSwitchAll
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextSwitchAll(bool bSwitch); // Offset: 0x103c3c90c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextStart
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextStart(); // Offset: 0x103c3c8f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContextChangePkgName
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContextChangePkgName(struct TArray<StrProperty> PkgChgInfo); // Offset: 0x103c3c81c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.USFSCacheSysContexInit
	// Flags: [Final|Native|Static|Public]
	void USFSCacheSysContexInit(MapProperty PkgNameToConHash); // Offset: 0x103c3c764 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.ScriptHelperClient.UserName
	// Flags: [Final|Native|Static|Public]
	StrProperty UserName(); // Offset: 0x103c3c700 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.UrlEncode
	// Flags: [Final|Native|Static|Public]
	StrProperty UrlEncode(StrProperty UnencodedString); // Offset: 0x103c3c640 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.UQMSetAppVersion
	// Flags: [Final|Native|Static|Public]
	void UQMSetAppVersion(StrProperty Version); // Offset: 0x103c3c5b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashReportStuck
	// Flags: [Final|Native|Static|Public]
	void UQMCrashReportStuck(IntProperty threadId, IntProperty maxChecks, int64_t CheckInterval, StrProperty Name, StrProperty Message, StrProperty ExtraInfo, IntProperty dumpNativeType); // Offset: 0x103c3c388 // Return & Params: Num(7) Size(0x44)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashPutUserData
	// Flags: [Final|Native|Static|Public]
	void UQMCrashPutUserData(StrProperty Key, StrProperty Value); // Offset: 0x103c3c2a4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashPostExceptionWithCustomData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void UQMCrashPostExceptionWithCustomData(IntProperty Category, StrProperty stack, MapProperty& customData, IntProperty dumpNativeType); // Offset: 0x103c3c128 // Return & Params: Num(4) Size(0x6c)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashPostExceptionFullWithCustomData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void UQMCrashPostExceptionFullWithCustomData(IntProperty Category, StrProperty Name, StrProperty Reason, StrProperty stack, MapProperty& customData, IntProperty dumpNativeType); // Offset: 0x103c3bf04 // Return & Params: Num(6) Size(0x8c)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashPostExceptionFull
	// Flags: [Final|Native|Static|Public]
	void UQMCrashPostExceptionFull(IntProperty Category, StrProperty Name, StrProperty Msg, StrProperty stack, IntProperty dumpNativeType); // Offset: 0x103c3bd50 // Return & Params: Num(5) Size(0x3c)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashPostException
	// Flags: [Final|Native|Static|Public]
	void UQMCrashPostException(IntProperty Category, StrProperty Reason, IntProperty dumpNativeType); // Offset: 0x103c3bc44 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Client.ScriptHelperClient.UQMCrashLog
	// Flags: [Final|Native|Static|Public]
	void UQMCrashLog(IntProperty Level, StrProperty Tag, StrProperty Log, bool needDump); // Offset: 0x103c3badc // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.ScriptHelperClient.UploadGainCrashLogBackground
	// Flags: [Final|Native|Static|Public]
	void UploadGainCrashLogBackground(); // Offset: 0x103c3bac8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.UpdateServerTimeInSec
	// Flags: [Final|Native|Static|Public]
	void UpdateServerTimeInSec(); // Offset: 0x103c3bab4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.UpdatePublishRegionForBattle
	// Flags: [Final|Native|Static|Public]
	void UpdatePublishRegionForBattle(); // Offset: 0x103c3baa0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.UpdatePkgCompressionInfo
	// Flags: [Final|Native|Static|Public]
	bool UpdatePkgCompressionInfo(struct TArray<StrProperty> PkgList, StrProperty CompressMethod); // Offset: 0x103c3b924 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.UpdateMemResource
	// Flags: [Final|Native|Static|Public]
	void UpdateMemResource(StrProperty ResType, StrProperty Keyword); // Offset: 0x103c3b840 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.UpdateAkAudioDeviceBluetoothDelay
	// Flags: [Final|Native|Static|Public]
	void UpdateAkAudioDeviceBluetoothDelay(IntProperty InDelayTime); // Offset: 0x103c3b7cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.UnsubscribeFromTopic
	// Flags: [Final|Native|Static|Public]
	void UnsubscribeFromTopic(StrProperty Topic); // Offset: 0x103c3b73c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.UnmountPakFile
	// Flags: [Final|Native|Static|Public]
	bool UnmountPakFile(StrProperty InPakFilename); // Offset: 0x103c3b6a4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.UnmapUnusedMap
	// Flags: [Final|Native|Static|Public]
	void UnmapUnusedMap(); // Offset: 0x103c3b690 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.UnitTestODPaksOpen
	// Flags: [Final|Native|Static|Public]
	void UnitTestODPaksOpen(IntProperty fileCount, IntProperty Times, IntProperty threadNum); // Offset: 0x103c3b5a8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.TVMacroTesting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TVMacroTesting(); // Offset: 0x103c3b594 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TrimEngineMemory
	// Flags: [Final|Native|Static|Public]
	void TrimEngineMemory(); // Offset: 0x103c3b580 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TriggerTouchEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TriggerTouchEvent(float X, float Y, IntProperty event_type); // Offset: 0x103c3b498 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.TriggerTestCmd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TriggerTestCmd(StrProperty Cmd); // Offset: 0x103c3b408 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.TriggerOOMCrash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TriggerOOMCrash(); // Offset: 0x103c3b3f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TriggerNativeDump
	// Flags: [Final|Native|Static|Public]
	void TriggerNativeDump(IntProperty DumpCount, double Timespan, IntProperty NativeDumpType); // Offset: 0x103c3b308 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.TriggerLoginCrashTest
	// Flags: [Final|Native|Static|Public]
	void TriggerLoginCrashTest(IntProperty Type); // Offset: 0x103c3b294 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.TriggerLobbyCrashTest
	// Flags: [Final|Native|Static|Public]
	void TriggerLobbyCrashTest(IntProperty Type); // Offset: 0x103c3b220 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.TriggerBlockAndroidANR
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TriggerBlockAndroidANR(); // Offset: 0x103c3b20c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TPerforPlatReport(IntProperty Type, StrProperty ExtraInfo, bool Send); // Offset: 0x103c3b0a8 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatPostLargeValueS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TPerforPlatPostLargeValueS(StrProperty catgory, StrProperty Key, StrProperty Value); // Offset: 0x103c3af70 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatMarkTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TPerforPlatMarkTime(IntProperty Type); // Offset: 0x103c3aefc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatMarkLevelLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TPerforPlatMarkLevelLoad(StrProperty SceneName, IntProperty DeviceLevel); // Offset: 0x103c3ade0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatMarkLevelFin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TPerforPlatMarkLevelFin(); // Offset: 0x103c3adcc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatDisconnectReport
	// Flags: [Final|Native|Static|Public]
	void TPerforPlatDisconnectReport(struct UGameFrontendHUD* GameFrontendHUD, IntProperty EventID); // Offset: 0x103c3ad1c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.TPerforPlatDataReport
	// Flags: [Final|Native|Static|Public]
	void TPerforPlatDataReport(struct UGameFrontendHUD* GameFrontendHUD, IntProperty EventID, StrProperty EventInfo); // Offset: 0x103c3ac14 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.TMFPSwitchRichTapMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TMFPSwitchRichTapMode(StrProperty Mode); // Offset: 0x103c3ab84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.TMFPStopRichTap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TMFPStopRichTap(); // Offset: 0x103c3ab70 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TMFPStartRichTapWithData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void TMFPStartRichTapWithData(StrProperty InKey, MapProperty& InMapData); // Offset: 0x103c3aa74 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function Client.ScriptHelperClient.TMFPStartRichTap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void TMFPStartRichTap(StrProperty Filename); // Offset: 0x103c3a9e4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.TMFPLoadHeFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty TMFPLoadHeFile(StrProperty StrFilePath); // Offset: 0x103c3a924 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.TMFPGetRichTapSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty TMFPGetRichTapSupport(); // Offset: 0x103c3a8c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.TMFPGetRichTapAmplitudeSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty TMFPGetRichTapAmplitudeSupport(); // Offset: 0x103c3a85c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.TestSaveStringToFile
	// Flags: [Final|Native|Static|Public]
	void TestSaveStringToFile(StrProperty String, StrProperty TargetDir, StrProperty FullPathName); // Offset: 0x103c3a724 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.TestLoadGameSlotMultiThread
	// Flags: [Final|Native|Static|Public]
	void TestLoadGameSlotMultiThread(); // Offset: 0x103c3a710 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TestLoadGameSlot
	// Flags: [Final|Native|Static|Public]
	void TestLoadGameSlot(); // Offset: 0x103c3a6fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.TestCallCvmFuncWithVarArg
	// Flags: [Final|Native|Static|Public|HasOutParms]
	uint64 TestCallCvmFuncWithVarArg(IntProperty FuncID, struct TArray<StrProperty>& Arguments); // Offset: 0x103c3a618 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.Tea2Encrypt_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty Tea2Encrypt_LuaState(); // Offset: 0x103c3a600 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.Tea2Decrypt_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty Tea2Decrypt_LuaState(); // Offset: 0x103c3a5e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.TakeHighResScreenshot_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty TakeHighResScreenshot_LuaState(); // Offset: 0x103c3a5d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.TakeHighResScreenshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool TakeHighResScreenshot(StrProperty Filename, IntProperty ResolutionX, IntProperty ResolutionY, float ResolutionScale); // Offset: 0x103c3a47c // Return & Params: Num(5) Size(0x1d)

	// Object Name: Function Client.ScriptHelperClient.SystemLanguageId
	// Flags: [Final|Native|Static|Public]
	StrProperty SystemLanguageId(); // Offset: 0x103c3a418 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadPackageUpdateCurrentWorldStage
	// Flags: [Final|Native|Static|Public]
	void SyncLoadPackageUpdateCurrentWorldStage(StrProperty WorldStage); // Offset: 0x103c3a388 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadPackageUpdateCurrentWorldName
	// Flags: [Final|Native|Static|Public]
	void SyncLoadPackageUpdateCurrentWorldName(StrProperty WorldName); // Offset: 0x103c3a2f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadPackageInfoCollect
	// Flags: [Final|Native|Static|Public]
	void SyncLoadPackageInfoCollect(StrProperty PackageName, StrProperty WorldName); // Offset: 0x103c3a214 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadPackageGetPackageListForWorld
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> SyncLoadPackageGetPackageListForWorld(StrProperty WorldName); // Offset: 0x103c3a154 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadInfoCollector_Reset
	// Flags: [Final|Native|Static|Public]
	void SyncLoadInfoCollector_Reset(); // Offset: 0x103c3a140 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadInfoCollector_OnLevelStart
	// Flags: [Final|Native|Static|Public]
	void SyncLoadInfoCollector_OnLevelStart(); // Offset: 0x103c3a12c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SyncLoadInfoCollector_OnLevelEnd
	// Flags: [Final|Native|Static|Public]
	void SyncLoadInfoCollector_OnLevelEnd(); // Offset: 0x103c3a118 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SwitchUser
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SwitchUser(struct TScriptInterface<Class>& ClientNetInterface, bool useExternalAccount); // Offset: 0x103c3a050 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.SwitchSceneCamera
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SwitchSceneCamera(struct UGameFrontendHUD* GameFrontendHUD, StrProperty SceneCameraName, float BlendTime, bool bForce); // Offset: 0x103c39efc // Return & Params: Num(4) Size(0x1d)

	// Object Name: Function Client.ScriptHelperClient.SwitchOutputDeviceFileLog
	// Flags: [Final|Native|Static|Public]
	void SwitchOutputDeviceFileLog(); // Offset: 0x103c39ee8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SwitchMapMangedTickProfile
	// Flags: [Final|Native|Static|Public]
	void SwitchMapMangedTickProfile(IntProperty MapID); // Offset: 0x103c39e74 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SuspendSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SuspendSound(); // Offset: 0x103c39e60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SuppressSwap
	// Flags: [Final|Native|Static|Public]
	void SuppressSwap(); // Offset: 0x103c39e4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SubscribeToTopic
	// Flags: [Final|Native|Static|Public]
	void SubscribeToTopic(StrProperty Topic); // Offset: 0x103c39dbc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.StringToJsonString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty StringToJsonString(StrProperty String); // Offset: 0x103c39cfc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.StopUIStat
	// Flags: [Final|Native|Static|Public]
	void StopUIStat(StrProperty UIName, bool bReport); // Offset: 0x103c39c24 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.StopTouchRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FTouchInputRecord StopTouchRecord(); // Offset: 0x103c39bc0 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.StopTask
	// Flags: [Final|Native|Static|Public]
	bool StopTask(struct UGameFrontendHUD* GameFrontendHUD, uint64 TaskID); // Offset: 0x103c39b0c // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.StopShaderPrecompile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool StopShaderPrecompile(); // Offset: 0x103c39ad8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.StopPuffer
	// Flags: [Final|Native|Static|Public]
	void StopPuffer(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c39a64 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.StopMonitorFileModified
	// Flags: [Final|Native|Static|Public]
	void StopMonitorFileModified(); // Offset: 0x103c39a50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.StopHapticsEngine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StopHapticsEngine(); // Offset: 0x103c39a3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.StopH5Downloading
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StopH5Downloading(); // Offset: 0x103c39a28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.StopBluetoothMonitor
	// Flags: [Final|Native|Static|Public]
	void StopBluetoothMonitor(); // Offset: 0x103c39a14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.StartUIStat
	// Flags: [Final|Native|Static|Public]
	void StartUIStat(StrProperty UIName); // Offset: 0x103c39984 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.StartTrace
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StartTrace(StrProperty InHost, IntProperty InStartTTL, IntProperty InMaxTTL, IntProperty InCount, StrProperty InExtraData); // Offset: 0x103c397e4 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.StartTouchRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StartTouchRecord(); // Offset: 0x103c397d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.StartShaderPrecompile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool StartShaderPrecompile(); // Offset: 0x103c3979c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.StartOpenReadCollect
	// Flags: [Final|Native|Static|Public]
	void StartOpenReadCollect(struct UGameFrontendHUD* GameFrontendHUD, bool bStart); // Offset: 0x103c396e4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.StartMonitorFileModified
	// Flags: [Final|Native|Static|Public]
	void StartMonitorFileModified(StrProperty Filename, IntProperty Mask); // Offset: 0x103c39614 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.StartHapticsEngine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StartHapticsEngine(DelegateProperty Callback); // Offset: 0x103c3958c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.StartGrayUpdate
	// Flags: [Final|Native|Static|Public]
	bool StartGrayUpdate(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c39510 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.StartDownloadItem
	// Flags: [Final|Native|Static|Public]
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, DelegateProperty OnItemDownloadDelegate); // Offset: 0x103c39414 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.StartDolphinResourceUpdate
	// Flags: [Final|Native|Static|Public]
	void StartDolphinResourceUpdate(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c393a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.StartCDNUpdateAfterDolphinUpdateFailed
	// Flags: [Final|Native|Static|Public]
	void StartCDNUpdateAfterDolphinUpdateFailed(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c3932c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.StartBluetoothMonitor
	// Flags: [Final|Native|Static|Public]
	void StartBluetoothMonitor(IntProperty DelayMs); // Offset: 0x103c392b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.StartBatchDownloadItem
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void StartBatchDownloadItem(struct TArray<uint32_t>& ItemIDs, uint32_t Priority, DelegateProperty OnBatchItemDownloadDelegate); // Offset: 0x103c39180 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.SnapshotLobbyUObjects
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SnapshotLobbyUObjects(StrProperty& Tag); // Offset: 0x103c390e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SimpleXOREncryptDecrypt
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SimpleXOREncryptDecrypt(struct TArray<char>& Data, char Key); // Offset: 0x103c38ffc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.ShutdownUnrealNetwork
	// Flags: [Final|Native|Static|Public]
	void ShutdownUnrealNetwork(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c38f88 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ShutdownPuffer
	// Flags: [Final|Native|Static|Public]
	void ShutdownPuffer(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c38f14 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ShrinkUObjectHashTables
	// Flags: [Final|Native|Static|Public]
	void ShrinkUObjectHashTables(); // Offset: 0x103c38f00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ShrinkDrawBuffer
	// Flags: [Final|Native|Static|Public]
	void ShrinkDrawBuffer(); // Offset: 0x103c38eec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ShowWebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ShowWebView(bool Show); // Offset: 0x103c38e70 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.ShowVLink
	// Flags: [Final|Native|Static|Public]
	void ShowVLink(StrProperty jsonString, StrProperty signString); // Offset: 0x103c38d8c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ShowVideoListDialog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ShowVideoListDialog(); // Offset: 0x103c38d78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ShowScreenDebugMessage
	// Flags: [Final|Native|Static|Public]
	void ShowScreenDebugMessage(StrProperty Message); // Offset: 0x103c38ce8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ShowH5WebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ShowH5WebView(); // Offset: 0x103c38cd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ShorterStreamingDistanceWhenGameEnd
	// Flags: [Final|Native|Static|Public]
	void ShorterStreamingDistanceWhenGameEnd(uint32_t Distance); // Offset: 0x103c38c60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.ShareWithPhotoByChannel
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void ShareWithPhotoByChannel(struct TScriptInterface<Class>& ClientNetInterface, StrProperty _imgPath, StrProperty _mediaTagName, StrProperty _messageExt, StrProperty _messageAction, IntProperty _channel, StrProperty _url); // Offset: 0x103c389f0 // Return & Params: Num(7) Size(0x68)

	// Object Name: Function Client.ScriptHelperClient.ShareLogFile
	// Flags: [Final|Native|Static|Public]
	void ShareLogFile(StrProperty InLogFileName); // Offset: 0x103c38960 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SHA256Bytes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	StrProperty SHA256Bytes(struct TArray<char>& inArray); // Offset: 0x103c38890 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SHA256
	// Flags: [Final|Native|Static|Public]
	StrProperty SHA256(StrProperty str); // Offset: 0x103c387d0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SHA1
	// Flags: [Final|Native|Static|Public]
	StrProperty SHA1(StrProperty str); // Offset: 0x103c38710 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SetWebviewPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetWebviewPosition(IntProperty X, IntProperty Y, IntProperty W, IntProperty H); // Offset: 0x103c385f0 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetWebViewCacheInfoDelegate
	// Flags: [Final|Native|Static|Public]
	void SetWebViewCacheInfoDelegate(DelegateProperty Delegate); // Offset: 0x103c38568 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetVpnServiceStrategy
	// Flags: [Final|Native|Static|Public]
	bool SetVpnServiceStrategy(StrProperty InKey, IntProperty InValue); // Offset: 0x103c38490 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Client.ScriptHelperClient.SetVoiceSwitch
	// Flags: [Final|Native|Static|Public]
	void SetVoiceSwitch(struct UGameFrontendHUD* GameFrontendHUD, bool FirstVoicePopupSwitch, bool GDPRForbidVoiceSwitch, bool GDPRSettingSwitch); // Offset: 0x103c38348 // Return & Params: Num(4) Size(0xb)

	// Object Name: Function Client.ScriptHelperClient.SetVoiceReEneterInfo
	// Flags: [Final|Native|Static|Public]
	void SetVoiceReEneterInfo(struct UGameFrontendHUD* GameFrontendHUD, float Duration, IntProperty MaxCount); // Offset: 0x103c3825c // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetUserVulkanSetting
	// Flags: [Final|Native|Static|Public]
	void SetUserVulkanSetting(bool Enable); // Offset: 0x103c381e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetUserTMFPTapEnableFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetUserTMFPTapEnableFlag(IntProperty EnableFlag); // Offset: 0x103c3816c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetUserProperty
	// Flags: [Final|Native|Static|Public]
	void SetUserProperty(StrProperty propertyKey, StrProperty propertyValue); // Offset: 0x103c38088 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SetUseMouseForTouch
	// Flags: [Final|Native|Static|Public]
	void SetUseMouseForTouch(bool bUse); // Offset: 0x103c3800c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetUpdatedSoPatchFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SetUpdatedSoPatchFile(StrProperty InSourceFile, IntProperty InABI); // Offset: 0x103c37f34 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Client.ScriptHelperClient.SetupAkAudioDeviceListener
	// Flags: [Final|Native|Static|Public]
	void SetupAkAudioDeviceListener(); // Offset: 0x103c37f20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SetUIStatMaxClickTimes
	// Flags: [Final|Native|Static|Public]
	void SetUIStatMaxClickTimes(IntProperty Times); // Offset: 0x103c37eac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetUIConfigTMFPTapEnableFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetUIConfigTMFPTapEnableFlag(IntProperty uiEnable); // Offset: 0x103c37e38 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetUDPPingControlFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetUDPPingControlFlag(IntProperty Lock, IntProperty BindType); // Offset: 0x103c37d8c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.SetTssNetworkStatus
	// Flags: [Final|Native|Static|Public]
	void SetTssNetworkStatus(struct UGameFrontendHUD* GameFrontendHUD, IntProperty status); // Offset: 0x103c37cdc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.SetTMFPTapWhiteListFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTMFPTapWhiteListFlag(IntProperty TapWhiteList); // Offset: 0x103c37c68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetTextureGroupLODBias
	// Flags: [Final|Native|Static|Public]
	void SetTextureGroupLODBias(char GroupID, IntProperty MipBias); // Offset: 0x103c37bb8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.SetTestEditorNum
	// Flags: [Final|Native|Static|Public]
	void SetTestEditorNum(IntProperty PlayerCount, StrProperty Num, StrProperty SceneName, IntProperty Platform); // Offset: 0x103c37a58 // Return & Params: Num(4) Size(0x2c)

	// Object Name: Function Client.ScriptHelperClient.SetSoundEffectQuality
	// Flags: [Final|Native|Static|Public]
	bool SetSoundEffectQuality(IntProperty Type); // Offset: 0x103c379dc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.ScriptHelperClient.SetShowFriendObservers
	// Flags: [Final|Native|Static|Public]
	void SetShowFriendObservers(struct UGameFrontendHUD* GameFrontendHUD, bool bShow); // Offset: 0x103c37924 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.SetServerTimeInSec
	// Flags: [Final|Native|Static|Public]
	void SetServerTimeInSec(int64_t InServerTimeInSec); // Offset: 0x103c378b0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.SetSelfieSwitch
	// Flags: [Final|Native|Static|Public]
	void SetSelfieSwitch(struct UGameFrontendHUD* GameFrontendHUD, bool SelfieSwitch); // Offset: 0x103c377f8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.SetSdkIoctl
	// Flags: [Final|Native|Static|Public|HasOutParms]
	IntProperty SetSdkIoctl(struct UGameFrontendHUD* GameFrontendHUD, IntProperty Request, StrProperty& Token); // Offset: 0x103c376d8 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.SetScreenPadding
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetScreenPadding(struct FMargin& InPadding); // Offset: 0x103c37654 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetReportBugSwitch
	// Flags: [Final|Native|Static|Public]
	void SetReportBugSwitch(struct UGameFrontendHUD* GameFrontendHUD, bool ReportBugSwitch); // Offset: 0x103c3759c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.SetRemoteResource
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetRemoteResource(StrProperty& AssetId, struct UObject* DescObj); // Offset: 0x103c374b8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.SetRegionNoByLua
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetRegionNoByLua(struct TScriptInterface<Class>& ClientNetInterface, IntProperty regionNo); // Offset: 0x103c373f8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.SetRedBloodSwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetRedBloodSwitch(bool redBloodSwitch); // Offset: 0x103c3737c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetPufferBuildInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetPufferBuildInfo(StrProperty PipeLineID, StrProperty BuildNo); // Offset: 0x103c37298 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SetPublishRegion
	// Flags: [Final|Native|Static|Public]
	void SetPublishRegion(StrProperty Region); // Offset: 0x103c37208 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetPlayerBaseInfo
	// Flags: [Final|Native|Static|Public]
	void SetPlayerBaseInfo(struct UGameFrontendHUD* GameFrontendHUD, StrProperty OpenID, uint64 RoleID, StrProperty PlayerName, StrProperty HeadIconUrl); // Offset: 0x103c37054 // Return & Params: Num(5) Size(0x40)

	// Object Name: Function Client.ScriptHelperClient.SetNationSwitch
	// Flags: [Final|Native|Static|Public]
	void SetNationSwitch(struct UGameFrontendHUD* GameFrontendHUD, bool NationAllSwitch, bool NationBattleSwitch, bool NationRankSwitch); // Offset: 0x103c36f0c // Return & Params: Num(4) Size(0xb)

	// Object Name: Function Client.ScriptHelperClient.SetMyFriendObserversDetail
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetMyFriendObserversDetail(struct UGameFrontendHUD* GameFrontendHUD, struct TArray<struct FFriendObserver>& FriendObserversDetails); // Offset: 0x103c36e30 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.SetMiniGameFinalAwardResId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetMiniGameFinalAwardResId(struct UGameFrontendHUD* GameFrontendHUD, IntProperty AwardResId); // Offset: 0x103c36d80 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.SetMatchNoAuthMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetMatchNoAuthMode(bool bUsingNoAuth); // Offset: 0x103c36d04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetLuaFastGCMode
	// Flags: [Final|Native|Static|Public]
	void SetLuaFastGCMode(IntProperty Mode); // Offset: 0x103c36c90 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetLinkStyle
	// Flags: [Final|Native|Static|Public]
	bool SetLinkStyle(StrProperty StyleName, IntProperty FontSize, StrProperty FontPath, StrProperty FontColor, bool ShowUnderline, StrProperty PathHyperLinkNormalBrush, StrProperty PathHyperLinkHoveredrBrush); // Offset: 0x103c36a18 // Return & Params: Num(8) Size(0x61)

	// Object Name: Function Client.ScriptHelperClient.SetLevelStreamingUnloadTimeslice
	// Flags: [Final|Native|Static|Public]
	void SetLevelStreamingUnloadTimeslice(bool Enabled); // Offset: 0x103c3699c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetLevelGamePlayLoadPriority
	// Flags: [Final|Native|Static|Public]
	void SetLevelGamePlayLoadPriority(struct ULevelStreaming* TargetLevel, IntProperty Priority); // Offset: 0x103c368ec // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.SetiTOPLbsDelay
	// Flags: [Final|Native|Static|Public]
	void SetiTOPLbsDelay(IntProperty Delay); // Offset: 0x103c36878 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetIPRegion
	// Flags: [Final|Native|Static|Public]
	void SetIPRegion(IntProperty region_no); // Offset: 0x103c36804 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetIosStuckEnableByServerConfig
	// Flags: [Final|Native|Static|Public]
	void SetIosStuckEnableByServerConfig(IntProperty bEnable); // Offset: 0x103c36790 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetIOSBGDownloadAttribute
	// Flags: [Final|Native|Static|Public]
	void SetIOSBGDownloadAttribute(struct UGameFrontendHUD* GameFrontendHUD, bool bEnableCellularAccess, bool bEnableResumeData, IntProperty nMinFileSize, IntProperty nMaxTasks); // Offset: 0x103c36618 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.SetImageVersionString
	// Flags: [Final|Native|Static|Public]
	void SetImageVersionString(StrProperty oldVersion, StrProperty newVersion); // Offset: 0x103c36534 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SetImageStyle
	// Flags: [Final|Native|Static|Public]
	bool SetImageStyle(StrProperty StyleName, IntProperty ImageSize, StrProperty ImagePath, StrProperty ImageColor, bool bPreLoad); // Offset: 0x103c3636c // Return & Params: Num(6) Size(0x3a)

	// Object Name: Function Client.ScriptHelperClient.SetIGProxyData
	// Flags: [Final|Native|Static|Public]
	void SetIGProxyData(StrProperty InJsonData); // Offset: 0x103c362dc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetHapticsEngineEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetHapticsEngineEnable(bool bEnable); // Offset: 0x103c36260 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetGlobalRedBloodSwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetGlobalRedBloodSwitch(bool redBloodSwitch); // Offset: 0x103c361e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetGDPRUserType
	// Flags: [Final|Native|Static|Public]
	void SetGDPRUserType(struct UGameFrontendHUD* GameFrontendHUD, IntProperty GDPRUserType); // Offset: 0x103c36134 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.SetGameThreadPriority
	// Flags: [Final|Native|Static|Public]
	void SetGameThreadPriority(IntProperty NewPriority); // Offset: 0x103c360c0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetGameThreadName
	// Flags: [Final|Native|Static|Public]
	void SetGameThreadName(StrProperty GameThreadName); // Offset: 0x103c35fe4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetGameStatusMap
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetGameStatusMap(struct UGameFrontendHUD* GameFrontendHUD, MapProperty& GameStatusMap); // Offset: 0x103c35f04 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function Client.ScriptHelperClient.SetGameSrvID
	// Flags: [Final|Native|Static|Public]
	void SetGameSrvID(struct UGameFrontendHUD* GameFrontendHUD, IntProperty GameSrvID); // Offset: 0x103c35e54 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.SetForceVulkanAvailable
	// Flags: [Final|Native|Static|Public]
	void SetForceVulkanAvailable(bool Enable); // Offset: 0x103c35dd8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.SetFontStyle
	// Flags: [Final|Native|Static|Public]
	bool SetFontStyle(StrProperty StyleName, IntProperty FontSize, StrProperty FontPath, StrProperty FontColor, bool UseShadow, bool IsBold); // Offset: 0x103c35bc0 // Return & Params: Num(7) Size(0x3b)

	// Object Name: Function Client.ScriptHelperClient.SetFixPostLoadSubojbectsBugEnable
	// Flags: [Final|Native|Static|Public]
	void SetFixPostLoadSubojbectsBugEnable(IntProperty Option); // Offset: 0x103c35b4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetFileHideKeywords
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetFileHideKeywords(struct TArray<StrProperty>& Keywords); // Offset: 0x103c35aac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetExtraLocalizationMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetExtraLocalizationMap(MapProperty& translationMap); // Offset: 0x103c35a08 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.ScriptHelperClient.SetExtraItemTableMappingByFix
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetExtraItemTableMappingByFix(MapProperty& ItemFixMap); // Offset: 0x103c35964 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.ScriptHelperClient.SetEncryptKey
	// Flags: [Final|Native|Static|Public]
	void SetEncryptKey(IntProperty KeyChainId, IntProperty KeyIndex, StrProperty Key); // Offset: 0x103c3585c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.SetDynamicLevels
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetDynamicLevels(struct UGameFrontendHUD* GameFrontendHUD, struct TArray<StrProperty>& DynamicLevels); // Offset: 0x103c35780 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.SetDumpShaderCompile
	// Flags: [Final|Native|Static|Public]
	void SetDumpShaderCompile(IntProperty iDumpVal); // Offset: 0x103c3570c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetDownLoadLanguageName
	// Flags: [Final|Native|Static|Public]
	void SetDownLoadLanguageName(StrProperty Language); // Offset: 0x103c3567c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetDisableGyrSensor
	// Flags: [Final|Native|Static|Public]
	bool SetDisableGyrSensor(bool InDisableSensor); // Offset: 0x103c355f8 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Client.ScriptHelperClient.SetDeviceQualityLevel_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty SetDeviceQualityLevel_LuaState(); // Offset: 0x103c355e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetDeviceQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SetDeviceQualityLevel(IntProperty NewLevel); // Offset: 0x103c35564 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.ScriptHelperClient.SetCrashContextReportLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetCrashContextReportLevel(IntProperty Level); // Offset: 0x103c354f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.SetConfigString
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetConfigString(StrProperty& IniFileName, StrProperty& SectionName, StrProperty& KeyName, StrProperty& Value); // Offset: 0x103c35310 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function Client.ScriptHelperClient.SetConfigInt
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetConfigInt(StrProperty& IniFileName, StrProperty& SectionName, StrProperty& KeyName, IntProperty Value); // Offset: 0x103c35154 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.ScriptHelperClient.SetConfigBool
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetConfigBool(StrProperty& IniFileName, StrProperty& SectionName, StrProperty& KeyName, bool Value); // Offset: 0x103c34f90 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Client.ScriptHelperClient.SetCanWatchEnemy
	// Flags: [Final|Native|Static|Public]
	void SetCanWatchEnemy(struct UGameFrontendHUD* GameFrontendHUD, bool bCan); // Offset: 0x103c34ed8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.SetBtnClickInCdFunc
	// Flags: [Final|Native|Static|Public]
	void SetBtnClickInCdFunc(); // Offset: 0x103c34ec4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SetAppDetailInfo
	// Flags: [Final|Native|Static|Public]
	void SetAppDetailInfo(StrProperty appInfo); // Offset: 0x103c34e34 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SetAllTextureGroupBiasFromQuality
	// Flags: [Final|Native|Static|Public]
	void SetAllTextureGroupBiasFromQuality(); // Offset: 0x103c34e20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SetAllLinkStyle
	// Flags: [Final|Native|Static|Public]
	void SetAllLinkStyle(); // Offset: 0x103c34e0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SetAllImageStyle
	// Flags: [Final|Native|Static|Public]
	void SetAllImageStyle(); // Offset: 0x103c34df8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SetAllFontStyle
	// Flags: [Final|Native|Static|Public]
	void SetAllFontStyle(); // Offset: 0x103c34de4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SetActivePufferTick
	// Flags: [Final|Native|Static|Public]
	void SetActivePufferTick(struct UGameFrontendHUD* GameFrontendHUD, bool ActivePufferTick); // Offset: 0x103c34d2c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.SetAccountRegion
	// Flags: [Final|Native|Static|Public]
	void SetAccountRegion(StrProperty Region); // Offset: 0x103c34c9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.SendRecordFinishedGuideReq
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SendRecordFinishedGuideReq(struct UGameFrontendHUD* GameFrontendHUD, StrProperty TipsID); // Offset: 0x103c34bd0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.SendPlayEmote
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SendPlayEmote(struct UGameFrontendHUD* GameFrontendHUD, IntProperty EmoteIndex); // Offset: 0x103c34b20 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.SendLobbyChat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SendLobbyChat(struct UGameFrontendHUD* GameFrontendHUD, StrProperty gid, StrProperty Content); // Offset: 0x103c34a00 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.SendClientLog
	// Flags: [Final|Native|Static|Public]
	void SendClientLog(struct UGameFrontendHUD* GameFrontendHUD, StrProperty ErrorReason, StrProperty errorDescription, bool pullAll); // Offset: 0x103c34898 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.ScriptHelperClient.ScheduleLocalNotificationAtTime
	// Flags: [Final|Native|Static|Public]
	void ScheduleLocalNotificationAtTime(IntProperty Year, IntProperty Month, IntProperty Day, IntProperty Hour, IntProperty Minute, IntProperty Second, bool LocalTime, StrProperty Title, StrProperty Body, StrProperty Action, IntProperty NotificationID); // Offset: 0x103c34578 // Return & Params: Num(11) Size(0x54)

	// Object Name: Function Client.ScriptHelperClient.SaveToSharedPreferences
	// Flags: [Final|Native|Static|Public]
	void SaveToSharedPreferences(StrProperty Key, StrProperty Value); // Offset: 0x103c34494 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SaveStringToIntermediateFile
	// Flags: [Final|Native|Static|Public]
	void SaveStringToIntermediateFile(StrProperty String, StrProperty Filename); // Offset: 0x103c343b0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SaveStringToFileWithEncoding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SaveStringToFileWithEncoding(StrProperty String, StrProperty Filename, IntProperty EncodingOptions); // Offset: 0x103c3428c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.SaveStringToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SaveStringToFile(StrProperty String, StrProperty Filename); // Offset: 0x103c341a8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SaveStringArrayToFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SaveStringArrayToFile(struct TArray<StrProperty>& Lines, StrProperty Filename); // Offset: 0x103c340b0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.SaveSMapsFile
	// Flags: [Final|Native|Static|Public]
	void SaveSMapsFile(); // Offset: 0x103c3409c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SaveSavFileByByteArray
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool SaveSavFileByByteArray(StrProperty Filename, IntProperty CompressedSize, IntProperty UncompressedSize, struct TArray<char>& ByteArray); // Offset: 0x103c33f24 // Return & Params: Num(5) Size(0x29)

	// Object Name: Function Client.ScriptHelperClient.SaveLuaMemoryFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SaveLuaMemoryFile(StrProperty Filename, StrProperty InputContent, bool RmExistFile); // Offset: 0x103c33df8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.SaveLoadGameSlotCrashFlag
	// Flags: [Final|Native|Static|Public]
	void SaveLoadGameSlotCrashFlag(); // Offset: 0x103c33de4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SaveGameSlotMultiThread
	// Flags: [Final|Native|Static|Public]
	void SaveGameSlotMultiThread(); // Offset: 0x103c33dd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.SaveArrayToFileByFullPath
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool SaveArrayToFileByFullPath(struct TArray<char>& Content, StrProperty FullPathName); // Offset: 0x103c33cc8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.SaveArrayToFile
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool SaveArrayToFile(struct TArray<char>& Content, StrProperty Filename); // Offset: 0x103c33bc0 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.SaveAOSMemMapsInfo
	// Flags: [Final|Native|Static|Public]
	void SaveAOSMemMapsInfo(); // Offset: 0x103c33bac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RunTestCreateLobbyActor
	// Flags: [Final|Native|Static|Public]
	void RunTestCreateLobbyActor(); // Offset: 0x103c33b98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RunFileLockHelper
	// Flags: [Final|Native|Static|Public]
	void RunFileLockHelper(); // Offset: 0x103c33b84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RunCvmTestCases
	// Flags: [Final|Native|Static|Public]
	uint64 RunCvmTestCases(); // Offset: 0x103c33b50 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.RunConsoleCommondAndGetString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty RunConsoleCommondAndGetString(StrProperty commond); // Offset: 0x103c33a90 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.RunConsoleCommond
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RunConsoleCommond(StrProperty commond); // Offset: 0x103c33a00 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.RSAPubEncrypt_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty RSAPubEncrypt_LuaState(); // Offset: 0x103c339e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.RSAPubDecrypt_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty RSAPubDecrypt_LuaState(); // Offset: 0x103c339d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.RSAPriEncrypt_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty RSAPriEncrypt_LuaState(); // Offset: 0x103c339b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.RSAPriDecrypt_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty RSAPriDecrypt_LuaState(); // Offset: 0x103c339a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.RoomOwnerInterruptGame
	// Flags: [Final|Native|Static|Public]
	void RoomOwnerInterruptGame(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c3392c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ReturnToLobby
	// Flags: [Final|Native|Static|Public]
	void ReturnToLobby(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c338b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.RestartShaderPrecompileBackend
	// Flags: [Final|Native|Static|Public]
	void RestartShaderPrecompileBackend(); // Offset: 0x103c338a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RestartShaderPrecompile
	// Flags: [Final|Native|Static|Public]
	void RestartShaderPrecompile(); // Offset: 0x103c33890 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RestartPuffer
	// Flags: [Final|Native|Static|Public]
	void RestartPuffer(struct UGameFrontendHUD* GameFrontendHUD, bool needCheck, IntProperty maxDownloadsPerTask, IntProperty maxDownTask, IntProperty maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, IntProperty versionType, StrProperty InDownloadFuncDict, IntProperty InDnsType, IntProperty InDownloadStage, IntProperty InDownloadEngine); // Offset: 0x103c3353c // Return & Params: Num(12) Size(0x3c)

	// Object Name: Function Client.ScriptHelperClient.RestartGame
	// Flags: [Final|Native|Static|Public]
	void RestartGame(); // Offset: 0x103c33528 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ResolveDNSWithServerIP
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> ResolveDNSWithServerIP(StrProperty DomainName, StrProperty ServerIP); // Offset: 0x103c33414 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.ResolveDNS
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> ResolveDNS(StrProperty DomainName); // Offset: 0x103c33354 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ResetSlateTickEveryFrame
	// Flags: [Final|Native|Static|Public]
	void ResetSlateTickEveryFrame(IntProperty SlateUIID); // Offset: 0x103c332e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.ResetAllTextureGroupBiasFromQuality
	// Flags: [Final|Native|Static|Public]
	void ResetAllTextureGroupBiasFromQuality(); // Offset: 0x103c332cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ResetAllSlateTickEveryFrame
	// Flags: [Final|Native|Static|Public]
	void ResetAllSlateTickEveryFrame(); // Offset: 0x103c332b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RequireSlateTickEveryFrameBeforeTargetFrame
	// Flags: [Final|Native|Static|Public]
	void RequireSlateTickEveryFrameBeforeTargetFrame(IntProperty FrameNum); // Offset: 0x103c33244 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.RequireSlateTickEveryFrame
	// Flags: [Final|Native|Static|Public]
	void RequireSlateTickEveryFrame(IntProperty SlateUIID); // Offset: 0x103c331d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.RequestFile
	// Flags: [Final|Native|Static|Public]
	uint64 RequestFile(struct UGameFrontendHUD* GameFrontendHUD, StrProperty FilePath, bool ForceUpdate, StrProperty InUA); // Offset: 0x103c33058 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function Client.ScriptHelperClient.ReportFirebaseEventWithString
	// Flags: [Final|Native|Static|Public]
	void ReportFirebaseEventWithString(StrProperty eventTypeString, StrProperty bundleExtraKey, StrProperty bundleExtraValue, bool isUnique); // Offset: 0x103c32ed8 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Client.ScriptHelperClient.ReportFirebaseEventWithParam
	// Flags: [Final|Native|Static|Public]
	void ReportFirebaseEventWithParam(StrProperty eventTypeString, MapProperty _params, bool isUnique); // Offset: 0x103c32d80 // Return & Params: Num(3) Size(0x61)

	// Object Name: Function Client.ScriptHelperClient.ReportEventRegisterCompleted
	// Flags: [Final|Native|Static|Public]
	void ReportEventRegisterCompleted(); // Offset: 0x103c32d6c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReportEventPurchaseConsider
	// Flags: [Final|Native|Static|Public]
	void ReportEventPurchaseConsider(); // Offset: 0x103c32d58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReportEventLoadingCompleted
	// Flags: [Final|Native|Static|Public]
	void ReportEventLoadingCompleted(); // Offset: 0x103c32d44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReportCrashLogWithFDNum
	// Flags: [Final|Native|Static|Public]
	void ReportCrashLogWithFDNum(StrProperty baseLogInfo); // Offset: 0x103c32cb4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ReportContextValuesOnCrash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReportContextValuesOnCrash(StrProperty Json); // Offset: 0x103c32c24 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ReportBattleChat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReportBattleChat(struct UGameFrontendHUD* GameFrontendHUD, StrProperty Msg, IntProperty msgExtraParam); // Offset: 0x103c32b18 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Client.ScriptHelperClient.ReplyInvite
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReplyInvite(struct UGameFrontendHUD* GameFrontendHUD, StrProperty gid, bool bReply); // Offset: 0x103c32a04 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Client.ScriptHelperClient.RemoveWebView
	// Flags: [Final|Native|Static|Public]
	bool RemoveWebView(); // Offset: 0x103c329d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.RemoveKnownMissingPackageRefObjectByObj
	// Flags: [Final|Native|Static|Public]
	void RemoveKnownMissingPackageRefObjectByObj(struct UObject* BindObj); // Offset: 0x103c3295c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.RemoveKnownMissingPackage
	// Flags: [Final|Native|Static|Public]
	void RemoveKnownMissingPackage(StrProperty PackageName); // Offset: 0x103c328cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.RemoveBPClassManager
	// Flags: [Final|Native|Static|Public]
	void RemoveBPClassManager(); // Offset: 0x103c328b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RemountPakFiles
	// Flags: [Final|Native|Static|Public]
	bool RemountPakFiles(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c3283c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.RemapMemMap
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void RemapMemMap(StrProperty& Name, IntProperty NewSize); // Offset: 0x103c32758 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.ReleaseWifiLock
	// Flags: [Final|Native|Static|Public]
	void ReleaseWifiLock(); // Offset: 0x103c32744 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReleaseSplashScreenImage
	// Flags: [Final|Native|Static|Public]
	void ReleaseSplashScreenImage(); // Offset: 0x103c32730 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReleaseSlateTickEveryFrame
	// Flags: [Final|Native|Static|Public]
	void ReleaseSlateTickEveryFrame(IntProperty SlateUIID); // Offset: 0x103c326bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.ReleaseRTPoolSnapShots
	// Flags: [Final|Native|Static|Public]
	void ReleaseRTPoolSnapShots(); // Offset: 0x103c326a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReleaseRTPoolResources
	// Flags: [Final|Native|Static|Public]
	void ReleaseRTPoolResources(); // Offset: 0x103c32694 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReleaseGameEnginePlaybackComp
	// Flags: [Final|Native|Static|Public]
	void ReleaseGameEnginePlaybackComp(IntProperty Option); // Offset: 0x103c32620 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.ReleaseAllTables
	// Flags: [Final|Native|Static|Public]
	void ReleaseAllTables(); // Offset: 0x103c3260c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReInitializePuffer
	// Flags: [Final|Native|Static|Public]
	void ReInitializePuffer(struct UGameFrontendHUD* GameFrontendHUD, bool needCheck, IntProperty maxDownloadsPerTask, IntProperty maxDownTask, IntProperty maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, IntProperty versionType, StrProperty InDownloadFuncDict, IntProperty InDnsType, IntProperty InDownloadStage, IntProperty InDownloadEngine); // Offset: 0x103c322b8 // Return & Params: Num(12) Size(0x3c)

	// Object Name: Function Client.ScriptHelperClient.ReInitializeCvm
	// Flags: [Final|Native|Static|Public]
	bool ReInitializeCvm(); // Offset: 0x103c32284 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.RegisterMemoryWarningHandle
	// Flags: [Final|Native|Static|Public]
	void RegisterMemoryWarningHandle(DelegateProperty OnMemoryWarning); // Offset: 0x103c321fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.RefershAllManagedTickConfigWhenFPSChanged
	// Flags: [Final|Native|Static|Public]
	void RefershAllManagedTickConfigWhenFPSChanged(); // Offset: 0x103c321e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ReduceVirMem
	// Flags: [Final|Native|Static|Public]
	void ReduceVirMem(IntProperty Low, IntProperty Dec); // Offset: 0x103c3213c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.RecoverWebView
	// Flags: [Final|Native|Static|Public]
	bool RecoverWebView(); // Offset: 0x103c32108 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.RecoverShrunkODPaksBins
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool RecoverShrunkODPaksBins(MapProperty& Keys); // Offset: 0x103c3205c // Return & Params: Num(2) Size(0x51)

	// Object Name: Function Client.ScriptHelperClient.RecordVirMemInfo
	// Flags: [Final|Native|Static|Public]
	void RecordVirMemInfo(); // Offset: 0x103c32048 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RecordThreadIndexByGameThreadIOS
	// Flags: [Final|Native|Static|Public]
	void RecordThreadIndexByGameThreadIOS(); // Offset: 0x103c32034 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.RecordLuaExceptionInfo
	// Flags: [Final|Native|Static|Public]
	void RecordLuaExceptionInfo(StrProperty exception); // Offset: 0x103c31fa4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.RebuildHISM
	// Flags: [Final|Native|Static|Public]
	void RebuildHISM(struct UHierarchicalInstancedStaticMeshComponent* Comp, bool Async, bool ForceUpdate); // Offset: 0x103c31ea8 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Client.ScriptHelperClient.ReadManagedTickMapSwitchers
	// Flags: [Final|Native|Static|Public]
	void ReadManagedTickMapSwitchers(); // Offset: 0x103c31e94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.QuitFightChat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void QuitFightChat(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c31e20 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.QuickLogin
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void QuickLogin(struct TScriptInterface<Class>& ClientNetInterface, IntProperty refreshTokenBeforeExpDays); // Offset: 0x103c31d60 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.PurgePackageByKeyword
	// Flags: [Final|Native|Static|Public|HasOutParms]
	IntProperty PurgePackageByKeyword(StrProperty& Keyword); // Offset: 0x103c31cb8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.ProjectUserDir
	// Flags: [Final|Native|Static|Public]
	StrProperty ProjectUserDir(); // Offset: 0x103c31c54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ProjectSavedDir
	// Flags: [Final|Native|Static|Public]
	StrProperty ProjectSavedDir(); // Offset: 0x103c31bf0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ProjectDir
	// Flags: [Final|Native|Static|Public]
	StrProperty ProjectDir(); // Offset: 0x103c31b8c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ProjectContentDir
	// Flags: [Final|Native|Static|Public]
	StrProperty ProjectContentDir(); // Offset: 0x103c31b28 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ProcessSoPatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ProcessSoPatch(StrProperty InAppVerStr); // Offset: 0x103c31a90 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.ProcessServerRelationChainError
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void ProcessServerRelationChainError(struct TScriptInterface<Class>& ClientNetInterface, StrProperty ErrorMsg, IntProperty iForceLoginInterval); // Offset: 0x103c31970 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.PrintUAEDataTableManagerMemDetail
	// Flags: [Final|Native|Static|Public]
	void PrintUAEDataTableManagerMemDetail(); // Offset: 0x103c3195c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.PostGameStatusToTMFPSMap
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void PostGameStatusToTMFPSMap(struct UGameFrontendHUD* GameFrontendHUD, StrProperty Key, MapProperty& mapData); // Offset: 0x103c31824 // Return & Params: Num(3) Size(0x68)

	// Object Name: Function Client.ScriptHelperClient.PlayHapticsFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void PlayHapticsFile(StrProperty FilePath, IntProperty Duration, DelegateProperty Callback); // Offset: 0x103c31700 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.PerfReportSetLabel
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void PerfReportSetLabel(StrProperty& str); // Offset: 0x103c31660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.PerfReportAddNote
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void PerfReportAddNote(StrProperty& str); // Offset: 0x103c315c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.OpenWebviewInGameProcess
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OpenWebviewInGameProcess(StrProperty URL, IntProperty Left, IntProperty Top, IntProperty Right, IntProperty Bottom); // Offset: 0x103c31438 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.OpenURLInSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OpenURLInSDK(StrProperty InURL, bool InVisibleToolbar, bool InSystemWebBrowser, bool InFullScreen, StrProperty ExtraJson); // Offset: 0x103c31274 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.OpenSystemStorage
	// Flags: [Final|Native|Static|Public]
	void OpenSystemStorage(); // Offset: 0x103c31260 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.OpenSystemSettings
	// Flags: [Final|Native|Static|Public]
	void OpenSystemSettings(); // Offset: 0x103c3124c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.OpenShaderCodeLibrary
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OpenShaderCodeLibrary(StrProperty Path, StrProperty VersionNum, bool bForceOpen); // Offset: 0x103c310c4 // Return & Params: Num(4) Size(0x22)

	// Object Name: Function Client.ScriptHelperClient.OpenH5FromCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OpenH5FromCache(struct UGameFrontendHUD* GameFrontendHUD, StrProperty ModuleName, StrProperty Language, IntProperty netType, IntProperty Top, IntProperty Left, IntProperty Right, StrProperty ViewParam); // Offset: 0x103c30e58 // Return & Params: Num(8) Size(0x48)

	// Object Name: DelegateFunction Client.ScriptHelperClient.OnWebViewCacheInfoDelegate__DelegateSignature
	// Flags: [Public|Delegate]
	void OnWebViewCacheInfoDelegate__DelegateSignature(IntProperty code); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.OnWebViewCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OnWebViewCache(IntProperty code); // Offset: 0x103c30de4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.OnPakFileCRCCheck
	// Flags: [Final|Native|Static|Public]
	void OnPakFileCRCCheck(StrProperty PakFileName); // Offset: 0x103c30d54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.OnNotifyFightFriendChat
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void OnNotifyFightFriendChat(struct UGameFrontendHUD* GameFrontendHUD, struct FFightFriendChat& Data); // Offset: 0x103c30c70 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Client.ScriptHelperClient.OnIslandPlayerInfoNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OnIslandPlayerInfoNotify(struct UGameFrontendHUD* GameFrontendHUD, IntProperty LandId); // Offset: 0x103c30bc0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.OnInviteNextBattle
	// Flags: [Final|Native|Static|Public]
	bool OnInviteNextBattle(struct UGameFrontendHUD* GameFrontendHUD, StrProperty gid, StrProperty Name); // Offset: 0x103c30a98 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.ScriptHelperClient.OnGetUpdateStateCDNConfigUrl
	// Flags: [Final|Native|Static|Public]
	void OnGetUpdateStateCDNConfigUrl(struct UGameFrontendHUD* GameFrontendHUD, StrProperty URL); // Offset: 0x103c309cc // Return & Params: Num(2) Size(0x18)

	// Object Name: DelegateFunction Client.ScriptHelperClient.OnGetItemBigIcon__DelegateSignature
	// Flags: [Public|Delegate]
	StrProperty OnGetItemBigIcon__DelegateSignature(StrProperty strPath); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherSetLogger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherSetLogger(); // Offset: 0x103c30998 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherSetLauncherEventCallback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherSetLauncherEventCallback(); // Offset: 0x103c30964 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherSendEditorHWND
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OneUp_GLauncherSendEditorHWND(StrProperty HWNDStr); // Offset: 0x103c30888 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherInitialize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherInitialize(StrProperty GameID, StrProperty gameChannelId, StrProperty launcherChannelId, StrProperty Port, StrProperty loginFrom); // Offset: 0x103c30544 // Return & Params: Num(6) Size(0x51)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherGetMsdkWebTokenEncodeUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherGetMsdkWebTokenEncodeUrl(); // Offset: 0x103c30510 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherGetLoginInfoJsonStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherGetLoginInfoJsonStr(); // Offset: 0x103c304dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherAsyncGetMsdkWebTokenEncodeUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherAsyncGetMsdkWebTokenEncodeUrl(StrProperty URL); // Offset: 0x103c303f8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.OneUp_GLauncherAsyncGameEventNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool OneUp_GLauncherAsyncGameEventNotify(StrProperty Event_Code, StrProperty Event_Msg); // Offset: 0x103c3027c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.OnEnterLobbyReloadLocalizationResource
	// Flags: [Final|Native|Static|Public]
	void OnEnterLobbyReloadLocalizationResource(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c30208 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.OnEnterGameReleaseLocalizationResource
	// Flags: [Final|Native|Static|Public]
	void OnEnterGameReleaseLocalizationResource(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c30194 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.OnDolphinAppUpdateFinished
	// Flags: [Final|Native|Static|Public]
	void OnDolphinAppUpdateFinished(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c30120 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.OnCombatHitFeedback
	// Flags: [Final|Native|Static|Public]
	void OnCombatHitFeedback(struct UGameFrontendHUD* GameFrontendHUD, bool bCombatHitFeedbackEnable); // Offset: 0x103c30068 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.OnBattleResultCallBack
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void OnBattleResultCallBack(struct UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData& BattleResultData); // Offset: 0x103c2ff84 // Return & Params: Num(2) Size(0x90)

	// Object Name: Function Client.ScriptHelperClient.OnBattleResult
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void OnBattleResult(struct UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData& BattleResultData); // Offset: 0x103c2fea0 // Return & Params: Num(2) Size(0x90)

	// Object Name: Function Client.ScriptHelperClient.ObjectPoolServerSwitch
	// Flags: [Final|Native|Static|Public]
	void ObjectPoolServerSwitch(bool bSwitchOn); // Offset: 0x103c2fe24 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void NotifyBeginnerFinishedGuideUpdated(struct UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, struct TArray<struct FPlayerFinishedGuide>& finished_guide, IntProperty player_level, IntProperty player_exp_type); // Offset: 0x103c2fc7c // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.NoschatShareWithUrlInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void NoschatShareWithUrlInfo(struct TScriptInterface<Class>& ClientNetInterface, StrProperty _descShare, StrProperty _titleShare, StrProperty _imgPath, StrProperty _url, IntProperty _shareScene); // Offset: 0x103c2fa60 // Return & Params: Num(6) Size(0x54)

	// Object Name: Function Client.ScriptHelperClient.NoschatShareToFriend
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void NoschatShareToFriend(struct TScriptInterface<Class>& ClientNetInterface, StrProperty OpenID, StrProperty Title, StrProperty Desc, StrProperty mediaId, StrProperty messageExt, StrProperty mediaTagName, StrProperty msdkExtInfo); // Offset: 0x103c2f788 // Return & Params: Num(8) Size(0x80)

	// Object Name: Function Client.ScriptHelperClient.NoschatShare
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void NoschatShare(struct TScriptInterface<Class>& ClientNetInterface, StrProperty _descShare, StrProperty _titleShare, StrProperty _imgPath, StrProperty _mediaTagName, StrProperty _messageExt); // Offset: 0x103c2f558 // Return & Params: Num(6) Size(0x60)

	// Object Name: Function Client.ScriptHelperClient.MSDKWebViewCallJS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void MSDKWebViewCallJS(StrProperty strJS); // Offset: 0x103c2f4c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.MoveFollowTarget
	// Flags: [Final|Native|Static|Public]
	void MoveFollowTarget(struct UGameFrontendHUD* GameFrontendHUD, IntProperty FollowType, uint64 UID); // Offset: 0x103c2f3dc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.MoveFile
	// Flags: [Final|Native|Static|Public]
	bool MoveFile(StrProperty SrcFullPath, StrProperty DesFullPath); // Offset: 0x103c2f2f0 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.MountPakFile
	// Flags: [Final|Native|Static|Public]
	bool MountPakFile(StrProperty InPakFilename, StrProperty Key); // Offset: 0x103c2f204 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.MountDecompressedShaderLibrary
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void MountDecompressedShaderLibrary(StrProperty GroupName); // Offset: 0x103c2f174 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.MessageBoxExt
	// Flags: [Final|Native|Static|Public]
	void MessageBoxExt(StrProperty Caption, StrProperty Text); // Offset: 0x103c2f090 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.MemOptSetGameState
	// Flags: [Final|Native|Static|Public]
	void MemOptSetGameState(IntProperty State); // Offset: 0x103c2f01c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.MemOption
	// Flags: [Final|Native|Static|Public]
	void MemOption(IntProperty Option); // Offset: 0x103c2efa8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.MediaCopyFromPakToLocal
	// Flags: [Final|Native|Static|Public]
	bool MediaCopyFromPakToLocal(StrProperty From, bool bForce); // Offset: 0x103c2eec8 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Client.ScriptHelperClient.MD5LuaString_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty MD5LuaString_LuaState(); // Offset: 0x103c2eeb0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.MD5HashAnsiString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MD5HashAnsiString(StrProperty str); // Offset: 0x103c2edf0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ManualSleep
	// Flags: [Final|Native|Static|Public]
	void ManualSleep(float Seconds); // Offset: 0x103c2ed7c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.LuaSnapShot_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty LuaSnapShot_LuaState(); // Offset: 0x103c2ed64 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.LuaLoadFileToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty LuaLoadFileToString(StrProperty InFileName); // Offset: 0x103c2eca4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LowMemoryInGB
	// Flags: [Final|Native|Static|Public]
	IntProperty LowMemoryInGB(); // Offset: 0x103c2ec70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.LogoutAllDevices
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void LogoutAllDevices(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2ebec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.Logout
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void Logout(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2eb68 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.LoginWithExtraInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void LoginWithExtraInfo(struct TScriptInterface<Class>& ClientNetInterface, uint32_t Channel, StrProperty InExtraJson, bool SkipLocalCacheCheck); // Offset: 0x103c2ea04 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.ScriptHelperClient.Login
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void Login(struct TScriptInterface<Class>& ClientNetInterface, uint32_t Channel); // Offset: 0x103c2e944 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.LobbySetUserRegion
	// Flags: [Final|Native|Static|Public]
	void LobbySetUserRegion(IntProperty InRegion); // Offset: 0x103c2e8d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.LobbySetProxyPortlist
	// Flags: [Final|Native|Static|Public]
	void LobbySetProxyPortlist(StrProperty InNodePortList); // Offset: 0x103c2e840 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.LobbySetProxyNodelist
	// Flags: [Final|Native|Static|Public]
	void LobbySetProxyNodelist(StrProperty InNodeIpList); // Offset: 0x103c2e7b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.LobbySetEchoPortlist
	// Flags: [Final|Native|Static|Public]
	void LobbySetEchoPortlist(StrProperty InEchoPortList); // Offset: 0x103c2e720 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.LobbyIsLinkProxy
	// Flags: [Final|Native|Static|Public]
	bool LobbyIsLinkProxy(StrProperty InIp, IntProperty InPort); // Offset: 0x103c2e648 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Client.ScriptHelperClient.LobbyAddAddress
	// Flags: [Final|Native|Static|Public]
	void LobbyAddAddress(StrProperty InProtocol, StrProperty InIp, IntProperty InPort); // Offset: 0x103c2e524 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.LoadSOFromOBB
	// Flags: [Final|Native|Static|Public]
	bool LoadSOFromOBB(); // Offset: 0x103c2e4f0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.LoadSideLoadSOFromOBB
	// Flags: [Final|Native|Static|Public]
	bool LoadSideLoadSOFromOBB(); // Offset: 0x103c2e4bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.LoadSavFileAsByteArray
	// Flags: [Final|Native|Static|Public]
	struct FSavFileData LoadSavFileAsByteArray(StrProperty Filename); // Offset: 0x103c2e3f8 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.LoadSavedFileToStringArray
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> LoadSavedFileToStringArray(StrProperty Filename); // Offset: 0x103c2e338 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LoadLibraryAdditional
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool LoadLibraryAdditional(StrProperty UsageVariant); // Offset: 0x103c2e2a0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.LoadIntermediateFileToString
	// Flags: [Final|Native|Static|Public]
	StrProperty LoadIntermediateFileToString(StrProperty Filename); // Offset: 0x103c2e1e0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LoadH5FromCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void LoadH5FromCache(struct UGameFrontendHUD* GameFrontendHUD, StrProperty ModuleName, StrProperty Language, IntProperty netType, IntProperty Top, IntProperty Left, IntProperty Right, StrProperty ViewParam); // Offset: 0x103c2df74 // Return & Params: Num(8) Size(0x48)

	// Object Name: Function Client.ScriptHelperClient.LoadFileToStringByFullPath
	// Flags: [Final|Native|Static|Public]
	StrProperty LoadFileToStringByFullPath(StrProperty FullPathName); // Offset: 0x103c2deb4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LoadFileToString
	// Flags: [Final|Native|Static|Public]
	StrProperty LoadFileToString(StrProperty Filename); // Offset: 0x103c2ddf4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LoadFileToArrayByFullPath
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> LoadFileToArrayByFullPath(StrProperty FullPathName); // Offset: 0x103c2dd34 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LoadFileToArray
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> LoadFileToArray(StrProperty Filename); // Offset: 0x103c2dc74 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.LoadAmendODs
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool LoadAmendODs(MapProperty& Keys); // Offset: 0x103c2dbc8 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function Client.ScriptHelperClient.LoadAFDTranslation
	// Flags: [Final|Native|Static|Public]
	void LoadAFDTranslation(); // Offset: 0x103c2dbb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ListDirectoryFiles
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> ListDirectoryFiles(StrProperty DirectoryPath); // Offset: 0x103c2daf4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ListAllLoadedSymbols
	// Flags: [Final|Native|Static|Public]
	void ListAllLoadedSymbols(); // Offset: 0x103c2dae0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.LaunchUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void LaunchUrl(StrProperty URL); // Offset: 0x103c2da50 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.IsWoWEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsWoWEditor(); // Offset: 0x103c2da1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsWindowsClientReplay
	// Flags: [Final|Native|Static|Public]
	bool IsWindowsClientReplay(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d9a0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsWindows
	// Flags: [Final|Native|Static|Public]
	bool IsWindows(); // Offset: 0x103c2d96c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsWindowOB
	// Flags: [Final|Native|Static|Public]
	bool IsWindowOB(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d8f0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsUsingBluetooth
	// Flags: [Final|Native|Static|Public]
	bool IsUsingBluetooth(); // Offset: 0x103c2d8bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsUseTypicalResultFlowMode
	// Flags: [Final|Native|Static|Public]
	bool IsUseTypicalResultFlowMode(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d840 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsUpdateSkip
	// Flags: [Final|Native|Static|Public]
	bool IsUpdateSkip(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d7c4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsUEPUBGM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsUEPUBGM(); // Offset: 0x103c2d790 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsTypicalMode
	// Flags: [Final|Native|Static|Public]
	bool IsTypicalMode(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d714 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsTest
	// Flags: [Final|Native|Static|Public]
	bool IsTest(); // Offset: 0x103c2d6e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsSystemVPNOpened
	// Flags: [Final|Native|Static|Public]
	bool IsSystemVPNOpened(); // Offset: 0x103c2d6ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsSupportVulkan
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsSupportVulkan(); // Offset: 0x103c2d678 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsSplitMiniPakVersion
	// Flags: [Final|Native|Static|Public]
	bool IsSplitMiniPakVersion(); // Offset: 0x103c2d644 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsSplitMapPakVersion
	// Flags: [Final|Native|Static|Public]
	bool IsSplitMapPakVersion(); // Offset: 0x103c2d610 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.isSkipUpdateByRepair
	// Flags: [Final|Native|Static|Public]
	bool isSkipUpdateByRepair(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d594 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsShowingWatermark
	// Flags: [Final|Native|Static|Public]
	bool IsShowingWatermark(); // Offset: 0x103c2d560 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsShipping
	// Flags: [Final|Native|Static|Public]
	bool IsShipping(); // Offset: 0x103c2d52c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsRuningOnVulkan
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsRuningOnVulkan(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d4b0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsReleaseVersion
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool IsReleaseVersion(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2d424 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsPVEMode
	// Flags: [Final|Native|Static|Public]
	bool IsPVEMode(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2d3a8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsPerformanceLimitedStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsPerformanceLimitedStat(); // Offset: 0x103c2d374 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsOpenAOS90FPSConfig
	// Flags: [Final|Native|Static|Public]
	bool IsOpenAOS90FPSConfig(); // Offset: 0x103c2d340 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsOpenAOS120FPSConfig
	// Flags: [Final|Native|Static|Public]
	IntProperty IsOpenAOS120FPSConfig(); // Offset: 0x103c2d30c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.IsODPakMonted
	// Flags: [Final|Native|Static|Public]
	bool IsODPakMonted(StrProperty Filename); // Offset: 0x103c2d274 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsNotificationEnabled
	// Flags: [Final|Native|Static|Public]
	bool IsNotificationEnabled(); // Offset: 0x103c2d240 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsNoAuthMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsNoAuthMode(); // Offset: 0x103c2d20c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsNetworkReachable
	// Flags: [Final|Native|Static|Public]
	bool IsNetworkReachable(); // Offset: 0x103c2d1d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsMounted
	// Flags: [Final|Native|Static|Public]
	bool IsMounted(StrProperty Filename); // Offset: 0x103c2d140 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsMlAIDebug
	// Flags: [Final|Native|Static|Public]
	bool IsMlAIDebug(); // Offset: 0x103c2d10c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsMatchVersion
	// Flags: [Final|Native|Static|Public]
	bool IsMatchVersion(); // Offset: 0x103c2d0d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsMatchNoAuthMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsMatchNoAuthMode(); // Offset: 0x103c2d0a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsLowMemoryDevice
	// Flags: [Final|Native|Static|Public]
	bool IsLowMemoryDevice(); // Offset: 0x103c2d070 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsLaunchedByLocalNotification
	// Flags: [Final|Native|Static|Public]
	bool IsLaunchedByLocalNotification(); // Offset: 0x103c2d03c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsLastSessionCrash
	// Flags: [Final|Native|Static|Public]
	bool IsLastSessionCrash(); // Offset: 0x103c2d008 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsJaguar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsJaguar(); // Offset: 0x103c2cfd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsIPhoneFiveSOriginal
	// Flags: [Final|Native|Static|Public]
	bool IsIPhoneFiveSOriginal(); // Offset: 0x103c2cfa0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsIPhoneFiveS
	// Flags: [Final|Native|Static|Public]
	bool IsIPhoneFiveS(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2cf24 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsIOSVersionAbove13
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsIOSVersionAbove13(); // Offset: 0x103c2cef0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsInstallWX
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallWX(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2ce64 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallWhatsapp
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallWhatsapp(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2cdd8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallVK
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallVK(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2cd4c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallTwitter
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallTwitter(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2ccc0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallTikTok
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallTikTok(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2cc34 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallOpenRec
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallOpenRec(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2cba8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallMirrativ
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallMirrativ(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2cb1c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallMessenger
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallMessenger(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2ca90 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallLite
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallLite(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2ca04 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallLine
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallLine(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2c978 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallFaceBook
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallFaceBook(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2c8ec // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallDiscord
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallDiscord(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2c860 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInstallBgBgByiTOP
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsInstallBgBgByiTOP(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2c7d4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsInReplayState
	// Flags: [Final|Native|Static|Public]
	bool IsInReplayState(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2c758 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsHOS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsHOS(); // Offset: 0x103c2c724 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsHapticsEngineEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsHapticsEngineEnable(); // Offset: 0x103c2c6f0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsGameFileExistsWithPakCheck
	// Flags: [Final|Native|Static|Public]
	bool IsGameFileExistsWithPakCheck(StrProperty Filename); // Offset: 0x103c2c658 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsForwardPlusShaderLibraryLoaded
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsForwardPlusShaderLibraryLoaded(); // Offset: 0x103c2c624 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsForCE
	// Flags: [Final|Native|Static|Public]
	bool IsForCE(); // Offset: 0x103c2c5f0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsFileReady
	// Flags: [Final|Native|Static|Public]
	bool IsFileReady(struct UGameFrontendHUD* GameFrontendHUD, StrProperty FilePath); // Offset: 0x103c2c51c // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistsWithPakCheckMatchExt
	// Flags: [Final|Native|Static|Public]
	bool IsFileExistsWithPakCheckMatchExt(StrProperty Filename); // Offset: 0x103c2c484 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistsWithPakCheck
	// Flags: [Final|Native|Static|Public]
	bool IsFileExistsWithPakCheck(StrProperty Filename); // Offset: 0x103c2c3ec // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistsWithOutPakCheck
	// Flags: [Final|Native|Static|Public]
	bool IsFileExistsWithOutPakCheck(StrProperty Path); // Offset: 0x103c2c354 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistInCSCWithCheckRaw
	// Flags: [Final|Native|Static|Public]
	bool IsFileExistInCSCWithCheckRaw(StrProperty PkgName); // Offset: 0x103c2c2bc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistInCSCWithCheck
	// Flags: [Final|Native|Static|Public]
	bool IsFileExistInCSCWithCheck(StrProperty Path); // Offset: 0x103c2c224 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistByFileName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsFileExistByFileName(StrProperty Filename); // Offset: 0x103c2c18c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsFileExistByExtension
	// Flags: [Final|Native|Static|Public]
	bool IsFileExistByExtension(struct UGameFrontendHUD* GameFrontendHUD, StrProperty Filename, StrProperty fileExtension); // Offset: 0x103c2c064 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Client.ScriptHelperClient.IsFileExist
	// Flags: [Final|Native|Static|Public]
	bool IsFileExist(struct UGameFrontendHUD* GameFrontendHUD, StrProperty Filename); // Offset: 0x103c2bf90 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Client.ScriptHelperClient.IsEnableDSGrayPublishFlag
	// Flags: [Final|Native|Static|Public]
	bool IsEnableDSGrayPublishFlag(uint64 nGrayPublishFlag); // Offset: 0x103c2bf14 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsEmulatorWhenInit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsEmulatorWhenInit(); // Offset: 0x103c2bee0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsEmulator
	// Flags: [Final|Native|Static|Public]
	bool IsEmulator(); // Offset: 0x103c2beac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsEditorDedicatedServer
	// Flags: [Final|Native|Static|Public]
	bool IsEditorDedicatedServer(); // Offset: 0x103c2be78 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsEditor
	// Flags: [Final|Native|Static|Public]
	bool IsEditor(); // Offset: 0x103c2be44 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsEarlyZPassEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty IsEarlyZPassEnable(); // Offset: 0x103c2be10 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.IsDolbyAtmosSupported
	// Flags: [Final|Native|Static|Public]
	bool IsDolbyAtmosSupported(); // Offset: 0x103c2bddc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsDeviceSupportsViberation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsDeviceSupportsViberation(); // Offset: 0x103c2bda8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsDeviceSupportsHapticsEngine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsDeviceSupportsHapticsEngine(); // Offset: 0x103c2bd74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsDeviceSupportGyrSensor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsDeviceSupportGyrSensor(); // Offset: 0x103c2bd40 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsDeviceOverheat
	// Flags: [Final|Native|Static|Public]
	bool IsDeviceOverheat(); // Offset: 0x103c2bd0c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsDeviceHWSupportVulkan
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsDeviceHWSupportVulkan(); // Offset: 0x103c2bcd8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsDevelopment
	// Flags: [Final|Native|Static|Public]
	bool IsDevelopment(); // Offset: 0x103c2bca4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsCPUArchMisMatch
	// Flags: [Final|Native|Static|Public]
	bool IsCPUArchMisMatch(); // Offset: 0x103c2bc70 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsConnected
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool IsConnected(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2bbe4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsCloudVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsCloudVersion(); // Offset: 0x103c2bbb0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsCEVersion
	// Flags: [Final|Native|Static|Public]
	bool IsCEVersion(); // Offset: 0x103c2bb7c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsCEHideLobbyUI
	// Flags: [Final|Native|Static|Public]
	bool IsCEHideLobbyUI(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2bb00 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.IsBlueprintEnum
	// Flags: [Final|Native|Static|Public]
	bool IsBlueprintEnum(StrProperty Path); // Offset: 0x103c2ba68 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.IsBasePrefecthOpen
	// Flags: [Final|Native|Static|Public]
	bool IsBasePrefecthOpen(); // Offset: 0x103c2ba34 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsAsanVersion
	// Flags: [Final|Native|Static|Public]
	bool IsAsanVersion(); // Offset: 0x103c2ba00 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsAos32Bit
	// Flags: [Final|Native|Static|Public]
	bool IsAos32Bit(); // Offset: 0x103c2b9cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.IsAndroidHasGyr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsAndroidHasGyr(); // Offset: 0x103c2b998 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.InviteWhatsappOfflineFriends
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InviteWhatsappOfflineFriends(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Title, StrProperty Content); // Offset: 0x103c2b864 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.InviteSystemOfflineFriends
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InviteSystemOfflineFriends(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Title, StrProperty Content); // Offset: 0x103c2b730 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.InviteSMSOfflineFriends
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InviteSMSOfflineFriends(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Content); // Offset: 0x103c2b650 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.InviteLineOfflineFriends
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InviteLineOfflineFriends(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Title, StrProperty Content); // Offset: 0x103c2b51c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.InviteFBOfflineFriends
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InviteFBOfflineFriends(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Title, StrProperty Content, StrProperty link); // Offset: 0x103c2b394 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function Client.ScriptHelperClient.InstallNewApp
	// Flags: [Final|Native|Static|Public]
	void InstallNewApp(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2b320 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.InitWebViewManager
	// Flags: [Final|Native|Static|Public]
	void InitWebViewManager(); // Offset: 0x103c2b30c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitVPN
	// Flags: [Final|Native|Static|Public]
	IntProperty InitVPN(StrProperty InVPNGUID, StrProperty InClientVersion); // Offset: 0x103c2b220 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.InitVlink
	// Flags: [Final|Native|Static|Public]
	void InitVlink(); // Offset: 0x103c2b20c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitQPlatformMisc
	// Flags: [Final|Native|Static|Public]
	void InitQPlatformMisc(); // Offset: 0x103c2b1f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitLoginAccount
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InitLoginAccount(struct TScriptInterface<Class>& ClientNetInterface, uint64 AccUin, StrProperty AccPswd); // Offset: 0x103c2b0dc // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.InitJavaFunctions
	// Flags: [Final|Native|Static|Public]
	void InitJavaFunctions(); // Offset: 0x103c2b0c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitIOSNotchSize
	// Flags: [Final|Native|Static|Public]
	void InitIOSNotchSize(); // Offset: 0x103c2b0b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitIMSDKEnv
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InitIMSDKEnv(struct TScriptInterface<Class>& ClientNetInterface, uint32_t iEnv); // Offset: 0x103c2aff4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.InitializePuffer
	// Flags: [Final|Native|Static|Public]
	void InitializePuffer(struct UGameFrontendHUD* GameFrontendHUD, bool needCheck, IntProperty maxDownloadsPerTask, IntProperty maxDownTask, IntProperty maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, IntProperty versionType, StrProperty InDownloadFuncDict, IntProperty InDnsType, IntProperty InDownloadStage, IntProperty InDownloadEngine); // Offset: 0x103c2aca0 // Return & Params: Num(12) Size(0x3c)

	// Object Name: Function Client.ScriptHelperClient.InitializeLaggingReporter
	// Flags: [Final|Native|Static|Public]
	void InitializeLaggingReporter(struct UGameFrontendHUD* GameFrontendHUD, bool Enable); // Offset: 0x103c2abe8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.InitializeCvmWithRunPhase
	// Flags: [Final|Native|Static|Public]
	void InitializeCvmWithRunPhase(IntProperty RunPhase); // Offset: 0x103c2ab74 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.InitHF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void InitHF(); // Offset: 0x103c2ab60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitHDmpveRemoteConfig
	// Flags: [Final|Native|Static|Public]
	void InitHDmpveRemoteConfig(); // Offset: 0x103c2ab4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.InitDH
	// Flags: [Final|Native|Static|Public]
	IntProperty InitDH(StrProperty gen, StrProperty prime, IntProperty v_srand); // Offset: 0x103c2aa20 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.InfinityGauntletWithPrefix
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InfinityGauntletWithPrefix(StrProperty& ClsName, StrProperty& Prefix); // Offset: 0x103c2a918 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.InfinityGauntlet
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void InfinityGauntlet(StrProperty& ClsName); // Offset: 0x103c2a878 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.HtmlEncode
	// Flags: [Final|Native|Static|Public]
	StrProperty HtmlEncode(StrProperty UnencodedString); // Offset: 0x103c2a7b8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.HideH5WebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void HideH5WebView(); // Offset: 0x103c2a7a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigStartOnce
	// Flags: [Final|Native|Static|Public]
	void HDmpveRemoteConfigStartOnce(); // Offset: 0x103c2a790 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigSetUrl
	// Flags: [Final|Native|Static|Public]
	void HDmpveRemoteConfigSetUrl(StrProperty InRemoteConfigUrl); // Offset: 0x103c2a700 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigGetStringNotDefalut
	// Flags: [Final|Native|Static|Public]
	StrProperty HDmpveRemoteConfigGetStringNotDefalut(StrProperty InKey); // Offset: 0x103c2a640 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigGetString
	// Flags: [Final|Native|Static|Public]
	StrProperty HDmpveRemoteConfigGetString(StrProperty InKey, StrProperty InDefaultValue); // Offset: 0x103c2a52c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigGetIntNotDefalut
	// Flags: [Final|Native|Static|Public]
	IntProperty HDmpveRemoteConfigGetIntNotDefalut(StrProperty InKe); // Offset: 0x103c2a494 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigGetInt
	// Flags: [Final|Native|Static|Public]
	IntProperty HDmpveRemoteConfigGetInt(StrProperty InKey, IntProperty InDefaultValue); // Offset: 0x103c2a3bc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigGetBoolNotDefalut
	// Flags: [Final|Native|Static|Public]
	bool HDmpveRemoteConfigGetBoolNotDefalut(StrProperty InKey); // Offset: 0x103c2a324 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigGetBool
	// Flags: [Final|Native|Static|Public]
	bool HDmpveRemoteConfigGetBool(StrProperty InKey, bool InDefaultValue); // Offset: 0x103c2a244 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Client.ScriptHelperClient.HDmpveRemoteConfigClear
	// Flags: [Final|Native|Static|Public]
	void HDmpveRemoteConfigClear(); // Offset: 0x103c2a230 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.HaveReceivedNoticeCallback
	// Flags: [Final|Native|Static|Public]
	bool HaveReceivedNoticeCallback(); // Offset: 0x103c2a1fc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.HasRemoteConfigReady
	// Flags: [Final|Native|Static|Public]
	bool HasRemoteConfigReady(); // Offset: 0x103c2a1c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.HasNotice
	// Flags: [Final|Native|Static|Public]
	bool HasNotice(IntProperty Type, StrProperty Scene); // Offset: 0x103c2a0f4 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Client.ScriptHelperClient.HasNotchInScreen
	// Flags: [Final|Native|Static|Public]
	bool HasNotchInScreen(); // Offset: 0x103c2a0c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.HasLoadGameSlotCrashFlag
	// Flags: [Final|Native|Static|Public]
	bool HasLoadGameSlotCrashFlag(); // Offset: 0x103c2a08c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.HasDownloadedBasePak
	// Flags: [Final|Native|Static|Public]
	bool HasDownloadedBasePak(); // Offset: 0x103c2a058 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.HasActiveWifi
	// Flags: [Final|Native|Static|Public]
	bool HasActiveWifi(); // Offset: 0x103c2a024 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GuestLogin
	// Flags: [Final|Native|Static|Public]
	void GuestLogin(); // Offset: 0x103c2a010 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GRromelinkRecreateGameSocket
	// Flags: [Final|Native|Static|Public]
	IntProperty GRromelinkRecreateGameSocket(); // Offset: 0x103c29fdc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GMTestAllocUObjs
	// Flags: [Final|Native|Static|Public]
	void GMTestAllocUObjs(struct UGameFrontendHUD* GameFrontendHUD, IntProperty Num); // Offset: 0x103c29f2c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.GMH5Enable
	// Flags: [Final|Native|Static|Public]
	void GMH5Enable(bool flag); // Offset: 0x103c29eb0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetZddc_Check
	// Flags: [Final|Native|Static|Public]
	IntProperty GetZddc_Check(); // Offset: 0x103c29e7c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetYYXDeviceModel
	// Flags: [Final|Native|Static|Public]
	IntProperty GetYYXDeviceModel(); // Offset: 0x103c29e48 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetWidgetsByClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetWidgetsByClass(struct UWidget* Parent, struct UObject* Type, struct TArray<struct UWidget*>& Children); // Offset: 0x103c29d34 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetWebViewTicket
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetWebViewTicket(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c29c80 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetWebviewFullScreenSize
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetWebviewFullScreenSize(IntProperty& OutSurfaceWidth, IntProperty& OutSurfaceHeight); // Offset: 0x103c29b74 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetWeaponDIYIconPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetWeaponDIYIconPath(StrProperty PlayerUID, IntProperty WeaponId, StrProperty PlanID, bool relativePath, IntProperty Width, IntProperty Height); // Offset: 0x103c29954 // Return & Params: Num(7) Size(0x48)

	// Object Name: Function Client.ScriptHelperClient.GetVolume
	// Flags: [Final|Native|Static|Public]
	IntProperty GetVolume(IntProperty InStreamType); // Offset: 0x103c298d8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetVoiceSdkReconnectInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetVoiceSdkReconnectInfo(struct UGameFrontendHUD* GameFrontendHUD, MapProperty& Data); // Offset: 0x103c297f8 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function Client.ScriptHelperClient.GetUserVulkanSetting
	// Flags: [Final|Native|Static|Public]
	bool GetUserVulkanSetting(); // Offset: 0x103c297c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetUserTMFPTapEnableFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetUserTMFPTapEnableFlag(); // Offset: 0x103c29790 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetUseMouseForTouch
	// Flags: [Final|Native|Static|Public]
	bool GetUseMouseForTouch(); // Offset: 0x103c2975c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetUObjectName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUObjectName(struct UObject* uObj); // Offset: 0x103c296b8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetUnrealNetworkStatus
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUnrealNetworkStatus(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c29614 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetUEPUBGMServerName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUEPUBGMServerName(); // Offset: 0x103c295b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetUEPUBGMCPName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUEPUBGMCPName(); // Offset: 0x103c2954c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetToken
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetToken(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c29498 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetTMFPTapDeviceSupportFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetTMFPTapDeviceSupportFlag(); // Offset: 0x103c29464 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetTimezoneName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetTimezoneName(); // Offset: 0x103c29400 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetTimeInMiliSeconds
	// Flags: [Final|Native|Static|Public]
	float GetTimeInMiliSeconds(); // Offset: 0x103c293cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetThreadIndexByThreadIOS
	// Flags: [Final|Native|Static|Public]
	IntProperty GetThreadIndexByThreadIOS(IntProperty TargetThread); // Offset: 0x103c29350 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetTextureGroupLODBias
	// Flags: [Final|Native|Static|Public]
	IntProperty GetTextureGroupLODBias(char GroupID); // Offset: 0x103c292d4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetTelecomSvr
	// Flags: [Final|Native|Static|Public]
	StrProperty GetTelecomSvr(); // Offset: 0x103c29270 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetTCDeviceLevel
	// Flags: [Final|Native|Static|Public]
	IntProperty GetTCDeviceLevel(); // Offset: 0x103c2923c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetTableCount
	// Flags: [Final|Native|Static|Public]
	IntProperty GetTableCount(StrProperty tableName); // Offset: 0x103c291a4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.GetSystemProperty
	// Flags: [Final|Native|Static|Public]
	StrProperty GetSystemProperty(StrProperty InKey); // Offset: 0x103c290e4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetSystemLanguage_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetSystemLanguage_LuaState(); // Offset: 0x103c290cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetSubsideFeatureLevel
	// Flags: [Final|Native|Static|Public]
	uint32_t GetSubsideFeatureLevel(); // Offset: 0x103c29098 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetSrcVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetSrcVersion(); // Offset: 0x103c29034 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetSplitMapConfigInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetSplitMapConfigInfo(); // Offset: 0x103c28fd0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetSpecialData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSpecialData(); // Offset: 0x103c28f6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetSoundEffectQuality
	// Flags: [Final|Native|Static|Public]
	IntProperty GetSoundEffectQuality(); // Offset: 0x103c28f38 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetSOStoredPath
	// Flags: [Final|Native|Static|Public]
	StrProperty GetSOStoredPath(); // Offset: 0x103c28ed4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetSlateTouchDebugLogQueue
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetSlateTouchDebugLogQueue(); // Offset: 0x103c28e70 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetShaderPrecompileProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetShaderPrecompileProgress(); // Offset: 0x103c28e3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetServerDelay
	// Flags: [Final|Native|Static|Public]
	IntProperty GetServerDelay(StrProperty ServerAddress); // Offset: 0x103c28da4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.GetScreenWidthForWebview
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetScreenWidthForWebview(); // Offset: 0x103c28d70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetScreenWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetScreenWidth(); // Offset: 0x103c28d3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetScreenPadding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FMargin GetScreenPadding(); // Offset: 0x103c28d04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetScreenHight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetScreenHight(); // Offset: 0x103c28cd0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetScreenHeightForWebview
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetScreenHeightForWebview(); // Offset: 0x103c28c9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetScreenDensity
	// Flags: [Final|Native|Static|Public]
	IntProperty GetScreenDensity(); // Offset: 0x103c28c68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetRootDir
	// Flags: [Final|Native|Static|Public]
	StrProperty GetRootDir(); // Offset: 0x103c28c04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetRingMode
	// Flags: [Final|Native|Static|Public]
	IntProperty GetRingMode(); // Offset: 0x103c28bd0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetRemarkNameByGIDWithObj
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetRemarkNameByGIDWithObj(struct UObject* Obj, StrProperty gid, StrProperty PlayerName); // Offset: 0x103c28a80 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.ScriptHelperClient.GetRemarkNameByGID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetRemarkNameByGID(struct UGameFrontendHUD* GameFrontendHUD, StrProperty gid, StrProperty PlayerName); // Offset: 0x103c28930 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.ScriptHelperClient.GetRegisterChannelID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetRegisterChannelID(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2887c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetRedFlameSwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetRedFlameSwitch(); // Offset: 0x103c28848 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetRedBloodSwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetRedBloodSwitch(); // Offset: 0x103c28814 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetPureIOSTmpDirectory
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPureIOSTmpDirectory(); // Offset: 0x103c287b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPureIOSLibraryDirectory
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPureIOSLibraryDirectory(); // Offset: 0x103c2874c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPureIOSDocumentsDirectory
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPureIOSDocumentsDirectory(); // Offset: 0x103c286e8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPufferInitResult
	// Flags: [Final|Native|Static|Public]
	bool GetPufferInitResult(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2866c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.GetPufferInitErrCode
	// Flags: [Final|Native|Static|Public]
	uint32_t GetPufferInitErrCode(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c285f0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.GetPublishRegion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPublishRegion(); // Offset: 0x103c2858c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPublicKey
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPublicKey(StrProperty cli_pri_key); // Offset: 0x103c284cc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetPUBGModuleBaseAddr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPUBGModuleBaseAddr(StrProperty ParamModuleName); // Offset: 0x103c2840c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetPrivateKey
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPrivateKey(); // Offset: 0x103c283a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPkgsFromDir
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetPkgsFromDir(bool bUseCheck, StrProperty InDir); // Offset: 0x103c28254 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.GetPingReportInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPingReportInfo(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c281b0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetPingReportData
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPingReportData(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2810c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetPhysicalScreenWidth
	// Flags: [Final|Native|Static|Public]
	IntProperty GetPhysicalScreenWidth(); // Offset: 0x103c280d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetPhysicalScreenHeight
	// Flags: [Final|Native|Static|Public]
	IntProperty GetPhysicalScreenHeight(); // Offset: 0x103c280a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetPhysicalFileTime
	// Flags: [Final|Native|Static|Public]
	int64_t GetPhysicalFileTime(StrProperty InPath); // Offset: 0x103c2800c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetPhoneType
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPhoneType(); // Offset: 0x103c27fa8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPhoneDeviceID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPhoneDeviceID(); // Offset: 0x103c27f44 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPhoneAdvertisingID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPhoneAdvertisingID(); // Offset: 0x103c27ee0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetPandoraAllocatedMemory
	// Flags: [Final|Native|Static|Public]
	int64_t GetPandoraAllocatedMemory(); // Offset: 0x103c27eac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetPackChannel
	// Flags: [Final|Native|Static|Public]
	StrProperty GetPackChannel(); // Offset: 0x103c27e48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetOSVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetOSVersion(); // Offset: 0x103c27de4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetOperator
	// Flags: [Final|Native|Static|Public]
	StrProperty GetOperator(); // Offset: 0x103c27d80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetODPaksFileUseTime
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetODPaksFileUseTime(StrProperty DumpFilename); // Offset: 0x103c27cc0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetODPakName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetODPakName(StrProperty Path); // Offset: 0x103c27c00 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetObjectArrayNum
	// Flags: [Final|Native|Static|Public]
	IntProperty GetObjectArrayNum(); // Offset: 0x103c27bcc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetObbFilePath
	// Flags: [Final|Native|Static|Public]
	StrProperty GetObbFilePath(); // Offset: 0x103c27b68 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetNotchSize
	// Flags: [Final|Native|Static|Public]
	struct TArray<IntProperty> GetNotchSize(); // Offset: 0x103c27b04 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetNetWorkType
	// Flags: [Final|Native|Static|Public]
	StrProperty GetNetWorkType(); // Offset: 0x103c27aa0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetNativeVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetNativeVersion(); // Offset: 0x103c27a3c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetNativePackageTag
	// Flags: [Final|Native|Static|Public]
	StrProperty GetNativePackageTag(); // Offset: 0x103c279d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetMyFriendObservers
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetMyFriendObservers(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c27934 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetMountedPaks
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetMountedPaks(); // Offset: 0x103c278d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetMemoryStats_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetMemoryStats_LuaState(); // Offset: 0x103c278b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetMemorySize
	// Flags: [Final|Native|Static|Public]
	IntProperty GetMemorySize(); // Offset: 0x103c27884 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetMaxFPSConfigByQuality
	// Flags: [Final|Native|Static|Public]
	struct TArray<IntProperty> GetMaxFPSConfigByQuality(); // Offset: 0x103c27820 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetLuaTableSize_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetLuaTableSize_LuaState(); // Offset: 0x103c27808 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetLuaRootDir
	// Flags: [Final|Native|Static|Public]
	StrProperty GetLuaRootDir(); // Offset: 0x103c277a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetLoginChannel
	// Flags: [Final|Native|Static|Public|HasOutParms]
	IntProperty GetLoginChannel(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c27718 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.GetLoadGameSlotCrashInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetLoadGameSlotCrashInfo(); // Offset: 0x103c276b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetLoadCostUseTime
	// Flags: [Final|Native|Static|Public]
	StrProperty GetLoadCostUseTime(); // Offset: 0x103c27650 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetLaunchLocalNotificationID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetLaunchLocalNotificationID(); // Offset: 0x103c275ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetLastSessionUserId
	// Flags: [Final|Native|Static|Public]
	StrProperty GetLastSessionUserId(); // Offset: 0x103c27588 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetKnownMissingPackage
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetKnownMissingPackage(StrProperty PackageName, StrProperty DumpFilename); // Offset: 0x103c27474 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GetiTOPLbsDelay
	// Flags: [Final|Native|Static|Public]
	IntProperty GetiTOPLbsDelay(); // Offset: 0x103c27440 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetITopGameId
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetITopGameId(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c2738c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetIsSecretVersion
	// Flags: [Final|Native|Static|Public]
	IntProperty GetIsSecretVersion(); // Offset: 0x103c27358 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetIsPlayerUsingVPN
	// Flags: [Final|Native|Static|Public]
	bool GetIsPlayerUsingVPN(); // Offset: 0x103c27324 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetIsOpenBattlePlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetIsOpenBattlePlayback(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c272a8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.GetIPRegion
	// Flags: [Final|Native|Static|Public]
	IntProperty GetIPRegion(); // Offset: 0x103c27274 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetIpAddrByHost
	// Flags: [Final|Native|Static|Public]
	StrProperty GetIpAddrByHost(StrProperty Host); // Offset: 0x103c271b4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetIpAddr
	// Flags: [Final|Native|Static|Public]
	StrProperty GetIpAddr(); // Offset: 0x103c27150 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetInternalFilesDir
	// Flags: [Final|Native|Static|Public]
	StrProperty GetInternalFilesDir(); // Offset: 0x103c270ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetInstallChannelID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetInstallChannelID(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c27038 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetIMSDKEnv
	// Flags: [Final|Native|Static|Public]
	IntProperty GetIMSDKEnv(); // Offset: 0x103c27004 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetHDmpveInstanceId
	// Flags: [Final|Native|Static|Public]
	StrProperty GetHDmpveInstanceId(); // Offset: 0x103c26fa0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetH5CacheStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetH5CacheStatus(StrProperty ModuleName); // Offset: 0x103c26f08 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.GetGroupInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct FGroupInfoWrapper GetGroupInfo(struct TScriptInterface<Class>& ClientNetInterface, IntProperty SnsAction); // Offset: 0x103c26e0c // Return & Params: Num(3) Size(0x68)

	// Object Name: Function Client.ScriptHelperClient.GetGPUFamily
	// Flags: [Final|Native|Static|Public]
	StrProperty GetGPUFamily(); // Offset: 0x103c26da8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetGoogleServiceVersionCode
	// Flags: [Final|Native|Static|Public]
	IntProperty GetGoogleServiceVersionCode(); // Offset: 0x103c26d74 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetGLVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetGLVersion(); // Offset: 0x103c26d10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetGLType
	// Flags: [Final|Native|Static|Public]
	StrProperty GetGLType(); // Offset: 0x103c26cac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetGameThreadId
	// Flags: [Final|Native|Static|Public]
	uint32_t GetGameThreadId(); // Offset: 0x103c26c78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetGameStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetGameStatus(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c26bd4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetGameModeID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetGameModeID(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c26b30 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetGameMasterGUID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetGameMasterGUID(); // Offset: 0x103c26acc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetFromSharedPreferences
	// Flags: [Final|Native|Static|Public]
	StrProperty GetFromSharedPreferences(StrProperty Key, StrProperty DefaultValue); // Offset: 0x103c269b8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GetFrameCounter
	// Flags: [Final|Native|Static|Public]
	int64_t GetFrameCounter(); // Offset: 0x103c26984 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetFPS
	// Flags: [Final|Native|Static|Public]
	float GetFPS(); // Offset: 0x103c26950 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetForceVulkanAvailable
	// Flags: [Final|Native|Static|Public]
	bool GetForceVulkanAvailable(); // Offset: 0x103c2691c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GetFocusedSlateName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetFocusedSlateName(); // Offset: 0x103c268b8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetFireBaseFCMToken
	// Flags: [Final|Native|Static|Public]
	StrProperty GetFireBaseFCMToken(); // Offset: 0x103c26854 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetFileSizeOutsideSandbox
	// Flags: [Final|Native|Static|Public]
	int64_t GetFileSizeOutsideSandbox(StrProperty FilePath); // Offset: 0x103c267bc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetFileSizeOnDiskBytes
	// Flags: [Final|Native|Static|Public]
	int64_t GetFileSizeOnDiskBytes(StrProperty FilePath); // Offset: 0x103c26724 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetFileSizeOnDisk
	// Flags: [Final|Native|Static|Public]
	uint32_t GetFileSizeOnDisk(StrProperty FilePath); // Offset: 0x103c2668c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.ScriptHelperClient.GetFileSizeCompressed
	// Flags: [Final|Native|Static|Public]
	uint64 GetFileSizeCompressed(struct UGameFrontendHUD* GameFrontendHUD, StrProperty FilePath); // Offset: 0x103c265b8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetFileHash
	// Flags: [Final|Native|Static|Public]
	StrProperty GetFileHash(StrProperty FilePath); // Offset: 0x103c264f8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetFileDirPath
	// Flags: [Final|Native|Static|Public]
	StrProperty GetFileDirPath(StrProperty FilePath); // Offset: 0x103c26438 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetFBFriendsUnregistered
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetFBFriendsUnregistered(struct TScriptInterface<Class>& ClientNetInterface, uint32_t page, uint32_t Count, uint32_t Type, StrProperty extend); // Offset: 0x103c262a8 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GetExpandMaxFPSConfigByQuality
	// Flags: [Final|Native|Static|Public]
	struct TArray<IntProperty> GetExpandMaxFPSConfigByQuality(); // Offset: 0x103c26244 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetExactDeviceLevel
	// Flags: [Final|Native|Static|Public]
	IntProperty GetExactDeviceLevel(); // Offset: 0x103c26210 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetEncodeUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetEncodeUrl(StrProperty URL); // Offset: 0x103c26150 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetEmulatorName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetEmulatorName(); // Offset: 0x103c260ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDSVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDSVersion(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c26048 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetDSConnectionState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetDSConnectionState(); // Offset: 0x103c26014 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetDSConnectionIP
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDSConnectionIP(); // Offset: 0x103c25fb0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDownLoadLanguageName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDownLoadLanguageName(); // Offset: 0x103c25f4c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDownloadDirPath
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDownloadDirPath(); // Offset: 0x103c25ee8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceXID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDeviceXID(); // Offset: 0x103c25e84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceTotalSpace
	// Flags: [Final|Native|Static|Public]
	uint64 GetDeviceTotalSpace(); // Offset: 0x103c25e50 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceQualityLevel
	// Flags: [Final|Native|Static|Public]
	IntProperty GetDeviceQualityLevel(); // Offset: 0x103c25e1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetDevicePlatformName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDevicePlatformName(); // Offset: 0x103c25db8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDeviceName(); // Offset: 0x103c25d54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceModel
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDeviceModel(); // Offset: 0x103c25cf0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceMaxSupportSoundEffect
	// Flags: [Final|Native|Static|Public]
	IntProperty GetDeviceMaxSupportSoundEffect(); // Offset: 0x103c25cbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceMake
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDeviceMake(); // Offset: 0x103c25c58 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDeviceInfo(); // Offset: 0x103c25bf4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceFreeSpace
	// Flags: [Final|Native|Static|Public]
	uint64 GetDeviceFreeSpace(); // Offset: 0x103c25bc0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetDeviceABIInfoJson
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDeviceABIInfoJson(); // Offset: 0x103c25b5c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDeivceNickName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDeivceNickName(); // Offset: 0x103c25af8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetDataTime_MDHMS
	// Flags: [Final|Native|Static|Public]
	StrProperty GetDataTime_MDHMS(); // Offset: 0x103c25a94 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetCurrentRHILevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetCurrentRHILevel(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c259f0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetCurrentLanguage_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetCurrentLanguage_LuaState(); // Offset: 0x103c259d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetCurrentChannel
	// Flags: [Final|Native|Static|Public]
	IntProperty GetCurrentChannel(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c2595c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.GetCrashUserAction
	// Flags: [Final|Native|Static|Public]
	StrProperty GetCrashUserAction(); // Offset: 0x103c258f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetCpuType
	// Flags: [Final|Native|Static|Public]
	StrProperty GetCpuType(); // Offset: 0x103c25894 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetCPUMaxFrequency
	// Flags: [Final|Native|Static|Public]
	IntProperty GetCPUMaxFrequency(); // Offset: 0x103c25860 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetCPUCoreCount
	// Flags: [Final|Native|Static|Public]
	IntProperty GetCPUCoreCount(); // Offset: 0x103c2582c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetCPUClockCycles
	// Flags: [Final|Native|Static|Public]
	uint64 GetCPUClockCycles(); // Offset: 0x103c257f8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GetConfigString
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetConfigString(StrProperty& IniFileName, StrProperty& SectionName, StrProperty& KeyName); // Offset: 0x103c25650 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function Client.ScriptHelperClient.GetConfigInt
	// Flags: [Final|Native|Static|Public|HasOutParms]
	IntProperty GetConfigInt(StrProperty& IniFileName, StrProperty& SectionName, StrProperty& KeyName); // Offset: 0x103c254d0 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.ScriptHelperClient.GetConfigBool
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool GetConfigBool(StrProperty& IniFileName, StrProperty& SectionName, StrProperty& KeyName); // Offset: 0x103c25350 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Client.ScriptHelperClient.GetCleanFileName
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetCleanFileName(StrProperty& FilePath); // Offset: 0x103c25280 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetCDNUpdateInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetCDNUpdateInfo(struct UGameFrontendHUD* GameFrontendHUD, MapProperty& Data); // Offset: 0x103c251a0 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function Client.ScriptHelperClient.GetCarrierInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetCarrierInfo(); // Offset: 0x103c2513c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetBuildVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetBuildVersion(); // Offset: 0x103c250d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetBlockCRC
	// Flags: [Final|Native|Static|Public]
	uint32_t GetBlockCRC(StrProperty Filename, int64_t Offset, uint32_t Size); // Offset: 0x103c24fc0 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GetBattleKey
	// Flags: [Final|Native|Static|Public]
	StrProperty GetBattleKey(StrProperty svr_pub_key, StrProperty cli_pri_key); // Offset: 0x103c24eac // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GetAreaIPNo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetAreaIPNo(); // Offset: 0x103c24e48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAppVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetAppVersion(); // Offset: 0x103c24de4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAppStartupStageTime
	// Flags: [Final|Native|Static|Public|HasOutParms]
	int64_t GetAppStartupStageTime(StrProperty& str); // Offset: 0x103c24d3c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GetAppMountHandleInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetAppMountHandleInfo(); // Offset: 0x103c24cd8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetApplicationVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetApplicationVersion(); // Offset: 0x103c24c74 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAOSSHOP
	// Flags: [Final|Native|Static|Public]
	StrProperty GetAOSSHOP(); // Offset: 0x103c24c10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidVersion
	// Flags: [Final|Native|Static|Public]
	StrProperty GetAndroidVersion(); // Offset: 0x103c24bac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidSysInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty GetAndroidSysInfo(); // Offset: 0x103c24b48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidSOVersion
	// Flags: [Final|Native|Static|Public]
	IntProperty GetAndroidSOVersion(); // Offset: 0x103c24b14 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidMaxStackSize
	// Flags: [Final|Native|Static|Public]
	uint32_t GetAndroidMaxStackSize(); // Offset: 0x103c24ae0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidMaxFDNum
	// Flags: [Final|Native|Static|Public]
	uint32_t GetAndroidMaxFDNum(); // Offset: 0x103c24aac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidCurrentFDNum
	// Flags: [Final|Native|Static|Public]
	uint32_t GetAndroidCurrentFDNum(); // Offset: 0x103c24a78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetAndroidBuildForArm
	// Flags: [Final|Native|Static|Public]
	IntProperty GetAndroidBuildForArm(); // Offset: 0x103c24a44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GetAllLocalNotificationIDs
	// Flags: [Final|Native|Static|Public]
	struct TArray<IntProperty> GetAllLocalNotificationIDs(); // Offset: 0x103c249e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAllFilesInDir
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetAllFilesInDir(StrProperty Dir, StrProperty Pattern); // Offset: 0x103c248cc // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GetActiveProfileName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetActiveProfileName(); // Offset: 0x103c24868 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAccountRegion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetAccountRegion(); // Offset: 0x103c24804 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GetAccessToken
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty GetAccessToken(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c24750 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GenerateQRImage
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GenerateQRImage(struct TScriptInterface<Class>& ClientNetInterface, IntProperty Tag, IntProperty Size, StrProperty Content, StrProperty logoPath); // Offset: 0x103c245a4 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function Client.ScriptHelperClient.GEMReportSubEvent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GEMReportSubEvent(struct UGameFrontendHUD* GameFrontendHUD, StrProperty EventName, StrProperty SubEventName, struct TArray<StrProperty>& eventParams); // Offset: 0x103c24420 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.ScriptHelperClient.GEMReportLobbyCustomEvent
	// Flags: [Final|Native|Static|Public]
	void GEMReportLobbyCustomEvent(struct UGameFrontendHUD* GameFrontendHUD, IntProperty EventID, bool IsSuccess, StrProperty strDesc); // Offset: 0x103c242d4 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GEMReportEvent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GEMReportEvent(struct UGameFrontendHUD* GameFrontendHUD, StrProperty EventName, MapProperty& eventParams); // Offset: 0x103c2419c // Return & Params: Num(3) Size(0x68)

	// Object Name: Function Client.ScriptHelperClient.GEMReportEnterLobbyEvent
	// Flags: [Final|Native|Static|Public]
	void GEMReportEnterLobbyEvent(struct UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, StrProperty strDesc); // Offset: 0x103c2408c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GameRegisterGRomeLink
	// Flags: [Final|Native|Static|Public]
	void GameRegisterGRomeLink(); // Offset: 0x103c24078 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameMasterSetUserInfo
	// Flags: [Final|Native|Static|Public]
	void GameMasterSetUserInfo(StrProperty InPaidInfo, StrProperty InUserToken, StrProperty InAppId); // Offset: 0x103c23f40 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GameMasterSetUsableRegion
	// Flags: [Final|Native|Static|Public]
	void GameMasterSetUsableRegion(StrProperty InRegion); // Offset: 0x103c23eb0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GameMasterSetUdpEchoPort
	// Flags: [Final|Native|Static|Public]
	void GameMasterSetUdpEchoPort(IntProperty InPort); // Offset: 0x103c23e3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameMasterSetOnlyWifiAccel
	// Flags: [Final|Native|Static|Public]
	void GameMasterSetOnlyWifiAccel(bool InOn); // Offset: 0x103c23dc0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GameMasterSetFreeFlowUser
	// Flags: [Final|Native|Static|Public]
	void GameMasterSetFreeFlowUser(IntProperty InType); // Offset: 0x103c23d4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameMasterOnNetDelay
	// Flags: [Final|Native|Static|Public]
	void GameMasterOnNetDelay(IntProperty InMillis); // Offset: 0x103c23cd8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameMasterIsAccelOpened
	// Flags: [Final|Native|Static|Public]
	bool GameMasterIsAccelOpened(); // Offset: 0x103c23ca4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GameMasterInit
	// Flags: [Final|Native|Static|Public]
	IntProperty GameMasterInit(IntProperty InHookType, StrProperty InGuid, StrProperty InLibs, IntProperty InEchoPort); // Offset: 0x103c23b3c // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.GameMasterGetWebUIUrl
	// Flags: [Final|Native|Static|Public]
	StrProperty GameMasterGetWebUIUrl(IntProperty InType); // Offset: 0x103c23a98 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.GameMasterGetVIPValidTime
	// Flags: [Final|Native|Static|Public]
	StrProperty GameMasterGetVIPValidTime(); // Offset: 0x103c23a34 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GameMasterGetUserID
	// Flags: [Final|Native|Static|Public]
	StrProperty GameMasterGetUserID(); // Offset: 0x103c239d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.GameMasterGetAccelerationStatus
	// Flags: [Final|Native|Static|Public]
	IntProperty GameMasterGetAccelerationStatus(); // Offset: 0x103c2399c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameMasterClearAccelAddr
	// Flags: [Final|Native|Static|Public]
	void GameMasterClearAccelAddr(); // Offset: 0x103c23988 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameMasterBeginRound
	// Flags: [Final|Native|Static|Public]
	void GameMasterBeginRound(StrProperty InOpenid, StrProperty InPvpId); // Offset: 0x103c238a4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.GameMasterAddNewArenaAddress
	// Flags: [Final|Native|Static|Public]
	void GameMasterAddNewArenaAddress(StrProperty InProtocol, StrProperty InIp, IntProperty InPort); // Offset: 0x103c23780 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.GameMasterAddAccelAddr
	// Flags: [Final|Native|Static|Public]
	void GameMasterAddAccelAddr(StrProperty InProtocol, StrProperty InIp, IntProperty InPort); // Offset: 0x103c2365c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.GameJoySwitchOn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoySwitchOn(IntProperty isOn); // Offset: 0x103c235e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameJoyStopManualRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoyStopManualRecord(); // Offset: 0x103c235d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameJoyStartMomentsRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoyStartMomentsRecord(); // Offset: 0x103c235c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameJoyStartManualRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoyStartManualRecord(); // Offset: 0x103c235ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameJoySetVideoQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoySetVideoQuality(IntProperty Quality); // Offset: 0x103c23538 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameJoySetMomentRecordSwitchOn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoySetMomentRecordSwitchOn(IntProperty isOn); // Offset: 0x103c234c4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.GameJoySetLuaguage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoySetLuaguage(); // Offset: 0x103c234b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameJoySetCurrentRecorderPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoySetCurrentRecorderPosition(float X, float Y); // Offset: 0x103c23404 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.GameJoyIsSDKFeatureSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GameJoyIsSDKFeatureSupport(); // Offset: 0x103c233d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.GameJoyEndMomentsRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GameJoyEndMomentsRecord(); // Offset: 0x103c233bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GameJoyClearMomentsVideo
	// Flags: [Final|Native|Static|Public]
	void GameJoyClearMomentsVideo(); // Offset: 0x103c233a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.GainSystemLog
	// Flags: [Final|Native|Static|Public]
	IntProperty GainSystemLog(); // Offset: 0x103c23374 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.FullPathFileExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool FullPathFileExist(StrProperty Filename); // Offset: 0x103c232dc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.FullGC
	// Flags: [Final|Native|Static|Public]
	void FullGC(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c23268 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ForceDecompressShaderLibrary
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ForceDecompressShaderLibrary(StrProperty GroupName); // Offset: 0x103c231d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.FlushPressedKeys
	// Flags: [Final|Native|Static|Public]
	void FlushPressedKeys(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c23164 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.FlushKnownMissingPackageRefObject
	// Flags: [Final|Native|Static|Public]
	void FlushKnownMissingPackageRefObject(); // Offset: 0x103c23150 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.FlushAndroidWindowMemory
	// Flags: [Final|Native|Static|Public]
	bool FlushAndroidWindowMemory(); // Offset: 0x103c2311c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.FinishPufferUpdateInDolphin
	// Flags: [Final|Native|Static|Public]
	void FinishPufferUpdateInDolphin(struct UGameFrontendHUD* GameFrontendHUD, bool IsFinished); // Offset: 0x103c23064 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.FindObjectByPath
	// Flags: [Final|Native|Static|Public]
	struct UObject* FindObjectByPath(StrProperty ObjectPath); // Offset: 0x103c22fcc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.FindFilesRecursiveSkipPakPlatform
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> FindFilesRecursiveSkipPakPlatform(StrProperty Dir, StrProperty Pattern); // Offset: 0x103c22eb8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.FindFileInPakFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool FindFileInPakFiles(StrProperty Filename); // Offset: 0x103c22e20 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.FindClassByPath
	// Flags: [Final|Native|Static|Public]
	struct UObject* FindClassByPath(StrProperty ObjectPath); // Offset: 0x103c22d88 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.FileSystemTesting
	// Flags: [Final|Native|Static|Public]
	void FileSystemTesting(uint32_t Count); // Offset: 0x103c22d14 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.FetchFileFromPAK
	// Flags: [Final|Native|Static|Public]
	IntProperty FetchFileFromPAK(StrProperty InFilePathInPak, StrProperty InLocalFilePath, bool Override); // Offset: 0x103c22be0 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.FeatureGuardSet
	// Flags: [Final|Native|Static|Public]
	void FeatureGuardSet(StrProperty FeatureName, bool bEnable); // Offset: 0x103c22b08 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.ExportLocalUsage_3
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void ExportLocalUsage_3(StrProperty& DestDir, StrProperty DumpFilePath); // Offset: 0x103c229c4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ExportLocalUsage
	// Flags: [Final|Native|Static|Public]
	void ExportLocalUsage(StrProperty DumpFilePath); // Offset: 0x103c228e8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ExitGameForSafety
	// Flags: [Final|Native|Static|Public]
	void ExitGameForSafety(); // Offset: 0x103c228d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ExitGame
	// Flags: [Final|Native|Static|Public]
	void ExitGame(); // Offset: 0x103c228c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ExeMemoryWarningHandle
	// Flags: [Final|Native|Static|Public]
	void ExeMemoryWarningHandle(); // Offset: 0x103c228ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.EnterLoading
	// Flags: [Final|Native|Static|Public]
	void EnterLoading(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c22838 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.EnterFightChat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void EnterFightChat(struct UGameFrontendHUD* GameFrontendHUD, StrProperty gid); // Offset: 0x103c2276c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.EnterBattleStandAlone
	// Flags: [Final|Native|Static|Public]
	void EnterBattleStandAlone(struct UGameFrontendHUD* GameFrontendHUD, StrProperty MapPath, uint32_t PlayerKey, StrProperty PlayerName, StrProperty DynamicLevelsOp, StrProperty AdditionalURLSuffixes, uint32_t ModeID); // Offset: 0x103c22524 // Return & Params: Num(7) Size(0x54)

	// Object Name: Function Client.ScriptHelperClient.EnterBattle
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void EnterBattle(struct UGameFrontendHUD* GameFrontendHUD, StrProperty URL, StrProperty HostnameOrIP, uint32_t Port, uint32_t PlayerKey, StrProperty PacketKey, uint64 GameID, bool IsObserver, MapProperty& AdvConfig, IntProperty WaterType, uint32_t WaterUserID, uint32_t ModeID, uint32_t MainModeID); // Offset: 0x103c22134 // Return & Params: Num(13) Size(0xb0)

	// Object Name: Function Client.ScriptHelperClient.EncryptUID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty EncryptUID(StrProperty sUid, StrProperty sKey); // Offset: 0x103c22020 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.EncryptItemData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void EncryptItemData(struct TArray<IntProperty>& EncryptionItemList); // Offset: 0x103c21f80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.EnableUseOldInterface
	// Flags: [Final|Native|Static|Public]
	void EnableUseOldInterface(struct UGameFrontendHUD* GameFrontendHUD, bool Enable); // Offset: 0x103c21ec8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.EnableUrlCheck
	// Flags: [Final|Native|Static|Public]
	void EnableUrlCheck(bool bShouldEnable); // Offset: 0x103c21e4c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableTxtCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void EnableTxtCheck(); // Offset: 0x103c21e38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.EnableSubMountPoint
	// Flags: [Final|Native|Static|Public]
	bool EnableSubMountPoint(); // Offset: 0x103c21e04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableShaderGroupAsync_New
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool EnableShaderGroupAsync_New(StrProperty GroupNames); // Offset: 0x103c21d6c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.EnableShaderGroupAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool EnableShaderGroupAsync(StrProperty GroupNames); // Offset: 0x103c21cd4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.EnableShaderGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool EnableShaderGroup(StrProperty GroupName); // Offset: 0x103c21c3c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.EnableShaderFinishPersent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float EnableShaderFinishPersent(); // Offset: 0x103c21c08 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.EnableReportVoiceSdkEvent
	// Flags: [Final|Native|Static|Public]
	void EnableReportVoiceSdkEvent(struct UGameFrontendHUD* GameFrontendHUD, bool InitVoiceSdkComponentReportEnable, bool VoiceSdkJoinRoomReportEnable, bool VoiceSdkQuitRoomReportEnable, bool VoiceSdkJoinLbsRoomReportEnable, bool VoiceSdkQuitLbsRoomReportEnable, bool VoiceSdkOnJoinTeamRoomReportEnable, bool VoiceSdkOnJoinLbsRoomReportEnable); // Offset: 0x103c219a0 // Return & Params: Num(8) Size(0xf)

	// Object Name: Function Client.ScriptHelperClient.EnableNativeDump
	// Flags: [Final|Native|Static|Public]
	void EnableNativeDump(IntProperty EnableDump); // Offset: 0x103c2192c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.EnableMergeVirtual
	// Flags: [Final|Native|Static|Public]
	bool EnableMergeVirtual(); // Offset: 0x103c218f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableLowMemoryDevice
	// Flags: [Final|Native|Static|Public]
	void EnableLowMemoryDevice(bool bEnable); // Offset: 0x103c2187c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableLocalizationStatus
	// Flags: [Final|Native|Static|Public]
	void EnableLocalizationStatus(struct UGameFrontendHUD* GameFrontendHUD, bool status); // Offset: 0x103c217c4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.EnableLobbyEntry
	// Flags: [Final|Native|Static|Public]
	bool EnableLobbyEntry(); // Offset: 0x103c21790 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableIosStuckWorkWithDelayFrames
	// Flags: [Final|Native|Static|Public]
	void EnableIosStuckWorkWithDelayFrames(struct UGameFrontendHUD* GameFrontendHUD, bool bEnable, IntProperty DelayFrames); // Offset: 0x103c2169c // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.EnableIosStuckWorkNewWithDelayFrames
	// Flags: [Final|Native|Static|Public]
	void EnableIosStuckWorkNewWithDelayFrames(IntProperty WorkType, IntProperty DelayFrames); // Offset: 0x103c215f0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.EnableIosStuckWorkNew
	// Flags: [Final|Native|Static|Public]
	void EnableIosStuckWorkNew(IntProperty WorkType); // Offset: 0x103c2157c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.EnableIosStuckWork
	// Flags: [Final|Native|Static|Public]
	void EnableIosStuckWork(struct UGameFrontendHUD* GameFrontendHUD, bool bEnable); // Offset: 0x103c214c4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.EnableDataTunnelReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void EnableDataTunnelReport(bool InEnable); // Offset: 0x103c21448 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableAutoObjectRefreshStage
	// Flags: [Final|Native|Static|Public]
	void EnableAutoObjectRefreshStage(bool bEnable); // Offset: 0x103c213cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.EnableAOSForceAnsiMalloc
	// Flags: [Final|Native|Static|Public]
	void EnableAOSForceAnsiMalloc(); // Offset: 0x103c213b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.EnableAkAudioSilenceMode
	// Flags: [Final|Native|Static|Public]
	void EnableAkAudioSilenceMode(bool InEnable); // Offset: 0x103c2133c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.DynamicUpdatePakOrderBackUp
	// Flags: [Final|Native|Static|Public]
	void DynamicUpdatePakOrderBackUp(StrProperty Filename); // Offset: 0x103c21260 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.DynamicUpdatePakOrder
	// Flags: [Final|Native|Static|Public]
	void DynamicUpdatePakOrder(StrProperty Filename); // Offset: 0x103c21184 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.DumpPhysScene
	// Flags: [Final|Native|Static|Public]
	void DumpPhysScene(StrProperty Filename); // Offset: 0x103c210f4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.DumpPackageMemInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty DumpPackageMemInfo(struct TArray<StrProperty>& AssetList); // Offset: 0x103c21024 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.DumpOpenReadCollect
	// Flags: [Final|Native|Static|Public]
	void DumpOpenReadCollect(struct UGameFrontendHUD* GameFrontendHUD, StrProperty DumpFilename); // Offset: 0x103c20f58 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.DumpLogFile
	// Flags: [Final|Native|Static|Public]
	void DumpLogFile(bool backup); // Offset: 0x103c20edc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.DumpConsoleVariables
	// Flags: [Final|Native|Static|Public]
	void DumpConsoleVariables(); // Offset: 0x103c20ec8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.DoesPackageExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool DoesPackageExist(StrProperty Filename); // Offset: 0x103c20e30 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.Disconnect
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void Disconnect(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c20dac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.DisableSysCache
	// Flags: [Final|Native|Static|Public]
	void DisableSysCache(); // Offset: 0x103c20d98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.DisableRepairResource
	// Flags: [Final|Native|Static|Public]
	void DisableRepairResource(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c20d24 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.DisableAOSForceAnsiMalloc
	// Flags: [Final|Native|Static|Public]
	void DisableAOSForceAnsiMalloc(); // Offset: 0x103c20d10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.DisableAndroidHardwareAcceleration
	// Flags: [Final|Native|Static|Public]
	void DisableAndroidHardwareAcceleration(); // Offset: 0x103c20cfc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.DirectToSetting
	// Flags: [Final|Native|Static|Public]
	void DirectToSetting(); // Offset: 0x103c20ce8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.DirectToMemoryManagement
	// Flags: [Final|Native|Static|Public]
	void DirectToMemoryManagement(); // Offset: 0x103c20cd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.DestroyConnector
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void DestroyConnector(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c20c50 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.DeleteFile
	// Flags: [Final|Native|Static|Public]
	bool DeleteFile(StrProperty fullPath); // Offset: 0x103c20bb8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.DeleteDirectory
	// Flags: [Final|Native|Static|Public]
	void DeleteDirectory(StrProperty FilePath); // Offset: 0x103c20b28 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.DelayInitThirdPartSDK
	// Flags: [Final|Native|Static|Public]
	void DelayInitThirdPartSDK(); // Offset: 0x103c20b14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CSCGetStatInfo
	// Flags: [Final|Native|Static|Public]
	StrProperty CSCGetStatInfo(); // Offset: 0x103c20ab0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.CreateWidgetInfoCollector_Reset
	// Flags: [Final|Native|Static|Public]
	void CreateWidgetInfoCollector_Reset(); // Offset: 0x103c20a9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CreateWidgetInfoCollector_OnLevelStart
	// Flags: [Final|Native|Static|Public]
	void CreateWidgetInfoCollector_OnLevelStart(); // Offset: 0x103c20a88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CreateWidgetInfoCollector_OnLevelEnd
	// Flags: [Final|Native|Static|Public]
	void CreateWidgetInfoCollector_OnLevelEnd(); // Offset: 0x103c20a74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CreateQRCodeTexture
	// Flags: [Final|Native|Static|Public]
	struct UTexture2D* CreateQRCodeTexture(struct UGameFrontendHUD* GameFrontendHUD, StrProperty Text); // Offset: 0x103c209a0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.CreateHapticsEngine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CreateHapticsEngine(DelegateProperty Callback); // Offset: 0x103c20918 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.CrashSetUserId
	// Flags: [Final|Native|Static|Public]
	void CrashSetUserId(StrProperty UserId); // Offset: 0x103c20888 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.CrashSetAppVersion
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void CrashSetAppVersion(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Version); // Offset: 0x103c207a8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.CrashReportLogInfo
	// Flags: [Final|Native|Static|Public]
	void CrashReportLogInfo(StrProperty MsgType, StrProperty Info); // Offset: 0x103c206c4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.CrashPutUserData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void CrashPutUserData(struct TScriptInterface<Class>& ClientNetInterface, StrProperty Key, StrProperty Value); // Offset: 0x103c20590 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Client.ScriptHelperClient.CrashPostExceptionFull
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void CrashPostExceptionFull(struct TScriptInterface<Class>& ClientNetInterface, IntProperty Category, StrProperty Name, StrProperty Msg, StrProperty stack); // Offset: 0x103c203cc // Return & Params: Num(5) Size(0x48)

	// Object Name: Function Client.ScriptHelperClient.CrashPostException
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void CrashPostException(struct TScriptInterface<Class>& ClientNetInterface, IntProperty Category, StrProperty Reason); // Offset: 0x103c202b0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.CrashLog
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void CrashLog(struct TScriptInterface<Class>& ClientNetInterface, IntProperty Level, StrProperty Tag, StrProperty Log, bool needDump); // Offset: 0x103c200f8 // Return & Params: Num(5) Size(0x39)

	// Object Name: Function Client.ScriptHelperClient.CopyFile
	// Flags: [Final|Native|Static|Public]
	bool CopyFile(StrProperty SrcFullPath, StrProperty DesFullPath); // Offset: 0x103c2000c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.ConvertToAbsolutePathForExternalAppForWrite
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty ConvertToAbsolutePathForExternalAppForWrite(StrProperty FilePath); // Offset: 0x103c1ff4c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ConvertToAbsolutePathForExternalAppForRead
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty ConvertToAbsolutePathForExternalAppForRead(StrProperty FilePath); // Offset: 0x103c1fe8c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ConvertTMap2JsonStr
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	StrProperty ConvertTMap2JsonStr(MapProperty& mapData); // Offset: 0x103c1fdb8 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function Client.ScriptHelperClient.ConvertRelativePathToFull
	// Flags: [Final|Native|Static|Public]
	StrProperty ConvertRelativePathToFull(StrProperty InPath); // Offset: 0x103c1fcf8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ConvertGamePathToRelativeFilePath
	// Flags: [Final|Native|Static|Public]
	StrProperty ConvertGamePathToRelativeFilePath(StrProperty Path); // Offset: 0x103c1fc38 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.ConsumeLocalNotificationLaunchApp
	// Flags: [Final|Native|Static|Public]
	void ConsumeLocalNotificationLaunchApp(); // Offset: 0x103c1fc24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ConsoleCommand
	// Flags: [Final|Native|Static|Public]
	StrProperty ConsoleCommand(struct UGameFrontendHUD* GameFrontendHUD, StrProperty Command); // Offset: 0x103c1fb28 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.ConnectToURLWithDNSProxy
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void ConnectToURLWithDNSProxy(struct TScriptInterface<Class>& ClientNetInterface, StrProperty ProxyIP, StrProperty URL, IntProperty ConnectTimeOutSeconds); // Offset: 0x103c1f9b4 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.ScriptHelperClient.ConnectToURL
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void ConnectToURL(struct TScriptInterface<Class>& ClientNetInterface, StrProperty URL, IntProperty ConnectTimeOutSeconds); // Offset: 0x103c1f894 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.ComputerName
	// Flags: [Final|Native|Static|Public]
	StrProperty ComputerName(); // Offset: 0x103c1f830 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.CloudVersionPipe_SendDataWithKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CloudVersionPipe_SendDataWithKey(StrProperty MsgKey, StrProperty MsgInfo); // Offset: 0x103c1f6b4 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.ScriptHelperClient.CloudVersionPipe_SendData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CloudVersionPipe_SendData(StrProperty MsgInfo); // Offset: 0x103c1f5d0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.CloudVersionPipe_RecvDataTest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CloudVersionPipe_RecvDataTest(StrProperty MsgInfo); // Offset: 0x103c1f4ec // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.CloudVersionPipe_PipeHelper
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UObject* CloudVersionPipe_PipeHelper(); // Offset: 0x103c1f4b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.CloudVersionPipe_Log
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CloudVersionPipe_Log(StrProperty LogInfo); // Offset: 0x103c1f3d4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.CloudVersionInitDataPipeline
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CloudVersionInitDataPipeline(); // Offset: 0x103c1f3a0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.CloseWebView
	// Flags: [Final|Native|Static|Public]
	void CloseWebView(); // Offset: 0x103c1f38c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CloseVLink
	// Flags: [Final|Native|Static|Public]
	void CloseVLink(); // Offset: 0x103c1f378 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CloseVideoListDialog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CloseVideoListDialog(); // Offset: 0x103c1f364 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CloseH5WebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CloseH5WebView(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c1f2f0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ClipBoardCopy
	// Flags: [Final|Native|Static|Public]
	void ClipBoardCopy(StrProperty Text); // Offset: 0x103c1f260 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ClientKickPlayerFromGame
	// Flags: [Final|Native|Static|Public]
	void ClientKickPlayerFromGame(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c1f1ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ClientEnterWarMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClientEnterWarMode(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c1f178 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ClientConfirmReturnToGame
	// Flags: [Final|Native|Static|Public]
	void ClientConfirmReturnToGame(struct UGameFrontendHUD* GameFrontendHUD); // Offset: 0x103c1f104 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.ClientConfirmMisKill
	// Flags: [Final|Native|Static|Public]
	void ClientConfirmMisKill(struct UGameFrontendHUD* GameFrontendHUD, IntProperty bConfirm); // Offset: 0x103c1f054 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ScriptHelperClient.ClearUpdatedSoPatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearUpdatedSoPatch(); // Offset: 0x103c1f040 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearUnknownRT
	// Flags: [Final|Native|Static|Public]
	void ClearUnknownRT(); // Offset: 0x103c1f02c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearSyncLoadCacheSystem
	// Flags: [Final|Native|Static|Public]
	void ClearSyncLoadCacheSystem(); // Offset: 0x103c1f018 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearSluaClassCache
	// Flags: [Final|Native|Static|Public]
	void ClearSluaClassCache(); // Offset: 0x103c1f004 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearSlateTouchDebugLogQueue
	// Flags: [Final|Native|Static|Public]
	void ClearSlateTouchDebugLogQueue(); // Offset: 0x103c1eff0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearSlateCache
	// Flags: [Final|Native|Static|Public]
	void ClearSlateCache(); // Offset: 0x103c1efdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearNotifications
	// Flags: [Final|Native|Static|Public]
	void ClearNotifications(); // Offset: 0x103c1efc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearNotice
	// Flags: [Final|Native|Static|Public]
	void ClearNotice(); // Offset: 0x103c1efb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearJankStats
	// Flags: [Final|Native|Static|Public]
	void ClearJankStats(); // Offset: 0x103c1efa0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearIGProxyData
	// Flags: [Final|Native|Static|Public]
	void ClearIGProxyData(); // Offset: 0x103c1ef8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearHasLoadGameSlotCrashFlag
	// Flags: [Final|Native|Static|Public]
	void ClearHasLoadGameSlotCrashFlag(); // Offset: 0x103c1ef78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearH5WebViewCookie
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearH5WebViewCookie(StrProperty Domain); // Offset: 0x103c1eee8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ClearChannelID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void ClearChannelID(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x103c1ee64 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.ClearAllLocalNotifications
	// Flags: [Final|Native|Static|Public]
	void ClearAllLocalNotifications(); // Offset: 0x103c1ee50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ClearAllAudioBanks
	// Flags: [Final|Native|Static|Public]
	void ClearAllAudioBanks(); // Offset: 0x103c1ee3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CheckRegisterGestureConflictWithZoom
	// Flags: [Final|Native|Static|Public]
	void CheckRegisterGestureConflictWithZoom(); // Offset: 0x103c1ee28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CheckMetalLibraryUncompressed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty CheckMetalLibraryUncompressed(); // Offset: 0x103c1edf4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.CheckMemorySymbolSource
	// Flags: [Final|Native|Static|Public]
	IntProperty CheckMemorySymbolSource(); // Offset: 0x103c1edc0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.CheckLocalPakContentHash
	// Flags: [Final|Native|Static|Public]
	bool CheckLocalPakContentHash(StrProperty Filename); // Offset: 0x103c1ed28 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.CheckLocalizationExist
	// Flags: [Final|Native|Static|Public]
	bool CheckLocalizationExist(); // Offset: 0x103c1ecf4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.CheckFilesInPakWithResult
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<StrProperty> CheckFilesInPakWithResult(struct TArray<StrProperty>& Files); // Offset: 0x103c1ec24 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.CheckFilesInPakLite
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<StrProperty> CheckFilesInPakLite(struct TArray<StrProperty>& Files); // Offset: 0x103c1eb54 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.CheckFilesInPak
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<StrProperty> CheckFilesInPak(struct TArray<StrProperty>& Files); // Offset: 0x103c1ea84 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.CheckCanUseUrl
	// Flags: [Final|Native|Static|Public]
	bool CheckCanUseUrl(StrProperty URL); // Offset: 0x103c1e9ec // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.CheckBeforeInitPuffer
	// Flags: [Final|Native|Static|Public]
	void CheckBeforeInitPuffer(); // Offset: 0x103c1e9d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.ChangeLocalizationReleaseTestStatus
	// Flags: [Final|Native|Static|Public]
	void ChangeLocalizationReleaseTestStatus(struct UGameFrontendHUD* GameFrontendHUD, bool status); // Offset: 0x103c1e920 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.ScriptHelperClient.CanUseHapticsEngine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CanUseHapticsEngine(); // Offset: 0x103c1e8ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.CanEnableLuaClassIndexCache
	// Flags: [Final|Native|Static|Public]
	bool CanEnableLuaClassIndexCache(); // Offset: 0x103c1e8b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.CancelLocalNotification
	// Flags: [Final|Native|Static|Public]
	void CancelLocalNotification(IntProperty NotificationID); // Offset: 0x103c1e844 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.CallIngameFirstTimeTips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CallIngameFirstTimeTips(struct UGameFrontendHUD* GameFrontendHUD, StrProperty tableName, StrProperty FunctionName); // Offset: 0x103c1e724 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.CallEngineGC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CallEngineGC(); // Offset: 0x103c1e710 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.CacheH5WebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CacheH5WebView(StrProperty ModuleName); // Offset: 0x103c1e680 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.BqBqShareToFriend
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void BqBqShareToFriend(struct TScriptInterface<Class>& ClientNetInterface, IntProperty act, StrProperty OpenID, StrProperty Title, StrProperty Desc, StrProperty targetUrl, StrProperty imgUrl, StrProperty previewText, StrProperty gameTag, StrProperty msdkExtInfo); // Offset: 0x103c1e314 // Return & Params: Num(10) Size(0x98)

	// Object Name: Function Client.ScriptHelperClient.BqBqShare
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void BqBqShare(struct TScriptInterface<Class>& ClientNetInterface, StrProperty _descShare, StrProperty _titleShare, StrProperty _imgPath, StrProperty _imgUrl, StrProperty _url, IntProperty _shareScene); // Offset: 0x103c1e0a4 // Return & Params: Num(7) Size(0x64)

	// Object Name: Function Client.ScriptHelperClient.BqBqAddFriend
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void BqBqAddFriend(struct TScriptInterface<Class>& ClientNetInterface, StrProperty OpenID, StrProperty Desc, StrProperty Message); // Offset: 0x103c1df1c // Return & Params: Num(4) Size(0x40)

	// Object Name: Function Client.ScriptHelperClient.BindMotionDetectedDelegate
	// Flags: [Final|Native|Static|Public]
	void BindMotionDetectedDelegate(struct ASTExtraPlayerController* PlayerController, struct UScreenInput* InScreenInput); // Offset: 0x103c1de70 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.ScriptHelperClient.AskForNotificationPermission
	// Flags: [Final|Native|Static|Public]
	void AskForNotificationPermission(); // Offset: 0x103c1de5c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.AppendForcedKeepODPaks
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool AppendForcedKeepODPaks(struct TArray<StrProperty>& Filenames); // Offset: 0x103c1ddb4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.AndroidShouldShowPermissionRationale
	// Flags: [Final|Native|Static|Public]
	bool AndroidShouldShowPermissionRationale(); // Offset: 0x103c1dd80 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.AndroidCheckPermission
	// Flags: [Final|Native|Static|Public]
	bool AndroidCheckPermission(); // Offset: 0x103c1dd4c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.AllocVirMem
	// Flags: [Final|Native|Static|Public]
	void AllocVirMem(int64_t XMiB); // Offset: 0x103c1dcd8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.AkAudio_UnloadInitBank
	// Flags: [Final|Native|Static|Public]
	void AkAudio_UnloadInitBank(); // Offset: 0x103c1dcc4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.AkAudio_UnloadAllFilePackages
	// Flags: [Final|Native|Static|Public]
	void AkAudio_UnloadAllFilePackages(); // Offset: 0x103c1dcb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.AkAudio_StopAllSounds
	// Flags: [Final|Native|Static|Public]
	void AkAudio_StopAllSounds(bool bShouldStopUISounds); // Offset: 0x103c1dc34 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperClient.AkAudio_LoadInitBank
	// Flags: [Final|Native|Static|Public]
	void AkAudio_LoadInitBank(); // Offset: 0x103c1dc20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.AkAudio_Flush
	// Flags: [Final|Native|Static|Public]
	void AkAudio_Flush(struct UWorld* WorldToFlush); // Offset: 0x103c1dbac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.AkAudio_ClearBanks
	// Flags: [Final|Native|Static|Public]
	void AkAudio_ClearBanks(); // Offset: 0x103c1db98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperClient.AddStreamingLevel
	// Flags: [Final|Native|Static|Public]
	bool AddStreamingLevel(struct UWorld* World, StrProperty SubLevel, bool bShouldBeLoaded, bool bShouldBeVisible, bool bShouldBlockOnLoad); // Offset: 0x103c1d9e4 // Return & Params: Num(6) Size(0x1c)

	// Object Name: Function Client.ScriptHelperClient.AddOnScreenDebugMessage
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void AddOnScreenDebugMessage(StrProperty Message, IntProperty Key, float TimeToDisplay, struct FColor& Color, struct FVector2D TextScale); // Offset: 0x103c1d848 // Return & Params: Num(5) Size(0x24)

	// Object Name: Function Client.ScriptHelperClient.AddMemoryLogSize
	// Flags: [Final|Native|Static|Public]
	IntProperty AddMemoryLogSize(IntProperty b_size); // Offset: 0x103c1d7cc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ScriptHelperClient.AddKnownMissingPackage
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void AddKnownMissingPackage(StrProperty& PackageName, struct UObject* BindObj, bool bReplace); // Offset: 0x103c1d6a0 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Client.ScriptHelperClient.AddCrashContextType
	// Flags: [Final|Native|Public]
	void AddCrashContextType(IntProperty Type, StrProperty KeyString); // Offset: 0x103c1d5cc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ScriptHelperClient.AddCrashContextData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddCrashContextData(IntProperty Key, StrProperty Val, bool bAppendTimeStamp, IntProperty reportLevel); // Offset: 0x103c1d478 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Client.ScriptHelperClient.AddAttachFileString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddAttachFileString(StrProperty Type, bool bClear, StrProperty strinfo); // Offset: 0x103c1d34c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.AddAttachDataString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddAttachDataString(StrProperty Type, bool bClear, StrProperty strinfo); // Offset: 0x103c1d220 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperClient.ActivateCameraByName_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty ActivateCameraByName_LuaState(); // Offset: 0x103c1d208 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperClient.ActivateCameraByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ActivateCameraByName(StrProperty CameraName); // Offset: 0x103c1d170 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ScriptHelperClient.AcquireWifiLock
	// Flags: [Final|Native|Static|Public]
	void AcquireWifiLock(); // Offset: 0x103c1d15c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.ScriptHelperEngine
// Size: 0x28 // Inherited bytes: 0x28
struct UScriptHelperEngine : UObject {
	// Functions

	// Object Name: Function Client.ScriptHelperEngine.TestLz4Decompress
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<char> TestLz4Decompress(struct TArray<char>& Source, bool bEnable); // Offset: 0x103c4fdf0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.ScriptHelperEngine.TestLz4Compress
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<char> TestLz4Compress(struct TArray<char>& Source); // Offset: 0x103c4fd20 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.ScriptHelperEngine.StopTGPA
	// Flags: [Final|Native|Static|Public]
	void StopTGPA(); // Offset: 0x103c4fd0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperEngine.StartTGPA
	// Flags: [Final|Native|Static|Public]
	void StartTGPA(); // Offset: 0x103c4fcf8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperEngine.ReplaceEmoji
	// Flags: [Final|Native|Static|Public]
	StrProperty ReplaceEmoji(StrProperty Content, IntProperty MaxEmojiNum, StrProperty SpecialCharacter); // Offset: 0x103c4fba4 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.ScriptHelperEngine.PrepareTGPA
	// Flags: [Final|Native|Static|Public]
	void PrepareTGPA(); // Offset: 0x103c4fb90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ScriptHelperEngine.IsSupportTGPA
	// Flags: [Final|Native|Static|Public]
	IntProperty IsSupportTGPA(); // Offset: 0x103c4fb5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperEngine.IsSupportADPF
	// Flags: [Final|Native|Static|Public]
	bool IsSupportADPF(); // Offset: 0x103c4fb28 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperEngine.IsLowMemoryDevice
	// Flags: [Final|Native|Static|Public]
	bool IsLowMemoryDevice(); // Offset: 0x103c4faf4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperEngine.Is64BitVersion
	// Flags: [Final|Native|Public]
	bool Is64BitVersion(); // Offset: 0x103c4fac0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ScriptHelperEngine.GetThermalStatus
	// Flags: [Final|Native|Static|Public]
	IntProperty GetThermalStatus(); // Offset: 0x103c4fa8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperEngine.GetThermal15sAfter
	// Flags: [Final|Native|Static|Public]
	IntProperty GetThermal15sAfter(); // Offset: 0x103c4fa58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperEngine.GetMemoryUsedVirtualInKB
	// Flags: [Final|Native|Static|Public]
	float GetMemoryUsedVirtualInKB(); // Offset: 0x103c4fa24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ScriptHelperEngine.GetMemoryUsedPhysicalInKB
	// Flags: [Final|Native|Static|Public]
	float GetMemoryUsedPhysicalInKB(); // Offset: 0x103c4f9f0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.SDKCallbackHelper
// Size: 0x88 // Inherited bytes: 0x28
struct USDKCallbackHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate SDKCallbackDelegate; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x50]; // Offset: 0x38 // Size: 0x50

	// Functions

	// Object Name: Function Client.SDKCallbackHelper.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(); // Offset: 0x103c505d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SDKCallbackHelper.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct USDKCallbackHelper* GetInstance(); // Offset: 0x103c505a0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.SettingSubsystem
// Size: 0x368 // Inherited bytes: 0x30
struct USettingSubsystem : UGameInstanceSubsystem {
	// Fields
	bool bUseRegisterDelegateOptimize; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	MapProperty CacheRegisterProperties_Bool; // Offset: 0x38 // Size: 0x50
	MapProperty CacheRegisterProperties_Int; // Offset: 0x88 // Size: 0x50
	MapProperty CacheRegisterProperties_Float; // Offset: 0xd8 // Size: 0x50
	MapProperty ReportSettingConfig; // Offset: 0x128 // Size: 0x50
	char pad_0x178[0x50]; // Offset: 0x178 // Size: 0x50
	StrProperty CachedSaveGameName; // Offset: 0x1c8 // Size: 0x10
	DelegateProperty GetUserSettingsDelegate; // Offset: 0x1d8 // Size: 0x10
	struct UEffectSettingMgr* EffectSettingMgrInstace; // Offset: 0x1e8 // Size: 0x08
	struct USaveGame* UserSettings; // Offset: 0x1f0 // Size: 0x08
	struct USaveGame* UserSettingsShadowData; // Offset: 0x1f8 // Size: 0x08
	char pad_0x200[0x8]; // Offset: 0x200 // Size: 0x08
	struct UObject* UserSettingsClass; // Offset: 0x208 // Size: 0x08
	StrProperty UserSettingsClassName; // Offset: 0x210 // Size: 0x10
	StrProperty ActiveSaveGameName; // Offset: 0x220 // Size: 0x10
	char pad_0x230[0x8]; // Offset: 0x230 // Size: 0x08
	StrProperty LanguageSettingsClassName; // Offset: 0x238 // Size: 0x10
	StrProperty LanguageSaveGameName; // Offset: 0x248 // Size: 0x10
	char pad_0x258[0xb0]; // Offset: 0x258 // Size: 0xb0
	MapProperty LanguageMap; // Offset: 0x308 // Size: 0x50
	char pad_0x358[0x8]; // Offset: 0x358 // Size: 0x08
	struct UObject* SaveGameUIElemLayoutClass; // Offset: 0x360 // Size: 0x08

	// Functions

	// Object Name: Function Client.SettingSubsystem.UnregisterUserSettingDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterUserSettingDelegate(IntProperty Handle); // Offset: 0x103c51994 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.SettingSubsystem.SetUserSettings_String
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetUserSettings_String(StrProperty PropertyName, StrProperty Val); // Offset: 0x103c5184c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.SettingSubsystem.SetUserSettings_Int
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetUserSettings_Int(StrProperty PropertyName, IntProperty Value); // Offset: 0x103c51764 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Client.SettingSubsystem.SetUserSettings_Float
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetUserSettings_Float(StrProperty PropertyName, float Value); // Offset: 0x103c5167c // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Client.SettingSubsystem.SetUserSettings_Bool
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetUserSettings_Bool(StrProperty PropertyName, bool Value, bool IngoreSave); // Offset: 0x103c51544 // Return & Params: Num(4) Size(0x13)

	// Object Name: Function Client.SettingSubsystem.RegisterUserSettingsDelegate_Int
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RegisterUserSettingsDelegate_Int(StrProperty PropertyName, DelegateProperty Delegate); // Offset: 0x103c51448 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.SettingSubsystem.RegisterUserSettingsDelegate_Float
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RegisterUserSettingsDelegate_Float(StrProperty PropertyName, DelegateProperty Delegate); // Offset: 0x103c5134c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.SettingSubsystem.RegisterUserSettingsDelegate_Bool
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RegisterUserSettingsDelegate_Bool(StrProperty PropertyName, DelegateProperty Delegate); // Offset: 0x103c51250 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.SettingSubsystem.RegisterUserSettingsDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterUserSettingsDelegate(DelegateProperty Delegate); // Offset: 0x103c511c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.SettingSubsystem.RefreshSettingDataForReport
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshSettingDataForReport(); // Offset: 0x103c511ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SettingSubsystem.OnReportSettingConfigStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnReportSettingConfigStart(); // Offset: 0x103c51198 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SettingSubsystem.OnRefreshReportSettingConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnRefreshReportSettingConfig(); // Offset: 0x103c51184 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SettingSubsystem.GetUserSettingsByDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct USaveGame* GetUserSettingsByDelegate(StrProperty LayoutName); // Offset: 0x103c510dc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.SettingSubsystem.GetUserSettings_String
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetUserSettings_String(StrProperty PropertyName); // Offset: 0x103c5100c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.SettingSubsystem.GetUserSettings_Int
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetUserSettings_Int(StrProperty PropertyName); // Offset: 0x103c50f64 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.SettingSubsystem.GetUserSettings_Float
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetUserSettings_Float(StrProperty PropertyName); // Offset: 0x103c50ebc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.SettingSubsystem.GetUserSettings_Bool
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetUserSettings_Bool(StrProperty PropertyName); // Offset: 0x103c50e14 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.SettingSubsystem.GetUserSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct USaveGame* GetUserSettings(); // Offset: 0x103c50de0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.SettingSubsystem.GetUserLanguageSettingsProperty_String
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetUserLanguageSettingsProperty_String(StrProperty PropertyName); // Offset: 0x103c50d10 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.SettingSubsystem.GetEffectSettingMgr
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UEffectSettingMgr* GetEffectSettingMgr(); // Offset: 0x103c50cdc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.SettingSubsystem.FinishModifyUserSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishModifyUserSettings(); // Offset: 0x103c50cc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SettingSubsystem.ClearSettingDataForReport
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearSettingDataForReport(); // Offset: 0x103c50cb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SettingSubsystem.CheckLocalizationLanguage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckLocalizationLanguage(); // Offset: 0x103c50ca0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.SettingSubsystem.CheckChangeWithCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CheckChangeWithCache(struct UObject* Source, struct UProperty* Property, StrProperty PropertyName); // Offset: 0x103c50b30 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function Client.SettingSubsystem.CacheRegisterValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CacheRegisterValue(struct UObject* Source, struct UProperty* Property, StrProperty PropertyName); // Offset: 0x103c509c8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Client.SettingSubsystem.BeginModifyUserSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BeginModifyUserSettings(); // Offset: 0x103c509b4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.SoundTools
// Size: 0x160 // Inherited bytes: 0x28
struct USoundTools : UObject {
	// Fields
	char pad_0x28[0x138]; // Offset: 0x28 // Size: 0x138

	// Functions

	// Object Name: Function Client.SoundTools.StopConversionByUser
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopConversionByUser(IntProperty Index); // Offset: 0x103c52b7c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.SoundTools.SaveWavInIOS
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveWavInIOS(StrProperty GameFilePath); // Offset: 0x103c52a98 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.SoundTools.SaveToAndroidPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveToAndroidPath(StrProperty GameFilePath); // Offset: 0x103c529b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.SoundTools.GetSizeOfWwiseAudioToWav
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetSizeOfWwiseAudioToWav(StrProperty EventName, StrProperty BankName, StrProperty outFilePath); // Offset: 0x103c52790 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.SoundTools.GetConversionPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetConversionPercent(IntProperty Index); // Offset: 0x103c52704 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.SoundTools.ConvertWwiseAudioToWavSync
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ConvertWwiseAudioToWavSync(StrProperty EventName, StrProperty BankName, StrProperty outFilePath); // Offset: 0x103c524e0 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.SoundTools.ConvertWwiseAudioToWav
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ConvertWwiseAudioToWav(StrProperty EventName, StrProperty BankName, StrProperty outFilePath); // Offset: 0x103c522bc // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.SoundTools.CanWwiseAudioToWav
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CanWwiseAudioToWav(); // Offset: 0x103c52288 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Client.STExtraClientUtils
// Size: 0x28 // Inherited bytes: 0x28
struct USTExtraClientUtils : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.STExtraClientUtils.IsVolumetricLightmapRegistered
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	IntProperty IsVolumetricLightmapRegistered(struct UObject* WorldContextObject, struct FName& LevelPackageName); // Offset: 0x103c534cc // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Client.STExtraClientUtils.GetWidgetHandleAsyncWithCallBack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void GetWidgetHandleAsyncWithCallBack(struct UObject* WorldContext, StrProperty ModuleName, StrProperty WidgetKey, DelegateProperty Callback); // Offset: 0x103c53358 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Client.STExtraClientUtils.GetDynamicWidgetHandle
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	struct UUAEUserWidget* GetDynamicWidgetHandle(struct UObject* WorldContext, StrProperty ModuleName, StrProperty WidetKey); // Offset: 0x103c53220 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function Client.STExtraClientUtils.GetBPUtils
	// Flags: [Final|Native|Static|Public]
	struct USTExtraClientUIBPUtils* GetBPUtils(); // Offset: 0x103c531ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.STExtraClientUtils.EnsureVolumetricLightmapRegistered
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void EnsureVolumetricLightmapRegistered(struct UObject* WorldContextObject, struct FName& LevelPackageName); // Offset: 0x103c5312c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.STExtraClientUtils.AsyncLoadAssetInstWithCallback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty AsyncLoadAssetInstWithCallback(StrProperty InPath, DelegateProperty Callback); // Offset: 0x103c53040 // Return & Params: Num(3) Size(0x24)
};

// Object Name: Class Client.STExtraClientUIBPUtils
// Size: 0x150 // Inherited bytes: 0x28
struct USTExtraClientUIBPUtils : UObject {
	// Fields
	char pad_0x28[0xd8]; // Offset: 0x28 // Size: 0xd8
	MapProperty PendingAsyncAssetRequests; // Offset: 0x100 // Size: 0x50

	// Functions

	// Object Name: Function Client.STExtraClientUIBPUtils.OnAsyncAssetLoaded
	// Flags: [Final|Native|Public|HasDefaults]
	void OnAsyncAssetLoaded(struct FSoftObjectPath InSoftPath, IntProperty RequestIdx); // Offset: 0x103c53948 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Client.STExtraClientUIBPUtils.AsyncLoadAssetInstWithCallback
	// Flags: [Final|Native|Public]
	IntProperty AsyncLoadAssetInstWithCallback(StrProperty InPath, DelegateProperty Callback); // Offset: 0x103c5384c // Return & Params: Num(3) Size(0x24)
};

// Object Name: Class Client.TPerfPlat
// Size: 0x28 // Inherited bytes: 0x28
struct UTPerfPlat : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Client.TPerfPlat.SetQuality
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	void SetQuality(IntProperty Quality); // Offset: 0x103c53e28 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TPerfPlat.requestResourceGuarantee
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	void requestResourceGuarantee(IntProperty Condition, IntProperty LoadType, IntProperty applyType); // Offset: 0x103c53d40 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Client.TPerfPlat.PostGameStatusToTMFPIS
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	void PostGameStatusToTMFPIS(IntProperty Key, StrProperty Value); // Offset: 0x103c53c24 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.TPerfPlat.GetDeviceLevel
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	IntProperty GetDeviceLevel(); // Offset: 0x103c53bf0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.Translator
// Size: 0x138 // Inherited bytes: 0x28
struct UTranslator : UObject {
	// Fields
	StrProperty SubscriptionKey; // Offset: 0x28 // Size: 0x10
	StrProperty StoredAccessToken; // Offset: 0x38 // Size: 0x10
	DelegateProperty OnGetAccessTokenDelegate; // Offset: 0x48 // Size: 0x10
	DelegateProperty OnDetectDelegate; // Offset: 0x58 // Size: 0x10
	DelegateProperty OnTranslateDelegate; // Offset: 0x68 // Size: 0x10
	char pad_0x78[0x98]; // Offset: 0x78 // Size: 0x98
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0x110 // Size: 0x08
	char pad_0x118[0x20]; // Offset: 0x118 // Size: 0x20

	// Functions

	// Object Name: Function Client.Translator.TranslateV2
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TranslateV2(IntProperty Channel, IntProperty ID, StrProperty Text); // Offset: 0x103c54ea0 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.Translator.Translate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Translate(StrProperty URL, StrProperty Verb, MapProperty Headers, StrProperty Content); // Offset: 0x103c54ce0 // Return & Params: Num(4) Size(0x80)

	// Object Name: Function Client.Translator.PostMsg
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PostMsg(StrProperty URL, StrProperty Content); // Offset: 0x103c54bf4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.Translator.OnTranslateV2
	// Flags: [Final|Native|Private]
	void OnTranslateV2(bool Success, StrProperty Data); // Offset: 0x103c54b10 // Return & Params: Num(2) Size(0x18)

	// Object Name: DelegateFunction Client.Translator.OnTranslate__DelegateSignature
	// Flags: [Public|Delegate]
	void OnTranslate__DelegateSignature(bool IsSuccess, StrProperty LanguageFrom, StrProperty Translation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.Translator.OnTranslate
	// Flags: [Final|Native|Private]
	void OnTranslate(bool Success, StrProperty Data); // Offset: 0x103c54a2c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.Translator.OnGetAccessTokenV2
	// Flags: [Final|Native|Private]
	void OnGetAccessTokenV2(bool Success, StrProperty Data); // Offset: 0x103c54948 // Return & Params: Num(2) Size(0x18)

	// Object Name: DelegateFunction Client.Translator.OnGetAccessToken__DelegateSignature
	// Flags: [Public|Delegate]
	void OnGetAccessToken__DelegateSignature(bool IsSuccess, StrProperty Token); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.Translator.OnGetAccessToken
	// Flags: [Final|Native|Private]
	void OnGetAccessToken(bool Success, StrProperty Data); // Offset: 0x103c54864 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.Translator.OnDetectV2
	// Flags: [Final|Native|Private]
	void OnDetectV2(bool Success, StrProperty Data); // Offset: 0x103c54780 // Return & Params: Num(2) Size(0x18)

	// Object Name: DelegateFunction Client.Translator.OnDetect__DelegateSignature
	// Flags: [Public|Delegate]
	void OnDetect__DelegateSignature(bool IsSuccess, StrProperty From, StrProperty To); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.Translator.OnDetect
	// Flags: [Final|Native|Private]
	void OnDetect(bool Success, StrProperty Data); // Offset: 0x103c5469c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.Translator.HasTranslating
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasTranslating(); // Offset: 0x103c54668 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.Translator.GetAccessToken
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetAccessToken(bool bForceGet, StrProperty URL, StrProperty Verb, MapProperty Headers, StrProperty Content); // Offset: 0x103c5445c // Return & Params: Num(5) Size(0x88)

	// Object Name: Function Client.Translator.Detect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Detect(StrProperty URL, StrProperty Verb, MapProperty Headers, StrProperty Content); // Offset: 0x103c5429c // Return & Params: Num(4) Size(0x80)
};

// Object Name: Class Client.TssManager
// Size: 0x60 // Inherited bytes: 0x28
struct UTssManager : UObject {
	// Fields
	StrProperty TssHostInfo; // Offset: 0x28 // Size: 0x10
	StrProperty TssCDNHostInfo; // Offset: 0x38 // Size: 0x10
	StrProperty TssBuildInIpInfo; // Offset: 0x48 // Size: 0x10
	IntProperty TssLocal; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04

	// Functions

	// Object Name: Function Client.TssManager.SendSkdData_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty SendSkdData_LuaState(); // Offset: 0x103c5557c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TssManager.SendEigeninfoData_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty SendEigeninfoData_LuaState(); // Offset: 0x103c55564 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TssManager.SaveSendEigeninfoCode_LuaState
	// Flags: [Final|Native|Static|Public]
	uint32_t SaveSendEigeninfoCode_LuaState(); // Offset: 0x103c5554c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TssManager.OnRecvData_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty OnRecvData_LuaState(); // Offset: 0x103c55534 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TssManager.InvokeSDKIoctl
	// Flags: [Final|Native|Static|Public]
	uint32_t InvokeSDKIoctl(IntProperty Command, StrProperty InCmdData); // Offset: 0x103c55460 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Client.TssManager.GetUserTag4Lua_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetUserTag4Lua_LuaState(); // Offset: 0x103c55448 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TssManager.GetDeviceFeature_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty GetDeviceFeature_LuaState(); // Offset: 0x103c55430 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.TssManager.EigenArrayObfuscationVerify_LuaState
	// Flags: [Final|Native|Static|Public]
	IntProperty EigenArrayObfuscationVerify_LuaState(); // Offset: 0x103c55418 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Client.UAEClientGameMode
// Size: 0x580 // Inherited bytes: 0x580
struct AUAEClientGameMode : AGameMode {
};

// Object Name: Class Client.UAELobbyGameMode
// Size: 0x580 // Inherited bytes: 0x580
struct AUAELobbyGameMode : AUAEClientGameMode {
};

// Object Name: Class Client.UAELobbyPlayerController
// Size: 0x828 // Inherited bytes: 0x828
struct AUAELobbyPlayerController : APlayerController {
};

// Object Name: Class Client.UTRichTextBlock
// Size: 0xb28 // Inherited bytes: 0x100
struct UUTRichTextBlock : UWidget {
	// Fields
	char pad_0x100[0x8]; // Offset: 0x100 // Size: 0x08
	struct FScriptMulticastDelegate OnHyperlinkClicked; // Offset: 0x108 // Size: 0x10
	StrProperty ContentText; // Offset: 0x118 // Size: 0x10
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
	bool AutoCapitalizeText; // Offset: 0x138 // Size: 0x01
	char pad_0x139[0x7]; // Offset: 0x139 // Size: 0x07
	struct FSlateFontInfo Font; // Offset: 0x140 // Size: 0x58
	bool bSupportHyLink; // Offset: 0x198 // Size: 0x01
	bool bSupportImage; // Offset: 0x199 // Size: 0x01
	char pad_0x19A[0x6]; // Offset: 0x19a // Size: 0x06
	struct TArray<struct FSlateColor> ColorSwitchList; // Offset: 0x1a0 // Size: 0x10
	IntProperty ActiveColorIndex; // Offset: 0x1b0 // Size: 0x04
	struct FLinearColor TextColor; // Offset: 0x1b4 // Size: 0x10
	enum class ETextJustify Justification; // Offset: 0x1c4 // Size: 0x01
	enum class ETextVerticalJustify TextVerticalJustification; // Offset: 0x1c5 // Size: 0x01
	bool AutoWrapText; // Offset: 0x1c6 // Size: 0x01
	char pad_0x1C7[0x1]; // Offset: 0x1c7 // Size: 0x01
	struct FScrollBarStyle ScrollBarStyle; // Offset: 0x1c8 // Size: 0x680
	struct FMargin HScrollBarPadding; // Offset: 0x848 // Size: 0x10
	struct FMargin VScrollBarPadding; // Offset: 0x858 // Size: 0x10
	float WrapTextAt; // Offset: 0x868 // Size: 0x04
	struct FMargin Margin; // Offset: 0x86c // Size: 0x10
	float LineHeightPercentage; // Offset: 0x87c // Size: 0x04
	StrProperty HyperlinkDecoratorTag; // Offset: 0x880 // Size: 0x10
	StrProperty HyperlinkCallBackFunctionName; // Offset: 0x890 // Size: 0x10
	StrProperty HyperlinkCallBackTableName; // Offset: 0x8a0 // Size: 0x10
	char pad_0x8B0[0x270]; // Offset: 0x8b0 // Size: 0x270
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0xb20 // Size: 0x08

	// Functions

	// Object Name: Function Client.UTRichTextBlock.SetWrapTextAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWrapTextAt(float Val); // Offset: 0x103c56228 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.UTRichTextBlock.SetTextJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTextJustification(enum class ETextJustify InJustification); // Offset: 0x103c561ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.UTRichTextBlock.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetText(struct FText InText); // Offset: 0x103c560ec // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Client.UTRichTextBlock.SetGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGameFrontendHUD(struct UGameFrontendHUD* InHUD); // Offset: 0x103c56070 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.UTRichTextBlock.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFont(struct FSlateFontInfo InFontInfo); // Offset: 0x103c55f64 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Client.UTRichTextBlock.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetColorAndOpacity(struct FSlateColor& InColorAndOpacity); // Offset: 0x103c55ea0 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function Client.UTRichTextBlock.SetActiveColorIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActiveColorIndex(IntProperty InIndex); // Offset: 0x103c55e24 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction Client.UTRichTextBlock.OnHyperlinkClickedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnHyperlinkClickedEvent__DelegateSignature(struct FMetaDataHolder& MetaDataHolder); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Client.UTRichTextBlock.GetViewSizes
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FVector2D> GetViewSizes(); // Offset: 0x103c55dc0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.UTRichTextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x103c55d5c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Client.UTRichTextBlock.EstimateDesiredSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D EstimateDesiredSize(); // Offset: 0x103c55d28 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Client.AEVarButton
// Size: 0x550 // Inherited bytes: 0x118
struct UAEVarButton : UContentWidget {
	// Fields
	struct USlateWidgetStyleAsset* Style; // Offset: 0x118 // Size: 0x08
	struct FButtonStyle WidgetStyle; // Offset: 0x120 // Size: 0x338
	struct FLinearColor ColorAndOpacity; // Offset: 0x458 // Size: 0x10
	struct FLinearColor BackgroundColor; // Offset: 0x468 // Size: 0x10
	enum class EButtonClickMethod ClickMethod; // Offset: 0x478 // Size: 0x01
	enum class EButtonTouchMethod TouchMethod; // Offset: 0x479 // Size: 0x01
	bool IsFocusable; // Offset: 0x47a // Size: 0x01
	bool IsPassMouseEvent; // Offset: 0x47b // Size: 0x01
	char pad_0x47C[0x4]; // Offset: 0x47c // Size: 0x04
	StrProperty ButtonVar; // Offset: 0x480 // Size: 0x10
	struct FScriptMulticastDelegate OnButtonClicked; // Offset: 0x490 // Size: 0x10
	struct FScriptMulticastDelegate OnButtonPressed; // Offset: 0x4a0 // Size: 0x10
	struct FScriptMulticastDelegate OnButtonReleased; // Offset: 0x4b0 // Size: 0x10
	struct FScriptMulticastDelegate OnButtonHovered; // Offset: 0x4c0 // Size: 0x10
	struct FScriptMulticastDelegate OnButtonUnhovered; // Offset: 0x4d0 // Size: 0x10
	DelegateProperty OnMouseButtonDownEvent; // Offset: 0x4e0 // Size: 0x10
	char pad_0x4F0[0x10]; // Offset: 0x4f0 // Size: 0x10
	struct FScriptMulticastDelegate OnClicked; // Offset: 0x500 // Size: 0x10
	struct FScriptMulticastDelegate OnPressed; // Offset: 0x510 // Size: 0x10
	struct FScriptMulticastDelegate OnReleased; // Offset: 0x520 // Size: 0x10
	struct FScriptMulticastDelegate OnHovered; // Offset: 0x530 // Size: 0x10
	struct FScriptMulticastDelegate OnUnhovered; // Offset: 0x540 // Size: 0x10

	// Functions

	// Object Name: Function Client.AEVarButton.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Offset: 0x103c569c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.AEVarButton.SetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetStyle(struct FButtonStyle& InStyle); // Offset: 0x103c56910 // Return & Params: Num(1) Size(0x338)

	// Object Name: Function Client.AEVarButton.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Offset: 0x103c56894 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.AEVarButton.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Offset: 0x103c56818 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.AEVarButton.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Offset: 0x103c5679c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.AEVarButton.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPressed(); // Offset: 0x103c56768 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Client.ReuseFallC
// Size: 0xf20 // Inherited bytes: 0x260
struct UReuseFallC : UUserWidget {
	// Fields
	struct FScriptMulticastDelegate OnBeforeNewItem; // Offset: 0x260 // Size: 0x10
	struct FScriptMulticastDelegate OnAfterNewItem; // Offset: 0x270 // Size: 0x10
	struct FScriptMulticastDelegate OnRefreshItem; // Offset: 0x280 // Size: 0x10
	struct FScriptMulticastDelegate OnItemCreated; // Offset: 0x290 // Size: 0x10
	struct FScriptMulticastDelegate OnItemHide; // Offset: 0x2a0 // Size: 0x10
	struct FScriptMulticastDelegate OnTouchFinish; // Offset: 0x2b0 // Size: 0x10
	struct FScriptMulticastDelegate OnOverscrollState; // Offset: 0x2c0 // Size: 0x10
	struct FScrollBoxStyle ScrollBoxStyle; // Offset: 0x2d0 // Size: 0x2e8
	enum class EWidgetClipping ScrollBoxClipping; // Offset: 0x5b8 // Size: 0x01
	char pad_0x5B9[0x7]; // Offset: 0x5b9 // Size: 0x07
	struct FScrollBarStyle ScrollBarStyle; // Offset: 0x5c0 // Size: 0x680
	enum class ESlateVisibility ScrollBarVisibility; // Offset: 0xc40 // Size: 0x01
	char pad_0xC41[0x3]; // Offset: 0xc41 // Size: 0x03
	struct FVector2D ScrollbarThickness; // Offset: 0xc44 // Size: 0x08
	IntProperty ColumnNum; // Offset: 0xc4c // Size: 0x04
	IntProperty ItemHeight; // Offset: 0xc50 // Size: 0x04
	IntProperty ItemPaddingX; // Offset: 0xc54 // Size: 0x04
	IntProperty ItemPaddingY; // Offset: 0xc58 // Size: 0x04
	float OverscrollLength; // Offset: 0xc5c // Size: 0x04
	struct UUserWidget* ItemClass; // Offset: 0xc60 // Size: 0x08
	MapProperty OtherItemClass; // Offset: 0xc68 // Size: 0x50
	IntProperty PreviewCount; // Offset: 0xcb8 // Size: 0x04
	IntProperty ItemPoolMaxNum; // Offset: 0xcbc // Size: 0x04
	IntProperty TopSpaceReserved; // Offset: 0xcc0 // Size: 0x04
	IntProperty BottomSpaceReserved; // Offset: 0xcc4 // Size: 0x04
	float BottomMargin; // Offset: 0xcc8 // Size: 0x04
	float ViewSizeCmpThreshold; // Offset: 0xccc // Size: 0x04
	char pad_0xCD0[0x38]; // Offset: 0xcd0 // Size: 0x38
	struct UUserWidget* CurItemClass; // Offset: 0xd08 // Size: 0x08
	char pad_0xD10[0x210]; // Offset: 0xd10 // Size: 0x210

	// Functions

	// Object Name: Function Client.ReuseFallC.SoftReload
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SoftReload(IntProperty __ItemCount); // Offset: 0x103c5769c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.SetTopMargin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTopMargin(float Val); // Offset: 0x103c57620 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScrollOffset(float NewScrollOffset); // Offset: 0x103c575a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.SetItemSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetItemSize(IntProperty __Idx, float __Size); // Offset: 0x103c574ec // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.ReuseFallC.SetItemFullStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetItemFullStyle(IntProperty idx); // Offset: 0x103c57470 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.SetCurItemClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetCurItemClass(StrProperty StrName); // Offset: 0x103c573c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ReuseFallC.SetBottomMargin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBottomMargin(float Val); // Offset: 0x103c5734c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToStart(); // Offset: 0x103c57338 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseFallC.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToEnd(); // Offset: 0x103c57324 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseFallC.ResetCurItemClassToDefault
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetCurItemClassToDefault(); // Offset: 0x103c57310 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseFallC.Reload
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reload(IntProperty __ItemCount); // Offset: 0x103c57294 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.RefreshOne
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshOne(IntProperty __Idx); // Offset: 0x103c57218 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.Refresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Refresh(); // Offset: 0x103c57204 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Client.ReuseFallC.OnUpdateItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnUpdateItemDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction Client.ReuseFallC.OnTouchFinishDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnTouchFinishDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseFallC.OnTouchFinishCallback
	// Flags: [Final|Native|Protected]
	void OnTouchFinishCallback(); // Offset: 0x103c571f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Client.ReuseFallC.OnOverscrollStateDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnOverscrollStateDelegate__DelegateSignature(enum class EReuseFallOverscrollState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction Client.ReuseFallC.OnHideItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnHideItemDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction Client.ReuseFallC.OnCreateItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnCreateItemDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction Client.ReuseFallC.OnBeforeNewItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnBeforeNewItemDelegate__DelegateSignature(IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction Client.ReuseFallC.OnAfterNewItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnAfterNewItemDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Client.ReuseFallC.JumpByIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JumpByIdx(IntProperty __Idx, bool bImmedia); // Offset: 0x103c57134 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.ReuseFallC.GetViewSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetViewSize(); // Offset: 0x103c57118 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ReuseFallC.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetScrollOffset(); // Offset: 0x103c570e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.GetScrollBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UScrollBox* GetScrollBox(); // Offset: 0x103c570b0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ReuseFallC.GetOverscrollState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EReuseFallOverscrollState GetOverscrollState(); // Offset: 0x103c57094 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ReuseFallC.GetContentSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetContentSize(); // Offset: 0x103c57078 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ReuseFallC.ClearItemSizeAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearItemSizeAll(); // Offset: 0x103c57064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseFallC.ClearItemSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearItemSize(IntProperty idx); // Offset: 0x103c56fe8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseFallC.ClearItemFullStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearItemFullStyle(); // Offset: 0x103c56fd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseFallC.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Clear(); // Offset: 0x103c56fc0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.ReuseListC
// Size: 0xd30 // Inherited bytes: 0x260
struct UReuseListC : UUserWidget {
	// Fields
	struct FScriptMulticastDelegate OnUpdateItemParam; // Offset: 0x260 // Size: 0x10
	struct FScriptMulticastDelegate OnUpdateItem; // Offset: 0x270 // Size: 0x10
	struct FScriptMulticastDelegate OnScrollItem; // Offset: 0x280 // Size: 0x10
	struct FScriptMulticastDelegate OnCreateItem; // Offset: 0x290 // Size: 0x10
	struct FScrollBoxStyle ScrollBoxStyle; // Offset: 0x2a0 // Size: 0x2e8
	enum class EWidgetClipping ScrollBoxClipping; // Offset: 0x588 // Size: 0x01
	enum class ESlateVisibility ScrollBoxVisibility; // Offset: 0x589 // Size: 0x01
	char pad_0x58A[0x6]; // Offset: 0x58a // Size: 0x06
	struct FScrollBarStyle ScrollBarStyle; // Offset: 0x590 // Size: 0x680
	enum class ESlateVisibility ScrollBarVisibility; // Offset: 0xc10 // Size: 0x01
	char pad_0xC11[0x3]; // Offset: 0xc11 // Size: 0x03
	struct FVector2D ScrollbarThickness; // Offset: 0xc14 // Size: 0x08
	IntProperty ItemWidth; // Offset: 0xc1c // Size: 0x04
	IntProperty ItemHeight; // Offset: 0xc20 // Size: 0x04
	IntProperty PaddingX; // Offset: 0xc24 // Size: 0x04
	IntProperty PaddingY; // Offset: 0xc28 // Size: 0x04
	IntProperty TitleSize; // Offset: 0xc2c // Size: 0x04
	IntProperty TitlePadding; // Offset: 0xc30 // Size: 0x04
	bool AutoTitleSize; // Offset: 0xc34 // Size: 0x01
	enum class EReuseListStyle Style; // Offset: 0xc35 // Size: 0x01
	char pad_0xC36[0x2]; // Offset: 0xc36 // Size: 0x02
	struct UUserWidget* ItemClass; // Offset: 0xc38 // Size: 0x08
	IntProperty PreviewCount; // Offset: 0xc40 // Size: 0x04
	enum class EReuseListNotFullAlignStyle NotFullAlignStyle; // Offset: 0xc44 // Size: 0x01
	bool NotFullScrollBoxHitTestInvisible; // Offset: 0xc45 // Size: 0x01
	bool UpdateForceLayoutPrepass; // Offset: 0xc46 // Size: 0x01
	char pad_0xC47[0x1]; // Offset: 0xc47 // Size: 0x01
	IntProperty ItemCacheNum; // Offset: 0xc48 // Size: 0x04
	IntProperty DelayUpdateTimeLimitMS; // Offset: 0xc4c // Size: 0x04
	char pad_0xC50[0xe0]; // Offset: 0xc50 // Size: 0xe0

	// Functions

	// Object Name: Function Client.ReuseListC.SetTitleSlotAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTitleSlotAutoSize(bool as); // Offset: 0x103c5b070 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ReuseListC.SetTitleSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTitleSize(IntProperty sz); // Offset: 0x103c5aff4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScrollOffset(float NewScrollOffset); // Offset: 0x103c5af78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToStart(); // Offset: 0x103c5af64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseListC.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToEnd(); // Offset: 0x103c5af50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReuseListC.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reset(struct UUserWidget* __ItemClass, enum class EReuseListStyle __Style, IntProperty __ItemWidth, IntProperty __ItemHeight, IntProperty __PaddingX, IntProperty __PaddingY); // Offset: 0x103c5adb0 // Return & Params: Num(6) Size(0x1c)

	// Object Name: Function Client.ReuseListC.Reload
	// Flags: [Native|Public|BlueprintCallable]
	void Reload(IntProperty __ItemCount); // Offset: 0x103c5ad2c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.RefreshParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshParam(StrProperty _Param); // Offset: 0x103c5ac94 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ReuseListC.RefreshOneParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshOneParam(IntProperty __Idx, StrProperty _Param); // Offset: 0x103c5abc0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Client.ReuseListC.RefreshOne
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshOne(IntProperty __Idx); // Offset: 0x103c5ab44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.Refresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Refresh(); // Offset: 0x103c5ab30 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Client.ReuseListC.OnUpdateItemParamDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnUpdateItemParamDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx, StrProperty Param); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: DelegateFunction Client.ReuseListC.OnUpdateItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnUpdateItemDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction Client.ReuseListC.OnScrollItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnScrollItemDelegate__DelegateSignature(IntProperty BeginIdx, IntProperty EndIdx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: DelegateFunction Client.ReuseListC.OnCreateItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnCreateItemDelegate__DelegateSignature(struct UUserWidget* Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ReuseListC.JumpByIdxStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JumpByIdxStyle(IntProperty __Idx, enum class EReuseListJumpStyle __Style); // Offset: 0x103c5aa78 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.ReuseListC.JumpByIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JumpByIdx(IntProperty __Idx); // Offset: 0x103c5a9fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetViewSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetViewSize(); // Offset: 0x103c5a9e0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ReuseListC.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetScrollOffset(); // Offset: 0x103c5a9ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetPaddingY
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPaddingY(); // Offset: 0x103c5a990 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetPaddingX
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPaddingX(); // Offset: 0x103c5a974 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetItemWidthAndPaddingX
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetItemWidthAndPaddingX(); // Offset: 0x103c5a950 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetItemWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetItemWidth(); // Offset: 0x103c5a934 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetItemHeightAndPaddingY
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetItemHeightAndPaddingY(); // Offset: 0x103c5a910 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetItemHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetItemHeight(); // Offset: 0x103c5a8f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReuseListC.GetContentSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetContentSize(); // Offset: 0x103c5a8d8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.ReuseListC.GetAllWidgetItems
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GetAllWidgetItems(struct TArray<struct UUserWidget*>& ResultItemList); // Offset: 0x103c5a830 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.ReuseListC.FindItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUserWidget* FindItem(IntProperty idx); // Offset: 0x103c5a7a4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Client.ReuseListC.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Clear(); // Offset: 0x103c5a784 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.ReusePageC
// Size: 0x398 // Inherited bytes: 0x260
struct UReusePageC : UUserWidget {
	// Fields
	struct FScriptMulticastDelegate OnUpdateItem; // Offset: 0x260 // Size: 0x10
	struct FScriptMulticastDelegate OnPageChanged; // Offset: 0x270 // Size: 0x10
	struct FScriptMulticastDelegate OnCreateItem; // Offset: 0x280 // Size: 0x10
	struct FScriptMulticastDelegate OnBeginDrag; // Offset: 0x290 // Size: 0x10
	struct FScriptMulticastDelegate OnEndDrag; // Offset: 0x2a0 // Size: 0x10
	struct FScriptMulticastDelegate OnEndScroll; // Offset: 0x2b0 // Size: 0x10
	struct UUserWidget* ItemClass; // Offset: 0x2c0 // Size: 0x08
	char IsLoopPage : 1; // Offset: 0x2c8 // Size: 0x01
	char IsVertical : 1; // Offset: 0x2c8 // Size: 0x01
	char CanDrag : 1; // Offset: 0x2c8 // Size: 0x01
	char pad_0x2C8_3 : 5; // Offset: 0x2c8 // Size: 0x01
	char pad_0x2C9[0x3]; // Offset: 0x2c9 // Size: 0x03
	IntProperty CanDragLimit; // Offset: 0x2cc // Size: 0x04
	float AutoPlayRate; // Offset: 0x2d0 // Size: 0x04
	IntProperty ShowPageNum; // Offset: 0x2d4 // Size: 0x04
	IntProperty DragPageNum; // Offset: 0x2d8 // Size: 0x04
	float DChgPageParam; // Offset: 0x2dc // Size: 0x04
	float ScrollInertial; // Offset: 0x2e0 // Size: 0x04
	float ScrollRate; // Offset: 0x2e4 // Size: 0x04
	char pad_0x2E8[0xb0]; // Offset: 0x2e8 // Size: 0xb0

	// Functions

	// Object Name: Function Client.ReusePageC.SetAutoPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoPlayRate(float Rate); // Offset: 0x103c5bdc0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.SelectPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SelectPage(IntProperty __Idx); // Offset: 0x103c5bd44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.Reload
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reload(IntProperty __Count); // Offset: 0x103c5bcc8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Play(bool bPlay); // Offset: 0x103c5bc44 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction Client.ReusePageC.OnUpdateItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnUpdateItemDelegate__DelegateSignature(struct UUserWidget* Widget, IntProperty idx); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction Client.ReusePageC.OnPageChangedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnPageChangedDelegate__DelegateSignature(IntProperty PageIdx); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction Client.ReusePageC.OnEndScrollDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnEndScrollDelegate__DelegateSignature(IntProperty PageIdx); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction Client.ReusePageC.OnEndDragDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnEndDragDelegate__DelegateSignature(IntProperty PageIdx); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction Client.ReusePageC.OnCreateItemDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnCreateItemDelegate__DelegateSignature(struct UUserWidget* Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction Client.ReusePageC.OnBeginDragDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnBeginDragDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReusePageC.MovePrePage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MovePrePage(); // Offset: 0x103c5bc30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReusePageC.MoveNextPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MoveNextPage(); // Offset: 0x103c5bc1c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.ReusePageC.IsDraging
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDraging(); // Offset: 0x103c5bbfc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.ReusePageC.GetPageCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPageCount(); // Offset: 0x103c5bbe0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.GetPage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPage(); // Offset: 0x103c5bbc4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.GetOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetOffset(); // Offset: 0x103c5bba8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.GetAutoPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetAutoPlayRate(); // Offset: 0x103c5bb8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.ReusePageC.GetAllItems
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GetAllItems(struct TArray<struct UUserWidget*>& ResultItemList, bool OnlyVisible); // Offset: 0x103c5ba90 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Client.ReusePageC.ClearCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearCache(); // Offset: 0x103c5ba7c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Client.UDPPingCollector
// Size: 0x150 // Inherited bytes: 0x28
struct UUDPPingCollector : UObject {
	// Fields
	char pad_0x28[0x38]; // Offset: 0x28 // Size: 0x38
	MapProperty mUDPPingInfoMap; // Offset: 0x60 // Size: 0x50
	char pad_0xB0[0x30]; // Offset: 0xb0 // Size: 0x30
	struct FScriptMulticastDelegate UDPPingShadowResultToLuaDelegate; // Offset: 0xe0 // Size: 0x10
	char pad_0xF0[0x60]; // Offset: 0xf0 // Size: 0x60

	// Functions

	// Object Name: Function Client.UDPPingCollector.TickUDPPing
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TickUDPPing(float DeltaTime); // Offset: 0x103c5cd20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.UDPPingCollector.setUDPPingServerAddress
	// Flags: [Final|Native|Public|BlueprintCallable]
	void setUDPPingServerAddress(StrProperty ServerIP, StrProperty ServerPort, IntProperty ZoneID, IntProperty WaterMarkType); // Offset: 0x103c5cb28 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Client.UDPPingCollector.SetPingSystemControlFlag
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPingSystemControlFlag(IntProperty TakeEffectModule, IntProperty ThreadReportTlog, IntProperty EpollReportTlog); // Offset: 0x103c5ca38 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Client.UDPPingCollector.PingServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PingServer(StrProperty address, float Timeout, IntProperty WaterMarkType); // Offset: 0x103c5c8d4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.UDPPingCollector.OnPostSwitchGameStatus
	// Flags: [Final|Native|Public]
	void OnPostSwitchGameStatus(StrProperty MapName); // Offset: 0x103c5c83c // Return & Params: Num(1) Size(0x10)

	// Object Name: DelegateFunction Client.UDPPingCollector.OnPingServerResultDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnPingServerResultDelegate__DelegateSignature(StrProperty address, IntProperty IsSuccess, float Time, IntProperty PingSystemType); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Client.UDPPingCollector.IsChooingZoneAccess
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsChooingZoneAccess(); // Offset: 0x103c5c808 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.UDPPingCollector.isAllZoneHasPingValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool isAllZoneHasPingValue(); // Offset: 0x103c5c7d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.UDPPingCollector.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(float MinPingintervalTime, float pingintervalTime, float pingTimeoutSecond, float normalDelayMilliSecond, float maxAutoChooseZoneDelayMilliSecond); // Offset: 0x103c5c670 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Client.UDPPingCollector.GetZoneServerDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetZoneServerDelay(StrProperty ServerAddress); // Offset: 0x103c5c57c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.UDPPingCollector.GetMinDealyAddress
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetMinDealyAddress(); // Offset: 0x103c5c548 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.UDPPingCollector.ChoosingZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChoosingZone(IntProperty ZoneID, StrProperty AddrIP); // Offset: 0x103c5c424 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Client.ViberateEngine
// Size: 0x28 // Inherited bytes: 0x28
struct UViberateEngine : UObject {
};

// Object Name: Class Client.VibrateSystemManager
// Size: 0x498 // Inherited bytes: 0x30
struct UVibrateSystemManager : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
	StrProperty ClassPath; // Offset: 0x40 // Size: 0x10
	StrProperty VibrateAssetTablePath; // Offset: 0x50 // Size: 0x10
	IntProperty MaxAmplitude; // Offset: 0x60 // Size: 0x04
	IntProperty GroundSpesificMatVibrationMinGrear; // Offset: 0x64 // Size: 0x04
	float VehicleBreakingMinSpeedThreshold; // Offset: 0x68 // Size: 0x04
	float VehicleGearMinSpeedThreshold; // Offset: 0x6c // Size: 0x04
	struct TArray<IntProperty> TriggerVehicleVibrateGroundPhysicMatList; // Offset: 0x70 // Size: 0x10
	float TriggerVehicleVibrateMinSlip; // Offset: 0x80 // Size: 0x04
	float TriggerVehicleVibrateMinSuspensionRaisePercent; // Offset: 0x84 // Size: 0x04
	float VehicleRaiseSuspensionVibrateInerval; // Offset: 0x88 // Size: 0x04
	IntProperty InitAssetProccessNumFrames; // Offset: 0x8c // Size: 0x04
	StrProperty LoopTime; // Offset: 0x90 // Size: 0x10
	char pad_0xA0[0x50]; // Offset: 0xa0 // Size: 0x50
	MapProperty LoadedVibrateAssetIDAndEventTypeMap; // Offset: 0xf0 // Size: 0x50
	MapProperty VibrateStrengthLevelModifireMap; // Offset: 0x140 // Size: 0x50
	MapProperty VibrateEventMinIntervalMap; // Offset: 0x190 // Size: 0x50
	struct TArray<enum class EVibrateTriggerEventType> CharacterVibrateEventList; // Offset: 0x1e0 // Size: 0x10
	struct TArray<enum class EVibrateTriggerEventType> WeaponVibrateEventList; // Offset: 0x1f0 // Size: 0x10
	struct TArray<enum class EVibrateTriggerEventType> VehicleVibrateEventList; // Offset: 0x200 // Size: 0x10
	struct TArray<enum class EVibrateTriggerEventType> SoundUIVibrateEventList; // Offset: 0x210 // Size: 0x10
	struct TArray<enum class EVibrateTriggerEventType> CharacterBeHitVibrateEventList; // Offset: 0x220 // Size: 0x10
	struct TArray<enum class EVibrateTriggerEventType> VehicleEngineVibrateEventList; // Offset: 0x230 // Size: 0x10
	struct TArray<enum class EVibrateTriggerEventType> VehicleBeHitVibrateEventList; // Offset: 0x240 // Size: 0x10
	bool bEntireVibrationSwitch; // Offset: 0x250 // Size: 0x01
	bool bCharacterVibrationSwitch; // Offset: 0x251 // Size: 0x01
	bool bWeaponVibrationSwitch; // Offset: 0x252 // Size: 0x01
	bool bVehicleVibrationSwitch; // Offset: 0x253 // Size: 0x01
	bool bSoundUIVibrationSwitch; // Offset: 0x254 // Size: 0x01
	char pad_0x255[0x3]; // Offset: 0x255 // Size: 0x03
	IntProperty CharacterVibrationLevel; // Offset: 0x258 // Size: 0x04
	IntProperty WeaponVibrationLevel; // Offset: 0x25c // Size: 0x04
	IntProperty VehicleVibrationLevel; // Offset: 0x260 // Size: 0x04
	IntProperty SoundUIVibrationLevel; // Offset: 0x264 // Size: 0x04
	IntProperty EntireVibrationLevel; // Offset: 0x268 // Size: 0x04
	bool bCharacterVibrate; // Offset: 0x26c // Size: 0x01
	bool bWeaponVibrate; // Offset: 0x26d // Size: 0x01
	bool bVehicleVibrate; // Offset: 0x26e // Size: 0x01
	bool bSoundUIVibrate; // Offset: 0x26f // Size: 0x01
	bool bCharacterBeHitVibrate; // Offset: 0x270 // Size: 0x01
	bool bCharacterClimbVibrate; // Offset: 0x271 // Size: 0x01
	bool bCharacterFallVibrate; // Offset: 0x272 // Size: 0x01
	bool bCharacterSwimVibrate; // Offset: 0x273 // Size: 0x01
	bool bAutoWeaponVibrate; // Offset: 0x274 // Size: 0x01
	bool bSemiAutoWeaponVibrate; // Offset: 0x275 // Size: 0x01
	bool bBoltWeaponVibrate; // Offset: 0x276 // Size: 0x01
	bool bOtherWeaponVibrate; // Offset: 0x277 // Size: 0x01
	bool bVehicleEngineVibrate; // Offset: 0x278 // Size: 0x01
	bool bVehicleBeHitVibrate; // Offset: 0x279 // Size: 0x01
	bool bVehicleCrashVibrate; // Offset: 0x27a // Size: 0x01
	bool bFootstepSoundUIVibrate; // Offset: 0x27b // Size: 0x01
	bool bFireShotSoundUIVibrate; // Offset: 0x27c // Size: 0x01
	bool bGlassBrokenSoundUIVibrate; // Offset: 0x27d // Size: 0x01
	bool bVehicleSoundUIVibrate; // Offset: 0x27e // Size: 0x01
	char pad_0x27F[0x1]; // Offset: 0x27f // Size: 0x01
	struct FTimerHandle StopVibrateHandle; // Offset: 0x280 // Size: 0x08
	IntProperty CurPlayingVibrateAssetIndex; // Offset: 0x288 // Size: 0x04
	IntProperty CurLoopPlayingVibrateAssetIndex; // Offset: 0x28c // Size: 0x04
	IntProperty DeviceSupportVibrateType; // Offset: 0x290 // Size: 0x04
	bool bInGameVibration; // Offset: 0x294 // Size: 0x01
	bool bIsHandBreaking; // Offset: 0x295 // Size: 0x01
	char pad_0x296[0x52]; // Offset: 0x296 // Size: 0x52
	bool bHasLastVehicle; // Offset: 0x2e8 // Size: 0x01
	char pad_0x2E9[0x3]; // Offset: 0x2e9 // Size: 0x03
	IntProperty LastVehicleGear; // Offset: 0x2ec // Size: 0x04
	bool bIsLastVehicleBreaking; // Offset: 0x2f0 // Size: 0x01
	bool bIsLastVehicleSlipping; // Offset: 0x2f1 // Size: 0x01
	char pad_0x2F2[0x2]; // Offset: 0x2f2 // Size: 0x02
	IntProperty LastVehicleGroundContactMaterialSurfaceType; // Offset: 0x2f4 // Size: 0x04
	MapProperty LastVehicleGearVibrateCache; // Offset: 0x2f8 // Size: 0x50
	MapProperty LastVibrateEventTimeMap; // Offset: 0x348 // Size: 0x50
	float CurVehicleRaiseSuspensionVibrateCD; // Offset: 0x398 // Size: 0x04
	char pad_0x39C[0x7c]; // Offset: 0x39c // Size: 0x7c
	struct TArray<struct FVibrateEntity> CacheVibrateEntityList; // Offset: 0x418 // Size: 0x10
	MapProperty VibratePath2Json; // Offset: 0x428 // Size: 0x50
	char pad_0x478[0x20]; // Offset: 0x478 // Size: 0x20

	// Functions

	// Object Name: Function Client.VibrateSystemManager.StopVibrate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopVibrate(); // Offset: 0x103c5f224 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.SetVibrationLoopTime
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void SetVibrationLoopTime(StrProperty InLoopTime); // Offset: 0x103c5f184 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VibrateSystemManager.PostVibrateTriggerActionDirectly
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void PostVibrateTriggerActionDirectly(IntProperty SpesifyID, IntProperty Amplitude); // Offset: 0x103c5f0c8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VibrateSystemManager.PostVibrateTriggerAction
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PostVibrateTriggerAction(struct FVibrateTriggerAction& Action, bool bCheckGate, bool bCheckInterval, IntProperty SpesifyID); // Offset: 0x103c5ef1c // Return & Params: Num(4) Size(0x40)

	// Object Name: Function Client.VibrateSystemManager.PlayVibrateEntity
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void PlayVibrateEntity(struct FVibrateEntity& Entity); // Offset: 0x103c5ee54 // Return & Params: Num(1) Size(0x48)

	// Object Name: Function Client.VibrateSystemManager.ModifyWeaponVibrationSwitch
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyWeaponVibrationSwitch(bool Val); // Offset: 0x103c5edc8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyWeaponVibrationLevel
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyWeaponVibrationLevel(IntProperty InVal); // Offset: 0x103c5ed44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VibrateSystemManager.ModifyVehicleVibrationSwitch
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyVehicleVibrationSwitch(bool Val); // Offset: 0x103c5ecb8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyVehicleVibrationLevel
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyVehicleVibrationLevel(IntProperty InVal); // Offset: 0x103c5ec34 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VibrateSystemManager.ModifyVehicleSoundUIVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyVehicleSoundUIVibrateSetting(bool Val); // Offset: 0x103c5eba8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyVehicleEngineVibrationSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyVehicleEngineVibrationSetting(bool Val); // Offset: 0x103c5eb1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyVehicleCrashVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyVehicleCrashVibrateSetting(bool Val); // Offset: 0x103c5ea90 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyVehicleBeHitVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyVehicleBeHitVibrateSetting(bool Val); // Offset: 0x103c5ea04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifySoundUIVibrationSwitch
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifySoundUIVibrationSwitch(bool Val); // Offset: 0x103c5e978 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifySoundUIVibrationLevel
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifySoundUIVibrationLevel(IntProperty InVal); // Offset: 0x103c5e8f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VibrateSystemManager.ModifySemiAutoWeaponVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifySemiAutoWeaponVibrateSetting(bool Val); // Offset: 0x103c5e868 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyOtherWeaponVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyOtherWeaponVibrateSetting(bool Val); // Offset: 0x103c5e7dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyGlassBrokenSoundUIVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyGlassBrokenSoundUIVibrateSetting(bool Val); // Offset: 0x103c5e750 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyFootstepSoundUIVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyFootstepSoundUIVibrateSetting(bool Val); // Offset: 0x103c5e6c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyFireShotSoundUIVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyFireShotSoundUIVibrateSetting(bool Val); // Offset: 0x103c5e638 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyEntireVibrationSwitch
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyEntireVibrationSwitch(bool Val); // Offset: 0x103c5e5ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyEntireVibrationLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ModifyEntireVibrationLevel(IntProperty InValue); // Offset: 0x103c5e530 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VibrateSystemManager.ModifyCharacterVibrationSwitch
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyCharacterVibrationSwitch(bool Val); // Offset: 0x103c5e4a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyCharacterVibrationLevel
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyCharacterVibrationLevel(IntProperty InVal); // Offset: 0x103c5e420 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VibrateSystemManager.ModifyCharacterSwimVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyCharacterSwimVibrateSetting(bool Val); // Offset: 0x103c5e394 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyCharacterFallVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyCharacterFallVibrateSetting(bool Val); // Offset: 0x103c5e308 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyCharacterClimbVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyCharacterClimbVibrateSetting(bool Val); // Offset: 0x103c5e27c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyCharacterBeHitVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyCharacterBeHitVibrateSetting(bool Val); // Offset: 0x103c5e1f0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyBoltWeaponVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyBoltWeaponVibrateSetting(bool Val); // Offset: 0x103c5e164 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.ModifyAutoWeaponVibrateSetting
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void ModifyAutoWeaponVibrateSetting(bool Val); // Offset: 0x103c5e0d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.LoadUserSettingData
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void LoadUserSettingData(IntProperty inCharacterVibrationLevel, IntProperty inWeaponVibrationLevel, IntProperty inVehicleVibrationLevel, IntProperty inSoundUIVibrationLevel, bool binCharacterBeHitVibrate, bool binCharacterClimbVibrate, bool binCharacterFallVibrate, bool binCharacterSwimVibrate, bool binVehicleEngineVibrate, bool binVehicleBeHitVibrate, bool binVehicleCrashVibrate, bool binFootstepSoundUIVibrate, bool binFireShotSoundUIVibrate, bool binGlassBrokenSoundUIVibrate, bool binVehicleSoundUIVibrate, IntProperty inEntireVibrationLevel, bool binAutoWeaponVibrate, bool binSemiAutoWeaponVibrate, bool binBoltWeaponVibrate, bool binOtherWeaponVibrate); // Offset: 0x103c5dafc // Return & Params: Num(20) Size(0x24)

	// Object Name: Function Client.VibrateSystemManager.InvalidateVibrateEntityByEventType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InvalidateVibrateEntityByEventType(enum class EVibrateTriggerEventType EventType); // Offset: 0x103c5da80 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VibrateSystemManager.InitUserSetting
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void InitUserSetting(); // Offset: 0x103c5da64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.InitSystem
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void InitSystem(); // Offset: 0x103c5da48 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.HandleApplicationWillTerminate
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void HandleApplicationWillTerminate(); // Offset: 0x103c5da2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.HandleApplicationWillEnterBackground
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void HandleApplicationWillEnterBackground(); // Offset: 0x103c5da10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.HandleApplicationWillDeactivate
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void HandleApplicationWillDeactivate(); // Offset: 0x103c5d9f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.HandleApplicationHasReactivated
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void HandleApplicationHasReactivated(); // Offset: 0x103c5d9d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.HandleApplicationHasEnteredForeground
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void HandleApplicationHasEnteredForeground(); // Offset: 0x103c5d9bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UVibrateSystemManager* GetInstance(struct UObject* WorldContext, bool bAutoCreate); // Offset: 0x103c5d8fc // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VibrateSystemManager.GetEntireVibrationLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetEntireVibrationLevel(); // Offset: 0x103c5d8c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VibrateSystemManager.GetCurrentPlayingVibrationDebugInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetCurrentPlayingVibrationDebugInfo(); // Offset: 0x103c5d864 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VibrateSystemManager.GetAmplitudeByAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetAmplitudeByAlpha(float Alpha); // Offset: 0x103c5d7d0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VibrateSystemManager.ClearVibratePath2Json
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void ClearVibratePath2Json(); // Offset: 0x103c5d7bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.ClearAllVibration
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void ClearAllVibration(); // Offset: 0x103c5d7a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VibrateSystemManager.CheckShootWeaponTypeVibrateGate
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool CheckShootWeaponTypeVibrateGate(struct ASTExtraWeapon* Weapon); // Offset: 0x103c5d70c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.VibrateSystemManager.CheckAndCopyFilesToSavedDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CheckAndCopyFilesToSavedDir(struct UVibrateSystemManager* Mgr); // Offset: 0x103c5d698 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.VibrateSystemManager.ActiveInGameVibration
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ActiveInGameVibration(bool Inactive); // Offset: 0x103c5d614 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Client.VoiceSDKInterface
// Size: 0x590 // Inherited bytes: 0x28
struct UVoiceSDKInterface : UObject {
	// Fields
	char pad_0x28[0x1c]; // Offset: 0x28 // Size: 0x1c
	IntProperty lbsRoomMemberID; // Offset: 0x44 // Size: 0x04
	char pad_0x48[0x18]; // Offset: 0x48 // Size: 0x18
	DelegateProperty OnSTTReportCallback; // Offset: 0x60 // Size: 0x10
	DelegateProperty OnRSTSCallback; // Offset: 0x70 // Size: 0x10
	DelegateProperty OnRSTSSpeechToTextCallback; // Offset: 0x80 // Size: 0x10
	DelegateProperty OnRSTSSubtitleCallback; // Offset: 0x90 // Size: 0x10
	DelegateProperty OnRSTSSubtitleASRStartCallback; // Offset: 0xa0 // Size: 0x10
	DelegateProperty OnSessionForAIInfoCallback; // Offset: 0xb0 // Size: 0x10
	DelegateProperty OnEnableMagicVoiceCallback; // Offset: 0xc0 // Size: 0x10
	DelegateProperty OnEnableRecvMagicVoiceCallback; // Offset: 0xd0 // Size: 0x10
	DelegateProperty OnSpeechFileTranslateCallback; // Offset: 0xe0 // Size: 0x10
	DelegateProperty OnSpeechTranslateCallback; // Offset: 0xf0 // Size: 0x10
	DelegateProperty OnSpeechStreamTranslateCallback; // Offset: 0x100 // Size: 0x10
	char pad_0x110[0x10]; // Offset: 0x110 // Size: 0x10
	StrProperty ServerInfo; // Offset: 0x120 // Size: 0x10
	uint32_t openVoiceSDKLog; // Offset: 0x130 // Size: 0x04
	uint32_t MicVolumeMUFactor; // Offset: 0x134 // Size: 0x04
	uint32_t SpeekerVolumeMUFactor; // Offset: 0x138 // Size: 0x04
	IntProperty RoomOperationTimeout; // Offset: 0x13c // Size: 0x04
	struct UGameFrontendHUD* GameFrontendHUD; // Offset: 0x140 // Size: 0x08
	char pad_0x148[0x70]; // Offset: 0x148 // Size: 0x70
	DelegateProperty OpenMicFail; // Offset: 0x1b8 // Size: 0x10
	DelegateProperty OpenMicSuccess; // Offset: 0x1c8 // Size: 0x10
	DelegateProperty CloseMicFail; // Offset: 0x1d8 // Size: 0x10
	DelegateProperty BeforeOperation; // Offset: 0x1e8 // Size: 0x10
	DelegateProperty CloseMicSuccess; // Offset: 0x1f8 // Size: 0x10
	DelegateProperty OpenSpeakerFail; // Offset: 0x208 // Size: 0x10
	DelegateProperty OpenSpeakerSuccess; // Offset: 0x218 // Size: 0x10
	DelegateProperty CloseSpeakerFail; // Offset: 0x228 // Size: 0x10
	DelegateProperty CloseSpeakerSuccess; // Offset: 0x238 // Size: 0x10
	DelegateProperty JoinRoomFail; // Offset: 0x248 // Size: 0x10
	DelegateProperty JoinRoomNotify; // Offset: 0x258 // Size: 0x10
	DelegateProperty QuitRoomNotify; // Offset: 0x268 // Size: 0x10
	DelegateProperty JoinLbsRoomNotify; // Offset: 0x278 // Size: 0x10
	DelegateProperty QuitLbsRoomNotify; // Offset: 0x288 // Size: 0x10
	DelegateProperty JoinCommonRoomNotify; // Offset: 0x298 // Size: 0x10
	DelegateProperty QuitCommonRoomNotify; // Offset: 0x2a8 // Size: 0x10
	DelegateProperty RoomStatusUpdatedNotify; // Offset: 0x2b8 // Size: 0x10
	DelegateProperty SetAppInfoSuccess; // Offset: 0x2c8 // Size: 0x10
	DelegateProperty SetAppInfoFail; // Offset: 0x2d8 // Size: 0x10
	DelegateProperty GetReconnectInfo; // Offset: 0x2e8 // Size: 0x10
	DelegateProperty ImSpeakingNotify; // Offset: 0x2f8 // Size: 0x10
	DelegateProperty TestMicFail; // Offset: 0x308 // Size: 0x10
	DelegateProperty TestMicSuccess; // Offset: 0x318 // Size: 0x10
	DelegateProperty QuitRoomFail; // Offset: 0x328 // Size: 0x10
	DelegateProperty DownLoadFileNotify; // Offset: 0x338 // Size: 0x10
	DelegateProperty UploadFileNotify; // Offset: 0x348 // Size: 0x10
	DelegateProperty OnPlayRecordedFileNotify; // Offset: 0x358 // Size: 0x10
	DelegateProperty KwsNotify; // Offset: 0x368 // Size: 0x10
	DelegateProperty ApplyMessageKeyNotify; // Offset: 0x378 // Size: 0x10
	DelegateProperty MemberIsSpeakingNotify; // Offset: 0x388 // Size: 0x10
	DelegateProperty LbsMemberIsSpeakingNotify; // Offset: 0x398 // Size: 0x10
	DelegateProperty CommonMemberIsSpeakingNotify; // Offset: 0x3a8 // Size: 0x10
	DelegateProperty OnMuteSwitchResult; // Offset: 0x3b8 // Size: 0x10
	DelegateProperty OnWakeUpNotify; // Offset: 0x3c8 // Size: 0x10
	DelegateProperty OnMicOptMuteResultNotify; // Offset: 0x3d8 // Size: 0x10
	DelegateProperty ReportVoiceTimeToServer; // Offset: 0x3e8 // Size: 0x10
	DelegateProperty RecordSuccess; // Offset: 0x3f8 // Size: 0x10
	DelegateProperty RecordFail; // Offset: 0x408 // Size: 0x10
	DelegateProperty UploadSuccess; // Offset: 0x418 // Size: 0x10
	DelegateProperty UploadFail; // Offset: 0x428 // Size: 0x10
	DelegateProperty EnableRoomMicrophone; // Offset: 0x438 // Size: 0x10
	DelegateProperty ExitInfectionGameMode; // Offset: 0x448 // Size: 0x10
	DelegateProperty JoinInfectionGameMode; // Offset: 0x458 // Size: 0x10
	DelegateProperty RequestPrivacyInSetting; // Offset: 0x468 // Size: 0x10
	DelegateProperty OnReportPlayerCallback; // Offset: 0x478 // Size: 0x10
	DelegateProperty OnVoiceSDKEvent; // Offset: 0x488 // Size: 0x10
	DelegateProperty BeforeVoiceSDKInitDelegate; // Offset: 0x498 // Size: 0x10
	DelegateProperty AfterVoiceSDKInitDelegate; // Offset: 0x4a8 // Size: 0x10
	DelegateProperty AudioRouteChangedAfterSpeakerDelegate; // Offset: 0x4b8 // Size: 0x10
	DelegateProperty AudioSessionInterruptedDelegate; // Offset: 0x4c8 // Size: 0x10
	DelegateProperty OnRoomMemeberInfoDelegate; // Offset: 0x4d8 // Size: 0x10
	char pad_0x4E8[0x98]; // Offset: 0x4e8 // Size: 0x98
	DelegateProperty OnDeliverDataCallback; // Offset: 0x580 // Size: 0x10

	// Functions

	// Object Name: Function Client.VoiceSDKInterface.UploadRecordFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UploadRecordFile(bool InPermanent); // Offset: 0x103c687d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.UploadRecordedFile
	// Flags: [Final|Native|Public]
	IntProperty UploadRecordedFile(StrProperty InFilePath, IntProperty InTimeout, bool InPermanent); // Offset: 0x103c686ac // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Client.VoiceSDKInterface.UpdateVoiceCoordinate
	// Flags: [Final|Native|Public]
	IntProperty UpdateVoiceCoordinate(StrProperty InRoomName, int64_t X, int64_t Y, int64_t Z, int64_t Radius); // Offset: 0x103c6850c // Return & Params: Num(6) Size(0x34)

	// Object Name: Function Client.VoiceSDKInterface.TestMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TestMic(); // Offset: 0x103c684f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.TeamSpeakerEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool TeamSpeakerEnable(); // Offset: 0x103c684dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.TeamMicphoneEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool TeamMicphoneEnable(); // Offset: 0x103c684c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SwitchMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SwitchMode(enum class ECharacterMainType CharMode); // Offset: 0x103c68444 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SwitchMicphoneWhenCorpsMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SwitchMicphoneWhenCorpsMode(); // Offset: 0x103c68430 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.StopRecording
	// Flags: [Final|Native|Public]
	IntProperty StopRecording(); // Offset: 0x103c683fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.StopRecord
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopRecord(); // Offset: 0x103c683e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.StopPlayRecordFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopPlayRecordFile(); // Offset: 0x103c683d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.StopInterphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopInterphone(); // Offset: 0x103c683c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.StartRecording
	// Flags: [Final|Native|Public]
	IntProperty StartRecording(StrProperty InFilePath, bool InNotVoip); // Offset: 0x103c682d0 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.StartRecord
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartRecord(); // Offset: 0x103c682bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.StartInterphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartInterphone(); // Offset: 0x103c682a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.SpeechTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SpeechTranslate(StrProperty InFileID, IntProperty InSrcLang, IntProperty InTargetLang, IntProperty InTransType, IntProperty InTimeoutMS); // Offset: 0x103c68108 // Return & Params: Num(6) Size(0x24)

	// Object Name: Function Client.VoiceSDKInterface.SpeechStreamTranslateStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SpeechStreamTranslateStart(StrProperty InFileID, StrProperty InOutFilePath, IntProperty InSrcLang, IntProperty InTargetLang, StrProperty InVoiceType, IntProperty InVolume, IntProperty InTimeoutMS); // Offset: 0x103c67ec0 // Return & Params: Num(8) Size(0x44)

	// Object Name: Function Client.VoiceSDKInterface.SpeechFileTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SpeechFileTranslate(StrProperty InFilePath, IntProperty InSrcLang, IntProperty InTargetLang, IntProperty InVoiceType, float InVoiceRate, float InVolume, IntProperty InTimeoutMS); // Offset: 0x103c67ca0 // Return & Params: Num(8) Size(0x2c)

	// Object Name: Function Client.VoiceSDKInterface.ShowOpenSpeakerAtFirstMsg
	// Flags: [Native|Public|BlueprintCallable]
	void ShowOpenSpeakerAtFirstMsg(); // Offset: 0x103c67c84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ShowCorpsModeCannotUseLBSVoice
	// Flags: [Native|Public|BlueprintCallable]
	void ShowCorpsModeCannotUseLBSVoice(); // Offset: 0x103c67c68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.SetVoiceServer
	// Flags: [Final|Native|Public]
	void SetVoiceServer(StrProperty ServerInfo); // Offset: 0x103c67bd0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.SetVoiceSDKSupportBackgroundChat
	// Flags: [Final|Native|Public]
	void SetVoiceSDKSupportBackgroundChat(bool isSupportBGChat); // Offset: 0x103c67b4c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SetVoiceSDKChatServiceEnable
	// Flags: [Final|Native|Public]
	void SetVoiceSDKChatServiceEnable(bool IsEnable); // Offset: 0x103c67ac8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SetVoiceMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVoiceMode(IntProperty Type); // Offset: 0x103c67a4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetUserInfo
	// Flags: [Final|Native|Public]
	IntProperty SetUserInfo(StrProperty InUserInfo); // Offset: 0x103c679a4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.SetTransSecInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTransSecInfo(StrProperty InTransSecInfo); // Offset: 0x103c6790c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.SetSpeakerVolum
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSpeakerVolum(float Value); // Offset: 0x103c67890 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetSpeakerStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSpeakerStatus(bool flag); // Offset: 0x103c6780c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SetServerUrl
	// Flags: [Final|Native|Public]
	IntProperty SetServerUrl(IntProperty InUrlType, StrProperty InURL); // Offset: 0x103c67728 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Client.VoiceSDKInterface.SetServerInfo
	// Flags: [Final|Native|Public]
	IntProperty SetServerInfo(StrProperty URL, StrProperty InDefaultIpSvr); // Offset: 0x103c6762c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Client.VoiceSDKInterface.SetRoomOperationTimeout
	// Flags: [Final|Native|Public]
	void SetRoomOperationTimeout(IntProperty InTimeout); // Offset: 0x103c675b0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetResourePath
	// Flags: [Final|Native|Public]
	IntProperty SetResourePath(StrProperty InResourcePath); // Offset: 0x103c67508 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.SetReportBufferTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetReportBufferTime(IntProperty nTimeSec); // Offset: 0x103c6748c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetPlayerVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlayerVolume(StrProperty InPlayerId, IntProperty InVol); // Offset: 0x103c67368 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.SetNotify
	// Flags: [Final|Native|Public]
	IntProperty SetNotify(); // Offset: 0x103c67334 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetMode
	// Flags: [Final|Native|Public]
	IntProperty SetMode(IntProperty InGVMode); // Offset: 0x103c672a8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.SetMicphoneVolum
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMicphoneVolum(float Value); // Offset: 0x103c6722c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetMicphoneStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMicphoneStatus(bool flag); // Offset: 0x103c671a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SetMagicVoiceMsgType
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SetMagicVoiceMsgType(StrProperty InMagicType); // Offset: 0x103c67100 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.SetLbsVoiceRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLbsVoiceRadius(float Radius); // Offset: 0x103c67088 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.SetLbsRoomEnableStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLbsRoomEnableStatus(bool flag); // Offset: 0x103c67004 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.SetKwsModelPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SetKwsModelPath(StrProperty KwsPath); // Offset: 0x103c66f5c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.SetGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGameFrontendHUD(struct UGameFrontendHUD* InHUD); // Offset: 0x103c66ee0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.SetFeature
	// Flags: [Final|Native|Public]
	void SetFeature(uint8_t InFeature, bool Inactive); // Offset: 0x103c66e20 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Client.VoiceSDKInterface.SetDeliverData
	// Flags: [Final|Native|Public|HasOutParms]
	IntProperty SetDeliverData(struct TArray<char>& pbuf, IntProperty Len); // Offset: 0x103c66d24 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.SetAppInfo
	// Flags: [Final|Native|Public]
	IntProperty SetAppInfo(StrProperty InAppId, StrProperty InAppKey, StrProperty InOpenid); // Offset: 0x103c66bd4 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function Client.VoiceSDKInterface.SetAllVoiceStatus
	// Flags: [Native|Public|BlueprintCallable]
	void SetAllVoiceStatus(bool flag); // Offset: 0x103c66b48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.RSTSStopRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RSTSStopRecording(); // Offset: 0x103c66b34 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.RSTSStartRecording
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty RSTSStartRecording(IntProperty InSrcLang, struct TArray<IntProperty>& InTargetLangs, IntProperty InTargetLangCnt, IntProperty InTransType, IntProperty InTimeoutMS, StrProperty InRecordFilePath, StrProperty InSrcLangStr); // Offset: 0x103c668d8 // Return & Params: Num(8) Size(0x4c)

	// Object Name: Function Client.VoiceSDKInterface.RSTSSpeechToText
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RSTSSpeechToText(IntProperty InSrcLang, StrProperty InExtraInfo, StrProperty InRecordFilePath); // Offset: 0x103c667a0 // Return & Params: Num(4) Size(0x2c)

	// Object Name: Function Client.VoiceSDKInterface.ResetWhenLogOut
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetWhenLogOut(); // Offset: 0x103c6678c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ReportPlayers
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ReportPlayers(StrProperty InExtraInfo, struct TArray<StrProperty> InOpenids); // Offset: 0x103c66600 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Client.VoiceSDKInterface.ReportFileForAbroad
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ReportFileForAbroad(StrProperty InFilePath, bool InTranslate, bool InChangeVoice, IntProperty InTime); // Offset: 0x103c66480 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function Client.VoiceSDKInterface.RecoverPlayersVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RecoverPlayersVolume(IntProperty InVol); // Offset: 0x103c66404 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.ReactiveLbsStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReactiveLbsStatus(); // Offset: 0x103c663f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.QuitVoiceRoom
	// Flags: [Final|Native|Public]
	IntProperty QuitVoiceRoom(StrProperty InRoomName); // Offset: 0x103c66348 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.QuitRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QuitRoom(); // Offset: 0x103c66334 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.QuitLbsRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool QuitLbsRoom(bool needReenterLbs); // Offset: 0x103c662a0 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Client.VoiceSDKInterface.QuitCommonRoom
	// Flags: [Final|Native|Public]
	void QuitCommonRoom(StrProperty InRoomName); // Offset: 0x103c66208 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.Poll
	// Flags: [Final|Native|Public]
	IntProperty Poll(); // Offset: 0x103c661d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.PlayRecordFileV2
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty PlayRecordFileV2(StrProperty InFileID); // Offset: 0x103c6612c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.PlayRecordedFile
	// Flags: [Final|Native|Public]
	IntProperty PlayRecordedFile(StrProperty InDownloadInFilePath); // Offset: 0x103c66084 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.OpenVoiceSpeaker
	// Flags: [Final|Native|Public]
	IntProperty OpenVoiceSpeaker(); // Offset: 0x103c66050 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenVoiceMic
	// Flags: [Final|Native|Public]
	IntProperty OpenVoiceMic(); // Offset: 0x103c6601c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenTeamSpeakerOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenTeamSpeakerOnly(bool ShowTips); // Offset: 0x103c65f98 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.OpenTeamMicphoneOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenTeamMicphoneOnly(bool ShowTips); // Offset: 0x103c65f04 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.OpenTeamInterphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenTeamInterphone(); // Offset: 0x103c65ed0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenSpeaker(); // Offset: 0x103c65e9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenMicAndSpeakerAfterJoinLbsRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenMicAndSpeakerAfterJoinLbsRoom(); // Offset: 0x103c65e88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.OpenMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenMic(); // Offset: 0x103c65e54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenLBSInterphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenLBSInterphone(); // Offset: 0x103c65e20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenIngameSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenIngameSpeaker(); // Offset: 0x103c65e0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.OpenIngameMicphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenIngameMicphone(); // Offset: 0x103c65dd8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OpenAllSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenAllSpeaker(bool ShowTips); // Offset: 0x103c65d54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.OpenAllMicphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenAllMicphone(bool ShowTips); // Offset: 0x103c65cc0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.OpenAllInterphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty OpenAllInterphone(); // Offset: 0x103c65c8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.OnRoomTypeChanged
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnRoomTypeChanged(StrProperty itemtext); // Offset: 0x103c65bc8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.OnResume
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnResume(); // Offset: 0x103c65bb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.OnPause
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnPause(); // Offset: 0x103c65ba0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.OnDeliverData
	// Flags: [Final|Native|Public|HasOutParms]
	void OnDeliverData(struct TArray<char>& pbuf, IntProperty Len, StrProperty OpenID); // Offset: 0x103c65a58 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Client.VoiceSDKInterface.LbsSpeakerEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool LbsSpeakerEnable(); // Offset: 0x103c65a3c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.LbsMicphoneEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool LbsMicphoneEnable(); // Offset: 0x103c65a20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.JoinTeamRoom
	// Flags: [Final|Native|Public]
	IntProperty JoinTeamRoom(StrProperty InRoomName); // Offset: 0x103c65978 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.JoinRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JoinRoom(StrProperty Room, StrProperty UserId); // Offset: 0x103c657fc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.VoiceSDKInterface.JoinRangeRoom
	// Flags: [Final|Native|Public]
	IntProperty JoinRangeRoom(StrProperty InRoomName); // Offset: 0x103c65754 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.JoinLbsRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void JoinLbsRoom(StrProperty lbsRoom, StrProperty UserId); // Offset: 0x103c655d8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.VoiceSDKInterface.JoinCommonRoom
	// Flags: [Final|Native|Public]
	void JoinCommonRoom(StrProperty InRoomName); // Offset: 0x103c65540 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.IsVoiceSDKEnable
	// Flags: [Final|Native|Public]
	bool IsVoiceSDKEnable(); // Offset: 0x103c6550c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.IsVoiceRoomHasSpeakDataInLastSeconds
	// Flags: [Final|Native|Public]
	bool IsVoiceRoomHasSpeakDataInLastSeconds(IntProperty InRoomType, IntProperty InDeltaSeconds); // Offset: 0x103c65448 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Client.VoiceSDKInterface.IsTeamInterphoneOpenned
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsTeamInterphoneOpenned(); // Offset: 0x103c6542c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.IsSpeaking
	// Flags: [Final|Native|Public]
	bool IsSpeaking(); // Offset: 0x103c653f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.IsLbsInterphoneOpenned
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsLbsInterphoneOpenned(); // Offset: 0x103c653dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.IsInterphoneMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsInterphoneMode(); // Offset: 0x103c653ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.IsEnableCivilFile
	// Flags: [Final|Native|Public]
	bool IsEnableCivilFile(); // Offset: 0x103c65378 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.Invoke
	// Flags: [Final|Native|Public]
	IntProperty Invoke(uint32_t InCmd, uint32_t InParam1, uint32_t InParam2, StrProperty InExterInfo); // Offset: 0x103c65220 // Return & Params: Num(5) Size(0x24)

	// Object Name: Function Client.VoiceSDKInterface.InstallSystemAudioEventListener
	// Flags: [Final|Native|Public]
	void InstallSystemAudioEventListener(bool InEnable); // Offset: 0x103c6519c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.InitVoiceSDKComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitVoiceSDKComponent(StrProperty UserId); // Offset: 0x103c650b8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.InitVoiceSDK
	// Flags: [Final|Native|Public]
	IntProperty InitVoiceSDK(); // Offset: 0x103c65084 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.Init
	// Flags: [Final|Native|Public]
	void Init(); // Offset: 0x103c65070 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.HaveTeamRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HaveTeamRoom(); // Offset: 0x103c6503c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.HaveLbsRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HaveLbsRoom(); // Offset: 0x103c65008 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.GetVoiceSpeakerWanters
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetVoiceSpeakerWanters(); // Offset: 0x103c64fa4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.GetVoiceSpeakerState
	// Flags: [Final|Native|Public]
	IntProperty GetVoiceSpeakerState(); // Offset: 0x103c64f70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.GetVoiceMicWanters
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetVoiceMicWanters(); // Offset: 0x103c64f0c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.GetVoiceMicState
	// Flags: [Final|Native|Public]
	IntProperty GetVoiceMicState(); // Offset: 0x103c64ed8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.GetVoiceLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetVoiceLength(); // Offset: 0x103c64ea4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.GetTeamRoomName
	// Flags: [Final|Native|Public]
	StrProperty GetTeamRoomName(); // Offset: 0x103c64e40 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.GetRoomStatus
	// Flags: [Final|Native|Public]
	IntProperty GetRoomStatus(StrProperty InRoomName); // Offset: 0x103c64d98 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.GetRoomMemberVoiceData
	// Flags: [Final|Native|Public]
	IntProperty GetRoomMemberVoiceData(StrProperty InOpenid, IntProperty InIndexType, IntProperty DataType, bool OnlyIncludeLatest); // Offset: 0x103c64c2c // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Client.VoiceSDKInterface.GetRoomMemberId
	// Flags: [Final|Native|Public]
	IntProperty GetRoomMemberId(StrProperty InOpenid); // Offset: 0x103c64b84 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.GetPlayerVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetPlayerVolume(StrProperty InPlayerId); // Offset: 0x103c64a90 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Client.VoiceSDKInterface.GetMicState
	// Flags: [Final|Native|Public]
	IntProperty GetMicState(); // Offset: 0x103c64a5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.GetLocalRecordFilePath
	// Flags: [Final|Native|Public]
	StrProperty GetLocalRecordFilePath(StrProperty InFileName); // Offset: 0x103c6498c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Client.VoiceSDKInterface.GetLbsRoomName
	// Flags: [Final|Native|Public]
	StrProperty GetLbsRoomName(); // Offset: 0x103c64928 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.VoiceSDKInterface.GetAuthKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetAuthKey(); // Offset: 0x103c64914 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.GetAudioDeviceConnectionState
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetAudioDeviceConnectionState(); // Offset: 0x103c648e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.ForbidTeammateVoiceById
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForbidTeammateVoiceById(IntProperty memberID, bool IsEnable); // Offset: 0x103c64824 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.VoiceSDKInterface.ForbidMemberVoice
	// Flags: [Final|Native|Public]
	IntProperty ForbidMemberVoice(IntProperty InMember, bool InEnable, StrProperty InRoomName); // Offset: 0x103c646fc // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Client.VoiceSDKInterface.ForbidLbsMemberVoiceById
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForbidLbsMemberVoiceById(IntProperty memberID, bool IsEnable); // Offset: 0x103c64640 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Client.VoiceSDKInterface.EnableVoiceSdk
	// Flags: [Final|Native|Public]
	void EnableVoiceSdk(struct UGameFrontendHUD* GameFrontendHUD, bool Enable); // Offset: 0x103c64580 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Client.VoiceSDKInterface.EnableVoiceRoomMicrophone
	// Flags: [Final|Native|Public]
	IntProperty EnableVoiceRoomMicrophone(StrProperty InRoomName, bool InEnable); // Offset: 0x103c64490 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.EnableVoiceChat
	// Flags: [Final|Native|Public]
	void EnableVoiceChat(bool InEnable); // Offset: 0x103c6440c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.EnableRSTSSubtitle
	// Flags: [Final|Native|Public]
	IntProperty EnableRSTSSubtitle(bool InEnable, IntProperty InSrcLang, StrProperty InExtInfo); // Offset: 0x103c642e4 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Client.VoiceSDKInterface.EnableRoomSpeaker
	// Flags: [Final|Native|Public]
	IntProperty EnableRoomSpeaker(StrProperty InRoomName, bool InEnable); // Offset: 0x103c641f4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.EnableReportForAbroad
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty EnableReportForAbroad(bool InIsWholeRoundaudit); // Offset: 0x103c64160 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.EnableReportALLAbroad
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool EnableReportALLAbroad(bool InEnable, bool InWithEncryption, IntProperty InTimeout); // Offset: 0x103c64044 // Return & Params: Num(4) Size(0x9)

	// Object Name: Function Client.VoiceSDKInterface.EnableRecvMagicVoice
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty EnableRecvMagicVoice(bool InEnable); // Offset: 0x103c63fb0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.EnableMultiRoom
	// Flags: [Final|Native|Public]
	IntProperty EnableMultiRoom(bool InEnable); // Offset: 0x103c63f1c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.EnableMagicVoice
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty EnableMagicVoice(StrProperty InMagicType, bool InEnable); // Offset: 0x103c63e2c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.EnableLog
	// Flags: [Final|Native|Public]
	void EnableLog(bool InEnable); // Offset: 0x103c63da8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.EnableKws
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty EnableKws(bool bEnable); // Offset: 0x103c63d14 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.EnableCommonRoomSpeaker
	// Flags: [Final|Native|Public]
	IntProperty EnableCommonRoomSpeaker(StrProperty InRoomName, bool InEnable); // Offset: 0x103c63c24 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.EnableCommonRoomMic
	// Flags: [Final|Native|Public]
	IntProperty EnableCommonRoomMic(StrProperty InRoomName, bool InEnable); // Offset: 0x103c63b34 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.EnableCivilFile
	// Flags: [Final|Native|Public]
	IntProperty EnableCivilFile(bool Enable); // Offset: 0x103c63aa0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Client.VoiceSDKInterface.EnableBluetoothSCO
	// Flags: [Final|Native|Public]
	void EnableBluetoothSCO(bool InEnable); // Offset: 0x103c63a1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.DownloadRecordFileV2
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty DownloadRecordFileV2(StrProperty InFileID, bool InPermanent); // Offset: 0x103c6392c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Client.VoiceSDKInterface.DownloadRecordedFile
	// Flags: [Final|Native|Public]
	IntProperty DownloadRecordedFile(StrProperty InFileID, StrProperty InDownloadInFilePath, IntProperty InTimeout, bool InPermanent); // Offset: 0x103c637ac // Return & Params: Num(5) Size(0x2c)

	// Object Name: Function Client.VoiceSDKInterface.CommonTestMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CommonTestMic(); // Offset: 0x103c63798 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.CloseVoiceSpeaker
	// Flags: [Final|Native|Public]
	IntProperty CloseVoiceSpeaker(); // Offset: 0x103c63764 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.CloseVoiceMic
	// Flags: [Final|Native|Public]
	IntProperty CloseVoiceMic(); // Offset: 0x103c63730 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.CloseSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseSpeaker(); // Offset: 0x103c6371c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.CloseMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseMic(); // Offset: 0x103c63708 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.CloseIngameSpeaker
	// Flags: [Native|Public|BlueprintCallable]
	void CloseIngameSpeaker(); // Offset: 0x103c636ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.CloseIngameMicphone
	// Flags: [Native|Public|BlueprintCallable]
	void CloseIngameMicphone(); // Offset: 0x103c636d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.CloseAllSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseAllSpeaker(bool ShowTips); // Offset: 0x103c6364c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.CloseAllMicphone
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseAllMicphone(bool ShowTips); // Offset: 0x103c635c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Client.VoiceSDKInterface.CheckDeviceMuteState
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty CheckDeviceMuteState(); // Offset: 0x103c63594 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.CheckAndEnableRoomSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckAndEnableRoomSpeaker(); // Offset: 0x103c63580 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ChatShowAgeRestrictionMsgInLobby
	// Flags: [Native|Public|BlueprintCallable]
	void ChatShowAgeRestrictionMsgInLobby(); // Offset: 0x103c63564 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ChatShowAgeRestrictionMsgInFighting
	// Flags: [Native|Public|BlueprintCallable]
	void ChatShowAgeRestrictionMsgInFighting(); // Offset: 0x103c63548 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ChatShowAgeRestrictionMsgInChat
	// Flags: [Native|Public|BlueprintCallable]
	void ChatShowAgeRestrictionMsgInChat(); // Offset: 0x103c6352c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ChatRequestPrivacyInSetting
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChatRequestPrivacyInSetting(); // Offset: 0x103c63518 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ChatRequestPrivacyInGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChatRequestPrivacyInGame(); // Offset: 0x103c63504 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.VoiceSDKInterface.ApplyMessageKey
	// Flags: [Final|Native|Public]
	IntProperty ApplyMessageKey(); // Offset: 0x103c634d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.VoiceSDKInterface.AlwaysDisableRoomMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AlwaysDisableRoomMic(StrProperty InRoomName, bool WithClear); // Offset: 0x103c633f0 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Client.WeaponDIYCaptureActor
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct AWeaponDIYCaptureActor : AActor {
	// Functions

	// Object Name: Function Client.WeaponDIYCaptureActor.ResizeRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResizeRT(struct UTextureRenderTarget2D* RenderTarget, IntProperty Width, IntProperty Height); // Offset: 0x103c6c138 // Return & Params: Num(3) Size(0x10)
};

// Object Name: Class Client.WINSDKFBWebLogin
// Size: 0x130 // Inherited bytes: 0x100
struct UWINSDKFBWebLogin : UWidget {
	// Fields
	struct FScriptMulticastDelegate OnUrlChanged; // Offset: 0x100 // Size: 0x10
	struct FScriptMulticastDelegate OnHttpResponed; // Offset: 0x110 // Size: 0x10
	StrProperty InitialURL; // Offset: 0x120 // Size: 0x10

	// Functions

	// Object Name: DelegateFunction Client.WINSDKFBWebLogin.OnWINSDKHttpResponed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnWINSDKHttpResponed__DelegateSignature(bool requestSucc, StrProperty txtContent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: DelegateFunction Client.WINSDKFBWebLogin.OnUrlChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnUrlChanged__DelegateSignature(struct FText& Text); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Client.WINSDKFBWebLogin.LoadURL
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadURL(StrProperty NewURL); // Offset: 0x103c6c580 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.WINSDKFBWebLogin.DoHttpRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DoHttpRequest(StrProperty URL); // Offset: 0x103c6c4e8 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Client.WINWebSocketServer
// Size: 0x58 // Inherited bytes: 0x28
struct UWINWebSocketServer : UObject {
	// Fields
	struct FScriptMulticastDelegate OnWebSocketConnectEvent; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnWebSocketErrorEvent; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnWebSocketMessageEvent; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function Client.WINWebSocketServer.Tick
	// Flags: [Final|Native|Public]
	void Tick(IntProperty DeltaTime); // Offset: 0x103c6c964 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.WINWebSocketServer.Stop
	// Flags: [Final|Native|Public]
	void Stop(); // Offset: 0x103c6c950 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Client.WINWebSocketServer.Start
	// Flags: [Final|Native|Public]
	void Start(IntProperty InPort); // Offset: 0x103c6c8d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Client.WINWebSocketServer.Send
	// Flags: [Final|Native|Public]
	void Send(StrProperty InMsg); // Offset: 0x103c6c83c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Client.WINWebSocketServer.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UWINWebSocketServer* GetInstance(); // Offset: 0x103c6c808 // Return & Params: Num(1) Size(0x8)
};

