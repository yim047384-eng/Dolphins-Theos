#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Gameplay.EBattleItemOperationType
enum class EBattleItemOperationType : uint8 {
	Pickup = 0,
	Drop = 1,
	Use = 2,
	Disuse = 3,
	Enable = 4,
	Disable = 5,
	EBattleItemOperationType_MAX = 6
};

// Object Name: Enum Gameplay.EBattleItemOperationFailedReason
enum class EBattleItemOperationFailedReason : uint8 {
	PickupFailed_Default = 0,
	PickupFailed_CapacityExceeded = 1,
	PickupFailed_ItemCountExceeded = 2,
	PickupFailed_PickupLimitExceeded = 3,
	DropFailed_Default = 16,
	UseFailed_Default = 32,
	UseFailed_CapacityExceeded = 33,
	UseFailed_SafeBagCapacityExceeded = 34,
	DisuseFailed_Default = 48,
	DisuseFailed_CapacityExceeded = 49,
	DisuseFailed_SafeBagCapacityExceeded = 50,
	EBattleItemOperationFailedReason_MAX = 51
};

// Object Name: Enum Gameplay.EBattleItemChangeAreaType
enum class EBattleItemChangeAreaType : uint8 {
	AllItem = 0,
	PartItemCaseCapacity = 1,
	PartItemCaseNum = 2,
	AllWantedNum = 3,
	EBattleItemChangeAreaType_MAX = 4
};

// Object Name: Enum Gameplay.EPickUpCheckResult
enum class EPickUpCheckResult : uint8 {
	EPUFR_OK = 0,
	EPUFR_DelayAdd = 1,
	EPUFR_Forbidden = 2,
	EPUFR_MAX = 3
};

// Object Name: Enum Gameplay.ECharacterGender
enum class ECharacterGender : uint8 {
	Male = 0,
	Female = 1,
	ECharacterGender_MAX = 2
};

// Object Name: Enum Gameplay.ECharacterPoseType
enum class ECharacterPoseType : uint8 {
	ECharPose_Stand = 0,
	ECharPose_Crouch = 1,
	ECharPose_Prone = 2,
	ECharPose_Max = 3
};

// Object Name: Enum Gameplay.ECharacterVehicleAnimType
enum class ECharacterVehicleAnimType : uint8 {
	ECharVehAnim_Idle = 0,
	ECharVehAnim_IdleWithWeapon = 1,
	ECharVehAnim_LeanOut = 2,
	ECharVehAnim_LeanIn = 3,
	ECharVehAnim_Aim = 4,
	ECharVehAnim_Scope = 5,
	ECharVehAnim_AimFPPCommon = 6,
	ECharVehAnim_MotorbikeIdle = 7,
	ECharVehAnim_MotorbikeVacate = 8,
	ECharVehAnim_MotorbikeDriverLeaning = 9,
	ECharVehAnim_MotorbikeDriverLeaningLowSpeed = 10,
	ECharVehAnim_MotorbikeDriverLeaningGroundPitch = 11,
	ECharVehAnim_MotorbikePassengerIdleBaseDriverOff = 12,
	ECharVehAnim_MotorbikePassengerIdleBaseWithGunDriverOff = 13,
	ECharVehAnim_MotorbikePassengerIdleBaseWithMeleeDriverOff = 14,
	ECharVehAnim_MotorbikePassengerIdleBaseWithThrowObjDriverOff = 15,
	ECharVehAnim_MotorbikePassengerDriverOffAim = 16,
	ECharVehAnim_MotorbikePassengerIdleLeaning = 17,
	ECharVehAnim_MotorbikePassengerIdleBaseDriverOn = 18,
	ECharVehAnim_MotorbikePassengerIdleBaseWithGunDriverOn = 19,
	ECharVehAnim_MotorbikePassengerIdleBaseWithMeleeDriverOn = 20,
	ECharVehAnim_MotorbikePassengerIdleBaseWithThrowObjDriverOn = 21,
	ECharVehAnim_Jump0 = 22,
	ECharVehAnim_Jump1 = 23,
	ECharVehAnim_Jump2 = 24,
	ECharVehAnim_Jump3 = 25,
	ECharVehAnim_SpeedUpByFoot = 26,
	ECharVehAnim_BrakeByFoot = 27,
	ECharVehAnim_Falling = 28,
	ECharVehAnim_FallLand_Additve = 29,
	ECharVehAnim_FallLand_Hard = 30,
	ECharVehAnim_Enter = 31,
	ECharVehAnim_Enter2 = 32,
	ECharVehAnim_Leave = 33,
	ECharVehAnim_StandIdle = 34,
	ECharVehAnim_IdleProne = 35,
	ECharVehAnim_EnterProne = 36,
	ECharVehAnim_LeaveProne = 37,
	ECharVehAnim_VehicleWeaponReload = 38,
	ECharVehAnim_VehicleWeaponFire = 39,
	ECharVehAnim_VehicleWeaponAimOffset = 40,
	ECharVehAnim_VehicleWeaponEquip = 41,
	ECharVehAnim_VehicleWeaponUnEquip = 42,
	ECharVehAnim_MotorgliderIdle = 43,
	ECharVehAnim_MotorgliderSteer = 44,
	ECharVehAnim_IdleWithWeapon_Down = 45,
	ECharVehAnim_DriverFoward = 46,
	ECharVehAnim_Bike_NormalDriveAnim = 47,
	ECharVehAnim_Bike_SprintDriveAnim = 48,
	ECharVehAnim_Bike_SpeedLeaningAnim = 49,
	ECharVehAnim_Bike_DriveLeaningHorizontalAnim = 50,
	ECharVehAnim_Bike_DriveLeaningVerticalAnim = 51,
	ECharVehAnim_Bike_DriveAnticipation = 52,
	ECharVehAnim_Bike_AirLeaningHorizontal = 53,
	ECharVehAnim_Bike_AirLeaningVertical = 54,
	ECharVehAnim_Bike_DriveHeadAO = 55,
	ECharVehAnim_Bike_DriveSteering = 56,
	ECharVehAnim_DlyingInVehicle_Idle = 57,
	ECharVehAnim_IdleWithDualGun = 58,
	ECharVehAnim_AimWithDualGun = 59,
	ECharVehAnim_HoldGrenadeAimModify = 60,
	ECharVehAnim_Max = 61
};

