#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ShadowTrackerExtra.ECircleInfo
enum class ECircleInfo : uint8 {
	SafeZoneTips = 0,
	BlueCirclePreWarning = 1,
	BlueCircleRun = 2,
	NoCircleInfo = 3,
	ECircleInfo_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EHitPartJugementType
enum class EHitPartJugementType : uint8 {
	HitPos = 0,
	HitBone = 1,
	EHitPartJugementType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAvatarDamagePosition
enum class EAvatarDamagePosition : uint8 {
	Non = 0,
	BigHead = 1,
	BigLimbs = 2,
	BigBody = 3,
	BigHand = 4,
	BigFoot = 5,
	Wheel0 = 6,
	Wheel1 = 7,
	Wheel2 = 8,
	Wheel3 = 9,
	BigLimb_LeftLowerArm = 10,
	BigLimb_LeftUpperArm = 11,
	BigLimb_RightLowerArm = 12,
	BigLimb_RightUpperArm = 13,
	BigLimb_LeftThigh = 14,
	BigLimb_LeftShank = 15,
	BigLimb_RightThigh = 16,
	BigLimb_RightShank = 17,
	BodyZone0 = 20,
	BodyZone1 = 21,
	BodyZone2 = 22,
	BodyZone3 = 23,
	MechaChest = 30,
	MechaArm = 31,
	MechaLeg = 32,
	EAvatarDamagePosition_MAX = 33
};

// Object Name: Enum ShadowTrackerExtra.EPawnState
enum class EPawnState : uint8 {
	Move = 0,
	Sprint = 1,
	ProneMove = 2,
	Stand = 3,
	Crouch = 4,
	Prone = 5,
	Jump = 6,
	GunFire = 7,
	GunReload = 8,
	GunADS = 9,
	Picth = 10,
	SwitchWeapon = 11,
	Pick = 12,
	MeleeAttack = 13,
	HoldGrenade = 14,
	Save = 15,
	UseConsumables = 16,
	Dying = 17,
	Dead = 18,
	DriveVehicle = 19,
	InVehicle = 20,
	LeanOutVehicle = 21,
	Swim = 22,
	InParachute = 23,
	Vault = 24,
	InPlane = 25,
	GunOBOReload = 26,
	SwitchPP = 27,
	PlayEmote = 28,
	HoldShield = 29,
	Imprisonment = 30,
	StunBurnNag = 31,
	Skill = 32,
	DetectPaintDecal = 33,
	Revival = 34,
	AirAttackLocator = 35,
	ControlUnmannedVehicle = 36,
	Shoveling = 37,
	RemoteControlVehicle = 38,
	Build = 39,
	GunFillGas = 40,
	Shoulder = 41,
	Variation = 42,
	CarryBack = 43,
	BeCarriedBack = 44,
	Dizziness = 45,
	Knock = 46,
	InZipline = 47,
	StairsMove = 48,
	InActivityActor = 49,
	DriveMovePlatForm = 50,
	Slide = 51,
	WeaponAccPrepare = 52,
	Arrest = 53,
	AirBorne = 54,
	SplineMove = 55,
	MovableEmote = 56,
	PassiveVariation = 57,
	ControlDrone = 58,
	Restricted = 59,
	FlyingArmor = 60,
	Diving = 61,
	ShapeShifting = 62,
	ControlObject = 63,
	HawkReported = 64,
	Spirit = 65,
	Shocked = 66,
	FollowWalk = 67,
	Fishing = 68,
	BoardMove = 69,
	CheckItem = 70,
	GhostBalloon = 71,
	ControlWeapon = 72,
	PenguinRocket = 73,
	BulletTime = 74,
	CreateRoad = 75,
	CarryBox = 76,
	FlowerWing = 77,
	CoopVault = 78,
	AttachToOther = 79,
	CoopVaultPrepare = 80,
	SpecialSuit = 81,
	StealingMonster = 82,
	NinjaMove = 83,
	WebSwing = 84,
	FreeWallClimb = 85,
	Humanoid = 86,
	FlyVariation = 87,
	__MAX = 88,
	EPawnState_MAX = 89
};

// Object Name: Enum ShadowTrackerExtra.ESeekAndLockStage
enum class ESeekAndLockStage : uint8 {
	ESeekAndLockStage_None = 0,
	ESeekAndLockStage_2 = 1,
	ESeekAndLockStage_3 = 2,
	ESeekAndLockStage_4 = 3,
	ESeekAndLockStage_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EFreshWeaponStateType
enum class EFreshWeaponStateType : uint8 {
	FreshWeaponStateType_None = 0,
	FreshWeaponStateType_Inactive = 1,
	FreshWeaponStateType_Idle = 2,
	FreshWeaponStateType_IdleToBackpack = 3,
	FreshWeaponStateType_Backpack = 4,
	FreshWeaponStateType_BackpackToIdle = 5,
	FreshWeaponStateType_BackpackToIdlePreFinish = 6,
	FreshWeaponStateType_Fire = 7,
	FreshWeaponStateType_Reload = 8,
	FreshWeaponStateType_NoBullet = 9,
	FreshWeaponStateType_PreFire = 10,
	FreshWeaponStateType_PostFire = 11,
	FreshWeaponStateType_PostReload = 12,
	FreshWeaponStateType_WarmUp = 13,
	FreshWeaponStateType_FillGas = 14,
	FreshWeaponStateType_PostFillGas = 15,
	FreshWeaponStateType_Drop = 16,
	FreshWeaponStateType_BowAccumulateEnergy = 17,
	FreshWeaponStateType_PostFireCommon = 18,
	FreshWeaponStateType_MAX = 19
};

// Object Name: Enum ShadowTrackerExtra.ELaserTraceUIStage
enum class ELaserTraceUIStage : uint8 {
	LaserTraceUIStage_2 = 0,
	LaserTraceUIStage_3 = 1,
	LaserTraceUIStage_4 = 2,
	LaserTraceUIStage_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDamageType
enum class EDamageType : int32 {
	InvalidDamageType = 0,
	ShootDamage = 1,
	STPointDamage = 3,
	CustomRadiusDamage = 4,
	PoisonDamage = 13,
	DrowningDamage = 14,
	FallingDamage = 15,
	MeleeDamage = 16,
	GrenadeRadiusDamage = 17,
	BurningDamage = 18,
	AirAttackDamage = 19,
	VehicleDamage = 20,
	VehicleExplodeRadiusDamage = 21,
	LastBreathWithoutRescue = 22,
	WinnerFakeDeath = 23,
	SkillDamage = 24,
	PoisonFogDamage = 25,
	GasolineCanExplosion = 26,
	ZombieDamage = 27,
	LowTemperatureDamage = 28,
	TopFiveGaveUpDamage = 29,
	Resurrection = 30,
	TyrantMonsterStonedDamage = 31,
	RPGExplosionDamage = 32,
	CartridgeExplosionDamage = 33,
	DotDamage = 34,
	AirDropShelter = 35,
	RadialDamage = 9999,
	CustomTypeIDDamage = 10000,
	CustomRadialDamage = 1231231,
	EDamageType_MAX = 1231232
};

// Object Name: Enum ShadowTrackerExtra.EBodyPosition
enum class EBodyPosition : uint8 {
	Non = 0,
	BodyHead = 1,
	BodyBody = 2,
	BodyFoot = 3,
	BodyTPPSpringArm = 4,
	BodyTPPCamera = 5,
	BodyUpperArmL = 6,
	BodyUpperArmR = 7,
	EBodyPosition_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.ESTEPoseState
enum class ESTEPoseState : uint8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Sprint = 3,
	CrouchSprint = 4,
	Crawl = 5,
	Swim = 6,
	SwimSprint = 7,
	Dying = 8,
	DyingBeCarried = 9,
	DyingSwim = 10,
	_Max = 11,
	ESTEPoseState_MAX = 12
};

// Object Name: Enum ShadowTrackerExtra.EDamageableGameObjectType
enum class EDamageableGameObjectType : uint8 {
	EDamageableGameObjectType_Player = 0,
	EDamageableGameObjectType_Monster = 1,
	EDamageableGameObjectType_Vehicle = 2,
	EDamageableGameObjectType_Boss = 3,
	EDamageableGameObjectType_Building = 4,
	EDamageableGameObjectType_Building_A = 5,
	EDamageableGameObjectType_Building_B = 6,
	EDamageableGameObjectType_Building_C = 7,
	EDamageableGameObjectType_Flammable = 8,
	EDamageableGameObjectType_AI = 9,
	EDamageableGameObjectType_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EObserverType
enum class EObserverType : uint8 {
	EObserverType_None = 0,
	EObserverType_TeammateObserver = 1,
	EObserverType_EnemyObserver = 2,
	EObserverType_FriendNotHawkEyeObserver = 3,
	EObserverType_HawkEyeObserver = 4,
	EObserverType_GlobalObserver = 5,
	EObserverType_FriendObserver = 6,
	EObserverType_InSpectating = 7,
	EObserverType_Spectator = 8,
	EObserverType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.ETeamNumber
enum class ETeamNumber : uint8 {
	POLICE = 0,
	TERRORIST = 1,
	CIVILIAN = 2,
	UNKNOWN = 3,
	ETeamNumber_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EUAVUseType
enum class EUAVUseType : uint8 {
	UAV_None = 0,
	UAV_Init = 1,
	UAV_Using = 2,
	UAV_Standby = 3,
	UAV_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EShotFlag
enum class EShotFlag : uint8 {
	CLIENTNOCONNECT = 1,
	GUN_ADS = 2,
	RECENTLY_GUN_ADS_OR_PRONE = 4,
	EShotFlag_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleSeatType
enum class ESTExtraVehicleSeatType : uint8 {
	ESeatType_DriversSeat = 0,
	ESeatType_PassengersSeat = 1,
	ESeatType_FreeFiringLeftSeat = 2,
	ESeatType_FreeFiringRightSeat = 3,
	ESeatType_GunnerSeat = 4,
	ESeatType_VirtualDriverSeat = 5,
	ESeatType_AssistantSeat = 6,
	ESeatType_ArrestSeat = 7,
	ESeatType_ShootDriver = 8,
	ESeatType_Max = 9
};

// Object Name: Enum ShadowTrackerExtra.EVehicleFeatureType
enum class EVehicleFeatureType : uint8 {
	None = 0,
	Trailer = 1,
	ResetRotation = 2,
	Protection = 3,
	Transform = 4,
	EVehicleFeatureType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EWeaponHoldType
enum class EWeaponHoldType : uint8 {
	EWHT_None = 0,
	EWHT_SingleHand = 1,
	EWHT_TwoHand = 2,
	EWHT_Max = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehicleInteractionType
enum class EVehicleInteractionType : uint8 {
	Enter = 0,
	Exit = 1,
	ChangeSeat = 2,
	LeanOut = 3,
	NumTypes = 4,
	EVehicleInteractionType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EVHSeatSideType
enum class EVHSeatSideType : uint8 {
	EVHSeatSideType_Center = 0,
	EVHSeatSideType_Left = 1,
	EVHSeatSideType_Right = 2,
	EVHSeatSideType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVHSeatSpecialType
enum class EVHSeatSpecialType : uint8 {
	EVHSeatSpecial_Common = 0,
	EVHSeatSpecial_Narrow = 1,
	EVHSeatSpecial_OutLeft = 2,
	EVHSeatSpecial_OutRight = 3,
	EVHSeatSpecial_Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EVHSeatWeaponHoldType
enum class EVHSeatWeaponHoldType : uint8 {
	ESeatWeapon_None = 0,
	ESeatWeapon_ShortOnly = 1,
	ESeatWeapon_RifleOnly = 2,
	ESeatWeapon_SeatWeapon = 3,
	ESeatWeapon_All = 3,
	ESeatWeapon_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EChangeSeatForbiddenFlag
enum class EChangeSeatForbiddenFlag : uint8 {
	Transform = 0,
	EChangeSeatForbiddenFlag_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EEnterVehicleForbiddenFlag
enum class EEnterVehicleForbiddenFlag : uint8 {
	Transform = 0,
	EEnterVehicleForbiddenFlag_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EExitVehicleForbiddenFlag
enum class EExitVehicleForbiddenFlag : uint8 {
	Transform = 0,
	EExitVehicleForbiddenFlag_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EVHSeatGUIType
enum class EVHSeatGUIType : uint8 {
	EVHSeatGUIType_NoSeat = 0,
	EVHSeatGUIType_Empty = 1,
	EVHSeatGUIType_Other = 2,
	EVHSeatGUIType_Self = 3,
	EVHSeatGUIType_Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EVHAirtightSpaceType
enum class EVHAirtightSpaceType : uint8 {
	EVAirtightType_Normal = 0,
	EVAirtightType_NoVechileWeapon = 1,
	EVAirtightType_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.ESoundType
enum class ESoundType : uint8 {
	SoundType_FootStep_Default = 0,
	SoundType_FootStep_Walk = 1,
	SoundType_FootStep_Run = 2,
	SoundType_FootStep_Crouch = 3,
	SoundType_FootStep_Prone = 4,
	SoundType_Weapon_L_WithSilencer = 5,
	SoundType_Weapon_L_WithoutSilencer = 6,
	SoundType_Weapon_M_WithSilencer = 7,
	SoundType_Weapon_M_WithoutSilencer = 8,
	SoundType_Weapon_S_WithSilencer = 9,
	SoundType_Weapon_S_WithoutSilencer = 10,
	SoundType_Weapon_BulletImpact = 11,
	SoundType_Glass = 12,
	SoundType_Grenade = 13,
	SoundType_FlashBomb = 14,
	SoundType_SmokeBomb = 15,
	SoundType_BurningBottle = 16,
	SoundType_Vehicle = 17,
	SoundType_OpenTreasureBox = 18,
	SoundType_Horn = 19,
	SoundType_Skill = 20,
	SoundType_VehicleExplode = 21,
	SoundType_MAX = 22
};

// Object Name: Enum ShadowTrackerExtra.ESTEAIState
enum class ESTEAIState : int32 {
	ZS_Spawn = 1,
	ZS_Idle = 2,
	ZS_Battle = 4,
	ZS_Move = 8,
	ZS_Run = 16,
	ZS_Inspect = 32,
	ZS_Jump = 64,
	ZS_Land_Light = 128,
	ZS_Land_Hard = 256,
	ZS_Suffer = 512,
	ZS_SufferFreez = 1024,
	ZS_Fall = 2048,
	ZS_ClimbingWall = 4096,
	ZS_CrossingWindow = 8192,
	ZS_Dead = 16384,
	ZS_LockTarget = 32768,
	ZS_SpawnOnCeiling = 65536,
	ZS_NearDeath = 131072,
	ZS_Stun = 262144,
	ZS_Frozen = 524288,
	ZS_Charge = 1048576,
	ZS_Active = 2097152,
	ZS_LaunchAirFly = 4194304,
	ZS_LaunchAirGround = 8388608,
	ZS_LaunchAirRiseUp = 16777216,
	ZS_Sleep = 33554432,
	ZS_MAX = 33554433
};

// Object Name: Enum ShadowTrackerExtra.EBPAIState
enum class EBPAIState : uint8 {
	ZS_Spawn = 0,
	ZS_Idle = 1,
	ZS_Battle = 2,
	ZS_Move = 3,
	ZS_Run = 4,
	ZS_Inspect = 5,
	ZS_Jump = 6,
	ZS_Land_Light = 7,
	ZS_Land_Hard = 8,
	ZS_Suffer = 9,
	ZS_SufferFreez = 10,
	ZS_Fall = 11,
	ZS_ClimbingWall = 12,
	ZS_CrossingWindow = 13,
	ZS_Dead = 14,
	ZS_LockTarget = 15,
	ZS_SpawnOnCeiling = 16,
	ZS_NearDeath = 17,
	ZS_Stun = 18,
	ZS_Frozen = 19,
	ZS_Charge = 20,
	ZS_Active = 21,
	ZS_LaunchAirFly = 22,
	ZS_LaunchAirGround = 23,
	ZS_LaunchAirRiseUp = 24,
	ZS_Sleep = 25,
	ZS_Max = 26
};

// Object Name: Enum ShadowTrackerExtra.EMonsterHurtType
enum class EMonsterHurtType : uint8 {
	MHT_Bullet = 0,
	MHT_Skill = 1,
	MHT_VehicleHit = 2,
	MHT_DefaultHit = 3,
	MHT_DefaultBigHit = 4,
	MHT_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESpeciesGrade
enum class ESpeciesGrade : uint8 {
	None = 0,
	Normal = 1,
	Elite = 2,
	Boss = 3,
	ESpeciesGrade_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESpeciesType
enum class ESpeciesType : uint8 {
	None = 0,
	NormalMonster = 1,
	Zombie = 2,
	Behemoth = 3,
	OtherMonster = 99,
	RealPlayer = 100,
	FakeAI = 101,
	FakeAIPlayer = 102,
	ESpeciesType_MAX = 103
};

// Object Name: Enum ShadowTrackerExtra.EInvincibleMask
enum class EInvincibleMask : uint8 {
	Mask0 = 0,
	Mask1 = 1,
	Mask2 = 2,
	Mask3 = 3,
	Mask4 = 4,
	Mask5 = 5,
	Mask6 = 6,
	MaskMax = 7,
	EInvincibleMask_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EMonsterAnimGroupMask
enum class EMonsterAnimGroupMask : uint8 {
	EMonsterAnimGroupMask_Null = 0,
	EMonsterAnimGroupMask_Base = 1,
	EMonsterAnimGroupMask_Child = 2,
	EMonsterAnimGroupMask_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMobRegionType
enum class EMobRegionType : uint8 {
	MobSizeInvalid = 0,
	MobSizeSmall = 1,
	MobSizeMedium = 2,
	MobSizeLarge = 3,
	MobSizeSuperLarge = 4,
	EMobRegionType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8 {
	SWPS_None = 0,
	SWPS_MainShootWeapon1 = 1,
	SWPS_MainShootWeapon2 = 2,
	SWPS_SubShootWeapon = 3,
	SWPS_MeleeWeapon = 4,
	SWPS_HandProp = 5,
	SWPS_TempSpecialWeapon = 6,
	SWPS_ShiftGrenadeWeapon = 7,
	SWPS_VehicleWeapon = 8,
	SWPS_Max = 9
};

// Object Name: Enum ShadowTrackerExtra.EWeaponChangeInvenroryDataType
enum class EWeaponChangeInvenroryDataType : uint8 {
	EWCIDT_Init = 0,
	EWCIDT_PickUp = 1,
	EWCIDT_PutDown = 2,
	EWCIDT_Swap = 3,
	EWCIDT_GrenadeLaunch = 4,
	EWCIDT_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EWeaponTriggerEvent
enum class EWeaponTriggerEvent : uint8 {
	EWeaponTriggerEvent_None = 0,
	EWeaponTriggerEvent_PressFuncBtn = 1,
	EWeaponTriggerEvent_ReleaseFuncBtn = 2,
	EWeaponTriggerEvent_CancelFire = 3,
	EWeaponTriggerEvent_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EPlayerCameraMode
enum class EPlayerCameraMode : uint8 {
	PCM_None = 0,
	PCM_Normal = 1,
	PCM_Near = 2,
	PCM_Aim = 3,
	PCM_Plane = 4,
	PCM_FPP = 5,
	PCM_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleHealthState
enum class ESTExtraVehicleHealthState : uint8 {
	VHS_Good = 0,
	VHS_Smoking = 1,
	VHS_Burning = 2,
	VHS_Destroyed = 3,
	VHS_Exploded = 4,
	VHS_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EOutlineType
enum class EOutlineType : uint8 {
	NONE = 0,
	Self = 1,
	SameTeam = 2,
	SameCamp = 3,
	Enemy = 4,
	EOutlineType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EVehicleSimDisabledFlag
enum class EVehicleSimDisabledFlag : uint8 {
	None = 0,
	NoSim = 1,
	Frozen = 2,
	Attachment = 3,
	BTNav = 4,
	LeaveVehicleProtection = 5,
	EVehicleSimDisabledFlag_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EVehicleAudioDebugType
enum class EVehicleAudioDebugType : uint8 {
	None = 0,
	EngineBooming = 1,
	NumTypes = 2,
	EVehicleAudioDebugType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleSyncState
enum class ESTExtraVehicleSyncState : uint8 {
	VSS_None = 0,
	VSS_Client = 1,
	VSS_ServerAuthorize = 2,
	VSS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraUAVVehicleOperateState
enum class ESTExtraUAVVehicleOperateState : uint8 {
	Operate_Normal = 0,
	Operate_WithUp = 1,
	Operate_WithDown = 2,
	Operate_Clear = 3,
	Operate_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EShootVertifyRes
enum class EShootVertifyRes : uint8 {
	OK = 0,
	ShootBigHead = 1,
	ShootPointBigDeviation = 2,
	ShootBigBoxNull = 3,
	ShootOtherBlock = 4,
	ShootOtherBlockRev = 5,
	NoLagCompensation = 6,
	ShootTimeTooDelay = 7,
	MuzzleBigDeviation = 8,
	ShootHitHeadError = 9,
	ShootHitRotationError = 10,
	ShootRangeError = 11,
	ShootHitInVehicle = 12,
	ShootHitAITarget = 13,
	ShootHitVehicleTarget = 14,
	BulletFlyTimeError = 15,
	BulletDirError = 16,
	BulletImpactOffsetError = 17,
	CharacterImpactOffsetError = 18,
	ImpactTargetPassWall = 19,
	GunPoseError = 20,
	HisotryLocusError = 21,
	Client_HitImpactPassWall = 22,
	Client_ShootMuzzleHeight = 23,
	Client_BoneMissMatch = 24,
	ErrorShooterWeaponRange = 25,
	MuzzleDirError = 26,
	ShooterPosError = 27,
	ClientVerifyError = 28,
	VictmPosError = 29,
	ShooterInDamageFreeze = 30,
	WeaponScopePosError = 31,
	OwnerHeadAndMuzzlePassWall = 32,
	MuzzleImpactDirError1 = 33,
	MuzzleImpactDirError2 = 34,
	ShootPosHistoryLocusError1 = 35,
	ShootPosHistoryLocusError2 = 36,
	MuzzleLocusError = 37,
	MuzzleLocusErrorX = 38,
	MuzzleLocusErrorY = 39,
	MuzzleLocusErrorZ = 40,
	FiringRateAndShootIDError = 41,
	BulletIDAndShootIDError = 42,
	VehicleShootFarInMidAir = 43,
	PawnShootFarInMidAir = 44,
	MuzzleLocusErrorLength = 45,
	FarShootInHighTangentMoveSpeed = 46,
	ParachuteSpeedHack = 47,
	NonGunADSFarShootFromClientBulletData = 48,
	Gun2ShooterPosError = 49,
	MuzzleOverHigh = 50,
	Tail2MuzzleIsBlock = 51,
	ClientAutoAimConfigHalfShootMiss = 52,
	ShooterRecentMovementError = 53,
	ShooterHeadBlockPos = 54,
	ClientCheck_LongTimeNoRender = 55,
	ClientCheck_HitComponentUnvalid = 56,
	KillBirdFrequent = 57,
	KillFrequentWhileFalling = 58,
	KillFrequentGeneral = 59,
	ClientCheck_HitComponentUnExpect = 60,
	ClientCheck_HitOutCollisionBox = 61,
	BulletIDAndShootIDError1 = 62,
	BulletIDAndShootIDError2 = 63,
	BulletIDAndShootIDError3 = 64,
	BulletIDAndShootIDError4 = 65,
	BulletIDAndShootIDError5 = 66,
	BulletIDAndShootIDError6 = 67,
	ClientCheckShootDirException1 = 68,
	ClientCheckShootDirException2 = 69,
	ClientCheckCameraModeException = 70,
	Non = 71,
	VehicleVerifyOffset = 100,
	EShootVertifyRes_MAX = 101
};

// Object Name: Enum ShadowTrackerExtra.EShootWeaponShootMode
enum class EShootWeaponShootMode : uint8 {
	SWST_MuzzleDirection = 0,
	SWST_TargetDirection = 1,
	SWST_TraceTarget = 2,
	SWST_VehicleShoot = 3,
	SWST_AIControllerRotation = 4,
	SWST_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EVehicleExceptionType
enum class EVehicleExceptionType : uint8 {
	None = 0,
	FellOutOfWorld = 1,
	OutsideWorldBounds = 2,
	IsHidden = 3,
	IsTickEnabled = 4,
	SimulatePhysicsDisabled = 5,
	EngineSfxInvalid = 6,
	PlayAudioError = 7,
	AvatarAssetsInvalid = 8,
	EVehicleExceptionType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EVehicleAutoMoveType
enum class EVehicleAutoMoveType : uint8 {
	EnableByDrift = 0,
	EnableAllways = 1,
	EnableNever = 2,
	EVehicleAutoMoveType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECameraDataType
enum class ECameraDataType : uint8 {
	ECameraDataType_Stand = 0,
	ECameraDataType_Crouch = 1,
	ECameraDataType_Prone = 2,
	ECameraDataType_Indoor = 3,
	ECameraDataType_LeanLeft = 4,
	ECameraDataType_LeanRight = 5,
	ECameraDataType_Vehicle = 6,
	ECameraDataType_NearDeath = 7,
	ECameraDataType_PeekLeft = 8,
	ECameraDataType_PeekRight = 9,
	ECameraDataType_IndoorLowerCameraStand = 10,
	ECameraDataType_IndoorLowerCameraCrouch = 11,
	ECameraDataType_IndoorLowerCameraProne = 12,
	ECameraDataType_Vault = 13,
	ECameraDataType_Shoveling = 14,
	ECameraDataType_Helicopter = 15,
	ECameraDataType_FireBalloon = 16,
	ECameraDataType_ShoulderLeft = 17,
	ECameraDataType_ShoulderRight = 18,
	ECameraDataType_Insect = 19,
	ECameraDataType_Skill = 20,
	ECameraDataType_AirBorneStart = 21,
	ECameraDataType_AirBorneFlying = 22,
	ECameraDataType_AirBorneSuperFlying = 23,
	ECameraDataType_SplineMove = 24,
	ECameraDataType_BoardMove = 25,
	ECameraDataType_UGC = 26,
	ECameraDataType_Transform = 27,
	ECameraDataType_NitroBoost = 28,
	ECameraDataType_FreeWallClimb = 29,
	ECameraDataType_AgileLocomotion = 30,
	ECameraDataType_CommonFlyMove = 31,
	ECameraDataType_Max = 32
};

// Object Name: Enum ShadowTrackerExtra.ESTAINoiseType
enum class ESTAINoiseType : uint8 {
	PlayerShootSound = 0,
	VehicleRunSound = 1,
	VehicleHornSound = 2,
	ESTAINoiseType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleShapeType
enum class ESTExtraVehicleShapeType : uint8 {
	VST_Unknown = 0,
	VST_Motorbike = 1,
	VST_Motorbike_SideCart = 2,
	VST_Dacia = 3,
	VST_MiniBus = 4,
	VST_PickUp = 5,
	VST_PickUp_2 = 6,
	VST_Buggy_1 = 7,
	VST_UAZ_1 = 8,
	VST_UAZ_2 = 9,
	VST_UAZ_3 = 10,
	VST_PG117 = 11,
	VST_Aquarail = 12,
	VST_UAZ_4 = 13,
	VST_Mirado = 14,
	VST_Mirado_2 = 15,
	VST_Rony = 16,
	VST_Scooter = 17,
	VST_SnowMobile = 18,
	VST_TukTukTuk = 19,
	VST_SnowBike = 20,
	VST_Surfboard = 21,
	VST_Snowboard = 22,
	VST_UH60 = 23,
	VST_Amphibious = 24,
	VST_LadaNiva = 25,
	VST_UAV = 26,
	VST_LootTruck = 27,
	VST_ATGMotorCycle = 28,
	VST_ModelY = 29,
	VST_ATV = 30,
	VST_SciFi = 31,
	VST_LionDance = 32,
	VST_UAZ_PS = 33,
	VST_MegaDrop = 49,
	VST_Lamborghini = 50,
	VST_Lamborghini_2 = 51,
	VST_GoldMirado = 52,
	VST_BigFoot = 53,
	VST_HeavyDacia = 54,
	VST_HeavyPickup = 55,
	VST_HeavyBuggy = 56,
	VST_HeavyUAZ = 57,
	VST_HeavyUH60 = 58,
	VST_TrackVehicle = 59,
	VST_Motorglider = 60,
	VST_CoupeRB = 61,
	VST_CatapultMachine = 62,
	VST_MediumTank = 63,
	VST_WingMan = 64,
	VST_Bike = 65,
	VST_UTV = 66,
	VST_Bike_WithRack = 67,
	VST_LightTank = 68,
	VST_HeavyTank = 69,
	VST_RaptorDinosaur = 70,
	VST_Pterosaur = 71,
	VST_TyrannosaurusRex = 72,
	VST_RubberDuck = 73,
	VST_CapsuleVehicle = 74,
	VST_ReindeerBio = 75,
	VST_ReindeerCart = 76,
	VST_BlanketVehicle = 77,
	VST_HoveringMecha = 78,
	VST_MechaVehicle = 79,
	VST_ForbiddenVehicle = 80,
	VST_Fighter = 81,
	VST_HeavyMecha = 82,
	VST_OceanVehicle = 86,
	VST_Horse = 87,
	VST_AmphibiousBoat = 88,
	VST_WarHorse = 89,
	VST_HorseLiquid = 90,
	VST_TigerVehicle = 91,
	VST_MammothVehicle = 92,
	VST_StoreBus = 93,
	VST_Panda = 94,
	VST_PandaBall = 95,
	VST_UAVDeer = 96,
	VST_Camel = 97,
	VST_Titan = 98,
	VST_Aircraft = 99,
	VST_PicoBus = 100,
	VST_Blanc = 101,
	VST_Optimus = 102,
	VST_OptimusVehicle = 103,
	VST_Megatron = 104,
	VST_MegatronVehicle = 105,
	VST_Skate = 106,
	VST_Broom = 107,
	VST_PenguinCart = 108,
	VST_Scorpion = 109,
	VST_Deer = 110,
	VST_UAVVine = 111,
	VST_PoliceCar = 112,
	VST_UAVGodView = 113,
	VST_MTLB = 114,
	VST_QuadcopterDrone = 115,
	VST_CustomVehicle1 = 116,
	VST_CustomVehicle2 = 117,
	VST_CustomVehicle3 = 118,
	VST_CustomVehicle4 = 119,
	VST_CustomVehicle5 = 120,
	VST_CustomVehicle6 = 121,
	VST_CustomVehicle7 = 122,
	VST_CustomVehicle8 = 123,
	VST_CustomVehicle9 = 124,
	VST_CustomVehicle10 = 125,
	VST_PreparedVeh1 = 254,
	VST_PreparedVeh2 = 255,
	VST_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleType
enum class ESTExtraVehicleType : uint8 {
	VT_Unknown = 0,
	VT_Motorbike_1 = 1,
	VT_Motorbike_2 = 2,
	VT_Motorbike_SideCart_1 = 3,
	VT_Motorbike_SideCart_2 = 4,
	VT_Dacia_1 = 5,
	VT_Dacia_2 = 6,
	VT_Dacia_3 = 7,
	VT_Dacia_4 = 8,
	VT_UAZ_1 = 9,
	VT_UAZ_2 = 10,
	VT_UAZ_3 = 11,
	VT_Buggy_1 = 12,
	VT_Buggy_2 = 13,
	VT_Buggy_3 = 14,
	VT_PG117 = 15,
	VT_Aquarail = 16,
	VT_MiniBus_2 = 17,
	VT_MiniBus_3 = 18,
	VT_MiniBus_4 = 19,
	VT_PickUp_2 = 20,
	VT_PickUp_3 = 21,
	VT_PickUp_4 = 22,
	VT_PickUp_5 = 23,
	VT_PickUp_6 = 24,
	VT_PickUp_7 = 25,
	VT_PickUp_8 = 26,
	VT_PickUp_9 = 27,
	VT_PickUp_10 = 28,
	VT_PickUp_11 = 29,
	VT_Buggy_5 = 30,
	VT_Buggy_6 = 31,
	VT_Buggy_7 = 32,
	VT_Mirado_Close_2 = 33,
	VT_Mirado_Close_3 = 34,
	VT_Mirado_Close_4 = 35,
	VT_Mirado_Close_5 = 36,
	VT_Mirado_Open_2 = 37,
	VT_Mirado_Open_3 = 38,
	VT_Mirado_Open_4 = 39,
	VT_Mirado_Open_5 = 40,
	VT_UAZ04 = 41,
	VT_Rony_2 = 42,
	VT_Rony_3 = 43,
	VT_Rony_4 = 44,
	VT_Scooter = 45,
	VT_Surfboard = 46,
	VT_UH60 = 47,
	VT_Amphibious = 48,
	VT_TUK = 49,
	VT_Snowboard = 50,
	VT_UAV = 51,
	VT_Telecar = 52,
	VT_UCAV = 53,
	VT_Reserved_55 = 54,
	VT_DragonBoat = 55,
	VT_Tesla = 56,
	VT_ExtraMount = 57,
	VT_Motorglider = 58,
	VT_Reserved_60 = 59,
	VT_LootTruck = 60,
	VT_Reserved_62 = 61,
	VT_Reserved_63 = 62,
	VT_ATGMotorCycle = 63,
	VT_ModelY = 64,
	VT_ATV = 65,
	VT_SciFi = 66,
	VT_LionDance = 67,
	VT_UAZ_PS = 68,
	VT_Reserved_70 = 69,
	VT_Reserved_71 = 70,
	VT_Reserved_72 = 71,
	VT_Reserved_73 = 72,
	VT_Reserved_74 = 73,
	VT_Reserved_75 = 74,
	VT_Reserved_76 = 75,
	VT_Reserved_77 = 76,
	VT_Reserved_78 = 77,
	VT_Reserved_79 = 78,
	VT_Reserved_80 = 79,
	VT_Reserved_81 = 80,
	VT_Reserved_82 = 81,
	VT_Reserved_83 = 82,
	VT_Reserved_84 = 83,
	VT_Reserved_85 = 84,
	VT_Reserved_86 = 85,
	VT_Reserved_87 = 86,
	VT_Reserved_88 = 87,
	VT_Reserved_89 = 88,
	VT_Reserved_90 = 89,
	VT_Reserved_91 = 90,
	VT_Reserved_92 = 91,
	VT_Reserved_93 = 92,
	VT_Reserved_94 = 93,
	VT_Reserved_95 = 94,
	VT_Reserved_96 = 95,
	VT_Reserved_97 = 96,
	VT_Reserved_98 = 97,
	VT_Reserved_99 = 98,
	VT_Reserved_100 = 99,
	VT_Lamborghini = 100,
	VT_Lamborghini_2 = 101,
	VT_MegaDrop = 102,
	VT_BigFoot = 103,
	VT_TrackVehicle = 104,
	VT_CoupeRB = 105,
	VT_Reserved_107 = 106,
	VT_CatapultMachine = 107,
	VT_UTV = 108,
	VT_Bike = 109,
	VT_Tank = 110,
	VT_Bike_WithRack = 111,
	VT_RaptorDinosaur = 112,
	VT_Pterosaur = 113,
	VT_TyrannosaurusRex = 114,
	VT_RubberDuck = 115,
	VT_CapsuleVehicle = 116,
	VT_ReindeerBio = 117,
	VT_ReindeerCart = 118,
	VT_Bike_Valentine = 119,
	VT_BlanketVehicle = 120,
	VT_HoveringMecha = 121,
	VT_MechaVehicle = 122,
	VT_OceanVehicle = 123,
	VT_Fighter = 124,
	VT_Reserved_126 = 125,
	VT_Horse = 126,
	VT_WarHorse = 127,
	VT_HorseLiquid = 128,
	VT_AmphibiousBoat = 129,
	VT_Tiger = 130,
	VT_Mammoth = 131,
	VT_SnowBall = 132,
	VT_StoreBus = 133,
	VT_Panda = 134,
	VT_PandaBall = 135,
	VT_UAVDeer = 136,
	VT_Camel = 137,
	VT_Titan = 138,
	VT_Aircraft = 139,
	VT_PicoBus = 140,
	VT_Blanc = 141,
	VT_Optimus = 142,
	VT_OptimusVehicle = 143,
	VT_Megatron = 144,
	VT_MegatronVehicle = 145,
	VT_Skate = 146,
	VT_Broom = 147,
	VT_PenguinCart = 148,
	VT_Scorpion = 149,
	VT_Deer = 150,
	VT_UAVVine = 151,
	VT_PoliceCar = 152,
	VT_UAVGodView = 153,
	VT_MTLB = 154,
	VT_QuadcopterDrone = 155,
	VT_CustomVehicle1 = 156,
	VT_CustomVehicle2 = 157,
	VT_CustomVehicle3 = 158,
	VT_CustomVehicle4 = 159,
	VT_CustomVehicle5 = 160,
	VT_CustomVehicle6 = 161,
	VT_CustomVehicle7 = 162,
	VT_CustomVehicle8 = 163,
	VT_CustomVehicle9 = 164,
	VT_CustomVehicle10 = 165,
	VT_MAX = 166
};

// Object Name: Enum ShadowTrackerExtra.ECarryBackState
enum class ECarryBackState : uint8 {
	None = 0,
	InCarryBack = 1,
	CarryBackDone = 2,
	InPutDown = 3,
	InBeCarriedBack = 4,
	BeCarriedBackDone = 5,
	InBePutDown = 6,
	CarryToVehicle = 7,
	BeCarriedToVehicle = 8,
	ECarryBackState_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.ECarryToVehicleDirection
enum class ECarryToVehicleDirection : uint8 {
	ECTVDir_NONE = 0,
	ECTVDir_Front = 1,
	ECTVDir_Back = 2,
	ECTVDir_Left = 3,
	ECTVDir_Right = 4,
	ECTVDir_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EPutDownDetachMethod
enum class EPutDownDetachMethod : uint8 {
	Unkown = 0,
	Skill_Front = 1,
	Skill_Back = 2,
	StateInterrupted_SelfDying = 3,
	StateInterrupted_SelfDead = 4,
	StateInterrupted_SelfInParachute = 5,
	StateInterrupted_SelfSwim = 6,
	StateInterrupted_SelfDiving = 7,
	StateInterrupted_SelfInVehicle = 8,
	StateInterrupted_OtherDead = 9,
	StateInterrupted_RescueFinish = 10,
	SkillInterrupted = 11,
	NoConnectOutOfTime = 12,
	OtherReason = 13,
	StateInterrupted_DisableState = 14,
	PreReason1 = 15,
	PreReason2 = 16,
	PreReason3 = 17,
	CarryToVehicle = 18,
	EPutDownDetachMethod_MAX = 19
};

// Object Name: Enum ShadowTrackerExtra.EAvatarEnum
enum class EAvatarEnum : uint8 {
	NONE = 0,
	CharacterAvatar = 1,
	WeaponAvatar = 2,
	VehicleAvatar = 3,
	VehicleAdAvatar = 4,
	PetAvatar = 5,
	PlaneAvatar = 6,
	GrenadeAvatar = 7,
	ConsumableAvatar = 8,
	WeaponDIYAvatar = 9,
	AvatarEnumMax = 10,
	EAvatarEnum_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.EWeaponFuncFlag
enum class EWeaponFuncFlag : uint8 {
	SoundDisable = 1,
	MaxFuncFlag = 2,
	EWeaponFuncFlag_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponAttachmentSocketType
enum class EWeaponAttachmentSocketType : uint8 {
	GunPoint = 0,
	Grip = 1,
	Magazine = 2,
	Gunstock = 3,
	OpticalSight = 4,
	MasterGun = 7,
	Ammo = 8,
	Pendant = 9,
	AngledOpticalSight = 10,
	ACCore = 11,
	Bezel = 12,
	GunLock = 13,
	TacticalAttach = 14,
	None = 99,
	EWeaponAttachmentSocketType_MAX = 100
};

// Object Name: Enum ShadowTrackerExtra.ESightType
enum class ESightType : uint8 {
	SightX1 = 0,
	SightX2 = 1,
	SightX4 = 2,
	SightX8 = 3,
	SightDefault = 4,
	SightX3 = 5,
	SightX6 = 6,
	SightTeleScope = 7,
	ESightType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EWeaponFireMode
enum class EWeaponFireMode : uint8 {
	WeaponFireMode_Single = 0,
	WeaponFireMode_Burst = 1,
	WeaponFireMode_Auto = 2,
	WeaponFireMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponType
enum class EWeaponType : uint8 {
	AWT_None = 0,
	AWT_Pistol = 1,
	AWT_PistolSilencer = 2,
	AWT_ShotGun = 3,
	AWT_SubmachineGun = 4,
	AWT_RPG = 5,
	AWT_ChargeGun = 6,
	AWT_Knife = 7,
	AWT_EnegyCaptureWhip = 8,
	AWT_RifleGun = 9,
	AWT_RPG7 = 10,
	AWT_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.EWeaponTypeNew
enum class EWeaponTypeNew : uint8 {
	EWeaponTypeNew_Other = 0,
	EWeaponTypeNew_Rifle = 1,
	EWeaponTypeNew_SingleShotSniper = 2,
	EWeaponTypeNew_BurstShotSniper = 3,
	EWeaponTypeNew_Submachine = 4,
	EWeaponTypeNew_ShotGun = 5,
	EWeaponTypeNew_MachineGun = 6,
	EWeaponTypeNew_Pistol = 7,
	EWeaponTypeNew_Melee = 8,
	EWeaponTypeNew_Crossbow = 9,
	EWeaponTypeNew_ThrownObj = 10,
	EWeaponTypeNew_DualWielding = 11,
	EWeaponTypeNew_AnyType = 100,
	EWeaponTypeNew_MAX = 101
};

// Object Name: Enum ShadowTrackerExtra.EWeaponOperationMode
enum class EWeaponOperationMode : uint8 {
	None = 0,
	Shoot = 1,
	Skill = 2,
	Throw = 3,
	EWeaponOperationMode_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeaponAttachState
enum class EWeaponAttachState : uint8 {
	EAttachHand = 0,
	EAttachBack = 1,
	EWeaponAttachState_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponAction
enum class EWeaponAction : uint8 {
	WA_None = 0,
	WA_EquipWeapon = 1,
	WA_UnEquipWeapon = 2,
	WA_Shoot = 3,
	WA_IdleToNoneIdle = 4,
	WA_NoneShoot = 5,
	WA_Reload = 6,
	WA_AutoShoot = 7,
	WA_EndShoot = 8,
	WA_DropWeapon = 9,
	WA_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EExtraWeaponUIType
enum class EExtraWeaponUIType : uint8 {
	EWUT_None = 0,
	EWUT_MeleeWeapon = 1,
	EWUT_ShootWeapon = 2,
	EWUT_Greanade = 3,
	EWUT_KeroseneFurnace = 4,
	EWUT_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESyncOperation
enum class ESyncOperation : uint8 {
	PutOn = 0,
	PutOff = 1,
	ApplyHead = 2,
	MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponState
enum class EWeaponState : uint8 {
	WS_Unavailable = 0,
	WS_UnEquiped = 1,
	WS_Equiped = 2,
	WS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESTEWeaponShootType
enum class ESTEWeaponShootType : uint8 {
	None = 0,
	OneBulletBursting = 1,
	MultiBulletsBursting = 2,
	Auto = 4,
	Volley = 8,
	ESTEWeaponShootType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.ECrossHairSpreadType
enum class ECrossHairSpreadType : uint8 {
	ECHST_Offset = 0,
	ECHST_Scale = 1,
	ECHST_Damage = 2,
	ECHST_Rotate = 3,
	ECHST_SingleCircle = 4,
	ECHST_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8 {
	All = 0,
	Tactical = 1,
	Tactical_Specail1 = 2,
	Tactical_Specail2 = 3,
	EWeaponReloadMethod_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeaponReloadType
enum class EWeaponReloadType : uint8 {
	Magzine = 0,
	OneByOne = 1,
	OneByOneAndClip = 2,
	JunggleStype = 3,
	EWeaponReloadType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EShootVerifyStatType
enum class EShootVerifyStatType : uint8 {
	ShootCorner = 0,
	PingDiffVal_G500 = 1,
	PingDiffVal_350_501 = 2,
	PingDiffVal_200_351 = 3,
	PingDiffVal_100_201 = 4,
	PingDiffVal_0_101 = 5,
	PingDiffVal_L0 = 6,
	PingDiffVal_G500_Pass = 11,
	PingDiffVal_350_500_Pass = 12,
	PingDiffVal_200_350_Pass = 13,
	PingDiffVal_100_200_Pass = 14,
	PingDiffVal_0_100_Pass = 15,
	PingDiffVal_L0_Pass = 16,
	PingDiffVal_G500_ShootCorner = 31,
	PingDiffVal_350_500_ShootCorner = 32,
	PingDiffVal_200_350_ShootCorner = 33,
	PingDiffVal_100_200_ShootCorner = 34,
	PingDiffVal_0_100_ShootCorner = 35,
	PingDiffVal_L0_ShootCorner = 36,
	PingDiffVal_G500_ShootCornerAI = 41,
	PingDiffVal_350_500_ShootCornerAI = 42,
	PingDiffVal_200_350_ShootCornerAI = 43,
	PingDiffVal_100_200_ShootCornerAI = 44,
	PingDiffVal_0_100_ShootCornerAI = 45,
	PingDiffVal_L0_ShootCornerAI = 46,
	PingDiffVal_G500AI = 51,
	PingDiffVal_350_500AI = 52,
	PingDiffVal_200_350AI = 53,
	PingDiffVal_100_200AI = 54,
	PingDiffVal_0_100AI = 55,
	PingDiffVal_L0AI = 56,
	PingDiffVal_G500_PassAI = 61,
	PingDiffVal_350_500_PassAI = 62,
	PingDiffVal_200_350_PassAI = 63,
	PingDiffVal_100_200_PassAI = 64,
	PingDiffVal_0_100_PassAI = 65,
	PingDiffVal_L0_PassAI = 66,
	BulletIDAndShootIDError = 100,
	None = 101,
	EShootVerifyStatType_MAX = 102
};

// Object Name: Enum ShadowTrackerExtra.EMoveBaseSpeedType
enum class EMoveBaseSpeedType : uint8 {
	MBST_Normal = 0,
	MBST_Fast = 1,
	MBST_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EShootVertifySubRes
enum class EShootVertifySubRes : uint8 {
	OK = 0,
	BulletIDAndShootIDError1_2 = 1,
	BulletIDAndShootIDError1_3 = 2,
	BulletIDAndShootIDError1_4 = 3,
	BulletIDAndShootIDError1_5 = 4,
	BulletIDAndShootIDError1_6 = 5,
	BulletIDAndShootIDError1_7 = 6,
	BulletIDAndShootIDError2_2 = 7,
	BulletIDAndShootIDError2_3 = 8,
	BulletIDAndShootIDError2_4 = 9,
	BulletIDAndShootIDError2_5 = 10,
	BulletIDAndShootIDError2_6 = 11,
	BulletIDAndShootIDError2_7 = 12,
	EShootVertifySubRes_MAX = 13
};

// Object Name: Enum ShadowTrackerExtra.EBulletClipType
enum class EBulletClipType : uint8 {
	BCT_BASE = 0,
	BCT_GrenadeLaunch = 1,
	BCT_USING = 2,
	BCT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponShootIntervalMode
enum class EWeaponShootIntervalMode : uint8 {
	EWeaponShootIntervalMode_A = 0,
	EWeaponShootIntervalMode_B = 1,
	EWeaponShootIntervalMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESightVisionType
enum class ESightVisionType : uint8 {
	NoneSightVision = 0,
	NightVision = 1,
	ThermalImaging = 2,
	ESightVisionType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EEntityPriority
enum class EEntityPriority : uint8 {
	LowPriority = 0,
	MiddlePriority = 1,
	HighestPriority = 2,
	EEntityPriority_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponOverrideFeatureSwitchType
enum class EWeaponOverrideFeatureSwitchType : uint8 {
	Shoot = 0,
	HeadShotHit = 1,
	EquipAndUnequipWeapon = 2,
	MagazineInAndOut = 3,
	KillBroadcast = 4,
	GrenadeExplode = 5,
	Feature_PoseSwitchEffect = 6,
	Feature_MuzzleEffect = 7,
	Feature_PoseReload = 8,
	Feature_HitEffect = 9,
	Feature_GrenadeExplodeEffect = 10,
	MAX_BIT = 31,
	EWeaponOverrideFeatureSwitchType_MAX = 32
};

// Object Name: Enum ShadowTrackerExtra.EReuqestFireRet
enum class EReuqestFireRet : uint8 {
	OK = 0,
	InvalidRequestBulletNum1 = 1,
	InvalidRequestBulletNum2 = 2,
	InvalidStartShootID = 3,
	InvalidClipInfo1 = 4,
	InvalidClipInfo2 = 5,
	InvalidAntiCheatComp = 6,
	InvalidBulletNumInBarrel = 7,
	EReuqestFireRet_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EShootWeaponState
enum class EShootWeaponState : uint8 {
	SWS_Idle = 0,
	SWS_NoneIdle = 1,
	SWS_Shooting = 2,
	SWS_Reloading = 3,
	SWS_ReloadDone = 4,
	SWS_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EChangePetFailedReason
enum class EChangePetFailedReason : uint8 {
	ChangePetFailed_Cooldown = 0,
	ChangePetFailed_Disable = 1,
	ChangePetFailed_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPetState
enum class EPetState : uint8 {
	PetStateNone = 0,
	PetIdle = 1,
	PetDisappear = 2,
	PetParachute = 3,
	PetFollow = 4,
	PetFlyAround = 5,
	PetFlyFollow = 6,
	PetSwimming = 7,
	PetSleeping = 8,
	PetPlayingFeature = 9,
	PetStateCount = 10,
	EPetState_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.ETeleportPawnType
enum class ETeleportPawnType : uint8 {
	NormalTeleport = 0,
	ParachuteTeleport = 1,
	RemoteTeleport = 2,
	ETeleportPawnType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehiclVisibleErrorType
enum class EVehiclVisibleErrorType : uint8 {
	VVET_None = 0,
	VVET_ActorHide = 1,
	VVET_MeshInvisible = 2,
	VVET_NotRendered = 3,
	VVET_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAttachVehiclErrorType
enum class EAttachVehiclErrorType : uint8 {
	AVET_None = 0,
	AVET_NotSuccess = 1,
	AVET_VehicleNull = 2,
	AVET_CharacterNull = 3,
	AVET_ControllerNull = 4,
	AVET_RelativeLocError = 5,
	AVET_RelativeMeshError = 6,
	AVET_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EHealthPredictShowType
enum class EHealthPredictShowType : uint8 {
	EHealthPredict_Add = 0,
	EHealthPredict_Set = 1,
	EHealthPredict_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.ESyncTicketStatus
enum class ESyncTicketStatus : uint8 {
	EMatch = 0,
	ETimeOut = 1,
	EFuture = 2,
	ESyncTicketStatus_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFatalDamageCharacterType
enum class EFatalDamageCharacterType : uint8 {
	EUnknown = 0,
	EPlayer = 1,
	ERobot = 2,
	EMonster = 3,
	EBoss = 4,
	EInfecZombie = 5,
	EInfecRevenger = 6,
	EWalkingDead = 7,
	EWalkingDeadAI = 8,
	EMercenary = 9,
	EFatalDamageCharacterType_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EFatalDamageRelationShip
enum class EFatalDamageRelationShip : uint8 {
	MyTeamateIsCauser = 0,
	NotRelated = 1,
	MyTeammateIsVictim = 2,
	MyTeammateIsCauserAndVictim = 3,
	EFatalDamageRelationShip_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAvatarSlotType
enum class EAvatarSlotType : uint8 {
	EAvatarSlotType_NONE = 0,
	EAvatarSlotType_HeadEquipemtSlot = 1,
	EAvatarSlotType_HairEquipemtSlot = 2,
	EAvatarSlotType_HatEquipemtSlot = 3,
	EAvatarSlotType_FaceEquipemtSlot = 4,
	EAvatarSlotType_ClothesEquipemtSlot = 5,
	EAvatarSlotType_PantsEquipemtSlot = 6,
	EAvatarSlotType_ShoesEquipemtSlot = 7,
	EAvatarSlotType_BackpackEquipemtSlot = 8,
	EAvatarSlotType_HelmetEquipemtSlot = 9,
	EAvatarSlotType_ArmorEquipemtSlot = 10,
	EAvatarSlotType_ParachuteEquipemtSlot = 11,
	EAvatarSlotType_GlassEquipemtSlot = 12,
	EAvatarSlotType_NightVisionEquipemtSlot = 13,
	EAvatarSlotType_BeardEquipemtSlot = 14,
	EAvatarSlotType_GlideEquipemtSlot = 15,
	EAvatarSlotType_HandEffectEquipemtSlot = 16,
	EAvatarSlotType_BackPack_PendantSlot = 17,
	EAvatarSlotType_MechaChestSlot = 18,
	EAvatarSlotType_MechaArmSlot = 19,
	EAvatarSlotType_MechaLegSlot = 20,
	EAvatarSlotType_MechaInnerSuitSlot = 21,
	EAvatarSlotType_FootEffectEquipemtSlot = 22,
	EAvatarSlotType_HandleEquipmentSlot = 23,
	EAvatarSlotType_UnderClothSlot = 24,
	EAvatarSlotType_UnderPantsSlot = 25,
	EAvatarSlotType_MaxSlotNum = 26,
	EAvatarSlotType_VehicleCut = 27,
	EAvatarSlotType_MAX = 28
};

// Object Name: Enum ShadowTrackerExtra.EInviteResponceType
enum class EInviteResponceType : uint8 {
	ETimeout = 0,
	EAgree = 1,
	ERefuse = 2,
	EBeInviting = 3,
	EInvalidInvitation = 4,
	ENotAllowedInvite = 5,
	ENotAllowedFollow = 6,
	EDuringTransferLeader = 7,
	EInviteResponceType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EParachuteInvitationType
enum class EParachuteInvitationType : uint8 {
	EInviteFollow = 0,
	EInviteTransferLeader = 1,
	EInviteFollowAircraft = 2,
	EInviteApplyAircraft = 3,
	EParachuteInvitationType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDeltaRotationTest
enum class EDeltaRotationTest : uint8 {
	Prone = 0,
	KnockedDown = 1,
	EDeltaRotationTest_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ECharacterMainType
enum class ECharacterMainType : uint8 {
	NormalPlayer = 1,
	Zombie = 2,
	WalkingDead = 3,
	WalkingDeadAI = 4,
	Mercenary = 5,
	_MAX = 255,
	ECharacterMainType_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.ECharacterSubType
enum class ECharacterSubType : uint8 {
	InvalidPawnType = 0,
	NormalPlayer = 11,
	RevengerPlayer = 12,
	MotherZombie = 21,
	NormalZombie = 22,
	InvisibleZombie = 23,
	ThrowerZombie = 24,
	WalkingDeadMale = 31,
	WalkingDeadFemale = 32,
	_MAX = 255,
	ECharacterSubType_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.ECharacterNetRelevantStatus
enum class ECharacterNetRelevantStatus : uint8 {
	ENRS_IsRelevant = 0,
	ENRS_N_GroupRelevant = 1,
	ENRS_N_Distance = 2,
	ENRS_N_ParallelWorld = 3,
	ENRS_N_InBornLand = 4,
	ENRS_N_InFlyingState = 5,
	ENRS_N_MatchTeamID = 6,
	ENRS_N_UnKnown = 7,
	ENRS_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.ECustomMovmentMode
enum class ECustomMovmentMode : uint8 {
	CUSTOM_MOVE_None = 0,
	CUSTOM_MOVE_CrowdMove = 1,
	CUSTOM_MOVE_Shovel = 2,
	CUSTOM_MOVE_Climb = 3,
	CUSTOM_SKILL_DirectMove = 4,
	CUSTOM_MOVE_SLIDE = 5,
	CUSTOM_MOVE_Vault = 6,
	CUSTOM_MOVE_DriveFireBalloon = 7,
	CUSTOM_MOVE_AirBorneStartUp = 8,
	CUSTOM_MOVE_AirBorneUnChangeHeight = 9,
	CUSTOM_MOVE_AirBorneUniformUp = 10,
	CUSTOM_MOVE_AirBorneUniformDown = 11,
	CUSTOM_MOVE_AirBorneWindField = 12,
	CUSTOM_MOVE_AirBorneSuperFly = 13,
	CUSTOM_MOVE_SplineMove = 14,
	CUSTOM_MOVE_SplineMoveStand = 15,
	CUSTOM_MOVE_SplineMoveSprint = 16,
	CUSTOM_MOVE_SplineMoveTurningL = 17,
	CUSTOM_MOVE_SplineMoveTurningR = 18,
	CUSTOM_MOVE_FlyingArmor = 19,
	CUSTOM_MOVE_FlyingArmorHighSpeed = 20,
	CUSTOM_MOVE_LifterControl = 21,
	CUSTOM_MOVE_ControllableDash = 22,
	CUSTOM_MOVE_Diving = 23,
	CUSTOM_MOVE_AdditiveCurve = 24,
	CUSTOM_MOVE_CurveMove = 25,
	CUSTOM_MOVE_AnimalWallRun = 26,
	CUSTOM_MOVE_AnimalDodge = 27,
	CUSTOM_MOVE_CreateRoadMoveFlying = 28,
	CUSTOM_MOVE_AirCloudStart = 29,
	CUSTOM_MOVE_AirCloudStay = 30,
	CUSTOM_MOVE_ODMGear = 31,
	CUSTOM_MOVE_GhostBalloon = 32,
	CUSTOM_MOVE_PenguinRocket = 33,
	CUSTOM_MOVE_FlowerWing = 34,
	CUSTOM_MOVE_JumpPack = 35,
	CUSTOM_MOVE_FreeWallClimb = 36,
	CUSTOM_MOVE_FreeCeilingClimb = 37,
	CUSTOM_MOVE_FreeWallTransition = 38,
	CUSTOM_MOVE_SpiderSwing = 39,
	CUSTOM_MOVE_LuaCustom_Fly = 40,
	CUSTOM_MOVE_Custom1 = 151,
	CUSTOM_MOVE_Custom2 = 152,
	CUSTOM_MOVE_Custom3 = 153,
	CUSTOM_MOVE_Custom4 = 154,
	CUSTOM_MOVE_Custom5 = 155,
	CUSTOM_MOVE_CommonFly = 156,
	CUSTOM_MOVE_BatSwarm = 157,
	CUSTOM_MOVE_Max = 158,
	CUSTOM_MAX = 159
};

// Object Name: Enum ShadowTrackerExtra.EThrowGrenadeMode
enum class EThrowGrenadeMode : uint8 {
	HighThrowMode = 0,
	LowThrowMode = 1,
	LeftThrowMode = 2,
	RightThrowMode = 3,
	EThrowGrenadeMode_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESightVisionMask
enum class ESightVisionMask : uint8 {
	NightVisionEquip = 1,
	NightVisionHelmet = 2,
	NightVisionScope = 4,
	NightVisionEnv = 8,
	ThermalImagingScope = 16,
	NightVision = 15,
	NightVisionFrame = 7,
	ESightVisionMask_MAX = 17
};

// Object Name: Enum ShadowTrackerExtra.ESightVisionCondition
enum class ESightVisionCondition : uint8 {
	NightVisionUnderGround = 1,
	ESightVisionCondition_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPaintDecalTargetValidationType
enum class EPaintDecalTargetValidationType : uint8 {
	ValidTarget = 0,
	InvalidTarget = 1,
	OutrangeTarget = 2,
	EPaintDecalTargetValidationType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETriggerUsingWeaponSourceType
enum class ETriggerUsingWeaponSourceType : uint8 {
	Default = 0,
	FromBackToHand = 1,
	PickUp = 2,
	ETriggerUsingWeaponSourceType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFollowState
enum class EFollowState : uint8 {
	None = 0,
	Leader = 1,
	Follower = 2,
	EFollowState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESpecialMovementType
enum class ESpecialMovementType : uint8 {
	SPECIAL_MOVE_None = 0,
	SPECIAL_MOVE_AirBorne = 1,
	SPECIAL_MOVE_SplineMove = 2,
	SPECIAL_MOVE_FlyingArmor = 3,
	SPECIAL_MOVE_ControllableDash = 4,
	SPECIAL_MOVE_Diving = 5,
	SPECIAL_MOVE_AdditiveCurve = 6,
	SPECIAL_MOVE_LifterControl = 7,
	SPECIAL_MOVE_LeggedAnimal = 8,
	SPECIAL_MOVE_CurveMove = 9,
	SPECIAL_MOVE_BoardMove = 10,
	SPECIAL_MOVE_CreateRoadMove = 11,
	SPECIAL_MOVE_FlyCloud = 12,
	SPECIAL_MOVE_ODMGear = 13,
	SPECIAL_MOVE_GhostBalloon = 14,
	SPECIAL_MOVE_PenguinRocket = 15,
	SPECIAL_MOVE_FlowerWing = 16,
	SPECIAL_MOVE_JumpPack = 17,
	SPECIAL_MOVE_MultipleJumpForNatureBow = 18,
	SPECIAL_MOVE_Quadruped = 19,
	SPECIAL_MOVE_FreeWallClimb = 20,
	SPECIAL_MOVE_WaterMove = 21,
	SPECIAL_MOVE_NinjaMove = 22,
	SPECIAL_MOVE_SpiderSwing = 23,
	SPECIAL_MOVE_NinjaChidoriRush = 24,
	SPECIAL_MOVE_NinjaRasenganRush = 25,
	SPECIAL_MOVE_LuaCustom = 26,
	SPECIAL_MOVE_CommonFly = 27,
	SPECIAL_MOVE_BatSwarm = 28,
	SPECIAL_MOVE_Duck = 29,
	SPECIAL_MOVE_Max = 30
};

// Object Name: Enum ShadowTrackerExtra.RescueState
enum class RescueState : uint8 {
	ERescueState_Default = 0,
	ERescueState_NormalRescue = 1,
	ERescueState_MagicRescue = 2,
	ERescueState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECharacterHealthStatus
enum class ECharacterHealthStatus : uint8 {
	HealthyAlive = 0,
	HasLastBreath = 1,
	FinishedLastBreath = 2,
	WaitingForRevival = 3,
	Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EUAVCharacterMsgType
enum class EUAVCharacterMsgType : uint8 {
	UAV_None = 0,
	UAV_VehicleSound = 1,
	UAV_CharacterMoveSound = 2,
	UAV_BulletSound = 3,
	UAV_HurtSoud = 4,
	UAV_PoisonHurtSoud = 5,
	UAV_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EFootStepState
enum class EFootStepState : uint8 {
	Run = 0,
	Squat = 1,
	Walk = 2,
	Crawl = 3,
	Fall = 4,
	Jump = 5,
	EFootStepState_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ESTEScopeType
enum class ESTEScopeType : uint8 {
	Normal = 0,
	ProneMove = 1,
	InFold = 2,
	AutoCollapsed = 3,
	BoltAction = 4,
	ESTEScopeType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EParachuteState
enum class EParachuteState : uint8 {
	PS_None = 0,
	PS_FreeFall = 1,
	PS_Opening = 2,
	PS_Landing = 3,
	PS_Launch = 4,
	PS_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EIdeaDecalParentType
enum class EIdeaDecalParentType : uint8 {
	NoParent = 0,
	MovableStaticMesh = 1,
	SkeletalMesh = 2,
	DestroyableStaticMesh = 3,
	NoParentAsParticle = 4,
	EIdeaDecalParentType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ECharacterAnimOverrideType
enum class ECharacterAnimOverrideType : uint8 {
	ECAOT_Default = 0,
	ECAOT_FlySuit = 1,
	ECAOT_FlyDevice = 10,
	ECAOT_FlyWingSuit = 20,
	ECAOT_FlyRevivedByDB = 100,
	ECAOT_MAX = 101
};

// Object Name: Enum ShadowTrackerExtra.ECharacterHideMovementAcive
enum class ECharacterHideMovementAcive : uint8 {
	Normal = 0,
	Active = 1,
	DeActive = 2,
	ECharacterHideMovementAcive_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ERecoveryReasonType
enum class ERecoveryReasonType : uint8 {
	ERecoveryReason_Medicine = 0,
	ERecoveryReason_Energy = 1,
	ERecoveryReason_RescueByTeammate = 2,
	ERecoveryReason_Type3 = 3,
	ERecoveryReason_Type4 = 4,
	ERecoveryReason_Type5 = 5,
	ERecoveryReason_Type6 = 6,
	ERecoveryReason_Type7 = 7,
	ERecoveryReason_Max = 8
};

// Object Name: Enum ShadowTrackerExtra.EFootprintType
enum class EFootprintType : uint8 {
	Invalid = 0,
	Left = 1,
	Right = 2,
	EFootprintType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPerStepDamageType
enum class EPerStepDamageType : uint8 {
	PSDT_Original = 0,
	PSDT_AfterDCInterface = 1,
	PSDT_AfterDamageEvent = 2,
	PSDT_AfterTakeDamage = 3,
	PSDT_AfterRadialDmgModify = 4,
	PSDT_AfterBurnDmgModify = 5,
	PSDT_AfterGameModeModify = 6,
	PSDT_AfterEventPreTakeDamage = 7,
	PSDT_AfterBodyhurtDamage = 8,
	PSDT_AfterDamageReduceModify = 9,
	PSDT_AfterEventTakeDamage = 10,
	PSDT_AfterCustomBodyhurtDamage = 11,
	PSDT_Final = 12,
	PSDT_Num = 13,
	PSDT_MAX = 14
};

// Object Name: Enum ShadowTrackerExtra.ECanJumpError
enum class ECanJumpError : uint8 {
	CJE_None = 0,
	CJE_IsJumping = 1,
	CJE_IsCrouched = 2,
	CJE_JumpNotAllowed = 3,
	CJE_WantsToCrouch = 4,
	CJE_MovementModeError = 5,
	CJE_JumpCountLimit = 6,
	CJE_NotProvidingForce = 7,
	CJE_DoJumpFailed = 8,
	CJE_DoJumpSuccess = 9,
	CJE_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EJumpFromPlaneType
enum class EJumpFromPlaneType : uint8 {
	None = 0,
	Born = 1,
	Revival = 2,
	EJumpFromPlaneType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMeleeAutoAimType
enum class EMeleeAutoAimType : uint8 {
	NoAutoAim = 0,
	AllTime = 1,
	EMeleeAutoAimType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EGameModeType
enum class EGameModeType : uint8 {
	EUnknownGameMode = 0,
	ETypicalGameMode = 1,
	EEntertainmentGameMode = 2,
	EGameModeGroup = 3,
	EBattleRoyalCorpsWarMode = 4,
	EWarGameMode = 5,
	EWarGameMode_SuperPower = 6,
	EWarGameMode_GrandTheft = 7,
	EPVEGameMode = 8,
	EPVECollectionGameMode = 9,
	EActivityGameMode = 10,
	EDeathMatchGameMode = 11,
	EPVEInfectionGameMode = 12,
	EHeavyWeaponGameMode = 13,
	EVehicleWar = 15,
	EVehicleWar_CAMP = 16,
	EBattleRoyal_SuperCold = 17,
	ESocialIsland = 18,
	ETraining = 19,
	EFourInOneGameMode = 20,
	EBigEventGameMode = 21,
	EXAndT = 22,
	EBountyHunter = 23,
	ECreativeModeGameMode = 24,
	EPlanPHGameMode = 25,
	EMainCityGameMode = 26,
	EPlanCHGameMode = 27,
	EGameModeType_MAX = 28
};

// Object Name: Enum ShadowTrackerExtra.EPlayerAutoNavMode
enum class EPlayerAutoNavMode : uint8 {
	StaticLocation = 0,
	Character = 1,
	EPlayerAutoNavMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPlayerAutoNavFindResult
enum class EPlayerAutoNavFindResult : uint8 {
	HasPath = 0,
	NoPath = 1,
	NoCharacter = 2,
	EPlayerAutoNavFindResult_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPlayerAutoNavResult
enum class EPlayerAutoNavResult : uint8 {
	Succeed = 0,
	Failed = 1,
	UserCancel = 2,
	NoCharacter = 3,
	EPlayerAutoNavResult_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EMeshType
enum class EMeshType : uint8 {
	None = 0,
	Skeletal = 1,
	Static = 2,
	SkeletalWithSocket = 3,
	EMeshType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EOpticalSightType
enum class EOpticalSightType : uint8 {
	NoneSight = 0,
	UpperLarge = 1,
	UpperSmall = 2,
	UpperDefault = 3,
	EOpticalSightType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeaponSubSlotType
enum class EWeaponSubSlotType : uint8 {
	None = 0,
	UpperLarge = 1,
	UpperSmall = 2,
	UpperDefault = 3,
	Laser = 4,
	EWeaponSubSlotType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EWeaponPendantSocketType
enum class EWeaponPendantSocketType : uint8 {
	First = 0,
	Third = 1,
	Lobby = 2,
	ArmamentBank = 3,
	Store = 4,
	Max_Auto = 5,
	EWeaponPendantSocketType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EPickUpTransactionFailure
enum class EPickUpTransactionFailure : uint8 {
	None = 0,
	InvalidOwner = 1,
	InvalidSource = 2,
	InvalidItem = 3,
	CustomCheckFailed = 4,
	ValidationFailed = 5,
	BackpackUnavailable = 6,
	BackpackRejected = 7,
	EPickUpTransactionFailure_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EPickupSpawnWay
enum class EPickupSpawnWay : uint8 {
	None = 0,
	ItemGenerator = 1,
	EPickupSpawnWay_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EParachuteJumpType
enum class EParachuteJumpType : uint8 {
	None = 0,
	JumpToLandInWater = 1,
	EParachuteJumpType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EScreenParticleEffectType
enum class EScreenParticleEffectType : uint8 {
	ESPET_None = 0,
	ESPET_Rainy = 1,
	ESPET_Snowy = 2,
	ESPET_Blizzard = 3,
	ESPET_DustStorm = 4,
	ESPET_MicroRegion = 5,
	ESPET_Max = 6
};

// Object Name: Enum ShadowTrackerExtra.EAngledSightType
enum class EAngledSightType : uint8 {
	Switch = 0,
	AngledSight = 1,
	NormalSight = 2,
	EAngledSightType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EInOutDoorOverrideType
enum class EInOutDoorOverrideType : uint8 {
	NotOverrideInOutDoor = 0,
	InDoor = 1,
	OutDoor = 2,
	EInOutDoorOverrideType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAIAttackType
enum class EAIAttackType : uint8 {
	AttackType_None = 0,
	AttackType_Melee = 1,
	AttackType_Remotely = 2,
	AttackType_Flight = 3,
	AttackType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAIShootingPose
enum class EAIShootingPose : uint8 {
	ShootingPose_Stand = 0,
	ShootingPose_Stand_Peek_Left = 1,
	ShootingPose_Stand_Peek_Right = 2,
	ShootingPose_Crouch_Peek_Left = 3,
	ShootingPose_Crouch_Peek_Right = 4,
	ShootingPose_Crouch = 5,
	ShootingPose_Prone = 6,
	ShootingPose_Normal = 255,
	ShootingPose_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.EAICharacterRotateInterpType
enum class EAICharacterRotateInterpType : uint8 {
	UseRotateRateOfCharacterMovementComponent = 0,
	UseControlRotationInterp = 1,
	EAICharacterRotateInterpType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8 {
	Shoot_Weap = 0,
	Backpack = 1,
	other = 2,
	EAIEquipSpawnItemType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAIActionType
enum class EAIActionType : uint8 {
	AIActionType_Normal = 0,
	AIActionType_SpecialAction = 1,
	AIActionType_FinalCircle = 2,
	AIActionType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFakePlayerBornType
enum class EFakePlayerBornType : uint8 {
	FromLobby = 0,
	FromSpawner = 1,
	EFakePlayerBornType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeatherStatusType
enum class EWeatherStatusType : uint8 {
	EWeatherStatusType_None = 0,
	EWeatherStatusType_SunnyDay = 1,
	EWeatherStatusType_Night = 2,
	EWeatherStatusType_Fog = 3,
	EWeatherStatusType_Rain = 4,
	EWeatherStatusType_Snow = 5,
	EWeatherStatusType_Blizzard = 6,
	EWeatherStatusType_PVEDaytime = 7,
	EWeatherStatusType_PVEEvening = 8,
	EWeatherStatusType_PVENight = 9,
	EWeatherStatusType_MidAutumnDaytime = 10,
	EWeatherStatusType_MidAutumnEve = 11,
	EWeatherStatusType_MidAutumnNight = 12,
	EWeatherStatusType_Aurora = 13,
	EWeatherStatusType_SpringFestivalNight = 14,
	EWeatherStatusType_DesertSunny = 15,
	EWeatherStatusType_DustStorm = 16,
	EWeatherStatusType_MAX = 17
};

// Object Name: Enum ShadowTrackerExtra.EIDReplaceType
enum class EIDReplaceType : uint8 {
	AIDrop = 0,
	DropItem = 1,
	DropConfig = 2,
	DropConfigAppendRule = 3,
	EIDReplaceType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAutoAimLockState
enum class EAutoAimLockState : uint8 {
	NotLock = 0,
	LockNoTarget = 1,
	Locking = 2,
	Locked = 3,
	EAutoAimLockState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeatherChangeEvent
enum class EWeatherChangeEvent : uint8 {
	EWeatherChangeEvent_StartEnter = 0,
	EWeatherChangeEvent_Staturated = 1,
	EWeatherChangeEvent_StartQuit = 2,
	EWeatherChangeEvent_Quit = 3,
	EWeatherChangeEvent_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAirAttackInfo
enum class EAirAttackInfo : uint8 {
	AttackWarningTips = 0,
	AttackStarted = 1,
	Attacking = 2,
	AttackOver = 3,
	NoAirAttack = 4,
	EAirAttackInfo_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.InCircleState
enum class InCircleState : uint8 {
	Both = 0,
	InCircle = 1,
	OutCircle = 2,
	InCircleState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeatherDayState
enum class EWeatherDayState : uint8 {
	Day = 1,
	Dusk = 2,
	Night = 3,
	EWeatherDayState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAddMarkFlag
enum class EAddMarkFlag : uint8 {
	EAMF_None = 0,
	EAMF_MiniMapOnly = 1,
	EAMF_EntireMapOnly = 2,
	EAMF_Both = 3,
	EAMF_Screen = 4,
	EAMF_ScreenRot = 8,
	EAMF_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EMarkStatus
enum class EMarkStatus : uint8 {
	EMAS_HIDE = 0,
	EMAS_SHOW = 1,
	EMAS_CUSTOMEVENT = 2,
	EMAS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMarkGetAllType
enum class EMarkGetAllType : uint8 {
	EMAGET_ALL = 0,
	EMAGET_REP = 1,
	EMAGET_LOCAL = 2,
	EMAGET_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EGameStatePreLoadClassType
enum class EGameStatePreLoadClassType : uint8 {
	EGSPCT_None = 0,
	EGSPCT_GrenadeLaunch = 1,
	EGSPCT_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeatherChangeStatus
enum class EWeatherChangeStatus : uint8 {
	EWeatherChangeStatus_StartEnter = 0,
	EWeatherChangeStatus_Duration = 1,
	EWeatherChangeStatus_StartQuit = 2,
	EWeatherChangeStatus_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EGameModeSubType
enum class EGameModeSubType : uint8 {
	ENoneGameMode = 0,
	EjungleGameMode = 1,
	EZombieStandard = 2,
	EZombieSurvive = 3,
	EEgyptGameMode = 4,
	EFiremanGameMode = 5,
	EAceMode = 6,
	ETPlan = 7,
	EEsportsGameMode = 8,
	EIceWorldGameMode = 9,
	EMetroGameMode = 10,
	ERuneGameMode = 11,
	EValentineGameMode = 12,
	EMusicFestivalGameMode = 13,
	EGodzilla = 14,
	EKingKong = 15,
	EMGodzilla = 16,
	ETraverse = 17,
	EPlanDGameMode = 18,
	EPlanETGameMode = 19,
	ESinkGameMode = 20,
	EPlanAGameMode = 21,
	EPlanSGameMode = 22,
	EPlanZNQ4thGameMode = 23,
	ELivik = 24,
	EBorderland = 25,
	EGameModeSubType_MAX = 26
};

// Object Name: Enum ShadowTrackerExtra.WeatherUICountDownType
enum class WeatherUICountDownType : uint8 {
	UINone = 0,
	UISuperCold = 1,
	UILiveMode = 2,
	UIMidAutu = 3,
	WeatherUICountDownType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EPlayerEnegyStage
enum class EPlayerEnegyStage : uint8 {
	PES_None = 0,
	PES_Stage1 = 1,
	PES_Stage2 = 2,
	PES_Stage3 = 3,
	PES_Stage4 = 4,
	PES_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ETeamMateDisappearType
enum class ETeamMateDisappearType : uint8 {
	ETMDT_None = 0,
	ETMDT_NoPawn = 1,
	ETMDT_LocError = 2,
	ETMDT_PawnHide = 3,
	ETMDT_MeshInvisible = 4,
	ETMDT_MeshHide = 5,
	ETMDT_MeshAbsLoc = 6,
	ETMDT_PawnScale = 7,
	ETMDT_MeshScale = 8,
	ETMDT_BoneScale = 9,
	ETMDT_PawnLoc = 10,
	ETMDT_MeshLoc = 11,
	ETMDT_PawnLocZ = 12,
	ETMDT_MeshLocZ = 13,
	ETMDT_MAX = 14
};

// Object Name: Enum ShadowTrackerExtra.EDriveCar
enum class EDriveCar : uint8 {
	None = 0,
	Buggy = 1,
	EDriveCar_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8 {
	InDefault = 0,
	InPlane = 1,
	InParachute = 2,
	InVehicle = 3,
	InDying = 4,
	InDied = 5,
	Offline = 6,
	ExtraPlayerLiveState_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.ESpectatorPetState
enum class ESpectatorPetState : uint8 {
	SpectatorPetIdle = 0,
	SpectatorPetWalk = 1,
	SpectatorPetSwimming = 2,
	SpectatorPetFalling = 3,
	SpectatorPetJump = 4,
	SpectatorPetPlayEmoteMotage = 5,
	ESpectatorPetState_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EExitParachuteType
enum class EExitParachuteType : uint8 {
	None = 0,
	JumpToLandInWater = 1,
	EExitParachuteType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPickUpBoxType
enum class EPickUpBoxType : uint8 {
	EPickUpBoxType_TombBox = 0,
	EPickUpBoxType_AirDropBox = 1,
	EPickUpBoxType_TreasureBox = 2,
	EPickUpBoxType_MonsterTombBox = 3,
	EPickUpBoxType_VehicleBox = 4,
	EPickUpBoxType_DeadRemainBox = 5,
	EPickUpBoxType_ResourceBox = 6,
	EPickUpBoxType_LootBox = 7,
	EPickUpBoxType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EStateType
enum class EStateType : uint8 {
	State_None = 0,
	State_Initial = 1,
	State_Fight = 2,
	State_InPlane = 3,
	State_InExPlane = 4,
	State_Launch = 5,
	State_ParachuteJump = 6,
	State_ParachuteOpen = 7,
	State_Dead = 8,
	State_Finish = 9,
	State_PlaneJumpShow = 10,
	State_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.EMsgType
enum class EMsgType : uint8 {
	EMsg_GMEnterActive = 0,
	EMsg_GMExitActive = 1,
	EMsg_GMEnterReady = 2,
	EMsg_GMExitReady = 3,
	EMsg_GMEnterFight = 4,
	EMsg_GMExitFight = 5,
	EMsg_GMEnterFinish = 6,
	EMsg_GMExit = 7,
	EMsg_PCGotoFight = 8,
	EMsg_PCGotoPlane = 9,
	EMsg_PCGotoParachuteJump = 10,
	EMsg_PCGotoParachuteOpen = 11,
	EMsg_PCDie = 12,
	EMsg_PCRespawn = 13,
	EMsg_PCGotoExPlane = 14,
	EMsg_PCGotoLaunch = 15,
	EMsg_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.EAIType
enum class EAIType : uint8 {
	None = 0,
	DeliverByBT = 1,
	NormalByBT = 2,
	DeliverByML = 3,
	NormalByML = 4,
	EAIType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESurvivePickUpGlobalCategory
enum class ESurvivePickUpGlobalCategory : uint8 {
	SurvivePickUpItemGlobalCategory_None = 0,
	SurvivePickUpItemGlobalCategory_Weapon = 1,
	SurvivePickUpItemGlobalCategory_PlayerEquipment = 2,
	SurvivePickUpItemGlobalCategory_WeaponComponent = 3,
	SurvivePickUpItemGlobalCategory_ConsumeItem = 4,
	SurvivePickUpItemGlobalCategory_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EChangeCharacterState
enum class EChangeCharacterState : uint8 {
	ECCS_None = 0,
	ECCS_RecvChange = 1,
	ECCS_RecvPosses = 2,
	ECCS_RecvUnposses = 3,
	ECCS_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ETopMostUIPanelType
enum class ETopMostUIPanelType : uint8 {
	ETopUIPanelType_MainInputPanel = 0,
	ETopUIPanelType_BackpackPanel = 1,
	ETopUIPanelType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWarScoreChangeReason
enum class EWarScoreChangeReason : uint8 {
	WarScoreChangeReason_NONE = 0,
	WarScoreChangeReason_WHOLETEAMKILLED = 1,
	WarScoreChangeReason_SAVETEAMMATE = 2,
	WarScoreChangeReason_KNOCKDOWNENEMY = 3,
	WarScoreChangeReason_KILLENEMY = 4,
	WarScoreChangeReason_PICKUPSCOREITEM = 5,
	WarScoreChangeReason_GRABSCORE = 6,
	WarScoreChangeReason_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EReportLogType
enum class EReportLogType : uint8 {
	AntiDataClientEmpty = 0,
	AntiDataClientFilter = 1,
	AntiDataClientCRC = 2,
	AntiDataSDkNull = 3,
	AntiDataSDKZero = 4,
	AntiDataSDKLong = 5,
	AntiDataSDkEmpty = 6,
	AntiDataDSEmpty = 7,
	AntiDataClientOK = 8,
	AntiDataPlatformInvaild = 9,
	AntiDataLuaNil = 10,
	AntiDataLuaZero = 11,
	AntiDataMax = 12,
	EReportLogType_MAX = 13
};

// Object Name: Enum ShadowTrackerExtra.EUAESkillEvent
enum class EUAESkillEvent : uint8 {
	UAESkillEvent_None = 0,
	GrenadeModeChange = 1,
	ThrowGrenade = 2,
	PlayerRequestCancel = 3,
	GrenadeTimeOut = 4,
	SwitchWeapon = 5,
	SwitchWeaponInterrupt = 6,
	SwitchWeaponFinish = 7,
	UnequipWeapon = 8,
	UnequipWeaponFinish = 9,
	SkillInterrupt = 10,
	SkillPlayerDieInterrupt = 11,
	PickItem = 12,
	StartFire = 13,
	LevelSequenceFinish = 14,
	Hurt = 15,
	EUAESkillEvent_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.ESTEPoseStateFailReason
enum class ESTEPoseStateFailReason : uint8 {
	None = 0,
	SamePose = 1,
	InCD = 2,
	ESTEPoseStateFailReason_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPressType
enum class EPressType : uint8 {
	PressNone = 0,
	PressFireBtn = 1,
	PressMax = 2,
	EPressType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPhysicalSurfaceDescription
enum class EPhysicalSurfaceDescription : uint8 {
	Default = 0,
	Concrete = 1,
	Dirt = 2,
	Water = 3,
	Metal = 4,
	Wood = 5,
	Grass = 6,
	Glass = 7,
	Flesh = 8,
	Steel = 9,
	Sandbag = 10,
	Sand = 11,
	Cloth = 12,
	Plastic = 13,
	Leather = 14,
	Ceramics = 15,
	Paper = 16,
	Stone = 17,
	Snow = 18,
	PopCan = 19,
	Pyrefly = 20,
	Leaf = 21,
	Car = 22,
	Asphalt = 23,
	ConcreteTDM = 24,
	Ice = 25,
	Food = 28,
	EPhysicalSurfaceDescription_MAX = 29
};

// Object Name: Enum ShadowTrackerExtra.ERenderQuality
enum class ERenderQuality : uint8 {
	Default = 0,
	VERYSMOOTH = 1,
	SMOOTH = 2,
	BALANCE = 3,
	HIGHDEFINITION = 4,
	HIGHDEFINITIONPLUS = 5,
	ULTRAHIGHDEFINITION = 6,
	ERenderQuality_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.ETouchFireType
enum class ETouchFireType : uint8 {
	NotFire = 0,
	ButtonFire = 1,
	TouchForceFire = 2,
	DoubleClickFire = 3,
	ETouchFireType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EnmSprintOptType
enum class EnmSprintOptType : uint8 {
	NoneOpt = 0,
	TimeToSprint = 1,
	DistToSprint = 2,
	EnmSprintOptType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EKillOrPutDownMessageType
enum class EKillOrPutDownMessageType : uint8 {
	EKillOrPutDownMessageType_YouPutDownPlayer = 0,
	EKillOrPutDownMessageType_YouKilledPlayer = 1,
	EKillOrPutDownMessageType_YouHaveBeenPutDown = 2,
	EKillOrPutDownMessageType_YouHaveBeenKilled = 3,
	EKillOrPutDownMessageType_YourTeammatePutDownPlayer = 4,
	EKillOrPutDownMessageType_YourTeammateKilledPlayer = 5,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDown = 6,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilled = 7,
	EKillOrPutDownMessageType_YouHaveBeenKilledByPoison = 8,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByPoison = 9,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByPoison = 10,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByPoison = 11,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByFallingDown = 12,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByFallingDown = 13,
	EKillOrPutDownMessageType_YouHaveBeenKilledByFallingDown = 14,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByFallingDown = 15,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByDrowing = 16,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByDrowing = 17,
	EKillOrPutDownMessageType_YouHaveBeenKilledByDrowing = 18,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByDrowing = 19,
	EKillOrPutDownMessageType_YouHaveBeenKilledFinally = 20,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledFinally = 21,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByAirAttack = 22,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByAirAttack = 23,
	EKillOrPutDownMessageType_YouHaveBeenKilledByAirAttack = 24,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByAirAttack = 25,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByPoisonWater = 26,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByPoisonWater = 27,
	EKillOrPutDownMessageType_YouHaveBeenKilledByPoisonWater = 28,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByPoisonWater = 29,
	EKillOrPutDownMessageType_YouHaveBeenKilledByLowTemperature = 30,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByLowTemperature = 31,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByLowTemperature = 32,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByLowTemperature = 33,
	EKillOrPutDownMessageType_MAX = 34
};

// Object Name: Enum ShadowTrackerExtra.EAutoAimType
enum class EAutoAimType : uint8 {
	FullTime = 0,
	OnlyFire = 1,
	OnlyTouch = 2,
	OnlyNotTouch = 3,
	TouchOrFire = 4,
	ScopeOrFire = 5,
	EAutoAimType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ECoopVaultRole
enum class ECoopVaultRole : uint8 {
	Unknown = 0,
	Lifter = 1,
	Jumper = 2,
	Puller = 3,
	Climber = 4,
	ECoopVaultRole_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EMonsterPoseType
enum class EMonsterPoseType : uint8 {
	EMonsterPose_Birth01 = 0,
	EMonsterPose_Birth02 = 1,
	EMonsterPose_Idle = 2,
	EMonsterPose_Combat_Idle = 3,
	EMonsterPose_Run = 4,
	EMonsterPose_Combat_Run = 5,
	EMonsterPose_Attack_01 = 6,
	EMonsterPose_Attack_02 = 7,
	EMonsterPose_Attack_03 = 8,
	EMonsterPose_Hit = 9,
	EMonsterPose_Hit_Hard = 10,
	EMonsterPose_Stiff = 11,
	EMonsterPose_Jump_Start = 12,
	EMonsterPose_Fall = 13,
	EMonsterPose_Fall_Stand = 14,
	EMonsterPose_Fall_Stand_BS = 15,
	EMonsterPose_Fall_Hard_Stand = 16,
	EMonsterPose_Fall_Hard_Stand_BS = 17,
	EMonsterPose_Death_Front = 18,
	EMonsterPose_Death_HeadShot = 19,
	EMonsterPose_Death_VehicleHit = 20,
	EMonsterPose_Death_Explosion = 21,
	EMonsterPose_Death_Stand = 22,
	EMonsterPose_Climb = 23,
	EMonsterPose_Climb_Window = 24,
	EMonsterPose_Climbing = 25,
	EMonsterPose_Stun = 26,
	EMonsterPose_Stride = 27,
	EMonsterPose_Active = 28,
	EMonsterPose_Turn = 29,
	EMonsterPose_Turn_BS = 30,
	EMonsterPose_StopLeftLeg = 31,
	EMonsterPose_StopRightLeg = 32,
	EMonsterPose_StopLeftLeg_Front = 33,
	EMonsterPose_StopRightLeg_Front = 34,
	EMonsterPose_RunStopLeftLeg = 35,
	EMonsterPose_RunStopRightLeg = 36,
	EMonsterPose_RunStopLeftLeg_Front = 37,
	EMonsterPose_RunStopRightLeg_Front = 38,
	EMonsterPose_Max = 39
};

// Object Name: Enum ShadowTrackerExtra.ECabrioletState
enum class ECabrioletState : uint8 {
	BeenClose = 0,
	Close = 1,
	Open = 2,
	BeenOpen = 3,
	Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EForceHideState
enum class EForceHideState : uint8 {
	None = 0,
	Self = 1,
	TeamExSelf = 2,
	Team = 3,
	All = 7,
	EForceHideState_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EAvatarCustomType
enum class EAvatarCustomType : uint8 {
	AvatarCustomNone = 0,
	AvatarCustomCharacter = 1,
	AvatarCustomWeapon = 2,
	AvatarCustomVehicle = 3,
	AvatarCustomPet = 4,
	EAvatarCustomType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESlotDescDiff
enum class ESlotDescDiff : uint8 {
	NONE = 0,
	VisibleDiff = 1,
	MeshDiff = 2,
	MatDiff = 3,
	ESlotDescDiff_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EForceHideStateReason
enum class EForceHideStateReason : uint8 {
	Server_Default = 0,
	Server_InVehicle = 1,
	Server_InTank = 2,
	Server_Prepared1 = 51,
	Server_Prepared2 = 52,
	Client_Default = 128,
	Client_InEmoteUnEquipSlot = 129,
	Client_InLocalSetting = 130,
	Client_CharacterEffect = 131,
	Client_WeaponShow = 132,
	Client_NeonGuardHide = 133,
	Client_FPPHideHead = 134,
	Client_Prepared1 = 201,
	Client_Prepared2 = 202,
	EForceHideStateReason_MAX = 203
};

// Object Name: Enum ShadowTrackerExtra.ERetargetAvatarAdaptSpace
enum class ERetargetAvatarAdaptSpace : uint8 {
	RAAS_None = 0,
	RAAS_MasterComponent_RootBoneSpace = 1,
	RAAS_MasterComponent_ParentSpace = 2,
	RAAS_RetargetComponent_RootBoneSpace = 4,
	RAAS_RetargetComponent_ParentSpace = 8,
	RAAS_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.ECharacterAvatarShapeType
enum class ECharacterAvatarShapeType : uint8 {
	ECharacterAvatarShapeType_None = 0,
	ECharacterAvatarShapeType_SuitChangeHead = 1,
	ECharacterAvatarShapeType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAvatarSlotNameConfig
enum class EAvatarSlotNameConfig : uint8 {
	EAvatarSlotNameConfig_None = 0,
	EAvatarSlotNameConfig_Swim_Suit = 1,
	EAvatarSlotNameConfig_Swim_Pants = 2,
	EAvatarSlotNameConfig_Female_Default_Bra = 3,
	EAvatarSlotNameConfig_Briefs = 4,
	EAvatarSlotNameConfig_Black_Pants = 5,
	EAvatarSlotNameConfig_Female_White_Bra = 6,
	EAvatarSlotNameConfig_Female_Black_Bra = 7,
	EAvatarSlotNameConfig_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.ECutPlaneType
enum class ECutPlaneType : uint8 {
	ECutPlaneType_Bottom = 0,
	ECutPlaneType_Top = 1,
	ECutPlaneType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EEffectValidDevice
enum class EEffectValidDevice : uint8 {
	LowDevice = 1,
	MidDevice = 2,
	HighDevice = 4,
	LowAndMidDevice = 3,
	LowAndHighDevice = 5,
	MidAndHighDevice = 6,
	All = 15,
	EEffectValidDevice_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.EEffectValidTarget
enum class EEffectValidTarget : uint8 {
	Self = 1,
	Teammate = 2,
	Enemy = 4,
	SelfAndTeammate = 3,
	SelfAndEnemy = 5,
	EnemyAndTeammate = 6,
	All = 7,
	EEffectValidTarget_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EEffectCreateType
enum class EEffectCreateType : uint8 {
	All = 0,
	RandomOne = 1,
	RandomGroup = 2,
	RandomSocket = 3,
	EEffectCreateType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EClothCutStateType
enum class EClothCutStateType : uint8 {
	EClothCutStateType_NotCut = 0,
	EClothCutStateType_Bottom = 1,
	EClothCutStateType_Top = 2,
	EClothCutStateType_TopAndBottom = 3,
	EClothCutStateType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAvatarSubSlot
enum class EAvatarSubSlot : uint8 {
	ESubSlot_None = 0,
	ESubSlot_PonyTailHairSlot = 60,
	ESubSlot_AnimHair = 61,
	ESubSlot_HatPre1 = 65,
	ESubSlot_HatPre2 = 66,
	ESubSlot_AnimHat = 67,
	ESubSlot_VeilSlot = 70,
	ESubSlot_GhostFace = 71,
	ESubSlot_FacePre1 = 72,
	ESubSlot_FacePre2 = 73,
	ESubSlot_AnimBeard = 74,
	ESubSlot_HoodSlot = 75,
	ESubSlot_ClothPre1 = 76,
	ESubSlot_ClothPre2 = 77,
	ESubSlot_StockingSlot = 85,
	ESubSlot_BootsSlot = 86,
	ESubSlot_MAX = 87
};

// Object Name: Enum ShadowTrackerExtra.EDisplayQuality
enum class EDisplayQuality : uint8 {
	Low = 0,
	Middle = 1,
	High = 2,
	Invalid = 3,
	EDisplayQuality_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAvatarActionType
enum class EAvatarActionType : uint8 {
	NONE = 0,
	ApplyMesh = 1,
	ApplyMaterial = 2,
	ApplyMatConfig = 3,
	ApplyParticle = 4,
	ApplyDIYPattern = 5,
	ApplyItemHandle = 6,
	ApplyWeaponHandle = 7,
	ApplyDIYMatParam = 8,
	ApplyDIYMirroParam = 9,
	ApplyMatParamModify = 10,
	SampleCurveToMPC = 11,
	CycleSwitchMesh = 12,
	EAvatarActionType_MAX = 13
};

// Object Name: Enum ShadowTrackerExtra.EMeshAssetType
enum class EMeshAssetType : uint8 {
	None = 0,
	Attach_StaticMesh = 1,
	Attach_SkeletalMesh = 2,
	SetMaster_SkeletalMesh = 3,
	ReplaceMaster_StaitciMesh = 4,
	ReplaceMaster_SkeletalMesh = 5,
	EMeshAssetType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EVehiclePartSlot
enum class EVehiclePartSlot : uint8 {
	None = 0,
	BrakeCaliper = 1,
	WheelHub = 2,
	Canopy = 3,
	Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EVehicleStyleType
enum class EVehicleStyleType : uint8 {
	EVehicleStyleType_NONE = 0,
	EVehicleStyleType_Model = 1,
	EVehicleStyleType_Color = 2,
	EVehicleStyleType_Pattern = 3,
	EVehicleStyleType_Particle = 4,
	EVehicleStyleType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EVehicleSlotType
enum class EVehicleSlotType : uint8 {
	EVehicleSlotType_NONE = 0,
	EVehicleSlotType_Body = 1,
	EVehicleSlotType_Bonnet = 2,
	EVehicleSlotType_Wheel = 3,
	EVehicleSlotType_FrontBumper = 4,
	EVehicleSlotType_TailBumper = 5,
	EVehicleSlotType_Empennage = 6,
	EVehicleSlotType_Skirt = 7,
	EVehicleSlotType_Interior = 8,
	EVehicleSlotType_Roof = 9,
	EVehicleSlotType_Exhaust = 10,
	EVehicleSlotType_Attach1 = 11,
	EVehicleSlotType_Attach2 = 12,
	EVehicleSlotType_Attach3 = 13,
	EVehicleSlotType_Attach4 = 14,
	EVehicleSlotType_MaxSlotNum = 15,
	EVehicleSlotType_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleUserState
enum class ESTExtraVehicleUserState : uint8 {
	EVUS_OutOfVehicle = 0,
	EVUS_AsDriver = 1,
	EVUS_ASPassenger = 2,
	EVUS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EEnterVehicleFailedReason
enum class EEnterVehicleFailedReason : uint8 {
	None = 0,
	Undefined = 1,
	WorldInvalid = 2,
	AntiCheat = 3,
	ControllerInvalid = 4,
	GameModeDenied = 5,
	GameModeStateDenied = 6,
	EnterVehicleFailDuration = 7,
	CharacterInvalid = 64,
	StillInVehicle = 65,
	CharacterAttachedToOther = 66,
	CreatingWeapon = 67,
	CharacterDead = 68,
	BlockedByCollision = 69,
	CharacterStateRejected = 70,
	UsingUAV = 71,
	CharacterCustomConditionFailed = 96,
	VehicleInvalid = 128,
	NoSeatFeature = 129,
	VehicleDestroyed = 130,
	VehicleAttachedToOther = 131,
	OutOfRange = 132,
	DifferentTeam = 133,
	NoAvailableSeat = 134,
	CannotResetRotation = 135,
	NotHaveEnoughSpace = 136,
	PermissionDenied = 137,
	VehicleMovementComponentInvalid = 138,
	Forbidden = 139,
	VehicleCustomConditionFailed = 160,
	EEnterVehicleFailedReason_MAX = 161
};

// Object Name: Enum ShadowTrackerExtra.EVehicleProtectionType
enum class EVehicleProtectionType : uint8 {
	None = 0,
	Flying = 1,
	Stuck = 2,
	Underground = 3,
	Penetration = 4,
	LeaveVehicle = 5,
	NonDriven = 6,
	Spin = 7,
	Max = 8
};

// Object Name: Enum ShadowTrackerExtra.ETransformState
enum class ETransformState : uint8 {
	UnInitial = 0,
	Initial = 1,
	PreTransform = 2,
	Transforming = 3,
	Transformed = 4,
	Failed = 5,
	ETransformState_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EFormType
enum class EFormType : uint8 {
	None = 0,
	Major = 1,
	Secondary = 2,
	Max = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehicleControlPanelHiddenFlag
enum class EVehicleControlPanelHiddenFlag : uint8 {
	Transform = 0,
	EVehicleControlPanelHiddenFlag_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraUAVVehicleState
enum class ESTExtraUAVVehicleState : uint8 {
	UAVS_Init = 0,
	UAVS_Using = 1,
	UAVS_StandBy = 2,
	UAVS_PowerOff = 3,
	UAVS_Recalling = 4,
	UAVS_Disappearing = 5,
	UAVS_Destroy = 6,
	UAVS_SelfDestruct = 7,
	UAVS_InWater = 8,
	UAVS_Max = 9
};

// Object Name: Enum ShadowTrackerExtra.ENewbieGuidePlayerCategory
enum class ENewbieGuidePlayerCategory : uint8 {
	Low = 0,
	Middle = 1,
	High = 2,
	ENewbieGuidePlayerCategory_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ENewbieGuideType
enum class ENewbieGuideType : uint8 {
	Op = 0,
	Rule = 1,
	ENewbieGuideType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EDivingMoveType
enum class EDivingMoveType : uint8 {
	NotMove = 0,
	SlowMove = 1,
	BoostMove = 2,
	EDivingMoveType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECharacterFollowType
enum class ECharacterFollowType : uint8 {
	CFS_None = 0,
	CFS_LEADER = 1,
	CFS_FOLLOWER = 2,
	CFS_Max = 3
};

// Object Name: Enum ShadowTrackerExtra.EExecutionCondition
enum class EExecutionCondition : uint8 {
	None = 0,
	Client = 1,
	Server = 2,
	EExecutionCondition_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECharacterSearchEnum
enum class ECharacterSearchEnum : uint8 {
	None = 0,
	CanRescueTeammate = 1,
	CanCarryPawn = 2,
	CanSelfRescue = 3,
	CanCarryPlayerTombBox = 4,
	CanRescueTeammate_Server = 5,
	CanExecute = 6,
	PreEnum1 = 7,
	PreEnum2 = 8,
	PreEnum3 = 9,
	ECharacterSearchEnum_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.ESearchOtherCompMode
enum class ESearchOtherCompMode : uint8 {
	LegacyOnly = 0,
	BothLegacyAndDynamic = 1,
	DynamicOnly = 2,
	ESearchOtherCompMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAirDropType
enum class EAirDropType : uint8 {
	AirDrop_None = 0,
	AirDrop_NormalAirDrop = 1,
	AirDrop_SuperAirDrop = 2,
	AirDrop_VehicleAirDrop = 3,
	AirDrop_ZombieAirDrop = 4,
	AirDrop_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EMaxFlyHeightType
enum class EMaxFlyHeightType : uint8 {
	RelativeToInitialHeight = 0,
	WorldAbsoluteHeight = 1,
	EMaxFlyHeightType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EDecoratorRelevantType
enum class EDecoratorRelevantType : uint8 {
	DecoratorRelevant_OnlySelf = 0,
	DecoratorRelevant_Team = 1,
	DecoratorRelevant_Default = 2,
	DecoratorRelevant_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EEmergencyCallStateType
enum class EEmergencyCallStateType : uint8 {
	ECState_None = 0,
	ECState_Building = 1,
	ECState_FirstStage = 2,
	ECState_SecondStage = 3,
	ECState_Idle = 4,
	ECState_Flying = 5,
	ECState_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EHardPointOccupyState
enum class EHardPointOccupyState : uint8 {
	Neutral = 0,
	Occupied = 1,
	Contending = 2,
	EHardPointOccupyState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDamageableMeshState
enum class EDamageableMeshState : uint8 {
	EDMS_Normal = 0,
	EDMS_HealthEvent = 1,
	EDMS_NearDeath = 2,
	EDMS_PendingDie = 3,
	EDMS_Die = 4,
	EDMS_DieByInitiative = 5,
	EDMS_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ERandomRocketExplosionType
enum class ERandomRocketExplosionType : uint8 {
	ERRET_COLLIDE = 0,
	ERRET_BOMBARMENT = 1,
	ERRET_DESTRUCTED = 2,
	ERRET_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWaterType
enum class EWaterType : uint8 {
	None = 0,
	SpecialWater = 2,
	SpecialNoWater = 3,
	SpecialInnerWater = 4,
	WaterTypeMax = 5,
	EWaterType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EDivingStatusType
enum class EDivingStatusType : uint8 {
	None = 0,
	SwimmingOnSurface = 1,
	InTransitionWaterInOut = 2,
	Diving = 3,
	EDivingStatusType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EEnterAreaFlyStateType
enum class EEnterAreaFlyStateType : uint8 {
	EAFState_None = 0,
	EAFState_TakeOff = 1,
	EAFState_Rush = 2,
	EAFState_Rush2 = 3,
	EAFState_Launch = 4,
	EAFState_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EGamePawnEvent
enum class EGamePawnEvent : uint8 {
	None = 0,
	Birth = 1,
	ViewPlane = 2,
	Plane = 3,
	Jump = 4,
	Parachute = 5,
	Land = 6,
	Die = 7,
	ReBirth = 8,
	HeightCheck_High = 9,
	HeightCheck_Mid = 10,
	HeightCheck_Low = 11,
	Fighting = 12,
	EGamePawnEvent_MAX = 13
};

// Object Name: Enum ShadowTrackerExtra.EObbyMoveState
enum class EObbyMoveState : uint8 {
	Stop = 0,
	Running = 1,
	Paused = 2,
	MoveState_MAX = 3,
	EObbyMoveState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EObbyLoopType
enum class EObbyLoopType : uint8 {
	Once = 0,
	LoopReset = 1,
	LoopPingtong = 2,
	LoopType_MAX = 3,
	EObbyLoopType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EObbyMoveType
enum class EObbyMoveType : uint8 {
	LinerStraight = 0,
	LinerRotate = 1,
	LiftingSpeedRotate = 2,
	Swerve = 3,
	AlongSpline = 4,
	TouchDrag = 5,
	VariableSpeedLiner = 6,
	LinearScale = 7,
	MoveType_MAX = 8,
	EObbyMoveType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EObbyMoveCoordinateSpace
enum class EObbyMoveCoordinateSpace : uint8 {
	Local = 0,
	World = 1,
	MoveCoordinateSpace_MAX = 2,
	EObbyMoveCoordinateSpace_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EZiplineMovementMode
enum class EZiplineMovementMode : uint8 {
	Duration = 0,
	SpeedCurve = 1,
	EZiplineMovementMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ObjectMovingType
enum class ObjectMovingType : uint8 {
	OMT_Uniform = 0,
	OMT_Acceleration = 1,
	OMT_Deceleration = 2,
	OMT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAllowThrowMode
enum class EAllowThrowMode : uint8 {
	Any = 0,
	High = 1,
	Low = 2,
	EAllowThrowMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EThrowState
enum class EThrowState : uint8 {
	Idle = 0,
	Prepare = 1,
	Aim = 2,
	Release = 3,
	Drop = 4,
	EThrowState_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ERenderDynamicStyle
enum class ERenderDynamicStyle : uint8 {
	Default = 0,
	GuidedMissile = 1,
	SceneToGrayOnDeath = 2,
	ThermalImagingStyle = 3,
	DeadGhost = 4,
	ERenderDynamicStyle_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ERenderStyle
enum class ERenderStyle : uint8 {
	Default = 0,
	CLASSIC = 1,
	COLOURFUL = 2,
	REALISTIC = 3,
	SOFT = 4,
	NightVision = 5,
	MOVIE = 6,
	DynamicStyle = 7,
	ERenderStyle_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.ESoundEffect
enum class ESoundEffect : uint8 {
	LOW = 0,
	HIGH = 1,
	SUPERHIGH = 2,
	ESoundEffect_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EIslandStateType
enum class EIslandStateType : uint8 {
	IST_Init = 0,
	IST_Opening = 1,
	IST_Close = 2,
	IST_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESIslandActiveType
enum class ESIslandActiveType : uint8 {
	SAT_Active = 0,
	SAT_PandingKickOut = 1,
	SAT_kickedOut = 2,
	SAT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFieldOfViewNotificationStatus
enum class EFieldOfViewNotificationStatus : uint8 {
	None = 0,
	Rendered = 1,
	Traced = 2,
	EnumMax = 3,
	EFieldOfViewNotificationStatus_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchPersonalNotifyReason
enum class EDeathMatchPersonalNotifyReason : uint8 {
	Kill = 0,
	HeadShoot = 1,
	EDeathMatchPersonalNotifyReason_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchDamageResult
enum class EDeathMatchDamageResult : uint8 {
	None = 0,
	Assist = 1,
	Kill = 2,
	EDeathMatchDamageResult_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchGlobalNotifyReason
enum class EDeathMatchGlobalNotifyReason : uint8 {
	FirstKill = 0,
	SuperGod = 1,
	LastStraw = 2,
	Slaughter = 3,
	GameComingEnd_KillNum = 4,
	GameComingEnd_RemainTime = 5,
	HardPointHalfTime = 6,
	HardPointComingEnd_Score = 7,
	HardPointComingEnd_RemainTime = 8,
	ArmsRace_Pan = 9,
	EDeathMatchGlobalNotifyReason_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchGameEndType
enum class EDeathMatchGameEndType : uint8 {
	None = 0,
	ScoreWin = 1,
	Timeout = 2,
	EnemyEscape = 3,
	EDeathMatchGameEndType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchGlobalAudioType
enum class EDeathMatchGlobalAudioType : uint8 {
	FirstKill = 0,
	SuperGod = 1,
	SuperGodEnd = 2,
	Rampage = 3,
	GameComingHalfScore = 4,
	GameComingEnd_KillNum = 5,
	GameComingHalfTime = 6,
	GameComingEnd_RemainTime = 7,
	HardPointHalfTime = 8,
	HardPointComingEnd_Score = 9,
	HardPointComingEnd_RemainTime = 10,
	EDeathMatchGlobalAudioType_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.EClientRecordingType
enum class EClientRecordingType : uint8 {
	EClientRecordingType_None = 0,
	EClientRecordingType_Recording = 1,
	EClientRecordingType_Pause = 2,
	EClientRecordingType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EGridAnimType
enum class EGridAnimType : uint8 {
	EAnimByItem = 0,
	EAnimByLine = 1,
	EGridAnimType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleAIAvoidanceMode
enum class EVehicleAIAvoidanceMode : uint8 {
	Off = 0,
	SingleTrace = 1,
	MultiTrace = 2,
	EVehicleAIAvoidanceMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAirspace
enum class EAirspace : uint8 {
	None = 0,
	Low = 1,
	High = 2,
	EAirspace_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAircraftMovementStage
enum class EAircraftMovementStage : uint8 {
	None = 0,
	Rolling = 1,
	TakeOff = 2,
	Flying = 3,
	Gliding = 4,
	LoseControl = 5,
	EAircraftMovementStage_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EWheeledVehicleMovementType
enum class EWheeledVehicleMovementType : uint8 {
	Normal = 0,
	Pivot = 1,
	Drift = 2,
	ShootDrive = 3,
	EWheeledVehicleMovementType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAirdropDampingState
enum class EAirdropDampingState : uint8 {
	NotDamping = 0,
	Damping = 1,
	DampComplete = 2,
	EAirdropDampingState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETrailerLinkState
enum class ETrailerLinkState : uint8 {
	None = 0,
	Ready = 1,
	Linked = 2,
	ETrailerLinkState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETrailerFailedTips
enum class ETrailerFailedTips : uint8 {
	None = 0,
	TurnOver = 1,
	OutOfRange = 2,
	WrongDirection = 3,
	InvalidSpace = 4,
	ETrailerFailedTips_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EFloatingMovementStateType
enum class EFloatingMovementStateType : uint8 {
	Normal = 0,
	Pivot = 1,
	EFloatingMovementStateType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESnowBoardState
enum class ESnowBoardState : uint8 {
	ESBS_InLand = 0,
	ESBS_FLYING0 = 1,
	ESBS_FLYING1 = 2,
	ESBS_FLYING2 = 3,
	ESBS_FLYING3 = 4,
	ESBS_FALLING = 5,
	ESBS_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EPivotSteeringState
enum class EPivotSteeringState : uint8 {
	None = 0,
	Entering = 1,
	Steering = 2,
	EPivotSteeringState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehWeaponCameraSpace
enum class EVehWeaponCameraSpace : uint8 {
	WorldSpace = 0,
	VehicleSpace = 1,
	EVehWeaponCameraSpace_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleNeutralThrottleStatus
enum class EVehicleNeutralThrottleStatus : uint8 {
	Throttle_None = 0,
	Throttle_Start = 1,
	Throttle_Stop = 2,
	Throttle_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EProjectilePassThroughType
enum class EProjectilePassThroughType : uint8 {
	Ignore = 0,
	PassThrough = 1,
	Block = 2,
	EProjectilePassThroughType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EActorHiddenMask
enum class EActorHiddenMask : uint8 {
	ActorHiddenMask0 = 0,
	ActorHiddenMask1 = 1,
	ActorHiddenMask2 = 2,
	ActorHiddenMask3 = 3,
	ActorHiddenMask4 = 4,
	ActorHiddenMask5 = 5,
	ActorHiddenMask6 = 6,
	ActorHiddenMask7 = 7,
	EActorHiddenMask_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EBornLandAIStrategyType
enum class EBornLandAIStrategyType : uint8 {
	None = 0,
	BornLandStand = 1,
	BornLandRandomRun = 2,
	BornLandCrawl = 3,
	BornLandPeek = 4,
	BornLandPlayEmote = 5,
	BornLandAttack = 6,
	EBornLandAIStrategyType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EEnemyType
enum class EEnemyType : uint8 {
	ERealPlayer = 0,
	EZombie = 1,
	EBuildings = 2,
	ETreasureBox = 3,
	EProjectile = 4,
	EEnemyType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EMobWalkType
enum class EMobWalkType : uint8 {
	Normal = 0,
	IdleWalk = 1,
	AttackWalk = 2,
	SprintRun = 3,
	Sideways = 4,
	MaxSpeed = 5,
	EMobWalkType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EFlyTargetLocHeightSetType
enum class EFlyTargetLocHeightSetType : uint8 {
	FlyHeightSet_RelativeGround = 1,
	FlyHeightSet_RelativeCenter = 2,
	FlyHeightSet_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAI_BlockType
enum class EAI_BlockType : uint8 {
	NoneBlock = 0,
	HaveNoNavMesh = 1,
	HaveNavMesh = 2,
	EAI_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAnimalMovePose
enum class EAnimalMovePose : uint8 {
	Walk = 0,
	Trot = 1,
	Run = 2,
	KeepCurrentPose = 3,
	EAnimalMovePose_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAIMoveType
enum class EAIMoveType : uint8 {
	StraightMove = 0,
	CurveMove = 1,
	EAIMoveType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAIWeaponShootType
enum class EAIWeaponShootType : uint8 {
	SingleShot = 0,
	Auto = 1,
	EAIWeaponShootType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8 {
	Int = 0,
	Float = 1,
	Bool = 2,
	String = 3,
	Name = 4,
	Object = 5,
	Vector3 = 6,
	EModifyBlackboardDataValueType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EAINewFocusPriority
enum class EAINewFocusPriority : uint8 {
	Default = 0,
	Move = 1,
	Gameplay = 2,
	EAINewFocusPriority_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAIMovePose
enum class EAIMovePose : uint8 {
	Walk = 0,
	Run = 1,
	CrouchSprint = 2,
	KeepCurrentPose = 3,
	Prone = 4,
	Crouch = 5,
	EAIMovePose_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EAIPoseState
enum class EAIPoseState : uint8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Jump = 3,
	PeekLeft = 4,
	PeekRight = 5,
	UnPeek = 6,
	EAIPoseState_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EAITriggerAttrType
enum class EAITriggerAttrType : uint8 {
	None = 0,
	Health = 1,
	Energy = 2,
	EAITriggerAttrType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAIAttrCompareType
enum class EAIAttrCompareType : uint8 {
	None = 0,
	Great = 1,
	Less = 2,
	EAIAttrCompareType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAIOrderType
enum class EAIOrderType : uint8 {
	Invalid = 0,
	MoveTo = 1,
	MoveAttack = 2,
	AttackMove = 3,
	MoveToTarget = 4,
	AttackTarget = 5,
	GuardTarget = 6,
	GuardArea = 7,
	CastSkillNoneTarget = 8,
	CastSkillOnTarget = 9,
	CastSkillOnLocation = 10,
	IdleShow = 11,
	RotateTo = 12,
	Stop = 99,
	EAIOrderType_MAX = 100
};

// Object Name: Enum ShadowTrackerExtra.EJumpStrategy
enum class EJumpStrategy : uint8 {
	Default = 0,
	Lean = 1,
	Direct = 2,
	Glide = 3,
	Horizontal = 4,
	DirectGlide = 5,
	VerticalLean = 6,
	HorizontalLean = 7,
	Follow = 8,
	EJumpStrategy_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EAirAttackGenerateType
enum class EAirAttackGenerateType : uint8 {
	None = 0,
	Ringtaw = 1,
	Outsider = 2,
	RandomExcludeNone = 3,
	WithinWhite = 4,
	WithinBlue = 5,
	NotSet = 6,
	EAirAttackGenerateType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EFlyMoveType
enum class EFlyMoveType : uint8 {
	NotFlyType = 0,
	NoMoveState = 1,
	HMoveState = 2,
	VMoveSatet = 3,
	EFlyMoveType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EFlyState
enum class EFlyState : uint8 {
	EFS_NONE = 0,
	EFS_Fly_Unchanged_Height = 1,
	EFS_Fly_Up_Start = 2,
	EFS_Fly_Up_Uniform = 3,
	EFS_Fly_Down_Uniform = 4,
	EFS_Fly_Wind_Field = 5,
	EFS_Fly_Super_Fly = 6,
	EFS_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EMovementInitFlag
enum class EMovementInitFlag : uint8 {
	UnInitialize = 0,
	Initializing = 1,
	Complete = 2,
	EMovementInitFlag_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EExecuteAirDropOrderResult
enum class EExecuteAirDropOrderResult : uint8 {
	MakeAirDropOrderDone = 0,
	UndefinedADFReason = 1,
	RandomDropFailure = 2,
	NothingToDrop = 3,
	GameNotStart = 4,
	GameEnded = 5,
	GameStateInvalid = 6,
	DroppingLocationOutSideLandscape = 7,
	LandscapeExtentInvalid = 8,
	FlyingDirectionInValid = 9,
	AirPlaneClassInvalid = 10,
	NoLandscapeToDrop = 11,
	UseCustomStrategy = 12,
	EExecuteAirDropOrderResult_MAX = 13
};

// Object Name: Enum ShadowTrackerExtra.EAIWayPointEventResult
enum class EAIWayPointEventResult : uint8 {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	None = 4,
	EAIWayPointEventResult_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EFindWayPointType
enum class EFindWayPointType : uint8 {
	Random = 0,
	Nearest = 1,
	EFindWayPointType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EHearSoundCharacterType
enum class EHearSoundCharacterType : uint8 {
	CharacterType_Zombie = 0,
	CharacterType_Animal = 1,
	CharacterType_AIPlayer = 2,
	CharacterType_MlAIPlayer = 3,
	CharacterType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAbilityExposedPropertyType
enum class EAbilityExposedPropertyType : uint8 {
	Bool = 0,
	Float = 1,
	Int = 2,
	Enum = 3,
	Struct = 4,
	Object = 5,
	Class = 6,
	String = 7,
	Name = 8,
	EAbilityExposedPropertyType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.AnimalAnimListType
enum class AnimalAnimListType : uint8 {
	Idle = 0,
	Idle_Arder = 1,
	Walk = 2,
	Trot = 9,
	Run = 3,
	Watch = 5,
	Dead = 6,
	BeHit = 7,
	Fear = 10,
	Cute = 11,
	RandomIdle = 12,
	Max = 13
};

// Object Name: Enum ShadowTrackerExtra.EPassengerWeaponType
enum class EPassengerWeaponType : uint8 {
	Unarmed = 0,
	Gun = 1,
	Melee = 2,
	Bow = 3,
	Throw = 4,
	DualGun = 5,
	EPassengerWeaponType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EAnimNotifyTagTargetSource
enum class EAnimNotifyTagTargetSource : uint8 {
	Owner = 0,
	CharacterOwner = 1,
	WeaponOwner = 2,
	BySceneTag = 3,
	EAnimNotifyTagTargetSource_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAnimNotifyTagOperation
enum class EAnimNotifyTagOperation : uint8 {
	AddTag = 0,
	RemoveTag = 1,
	EAnimNotifyTagOperation_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAnimNotifyState_ChangeMaterialParameter_Type
enum class EAnimNotifyState_ChangeMaterialParameter_Type : uint8 {
	CMPT_Float = 0,
	CMPT_Color = 1,
	CMPT_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAudioRegionEventType
enum class EAudioRegionEventType : uint8 {
	Enter = 0,
	Exit = 1,
	EAudioRegionEventType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.AudioRegionProcessorType
enum class AudioRegionProcessorType : uint8 {
	AudioRegion = 1,
	AudioRegionEnemy = 2,
	RiverAmbient = 3,
	MagmaAmbient = 4,
	AudioRegionProcessorType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.AUTO_SCROLL_TYPE
enum class AUTO_SCROLL_TYPE : uint8 {
	LEFT_RIGHT = 0,
	PING_PONG = 1,
	AUTO_SCROLL_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponMeshType
enum class EWeaponMeshType : uint8 {
	None = 0,
	Default = 1,
	LODMesh = 2,
	CutMesh = 3,
	EWeaponMeshType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAvatarActionLifeType
enum class EAvatarActionLifeType : uint8 {
	NONE = 0,
	NormalAction = 1,
	MainAction = 2,
	UniqueAction = 3,
	EAvatarActionLifeType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDIYEntityHiddenReason
enum class EDIYEntityHiddenReason : uint8 {
	Hidden_None = 0,
	Hidden_DefaultAttachment = 1,
	Hidden_WeaponEffect = 2,
	Hidden_LobbyFootLockTransition = 4,
	Hidden_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EDIYEnableLevel
enum class EDIYEnableLevel : uint8 {
	None = 0,
	Self = 1,
	Team = 2,
	All = 3,
	EDIYEnableLevel_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDIYMatPart
enum class EDIYMatPart : uint8 {
	EDIYMatPart_Red = 1,
	EDIYMatPart_Green = 2,
	EDIYMatPart_Blue = 3,
	EDIYMatPart_Alpha = 4,
	EDIYMatPart_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EDIYDecalBakingType
enum class EDIYDecalBakingType : uint8 {
	Character = 0,
	Weapon = 1,
	Vehicle = 2,
	EDIYDecalBakingType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAvatarExceptPlayerType
enum class EAvatarExceptPlayerType : uint8 {
	EAEPT_Self = 0,
	EAEPT_Team = 1,
	EAEPT_Other = 2,
	EAEPT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAvatarExceptReason
enum class EAvatarExceptReason : uint8 {
	EAER_MeshLoadFailed = 0,
	EAER_HandleLoadFailed = 1,
	EAER_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAvatarVisiblityType
enum class EAvatarVisiblityType : uint8 {
	EAllVisible = 0,
	ETeammateOnly = 1,
	EAvatarVisiblityType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EParticleTriggerAction
enum class EParticleTriggerAction : uint8 {
	Action_None = 0,
	Action_Hide = 1,
	Action_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EParticleTriggerEvent
enum class EParticleTriggerEvent : uint8 {
	Event_None = 0,
	Event_Scope = 1,
	Event_FPP = 2,
	Event_Max = 3
};

// Object Name: Enum ShadowTrackerExtra.EVerifyWeaponAvatar
enum class EVerifyWeaponAvatar : uint8 {
	WeaponAvatarBPIDError = 0,
	WeaponAvatarParentIDError = 1,
	WeaponAvatarGunSocketError = 2,
	WeaponAvatarMuzzleSocketError = 3,
	WeaponAvatarScopeMaterialError = 4,
	EVerifyWeaponAvatar_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EWeaponAttrPreviewType
enum class EWeaponAttrPreviewType : uint8 {
	EnableVehicleHolding = 0,
	Num = 1,
	EWeaponAttrPreviewType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponReuseCfgType
enum class EWeaponReuseCfgType : uint8 {
	ReuseFov = 0,
	ReuseSupportBullet = 1,
	ReuseSupportAttach = 2,
	ReuseAttachMesh = 3,
	ReuseDefaultAttach = 4,
	ReuseAvatar = 5,
	ReuseSensibilitySetting = 6,
	ReuseDefaultAttachAvatar = 7,
	ReuseNone = 8,
	EWeaponReuseCfgType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EHideBoneType
enum class EHideBoneType : uint8 {
	AlwaysValid = 0,
	InvalidWhenReplaced = 1,
	InvalidWhenHidden = 2,
	InvalidWhenHiddenOrReplaced = 3,
	EHideBoneType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EPostOperationType
enum class EPostOperationType : uint8 {
	Name_None = 0,
	KeepHidden = 1,
	RecoverHidden = 2,
	KeepReplace = 3,
	RecoverReplace = 4,
	EPostOperationType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESpecialIdleType
enum class ESpecialIdleType : uint8 {
	EIdleType_NONE = 0,
	EIdleType_Clothes = 1,
	EIdleType_ClothesWeapon = 2,
	EIdleType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAvatarGender
enum class EAvatarGender : uint8 {
	EGender_All = 0,
	EGender_Male = 1,
	EGender_Female = 2,
	EGender_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EGlideType
enum class EGlideType : uint8 {
	EGlideType_None = 0,
	EGlideType_SkateBoard = 1,
	EGlideType_Back = 2,
	EGlideType_OneHandGrab = 3,
	EGlideType_TwoHandGrab = 4,
	EGlideType_Ride = 5,
	EGlideType_Sit = 6,
	EGlideType_Jellyfish = 7,
	EGlideType_SeaHorse = 8,
	EGlideType_Max = 9
};

// Object Name: Enum ShadowTrackerExtra.EAvatarAttachmentSlot
enum class EAvatarAttachmentSlot : uint8 {
	NONE = 0,
	Magazine = 1,
	MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EReplaceSlot
enum class EReplaceSlot : uint8 {
	EReplaceType_NONE = 0,
	EReplaceType_HeadEquipemtSlot = 1,
	EReplaceType_HairEquipemtSlot = 2,
	EReplaceType_HatEquipemtSlot = 3,
	EReplaceType_FaceEquipemtSlot = 4,
	EReplaceType_ClothesEquipemtSlot = 5,
	EReplaceType_PantsEquipemtSlot = 6,
	EReplaceType_ShoesEquipemtSlot = 7,
	EReplaceType_BackpackEquipemtSlot = 8,
	EReplaceType_HelmetEquipemtSlot = 9,
	EReplaceType_ArmorEquipemtSlot = 10,
	EReplaceType_ParachuteEquipemtSlot = 11,
	EReplaceType_GlassEquipemtSlot = 12,
	EReplaceType_NightVisionEquipemtSlot = 13,
	EReplaceType_BeardEquipemtSlot = 14,
	EReplaceType_PonyTailHairSlot = 60,
	EReplaceType_VeilSlot = 70,
	EReplaceType_GhostFace = 71,
	EReplaceType_HoodSlot = 75,
	EReplaceType_StockingSlot = 85,
	EReplaceType_BootsSlot = 86,
	EReplaceType_MAX = 87
};

// Object Name: Enum ShadowTrackerExtra.EAvatarSpecialType
enum class EAvatarSpecialType : uint8 {
	EAvatarSpecialType_None = 0,
	EAvatarSpecialType_FlexibleCloth = 1,
	EAvatarSpecialType_CustomCloth = 2,
	EAvatarSpecialType_Bareheaded = 3,
	EAvatarSpecialType_2PassHair = 4,
	EAvatarSpecialType_MoreBoneCloth = 5,
	EAvatarSpecialType_ClothMidDeviceBiasLOD = 6,
	EAvatarSpecialType_ClothBiasLODAutonomous = 7,
	EAvatarSpecialType_CustomHead = 8,
	EAvatarSpecialType_ClothDeviceLevel6BiasLOD = 9,
	EAvatarSpecialType_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EClearAndRecoverMethod
enum class EClearAndRecoverMethod : uint8 {
	Default = 0,
	Respawn = 1,
	Transform = 2,
	FightingRestart = 3,
	EClearAndRecoverMethod_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EConsumableType
enum class EConsumableType : uint8 {
	None = 0,
	ConsumableItem = 1,
	GrenadeItem = 2,
	MeleeItem = 4,
	RingListItem = 8,
	EConsumableType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EObserverItemState
enum class EObserverItemState : uint8 {
	Equiping = 1,
	InSafetyBox = 2,
	EObserverItemState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EReplayItemState
enum class EReplayItemState : uint8 {
	Equiping = 1,
	InSafetyBox = 2,
	AdditionalDataType_RollOnDead = 4,
	AdditionalDataType_WeaponAvatar = 8,
	EReplayItemState_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EBackpackUtilType
enum class EBackpackUtilType : uint8 {
	None = 0,
	Classical = 1,
	DBZ = 2,
	TPlan = 3,
	EBackpackUtilType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EBackpackItemSortType
enum class EBackpackItemSortType : uint8 {
	EIS_Default = 0,
	EIS_Worth = 1,
	ECT_Type = 2,
	EBackpackItemSortType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EClipsType
enum class EClipsType : uint8 {
	ECT_EXPANSION = 1,
	ECT_QUICK = 2,
	ECT_QUICK_EXPANSION = 3,
	ECT_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAvatarDownloadType
enum class EAvatarDownloadType : uint8 {
	EAvatarDownloadType_Character = 0,
	EAvatarDownloadType_Vehicle = 1,
	EAvatarDownloadType_Weapon = 2,
	EAvatarDownloadType_AdvanceVehicle = 3,
	EAvatarDownloadType_Other1 = 4,
	EAvatarDownloadType_Other2 = 5,
	EAvatarDownloadType_Max = 10
};

// Object Name: Enum ShadowTrackerExtra.EReflectBackpackUtilsDelegate
enum class EReflectBackpackUtilsDelegate : uint8 {
	PLACE_HOLDER = 0,
	PLACE_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EVehicleDifferential
enum class EVehicleDifferential : uint8 {
	Differential_4W = 0,
	Differential_FrontDrive = 1,
	Differential_RearDrive = 2,
	Differential_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehicleModifyMatTargetType
enum class EVehicleModifyMatTargetType : uint8 {
	EVehicleModifyMatTargetType_MeshSkin = 0,
	EVehicleModifyMatTargetType_Particle = 1,
	EVehicleModifyMatTargetType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleModifyMatParamUsage
enum class EVehicleModifyMatParamUsage : uint8 {
	EVehicleModifyMatParamUsage_SpeedUp = 0,
	EVehicleModifyMatParamUsage_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EVehicleModifyMatParamType
enum class EVehicleModifyMatParamType : uint8 {
	EVehicleModifyMatParamType_Float = 0,
	EVehicleModifyMatParamType_Vector = 1,
	EVehicleModifyMatParamType_Tex = 2,
	EVehicleModifyMatParamType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAllAttachmentSet
enum class EAllAttachmentSet : uint8 {
	GunPoint = 0,
	Grip = 1,
	Magazine = 2,
	Gunstock = 3,
	IronSight = 4,
	RedPointScope = 5,
	QXScope = 6,
	X2Scope = 7,
	X4Scope = 8,
	X8Scope = 9,
	EAllAttachmentSet_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EBattlePreloadStage
enum class EBattlePreloadStage : uint8 {
	LoginToLobby = 0,
	LobbyToFighting = 1,
	Fighting_BeforeReadyState = 2,
	Fighting_ReadyState = 3,
	Other = 4,
	Max = 5
};

// Object Name: Enum ShadowTrackerExtra.EBloodPactBeamLevel
enum class EBloodPactBeamLevel : uint8 {
	Hide = 0,
	Near = 1,
	Mid = 2,
	Far = 3,
	EBloodPactBeamLevel_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESmartPhotographerMode
enum class ESmartPhotographerMode : uint8 {
	Photo = 0,
	Video = 1,
	ESmartPhotographerMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EClothCustomSourceField
enum class EClothCustomSourceField : uint8 {
	ColorID = 0,
	PatternID = 1,
	NumID = 2,
	ParticleID = 3,
	ShapeInfo = 4,
	EClothCustomSourceField_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ECharacterEffectTriggerCondition
enum class ECharacterEffectTriggerCondition : uint8 {
	None = 0,
	PressShooting = 1,
	HeadShot = 2,
	LobbyDisplay_PressShooting = 3,
	LobbyDisplay_HeadShot = 4,
	FreeFalling = 5,
	SpecialEquipFreeFalling = 6,
	LobbyFreeFalling = 7,
	EquipTogether = 8,
	MaleOnly = 9,
	FemaleOnly = 10,
	KillOther = 11,
	Jump = 12,
	HandEmpty = 13,
	HandNoEmpty = 14,
	LowHealth = 15,
	HighHealth = 16,
	LobbyDisplay_LowHealth = 17,
	LobbyDisplay_HighHealth = 18,
	Sprint = 19,
	SprintBack = 20,
	Shake = 21,
	Move = 22,
	FootStep = 23,
	HandEmptySprint = 24,
	Healing = 25,
	ClickAvatar = 26,
	HandSeals = 27,
	ClothScheme = 28,
	HideScroll = 29,
	LoopTimer = 30,
	SoloOnly = 31,
	ECharacterEffectTriggerCondition_MAX = 32
};

// Object Name: Enum ShadowTrackerExtra.EReplayExceptionType
enum class EReplayExceptionType : uint8 {
	RET_CharacterMovementDragStart = 0,
	RET_CharacterMovementDragEnd = 30,
	RET_CharacterMovementUserCmdDelta1 = 31,
	RET_CharacterMovementUserCmdDelta2 = 32,
	RET_CharacterMovementUserCmdDelta3 = 33,
	RET_CharacterMovementUserCmdDelta4 = 34,
	RET_CharacterMovementUserCmdDelta5 = 35,
	RET_CharacterMovementCacheServerMove1 = 51,
	RET_CharacterMovementCacheServerMove2 = 52,
	RET_CharacterMovementCacheServerMove3 = 53,
	RET_Num = 54,
	RET_MAX = 55
};

// Object Name: Enum ShadowTrackerExtra.ECacheAssetsReason
enum class ECacheAssetsReason : uint8 {
	ECAR_ComponentBeginPlay = 0,
	ECAR_AvatarEquipped = 1,
	ECAR_SeatStateChanged = 2,
	ECAR_InstanceActived = 3,
	ECAR_WeaponEquipped = 4,
	ECAR_WeaponUnEquipped = 5,
	ECAR_CurrentUsingWeaponChanged = 6,
	ECAR_AnimListChanged = 7,
	ECAR_PerspectiveModeChanged = 8,
	ECAR_FixedRefresh = 9,
	ECAR_None = 10,
	ECAR_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.ChatFlagType
enum class ChatFlagType : uint8 {
	DanagerForward = 0,
	SaveMe = 1,
	Congregation = 2,
	SuppliesHere = 3,
	GetOnCar = 4,
	NeedSupplies = 5,
	ChatFlagType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EWidgetTouchState
enum class EWidgetTouchState : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Dragging = 3,
	EWidgetTouchState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EReplayReportRPCType
enum class EReplayReportRPCType : uint8 {
	IntArrayUnReliable = 0,
	IntArrayReliable = 1,
	UInt8ArrayUnReliable = 2,
	UInt8ArrayReliable = 3,
	FloatArrayUnReliable = 4,
	FloatArrayReliable = 5,
	EReplayReportRPCType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EClimbingProxyGenerationLineTraceType
enum class EClimbingProxyGenerationLineTraceType : uint8 {
	UsingLineTraceDown = 0,
	WithoutLineTracing = 1,
	EClimbingProxyGenerationLineTraceType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EClimbingProxyGenerationDirection
enum class EClimbingProxyGenerationDirection : uint8 {
	Default = 0,
	BothWays = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EClimbingProxyGenerationDirection_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EClimbingProxyGenerationType
enum class EClimbingProxyGenerationType : uint8 {
	Climbing = 0,
	Striding = 1,
	EClimbingProxyGenerationType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ECustomCrossHairStyle
enum class ECustomCrossHairStyle : uint8 {
	CustomCrossHairStyle_Normal = 1,
	CustomCrossHairStyle_Simple = 2,
	CustomCrossHairStyle_Circle = 3,
	CustomCrossHairStyle_Dot = 4,
	CustomCrossHairStyle_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ECrossHairShape
enum class ECrossHairShape : uint8 {
	ECrossHairShape_None = 0,
	ECrossHairShape_Base = 1,
	ECrossHairShape_Other = 2,
	ECrossHairShape_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFireResetType
enum class EFireResetType : uint8 {
	EFireResetType_None = 0,
	EFireResetType_Single = 1,
	EFireResetType_Loop = 2,
	EFireResetType_SingleAndLoop = 3,
	EFireResetType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ECustomCndEventType
enum class ECustomCndEventType : uint8 {
	OnStartFire = 0,
	OnStopFire = 1,
	OnFireHitServer = 2,
	OnFireWeaponStateEnd = 3,
	OnShootBullet = 4,
	OnScopeIn = 5,
	OnScopeOut = 6,
	MaxType = 7,
	ECustomCndEventType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EConditionHeathType
enum class EConditionHeathType : uint8 {
	EQUAL = 0,
	MORE_THAN = 1,
	LESS_THAN = 2,
	EConditionHeathType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDDMCFindType
enum class EDDMCFindType : uint8 {
	DDMCFT_ALL = 0,
	DDMCFT_RPC = 1,
	DDMCFT_REP = 2,
	DDMCFT_NONE = 3,
	DDMCFT_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDamageRelation
enum class EDamageRelation : uint8 {
	Enemy = 0,
	Neutral = 1,
	Ally = 2,
	EDamageRelation_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchPersonalMedalType
enum class EDeathMatchPersonalMedalType : uint8 {
	SuperGod = 1,
	ContinuouKill = 2,
	SuperGodEnd = 3,
	TopSpotEnd = 4,
	ContinuouKillEnd = 5,
	FirstKill = 6,
	Revenge = 7,
	HeadShot = 8,
	Hunter = 9,
	Rally = 10,
	Cheer = 11,
	Sharpshooter = 12,
	GorgeousExplosion = 13,
	Slaughter = 14,
	AntiKill = 15,
	SunderArmorExperts = 16,
	RPG = 17,
	Guard = 18,
	Raiders = 19,
	Keeper = 20,
	EDeathMatchPersonalMedalType_MAX = 21
};

// Object Name: Enum ShadowTrackerExtra.EDeathMatchWWISENotifyReason
enum class EDeathMatchWWISENotifyReason : uint8 {
	None = 0,
	Reload = 1,
	NormalKill = 2,
	RedTeamFirstKill = 3,
	BlueTeamFirstKill = 4,
	RedTeamLeading = 5,
	BlueTeamLeading = 6,
	RedTeamAlmostWin = 7,
	BlueTeamAlmostWin = 8,
	RedTeamAlmostCompletelyWin = 9,
	BlueTeamAlmostCompoletelyWin = 10,
	RedTeamHalfTimeLeading = 11,
	BlueTeamHalfTimeLeading = 12,
	RedTeamTimeEndLeading = 13,
	BlueTeamTimeEndLeading = 14,
	RedTeamHasSuperGod = 15,
	BlueTeamHasSuperGod = 16,
	RedTeamEndSuperGod = 17,
	BlueTeamEndSuperGod = 18,
	RedTeamRampage = 19,
	BlueTeamRampage = 20,
	RedTeamWillOccupyHardPoint = 21,
	BlueTeamWillOccupyHardPoint = 22,
	RedTeamWillOccupyHardPoint_Time = 23,
	BlueTeamWillOccupyHardPoint_Time = 24,
	RedTeamWillHardPointHalfTime = 25,
	BlueTeamWillHardPointHalfTime = 26,
	EDeathMatchWWISENotifyReason_MAX = 27
};

// Object Name: Enum ShadowTrackerExtra.EDeathPlayType
enum class EDeathPlayType : uint8 {
	EDeathPlayType_None = 0,
	EDeathPlayType_FromLobby = 1,
	EDeathPlayType_FromBattle = 2,
	EDeathPlayType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EItemCurveAnimState
enum class EItemCurveAnimState : uint8 {
	DelayStart = 0,
	Anim = 1,
	DelayDestroy = 2,
	End = 3,
	EItemCurveAnimState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EComponentDormantType
enum class EComponentDormantType : uint8 {
	DormantFull = 0,
	DormantTick = 1,
	EComponentDormantType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EDynamicWeatherExMgrActivityStatus
enum class EDynamicWeatherExMgrActivityStatus : uint8 {
	Begin = 0,
	End = 1,
	EDynamicWeatherExMgrActivityStatus_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ENightStatus
enum class ENightStatus : uint8 {
	ENightStatus_Other = 0,
	ENightStatus_Night1 = 1,
	ENightStatus_Night2 = 2,
	ENightStatus_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EECSSystemType
enum class EECSSystemType : uint8 {
	None = 0,
	WeaponHitInfo = 1,
	WeaponTrackInfo = 2,
	WeaponEffectInfo = 3,
	CharClientDamage = 4,
	WeaponShotSound = 5,
	WeaponFireState = 6,
	EECSSystemType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EEffectAdjustType
enum class EEffectAdjustType : uint8 {
	EAT_MinShowDistanceAndLerp = 0,
	EAT_MinShowDistanceAndHide = 1,
	EAT_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESpikeDeploymentState
enum class ESpikeDeploymentState : uint8 {
	PreDeploy = 0,
	Deploying = 1,
	PostDeploy = 2,
	Popped = 3,
	Idle = 4,
	ESpikeDeploymentState_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EProjectileEventType
enum class EProjectileEventType : uint8 {
	None = 0,
	Activate = 1,
	Bounce = 2,
	Stop = 3,
	Exploded = 4,
	Damaged = 5,
	EProjectileEventType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EProjectileExplosionStartType
enum class EProjectileExplosionStartType : uint8 {
	Never = 0,
	Impact = 1,
	Timer = 2,
	ImpactAndTimer = 3,
	EProjectileExplosionStartType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EEmoteActionValidGender
enum class EEmoteActionValidGender : uint8 {
	Male = 0,
	Female = 1,
	All = 2,
	EEmoteActionValidGender_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFinderShape
enum class EFinderShape : uint8 {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	Cone = 4,
	Fan = 5,
	Complex = 6,
	EFinderShape_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EParachuteType
enum class EParachuteType : uint8 {
	Other = 0,
	Classic = 1,
	SelfRevive = 2,
	TeammateRevive = 3,
	ParachuteDeliver = 4,
	ReviveFlareGun = 5,
	FallFromHeight = 6,
	SpecialParachuteJump = 7,
	EParachuteType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EFPPCameraDataType
enum class EFPPCameraDataType : uint8 {
	EFPPCameraType_InVehicle = 0,
	EFPPCameraType_Shoveling = 1,
	EFPPCameraType_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.EBotSourceType
enum class EBotSourceType : uint8 {
	BotSourceType_First = 0,
	BotSourceType_Spawner = 1,
	BotSourceType_API = 2,
	BotSourceType_TriggerAction = 3,
	BotSourceType_AIActing = 4,
	BotSourceType_PlaceOnLevel = 5,
	BotSourceType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EBotType
enum class EBotType : uint8 {
	BotType_First = 0,
	BotType_Default = 0,
	BotType_Boss = 1,
	BotType_NormalActor = 2,
	BotType_Vehicle = 3,
	BotType_PickUpWrapper = 4,
	BotType_All = 15,
	BotType_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.EBotCategray
enum class EBotCategray : uint8 {
	BotCategory_First = 0,
	BotCategory_Monster = 0,
	BotCategory_Decorator = 1,
	BotCategory_NormalActor = 2,
	BotCategory_Vehicle = 3,
	BotCategory_PickUpWrapper = 4,
	BotCategory_FakePlayer = 5,
	BotCategory_NPC = 6,
	BotCategory_Animal = 7,
	BotCategory_AIPlayer = 8,
	BotCategory_All = 15,
	BotCategory_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.ELevelChapterType
enum class ELevelChapterType : int32 {
	NormalChapter = 1000,
	PoliceChapter = 2000,
	EliteMonsterGroupChapter = 3000,
	ELevelChapterType_MAX = 3001
};

// Object Name: Enum ShadowTrackerExtra.EGameReplayType
enum class EGameReplayType : uint8 {
	EGameReplayType_None = 0,
	EGameReplayType_DeathPlayback = 1,
	EGameReplayType_CompletePlayback = 2,
	EGameReplayType_ObservingReplay = 3,
	EGameReplayType_WonderfulPlayback = 4,
	EGameReplayType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EGamePlayMode
enum class EGamePlayMode : uint8 {
	None = 1,
	TeamPVE = 2,
	EGamePlayMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECurrencyType
enum class ECurrencyType : uint8 {
	PlayerStateVar = 0,
	Item = 1,
	ECurrencyType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EGeneralSMTaskState
enum class EGeneralSMTaskState : uint8 {
	Uninitialized = 0,
	DelayRun = 1,
	Running = 2,
	Finished = 3,
	EGeneralSMTaskState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EGPCompareType
enum class EGPCompareType : uint8 {
	CMP_Equal = 0,
	CMP_Less = 1,
	CMP_LessEqual = 2,
	CMP_Greater = 3,
	CMP_GreaterEqual = 4,
	CMP_NotEqual = 5,
	CMP_Regex = 6,
	CMP_Mask = 7,
	CMP_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EGPSourceType
enum class EGPSourceType : uint8 {
	SRC_PreviousRegexMatch = 0,
	SRC_GpuFamily = 1,
	SRC_GlVersion = 2,
	SRC_OSVersion = 3,
	SRC_DeviceMake = 4,
	SRC_DeviceModel = 5,
	SRC_VulkanVersion = 6,
	SRC_TotalPhysicalGB = 7,
	SRC_ProfileName = 8,
	SRC_OpenID = 9,
	SRC_MapName = 10,
	SRC_GameModeName = 11,
	SRC_MAX = 12
};

// Object Name: Enum ShadowTrackerExtra.EGroupBackpackScheme
enum class EGroupBackpackScheme : uint8 {
	NoneScheme = 0,
	VehicleScheme = 1,
	EGroupBackpackScheme_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EHardPointManagerState
enum class EHardPointManagerState : uint8 {
	None = 0,
	WaitActivate = 1,
	HardPointActivating = 2,
	EHardPointManagerState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EIdeaDecalTangentReferenceAxis
enum class EIdeaDecalTangentReferenceAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EIdeaDecalTangentReferenceAxis_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDecalTraceTowardsType
enum class EDecalTraceTowardsType : uint8 {
	LocalSpaceMulDecalLongest = 0,
	LocalSpaceMulUnitLongest = 1,
	LocalSpaceUseDecalLongest = 2,
	WorldSpaceUseDecalLongest = 3,
	EDecalTraceTowardsType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EIdeaFenceSelector
enum class EIdeaFenceSelector : uint8 {
	None = 0,
	Use_2 = 1,
	Use_3 = 2,
	Use_4 = 3,
	Use_5 = 4,
	EIdeaFenceSelector_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.FAnimParamVariableType
enum class FAnimParamVariableType : uint8 {
	AnimParams_Bool = 0,
	AnimParams_ENum = 1,
	AnimParams_Int = 2,
	AnimParams_Float = 3,
	AnimParams_Vector = 4,
	AnimParams_Rotator = 5,
	AnimParams_CurveFloat = 6,
	AnimParams_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.ERequestLoadResult
enum class ERequestLoadResult : uint8 {
	ERLR_SUCCESS = 0,
	ERLR_FAILED = 1,
	ERLR_LOADED = 2,
	ERLR_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EnumAnimMotionType
enum class EnumAnimMotionType : uint8 {
	None = 0,
	Jump = 1,
	Shovel = 2,
	Swim = 3,
	Parachute = 4,
	EnumAnimMotionType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EBattleAnimModuleType
enum class EBattleAnimModuleType : uint8 {
	EBAIS_Normal = 0,
	EBAIS_OverrideMotion = 1,
	EBAIS_SkillControl = 2,
	EBAIS_CarryBack = 3,
	EBAIS_NearDeathInVehicle = 4,
	EBAIS_NearDeath = 5,
	EBAIS_Max = 6
};

// Object Name: Enum ShadowTrackerExtra.EAnimInsType
enum class EAnimInsType : uint8 {
	EAINS_None = 0,
	EAINS_Char_TPP = 1,
	EAINS_Char_PP = 2,
	EANIS_Char_Locomotion = 3,
	EANIS_Char_Vault = 4,
	EANIS_Char_Parachute = 5,
	EANIS_Char_WeaponGun = 6,
	EANIS_Char_Swim = 7,
	EANIS_Char_Hit = 8,
	EANIS_Char_Skill = 9,
	EANIS_Char_Vehicle = 10,
	EANIS_Char_PostSkeletalControl = 11,
	EANIS_Char_Seesaw = 12,
	EANIS_Char_OverrideMotionControl = 13,
	EANIS_Char_MaincityTPP = 14,
	EANIS_Vehicle = 15,
	EAINS_Max = 16,
	EAnimInsType_MAX = 17
};

// Object Name: Enum ShadowTrackerExtra.ECharacterAnimBlendPoseType
enum class ECharacterAnimBlendPoseType : uint8 {
	Stand_TO_Prone = 0,
	Stand_TO_Crouch = 1,
	Crouch_TO_Stand = 2,
	Crouch_TO_Prone = 3,
	Prone_TO_Stand = 4,
	Prone_TO_Crouch = 5,
	ECharacterAnimBlendPoseType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ECharacterMotionBlendType
enum class ECharacterMotionBlendType : uint8 {
	EMotion_Default = 0,
	EMotion_UpBodyOverride = 1,
	EMotion_LowerBodyOverride = 2,
	EMotion_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAnimWeaponBoltStatusType
enum class EAnimWeaponBoltStatusType : uint8 {
	BOLT_None = 0,
	BOLT_Normal = 1,
	BOLT_StandToProne = 2,
	BOLT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EImpactMask
enum class EImpactMask : uint8 {
	EImpactNone = 0,
	EImpactEffect = 1,
	EImpactAll = 255,
	EImpactMask_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.AllowFailedReason
enum class AllowFailedReason : uint8 {
	None = 0,
	CppFailed = 1,
	Occupied = 2,
	Cooling = 3,
	BlueprintFailed = 4,
	AllowFailedReason_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EInteractiveMoveType
enum class EInteractiveMoveType : uint8 {
	InteractiveMoveType_Stairs = 0,
	InteractiveMoveType_Max = 1
};

// Object Name: Enum ShadowTrackerExtra.EInterp3Method
enum class EInterp3Method : uint8 {
	PositionFirst = 0,
	RoationFirst = 1,
	PositionForced = 2,
	RoationForced = 3,
	EInterp3Method_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EFindRecordMovementType
enum class EFindRecordMovementType : uint8 {
	FRMD_TYPE_SERVER_TIME_STAMP = 0,
	FRMD_TYPE_MOVE_TIME_STAMP = 1,
	FRMD_TYPE_CMD_SEQUENCE = 2,
	FRMD_TYPE_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVerifyDataType
enum class EVerifyDataType : uint8 {
	TolLagTime = 0,
	HitBoxScale = 1,
	ShootCornerBoxScale = 2,
	BlockBoxScale = 3,
	EVerifyDataType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EPingSectionType
enum class EPingSectionType : uint8 {
	PST_L0 = 0,
	PST_0_41 = 1,
	PST_40_101 = 2,
	PST_100_201 = 3,
	PST_200_351 = 4,
	PST_350_501 = 5,
	PST_500_701 = 6,
	PST_G700 = 7,
	PST_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EPingOwnerType
enum class EPingOwnerType : uint8 {
	PingDif = 0,
	Shooter = 1,
	Vicitim = 2,
	EPingOwnerType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.DestructionShape
enum class DestructionShape : uint8 {
	DShape_Box = 0,
	DShape_Shpere = 1,
	DShape_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.EAnimBoneSampleStrategy
enum class EAnimBoneSampleStrategy : uint8 {
	FirstFrame = 0,
	AtTime = 1,
	Averaged = 2,
	EAnimBoneSampleStrategy_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EFootTransitionType
enum class EFootTransitionType : uint8 {
	None = 0,
	LeftFootOnly = 1,
	RightFootOnly = 2,
	LeftFootFirst = 3,
	RightFootFirst = 4,
	EFootTransitionType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ELobbyPawnWeaponAnimAdditiveType
enum class ELobbyPawnWeaponAnimAdditiveType : uint8 {
	EWeaponAdd_None = 0,
	EWeaponAdd_BlendSpace = 1,
	EWeaponAdd_AnimSequence = 2,
	EWeaponAdd_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ELobbyPawnAnimPoseType
enum class ELobbyPawnAnimPoseType : uint8 {
	ELobbyPose_Normal = 0,
	ELobbyPose_Weapon = 1,
	ELobbyPose_WithFriend = 2,
	ELobbyPose_WeaponPlay = 3,
	ELobbyPose_AirCraft = 4,
	ELobbyPose_ReturnActivity = 5,
	ELobbyPose_SpecialIdle = 6,
	ELobbyPose_ClothesWeapon = 7,
	ELobbyPose_CollectionHall = 8,
	ELobbyPose_None = 9,
	ELobbyPose_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.ELobbyWeaponAvatarLevel
enum class ELobbyWeaponAvatarLevel : uint8 {
	Lobby = 1,
	Battle = 2,
	ELobbyWeaponAvatarLevel_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ELobbyWeaponHideReason
enum class ELobbyWeaponHideReason : uint8 {
	ELobbyWeaponHideReason_Default = 1,
	ELobbyWeaponHideReason_Wardrobe = 2,
	ELobbyWeaponHideReason_FootLockTransition = 3,
	ELobbyWeaponHideReason_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EXTaskSrcType
enum class EXTaskSrcType : uint8 {
	BySelf = 0,
	ByTeammate = 1,
	EXTaskSrcType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EXTaskType
enum class EXTaskType : uint8 {
	TaskTypeDefault = 0,
	TaskTypeMain = 1,
	TaskTypeBranch = 2,
	TaskTypeDaily = 3,
	TaskTypeBounty = 4,
	TaskTypeBattle = 5,
	TaskTypeWishing = 6,
	TaskTypeLobby = 7,
	TaskTypeAward = 8,
	TaskTypeMilitary = 9,
	TaskTypeTPlanRP = 10,
	EXTaskType_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.FXTaskStateType
enum class FXTaskStateType : uint8 {
	StateNone = 0,
	StateGot = 1,
	StateProgress = 2,
	StateDone = 3,
	StateComplete = 4,
	StateFail = 5,
	FXTaskStateType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.KilledReason
enum class KilledReason : uint8 {
	None = 0,
	KillBySun = 1,
	KillByLeave = 2,
	KillBySleep = 3,
	KillByFightingState = 4,
	KilledReason_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EMarkTypeIDClearType
enum class EMarkTypeIDClearType : uint8 {
	ETC_OWNER_ONLY = 0,
	ETC_TEAMMATE = 1,
	ETC_Global = 2,
	ETC_ALL = 3,
	ETC_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EMarkDispatchRange
enum class EMarkDispatchRange : uint8 {
	EMAMDT_OWNER_ONLY = 0,
	EMAMDT_TEAMMATE = 1,
	EMAMDT_ENEMIES = 2,
	EMAMDT_TEAMMATE_RANGED = 3,
	EMAMDT_ENEMIES_RANGED = 4,
	EMAMDT_ALL_RANGED = 5,
	EMAMDT_ALL = 6,
	EMAMDT_CAMP = 7,
	EMAMDT_CAMP_EXCLUDE_TEAMMATE = 8,
	EMAMDT_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EMarkDispatchActionType
enum class EMarkDispatchActionType : uint8 {
	EMAMAT_INSTANT = 0,
	EMAMAT_DELAYED = 1,
	EMAMAT_DELAYED_WITHCALLBACK = 2,
	EMAMAT_BATCH = 3,
	EMAMAT_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EMarkFastSyncTarget
enum class EMarkFastSyncTarget : uint8 {
	None = 0,
	Personal = 1,
	Team = 2,
	All = 3,
	OB = 4,
	PCOB = 5,
	Camp = 6,
	EMarkFastSyncTarget_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EMarkParentWidget
enum class EMarkParentWidget : uint8 {
	EMPW_None = 0,
	EMPW_MiniMap = 1,
	EMPW_EntireMap = 2,
	EMPW_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EUIMarkState
enum class EUIMarkState : uint8 {
	EUMS_None = 0,
	EUMS_Show = 1,
	EUMS_Hide = 2,
	EUMS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMapWidgetType
enum class EMapWidgetType : uint8 {
	EMWT_None = 0,
	EMWT_Fighting_MiniMap = 1,
	EMWT_Fighting_EntireMap = 2,
	EMWT_Observe_MiniMap = 3,
	EMWT_Observe_EntireMap = 4,
	EMWT_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EMetorPolygonAreaType
enum class EMetorPolygonAreaType : uint8 {
	PAT_Normal = 0,
	PAT_OuterBound = 1,
	PAT_Radiation = 2,
	PAT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMissileState
enum class EMissileState : uint8 {
	Ready = 0,
	Flying = 1,
	Bomb = 2,
	EMissileState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMobClimbingProxyType
enum class EMobClimbingProxyType : uint8 {
	Climbing = 0,
	Striding = 1,
	ClimbWindow = 2,
	Jumping = 3,
	EMobClimbingProxyType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ENoiseSearchType
enum class ENoiseSearchType : uint8 {
	Loudest = 0,
	Nearest = 1,
	ENoiseSearchType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ENoiseAttenuationModel
enum class ENoiseAttenuationModel : uint8 {
	LinearSquard = 0,
	Logarithmic = 1,
	LogSquard = 2,
	ENoiseAttenuationModel_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMonsterLODLevel
enum class EMonsterLODLevel : uint8 {
	L0_Full = 0,
	L1_Normal = 1,
	L2_Low = 2,
	L3_Minimal = 3,
	L4_Frozen = 4,
	Invalid = 255,
	EMonsterLODLevel_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.EEnableRagDollReason
enum class EEnableRagDollReason : uint8 {
	ERDR_VehicleHit = 0,
	ERDR_MeleeAttack = 1,
	ERDR_RadialDamage = 2,
	ERDR_ShootWeaponDamage = 3,
	ERDR_UnKnown = 4,
	ERDR_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EMoveStage
enum class EMoveStage : uint8 {
	FSMTick = 0,
	InputTransform = 1,
	VelocityPost = 2,
	RotationSolve = 3,
	Execute = 4,
	MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ELogicAreaType
enum class ELogicAreaType : uint8 {
	BreakableWall = 0,
	BreakableHouse = 1,
	ELogicAreaType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EBreakReloadType
enum class EBreakReloadType : uint8 {
	EBreakReloadType_Shoot = 0,
	EBreakReloadType_Reload = 1,
	EBreakReloadType_Mix = 2,
	EBreakReloadType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponBulletExtendedType
enum class EWeaponBulletExtendedType : uint8 {
	EWBET_Mag = 0,
	EWBET_TacticalReload = 1,
	EWBET_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponSingleHandHoldType
enum class EWeaponSingleHandHoldType : uint8 {
	EWSHHT_Right = 0,
	EWSHHT_Left = 1,
	EWSHHT_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EBulletImpactDir
enum class EBulletImpactDir : uint8 {
	ImpactNormal = 1,
	ImpactShootDir = 2,
	EBulletImpactDir_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EClientShootCheckResult
enum class EClientShootCheckResult : uint8 {
	ECSCR_OK = 0,
	ECSCR_LONG_TIME_NO_RENDER = 1,
	ECSCR_HIT_COMPONENT_UNVALID = 2,
	ECSCR_HIT_COMPONENT_UNEXPECT = 4,
	ECSCR_HIT_POINT_OUT_COLLISION_BOX = 8,
	ECSCR_SHOOT_DIR_EXCEPTION1 = 16,
	ECSCR_SHOOT_DIR_EXCEPTION2 = 32,
	ECSCR_CAMERA_MODE_EXCEPTION = 64,
	ECSCR_MAX = 65
};

// Object Name: Enum ShadowTrackerExtra.EWeaponCustomTagType
enum class EWeaponCustomTagType : uint8 {
	EWCTT_FINGER_SCOPE_USE_1X = 0,
	EWCTT_FINGER_SCOPE_USE_Muute = 1,
	EWCTT_NUM = 2,
	EWCTT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECreateType
enum class ECreateType : uint8 {
	ECreateTypeRefuse = 0,
	ECreateTypeFree = 1,
	ECreateTypeAddToPool = 2,
	ECreateType_Max = 3
};

// Object Name: Enum ShadowTrackerExtra.EDisplayPolicy
enum class EDisplayPolicy : uint8 {
	Visibility = 0,
	Activity = 1,
	EDisplayPolicy_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPetSlotType
enum class EPetSlotType : uint8 {
	EPetSlotType_NONE = 0,
	EPetSlotType_Body = 1,
	EPetSlotType_Suit = 2,
	EPetSlotType_Hat = 3,
	EPetSlotType_Glasses = 4,
	EPetSlotType_Jacket = 5,
	EPetSlotType_Bag = 6,
	EPetSlotType_Trousers = 7,
	EPetSlotType_Shoes = 8,
	EPetSlotType_MaxSlotNum = 9,
	EPetSlotType_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EPetFallingTimeCnd
enum class EPetFallingTimeCnd : uint8 {
	Equal = 0,
	MoreThan = 1,
	LessThan = 2,
	EPetFallingTimeCnd_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPetFeatureType
enum class EPetFeatureType : uint8 {
	Start = 0,
	Color = 0,
	Enlarge = 1,
	MaxCount = 2,
	EPetFeatureType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPetActionPattern
enum class EPetActionPattern : uint8 {
	None = 0,
	Idle = 1,
	Walk = 2,
	Run = 3,
	Parachute = 4,
	Swimming = 5,
	Normal = 6,
	WithSubAnimations = 7,
	Max = 8
};

// Object Name: Enum ShadowTrackerExtra.EPetRelevantType
enum class EPetRelevantType : uint8 {
	PetRelevant_OnlySelf = 0,
	PetRelevant_Team = 1,
	PetRelevant_All = 2,
	PetRelevant_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPawnStateChangeType
enum class EPawnStateChangeType : uint8 {
	Enter = 0,
	Leave = 1,
	EPawnStateChangeType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPetEventType
enum class EPetEventType : uint8 {
	PetEventNone = 0,
	PlayEmotionEvent = 1,
	PlayerStateEvent = 2,
	PetRandomMontageEvent = 3,
	PlayerPlayEmotionEvent = 4,
	PlayerWin = 5,
	PlayerKillSomeone = 6,
	PlayerAssistKill = 7,
	EnemyStep = 8,
	EnemyShoot = 9,
	AirAttack = 10,
	EPetEventType_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.EPetFollowOwnerType
enum class EPetFollowOwnerType : uint8 {
	Attach = 0,
	Follow = 1,
	EPetFollowOwnerType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPickupUsefulCommonType
enum class EPickupUsefulCommonType : uint8 {
	EDefult = 0,
	EForceUseful = 1,
	EForceDisUseful = 2,
	EPickupUsefulCommonType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EReportMiscKey
enum class EReportMiscKey : uint8 {
	ClientSwitchClose = 0,
	ConfigCollisionDistSqAngle = 1,
	KillFrequentGeneral = 2,
	ShootIntervalAnomaly = 3,
	FireTimeID = 4,
	EReportMiscKey_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EPVEDeadAttacker
enum class EPVEDeadAttacker : uint8 {
	Nothing = 0,
	Zombie = 1,
	EPVEDeadAttacker_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EMeleeDamageSubType
enum class EMeleeDamageSubType : uint8 {
	Fist = 1,
	Cowbar = 3,
	Pan = 4,
	Machete = 5,
	Sickle = 6,
	Dagger = 7,
	PlanAFist = 8,
	Common = 99,
	EMeleeDamageSubType_MAX = 100
};

// Object Name: Enum ShadowTrackerExtra.EAdditionDamageSubType
enum class EAdditionDamageSubType : uint8 {
	AdditionDamageToVehicle = 0,
	AdditionDamageToZombie = 1,
	AdditionDamageToDoor = 2,
	EAdditionDamageSubType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPlayerEquipmentLevel
enum class EPlayerEquipmentLevel : uint8 {
	PEL_2 = 0,
	PEL_3 = 1,
	PEL_4 = 2,
	PEL_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECoopVaultStage
enum class ECoopVaultStage : uint8 {
	Unknown = 0,
	Lift_Preparing = 1,
	Lift_Ready = 2,
	Lift_StepUp = 3,
	Lift_Boosting = 4,
	Pull_Preparing = 16,
	Pull_Ready = 32,
	Pull_Leap = 48,
	Pull_Climbing = 64,
	ECoopVaultStage_MAX = 65
};

// Object Name: Enum ShadowTrackerExtra.ERespawnPointType
enum class ERespawnPointType : uint8 {
	Plane = 0,
	BornPoint = 1,
	ERespawnPointType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ECharacterType
enum class ECharacterType : uint8 {
	RealPlayer = 1,
	MLDeliverAI = 2,
	MLAI = 3,
	BehaviorTreeDeliverAI = 4,
	BehaviorTreeAI = 5,
	ECharacterType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EAIBotInfoType
enum class EAIBotInfoType : uint8 {
	PlayerKill = 1,
	KnockDown = 2,
	BeKnockDown = 3,
	Damage = 4,
	DamageFrom = 5,
	AssistCount = 6,
	AirDropCount = 7,
	PickUpItemTimes = 8,
	RescueCount = 9,
	ShotWeaponCount = 10,
	EAIBotInfoType_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.ECircleFlowRecordType
enum class ECircleFlowRecordType : uint8 {
	RefreshCircle = 1,
	PlayerDie = 2,
	PlayerWin = 3,
	ECircleFlowRecordType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESlideLandTestType
enum class ESlideLandTestType : uint8 {
	ESLTT_LINE = 0,
	ESLTT_CAPSULE = 1,
	ESLTT_BOX = 2,
	ESLTT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESlideState
enum class ESlideState : uint8 {
	ESS_NONE = 0,
	ESS_LAUNCH = 1,
	ESS_SLIDE = 2,
	ESS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECharSkipState
enum class ECharSkipState : uint8 {
	CSS_IllegalTeamup = 0,
	CSS_StuckGround = 1,
	CSS_DisToGround = 2,
	CSS_ShootInMidAir = 3,
	CSS_PlayerHeightDiff = 4,
	CSS_CharMoveDist = 5,
	CSS_MaxValue = 64,
	CSS_MAX = 65
};

// Object Name: Enum ShadowTrackerExtra.ESpectatorReplayFlag
enum class ESpectatorReplayFlag : int32 {
	ESpectatorReplayFlag_None = 0,
	ESpectatorReplayFlag_Teammate = 1,
	ESpectatorReplayFlag_Enemy = 2,
	ESpectatorReplayFlag_FriendNotHawkEye = 4,
	ESpectatorReplayFlag_HawkEye = 8,
	ESpectatorReplayFlag_Global = 16,
	ESpectatorReplayFlag_Death = 3,
	ESpectatorReplayFlag_Friend = 12,
	ESpectatorReplayFlag_FriendOrEnemy = 14,
	ESpectatorReplayFlag_InSpectating = 15,
	ESpectatorReplayFlag_Pure = 28,
	ESpectatorReplayFlag_Spectator = 31,
	ESpectatorReplayFlag_DeathPlayback = 65536,
	ESpectatorReplayFlag_CompletePlayback = 131072,
	ESpectatorReplayFlag_ObservingReplay = 262144,
	ESpectatorReplayFlag_WonderfulPlayback = 524288,
	ESpectatorReplayFlag_DSRecord = 393216,
	ESpectatorReplayFlag_ClientRecord = 589824,
	ESpectatorReplayFlag_Replay = 983040,
	ESpectatorReplayFlag_MAX = 983041
};

// Object Name: Enum ShadowTrackerExtra.EHistoryMoveIndex
enum class EHistoryMoveIndex : uint8 {
	Current = 0,
	Last = 1,
	BeforeLast = 2,
	EHistoryMoveIndex_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESmartCameraTemplateType
enum class ESmartCameraTemplateType : uint8 {
	Player = 0,
	Pet = 1,
	Vehicle = 2,
	ESmartCameraTemplateType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EAnimPlayFlag
enum class EAnimPlayFlag : uint8 {
	None = 0,
	DisableLeftHandIK = 1,
	EAnimPlayFlag_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ECDBarType
enum class ECDBarType : uint8 {
	None = 0,
	Skill = 1,
	RescueOther = 2,
	BeingRescue = 3,
	BeingCaptived = 4,
	ThrowItem = 5,
	ECDBarType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ETeammateSpectatorResult
enum class ETeammateSpectatorResult : uint8 {
	ETeammateSpectatorResult_Normal = 0,
	ETeammateSpectatorResult_MySelf = 1,
	ETeammateSpectatorResult_Nullptr = 2,
	ETeammateSpectatorResult_Died = 3,
	ETeammateSpectatorResult_NotAlive = 4,
	ETeammateSpectatorResult_NotInGame = 5,
	ETeammateSpectatorResult_IsABot = 6,
	ETeammateSpectatorResult_Max = 7
};

// Object Name: Enum ShadowTrackerExtra.ESpectatorException
enum class ESpectatorException : uint8 {
	ESpectatorException_Normal = 0,
	ESpectatorException_PlayerStateNullptr = 1,
	ESpectatorException_LiveStateNotInDied = 2,
	ESpectatorException_AllDied = 3,
	ESpectatorException_NoTeammateFailed = 4,
	ESpectatorException_WithTeammateFailed = 5,
	ESpectatorException_ConnectionSaturate = 6,
	ESpectatorException_ChannelSaturate = 7,
	ESpectatorException_LandscapeLoadError = 8,
	ESpectatorException_LandscapeComponentInvisible = 9,
	ESpectatorException_DeathPlayback = 10,
	ESpectatorException_VehicleCamera = 11,
	ESpectatorException_PTeammateNullptr = 12,
	ESpectatorException_NoAntiCheatLog = 13,
	ESpectatorException_Max = 14
};

// Object Name: Enum ShadowTrackerExtra.EObserverFlags
enum class EObserverFlags : uint8 {
	OBSERVER_NoFlags = 0,
	OBSERVER_Base = 1,
	OBSERVER_API = 2,
	OBSERVER_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.FSoundType
enum class FSoundType : uint8 {
	ESoundMove = 0,
	ESoundFire = 1,
	ESoundVehicle = 2,
	FSoundType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EScopeMeshAnimType
enum class EScopeMeshAnimType : uint8 {
	ScopeMeshAnimType_Normal = 0,
	ScopeMeshAnimType_Translate = 1,
	ScopeMeshAnimType_Scope = 2,
	ScopeMeshAnimType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EBattleTextType
enum class EBattleTextType : uint8 {
	EBattleTextType_Fist = 0,
	EBattleTextType_BurningBomb = 1,
	EBattleTextType_Use = 2,
	EBattleTextType_ShotAndExplode = 3,
	EBattleTextType_Vehicle = 4,
	EBattleTextType_You = 5,
	EBattleTextType_YourTeammate = 6,
	EBattleTextType_By = 7,
	EBattleTextType_HeadShot = 8,
	EBattleTextType_PutDown = 9,
	EBattleTextType_Kill = 10,
	EBattleTextType_Killed = 11,
	EBattleTextType_Le = 12,
	EBattleTextType_Because = 13,
	EBattleTextType_CriticalWounded = 14,
	EBattleTextType_HighFallingDown = 15,
	EBattleTextType_FallToGround = 16,
	EBattleTextType_InPosionArea = 17,
	EBattleTextType_TooMuchTime = 18,
	EBattleTextType_UnderWeater = 19,
	EBattleTextType_Finally = 20,
	EBattleTextType_AirAttackHit = 21,
	EBattleTextType_AccidentalDamage = 22,
	EBattleTextType_Myself = 23,
	EBattleTextType_Explosion = 24,
	EBattleTextType_PoisonWater = 25,
	EBattleTextType_Dot = 26,
	EBattleTextType_MAX = 27
};

// Object Name: Enum ShadowTrackerExtra.EHandlePickUpActionReplicatedDataActionType
enum class EHandlePickUpActionReplicatedDataActionType : uint8 {
	EHandlePickUpActionReplicatedDataActionType_None = 0,
	EHandlePickUpActionReplicatedDataActionType_PickUpWeapon = 1,
	EHandlePickUpActionReplicatedDataActionType_PickUpPlayerEquipment = 2,
	EHandlePickUpActionReplicatedDataActionType_PutDownlayerEquipment = 3,
	EHandlePickUpActionReplicatedDataActionType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeaponComponentType
enum class EWeaponComponentType : uint8 {
	WCT_None = 0,
	WCT_Scope = 1,
	WCT_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.EPlayerEquipmentSlotType
enum class EPlayerEquipmentSlotType : uint8 {
	EPlayerEquipmentSlotType_None = 0,
	EPlayerEquipmentSlotType_HeadEquipemtSlot = 1,
	EPlayerEquipmentSlotType_ChestEquipemtSlot = 2,
	EPlayerEquipmentSlotType_JacketEquipemtSlot = 3,
	EPlayerEquipmentSlotType_BackEquipemtSlot = 4,
	EPlayerEquipmentSlotType_LegsEquipemtSlot = 5,
	EPlayerEquipmentSlotType_FeetEquipemtSlot = 6,
	EPlayerEquipmentSlotType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EDataTableType
enum class EDataTableType : uint8 {
	EDataTableType_None = 0,
	EDataTableType_PickUpGlobalDataTable = 1,
	EDataTableType_PickUpGlobalIDAndWrapperDataTable = 2,
	EDataTableType_WeaponDataTable = 3,
	EDataTableType_PlayerEquipmentDataTable = 4,
	EDataTableType_WeaponComponentDataTable = 5,
	EDataTableType_ConsumeItemDataTable = 6,
	EDataTableType_AkEventDataTable = 7,
	EDataTableType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.ESurvivePickUpType
enum class ESurvivePickUpType : uint8 {
	SPUT_RifileGun = 0,
	SPUT_SubmachineGun = 1,
	SPUT_SniperGun = 2,
	SPUT_Shotgun = 3,
	SPUT_Pistol = 4,
	SPUT_Helmet = 5,
	SPUT_Chest = 6,
	SPUT_Scop = 7,
	SPUT_Bandage = 8,
	SPUT_MedicalBag = 9,
	SPUT_MedicalBox = 10,
	SPUT_EnegyDrink = 11,
	SPUT_PainKillerPills = 12,
	SPUT_Adrenaline = 13,
	SPUT_MAX = 14
};

// Object Name: Enum ShadowTrackerExtra.ESurvivePickUpCategory
enum class ESurvivePickUpCategory : uint8 {
	SPUC_MainShootWeapon = 0,
	SPUC_SubShootWeapon = 1,
	SPUC_MeleWeapon = 2,
	SPUC_Prop = 3,
	SPUC_PlayerEquipment = 4,
	SPUC_WeaponComponent = 5,
	SPUC_ConsumeItem = 6,
	SPUC_Other = 7,
	SPUC_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EPostEffectBlendType
enum class EPostEffectBlendType : uint8 {
	PEBT_ScanBomb = 0,
	PEBT_DeadGray = 1,
	PEBT_PropOutline = 2,
	PEBT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPlayerBodyPartType
enum class EPlayerBodyPartType : uint8 {
	PBPT_Head = 0,
	PBPT_LeftArm = 1,
	PBPT_RightArm = 2,
	PBPT_LeftLeg = 3,
	PBPT_RightLeg = 4,
	PBPT_Body = 5,
	PBPT_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EWeaponSlot
enum class EWeaponSlot : uint8 {
	Primary = 0,
	Secondary = 1,
	Pistol = 2,
	EWeaponSlot_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPointTriggerNetMode
enum class EPointTriggerNetMode : uint8 {
	Standalone = 0,
	DedicatedServer = 1,
	ListenServer = 2,
	Client = 3,
	EPointTriggerNetMode_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EPVEProjectileDamageTiming
enum class EPVEProjectileDamageTiming : uint8 {
	DamageWhenExplode = 0,
	DamageWhenImpact = 1,
	EPVEProjectileDamageTiming_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EPVEProjectileLaunchStrategy
enum class EPVEProjectileLaunchStrategy : uint8 {
	DirectShot = 0,
	Parabolic = 1,
	MaxRange = 2,
	EPVEProjectileLaunchStrategy_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPVSGameModeModType
enum class EPVSGameModeModType : uint8 {
	Uninitialize = 0,
	Modded = 1,
	BaseMod = 2,
	EPVSGameModeModType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EQuickSignSubType
enum class EQuickSignSubType : uint8 {
	Invalid = 0,
	SomebodyCame = 1,
	AttackPos = 2,
	DefencePos = 3,
	AssemblePos = 4,
	NeedAmmo = 5,
	NeedAttachment = 6,
	ComeInVehicle = 7,
	NeedMedicine = 8,
	MarkVehicle = 9,
	MarkOpenDoor = 10,
	MarkAirDrop = 11,
	MarkDeadBox = 12,
	MarkSupply = 13,
	MarkPos = 14,
	Dangerous = 15,
	MarkPosSafeZone = 16,
	NeedMuzzle = 17,
	_MAX = 18,
	EQuickSignSubType_MAX = 19
};

// Object Name: Enum ShadowTrackerExtra.EQuickSignType
enum class EQuickSignType : uint8 {
	Cancle = 255,
	Attack = 7,
	Defence = 0,
	Assemble = 1,
	NeedAmmo = 2,
	NeedAttachment = 3,
	ComeInVehicle = 4,
	NeedMedicine = 5,
	SomebodyCame = 6,
	Attention = 8,
	MarkPos = 9,
	MarkPosSafeZone = 10,
	NeedSlot = 11,
	ResRoger = 50,
	ResComing = 51,
	ResIWant = 52,
	EQuickSignType_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.EMarkItemType
enum class EMarkItemType : uint8 {
	EIT_Hide = 0,
	EIT_InScreen = 1,
	EIT_OutScreen = 2,
	EIT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMoveType
enum class EMoveType : uint8 {
	EMoveState_Forward = 1,
	EMoveState_Left = 2,
	EMoveState_Right = 3,
	EMoveState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ERecorderType
enum class ERecorderType : uint8 {
	ERT_None = 0,
	ERT_Character = 1,
	ERT_Vehicle = 2,
	ERT_Weapon = 3,
	ERT_Game = 4,
	ERT_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ERelationshipWithTarget
enum class ERelationshipWithTarget : uint8 {
	ERelationshipWithTarget_Default = 0,
	ERelationshipWithTarget_Self = 1,
	ERelationshipWithTarget_Teammate = 2,
	ERelationshipWithTarget_Enemy = 3,
	ERelationshipWithTarget_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulKeepState
enum class EWonderfulKeepState : uint8 {
	EWonderfulKeepState_None = 0,
	EWonderfulKeepState_WaitFor = 1,
	EWonderfulKeepState_Failed = 2,
	EWonderfulKeepState_Success = 3,
	EWonderfulKeepState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDeathErrorCode
enum class EDeathErrorCode : uint8 {
	EDeathErrorCode_None = 0,
	EDeathErrorCode_FileNameError = 1,
	EDeathErrorCode_FileNotExist = 2,
	EDeathErrorCode_LoadFileError = 3,
	EDeathErrorCode_SerializeError = 4,
	EDeathErrorCode_InPlayState = 5,
	EDeathErrorCode_NullPtr = 6,
	EDeathErrorCode_UnCompressError = 7,
	EDeathErrorCode_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulErrorCode
enum class EWonderfulErrorCode : uint8 {
	EWonderfulErrorCode_None = 0,
	EWonderfulErrorCode_FileNameError = 1,
	EWonderfulErrorCode_FileNotExist = 2,
	EWonderfulErrorCode_LoadFileError = 3,
	EWonderfulErrorCode_SerializeError = 4,
	EWonderfulErrorCode_InPlayState = 5,
	EWonderfulErrorCode_NullPtr = 6,
	EWonderfulErrorCode_UncompressError = 7,
	EWonderfulErrorCode_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EDemoType
enum class EDemoType : uint8 {
	EDemoType_None = 0,
	EDemoType_Server = 1,
	EDemoType_Client = 2,
	EDemoType_Wonderful = 3,
	EDemoType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ERollState
enum class ERollState : uint8 {
	None = 0,
	Rolling = 1,
	Picking = 2,
	ERollState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EShootTimeDataTransType
enum class EShootTimeDataTransType : uint8 {
	ESTDT_None = 0,
	ESTDT_DynamicFloor = 1,
	ESTDT_VehicleWeapon = 2,
	ESTDT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETraceShootType
enum class ETraceShootType : uint8 {
	EST_NONE = 0,
	EST_CAMERA = 1,
	EST_AIM = 2,
	EST_FOLD = 3,
	EST_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESAutoScrollTextMode
enum class ESAutoScrollTextMode : uint8 {
	LeftToRight = 0,
	PingPong = 1,
	ESAutoScrollTextMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAppearanceNetLimit
enum class EAppearanceNetLimit : uint8 {
	AllClients = 0,
	LocalControllerOnly = 1,
	NonLocalControllersOnly = 2,
	LocalControllerAndSpectators = 3,
	NonLocalControllersAndSpectators = 4,
	Default = 5,
	EAppearanceNetLimit_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EEnvironmentType
enum class EEnvironmentType : uint8 {
	None = 0,
	Rainy = 1,
	Snowy = 2,
	Blizzard = 3,
	SandStorm = 4,
	Max = 5
};

// Object Name: Enum ShadowTrackerExtra.EScreenRotationMarkValueStatue
enum class EScreenRotationMarkValueStatue : uint8 {
	ESRMVS_Close = 0,
	ESRMVS_Show = 1,
	ESRMVS_Hide = 2,
	ESRMVS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETargetBodyType
enum class ETargetBodyType : uint8 {
	Head1 = 31,
	Head2 = 32,
	Body1 = 33,
	Body2 = 34,
	Body3 = 35,
	ETargetBodyType_MAX = 36
};

// Object Name: Enum ShadowTrackerExtra.EWeaponVeiryIgnore
enum class EWeaponVeiryIgnore : uint8 {
	None = 0,
	WVI_HitCheck = 1,
	EWeaponVeiryIgnore_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EHelicopterState
enum class EHelicopterState : uint8 {
	EHelicopterState_Idle = 0,
	EHelicopterState_FlyInReady = 1,
	EHelicopterState_FlyInFight = 2,
	EHelicopterState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ERayMoveType
enum class ERayMoveType : uint8 {
	None = 0,
	Forward = 1,
	Left = 2,
	Right = 3,
	YawHoming = 4,
	ERayMoveType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EOverrideAutoPickUp
enum class EOverrideAutoPickUp : uint8 {
	Invalid = 0,
	Enable = 1,
	Disable = 2,
	EOverrideAutoPickUp_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESkirtSpecialPoseType
enum class ESkirtSpecialPoseType : uint8 {
	ESpecialSkirtPose_None = 0,
	ESpecialSkirtPose_Diving = 1,
	ESpecialSkirtPose_Aircraft = 2,
	ESpecialSkirtPose_ExclusiveAircraft = 3,
	ESpecialSkirtPose_SpecialIdle = 4,
	ESpecialSkirtPose_WeaponClothIdle = 5,
	ESpecialSkirtPose_SpecialMove = 6,
	ESpecialSkirtPose_Type7 = 7,
	ESpecialSkirtPose_Type8 = 8,
	ESpecialSkirtPose_Type9 = 9,
	ESpecialSkirtPose_Type10 = 10,
	ESpecialSkirtPose_Type11 = 11,
	ESpecialSkirtPose_Type12 = 12,
	ESpecialSkirtPose_Type13 = 13,
	ESpecialSkirtPose_Type14 = 14,
	ESpecialSkirtPose_Type15 = 15,
	ESpecialSkirtPose_MAX = 16
};

// Object Name: Enum ShadowTrackerExtra.ESkirtPoseType
enum class ESkirtPoseType : uint8 {
	ESkirtPose_Lobby = 0,
	ESkirtPose_Stand = 1,
	ESkirtPose_Crouch = 2,
	ESkirtPose_Prone = 3,
	ESkirtPose_InVehicle = 4,
	ESkirtPose_Swim = 5,
	ESkirtPose_Parachute = 6,
	ESkirtPose_NoSim = 7,
	ESkirtPose_LobbyCorrectSkMesh = 8,
	ESkirtPose_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.ESkirtAnimSpecialEquipmentType
enum class ESkirtAnimSpecialEquipmentType : uint8 {
	ESpecialEquipmentType_None = 0,
	ESpecialEquipmentType_2 = 1,
	ESpecialEquipmentType_3 = 2,
	ESpecialEquipmentType_4 = 3,
	ESpecialEquipmentType_5 = 4,
	ESpecialEquipmentType_6 = 5,
	ESpecialEquipmentType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.ELoopMoveMode
enum class ELoopMoveMode : uint8 {
	ELoopMoveMode_None = 0,
	ELoopMoveMode_NoLoop = 1,
	ELoopMoveMode_Forward = 2,
	ELoopMoveMode_Back = 3,
	ELoopMoveMode_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EIslandDuelResult
enum class EIslandDuelResult : uint8 {
	State_Win = 0,
	State_Fail = 1,
	State_Tie = 2,
	State_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EIslandDuelReqResponse
enum class EIslandDuelReqResponse : uint8 {
	IDF_Access = 0,
	IDF_Refuse = 1,
	IDF_SettingNotAllow = 2,
	IDS_SelfStateNotAllow = 3,
	IDS_TargetStateNoAllow = 4,
	EIslandDuelReqResponse_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EIslandBattleState
enum class EIslandBattleState : uint8 {
	BattleState_NONE = 0,
	BattleState_PreEnter = 1,
	BattleState_ENTER = 2,
	BattleState_Ready = 3,
	BattleState_Fight = 4,
	BattleState_Settle = 5,
	BattleState_Arrive = 6,
	BattleState_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EIslandDuelState
enum class EIslandDuelState : uint8 {
	State_NONE = 0,
	State_Ready = 1,
	State_Fight = 2,
	State_OutArea = 3,
	State_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EIslandInteractiveStateType
enum class EIslandInteractiveStateType : uint8 {
	IST_None = 0,
	IST_Seat = 1,
	IST_Duel = 2,
	IST_Emote = 3,
	IST_Duck = 4,
	IST_ShootPractice = 5,
	IST_Battle = 6,
	IST_Swing = 7,
	IST_MusicGame = 8,
	IST_Racing = 9,
	IST_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.EHawkEyeFreeCamOperateType
enum class EHawkEyeFreeCamOperateType : uint8 {
	None = 0,
	Enter = 1,
	Leave = 2,
	ChangeLength = 3,
	Update = 4,
	EHawkEyeFreeCamOperateType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EST3DNavigationQueryStatus
enum class EST3DNavigationQueryStatus : uint8 {
	Unscheduled = 0,
	InProgress = 1,
	Succeeded = 2,
	Failed = 3,
	EST3DNavigationQueryStatus_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EST3DNavigationCookFlag
enum class EST3DNavigationCookFlag : uint8 {
	CookedJPSPreTable = 0,
	CookedJPSForcedNeighbors = 1,
	EST3DNavigationCookFlag_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EST3DNavigationGenerationType
enum class EST3DNavigationGenerationType : uint8 {
	Static = 0,
	Dynamic = 1,
	EST3DNavigationGenerationType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EST3DNavigationSearchAlgorithm
enum class EST3DNavigationSearchAlgorithm : uint8 {
	AStar = 0,
	JPS = 1,
	JPSPlus = 2,
	EST3DNavigationSearchAlgorithm_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EST3DNavigationLocProjectStrategy
enum class EST3DNavigationLocProjectStrategy : uint8 {
	AdjustLocByMoveUp = 0,
	EST3DNavigationLocProjectStrategy_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EST3DNavigationPathfindingPartialStrategy
enum class EST3DNavigationPathfindingPartialStrategy : uint8 {
	AdjustTargetByMoveUp = 0,
	EST3DNavigationPathfindingPartialStrategy_MAX = 1
};

// Object Name: Enum ShadowTrackerExtra.EAnimalState
enum class EAnimalState : uint8 {
	Idle = 0,
	Idle_Arder = 1,
	Walk = 2,
	Trot = 9,
	Run = 3,
	Jump = 4,
	Watch = 5,
	Dead = 6,
	Scare = 7,
	Fighting = 8,
	Fear = 10,
	Cute = 11,
	RandomIdle = 12,
	Max = 13
};

// Object Name: Enum ShadowTrackerExtra.EAnimalType
enum class EAnimalType : uint8 {
	NONE = 0,
	CHICKEN = 1,
	DEER = 2,
	ROE_DEER = 3,
	RABBIT = 4,
	GOBLIN = 5,
	ICE = 6,
	EAnimalType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EEffectSpreadState
enum class EEffectSpreadState : uint8 {
	ESS_InitialTrace = 0,
	ESS_InitialProcess = 1,
	ESS_Spreading = 2,
	ESS_SpreadDone = 3,
	ESS_Ending = 4,
	ESS_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ECharacterLeaderMoveType
enum class ECharacterLeaderMoveType : uint8 {
	Auto_Move = 0,
	ControlByJoyTick = 1,
	Max_None = 2,
	ECharacterLeaderMoveType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDynamicSimpleQueryConfigDisableMask
enum class EDynamicSimpleQueryConfigDisableMask : uint8 {
	None = 0,
	Bit0 = 1,
	Bit1 = 2,
	Bit2 = 4,
	Bit3 = 8,
	Bit4 = 16,
	Bit5 = 32,
	Bit6 = 64,
	Bit7 = 128,
	EDynamicSimpleQueryConfigDisableMask_MAX = 129
};

// Object Name: Enum ShadowTrackerExtra.ESimulateLODProfile
enum class ESimulateLODProfile : uint8 {
	Standard = 0,
	Aggressive = 1,
	ESimulateLODProfile_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EDirectMoveType
enum class EDirectMoveType : uint8 {
	DirectMoveType_NoFixDestination = 0,
	DirectMoveType_NoFixSpeed = 1,
	DirectMoveType_NoFixTime = 2,
	DirectMoveType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPlayShovelSoundType
enum class EPlayShovelSoundType : uint8 {
	Shovel_Enter = 0,
	Shovel_Exit = 1,
	Shovel_Interrupt = 2,
	Shovel_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EClothAnimBPType
enum class EClothAnimBPType : uint8 {
	EClothAnimBP_None = 0,
	EClothAnimBP_Lobby = 1,
	EClothAnimBP_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.ESTCrowdSimulationState
enum class ESTCrowdSimulationState : uint8 {
	Enabled = 0,
	ObstacleOnly = 1,
	Disabled = 2,
	ESTCrowdSimulationState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EActorCacheID
enum class EActorCacheID : uint8 {
	ACID_Bullet = 0,
	ACID_BulletImpactEffect = 1,
	ACID_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESTCharacterType
enum class ESTCharacterType : uint8 {
	MLAI1 = 1,
	MLAI2 = 2,
	NormalAI = 3,
	RearPlayer = 4,
	SimpleCharacter = 5,
	None = 6,
	ESTCharacterType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.ESTEScopeState
enum class ESTEScopeState : uint8 {
	ScopeOut = 0,
	ScopeIn = 1,
	ESTEScopeState_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponOverrideSoundVisibleRange
enum class EWeaponOverrideSoundVisibleRange : uint8 {
	RangeNone = 0,
	RangeTeammate = 1,
	RangeSelf = 2,
	RangeAll = 3,
	EWeaponOverrideSoundVisibleRange_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeaponOverrideSoundType
enum class EWeaponOverrideSoundType : uint8 {
	Shoot = 0,
	Shoot_ModeB = 1,
	HeadShotHit = 2,
	EquipWeapon = 3,
	UnequipWeapon = 4,
	MagazineIn = 5,
	MagazineOut = 6,
	HeadShotHitHelmet = 7,
	EWeaponOverrideSoundType_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EReleaseToFireType
enum class EReleaseToFireType : uint8 {
	RELEASEFIRE_NONE = 0,
	RELEASEFIRE_SHOTGUN = 1,
	RELEASEFIRE_SNIPER = 2,
	RELEASEFIRE_BRUST = 3,
	RELEASEFIRE_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWeaponReloadRet
enum class EWeaponReloadRet : uint8 {
	Scucess = 0,
	FailedCommon = 1,
	FailedAsynFireRequest = 2,
	EWeaponReloadRet_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ShootWeaponAnimType
enum class ShootWeaponAnimType : uint8 {
	SWAT_Shoot = 0,
	SWAT_NoneShoot = 1,
	SWAT_Reload = 2,
	SWAT_IdleToNoneIdle = 3,
	SWAT_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESTEWeaponHoldType
enum class ESTEWeaponHoldType : uint8 {
	Hand = 0,
	Rifle = 1,
	Pistol = 2,
	Melee = 3,
	ESTEWeaponHoldType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAnimCurvedCameraMask
enum class EAnimCurvedCameraMask : uint8 {
	EACCM_SubInstance = 0,
	EACCM_Skill = 1,
	EACCM_Locomotion = 2,
	EACCM_SpecialMove = 3,
	EACCM_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EAnimBPType
enum class EAnimBPType : uint8 {
	EAnimBP_None = 0,
	EAnimBP_Vehicle = 1,
	EAnimBP_TPP = 2,
	EAnimBP_FPP = 3,
	EAnimBP_Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EMainCharMontagePlayType
enum class EMainCharMontagePlayType : uint8 {
	EMainCharMontagePlay_All = 0,
	EMainCharMontagePlay_TPP = 1,
	EMainCharMontagePlay_FPP = 2,
	EMainCharMontagePlay_TPPVeh = 3,
	EMainCharMontagePlay_FPPVeh = 4,
	EMainCharMontagePlay_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EPlayEmoteSubState
enum class EPlayEmoteSubState : uint8 {
	EPlayEmoteSubState_None = 0,
	EPlayEmoteSubState_RealEmote = 1,
	EPlayEmoteSubState_ChangeWearing = 2,
	EPlayEmoteSubState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECustomMoveModeType
enum class ECustomMoveModeType : uint8 {
	ECustomMoveMode_None = 0,
	ECustomMoveMode_Hang = 1,
	ECustomMoveMode_Vault = 2,
	ECustomMoveMode_Shovel = 3,
	ECustomMoveMode_SkillAttach = 4,
	ECustomMoveMode_Max = 5
};

// Object Name: Enum ShadowTrackerExtra.EPlayerHurtAnimType
enum class EPlayerHurtAnimType : uint8 {
	EPlayerHurtAnim_None = 0,
	EPlayerHurtAnim_Point = 1,
	EPlayerHurtAnim_Melee = 2,
	EPlayerHurtAnim_Max = 3
};

// Object Name: Enum ShadowTrackerExtra.ELeftUIInfoRecordType
enum class ELeftUIInfoRecordType : uint8 {
	FatalDamage = 0,
	PhaseInformation = 1,
	KillKingInfo = 2,
	ELeftUIInfoRecordType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EBuffApplierCondition
enum class EBuffApplierCondition : uint8 {
	BuffAppConditio_Ignore = 0,
	BuffAppCondition_IsZombie = 1,
	BuffAppCondition_InSight = 2,
	BuffAppCondition_InnerRange = 3,
	BuffAppConditio_Default = 4,
	BuffAppCondition_InSightAndPawnHaveAtrr = 5,
	EBuffApplierCondition_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EDollAirBalloonState
enum class EDollAirBalloonState : uint8 {
	EDollAirBalloon_EmptyAir = 0,
	EDollAirBalloon_Blowing = 1,
	EDollAirBalloon_Idle = 2,
	EDollAirBalloon_Flying = 3,
	EDollAirBalloon_Falling = 4,
	EDollAirBalloon_None = 5,
	EDollAirBalloon_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EGameMap
enum class EGameMap : uint8 {
	NoMap = 0,
	SurviveRoot = 1,
	SurviveTestRoot = 2,
	SurviveRCity = 3,
	EGameMap_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ERollStateType
enum class ERollStateType : uint8 {
	EState_None = 0,
	EState_ChangeRoll = 1,
	EState_RecoverRoll = 2,
	EState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPitchStateType
enum class EPitchStateType : uint8 {
	EState_None = 0,
	EState_ChangePitch = 1,
	EState_RecoverPitch = 2,
	EState_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraManagerInitPhase
enum class ESTExtraManagerInitPhase : uint8 {
	ManagerInitPhase_PostInitializeComponent = 0,
	ManagerInitPhase_PostBeginPlay = 1,
	ManagerInitPhase_Manual = 2,
	ManagerInitPhase_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraManagerType
enum class ESTExtraManagerType : uint8 {
	ManagerType_BinaryData = 0,
	ManagerType_GameParameter = 1,
	ManagerType_Asset = 2,
	ManagerType_Pool = 3,
	ManagerType_Instance = 4,
	ManagerType_Object = 5,
	ManagerType_ObjectState = 6,
	ManagerType_ActorData = 7,
	ManagerType_GridLevels = 8,
	ManagerType_Streaming = 9,
	ManagerType_SoftComponent = 10,
	ManagerType_ModDataCheck = 11,
	ManagerType_Navigation = 12,
	ManagerType_Physics = 13,
	ManagerType_SceneQuery = 14,
	ManagerType_CustomParameter = 15,
	ManagerType_Group = 16,
	ManagerType_Load = 17,
	ManagerType_AdaptiveScheduling = 18,
	ManagerType_Spawn = 19,
	ManagerType_WebSocket = 20,
	ManagerType_OfflineBuild = 21,
	ManagerType_CreativeWoW = 22,
	ManagerType_API = 23,
	ManagerType_LuaVMM = 24,
	ManagerType_LuaSignal = 25,
	ManagerType_Code = 26,
	ManagerType_BlockyLua = 27,
	ManagerType_CreativeTrait = 28,
	ManagerType_CreativeEntity = 29,
	ManagerType_CreativePerf = 30,
	ManagerType_OctreeSync = 31,
	ManagerType_CreativeTask = 32,
	ManagerType_AICGAudio = 33,
	ManagerType_CustomActor = 34,
	ManagerType_ParentChild = 35,
	ManagerType_CreativeLuaAnimGraph = 36,
	ManagerType_Max = 37
};

// Object Name: Enum ShadowTrackerExtra.EPlayerOperation
enum class EPlayerOperation : uint8 {
	None = 0,
	Parachute = 1,
	Shooting = 2,
	Driving = 3,
	EPlayerOperation_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EMapType
enum class EMapType : uint8 {
	ENTIREMAP = 0,
	MINIMAP = 1,
	EMapType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EMonsterFuncType
enum class EMonsterFuncType : int32 {
	AutoExit = 1,
	BigBody = 2,
	MaxFuncType = 1024,
	EMonsterFuncType_MAX = 1025
};

// Object Name: Enum ShadowTrackerExtra.ENetBunchQueueSpawnInterval
enum class ENetBunchQueueSpawnInterval : uint8 {
	NFramesLater = 0,
	NSecondsLater = 1,
	NextFrame = 2,
	ENetBunchQueueSpawnInterval_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ENetBunchQueueSpawnStrategy
enum class ENetBunchQueueSpawnStrategy : uint8 {
	PerTypeSpawnN = 0,
	PerTypeTimeLimit = 1,
	ENetBunchQueueSpawnStrategy_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ENetBunchQueueTopStrategy
enum class ENetBunchQueueTopStrategy : uint8 {
	Disabled = 0,
	QueueWhenOutOfView = 1,
	AlwaysQueue = 2,
	ENetBunchQueueTopStrategy_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ENewBuffApplierCondition
enum class ENewBuffApplierCondition : uint8 {
	NewBuffAppCondition_IsZombie = 0,
	NewBuffAppCondition_InSight = 1,
	NewBuffAppCondition_InnerRange = 2,
	NewBuffAppConditio_Default = 3,
	BuffAppConditio_Teammate = 4,
	ENewBuffApplierCondition_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESpectatorPetStateMoveSubType
enum class ESpectatorPetStateMoveSubType : uint8 {
	None = 0,
	Move = 1,
	ESpectatorPetStateMoveSubType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESpectatorPetStateMsgType
enum class ESpectatorPetStateMsgType : uint8 {
	SpectatorPetMsgIdle = 0,
	SpectatorPetMsgWalk = 1,
	SpectatorPetMsgSwimming = 2,
	SpectatorPetMsgFalling = 3,
	SpectatorPetMsgJump = 4,
	SpectatorPetMsgPlayEmoteMotage = 5,
	ESpectatorPetStateMsgType_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EObserveFailedReason
enum class EObserveFailedReason : uint8 {
	EObserveFailedReason_Default = 0,
	EObserveFailedReason_CanSelfRevival = 1,
	EObserveFailedReason_KickedFromGame = 2,
	EObserveFailedReason_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehicleControlType
enum class EVehicleControlType : uint8 {
	EVCType_Buttons = 3,
	EVCType_SingleJoystick = 2,
	EVCType_FullJoystick = 1,
	EVCType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EVirtualJoystickState
enum class EVirtualJoystickState : uint8 {
	EVJS_None = 0,
	EVJS_Left = 1,
	EVJS_Right = 2,
	EVJS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EApplyStatus
enum class EApplyStatus : int32 {
	REVERT = -1,
	NO_APPLY = 0,
	Apply = 1,
	EApplyStatus_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ELoadMode
enum class ELoadMode : uint8 {
	LOW_LOAD = 1,
	MEDIUM_LOAD = 2,
	HIGH_LOAD = 3,
	ELoadMode_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ETeammateHurtType
enum class ETeammateHurtType : uint8 {
	None = 0,
	Kill = 1,
	KnockOut = 2,
	Mix = 3,
	Max = 4
};

// Object Name: Enum ShadowTrackerExtra.ENetRelevantType
enum class ENetRelevantType : uint8 {
	ENetRelevantType_All = 0,
	ENetRelevantType_Teammates = 1,
	ENetRelevantType_OwnerOnly = 2,
	ENetRelevantType_None = 3,
	ENetRelevantType_Max = 4
};

// Object Name: Enum ShadowTrackerExtra.ESpawnType
enum class ESpawnType : uint8 {
	Single = 0,
	ContinuousOnTimer = 1,
	ContinuousOnDeath = 2,
	ESpawnType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESyncBuildState
enum class ESyncBuildState : uint8 {
	SyncBuild_None = 0,
	SyncBuild_Building = 1,
	SyncBuild_Finish = 2,
	SyncBuild_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPassengerWeaponTypeOldBP
enum class EPassengerWeaponTypeOldBP : uint8 {
	UnarmedOldBP = 0,
	GunOldBP = 1,
	MeleeOldBP = 2,
	ThrowOldBP = 3,
	EPassengerWeaponTypeOldBP_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EVehAnimAssetType
enum class EVehAnimAssetType : uint8 {
	EVehAssetType_Sequence = 0,
	EVehAssetType_BlendSpace = 1,
	EVehAssetType_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleWeaponParentType
enum class EVehicleWeaponParentType : uint8 {
	MainWeapon = 0,
	Hull = 255,
	EVehicleWeaponParentType_MAX = 256
};

// Object Name: Enum ShadowTrackerExtra.EVehicleWeaponType
enum class EVehicleWeaponType : uint8 {
	MainWeapon = 0,
	SecondaryWeapon = 1,
	EVehicleWeaponType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponHiddenMask
enum class EWeaponHiddenMask : uint8 {
	WeaponHiddenMask0 = 0,
	WeaponHiddenMask1 = 1,
	WeaponHiddenMask2 = 2,
	WeaponHiddenMask3 = 3,
	WeaponHiddenMask4 = 4,
	WeaponHiddenMask5 = 5,
	WeaponHiddenMask6 = 6,
	WeaponHiddenMask7 = 7,
	EWeaponHiddenMask_MAX = 8
};

// Object Name: Enum ShadowTrackerExtra.EHiarAnimBPType
enum class EHiarAnimBPType : uint8 {
	EHairAnimBP_None = 0,
	EHairAnimBP_Lobby = 1,
	EHairAnimBP_Max = 2
};

// Object Name: Enum ShadowTrackerExtra.ESTProjectileTaskEndType
enum class ESTProjectileTaskEndType : uint8 {
	StartStateFinish = 0,
	CustomStateFinish = 1,
	CustomStateBegin = 2,
	Custom = 3,
	ESTProjectileTaskEndType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EPlatformDeviceLevel
enum class EPlatformDeviceLevel : uint8 {
	PlatformDeviceLevel_Low = 0,
	PlatformDeviceLevel_Middle = 1,
	PlatformDeviceLevel_Hight = 2,
	PlatformDeviceLevel_None = 3,
	PlatformDeviceLevel_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESearchControlOp
enum class ESearchControlOp : uint8 {
	ApplyRule = 0,
	CancelRule = 1,
	PauseRuleByTag = 2,
	ResumeRuleByTag = 3,
	ResetResultByTag = 4,
	ImmediatelyTriggerByTag = 5,
	ResetTickTimeByTag = 6,
	ESearchControlOp_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.ESurfBoardState
enum class ESurfBoardState : uint8 {
	ESBS_InWater = 0,
	ESBS_FLYING0 = 1,
	ESBS_FLYING1 = 2,
	ESBS_FLYING2 = 3,
	ESBS_FALLING = 4,
	ESBS_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EHitPerformColorType
enum class EHitPerformColorType : uint8 {
	EHitPerformColor_Body = 0,
	EHitPerformColor_Head = 1,
	EHitPerformColor_Dying = 2,
	EHitPerformColor_Death = 3,
	EHitPerformColor_Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EHUDCrossHairType
enum class EHUDCrossHairType : uint8 {
	EHUDCrossHair_Init = 0,
	EHUDCrossHair_None1 = 1,
	EHUDCrossHair_None2 = 2,
	EHUDCrossHair_None3 = 3,
	EHUDCrossHair_None4 = 4,
	EHUDCrossHair_None5 = 5,
	EHUDCrossHair_None6 = 6,
	EHUDCrossHair_None7 = 7,
	EHUDCrossHair_Type1 = 100,
	EHUDCrossHair_Type2 = 101,
	EHUDCrossHair_Type3 = 102,
	EHUDCrossHair_Type4 = 103,
	EHUDCrossHair_Type5 = 104,
	EHUDCrossHair_Max = 105
};

// Object Name: Enum ShadowTrackerExtra.ETextVertPos
enum class ETextVertPos : uint8 {
	Top = 0,
	Center = 1,
	Bottom = 2,
	MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETextHorzPos
enum class ETextHorzPos : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EDivingDownStatusType
enum class EDivingDownStatusType : uint8 {
	None = 0,
	DivingDownBegin = 1,
	DivingDown = 2,
	DivingDownEnd = 3,
	EDivingDownStatusType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDivingUpStatusType
enum class EDivingUpStatusType : uint8 {
	None = 0,
	DivingUpBegin = 1,
	DivingUp = 2,
	DivingUpEnd = 3,
	EDivingUpStatusType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDivingMStateType
enum class EDivingMStateType : uint8 {
	None = 0,
	DivingEnter = 1,
	Diving = 2,
	DivingExit = 3,
	EDivingMStateType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EDivingToWaterCityStyle
enum class EDivingToWaterCityStyle : uint8 {
	None = 0,
	DownFace = 1,
	SideFace = 2,
	EDivingToWaterCityStyle_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ECharOperationType
enum class ECharOperationType : uint8 {
	OpMove = 0,
	OpSprint = 1,
	OpJump = 2,
	OpInvalidEnum = 3,
	ECharOperationType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EOperationRunResult
enum class EOperationRunResult : uint8 {
	OpRunning = 0,
	OpSuccess = 1,
	OpAutoFinish = 2,
	OpFail = 3,
	OpNotStarted = 4,
	EOperationRunResult_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ECustomTickRoleType
enum class ECustomTickRoleType : uint8 {
	ECTR_All = 0,
	ECTR_Simulated = 1,
	ECTR_Autonomous = 2,
	ECTR_Authority = 4,
	ECTR_SimulatedAndAutonomous = 3,
	ECTR_SimulatedAndAuthority = 5,
	ECTR_AutonomousAndAuthority = 6,
	ECTR_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.ECustomTickType
enum class ECustomTickType : uint8 {
	ComponentTick = 1,
	OwnerTick = 2,
	ECustomTickType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETlogZoneType
enum class ETlogZoneType : uint8 {
	Blue = 0,
	White = 1,
	Red = 2,
	Safe = 3,
	ETlogZoneType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ETlogEventType
enum class ETlogEventType : uint8 {
	Kill = 0,
	Knock = 1,
	AirdropSpawn = 2,
	AirdropLand = 3,
	MAX = 255
};

// Object Name: Enum ShadowTrackerExtra.ETlogFramePlayerField
enum class ETlogFramePlayerField : uint8 {
	None = 0,
	Position = 1,
	Health = 2,
	Alive = 4,
	Kills = 8,
	ETlogFramePlayerField_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EAmphibiousState
enum class EAmphibiousState : uint8 {
	OnLand = 0,
	InWater = 1,
	EAmphibiousState_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ETrackType
enum class ETrackType : uint8 {
	Left = 0,
	Right = 1,
	NumTracks = 2,
	ETrackType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETrailMarkType
enum class ETrailMarkType : uint8 {
	Normal = 0,
	Slipping = 1,
	Broken = 2,
	ETrailMarkType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ETransformFailReason
enum class ETransformFailReason : uint8 {
	Cooldown = 0,
	NotEnoughSpace = 1,
	WrongState = 2,
	CastingSkill = 3,
	Firing = 4,
	ETransformFailReason_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ETransformAnimType
enum class ETransformAnimType : uint8 {
	InPlace = 0,
	Moving = 1,
	ETransformAnimType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESpawnItemFunction
enum class ESpawnItemFunction : uint8 {
	ESpawnItemFunction_GenerateMonster = 1,
	ESpawnItemFunction_GeneratePickup = 2,
	ESpawnItemFunction_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EExpressType
enum class EExpressType : uint8 {
	EExpressType_Invalid = 0,
	EExpressType_Werewolf = 1,
	EExpressType_Drone = 2,
	EExpressType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EMultiButtonType
enum class EMultiButtonType : uint8 {
	None = 0,
	Click = 1,
	Hold = 2,
	Multi = 3,
	EMultiButtonType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESkill3CPosePreset
enum class ESkill3CPosePreset : uint8 {
	Stand = 0,
	StandOrCrouch = 1,
	StandCrouchProne = 2,
	Custom = 3,
	ESkill3CPosePreset_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESkill3CViewPreset
enum class ESkill3CViewPreset : uint8 {
	AnyView = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	Custom = 3,
	ESkill3CViewPreset_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESkill3CWeaponPreset
enum class ESkill3CWeaponPreset : uint8 {
	KeepWeapon = 0,
	ForceEmptyHands = 1,
	Custom = 2,
	ESkill3CWeaponPreset_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESkill3CPoseTarget
enum class ESkill3CPoseTarget : uint8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	StandOrCrouch = 3,
	ESkill3CPoseTarget_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESkill3CManualSwitchControl
enum class ESkill3CManualSwitchControl : uint8 {
	None = 0,
	DisableManualSwitch = 1,
	StopSkillOnManualSwitch = 2,
	ESkill3CManualSwitchControl_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESkill3CSwitchMode
enum class ESkill3CSwitchMode : uint8 {
	None = 0,
	WithRecover = 1,
	WithoutRecover = 2,
	ESkill3CSwitchMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EPickerFromBlackboard_DataType
enum class EPickerFromBlackboard_DataType : uint8 {
	Actor = 0,
	Circle = 1,
	ActorCircle = 2,
	EPickerFromBlackboard_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESkillPickerQueryType
enum class ESkillPickerQueryType : uint8 {
	SPQT_AllCharacter = 0,
	SPQT_BaseCharacter = 1,
	SPQT_SimpleCharacter = 2,
	SPQT_Vehicle = 3,
	SPQT_Teammate = 4,
	SPQT_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EUAECheckPawnState
enum class EUAECheckPawnState : uint8 {
	EUAECheckPawnState_Any = 0,
	EUAECheckPawnState_AnyNot = 1,
	EUAECheckPawnState_AnyOther = 2,
	EUAECheckPawnState_NotAnyOther = 3,
	EUAECheckPawnState_All = 4,
	EUAECheckPawnState_AllNot = 5,
	EUAECheckPawnState_MatchAll = 6,
	EUAECheckPawnState_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EUAECheckSkillTokenType
enum class EUAECheckSkillTokenType : uint8 {
	EUAECheckSkillTokenType_Any = 0,
	EUAECheckSkillTokenType_AnyNot = 1,
	EUAECheckSkillTokenType_All = 2,
	EUAECheckSkillTokenType_AllNot = 3,
	EUAECheckSkillTokenType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EUAECheckCastingSkillType
enum class EUAECheckCastingSkillType : uint8 {
	EUAECheckCastingSkillType_Any = 0,
	EUAECheckCastingSkillType_AnyNot = 1,
	EUAECheckCastingSkillType_All = 2,
	EUAECheckCastingSkillType_AllNot = 3,
	EUAECheckCastingSkillType_MatchAll = 4,
	EUAECheckCastingSkillType_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EShowSkillPromptReason
enum class EShowSkillPromptReason : uint8 {
	Show_S2CResponse = 0,
	Show_SkillAcion = 1,
	Show_ChangeWearing = 2,
	Hide_S2CResponse = 3,
	Hide_SkillAcion = 4,
	Hide_ChangeWearing = 5,
	Hide_SetViewTarget = 6,
	EShowSkillPromptReason_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EUAESkillCondition_BlackboardValueComparison
enum class EUAESkillCondition_BlackboardValueComparison : uint8 {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	Greater = 3,
	LessEqual = 4,
	GreaterEqual = 5,
	EUAESkillCondition_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EMovementDirection
enum class EMovementDirection : uint8 {
	EForward = 0,
	EBackward = 1,
	ELeft = 2,
	ERight = 3,
	EMovementDirection_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EVelocityChangeType
enum class EVelocityChangeType : uint8 {
	ESpeed_Up = 0,
	ESpeed_Down = 1,
	ESpeed_Both = 2,
	ESpeed_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.ESkillConditionCheckType
enum class ESkillConditionCheckType : uint8 {
	ECheck_Once = 0,
	ECheck_Continuous = 1,
	ECheck_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ERecoveryType
enum class ERecoveryType : uint8 {
	ERecovery_AddDirectly = 0,
	ERecovery_AddTo = 1,
	ERecovery_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EValueType
enum class EValueType : uint8 {
	EValueType_Percentage = 0,
	EValueType_Absolute = 1,
	EValueType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ESetType
enum class ESetType : uint8 {
	Set = 0,
	Plus = 1,
	Multiply = 2,
	ESetType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EOperatorType
enum class EOperatorType : uint8 {
	EOperator_Equal = 0,
	EOperator_Greater = 1,
	EOperator_Less = 2,
	EOperator_GreaterEqual = 3,
	EOperator_LessEqual = 4,
	EOperator_NotEqual = 5,
	EOperator_AbsGreater = 6,
	EOperator_AbsLess = 7,
	EOperator_AbsGreaterEqual = 8,
	EOperator_AbsLessEqual = 9,
	EOperator_MAX = 10
};

// Object Name: Enum ShadowTrackerExtra.ESLP_CrossHair_TraceType
enum class ESLP_CrossHair_TraceType : uint8 {
	ESLP_CrossHair_Line = 0,
	ESLP_CrossHair_Sphere = 1,
	ESLP_CrossHair_Box = 2,
	ESLP_CrossHair_Capsule = 3,
	ESLP_CrossHair_Fan = 4,
	ESLP_CrossHair_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ESLP_CrossHairVehicle_TraceType
enum class ESLP_CrossHairVehicle_TraceType : uint8 {
	ESLP_CrossHairVehicle_Line = 0,
	ESLP_CrossHairVehicle_Sphere = 1,
	ESLP_CrossHairVehicle_Box = 2,
	ESLP_CrossHairVehicle_Capsule = 3,
	ESLP_CrossHairVehicle_Fan = 4,
	ESLP_CrossHairVehicle_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.ELocationFilterIndoorRequire
enum class ELocationFilterIndoorRequire : uint8 {
	RequireIndoor = 0,
	RequireOutdoor = 1,
	ELocationFilterIndoorRequire_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.ECabrioletOpFailedType
enum class ECabrioletOpFailedType : uint8 {
	CannotClose = 0,
	IsPlaying = 1,
	ECabrioletOpFailedType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleDamageScaleReason
enum class EVehicleDamageScaleReason : uint8 {
	OnlyHasTeammate = 0,
	OnlyHasOther = 1,
	HasTeammateAndOthers = 2,
	EVehicleDamageScaleReason_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehicleEnergySupplyMethod
enum class EVehicleEnergySupplyMethod : uint8 {
	None = 0,
	EnergyPack = 1,
	EnergyStation = 2,
	Regenerate = 4,
	EVehicleEnergySupplyMethod_MAX = 5
};

// Object Name: Enum ShadowTrackerExtra.EVehicleEnergyType
enum class EVehicleEnergyType : uint8 {
	Gas = 0,
	Electric = 1,
	Stamina = 2,
	EnergyFree = 3,
	EVehicleEnergyType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ETankArmorType
enum class ETankArmorType : uint8 {
	Front = 0,
	Back = 1,
	Side = 2,
	TurretFront = 3,
	TurretBack = 4,
	TurretSide = 5,
	MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EVehicleDebugPage
enum class EVehicleDebugPage : uint8 {
	BasicPage = 0,
	WheelPage = 1,
	DriftPage = 2,
	AntiCheat = 3,
	ReplayPage = 4,
	NumPages = 5,
	EVehicleDebugPage_MAX = 6
};

// Object Name: Enum ShadowTrackerExtra.EEnterVehicleConditionIgnore
enum class EEnterVehicleConditionIgnore : uint8 {
	CollisionBlock = 1,
	EEnterVehicleConditionIgnore_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleChangeAvatarStatus
enum class EVehicleChangeAvatarStatus : uint8 {
	SUCCESS = 0,
	FAIL = 1,
	EVehicleChangeAvatarStatus_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleOpMode
enum class EVehicleOpMode : uint8 {
	SteeringWheel = 0,
	Joystick = 1,
	Button = 2,
	All = 3,
	EVehicleOpMode_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EVehicleWheelIndex
enum class EVehicleWheelIndex : uint8 {
	Wheel_FL = 0,
	Wheel_FR = 1,
	Wheel_BL = 2,
	Wheel_BR = 3,
	Wheel_Max = 4
};

// Object Name: Enum ShadowTrackerExtra.EVFNetSide
enum class EVFNetSide : uint8 {
	Server = 0,
	Client = 1,
	EVFNetSide_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVFComponentOpType
enum class EVFComponentOpType : uint8 {
	Add = 0,
	Remove = 1,
	EVFComponentOpType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleDriveTankControlMode
enum class EVehicleDriveTankControlMode : uint8 {
	STANDARD = 0,
	SPECIAL = 1,
	EVehicleDriveTankControlMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EVehicleSimLOD
enum class EVehicleSimLOD : uint8 {
	LOD0 = 0,
	LOD1 = 1,
	LOD2 = 2,
	MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EVehicleCorrectionReason
enum class EVehicleCorrectionReason : uint8 {
	None = 0,
	Protection_ResetTransform = 1,
	NotUseSyncAtClient = 2,
	IsInServerAuthorizeState = 3,
	IsTrailer = 4,
	CorrectionIDNotMatch = 5,
	StuntJumping = 6,
	TooFarAway = 7,
	TransformInvalid = 8,
	ClientVehicleIsInAir = 9,
	ServerVehicleIsInAir = 10,
	VelZInvalid_Strategy1 = 11,
	VelZInvalid_Strategy2 = 12,
	VelZInvalid_Strategy3 = 13,
	VelYInvalid_Strategy1 = 14,
	VelYInvalid_Strategy2 = 15,
	CannotEnterDrift_ClientSpeedTooLow = 16,
	CannotDrift_Destroyed = 17,
	CannotDrift_InWater = 18,
	CannotDrift_InAir = 19,
	CannotDrift_NoEnergy = 20,
	CannotDrift_HasDestroyedWheel = 21,
	CannotDrift_ServerDriftStageLeading = 22,
	CannotDrift_ClientSpeedTooHigh = 23,
	CannotDrift_ClientSpeedTooLow = 24,
	CannotDrift_VelZTooHigh = 25,
	CannotDrift_OmegaTooHigh = 26,
	CannotDrift_DriftAngleInverse = 27,
	CannotDrift_DriftAngleOutOfRange = 28,
	VelInvalid_MaxSpeed = 29,
	EVehicleCorrectionReason_MAX = 30
};

// Object Name: Enum ShadowTrackerExtra.EVehicleNetProtocol
enum class EVehicleNetProtocol : uint8 {
	Legacy = 0,
	Wheeled = 1,
	EVehicleNetProtocol_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EShootDriverCallInitType
enum class EShootDriverCallInitType : uint8 {
	SDCIT_OnRegister = 0,
	SDCIT_PostLuaHook = 1,
	SDCIT_Num = 2,
	SDCIT_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.SpringArmState
enum class SpringArmState : uint8 {
	SASDefault = 0,
	SASLeave = 1,
	SASStay = 2,
	SASApproach = 3,
	SpringArmState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.ESTExtraVehicleStates
enum class ESTExtraVehicleStates : uint8 {
	EVS_NONE = 0,
	EVS_SPEED = 1,
	EVS_ELECTRONIC_FAILURE = 2,
	EVS_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.TrackState
enum class TrackState : uint8 {
	TSNone = 0,
	TSLeave = 1,
	TSStay = 2,
	TSApproach = 3,
	TrackState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EViewMaskType
enum class EViewMaskType : uint8 {
	EAuto = 0,
	EEachPlayer = 1,
	EEachTeam = 2,
	EViewMaskType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.FFixedDropOffLocationType
enum class FFixedDropOffLocationType : uint8 {
	World = 0,
	Relative = 1,
	FFixedDropOffLocationType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.FDropOffLocationType
enum class FDropOffLocationType : uint8 {
	World = 0,
	Relative = 1,
	FDropOffLocationType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EAutoAimRangeType
enum class EAutoAimRangeType : uint8 {
	SCOPE = 0,
	INNER = 1,
	Outer = 2,
	EAutoAimRangeType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponMuzzleEffectType
enum class EWeaponMuzzleEffectType : uint8 {
	Default = 1,
	Silencer = 2,
	FiringSuppressor = 4,
	Compensator = 8,
	EWeaponMuzzleEffectType_MAX = 9
};

// Object Name: Enum ShadowTrackerExtra.EWeaponEffectMatParamType
enum class EWeaponEffectMatParamType : uint8 {
	EWeaponEffectMatParamType_Scalar = 0,
	EWeaponEffectMatParamType_Color = 1,
	EWeaponEffectMatParamType_Texture = 2,
	EWeaponEffectMatParamType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponFxParamType
enum class EWeaponFxParamType : uint8 {
	EWeaponFxParamType_Float = 0,
	EWeaponFxParamType_Vector = 1,
	EWeaponFxParamType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponEffectRoleLimit
enum class EWeaponEffectRoleLimit : uint8 {
	ERoleLimit_None = 0,
	ERoleLimit_AutonomousOnly = 1,
	ERoleLimit_SimulatedOnly = 2,
	ERoleLimit_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponEffectValidSceneType
enum class EWeaponEffectValidSceneType : uint8 {
	LobbyOnly = 0,
	InGameOnly = 1,
	All = 2,
	EWeaponEffectValidSceneType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWeaponEffectTriggerCondition
enum class EWeaponEffectTriggerCondition : uint8 {
	None = 0,
	Kill = 1,
	LobbyUserTrigger = 2,
	EquipSpecifyAvatar = 3,
	ScopeIn = 4,
	ScopeOut = 5,
	SpecialIdle = 6,
	EWeaponEffectTriggerCondition_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EFlameEmitterType
enum class EFlameEmitterType : uint8 {
	ESingleShot = 0,
	EContinuous = 1,
	EFlameEmitterType_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EWeaponExceptionType
enum class EWeaponExceptionType : uint8 {
	EWET_CLIENT_UNVALID_WEAPON1 = 0,
	EWET_CLIENT_UNVALID_WEAPON2 = 1,
	EWET_CLIENT_UNVALID_WEAPON3 = 2,
	EWET_CLIENT_SHRINK_CREATE1 = 10,
	EWET_CLIENT_SHRINK_CREATE2 = 11,
	EWET_CLIENT_AUTO_SWITCH = 20,
	EWET_CLIENT_AUTO_SWITCH_NONE = 30,
	EWET_DS_RESYNC_SPAWN_SCUCESS = 100,
	EWET_DS_RESYNC_SPAWN_FAIL = 101,
	EWET_MAX = 102
};

// Object Name: Enum ShadowTrackerExtra.EMuzzleEffectFallbackMode
enum class EMuzzleEffectFallbackMode : uint8 {
	UseDefaultType = 0,
	UseWeaponOriginal = 1,
	EMuzzleEffectFallbackMode_MAX = 2
};

// Object Name: Enum ShadowTrackerExtra.EDriftMode
enum class EDriftMode : uint8 {
	Default = 0,
	ShootDrive = 1,
	NitroBoost = 2,
	EDriftMode_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWheeledDriftStage
enum class EWheeledDriftStage : uint8 {
	None = 0,
	PreDrift = 1,
	Drift = 2,
	EWheeledDriftStage_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWingmanChangeMeshState
enum class EWingmanChangeMeshState : uint8 {
	State_TPP = 0,
	State_FPP = 1,
	State_Destory = 2,
	State_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulPlayType
enum class EWonderfulPlayType : uint8 {
	EWonderfulPlayType_None = 0,
	EWonderfulPlayType_FromLobby = 1,
	EWonderfulPlayType_FromBattle = 2,
	EWonderfulPlayType_MAX = 3
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulPlayState
enum class EWonderfulPlayState : uint8 {
	EWonderfulPlayState_Initial = 0,
	EWonderfulPlayState_WaitJumpTimeDone = 1,
	EWonderfulPlayState_Playing = 2,
	EWonderfulPlayState_Finished = 3,
	EWonderfulPlayState_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulCutOutputType
enum class EWonderfulCutOutputType : uint8 {
	WonderfulCutOutputType_None = 0,
	WonderfulCutOutputType_ChickenDinner = 1,
	WonderfulCutOutputType_ShootKill = 2,
	WonderfulCutOutputType_ShootLastBreath = 3,
	WonderfulCutOutputType_ShootDamage = 4,
	WonderfulCutOutputType_MeleeKill = 5,
	WonderfulCutOutputType_MeleeLastBreath = 6,
	WonderfulCutOutputType_GrenadeKill = 7,
	WonderfulCutOutputType_GrenadeLastBreath = 8,
	WonderfulCutOutputType_VehicleKill = 9,
	WonderfulCutOutputType_VehicleLastBreath = 10,
	WonderfulCutOutputType_MAX = 11
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulCutShootDamageType
enum class EWonderfulCutShootDamageType : uint8 {
	WonderfulCutHurtType_None = 0,
	WonderfulCutHurtType_Kill = 1,
	WonderfulCutHurtType_LastBreath = 2,
	WonderfulCutHurtType_Hurt = 3,
	WonderfulCutHurtType_MAX = 4
};

// Object Name: Enum ShadowTrackerExtra.EWonderfulCutCaptureType
enum class EWonderfulCutCaptureType : uint8 {
	WonderfulCutCaptureType_None = 0,
	WonderfulCutCaptureType_ChickenDinner = 1,
	WonderfulCutCaptureType_Circle = 2,
	WonderfulCutCaptureType_Vehicle = 3,
	WonderfulCutCaptureType_Grenade = 4,
	WonderfulCutCaptureType_Melee = 5,
	WonderfulCutCaptureType_ShootDamage = 6,
	WonderfulCutCaptureType_MAX = 7
};

// Object Name: Enum ShadowTrackerExtra.EWeatherPhaseIndex
enum class EWeatherPhaseIndex : uint8 {
	FirstDay = 0,
	FirstDusk = 1,
	FirstNight = 2,
	SecondDay = 3,
	SecondDusk = 4,
	SecondNight = 5,
	ThirdDay = 6,
	EWeatherPhaseIndex_MAX = 7
};

