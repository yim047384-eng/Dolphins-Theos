#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ClientNet.HDmpveNet
// Size: 0x3b0 // Inherited bytes: 0x28
struct UHDmpveNet : UObject {
	// Fields
	char pad_0x28[0x230]; // Offset: 0x28 // Size: 0x230
	struct UHDmpveSDK* _ConnectorInst; // Offset: 0x258 // Size: 0x08
	struct FScriptMulticastDelegate StartTickNetPackageDelegate; // Offset: 0x260 // Size: 0x10
	char pad_0x270[0x140]; // Offset: 0x270 // Size: 0x140

	// Functions

	// Object Name: Function ClientNet.HDmpveNet.SetTickNetMsgMaxTime
	// Flags: [Final|Native|Private]
	void SetTickNetMsgMaxTime(float MaxTime); // Offset: 0x103ca71f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnWebviewNotify
	// Flags: [Final|Native|Private|HasOutParms]
	void OnWebviewNotify(struct FWebviewInfoWrapper& webviewinfo); // Offset: 0x103ca7148 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function ClientNet.HDmpveNet.OnUAAssistantNotify
	// Flags: [Final|Native|Private|HasOutParms]
	void OnUAAssistantNotify(struct FUAAssistantInfoWrapper& uaAssistantInfo); // Offset: 0x103ca7098 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function ClientNet.HDmpveNet.OnTraceCallBack
	// Flags: [Final|Native|Private]
	void OnTraceCallBack(IntProperty code, StrProperty dataJson); // Offset: 0x103ca6f74 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.HDmpveNet.OnTConndAuthFailDelegate
	// Flags: [Final|Native|Private]
	void OnTConndAuthFailDelegate(); // Offset: 0x103ca6f60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.HDmpveNet.OnShareNotify
	// Flags: [Final|Native|Private]
	void OnShareNotify(IntProperty Result, IntProperty Platform); // Offset: 0x103ca6eac // Return & Params: Num(2) Size(0x8)

	// Object Name: Function ClientNet.HDmpveNet.OnRequestPermissionsResult
	// Flags: [Final|Native|Private]
	void OnRequestPermissionsResult(IntProperty code, StrProperty permission, StrProperty grantResult); // Offset: 0x103ca6cf0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function ClientNet.HDmpveNet.OnReceiveDataNotify
	// Flags: [Final|Native|Private]
	void OnReceiveDataNotify(IntProperty Result, struct TArray<char> Msg); // Offset: 0x103ca6bcc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.HDmpveNet.OnQuickLoginNotify
	// Flags: [Final|Native|Private|HasOutParms]
	void OnQuickLoginNotify(struct FWakeupInfoWrapper& wakeupinfo); // Offset: 0x103ca6b20 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function ClientNet.HDmpveNet.OnQRCodeGenQRImg
	// Flags: [Final|Native|Private]
	void OnQRCodeGenQRImg(IntProperty Tag, IntProperty Ret, StrProperty imgPath); // Offset: 0x103ca6a10 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function ClientNet.HDmpveNet.OnMigrateNotify
	// Flags: [Final|Native|Private]
	void OnMigrateNotify(IntProperty Result); // Offset: 0x103ca6994 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnLaunchInfo
	// Flags: [Final|Native|Private]
	void OnLaunchInfo(StrProperty roominfo); // Offset: 0x103ca68fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.HDmpveNet.OnIGShareUploadFinished
	// Flags: [Final|Native|Private]
	void OnIGShareUploadFinished(IntProperty Result, StrProperty Platform); // Offset: 0x103ca6828 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.HDmpveNet.OnGroupNotify
	// Flags: [Final|Native|Private|HasOutParms]
	void OnGroupNotify(struct FGroupInfoWrapper& groupInfo); // Offset: 0x103ca6778 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function ClientNet.HDmpveNet.OnGetWebviewActionNotify
	// Flags: [Final|Native|Private]
	void OnGetWebviewActionNotify(StrProperty webviewinfo); // Offset: 0x103ca6694 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.HDmpveNet.OnGetTicketNotify
	// Flags: [Final|Native|Private]
	void OnGetTicketNotify(StrProperty TicketInfo); // Offset: 0x103ca65b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.HDmpveNet.OnGetShortUrlNotify
	// Flags: [Final|Native|Private|HasOutParms]
	void OnGetShortUrlNotify(struct FShortURLInfoWrapper& shorturlinfo); // Offset: 0x103ca6504 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function ClientNet.HDmpveNet.OnGetPlatformFriendsNotify
	// Flags: [Final|Native|Private|HasOutParms]
	void OnGetPlatformFriendsNotify(struct FPlatformFriendInfoMap& platformFriends); // Offset: 0x103ca644c // Return & Params: Num(1) Size(0x58)