// Object Name: Enum Gameplay.ECharacterAnimType
enum class ECharacterAnimType : uint8 {
	ECharAnim_Move = 0,
	ECharAnim_Aim = 1,
	ECharAnim_ToStand = 2,
	ECharAnim_ToCrouch = 3,
	ECharAnim_ToProne = 4,
	ECharAnim_PickM = 5,
	ECharAnim_PickL = 6,
	ECharAnim_Equip_Primary = 7,
	ECharAnim_Equip_Secondary = 8,
	ECharAnim_Equip_Pistol = 9,
	ECharAnim_Equip_Melee = 10,
	ECharAnim_Equip_Thrown = 11,
	ECharAnim_Hurt = 12,
	ECharAnim_Reload = 13,
	ECharAnim_TacticsReload = 14,
	ECharAnim_JuggleStypeReload = 15,
	ECharAnim_ReloadType1 = 16,
	ECharAnim_ReloadType2 = 17,
	ECharAnim_Fire_Single = 18,
	ECharAnim_Fire_Burst = 19,
	ECharAnim_Fire_Auto = 20,
	ECharAnim_Accumulate = 21,
	ECharAnim_PostFire = 22,
	ECharAnim_Turn_L = 23,
	ECharAnim_Turn_R = 24,
	ECharAnim_PullingPlug = 25,
	ECharAnim_PutDownWeapon = 26,
	ECharAnim_WeaponIdle = 27,
	ECharAnim_VehWeaponIdle = 28,
	ECharAnim_VehWeaponIdle_Down = 29,
	ECharAnim_VehWeaponAim = 30,
	ECharAnim_VehWeaponReload = 31,
	ECharAnim_Peek = 32,
	ECharAnim_PeekScope = 33,
	ECharAnim_PeekLeftAim = 34,
	ECharAnim_PeekRightAim = 35,
	ECharAnim_ForegripAnim = 36,
	ECharAnim_Fire_Scope = 37,
	ECharAnim_Fire_Peek = 38,
	ECharAnim_SprintToProne = 39,
	ECharAnim_OpenDoor = 40,
	ECharAnim_Shovel = 41,
	ECharAnim_StandbyIdle_2 = 42,
	ECharAnim_StandbyIdle_3 = 43,
	ECharAnim_ColdStandbyIdle_2 = 44,
	ECharAnim_ColdStandbyIdle_3 = 45,
	ECharAnim_MovementUpBodyOverride = 46,
	ECharAnim_GrenadeLaunchAnim = 47,
	ECharAnim_GrenadeLaunchReload = 48,
	ECharAnim_GrenadeLaunchTacticsReload = 49,
	ECharAnim_FillGas = 50,
	ECharAnim_DropWeapon = 51,
	ECharAnim_ShoulderWeaponIdle = 52,
	ECharAnim_BeCarriedBackMove = 53,
	ECharAnim_BeCarriedBackPickM = 54,
	ECharAnim_BeCarriedBackPickL = 55,
	ECharAnim_BeCarriedBackOpenDoor = 56,
	ECharAnim_ScopeBlendAnim = 57,
	ECharAnim_MovementLowerBodyOverride = 58,
	ECharAnim_WeaponStandBase = 59,
	ECharAnim_Max = 60
};

