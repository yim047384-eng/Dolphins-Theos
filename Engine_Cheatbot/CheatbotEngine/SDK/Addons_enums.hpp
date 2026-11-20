#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Addons.EFoxStance
enum class EFoxStance : uint8 {
	FourLegged = 0,
	TwoLegged = 1,
	Sleeping = 2,
	EFoxStance_MAX = 3
};

// Object Name: Enum Addons.ENTFoxGait
enum class ENTFoxGait : uint8 {
	ENTFoxGait_Walk = 0,
	ENTFoxGait_Run = 1,
	ENTFoxGait_MAX = 2
};

// Object Name: Enum Addons.EEndSpecialMoveReason
enum class EEndSpecialMoveReason : uint8 {
	None = 0,
	EndSMReason_UserOp = 1,
	EndSMReason_Interrupted = 2,
	EndSMReason_InvalidFloor = 3,
	EndSMReason_InvalidMoveMode = 4,
	EndSMReason_NoDriver = 5,
	EndSMReason_NoFuel = 6,
	EndSMReason_NoHealth = 7,
	EndSMReason_ClientLoseConnection = 8,
	EndSMReason_ServerCorrection = 9,
	EndSMReason_ForceEnd = 10,
	EndSMReason_InWater = 11,
	EndSMReason_SkillEnd = 12,
	MAX = 13
};

// Object Name: Enum Addons.EMechaWeaponState
enum class EMechaWeaponState : uint8 {
	EMWS_None = 0,
	EMWS_Magnet = 1,
	EMWS_Missile = 2,
	EMWS_Speed = 3,
	EMWS_Boxing = 4,
	EMWS_Missile2 = 5,
	EMWS_MagnetToMissile = 11,
	EMWS_MagnetToSpeed = 12,
	EMWS_MagnetToBoxing = 13,
	EMWS_MissileToMagnet = 21,
	EMWS_MissileToBoxing = 22,
	EMWS_MissileToMissile2 = 23,
	EMWS_SpeedToMagnet = 31,
	EMWS_BoxingToMagnet = 41,
	EMWS_BoxingToMissile = 42,
	EMWS_BoxingToMissile2 = 43,
	EMWS_Missile2ToBoxing = 52,
	EMWS_Missile2ToMissile = 53,
	EMWS_MAX = 54
};

// Object Name: Enum Addons.EMechaState
enum class EMechaState : uint8 {
	Normal = 0,
	Jump = 1,
	Fire = 2,
	Stumble = 3,
	Aim = 4,
	Dance = 5,
	Landing = 6,
	AirGliding = 7,
	Combine = 8,
	Uncombine = 9,
	Catch = 10,
	BeCatched = 11,
	Melee = 12,
	LaunchState = 13,
	Exploded = 14,
	__MAX = 15,
	EMechaState_MAX = 16
};

// Object Name: Enum Addons.ETransformerState
enum class ETransformerState : uint8 {
	Normal = 0,
	Jump = 1,
	Dance = 2,
	Landing = 3,
	Melee = 4,
	Exploded = 5,
	HitStun = 6,
	PostCast = 7,
	Execute = 8,
	BeExecuted = 9,
	Born = 10,
	__MAX = 11,
	ETransformerState_MAX = 12
};

// Object Name: Enum Addons.ESnowMoveType
enum class ESnowMoveType : uint8 {
	None = 0,
	Idel = 1,
	Move = 2,
	Jump = 3,
	ESnowMoveType_MAX = 4
};

// Object Name: Enum Addons.EMeshPositionSourceMode
enum class EMeshPositionSourceMode : uint8 {
	ArrangementOnly = 0,
	AnchorTargetOnly = 1,
	AnchorTargetWithArrangement = 2,
	EMeshPositionSourceMode_MAX = 3
};

// Object Name: Enum Addons.ERewindState
enum class ERewindState : uint8 {
	RewindNone = 0,
	RecordData = 1,
	RewindMove = 2,
	RewindEnd = 3,
	ERewindState_MAX = 4
};

// Object Name: Enum Addons.EBioVehicleState
enum class EBioVehicleState : uint8 {
	Move = 0,
	Sprint = 1,
	Stand = 2,
	Crouch = 3,
	Prone = 4,
	Jump = 5,
	Dead = 6,
	Variation = 7,
	Born = 8,
	Stun = 9,
	StunAnim = 10,
	Shackle = 11,
	__MAX = 12,
	EBioVehicleState_MAX = 13
};

// Object Name: Enum Addons.EFlowerWingMoveState
enum class EFlowerWingMoveState : uint8 {
	None = 0,
	Sprint = 1,
	Float = 2,
	FlutterSprint = 3,
	FlutterSprintEnd = 4,
	Flash = 5,
	Diving = 6,
	EFlowerWingMoveState_MAX = 7
};

// Object Name: Enum Addons.EWallSurfaceState
enum class EWallSurfaceState : uint8 {
	None = 0,
	OnVerticalWall = 1,
	OnCeiling = 2,
	TransitionCorner = 3,
	WallToCeiling = 4,
	CeilingToWall = 5,
	ExitWallToRoof = 6,
	ExitWallToFloor = 7,
	ExitWallDismount = 8,
	EWallSurfaceState_MAX = 9
};

// Object Name: Enum Addons.EGhostBalloonMoveState
enum class EGhostBalloonMoveState : uint8 {
	None = 0,
	Rise = 1,
	Float = 2,
	Burst = 3,
	EGhostBalloonMoveState_MAX = 4
};

// Object Name: Enum Addons.EJumpPackMoveState
enum class EJumpPackMoveState : uint8 {
	None = 0,
	Boost = 1,
	Descending = 2,
	Landing = 3,
	EJumpPackMoveState_MAX = 4
};

// Object Name: Enum Addons.ELeaveNinjaTeamReason
enum class ELeaveNinjaTeamReason : uint8 {
	ELNTR_Request = 0,
	ELNTR_OutOfDistance = 1,
	ELNTR_MAX = 2
};