	// Object Name: Function ClientNet.HDmpveNet.OnGetCountryNoByIMSDK
	// Flags: [Final|Native|Private]
	void OnGetCountryNoByIMSDK(IntProperty Country); // Offset: 0x103ca63d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnGameMasterEvent
	// Flags: [Final|Native|Private]
	void OnGameMasterEvent(StrProperty EvenName, IntProperty Result); // Offset: 0x103ca62ac // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.HDmpveNet.OnConnectorStateChangeNotify
	// Flags: [Final|Native|Private]
	void OnConnectorStateChangeNotify(IntProperty State, IntProperty Param1, IntProperty Param2, IntProperty Param3); // Offset: 0x103ca6184 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function ClientNet.HDmpveNet.OnConnectorDisconnectedNotify
	// Flags: [Final|Native|Private]
	void OnConnectorDisconnectedNotify(IntProperty Result); // Offset: 0x103ca6108 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnConnectorConnectedNotify
	// Flags: [Final|Native|Private]
	void OnConnectorConnectedNotify(IntProperty IsConnected, IntProperty nResult); // Offset: 0x103ca6054 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function ClientNet.HDmpveNet.OnBindIntlNotify
	// Flags: [Final|Native|Private]
	void OnBindIntlNotify(IntProperty bindEventID); // Offset: 0x103ca5fd8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnAccountLogoutNotify
	// Flags: [Final|Native|Private]
	void OnAccountLogoutNotify(IntProperty Result); // Offset: 0x103ca5f5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnAccountLoginNotify
	// Flags: [Final|Native|Private]
	void OnAccountLoginNotify(IntProperty Result, StrProperty OpenID, IntProperty Channel, StrProperty resultMsg, IntProperty thirdRetCode); // Offset: 0x103ca5d14 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function ClientNet.HDmpveNet.OnAccountInitializeNotify
	// Flags: [Final|Native|Private]
	void OnAccountInitializeNotify(IntProperty Result); // Offset: 0x103ca5c98 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveNet.OnAccessTokenRefreshedNotify
	// Flags: [Final|Native|Private]
	void OnAccessTokenRefreshedNotify(IntProperty Result); // Offset: 0x103ca5c1c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class ClientNet.HDmpveSDK
// Size: 0x138 // Inherited bytes: 0x28
struct UHDmpveSDK : UObject {
	// Fields
	char pad_0x28[0x100]; // Offset: 0x28 // Size: 0x100
	IntProperty MaxBufferSize; // Offset: 0x128 // Size: 0x04
	char pad_0x12C[0xc]; // Offset: 0x12c // Size: 0x0c

	// Functions

	// Object Name: Function ClientNet.HDmpveSDK.UploadFile
	// Flags: [Final|Native|Static|Public]
	void UploadFile(StrProperty _imgPath, IntProperty shareFileType, StrProperty InDestKey); // Offset: 0x103ca8ce4 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function ClientNet.HDmpveSDK.ShareWithUploadPhotoByChannel
	// Flags: [Final|Native|Public]
	void ShareWithUploadPhotoByChannel(StrProperty _imgPath, IntProperty _channel, StrProperty _url, StrProperty _destKey); // Offset: 0x103ca8b64 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function ClientNet.HDmpveSDK.ShareWithPhotoByChannel_Simple
	// Flags: [Final|Native|Public]
	void ShareWithPhotoByChannel_Simple(StrProperty _imgPath, StrProperty _title, StrProperty _content, IntProperty _channel); // Offset: 0x103ca89e4 // Return & Params: Num(4) Size(0x34)