// Object Name: Enum Gameplay.ECharacterMoveDragReason
enum class ECharacterMoveDragReason : uint8 {
	CMDR_UnknowReason = 0,
	CMDR_ExceedsDistance = 1,
	CMDR_MovementModeError = 2,
	CMDR_PassWall = 3,
	CMDR_Imprisonment = 4,
	CMDR_ServerControlPunish = 5,
	CMDR_ClientLocAndRotErrorProne = 6,
	CMDR_ResolvingTimeDiscrepancy = 7,
	CMDR_ExceedMaxZMove = 8,
	CMDR_OtherSecurity = 9,
	CMDR_LagPktOrSpeedOverLimit = 10,
	CMDR_MovementBaseError = 11,
	CMDR_TimeStampError = 12,
	CMDR_ModifyBaseMoveable = 13,
	CMDR_MAX = 14
};

// Object Name: Enum Gameplay.ECharAnimEventType
enum class ECharAnimEventType : uint8 {
	ECharAnimEvent_PoseChange = 0,
	ECharAnimEvent_PickUp = 1,
	ECharAnimEvent_Fire = 2,
	ECharAnimEvent_Reload = 3,
	ECharAnimEvent_Switch = 4,
	ECharAnimEvent_Peek = 5,
	ECharAnimEvent_PeekAim = 6,
	ECharAnimEvent_Bolt = 7,
	ECharAnimEvent_FillGas = 8,
	ECharAnimEvent_DropWeapon = 9,
	ECharAnimEvent_BeCarriedBackPickUp = 10,
	ECharAnimEvent_PostFire = 11,
	ECharAnimEvent_Max = 12
};

// Object Name: Enum Gameplay.ECharacterJumpType
enum class ECharacterJumpType : uint8 {
	ECharJump_InPlace = 0,
	ECharJump_Forward = 1,
	ECharJump_Max = 2
};

// Object Name: Enum Gameplay.ECharacterParachuteAnimType
enum class ECharacterParachuteAnimType : uint8 {
	ECharParachuteAnim_FreeFalling = 0,
	ECharParachuteAnim_Parachute = 1,
	ECharParachuteAnim_ParachuteEnter = 2,
	ECharParachuteAnim_ParachuteLand = 3,
	ECharParachuteAnim_FreeFallingTurn = 4,
	ECharParachuteAnim_FreeFallingStart = 5,
	ECharParachuteAnim_FreeFallingShake = 6,
	ECharParachuteAnim_FreeFallAerialShow = 7,
	ECharParachuteAnim_Max = 8
};

// Object Name: Enum Gameplay.EMentorPlayerType
enum class EMentorPlayerType : uint8 {
	MPT_NormalPlayer = 0,
	MPT_Veteran = 1,
	MPT_Recruit = 2,
	MPT_MAX = 3
};

