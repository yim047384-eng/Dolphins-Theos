#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Client.FCDNDownloaderStateEnum
enum class FCDNDownloaderStateEnum : uint8 {
	CDNDownloaderEnum_LoadSuccess = 0,
	CDNDownloaderEnum_LoadProgress = 1,
	CDNDownloaderEnum_MAX = 2
};

// Object Name: Enum Client.FDownloaderStateEnum
enum class FDownloaderStateEnum : uint8 {
	CDNDownloaderEnum_LoadSuccess = 0,
	CDNDownloaderEnum_LoadProgress = 1,
	CDNDownloaderEnum_MAX = 2
};

// Object Name: Enum Client.EReuseFallOverscrollState
enum class EReuseFallOverscrollState : uint8 {
	RFOS_None = 0,
	RFOS_Top = 1,
	RFOS_Bottom = 2,
	RFOS_MAX = 3
};

// Object Name: Enum Client.EReuseListJumpStyle
enum class EReuseListJumpStyle : uint8 {
	Middle = 0,
	Begin = 1,
	End = 2,
	EReuseListJumpStyle_MAX = 3
};

// Object Name: Enum Client.EReuseListStyle
enum class EReuseListStyle : uint8 {
	Vertical = 0,
	Horizontal = 1,
	VerticalGrid = 2,
	HorizontalGrid = 3,
	EReuseListStyle_MAX = 4
};

// Object Name: Enum Client.EReuseListNotFullAlignStyle
enum class EReuseListNotFullAlignStyle : uint8 {
	Start = 0,
	Middle = 1,
	End = 2,
	EReuseListNotFullAlignStyle_MAX = 3
};

// Object Name: Enum Client.FCDNDownloaderTypeEnum
enum class FCDNDownloaderTypeEnum : uint8 {
	FCDNDownloaderTypeEnum_Config = 0,
	FCDNDownloaderTypeEnum_Patch = 1,
	FCDNDownloaderTypeEnum_WhiteList = 2,
	FCDNDownloaderTypeEnum_MAX = 3
};

// Object Name: Enum Client.FDownloaderTypeEnum
enum class FDownloaderTypeEnum : uint8 {
	FDownloaderTypeEnum_Config = 0,
	FDownloaderTypeEnum_Patch = 1,
	FDownloaderTypeEnum_WhiteList = 2,
	FDownloaderTypeEnum_ConfigInMemory = 3,
	FDownloaderTypeEnum_MAX = 4
};

// Object Name: Enum Client.ESubsideFeatureLevel
enum class ESubsideFeatureLevel : uint8 {
	ELevel_Dafault = 0,
	ELevel_OfficialB = 1,
	ELevel_Jaguar = 2,
	ELevel_OfficialA = 3,
	ELevel_MAX = 4
};

// Object Name: Enum Client.ECentauriPackType
enum class ECentauriPackType : uint8 {
	kCentauriPackNone = 0,
	kCentauriPackInit = 1,
	kCentauriPackPayNeedLogin = 2,
	kCentauriPackPay = 3,
	kCentauriPackGetMP = 4,
	kCentauriPackGetProductInfo = 5,
	kCentauriPackReprovide = 6,
	kCentauriPackGetIntroPrice = 7,
	ECentauriPackType_MAX = 8
};

// Object Name: Enum Client.ECentauriMultiPayChannelSwitch
enum class ECentauriMultiPayChannelSwitch : uint8 {
	kCentauriPayChannelMain = 0,
	kCentauriPayChannelH5 = 1,
	ECentauriMultiPayChannelSwitch_MAX = 2
};

// Object Name: Enum Client.ESDKCallbackType
enum class ESDKCallbackType : uint8 {
	SDK_CB_None = 0,
	SDK_CB_VLINK_OPEN = 1,
	SDK_CB_VLINK_CLOSE = 2,
	SDK_CB_NET_TRACE = 3,
	SDK_CB_MAX = 4
};

// Object Name: Enum Client.EUnifiedAccountType
enum class EUnifiedAccountType : uint8 {
	UA_None = 0,
	UA_RequestVerifyCode = 1,
	UA_ChangePassword = 2,
	UA_ModifyAccount = 3,
	UA_CheckIsRegisted = 4,
	UA_CheckVerifyCodeValid = 5,
	UA_MAX = 6
};

// Object Name: Enum Client.EIMSDKScreenDir
enum class EIMSDKScreenDir : uint8 {
	kScreenDirSensor = 1,
	kScreenDirPortrait = 2,
	kScreenDirLandscape = 3,
	EIMSDKScreenDir_MAX = 4
};

// Object Name: Enum Client.EIMSDKContentType
enum class EIMSDKContentType : uint8 {
	kContentTypeText = 1,
	kContentTypeImage = 2,
	kContentTypeWeb = 3,
	EIMSDKContentType_MAX = 4
};

// Object Name: Enum Client.EIMSDKNoticeType
enum class EIMSDKNoticeType : uint8 {
	kNoticeTypeAlert = 0,
	kNoticeTypeScroll = 1,
	kNoticeTypeAll = 2,
	EIMSDKNoticeType_MAX = 3
};

// Object Name: Enum Client.EScreenDir
enum class EScreenDir : uint8 {
	kScreenDirSensor = 0,
	kScreenDirPortrait = 1,
	kScreenDirLandscape = 2,
	EScreenDir_MAX = 3
};

// Object Name: Enum Client.EContentType
enum class EContentType : uint8 {
	kContentTypeText = 0,
	kContentTypeImage = 1,
	kContentTypeWeb = 2,
	EContentType_MAX = 3
};