	// Object Name: Function ClientNet.HDmpveSDK.ShareFacebookLink
	// Flags: [Final|Native|Static|Public]
	void ShareFacebookLink(StrProperty ftitle, StrProperty fdesc, StrProperty fsharelink); // Offset: 0x103ca88ac // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.HDmpveSDK.SetTestLogin
	// Flags: [Final|Native|Public]
	void SetTestLogin(StrProperty OpenID, IntProperty Channel); // Offset: 0x103ca87d4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt2
	// Flags: [Final|Native|Public]
	void InviteSystemOfflineFriendsExt2(StrProperty _title, StrProperty _content, StrProperty _link); // Offset: 0x103ca8694 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt
	// Flags: [Final|Native|Public]
	void InviteSystemOfflineFriendsExt(StrProperty _title, StrProperty _content, StrProperty _link); // Offset: 0x103ca8554 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.HDmpveSDK.InviteFBFriendsUnregistered_Link
	// Flags: [Final|Native|Public]
	void InviteFBFriendsUnregistered_Link(StrProperty _title, StrProperty _content, StrProperty _link, StrProperty _extend); // Offset: 0x103ca83c0 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function ClientNet.HDmpveSDK.HttpDnsSetOpenid
	// Flags: [Final|Native|Static|Public]
	void HttpDnsSetOpenid(StrProperty InOpenid); // Offset: 0x103ca8330 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.HDmpveSDK.HttpDnsInit
	// Flags: [Final|Native|Static|Public]
	void HttpDnsInit(StrProperty InAppId, bool InIsDebug, IntProperty InTimeout); // Offset: 0x103ca8218 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function ClientNet.HDmpveSDK.HttpDnsDestroy
	// Flags: [Final|Native|Static|Public]
	void HttpDnsDestroy(); // Offset: 0x103ca8204 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.HDmpveSDK.GRomePingDuallink
	// Flags: [Final|Native|Static|Public]
	IntProperty GRomePingDuallink(StrProperty InHost); // Offset: 0x103ca816c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.HDmpveSDK.GRomeGetDuallinkStatus
	// Flags: [Final|Native|Static|Public]
	IntProperty GRomeGetDuallinkStatus(); // Offset: 0x103ca8138 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveSDK.GetUploadUrlByFile
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUploadUrlByFile(StrProperty file); // Offset: 0x103ca8030 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function ClientNet.HDmpveSDK.GetUploadUrl
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUploadUrl(); // Offset: 0x103ca7fcc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.HDmpveSDK.GetUploadStatusByFile
	// Flags: [Final|Native|Static|Public]
	IntProperty GetUploadStatusByFile(StrProperty file); // Offset: 0x103ca7ee8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.HDmpveSDK.GetUploadStatus
	// Flags: [Final|Native|Static|Public]
	IntProperty GetUploadStatus(); // Offset: 0x103ca7eb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.HDmpveSDK.ClearFileUpload
	// Flags: [Final|Native|Static|Public]
	void ClearFileUpload(StrProperty file); // Offset: 0x103ca7dd8 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class ClientNet.HDmpveSDKDelegates
// Size: 0x158 // Inherited bytes: 0x28
struct UHDmpveSDKDelegates : UObject {
	// Fields
	struct FScriptMulticastDelegate ConnectNotifyDelegate; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate ConnectStateChangedNotifyDelegate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate DisconnectNotifyDelegate; // Offset: 0x48 // Size: 0x10
	struct FScriptMulticastDelegate ReceiveDataNotifyDelegate; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate AccountInitializeNotifyDelegate; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate AccountLoginNotifyDelegate; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate AccessTokenRefreshedNotifyDelegate; // Offset: 0x88 // Size: 0x10
	struct FScriptMulticastDelegate AccountLogoutNotifyDelegate; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate ShareNotifyDelegate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate GroupNotifyDelegate; // Offset: 0xb8 // Size: 0x10
	struct FScriptMulticastDelegate QuickLoginNotifyDelegate; // Offset: 0xc8 // Size: 0x10
	struct FScriptMulticastDelegate QRCodeGenQRImgDelegate; // Offset: 0xd8 // Size: 0x10
	struct FScriptMulticastDelegate QRCodeLaunchDelegate; // Offset: 0xe8 // Size: 0x10
	struct FScriptMulticastDelegate WebviewNotifyDelegate; // Offset: 0xf8 // Size: 0x10
	struct FScriptMulticastDelegate ShortUrlNotifyDelegate; // Offset: 0x108 // Size: 0x10
	struct FScriptMulticastDelegate OnGetTicketNotifyDelegate; // Offset: 0x118 // Size: 0x10
	struct FScriptMulticastDelegate GameMasterEventDelegate; // Offset: 0x128 // Size: 0x10
	struct FScriptMulticastDelegate OnRequestPermissionResultDelegate; // Offset: 0x138 // Size: 0x10
	struct FScriptMulticastDelegate TConndAuthFailDelegate; // Offset: 0x148 // Size: 0x10
};

// Object Name: Class ClientNet.IMSDKConfig
// Size: 0x328 // Inherited bytes: 0x28
struct UIMSDKConfig : UObject {
	// Fields
	StrProperty IMSDK_GAME_ID; // Offset: 0x28 // Size: 0x10
	StrProperty IMSDK_SERVER_SDKAPI_RELEASE; // Offset: 0x38 // Size: 0x10
	StrProperty IMSDK_SERVER_SDKAPI_BACKUP_RELEASE; // Offset: 0x48 // Size: 0x10
	StrProperty IMSDK_SERVER_NOTICE_RELEASE; // Offset: 0x58 // Size: 0x10
	StrProperty IMSDK_SERVER_HELP_RELEASE; // Offset: 0x68 // Size: 0x10
	StrProperty IMSDK_SERVER_HELP_SCHEME_RELEASE; // Offset: 0x78 // Size: 0x10
	StrProperty IMSDK_SERVER_CONFIG_RELEASE; // Offset: 0x88 // Size: 0x10
	StrProperty IMSDK_LOG_LEVEL_RELEASE; // Offset: 0x98 // Size: 0x10
	StrProperty IMSDK_DEBUG_RELEASE; // Offset: 0xa8 // Size: 0x10
	StrProperty IMSDK_INNER_VOLLEY_DEBUG_RELEASE; // Offset: 0xb8 // Size: 0x10
	StrProperty IMSDK_SERVER_SDKAPI_TEST; // Offset: 0xc8 // Size: 0x10
	StrProperty IMSDK_SERVER_SDKAPI_BACKUP_TEST; // Offset: 0xd8 // Size: 0x10
	StrProperty IMSDK_SERVER_NOTICE_TEST; // Offset: 0xe8 // Size: 0x10
	StrProperty IMSDK_SERVER_HELP_TEST; // Offset: 0xf8 // Size: 0x10
	StrProperty IMSDK_SERVER_HELP_SCHEME_TEST; // Offset: 0x108 // Size: 0x10
	StrProperty IMSDK_SERVER_CONFIG_TEST; // Offset: 0x118 // Size: 0x10
	StrProperty IMSDK_LOG_LEVEL_TEST; // Offset: 0x128 // Size: 0x10
	StrProperty IMSDK_DEBUG_TEST; // Offset: 0x138 // Size: 0x10
	StrProperty IMSDK_INNER_VOLLEY_DEBUG_TEST; // Offset: 0x148 // Size: 0x10
	StrProperty IMSDK_SERVER_UNIFIED_ACCOUNT_RELEASE; // Offset: 0x158 // Size: 0x10
	StrProperty IMSDK_SERVER_UNIFIED_ACCOUNT_BACKUP_RELEASE; // Offset: 0x168 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_APP_ID_RELEASE; // Offset: 0x178 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_SDK_KEY_RELEASE; // Offset: 0x188 // Size: 0x10
	StrProperty IMSDK_TWITTER_WEB_LOGIN_URL_RELEASE; // Offset: 0x198 // Size: 0x10
	StrProperty MIGRATE_WEB_URL_RELEASE; // Offset: 0x1a8 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_CHECK_PASSWORD; // Offset: 0x1b8 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_PLATFORM_TYPE; // Offset: 0x1c8 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_CHANNEL_ID; // Offset: 0x1d8 // Size: 0x10
	StrProperty IMSDK_SERVER_UNIFIED_ACCOUNT_TEST; // Offset: 0x1e8 // Size: 0x10
	StrProperty IMSDK_SERVER_UNIFIED_ACCOUNT_BACKUP_TEST; // Offset: 0x1f8 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_APP_ID_TEST; // Offset: 0x208 // Size: 0x10
	StrProperty IMSDK_UNIFIED_ACCOUNT_SDK_KEY_TEST; // Offset: 0x218 // Size: 0x10
	StrProperty IMSDK_TWITTER_WEB_LOGIN_URL_TEST; // Offset: 0x228 // Size: 0x10
	StrProperty MIGRATE_WEB_URL_TEST; // Offset: 0x238 // Size: 0x10
	StrProperty MIGRATE_WEB_USER_AGENT_STRING; // Offset: 0x248 // Size: 0x10
	StrProperty IMSDK_ACCOUNT_CHECK_POPUP_STATUS_ENABLE; // Offset: 0x258 // Size: 0x10
	StrProperty IMSDK_ACCOUNT_VERIFY_OPT_SID_ENABLE; // Offset: 0x268 // Size: 0x10
	StrProperty IMSDK_ACCOUNT_SEND_CODE_WEB_VERIFY; // Offset: 0x278 // Size: 0x10
	StrProperty IMSDK_ADMOB_TEST_DEVICE; // Offset: 0x288 // Size: 0x10
	StrProperty IMSDK_ACCOUNT_CAPTCHA_APP_ID_FOR_VERIFY_CODE; // Offset: 0x298 // Size: 0x10
	StrProperty IMSDK_SERVER_QR_CODE_RELEASE; // Offset: 0x2a8 // Size: 0x10
	StrProperty IMSDK_SERVER_QR_CODE_TEST; // Offset: 0x2b8 // Size: 0x10
	StrProperty IMSDK_QR_CODE_SDK_KEY; // Offset: 0x2c8 // Size: 0x10
	StrProperty IMSDK_NEW_API_ENABLE_LEVEL_RELEASE; // Offset: 0x2d8 // Size: 0x10
	StrProperty IMSDK_NEW_API_ENABLE_LEVEL_TEST; // Offset: 0x2e8 // Size: 0x10
	StrProperty IMSDK_LOCAL_LOG_ENABLE; // Offset: 0x2f8 // Size: 0x10
	StrProperty IMSDK_WEB_LOGIN_BASE_URL_RELEASE; // Offset: 0x308 // Size: 0x10
	StrProperty IMSDK_WEB_LOGIN_BASE_URL_TEST; // Offset: 0x318 // Size: 0x10