// Object Name: Enum Gameplay.EEventCounterDefine
enum class EEventCounterDefine : uint8 {
	PlayerGotoSnowMountain = 1,
	PlayerGotoIceLand = 2,
	PlayerUseMoveablePlatform = 3,
	PlayerTurboDrop = 4,
	PlayerWingedFlightCount = 5,
	PlayerWingedFlightTotalDist = 6,
	PlayerUseCoin = 7,
	PlayerEasterEgg = 8,
	PlayerDuckGameTime = 9,
	PlayerBeeGameTime = 10,
	PlayerDuckGameCount = 11,
	PlayerBeeGameCount = 12,
	PlayerBlindBoxCount = 13,
	PlayerDuckShootingRangeCount = 14,
	PlayerPlaygroundSpringJumpCount = 15,
	PlayerTownSpringJumpCount = 16,
	PlayerMakeFiresNum = 17,
	PlayerChichenBBQNum = 18,
	PlayerUseKFNum = 19,
	PlayerUseUAVNum = 20,
	PlayerKFUsingTime = 21,
	PlayerUAVUsingTime = 22,
	PlayerSkateboardUsingCount = 23,
	PlayerSkateboardUsingTime = 24,
	PlayerSkateboardUsingDistance = 25,
	PlayerOpenTreasureBoxCount = 26,
	PlayerEatCakeCount = 27,
	PlayerUseDrinkMachineCount = 28,
	PlayerUseLeapPlatformCount = 29,
	PlayerPrayTotemsCount = 30,
	PlayerPickupMushroomCount = 31,
	PlayerUseBallonCount = 32,
	PlayerUseQuickSight = 33,
	PlayerPickingFruitCount = 34,
	PlayerInteractivePowerTotemCount = 35,
	PlayerInteractiveStrategyTotemCount = 36,
	PlayerInteractiveGuardTotemCount = 37,
	PlayerUseLookOutCount = 38,
	PlayerDancingInIslandCount = 39,
	PlayerFirstEnterVehicleType = 45,
	PlayerFirstEnterVehicleTime = 46,
	PlayerPlayVideoCount = 51,
	PlayerTakeBoatInWaterFallCount = 52,
	PlayerAceTaskStatusStat = 64,
	PlayerAcePillar1RewardTime = 65,
	PlayerAcePillar2RewardTime = 66,
	PlayerAcePillar3RewardTime = 67,
	PlayerAcePillar4RewardTime = 68,
	PlayerAcePillar5RewardTime = 69,
	PlayerAcePillarTotalCount = 70,
	PlayerDamageSteelDoorCount = 71,
	PlayerShowAceTaskPanelCount = 72,
	PlayerKillMetroAICount = 73,
	PlayerEnterUndergroundCount = 74,
	PlayerEnterRadiationCount = 75,
	PlayerUseSnowCockGrenadeCount = 76,
	PlayerUseSnowmanGrenadeCount = 77,
	PlayerEnterFloatIceCount = 78,
	PlayerInteractPineCount = 79,
	PlayerEnterWinterHouseCount = 84,
	PlayerEnterIceGardenCount = 85,
	PlayerDestroyPaperWallWithStickyBombCount = 89,
	PlayerUsePanzerFaustCount = 90,
	PlayerKillMonsterCount = 91,
	PlayerUseCrystalCount = 92,
	PlayerEnterDestroyedApex = 93,
	PlayerCollectLightBallCount = 94,
	PlayerKilledInSectManCount = 95,
	PlayerUseTeleport = 96,
	TeleportFromTrain = 120,
	A1StationEnter = 121,
	A1StationExit = 122,
	A2StationEnter = 123,
	A2StationExit = 124,
	A3StationEnter = 125,
	A3StationExit = 126,
	A4StationEnter = 127,
	A4StationExit = 128,
	A5StationEnter = 129,
	A5StationExit = 130,
	A6StationEnter = 131,
	A6StationExit = 132,
	B1StationEnter = 133,
	B1StationExit = 134,
	B2StationEnter = 135,
	B2StationExit = 136,
	B3StationEnter = 137,
	B3StationExit = 138,
	B4StationEnter = 139,
	B4StationExit = 140,
	C1StationEnter = 141,
	C1StationExit = 142,
	C2StationEnter = 143,
	C2StationExit = 144,
	C3StationEnter = 145,
	C3StationExit = 146,
	C4StationEnter = 147,
	C4StationExit = 148,
	C5StationEnter = 149,
	C5StationExit = 150,
	D1StationEnter = 151,
	D1StationExit = 152,
	D2StationEnter = 153,
	D2StationExit = 154,
	D3StationEnter = 155,
	D3StationExit = 156,
	D4StationEnter = 157,
	D4StationExit = 158,
	D5StationEnter = 159,
	D5StationExit = 160,
	EEventCounterDefine_MAX = 161
};

