#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum AI.EAISoundCollectType
enum class EAISoundCollectType : uint8 {
	AISoundCollectType_Step = 1,
	AISoundCollectType_Weapon = 2,
	AISoundCollectType_Vehicle = 3,
	AISoundCollectType_Horn = 4,
	AISoundCollectType_Grenade = 5,
	AISoundCollectType_MAX = 6
};

// Object Name: Enum AI.EObstacleDetectionSpace
enum class EObstacleDetectionSpace : uint8 {
	ObstacleDetection_Box = 0,
	ObstacleDetection_CapsuleSweep = 1,
	ObstacleDetection_MAX = 2
};

// Object Name: Enum AI.EAICheckFlyingStatusType
enum class EAICheckFlyingStatusType : uint8 {
	FlyingStatus_HasNavigationSystem = 0,
	FlyingStatus_NavigationVoxelDataDone = 1,
	FlyingStatus_MAX = 2
};

// Object Name: Enum AI.EAIOcclusionPointPoseType
enum class EAIOcclusionPointPoseType : uint8 {
	Occlusion_PoseProne = 1,
	Occlusion_PoseCrouch = 2,
	Occlusion_PoseStand = 4,
	Occlusion_PoseBush = 8,
	Occlusion_MAX = 9
};

// Object Name: Enum AI.EAICheckShootingPoseType
enum class EAICheckShootingPoseType : uint8 {
	ShootingPose_Normal = 0,
	ShootingPose_Stand = 1,
	ShootingPose_Peek = 2,
	ShootingPose_WaitVisibilityCheck = 254,
	ShootingPose_MAX = 255
};

// Object Name: Enum AI.EDistanceCheckType
enum class EDistanceCheckType : uint8 {
	FixedDistance = 0,
	BlackboardKey = 1,
	ApplySensedRadius = 2,
	EDistanceCheckType_MAX = 3
};

// Object Name: Enum AI.ECompareLengthType
enum class ECompareLengthType : uint8 {
	ELengthGreater = 0,
	ELengthLess = 1,
	ELengthEequal = 2,
	ECompareLengthType_MAX = 3
};

// Object Name: Enum AI.EAIDecoratorGeneralLineTraceType
enum class EAIDecoratorGeneralLineTraceType : uint8 {
	LineTraceType_Forward = 0,
	LineTraceType_MAX = 1
};

// Object Name: Enum AI.EInSafetyCircleType
enum class EInSafetyCircleType : uint8 {
	EInSafetyCircleType_None = 0,
	EInSafetyCircleType_BlueCircle = 1,
	EInSafetyCircleType_WhiteCircle = 2,
	EInSafetyCircleType_MAX = 3
};

// Object Name: Enum AI.EItemNumCheckType
enum class EItemNumCheckType : uint8 {
	ItemNumGreater = 0,
	ItemNumLess = 1,
	ItemNumEequal = 2,
	EItemNumCheckType_MAX = 3
};

// Object Name: Enum AI.EMobHasAIStateLogic
enum class EMobHasAIStateLogic : uint8 {
	Any = 0,
	All = 1,
	None = 2,
	EMobHasAIStateLogic_MAX = 3
};

// Object Name: Enum AI.EChooseEnemySearchMethod
enum class EChooseEnemySearchMethod : uint8 {
	SearchMethod_Nearest = 0,
	SearchMethod_MostHP = 1,
	SearchMethod_LeastHP = 2,
	SearchMethod_ByBlackboardValue = 255,
	SearchMethod_MAX = 256
};

// Object Name: Enum AI.EChooseEnemyType
enum class EChooseEnemyType : uint8 {
	EnemyType_Player = 0,
	EnemyType_Animal = 1,
	EnemyType_Zombie = 2,
	EnemyType_UAV = 3,
	EnemyType_MAX = 4
};

// Object Name: Enum AI.EAISearchTeammateType
enum class EAISearchTeammateType : uint8 {
	Nearest = 1,
	LeastHP = 2,
	EAISearchTeammateType_MAX = 3
};

// Object Name: Enum AI.EMobAddHPServiceType
enum class EMobAddHPServiceType : uint8 {
	LoseTarget = 0,
	EMobAddHPServiceType_MAX = 1
};

// Object Name: Enum AI.EAISearchEnemyType
enum class EAISearchEnemyType : uint8 {
	Nearest = 1,
	Random = 2,
	Farthest = 3,
	EAISearchEnemyType_MAX = 4
};

// Object Name: Enum AI.EAISearchEnemyRule
enum class EAISearchEnemyRule : uint8 {
	SingleRule_Hatred = 1,
	SingleRule_Random = 2,
	SingleRule_Nearest = 3,
	SingleRule_Farthest = 4,
	SingleRule_MostHP = 5,
	SingleRule_PoorHP = 6,
	SingleRule_BlackboardValue = 255,
	SingleRule_MAX = 256
};

