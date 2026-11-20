#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Client.CDNDownloaderInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FCDNDownloaderInfo {
	// Fields
	enum class FCDNDownloaderStateEnum State; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty FileSavePath; // Offset: 0x08 // Size: 0x10
	bool Result; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty BytesSent; // Offset: 0x1c // Size: 0x04
	IntProperty BytesReceived; // Offset: 0x20 // Size: 0x04
	IntProperty ContentType; // Offset: 0x24 // Size: 0x04
	IntProperty ResponseCode; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Client.DownloaderInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FDownloaderInfo {
	// Fields
	enum class FDownloaderStateEnum State; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty FileSavePath; // Offset: 0x08 // Size: 0x10
	bool Result; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty BytesSent; // Offset: 0x1c // Size: 0x04
	IntProperty BytesReceived; // Offset: 0x20 // Size: 0x04
	IntProperty ContentType; // Offset: 0x24 // Size: 0x04
	IntProperty ResponseCode; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty StringContent; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Client.PingServerInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FPingServerInfo {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct Client.VerInfoWrapper
// Size: 0x50 // Inherited bytes: 0x00
struct FVerInfoWrapper {
	// Fields
	MapProperty VerData; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Client.WakeupInfoWrapper
// Size: 0x50 // Inherited bytes: 0x00
struct FWakeupInfoWrapper {
	// Fields
	MapProperty FWakeupInfoMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Client.GroupInfoWrapper
// Size: 0x50 // Inherited bytes: 0x00
struct FGroupInfoWrapper {
	// Fields
	IntProperty SnsAction; // Offset: 0x00 // Size: 0x04
	IntProperty flag; // Offset: 0x04 // Size: 0x04
	IntProperty ErrorCode; // Offset: 0x08 // Size: 0x04
	IntProperty Platform; // Offset: 0x0c // Size: 0x04
	StrProperty Desc; // Offset: 0x10 // Size: 0x10
	struct FNoschatGroupInfomation noschatGroupInfo; // Offset: 0x20 // Size: 0x30
};

// Object Name: ScriptStruct Client.NoschatGroupInfomation
// Size: 0x30 // Inherited bytes: 0x00
struct FNoschatGroupInfomation {
	// Fields
	StrProperty OpenIdList; // Offset: 0x00 // Size: 0x10
	StrProperty MemberNum; // Offset: 0x10 // Size: 0x10
	StrProperty ChatRoomURL; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Client.SavFileData
// Size: 0x18 // Inherited bytes: 0x00
struct FSavFileData {
	// Fields
	IntProperty CompressedSize; // Offset: 0x00 // Size: 0x04
	IntProperty UncompressedSize; // Offset: 0x04 // Size: 0x04
	struct TArray<char> ByteArray; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Client.PlayerFinishedGuide
// Size: 0x08 // Inherited bytes: 0x00
struct FPlayerFinishedGuide {
	// Fields
	IntProperty GuideID; // Offset: 0x00 // Size: 0x04
	IntProperty FinishedCounts; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Client.FightFriendChat
// Size: 0x38 // Inherited bytes: 0x00
struct FFightFriendChat {
	// Fields
	StrProperty UID; // Offset: 0x00 // Size: 0x10
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	StrProperty Msg; // Offset: 0x20 // Size: 0x10
	bool selfMsg; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct Client.TouchInputRecord
// Size: 0x30 // Inherited bytes: 0x00
struct FTouchInputRecord {
	// Fields
	struct TArray<float> Times; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVector2D> Positions; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> Types; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Client.MetaDataHolder
// Size: 0x50 // Inherited bytes: 0x00
struct FMetaDataHolder {
	// Fields
	MapProperty MetaData; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Client.LoadTaskCfg
// Size: 0x18 // Inherited bytes: 0x00
struct FLoadTaskCfg {
	// Fields
	StrProperty ObjectPath; // Offset: 0x00 // Size: 0x10
	IntProperty LoadPriority; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Client.BattleGameInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FBattleGameInfo {
	// Fields
	uint64 GameID; // Offset: 0x00 // Size: 0x08
	StrProperty GameModeID; // Offset: 0x08 // Size: 0x10
	IntProperty GameMapID; // Offset: 0x18 // Size: 0x04
	IntProperty WeatherID; // Offset: 0x1c // Size: 0x04
	StrProperty WeatherName; // Offset: 0x20 // Size: 0x10
	bool bUsedSimulation; // Offset: 0x30 // Size: 0x01
	bool bEnableClimbing; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
};

// Object Name: ScriptStruct Client.VersionConfig
// Size: 0x100 // Inherited bytes: 0x00
struct FVersionConfig {
	// Fields
	char pad_0x0[0x100]; // Offset: 0x00 // Size: 0x100
};

// Object Name: ScriptStruct Client.Version
// Size: 0x90 // Inherited bytes: 0x00
struct FVersion {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct Client.PatchConfig
// Size: 0x80 // Inherited bytes: 0x00
struct FPatchConfig {
	// Fields
	char pad_0x0[0x80]; // Offset: 0x00 // Size: 0x80
};

// Object Name: ScriptStruct Client.PatchURL
// Size: 0x28 // Inherited bytes: 0x00
struct FPatchURL {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct Client.CentauriPack
// Size: 0x58 // Inherited bytes: 0x00
struct FCentauriPack {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
};

// Object Name: ScriptStruct Client.UploadFinishCallbackInfoWrapper
// Size: 0x18 // Inherited bytes: 0x00
struct FUploadFinishCallbackInfoWrapper {
	// Fields
	IntProperty Result; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty URL; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Client.SDKCallbackInfoWrapper
// Size: 0x28 // Inherited bytes: 0x00
struct FSDKCallbackInfoWrapper {
	// Fields
	enum class ESDKCallbackType CallbackType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty CallbackParameter; // Offset: 0x08 // Size: 0x10
	StrProperty ExtraJson; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Client.UAAssistantInfoWrapper
// Size: 0x28 // Inherited bytes: 0x00
struct FUAAssistantInfoWrapper {
	// Fields
	enum class EUnifiedAccountType UAType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Result; // Offset: 0x04 // Size: 0x04
	StrProperty ExtraJson; // Offset: 0x08 // Size: 0x10
	StrProperty RetsultMsg; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Client.OnRequestPermissionResultWrapper
// Size: 0x28 // Inherited bytes: 0x00
struct FOnRequestPermissionResultWrapper {
	// Fields
	IntProperty code; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty permission; // Offset: 0x08 // Size: 0x10
	StrProperty grantResult; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Client.GameMasterInfoWrapper
// Size: 0x18 // Inherited bytes: 0x00
struct FGameMasterInfoWrapper {
	// Fields
	StrProperty EventName; // Offset: 0x00 // Size: 0x10
	IntProperty Result; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Client.GetTicketInfoWrapper
// Size: 0x10 // Inherited bytes: 0x00
struct FGetTicketInfoWrapper {
	// Fields
	StrProperty Ticket; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Client.ShortURLInfoWrapper
// Size: 0x28 // Inherited bytes: 0x00
struct FShortURLInfoWrapper {
	// Fields
	IntProperty ErrorCode; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Reason; // Offset: 0x08 // Size: 0x10
	StrProperty shortUrl; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Client.WebviewInfoWrapper
// Size: 0x30 // Inherited bytes: 0x00
struct FWebviewInfoWrapper {
	// Fields
	IntProperty ErrorCode; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Reason; // Offset: 0x08 // Size: 0x10
	IntProperty extend; // Offset: 0x18 // Size: 0x04
	IntProperty Extend2; // Offset: 0x1c // Size: 0x04
	StrProperty MsgData; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Client.WebviewActionInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FWebviewActionInfo {
	// Fields
	StrProperty URL; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Client.PlatformFriendInfoMap
// Size: 0x58 // Inherited bytes: 0x00
struct FPlatformFriendInfoMap {
	// Fields
	IntProperty page; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty friendsInfo; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct Client.PlatformFriendInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FPlatformFriendInfo {
	// Fields
	StrProperty UserId; // Offset: 0x00 // Size: 0x10
	StrProperty UserName; // Offset: 0x10 // Size: 0x10
	StrProperty headportraitURL; // Offset: 0x20 // Size: 0x10
	StrProperty OpenID; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct Client.DelayLoadInlineTextImageStyle
// Size: 0xf0 // Inherited bytes: 0x08
struct FDelayLoadInlineTextImageStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush Image; // Offset: 0x08 // Size: 0xb8
	int16_t Baseline; // Offset: 0xc0 // Size: 0x02
	char pad_0xC2[0x2e]; // Offset: 0xc2 // Size: 0x2e
};

// Object Name: ScriptStruct Client.GameWidgetConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FGameWidgetConfig {
	// Fields
	StrProperty Path; // Offset: 0x00 // Size: 0x10
	StrProperty Container; // Offset: 0x10 // Size: 0x10
	IntProperty ZOrder; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct UObject* WidgetClass; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Client.NativeHUDTickContainer
// Size: 0x0c // Inherited bytes: 0x00
struct FNativeHUDTickContainer {
	// Fields
	IntProperty WidgetIndex; // Offset: 0x00 // Size: 0x04
	struct TWeakObjectPtr<struct UUAEUserWidget> pWidget; // Offset: 0x04 // Size: 0x08
};

// Object Name: ScriptStruct Client.TimeStamp
// Size: 0x20 // Inherited bytes: 0x00
struct FTimeStamp {
	// Fields
	StrProperty Title; // Offset: 0x00 // Size: 0x10
	IntProperty Priority; // Offset: 0x10 // Size: 0x04
	IntProperty StartTime; // Offset: 0x14 // Size: 0x04
	IntProperty EndTime; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Client.BatchDownloadPackHashes
// Size: 0x10 // Inherited bytes: 0x00
struct FBatchDownloadPackHashes {
	// Fields
	struct TArray<StrProperty> Hashes; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Client.BatchDownloadPack
// Size: 0x30 // Inherited bytes: 0x00
struct FBatchDownloadPack {
	// Fields
	struct TArray<uint32_t> ItemIDs; // Offset: 0x00 // Size: 0x10
	struct TArray<uint32_t> ErrorCodes; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Client.PendingFakeReturn
// Size: 0x20 // Inherited bytes: 0x00
struct FPendingFakeReturn {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	StrProperty Filename; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Client.PufferDownloadLastTaskStatus
// Size: 0x18 // Inherited bytes: 0x00
struct FPufferDownloadLastTaskStatus {
	// Fields
	struct FDateTime Time; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Client.PufferObj
// Size: 0x18 // Inherited bytes: 0x00
struct FPufferObj {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct Client.PufferDownloadStates
// Size: 0x30 // Inherited bytes: 0x00
struct FPufferDownloadStates {
	// Fields
	struct TArray<double> speeds; // Offset: 0x00 // Size: 0x10
	StrProperty Filename; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Client.IMSDKNoticeInfos
// Size: 0x10 // Inherited bytes: 0x00
struct FIMSDKNoticeInfos {
	// Fields
	struct TArray<struct FIMSDKNoticeInfo> Infos; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Client.IMSDKNoticeInfo
// Size: 0xe0 // Inherited bytes: 0x00
struct FIMSDKNoticeInfo {
	// Fields
	StrProperty MsgID; // Offset: 0x00 // Size: 0x10
	StrProperty OpenID; // Offset: 0x10 // Size: 0x10
	StrProperty MsgUrl; // Offset: 0x20 // Size: 0x10
	enum class EIMSDKNoticeType MsgType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	StrProperty MsgScene; // Offset: 0x38 // Size: 0x10
	StrProperty StartTime; // Offset: 0x48 // Size: 0x10
	StrProperty EndTime; // Offset: 0x58 // Size: 0x10
	enum class EIMSDKContentType MsgContentType; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
	StrProperty MsgOrder; // Offset: 0x70 // Size: 0x10
	StrProperty ContentUrl; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FIMSDKPictureInfomation> PicArray; // Offset: 0x90 // Size: 0x10
	StrProperty MsgTitle; // Offset: 0xa0 // Size: 0x10
	StrProperty msgContent; // Offset: 0xb0 // Size: 0x10
	StrProperty MsgEditCond; // Offset: 0xc0 // Size: 0x10
	StrProperty LoginTimes; // Offset: 0xd0 // Size: 0x10
};

// Object Name: ScriptStruct Client.IMSDKPictureInfomation
// Size: 0x38 // Inherited bytes: 0x00
struct FIMSDKPictureInfomation {
	// Fields
	enum class EIMSDKScreenDir PicScreenDir; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty PicPath; // Offset: 0x08 // Size: 0x10
	StrProperty HashValue; // Offset: 0x18 // Size: 0x10
	StrProperty picTitle; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Client.NoticeInfos
// Size: 0x10 // Inherited bytes: 0x00
struct FNoticeInfos {
	// Fields
	struct TArray<struct FNoticeInfo> Infos; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Client.NoticeInfo
// Size: 0xd0 // Inherited bytes: 0x00
struct FNoticeInfo {
	// Fields
	StrProperty MsgID; // Offset: 0x00 // Size: 0x10
	StrProperty OpenID; // Offset: 0x10 // Size: 0x10
	StrProperty MsgUrl; // Offset: 0x20 // Size: 0x10
	enum class ENoticeType MsgType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	StrProperty MsgScene; // Offset: 0x38 // Size: 0x10
	StrProperty StartTime; // Offset: 0x48 // Size: 0x10
	StrProperty EndTime; // Offset: 0x58 // Size: 0x10
	enum class EContentType MsgContentType; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
	StrProperty MsgOrder; // Offset: 0x70 // Size: 0x10
	StrProperty ContentUrl; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FPictureInfomation> PicArray; // Offset: 0x90 // Size: 0x10
	StrProperty MsgTitle; // Offset: 0xa0 // Size: 0x10
	StrProperty msgContent; // Offset: 0xb0 // Size: 0x10
	StrProperty MsgEditCond; // Offset: 0xc0 // Size: 0x10
};

// Object Name: ScriptStruct Client.PictureInfomation
// Size: 0x28 // Inherited bytes: 0x00
struct FPictureInfomation {
	// Fields
	enum class EScreenDir PicScreenDir; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty PicPath; // Offset: 0x08 // Size: 0x10
	StrProperty HashValue; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Client.DynamicWidgetAsyncLoadData
// Size: 0xb8 // Inherited bytes: 0x00
struct FDynamicWidgetAsyncLoadData {
	// Fields
	StrProperty WidgetKey; // Offset: 0x00 // Size: 0x10
	struct FDynamicWidgetData DynamicWidgetData; // Offset: 0x10 // Size: 0x98
	DelegateProperty Callback; // Offset: 0xa8 // Size: 0x10
};

// Object Name: ScriptStruct Client.DynamicWidgetData
// Size: 0x98 // Inherited bytes: 0x00
struct FDynamicWidgetData {
	// Fields
	bool bAutoDestory; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty MountModule; // Offset: 0x08 // Size: 0x10
	struct FInGameWidgetData InGameWidgetData; // Offset: 0x18 // Size: 0x80
};

// Object Name: ScriptStruct Client.InGameWidgetData
// Size: 0x80 // Inherited bytes: 0x00
struct FInGameWidgetData {
	// Fields
	IntProperty bAutoShow; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FGameWidgetConfig GameWidgetConfig; // Offset: 0x08 // Size: 0x30
	struct FWidgetMountData WidgetMountData; // Offset: 0x38 // Size: 0x48
};

// Object Name: ScriptStruct Client.WidgetMountData
// Size: 0x48 // Inherited bytes: 0x00
struct FWidgetMountData {
	// Fields
	struct FMargin MarginData; // Offset: 0x00 // Size: 0x10
	struct FAnchors AnchorsData; // Offset: 0x10 // Size: 0x10
	struct FVector2D Position; // Offset: 0x20 // Size: 0x08
	StrProperty MountName; // Offset: 0x28 // Size: 0x10
	StrProperty MountOuterName; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Client.UEComplianceResult
// Size: 0x238 // Inherited bytes: 0x00
struct FUEComplianceResult {
	// Fields
	IntProperty AdultStatus; // Offset: 0x00 // Size: 0x04
	IntProperty ParentCertificateStatus; // Offset: 0x04 // Size: 0x04
	IntProperty EUUserAgreeStatus; // Offset: 0x08 // Size: 0x04
	IntProperty AdultAge; // Offset: 0x0c // Size: 0x04
	IntProperty GameGrade; // Offset: 0x10 // Size: 0x04
	IntProperty CertificateType; // Offset: 0x14 // Size: 0x04
	bool IsEEA; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty MethodId; // Offset: 0x1c // Size: 0x04
	IntProperty RetCode; // Offset: 0x20 // Size: 0x04
	IntProperty ThirdCode; // Offset: 0x24 // Size: 0x04
	StrProperty ThirdMsg; // Offset: 0x28 // Size: 0x10
	StrProperty ParentCertificateStatusExpiration; // Offset: 0x38 // Size: 0x10
	StrProperty CountryCode; // Offset: 0x48 // Size: 0x10
	StrProperty AdultStatusExpiration; // Offset: 0x58 // Size: 0x10
	StrProperty TS; // Offset: 0x68 // Size: 0x10
	StrProperty Region; // Offset: 0x78 // Size: 0x10
	StrProperty retMsg; // Offset: 0x88 // Size: 0x10
	StrProperty ExtraJson; // Offset: 0x98 // Size: 0x10
	StrProperty AdultAgeMap; // Offset: 0xa8 // Size: 0x10
	StrProperty GameGradeMap; // Offset: 0xb8 // Size: 0x10
	bool IsDMA; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
	StrProperty email; // Offset: 0xd0 // Size: 0x10
	IntProperty RealnameAuthStatus; // Offset: 0xe0 // Size: 0x04
	IntProperty NeedRealnameAuth; // Offset: 0xe4 // Size: 0x04
	IntProperty NeedRealnameVerification; // Offset: 0xe8 // Size: 0x04
	IntProperty RealnameAuthType; // Offset: 0xec // Size: 0x04
	bool IsNeedLICert; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	IntProperty NeedVoiceControl; // Offset: 0xf4 // Size: 0x04
	IntProperty VoiceControlStatus; // Offset: 0xf8 // Size: 0x04
	IntProperty NeedVoiceControlInGame; // Offset: 0xfc // Size: 0x04
	IntProperty NeedVoiceControlParentCert; // Offset: 0x100 // Size: 0x04
	IntProperty NeedLBSControl; // Offset: 0x104 // Size: 0x04
	IntProperty NeedLBSControlInGame; // Offset: 0x108 // Size: 0x04
	IntProperty NeedLBSControlParentCert; // Offset: 0x10c // Size: 0x04
	IntProperty LBSControlStatus; // Offset: 0x110 // Size: 0x04
	bool TimeLimitEnable; // Offset: 0x114 // Size: 0x01
	char pad_0x115[0x3]; // Offset: 0x115 // Size: 0x03
	IntProperty NeedTimeLimit; // Offset: 0x118 // Size: 0x04
	IntProperty WeekendTimeLimit; // Offset: 0x11c // Size: 0x04
	StrProperty WeekendTimeStart; // Offset: 0x120 // Size: 0x10
	StrProperty WeekendTimeEnd; // Offset: 0x130 // Size: 0x10
	IntProperty WeekdayTimeLimit; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	StrProperty WeekdayTimeStart; // Offset: 0x148 // Size: 0x10
	StrProperty WeekdayTimeEnd; // Offset: 0x158 // Size: 0x10
	StrProperty TimeLimitTimeZone; // Offset: 0x168 // Size: 0x10
	IntProperty ShareUserDataStatus; // Offset: 0x178 // Size: 0x04
	IntProperty UseSocialFunctionStatus; // Offset: 0x17c // Size: 0x04
	IntProperty ParticipateSurveyStatus; // Offset: 0x180 // Size: 0x04
	IntProperty UserDataUsedForAIStatus; // Offset: 0x184 // Size: 0x04
	IntProperty ReceiveMarketingEmailStatus; // Offset: 0x188 // Size: 0x04
	IntProperty UserPaymentStatus; // Offset: 0x18c // Size: 0x04
	IntProperty PersonalRecoStatus; // Offset: 0x190 // Size: 0x04
	IntProperty NeedShareUserData; // Offset: 0x194 // Size: 0x04
	IntProperty NeedUseSocialFunction; // Offset: 0x198 // Size: 0x04
	IntProperty NeedParticipateSurvey; // Offset: 0x19c // Size: 0x04
	IntProperty NeedUserDataUsedForAI; // Offset: 0x1a0 // Size: 0x04
	IntProperty NeedReceiveMarketingEmail; // Offset: 0x1a4 // Size: 0x04
	IntProperty NeedUserPayment; // Offset: 0x1a8 // Size: 0x04
	IntProperty NeedPersonalReco; // Offset: 0x1ac // Size: 0x04
	IntProperty NeedAdultVerification; // Offset: 0x1b0 // Size: 0x04
	IntProperty AdultVerificationStatus; // Offset: 0x1b4 // Size: 0x04
	IntProperty AdultVerificationType; // Offset: 0x1b8 // Size: 0x04
	IntProperty NeedParentAdultVerification; // Offset: 0x1bc // Size: 0x04
	IntProperty ParentAdultVerificationStatus; // Offset: 0x1c0 // Size: 0x04
	IntProperty ParentAdultVerificationType; // Offset: 0x1c4 // Size: 0x04
	IntProperty RealnameAuthCompleteType; // Offset: 0x1c8 // Size: 0x04
	char pad_0x1CC[0x4]; // Offset: 0x1cc // Size: 0x04
	StrProperty RealnameAuthCompleteTS; // Offset: 0x1d0 // Size: 0x10
	IntProperty AdultVerificationCompleteType; // Offset: 0x1e0 // Size: 0x04
	char pad_0x1E4[0x4]; // Offset: 0x1e4 // Size: 0x04
	StrProperty AdultVerificationCompleteTS; // Offset: 0x1e8 // Size: 0x10
	IntProperty ParentAdultVerificationCompleteType; // Offset: 0x1f8 // Size: 0x04
	char pad_0x1FC[0x4]; // Offset: 0x1fc // Size: 0x04
	StrProperty ParentAdultVerificationCompleteTS; // Offset: 0x200 // Size: 0x10
	IntProperty ParentCertificateCompleteType; // Offset: 0x210 // Size: 0x04
	char pad_0x214[0x4]; // Offset: 0x214 // Size: 0x04
	StrProperty ParentCertificateCompleteTS; // Offset: 0x218 // Size: 0x10
	StrProperty AdultCheckStatusTS; // Offset: 0x228 // Size: 0x10
};

// Object Name: ScriptStruct Client.LobbyBgMatData
// Size: 0x10 // Inherited bytes: 0x00
struct FLobbyBgMatData {
	// Fields
	enum class ELobbyBgMatType matType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UMaterialInstance* matPtr; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Client.AABBBox
// Size: 0x18 // Inherited bytes: 0x00
struct FAABBBox {
	// Fields
	struct FVector Min; // Offset: 0x00 // Size: 0x0c
	struct FVector Max; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Client.ArrayLuaBPVar
// Size: 0x20 // Inherited bytes: 0x00
struct FArrayLuaBPVar {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Client.MapLuaBPVar
// Size: 0x20 // Inherited bytes: 0x00
struct FMapLuaBPVar {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Client.LuaBPVar
// Size: 0x20 // Inherited bytes: 0x00
struct FLuaBPVar {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Client.ScatterPlotPoint
// Size: 0x0c // Inherited bytes: 0x00
struct FScatterPlotPoint {
	// Fields
	struct FVector2D Position; // Offset: 0x00 // Size: 0x08
	float Weight; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Client.LobbyTeamState
// Size: 0x08 // Inherited bytes: 0x00
struct FLobbyTeamState {
	// Fields
	IntProperty UID; // Offset: 0x00 // Size: 0x04
	IntProperty team_state; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Client.SDKCallbackWrapper
// Size: 0x28 // Inherited bytes: 0x00
struct FSDKCallbackWrapper {
	// Fields
	enum class ESDKCallbackMethodId MethodId; // Offset: 0x00 // Size: 0x02
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty RetJson; // Offset: 0x08 // Size: 0x10
	StrProperty ExtraJson; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Client.AssetAsyncRequest
// Size: 0x20 // Inherited bytes: 0x00
struct FAssetAsyncRequest {
	// Fields
	StrProperty Path; // Offset: 0x00 // Size: 0x10
	DelegateProperty Callback; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Client.VibrateEntity
// Size: 0x48 // Inherited bytes: 0x00
struct FVibrateEntity {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AssetAbsPath; // Offset: 0x08 // Size: 0x10
	IntProperty PlayAmplitude; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty PlayKeyParam; // Offset: 0x20 // Size: 0x10
	IntProperty PlayPriority; // Offset: 0x30 // Size: 0x04
	float PlayDuration; // Offset: 0x34 // Size: 0x04
	bool bIsLoop; // Offset: 0x38 // Size: 0x01
	bool bIsValid; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	float PushTime; // Offset: 0x3c // Size: 0x04
	enum class EVibrateTriggerEventType EventType; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct Client.VibrateTriggerAction
// Size: 0x38 // Inherited bytes: 0x00
struct FVibrateTriggerAction {
	// Fields
	IntProperty VibrateAmplitude; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FVibrateTriggerMainItem TriggerMainItem; // Offset: 0x08 // Size: 0x18
	struct TArray<struct FVibrateTriggerSubItem> TriggerSubItemList; // Offset: 0x20 // Size: 0x10
	enum class EVibrateTriggerEventType TriggerEventType; // Offset: 0x30 // Size: 0x01
	enum class EVibrateTriggerActionType TriggerActionType; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
};

// Object Name: ScriptStruct Client.VibrateTriggerSubItem
// Size: 0x18 // Inherited bytes: 0x00
struct FVibrateTriggerSubItem {
	// Fields
	enum class EVibrateTriggerSubItemType SubItemType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Data; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Client.VibrateTriggerMainItem
// Size: 0x18 // Inherited bytes: 0x00
struct FVibrateTriggerMainItem {
	// Fields
	enum class EVibrateTriggerMainItemType MainItemType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Data; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Client.VibrateAssetItemConfig
// Size: 0x80 // Inherited bytes: 0x00
struct FVibrateAssetItemConfig {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FVibrateTriggerCondition TriggerCondition; // Offset: 0x08 // Size: 0x38
	StrProperty AssetPath; // Offset: 0x40 // Size: 0x10
	StrProperty PlayKeyParam; // Offset: 0x50 // Size: 0x10
	float AutoStopTime; // Offset: 0x60 // Size: 0x04
	IntProperty PlayPriority; // Offset: 0x64 // Size: 0x04
	float PlayDuration; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty AbsPath; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct Client.VibrateTriggerCondition
// Size: 0x38 // Inherited bytes: 0x00
struct FVibrateTriggerCondition {
	// Fields
	bool bOnlyMatchMainItemType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FVibrateTriggerMainItem TriggerMainItem; // Offset: 0x08 // Size: 0x18
	struct TArray<struct FVibrateTriggerSubItem> TriggerSubItemList; // Offset: 0x20 // Size: 0x10
	enum class EVibrateTriggerEventType TriggerEventType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