// Object Name: Enum Gameplay.ETLog_BackpackEquipmentSlotType
enum class ETLog_BackpackEquipmentSlotType : uint8 {
	EBackpackEquipmentSlotType_None = 255,
	EBackpackEquipmentSlotType_WeaponSlot1 = 0,
	EBackpackEquipmentSlotType_WeaponSlot2 = 1,
	EBackpackEquipmentSlotType_HelmetSlot = 2,
	EBackpackEquipmentSlotType_ArmorSlot = 3,
	EBackpackEquipmentSlotType_BagSlot = 4,
	EBackpackEquipmentSlotType_Weapon1GunPoint = 5,
	EBackpackEquipmentSlotType_Weapon1Grip = 6,
	EBackpackEquipmentSlotType_Weapon1Magazine = 7,
	EBackpackEquipmentSlotType_Weapon1Gunstock = 8,
	EBackpackEquipmentSlotType_Weapon1OpticalSight = 9,
	EBackpackEquipmentSlotType_Weapon2GunPoint = 10,
	EBackpackEquipmentSlotType_Weapon2Grip = 11,
	EBackpackEquipmentSlotType_Weapon2Magazine = 12,
	EBackpackEquipmentSlotType_Weapon2Gunstock = 13,
	EBackpackEquipmentSlotType_Weapon2OpticalSight = 14,
	EBackpackEquipmentSlotType_MAX = 256
};

// Object Name: Enum Gameplay.EWeaponDistanceType
enum class EWeaponDistanceType : uint8 {
	Gun = 1,
	CloseCombat = 2,
	Thrown = 3,
	EWeaponDistanceType_MAX = 4
};

// Object Name: Enum Gameplay.ELobbyCharacterAnimType
enum class ELobbyCharacterAnimType : uint8 {
	ELobbyCharAnim_Boy = 0,
	ELobbyCharAnim_Girl = 1,
	ELobbyCharAnim_Max = 2
};

// Object Name: Enum Gameplay.EGridGenerateType
enum class EGridGenerateType : uint8 {
	Invalid = 0,
	Normal = 1,
	EGridGenerateType_MAX = 2
};

// Object Name: Enum Gameplay.EAutoRotationMode
enum class EAutoRotationMode : uint8 {
	Normal = 0,
	Pendulum = 1,
	CustomCurve = 2,
	EAutoRotationMode_MAX = 3
};

// Object Name: Enum Gameplay.EDIYProjectDirection
enum class EDIYProjectDirection : uint8 {
	X = 1,
	X_ = 2,
	Y = 3,
	Y_ = 4,
	Z = 5,
	Z_ = 6,
	EDIYProjectDirection_MAX = 7
};

// Object Name: Enum Gameplay.EBattleDataType
enum class EBattleDataType : uint8 {
	None = 0,
	All = 1,
	SimpleAll = 2,
	PlayerInfo = 3,
	SimplePlayerInfo = 4,
	WeaponAvatar = 5,
	WeaponAvatarDIY = 6,
	EBattleDataType_MAX = 7
};

// Object Name: Enum Gameplay.EAntiMoveSpecialFlags
enum class EAntiMoveSpecialFlags : uint8 {
	StandOnMovableBase = 1,
	EAntiMoveSpecialFlags_MAX = 2
};

// Object Name: Enum Gameplay.EVehicleMoveDragReason
enum class EVehicleMoveDragReason : uint8 {
	Unknown = 0,
	ServerCorrection = 1,
	PunishBySecurity = 2,
	BeyondErrorThreshold = 3,
	CorrectionWithoutPassengers = 4,
	UseReplicatedMovementWhenRepMovementTimeout = 5,
	UseReplicatedLocAndRotWhenRepMovementTimeout = 6,
	StopSimulateWhenRepMovementTimeout = 7,
	EVehicleMoveDragReason_MAX = 8
};

// Object Name: Enum Gameplay.EDeathMatchSubModeType
enum class EDeathMatchSubModeType : uint8 {
	DeathMatch = 0,
	HardPoint = 1,
	ArmsRace = 2,
	EDeathMatchSubModeType_MAX = 3
};

// Object Name: Enum Gameplay.EIDCardDestroyReasonType
enum class EIDCardDestroyReasonType : uint8 {
	EDRT_Revived = 0,
	EDRT_Timeout = 1,
	EDRT_PlayerExit = 2,
	EDRT_TeamTerminated = 3,
	EDRT_MAX = 4
};