// Object Name: Enum Addons.EODMGearMoveState
enum class EODMGearMoveState : uint8 {
	None = 0,
	Sprint = 1,
	Rise = 2,
	Spin = 3,
	SpinEnd = 4,
	EODMGearMoveState_MAX = 5
};

// Object Name: Enum Addons.ESpiderSwingMoveState
enum class ESpiderSwingMoveState : uint8 {
	None = 0,
	Launching = 1,
	Swinging = 2,
	Releasing = 3,
	Falling = 4,
	Landing = 5,
	ESpiderSwingMoveState_MAX = 6
};

// Object Name: Enum Addons.EPterosaurSwoopStage
enum class EPterosaurSwoopStage : uint8 {
	ESwoopStage_None = 0,
	ESwoopStage_Ready = 1,
	ESwoopStage_DirectionCorrect = 2,
	ESwoopStage_SwoopMove = 3,
	ESwoopStage_PreCatch = 4,
	ESwoopStage_Catch = 5,
	ESwoopStage_Finish = 6,
	ESwoopStage_FinishNoCatch = 7,
	ESwoopStage_FinishNoCatchWithHit = 8,
	ESwoopStage_MAX = 9
};

// Object Name: Enum Addons.EBallVehicleMotionState
enum class EBallVehicleMotionState : uint8 {
	ENormalState = 0,
	EReadyForKick = 1,
	EInJumpState = 2,
	EInSecondJumpState = 3,
	EBallVehicleMotionState_MAX = 4
};

// Object Name: Enum Addons.EStealthMoveState
enum class EStealthMoveState : uint8 {
	None = 0,
	GoUnderground = 1,
	Moving = 2,
	MovingBlocked = 3,
	Exposure = 4,
	Falling = 5,
	Landing = 6,
	GoOut = 7,
	EStealthMoveState_MAX = 8
};

// Object Name: Enum Addons.EMountFromDirection
enum class EMountFromDirection : uint8 {
	EMFD_Default = 0,
	EMFD_Forward = 1,
	EMFD_Back = 2,
	EMFD_Left = 3,
	EMFD_Right = 4,
	EMFD_Origin = 5,
	EMFD_MAX = 6
};

// Object Name: Enum Addons.EHorseTransformType
enum class EHorseTransformType : uint8 {
	HTT_None = 0,
	HTT_Appear = 1,
	HTT_Disappear = 2,
	HTT_Death = 3,
	HTT_MAX = 4
};

// Object Name: Enum Addons.EBlanketDanceState
enum class EBlanketDanceState : uint8 {
	EBDS_Locomotion = 0,
	EBDS_ReadyToDance = 1,
	EBDS_Dancing = 2,
	EBDS_Idle = 3,
	EBDS_MAX = 4
};

// Object Name: Enum Addons.EBlankVehicleSwitchFailedReason
enum class EBlankVehicleSwitchFailedReason : uint8 {
	ESwitchTraceInvalid = 0,
	ESwitchInterrupted = 1,
	EBlankVehicleSwitchFailedReason_MAX = 2
};

// Object Name: Enum Addons.EBroomChargeState
enum class EBroomChargeState : uint8 {
	BroomChargeState_None = 0,
	BroomChargeState_Charging = 1,
	BroomChargeState_Dashing = 2,
	BroomChargeState_Atk = 3,
	BroomChargeState_CoolDown = 4,
	BroomChargeState_MAX = 5
};

// Object Name: Enum Addons.EFlyBioVehicleBaseMoveMode
enum class EFlyBioVehicleBaseMoveMode : uint8 {
	EMove_TakingOff = 0,
	EMove_RegularFlying = 1,
	EMove_Landing = 2,
	EMove_MAX = 3
};

// Object Name: Enum Addons.EEndDashErrorCode
enum class EEndDashErrorCode : uint8 {
	EndDash_None = 0,
	EndDash_TimeOver = 1,
	EndDash_MoveBlocked = 2,
	EndDash_ForceEnd = 3,
	EndDash_ServerAdjust = 4,
	EndDash_MAX = 5
};

// Object Name: Enum Addons.ECatapultMachineStateType
enum class ECatapultMachineStateType : uint8 {
	CMState_Initial = 0,
	CMState_ChargeReady = 1,
	CMState_Charge = 2,
	CMState_Launch = 3,
	CMState_Cooldown = 4,
	CMState_Supplement = 5,
	CMState_MAX = 6
};

// Object Name: Enum Addons.ENitrogenAccelState
enum class ENitrogenAccelState : uint8 {
	None = 0,
	Ready = 1,
	Bounce = 2,
	SideAccel = 3,
	Accel = 4,
	CoolDown = 5,
	ENitrogenAccelState_MAX = 6
};

// Object Name: Enum Addons.EHitDir
enum class EHitDir : uint8 {
	None = 0,
	forward = 2,
	right = 4,
	back = 8,
	left = 8,
	EHitDir_MAX = 9
};

// Object Name: Enum Addons.ESnowBallBrokenReason
enum class ESnowBallBrokenReason : uint8 {
	BrokenReason_Unknown = 0,
	BrokenReason_ImpactObstacle = 1,
	BrokenReason_ImpactVehicle = 2,
	BrokenReason_ImpactCharacter = 3,
	BrokenReason_ImpactNpc = 4,
	BrokenReason_GroundSlope = 5,
	BrokenReason_Falling = 6,
	BrokenReason_Swimming = 7,
	BrokenReason_NoDriver = 8,
	BrokenReason_PlayerBreak = 9,
	BrokenReason_Damaged = 10,
	BrokenReason_FreeEnoughTime = 11,
	BrokenReason_MAX = 12
};

