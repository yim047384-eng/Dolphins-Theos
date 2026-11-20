#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum HiggsBoson.EGymOpType
enum class EGymOpType : uint8 {
	None = 0,
	La = 1,
	Sm = 2,
	El = 3,
	No = 4,
	EGymOpType_MAX = 5
};

// Object Name: Enum HiggsBoson.EGaraType
enum class EGaraType : uint8 {
	Invalid = 0,
	Alpha = 1,
	Whale = 2,
	EGaraType_MAX = 3
};

// Object Name: Enum HiggsBoson.EUpdateParamsType
enum class EUpdateParamsType : uint8 {
	RotateLockShooting = 5,
	WeaponFastReload = 7,
	Parachute = 8,
	SetGameModeMoveSpeedBase = 10,
	SetGameModeMoveSpeedModifier = 11,
	MoveUtils = 12,
	MoveUtilsSkipSkillID = 14,
	ClientShootReviewSystem = 16,
	ClientGlueHiaSystem = 24,
	RecoilOnWeaponShoot = 30,
	RecoilOnKickBack = 31,
	AvatarSkipSlotTypes = 40,
	FingerTouchFlow = 41,
	EUpdateParamsType_MAX = 42
};

// Object Name: Enum HiggsBoson.ECharacterFitnessType
enum class ECharacterFitnessType : uint8 {
	None = 0,
	DistanceXY = 1,
	DistanceZ = 2,
	Distance3D = 3,
	ABS = 4,
	ContinuousID = 5,
	ContinuousInterval = 6,
	SourceSpeedZ = 7,
	SourceSpeedZBS = 8,
	SourceSpeedXY = 9,
	SourceSpeed3D = 10,
	TargetSpeedZ = 11,
	TargetSpeedZBS = 12,
	TargetSpeedXY = 13,
	TargetSpeed3D = 14,
	BeAttachedToParentTime = 15,
	SourcePawnState = 16,
	TargetPawnState = 17,
	Weapon = 18,
	BBAngle = 19,
	RelativeSpeedZ = 20,
	RelativeSpeedZBS = 21,
	RelativeSpeedXY = 22,
	RelativeSpeed3D = 23,
	SourceMovementMode = 24,
	TargetMovementMode = 25,
	SourceMovementBase = 26,
	TargetMovementBase = 27,
	Half = 30,
	Alpha = 31,
	HealthStatus = 32,
	HiPart = 33,
	Accuse = 35,
	BullySpeed = 36,
	EGameModeType = 37,
	EParachuteState = 38,
	RelativeTangentSpeed = 39,
	RelativeAngleSpeed = 40,
	SinceLastProne = 41,
	Full = 42,
	FFAngle = 43,
	CHAngle = 44,
	CVAngle = 45,
	SACount = 46,
	MaxDev = 47,
	RandDev = 49,
	WeedType = 50,
	Dura1 = 51,
	Dura2 = 52,
	AccEv = 53,
	AccAd = 54,
	ShooterLocationZ = 55,
	ShooterAreaID = 56,
	ShooterBaseIsMovable = 57,
	ECharacterFitnessType_MAX = 58
};

// Object Name: Enum HiggsBoson.ECoronaClientData
enum class ECoronaClientData : uint8 {
	Invalid = 0,
	BulletFireSpeed = 1,
	CurrentWeaponID = 2,
	GravityZ = 3,
	MinUndilatedFrameTime = 4,
	ActorTimeDilation = 5,
	ShootInterval = 6,
	ExtraHitPerformScale = 7,
	SwitchWeaponSpeedScale = 8,
	AnimationKick = 9,
	RecoilKickADS = 10,
	AccessoriesVRecoilFactor = 11,
	AccessoriesHRecoilFactor = 12,
	AccessoriesRecoveryFactor = 13,
	JumpMaxCount = 14,
	JumpZVelocity = 15,
	TimeDilation = 16,
	FireTimeID = 17,
	MaxAcceleration = 19,
	ConfigCollisionDistSqAngle = 21,
	WalkableFloorAngle = 22,
	MaxStepHeight = 23,
	ECoronaClientData_MAX = 24
};