	// Functions

	// Object Name: Function ClientNet.IMSDKConfig.PatchMSDKConfigWithAreaConfig
	// Flags: [Final|Native|Public]
	void PatchMSDKConfigWithAreaConfig(); // Offset: 0x103caa2f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKConfig.GetIMSDKLogLevel
	// Flags: [Final|Native|Public]
	StrProperty GetIMSDKLogLevel(IntProperty InEnv); // Offset: 0x103caa240 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class ClientNet.IMSDKHelper
// Size: 0xb0 // Inherited bytes: 0x28
struct UIMSDKHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate WebviewVerifyCallbackDelegate; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnLoadAdvertiseResult; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnShowAdvertiseResult; // Offset: 0x48 // Size: 0x10
	struct FScriptMulticastDelegate OnGenerateQRCodeNotify; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate OnQRCodeStatusNotify; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate OnInvalidateQRCodeNotify; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate OnLoginCommandDelegate; // Offset: 0x88 // Size: 0x10
	struct FScriptMulticastDelegate OnOpenAppByUrlDelegate; // Offset: 0x98 // Size: 0x10
	char pad_0xA8[0x8]; // Offset: 0xa8 // Size: 0x08

	// Functions

	// Object Name: Function ClientNet.IMSDKHelper.UpdateIMSDKBindResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateIMSDKBindResult(StrProperty InBindResult); // Offset: 0x103cae794 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SwitchQRCodeLoginResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SwitchQRCodeLoginResult(StrProperty InOpenid); // Offset: 0x103cae6ec // Return & Params: Num(2) Size(0x11)