// Object Name: Enum Addons.EStopDriftCheck
enum class EStopDriftCheck : uint8 {
	Drift_SpeedCheck = 0,
	Drift_RotationCheck = 1,
	Drift_Interrupt = 2,
	Drift_None = 3,
	Drift_MAX = 4
};

// Object Name: Enum Addons.EAmphibiousBoatInflationState
enum class EAmphibiousBoatInflationState : uint8 {
	Deflated = 0,
	Deflating = 1,
	Inflated = 2,
	Inflating = 3,
	EAmphibiousBoatInflationState_MAX = 4
};

// Object Name: Enum Addons.EAnimalMoveDir
enum class EAnimalMoveDir : uint8 {
	EMove_Forward = 0,
	EMove_Left = 1,
	EMove_Right = 2,
	EMove_Backward = 3,
	EMove_MAX = 4
};

// Object Name: Enum Addons.EBlendCrossFadeOption
enum class EBlendCrossFadeOption : uint8 {
	EBSBlend_None = 0,
	EBCFO_BlendSpace = 1,
	EBlendCrossFadeOption_MAX = 2
};

// Object Name: Enum Addons.EOffsetRootBoneMode
enum class EOffsetRootBoneMode : uint8 {
	Accumulate = 0,
	Interpolate = 1,
	Simulate = 2,
	Release = 3,
	None = 4,
	EOffsetRootBoneMode_MAX = 5
};

// Object Name: Enum Addons.EAttachedOwnerResolveMode
enum class EAttachedOwnerResolveMode : uint8 {
	Self = 0,
	Owner = 1,
	AttachParent = 2,
	EAttachedOwnerResolveMode_MAX = 3
};

// Object Name: Enum Addons.EAxisLockType
enum class EAxisLockType : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	XY = 4,
	XZ = 5,
	YZ = 6,
	EAxisLockType_MAX = 7
};

// Object Name: Enum Addons.EFlyBioVehicleMoveMode
enum class EFlyBioVehicleMoveMode : uint8 {
	EMove_TakingOff = 0,
	EMove_RegularFlying = 1,
	EMove_MAX = 2
};

// Object Name: Enum Addons.EBioFlyMoveState
enum class EBioFlyMoveState : uint8 {
	None = 0,
	TakingOff = 1,
	RegularFlying = 2,
	Landing = 3,
	EBioFlyMoveState_MAX = 4
};

// Object Name: Enum Addons.EFlyVerticalCalcMode
enum class EFlyVerticalCalcMode : uint8 {
	InputClamped = 0,
	CurveDriven = 1,
	EFlyVerticalCalcMode_MAX = 2
};

// Object Name: Enum Addons.EFlyVelocityCalcMode
enum class EFlyVelocityCalcMode : uint8 {
	SteeredBraking = 0,
	CurveControlled = 1,
	EFlyVelocityCalcMode_MAX = 2
};

// Object Name: Enum Addons.EBirdCageStatus
enum class EBirdCageStatus : uint8 {
	None = 0,
	Alive = 1,
	Destoryed = 2,
	EBirdCageStatus_MAX = 3
};

// Object Name: Enum Addons.EBlankVehicleBaseMoveMode
enum class EBlankVehicleBaseMoveMode : uint8 {
	EMove_LowFlying = 0,
	EMove_HighFlying = 1,
	EMove_RiseToHigh = 2,
	EMove_DropToLow = 3,
	EMove_Diving = 4,
	EMove_MAX = 5
};

// Object Name: Enum Addons.EBlanketFlyingState
enum class EBlanketFlyingState : uint8 {
	EBFS_LOW = 0,
	EBFS_LOW_TO_HIGH = 1,
	EBFS_HIGH = 2,
	EBFS_HIGH_TO_LOW = 3,
	EBFS_DIVING = 4,
	EBFS_MAX = 5
};

// Object Name: Enum Addons.ECharBoardMoveLeisureStyle
enum class ECharBoardMoveLeisureStyle : uint8 {
	ERandom = 0,
	ENarrow = 1,
	Default = 2,
	ECharBoardMoveLeisureStyle_MAX = 3
};

// Object Name: Enum Addons.EPendingSpawnLayoutMode
enum class EPendingSpawnLayoutMode : uint8 {
	Arrangement = 0,
	AnchorTargetOnly = 1,
	EPendingSpawnLayoutMode_MAX = 2
};

// Object Name: Enum Addons.ECamelPostureState
enum class ECamelPostureState : uint8 {
	ECS_Idle = 0,
	ECS_Rest = 1,
	ECS_Dance = 2,
	ECS_Moving = 3,
	ECS_MAX = 4
};

// Object Name: Enum Addons.EVOFlag
enum class EVOFlag : uint8 {
	EVOFlag_None = 0,
	EVOFlag_VelocityUpdate = 1,
	EVOFlag_Stop = 2,
	EVOFlag_JumpOver = 3,
	EVOFlag_FlyOver = 4,
	EVOFlag_MAX = 5
};

// Object Name: Enum Addons.ECollectedEventDataEventId
enum class ECollectedEventDataEventId : uint8 {
	GameStatus = 0,
	StartMatching = 2,
	PlaneCarrying = 6,
	PuttingDownCakeFireWorks = 11,
	RankingScore = 12,
	TakeDropItem = 13,
	UsingItem = 15,
	Falling = 17,
	Climbing = 18,
	InFieldOfView = 20,
	UnderEnermyAttack = 21,
	TakingDamage = 22,
	ReducingSignalValue = 23,
	CircleReducing = 24,
	CircleChange = 25,
	Rescue = 26,
	DrivingVehicle = 27,
	ReloadingBullet = 29,
	AirDrop = 30,
	PlayerPos = 32,
	WeaponUsage = 33,
	ItemPackageCreate = 34,
	ItemAttach = 35,
	ItemDetach = 36,
	PlayerInfo = 37,
	MiniMapShowInfo = 38,
	Following = 39,
	MiniMapPinning = 40,
	Blocking = 41,
	Dancing = 43,
	PickingupTombBox = 44,
	AirAttacking = 45,
	CurrentWeapon = 46,
	SceneInfo = 47,
	TeamInfo = 48,
	EnteringLeavingTeam = 49,
	OnOffline = 50,
	RankList = 51,
	TextMessage = 52,
	PawnState = 53,
	OpenCloseDoor = 54,
	MicSpeakerState = 55,
	VehicleState = 56,
	EnumMax = 57,
	ECollectedEventDataEventId_MAX = 58
};