// Object Name: Enum Gameplay.ERevivalFailedReasonType
enum class ERevivalFailedReasonType : uint8 {
	ERFRT_Succeed = 0,
	ERFRT_PlayerDead = 1,
	ERFRT_Cancel = 2,
	ERFRT_IDCardDestroyed = 3,
	ERFRT_Interrupt = 4,
	ERFRT_BeHit = 5,
	ERFRT_Max_DoNothing = 6,
	ERFRT_MAX = 7
};

// Object Name: Enum Gameplay.EObserverEnemyTraceType
enum class EObserverEnemyTraceType : uint8 {
	None = 0,
	FriendObserve = 1,
	DeathObserve = 2,
	Both = 3,
	EObserverEnemyTraceType_MAX = 4
};

// Object Name: Enum Gameplay.ERealtimeReportType
enum class ERealtimeReportType : uint8 {
	CharMove1 = 1,
	ERealtimeReportType_MAX = 2
};

// Object Name: Enum Gameplay.ERealtimePunishType
enum class ERealtimePunishType : uint8 {
	Invalid = 0,
	CharMove = 1,
	AutoAim = 2,
	ERealtimePunishType_MAX = 3
};

// Object Name: Enum Gameplay.EPrisonBreak
enum class EPrisonBreak : uint8 {
	ClientMaxSpeed = 1,
	ClientDamageRate = 2,
	ClientParachuteSpeed = 4,
	ClientCoronaDataEmpty = 8,
	ClientCoronaDataCrcErr = 16,
	EPrisonBreak_MAX = 17
};

// Object Name: Enum Gameplay.ERegionType
enum class ERegionType : uint8 {
	SizeInvalid = 0,
	SizeSmall = 1,
	SizeMedium = 2,
	SizeLarge = 3,
	ERegionType_MAX = 4
};

// Object Name: Enum Gameplay.EVehicleSpotRandomType
enum class EVehicleSpotRandomType : uint8 {
	Vehicle_TotalCount = 0,
	Vehicle_Probability = 1,
	Vehicle_MAX = 2
};

// Object Name: Enum Gameplay.ESpotType
enum class ESpotType : uint8 {
	ESpotType_A = 0,
	ESpotType_B = 1,
	ESpotType_C = 2,
	ESpotType_D = 3,
	ESpotType_E = 4,
	ESpotType_F = 5,
	ESpotType_G = 6,
	ESpotType_H = 7,
	ESpotType_I = 8,
	ESpotType_J = 9,
	ESpotType_K = 10,
	ESpotType_L = 11,
	ESpotType_M = 12,
	ESpotType_N = 13,
	ESpotType_O = 14,
	ESpotType_P = 15,
	ESpotType_Q = 16,
	ESpotType_R = 17,
	ESpotType_S = 18,
	ESpotType_T = 19,
	ESpotType_U = 20,
	ESpotType_V = 21,
	ESpotType_W = 22,
	ESpotType_X = 23,
	ESpotType_Y = 24,
	ESpotType_Z = 25,
	ESpotType_A1 = 26,
	ESpotType_B1 = 27,
	ESpotType_C1 = 28,
	ESpotType_D1 = 29,
	ESpotType_E1 = 30,
	ESpotType_F1 = 31,
	ESpotType_G1 = 32,
	ESpotType_H1 = 33,
	ESpotType_I1 = 34,
	ESpotType_J1 = 35,
	ESpotType_K1 = 36,
	ESpotType_L1 = 37,
	ESpotType_M1 = 38,
	ESpotType_N1 = 39,
	ESpotType_O1 = 40,
	ESpotType_P1 = 41,
	ESpotType_Q1 = 42,
	ESpotType_R1 = 43,
	ESpotType_S1 = 44,
	ESpotType_T1 = 45,
	ESpotType_U1 = 46,
	ESpotType_V1 = 47,
	ESpotType_W1 = 48,
	ESpotType_X1 = 49,
	ESpotType_Y1 = 50,
	ESpotType_Z1 = 51,
	ESpotType_MAX = 52
};