	// Object Name: Function ClientNet.IMSDKHelper.StartWebVerify
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartWebVerify(StrProperty InExtraInfo, StrProperty InVerifyAppId, StrProperty InAccount); // Offset: 0x103cae5ac // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.IMSDKHelper.SetWindowEditorLoginTokenIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWindowEditorLoginTokenIndex(IntProperty Index); // Offset: 0x103cae530 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.SetupLoginCacheInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetupLoginCacheInfo(IntProperty InChannelId, bool InIsQuickLogin); // Offset: 0x103cae474 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ClientNet.IMSDKHelper.SetupAdjustDMA
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetupAdjustDMA(IntProperty InEEA, IntProperty InAdPersonalization, IntProperty InAdUserData); // Offset: 0x103cae384 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function ClientNet.IMSDKHelper.SetUgId
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUgId(StrProperty InUgId); // Offset: 0x103cae2ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SetNoAuthOpenid
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNoAuthOpenid(StrProperty OpenID); // Offset: 0x103cae208 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SetMSDKConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetMSDKConfig(MapProperty& InConfigMaps, bool InClearLoginData); // Offset: 0x103cae108 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function ClientNet.IMSDKHelper.SetLoginType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLoginType(StrProperty InIMSDKChannelName); // Offset: 0x103cae070 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SetLoginResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SetLoginResult(StrProperty InLoginRetJson); // Offset: 0x103cadfa0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function ClientNet.IMSDKHelper.SetIMSDKEnv
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIMSDKEnv(IntProperty iEnv); // Offset: 0x103cadf24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.SetGameDeviceId
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetGameDeviceId(StrProperty InGameDeviceId); // Offset: 0x103cade7c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function ClientNet.IMSDKHelper.SetChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetChannel(StrProperty InIMSDKChannelName); // Offset: 0x103cadde4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SetAdvertiseUserID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAdvertiseUserID(StrProperty UserId); // Offset: 0x103cadd4c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SetAdvertiseCustomData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAdvertiseCustomData(StrProperty InCustomData); // Offset: 0x103cadcb4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveLastIMSDKChannelID(IntProperty channelId); // Offset: 0x103cadc38 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.RequestVerifyCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestVerifyCode(StrProperty InPhoneOrEmail, IntProperty InAccountType, IntProperty InUseForType, StrProperty InPhoneAreaCode, StrProperty InLanuageCode, StrProperty InExtraJson); // Offset: 0x103cada28 // Return & Params: Num(6) Size(0x48)

	// Object Name: Function ClientNet.IMSDKHelper.RefreshLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshLogin(); // Offset: 0x103cada14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.RecoverGuest
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RecoverGuest(StrProperty channelUserId); // Offset: 0x103cad96c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function ClientNet.IMSDKHelper.QuickLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QuickLogin(); // Offset: 0x103cad958 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.QueryQRCodeStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QueryQRCodeStatus(StrProperty InCodeId, StrProperty InRandStr, StrProperty InExtraJson); // Offset: 0x103cad818 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.IMSDKHelper.PlayAdvertise
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayAdvertise(); // Offset: 0x103cad804 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.OriginalShare
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OriginalShare(IntProperty InShareType, StrProperty InMSDKChannelName, StrProperty InTitle, StrProperty InContent, StrProperty InLink, StrProperty InThumbPath, StrProperty InImagePath, StrProperty InExtraJson, StrProperty InUser); // Offset: 0x103cad4e0 // Return & Params: Num(9) Size(0x88)

	// Object Name: Function ClientNet.IMSDKHelper.OriginalLogin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void OriginalLogin(StrProperty InExtraJson, struct TArray<StrProperty>& InPermissions, bool InNeedGuid); // Offset: 0x103cad390 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function ClientNet.IMSDKHelper.OriginalBind
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OriginalBind(StrProperty InChannel, StrProperty InSubChannel, StrProperty InExtra); // Offset: 0x103cad250 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.IMSDKHelper.OnCommandLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnCommandLogin(StrProperty InCmd, StrProperty InExtra); // Offset: 0x103cad164 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function ClientNet.IMSDKHelper.ModifyAccountInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ModifyAccountInfo(StrProperty InAccount, IntProperty InAccountType, IntProperty InVerifyType, StrProperty InVerifyData, StrProperty InPhoneAreaCode, StrProperty InLanuageCode, StrProperty InMondifyToAccount, IntProperty InModifyAccountType, StrProperty InModifyVerifyCode, StrProperty InModifyPhoneAreaCode, StrProperty InExtraJson); // Offset: 0x103cacdb8 // Return & Params: Num(11) Size(0x90)