// Object Name: Enum Addons.EDancingState
enum class EDancingState : uint8 {
	DancingState_Default = 0,
	DancingState_PrepareMove = 1,
	DancingState_DanceMoving = 2,
	DancingState_EndMove = 3,
	DancingState_Dancing = 5,
	DancingState_Battle = 10,
	DancingState_MAX = 11
};

// Object Name: Enum Addons.EEventDataCollectionValues_MicSpeakerState_Speaker
enum class EEventDataCollectionValues_MicSpeakerState_Speaker : uint8 {
	None = 0,
	Lbs = 1,
	Team = 2,
	EEventDataCollectionValues_MicSpeakerState_MAX = 3
};

// Object Name: Enum Addons.EEventDataCollectionValues_MicSpeakerState_Mic
enum class EEventDataCollectionValues_MicSpeakerState_Mic : uint8 {
	None = 0,
	Lbs = 1,
	Team = 2,
	KeyLbs = 1,
	KeyTeam = 2,
	EEventDataCollectionValues_MicSpeakerState_MAX = 3
};

// Object Name: Enum Addons.EEventDataCollectionValues_RankList_Type
enum class EEventDataCollectionValues_RankList_Type : uint8 {
	None = 0,
	Hot = 1,
	Lucky = 2,
	EEventDataCollectionValues_RankList_MAX = 3
};

// Object Name: Enum Addons.EFAMActiveState
enum class EFAMActiveState : uint8 {
	None = 0,
	Magnet = 1,
	EFAMActiveState_MAX = 2
};

// Object Name: Enum Addons.EFAMFlyModeType
enum class EFAMFlyModeType : uint8 {
	None = 0,
	Normal = 1,
	HighSpeed = 2,
	EFAMFlyModeType_MAX = 3
};

// Object Name: Enum Addons.EFlyCloudState
enum class EFlyCloudState : uint8 {
	CLOUD_FLY_NONE = 0,
	CLOUD_FLY_START = 1,
	CLOUD_FLY_FLOAT = 2,
	CLOUD_FLY_MAX = 3
};

// Object Name: Enum Addons.EFlySprintDirMode
enum class EFlySprintDirMode : uint8 {
	FixedDirection = 0,
	ActorForward = 1,
	ToDestLocation = 2,
	EFlySprintDirMode_MAX = 3
};

// Object Name: Enum Addons.EFrostDragonMoveMode
enum class EFrostDragonMoveMode : uint8 {
	EMove_Idle = 0,
	EMove_TakingOff = 1,
	EMove_RegularFlying = 3,
	EMove_Landing = 4,
	EMove_LandingWalking = 5,
	EMove_MAX = 6
};

// Object Name: Enum Addons.EHoverSimulateState
enum class EHoverSimulateState : uint8 {
	Idle = 0,
	Simple = 1,
	Complex = 2,
	EHoverSimulateState_MAX = 3
};

// Object Name: Enum Addons.EPoleVectorModeEnum
enum class EPoleVectorModeEnum : uint8 {
	PV_None = 0,
	PV_Position = 1,
	PV_Bone = 2,
	PV_AngleOffset = 3,
	PV_MAX = 4
};

// Object Name: Enum Addons.EEffectorSpaceEnum
enum class EEffectorSpaceEnum : uint8 {
	ES_Additive = 0,
	ES_World = 1,
	ES_Component = 2
};

// Object Name: Enum Addons.ELadderMoveType
enum class ELadderMoveType : uint8 {
	ELadderMove_None = 0,
	ELadderMove_Idle = 1,
	ELadderMove_Up = 2,
	ELadderMove_Down = 3,
	ELadderMove_JumpToTop = 4,
	ELadderMove_ExitFromBottom = 5,
	ELadderMove_EnterFromTop = 6,
	ELadderMove_EnterFromBottom = 7,
	ELadderMove_MAX = 8
};

// Object Name: Enum Addons.EMoveDirection
enum class EMoveDirection : uint8 {
	EMD_F = 0,
	EMD_FL = 1,
	EMD_FR = 2,
	EMD_B = 3,
	EMD_BL = 4,
	EMD_BR = 5,
	EMD_L = 6,
	EMD_R = 7,
	EMD_MAX = 8
};

// Object Name: Enum Addons.EBioLocomotionType
enum class EBioLocomotionType : uint8 {
	EBLT_Walk_F = 0,
	EBLT_Walk_B = 1,
	EBLT_Walk_L = 2,
	EBLT_Walk_R = 3,
	EBLT_Run_F = 4,
	EBLT_Run_B = 5,
	EBLT_RunLF = 6,
	EBLT_Run_R = 7,
	EBLT_MAX = 8
};

// Object Name: Enum Addons.EMechaMoveCustomMode
enum class EMechaMoveCustomMode : uint8 {
	EMove_None = 0,
	EMove_Glide = 1,
	EMove_Landing = 2,
	EMove_MAX = 3
};

// Object Name: Enum Addons.ECombineState
enum class ECombineState : uint8 {
	ECS_COMBINE = 0,
	ECS_UNCOMBINE = 1,
	ECS_None = 2
};

// Object Name: Enum Addons.EMirrorFindReplaceMethod
enum class EMirrorFindReplaceMethod : uint8 {
	Prefix = 0,
	Suffix = 1,
	RegularExpression = 2,
	EMirrorFindReplaceMethod_MAX = 3
};