// Object Name: Enum AI.EAISearchEnemyEntityType
enum class EAISearchEnemyEntityType : uint8 {
	PlayerOnly = 1,
	PlayerAndMob = 2,
	EAISearchEnemyEntityType_MAX = 3
};

// Object Name: Enum AI.EAISearchEnemySingleRule
enum class EAISearchEnemySingleRule : uint8 {
	SingleRule_Hatred = 1,
	SingleRule_Random = 2,
	SingleRule_Nearest = 3,
	SingleRule_Farthest = 4,
	SingleRule_MostHP = 5,
	SingleRule_PoorHP = 6,
	SingleRule_BlackboardValue = 255,
	SingleRule_MAX = 256
};

// Object Name: Enum AI.EAISenseGrenadeType
enum class EAISenseGrenadeType : uint8 {
	ExplosionGrenade = 0,
	BurningGrenade = 1,
	SmokingGrenade = 2,
	FlashBomb = 3,
	Grenade_MaxNum = 4,
	EAISenseGrenadeType_MAX = 5
};

// Object Name: Enum AI.ETargetAngleCheck
enum class ETargetAngleCheck : uint8 {
	TargetAngleCheckFocus = 0,
	TargetAngleCheckFocusFail = 1,
	TargetAngleCheckFocusSuccess = 2,
	ETargetAngleCheck_MAX = 3
};

// Object Name: Enum AI.EVHQueryEnemyRule
enum class EVHQueryEnemyRule : uint8 {
	Nearest = 1,
	Random = 2,
	EVHQueryEnemyRule_MAX = 3
};

// Object Name: Enum AI.EVHEnemyType
enum class EVHEnemyType : uint8 {
	EVHEnemyType_Player = 1,
	EVHEnemyType_Car = 2,
	EVHEnemyType_Mob = 3,
	EVHEnemyType_FakePlayer = 3,
	EVHEnemyType_MAX = 4
};

// Object Name: Enum AI.EAIAdvFindOcclusionPointSearchBestOcclusionMethod
enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod : uint8 {
	Method_Normal = 0,
	Method_NearToTarget = 2,
	Method_FarToTarget = 3,
	Method_NearToSelf = 4,
	Method_RandomOfSelf = 5,
	Method_MAX = 6
};

// Object Name: Enum AI.EAIAdvFindOcclusionPointPoseType
enum class EAIAdvFindOcclusionPointPoseType : uint8 {
	Occlusion_PoseProne = 1,
	Occlusion_PoseCrouch = 2,
	Occlusion_PoseStand = 4,
	Occlusion_PoseBush = 8,
	Occlusion_MAX = 9
};

// Object Name: Enum AI.EBioVHMoveType
enum class EBioVHMoveType : uint8 {
	EMoveType_Normal = 0,
	EMoveType_Backward = 1,
	EMoveType_Directly = 2,
	EMoveType_MAX = 3
};

// Object Name: Enum AI.EFindFlyingHoverPointOneSideShapeOType
enum class EFindFlyingHoverPointOneSideShapeOType : uint8 {
	OT_RandomSide = 0,
	OT_LeftSide = 1,
	OT_RightSide = 2,
	OT_MAX = 3
};

// Object Name: Enum AI.EFindFlyingHoverPointHoverType
enum class EFindFlyingHoverPointHoverType : uint8 {
	HT_OneSideShapeO = 0,
	HT_MAX = 1
};

// Object Name: Enum AI.EFlyToPathfindingThread
enum class EFlyToPathfindingThread : uint8 {
	Sync = 0,
	ASync = 1,
	EFlyToPathfindingThread_MAX = 2
};

// Object Name: Enum AI.EMobFindAttackablePositionLineTraceType
enum class EMobFindAttackablePositionLineTraceType : uint8 {
	Normal = 0,
	HalfHeightOffset = 1,
	CustomHeightOffset = 2,
	EMobFindAttackablePositionLineTraceType_MAX = 3
};

// Object Name: Enum AI.ESearchType
enum class ESearchType : uint8 {
	CenterInSelfLocation = 0,
	CenterInSpecificLocation = 1,
	ESearchType_MAX = 2
};

// Object Name: Enum AI.EAIMoveToOcclusionFinishMovePoseType
enum class EAIMoveToOcclusionFinishMovePoseType : uint8 {
	FinishMovePoseType_Normal = 0,
	FinishMovePoseType_CrouchIfACrouchOcclusion = 1,
	FinishMovePoseType_MAX = 2
};

// Object Name: Enum AI.EAIMoveToOcclusionMovingPoseType
enum class EAIMoveToOcclusionMovingPoseType : uint8 {
	MovingPoseType_Normal = 0,
	MovingPoseType_CrouchSprintIfAlreadyCrouched = 1,
	MovingPoseType_MAX = 2
};