	// Object Name: Function ClientNet.IMSDKHelper.LogoutWith
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LogoutWith(IntProperty InMSDKChannelId); // Offset: 0x103cacd3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.LogoutQRCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LogoutQRCode(StrProperty InOpenid); // Offset: 0x103cacca4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.LoadAdvertise
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadAdvertise(StrProperty InAdvertiseUnitId, StrProperty InExtraJson); // Offset: 0x103cacbb8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsEqualCurLoginPlatform(StrProperty strChannel); // Offset: 0x103cacac4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function ClientNet.IMSDKHelper.IsChannelInstalled
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsChannelInstalled(StrProperty InChannelId); // Offset: 0x103caca1c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function ClientNet.IMSDKHelper.IsChannelBound
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsChannelBound(IntProperty InMSDKChannelId); // Offset: 0x103cac990 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindWhatsApp
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindWhatsApp(); // Offset: 0x103cac95c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindVK
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindVK(); // Offset: 0x103cac928 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindUnifiedAccount(); // Offset: 0x103cac8f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindTwitter(); // Offset: 0x103cac8c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindTikTok
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindTikTok(); // Offset: 0x103cac88c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindNosChat
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindNosChat(); // Offset: 0x103cac858 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindLine(); // Offset: 0x103cac824 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindHMS
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindHMS(); // Offset: 0x103cac7f0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindGooglePlay(); // Offset: 0x103cac7bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindGameCenter(); // Offset: 0x103cac788 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindFB
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindFB(); // Offset: 0x103cac754 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindDiscord(); // Offset: 0x103cac720 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindBgBg
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindBgBg(); // Offset: 0x103cac6ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.IsAlreadyBindApple
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAlreadyBindApple(); // Offset: 0x103cac6b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClientNet.IMSDKHelper.InvalidateQRCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InvalidateQRCode(StrProperty InCodeId, StrProperty InRandStr, StrProperty InExtraJson); // Offset: 0x103cac578 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.IMSDKHelper.InitAdvertiseSDK_iOS
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitAdvertiseSDK_iOS(); // Offset: 0x103cac564 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.InitAdvertiseSDK
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitAdvertiseSDK(); // Offset: 0x103cac550 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.GetVerifyAppId4SendCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetVerifyAppId4SendCode(); // Offset: 0x103cac4ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetShortUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetShortUrl(StrProperty URL, StrProperty Mask, StrProperty Extra); // Offset: 0x103cac2d8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.IMSDKHelper.GetSessionId
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetSessionId(); // Offset: 0x103cac274 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetOpenId
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetOpenId(); // Offset: 0x103cac210 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetLoginResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FIMSDKLoginResult GetLoginResult(); // Offset: 0x103cac1ac // Return & Params: Num(1) Size(0x40)

	// Object Name: Function ClientNet.IMSDKHelper.GetLastLoginResultJson
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetLastLoginResultJson(); // Offset: 0x103cac148 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetLastIMSDKChannelID(); // Offset: 0x103cac114 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UIMSDKHelper* GetInstance(); // Offset: 0x103cac0e0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function ClientNet.IMSDKHelper.GetIMSDKWebLoginParamsLaunchFromWeb
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetIMSDKWebLoginParamsLaunchFromWeb(StrProperty InState, StrProperty InChallenge); // Offset: 0x103cabfbc // Return & Params: Num(3) Size(0x30)

	// Object Name: Function ClientNet.IMSDKHelper.GetIMSDKWebLoginParams
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetIMSDKWebLoginParams(StrProperty InURL, StrProperty InAppId, StrProperty InVerifier); // Offset: 0x103cabe44 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function ClientNet.IMSDKHelper.GetIMSDKLoginTokenExpireTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetIMSDKLoginTokenExpireTime(); // Offset: 0x103cabde0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetIMSDKLoginToken
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetIMSDKLoginToken(); // Offset: 0x103cabd7c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetIMSDKClientApiParams
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetIMSDKClientApiParams(); // Offset: 0x103cabd18 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetHDmpveChannelID
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetHDmpveChannelID(); // Offset: 0x103cabce4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.GetDisplayLoginErrorCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetDisplayLoginErrorCode(); // Offset: 0x103cabc80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetCurLoginPlatform
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetCurLoginPlatform(); // Offset: 0x103cabc1c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetChannelNickname
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetChannelNickname(); // Offset: 0x103cabbb8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetBindRet
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetBindRet(); // Offset: 0x103cabb54 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetBindInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetBindInfo(); // Offset: 0x103cabb40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.GetBindCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetBindCount(); // Offset: 0x103cabb0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ClientNet.IMSDKHelper.GetAllQRCodeLoginResults
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAllQRCodeLoginResults(); // Offset: 0x103cabaa8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetAdjustID
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAdjustID(); // Offset: 0x103caba44 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GetAdjustAttr
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAdjustAttr(); // Offset: 0x103cab9e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.GenerateQRCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GenerateQRCode(StrProperty InExtraJson); // Offset: 0x103cab948 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.ConvertTConndChannel2IMSDKChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ConvertTConndChannel2IMSDKChannel(IntProperty InTConndChannelId); // Offset: 0x103cab8bc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ConvertStrToIMSDKChannel(StrProperty strChannel); // Offset: 0x103cab7c8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty ConvertIMSDKChannelToStr(IntProperty imsdkChannel, bool caseSensitive); // Offset: 0x103cab6d4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function ClientNet.IMSDKHelper.ConvertIMSDKChannel2TConndChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty ConvertIMSDKChannel2TConndChannel(IntProperty InIMSDKChannelId); // Offset: 0x103cab648 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function ClientNet.IMSDKHelper.ContinueLoginWithLocalResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ContinueLoginWithLocalResult(); // Offset: 0x103cab634 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.ClearLoginResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearLoginResult(); // Offset: 0x103cab620 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.CheckVerifyCodeValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckVerifyCodeValid(StrProperty InAccount, IntProperty InAccountType, StrProperty InPhoneAreaCode, StrProperty InVerifyCode, IntProperty InCodeType, StrProperty InLanuageCode, StrProperty InExtraJson); // Offset: 0x103cab3b8 // Return & Params: Num(7) Size(0x60)