// Object Name: Enum Addons.ECreateSkillItemType
enum class ECreateSkillItemType : uint8 {
	WaterCheckOnly = 0,
	SlopeCheck = 1,
	BuildSystemCheck = 2,
	AssociateActorDistance = 3,
	HeightDifferenceCheck = 4,
	ECreateSkillItemType_MAX = 5
};

// Object Name: Enum Addons.ENinjaTeamShape
enum class ENinjaTeamShape : uint8 {
	ENTT_Triangle = 0,
	ENTT_LineX = 1,
	ENTT_MAX = 2
};

// Object Name: Enum Addons.ENinjaMoveType
enum class ENinjaMoveType : uint8 {
	ENMT_Leader = 0,
	ENMT_Follower = 1,
	ENMT_MAX = 2
};

// Object Name: Enum Addons.ENTFoxScanDir
enum class ENTFoxScanDir : uint8 {
	Forward = 0,
	Backward = 1,
	Right = 2,
	Left = 3,
	Around = 4,
	ENTFoxScanDir_MAX = 5
};

// Object Name: Enum Addons.ENTFoxPrecisePredictionMode
enum class ENTFoxPrecisePredictionMode : uint8 {
	Disabled = 0,
	StopAtTarget = 1,
	FixedScale = 2,
	ENTFoxPrecisePredictionMode_MAX = 3
};

// Object Name: Enum Addons.EUploadAPIResponse
enum class EUploadAPIResponse : uint8 {
	EUploadAPIResponse_Success = 0,
	EUploadAPIResponse_NotSuccessful = 1,
	EUploadAPIResponse_ResponseInvalid = 2,
	EUploadAPIResponse_NotOK = 3,
	EUploadAPIResponse_MAX = 4
};

// Object Name: Enum Addons.EOceanVehicleBaseMoveMode
enum class EOceanVehicleBaseMoveMode : uint8 {
	EMove_LowFlying = 0,
	EMove_Diving = 1,
	EMove_MAX = 2
};

// Object Name: Enum Addons.EPandaIdleMode
enum class EPandaIdleMode : uint8 {
	ENPC = 0,
	EDaze = 1,
	EBeVehicle = 2,
	EMax = 3,
	EPandaIdleMode_MAX = 4
};

// Object Name: Enum Addons.EPandaFootIKStyle
enum class EPandaFootIKStyle : uint8 {
	EDefault = 0,
	EAdIK = 1,
	EPandaFootIKStyle_MAX = 2
};

// Object Name: Enum Addons.EMonsterLeisureStyle
enum class EMonsterLeisureStyle : uint8 {
	ESmall = 0,
	EBig = 1,
	EMonsterLeisureStyle_MAX = 2
};

// Object Name: Enum Addons.EVehicleEmoteInteractType
enum class EVehicleEmoteInteractType : uint8 {
	ENPC_Interact = 0,
	EBeControl = 1,
	EMax = 2,
	EVehicleEmoteInteractType_MAX = 3
};

// Object Name: Enum Addons.EFlyGroundType
enum class EFlyGroundType : uint8 {
	EFGT_Default = 0,
	EFGT_Water = 1,
	EFGT_Snow = 2,
	EFGT_MAX = 3
};

// Object Name: Enum Addons.EFlyHeightType
enum class EFlyHeightType : uint8 {
	EFHT_Ground = 0,
	EFHT_LowAir = 1,
	EFHT_HighAir = 2,
	EFHT_MAX = 3
};

// Object Name: Enum Addons.ESnowBallState
enum class ESnowBallState : uint8 {
	SnowBall_Unknown = 0,
	SnowBall_Attached = 1,
	SnowBall_Free = 2,
	SnowBall_Broken = 3,
	SnowBall_MAX = 4
};

// Object Name: Enum Addons.ETraceMissedFallback
enum class ETraceMissedFallback : uint8 {
	None = 0,
	GroundTrace = 1,
	EndPoint = 2,
	ETraceMissedFallback_MAX = 3
};

// Object Name: Enum Addons.EPickTargetMode
enum class EPickTargetMode : uint8 {
	LineTrace = 0,
	Sweep = 1,
	Screen = 2,
	FanSweep = 3,
	EPickTargetMode_MAX = 4
};

// Object Name: Enum Addons.EPterosaurMoveMode
enum class EPterosaurMoveMode : uint8 {
	EMove_Idle = 0,
	EMove_TakingOff = 1,
	EMove_RegularFlying = 2,
	EMove_Diving = 3,
	EMove_Landing = 4,
	EMove_SwoopDown = 5,
	EMove_MAX = 6
};

// Object Name: Enum Addons.ESwingVerticalPhase
enum class ESwingVerticalPhase : uint8 {
	None = 0,
	SwingUp = 1,
	SwingDown = 2,
	SwingPeak = 3,
	ESwingVerticalPhase_MAX = 4
};

// Object Name: Enum Addons.ESpiderSwingHandSide
enum class ESpiderSwingHandSide : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	Mid = 3,
	ESpiderSwingHandSide_MAX = 4
};

// Object Name: Enum Addons.EAttachRelativeLocation
enum class EAttachRelativeLocation : uint8 {
	None = 0,
	Bottom = 1,
	Middle = 2,
	Top = 3,
	EAttachRelativeLocation_MAX = 4
};

// Object Name: Enum Addons.EHitFilterType
enum class EHitFilterType : uint8 {
	EFilterByGun = 0,
	EFilterByBullet = 1,
	EHitFilterType_MAX = 2
};

// Object Name: Enum Addons.EBuffForceFinishVelocityMode
enum class EBuffForceFinishVelocityMode : uint8 {
	MaintainLastVelocity = 0,
	SetZero = 1,
	ClampVelocity = 2,
	EBuffForceFinishVelocityMode_MAX = 3
};