// Object Name: Enum Client.ENoticeType
enum class ENoticeType : uint8 {
	kNoticeTypeAlert = 0,
	kNoticeTypeScroll = 1,
	kNoticeTypeAll = 2,
	ENoticeType_MAX = 3
};

// Object Name: Enum Client.ELobbyBgMatType
enum class ELobbyBgMatType : uint8 {
	ELBS = 0,
	EMarketAppearance = 1,
	EMarketParachute = 2,
	EMarketWeapon = 3,
	ESeasonPass = 4,
	ELobbyBgMat_Max = 5,
	ELobbyBgMatType_MAX = 6
};

// Object Name: Enum Client.ESDKCallbackMethodId
enum class ESDKCallbackMethodId : int32 {
	SDK_CB_None = 0,
	SDK_CB_SNS_NOTIFY = 2000,
	SDK_CB_COMPLIANCE_NOTIFY = 3000,
	SDK_CB_MAX = 3001
};

// Object Name: Enum Client.UserSettingsDataType
enum class UserSettingsDataType : uint8 {
	Bool = 0,
	Enum = 1,
	Int = 2,
	Float = 3,
	String = 4,
	UserSettingsDataType_MAX = 5
};

// Object Name: Enum Client.EVibrateStrengthLevel
enum class EVibrateStrengthLevel : uint8 {
	None = 0,
	Low = 1,
	Mid = 2,
	High = 3,
	EVibrateStrengthLevel_MAX = 4
};

// Object Name: Enum Client.EVibrateTriggerActionType
enum class EVibrateTriggerActionType : uint8 {
	None = 0,
	Onece = 1,
	Start = 2,
	Stop = 3,
	EVibrateTriggerActionType_MAX = 4
};

// Object Name: Enum Client.EVibrateTriggerEventType
enum class EVibrateTriggerEventType : uint8 {
	None = 0,
	EquipWeapon = 1,
	UnEquipWeapon = 2,
	EquipWeaponAttachment = 3,
	UnEquipWeaponAttachment = 4,
	FireShot = 5,
	ReloadStart = 6,
	LoadBulletOnReload = 7,
	ReloadEnd = 8,
	BoltStart = 9,
	PullBolt = 10,
	BoltEnd = 11,
	ChangeMagazine = 12,
	MagIn = 13,
	MagOut = 14,
	LocalShellDrop = 15,
	ChangeShootType = 16,
	ShootLastBullet = 17,
	NoneShoot = 18,
	PrepareThrowGrenade = 48,
	ReleaseThrowGrenade = 49,
	WeaponCustom = 50,
	VehicleGetOn = 51,
	VehicleGetOff = 52,
	VehicleBoostSpeed = 53,
	VehicleHitByBullet = 54,
	VehicleWheelsBroken = 55,
	VehicleHitObstacal = 56,
	VehicleChangeGear = 57,
	VehicleBreaking = 58,
	VehicleContactSpesificGround = 59,
	VehicleSlipping = 60,
	VehicleRaisePushSuspension = 61,
	HitByBullet = 101,
	FallDamage = 102,
	VehicleImpactDamage = 103,
	VehicleImpactDamageInVehicle = 104,
	ExplosionDamage = 105,
	BurningDamage = 106,
	LoseSignalHP = 107,
	FallOnGround = 108,
	Dead = 109,
	JumpFromPlane = 110,
	StartSprint = 111,
	Shoveling = 112,
	Climb = 113,
	StartSwim = 114,
	MeleeDamage = 115,
	AirAttackDamage = 116,
	HitByBulletOnHead = 118,
	HitByBulletOnBody = 119,
	ShowVoiceMove = 150,
	ShowVoiceShoot = 151,
	ShowVoiceSilenceShoot = 152,
	ShowVoiceBreakGlass = 153,
	ShowVoiceExplosion = 154,
	ShowVoiceVehicle = 155,
	TriggerByAssetID = 200,
	EVibrateTriggerEventType_MAX = 201
};

// Object Name: Enum Client.EVibrateTriggerSubItemType
enum class EVibrateTriggerSubItemType : uint8 {
	None = 0,
	WeaponAttachment = 1,
	VehicleGear = 2,
	HitHead = 3,
	HitBody = 4,
	HitLimbs = 5,
	EVibrateTriggerSubItemType_MAX = 6
};

// Object Name: Enum Client.EVibrateTriggerMainItemType
enum class EVibrateTriggerMainItemType : uint8 {
	None = 0,
	Weapon = 1,
	Vehicle = 2,
	Character = 3,
	ShowVoiceUI = 4,
	Custom = 5,
	EVibrateTriggerMainItemType_MAX = 6
};

// Object Name: Enum Client.EWeaponSpecialSoundType
enum class EWeaponSpecialSoundType : uint8 {
	LoadBullet = 0,
	ChangeMagazine = 1,
	MagIn = 2,
	MagOut = 3,
	PullBolt = 4,
	LocalShellDrop = 5,
	EWeaponSpecialSoundType_MAX = 6
};

// Object Name: Enum Client.EButtonClickSoundTypes
enum class EButtonClickSoundTypes : uint8 {
	None = 0,
	Play_UI_Bnt_Confirm = 1,
	Play_UI_Bnt_Click = 2,
	Play_UI_Bnt_Tab = 3,
	Play_UI_Bnt_Select = 4,
	Play_UI_Bnt_Close = 5,
	Play_UI_Bnt_MainMenu = 6,
	Play_UI_Bnt_MenuOpen = 7,
	Play_UI_Bnt_MenuClose = 8,
	Play_UI_Bnt_StartGame = 9,
	Play_UI_Bnt_Turn = 10,
	Play_UI_Bnt_Set = 11,
	EButtonClickSoundTypes_MAX = 12
};