// Object Name: Enum Gameplay.ESpotGroupType
enum class ESpotGroupType : uint8 {
	ESpotGroup_A = 0,
	ESpotGroup_B = 1,
	ESpotGroup_C = 2,
	ESpotGroup_D = 3,
	ESpotGroup_E = 4,
	ESpotGroup_F = 5,
	ESpotGroup_G = 6,
	ESpotGroup_H = 7,
	ESpotGroup_I = 8,
	ESpotGroup_J = 9,
	ESpotGroup_K = 10,
	ESpotGroup_L = 11,
	ESpotGroup_M = 12,
	ESpotGroup_N = 13,
	ESpotGroup_O = 14,
	ESpotGroup_P = 15,
	ESpotGroup_Q = 16,
	ESpotGroup_R = 17,
	ESpotGroup_S = 18,
	ESpotGroup_T = 19,
	ESpotGroup_U = 20,
	ESpotGroup_V = 21,
	ESpotGroup_W = 22,
	ESpotGroup_X = 23,
	ESpotGroup_Y = 24,
	ESpotGroup_Z = 25,
	ESpotGroup_MAX = 26
};

// Object Name: Enum Gameplay.ESVehAnimVehicleType
enum class ESVehAnimVehicleType : uint8 {
	Anim_VT_Unknown = 0,
	Anim_VT_Motorbike = 1,
	Anim_VT_Motorbike_SideCart = 2,
	Anim_VT_Dacia = 3,
	Anim_VT_UAZ = 4,
	Anim_VT_Buggy = 5,
	Anim_VT_PG117 = 6,
	Anim_VT_Aquarail = 7,
	Anim_VT_MiniBus = 8,
	Anim_VT_PickUp = 9,
	Anim_VT_Mirado = 10,
	Anim_VT_Rony = 11,
	Anim_VT_Surfboard = 12,
	Anim_VT_UH60 = 13,
	Anim_VT_Amphibious = 14,
	Anim_VT_Tuk = 15,
	Anim_VT_Scooter = 16,
	Anim_VT_Motorglider = 17,
	Anim_VT_MAX = 18
};

// Object Name: Enum Gameplay.ECharacterAnimTypeAsynLoaded
enum class ECharacterAnimTypeAsynLoaded : uint8 {
	ECharAnimAsyn_Swim_Up = 0,
	ECharAnimAsyn_Swim_Down = 1,
	ECharAnimAsyn_Max = 2
};

// Object Name: Enum Gameplay.ECharacterViewType
enum class ECharacterViewType : uint8 {
	ECharacterView_TPPandFPP = 0,
	ECharacterView_TPP = 1,
	ECharacterView_FPP = 2,
	ECharacterView_Max = 3
};

// Object Name: Enum Gameplay.EVehicleSeatType
enum class EVehicleSeatType : uint8 {
	EVehSeatType_Driver = 0,
	EVehSeatType_Left = 1,
	EVehSeatType_Right = 2,
	EVehSeatType_Max = 3
};

// Object Name: Enum Gameplay.EVehicleType
enum class EVehicleType : uint8 {
	EVehType_Buggy = 0,
	EVehType_UAZ = 1,
	EVehType_Motorcycle = 2,
	EVehType_Dacia = 3,
	EVehType_PG_118 = 4,
	EVehType_Max = 5
};

// Object Name: Enum Gameplay.ECharacterShovelPhase
enum class ECharacterShovelPhase : uint8 {
	ECharShovel_Enter = 0,
	ECharShovel_Shoveling = 1,
	ECharShovel_Leave = 2,
	ECharShovel_Crouch_Leave = 3,
	ECharShovel_Max = 4
};

// Object Name: Enum Gameplay.ECharacterJumpPhase
enum class ECharacterJumpPhase : uint8 {
	EJumpPhase_PreJump = 0,
	EJumpPhase_FallLoop0 = 1,
	EJumpPhase_FallLoop1 = 2,
	EJumpPhase_Land0 = 3,
	EJumpPhase_Land1 = 4,
	EJumpPhase_GrenadeJump_1 = 5,
	EJumpPhase_GrenadeJump_2 = 6,
	EJumpPhase_GrenadeFall_1 = 7,
	EJumpPhase_GrenadeFall_2 = 8,
	EJumpPhase_Max = 9
};

// Object Name: Enum Gameplay.ECharaAnimListType
enum class ECharaAnimListType : uint8 {
	ECharaAnimListType_TPP = 1,
	ECharaAnimListType_FPP = 2,
	ECharaAnimListType_Jump = 3,
	ECharaAnimListType_JumpFPP = 4,
	ECharaAnimListType_Shield = 5,
	EcharaAnimListType_Vehicle = 6,
	ECharaAnimListType_Shovel = 7,
	ECharaAnimListType_ShovelFPP = 8,
	ECharaAnimListType_Max = 9
};