// Object Name: Enum Addons.EBuffForceDirection
enum class EBuffForceDirection : uint8 {
	CauserToOwner = 0,
	OwnerToCauser = 1,
	WorldDirection = 2,
	CauserForward = 3,
	DynamicBlackboard = 4,
	EBuffForceDirection_MAX = 5
};

// Object Name: Enum Addons.EBuffContinuousForceMode
enum class EBuffContinuousForceMode : uint8 {
	AddImpulse = 0,
	AddForce = 1,
	Launch = 2,
	RequestDirectMove = 3,
	RootMotionConstantForce = 4,
	EBuffContinuousForceMode_MAX = 5
};

// Object Name: Enum Addons.EBuffRequestDirectMoveType
enum class EBuffRequestDirectMoveType : uint8 {
	BRDMT_Dynamic = 0,
	BRDMT_Fix = 1,
	BRDMT_Causer = 2,
	BRDMT_MAX = 3
};

// Object Name: Enum Addons.EBuffDotValueType
enum class EBuffDotValueType : uint8 {
	BurningDamage = 0,
	ShootWeaponDamage = 1,
	AddHealth = 2,
	AddBulletNum = 3,
	AddArmor = 4,
	AddHelmet = 5,
	PoisonFogDamage = 6,
	AddEnergy = 7,
	AddWeaponDurability = 8,
	DotDamage = 9,
	SkillBlackboardInt = 10,
	SkillBlackboardFloat = 11,
	Drowning = 12,
	AddAttr = 13,
	EBuffDotValueType_MAX = 14
};

// Object Name: Enum Addons.EBuffSenseTargetState
enum class EBuffSenseTargetState : uint8 {
	Sensing = 0,
	HasEnemy = 1,
	WaitSense = 2,
	EBuffSenseTargetState_MAX = 3
};

// Object Name: Enum Addons.ELaunchDirectionType
enum class ELaunchDirectionType : uint8 {
	UseLaunchCenter = 0,
	UseSelfRotation = 1,
	UseCauserRotation = 2,
	FarAwayFromCauser = 3,
	UseWorldDirection = 10,
	ELaunchDirectionType_MAX = 11
};

// Object Name: Enum Addons.EBuffMofifyDurationType
enum class EBuffMofifyDurationType : uint8 {
	RefCauserDistance = 0,
	RefMonsterType = 1,
	RefOneAndTwo = 2,
	EBuffMofifyDurationType_MAX = 3
};

// Object Name: Enum Addons.EBuffModifyPropertyType
enum class EBuffModifyPropertyType : uint8 {
	EBMPT_Bool = 0,
	EBMPT_Int = 1,
	EBMPT_Float = 2,
	EBMPT_String = 3,
	EBMPT_MAX = 4
};

// Object Name: Enum Addons.ERotateCharacterType
enum class ERotateCharacterType : uint8 {
	RotateToCauser = 0,
	RotateAsCauser = 1,
	ERotateCharacterType_MAX = 2
};

// Object Name: Enum Addons.EUSTCheckCastingSkillType
enum class EUSTCheckCastingSkillType : uint8 {
	EUSTCheckCastingSkillType_Any = 0,
	EUSTCheckCastingSkillType_AnyNot = 1,
	EUSTCheckCastingSkillType_All = 2,
	EUSTCheckCastingSkillType_AllNot = 3,
	EUSTCheckCastingSkillType_MAX = 4
};

// Object Name: Enum Addons.EUSTCheckCastingBuffType
enum class EUSTCheckCastingBuffType : uint8 {
	EUSTCheckCastingBuffType_Any = 0,
	EUSTCheckCastingBuffType_AnyNot = 1,
	EUSTCheckCastingBuffType_All = 2,
	EUSTCheckCastingBuffType_AllNot = 3,
	EUSTCheckCastingBuffType_MAX = 4
};

// Object Name: Enum Addons.EBuffHitFaceType
enum class EBuffHitFaceType : uint8 {
	All = 0,
	Forward = 1,
	Back = 2,
	EBuffHitFaceType_MAX = 3
};

// Object Name: Enum Addons.EBuffBeHitSpaceType
enum class EBuffBeHitSpaceType : uint8 {
	All = 0,
	Stand = 1,
	Air = 2,
	EBuffBeHitSpaceType_MAX = 3
};

// Object Name: Enum Addons.EBuffKeepInStateType
enum class EBuffKeepInStateType : uint8 {
	MinUnion = 0,
	ContainOne = 1,
	EBuffKeepInStateType_MAX = 2
};

// Object Name: Enum Addons.EBuffConditionRescueType
enum class EBuffConditionRescueType : uint8 {
	EBCRT_RescueOther = 0,
	EBCRT_BeRescued = 1,
	EBCRT_RescueSelf = 2,
	EBCRT_MAX = 3
};

// Object Name: Enum Addons.ETargetClassType
enum class ETargetClassType : uint8 {
	None = 0,
	Player = 1,
	Monster = 2,
	ETargetClassType_MAX = 3
};

// Object Name: Enum Addons.EBuffEventRescueType
enum class EBuffEventRescueType : uint8 {
	BERT_RescueOther = 0,
	BERT_BeRescued = 1,
	BERT_RescueSelf = 2,
	BERT_MAX = 3
};

// Object Name: Enum Addons.EWalkType
enum class EWalkType : uint8 {
	None = 0,
	Walk = 2,
	Canter = 4,
	Run = 8,
	EWalkType_MAX = 9
};

// Object Name: Enum Addons.EWalkSTATE
enum class EWalkSTATE : uint8 {
	None = 0,
	Normal = 2,
	BreakOut = 4,
	EWalkSTATE_MAX = 5
};

// Object Name: Enum Addons.ESTMryiapodState
enum class ESTMryiapodState : uint8 {
	Stand = 0,
	FallDown = 1,
	Dead = 2,
	ESTMryiapodState_MAX = 3
};

