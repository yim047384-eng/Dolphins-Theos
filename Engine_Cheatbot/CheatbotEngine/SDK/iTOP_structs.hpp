#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct iTOP.iTOPResult
// Size: 0x40 // Inherited bytes: 0x00
struct FiTOPResult {
	// Fields
	IntProperty imsdkRetCode; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty imsdkRetMsg; // Offset: 0x08 // Size: 0x10
	IntProperty thirdRetCode; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty thirdRetMsg; // Offset: 0x20 // Size: 0x10
	StrProperty retExtraJson; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.IMSDKQRCodeStatusResult
// Size: 0x58 // Inherited bytes: 0x40
struct FIMSDKQRCodeStatusResult : FiTOPResult {
	// Fields
	IntProperty status; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty Channel; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.IMSDKQRCodeResult
// Size: 0x80 // Inherited bytes: 0x40
struct FIMSDKQRCodeResult : FiTOPResult {
	// Fields
	StrProperty codeId; // Offset: 0x40 // Size: 0x10
	StrProperty randStr; // Offset: 0x50 // Size: 0x10
	IntProperty nextAt; // Offset: 0x60 // Size: 0x04
	IntProperty expireAt; // Offset: 0x64 // Size: 0x04
	IntProperty createAt; // Offset: 0x68 // Size: 0x04
	IntProperty queryInterval; // Offset: 0x6c // Size: 0x04
	StrProperty codeData; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.IMSDKWebVerifyResult
// Size: 0x50 // Inherited bytes: 0x40
struct FIMSDKWebVerifyResult : FiTOPResult {
	// Fields
	StrProperty captcha; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.IMSDKUnifiedAccountResult
// Size: 0xe8 // Inherited bytes: 0x40
struct FIMSDKUnifiedAccountResult : FiTOPResult {
	// Fields
	IntProperty Ret; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty retMsg; // Offset: 0x48 // Size: 0x10
	StrProperty accountToken; // Offset: 0x58 // Size: 0x10
	StrProperty UID; // Offset: 0x68 // Size: 0x10
	StrProperty expireTime; // Offset: 0x78 // Size: 0x10
	IntProperty verifyCodeExpire; // Offset: 0x88 // Size: 0x04
	IntProperty isRegister; // Offset: 0x8c // Size: 0x04
	IntProperty isSetPwd; // Offset: 0x90 // Size: 0x04
	IntProperty isReceiveEmail; // Offset: 0x94 // Size: 0x04
	StrProperty emailAccount; // Offset: 0x98 // Size: 0x10
	StrProperty phoneAccount; // Offset: 0xa8 // Size: 0x10
	StrProperty phoneExtra; // Offset: 0xb8 // Size: 0x10
	IntProperty accountType; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
	StrProperty phoneArea; // Offset: 0xd0 // Size: 0x10
	IntProperty sendType; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
};

// Object Name: ScriptStruct iTOP.IMSDKShortUrlResult
// Size: 0x50 // Inherited bytes: 0x40
struct FIMSDKShortUrlResult : FiTOPResult {
	// Fields
	StrProperty shortUrl; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPFriendResult
// Size: 0x50 // Inherited bytes: 0x40
struct FiTOPFriendResult : FiTOPResult {
	// Fields
	struct TArray<struct FiTOPFriendInfo> sameGameFriendList; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPFriendInfo
// Size: 0x78 // Inherited bytes: 0x00
struct FiTOPFriendInfo {
	// Fields
	StrProperty OpenID; // Offset: 0x00 // Size: 0x10
	StrProperty channelUserId; // Offset: 0x10 // Size: 0x10
	StrProperty channelId; // Offset: 0x20 // Size: 0x10
	StrProperty UserName; // Offset: 0x30 // Size: 0x10
	IntProperty Gender; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty pictureUrl; // Offset: 0x48 // Size: 0x10
	StrProperty email; // Offset: 0x58 // Size: 0x10
	StrProperty phone; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPLoginResult
// Size: 0xf8 // Inherited bytes: 0x40
struct FiTOPLoginResult : FiTOPResult {
	// Fields
	StrProperty Channel; // Offset: 0x40 // Size: 0x10
	IntProperty channelId; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty channelToken; // Offset: 0x58 // Size: 0x10
	IntProperty channelTokenExpire; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty channelUserId; // Offset: 0x70 // Size: 0x10
	IntProperty GameID; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty Guid; // Offset: 0x88 // Size: 0x10
	StrProperty guidUserBirthday; // Offset: 0x98 // Size: 0x10
	StrProperty guidUserNick; // Offset: 0xa8 // Size: 0x10
	StrProperty guidUserPortrait; // Offset: 0xb8 // Size: 0x10
	IntProperty guidUserSex; // Offset: 0xc8 // Size: 0x04
	IntProperty innerTokenExpire; // Offset: 0xcc // Size: 0x04
	IntProperty isFirstLogin; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	StrProperty innerToken; // Offset: 0xd8 // Size: 0x10
	StrProperty OpenID; // Offset: 0xe8 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPBindResult
// Size: 0x108 // Inherited bytes: 0xf8
struct FiTOPBindResult : FiTOPLoginResult {
	// Fields
	struct TArray<struct FiTOPChannelInfo> bindInfoList; // Offset: 0xf8 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPChannelInfo
// Size: 0x68 // Inherited bytes: 0x40
struct FiTOPChannelInfo : FiTOPResult {
	// Fields
	IntProperty channelId; // Offset: 0x40 // Size: 0x04
	IntProperty Gender; // Offset: 0x44 // Size: 0x04
	StrProperty pictureUrl; // Offset: 0x48 // Size: 0x10
	StrProperty UserName; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPNoticeResult
// Size: 0x58 // Inherited bytes: 0x40
struct FiTOPNoticeResult : FiTOPResult {
	// Fields
	struct TArray<struct FiTOPNoticeInfo> noticesList; // Offset: 0x40 // Size: 0x10
	IntProperty noticesNum; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct iTOP.iTOPNoticeInfo
// Size: 0xd0 // Inherited bytes: 0x00
struct FiTOPNoticeInfo {
	// Fields
	StrProperty stateCode; // Offset: 0x00 // Size: 0x10
	IntProperty noticeId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty AppID; // Offset: 0x18 // Size: 0x10
	StrProperty OpenID; // Offset: 0x28 // Size: 0x10
	StrProperty noticeUrl; // Offset: 0x38 // Size: 0x10
	IntProperty noticeScene; // Offset: 0x48 // Size: 0x04
	IntProperty noticeUpdateTime; // Offset: 0x4c // Size: 0x04
	IntProperty noticeEndTime; // Offset: 0x50 // Size: 0x04
	IntProperty noticeStartTime; // Offset: 0x54 // Size: 0x04
	StrProperty screenName; // Offset: 0x58 // Size: 0x10
	StrProperty noticeLanguage; // Offset: 0x68 // Size: 0x10
	IntProperty noticeContentType; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	StrProperty noticeTitle; // Offset: 0x80 // Size: 0x10
	StrProperty noticeContent; // Offset: 0x90 // Size: 0x10
	struct TArray<struct FiTOPNoticePicInfo> noticePics; // Offset: 0xa0 // Size: 0x10
	StrProperty noticeContentWebUrl; // Offset: 0xb0 // Size: 0x10
	StrProperty ExtraJson; // Offset: 0xc0 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPNoticePicInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FiTOPNoticePicInfo {
	// Fields
	IntProperty noticeId; // Offset: 0x00 // Size: 0x04
	IntProperty screenDir; // Offset: 0x04 // Size: 0x04
	StrProperty PicUrl; // Offset: 0x08 // Size: 0x10
	StrProperty picHash; // Offset: 0x18 // Size: 0x10
	StrProperty picTitle; // Offset: 0x28 // Size: 0x10
	StrProperty picSize; // Offset: 0x38 // Size: 0x10
	StrProperty ExtraJson; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPAuthMigrateResult
// Size: 0x68 // Inherited bytes: 0x40
struct FiTOPAuthMigrateResult : FiTOPResult {
	// Fields
	StrProperty migrateCode; // Offset: 0x40 // Size: 0x10
	IntProperty validTime; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FiTOPAuthSNSInfo> snsInfoList; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPAuthSNSInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FiTOPAuthSNSInfo {
	// Fields
	StrProperty OpenID; // Offset: 0x00 // Size: 0x10
	IntProperty channelId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty UserName; // Offset: 0x18 // Size: 0x10
	IntProperty Gender; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty pictureUrl; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPGPSInfoResult
// Size: 0x70 // Inherited bytes: 0x40
struct FiTOPGPSInfoResult : FiTOPResult {
	// Fields
	double longitude; // Offset: 0x40 // Size: 0x08
	double latitude; // Offset: 0x48 // Size: 0x08
	double horizontalAccuracyMeters; // Offset: 0x50 // Size: 0x08
	double verticalAccuracyMeters; // Offset: 0x58 // Size: 0x08
	StrProperty locationProvider; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPLbsResult
// Size: 0x100 // Inherited bytes: 0x40
struct FiTOPLbsResult : FiTOPResult {
	// Fields
	IntProperty channelId; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty cityName; // Offset: 0x48 // Size: 0x10
	IntProperty cityNumber; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	StrProperty countryName; // Offset: 0x60 // Size: 0x10
	IntProperty countryNumber; // Offset: 0x70 // Size: 0x04
	IntProperty GameID; // Offset: 0x74 // Size: 0x04
	StrProperty Guid; // Offset: 0x78 // Size: 0x10
	StrProperty guidToken; // Offset: 0x88 // Size: 0x10
	IntProperty guidTokenExpire; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	StrProperty guidUserBirthday; // Offset: 0xa0 // Size: 0x10
	StrProperty guidUserNick; // Offset: 0xb0 // Size: 0x10
	StrProperty guidUserPortrait; // Offset: 0xc0 // Size: 0x10
	IntProperty guidUserSex; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	StrProperty provinceName; // Offset: 0xd8 // Size: 0x10
	StrProperty OpenID; // Offset: 0xe8 // Size: 0x10
	IntProperty provinceNumber; // Offset: 0xf8 // Size: 0x04
	char pad_0xFC[0x4]; // Offset: 0xfc // Size: 0x04
};

// Object Name: ScriptStruct iTOP.iTOPAuthResult
// Size: 0xb0 // Inherited bytes: 0x40
struct FiTOPAuthResult : FiTOPResult {
	// Fields
	StrProperty Channel; // Offset: 0x40 // Size: 0x10
	IntProperty channelId; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty DeviceID; // Offset: 0x58 // Size: 0x10
	IntProperty GameID; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty innerToken; // Offset: 0x70 // Size: 0x10
	IntProperty isFirstLogin; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty OpenID; // Offset: 0x88 // Size: 0x10
	IntProperty tokenExpireTime; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct TArray<struct FiTOPAuthSNSInfo> snsInfoList; // Offset: 0xa0 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPAuthConnectResult
// Size: 0x90 // Inherited bytes: 0x40
struct FiTOPAuthConnectResult : FiTOPResult {
	// Fields
	StrProperty confirmCode; // Offset: 0x40 // Size: 0x10
	IntProperty channelId; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty OpenID; // Offset: 0x58 // Size: 0x10
	IntProperty Gender; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty UserName; // Offset: 0x70 // Size: 0x10
	StrProperty pictureUrl; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct iTOP.iTOPWebViewStatusResult
// Size: 0x48 // Inherited bytes: 0x40
struct FiTOPWebViewStatusResult : FiTOPResult {
	// Fields
	IntProperty stateCode; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct iTOP.iTOPWebViewTicketResult
// Size: 0x60 // Inherited bytes: 0x40
struct FiTOPWebViewTicketResult : FiTOPResult {
	// Fields
	StrProperty Ticket; // Offset: 0x40 // Size: 0x10
	StrProperty Domain; // Offset: 0x50 // Size: 0x10
};