// Object Name: Enum AI.EAIMoveToOcclusionSearchBestOcclusionMethod
enum class EAIMoveToOcclusionSearchBestOcclusionMethod : uint8 {
	Normal = 0,
	NearToTarget = 2,
	FarToTarget = 3,
	NearToSelf = 4,
	RandomOfSelf = 5,
	EAIMoveToOcclusionSearchBestOcclusionMethod_MAX = 6
};

// Object Name: Enum AI.EAIMoveToOcclusionPoseType
enum class EAIMoveToOcclusionPoseType : uint8 {
	PoseProne = 1,
	PoseCrouch = 2,
	PoseStand = 4,
	PoseBush = 8,
	EAIMoveToOcclusionPoseType_MAX = 9
};

// Object Name: Enum AI.ESeekFlyPointHorizontalAngleType
enum class ESeekFlyPointHorizontalAngleType : uint8 {
	TargetView = 0,
	TargetToSelf = 1,
	BornLocationView = 2,
	ESeekFlyPointHorizontalAngleType_MAX = 3
};

// Object Name: Enum AI.ESeekFlyPointCenterLocType
enum class ESeekFlyPointCenterLocType : uint8 {
	Target = 0,
	Self = 1,
	BornLocation = 2,
	ESeekFlyPointCenterLocType_MAX = 3
};

// Object Name: Enum AI.ELocateType
enum class ELocateType : uint8 {
	ELocateType_Random = 0,
	ELocateType_Strategy = 1,
	ELocateType_Escape = 2,
	ELocateType_MAX = 3
};

// Object Name: Enum AI.EAIVHMoveType
enum class EAIVHMoveType : uint8 {
	ELocateType_Normal = 0,
	ELocateType_Strategy = 1,
	ELocateType_Directly = 2,
	ELocateType_Toward = 3,
	ELocateType_MAX = 4
};

// Object Name: Enum AI.EAITaskNodeThrowGrenadeMethod
enum class EAITaskNodeThrowGrenadeMethod : uint8 {
	ThrowGrenadeMethod_Normal = 0,
	ThrowGrenadeMethod_Advanced = 1,
	ThrowGrenadeMethod_MAX = 2
};

// Object Name: Enum AI.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8 {
	SpawnActor = 0,
	ActiveParticles = 1,
	DetactiveParticles = 2,
	HideMesh = 3,
	HideMeshInstance = 4,
	HideBone = 5,
	ApplyPhysicalAnimationProfile = 6,
	SetCollisionEnabled = 7,
	ECustomDamageEventReactionType_MAX = 8
};

// Object Name: Enum AI.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8 {
	OnPassedDamageThreshold = 0,
	OnAnyDamage = 1,
	ECustomDamageEventTriggerType_MAX = 2
};

// Object Name: Enum AI.EAIProviderType
enum class EAIProviderType : uint8 {
	Type_None = 0,
	Type_TEG = 1,
	Type_CCS = 2,
	Type_MAX = 3
};

// Object Name: Enum AI.EMLBotType
enum class EMLBotType : uint8 {
	BT = 0,
	MLAI = 1,
	MLDelivery = 2,
	MLTeammate = 3,
	MLHumanoid = 5,
	EMLBotType_MAX = 6
};

// Object Name: Enum AI.EMLAIJumpingPhase
enum class EMLAIJumpingPhase : uint8 {
	Before = 0,
	FreeFalling = 1,
	OpenParachute = 2,
	Landing = 3,
	EMLAIJumpingPhase_MAX = 4
};

// Object Name: Enum AI.EDiffListIDTag
enum class EDiffListIDTag : uint8 {
	NoDiff = 0,
	General = 1,
	GeneralDiff = 2,
	EDiffListIDTag_MAX = 3
};

// Object Name: Enum AI.EStatePlayerType
enum class EStatePlayerType : uint8 {
	None = 0,
	MLAI_Normal = 1,
	MLAI_Deliver = 2,
	BTAI = 3,
	Player = 4,
	MLAI_Teammate = 5,
	CandidateBTAI = 6,
	CandidateMLAI = 7,
	Player_Teammate = 8,
	MLAI_Humanoid = 9,
	MLAI_Mercenary = 10,
	EStatePlayerType_MAX = 11
};

// Object Name: Enum AI.ENearItemType
enum class ENearItemType : uint8 {
	Box = 0,
	Item = 1,
	AirDropBox = 2,
	TreasureChest = 3,
	Weed = 4,
	ENearItemType_MAX = 5
};

// Object Name: Enum AI.ESpecialZoneType
enum class ESpecialZoneType : uint8 {
	Normal = 0,
	Character = 1,
	DamageableActor = 2,
	Vehicle = 3,
	ESpecialZoneType_MAX = 4
};

// Object Name: Enum AI.EVehicleSpecialState
enum class EVehicleSpecialState : uint8 {
	BeCatched = 0,
	HoverVHMagnetStatus = 1,
	HasNitroBoostAbility = 2,
	IsNitroBoosting = 3,
	CanNitroBoost = 4,
	EVehicleSpecialState_MAX = 5
};