// Object Name: Enum Addons.EHorseBehaviorType
enum class EHorseBehaviorType : uint8 {
	HorseStateType_Idle = 0,
	HorseStateType_Grass = 1,
	HorseStateType_ByRiding = 2,
	HorseStateType_MAX = 3
};

// Object Name: Enum Addons.ETitanLocomotionType
enum class ETitanLocomotionType : uint8 {
	ETLT_Walk_F = 0,
	ETLT_Walk_B = 1,
	ETLT_Walk_L = 2,
	ETLT_Walk_R = 3,
	ETLT_Run_F = 4,
	ETLT_Run_B = 5,
	ETLT_RunLF = 6,
	ETLT_Run_R = 7,
	ETLT_MAX = 8
};

// Object Name: Enum Addons.ETurnType
enum class ETurnType : uint8 {
	ETT_WaitDelta = 0,
	ETT_WaitTouchEnd = 1,
	ETT_NoTurn = 2,
	ETT_MAX = 3
};

// Object Name: Enum Addons.ETransformerCurveMoveType
enum class ETransformerCurveMoveType : uint8 {
	Curve_Unknown = 0,
	Curve_Velocity_Initial = 1,
	Curve_Velocity_LocalFrame = 2,
	Curve_MAX = 3
};

// Object Name: Enum Addons.EAccType
enum class EAccType : uint8 {
	EAt_Acc = 0,
	EAt_Dec = 1,
	EAt_None = 2,
	EAT_MAX = 3
};

// Object Name: Enum Addons.ETweenAnimLoop
enum class ETweenAnimLoop : uint8 {
	None = 0,
	Restart = 1,
	PingPong = 2,
	ETweenAnimLoop_MAX = 3
};

// Object Name: Enum Addons.ETweenAnimEase
enum class ETweenAnimEase : uint8 {
	Linear = 0,
	EaseInQuad = 1,
	EaseOutQuad = 2,
	EaseInOutQuad = 3,
	EaseInCubic = 4,
	EaseOutCubic = 5,
	EaseInOutCubic = 6,
	EaseInOutSine = 7,
	ETweenAnimEase_MAX = 8
};

// Object Name: Enum Addons.EBioVehicleSkillStopReason
enum class EBioVehicleSkillStopReason : uint8 {
	StopReason_FINISH = 0,
	StopReason_INTERRUPT = 1,
	StopReason_MAX = 2
};

// Object Name: Enum Addons.ETyranState
enum class ETyranState : uint8 {
	None = 0,
	Normal = 2,
	BreakOut = 4,
	ETyranState_MAX = 5
};

// Object Name: Enum Addons.EVehicleWeaponBoardDataType
enum class EVehicleWeaponBoardDataType : uint8 {
	EVehicleWeaponBoardDataType_None = 0,
	EVehicleWeaponBoardDataType_MuzzlePos = 1,
	EVehicleWeaponBoardDataType_MAX = 2
};

// Object Name: Enum Addons.EDelegateBindType
enum class EDelegateBindType : uint8 {
	BINDTYPE_NONE = 0,
	BINDTYPE_DYNAMIC = 1,
	BINDTYPE_DYNAMIC_MULTICAST = 2,
	BINDTYPE_LUAEVENT = 3,
	BINDTYPE_MAX = 4
};

// Object Name: Enum Addons.ECarryBackDirection
enum class ECarryBackDirection : uint8 {
	ECarryBackDirection_NONE = 0,
	ECarryBackDirection_Front = 1,
	ECarryBackDirection_Back = 2,
	ECarryBackDirection_Left = 3,
	ECarryBackDirection_Right = 4,
	ECarryBackDirection_MAX = 5
};

// Object Name: Enum Addons.ECarryBackSkillActionType
enum class ECarryBackSkillActionType : uint8 {
	ECBSAT_START = 0,
	ECBSAT_CARRYBACK = 1,
	ECBSAT_END = 2,
	ECBSAT_FAILED = 3,
	ECBSAT_NONE = 4,
	ECBSAT_MAX = 5
};

// Object Name: Enum Addons.ECarryToVehicleActionState
enum class ECarryToVehicleActionState : uint8 {
	ECTV_PREPARE = 0,
	ECTV_UPDATE = 1,
	ECTV_FINISH = 2,
	ECTV_FAILED = 3,
	ECTV_NONE = 4,
	ECTV_MAX = 5
};

// Object Name: Enum Addons.ECircleMoveDirection
enum class ECircleMoveDirection : uint8 {
	Clockwise = 0,
	CounterClockwise = 1,
	ECircleMoveDirection_MAX = 2
};

// Object Name: Enum Addons.EContinuousForceDirection
enum class EContinuousForceDirection : uint8 {
	OwnerToTarget = 0,
	WorldDirection = 1,
	OwnerForward = 2,
	OriginToTarget = 3,
	EContinuousForceDirection_MAX = 4
};

// Object Name: Enum Addons.EContinuousForceMode
enum class EContinuousForceMode : uint8 {
	AddImpulse = 0,
	AddForce = 1,
	Launch = 2,
	RequestDirectMove = 3,
	EContinuousForceMode_MAX = 4
};

// Object Name: Enum Addons.EBSSkillActionType
enum class EBSSkillActionType : uint8 {
	EBSSAT_START = 0,
	EBSSAT_PLACE = 1,
	EBSSAT_END = 2,
	EBSSAT_CHECK = 3,
	EBSSAT_PLACE_RELATIVE = 4,
	EBSSAT_CACHE = 5,
	EBSSAT_STOP_PREBUILD = 6,
	EBSSAT_NONE = 7,
	EBSSAT_MAX = 8
};

// Object Name: Enum Addons.EFindTargetStrategy
enum class EFindTargetStrategy : uint8 {
	Default = 0,
	ByAngleLeftToRight = 1,
	ByAngleRightToLeft = 2,
	EFindTargetStrategy_MAX = 3
};