	// Object Name: Function ClientNet.IMSDKHelper.CheckLocalForceLoginFlag
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CheckLocalForceLoginFlag(IntProperty InChannel); // Offset: 0x103cab32c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ClientNet.IMSDKHelper.CheckIsRegisted
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckIsRegisted(StrProperty InAccount, IntProperty InAccountType, StrProperty InPhoneAreaCode, StrProperty InLanuageCode, StrProperty InExtraJson); // Offset: 0x103cab158 // Return & Params: Num(5) Size(0x48)

	// Object Name: Function ClientNet.IMSDKHelper.ChangePassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangePassword(StrProperty InAccount, IntProperty InAccountType, StrProperty InVerifyCode, StrProperty InNewPassword, StrProperty InAreaCode, StrProperty InLangType, StrProperty InExtraJson); // Offset: 0x103caaedc // Return & Params: Num(7) Size(0x68)

	// Object Name: Function ClientNet.IMSDKHelper.BindWhatsApp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindWhatsApp(StrProperty InExtraJson); // Offset: 0x103caae44 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.BindVK
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindVK(); // Offset: 0x103caae30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindUnifiedAccount
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindUnifiedAccount(StrProperty InExtraJson); // Offset: 0x103caad98 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.BindTwitter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindTwitter(); // Offset: 0x103caad84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindTikTok
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindTikTok(StrProperty InExtraJson); // Offset: 0x103caacec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.IMSDKHelper.BindNosChat
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindNosChat(); // Offset: 0x103caacd8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindLine(); // Offset: 0x103caacc4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindHMS
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindHMS(); // Offset: 0x103caacb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindGooglePlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindGooglePlay(); // Offset: 0x103caac9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindGameCenter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindGameCenter(); // Offset: 0x103caac88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindFB
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindFB(); // Offset: 0x103caac74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindDiscord
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindDiscord(); // Offset: 0x103caac60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindChannel(IntProperty InMSDKChannelId, StrProperty InExtraJson); // Offset: 0x103caab8c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.IMSDKHelper.BindBgBg
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindBgBg(); // Offset: 0x103caab78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.IMSDKHelper.BindApple
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BindApple(); // Offset: 0x103caab64 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class ClientNet.MockGameSvrClientNet
// Size: 0x120 // Inherited bytes: 0x28
struct UMockGameSvrClientNet : UObject {
	// Fields
	char pad_0x28[0xe0]; // Offset: 0x28 // Size: 0xe0
	StrProperty Host; // Offset: 0x108 // Size: 0x10
	IntProperty Port; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x4]; // Offset: 0x11c // Size: 0x04

	// Functions

	// Object Name: Function ClientNet.MockGameSvrClientNet.LoginMockGameSvr
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoginMockGameSvr(StrProperty UID, StrProperty PlayerName, IntProperty ModeID); // Offset: 0x103cb0cec // Return & Params: Num(3) Size(0x24)
};

// Object Name: Class ClientNet.StoreGameHelper
// Size: 0x38 // Inherited bytes: 0x28
struct UStoreGameHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate StoreGameCallback; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function ClientNet.StoreGameHelper.UnlockGPAchievement
	// Flags: [Final|Native|Public]
	void UnlockGPAchievement(StrProperty InAchievement); // Offset: 0x103cb2410 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function ClientNet.StoreGameHelper.UnInitialize
	// Flags: [Final|Native|Public]
	void UnInitialize(); // Offset: 0x103cb23fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.ShowLeaderboard
	// Flags: [Final|Native|Public]
	void ShowLeaderboard(StrProperty InIdentifier, IntProperty InTimeScope); // Offset: 0x103cb2324 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.StoreGameHelper.ShowAchievements
	// Flags: [Final|Native|Public]
	void ShowAchievements(); // Offset: 0x103cb2310 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.RequestServerAuthCode
	// Flags: [Final|Native|Public]
	void RequestServerAuthCode(); // Offset: 0x103cb22fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.ReportScore
	// Flags: [Final|Native|Public]
	void ReportScore(int64_t InScore, StrProperty InIdentifier); // Offset: 0x103cb2228 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.StoreGameHelper.ReportAchievement1
	// Flags: [Final|Native|Public]
	void ReportAchievement1(StrProperty InIdentifier, double percent); // Offset: 0x103cb2150 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.StoreGameHelper.ReportAchievement
	// Flags: [Final|Native|Public]
	void ReportAchievement(StrProperty InIdentifier, double percent); // Offset: 0x103cb2078 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ClientNet.StoreGameHelper.LoginGPManual
	// Flags: [Final|Native|Public]
	void LoginGPManual(); // Offset: 0x103cb2064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.LoadReceivedChallenges
	// Flags: [Final|Native|Public]
	void LoadReceivedChallenges(); // Offset: 0x103cb2050 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.LoadLeaderboardScores
	// Flags: [Final|Native|Public]
	void LoadLeaderboardScores(StrProperty InIdentifier, IntProperty InRangeLocation, IntProperty InRangeLength, IntProperty InPlayScope, IntProperty InTimeScope); // Offset: 0x103cb1ec0 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function ClientNet.StoreGameHelper.LoadFriends
	// Flags: [Final|Native|Public]
	void LoadFriends(); // Offset: 0x103cb1eac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.LoadAchievements
	// Flags: [Final|Native|Public]
	void LoadAchievements(); // Offset: 0x103cb1e98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.IssueChallengeWithScore
	// Flags: [Final|Native|Public|HasOutParms]
	void IssueChallengeWithScore(MapProperty& InScoreInfo, MapProperty& InPlayerInfo, struct TArray<StrProperty>& InPlayerIDs, StrProperty InMessage); // Offset: 0x103cb1cac // Return & Params: Num(4) Size(0xc0)