// Object Name: Enum Gameplay.EBornItemFlag
enum class EBornItemFlag : uint8 {
	CANCARRYONPLANE = 1,
	EBornItemFlag_MAX = 2
};

// Object Name: Enum Gameplay.EGameOverReason
enum class EGameOverReason : uint8 {
	Exit = 0,
	NoJoinPlayers = 1,
	NoActivePlayers = 2,
	NoActivePlayersButHaveObservers = 3,
	InterruptGame = 4,
	EGameOverReason_MAX = 5
};

// Object Name: Enum Gameplay.EIndependentSpotType
enum class EIndependentSpotType : uint8 {
	ItemSpot = 0,
	VehicleSpot = 1,
	EIndependentSpotType_MAX = 2
};

// Object Name: Enum Gameplay.ELevelSequenceStartPlayType
enum class ELevelSequenceStartPlayType : uint8 {
	ELvSeqStartPlayType_Enable = 0,
	ELvSeqStartPlayType_Disable = 1,
	ELvSeqStartPlayType_Check = 2,
	ELvSeqStartPlayType_MAX = 3
};

// Object Name: Enum Gameplay.ECharSpecialLevelSequenceType
enum class ECharSpecialLevelSequenceType : uint8 {
	ECharSpecLvSeq_WeaponCheck = 0,
	ECharSpecLvSeq_WeaponShow = 1,
	ECharSpecLvSeq_WeaponHighlightMoment = 2,
	ECharSpecLvSeq_Max = 3
};

// Object Name: Enum Gameplay.ESequenceRelevantType
enum class ESequenceRelevantType : uint8 {
	Default = 0,
	OnlySelf = 1,
	Team = 2,
	ESequenceRelevantType_MAX = 3
};

// Object Name: Enum Gameplay.ECharacterShowSceneType
enum class ECharacterShowSceneType : uint8 {
	ECharacterShowSceneType_Lobby = 0,
	ECharacterShowSceneType_GameEndAvatarScene = 1,
	ECharacterShowSceneType_LobbyWithCar = 2,
	ECharacterShowSceneType_LobbySystem = 3,
	ECharacterShowSceneType_LobbyPure = 4,
	ECharacterShowSceneType_Max = 5
};

// Object Name: Enum Gameplay.ELobbyCharacterPosIndex
enum class ELobbyCharacterPosIndex : uint8 {
	Self = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	ELobbyCharacterPosIndex_Max = 4
};

// Object Name: Enum Gameplay.EPlayerStatisticTypeForPCOB
enum class EPlayerStatisticTypeForPCOB : uint8 {
	None = 0,
	KillNumByDriveVehicle = 100,
	PoisonTotalDamage = 200,
	EPlayerStatisticTypeForPCOB_MAX = 201
};

// Object Name: Enum Gameplay.EActorSpawnType
enum class EActorSpawnType : uint8 {
	EStatic_Config = 0,
	EDynamic_Generator = 1,
	LevelEvent_Trrigger = 2,
	EActorSpawnType_MAX = 3
};

// Object Name: Enum Gameplay.EMonsterBornType
enum class EMonsterBornType : uint8 {
	EMonsterBornType_Burrow = 0,
	EMonsterBornType_ClimbWall = 1,
	EMonsterBornType_Fall = 2,
	EMonsterBornType_ProneToStand = 3,
	EMonsterBornType_Garbage = 5,
	EMonsterBornType_BreakWall = 6,
	EMonsterBornType_LyingOnTheGround = 7,
	EMonsterBornType_Max = 8
};

// Object Name: Enum Gameplay.EWeatherType
enum class EWeatherType : uint8 {
	EWeatherType_None = 0,
	EWeatherType_Sunday = 1,
	EWeatherType_Rainy = 2,
	EWeatherType_Foggy = 3,
	EWeatherType_Dark = 4,
	EWeatherType_Night = 5,
	EWeatherType_DayToNight = 6,
	EWeatherType_SnowToSquall = 7,
	EWeatherType_SnowToSquall2 = 8,
	EWeatherType_Aurora = 9,
	EWeatherType_Max = 10
};