// Object Name: Enum Addons.EJumpStage
enum class EJumpStage : uint8 {
	EJumpStage_Rising = 0,
	EJumpStage_Hovering = 1,
	EJumpStage_Diving = 2,
	EJumpStage_MAX = 3
};

// Object Name: Enum Addons.EPVEProjectileInitLocationType
enum class EPVEProjectileInitLocationType : uint8 {
	UseOwnerLocation = 0,
	UseTargetLocation = 1,
	UseSocketLocation = 2,
	UseBlackBoard = 3,
	UseVehicleLoc = 4,
	EPVEProjectileInitLocationType_MAX = 5
};

// Object Name: Enum Addons.ELockPPType
enum class ELockPPType : uint8 {
	ELPPT_FPP = 0,
	ELPPT_TPP = 1,
	ELPPT_MAX = 2
};

// Object Name: Enum Addons.ESkillModifyPropertyType
enum class ESkillModifyPropertyType : uint8 {
	ESMPT_Bool = 0,
	ESMPT_Int = 1,
	ESMPT_Float = 2,
	ESMPT_String = 3,
	ESMPT_MAX = 4
};

// Object Name: Enum Addons.AnimMontageTypeAndPosture
enum class AnimMontageTypeAndPosture : uint8 {
	FPS_Stand = 0,
	FPS_Crouch = 1,
	FPS_Prone = 2,
	FPS_Vehicle = 3,
	FPS_Max = 4,
	TPS_Stand = 5,
	TPS_Crouch = 6,
	TPS_Prone = 7,
	TPS_Vehicle = 8,
	TPS_Max = 9,
	AnimMontageTypeAndPosture_MAX = 10
};

// Object Name: Enum Addons.EPutDownDirection
enum class EPutDownDirection : uint8 {
	EPutDownDirection_NONE = 0,
	EPutDownDirection_Front = 1,
	EPutDownDirection_Back = 2,
	EPutDownDirection_MAX = 3
};

// Object Name: Enum Addons.EPutDownSkillActionType
enum class EPutDownSkillActionType : uint8 {
	EPDSAT_START = 0,
	EPDSAT_PUTDOWN = 1,
	EPDSAT_END = 2,
	EPDSAT_FAILED = 3,
	EPDSAT_NONE = 4,
	EPDSAT_MAX = 5
};

// Object Name: Enum Addons.ESkillTouchEvent
enum class ESkillTouchEvent : uint8 {
	ESkillTouchEvent_KEY_DOWN = 0,
	ESkillTouchEvent_KEY_UP = 1,
	ESkillTouchEvent_KEY_MAX = 2
};

// Object Name: Enum Addons.ESubAnimInsParamType
enum class ESubAnimInsParamType : uint8 {
	Bool = 0,
	Int = 1,
	Float = 2,
	Name = 3,
	Object = 4,
	ESubAnimInsParamType_MAX = 5
};

// Object Name: Enum Addons.EBeamEffectDataFromType
enum class EBeamEffectDataFromType : uint8 {
	FixedPoint = 0,
	BlackBoard = 1,
	AttachPoint = 2,
	EBeamEffectDataFromType_MAX = 3
};

// Object Name: Enum Addons.EUAESkillCheckItemType
enum class EUAESkillCheckItemType : uint8 {
	EUAESkillCheckItemType_Or = 0,
	EUAESkillCheckItemType_And = 1,
	EUAESkillCheckItemType_MAX = 2
};

// Object Name: Enum Addons.ESkillConditionIsInHouseCheckType
enum class ESkillConditionIsInHouseCheckType : uint8 {
	In = 0,
	NotIn = 1,
	ESkillConditionIsInHouseCheckType_MAX = 2
};

// Object Name: Enum Addons.ESkillConditionIsInHouseCheckTarget
enum class ESkillConditionIsInHouseCheckTarget : uint8 {
	Self = 0,
	SelfForward = 1,
	ESkillConditionIsInHouseCheckTarget_MAX = 2
};

// Object Name: Enum Addons.EAxisType
enum class EAxisType : uint8 {
	EAxis_X = 0,
	EAxis_Y = 1,
	EAxis_Z = 2,
	EAxis_MAX = 3
};

// Object Name: Enum Addons.ESCRotatorAngleType
enum class ESCRotatorAngleType : uint8 {
	ESCRotatorAngleType_Character = 0,
	ESCRotatorAngleType_Controller = 1,
	ESCRotatorAngleType_Camera = 2,
	ESCRotatorAngleType_FreeCamera = 3,
	ESCRotatorAngleType_Max = 4
};

// Object Name: Enum Addons.ESettingConfigType
enum class ESettingConfigType : uint8 {
	SCT_Int = 0,
	SCT_UInt = 1,
	SCT_Float = 2,
	SCT_Bool = 3,
	SCT_String = 4,
	SCT_MAX = 5
};

// Object Name: Enum Addons.EVineRushState
enum class EVineRushState : uint8 {
	VRS_Normal = 0,
	VRS_Search = 1,
	VRS_Wait = 2,
	VRS_Teleport = 3,
	VRS_MAX = 4
};

// Object Name: Enum Addons.EAnimHurtingTarget
enum class EAnimHurtingTarget : uint8 {
	PlayerCharacter = 0,
	SimpleCharacter = 1,
	AllCharacter = 2,
	EAnimHurtingTarget_MAX = 3
};

// Object Name: Enum Addons.EHurtApperanceRotateType
enum class EHurtApperanceRotateType : uint8 {
	ERotateToCaster = 0,
	EHurtApperanceRotateType_MAX = 1
};

// Object Name: Enum Addons.UTSkill_SoundCue_ListenType
enum class UTSkill_SoundCue_ListenType : uint8 {
	Listen_SelfOnly = 0,
	Listen_Teammate = 1,
	Listen_Target = 2,
	Listen_AllTarget = 3,
	Listen_All = 4,
	Listen_MAX = 5
};