	// Object Name: Function ClientNet.StoreGameHelper.IssueChallengeWithArchivement
	// Flags: [Final|Native|Public|HasOutParms]
	void IssueChallengeWithArchivement(MapProperty& InAchievementInfo, struct TArray<StrProperty>& InPlayerIDs, StrProperty InMessage); // Offset: 0x103cb1b38 // Return & Params: Num(3) Size(0x70)

	// Object Name: Function ClientNet.StoreGameHelper.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(); // Offset: 0x103cb1b24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.InitGP
	// Flags: [Final|Native|Public]
	void InitGP(); // Offset: 0x103cb1b10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.IncreaseGPAchievement
	// Flags: [Final|Native|Public]
	void IncreaseGPAchievement(StrProperty InAchievement, IntProperty InStep); // Offset: 0x103cb1a38 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function ClientNet.StoreGameHelper.Get
	// Flags: [Final|Native|Static|Public]
	struct UStoreGameHelper* Get(); // Offset: 0x103cb1a04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function ClientNet.StoreGameHelper.Destroy
	// Flags: [Final|Native|Static|Public]
	void Destroy(); // Offset: 0x103cb19f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ClientNet.StoreGameHelper.AuthenticateLocalPlayer
	// Flags: [Final|Native|Public]
	void AuthenticateLocalPlayer(); // Offset: 0x103cb19dc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class ClientNet.iTOPPrefs
// Size: 0x100 // Inherited bytes: 0x28
struct UiTOPPrefs : USaveGame {
	// Fields
	bool bForceLogin; // Offset: 0x28 // Size: 0x01
	bool bFirstLoginGuestAfterBindFB; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x2]; // Offset: 0x2a // Size: 0x02
	IntProperty nHDmpveChannelID; // Offset: 0x2c // Size: 0x04
	IntProperty nLastIMSDKChannelID; // Offset: 0x30 // Size: 0x04
	bool bNeedFBForceLoginForRelationChainError; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	int64_t lastTimeSetFBForceLoginForRelationChainError; // Offset: 0x38 // Size: 0x08
	bool bNeedWXForceLoginForRelationChainError; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
	int64_t lastTimeSetWXForceLoginForRelationChainError; // Offset: 0x48 // Size: 0x08
	bool bNeedVKForceLoginForRelationChainError; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	int64_t lastTimeSetVKForceLoginForRelationChainError; // Offset: 0x58 // Size: 0x08
	bool bNeedLineForceLoginForRelationChainError; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
	int64_t lastTimeSetLineForceLoginForRelationChainError; // Offset: 0x68 // Size: 0x08
	bool bNeedBgBgForceLoginForRelationChainError; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	int64_t lastTimeSetBgBgForceLoginForRelationChainError; // Offset: 0x78 // Size: 0x08
	bool bNeedAppleForceLoginForRelationChainError; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
	int64_t lastTimeSetAppleForceLoginForRelationChainError; // Offset: 0x88 // Size: 0x08
	bool bNeedUnifiedAccountForceLoginForRelationChainError; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	int64_t lastTimeSetUnifiedAccountForceLoginForRelationChainError; // Offset: 0x98 // Size: 0x08
	bool bNeedHMSForceLoginForRelationChainError; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x7]; // Offset: 0xa1 // Size: 0x07
	int64_t lastTimeSetHMSForceLoginForRelationChainError; // Offset: 0xa8 // Size: 0x08
	bool bNeedDiscordForceLoginForRelationChainError; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
	int64_t lastTimeSetDiscordForceLoginForRelationChainError; // Offset: 0xb8 // Size: 0x08
	bool bNeedWhatsAppForceLoginForRelationChainError; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x7]; // Offset: 0xc1 // Size: 0x07
	int64_t lastTimeSetWhatsappForceLoginForRelationChainError; // Offset: 0xc8 // Size: 0x08
	bool bNeedTikTokForceLoginForRelationChainError; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07
	int64_t lastTimeSetTikTokForceLoginForRelationChainError; // Offset: 0xd8 // Size: 0x08
	bool bNeedForceLoginForRelationChainError; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
	int64_t lastTimeSetForceLoginForRelationChainError; // Offset: 0xe8 // Size: 0x08
	StrProperty lastLoginArea; // Offset: 0xf0 // Size: 0x10
};

