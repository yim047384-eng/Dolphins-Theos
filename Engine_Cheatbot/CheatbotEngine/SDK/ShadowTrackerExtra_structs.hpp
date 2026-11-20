#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ShadowTrackerExtra.BodyTypeDef
// Size: 0x08 // Inherited bytes: 0x00
struct FBodyTypeDef {
	// Fields
	IntProperty UpThreshold; // Offset: 0x00 // Size: 0x04
	IntProperty DownThreshold; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.OpenCollisionLODAngle
// Size: 0x08 // Inherited bytes: 0x00
struct FOpenCollisionLODAngle {
	// Fields
	float DistSq; // Offset: 0x00 // Size: 0x04
	float Angle; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SeekAndLockStageConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FSeekAndLockStageConfig {
	// Fields
	float LockTotalTime; // Offset: 0x00 // Size: 0x04
	float ShrinkSpeed; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LaserTraceServerSyncData
// Size: 0x18 // Inherited bytes: 0x00
struct FLaserTraceServerSyncData {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
	struct FVector ClientTracePos; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExtraDamageInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FExtraDamageInfo {
	// Fields
	IntProperty DamageTypeId; // Offset: 0x00 // Size: 0x04
	IntProperty DamageItemID; // Offset: 0x04 // Size: 0x04
	enum class EAvatarDamagePosition DamagePosition; // Offset: 0x08 // Size: 0x01
	bool DamageToDying; // Offset: 0x09 // Size: 0x01
	bool DamageToDead; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x1]; // Offset: 0x0b // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExtensiblePawnState
// Size: 0x10 // Inherited bytes: 0x00
struct FExtensiblePawnState {
	// Fields
	struct TArray<bool> PawnStateBits; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivitySyncData
// Size: 0x1c // Inherited bytes: 0x00
struct FActivitySyncData {
	// Fields
	bool bIsDuringActivity; // Offset: 0x00 // Size: 0x01
	bool bIsAttachedToActor; // Offset: 0x01 // Size: 0x01
	bool bIsMovementDisabled; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	struct FVector AttachedOffsetLocation; // Offset: 0x04 // Size: 0x0c
	struct FRotator AttachedOffsetRotation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterHasGunBodyOffsetList
// Size: 0x1b0 // Inherited bytes: 0x00
struct FCharacterHasGunBodyOffsetList {
	// Fields
	struct FCharacterPeekBodyOffsetList NormalBodyOffsetList; // Offset: 0x00 // Size: 0xd8
	struct FCharacterPeekBodyOffsetList HasGunGunBodyOffsetList; // Offset: 0xd8 // Size: 0xd8
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterPeekBodyOffsetList
// Size: 0xd8 // Inherited bytes: 0x00
struct FCharacterPeekBodyOffsetList {
	// Fields
	struct FCharacterBodyOffset NormalBodyOffsetList; // Offset: 0x00 // Size: 0x48
	struct FCharacterBodyOffset LeftPeekBodyOffsetList; // Offset: 0x48 // Size: 0x48
	struct FCharacterBodyOffset RightPeekBodyOffsetList; // Offset: 0x90 // Size: 0x48
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterBodyOffset
// Size: 0x48 // Inherited bytes: 0x00
struct FCharacterBodyOffset {
	// Fields
	struct FVector HeadOffset; // Offset: 0x00 // Size: 0x0c
	struct FVector FootOffset; // Offset: 0x0c // Size: 0x0c
	struct FVector TPPCameraOffset; // Offset: 0x18 // Size: 0x0c
	struct FVector TPPSpringArmOffset; // Offset: 0x24 // Size: 0x0c
	struct FVector UpperArmL; // Offset: 0x30 // Size: 0x0c
	struct FVector UpperArmR; // Offset: 0x3c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.PawnStateDisable
// Size: 0x02 // Inherited bytes: 0x00
struct FPawnStateDisable {
	// Fields
	enum class EPawnState PawnState; // Offset: 0x00 // Size: 0x01
	uint8_t Disabled; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.UnmannedVehicleSyncData
// Size: 0x10 // Inherited bytes: 0x00
struct FUnmannedVehicleSyncData {
	// Fields
	enum class EUAVUseType CurrentUAVUseType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraVehicleBase* CurrentUnmannedVehicle; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletHitInfoUploadData
// Size: 0xb8 // Inherited bytes: 0x00
struct FBulletHitInfoUploadData {
	// Fields
	struct FVector ImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize RelativeImpactPoint; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantizeNormal ImpactNormal; // Offset: 0x18 // Size: 0x0c
	struct FVector_NetQuantize VictimLocation; // Offset: 0x24 // Size: 0x0c
	struct FVector_NetQuantize BulletPos; // Offset: 0x30 // Size: 0x0c
	struct FVector_NetQuantize ShootMomentMuzzlePos; // Offset: 0x3c // Size: 0x0c
	struct FVector2D ShootDir2D; // Offset: 0x48 // Size: 0x08
	char SurfaceType; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	uint32_t ShootID; // Offset: 0x54 // Size: 0x04
	IntProperty BulletTypeSpecialID; // Offset: 0x58 // Size: 0x04
	uint16_t CompensationTime; // Offset: 0x5c // Size: 0x02
	char pad_0x5E[0x2]; // Offset: 0x5e // Size: 0x02
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x60 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x68 // Size: 0x08
	IntProperty TimeStamp; // Offset: 0x70 // Size: 0x04
	IntProperty ClientShootTime; // Offset: 0x74 // Size: 0x04
	char CustomBulletID; // Offset: 0x78 // Size: 0x01
	char HitBodyType; // Offset: 0x79 // Size: 0x01
	char pad_0x7A[0x2]; // Offset: 0x7a // Size: 0x02
	uint32_t CharacterImpactOffsetSquared; // Offset: 0x7c // Size: 0x04
	float MuzzleFloorHeight; // Offset: 0x80 // Size: 0x04
	struct FVector_NetQuantize WeaponOwnerHeadPos; // Offset: 0x84 // Size: 0x0c
	float DamageRate; // Offset: 0x90 // Size: 0x04
	bool bIsFirstImpact; // Offset: 0x94 // Size: 0x01
	char pad_0x95[0x3]; // Offset: 0x95 // Size: 0x03
	struct FVector_NetQuantize GunTailPos; // Offset: 0x98 // Size: 0x0c
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct FName BoneName; // Offset: 0xa8 // Size: 0x08
	char ImpactEffectMask; // Offset: 0xb0 // Size: 0x01
	char DataSub; // Offset: 0xb1 // Size: 0x01
	char ClientShootCheck; // Offset: 0xb2 // Size: 0x01
	char pad_0xB3[0x5]; // Offset: 0xb3 // Size: 0x05
};

// Object Name: ScriptStruct ShadowTrackerExtra.VolleyShootInfoCache
// Size: 0x18 // Inherited bytes: 0x00
struct FVolleyShootInfoCache {
	// Fields
	struct FVector StartLoc; // Offset: 0x00 // Size: 0x0c
	struct FVector ShootDir; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootWeaponCustomDamageList
// Size: 0x68 // Inherited bytes: 0x00
struct FShootWeaponCustomDamageList {
	// Fields
	MapProperty Data; // Offset: 0x00 // Size: 0x50
	float RangeModifier; // Offset: 0x50 // Size: 0x04
	float ReferenceDistance; // Offset: 0x54 // Size: 0x04
	float IgnoreRangeAttenuatDis; // Offset: 0x58 // Size: 0x04
	float BaseImpactDamage; // Offset: 0x5c // Size: 0x04
	struct ASTExtraShootWeaponBulletBase* BulletClass; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootWeaponCustomDamage
// Size: 0x30 // Inherited bytes: 0x00
struct FShootWeaponCustomDamage {
	// Fields
	struct UParticleSystem* ParticleSystem; // Offset: 0x00 // Size: 0x28
	float DamageRate; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NormalProjectileVerifyConfig
// Size: 0x40 // Inherited bytes: 0x00
struct FNormalProjectileVerifyConfig {
	// Fields
	float MaxShootPointTolerateDistanceOffset; // Offset: 0x00 // Size: 0x04
	float MaxShootPointTolerateDistanceOffsetVehicle; // Offset: 0x04 // Size: 0x04
	float MaxImpactPointTolerateDistanceOffset; // Offset: 0x08 // Size: 0x04
	float BlockVerifyImpactNormalOffset; // Offset: 0x0c // Size: 0x04
	bool bVerifyBlockVerify; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty VerifyBlockTimes; // Offset: 0x14 // Size: 0x04
	bool bVerifyBulletScDiff; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float MaxDiffServerClient; // Offset: 0x1c // Size: 0x04
	bool bVerifyShootDir2D; // Offset: 0x20 // Size: 0x01
	bool bVerifyImpactPointDiff; // Offset: 0x21 // Size: 0x01
	char pad_0x22[0x2]; // Offset: 0x22 // Size: 0x02
	float ShortDirReverseDistance; // Offset: 0x24 // Size: 0x04
	float TolerateBulletDirOffsetSquared; // Offset: 0x28 // Size: 0x04
	float VerifyWeaponFireInfoTimeTorelate; // Offset: 0x2c // Size: 0x04
	bool bVerifyWeaponFireInfoTimeForcePunish; // Offset: 0x30 // Size: 0x01
	bool bVerifyClientFlySpeed; // Offset: 0x31 // Size: 0x01
	bool bVerifyLauchTimeWithServer; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x1]; // Offset: 0x33 // Size: 0x01
	float ClientServerFlyTimeTorelate; // Offset: 0x34 // Size: 0x04
	bool bVerifyMuzzleBlockTail; // Offset: 0x38 // Size: 0x01
	bool bVerifyBulletPosReverseDirBlock; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	float VerifyTailExtend; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleSeat
// Size: 0xa8 // Inherited bytes: 0x00
struct FSTExtraVehicleSeat {
	// Fields
	enum class ESTExtraVehicleSeatType SeatType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName AnimCompTagName; // Offset: 0x08 // Size: 0x08
	struct FName EnterVehicleSocket; // Offset: 0x10 // Size: 0x08
	struct FName LeaveVehicleSocket; // Offset: 0x18 // Size: 0x08
	bool bHasUpPerform; // Offset: 0x20 // Size: 0x01
	bool bHasDownPerform; // Offset: 0x21 // Size: 0x01
	enum class EMovementMode OccupyMovementMode; // Offset: 0x22 // Size: 0x01
	enum class EVHSeatWeaponHoldType HoldWeaponType; // Offset: 0x23 // Size: 0x01
	bool bUseWeaponIDBlackList; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct TArray<IntProperty> HoldWeaponIDBlackList; // Offset: 0x28 // Size: 0x10
	enum class EVHSeatSpecialType SeatSpecialType; // Offset: 0x38 // Size: 0x01
	bool IsCanLeanOut; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	struct FLeanOutVehicleSetup LeanOutSetup; // Offset: 0x3c // Size: 0x14
	bool NarrowSeatNeedUseCommomAimAnim; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	IntProperty GUIDisplayIndex; // Offset: 0x54 // Size: 0x04
	struct UCurveFloat* MinViewPitchCurve; // Offset: 0x58 // Size: 0x08
	struct FVector2D ViewPitchLimit; // Offset: 0x60 // Size: 0x08
	struct FRotator CharRotVsVehiRot; // Offset: 0x68 // Size: 0x0c
	enum class EVHSeatSideType SeatSideType; // Offset: 0x74 // Size: 0x01
	bool bEnableVehicleWeapon; // Offset: 0x75 // Size: 0x01
	bool bEnableUsedAsFreeFireSeat; // Offset: 0x76 // Size: 0x01
	bool bEnableChangeFreeFireSeat; // Offset: 0x77 // Size: 0x01
	struct TArray<struct FSTExtraVehicleWeaponConfig> VehicleWeaponConfig; // Offset: 0x78 // Size: 0x10
	bool bDefaultControlWeapon; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	IntProperty WeaponIndexForSocket; // Offset: 0x8c // Size: 0x04
	struct FName VehicleWeaponSeatSocket; // Offset: 0x90 // Size: 0x08
	float OnSeatCameraSpringArmLength; // Offset: 0x98 // Size: 0x04
	struct FVector2D CharacterPitchLimit; // Offset: 0x9c // Size: 0x08
	float ThrottleInput; // Offset: 0xa4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleWeaponConfig
// Size: 0x68 // Inherited bytes: 0x00
struct FSTExtraVehicleWeaponConfig {
	// Fields
	struct FName VehicleWeaponSocket; // Offset: 0x00 // Size: 0x08
	struct FName VehicleMeshWeaponSocket; // Offset: 0x08 // Size: 0x08
	struct AVehicleShootWeapon* VehicleWeaponClass; // Offset: 0x10 // Size: 0x08
	struct FVector2D ViewYawLimit; // Offset: 0x18 // Size: 0x08
	struct FVector2D ViewPitchLimit; // Offset: 0x20 // Size: 0x08
	bool bVerifyMuzzleDirection; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float MuzzleDirTor; // Offset: 0x2c // Size: 0x04
	bool bVerifyMuzzleLimit; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float MuzzleVehicleTore; // Offset: 0x34 // Size: 0x04
	bool bVerifyMuzzleBoxRanges; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	struct FBox MuzzleRangeBox; // Offset: 0x3c // Size: 0x1c
	float DistTorSquared; // Offset: 0x58 // Size: 0x04
	bool UseByDriver; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
	IntProperty VehicleWeaponParentIndex; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LeanOutVehicleSetup
// Size: 0x14 // Inherited bytes: 0x00
struct FLeanOutVehicleSetup {
	// Fields
	bool bPreAnimate; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float PreAnimateTime; // Offset: 0x04 // Size: 0x04
	bool bCanLeanOutUpsideDown; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float TimeIntervalToCheckLeanOut; // Offset: 0x0c // Size: 0x04
	float GunCollosionScale; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleOpPanelExceptionData
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleOpPanelExceptionData {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	bool bException; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty SeatIndex; // Offset: 0x08 // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x0c // Size: 0x04
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	uint8_t Enter; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	StrProperty ExtraData; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SeatCameraModifiers
// Size: 0x10 // Inherited bytes: 0x00
struct FSeatCameraModifiers {
	// Fields
	struct TArray<struct UClass*> CameraModifiers; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VHSeatCharacterCameraOffsetData
// Size: 0x20 // Inherited bytes: 0x00
struct FVHSeatCharacterCameraOffsetData {
	// Fields
	bool bAttachAtRoot; // Offset: 0x00 // Size: 0x01
	bool bNoInterp; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FVector SocketOffset; // Offset: 0x04 // Size: 0x0c
	struct FVector TargetOffset; // Offset: 0x10 // Size: 0x0c
	float SpringArmLength; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSeatPhysicsSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleSeatPhysicsSetup {
	// Fields
	struct TArray<struct FVehicleSeatBodySetup> BodySetups; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSeatBodySetup
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleSeatBodySetup {
	// Fields
	bool bWeldBody; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CapsuleHalfHeight; // Offset: 0x04 // Size: 0x04
	float CapsuleRadius; // Offset: 0x08 // Size: 0x04
	struct FVector RelativeLocation; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.LeaveVehicleConfig
// Size: 0xb0 // Inherited bytes: 0x00
struct FLeaveVehicleConfig {
	// Fields
	char bCheckVehicleCenterLineTraceToEnterPosWithStandPosOffset : 1; // Offset: 0x00 // Size: 0x01
	char bCheckVehicleCenterLineTraceToLeavePos : 1; // Offset: 0x00 // Size: 0x01
	char bCheckLeavePosCapsuleOverlapVer2 : 1; // Offset: 0x00 // Size: 0x01
	char bCheckEnterPosLineTraceToLeavePos : 1; // Offset: 0x00 // Size: 0x01
	char bCheckLeavePosUnderGround : 1; // Offset: 0x00 // Size: 0x01
	char bCheckCharacterUnderLeavePos : 1; // Offset: 0x00 // Size: 0x01
	char bCheckEnterPosCapsuleOverlap : 1; // Offset: 0x00 // Size: 0x01
	char bCheckEnterPosSweepToLeavePos : 1; // Offset: 0x00 // Size: 0x01
	char bCheckPhysCenterSweepToLeavePos : 1; // Offset: 0x01 // Size: 0x01
	char bCheckFallingOnVehicleAfterLeave : 1; // Offset: 0x01 // Size: 0x01
	char bShouldCollisionRspIgnorePawn : 1; // Offset: 0x01 // Size: 0x01
	char bShouldCollisionRspIgnoreVehicle : 1; // Offset: 0x01 // Size: 0x01
	char pad_0x1_4 : 4; // Offset: 0x01 // Size: 0x01
	bool bShouldIgnorePhysicsVehiclesPenetrating; // Offset: 0x02 // Size: 0x01
	bool bConsiderOwnerVehicleBlockWhenOverlapTestLeavePos; // Offset: 0x03 // Size: 0x01
	bool bCheckOwnerVehiclePhysBoxIntersect; // Offset: 0x04 // Size: 0x01
	char bShouldIgnoreRollWhenExitVehicle : 1; // Offset: 0x05 // Size: 0x01
	char bShouldIgnoreRollWhenExitVehicleUseSocket : 1; // Offset: 0x05 // Size: 0x01
	char bShouldIgnorePitchWhenExitVehicle : 1; // Offset: 0x05 // Size: 0x01
	char bShouldCheckExitDistanceNotBeyondEnterDistance : 1; // Offset: 0x05 // Size: 0x01
	char bShouldCheckDistanceToCircumscribedSphere : 1; // Offset: 0x05 // Size: 0x01
	char pad_0x5_5 : 3; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float EnterPosCapsuleHalfHeightOffset; // Offset: 0x08 // Size: 0x04
	float LeaveVehicleVaildExitVehicleHeight; // Offset: 0x0c // Size: 0x04
	float MaxAllowedClientBoxExtentFactor; // Offset: 0x10 // Size: 0x04
	float MaxAdaptFurtherDistance; // Offset: 0x14 // Size: 0x04
	float CheckIntersectWithPhysBoxRadiusScalingFactor; // Offset: 0x18 // Size: 0x04
	float MaxAllowedLeaveDistanceToCircumscribedSphere; // Offset: 0x1c // Size: 0x04
	IntProperty MaxCandidatePoints; // Offset: 0x20 // Size: 0x04
	IntProperty MaxQueryRange; // Offset: 0x24 // Size: 0x04
	char bUseNavmeshSamplePoints : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_1 : 7; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	struct FVector ProjectPointToNavigationExtent; // Offset: 0x2c // Size: 0x0c
	struct FVector NavQueryExtraBoxExtent; // Offset: 0x38 // Size: 0x0c
	IntProperty MaxNumOfSamples; // Offset: 0x44 // Size: 0x04
	IntProperty StepSize; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct FVector ExtraBoxExtent; // Offset: 0x50 // Size: 0x0c
	struct FVector AdditionalBoxExtent; // Offset: 0x5c // Size: 0x0c
	IntProperty ArroundBoxStepSize; // Offset: 0x68 // Size: 0x04
	char bSamplePointsFilteredPassWall : 1; // Offset: 0x6c // Size: 0x01
	char bSamplePointsOntoGround : 1; // Offset: 0x6c // Size: 0x01
	char bUseResolePenetration : 1; // Offset: 0x6c // Size: 0x01
	char pad_0x6C_3 : 5; // Offset: 0x6c // Size: 0x01
	bool bLineTracePassWall; // Offset: 0x6d // Size: 0x01
	bool bBackDirAdjust; // Offset: 0x6e // Size: 0x01
	char pad_0x6F[0x1]; // Offset: 0x6f // Size: 0x01
	IntProperty IterationRounds; // Offset: 0x70 // Size: 0x04
	IntProperty IterationDirections; // Offset: 0x74 // Size: 0x04
	float AdjustRadius; // Offset: 0x78 // Size: 0x04
	float AdjustMaxHeight; // Offset: 0x7c // Size: 0x04
	struct FName IgnoreTag; // Offset: 0x80 // Size: 0x08
	struct FName PushupTag; // Offset: 0x88 // Size: 0x08
	float OverlapShapeInflation; // Offset: 0x90 // Size: 0x04
	float PassWallShapeInflation; // Offset: 0x94 // Size: 0x04
	bool bEnableUtilityScoreSort; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	float SeatDistanceWeight; // Offset: 0x9c // Size: 0x04
	float SameSideWeight; // Offset: 0xa0 // Size: 0x04
	float FrontPenaltyWeight; // Offset: 0xa4 // Size: 0x04
	float BoundsDistanceWeight; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleAttachment
// Size: 0x10 // Inherited bytes: 0x00
struct FSTExtraVehicleAttachment {
	// Fields
	struct FName AttachSocket; // Offset: 0x00 // Size: 0x08
	struct AVehicleAttachmentBase* VehicleAttachementClass; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleWeaponsOnSeat
// Size: 0x20 // Inherited bytes: 0x00
struct FSTExtraVehicleWeaponsOnSeat {
	// Fields
	struct TArray<struct AVehicleShootWeapon*> WeaponsOnSeat; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> BorrowedSeat; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SeatShootVerifyConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FSeatShootVerifyConfig {
	// Fields
	bool HitBoxCenterUseAttachPoint; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector HitBoxScale; // Offset: 0x04 // Size: 0x0c
	struct FVector HitBoxOffset; // Offset: 0x10 // Size: 0x0c
	bool IsAirtightSpace; // Offset: 0x1c // Size: 0x01
	enum class EVHAirtightSpaceType AirtightSpaceType; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.STAirAttackRadialDamageEvent
// Size: 0x40 // Inherited bytes: 0x40
struct FSTAirAttackRadialDamageEvent : FRadialDamageEvent {
};

// Object Name: ScriptStruct ShadowTrackerExtra.STPointDamageEvent
// Size: 0xb0 // Inherited bytes: 0xa8
struct FSTPointDamageEvent : FPointDamageEvent {
	// Fields
	IntProperty ItemId; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STBurningDamageEvent
// Size: 0xd0 // Inherited bytes: 0xb0
struct FSTBurningDamageEvent : FSTPointDamageEvent {
	// Fields
	char pad_0xB0[0x20]; // Offset: 0xb0 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.DotDamageEvent
// Size: 0xb8 // Inherited bytes: 0xb0
struct FDotDamageEvent : FSTPointDamageEvent {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DrowningDamageEvent
// Size: 0xb0 // Inherited bytes: 0xb0
struct FDrowningDamageEvent : FSTPointDamageEvent {
};

// Object Name: ScriptStruct ShadowTrackerExtra.FallingDamageEvent
// Size: 0xb8 // Inherited bytes: 0xb0
struct FFallingDamageEvent : FSTPointDamageEvent {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeleeDamageEvent
// Size: 0xd0 // Inherited bytes: 0xb0
struct FMeleeDamageEvent : FSTPointDamageEvent {
	// Fields
	char AvatarDamagePosition; // Offset: 0xad // Size: 0x01
	char pad_0xB1[0x1f]; // Offset: 0xb1 // Size: 0x1f
};

// Object Name: ScriptStruct ShadowTrackerExtra.PoisonDamageEvent
// Size: 0xb0 // Inherited bytes: 0xb0
struct FPoisonDamageEvent : FSTPointDamageEvent {
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleDamageEvent
// Size: 0xb8 // Inherited bytes: 0xb0
struct FVehicleDamageEvent : FSTPointDamageEvent {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCharAnimParamList
// Size: 0x58 // Inherited bytes: 0x00
struct FSimpleCharAnimParamList {
	// Fields
	struct FVector Velocity; // Offset: 0x00 // Size: 0x0c
	struct FVector MoveDir; // Offset: 0x0c // Size: 0x0c
	enum class EMovementMode MovementMode; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	struct FRotator ViewRotation; // Offset: 0x1c // Size: 0x0c
	bool IsHurting; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	struct FVector HurtDir; // Offset: 0x2c // Size: 0x0c
	bool IsDying; // Offset: 0x38 // Size: 0x01
	bool IsJumping; // Offset: 0x39 // Size: 0x01
	bool IsTurning; // Offset: 0x3a // Size: 0x01
	bool ShouldPauseAnim; // Offset: 0x3b // Size: 0x01
	bool IsLeftRightMove; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	IntProperty RandomAnimID; // Offset: 0x40 // Size: 0x04
	IntProperty IdleBlendSpaceValue; // Offset: 0x44 // Size: 0x04
	float AdditiveYaw; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0xc]; // Offset: 0x4c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponHitPartCoff
// Size: 0x14 // Inherited bytes: 0x00
struct FWeaponHitPartCoff {
	// Fields
	float Head; // Offset: 0x00 // Size: 0x04
	float Body; // Offset: 0x04 // Size: 0x04
	float Limbs; // Offset: 0x08 // Size: 0x04
	float Hand; // Offset: 0x0c // Size: 0x04
	float Foot; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterLODLevelConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FMonsterLODLevelConfig {
	// Fields
	float DistIn_FovInside; // Offset: 0x00 // Size: 0x04
	float DistIn_FovOutside; // Offset: 0x04 // Size: 0x04
	float DistOut_FovInside; // Offset: 0x08 // Size: 0x04
	float DistOut_FovOutside; // Offset: 0x0c // Size: 0x04
	float TickInterval; // Offset: 0x10 // Size: 0x04
	float BatchMoveConsiderFrequency; // Offset: 0x14 // Size: 0x04
	float BatchMoveUpdateFrequency; // Offset: 0x18 // Size: 0x04
	float BatchMoveMinNetUpdateFrequency; // Offset: 0x1c // Size: 0x04
	float ConsiderFrequency; // Offset: 0x20 // Size: 0x04
	float UpdateFrequency; // Offset: 0x24 // Size: 0x04
	float MinNetUpdateFrequency; // Offset: 0x28 // Size: 0x04
	bool bIgnoreSweep; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterIdleIndex
// Size: 0x08 // Inherited bytes: 0x00
struct FMonsterIdleIndex {
	// Fields
	IntProperty PlayedIdleIndex; // Offset: 0x00 // Size: 0x04
	IntProperty ForceReplicateTag; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeleeAttackSetting
// Size: 0x1c // Inherited bytes: 0x00
struct FMeleeAttackSetting {
	// Fields
	float ImpulseLaunchScale; // Offset: 0x00 // Size: 0x04
	float ImpulseLaunchZOffset; // Offset: 0x04 // Size: 0x04
	bool bConsiderAttackerVelocity; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float MinAttackerVelocity; // Offset: 0x0c // Size: 0x04
	float MaxAttackerVelocity; // Offset: 0x10 // Size: 0x04
	float MaxVelocityInfluenceScale; // Offset: 0x14 // Size: 0x04
	bool bShouldAffectZ; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponSystemDataOnSimulateClient
// Size: 0x38 // Inherited bytes: 0x00
struct FWeaponSystemDataOnSimulateClient {
	// Fields
	struct ASTExtraWeapon* TargetWeapon; // Offset: 0x00 // Size: 0x08
	struct FName LogicSocket; // Offset: 0x08 // Size: 0x08
	char PropSocket; // Offset: 0x10 // Size: 0x01
	bool bAutoUse; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	struct FItemDefineID ID; // Offset: 0x18 // Size: 0x18
	IntProperty OperationIndex; // Offset: 0x30 // Size: 0x04
	IntProperty BagLevel; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoTriggerWeaponEventParam
// Size: 0x38 // Inherited bytes: 0x00
struct FAutoTriggerWeaponEventParam {
	// Fields
	IntProperty TargetOwnerRole; // Offset: 0x00 // Size: 0x04
	enum class EWeaponTriggerEvent TargetEvent; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FItemDefineID TargetWeaponID; // Offset: 0x08 // Size: 0x18
	bool bIgnoreItemIDInstance; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<enum class EPawnState> ForceExitPawnStateList; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpawnAndBackpackWeaponReplicatedData
// Size: 0x60 // Inherited bytes: 0x00
struct FSpawnAndBackpackWeaponReplicatedData {
	// Fields
	struct ASTExtraWeapon* TargetWeapon; // Offset: 0x00 // Size: 0x08
	struct FName LogicSocket; // Offset: 0x08 // Size: 0x08
	bool bAutoUse; // Offset: 0x10 // Size: 0x01
	bool bNeedSwitch; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	struct FItemDefineID ID; // Offset: 0x18 // Size: 0x18
	bool bResetBulletNum; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	IntProperty ClientResetBulletNum; // Offset: 0x34 // Size: 0x04
	IntProperty OperationIndex; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct AActor* WeaponOwnerActor; // Offset: 0x40 // Size: 0x08
	uint32_t OwnerCharacterPlayerKey; // Offset: 0x48 // Size: 0x04
	bool bIsValid; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
	IntProperty SyncTicket; // Offset: 0x50 // Size: 0x04
	bool bHasFinished; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	uint32_t TargetWeaponNetGUIDValue; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponCreateInstance
// Size: 0x20 // Inherited bytes: 0x00
struct FWeaponCreateInstance {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	IntProperty SyncTicket; // Offset: 0x18 // Size: 0x04
	IntProperty CreateFrameCount; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponSets
// Size: 0x50 // Inherited bytes: 0x00
struct FWeaponSets {
	// Fields
	SetProperty Weapons; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExtraDriveData
// Size: 0x08 // Inherited bytes: 0x00
struct FExtraDriveData {
	// Fields
	bool bFuelEcoMode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ShieldResistance; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleSoftWrapperArray
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleSoftWrapperArray {
	// Fields
	struct TArray<struct FParticleSoftWrapper> WrapperArray; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleSoftWrapper
// Size: 0xb0 // Inherited bytes: 0x00
struct FParticleSoftWrapper {
	// Fields
	struct UParticleSystem* Template; // Offset: 0x00 // Size: 0x28
	struct FVector Location; // Offset: 0x28 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x34 // Size: 0x0c
	struct FVector Scale; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct FName AttachSocketName; // Offset: 0x50 // Size: 0x08
	bool bAutoLoad; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	IntProperty ValidDeviceLevel; // Offset: 0x5c // Size: 0x04
	SetProperty RequireAccessoryIDs; // Offset: 0x60 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickActorParams
// Size: 0x10 // Inherited bytes: 0x00
struct FPickActorParams {
	// Fields
	struct AActor* OwnerActor; // Offset: 0x00 // Size: 0x08
	IntProperty SkillID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMovementRecordData
// Size: 0x60 // Inherited bytes: 0x00
struct FVehicleMovementRecordData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FBox PhysicsBoundBox; // Offset: 0x0c // Size: 0x1c
	struct FBox MeshBoundBox; // Offset: 0x28 // Size: 0x1c
	struct FRotator Rotation; // Offset: 0x44 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x50 // Size: 0x0c
	float ServerTimeStamp; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleHistoryData
// Size: 0x48 // Inherited bytes: 0x00
struct FVehicleHistoryData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	struct FVector Velocity; // Offset: 0x18 // Size: 0x0c
	struct FBox BoundBox; // Offset: 0x24 // Size: 0x1c
	float MoveServerTimeNew; // Offset: 0x40 // Size: 0x04
	float MoveServerTimeOld; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExplosionProjectileHitInfo
// Size: 0x44 // Inherited bytes: 0x00
struct FExplosionProjectileHitInfo {
	// Fields
	struct FVector ImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector ImpactNormal; // Offset: 0x0c // Size: 0x0c
	struct FVector ImpactVelocity; // Offset: 0x18 // Size: 0x0c
	IntProperty Item; // Offset: 0x24 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> HitActor; // Offset: 0x28 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; // Offset: 0x30 // Size: 0x08
	float BulletHitTime; // Offset: 0x38 // Size: 0x04
	float BulletLaunchTime; // Offset: 0x3c // Size: 0x04
	float BulletMovedDistance; // Offset: 0x40 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleBoostState
// Size: 0x0c // Inherited bytes: 0x00
struct FVehicleBoostState {
	// Fields
	bool IsBoosting; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float BoostValue; // Offset: 0x04 // Size: 0x04
	char SyncFlag; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleRepView
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleRepView {
	// Fields
	enum class ERotatorQuantization RotationQuantizationLevel; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FRotator Rotation; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpItemData
// Size: 0x38 // Inherited bytes: 0x00
struct FPickUpItemData {
	// Fields
	struct FItemDefineID ID; // Offset: 0x00 // Size: 0x18
	IntProperty Count; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FBattleItemAdditionalData> AdditionalDataList; // Offset: 0x20 // Size: 0x10
	IntProperty InstanceID; // Offset: 0x30 // Size: 0x04
	uint32_t OwnerUniqueID; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleExceptionData
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleExceptionData {
	// Fields
	enum class EVehicleExceptionType Type; // Offset: 0x00 // Size: 0x01
	bool FromClient; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float Time; // Offset: 0x04 // Size: 0x04
	StrProperty PlayerName; // Offset: 0x08 // Size: 0x10
	StrProperty Data; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAudioDebugData
// Size: 0x48 // Inherited bytes: 0x00
struct FVehicleAudioDebugData {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PlayerName; // Offset: 0x08 // Size: 0x10
	StrProperty DriverName; // Offset: 0x18 // Size: 0x10
	bool bEngineStarted; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float EngineSfxEndDelayTimer; // Offset: 0x2c // Size: 0x04
	enum class EVehicleAudioDebugType Type; // Offset: 0x30 // Size: 0x01
	bool IsPlaying; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x2]; // Offset: 0x32 // Size: 0x02
	IntProperty PostEventID; // Offset: 0x34 // Size: 0x04
	StrProperty ExtraData; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAutoMoveSetup
// Size: 0x0c // Inherited bytes: 0x00
struct FVehicleAutoMoveSetup {
	// Fields
	float ExitSpeed; // Offset: 0x00 // Size: 0x04
	float StuckDuration; // Offset: 0x04 // Size: 0x04
	float CheckInterval; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrailerRepMovement
// Size: 0x18 // Inherited bytes: 0x00
struct FTrailerRepMovement {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleExplodedSetup
// Size: 0x01 // Inherited bytes: 0x00
struct FVehicleExplodedSetup {
	// Fields
	bool bDetachAllCharacters; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleDestroyedSetup
// Size: 0xb0 // Inherited bytes: 0x00
struct FVehicleDestroyedSetup {
	// Fields
	bool bDetachAllCharacters; // Offset: 0x00 // Size: 0x01
	bool bUnregisterFromDataManager; // Offset: 0x01 // Size: 0x01
	bool bClearComponentTick; // Offset: 0x02 // Size: 0x01
	bool bStopAnim; // Offset: 0x03 // Size: 0x01
	bool bReleaseCharacterAnimAsset; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FName MaterialSlotName; // Offset: 0x08 // Size: 0x08
	MapProperty Materials; // Offset: 0x10 // Size: 0x50
	MapProperty PrevMaterials; // Offset: 0x60 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ESTAINoiseEventParams
// Size: 0x10 // Inherited bytes: 0x00
struct FESTAINoiseEventParams {
	// Fields
	enum class ESTAINoiseType NoiseType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Loudness; // Offset: 0x04 // Size: 0x04
	float StartAttenuationDist; // Offset: 0x08 // Size: 0x04
	float MaxRange; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSimViewData
// Size: 0x04 // Inherited bytes: 0x00
struct FVehicleSimViewData {
	// Fields
	char ViewPitch; // Offset: 0x00 // Size: 0x01
	char ViewYaw; // Offset: 0x01 // Size: 0x01
	char ViewRoll; // Offset: 0x02 // Size: 0x01
	bool FreeCamera; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleSfxLoopBase
// Size: 0x58 // Inherited bytes: 0x00
struct FSTExtraVehicleSfxLoopBase {
	// Fields
	struct UAkComponent* AkComp; // Offset: 0x00 // Size: 0x08
	MapProperty MapRTPC; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleSfxLoop
// Size: 0x80 // Inherited bytes: 0x58
struct FSTExtraVehicleSfxLoop : FSTExtraVehicleSfxLoopBase {
	// Fields
	struct UAkAudioEvent* AkEvent; // Offset: 0x58 // Size: 0x08
	enum class EVehicleAudioDebugType DebugType; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x1f]; // Offset: 0x61 // Size: 0x1f
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehBackpackItem
// Size: 0x08 // Inherited bytes: 0x00
struct FVehBackpackItem {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ItemCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleParticlePack
// Size: 0x50 // Inherited bytes: 0x00
struct FVehicleParticlePack {
	// Fields
	MapProperty ParticleSfx; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleRuntimeDataArray
// Size: 0x18 // Inherited bytes: 0x00
struct FParticleRuntimeDataArray {
	// Fields
	struct TArray<struct FParticleRuntimeData> DataArray; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleRuntimeData
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleRuntimeData {
	// Fields
	struct UParticleSystemComponent* SpawnedComponent; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillReplaceCharAnimData
// Size: 0x28 // Inherited bytes: 0x00
struct FSkillReplaceCharAnimData {
	// Fields
	enum class ECharacterAnimType CharacterAnimType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UAnimationAsset*> PoseAnimList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UAnimationAsset*> FPPPoseAnimList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemAvatarMatPath
// Size: 0x38 // Inherited bytes: 0x00
struct FItemAvatarMatPath {
	// Fields
	struct FName SlotID; // Offset: 0x00 // Size: 0x08
	struct FSoftObjectPath MatInstancePath; // Offset: 0x08 // Size: 0x18
	struct FSoftObjectPath MatBasePath; // Offset: 0x20 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetItemAvatarData
// Size: 0x20 // Inherited bytes: 0x00
struct FNetItemAvatarData {
	// Fields
	struct FItemDefineID ItemDefineID; // Offset: 0x00 // Size: 0x18
	IntProperty UpdateFlag; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterCompOutOfVisionOptimizationItem
// Size: 0x18 // Inherited bytes: 0x00
struct FCharacterCompOutOfVisionOptimizationItem {
	// Fields
	bool bAbsoluteLocation; // Offset: 0x00 // Size: 0x01
	bool bAbsoluteRotation; // Offset: 0x01 // Size: 0x01
	bool bAbsoluteScale; // Offset: 0x02 // Size: 0x01
	bool bShouldUpdateOverLaps; // Offset: 0x03 // Size: 0x01
	bool bNoSkeletonUpdate; // Offset: 0x04 // Size: 0x01
	bool bVisible; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	struct FVector Location; // Offset: 0x08 // Size: 0x0c
	enum class ECollisionEnabled EnableCollisionType; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeshSynData
// Size: 0x28 // Inherited bytes: 0x00
struct FMeshSynData {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	IntProperty Gender; // Offset: 0x18 // Size: 0x04
	enum class ESyncOperation OperationType; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	IntProperty AdditionalItemID; // Offset: 0x20 // Size: 0x04
	IntProperty DIYPlanID; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MainWeaponTableStruct
// Size: 0x18 // Inherited bytes: 0x00
struct FMainWeaponTableStruct {
	// Fields
	IntProperty KeyID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> SkillIDList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponReconnectReplicateData
// Size: 0x80 // Inherited bytes: 0x00
struct FWeaponReconnectReplicateData {
	// Fields
	struct ASTExtraPlayerController* OwnerPlayerController; // Offset: 0x00 // Size: 0x08
	struct AActor* WeaponOwner; // Offset: 0x08 // Size: 0x08
	bool UseNewReconnect; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty OwnerPlayerName; // Offset: 0x18 // Size: 0x10
	struct FName WeaponInventoryLogicSocket; // Offset: 0x28 // Size: 0x08
	struct FBulletInClip WeaponBulletInClip; // Offset: 0x30 // Size: 0x18
	uint32_t WeaponShootID; // Offset: 0x48 // Size: 0x04
	IntProperty WeaponClipID; // Offset: 0x4c // Size: 0x04
	enum class EFreshWeaponStateType CurWeaponState; // Offset: 0x50 // Size: 0x01
	enum class ESTEWeaponShootType CurShootType; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x2]; // Offset: 0x52 // Size: 0x02
	IntProperty CurShootTotalType; // Offset: 0x54 // Size: 0x04
	struct FItemDefineID DefineID; // Offset: 0x58 // Size: 0x18
	IntProperty BackpackPistolListIndex; // Offset: 0x70 // Size: 0x04
	bool bIsCurrentWeapon; // Offset: 0x74 // Size: 0x01
	char pad_0x75[0x3]; // Offset: 0x75 // Size: 0x03
	IntProperty OperationIndex; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletInClip
// Size: 0x18 // Inherited bytes: 0x00
struct FBulletInClip {
	// Fields
	IntProperty CurBulletNumInClip; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FBulletInWeapon> CurBulletIDList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletInWeapon
// Size: 0x08 // Inherited bytes: 0x00
struct FBulletInWeapon {
	// Fields
	IntProperty BulletID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SupportUpBullet
// Size: 0x08 // Inherited bytes: 0x00
struct FSupportUpBullet {
	// Fields
	IntProperty UpBulletID; // Offset: 0x00 // Size: 0x04
	IntProperty DefaultPriority; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootTimeData
// Size: 0xa0 // Inherited bytes: 0x00
struct FShootTimeData {
	// Fields
	struct FVector_NetQuantize ShootPos; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize GunPos; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantizeNormalSv MuzzleDir; // Offset: 0x18 // Size: 0x0c
	uint32_t ShootID; // Offset: 0x24 // Size: 0x04
	uint64 CurrentStates; // Offset: 0x28 // Size: 0x08
	char CapsuleHalfHeight; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float SkeletonLength; // Offset: 0x34 // Size: 0x04
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
	struct FShootTimeInfo_NetQuantize ShootInfo; // Offset: 0x40 // Size: 0x40
	uint32_t UserCmdSequence; // Offset: 0x80 // Size: 0x04
	float MoveTimeStamp; // Offset: 0x84 // Size: 0x04
	char ShootTimeConDelta; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float ShootLevelTime; // Offset: 0x8c // Size: 0x04
	struct FVector_NetQuantize GunTailPos; // Offset: 0x90 // Size: 0x0c
	char ShotFlags; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootTimeInfo_NetQuantize
// Size: 0x40 // Inherited bytes: 0x00
struct FShootTimeInfo_NetQuantize {
	// Fields
	char pad_0x0[0x40]; // Offset: 0x00 // Size: 0x40
};

// Object Name: ScriptStruct ShadowTrackerExtra.Vector_NetQuantizeNormalSv
// Size: 0x0c // Inherited bytes: 0x0c
struct FVector_NetQuantizeNormalSv : FVector {
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponCrossHairPerformData
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponCrossHairPerformData {
	// Fields
	struct TArray<struct FWeaponCrossHairIconData> Crosshair; // Offset: 0x00 // Size: 0x10
	enum class ECrossHairSpreadType SpreadType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponCrossHairIconData
// Size: 0x40 // Inherited bytes: 0x00
struct FWeaponCrossHairIconData {
	// Fields
	struct FCanvasIcon2D Icon; // Offset: 0x00 // Size: 0x18
	float Offset; // Offset: 0x18 // Size: 0x04
	struct FVector2D IconOffset; // Offset: 0x1c // Size: 0x08
	float Alpha; // Offset: 0x24 // Size: 0x04
	float Scale; // Offset: 0x28 // Size: 0x04
	float IconRotate; // Offset: 0x2c // Size: 0x04
	float LogicRotate; // Offset: 0x30 // Size: 0x04
	bool IsSpreadEnable; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	float BlendInOutRatePerSec; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CanvasIcon2D
// Size: 0x18 // Inherited bytes: 0x00
struct FCanvasIcon2D {
	// Fields
	struct UTexture2D* Texture; // Offset: 0x00 // Size: 0x08
	float U; // Offset: 0x08 // Size: 0x04
	float V; // Offset: 0x0c // Size: 0x04
	float UL; // Offset: 0x10 // Size: 0x04
	float VL; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.StringArray
// Size: 0x10 // Inherited bytes: 0x00
struct FStringArray {
	// Fields
	struct TArray<StrProperty> Strings; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttrModifyData
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponAttrModifyData {
	// Fields
	StrProperty ModifyAttr; // Offset: 0x00 // Size: 0x10
	enum class EAttrOperator Op; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float ModifyValue; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletHitInfoUploadDataInReplay
// Size: 0x270 // Inherited bytes: 0x00
struct FBulletHitInfoUploadDataInReplay {
	// Fields
	enum class EShootVertifyRes VertifyRes; // Offset: 0x00 // Size: 0x01
	enum class EShootVertifySubRes VertifySubType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct FBulletHitInfoUploadData UploadData; // Offset: 0x08 // Size: 0xb8
	struct FCharacterHistoryData VictimHistoryData; // Offset: 0xc0 // Size: 0xd0
	struct FShootTimeData ShootTimeData; // Offset: 0x190 // Size: 0xa0
	uint32_t UniqueId; // Offset: 0x230 // Size: 0x04
	bool bCacheIsVictimPosBlockShooterPos; // Offset: 0x234 // Size: 0x01
	bool bCacheIsImpactPointCanContactShooter; // Offset: 0x235 // Size: 0x01
	char pad_0x236[0x2]; // Offset: 0x236 // Size: 0x02
	float VictimNewestTimeStamp; // Offset: 0x238 // Size: 0x04
	float ShooterPing; // Offset: 0x23c // Size: 0x04
	float VictimPing; // Offset: 0x240 // Size: 0x04
	char pad_0x244[0x4]; // Offset: 0x244 // Size: 0x04
	struct TArray<enum class EShootVerifyStatType> StatData; // Offset: 0x248 // Size: 0x10
	struct FSACTimingData InTimingData; // Offset: 0x258 // Size: 0x0c
	struct FSACTimingData OutTimingData; // Offset: 0x264 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SACTimingData
// Size: 0x0c // Inherited bytes: 0x00
struct FSACTimingData {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	uint32_t UserCmdSequence; // Offset: 0x04 // Size: 0x04
	uint32_t ConsumeUserCmdSequence; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterHistoryData
// Size: 0xd0 // Inherited bytes: 0x00
struct FCharacterHistoryData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	struct FBox BoundBox; // Offset: 0x18 // Size: 0x1c
	struct FBox HeadBoundBox; // Offset: 0x34 // Size: 0x1c
	struct FQuat HeadRotation; // Offset: 0x50 // Size: 0x10
	float HBoundBoxScale; // Offset: 0x60 // Size: 0x04
	float VBoundBoxScale; // Offset: 0x64 // Size: 0x04
	float MuzzleDeviationScale; // Offset: 0x68 // Size: 0x04
	bool IsInVehicle; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	struct FVector VehicleLocation; // Offset: 0x70 // Size: 0x0c
	struct FRotator VehicleRotation; // Offset: 0x7c // Size: 0x0c
	struct FVector VehicleRotVelocity; // Offset: 0x88 // Size: 0x0c
	bool VehicleIsCorrecting; // Offset: 0x94 // Size: 0x01
	bool bUseServerWorldTime; // Offset: 0x95 // Size: 0x01
	char pad_0x96[0x2]; // Offset: 0x96 // Size: 0x02
	struct FVector Velocity; // Offset: 0x98 // Size: 0x0c
	uint32_t UserCmdSequenceNew; // Offset: 0xa4 // Size: 0x04
	uint32_t UserCmdSequenceOld; // Offset: 0xa8 // Size: 0x04
	float ClientMoveTimeStampNew; // Offset: 0xac // Size: 0x04
	float ClientMoveTimeStampOld; // Offset: 0xb0 // Size: 0x04
	uint32_t LastAckBadMoveSequence; // Offset: 0xb4 // Size: 0x04
	float MoveServerTimeNew; // Offset: 0xb8 // Size: 0x04
	float MoveServerTimeOld; // Offset: 0xbc // Size: 0x04
	enum class ESTEPoseState PoseStateNew; // Offset: 0xc0 // Size: 0x01
	enum class ESTEPoseState PoseStateOld; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x2]; // Offset: 0xc2 // Size: 0x02
	float PitchAngle; // Offset: 0xc4 // Size: 0x04
	enum class EMoveBaseSpeedType MoveBaseState; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIControllerShootInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FAIControllerShootInfo {
	// Fields
	IntProperty WeaponItemId; // Offset: 0x00 // Size: 0x04
	char PoseType; // Offset: 0x04 // Size: 0x01
	char PeekState; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float Pitch; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponVisualBulletItemConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FWeaponVisualBulletItemConfig {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UParticleSystem* VisualBulletTrackFX; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SecurityLogHitTargetInfo
// Size: 0x24 // Inherited bytes: 0x00
struct FSecurityLogHitTargetInfo {
	// Fields
	char pad_0x0[0x24]; // Offset: 0x00 // Size: 0x24
};

// Object Name: ScriptStruct ShadowTrackerExtra.LocalShootHitData
// Size: 0x78 // Inherited bytes: 0x00
struct FLocalShootHitData {
	// Fields
	uint32_t ShootID; // Offset: 0x00 // Size: 0x04
	struct FVector_NetQuantize ShootingDeviation; // Offset: 0x04 // Size: 0x0c
	struct FVector_NetQuantize BulletsBornPosition; // Offset: 0x10 // Size: 0x0c
	IntProperty BulletFlyDistance; // Offset: 0x1c // Size: 0x04
	IntProperty BulletDown; // Offset: 0x20 // Size: 0x04
	uint8_t CurBullet; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	IntProperty ShootInterval; // Offset: 0x28 // Size: 0x04
	IntProperty BulletFlyTime; // Offset: 0x2c // Size: 0x04
	IntProperty BulletShootTime; // Offset: 0x30 // Size: 0x04
	IntProperty BulletHitTime; // Offset: 0x34 // Size: 0x04
	IntProperty AimFov; // Offset: 0x38 // Size: 0x04
	char bulletDamageReduceRatio; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct FVector_NetQuantize ShootingRecoil; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	int64_t ClientStartTime; // Offset: 0x50 // Size: 0x08
	struct TArray<IntProperty> MrpcsFlow; // Offset: 0x58 // Size: 0x10
	IntProperty AutoAimSpeed; // Offset: 0x68 // Size: 0x04
	IntProperty AutoAimSpeedRateMax; // Offset: 0x6c // Size: 0x04
	IntProperty AutoAimRangeMax; // Offset: 0x70 // Size: 0x04
	IntProperty AutoAimRangeRateMax; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootWeaponDamageEvent
// Size: 0xd8 // Inherited bytes: 0xb0
struct FShootWeaponDamageEvent : FSTPointDamageEvent {
	// Fields
	char AvatarDamagePosition; // Offset: 0xad // Size: 0x01
	char pad_0xB1[0x17]; // Offset: 0xb1 // Size: 0x17
	float DamageImpulse; // Offset: 0xc8 // Size: 0x04
	struct FVector RelativeImpactPoint; // Offset: 0xcc // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SACData
// Size: 0x98 // Inherited bytes: 0x00
struct FSACData {
	// Fields
	struct TArray<struct FBulletHitInfoUploadData> HitDataArray; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FBulletHitInfoUploadBinaray> HitBinarayArray; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FBulletHitInfoWithoutDamage> HitInfoWithoutDamageArray; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FLocalShootHitData> ShootHitDataArray; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FShootTimeData> ShootTimeDatas; // Offset: 0x40 // Size: 0x10
	struct TArray<char> CopmpressBinarayData; // Offset: 0x50 // Size: 0x10
	struct TArray<uint32_t> CopmpressBinaraySectionLen; // Offset: 0x60 // Size: 0x10
	IntProperty ShootTimes; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<char> TssSdkAntiData; // Offset: 0x78 // Size: 0x10
	IntProperty TssSdkAntiDataLen; // Offset: 0x88 // Size: 0x04
	IntProperty NetworkStatus; // Offset: 0x8c // Size: 0x04
	uint32_t ReportLog; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletHitInfoWithoutDamage
// Size: 0x4c // Inherited bytes: 0x00
struct FBulletHitInfoWithoutDamage {
	// Fields
	struct FVector ImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize RelativeImpactPoint; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantizeNormal ImpactNormal; // Offset: 0x18 // Size: 0x0c
	struct FVector_NetQuantize ShootMomentMuzzlePos; // Offset: 0x24 // Size: 0x0c
	char SurfaceType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	uint32_t ShootID; // Offset: 0x34 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x38 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x40 // Size: 0x08
	char HitBodyType; // Offset: 0x48 // Size: 0x01
	bool bIsFirstImpact; // Offset: 0x49 // Size: 0x01
	char ImpactEffectMask; // Offset: 0x4a // Size: 0x01
	char pad_0x4B[0x1]; // Offset: 0x4b // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletHitInfoUploadBinaray
// Size: 0x28 // Inherited bytes: 0x00
struct FBulletHitInfoUploadBinaray {
	// Fields
	struct TArray<char> Data; // Offset: 0x00 // Size: 0x10
	uint16_t CompensationTime; // Offset: 0x10 // Size: 0x02
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x14 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x1c // Size: 0x08
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HiddenConditionData
// Size: 0x10 // Inherited bytes: 0x00
struct FHiddenConditionData {
	// Fields
	bool bFulfilled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName ConditionTag; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleBulletHitInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FSimpleBulletHitInfo {
	// Fields
	float HitTime; // Offset: 0x00 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x04 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.NextFireMinShootDataInReplay
// Size: 0xc0 // Inherited bytes: 0x00
struct FNextFireMinShootDataInReplay {
	// Fields
	uint32_t NextFireMinShootID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FBulletHitInfoUploadData UploadData; // Offset: 0x08 // Size: 0xb8
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayStartFireInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FReplayStartFireInfo {
	// Fields
	struct FStartFireInfo ClientStartFire; // Offset: 0x00 // Size: 0x18
	enum class EReuqestFireRet DsLastRequestFireRet; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	uint32_t DsNextFireMiniShootID; // Offset: 0x1c // Size: 0x04
	uint32_t DsCurClipID; // Offset: 0x20 // Size: 0x04
	uint32_t DsCurClipRecordIndex; // Offset: 0x24 // Size: 0x04
	IntProperty DsCurClipNum; // Offset: 0x28 // Size: 0x04
	IntProperty ClientRequestClipNum; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.StartFireInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FStartFireInfo {
	// Fields
	uint32_t CurShootID; // Offset: 0x00 // Size: 0x04
	IntProperty CurClipID; // Offset: 0x04 // Size: 0x04
	IntProperty CurBulletNumInClip; // Offset: 0x08 // Size: 0x04
	enum class EShootWeaponShootMode ShootMode; // Offset: 0x0c // Size: 0x01
	enum class ESTEWeaponShootType ShootType; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	float StartFireTime; // Offset: 0x10 // Size: 0x04
	IntProperty StartFireID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CacheSACData
// Size: 0xb8 // Inherited bytes: 0x00
struct FCacheSACData {
	// Fields
	struct FSACData AntiCheatData; // Offset: 0x00 // Size: 0x98
	float MaxConsumeTime; // Offset: 0x98 // Size: 0x04
	bool bNeedRemove; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	uint64 InsertFrame; // Offset: 0xa0 // Size: 0x08
	struct FSACTimingData InTimingData; // Offset: 0xa8 // Size: 0x0c
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttrModifyConfig
// Size: 0x28 // Inherited bytes: 0x00
struct FWeaponAttrModifyConfig {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ModifyConfigID; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FWeaponAttrModifyData> WeaponAttrModifiers; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimulateBulletHitInfoData
// Size: 0x48 // Inherited bytes: 0x00
struct FSimulateBulletHitInfoData {
	// Fields
	struct FVector_NetQuantize10 ImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize RelativeImpactPoint; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantizeNormal ImpactNormal; // Offset: 0x18 // Size: 0x0c
	struct FVector_NetQuantize10 ShootMomentMuzzlePos; // Offset: 0x24 // Size: 0x0c
	char SurfaceType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x34 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x3c // Size: 0x08
	char HitBodyType; // Offset: 0x44 // Size: 0x01
	char ImpactEffectMask; // Offset: 0x45 // Size: 0x01
	char pad_0x46[0x2]; // Offset: 0x46 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponClipInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FWeaponClipInfo {
	// Fields
	IntProperty ClipID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FBulletInClip BulletInClip; // Offset: 0x08 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponVerifyConfig
// Size: 0x40 // Inherited bytes: 0x00
struct FWeaponVerifyConfig {
	// Fields
	IntProperty VerifyIgnoreType; // Offset: 0x00 // Size: 0x04
	bool bVerifySooterSkeleton; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float ShooterMuzzleOffsetAdditional; // Offset: 0x08 // Size: 0x04
	float ShooterMuzzleCircleAddit; // Offset: 0x0c // Size: 0x04
	bool bUseCompressDataUpload; // Offset: 0x10 // Size: 0x01
	bool bVerifyAttachDistance; // Offset: 0x11 // Size: 0x01
	bool bForceAttach; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x1]; // Offset: 0x13 // Size: 0x01
	float MaxAttachDistanceHorizon; // Offset: 0x14 // Size: 0x04
	float MaxAttachDistanceZ; // Offset: 0x18 // Size: 0x04
	float MinAttachDistanceZ; // Offset: 0x1c // Size: 0x04
	float MaxGunRoot; // Offset: 0x20 // Size: 0x04
	float MaxMuzzleGun; // Offset: 0x24 // Size: 0x04
	float DistMuzzleGun; // Offset: 0x28 // Size: 0x04
	float MuzzleHighCD; // Offset: 0x2c // Size: 0x04
	float AimFlyCD; // Offset: 0x30 // Size: 0x04
	bool bVerifyRpgController; // Offset: 0x34 // Size: 0x01
	bool bVerifyFakeTraceBock; // Offset: 0x35 // Size: 0x01
	char pad_0x36[0x2]; // Offset: 0x36 // Size: 0x02
	float MaxBackTraceSize; // Offset: 0x38 // Size: 0x04
	bool bVerifyRpgShootInterval; // Offset: 0x3c // Size: 0x01
	bool bVerifyRpgShootDir; // Offset: 0x3d // Size: 0x01
	char pad_0x3E[0x2]; // Offset: 0x3e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerPosMarkerParam
// Size: 0x10 // Inherited bytes: 0x00
struct FPlayerPosMarkerParam {
	// Fields
	struct ACharacter* Player; // Offset: 0x00 // Size: 0x08
	float MarkTimeLen; // Offset: 0x08 // Size: 0x04
	IntProperty MarkIcon; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MovementRecordData
// Size: 0xb0 // Inherited bytes: 0x00
struct FMovementRecordData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	struct FVector Velocity; // Offset: 0x18 // Size: 0x0c
	struct FVector ControllerNormalRot; // Offset: 0x24 // Size: 0x0c
	struct FVector SimulateViewNormalRot; // Offset: 0x30 // Size: 0x0c
	float ServerTimeStamp; // Offset: 0x3c // Size: 0x04
	bool IsInVehicle; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	struct FVector VehicleLocation; // Offset: 0x44 // Size: 0x0c
	struct FRotator VehicleRotation; // Offset: 0x50 // Size: 0x0c
	struct FVector VehicleRotVelocity; // Offset: 0x5c // Size: 0x0c
	bool VehicleIsCorrecting; // Offset: 0x68 // Size: 0x01
	enum class ESTEPoseState PoseState; // Offset: 0x69 // Size: 0x01
	enum class EMoveBaseSpeedType MoveBaseState; // Offset: 0x6a // Size: 0x01
	char pad_0x6B[0x1]; // Offset: 0x6b // Size: 0x01
	float PingMillisecond; // Offset: 0x6c // Size: 0x04
	bool IsCustomMove; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	struct FExtensiblePawnState ExtensiblePawnState; // Offset: 0x78 // Size: 0x10
	uint32_t UserCmdSequence; // Offset: 0x88 // Size: 0x04
	float ClientMoveTimeStamp; // Offset: 0x8c // Size: 0x04
	uint32_t LastAckBadMoveSequence; // Offset: 0x90 // Size: 0x04
	bool bHasWeapon; // Offset: 0x94 // Size: 0x01
	bool bUseServerWorldTime; // Offset: 0x95 // Size: 0x01
	char pad_0x96[0x2]; // Offset: 0x96 // Size: 0x02
	IntProperty EmoteId; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct FQuat HeadRotation; // Offset: 0xa0 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AttachVehiclDebugInfo
// Size: 0x03 // Inherited bytes: 0x00
struct FAttachVehiclDebugInfo {
	// Fields
	bool bEnterVehicle; // Offset: 0x00 // Size: 0x01
	enum class EAttachVehiclErrorType AttachErrorType; // Offset: 0x01 // Size: 0x01
	enum class EVehiclVisibleErrorType VisibleErrorType; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.HealthPredictShowData
// Size: 0x38 // Inherited bytes: 0x00
struct FHealthPredictShowData {
	// Fields
	StrProperty ShowDataKey; // Offset: 0x00 // Size: 0x10
	enum class EHealthPredictShowType ShowType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float Value; // Offset: 0x14 // Size: 0x04
	float LimitValue; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty MaxAttrName; // Offset: 0x20 // Size: 0x10
	uint32_t CauserPlayerKey; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STCustomRadialDamageEvent
// Size: 0xb8 // Inherited bytes: 0x40
struct FSTCustomRadialDamageEvent : FRadialDamageEvent {
	// Fields
	char pad_0x40[0x70]; // Offset: 0x40 // Size: 0x70
	bool bPlayHurtAnim; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.STRadialDamageEvent
// Size: 0xb8 // Inherited bytes: 0xb8
struct FSTRadialDamageEvent : FSTCustomRadialDamageEvent {
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientFatalDamageRecordData
// Size: 0xd0 // Inherited bytes: 0x00
struct FClientFatalDamageRecordData {
	// Fields
	StrProperty Causer; // Offset: 0x00 // Size: 0x10
	StrProperty CauserNation; // Offset: 0x10 // Size: 0x10
	StrProperty VictimName; // Offset: 0x20 // Size: 0x10
	StrProperty VictimNation; // Offset: 0x30 // Size: 0x10
	StrProperty FuzzyCauserName; // Offset: 0x40 // Size: 0x10
	StrProperty FuzzyVictimName; // Offset: 0x50 // Size: 0x10
	IntProperty DamageType; // Offset: 0x60 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x64 // Size: 0x04
	IntProperty CauserWeaponAvatarID; // Offset: 0x68 // Size: 0x04
	IntProperty CauserClothAvatarID; // Offset: 0x6c // Size: 0x04
	bool IsHeadShot; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	IntProperty ResultHealthStatus; // Offset: 0x74 // Size: 0x04
	enum class EFatalDamageRelationShip RecordRelationShip; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	IntProperty PreviousHealthStatus; // Offset: 0x7c // Size: 0x04
	StrProperty RealKillerName; // Offset: 0x80 // Size: 0x10
	IntProperty RealKillNum; // Offset: 0x90 // Size: 0x04
	enum class EFatalDamageCharacterType CauserType; // Offset: 0x94 // Size: 0x01
	enum class EFatalDamageCharacterType VictimType; // Offset: 0x95 // Size: 0x01
	char pad_0x96[0x2]; // Offset: 0x96 // Size: 0x02
	IntProperty CauserTeamID; // Offset: 0x98 // Size: 0x04
	IntProperty VictimTeamID; // Offset: 0x9c // Size: 0x04
	bool IsUseColor; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x3]; // Offset: 0xa1 // Size: 0x03
	struct FLinearColor UseColor; // Offset: 0xa4 // Size: 0x10
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	struct TArray<char> ExpandDataContent; // Offset: 0xb8 // Size: 0x10
	IntProperty AssitNum; // Offset: 0xc8 // Size: 0x04
	char pad_0xCC[0x4]; // Offset: 0xcc // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FatalDamageParameterCompress
// Size: 0xc0 // Inherited bytes: 0x00
struct FFatalDamageParameterCompress {
	// Fields
	StrProperty causerName; // Offset: 0x00 // Size: 0x10
	StrProperty VictimName; // Offset: 0x10 // Size: 0x10
	StrProperty FuzzyCauserName; // Offset: 0x20 // Size: 0x10
	StrProperty FuzzyVictimName; // Offset: 0x30 // Size: 0x10
	StrProperty RealKillerName; // Offset: 0x40 // Size: 0x10
	StrProperty CauserNation; // Offset: 0x50 // Size: 0x10
	StrProperty VictimNation; // Offset: 0x60 // Size: 0x10
	IntProperty DamageType; // Offset: 0x70 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x74 // Size: 0x04
	bool IsHeadShot; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	IntProperty ResultHealthStatus; // Offset: 0x7c // Size: 0x04
	IntProperty Relationship; // Offset: 0x80 // Size: 0x04
	IntProperty PreviousHealthStatus; // Offset: 0x84 // Size: 0x04
	IntProperty realKillerNewKillNum; // Offset: 0x88 // Size: 0x04
	uint32_t CauserKey; // Offset: 0x8c // Size: 0x04
	uint32_t VictimKey; // Offset: 0x90 // Size: 0x04
	IntProperty CauserWeaponAvatarID; // Offset: 0x94 // Size: 0x04
	IntProperty CauserClothAvatarID; // Offset: 0x98 // Size: 0x04
	IntProperty CauserType; // Offset: 0x9c // Size: 0x04
	IntProperty VictimType; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<char> ExpandDataContent; // Offset: 0xa8 // Size: 0x10
	IntProperty AssistNum; // Offset: 0xb8 // Size: 0x04
	bool isCausedByDevliver; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageCauserRecordData
// Size: 0x28 // Inherited bytes: 0x00
struct FDamageCauserRecordData {
	// Fields
	struct AController* Causer; // Offset: 0x00 // Size: 0x08
	float Time; // Offset: 0x08 // Size: 0x04
	float Damage; // Offset: 0x0c // Size: 0x04
	IntProperty StatusChangeMargin; // Offset: 0x10 // Size: 0x04
	IntProperty DamageType; // Offset: 0x14 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x18 // Size: 0x04
	bool bIsHeadShot; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	IntProperty WeaponId; // Offset: 0x20 // Size: 0x04
	IntProperty FloorType; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootDamageTipsStr
// Size: 0x10 // Inherited bytes: 0x00
struct FShootDamageTipsStr {
	// Fields
	struct ASTExtraBaseCharacter* DamageTarget; // Offset: 0x00 // Size: 0x08
	float Damage; // Offset: 0x08 // Size: 0x04
	bool IsHeadShotDamage; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.PointDamageInfo
// Size: 0xc8 // Inherited bytes: 0x00
struct FPointDamageInfo {
	// Fields
	float Damage; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FSTPointDamageEvent DamageEvent; // Offset: 0x08 // Size: 0xb0
	struct APawn* DamageInstigatorPawn; // Offset: 0xb8 // Size: 0x08
	float CurHeath; // Offset: 0xc0 // Size: 0x04
	bool bFatalHealthCost; // Offset: 0xc4 // Size: 0x01
	bool bHeadShotDamage; // Offset: 0xc5 // Size: 0x01
	char RespawnCount; // Offset: 0xc6 // Size: 0x01
	char pad_0xC7[0x1]; // Offset: 0xc7 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerAnimList
// Size: 0x168 // Inherited bytes: 0x00
struct FPlayerAnimList {
	// Fields
	IntProperty FrameCounter; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FPlayerAnimData MovementAnim; // Offset: 0x08 // Size: 0x10
	struct FPlayerAnimData AimAnim; // Offset: 0x18 // Size: 0x10
	struct FPlayerAnimData ReloadAnim; // Offset: 0x28 // Size: 0x10
	struct FPlayerAnimData FillGasAnim; // Offset: 0x38 // Size: 0x10
	struct FPlayerAnimData EquipWeaponAnim; // Offset: 0x48 // Size: 0x10
	struct FPlayerAnimData ChangePoseAnim; // Offset: 0x58 // Size: 0x10
	struct FPlayerAnimData PickUpAnim; // Offset: 0x68 // Size: 0x10
	struct FPlayerAnimData FireAnim; // Offset: 0x78 // Size: 0x10
	struct FPlayerAnimData FireAccAnim; // Offset: 0x88 // Size: 0x10
	struct FPlayerAnimData PostFireAnim; // Offset: 0x98 // Size: 0x10
	struct FPlayerAnimData HurtAnim; // Offset: 0xa8 // Size: 0x10
	struct FPlayerAnimData TurnAnim; // Offset: 0xb8 // Size: 0x10
	struct FPlayerAnimData PullingPlugAnim; // Offset: 0xc8 // Size: 0x10
	struct FPlayerAnimData PutDownWeaponAnim; // Offset: 0xd8 // Size: 0x10
	struct FPlayerAnimData WeaponIdle; // Offset: 0xe8 // Size: 0x10
	struct FPlayerAnimData ForegripAnim; // Offset: 0xf8 // Size: 0x10
	struct FPlayerAnimData ShoudlerWeaponIdle; // Offset: 0x108 // Size: 0x10
	struct FPlayerAnimData BeCarriedBackMoveAnim; // Offset: 0x118 // Size: 0x10
	struct FPlayerAnimData BeCarriedBackPickUpAnim; // Offset: 0x128 // Size: 0x10
	struct TArray<struct FPlayerAnimData> JumpAnimList; // Offset: 0x138 // Size: 0x10
	struct TArray<struct FPlayerAnimData> ShovelAnimList; // Offset: 0x148 // Size: 0x10
	struct TArray<struct FPlayerAnimData> ExtraAnimList; // Offset: 0x158 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ResolvePenetrationParams
// Size: 0x80 // Inherited bytes: 0x00
struct FResolvePenetrationParams {
	// Fields
	bool bLineTracePassWall; // Offset: 0x00 // Size: 0x01
	bool bIgnorePassWall; // Offset: 0x01 // Size: 0x01
	bool bBackDirAdjust; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	struct FVector BackDir; // Offset: 0x04 // Size: 0x0c
	IntProperty IterationBackDir; // Offset: 0x10 // Size: 0x04
	IntProperty IterationRounds; // Offset: 0x14 // Size: 0x04
	IntProperty IterationDirections; // Offset: 0x18 // Size: 0x04
	float AdjustRadius; // Offset: 0x1c // Size: 0x04
	float AdjustMaxHeight; // Offset: 0x20 // Size: 0x04
	bool bRaiseUpAdjust; // Offset: 0x24 // Size: 0x01
	bool bAdjustDown; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
	struct FName IgnoreTag; // Offset: 0x28 // Size: 0x08
	struct FName PushupTag; // Offset: 0x30 // Size: 0x08
	struct FName IgnorePasswallTag; // Offset: 0x38 // Size: 0x08
	float OverlapShapeInflation; // Offset: 0x40 // Size: 0x04
	float PassWallShapeInflation; // Offset: 0x44 // Size: 0x04
	struct UWorld* InWorld; // Offset: 0x48 // Size: 0x08
	struct TArray<struct AActor*> OverlapIgnoreActors; // Offset: 0x50 // Size: 0x10
	struct TArray<struct AActor*> PassWallIgnoreActors; // Offset: 0x60 // Size: 0x10
	bool bTeleportIgnoreCheckPassWall; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	struct FVector OverrideCapsuleSize; // Offset: 0x74 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackpackReplayData
// Size: 0x68 // Inherited bytes: 0x00
struct FBackpackReplayData {
	// Fields
	float OccupiedCapacity; // Offset: 0x00 // Size: 0x04
	float BackpackCapacity; // Offset: 0x04 // Size: 0x04
	float OccupiedSafetyBoxCapacity; // Offset: 0x08 // Size: 0x04
	float SafetyBoxCapacity; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FBackpackReplayItem> ReplayItems; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FCustomAccessoriesData> ReplayCustomAccData; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x28]; // Offset: 0x40 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackpackReplayItem
// Size: 0x40 // Inherited bytes: 0x00
struct FBackpackReplayItem {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
	uint64 ItemState; // Offset: 0x10 // Size: 0x08
	bool bMarkDelete; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct TArray<struct FItemDefineID> AssociationDefineIDArray; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterEnergyData
// Size: 0x40 // Inherited bytes: 0x00
struct FCharacterEnergyData {
	// Fields
	struct TArray<struct FCharacterEnergyPhase> EnergyEffactPhase; // Offset: 0x00 // Size: 0x10
	float EnergyMax; // Offset: 0x10 // Size: 0x04
	float EnergyCurrent; // Offset: 0x14 // Size: 0x04
	float EnergyPredict; // Offset: 0x18 // Size: 0x04
	float AttenuationPeriod; // Offset: 0x1c // Size: 0x04
	float AttenuationAmount; // Offset: 0x20 // Size: 0x04
	float PassedDeltaTime; // Offset: 0x24 // Size: 0x04
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterEnergyPhase
// Size: 0x20 // Inherited bytes: 0x00
struct FCharacterEnergyPhase {
	// Fields
	float MakeEffectSection; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty BuffName; // Offset: 0x08 // Size: 0x10
	IntProperty BuffID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageCauserData
// Size: 0x10 // Inherited bytes: 0x00
struct FDamageCauserData {
	// Fields
	struct AController* Instigator; // Offset: 0x00 // Size: 0x08
	struct AActor* Causer; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamList
// Size: 0x13c // Inherited bytes: 0x00
struct FAnimParamList {
	// Fields
	IntProperty FrameCounter; // Offset: 0x00 // Size: 0x04
	struct FVector Velocity; // Offset: 0x04 // Size: 0x0c
	struct FVector MoveDir; // Offset: 0x10 // Size: 0x0c
	enum class EMovementMode MovementMode; // Offset: 0x1c // Size: 0x01
	enum class ECustomMovmentMode CustomMovementMode; // Offset: 0x1d // Size: 0x01
	enum class ECharacterPoseType PoseType; // Offset: 0x1e // Size: 0x01
	char pad_0x1F[0x1]; // Offset: 0x1f // Size: 0x01
	struct FRotator ViewRotation; // Offset: 0x20 // Size: 0x0c
	struct FRotator ControlRotation; // Offset: 0x2c // Size: 0x0c
	enum class EWeaponType WeaponType; // Offset: 0x38 // Size: 0x01
	enum class EWeaponTypeNew WeaponTypeNew; // Offset: 0x39 // Size: 0x01
	enum class EWeaponHoldType WeaponHoldType; // Offset: 0x3a // Size: 0x01
	enum class EFreshWeaponStateType WeaponState; // Offset: 0x3b // Size: 0x01
	enum class EWeaponReloadMethod WeaponReloadMethod; // Offset: 0x3c // Size: 0x01
	bool bScopeInBoltActionEnable; // Offset: 0x3d // Size: 0x01
	enum class ESightType SightType; // Offset: 0x3e // Size: 0x01
	char pad_0x3F[0x1]; // Offset: 0x3f // Size: 0x01
	float RecoilKick; // Offset: 0x40 // Size: 0x04
	float RecoilKickADS; // Offset: 0x44 // Size: 0x04
	float ForegripParam; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct FVector OffsetFPPLocation; // Offset: 0x50 // Size: 0x0c
	struct FRotator OffsetFPPRotation; // Offset: 0x5c // Size: 0x0c
	struct FVector OffsetFPPCrouchLocation; // Offset: 0x68 // Size: 0x0c
	struct FRotator OffsetFPPCrouchRotation; // Offset: 0x74 // Size: 0x0c
	struct FVector OffsetFPPProneLocation; // Offset: 0x80 // Size: 0x0c
	struct FRotator OffsetFPPProneRotation; // Offset: 0x8c // Size: 0x0c
	struct FVector OffsetAngledFPPLocation; // Offset: 0x98 // Size: 0x0c
	struct FRotator OffsetAngledFPPRotation; // Offset: 0xa4 // Size: 0x0c
	struct FVector OffsetAngledFPPCrouchLocation; // Offset: 0xb0 // Size: 0x0c
	struct FRotator OffsetAngledFPPCrouchRotation; // Offset: 0xbc // Size: 0x0c
	struct FVector OffsetAngledFPPProneLocation; // Offset: 0xc8 // Size: 0x0c
	struct FRotator OffsetAngledFPPProneRotation; // Offset: 0xd4 // Size: 0x0c
	bool bIsAngledOpticalSight; // Offset: 0xe0 // Size: 0x01
	bool IsHurting; // Offset: 0xe1 // Size: 0x01
	bool IsNearDeathStatus; // Offset: 0xe2 // Size: 0x01
	bool IsRescueing; // Offset: 0xe3 // Size: 0x01
	bool IsSprinting; // Offset: 0xe4 // Size: 0x01
	char pad_0xE5[0x3]; // Offset: 0xe5 // Size: 0x03
	struct FVector HurtDir; // Offset: 0xe8 // Size: 0x0c
	bool IsDying; // Offset: 0xf4 // Size: 0x01
	bool IsJumping; // Offset: 0xf5 // Size: 0x01
	enum class ECharacterJumpType JumpType; // Offset: 0xf6 // Size: 0x01
	bool IsTurning; // Offset: 0xf7 // Size: 0x01
	bool IsOnVehicle; // Offset: 0xf8 // Size: 0x01
	bool IsDisableAim; // Offset: 0xf9 // Size: 0x01
	char pad_0xFA[0x2]; // Offset: 0xfa // Size: 0x02
	float HandleFolderFactor; // Offset: 0xfc // Size: 0x04
	float CharacterYawRotateRate; // Offset: 0x100 // Size: 0x04
	bool ShouldPauseAnim; // Offset: 0x104 // Size: 0x01
	bool bCarryBack; // Offset: 0x105 // Size: 0x01
	bool bParachuteNearDeath; // Offset: 0x106 // Size: 0x01
	char pad_0x107[0x1]; // Offset: 0x107 // Size: 0x01
	float CarryBlendTimeAccumulator; // Offset: 0x108 // Size: 0x04
	float CarryBlendResetTime; // Offset: 0x10c // Size: 0x04
	float ParachuteNearDeathBlendTimeAccumulator; // Offset: 0x110 // Size: 0x04
	bool bHasTurnAnim; // Offset: 0x114 // Size: 0x01
	bool bAlwaysLandLight; // Offset: 0x115 // Size: 0x01
	char pad_0x116[0x26]; // Offset: 0x116 // Size: 0x26
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimVehParamList
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimVehParamList {
	// Fields
	IntProperty FrameCounter; // Offset: 0x00 // Size: 0x04
	bool IsLeanOut; // Offset: 0x04 // Size: 0x01
	bool IsDriver; // Offset: 0x05 // Size: 0x01
	bool IsSwitchingSeat; // Offset: 0x06 // Size: 0x01
	bool IsIdleAnimReplaced; // Offset: 0x07 // Size: 0x01
	float VacateHight; // Offset: 0x08 // Size: 0x04
	bool IsVehicleMotorbike; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FRotator VehViewRotation; // Offset: 0x10 // Size: 0x0c
	struct FVector VehMoveVelocity; // Offset: 0x1c // Size: 0x0c
	enum class EVHSeatWeaponHoldType SeatWeaponHoldType; // Offset: 0x28 // Size: 0x01
	enum class EVHSeatSpecialType SeatSpecialType; // Offset: 0x29 // Size: 0x01
	enum class ESTExtraVehicleType VehicleType; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x1]; // Offset: 0x2b // Size: 0x01
	float LeanOutPercentage; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.EmotePlayer
// Size: 0x38 // Inherited bytes: 0x00
struct FEmotePlayer {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	uint32_t FollowPlayer; // Offset: 0x04 // Size: 0x04
	IntProperty EmoteId; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty ExtraInfo; // Offset: 0x10 // Size: 0x10
	struct FVector pos; // Offset: 0x20 // Size: 0x0c
	float Time; // Offset: 0x2c // Size: 0x04
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageInfoInReplay
// Size: 0x10 // Inherited bytes: 0x00
struct FDamageInfoInReplay {
	// Fields
	float Damage; // Offset: 0x00 // Size: 0x04
	IntProperty Type; // Offset: 0x04 // Size: 0x04
	uint32_t Causer; // Offset: 0x08 // Size: 0x04
	uint32_t Victim; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetMoveSpeedParameter
// Size: 0x18 // Inherited bytes: 0x00
struct FNetMoveSpeedParameter {
	// Fields
	char SpeedScale; // Offset: 0x00 // Size: 0x01
	char SpeedRate; // Offset: 0x01 // Size: 0x01
	char SwimSpeedDynamicScale; // Offset: 0x02 // Size: 0x01
	char EnergySpeedScale; // Offset: 0x03 // Size: 0x01
	IntProperty WalkSpeedCurveScale; // Offset: 0x04 // Size: 0x04
	float MaxWalkSpeed; // Offset: 0x08 // Size: 0x04
	float WalkCurveSpeed; // Offset: 0x0c // Size: 0x04
	float SpeedValue; // Offset: 0x10 // Size: 0x04
	float Velocity; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathReplayData
// Size: 0x158 // Inherited bytes: 0x00
struct FDeathReplayData {
	// Fields
	bool IsValidDeathReplay; // Offset: 0x00 // Size: 0x01
	bool IsForCE; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty SelfName; // Offset: 0x08 // Size: 0x10
	StrProperty PlayerName; // Offset: 0x18 // Size: 0x10
	uint64 PlayerUID; // Offset: 0x28 // Size: 0x08
	uint64 MLAIUID; // Offset: 0x30 // Size: 0x08
	IntProperty DamageType; // Offset: 0x38 // Size: 0x04
	IntProperty SubType; // Offset: 0x3c // Size: 0x04
	StrProperty CauseName; // Offset: 0x40 // Size: 0x10
	StrProperty CauseActionName; // Offset: 0x50 // Size: 0x10
	bool IsBot; // Offset: 0x60 // Size: 0x01
	bool bIsMLAI; // Offset: 0x61 // Size: 0x01
	bool IsSuicide; // Offset: 0x62 // Size: 0x01
	bool bIsDeliver; // Offset: 0x63 // Size: 0x01
	IntProperty aliasID; // Offset: 0x64 // Size: 0x04
	StrProperty aliasTitle; // Offset: 0x68 // Size: 0x10
	StrProperty aliasNation; // Offset: 0x78 // Size: 0x10
	IntProperty aliasRank; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	StrProperty aliasPartnerName; // Offset: 0x90 // Size: 0x10
	IntProperty aliasPartnerRelation; // Offset: 0xa0 // Size: 0x04
	IntProperty aliasRankID; // Offset: 0xa4 // Size: 0x04
	IntProperty SegmentLevel; // Offset: 0xa8 // Size: 0x04
	float KDNum; // Offset: 0xac // Size: 0x04
	IntProperty GameCount; // Offset: 0xb0 // Size: 0x04
	IntProperty WinCount; // Offset: 0xb4 // Size: 0x04
	IntProperty TopTenCount; // Offset: 0xb8 // Size: 0x04
	IntProperty KillNum; // Offset: 0xbc // Size: 0x04
	struct FTPlanExtraOBInfo TPlanInfo; // Offset: 0xc0 // Size: 0x20
	float Distance; // Offset: 0xe0 // Size: 0x04
	struct FDeathReplayHitInfo OtherHitInfo; // Offset: 0xe4 // Size: 0x20
	struct FDeathReplayHitInfo SelfHitInfo; // Offset: 0x104 // Size: 0x20
	char pad_0x124[0x4]; // Offset: 0x124 // Size: 0x04
	struct TArray<char> CustomInfo; // Offset: 0x128 // Size: 0x10
	struct TArray<IntProperty> KillerPingSeq; // Offset: 0x138 // Size: 0x10
	struct TArray<IntProperty> VictimPingSeq; // Offset: 0x148 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathReplayHitInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FDeathReplayHitInfo {
	// Fields
	float Damage; // Offset: 0x00 // Size: 0x04
	IntProperty HitCount; // Offset: 0x04 // Size: 0x04
	IntProperty HeadShoot; // Offset: 0x08 // Size: 0x04
	IntProperty LimbsShoot; // Offset: 0x0c // Size: 0x04
	IntProperty BodyShoot; // Offset: 0x10 // Size: 0x04
	IntProperty HandShoot; // Offset: 0x14 // Size: 0x04
	IntProperty FootShoot; // Offset: 0x18 // Size: 0x04
	float GunHitRate; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SearchedPickUpItemResult
// Size: 0x40 // Inherited bytes: 0x00
struct FSearchedPickUpItemResult {
	// Fields
	struct APickUpWrapperActor* Wrapper; // Offset: 0x00 // Size: 0x08
	struct FPickUpItemData MainItemData; // Offset: 0x08 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.SearchedTombBoxAndWrapperListResult
// Size: 0x18 // Inherited bytes: 0x00
struct FSearchedTombBoxAndWrapperListResult {
	// Fields
	struct APlayerTombBox* Box; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FSearchedPickUpItemResult> SearchedPickUpItemResultList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerDecalData
// Size: 0x60 // Inherited bytes: 0x00
struct FPlayerDecalData {
	// Fields
	IntProperty DecalId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FTransform DecalTransform; // Offset: 0x10 // Size: 0x30
	IntProperty DecalInstanceId; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<struct FIdeaDecalInfo> DecalInfos; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.IdeaDecalInfo
// Size: 0xc0 // Inherited bytes: 0x00
struct FIdeaDecalInfo {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
	char pad_0x40[0x1c]; // Offset: 0x40 // Size: 0x1c
	bool IsMusicDecal; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
	IntProperty TranslucentSortPriority; // Offset: 0x60 // Size: 0x04
	IntProperty ClipPlaneNum; // Offset: 0x64 // Size: 0x04
	float DynamicDeepScale; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct FName SocketName; // Offset: 0x70 // Size: 0x08
	enum class EIdeaDecalParentType ParentType; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	struct TWeakObjectPtr<struct UPrimitiveComponent> Parent; // Offset: 0x7c // Size: 0x08
	char pad_0x84[0xc]; // Offset: 0x84 // Size: 0x0c
	struct FName CollisionProfileName; // Offset: 0x90 // Size: 0x08
	bool bCreateCollision; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07
	struct FName DecalTag; // Offset: 0xa0 // Size: 0x08
	char pad_0xA8[0x18]; // Offset: 0xa8 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepCharAnimData
// Size: 0x0c // Inherited bytes: 0x00
struct FRepCharAnimData {
	// Fields
	IntProperty RandomIdx; // Offset: 0x00 // Size: 0x04
	IntProperty RandomIdxBackUp; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraOffsetData
// Size: 0x30 // Inherited bytes: 0x00
struct FCameraOffsetData {
	// Fields
	struct FVector SocketOffset; // Offset: 0x00 // Size: 0x0c
	struct FVector TargetOffset; // Offset: 0x0c // Size: 0x0c
	float SpringArmLength; // Offset: 0x18 // Size: 0x04
	float AdditiveOffsetFov; // Offset: 0x1c // Size: 0x04
	float FixedFov; // Offset: 0x20 // Size: 0x04
	float BeginInterpSpeed; // Offset: 0x24 // Size: 0x04
	float EndInterpSpeed; // Offset: 0x28 // Size: 0x04
	IntProperty StatePriority; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterJumpDebugInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FCharacterJumpDebugInfo {
	// Fields
	char PressJumpCount; // Offset: 0x00 // Size: 0x01
	enum class ECanJumpError CanJumpError; // Offset: 0x01 // Size: 0x01
	char CurrentJumpCount; // Offset: 0x02 // Size: 0x01
	char MaxJumpCount; // Offset: 0x03 // Size: 0x01
	char MovementmodeChangeCount; // Offset: 0x04 // Size: 0x01
	enum class EMovementMode CurrentMovementMode; // Offset: 0x05 // Size: 0x01
	char JumpDebugFlag; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
	float JumpKeyHoldTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParachuteDebugInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FParachuteDebugInfo {
	// Fields
	bool ShowCheckPassWall; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector_NetQuantize BlockPos; // Offset: 0x04 // Size: 0x0c
	struct FVector_NetQuantize ClientAdjustPassWallPos; // Offset: 0x10 // Size: 0x0c
	struct FVector_NetQuantize ClientRepRemotePos; // Offset: 0x1c // Size: 0x0c
	struct FVector_NetQuantize ClientBlockPos; // Offset: 0x28 // Size: 0x0c
	char TickState; // Offset: 0x34 // Size: 0x01
	char ClientMoveBlock; // Offset: 0x35 // Size: 0x01
	char pad_0x36[0x2]; // Offset: 0x36 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.MissPlayerDamageRecord
// Size: 0x0c // Inherited bytes: 0x00
struct FMissPlayerDamageRecord {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char Visible; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float Distance; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SplineMoveInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FSplineMoveInfo {
	// Fields
	struct TWeakObjectPtr<struct USplineComponent> MoveAlongSpline; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BlowUpData
// Size: 0x2c // Inherited bytes: 0x00
struct FBlowUpData {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	IntProperty InternalBlowUpID; // Offset: 0x04 // Size: 0x04
	bool bIsBeingBlew; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float InternalTime; // Offset: 0x0c // Size: 0x04
	struct FVector LaunchVelocity; // Offset: 0x10 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> HitActor; // Offset: 0x1c // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; // Offset: 0x24 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetCarryBackState
// Size: 0x30 // Inherited bytes: 0x00
struct FNetCarryBackState {
	// Fields
	enum class ECarryBackState State; // Offset: 0x00 // Size: 0x01
	enum class EPutDownDetachMethod DetachMethod; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct ASTExtraBaseCharacter* CarryBackCharacter; // Offset: 0x08 // Size: 0x08
	struct ASTExtraBaseCharacter* BeCarriedBackCharacter; // Offset: 0x10 // Size: 0x08
	IntProperty SubState; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UObject* DetachObjectContent; // Offset: 0x20 // Size: 0x08
	IntProperty RepCount; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.InjuryParticleAttachOffset
// Size: 0x50 // Inherited bytes: 0x00
struct FInjuryParticleAttachOffset {
	// Fields
	enum class EMovementMode MovementMode; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0xf]; // Offset: 0x01 // Size: 0x0f
	struct FTransform AttachTransform; // Offset: 0x10 // Size: 0x30
	enum class EAttachLocation AttachLocationType; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0xf]; // Offset: 0x41 // Size: 0x0f
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterHide
// Size: 0x0c // Inherited bytes: 0x00
struct FCharacterHide {
	// Fields
	bool bCharacterHideIngame; // Offset: 0x00 // Size: 0x01
	bool bStopCharacterTick; // Offset: 0x01 // Size: 0x01
	bool bCloseCharacterCollision; // Offset: 0x02 // Size: 0x01
	char nRepFlag; // Offset: 0x03 // Size: 0x01
	float fScale; // Offset: 0x04 // Size: 0x04
	bool bMovementActive; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerRespawnData
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerRespawnData {
	// Fields
	char RespawnCount; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
	bool bCanRespawn; // Offset: 0x1c // Size: 0x01
	bool bIsDead; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoAimingConfig
// Size: 0x110 // Inherited bytes: 0x00
struct FAutoAimingConfig {
	// Fields
	struct FAutoAimingRangeConfig OuterRange; // Offset: 0x00 // Size: 0x4c
	struct FAutoAimingRangeConfig InnerRange; // Offset: 0x4c // Size: 0x4c
	struct FAutoAimingRangeConfig ScopeRange; // Offset: 0x98 // Size: 0x4c
	float followTimeMax; // Offset: 0xe4 // Size: 0x04
	bool TriggerBeforeFire; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
	struct UCurveFloat* SpeedCurve; // Offset: 0xf0 // Size: 0x08
	struct UCurveFloat* DistanceSpeedCurve; // Offset: 0xf8 // Size: 0x08
	struct UCurveFloat* SensitiveSpeedCurve; // Offset: 0x100 // Size: 0x08
	float MaxAngle; // Offset: 0x108 // Size: 0x04
	char pad_0x10C[0x4]; // Offset: 0x10c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoAimingRangeConfig
// Size: 0x4c // Inherited bytes: 0x00
struct FAutoAimingRangeConfig {
	// Fields
	float Speed; // Offset: 0x00 // Size: 0x04
	float CenterSpeedRate; // Offset: 0x04 // Size: 0x04
	float RangeRate; // Offset: 0x08 // Size: 0x04
	float SpeedRate; // Offset: 0x0c // Size: 0x04
	float RangeRateSight; // Offset: 0x10 // Size: 0x04
	float SpeedRateSight; // Offset: 0x14 // Size: 0x04
	float CrouchRate; // Offset: 0x18 // Size: 0x04
	float ProneRate; // Offset: 0x1c // Size: 0x04
	float DyingRate; // Offset: 0x20 // Size: 0x04
	float DriveVehicleRate; // Offset: 0x24 // Size: 0x04
	float InVehicleRate; // Offset: 0x28 // Size: 0x04
	float FreeFallRate; // Offset: 0x2c // Size: 0x04
	float OpeningRate; // Offset: 0x30 // Size: 0x04
	float LandingRate; // Offset: 0x34 // Size: 0x04
	float adsorbMaxRange; // Offset: 0x38 // Size: 0x04
	float adsorbMinRange; // Offset: 0x3c // Size: 0x04
	float adsorbMinAttenuationDis; // Offset: 0x40 // Size: 0x04
	float adsorbMaxAttenuationDis; // Offset: 0x44 // Size: 0x04
	float adsorbActiveMinRange; // Offset: 0x48 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.InteractionEmoteConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FInteractionEmoteConfig {
	// Fields
	IntProperty SelfEmoteId; // Offset: 0x00 // Size: 0x04
	IntProperty OtherEmoteId; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LastEmoteInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FLastEmoteInfo {
	// Fields
	IntProperty EmoteId; // Offset: 0x00 // Size: 0x04
	IntProperty AreaID; // Offset: 0x04 // Size: 0x04
	float EmoteTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParachuteFollowState
// Size: 0x10 // Inherited bytes: 0x00
struct FParachuteFollowState {
	// Fields
	enum class EFollowState FollowState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty LeaderIdx; // Offset: 0x04 // Size: 0x04
	IntProperty EquipTwoPersonAircraftID; // Offset: 0x08 // Size: 0x04
	IntProperty AircraftLeaderIdx; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STReplicatedMoveState
// Size: 0x48 // Inherited bytes: 0x00
struct FSTReplicatedMoveState {
	// Fields
	struct FVector_NetQuantizeWithDelta Location; // Offset: 0x00 // Size: 0x20
	char Roll; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	uint32_t View; // Offset: 0x24 // Size: 0x04
	struct FVector_NetQuantizeWithDelta Velocity; // Offset: 0x28 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.UploadMoveData
// Size: 0x14 // Inherited bytes: 0x00
struct FUploadMoveData {
	// Fields
	float ThrottleInput; // Offset: 0x00 // Size: 0x04
	float SteerInput; // Offset: 0x04 // Size: 0x04
	struct FVector LocalVelocity; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.STParachuteState
// Size: 0x18 // Inherited bytes: 0x00
struct FSTParachuteState {
	// Fields
	float ThrottleInput; // Offset: 0x00 // Size: 0x04
	float SteerInput; // Offset: 0x04 // Size: 0x04
	uint8_t State; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	struct FRotator CameraRotation; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepVehicleAttachment
// Size: 0x18 // Inherited bytes: 0x00
struct FRepVehicleAttachment {
	// Fields
	struct ASTExtraVehicleBase* Vehicle; // Offset: 0x00 // Size: 0x08
	struct FName AttachSocket; // Offset: 0x08 // Size: 0x08
	char SeatIndex; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.BodyPartCfg
// Size: 0x40 // Inherited bytes: 0x00
struct FBodyPartCfg {
	// Fields
	float DamageScale; // Offset: 0x00 // Size: 0x04
	float Durability; // Offset: 0x04 // Size: 0x04
	float DamageReduceScale; // Offset: 0x08 // Size: 0x04
	float DamageReduceScaleExtra; // Offset: 0x0c // Size: 0x04
	float DamageReduceScaleIgnoreDurability; // Offset: 0x10 // Size: 0x04
	float BrokenArmorDamageReduceScale; // Offset: 0x14 // Size: 0x04
	float DurabilityReduceScale; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty BodyDurabilityIndexName; // Offset: 0x20 // Size: 0x10
	float MomentumResistance; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct ASTEShootWeaponBulletImpactEffect* ImpactEffectOverride; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimStatusKeyList
// Size: 0x28 // Inherited bytes: 0x00
struct FAnimStatusKeyList {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
	struct ASTExtraWeapon* EquipWeapon; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PoseChangeTime
// Size: 0x10 // Inherited bytes: 0x00
struct FPoseChangeTime {
	// Fields
	float PoseChange_Prone_Stand; // Offset: 0x00 // Size: 0x04
	float PoseChange_Prone_Move; // Offset: 0x04 // Size: 0x04
	float PoseChange_UnProne_Stand; // Offset: 0x08 // Size: 0x04
	float PoseChange_UnProne_Move; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponRecordDataForReplay
// Size: 0x0c // Inherited bytes: 0x00
struct FWeaponRecordDataForReplay {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	char HeadShoot; // Offset: 0x04 // Size: 0x01
	char LimbsShoot; // Offset: 0x05 // Size: 0x01
	char BodyShoot; // Offset: 0x06 // Size: 0x01
	char HandShoot; // Offset: 0x07 // Size: 0x01
	char FootShoot; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.SwitchWeaponDisable
// Size: 0x02 // Inherited bytes: 0x00
struct FSwitchWeaponDisable {
	// Fields
	enum class ESurviveWeaponPropSlot WeaponPropSlot; // Offset: 0x00 // Size: 0x01
	uint8_t Disabled; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimViewData
// Size: 0x06 // Inherited bytes: 0x00
struct FSimViewData {
	// Fields
	uint16_t ViewPitch; // Offset: 0x00 // Size: 0x02
	uint16_t ViewYaw; // Offset: 0x02 // Size: 0x02
	char ViewRoll; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x1]; // Offset: 0x05 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimLocalViewData
// Size: 0x0c // Inherited bytes: 0x00
struct FSimLocalViewData {
	// Fields
	float ViewPitch; // Offset: 0x00 // Size: 0x04
	float ViewYaw; // Offset: 0x04 // Size: 0x04
	float ViewRoll; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpecialAmbientData
// Size: 0x28 // Inherited bytes: 0x00
struct FSpecialAmbientData {
	// Fields
	struct UAkAudioEvent* Sound; // Offset: 0x00 // Size: 0x08
	StrProperty SwitchGroupName; // Offset: 0x08 // Size: 0x10
	StrProperty SwitchValue; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponSlotSwitchTimeData
// Size: 0x0c // Inherited bytes: 0x00
struct FWeaponSlotSwitchTimeData {
	// Fields
	enum class ESurviveWeaponPropSlot EquipSlot; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float TotalTime; // Offset: 0x04 // Size: 0x04
	float AttachWeaponTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoAimEnemyInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FAutoAimEnemyInfo {
	// Fields
	struct ASTExtraPlayerCharacter* EnemyPawn; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x18]; // Offset: 0x08 // Size: 0x18
	struct FName BoneName; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachmentConfig
// Size: 0x298 // Inherited bytes: 0x00
struct FWeaponAttachmentConfig {
	// Fields
	struct FText AttachmentName; // Offset: 0x00 // Size: 0x18
	enum class EWeaponAttachmentSocketType AttachmentSocketType; // Offset: 0x18 // Size: 0x01
	enum class EWeaponSubSlotType SubSlot; // Offset: 0x19 // Size: 0x01
	enum class EOpticalSightType SightType; // Offset: 0x1a // Size: 0x01
	bool IsExtendMaxBulletNumInOneClip; // Offset: 0x1b // Size: 0x01
	bool IsSilencer; // Offset: 0x1c // Size: 0x01
	bool IsFireSuppressor; // Offset: 0x1d // Size: 0x01
	bool IsCompensator; // Offset: 0x1e // Size: 0x01
	bool IsChangePellets; // Offset: 0x1f // Size: 0x01
	struct TArray<struct FWeaponAttachmentAttrModify> WeaponAttachmentAttrModifys; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FWeaponAttachmentAttrListModifyWrapper> SpecialWeaponAttachmentAttrModifys; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> WeaponBreakthroughList; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FWeaponAttachmentDesc> WeaponAttachmentDescs; // Offset: 0x50 // Size: 0x10
	MapProperty socketTypeToName; // Offset: 0x60 // Size: 0x50
	struct FWeaponMeshCfg MeshPackage; // Offset: 0xb0 // Size: 0x1a0
	struct TArray<struct FWeaponMeshCfg> ExtMeshList; // Offset: 0x250 // Size: 0x10
	struct TArray<struct FReplacedAttament> replacementWeapon; // Offset: 0x260 // Size: 0x10
	struct TArray<struct UAnimationAsset*> AttachmentAnimList; // Offset: 0x270 // Size: 0x10
	struct FItemDefineID ParentID; // Offset: 0x280 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplacedAttament
// Size: 0x1d8 // Inherited bytes: 0x00
struct FReplacedAttament {
	// Fields
	struct TArray<struct FItemDefineID> targetWeaponIDList; // Offset: 0x00 // Size: 0x10
	struct FWeaponMeshCfg replacedAttachmentCfg; // Offset: 0x10 // Size: 0x1a0
	struct TArray<struct FWeaponMeshCfg> ExtReplacedAttachmentCfgList; // Offset: 0x1b0 // Size: 0x10
	IntProperty replacedAttachmentMatIndex; // Offset: 0x1c0 // Size: 0x04
	char pad_0x1C4[0x4]; // Offset: 0x1c4 // Size: 0x04
	struct TArray<struct UAnimationAsset*> replacedAttachmentAnimList; // Offset: 0x1c8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponMeshCfg
// Size: 0x1a0 // Inherited bytes: 0x00
struct FWeaponMeshCfg {
	// Fields
	struct UStaticMesh* stMesh; // Offset: 0x00 // Size: 0x28
	struct USkeletalMesh* skMesh; // Offset: 0x28 // Size: 0x28
	struct UStaticMesh* stMeshLod; // Offset: 0x50 // Size: 0x28
	struct USkeletalMesh* skMeshLod; // Offset: 0x78 // Size: 0x28
	struct UStaticMesh* stCutMesh; // Offset: 0xa0 // Size: 0x28
	struct USkeletalMesh* skCutMesh; // Offset: 0xc8 // Size: 0x28
	struct UMaterialInterface* MeshMat; // Offset: 0xf0 // Size: 0x28
	struct FName MeshMatSlotName; // Offset: 0x118 // Size: 0x08
	struct UMaterialInterface* OverrideMatByGameMode; // Offset: 0x120 // Size: 0x28
	struct UMaterialInterface* baseMat; // Offset: 0x148 // Size: 0x08
	struct UMaterialInterface* baseMatClass; // Offset: 0x150 // Size: 0x28
	struct TArray<struct FParticleRes> ParticleEffects; // Offset: 0x178 // Size: 0x10
	struct TArray<struct FUIWidgetRes> WidgetList; // Offset: 0x188 // Size: 0x10
	enum class EMeshType meshType; // Offset: 0x198 // Size: 0x01
	char pad_0x199[0x7]; // Offset: 0x199 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.UIWidgetRes
// Size: 0x50 // Inherited bytes: 0x00
struct FUIWidgetRes {
	// Fields
	struct UUserWidget* UserWidget; // Offset: 0x00 // Size: 0x08
	struct FName AttachSocket; // Offset: 0x08 // Size: 0x08
	struct FTransform Trans; // Offset: 0x10 // Size: 0x30
	struct FVector2D DrawSize; // Offset: 0x40 // Size: 0x08
	bool bShowDefault; // Offset: 0x48 // Size: 0x01
	bool bUseScreenSpace; // Offset: 0x49 // Size: 0x01
	char pad_0x4A[0x6]; // Offset: 0x4a // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleRes
// Size: 0x10 // Inherited bytes: 0x00
struct FParticleRes {
	// Fields
	struct UParticleSystem* ParticleRes; // Offset: 0x00 // Size: 0x08
	struct FName AttachSocket; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachmentDesc
// Size: 0x30 // Inherited bytes: 0x00
struct FWeaponAttachmentDesc {
	// Fields
	struct FText Desc; // Offset: 0x00 // Size: 0x18
	struct FText DescValue; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachmentAttrListModifyWrapper
// Size: 0x68 // Inherited bytes: 0x00
struct FWeaponAttachmentAttrListModifyWrapper {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty WeaponIDMap; // Offset: 0x08 // Size: 0x50
	struct TArray<struct FWeaponAttachmentAttrModify> WeaponAttachmentAttrModifys; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachmentAttrModify
// Size: 0x40 // Inherited bytes: 0x00
struct FWeaponAttachmentAttrModify {
	// Fields
	StrProperty ModifyAttr; // Offset: 0x00 // Size: 0x10
	enum class EAttrOperator Op; // Offset: 0x10 // Size: 0x01
	bool bModifyResource; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
	float ModifyValue; // Offset: 0x14 // Size: 0x04
	struct UObject* ModifyResValue; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponPendantMap
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponPendantMap {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FWeaponPendantSocket> PendantInfoList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponPendantSocket
// Size: 0x70 // Inherited bytes: 0x00
struct FWeaponPendantSocket {
	// Fields
	enum class EWeaponPendantSocketType PendantSocketType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty PendantIndex; // Offset: 0x04 // Size: 0x04
	bool IsOpenConstraint; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FAvatarPendantConfig AnimConstraint; // Offset: 0x10 // Size: 0x60
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarPendantConfig
// Size: 0x60 // Inherited bytes: 0x00
struct FAvatarPendantConfig {
	// Fields
	StrProperty ConfigName; // Offset: 0x00 // Size: 0x10
	struct FTransform SocketRelativeTransform; // Offset: 0x10 // Size: 0x30
	struct FVector AngularLimitsMin; // Offset: 0x40 // Size: 0x0c
	struct FVector AngularLimitsMax; // Offset: 0x4c // Size: 0x0c
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpTransactionItem
// Size: 0x38 // Inherited bytes: 0x00
struct FPickUpTransactionItem {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	IntProperty Count; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x20 // Size: 0x10
	IntProperty ParentIndex; // Offset: 0x30 // Size: 0x04
	IntProperty ItemInstanceID; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpTransactionRequest
// Size: 0x18 // Inherited bytes: 0x00
struct FPickUpTransactionRequest {
	// Fields
	struct AActor* PickUpOwner; // Offset: 0x00 // Size: 0x08
	IntProperty AdditionalParam; // Offset: 0x08 // Size: 0x04
	IntProperty RequestedCount; // Offset: 0x0c // Size: 0x04
	IntProperty BattleItemClientPickupType; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AccelSyncQuantized
// Size: 0x0c // Inherited bytes: 0x00
struct FAccelSyncQuantized {
	// Fields
	uint32_t EncodedX; // Offset: 0x00 // Size: 0x04
	uint32_t EncodedY; // Offset: 0x04 // Size: 0x04
	uint32_t EncodedZ; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerRoleCacheFrameData
// Size: 0x10 // Inherited bytes: 0x00
struct FPlayerRoleCacheFrameData {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActicityDisallowedData
// Size: 0x18 // Inherited bytes: 0x00
struct FActicityDisallowedData {
	// Fields
	struct TArray<enum class EPawnState> DisallowedStates; // Offset: 0x00 // Size: 0x10
	IntProperty ActivityID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AngledSightRepData
// Size: 0x02 // Inherited bytes: 0x00
struct FAngledSightRepData {
	// Fields
	enum class EAngledSightType AngledSightType; // Offset: 0x00 // Size: 0x01
	bool IsOnlyTurn; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivityAnimationRepData
// Size: 0x08 // Inherited bytes: 0x00
struct FActivityAnimationRepData {
	// Fields
	struct UAnimMontage* AnimMontage; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpringArmParams
// Size: 0x50 // Inherited bytes: 0x00
struct FSpringArmParams {
	// Fields
	struct FCameraParams CameraParam; // Offset: 0x00 // Size: 0x08
	struct USceneComponent* ParentComp; // Offset: 0x08 // Size: 0x08
	struct FName ParentSocketName; // Offset: 0x10 // Size: 0x08
	float TargetArmALength; // Offset: 0x18 // Size: 0x04
	struct FVector SocketOffset; // Offset: 0x1c // Size: 0x0c
	struct FVector TargetOffset; // Offset: 0x28 // Size: 0x0c
	struct FVector RelativeLocation; // Offset: 0x34 // Size: 0x0c
	float ProbeSize; // Offset: 0x40 // Size: 0x04
	enum class ECollisionChannel ProbeChannel; // Offset: 0x44 // Size: 0x01
	bool bDoCollisionTest; // Offset: 0x45 // Size: 0x01
	bool bUsePawnControlRotation; // Offset: 0x46 // Size: 0x01
	bool bEnableCameraLag; // Offset: 0x47 // Size: 0x01
	float CameraLagSpeed; // Offset: 0x48 // Size: 0x04
	bool bEnableCustomSpringArm; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraParams
// Size: 0x08 // Inherited bytes: 0x00
struct FCameraParams {
	// Fields
	float FieldOfView; // Offset: 0x00 // Size: 0x04
	bool bLocktoHmd; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIShootingPoseOffsetInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FAIShootingPoseOffsetInfo {
	// Fields
	struct TArray<struct FAIShootingPoseOffsetDetailInfo> ShootingPoseShootPointOffsetArray; // Offset: 0x00 // Size: 0x10
	float CrouchToStandHeightOffset; // Offset: 0x10 // Size: 0x04
	float ProneToStandHeightOffset; // Offset: 0x14 // Size: 0x04
	enum class EAIShootingPose CurShootingPose; // Offset: 0x18 // Size: 0x01
	bool bWaitForShootingPoseCheck; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x6]; // Offset: 0x1a // Size: 0x06
	MapProperty ShootingPoseShootPointOffsetMap; // Offset: 0x20 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIShootingPoseOffsetDetailInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FAIShootingPoseOffsetDetailInfo {
	// Fields
	enum class EAIShootingPose shootingPose; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector offsetInfo; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.AITargetInViewOffset
// Size: 0x38 // Inherited bytes: 0x00
struct FAITargetInViewOffset {
	// Fields
	struct TArray<struct FVector> Offset; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVector> CrouchOffset; // Offset: 0x10 // Size: 0x10
	struct FVector TargetLoc; // Offset: 0x20 // Size: 0x0c
	IntProperty CurrentOffsetIndex; // Offset: 0x2c // Size: 0x04
	bool bTargetInViewDueToOffset; // Offset: 0x30 // Size: 0x01
	enum class EPawnState TargetPawnState; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIBehaviorRegion
// Size: 0x28 // Inherited bytes: 0x00
struct FAIBehaviorRegion {
	// Fields
	struct FVector BasePosition; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	float SphereRadius; // Offset: 0x18 // Size: 0x04
	struct FVector BoxExtent; // Offset: 0x1c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIEquipSpawnItem
// Size: 0x18 // Inherited bytes: 0x00
struct FAIEquipSpawnItem {
	// Fields
	enum class EAIEquipSpawnItemType itemType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty ItemSpecificID; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	IntProperty MaxCount; // Offset: 0x0c // Size: 0x04
	struct FVector2D ExtraConfigValue; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIFeatureInfo
// Size: 0xf8 // Inherited bytes: 0x00
struct FAIFeatureInfo {
	// Fields
	float Hp; // Offset: 0x00 // Size: 0x04
	float DamageScale; // Offset: 0x04 // Size: 0x04
	float TakeDamageScale; // Offset: 0x08 // Size: 0x04
	IntProperty DropID; // Offset: 0x0c // Size: 0x04
	struct TArray<float> HitRates; // Offset: 0x10 // Size: 0x10
	MapProperty ThrownUsingProbability; // Offset: 0x20 // Size: 0x50
	struct TArray<struct FVector2D> EnemyHpHitRateArray; // Offset: 0x70 // Size: 0x10
	struct TArray<struct FVector2D> EnemyHpDamageRateArray; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FVector2D> EnemyHpDamageLerpArray; // Offset: 0x90 // Size: 0x10
	struct TArray<struct FVector2D> ReviveEnemyHpDamageRateArray; // Offset: 0xa0 // Size: 0x10
	struct TArray<struct FVector2D> ReviveEnemyHpDamageLerpArray; // Offset: 0xb0 // Size: 0x10
	bool bNeedNearDeath; // Offset: 0xc0 // Size: 0x01
	bool bHasDeadBox; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x2]; // Offset: 0xc2 // Size: 0x02
	struct FVector2D MissOnPurposeTimeRange; // Offset: 0xc4 // Size: 0x08
	struct FVector2D OutViewMissOnPurposeTimeRange; // Offset: 0xcc // Size: 0x08
	float MissOnPurposeCD; // Offset: 0xd4 // Size: 0x04
	float MissOnPurposeResetTime; // Offset: 0xd8 // Size: 0x04
	float MissOnPurposeHitRate; // Offset: 0xdc // Size: 0x04
	float NearDeathTargetStopFireTime; // Offset: 0xe0 // Size: 0x04
	float NearDeathTargetFixedHitRate; // Offset: 0xe4 // Size: 0x04
	bool bDoMissOnPurposeWhenNearDeathToNormal; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x3]; // Offset: 0xe9 // Size: 0x03
	float NearDeathTargetFixedDamageRate; // Offset: 0xec // Size: 0x04
	float SenseRadiusScale; // Offset: 0xf0 // Size: 0x04
	char pad_0xF4[0x4]; // Offset: 0xf4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIShootMissInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FAIShootMissInfo {
	// Fields
	float MissMaxRangeTime; // Offset: 0x00 // Size: 0x04
	float MissMinRangeTime; // Offset: 0x04 // Size: 0x04
	float MissCDTime; // Offset: 0x08 // Size: 0x04
	float MissResetTime; // Offset: 0x0c // Size: 0x04
	float MissResetConfig; // Offset: 0x10 // Size: 0x04
	bool bCanMissShoot; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIControllerCachedData
// Size: 0x40 // Inherited bytes: 0x00
struct FAIControllerCachedData {
	// Fields
	struct ASTExtraBaseCharacter* ControlledPawn; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x20]; // Offset: 0x08 // Size: 0x20
	bool IsInWater; // Offset: 0x28 // Size: 0x01
	bool TargetIsInWater; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
	struct ASTExtraPlayerController* CacheNearPlayerController; // Offset: 0x30 // Size: 0x08
	struct ASTExtraBaseCharacter* CacheDeliveryActingTarget; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WaitDropData
// Size: 0x48 // Inherited bytes: 0x00
struct FWaitDropData {
	// Fields
	struct ASTExtraBaseCharacter* KillerPawn; // Offset: 0x00 // Size: 0x08
	StrProperty DeadPawnDesc; // Offset: 0x08 // Size: 0x10
	struct FVector DropGroundPoint; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct APlayerTombBox* DropTomb; // Offset: 0x28 // Size: 0x08
	struct TArray<IntProperty> DropPlanIDList; // Offset: 0x30 // Size: 0x10
	bool bDropedByPlayer; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	IntProperty AvatarItemID; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropItemConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FDropItemConfig {
	// Fields
	IntProperty ItemDropPercent; // Offset: 0x00 // Size: 0x04
	IntProperty ItemDropRuleID; // Offset: 0x04 // Size: 0x04
	IntProperty RandomCount; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropPropData
// Size: 0x1c // Inherited bytes: 0x00
struct FDropPropData {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ItemCount; // Offset: 0x04 // Size: 0x04
	IntProperty DropMode; // Offset: 0x08 // Size: 0x04
	bool bDropOnDead; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty KeyID; // Offset: 0x10 // Size: 0x04
	IntProperty DropPlanID; // Offset: 0x14 // Size: 0x04
	uint32_t OwnerUniqueID; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LastGameRemainItemData
// Size: 0x38 // Inherited bytes: 0x00
struct FLastGameRemainItemData {
	// Fields
	struct FName TombName; // Offset: 0x00 // Size: 0x08
	struct FVector DropGroundPoint; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty TargetPlayerUID; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FRemainItemData> RemainItemDataList; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RemainItemData
// Size: 0x20 // Inherited bytes: 0x00
struct FRemainItemData {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FBattleItemAdditionalData> AdditionalDataList; // Offset: 0x08 // Size: 0x10
	IntProperty SlotID; // Offset: 0x18 // Size: 0x04
	uint8_t RemainType; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropToGroundData
// Size: 0x40 // Inherited bytes: 0x00
struct FDropToGroundData {
	// Fields
	struct FPickUpItemData PickUpItemData; // Offset: 0x00 // Size: 0x38
	IntProperty ItemId; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterSingleDropIds
// Size: 0x10 // Inherited bytes: 0x00
struct FMonsterSingleDropIds {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterSingleBulletDropIds
// Size: 0x20 // Inherited bytes: 0x00
struct FMonsterSingleBulletDropIds {
	// Fields
	struct TArray<IntProperty> BulletDropIds; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> BulletDropParams; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RandomDropData
// Size: 0x40 // Inherited bytes: 0x00
struct FRandomDropData {
	// Fields
	struct TArray<IntProperty> ItemIdList; // Offset: 0x00 // Size: 0x10
	IntProperty RuleID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> ItemCountList; // Offset: 0x18 // Size: 0x10
	float Weight; // Offset: 0x28 // Size: 0x04
	IntProperty DropMode; // Offset: 0x2c // Size: 0x04
	IntProperty MinAttachment; // Offset: 0x30 // Size: 0x04
	IntProperty MaxAttachment; // Offset: 0x34 // Size: 0x04
	IntProperty ItemIDStyle; // Offset: 0x38 // Size: 0x04
	bool bDropOnDead; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIEquipSpawnGroupDataBase
// Size: 0x28 // Inherited bytes: 0x00
struct FAIEquipSpawnGroupDataBase {
	// Fields
	float RightTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FAIEquipSpawnGroup> AIEquipSpawnGroupList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FAIEquipSpawnItem> AIMustPickUpItemList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIEquipSpawnGroup
// Size: 0x10 // Inherited bytes: 0x00
struct FAIEquipSpawnGroup {
	// Fields
	struct TArray<struct FAIEquipSpawnItem> Item; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RemainItemRuleDataRow
// Size: 0x14 // Inherited bytes: 0x00
struct FRemainItemRuleDataRow {
	// Fields
	IntProperty KeyID; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty itemType; // Offset: 0x08 // Size: 0x04
	IntProperty ItemSubType; // Offset: 0x0c // Size: 0x04
	IntProperty RemainPerc; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropIDData
// Size: 0x10 // Inherited bytes: 0x00
struct FDropIDData {
	// Fields
	struct TArray<struct FName> DropRowList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DrawTextToTextureRenderTarget2DParams
// Size: 0x88 // Inherited bytes: 0x00
struct FDrawTextToTextureRenderTarget2DParams {
	// Fields
	struct FText Text; // Offset: 0x00 // Size: 0x18
	struct FName WidgetName; // Offset: 0x18 // Size: 0x08
	IntProperty DrawWidth; // Offset: 0x20 // Size: 0x04
	IntProperty DrawHeight; // Offset: 0x24 // Size: 0x04
	struct UTextureRenderTarget2D* OptionalInOutTextureRenderTarget2D; // Offset: 0x28 // Size: 0x08
	bool bMaterialInstanceDynamicCreated; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct UMaterialInterface* ParentMaterial; // Offset: 0x38 // Size: 0x28
	struct FName TextureParameterName; // Offset: 0x60 // Size: 0x08
	struct UMaterialInstanceDynamic* OptionalInOutMaterialInstanceDynamic; // Offset: 0x68 // Size: 0x08
	StrProperty Payload; // Offset: 0x70 // Size: 0x10
	bool bParamsCached; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherChangeEvent
// Size: 0x02 // Inherited bytes: 0x00
struct FWeatherChangeEvent {
	// Fields
	enum class EWeatherStatusType WeaterType; // Offset: 0x00 // Size: 0x01
	enum class EWeatherChangeEvent WeaterChangeEvent; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirAttackOrder
// Size: 0x50 // Inherited bytes: 0x00
struct FAirAttackOrder {
	// Fields
	enum class EAirAttackInfo Msg; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x1]; // Offset: 0x01 // Size: 0x01
	uint16_t waveIndex; // Offset: 0x02 // Size: 0x02
	float FlightHeight; // Offset: 0x04 // Size: 0x04
	float SeaLevelHeight; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<uint32_t> bombsInterval; // Offset: 0x10 // Size: 0x10
	uint16_t BombBaseDamage; // Offset: 0x20 // Size: 0x02
	uint16_t BombMinDamage; // Offset: 0x22 // Size: 0x02
	struct FVector AirAttackArea; // Offset: 0x24 // Size: 0x0c
	struct TArray<struct FVector2D> bombsPosition2D; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FVector> bombsPosition; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReConnectCircleInfo
// Size: 0x44 // Inherited bytes: 0x00
struct FReConnectCircleInfo {
	// Fields
	bool bIsLessning; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CircleStateStartServerWorldSecond; // Offset: 0x04 // Size: 0x04
	float CircleStatusLastTime; // Offset: 0x08 // Size: 0x04
	float CircleStatusElapsedTime; // Offset: 0x0c // Size: 0x04
	enum class ECircleInfo CircleStatus; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector BlueCircle; // Offset: 0x14 // Size: 0x0c
	struct FVector OriginalBlueCircle; // Offset: 0x20 // Size: 0x0c
	struct FVector WhiteCircle; // Offset: 0x2c // Size: 0x0c
	bool bActiveScreenSize; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float ScreenSizeFactor; // Offset: 0x3c // Size: 0x04
	float ExtraRadius; // Offset: 0x40 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropPathData3D
// Size: 0x48 // Inherited bytes: 0x00
struct FAirDropPathData3D {
	// Fields
	IntProperty AirDropIndex; // Offset: 0x00 // Size: 0x04
	struct FVector StartLoc3D; // Offset: 0x04 // Size: 0x0c
	struct FVector TargetLoc3D; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FVector> AirDropLocs3D; // Offset: 0x20 // Size: 0x10
	bool bIsDrawAirDropFlightPath; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct FVector MapCenter; // Offset: 0x34 // Size: 0x0c
	float Radius; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MarkSyncData
// Size: 0x58 // Inherited bytes: 0x00
struct FMarkSyncData {
	// Fields
	enum class EMarkStatus status; // Offset: 0x00 // Size: 0x01
	enum class EAddMarkFlag MapAdded; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty InstanceID; // Offset: 0x04 // Size: 0x04
	IntProperty TypeId; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FCustomMarkEventData CustomMarkEvent; // Offset: 0x10 // Size: 0x20
	struct FVector_NetQuantize Location; // Offset: 0x30 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x3c // Size: 0x08
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<struct TWeakObjectPtr<struct UProperty>> DeltaProperties; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMarkEventData
// Size: 0x20 // Inherited bytes: 0x00
struct FCustomMarkEventData {
	// Fields
	enum class EAddMarkFlag InWhichMap; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CreateTime; // Offset: 0x04 // Size: 0x04
	IntProperty CustomState; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty CustomString; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GetCircleInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FGetCircleInfo {
	// Fields
	bool bIsLessning; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CircleStateStartServerWorldSecond; // Offset: 0x04 // Size: 0x04
	float CircleStatusLastTime; // Offset: 0x08 // Size: 0x04
	float CircleStatusElapsedTime; // Offset: 0x0c // Size: 0x04
	enum class ECircleInfo CircleStatus; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector BlueCircle; // Offset: 0x14 // Size: 0x0c
	struct FVector OriginalBlueCircle; // Offset: 0x20 // Size: 0x0c
	struct FVector WhiteCircle; // Offset: 0x2c // Size: 0x0c
	bool bActiveScreenSize; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float ScreenSizeFactor; // Offset: 0x3c // Size: 0x04
	float ExtraRadius; // Offset: 0x40 // Size: 0x04
	IntProperty CurrentCircleIndex; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.OneFlightInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FOneFlightInfo {
	// Fields
	IntProperty FlightNo; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct AActor* Plane; // Offset: 0x08 // Size: 0x08
	struct FVector AirplaneStartLoc; // Offset: 0x10 // Size: 0x0c
	struct FVector AirplaneStopLoc; // Offset: 0x1c // Size: 0x0c
	struct FVector AirplaneCanJumpLoc; // Offset: 0x28 // Size: 0x0c
	struct FVector AirplaneForceJumpLoc; // Offset: 0x34 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParallelWorldDebugSummary
// Size: 0x18 // Inherited bytes: 0x00
struct FParallelWorldDebugSummary {
	// Fields
	IntProperty WorldNum; // Offset: 0x00 // Size: 0x04
	IntProperty MaxPlayerNumPerPW; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FParallelWorldDebugEntry> DebugData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParallelWorldDebugEntry
// Size: 0x20 // Inherited bytes: 0x00
struct FParallelWorldDebugEntry {
	// Fields
	IntProperty ParallelWorldId; // Offset: 0x00 // Size: 0x04
	IntProperty PlayerNum; // Offset: 0x04 // Size: 0x04
	IntProperty AINum; // Offset: 0x08 // Size: 0x04
	IntProperty TeamNum; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> TeamIds; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameStateWeaponRule
// Size: 0x28 // Inherited bytes: 0x00
struct FGameStateWeaponRule {
	// Fields
	bool bForbidShootTarget; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CheckForbidShootTime; // Offset: 0x04 // Size: 0x04
	struct TArray<struct AActor*> ForbidShootClassArray; // Offset: 0x08 // Size: 0x10
	struct TArray<struct AActor*> SwallowBulletClassArray; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameModeCVarConfigItem
// Size: 0x20 // Inherited bytes: 0x00
struct FGameModeCVarConfigItem {
	// Fields
	StrProperty Key; // Offset: 0x00 // Size: 0x10
	StrProperty Value; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherStatus
// Size: 0x02 // Inherited bytes: 0x00
struct FWeatherStatus {
	// Fields
	enum class EWeatherStatusType WeaterType; // Offset: 0x00 // Size: 0x01
	enum class EWeatherChangeStatus WeaterStatus; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldFeatureParam
// Size: 0x40 // Inherited bytes: 0x00
struct FVisualFieldFeatureParam {
	// Fields
	float VisualFieldUpdateInterval; // Offset: 0x00 // Size: 0x04
	float MaxVisualFieldDistanceSquared; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FName> VisualCheckBoneList; // Offset: 0x08 // Size: 0x10
	float DefaultFOVAngle; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<enum class ECollisionChannel> VisualCheckChanelList; // Offset: 0x20 // Size: 0x10
	struct TArray<struct ACharacter*> ExcludeCheckCharacterClass; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherControllerRepData
// Size: 0x1c // Inherited bytes: 0x00
struct FWeatherControllerRepData {
	// Fields
	enum class EWeatherStatusType WeatherType; // Offset: 0x00 // Size: 0x01
	bool bStarted; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float ElapsedTime; // Offset: 0x04 // Size: 0x04
	float BlendInTime; // Offset: 0x08 // Size: 0x04
	float BlendOutTime; // Offset: 0x0c // Size: 0x04
	float SaturateTime; // Offset: 0x10 // Size: 0x04
	float TimeMultiplier; // Offset: 0x14 // Size: 0x04
	bool BlendInStarted; // Offset: 0x18 // Size: 0x01
	bool BlendSaturated; // Offset: 0x19 // Size: 0x01
	bool BlendOutStarted; // Offset: 0x1a // Size: 0x01
	bool BlendOutEnded; // Offset: 0x1b // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherDetailStatus
// Size: 0x0c // Inherited bytes: 0x00
struct FWeatherDetailStatus {
	// Fields
	enum class EWeatherStatusType CurrentWeather; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CurrentElapsedTime; // Offset: 0x04 // Size: 0x04
	float TotalTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherChangeSequenceItem
// Size: 0x0c // Inherited bytes: 0x00
struct FWeatherChangeSequenceItem {
	// Fields
	enum class EWeatherStatusType WeatherStatus; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float StartTime; // Offset: 0x04 // Size: 0x04
	float TotalDurationTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherChangeControl
// Size: 0x1c // Inherited bytes: 0x00
struct FWeatherChangeControl {
	// Fields
	bool WeatherChangeStarted; // Offset: 0x00 // Size: 0x01
	bool WeatherChangeFinished; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float WeatherChangeStartTime; // Offset: 0x04 // Size: 0x04
	float ElapsedTime; // Offset: 0x08 // Size: 0x04
	enum class EWeatherStatusType NextWeather; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float NextDuration; // Offset: 0x10 // Size: 0x04
	float WeatherTotalWeight; // Offset: 0x14 // Size: 0x04
	float TimelineOffset; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherChangeConfig
// Size: 0x50 // Inherited bytes: 0x00
struct FWeatherChangeConfig {
	// Fields
	float StartTimeMin; // Offset: 0x00 // Size: 0x04
	float StartTimeMax; // Offset: 0x04 // Size: 0x04
	float BlendInTime; // Offset: 0x08 // Size: 0x04
	float BlendOutTime; // Offset: 0x0c // Size: 0x04
	float DurationTimeMin; // Offset: 0x10 // Size: 0x04
	float DurationTimeMax; // Offset: 0x14 // Size: 0x04
	enum class EWeatherStatusType LastWeatherStatus; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float LastWeatherAppearTime; // Offset: 0x1c // Size: 0x04
	bool bUseFixWeatherChangeSequence; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<struct FWeatherChangeWeight> WeatherChangeWeights; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FWeatherChangeSequenceItem> WeatherChangeSequence; // Offset: 0x38 // Size: 0x10
	float TimeMultiplier; // Offset: 0x48 // Size: 0x04
	bool bUseReadyGameStateEnetrAsOriginalTime; // Offset: 0x4c // Size: 0x01
	bool bDisableReadyGameStateWeatherTick; // Offset: 0x4d // Size: 0x01
	char pad_0x4E[0x2]; // Offset: 0x4e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherChangeWeight
// Size: 0x08 // Inherited bytes: 0x00
struct FWeatherChangeWeight {
	// Fields
	enum class EWeatherStatusType NewWeatherStatus; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickSignMark
// Size: 0xd0 // Inherited bytes: 0x00
struct FQuickSignMark {
	// Fields
	StrProperty MsgID; // Offset: 0x00 // Size: 0x10
	StrProperty MarkType; // Offset: 0x10 // Size: 0x10
	StrProperty IconPath; // Offset: 0x20 // Size: 0x10
	StrProperty IconBGPath; // Offset: 0x30 // Size: 0x10
	StrProperty IconOuterPath; // Offset: 0x40 // Size: 0x10
	StrProperty IconOuterBGPath; // Offset: 0x50 // Size: 0x10
	StrProperty IconOutScreenIconPath; // Offset: 0x60 // Size: 0x10
	StrProperty IconOutScreenBGPath; // Offset: 0x70 // Size: 0x10
	StrProperty IconOutScreenArrowPath; // Offset: 0x80 // Size: 0x10
	StrProperty ReplyID; // Offset: 0x90 // Size: 0x10
	struct FVector Loc; // Offset: 0xa0 // Size: 0x0c
	IntProperty MaxNum; // Offset: 0xac // Size: 0x04
	IntProperty LifeSpan; // Offset: 0xb0 // Size: 0x04
	bool IsSelfMark; // Offset: 0xb4 // Size: 0x01
	char pad_0xB5[0x3]; // Offset: 0xb5 // Size: 0x03
	StrProperty SenderPlayerKey; // Offset: 0xb8 // Size: 0x10
	bool bControlByMaxShowDis; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.LeaveVehicleSnapshot
// Size: 0xc8 // Inherited bytes: 0x00
struct FLeaveVehicleSnapshot {
	// Fields
	IntProperty FrameCounter; // Offset: 0x00 // Size: 0x04
	bool IsForceExit; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	struct FVector EnterLocation; // Offset: 0x0c // Size: 0x0c
	struct FVector VehicleLocation; // Offset: 0x18 // Size: 0x0c
	struct FVector VehiclePhysCenter; // Offset: 0x24 // Size: 0x0c
	struct FVector VehiclePhysExtent; // Offset: 0x30 // Size: 0x0c
	struct FRotator VehicleRotation; // Offset: 0x3c // Size: 0x0c
	struct TArray<struct FLeaveVehicleInfo> Infos; // Offset: 0x48 // Size: 0x10
	bool IsValidLocationFound; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	struct FVector ValidLeaveLocation; // Offset: 0x5c // Size: 0x0c
	bool bPenetrationPhysicsVehicleFlag; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
	struct TArray<struct UPrimitiveComponent*> CacheIgnoreComponents; // Offset: 0x70 // Size: 0x10
	struct TArray<struct AActor*> CacheIgnoreActors; // Offset: 0x80 // Size: 0x10
	struct TArray<struct FVector> GeneratedPoints; // Offset: 0x90 // Size: 0x10
	struct TArray<struct FVector> AllGeneratedPoints; // Offset: 0xa0 // Size: 0x10
	struct FVector ClientVehicleBoundsExtent; // Offset: 0xb0 // Size: 0x0c
	struct FVector CacheServerBoxExtent; // Offset: 0xbc // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.LeaveVehicleInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FLeaveVehicleInfo {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	struct FVector LeaveLocation; // Offset: 0x10 // Size: 0x0c
	struct FVector TestBegin; // Offset: 0x1c // Size: 0x0c
	struct FVector TestEnd; // Offset: 0x28 // Size: 0x0c
	bool IsValid; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	float ShapeRadius; // Offset: 0x38 // Size: 0x04
	float ShapeHalfHeight; // Offset: 0x3c // Size: 0x04
	bool IsLineTrace; // Offset: 0x40 // Size: 0x01
	bool IsOverlap; // Offset: 0x41 // Size: 0x01
	bool IsSweep; // Offset: 0x42 // Size: 0x01
	char pad_0x43[0x5]; // Offset: 0x43 // Size: 0x05
	StrProperty FailedReason; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.InGameChatMsg
// Size: 0x90 // Inherited bytes: 0x00
struct FInGameChatMsg {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	uint32_t playerIdentifier; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty msgContent; // Offset: 0x18 // Size: 0x10
	IntProperty MsgID; // Offset: 0x28 // Size: 0x04
	IntProperty audioID; // Offset: 0x2c // Size: 0x04
	IntProperty ItemId; // Offset: 0x30 // Size: 0x04
	IntProperty ItemCount; // Offset: 0x34 // Size: 0x04
	StrProperty PlayerKeyString; // Offset: 0x38 // Size: 0x10
	bool hitValid; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
	struct FVector hitPosition; // Offset: 0x4c // Size: 0x0c
	IntProperty itemIDOnGround; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	StrProperty STTClipFileID; // Offset: 0x60 // Size: 0x10
	struct TArray<char> ExtendParams; // Offset: 0x70 // Size: 0x10
	struct FVector SoundLocation; // Offset: 0x80 // Size: 0x0c
	bool bAudio3D; // Offset: 0x8c // Size: 0x01
	char pad_0x8D[0x3]; // Offset: 0x8d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameModePlayerAliasShowInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FGameModePlayerAliasShowInfo {
	// Fields
	struct FGameModePlayerAliasInfo AliasInfo; // Offset: 0x00 // Size: 0x48
	StrProperty PlayerName; // Offset: 0x48 // Size: 0x10
	struct ASTExtraBaseCharacter* Character; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickSignMsg
// Size: 0x70 // Inherited bytes: 0x00
struct FQuickSignMsg {
	// Fields
	StrProperty MsgID; // Offset: 0x00 // Size: 0x10
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	struct FVector HitPos; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty ConfigKey; // Offset: 0x30 // Size: 0x10
	IntProperty audioID; // Offset: 0x40 // Size: 0x04
	bool NoAudio; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	StrProperty ParamString; // Offset: 0x48 // Size: 0x10
	IntProperty BindActorGUID; // Offset: 0x58 // Size: 0x04
	IntProperty RelationID; // Offset: 0x5c // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x60 // Size: 0x04
	IntProperty MiniMapIconTypeId; // Offset: 0x64 // Size: 0x04
	IntProperty MsgType; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TeamMateDisappearInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FTeamMateDisappearInfo {
	// Fields
	bool bHasPawn; // Offset: 0x00 // Size: 0x01
	bool bCanGetPawn; // Offset: 0x01 // Size: 0x01
	bool bHide; // Offset: 0x02 // Size: 0x01
	bool bCharacterHide; // Offset: 0x03 // Size: 0x01
	bool bMovementCompTick; // Offset: 0x04 // Size: 0x01
	bool bMovementActive; // Offset: 0x05 // Size: 0x01
	bool bMeshVisibility; // Offset: 0x06 // Size: 0x01
	bool bMeshHideInGame; // Offset: 0x07 // Size: 0x01
	bool bMeshNoRendered; // Offset: 0x08 // Size: 0x01
	bool bMeshAbsLoc; // Offset: 0x09 // Size: 0x01
	enum class EClientSerializeStatus SerializeStatus; // Offset: 0x0a // Size: 0x01
	enum class ECharacterNetRelevantStatus NetRelevantStatus; // Offset: 0x0b // Size: 0x01
	float PawnCreateTime; // Offset: 0x0c // Size: 0x04
	float PawnDestroyTime; // Offset: 0x10 // Size: 0x04
	float ReportTime; // Offset: 0x14 // Size: 0x04
	struct FVector Location; // Offset: 0x18 // Size: 0x0c
	struct FVector MeshLocation; // Offset: 0x24 // Size: 0x0c
	struct FVector ServerLocation; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty PlayerUID; // Offset: 0x40 // Size: 0x10
	enum class ETeamMateDisappearType ReportType; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterBuffRecord
// Size: 0x14 // Inherited bytes: 0x00
struct FCharacterBuffRecord {
	// Fields
	IntProperty BuffID; // Offset: 0x00 // Size: 0x04
	IntProperty CauseSkillID; // Offset: 0x04 // Size: 0x04
	IntProperty LayerCount; // Offset: 0x08 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> Causer; // Offset: 0x0c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DriveCarNotify
// Size: 0x18 // Inherited bytes: 0x00
struct FDriveCarNotify {
	// Fields
	enum class EDriveCar DriveCar; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraBaseCharacter* Character; // Offset: 0x08 // Size: 0x08
	struct ASTExtraWheeledVehicle* Vehicle; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FVisualFieldInfo {
	// Fields
	IntProperty ViewerLayerID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FVisualFieldMetaInfo> VisualFieldMetaInfoList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldMetaInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FVisualFieldMetaInfo {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	IntProperty LayerID; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HistoricalTeammateInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FHistoricalTeammateInfo {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	uint64 UID; // Offset: 0x10 // Size: 0x08
	StrProperty OpenID; // Offset: 0x18 // Size: 0x10
	bool bIsAI; // Offset: 0x28 // Size: 0x01
	bool bIsMLAI; // Offset: 0x29 // Size: 0x01
	bool bIsDeliver; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
	uint64 OriginalUID; // Offset: 0x30 // Size: 0x08
	IntProperty InTeamIndex; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SyncTeamMatePlayerState
// Size: 0x0c // Inherited bytes: 0x00
struct FSyncTeamMatePlayerState {
	// Fields
	struct TWeakObjectPtr<struct ASTExtraPlayerState> TeammatePlayerState; // Offset: 0x00 // Size: 0x08
	char PlayerInTeamIndex; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.RescueTime
// Size: 0x0c // Inherited bytes: 0x00
struct FRescueTime {
	// Fields
	bool bBeingRescued; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float RescueStartTime; // Offset: 0x04 // Size: 0x04
	float RescueExpectedEndTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterLocAndRot
// Size: 0x18 // Inherited bytes: 0x00
struct FCharacterLocAndRot {
	// Fields
	struct FVector Loc; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterAutoFollowStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FCharacterAutoFollowStruct {
	// Fields
	bool IsFollowing; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraBaseCharacter* Target; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetMontageData
// Size: 0x08 // Inherited bytes: 0x00
struct FPetMontageData {
	// Fields
	IntProperty AnimationAssetId; // Offset: 0x00 // Size: 0x04
	float MontageStartTime; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TeamMateStateInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FTeamMateStateInfo {
	// Fields
	char DirtyFlags; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraPlayerState* PlayerState; // Offset: 0x08 // Size: 0x08
	struct FVector_NetQuantize10 Location; // Offset: 0x10 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x1c // Size: 0x0c
	float PlayerHealth; // Offset: 0x28 // Size: 0x04
	float PlayerHealthMax; // Offset: 0x2c // Size: 0x04
	IntProperty MemberIdInVoiceRoom; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0xc]; // Offset: 0x34 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleSceneAvatarDisplayInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FBattleSceneAvatarDisplayInfo {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	StrProperty PlayerUIDStr; // Offset: 0x10 // Size: 0x10
	IntProperty PlayerGender; // Offset: 0x20 // Size: 0x04
	bool bIsMVP; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct TArray<IntProperty> EquipedAvatarList; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> EquipedWeaponList; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpectateTargetSearchResult
// Size: 0x30 // Inherited bytes: 0x00
struct FSpectateTargetSearchResult {
	// Fields
	struct ASTExtraPlayerState* TargetTeammate; // Offset: 0x00 // Size: 0x08
	IntProperty RetPlayerId; // Offset: 0x08 // Size: 0x04
	IntProperty FriendId; // Offset: 0x0c // Size: 0x04
	bool bAllDie; // Offset: 0x10 // Size: 0x01
	bool bIsOnPlane; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	struct TArray<IntProperty> TeammateResults; // Offset: 0x18 // Size: 0x10
	bool bHasSelf; // Offset: 0x28 // Size: 0x01
	bool bHasNullptr; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponHitDetailInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponHitDetailInfo {
	// Fields
	IntProperty TotalShootNum; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> HitNumEveryBodys; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponHitDisanceSectionArray
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponHitDisanceSectionArray {
	// Fields
	struct TArray<IntProperty> SectionArray; // Offset: 0x00 // Size: 0x10
	enum class EWeaponDistanceType CaculateType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.WarPlayerStateScore
// Size: 0x18 // Inherited bytes: 0x00
struct FWarPlayerStateScore {
	// Fields
	IntProperty Rank; // Offset: 0x00 // Size: 0x04
	IntProperty Score; // Offset: 0x04 // Size: 0x04
	enum class EWarScoreChangeReason ScoreChangeReason; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty ScoreChangeCauserPlayerID; // Offset: 0x0c // Size: 0x04
	IntProperty HighestScore; // Offset: 0x10 // Size: 0x04
	IntProperty FollowScore; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterStateReportData
// Size: 0x18 // Inherited bytes: 0x00
struct FCharacterStateReportData {
	// Fields
	struct TArray<char> StateArray; // Offset: 0x00 // Size: 0x10
	char SpecialMoveType; // Offset: 0x10 // Size: 0x01
	bool bReplicateMovement; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.SettingReportData
// Size: 0x40 // Inherited bytes: 0x00
struct FSettingReportData {
	// Fields
	struct TArray<struct FSettingReportItem_Bool> BoolArray; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FSettingReportItem_Int> IntArray; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FSettingReportItem_Float> FloatArray; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FSettingReportItem_IntIntMap> IntIntMapArray; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SettingReportItem_IntIntMap
// Size: 0x18 // Inherited bytes: 0x00
struct FSettingReportItem_IntIntMap {
	// Fields
	char ID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<IntProperty> Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SettingReportItem_Float
// Size: 0x08 // Inherited bytes: 0x00
struct FSettingReportItem_Float {
	// Fields
	char ID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Value; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SettingReportItem_Int
// Size: 0x08 // Inherited bytes: 0x00
struct FSettingReportItem_Int {
	// Fields
	char ID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Value; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SettingReportItem_Bool
// Size: 0x02 // Inherited bytes: 0x00
struct FSettingReportItem_Bool {
	// Fields
	char ID; // Offset: 0x00 // Size: 0x01
	bool Value; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootMultiBulletsParam
// Size: 0x1c // Inherited bytes: 0x00
struct FShootMultiBulletsParam {
	// Fields
	struct FVector LaunchBulletPos; // Offset: 0x00 // Size: 0x0c
	struct FRotator LaunchBulletRot; // Offset: 0x0c // Size: 0x0c
	uint32_t ShootID; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SeekAndLockRPGBulletUploadData
// Size: 0x10 // Inherited bytes: 0x00
struct FSeekAndLockRPGBulletUploadData {
	// Fields
	char SeekAndLockStageType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct AActor* SeekAndLockTarget; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeviceInfo
// Size: 0x80 // Inherited bytes: 0x00
struct FDeviceInfo {
	// Fields
	StrProperty GPUFamily; // Offset: 0x00 // Size: 0x10
	StrProperty GLVersion; // Offset: 0x10 // Size: 0x10
	StrProperty OSVersion; // Offset: 0x20 // Size: 0x10
	StrProperty DeviceMake; // Offset: 0x30 // Size: 0x10
	StrProperty DeviceModel; // Offset: 0x40 // Size: 0x10
	StrProperty VulkanVersion; // Offset: 0x50 // Size: 0x10
	StrProperty MemorySizeInGB; // Offset: 0x60 // Size: 0x10
	StrProperty OpenID; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TeamateStateUAVChangedCompressData
// Size: 0x14 // Inherited bytes: 0x00
struct FTeamateStateUAVChangedCompressData {
	// Fields
	struct FVector_NetQuantize100 Location; // Offset: 0x00 // Size: 0x0c
	uint32_t View; // Offset: 0x0c // Size: 0x04
	char Roll; // Offset: 0x10 // Size: 0x01
	char uavType; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepDeformedInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FRepDeformedInfo {
	// Fields
	struct ASTExtraVehicleBase* DeformedVehicleObj; // Offset: 0x00 // Size: 0x08
	struct ASTExtraBaseCharacter* DriverChar; // Offset: 0x08 // Size: 0x08
	struct ASTExtraBaseCharacter* PassengerChar; // Offset: 0x10 // Size: 0x08
	struct FVector Location; // Offset: 0x18 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x24 // Size: 0x0c
	bool bIsDeformed; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	IntProperty SkillID; // Offset: 0x34 // Size: 0x04
	StrProperty SkillTriggerKey; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParachuteAnimAssetData
// Size: 0x58 // Inherited bytes: 0x00
struct FParachuteAnimAssetData {
	// Fields
	MapProperty AnimAssetCache; // Offset: 0x00 // Size: 0x50
	bool IsAnimCached; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrailMarkActorBlock
// Size: 0x20 // Inherited bytes: 0x00
struct FTrailMarkActorBlock {
	// Fields
	struct TArray<struct ATrailMarkActor*> WorkingList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct ATrailMarkActor*> AssignableList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.FootprintActorBlock
// Size: 0x58 // Inherited bytes: 0x00
struct FFootprintActorBlock {
	// Fields
	MapProperty TeamFootprintInstanceActorMap; // Offset: 0x00 // Size: 0x50
	struct AFootprintInstanceActor* OthersFootprintInstanceActor; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.FootprintActorInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FFootprintActorInfo {
	// Fields
	enum class EPhysicalSurfaceDescription PhysicalSurface; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UClass* FootprintClass; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.DistanceCullingTagConfig
// Size: 0x60 // Inherited bytes: 0x00
struct FDistanceCullingTagConfig {
	// Fields
	struct FName CullTypeName; // Offset: 0x00 // Size: 0x08
	bool bEnabled; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	MapProperty DeviceLevelDistances; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientSettingBaseOnGameMode
// Size: 0x50 // Inherited bytes: 0x00
struct FClientSettingBaseOnGameMode {
	// Fields
	bool bEnableBulletImpactFXTargetCullingByQualityLevel; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FBulletImpactFXTargetCullingByQualityLeveConfigItem> BulletImpactFXTargetCullingByQualityLeveConfigList; // Offset: 0x08 // Size: 0x10
	bool bBulletImpactFXAttachToTarget; // Offset: 0x18 // Size: 0x01
	bool bSimulateClientEnableOBBulletTrackEffect; // Offset: 0x19 // Size: 0x01
	bool bAutonomousClientEnableOBBulletTrackEffect; // Offset: 0x1a // Size: 0x01
	char pad_0x1B[0x5]; // Offset: 0x1b // Size: 0x05
	struct TArray<IntProperty> DisableBulletTrackDeviceQualityLevelConfigList; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> DisableSimulateClientBulletImpactFXDeviceQualityLevelConfigList; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> DisableSimulateClientMuzzleFXDeviceQualityLevelConfigList; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletImpactFXTargetCullingByQualityLeveConfigItem
// Size: 0x28 // Inherited bytes: 0x00
struct FBulletImpactFXTargetCullingByQualityLeveConfigItem {
	// Fields
	enum class ERenderQuality QualityLevel; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UClass*> TargetClassConfigList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UObject*> CachedClassList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemVoicePlayInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FItemVoicePlayInfo {
	// Fields
	StrProperty BankName; // Offset: 0x00 // Size: 0x10
	StrProperty EventName; // Offset: 0x10 // Size: 0x10
	struct TWeakObjectPtr<struct AActor> TargetActor; // Offset: 0x20 // Size: 0x08
	bool bPlayIng; // Offset: 0x28 // Size: 0x01
	bool bAsyncLoading; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponMgrInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FWeaponMgrInfo {
	// Fields
	struct TArray<struct FItemDefineID> ItemList; // Offset: 0x00 // Size: 0x10
	struct UWeaponManagerComponent* WeaponMgr; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.OwnerClientCreateWeaponCache
// Size: 0x18 // Inherited bytes: 0x00
struct FOwnerClientCreateWeaponCache {
	// Fields
	struct TArray<struct FItemDefineID> IDList; // Offset: 0x00 // Size: 0x10
	uint32_t CharacterGUID; // Offset: 0x10 // Size: 0x04
	IntProperty SyncTicket; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObservedData
// Size: 0x50 // Inherited bytes: 0x00
struct FObservedData {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x10 // Size: 0x10
	bool ShowPicUrl; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty TeamID; // Offset: 0x24 // Size: 0x04
	uint64 UID; // Offset: 0x28 // Size: 0x08
	struct TArray<struct FVector> PosList; // Offset: 0x30 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0xc]; // Offset: 0x44 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.GyroParameters
// Size: 0x38 // Inherited bytes: 0x00
struct FGyroParameters {
	// Fields
	float PitchReverce; // Offset: 0x00 // Size: 0x04
	float MotionTouchRate_Pitch; // Offset: 0x04 // Size: 0x04
	float MotionTouchAimRate_Pitch; // Offset: 0x08 // Size: 0x04
	float MotionRate_Pitch; // Offset: 0x0c // Size: 0x04
	float MotionAimRate_Pitch; // Offset: 0x10 // Size: 0x04
	float MotionTouchRate_Yaw; // Offset: 0x14 // Size: 0x04
	float MotionTouchAimRate_Yaw; // Offset: 0x18 // Size: 0x04
	float MotionRate_Yaw; // Offset: 0x1c // Size: 0x04
	float MotionAimRate_Yaw; // Offset: 0x20 // Size: 0x04
	float MotionRate_Pitch_Threshold; // Offset: 0x24 // Size: 0x04
	float MotionRate_Yaw_Threshold; // Offset: 0x28 // Size: 0x04
	float Left; // Offset: 0x2c // Size: 0x04
	float Right; // Offset: 0x30 // Size: 0x04
	bool bLandScapeOrientation; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponSystemReconnectReplicateData
// Size: 0x10 // Inherited bytes: 0x00
struct FWeaponSystemReconnectReplicateData {
	// Fields
	struct FName LastUseNoneGrenadeLogicSlot; // Offset: 0x00 // Size: 0x08
	struct FName LastUseLogicSlot; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ServerHitEnemyReplicatedData
// Size: 0x10 // Inherited bytes: 0x00
struct FServerHitEnemyReplicatedData {
	// Fields
	struct ASTExtraBaseCharacter* HitTargetPawn; // Offset: 0x00 // Size: 0x08
	uint32_t EventID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraViewPitchLimitData
// Size: 0x08 // Inherited bytes: 0x00
struct FCameraViewPitchLimitData {
	// Fields
	float ViewPitchMin; // Offset: 0x00 // Size: 0x04
	float ViewPitchMax; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CommonCameraModeData
// Size: 0x24 // Inherited bytes: 0x00
struct FCommonCameraModeData {
	// Fields
	struct FSwitchCameraData SwitchCameraData; // Offset: 0x00 // Size: 0x24
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraData
// Size: 0x14 // Inherited bytes: 0x00
struct FCameraData {
	// Fields
	float CameraFOV; // Offset: 0x00 // Size: 0x04
	struct FVector SpringArmSocketOffset; // Offset: 0x04 // Size: 0x0c
	float SpringArmLength; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SwitchCameraData
// Size: 0x24 // Inherited bytes: 0x14
struct FSwitchCameraData : FCameraData {
	// Fields
	float StartCameraSwitchDelayTimeFrom_Normal; // Offset: 0x14 // Size: 0x04
	float StartCameraSwitchDelayTimeFrom_Near; // Offset: 0x18 // Size: 0x04
	float StartCameraSwitchDelayTimeFrom_Aim; // Offset: 0x1c // Size: 0x04
	float CameraSwitchTime; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AimCameraModeData
// Size: 0x24 // Inherited bytes: 0x00
struct FAimCameraModeData {
	// Fields
	struct FSwitchCameraData SwitchCameraData; // Offset: 0x00 // Size: 0x24
};

// Object Name: ScriptStruct ShadowTrackerExtra.KillOrPutDownMessage
// Size: 0xb0 // Inherited bytes: 0x00
struct FKillOrPutDownMessage {
	// Fields
	enum class EKillOrPutDownMessageType MsgType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty AttackActionName; // Offset: 0x08 // Size: 0x10
	StrProperty AttackName; // Offset: 0x18 // Size: 0x10
	bool bIsHeadShot; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty KillNum; // Offset: 0x2c // Size: 0x04
	bool bShowKillNum; // Offset: 0x30 // Size: 0x01
	bool bHideKillIcon; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x6]; // Offset: 0x32 // Size: 0x06
	StrProperty FullMsg; // Offset: 0x38 // Size: 0x10
	StrProperty VictimPlayerName; // Offset: 0x48 // Size: 0x10
	StrProperty CauserPlayerName; // Offset: 0x58 // Size: 0x10
	StrProperty CauserRealPlayerName; // Offset: 0x68 // Size: 0x10
	bool bIsCauserTeammate; // Offset: 0x78 // Size: 0x01
	bool bIsVictimTeammate; // Offset: 0x79 // Size: 0x01
	bool bIamCauser; // Offset: 0x7a // Size: 0x01
	bool bIamVictim; // Offset: 0x7b // Size: 0x01
	IntProperty ResultHealthStatus; // Offset: 0x7c // Size: 0x04
	IntProperty CauserType; // Offset: 0x80 // Size: 0x04
	IntProperty VictimType; // Offset: 0x84 // Size: 0x04
	IntProperty DamageType; // Offset: 0x88 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x8c // Size: 0x04
	IntProperty PreviousHealthStatus; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct TArray<char> ExpandDataContent; // Offset: 0x98 // Size: 0x10
	IntProperty AssistNum; // Offset: 0xa8 // Size: 0x04
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SensibilityConfig
// Size: 0x100 // Inherited bytes: 0x00
struct FSensibilityConfig {
	// Fields
	struct FSensibilityMode NormalMode; // Offset: 0x00 // Size: 0x28
	struct FSensibilityMode FireMode; // Offset: 0x28 // Size: 0x28
	struct FSensibilityMode MotionMode; // Offset: 0x50 // Size: 0x28
	struct FSensibilityMode MotionFireMode; // Offset: 0x78 // Size: 0x28
	float VehicleEye; // Offset: 0xa0 // Size: 0x04
	float ParachuteEye; // Offset: 0xa4 // Size: 0x04
	float FPPEye; // Offset: 0xa8 // Size: 0x04
	IntProperty SideMirrorModeC; // Offset: 0xac // Size: 0x04
	MapProperty MaterialConfigs; // Offset: 0xb0 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SightMaterialConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FSightMaterialConfig {
	// Fields
	IntProperty Color; // Offset: 0x00 // Size: 0x04
	IntProperty Type; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SensibilityMode
// Size: 0x28 // Inherited bytes: 0x00
struct FSensibilityMode {
	// Fields
	float NoAim; // Offset: 0x00 // Size: 0x04
	float Sight1X; // Offset: 0x04 // Size: 0x04
	float Sight2X; // Offset: 0x08 // Size: 0x04
	float Sight3X; // Offset: 0x0c // Size: 0x04
	float Sight4X; // Offset: 0x10 // Size: 0x04
	float Sight6X; // Offset: 0x14 // Size: 0x04
	float Sight8X; // Offset: 0x18 // Size: 0x04
	float FPPNoAim; // Offset: 0x1c // Size: 0x04
	float Shoulder; // Offset: 0x20 // Size: 0x04
	float ShoulderFPP; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ValidTouchMoveFrameConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FValidTouchMoveFrameConfig {
	// Fields
	StrProperty DeviceName; // Offset: 0x00 // Size: 0x10
	IntProperty Enable; // Offset: 0x10 // Size: 0x04
	IntProperty Frame; // Offset: 0x14 // Size: 0x04
	bool IsInit; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AsyncLoadAnimParams
// Size: 0x20 // Inherited bytes: 0x00
struct FAsyncLoadAnimParams {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAsyncloadAnimParams
// Size: 0x01 // Inherited bytes: 0x00
struct FMonsterAsyncloadAnimParams {
	// Fields
	enum class EMonsterPoseType PosType; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.KilledTipsBlock
// Size: 0x38 // Inherited bytes: 0x00
struct FKilledTipsBlock {
	// Fields
	enum class EDamageType DamageType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty attackerName; // Offset: 0x08 // Size: 0x10
	StrProperty WeaponName; // Offset: 0x18 // Size: 0x10
	StrProperty DeadName; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarSyncData
// Size: 0x3c // Inherited bytes: 0x00
struct FAvatarSyncData {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty AdditionalItemID; // Offset: 0x04 // Size: 0x04
	IntProperty SlotID; // Offset: 0x08 // Size: 0x04
	IntProperty SubSlotID; // Offset: 0x0c // Size: 0x04
	IntProperty HideState; // Offset: 0x10 // Size: 0x04
	IntProperty ReplaceState; // Offset: 0x14 // Size: 0x04
	IntProperty FakeItemID; // Offset: 0x18 // Size: 0x04
	enum class ESlotDescDiff ForceDescDiff; // Offset: 0x1c // Size: 0x01
	enum class ESyncOperation OperationType; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	struct FAvatarCustom CustomInfo; // Offset: 0x20 // Size: 0x18
	enum class EForceHideState ForceHideState; // Offset: 0x38 // Size: 0x01
	bool bForceHideState; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarCustom
// Size: 0x18 // Inherited bytes: 0x00
struct FAvatarCustom {
	// Fields
	enum class EAvatarCustomType CustomType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty ColorID; // Offset: 0x04 // Size: 0x04
	IntProperty PatternID; // Offset: 0x08 // Size: 0x04
	IntProperty NumID; // Offset: 0x0c // Size: 0x04
	IntProperty ParticleID; // Offset: 0x10 // Size: 0x04
	IntProperty ShapeInfo; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarTableData
// Size: 0xa0 // Inherited bytes: 0x00
struct FAvatarTableData {
	// Fields
	IntProperty SlotID; // Offset: 0x00 // Size: 0x04
	IntProperty SubSlotID; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> HideFlags; // Offset: 0x08 // Size: 0x10
	struct TArray<IntProperty> ReplaceFlags; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> RecoverHideFlagsWhenSelfHidden; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> RecoverReplaceFlagsWhenSelfHidden; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> RecoverHideFlagsWhenSelfReplaced; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> RecoverReplaceFlagsWhenSelfReplaced; // Offset: 0x58 // Size: 0x10
	struct TArray<IntProperty> ConflictConfig; // Offset: 0x68 // Size: 0x10
	struct TArray<IntProperty> ConflictConfigWhenSelfReplaced; // Offset: 0x78 // Size: 0x10
	IntProperty HideBoneSlotID; // Offset: 0x88 // Size: 0x04
	IntProperty HideBoneType; // Offset: 0x8c // Size: 0x04
	struct TArray<struct FName> HideBoneNames; // Offset: 0x90 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarSlotDesc
// Size: 0x80 // Inherited bytes: 0x00
struct FAvatarSlotDesc {
	// Fields
	IntProperty SlotID; // Offset: 0x00 // Size: 0x04
	IntProperty SubSlotID; // Offset: 0x04 // Size: 0x04
	struct FItemDefineID ItemDefineID; // Offset: 0x08 // Size: 0x18
	struct FItemDefineID RealShowItemDefineID; // Offset: 0x20 // Size: 0x18
	IntProperty Gender; // Offset: 0x38 // Size: 0x04
	IntProperty HideState; // Offset: 0x3c // Size: 0x04
	IntProperty ReplaceState; // Offset: 0x40 // Size: 0x04
	bool IsExist; // Offset: 0x44 // Size: 0x01
	char pad_0x45[0x3]; // Offset: 0x45 // Size: 0x03
	struct FAvatarCustom CustomInfo; // Offset: 0x48 // Size: 0x18
	bool bForceHideState; // Offset: 0x60 // Size: 0x01
	enum class ESlotDescDiff SlotDescDiff; // Offset: 0x61 // Size: 0x01
	char pad_0x62[0x6]; // Offset: 0x62 // Size: 0x06
	struct FItemDefineID OldItemDefineID; // Offset: 0x68 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.TempAvatarSlotDesc
// Size: 0xd0 // Inherited bytes: 0x00
struct FTempAvatarSlotDesc {
	// Fields
	IntProperty SlotID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FAvatarTableData RelationData; // Offset: 0x08 // Size: 0xa0
	struct TArray<IntProperty> ReplaceDesc; // Offset: 0xa8 // Size: 0x10
	struct TArray<IntProperty> HideDesc; // Offset: 0xb8 // Size: 0x10
	bool bForceHideState; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarMutilForceHideState
// Size: 0xb8 // Inherited bytes: 0x00
struct FAvatarMutilForceHideState {
	// Fields
	IntProperty SlotID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FMutilForceHideState ServerMutilForceHideState; // Offset: 0x08 // Size: 0x58
	struct FMutilForceHideState ClientMutilForceHideState; // Offset: 0x60 // Size: 0x58
};

// Object Name: ScriptStruct ShadowTrackerExtra.MutilForceHideState
// Size: 0x58 // Inherited bytes: 0x00
struct FMutilForceHideState {
	// Fields
	MapProperty MutilForceHideStateMap; // Offset: 0x00 // Size: 0x50
	enum class EForceHideState FinalHideState; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ForceEquipSlotInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FForceEquipSlotInfo {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetAvatarSyncData
// Size: 0x20 // Inherited bytes: 0x00
struct FNetAvatarSyncData {
	// Fields
	struct TArray<struct FAvatarSyncData> SlotSyncData; // Offset: 0x00 // Size: 0x10
	IntProperty Gender; // Offset: 0x10 // Size: 0x04
	IntProperty BaseID; // Offset: 0x14 // Size: 0x04
	IntProperty UpdateFlag; // Offset: 0x18 // Size: 0x04
	IntProperty TeamID; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AsyncLoadSoftObjectCache
// Size: 0x20 // Inherited bytes: 0x00
struct FAsyncLoadSoftObjectCache {
	// Fields
	struct TArray<struct FSoftObjectPath> SoftPathList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UObject*> ObjectCache; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SlotHandleDesc
// Size: 0x38 // Inherited bytes: 0x00
struct FSlotHandleDesc {
	// Fields
	IntProperty SlotID; // Offset: 0x00 // Size: 0x04
	struct TWeakObjectPtr<struct UItemHandleBase> EquipHandle; // Offset: 0x04 // Size: 0x08
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct UAvatarCustomBase*> CustomHandles; // Offset: 0x10 // Size: 0x10
	struct FSoftObjectPath EquipMeshAssetPath; // Offset: 0x20 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.SlotMeshDesc
// Size: 0x48 // Inherited bytes: 0x00
struct FSlotMeshDesc {
	// Fields
	IntProperty SlotID; // Offset: 0x00 // Size: 0x04
	struct TWeakObjectPtr<struct UMeshComponent> MeshComp; // Offset: 0x04 // Size: 0x08
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FParticleGroup ParticleGroup; // Offset: 0x10 // Size: 0x30
	struct TWeakObjectPtr<struct UItemHandleBase> CurEquipHandle; // Offset: 0x40 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleGroup
// Size: 0x30 // Inherited bytes: 0x00
struct FParticleGroup {
	// Fields
	struct TArray<struct UParticleSystem*> ParticleSystemList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UParticleSystemComponent*> ParticleCompList; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FParticleAsset> ParticleAssetList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleAsset
// Size: 0x90 // Inherited bytes: 0x00
struct FParticleAsset {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct UFXSystemAsset* ParticleSystem; // Offset: 0x30 // Size: 0x28
	struct FName AttachSocket; // Offset: 0x58 // Size: 0x08
	struct FName ComponentTag; // Offset: 0x60 // Size: 0x08
	struct TArray<struct FParticleSysParam> InstanceParameters; // Offset: 0x68 // Size: 0x10
	bool bLimitCount; // Offset: 0x78 // Size: 0x01
	bool bAutoDestroy; // Offset: 0x79 // Size: 0x01
	bool bAutoActive; // Offset: 0x7a // Size: 0x01
	bool EnableCullDist; // Offset: 0x7b // Size: 0x01
	float CullDist; // Offset: 0x7c // Size: 0x04
	bool bDisableInFPPMode; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0xf]; // Offset: 0x81 // Size: 0x0f
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarReAttachConfigCollection
// Size: 0x10 // Inherited bytes: 0x00
struct FAvatarReAttachConfigCollection {
	// Fields
	struct TArray<struct FReAttachConfig> AvatarReAttachList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReAttachConfig
// Size: 0xe0 // Inherited bytes: 0x00
struct FReAttachConfig {
	// Fields
	enum class EAvatarSlotType ReAttachSlot; // Offset: 0x00 // Size: 0x01
	enum class EAvatarSlotType TriggerSlot; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty Priority; // Offset: 0x04 // Size: 0x04
	bool bForceRecreateAdaptSlotMesh; // Offset: 0x08 // Size: 0x01
	enum class ERetargetAvatarAdaptSpace SlotAdaptSpace; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct FTransform AttachTransform; // Offset: 0x10 // Size: 0x30
	bool bForceRecreateAdaptAssociatedSlotMesh; // Offset: 0x40 // Size: 0x01
	enum class ERetargetAvatarAdaptSpace AssociatedSlotAdaptSpace; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0xe]; // Offset: 0x42 // Size: 0x0e
	struct FTransform AssociatedSlotAdaptTransform; // Offset: 0x50 // Size: 0x30
	struct TArray<enum class EAvatarSlotType> AssociatedSlotList; // Offset: 0x80 // Size: 0x10
	MapProperty WingClothScaleTransformMap; // Offset: 0x90 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AssetPackage
// Size: 0x08 // Inherited bytes: 0x00
struct FAssetPackage {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAttachMeshData
// Size: 0x100 // Inherited bytes: 0x08
struct FAvatarAttachMeshData : FAssetPackage {
	// Fields
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
	struct FName AttachSocket; // Offset: 0x40 // Size: 0x08
	struct FName SlotName; // Offset: 0x48 // Size: 0x08
	struct UStaticMesh* StaticMesh; // Offset: 0x50 // Size: 0x28
	struct USkeletalMesh* SkeletalMesh; // Offset: 0x78 // Size: 0x28
	struct USkeletalMesh* LODSkeletalMesh; // Offset: 0xa0 // Size: 0x28
	struct UMaterialInterface* MatInstance; // Offset: 0xc8 // Size: 0x28
	struct UAnimInstance* AttachAnimBP; // Offset: 0xf0 // Size: 0x08
	bool bUseScreenFactorOptimizeAnimRate; // Offset: 0xf8 // Size: 0x01
	char pad_0xF9[0x7]; // Offset: 0xf9 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeshData
// Size: 0x80 // Inherited bytes: 0x00
struct FMeshData {
	// Fields
	struct UStaticMesh* stMesh; // Offset: 0x00 // Size: 0x08
	struct USkeletalMesh* skMesh; // Offset: 0x08 // Size: 0x08
	struct UMaterialInstance* matIns; // Offset: 0x10 // Size: 0x08
	struct TArray<struct UMaterialInstance*> additionalMats; // Offset: 0x18 // Size: 0x10
	enum class EMeshType meshType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct TArray<IntProperty> hiddenSlots; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FReplacedSlotInfo> replacedSlots; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FHideBoneData> hideBoneSlots; // Offset: 0x50 // Size: 0x10
	struct FItemDefineID definedID; // Offset: 0x60 // Size: 0x18
	bool functionValid; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.HideBoneData
// Size: 0x20 // Inherited bytes: 0x00
struct FHideBoneData {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplacedSlotInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FReplacedSlotInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeshPackage
// Size: 0x258 // Inherited bytes: 0x08
struct FMeshPackage : FAssetPackage {
	// Fields
	struct UStaticMesh* maleStMesh; // Offset: 0x08 // Size: 0x28
	struct UStaticMesh* femaleStMesh; // Offset: 0x30 // Size: 0x28
	struct UStaticMesh* maleLODStMesh; // Offset: 0x58 // Size: 0x28
	struct UStaticMesh* femaleLODStMesh; // Offset: 0x80 // Size: 0x28
	struct USkeletalMesh* maleSkMesh; // Offset: 0xa8 // Size: 0x28
	struct USkeletalMesh* femaleSkMesh; // Offset: 0xd0 // Size: 0x28
	struct USkeletalMesh* maleLODSkMesh; // Offset: 0xf8 // Size: 0x28
	struct USkeletalMesh* femaleLODSkMesh; // Offset: 0x120 // Size: 0x28
	struct UMaterialInterface* maleMat; // Offset: 0x148 // Size: 0x28
	struct UMaterialInterface* femaleMat; // Offset: 0x170 // Size: 0x28
	struct TArray<struct FMaterialSet> additionalMaleMats; // Offset: 0x198 // Size: 0x10
	struct TArray<struct FMaterialSet> additionalFemaleMats; // Offset: 0x1a8 // Size: 0x10
	struct UMaterialInterface* baseMat; // Offset: 0x1b8 // Size: 0x08
	struct UAnimInstance* animBP; // Offset: 0x1c0 // Size: 0x08
	struct UAnimSequence* LobbyIdleAnim; // Offset: 0x1c8 // Size: 0x28
	bool bForceUseAnim; // Offset: 0x1f0 // Size: 0x01
	bool IsEffectOnly; // Offset: 0x1f1 // Size: 0x01
	enum class EEffectCreateType EffectCreateType; // Offset: 0x1f2 // Size: 0x01
	char pad_0x1F3[0x5]; // Offset: 0x1f3 // Size: 0x05
	struct TArray<struct FAvatarEffectData> EffectDataList; // Offset: 0x1f8 // Size: 0x10
	struct TArray<struct FAvatarAttachMeshData> AttachMeshDataList; // Offset: 0x208 // Size: 0x10
	struct UClass* animBPClass; // Offset: 0x218 // Size: 0x28
	char pad_0x240[0x18]; // Offset: 0x240 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarEffectData
// Size: 0xb0 // Inherited bytes: 0x00
struct FAvatarEffectData {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct UObject* ParticleSystem; // Offset: 0x30 // Size: 0x28
	struct FName AttachSocket; // Offset: 0x58 // Size: 0x08
	struct FName ComponentTag; // Offset: 0x60 // Size: 0x08
	enum class EEffectValidTarget ValidMethod; // Offset: 0x68 // Size: 0x01
	enum class EEffectValidDevice ValidDevice; // Offset: 0x69 // Size: 0x01
	bool bIsActivate; // Offset: 0x6a // Size: 0x01
	bool bIsActivateWithMesh; // Offset: 0x6b // Size: 0x01
	bool IsLobbyActivate; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	struct TArray<struct FParticleSysParam> InstanceParameters; // Offset: 0x70 // Size: 0x10
	struct UObject* ParticleSystem_F; // Offset: 0x80 // Size: 0x28
	char pad_0xA8[0x8]; // Offset: 0xa8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialSet
// Size: 0x58 // Inherited bytes: 0x00
struct FMaterialSet {
	// Fields
	struct UMaterialInterface* targetMat; // Offset: 0x00 // Size: 0x28
	enum class EAvatarSlotType targetSlot; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct UMaterialInterface* targetBaseMat; // Offset: 0x30 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.UnderWearMaterial
// Size: 0x50 // Inherited bytes: 0x00
struct FUnderWearMaterial {
	// Fields
	struct UMaterialInstance* maleMat; // Offset: 0x00 // Size: 0x28
	struct UMaterialInstance* femaleMat; // Offset: 0x28 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.AdditonalAvatarStruct
// Size: 0x18 // Inherited bytes: 0x00
struct FAdditonalAvatarStruct {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> SlotIDList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAttachMeshFrameSkipMap
// Size: 0x08 // Inherited bytes: 0x00
struct FAvatarAttachMeshFrameSkipMap {
	// Fields
	IntProperty LODLevel; // Offset: 0x00 // Size: 0x04
	IntProperty SkipFrame; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAttachMeshGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FAvatarAttachMeshGroup {
	// Fields
	struct TArray<struct UMeshComponent*> AttachMeshCompList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FAvatarAttachMeshData> AttachMeshDataList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarEffectGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FAvatarEffectGroup {
	// Fields
	struct TArray<struct UFXSystemComponent*> ParticleCompList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FAvatarEffectData> EffectDataList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarIDListStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FAvatarIDListStruct {
	// Fields
	struct TArray<IntProperty> AvatarIDList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarHideBonesDesc
// Size: 0x10 // Inherited bytes: 0x00
struct FAvatarHideBonesDesc {
	// Fields
	struct TArray<struct FHideBoneData> hideBoneSlots; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.OverrideMaterialSlot
// Size: 0x18 // Inherited bytes: 0x00
struct FOverrideMaterialSlot {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct UMaterialInterface*> Materials; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarSlotNameConfig
// Size: 0xa0 // Inherited bytes: 0x00
struct FAvatarSlotNameConfig {
	// Fields
	MapProperty MaleSlotName; // Offset: 0x00 // Size: 0x50
	MapProperty FemaleSlotName; // Offset: 0x50 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarActionBase
// Size: 0x18 // Inherited bytes: 0x00
struct FAvatarActionBase {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObjectListWrapper
// Size: 0x10 // Inherited bytes: 0x00
struct FObjectListWrapper {
	// Fields
	struct TArray<struct UObject*> Objects; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DIYEnableLevel
// Size: 0x08 // Inherited bytes: 0x00
struct FDIYEnableLevel {
	// Fields
	IntProperty DeviceLevel; // Offset: 0x00 // Size: 0x04
	IntProperty EnableLevel; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HandleMeshPack
// Size: 0x1a8 // Inherited bytes: 0x00
struct FHandleMeshPack {
	// Fields
	struct UBattleItemHandleBase* Handle; // Offset: 0x00 // Size: 0x08
	struct FWeaponMeshCfg MeshCfg; // Offset: 0x08 // Size: 0x1a0
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMultiSlotState
// Size: 0x40 // Inherited bytes: 0x00
struct FVehicleMultiSlotState {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty HandlePath; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FItemAvatarMatPath> SlotMats; // Offset: 0x18 // Size: 0x10
	struct UBackpackVehiclePartAvatarHandle* Handle; // Offset: 0x28 // Size: 0x08
	struct UMeshComponent* MeshComp; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetSunroofStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FNetSunroofStruct {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	bool bSunroofOpen; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleNetMultiSlotData
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleNetMultiSlotData {
	// Fields
	struct TArray<struct FVehicleSlotSyncData> SlotDataArray; // Offset: 0x00 // Size: 0x10
	IntProperty UpdateFlag; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSlotSyncData
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleSlotSyncData {
	// Fields
	enum class EVehiclePartSlot Slot; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetHighTireStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FNetHighTireStruct {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	bool bEnableHighTire; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleNetAvatarData
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleNetAvatarData {
	// Fields
	struct FItemDefineID ItemDefineID; // Offset: 0x00 // Size: 0x18
	IntProperty UpdateFlag; // Offset: 0x18 // Size: 0x04
	IntProperty SwitchEffectId; // Offset: 0x1c // Size: 0x04
	StrProperty SkinOwnerUID; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleStyleData
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleStyleData {
	// Fields
	IntProperty StyleID; // Offset: 0x00 // Size: 0x04
	enum class EVehicleSlotType SlotType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct TArray<struct FVehicleStyle> MutilStyles; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleStyle
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleStyle {
	// Fields
	enum class EVehicleStyleType StyleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty StyleValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetTransformState
// Size: 0x28 // Inherited bytes: 0x00
struct FNetTransformState {
	// Fields
	enum class EFormType FormType; // Offset: 0x00 // Size: 0x01
	enum class ETransformState State; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct TArray<uint32_t> PlayerKeys; // Offset: 0x08 // Size: 0x10
	char SyncFlag; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0xf]; // Offset: 0x19 // Size: 0x0f
};

// Object Name: ScriptStruct ShadowTrackerExtra.LoadGuideConfig
// Size: 0x28 // Inherited bytes: 0x00
struct FLoadGuideConfig {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.LoadGuideUIFinishRet
// Size: 0x08 // Inherited bytes: 0x00
struct FLoadGuideUIFinishRet {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.NewbieGuideItem
// Size: 0x90 // Inherited bytes: 0x00
struct FNewbieGuideItem {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	enum class ENewbieGuideType Type; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty MaxGuideCounts; // Offset: 0x1c // Size: 0x04
	IntProperty MaxGuideLevel; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<enum class ENewbieGuidePlayerCategory> SubjectPlayerTypes; // Offset: 0x28 // Size: 0x10
	IntProperty Priority; // Offset: 0x38 // Size: 0x04
	IntProperty MuteFlag; // Offset: 0x3c // Size: 0x04
	IntProperty PreconditionID; // Offset: 0x40 // Size: 0x04
	float PreconditionTipTimeGap; // Offset: 0x44 // Size: 0x04
	struct TArray<struct USTNewbieGuideConditionBase*> Conditions; // Offset: 0x48 // Size: 0x10
	struct USTNewbieGuideSuccessListenerBase* QuickFinishedListener; // Offset: 0x58 // Size: 0x08
	struct TArray<struct USTNewbieGuideSuccessListenerBase*> QuickFinishedListenerList; // Offset: 0x60 // Size: 0x10
	float Duration; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<struct FNewbieGuideUIInfo> UIInfos; // Offset: 0x78 // Size: 0x10
	bool UseNewEdition; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.NewbieGuideUIInfo
// Size: 0xa0 // Inherited bytes: 0x00
struct FNewbieGuideUIInfo {
	// Fields
	struct UClass* WidgetClassPath; // Offset: 0x00 // Size: 0x28
	bool isMountUIDynamic; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	StrProperty MountName; // Offset: 0x30 // Size: 0x10
	StrProperty MountOuterName; // Offset: 0x40 // Size: 0x10
	struct FAnchorData LayoutData; // Offset: 0x50 // Size: 0x28
	StrProperty LogicManagerNames; // Offset: 0x78 // Size: 0x10
	bool bAutoSize; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	IntProperty ZOrder; // Offset: 0x8c // Size: 0x04
	struct UWidget* UIWidget; // Offset: 0x90 // Size: 0x08
	struct UObject* UIWidgetClass; // Offset: 0x98 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterSearchHandle
// Size: 0x04 // Inherited bytes: 0x00
struct FCharacterSearchHandle {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicCompositeEntry
// Size: 0xa8 // Inherited bytes: 0x00
struct FDynamicCompositeEntry {
	// Fields
	struct USTCharacterSearchCompositeRuleObject* SourceCompositeObject; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0xa0]; // Offset: 0x08 // Size: 0xa0
};

// Object Name: ScriptStruct ShadowTrackerExtra.TagEndKey
// Size: 0x10 // Inherited bytes: 0x00
struct FTagEndKey {
	// Fields
	struct FName Tag; // Offset: 0x00 // Size: 0x08
	bool bIsServer; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterSearchResult
// Size: 0x30 // Inherited bytes: 0x00
struct FCharacterSearchResult {
	// Fields
	enum class ECharacterSearchEnum SearchEnum; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct AActor*> FinalResults; // Offset: 0x08 // Size: 0x10
	struct TArray<struct AActor*> LastResults; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicRuleEntry
// Size: 0x20 // Inherited bytes: 0x00
struct FDynamicRuleEntry {
	// Fields
	struct FName Tag; // Offset: 0x00 // Size: 0x08
	bool bIsServer; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct USTCharacterSearchRuleObject* SourceRuleObject; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterSearchRule
// Size: 0xa8 // Inherited bytes: 0x00
struct FCharacterSearchRule {
	// Fields
	enum class ECharacterSearchEnum SearchEnum; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct AActor* ActorClass; // Offset: 0x08 // Size: 0x08
	float IntervalTime; // Offset: 0x10 // Size: 0x04
	struct FCharacterSearchData ParamData; // Offset: 0x14 // Size: 0x14
	bool bCheckDifference; // Offset: 0x28 // Size: 0x01
	bool bResetTickTimeOnConditionFailed; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
	struct TArray<struct USTCharacterSearchCondition*> Conditions; // Offset: 0x30 // Size: 0x10
	struct FUAEBlackboardKeySelectorIndex SearchRangeType; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FUAEBlackboardKeySelectorIndex> ActorFilterType; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FUAEBlackboardKeySelectorIndex> SortFilterType; // Offset: 0x60 // Size: 0x10
	struct TArray<struct USTCharacterSearchActorFilter*> CustomActorFilter; // Offset: 0x70 // Size: 0x10
	struct TArray<struct USTCharacterSearchSortFilter*> CustomSortFilter; // Offset: 0x80 // Size: 0x10
	char pad_0x90[0x5]; // Offset: 0x90 // Size: 0x05
	bool bIsDynamic; // Offset: 0x95 // Size: 0x01
	char pad_0x96[0x2]; // Offset: 0x96 // Size: 0x02
	struct FCharacterSearchHandle DynamicHandle; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct USTCharacterSearchRangeFrom* CustomSearchRange; // Offset: 0xa0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterSearchData
// Size: 0x14 // Inherited bytes: 0x00
struct FCharacterSearchData {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Radius; // Offset: 0x04 // Size: 0x04
	float Angle; // Offset: 0x08 // Size: 0x04
	bool bEnableTrace; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float LowerTraceRatio; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterCompositeSearchResult
// Size: 0x60 // Inherited bytes: 0x00
struct FCharacterCompositeSearchResult {
	// Fields
	struct TArray<enum class ECharacterSearchEnum> CompositeSearchEnums; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x50]; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropResource
// Size: 0xa0 // Inherited bytes: 0x00
struct FAirDropResource {
	// Fields
	struct UStaticMesh* SoftAirdropBoxMesh; // Offset: 0x00 // Size: 0x28
	struct UStaticMesh* SoftAirdropParachuteMesh; // Offset: 0x28 // Size: 0x28
	struct UParticleSystem* SoftAirdropSmoke; // Offset: 0x50 // Size: 0x28
	struct UParticleSystem* SoftAirdropFlash; // Offset: 0x78 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropBoxGenerateWrapperItemData
// Size: 0x10 // Inherited bytes: 0x00
struct FAirDropBoxGenerateWrapperItemData {
	// Fields
	struct AActor* WrapperClass; // Offset: 0x00 // Size: 0x08
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropOrder
// Size: 0xa8 // Inherited bytes: 0x00
struct FAirDropOrder {
	// Fields
	struct FVector AirDropPlaneSpawnPosition; // Offset: 0x00 // Size: 0x0c
	struct FVector AirDropPlaneFlyingDirection; // Offset: 0x0c // Size: 0x0c
	float AirDropPlaneFlyingSpeed; // Offset: 0x18 // Size: 0x04
	struct FVector AirDropStuffFallingPosition; // Offset: 0x1c // Size: 0x0c
	struct TArray<struct FVector> BoxFallingPositionArray; // Offset: 0x28 // Size: 0x10
	IntProperty AirDropIndex; // Offset: 0x38 // Size: 0x04
	bool bIsDrawAirDropFlightPath; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct FVector AirDropPlaneEndPosition; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct TArray<struct FAirDropBoxParams> AirDropBoxParamsArray; // Offset: 0x50 // Size: 0x10
	struct UObject* AirdropBoxClass; // Offset: 0x60 // Size: 0x08
	float AirDropStuffFallingSpeed; // Offset: 0x68 // Size: 0x04
	bool bIsSpecialAirdrop; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	IntProperty DropType; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	StrProperty DropCategory; // Offset: 0x78 // Size: 0x10
	uint32_t AirDropSummoner; // Offset: 0x88 // Size: 0x04
	IntProperty ZombieID; // Offset: 0x8c // Size: 0x04
	IntProperty FlowID; // Offset: 0x90 // Size: 0x04
	bool bIsEmptyAirdrop; // Offset: 0x94 // Size: 0x01
	char pad_0x95[0x3]; // Offset: 0x95 // Size: 0x03
	IntProperty DropID; // Offset: 0x98 // Size: 0x04
	bool bShowAirLineAndMark; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x3]; // Offset: 0x9d // Size: 0x03
	IntProperty HaveDropIndex; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropBoxParams
// Size: 0x18 // Inherited bytes: 0x00
struct FAirDropBoxParams {
	// Fields
	struct FVector AirdropBoxFallingPosition; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UObject* AirdropBoxClass; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ConveyorCarryData
// Size: 0x30 // Inherited bytes: 0x00
struct FConveyorCarryData {
	// Fields
	struct AActor* Actor; // Offset: 0x00 // Size: 0x08
	float StartTime; // Offset: 0x08 // Size: 0x04
	IntProperty StartStep; // Offset: 0x0c // Size: 0x04
	struct FVector RelativeLocation; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FQuat RelativeQuat; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TeamRelevantHealth
// Size: 0x08 // Inherited bytes: 0x00
struct FTeamRelevantHealth {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	float Health; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CheckGroundSlopData
// Size: 0x0c // Inherited bytes: 0x00
struct FCheckGroundSlopData {
	// Fields
	float MaxSlopAngle; // Offset: 0x00 // Size: 0x04
	IntProperty MaxSlopAngleLastFrames; // Offset: 0x04 // Size: 0x04
	IntProperty CurUpHeavySlopFrames; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.InterpToMovementComponent2ReplicatedData
// Size: 0x10 // Inherited bytes: 0x00
struct FInterpToMovementComponent2ReplicatedData {
	// Fields
	enum class EInterpToBehaviourType ReplicatedBehaviourType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ReplicatedCurrentTime; // Offset: 0x04 // Size: 0x04
	float ReplicatedTimeMultiplier; // Offset: 0x08 // Size: 0x04
	float ReplicatedCurrentDirection; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObbyMoveMode
// Size: 0x38 // Inherited bytes: 0x00
struct FObbyMoveMode {
	// Fields
	enum class EObbyMoveCoordinateSpace CoordinateSpace; // Offset: 0x00 // Size: 0x01
	enum class EObbyMoveType MoveType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float SpeedX; // Offset: 0x04 // Size: 0x04
	float SpeedY; // Offset: 0x08 // Size: 0x04
	float SpeedZ; // Offset: 0x0c // Size: 0x04
	float MoveTime; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FObbySplineMovement SplineMovement; // Offset: 0x18 // Size: 0x10
	float StartTime; // Offset: 0x28 // Size: 0x04
	enum class EObbyLoopType LoopType; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	float DragInterpSpeed; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObbySplineMovement
// Size: 0x10 // Inherited bytes: 0x00
struct FObbySplineMovement {
	// Fields
	struct USplineComponent* SplineComponent; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* TimeCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.FPSMonitorConfigSwitch
// Size: 0x14 // Inherited bytes: 0x00
struct FFPSMonitorConfigSwitch {
	// Fields
	bool bFPSMonitor; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FPSCollectInternal; // Offset: 0x04 // Size: 0x04
	IntProperty FPSCollectCountForGroup; // Offset: 0x08 // Size: 0x04
	float FPSThreshold; // Offset: 0x0c // Size: 0x04
	IntProperty FPSLowActionType; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SplineBaseData
// Size: 0x78 // Inherited bytes: 0x00
struct FSplineBaseData {
	// Fields
	struct AActor* InstigatorActor; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x28]; // Offset: 0x08 // Size: 0x28
	struct USplineComponent* SplineComponent; // Offset: 0x30 // Size: 0x08
	struct UStaticMeshComponent* HeadMeshComponent; // Offset: 0x38 // Size: 0x08
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // Offset: 0x40 // Size: 0x10
	char pad_0x50[0x28]; // Offset: 0x50 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomUnderWaterConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FCustomUnderWaterConfig {
	// Fields
	struct UMaterialInterface* UnderWaterCamEffectMaterial; // Offset: 0x00 // Size: 0x08
	struct UScreenAppearanceProvider* EnterCamAppearanceProviderClass; // Offset: 0x08 // Size: 0x08
	bool bUseUnderWaterFog; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FLinearColor FogInscatteringColor; // Offset: 0x14 // Size: 0x10
	float FogStartDistance; // Offset: 0x24 // Size: 0x04
	float HDRUnderWaterFogDensity; // Offset: 0x28 // Size: 0x04
	float NormalUnderWaterFogDensity; // Offset: 0x2c // Size: 0x04
	bool bUseUnderWaterPPV; // Offset: 0x30 // Size: 0x01
	bool bUseUnderWaterSound; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x2]; // Offset: 0x32 // Size: 0x02
	IntProperty SkyTransitionID; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TargetTrainData
// Size: 0x28 // Inherited bytes: 0x00
struct FTargetTrainData {
	// Fields
	StrProperty UID; // Offset: 0x00 // Size: 0x10
	IntProperty TimeStamp; // Offset: 0x10 // Size: 0x04
	IntProperty Score; // Offset: 0x14 // Size: 0x04
	IntProperty Duration; // Offset: 0x18 // Size: 0x04
	IntProperty IslandID; // Offset: 0x1c // Size: 0x04
	IntProperty ShootType; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ThrowableConfig
// Size: 0x78 // Inherited bytes: 0x00
struct FThrowableConfig {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct AEliteProjectile* ProjectileClass; // Offset: 0x08 // Size: 0x08
	char bShowTrajectory : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_1 : 7; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct UClass* Ring; // Offset: 0x18 // Size: 0x28
	struct FName RingAttachSocket; // Offset: 0x40 // Size: 0x08
	float ExplosionDelayOverride; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct UCurveFloat* SpeedCurve; // Offset: 0x50 // Size: 0x08
	struct UCurveFloat* PitchCurve; // Offset: 0x58 // Size: 0x08
	float FireDelay; // Offset: 0x60 // Size: 0x04
	float ProjectileSpawnDelay; // Offset: 0x64 // Size: 0x04
	float ThrowCooldownDuration; // Offset: 0x68 // Size: 0x04
	struct FVector PawnMotionContributionMultiplier; // Offset: 0x6c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.RenderQualitySettings
// Size: 0x08 // Inherited bytes: 0x00
struct FRenderQualitySettings {
	// Fields
	enum class ERenderQuality RenderQualitySetting; // Offset: 0x00 // Size: 0x01
	enum class ERenderStyle RenderStyleSetting; // Offset: 0x01 // Size: 0x01
	bool RenderMSAASetting; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	IntProperty RenderMSAAValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FadeDynamicStyleInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FFadeDynamicStyleInfo {
	// Fields
	char pad_0x0[0xc]; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.RenderItem
// Size: 0x18 // Inherited bytes: 0x00
struct FRenderItem {
	// Fields
	StrProperty RenderKey; // Offset: 0x00 // Size: 0x10
	float RenderValue; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TextureArrayInstanceMat
// Size: 0x30 // Inherited bytes: 0x00
struct FTextureArrayInstanceMat {
	// Fields
	StrProperty BaseMatName; // Offset: 0x00 // Size: 0x10
	StrProperty TextureArrayBaseMat; // Offset: 0x10 // Size: 0x10
	struct TArray<StrProperty> CustomParamList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialParametersStyle
// Size: 0x38 // Inherited bytes: 0x00
struct FMaterialParametersStyle {
	// Fields
	StrProperty StyleName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FMaterialParameterFloat> Floats; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FMaterialParameterVector> Vectors; // Offset: 0x20 // Size: 0x10
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialParameterVector
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialParameterVector {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FVector Vector; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialParameterFloat
// Size: 0x10 // Inherited bytes: 0x00
struct FMaterialParameterFloat {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	float Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RenderStyleParameterInMaps
// Size: 0x40 // Inherited bytes: 0x00
struct FRenderStyleParameterInMaps {
	// Fields
	enum class ERenderDynamicStyle DynamicStyleName; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<StrProperty> PostProcessParams; // Offset: 0x08 // Size: 0x10
	struct FACESParameter ACESParams; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SwitchesInMaps
// Size: 0x20 // Inherited bytes: 0x00
struct FSwitchesInMaps {
	// Fields
	StrProperty MapName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FSwitchesItem> Switches; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SwitchesItem
// Size: 0x30 // Inherited bytes: 0x00
struct FSwitchesItem {
	// Fields
	StrProperty Key; // Offset: 0x00 // Size: 0x10
	float Value; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty DependKey; // Offset: 0x18 // Size: 0x10
	float DependValue; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.IslandRoomData
// Size: 0x30 // Inherited bytes: 0x00
struct FIslandRoomData {
	// Fields
	IntProperty LandId; // Offset: 0x00 // Size: 0x04
	IntProperty EndStateTime; // Offset: 0x04 // Size: 0x04
	IntProperty PlayerNum; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct TWeakObjectPtr<struct APlayerController>> Players; // Offset: 0x10 // Size: 0x10
	bool IsEnd; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty FirstPlayerEnterTime; // Offset: 0x24 // Size: 0x04
	bool bArenaOccupied; // Offset: 0x28 // Size: 0x01
	bool bForceCheck; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.SIslandAIPlayerMarkInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FSIslandAIPlayerMarkInfo {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PlayerName; // Offset: 0x08 // Size: 0x10
	struct FGameModePlayerAliasInfo PlayerAliasInfo; // Offset: 0x18 // Size: 0x48
	struct ASTExtraBaseCharacter* AIPlayer; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.EmoteAnimCharacterConfig
// Size: 0x70 // Inherited bytes: 0x00
struct FEmoteAnimCharacterConfig {
	// Fields
	struct UClass* Character; // Offset: 0x00 // Size: 0x28
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FTransform Transform; // Offset: 0x30 // Size: 0x30
	bool NeedAttach; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0xf]; // Offset: 0x61 // Size: 0x0f
};

// Object Name: ScriptStruct ShadowTrackerExtra.EmoteAnimConfig
// Size: 0xe0 // Inherited bytes: 0x00
struct FEmoteAnimConfig {
	// Fields
	struct FName GenderStr; // Offset: 0x00 // Size: 0x08
	struct UClass* MainCharacter; // Offset: 0x08 // Size: 0x28
	struct UAnimationAsset* MainCharacterAnimAsset; // Offset: 0x30 // Size: 0x28
	bool CanRotateMainCharacter; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
	struct FTransform MainCharacterTransform; // Offset: 0x60 // Size: 0x30
	bool RotateBackToZero; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	struct ULevelSequence* EmoteLevelSequence; // Offset: 0x98 // Size: 0x08
	struct TArray<struct FEmoteAnimCharacterConfig> MultiFollowerCharacters; // Offset: 0xa0 // Size: 0x10
	struct UClass* FollowerCharacter; // Offset: 0xb0 // Size: 0x28
	bool NeedAttach; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x7]; // Offset: 0xd9 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.GenderMapping
// Size: 0x10 // Inherited bytes: 0x00
struct FGenderMapping {
	// Fields
	struct FName GenderStr; // Offset: 0x00 // Size: 0x08
	enum class ELobbyCharacterAnimType GenderType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyPlayEmoteComponentTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FLobbyPlayEmoteComponentTickFunction : FTickFunction {
	// Fields
	struct ULobbyPlayEmoteComponent* Target; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchPlayerStateData
// Size: 0x88 // Inherited bytes: 0x00
struct FDeathMatchPlayerStateData {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FDeathMatchPlayerInfo DeathMatchPlayerInfo; // Offset: 0x08 // Size: 0x58
	IntProperty TeamID; // Offset: 0x60 // Size: 0x04
	IntProperty TeamIndex; // Offset: 0x64 // Size: 0x04
	IntProperty Score; // Offset: 0x68 // Size: 0x04
	IntProperty Rank; // Offset: 0x6c // Size: 0x04
	IntProperty Kills; // Offset: 0x70 // Size: 0x04
	IntProperty Assists; // Offset: 0x74 // Size: 0x04
	IntProperty Deaths; // Offset: 0x78 // Size: 0x04
	IntProperty ContinuouKills; // Offset: 0x7c // Size: 0x04
	IntProperty rescueTimes; // Offset: 0x80 // Size: 0x04
	bool IsAIPlayer; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchPlayerInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FDeathMatchPlayerInfo {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	StrProperty UIDString; // Offset: 0x08 // Size: 0x10
	StrProperty PlayerName; // Offset: 0x18 // Size: 0x10
	StrProperty iconUrl; // Offset: 0x28 // Size: 0x10
	char PlatformGender; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	IntProperty PlayerLevel; // Offset: 0x3c // Size: 0x04
	IntProperty AvatarBoxId; // Offset: 0x40 // Size: 0x04
	IntProperty KillEffectItemID; // Offset: 0x44 // Size: 0x04
	struct FAchievementPrize EquippedAchievementPrize; // Offset: 0x48 // Size: 0x0c
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchPlayerDieData
// Size: 0xb8 // Inherited bytes: 0x00
struct FDeathMatchPlayerDieData {
	// Fields
	struct TArray<struct FDeathMatchDamageCauserRecordData> KillerCauserRecords; // Offset: 0x00 // Size: 0x10
	struct FDeathMatchPlayerStateData KillerStateData; // Offset: 0x10 // Size: 0x88
	struct TArray<struct FDeathMatchPlayerStateData> AssisterStateDatas; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FDeathMatchDamageRecordData> VictimDamageRecords; // Offset: 0xa8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchDamageRecordData
// Size: 0x20 // Inherited bytes: 0x00
struct FDeathMatchDamageRecordData {
	// Fields
	StrProperty VictimName; // Offset: 0x00 // Size: 0x10
	float Damage; // Offset: 0x10 // Size: 0x04
	enum class EDeathMatchDamageResult DamageResult; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float LastTime; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchDamageCauserRecordData
// Size: 0x0c // Inherited bytes: 0x00
struct FDeathMatchDamageCauserRecordData {
	// Fields
	IntProperty DamageType; // Offset: 0x00 // Size: 0x04
	IntProperty MurderWeaponID; // Offset: 0x04 // Size: 0x04
	float Damage; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DestructInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FDestructInfo {
	// Fields
	struct AController* LastHitBy; // Offset: 0x00 // Size: 0x08
	struct AActor* LastHitCauser; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayStreamInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FReplayStreamInfo {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	StrProperty FriendlyName; // Offset: 0x10 // Size: 0x10
	struct FDateTime TimeStamp; // Offset: 0x20 // Size: 0x08
	IntProperty TimestampInt; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x10]; // Offset: 0x2c // Size: 0x10
	IntProperty NumViewers; // Offset: 0x3c // Size: 0x04
	bool bIsLive; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0xf]; // Offset: 0x41 // Size: 0x0f
	StrProperty RoomId; // Offset: 0x50 // Size: 0x10
	StrProperty ReplayURL; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.KillInfoRecordData
// Size: 0x58 // Inherited bytes: 0x00
struct FKillInfoRecordData {
	// Fields
	StrProperty Killer; // Offset: 0x00 // Size: 0x10
	StrProperty Victim; // Offset: 0x10 // Size: 0x10
	bool bKillDown; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	uint64 KillTimeStampDemoTime; // Offset: 0x28 // Size: 0x08
	uint64 KillTimeStampGameTime; // Offset: 0x30 // Size: 0x08
	StrProperty SafeLabel; // Offset: 0x38 // Size: 0x10
	IntProperty SafeParam1; // Offset: 0x48 // Size: 0x04
	IntProperty SafeParam2; // Offset: 0x4c // Size: 0x04
	float RecordTimestamp; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCollisionEvent
// Size: 0x10 // Inherited bytes: 0x00
struct FSimpleCollisionEvent {
	// Fields
	struct UObject* Target; // Offset: 0x00 // Size: 0x08
	IntProperty ColliderId; // Offset: 0x08 // Size: 0x04
	IntProperty TracerId; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UIBPAsyncParams
// Size: 0xc0 // Inherited bytes: 0x00
struct FUIBPAsyncParams {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FMarkSyncData MarkData; // Offset: 0x08 // Size: 0x58
	char pad_0x60[0x8]; // Offset: 0x60 // Size: 0x08
	struct UClass* UIIconSoftPtr; // Offset: 0x68 // Size: 0x28
	struct UClass* UIBPSoftPtr; // Offset: 0x90 // Size: 0x28
	struct UObject* UIClass; // Offset: 0xb8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MapMarkConfig
// Size: 0x58 // Inherited bytes: 0x00
struct FMapMarkConfig {
	// Fields
	IntProperty ConfigID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty UIPath; // Offset: 0x08 // Size: 0x10
	bool bIsIcon; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	struct FVector2D Size; // Offset: 0x1c // Size: 0x08
	bool bIsBigPOI; // Offset: 0x24 // Size: 0x01
	bool bIsUpdateSize; // Offset: 0x25 // Size: 0x01
	bool bCanHighlight; // Offset: 0x26 // Size: 0x01
	char pad_0x27[0x1]; // Offset: 0x27 // Size: 0x01
	IntProperty ZOrder; // Offset: 0x28 // Size: 0x04
	bool bIsControlByLegend; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	StrProperty LegendTags; // Offset: 0x30 // Size: 0x10
	bool bIsBindActor; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	float MaxShowDistance; // Offset: 0x44 // Size: 0x04
	StrProperty MountTags; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MarkPathSetting
// Size: 0x28 // Inherited bytes: 0x00
struct FMarkPathSetting {
	// Fields
	IntProperty UIBPSrcID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty UIBPSoftPtr; // Offset: 0x08 // Size: 0x10
	StrProperty UIDescription; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TypeWidgetPair
// Size: 0x28 // Inherited bytes: 0x00
struct FTypeWidgetPair {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UWidget*> Widgets; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemLayoutInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FItemLayoutInfo {
	// Fields
	struct UWidget* itemType; // Offset: 0x00 // Size: 0x08
	struct FVector2D ItemSize; // Offset: 0x08 // Size: 0x08
	struct FVector2D ItemPadding; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoDriveAIDataRow
// Size: 0x78 // Inherited bytes: 0x00
struct FAutoDriveAIDataRow {
	// Fields
	struct UClass* VehicleClass; // Offset: 0x00 // Size: 0x28
	struct UBehaviorTree* BehaviorTreeAsset; // Offset: 0x28 // Size: 0x28
	struct UBlackboardData* BlackboardDataAsset; // Offset: 0x50 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActiveVehicleList
// Size: 0x20 // Inherited bytes: 0x00
struct FActiveVehicleList {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct TArray<struct APawn*> Vehicles; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PathPoint
// Size: 0x10 // Inherited bytes: 0x00
struct FPathPoint {
	// Fields
	struct ASTExtraAIWaypointSegment* Path; // Offset: 0x00 // Size: 0x08
	IntProperty InputKey; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PathInputPlayZoneDistanceQuery
// Size: 0x10 // Inherited bytes: 0x00
struct FPathInputPlayZoneDistanceQuery {
	// Fields
	IntProperty ForwardDistance; // Offset: 0x00 // Size: 0x04
	bool bForwardQueryMade; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty ReverseDistance; // Offset: 0x08 // Size: 0x04
	bool bReverseQueryMade; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.QueuedVehicleSpawn
// Size: 0x60 // Inherited bytes: 0x00
struct FQueuedVehicleSpawn {
	// Fields
	struct FGuid ID; // Offset: 0x00 // Size: 0x10
	StrProperty SpawnId; // Offset: 0x10 // Size: 0x10
	struct APawn* VehicleClass; // Offset: 0x20 // Size: 0x08
	struct UBehaviorTree* BehaviorTree; // Offset: 0x28 // Size: 0x08
	struct UBlackboardData* BlackboardData; // Offset: 0x30 // Size: 0x08
	struct FSpawnFilter SpawnSettings; // Offset: 0x38 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpawnFilter
// Size: 0x28 // Inherited bytes: 0x00
struct FSpawnFilter {
	// Fields
	bool bLimitSpawnPoints; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FName> ValidSpawnPoints; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FName> InvalidSpawnPoints; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftMovementInput
// Size: 0x0c // Inherited bytes: 0x00
struct FAircraftMovementInput {
	// Fields
	float ThrottleInput; // Offset: 0x00 // Size: 0x04
	float SteeringInput; // Offset: 0x04 // Size: 0x04
	float PitchInput; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftTLogSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FAircraftTLogSetup {
	// Fields
	bool bEnableTLog; // Offset: 0x00 // Size: 0x01
	enum class EObjectTypeQuery TriggerType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FVector2D RollRange; // Offset: 0x04 // Size: 0x08
	struct FVector2D PitchRange; // Offset: 0x0c // Size: 0x08
	float Duration; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftLoseControlSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FAircraftLoseControlSetup {
	// Fields
	float LinearDamping; // Offset: 0x00 // Size: 0x04
	float AngularDamping; // Offset: 0x04 // Size: 0x04
	float Duration; // Offset: 0x08 // Size: 0x04
	float BlockTimeInterval; // Offset: 0x0c // Size: 0x04
	struct TArray<enum class ECollisionChannel> CollisionTypes; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftGlidingSetup
// Size: 0x28 // Inherited bytes: 0x00
struct FAircraftGlidingSetup {
	// Fields
	float LinearDamping; // Offset: 0x00 // Size: 0x04
	float AngularDamping; // Offset: 0x04 // Size: 0x04
	struct FVector OmegaAccel; // Offset: 0x08 // Size: 0x0c
	struct FVector OmegaZeroAccel; // Offset: 0x14 // Size: 0x0c
	float OmegaPitch; // Offset: 0x20 // Size: 0x04
	float MaxPitch; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftLandingSetup
// Size: 0x08 // Inherited bytes: 0x00
struct FAircraftLandingSetup {
	// Fields
	float TimerInterval; // Offset: 0x00 // Size: 0x04
	float Altitude; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftFlyingSetup
// Size: 0x80 // Inherited bytes: 0x00
struct FAircraftFlyingSetup {
	// Fields
	struct FAircraftThrusterSetup ThrusterSetup; // Offset: 0x00 // Size: 0x20
	float LinearDamping; // Offset: 0x20 // Size: 0x04
	float AngularDamping; // Offset: 0x24 // Size: 0x04
	float ExitSpeed; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct UCurveFloat* CurveAirResistance; // Offset: 0x30 // Size: 0x08
	float OmegaYaw; // Offset: 0x38 // Size: 0x04
	float OmegaPitch; // Offset: 0x3c // Size: 0x04
	float OmegaRoll; // Offset: 0x40 // Size: 0x04
	float MaxRoll; // Offset: 0x44 // Size: 0x04
	struct UCurveFloat* CurveOmegaRatio; // Offset: 0x48 // Size: 0x08
	struct FVector OmegaAccel; // Offset: 0x50 // Size: 0x0c
	struct FVector OmegaZeroAccel; // Offset: 0x5c // Size: 0x0c
	float CruiseThrottleInput; // Offset: 0x68 // Size: 0x04
	struct FAircraftUpsideDownFlyingSetup UpsideDown; // Offset: 0x6c // Size: 0x0c
	float RepInterval; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftUpsideDownFlyingSetup
// Size: 0x0c // Inherited bytes: 0x00
struct FAircraftUpsideDownFlyingSetup {
	// Fields
	float Roll; // Offset: 0x00 // Size: 0x04
	float OmegaRoll; // Offset: 0x04 // Size: 0x04
	float OmegaYaw; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftThrusterSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FAircraftThrusterSetup {
	// Fields
	struct FVector2D AltitudeRange; // Offset: 0x00 // Size: 0x08
	struct UCurveVector* CurveAcceleration; // Offset: 0x08 // Size: 0x08
	struct FVector Location; // Offset: 0x10 // Size: 0x0c
	float RPMAccel; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftTakeOffSetup
// Size: 0x58 // Inherited bytes: 0x00
struct FAircraftTakeOffSetup {
	// Fields
	struct FAircraftThrusterSetup ThrusterSetup; // Offset: 0x00 // Size: 0x20
	float Duration; // Offset: 0x20 // Size: 0x04
	float LinearDamping; // Offset: 0x24 // Size: 0x04
	float AngularDamping; // Offset: 0x28 // Size: 0x04
	float EnterSpeed; // Offset: 0x2c // Size: 0x04
	float ExitSpeed; // Offset: 0x30 // Size: 0x04
	float MaxPitch; // Offset: 0x34 // Size: 0x04
	float OmegaPitch; // Offset: 0x38 // Size: 0x04
	float OmegaRoll; // Offset: 0x3c // Size: 0x04
	float OmegaYaw; // Offset: 0x40 // Size: 0x04
	struct FVector OmegaAccel; // Offset: 0x44 // Size: 0x0c
	struct UCurveFloat* CurveOmegaRatio; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftRollingSetup
// Size: 0x48 // Inherited bytes: 0x00
struct FAircraftRollingSetup {
	// Fields
	struct FAircraftThrusterSetup ThrusterSetup; // Offset: 0x00 // Size: 0x20
	struct FAircraftThrusterSetup BackwardThrusterSetup; // Offset: 0x20 // Size: 0x20
	float LinearDamping; // Offset: 0x40 // Size: 0x04
	float AngularDamping; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftAltitudeSetup
// Size: 0x14 // Inherited bytes: 0x00
struct FAircraftAltitudeSetup {
	// Fields
	float MaxAltitude; // Offset: 0x00 // Size: 0x04
	enum class ETraceTypeQuery TraceChannel; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float TraceDistance; // Offset: 0x08 // Size: 0x04
	float TimeInterval; // Offset: 0x0c // Size: 0x04
	float OmegaPitch; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftGravitySetup
// Size: 0x08 // Inherited bytes: 0x00
struct FAircraftGravitySetup {
	// Fields
	struct UCurveFloat* CurveOmegaPitch; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftBrakeSetup
// Size: 0x08 // Inherited bytes: 0x00
struct FAircraftBrakeSetup {
	// Fields
	struct UCurveFloat* CurveAcceleration; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftInputRate
// Size: 0x0c // Inherited bytes: 0x00
struct FAircraftInputRate {
	// Fields
	float RiseRate; // Offset: 0x00 // Size: 0x04
	float FallRate; // Offset: 0x04 // Size: 0x04
	float ZeroRate; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STVehicleInputRate
// Size: 0x08 // Inherited bytes: 0x00
struct FSTVehicleInputRate {
	// Fields
	float RiseRate; // Offset: 0x00 // Size: 0x04
	float FallRate; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleNetMovement4W
// Size: 0x70 // Inherited bytes: 0x00
struct FVehicleNetMovement4W {
	// Fields
	char IsInAir : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	enum class EWheeledVehicleMovementType MovementType; // Offset: 0x01 // Size: 0x01
	char SubMovementType; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	struct FRigidVehicleMovement Movement; // Offset: 0x04 // Size: 0x34
	struct FRigidVehicleMovement LandMovement; // Offset: 0x38 // Size: 0x34
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RigidVehicleMovement
// Size: 0x34 // Inherited bytes: 0x00
struct FRigidVehicleMovement {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	struct FVector LinVel; // Offset: 0x18 // Size: 0x0c
	struct FVector AngVel; // Offset: 0x24 // Size: 0x0c
	bool IsBoosting; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.LuaParticleItem
// Size: 0x38 // Inherited bytes: 0x00
struct FLuaParticleItem {
	// Fields
	StrProperty ParticlePath; // Offset: 0x00 // Size: 0x10
	struct FVector Location; // Offset: 0x10 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x1c // Size: 0x0c
	struct FVector Scale; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleItem
// Size: 0x60 // Inherited bytes: 0x00
struct FParticleItem {
	// Fields
	struct UParticleSystem* AssetParticle; // Offset: 0x00 // Size: 0x28
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FTransform RelativeTransform; // Offset: 0x30 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleProtectionDataInReplay
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleProtectionDataInReplay {
	// Fields
	enum class EVehicleProtectionType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Time; // Offset: 0x04 // Size: 0x04
	struct TArray<char> Data; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.LeaveVehicleProtectionSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FLeaveVehicleProtectionSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // Offset: 0x08 // Size: 0x10
	float CheckInterval; // Offset: 0x18 // Size: 0x04
	float LastCheckedTime; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSpinProtectionSetup
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleSpinProtectionSetup {
	// Fields
	bool bEnableProtection; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float MaxAngVel; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleUndergroundProtectionSetup
// Size: 0x0c // Inherited bytes: 0x00
struct FVehicleUndergroundProtectionSetup {
	// Fields
	bool bEnableProtection; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CheckInterval; // Offset: 0x04 // Size: 0x04
	float TraceDistance; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleValidTransform
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleValidTransform {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ValidTransformSetup
// Size: 0x0c // Inherited bytes: 0x00
struct FValidTransformSetup {
	// Fields
	float MinUpVectorZ; // Offset: 0x00 // Size: 0x04
	float Scale; // Offset: 0x04 // Size: 0x04
	bool CorrectClient; // Offset: 0x08 // Size: 0x01
	bool bDynamicSearch; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepTrailerLinkState
// Size: 0x10 // Inherited bytes: 0x00
struct FRepTrailerLinkState {
	// Fields
	enum class ETrailerLinkState LinkState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UVehicleTrailerComponent* Prev; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingVehicleMovementInput
// Size: 0x10 // Inherited bytes: 0x00
struct FFloatingVehicleMovementInput {
	// Fields
	float ThrottleInput; // Offset: 0x00 // Size: 0x04
	float SteeringInput; // Offset: 0x04 // Size: 0x04
	float HandBrakeInput; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingPivotSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FFloatingPivotSetup {
	// Fields
	bool Enable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EnterSpeed; // Offset: 0x04 // Size: 0x04
	float MinSteeringInput; // Offset: 0x08 // Size: 0x04
	float LinearDamping; // Offset: 0x0c // Size: 0x04
	float AngularDamping; // Offset: 0x10 // Size: 0x04
	float OmegaAccel; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingMovementSetup
// Size: 0x38 // Inherited bytes: 0x00
struct FFloatingMovementSetup {
	// Fields
	struct UCurveFloat* Curve_Acceleration; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* Curve_BackwardAcceleration; // Offset: 0x08 // Size: 0x08
	struct UCurveFloat* Curve_Radius; // Offset: 0x10 // Size: 0x08
	struct UCurveFloat* Curve_HandBrakeAcceleration; // Offset: 0x18 // Size: 0x08
	struct FVector ForcePosition; // Offset: 0x20 // Size: 0x0c
	float SteeringTorqueScale; // Offset: 0x2c // Size: 0x04
	float LinearDamping; // Offset: 0x30 // Size: 0x04
	float AngularDamping; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TurretRotation
// Size: 0x08 // Inherited bytes: 0x00
struct FTurretRotation {
	// Fields
	float TurretYaw; // Offset: 0x00 // Size: 0x04
	float MainGunPitch; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankMovementInputState
// Size: 0x18 // Inherited bytes: 0x00
struct FTankMovementInputState {
	// Fields
	float SteeringInput; // Offset: 0x00 // Size: 0x04
	float ThrottleInput; // Offset: 0x04 // Size: 0x04
	float BrakeInput; // Offset: 0x08 // Size: 0x04
	float RPM; // Offset: 0x0c // Size: 0x04
	IntProperty CurrentGear; // Offset: 0x10 // Size: 0x04
	enum class EPivotSteeringState PivotSteeringState; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankScopingSyncData
// Size: 0x10 // Inherited bytes: 0x00
struct FTankScopingSyncData {
	// Fields
	bool IsScoping; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraPlayerCharacter* ScopingCharacter; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponSyncData
// Size: 0x08 // Inherited bytes: 0x00
struct FWeaponSyncData {
	// Fields
	uint32_t ShootID; // Offset: 0x00 // Size: 0x04
	IntProperty ClipID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SongInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FSongInfo {
	// Fields
	IntProperty SongID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty SongName; // Offset: 0x08 // Size: 0x10
	float SongDuration; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty SongEvent; // Offset: 0x20 // Size: 0x10
	struct FSoftObjectPath SongEventObject; // Offset: 0x30 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileBulletLaunchParams
// Size: 0x60 // Inherited bytes: 0x00
struct FProjectileBulletLaunchParams {
	// Fields
	float Speed; // Offset: 0x00 // Size: 0x04
	float GravityScale; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform Trans; // Offset: 0x10 // Size: 0x30
	struct AActor* OwningWeapon; // Offset: 0x40 // Size: 0x08
	struct AActor* Instigator; // Offset: 0x48 // Size: 0x08
	uint32_t ShootID; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0xc]; // Offset: 0x54 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ApplyRadialDamageParams
// Size: 0x110 // Inherited bytes: 0x00
struct FApplyRadialDamageParams {
	// Fields
	float BaseDamage; // Offset: 0x00 // Size: 0x04
	float MinimumDamage; // Offset: 0x04 // Size: 0x04
	float TeammateMinimumDamage; // Offset: 0x08 // Size: 0x04
	float BaseMomentumMag; // Offset: 0x0c // Size: 0x04
	struct FApplyRadialDamageMomentum Momentum; // Offset: 0x10 // Size: 0x70
	bool bApplyVehicleImpulse; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x3]; // Offset: 0x81 // Size: 0x03
	struct FVector Origin; // Offset: 0x84 // Size: 0x0c
	float DamageInnerRadius; // Offset: 0x90 // Size: 0x04
	float DamageOuterRadius; // Offset: 0x94 // Size: 0x04
	float DamageFalloff; // Offset: 0x98 // Size: 0x04
	bool bTraceComplex; // Offset: 0x9c // Size: 0x01
	char pad_0x9D[0x13]; // Offset: 0x9d // Size: 0x13
	bool CanPenetrationdamage; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
	struct UDamageType* DamageTypeClass; // Offset: 0xb8 // Size: 0x08
	struct TArray<struct AActor*> IgnoreActors; // Offset: 0xc0 // Size: 0x10
	struct TArray<struct AActor*> IgnoreClasses; // Offset: 0xd0 // Size: 0x10
	struct AActor* DamageCauser; // Offset: 0xe0 // Size: 0x08
	struct AController* InstigatedBy; // Offset: 0xe8 // Size: 0x08
	float CollisionFreeRadius; // Offset: 0xf0 // Size: 0x04
	enum class ECollisionChannel DamageChannel; // Offset: 0xf4 // Size: 0x01
	char pad_0xF5[0x3]; // Offset: 0xf5 // Size: 0x03
	float AddtionalDamage; // Offset: 0xf8 // Size: 0x04
	enum class EDamageType DamageEventType; // Offset: 0xfc // Size: 0x01
	char pad_0xFD[0x3]; // Offset: 0xfd // Size: 0x03
	float HorizontalCoverRatio; // Offset: 0x100 // Size: 0x04
	float VerticalCoverRatio; // Offset: 0x104 // Size: 0x04
	bool bDrawVisibilityTraceLine; // Offset: 0x108 // Size: 0x01
	bool bExplosionTestOnly; // Offset: 0x109 // Size: 0x01
	bool bPlayHurtAnim; // Offset: 0x10a // Size: 0x01
	char pad_0x10B[0x1]; // Offset: 0x10b // Size: 0x01
	float SphereOverlapRadius; // Offset: 0x10c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ApplyRadialDamageMomentum
// Size: 0x70 // Inherited bytes: 0x00
struct FApplyRadialDamageMomentum {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector LinerScaleForEnemy; // Offset: 0x04 // Size: 0x0c
	struct FVector LinerScaleForTeam; // Offset: 0x10 // Size: 0x0c
	struct FVector ConstScaleForEnemy; // Offset: 0x1c // Size: 0x0c
	struct FVector ConstScaleForTeam; // Offset: 0x28 // Size: 0x0c
	struct FVector ExtraImpulseForEnemy; // Offset: 0x34 // Size: 0x0c
	struct FVector ExtraImpulseForTeam; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct TArray<IntProperty> BuffForEnemy; // Offset: 0x50 // Size: 0x10
	struct TArray<IntProperty> BuffForTeam; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ResolvePenetrationMoveData
// Size: 0x148 // Inherited bytes: 0x00
struct FResolvePenetrationMoveData {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct UPrimitiveComponent* PushAwayBase; // Offset: 0x10 // Size: 0x08
	struct FHitResult CacheHit; // Offset: 0x18 // Size: 0x88
	struct FResolvePenetrationHistoryMoveData HistoryMoveData[0x3]; // Offset: 0xa0 // Size: 0x78
	char pad_0x118[0x30]; // Offset: 0x118 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.ResolvePenetrationHistoryMoveData
// Size: 0x28 // Inherited bytes: 0x00
struct FResolvePenetrationHistoryMoveData {
	// Fields
	bool bValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector ValidLocation; // Offset: 0x04 // Size: 0x0c
	struct FRotator ValidRotation; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UPrimitiveComponent* MovableBase; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimulateThresholds
// Size: 0x04 // Inherited bytes: 0x00
struct FSimulateThresholds {
	// Fields
	float ScreenSize; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemCurveAnim
// Size: 0x58 // Inherited bytes: 0x00
struct FItemCurveAnim {
	// Fields
	enum class EItemCurveAnimState CurState; // Offset: 0x00 // Size: 0x01
	bool ShowGroundEffect; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float DropDuration; // Offset: 0x04 // Size: 0x04
	float CurrentTime; // Offset: 0x08 // Size: 0x04
	float DropStartSpeed; // Offset: 0x0c // Size: 0x04
	float DelayDestroyParticleTime; // Offset: 0x10 // Size: 0x04
	float DelayStartTime; // Offset: 0x14 // Size: 0x04
	float DelayDestroyGroundParticleTime; // Offset: 0x18 // Size: 0x04
	struct FVector StartPos; // Offset: 0x1c // Size: 0x0c
	struct FVector EndPos; // Offset: 0x28 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> TargetActor; // Offset: 0x34 // Size: 0x08
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct UParticleSystemComponent* TailParticleComponent; // Offset: 0x40 // Size: 0x08
	struct UParticleSystemComponent* GroundParticleComponent; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0x8]; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivitySoundGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FActivitySoundGroup {
	// Fields
	struct TArray<struct UAkAudioEvent*> AudioEventList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FActivitySoundAsset> SoundAssetList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivitySoundAsset
// Size: 0x38 // Inherited bytes: 0x00
struct FActivitySoundAsset {
	// Fields
	StrProperty BankName; // Offset: 0x00 // Size: 0x10
	struct UAkAudioEvent* AudioEvent; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivityParticleGroup
// Size: 0x30 // Inherited bytes: 0x00
struct FActivityParticleGroup {
	// Fields
	struct TArray<struct UParticleSystem*> ParticleSystemList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UParticleSystemComponent*> ParticleCompList; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FActivityParticleAsset> ParticleAssetList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivityParticleAsset
// Size: 0x80 // Inherited bytes: 0x00
struct FActivityParticleAsset {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct UParticleSystem* ParticleSystem; // Offset: 0x30 // Size: 0x28
	struct FName AttachSocket; // Offset: 0x58 // Size: 0x08
	struct TArray<struct FParticleSysParam> InstanceParameters; // Offset: 0x60 // Size: 0x10
	bool bLimitCount; // Offset: 0x70 // Size: 0x01
	bool bAutoDestroy; // Offset: 0x71 // Size: 0x01
	char pad_0x72[0xe]; // Offset: 0x72 // Size: 0x0e
};

// Object Name: ScriptStruct ShadowTrackerExtra.AdditiveAndModifyAnimBlendParam
// Size: 0xb0 // Inherited bytes: 0x00
struct FAdditiveAndModifyAnimBlendParam {
	// Fields
	float Spine; // Offset: 0x00 // Size: 0x04
	float LeftShoulder; // Offset: 0x04 // Size: 0x04
	float RightShoulder; // Offset: 0x08 // Size: 0x04
	float LeftHand; // Offset: 0x0c // Size: 0x04
	float RightHand; // Offset: 0x10 // Size: 0x04
	struct FRotator ModifyRotator_LeftShoulder; // Offset: 0x14 // Size: 0x0c
	struct FRotator ModifyRotator_LeftUpperArm; // Offset: 0x20 // Size: 0x0c
	struct FRotator ModifyRotator_LeftLowerArm; // Offset: 0x2c // Size: 0x0c
	struct FRotator ModifyRotator_LeftHand; // Offset: 0x38 // Size: 0x0c
	struct FRotator ModifyRotator_RightShoulder; // Offset: 0x44 // Size: 0x0c
	struct FRotator ModifyRotator_RightUpperArm; // Offset: 0x50 // Size: 0x0c
	struct FRotator ModifyRotator_RightLowerArm; // Offset: 0x5c // Size: 0x0c
	struct FRotator ModifyRotator_RightHand; // Offset: 0x68 // Size: 0x0c
	struct FRotator ModifyRotator_Spine01; // Offset: 0x74 // Size: 0x0c
	struct FRotator ModifyRotator_Spine02; // Offset: 0x80 // Size: 0x0c
	struct FRotator ModifyRotator_Spine03; // Offset: 0x8c // Size: 0x0c
	struct FRotator ModifyRotator_Neck; // Offset: 0x98 // Size: 0x0c
	struct FRotator ModifyRotator_Head; // Offset: 0xa4 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpecifyDamageInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FSpecifyDamageInfo {
	// Fields
	bool bResultHealthStatus; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty DamageType; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeliveryPolygonPoints
// Size: 0x10 // Inherited bytes: 0x00
struct FDeliveryPolygonPoints {
	// Fields
	struct TArray<struct FVector> DeliveryPolygonPoint; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIDynamicDamageBasedHP
// Size: 0x10 // Inherited bytes: 0x00
struct FAIDynamicDamageBasedHP {
	// Fields
	float HealthPercentLeft; // Offset: 0x00 // Size: 0x04
	float HealthPercentRight; // Offset: 0x04 // Size: 0x04
	float FireHitRate; // Offset: 0x08 // Size: 0x04
	float DamageScale; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpecialZoneInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FSpecialZoneInfo {
	// Fields
	struct AActor* SpecialZone; // Offset: 0x00 // Size: 0x08
	IntProperty SpecialZoneType; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeliveryPlayerConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FDeliveryPlayerConfig {
	// Fields
	struct TArray<struct FDeliveryItem> DeliveryItem; // Offset: 0x00 // Size: 0x10
	float RightRatingSection; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeliveryItem
// Size: 0x08 // Inherited bytes: 0x00
struct FDeliveryItem {
	// Fields
	IntProperty percent; // Offset: 0x00 // Size: 0x04
	IntProperty DeliveryNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpecialAIDeliveryNumContainer
// Size: 0x18 // Inherited bytes: 0x00
struct FSpecialAIDeliveryNumContainer {
	// Fields
	IntProperty TeammateNum; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FSpecialAIDeliveryNum> DeliverNumCfg; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpecialAIDeliveryNum
// Size: 0x08 // Inherited bytes: 0x00
struct FSpecialAIDeliveryNum {
	// Fields
	IntProperty DeliveryNum; // Offset: 0x00 // Size: 0x04
	IntProperty Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HotValueScale
// Size: 0x0c // Inherited bytes: 0x00
struct FHotValueScale {
	// Fields
	float Corner; // Offset: 0x00 // Size: 0x04
	float Center; // Offset: 0x04 // Size: 0x04
	float UpDown; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HotValueAttenuation
// Size: 0x0c // Inherited bytes: 0x00
struct FHotValueAttenuation {
	// Fields
	float Corner; // Offset: 0x00 // Size: 0x04
	float Center; // Offset: 0x04 // Size: 0x04
	float UpDown; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeliveryRatingConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FDeliveryRatingConfig {
	// Fields
	float DeliveryInterval; // Offset: 0x00 // Size: 0x04
	float RightRatingSection; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIBeginAttackEachOther
// Size: 0x08 // Inherited bytes: 0x00
struct FAIBeginAttackEachOther {
	// Fields
	float BeginAttackEachOtherTime; // Offset: 0x00 // Size: 0x04
	float RightRatingSection; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIDeliveryAreaLimit
// Size: 0x18 // Inherited bytes: 0x00
struct FAIDeliveryAreaLimit {
	// Fields
	struct FVector TopLeftVec; // Offset: 0x00 // Size: 0x0c
	struct FVector BottomRightVec; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttackAnimalRatingDamage
// Size: 0x0c // Inherited bytes: 0x00
struct FAIAttackAnimalRatingDamage {
	// Fields
	float RatingDamageScale; // Offset: 0x00 // Size: 0x04
	float FiringAccuracyRadius; // Offset: 0x04 // Size: 0x04
	float SectionRightValue; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttackBuildingRatingDamage
// Size: 0x0c // Inherited bytes: 0x00
struct FAIAttackBuildingRatingDamage {
	// Fields
	float RatingDamageScale; // Offset: 0x00 // Size: 0x04
	float FiringAccuracyRadius; // Offset: 0x04 // Size: 0x04
	float SectionRightValue; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttackMORatingDamage
// Size: 0x0c // Inherited bytes: 0x00
struct FAIAttackMORatingDamage {
	// Fields
	float RatingDamageScale; // Offset: 0x00 // Size: 0x04
	float FiringAccuracyRadius; // Offset: 0x04 // Size: 0x04
	float SectionRightValue; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttackAIRatingFireHitRate
// Size: 0x08 // Inherited bytes: 0x00
struct FAIAttackAIRatingFireHitRate {
	// Fields
	float FireHitRate; // Offset: 0x00 // Size: 0x04
	float SectionRightValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttackAIRatingDamage
// Size: 0x0c // Inherited bytes: 0x00
struct FAIAttackAIRatingDamage {
	// Fields
	float RatingDamageScale; // Offset: 0x00 // Size: 0x04
	float FiringAccuracyRadius; // Offset: 0x04 // Size: 0x04
	float SectionRightValue; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIRatingFireHitRate
// Size: 0x08 // Inherited bytes: 0x00
struct FAIRatingFireHitRate {
	// Fields
	float FireHitRate; // Offset: 0x00 // Size: 0x04
	float SectionRightValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIRatingDamage
// Size: 0x18 // Inherited bytes: 0x00
struct FAIRatingDamage {
	// Fields
	float RatingDamageScale; // Offset: 0x00 // Size: 0x04
	float SpecialRatingDamageScale; // Offset: 0x04 // Size: 0x04
	float FiringAccuracyRadius; // Offset: 0x08 // Size: 0x04
	float SpecialFiringAccuracyRadius; // Offset: 0x0c // Size: 0x04
	IntProperty AIFeedLimit; // Offset: 0x10 // Size: 0x04
	float SectionRightValue; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIActingItem
// Size: 0x30 // Inherited bytes: 0x00
struct FAIActingItem {
	// Fields
	float StartSeconds; // Offset: 0x00 // Size: 0x04
	float EndSeconds; // Offset: 0x04 // Size: 0x04
	float DeadPercent; // Offset: 0x08 // Size: 0x04
	IntProperty PlayerNumScale; // Offset: 0x0c // Size: 0x04
	bool IsFinished; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct TArray<IntProperty> WeaponIdList; // Offset: 0x18 // Size: 0x10
	IntProperty FinalRestBotNum; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIActingCandidateData
// Size: 0x38 // Inherited bytes: 0x00
struct FAIActingCandidateData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	uint32_t AIPlayerKey; // Offset: 0x04 // Size: 0x04
	StrProperty AIPlayerName; // Offset: 0x08 // Size: 0x10
	StrProperty AIPlayerNation; // Offset: 0x18 // Size: 0x10
	struct AFakePlayerAIController* FakePlayerAIController; // Offset: 0x28 // Size: 0x08
	bool bMLDelivery; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttributeTableRow
// Size: 0x0c // Inherited bytes: 0x00
struct FAIAttributeTableRow {
	// Fields
	IntProperty AttributeID; // Offset: 0x00 // Size: 0x04
	float DamageRate; // Offset: 0x04 // Size: 0x04
	IntProperty Hp; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.EnemyInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FEnemyInfo {
	// Fields
	enum class EEnemyType EnemyType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName Tag; // Offset: 0x08 // Size: 0x08
	float MemoryTime; // Offset: 0x10 // Size: 0x04
	int16_t RevengeValue_Sight; // Offset: 0x14 // Size: 0x02
	int16_t RevengeValue_Memory; // Offset: 0x16 // Size: 0x02
	int16_t RevengeValue_NearDeath; // Offset: 0x18 // Size: 0x02
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float RevengeValue_PerMetre; // Offset: 0x1c // Size: 0x04
	struct FVector TraceStartOffset; // Offset: 0x20 // Size: 0x0c
	struct FVector TraceEndOffset; // Offset: 0x2c // Size: 0x0c
	char Belonging; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float HitProtectTime; // Offset: 0x3c // Size: 0x04
	bool IsBlockTrace; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.FanInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FFanInfo {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float Angle; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UpdateItemInterval
// Size: 0x08 // Inherited bytes: 0x00
struct FUpdateItemInterval {
	// Fields
	IntProperty Distance; // Offset: 0x00 // Size: 0x04
	float Interval; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIAttrObserver
// Size: 0x08 // Inherited bytes: 0x00
struct FAIAttrObserver {
	// Fields
	enum class EAITriggerAttrType AttrType; // Offset: 0x00 // Size: 0x01
	enum class EAIAttrCompareType CompareType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty ComparePercentValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AITriggerTupple
// Size: 0x38 // Inherited bytes: 0x00
struct FAITriggerTupple {
	// Fields
	IntProperty Probability; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FBlackboardKeySelector TriggerTarget; // Offset: 0x08 // Size: 0x28
	IntProperty TriggerSetValue; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeliverControlRatingConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FDeliverControlRatingConfig {
	// Fields
	IntProperty Rating; // Offset: 0x00 // Size: 0x04
	float InnerRadius1; // Offset: 0x04 // Size: 0x04
	float InnerRadius2; // Offset: 0x08 // Size: 0x04
	float OuterRadius; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WayPointEvents
// Size: 0x10 // Inherited bytes: 0x00
struct FWayPointEvents {
	// Fields
	struct TArray<struct FWayPointRandomEvent> EventsList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WayPointRandomEvent
// Size: 0x10 // Inherited bytes: 0x00
struct FWayPointRandomEvent {
	// Fields
	struct TArray<struct FWayPointEvent> RandomEvents; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WayPointEvent
// Size: 0x20 // Inherited bytes: 0x00
struct FWayPointEvent {
	// Fields
	struct FName LuaEventType; // Offset: 0x00 // Size: 0x08
	struct FName EventID; // Offset: 0x08 // Size: 0x08
	struct UAIWayPointEventBase* EventInfo; // Offset: 0x10 // Size: 0x08
	IntProperty Weight; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BTTaskEventsOfWayPointMemory
// Size: 0x30 // Inherited bytes: 0x00
struct FBTTaskEventsOfWayPointMemory {
	// Fields
	struct TArray<struct FWayPointEvent> CacheWayPointEvents; // Offset: 0x00 // Size: 0x10
	struct FWayPointEvent CurrentExecutingEvent; // Offset: 0x10 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIGCRuntimeBodyAnimFrameData
// Size: 0xa0 // Inherited bytes: 0x00
struct FAIGCRuntimeBodyAnimFrameData {
	// Fields
	MapProperty BoneTranslations; // Offset: 0x00 // Size: 0x50
	MapProperty BoneRotations; // Offset: 0x50 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIPlayerParams
// Size: 0x0c // Inherited bytes: 0x00
struct FAIPlayerParams {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty ParamsID; // Offset: 0x04 // Size: 0x04
	IntProperty Campid; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirAttackOuterConfig
// Size: 0x60 // Inherited bytes: 0x00
struct FAirAttackOuterConfig {
	// Fields
	struct FVector MapOriginal; // Offset: 0x00 // Size: 0x0c
	float MapRadius; // Offset: 0x0c // Size: 0x04
	float FlightHeight; // Offset: 0x10 // Size: 0x04
	float SeaLevelHeight; // Offset: 0x14 // Size: 0x04
	float delayTime; // Offset: 0x18 // Size: 0x04
	IntProperty WaveCount; // Offset: 0x1c // Size: 0x04
	enum class EAirAttackGenerateType DefaultAirAttackGenerateType; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<enum class EAirAttackGenerateType> AirAttackGenerateTypeList; // Offset: 0x28 // Size: 0x10
	IntProperty WaveInternal; // Offset: 0x38 // Size: 0x04
	float EscapeTime; // Offset: 0x3c // Size: 0x04
	float AttackLastingTime; // Offset: 0x40 // Size: 0x04
	float AttackAreaRadius; // Offset: 0x44 // Size: 0x04
	float OuterRadius; // Offset: 0x48 // Size: 0x04
	IntProperty TotalBombs; // Offset: 0x4c // Size: 0x04
	IntProperty BombsRadius; // Offset: 0x50 // Size: 0x04
	float BombBaseDamage; // Offset: 0x54 // Size: 0x04
	float BombMinDamage; // Offset: 0x58 // Size: 0x04
	float BroadcastClientDistance; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirAttackOrderRPCInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FAirAttackOrderRPCInfo {
	// Fields
	struct FAirAttackOrder AirAttackOrder; // Offset: 0x00 // Size: 0x50
	struct FVector AirAttackArea; // Offset: 0x50 // Size: 0x0c
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirAttackCfg
// Size: 0x18 // Inherited bytes: 0x00
struct FAirAttackCfg {
	// Fields
	float EscapeTime; // Offset: 0x00 // Size: 0x04
	float AttackLastingTime; // Offset: 0x04 // Size: 0x04
	float AttackAreaRadius; // Offset: 0x08 // Size: 0x04
	float OuterRadius; // Offset: 0x0c // Size: 0x04
	IntProperty TotalBombs; // Offset: 0x10 // Size: 0x04
	IntProperty BombsRadius; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FlareGunAirDropRandomParams
// Size: 0x0c // Inherited bytes: 0x00
struct FFlareGunAirDropRandomParams {
	// Fields
	float SuperAirDropRandomRadius; // Offset: 0x00 // Size: 0x04
	float SuperAirDropRouteRandomRadiusMin; // Offset: 0x04 // Size: 0x04
	float SuperAirDropRouteRandomRadiusMax; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MapRealTimeInfo
// Size: 0x170 // Inherited bytes: 0x00
struct FMapRealTimeInfo {
	// Fields
	struct FVector2D MapCenterToPlayer; // Offset: 0x00 // Size: 0x08
	struct FVector MapCenterToBlueCircle; // Offset: 0x08 // Size: 0x0c
	struct FVector MapCenterToWhiteCircle; // Offset: 0x14 // Size: 0x0c
	struct FVector2D PlayerCoord; // Offset: 0x20 // Size: 0x08
	struct FVector2D SpectatedPlayerCoord; // Offset: 0x28 // Size: 0x08
	struct FVector2D WhiteCircleCoord; // Offset: 0x30 // Size: 0x08
	struct FVector2D BlueCircleCoord; // Offset: 0x38 // Size: 0x08
	float WhiteCircleRadius; // Offset: 0x40 // Size: 0x04
	float BlueCircleRadius; // Offset: 0x44 // Size: 0x04
	struct FVector2D LastDriveVehicleCoord; // Offset: 0x48 // Size: 0x08
	enum class ESTExtraVehicleType LastDriveVehicleType; // Offset: 0x50 // Size: 0x01
	bool bCanPlayerSeeLastVehicle; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x6]; // Offset: 0x52 // Size: 0x06
	struct FAirplaneRouteData PlaneRouteData; // Offset: 0x58 // Size: 0x68
	struct FAirplaneRouteData PlaneRouteData2; // Offset: 0xc0 // Size: 0x68
	struct FAirDropPathData AirDropPathData; // Offset: 0x128 // Size: 0x48
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropPathData
// Size: 0x48 // Inherited bytes: 0x00
struct FAirDropPathData {
	// Fields
	IntProperty AirDropIndex; // Offset: 0x00 // Size: 0x04
	struct FVector2D StartLoc; // Offset: 0x04 // Size: 0x08
	struct FVector2D TargetLoc; // Offset: 0x0c // Size: 0x08
	float RouteWidgetRotateAngle; // Offset: 0x14 // Size: 0x04
	float RouteLengthInMap; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FVector2D> AirDropLocs; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FVector> AirDropLocs3D; // Offset: 0x30 // Size: 0x10
	bool bIsDrawAirDropFlightPath; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirplaneRouteData
// Size: 0x68 // Inherited bytes: 0x00
struct FAirplaneRouteData {
	// Fields
	float PlaneFlyingProcess; // Offset: 0x00 // Size: 0x04
	struct FVector2D CanJumpLocInMap; // Offset: 0x04 // Size: 0x08
	struct FVector2D ForceJumpLocInMap; // Offset: 0x0c // Size: 0x08
	float RouteWidgetRotateAngle; // Offset: 0x14 // Size: 0x04
	float RouteLengthInMap; // Offset: 0x18 // Size: 0x04
	struct FVector2D PlaneLocInMap; // Offset: 0x1c // Size: 0x08
	float PlaneRotation; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FAirDropPathData> AirDropPaths; // Offset: 0x28 // Size: 0x10
	struct FVector2D CanJumpLocInMapForCamp; // Offset: 0x38 // Size: 0x08
	struct FVector2D ForceJumpLocInMapForCamp; // Offset: 0x40 // Size: 0x08
	float CampRouteLengthInMap; // Offset: 0x48 // Size: 0x04
	float CampRouteWidgetRotateAngle; // Offset: 0x4c // Size: 0x04
	struct FVector2D LastValidCanJumpLocInMap; // Offset: 0x50 // Size: 0x08
	struct FVector2D LastValidForceJumpLocInMap; // Offset: 0x58 // Size: 0x08
	float LastValidRouteWidgetRotateAngle; // Offset: 0x60 // Size: 0x04
	float LastValidRouteLengthInMap; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackupEnterAirDropPlaneParams
// Size: 0x40 // Inherited bytes: 0x00
struct FBackupEnterAirDropPlaneParams {
	// Fields
	float FlyingHeight; // Offset: 0x00 // Size: 0x04
	float FlyingSpeed; // Offset: 0x04 // Size: 0x04
	float AirDropFallingSpeed; // Offset: 0x08 // Size: 0x04
	struct FVector DroppingLocationOffset; // Offset: 0x0c // Size: 0x0c
	struct TArray<struct FVector> PlaneSpawnOffset; // Offset: 0x18 // Size: 0x10
	struct TArray<float> DropTimeOffset; // Offset: 0x28 // Size: 0x10
	IntProperty MaxPlaneNum; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropConfig
// Size: 0x68 // Inherited bytes: 0x00
struct FAirDropConfig {
	// Fields
	float AirDropTime; // Offset: 0x00 // Size: 0x04
	float RandomDroppingRange; // Offset: 0x04 // Size: 0x04
	float RandomDroppingRangeMin; // Offset: 0x08 // Size: 0x04
	float RandomDroppingRangeMax; // Offset: 0x0c // Size: 0x04
	float DoubleCircleRandomDroppingRange; // Offset: 0x10 // Size: 0x04
	float DropStuffChance; // Offset: 0x14 // Size: 0x04
	float NoLandscapeDelayTime; // Offset: 0x18 // Size: 0x04
	bool bCanMakeExtraAirdrop; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	struct TArray<struct FExtraAirDropRandomParams> ExtraAirDropRandParamsArray; // Offset: 0x20 // Size: 0x10
	float ExtraAirDropRandLowerLimit; // Offset: 0x30 // Size: 0x04
	float ExtraAirDropRandUpperLimit; // Offset: 0x34 // Size: 0x04
	bool ExtraAirDropUseEvenlyDistributed; // Offset: 0x38 // Size: 0x01
	bool bCanMakeContinuousAirdrop; // Offset: 0x39 // Size: 0x01
	char pad_0x3A[0x2]; // Offset: 0x3a // Size: 0x02
	float ContinuousAirDropInterval; // Offset: 0x3c // Size: 0x04
	struct TArray<struct UClass*> AirDropBoxBlueprintList; // Offset: 0x40 // Size: 0x10
	bool bIsDrawAirDropFlightPath; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	float AirdropWhiteCircleProportionMin; // Offset: 0x54 // Size: 0x04
	float AirdropWhiteCircleProportionMax; // Offset: 0x58 // Size: 0x04
	float AirdropIntervalProportionMin; // Offset: 0x5c // Size: 0x04
	float AirdropIntervalProportionMax; // Offset: 0x60 // Size: 0x04
	bool bUseCustomStrategy; // Offset: 0x64 // Size: 0x01
	bool bShowAirLineAndMark; // Offset: 0x65 // Size: 0x01
	char pad_0x66[0x2]; // Offset: 0x66 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExtraAirDropRandomParams
// Size: 0x08 // Inherited bytes: 0x00
struct FExtraAirDropRandomParams {
	// Fields
	IntProperty TotalDropCount; // Offset: 0x00 // Size: 0x04
	IntProperty TermWeight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropPlaneParams
// Size: 0x1c // Inherited bytes: 0x00
struct FAirDropPlaneParams {
	// Fields
	float FlyingHeight; // Offset: 0x00 // Size: 0x04
	float FlyingSpeed; // Offset: 0x04 // Size: 0x04
	float AirDropFallingSpeed; // Offset: 0x08 // Size: 0x04
	bool bIsUseDebugLocation; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FVector DebugDroppingLocation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.FlyingParam
// Size: 0x14 // Inherited bytes: 0x00
struct FFlyingParam {
	// Fields
	float FlyingSpeed; // Offset: 0x00 // Size: 0x04
	struct FVector FlyingDirection; // Offset: 0x04 // Size: 0x0c
	float AirPlaneSpawnServerTime; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirplaneData
// Size: 0x78 // Inherited bytes: 0x00
struct FAirplaneData {
	// Fields
	float PlaneHeight; // Offset: 0x00 // Size: 0x04
	float CanOpenParachuteHeight; // Offset: 0x04 // Size: 0x04
	float ForceOpenParachuteHeight; // Offset: 0x08 // Size: 0x04
	float CloseParachuteHeight; // Offset: 0x0c // Size: 0x04
	struct FVector DestinationCenter; // Offset: 0x10 // Size: 0x0c
	struct FVector PlaneVelocity; // Offset: 0x1c // Size: 0x0c
	struct FVector PlaneStartLoc; // Offset: 0x28 // Size: 0x0c
	struct FVector PlaneEndLoc; // Offset: 0x34 // Size: 0x0c
	struct FVector2D CanJumpLoc; // Offset: 0x40 // Size: 0x08
	struct FVector2D ForceJumpLoc; // Offset: 0x48 // Size: 0x08
	IntProperty TotalPlayerNum; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct AController*> TotalPlayers; // Offset: 0x58 // Size: 0x10
	struct TArray<struct AController*> CurPlayers; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetAircraftMovementState
// Size: 0x34 // Inherited bytes: 0x00
struct FNetAircraftMovementState {
	// Fields
	struct FVector_NetQuantize100 Location; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantizeNormal Rotation; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantize100 LinVel; // Offset: 0x18 // Size: 0x0c
	struct FVector_NetQuantize100 AngVel; // Offset: 0x24 // Size: 0x0c
	enum class EAircraftMovementStage MovementStage; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIUtilsNavPathResult
// Size: 0x08 // Inherited bytes: 0x00
struct FAIUtilsNavPathResult {
	// Fields
	bool IsSuccessful; // Offset: 0x00 // Size: 0x01
	bool IsPartial; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float fPathLength; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIUtilsNavPathPointResult
// Size: 0x18 // Inherited bytes: 0x08
struct FAIUtilsNavPathPointResult : FAIUtilsNavPathResult {
	// Fields
	struct TArray<struct FVector> PathPoints; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TeamWayPointLink
// Size: 0x18 // Inherited bytes: 0x00
struct FTeamWayPointLink {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FWayPointLink> Links; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WayPointLink
// Size: 0x08 // Inherited bytes: 0x00
struct FWayPointLink {
	// Fields
	IntProperty NextPointID; // Offset: 0x00 // Size: 0x04
	IntProperty Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIWayPointPathInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FAIWayPointPathInfo {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct AAIWayPointActor* StartWayPointActor; // Offset: 0x08 // Size: 0x08
	struct TArray<struct FName> LevelsToBeLoaded; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FTransform> ApexCampInfos; // Offset: 0x20 // Size: 0x10
	struct AActor* ApexCampActorClass; // Offset: 0x30 // Size: 0x08
	struct TArray<struct FTransform> BalloonInfos; // Offset: 0x38 // Size: 0x10
	struct AActor* BalloonActorClass; // Offset: 0x48 // Size: 0x08
	struct TArray<struct FActorPointWithWeight> PathOutlinePoints; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActorPointWithWeight
// Size: 0x10 // Inherited bytes: 0x00
struct FActorPointWithWeight {
	// Fields
	struct AActor* ActorPoint; // Offset: 0x00 // Size: 0x08
	float Weight; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SoundConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FSoundConfig {
	// Fields
	float TransDist; // Offset: 0x00 // Size: 0x04
	bool bSetBlackboardValue; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct TArray<struct FName> BlackboardNameList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.InstancedSplineMeshInfoStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FInstancedSplineMeshInfoStruct {
	// Fields
	struct UInstancedSplineMeshComponent* InstancedSSplineMesh; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SplineMeshInfoStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FSplineMeshInfoStruct {
	// Fields
	struct USplineMeshComponent* SplineMesh; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleSplineData
// Size: 0x28 // Inherited bytes: 0x00
struct FSingleSplineData {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	struct FVector StartLocationOffest; // Offset: 0x08 // Size: 0x0c
	struct FVector EndLocationOffest; // Offset: 0x14 // Size: 0x0c
	float LengthPerPiece; // Offset: 0x20 // Size: 0x04
	float FinishedTime; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AbilityExposedProperty
// Size: 0x48 // Inherited bytes: 0x00
struct FAbilityExposedProperty {
	// Fields
	struct FName PropertyName; // Offset: 0x00 // Size: 0x08
	char Type; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	StrProperty DefaultValue; // Offset: 0x10 // Size: 0x10
	StrProperty Category; // Offset: 0x20 // Size: 0x10
	StrProperty SubTypeObjectPath; // Offset: 0x30 // Size: 0x10
	bool bIsArray; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AbilityInjectedPropertyInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FAbilityInjectedPropertyInfo {
	// Fields
	struct FName PropertyName; // Offset: 0x00 // Size: 0x08
	struct FName InjectedName; // Offset: 0x08 // Size: 0x08
	struct UProperty* Property; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAbilityAnimInstanceProxy
// Size: 0x630 // Inherited bytes: 0x5d0
struct FAnimAbilityAnimInstanceProxy : FAnimInstanceProxy {
	// Fields
	struct TArray<struct FAbilityProperty> AbilityProperties; // Offset: 0x5c8 // Size: 0x10
	struct UAbilityAnimInstanceBase* DestInstance; // Offset: 0x5d8 // Size: 0x08
	char pad_0x5E8[0x48]; // Offset: 0x5e8 // Size: 0x48
};

// Object Name: ScriptStruct ShadowTrackerExtra.AbilityProperty
// Size: 0x18 // Inherited bytes: 0x00
struct FAbilityProperty {
	// Fields
	struct UProperty* Property; // Offset: 0x00 // Size: 0x08
	struct UProperty* DestProperty; // Offset: 0x08 // Size: 0x08
	struct UAnimAbility* Ability; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimalAIStateData
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimalAIStateData {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimalAnimData
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimalAnimData {
	// Fields
	enum class AnimalAnimListType PoseType; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimationAsset* AnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimalMoveAnimSpeed
// Size: 0x08 // Inherited bytes: 0x00
struct FAnimalMoveAnimSpeed {
	// Fields
	enum class AnimalAnimListType PoseType; // Offset: 0x00 // Size: 0x04
	float Speed; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RuntimeAnimAsset
// Size: 0x30 // Inherited bytes: 0x00
struct FRuntimeAnimAsset {
	// Fields
	struct FName AnimVarName; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* AnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.EditAnimAsset
// Size: 0x30 // Inherited bytes: 0x00
struct FEditAnimAsset {
	// Fields
	struct FUAEBlackboardKeySelector AnimAssetDescription; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* AnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimVarName
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimVarName {
	// Fields
	struct FName Description; // Offset: 0x00 // Size: 0x08
	struct FName AnimVarName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimationCurveData
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimationCurveData {
	// Fields
	StrProperty CurveName; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimationFloatCurveData
// Size: 0x18 // Inherited bytes: 0x10
struct FAnimationFloatCurveData : FAnimationCurveData {
	// Fields
	struct UCurveFloat* FloatCurve; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimContext
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimContext {
	// Fields
	MapProperty FieldMapValues; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimContextEdit
// Size: 0x60 // Inherited bytes: 0x50
struct FAnimContextEdit : FAnimContext {
	// Fields
	struct TArray<struct FGameplayTag> FieldValues; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimContextFieldDef
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimContextFieldDef {
	// Fields
	struct FGameplayTag FieldTag; // Offset: 0x00 // Size: 0x08
	IntProperty BitSize; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UseSpineAimSetting
// Size: 0x08 // Inherited bytes: 0x00
struct FUseSpineAimSetting {
	// Fields
	enum class ESTExtraVehicleShapeType ShapeType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SeatIndex; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PassengerFootSocket
// Size: 0x10 // Inherited bytes: 0x00
struct FPassengerFootSocket {
	// Fields
	struct FName LeftPassengerFootSocketName; // Offset: 0x00 // Size: 0x08
	struct FName RightPassengerFootSocketName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimLayerStack
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimLayerStack {
	// Fields
	struct TArray<struct FAnimLayerSlotStack> SlotStacks; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimLayerSlotStack
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimLayerSlotStack {
	// Fields
	IntProperty SlotIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FAnimLayerEntry> Entries; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimLayerEntry
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimLayerEntry {
	// Fields
	struct FName ConfigName; // Offset: 0x00 // Size: 0x08
	struct FName AnimSourceKey; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimLODInstance
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimLODInstance {
	// Fields
	struct ASTExtraPlayerCharacter* Character; // Offset: 0x00 // Size: 0x08
	IntProperty LODLevel; // Offset: 0x08 // Size: 0x04
	float MaxDistanceFactor; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimDeviceConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimDeviceConfig {
	// Fields
	IntProperty SameScreenFreeCount; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FAnimLODConfig> LODGroups; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimLODConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FAnimLODConfig {
	// Fields
	IntProperty SameScreenRange; // Offset: 0x00 // Size: 0x04
	float MaxDistanceFactorRange; // Offset: 0x04 // Size: 0x04
	IntProperty SkipFrame; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimNotifyState_ChangeMaterialParameter_Data
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimNotifyState_ChangeMaterialParameter_Data {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	enum class EAnimNotifyState_ChangeMaterialParameter_Type ParameterType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float FloatValue; // Offset: 0x0c // Size: 0x04
	struct FLinearColor VectorValue; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimNotifyState_EquipItem_Context
// Size: 0x110 // Inherited bytes: 0x00
struct FAnimNotifyState_EquipItem_Context {
	// Fields
	struct TWeakObjectPtr<struct AActor> OwnerCharacter; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct UCharacterAvatarComponent2> AvatarComp; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
	MapProperty PutOnItems; // Offset: 0x20 // Size: 0x50
	MapProperty PutOffItems; // Offset: 0x70 // Size: 0x50
	MapProperty PutOffAvatarCustoms; // Offset: 0xc0 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialCurveParamConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FMaterialCurveParamConfig {
	// Fields
	StrProperty ParamName; // Offset: 0x00 // Size: 0x10
	struct UCurveFloat* Curve; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SubActorDissolveMatState
// Size: 0x58 // Inherited bytes: 0x00
struct FSubActorDissolveMatState {
	// Fields
	MapProperty OriginalMatCache; // Offset: 0x00 // Size: 0x50
	char pad_0x50[0x8]; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MapSkeletalMeshComponent
// Size: 0x50 // Inherited bytes: 0x00
struct FMapSkeletalMeshComponent {
	// Fields
	MapProperty MapSkeletalMesh; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActorSkeletalMeshAnim
// Size: 0x60 // Inherited bytes: 0x00
struct FActorSkeletalMeshAnim {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	struct USkeletalMesh* PropMesh; // Offset: 0x08 // Size: 0x08
	struct UAnimationAsset* PropAnim; // Offset: 0x10 // Size: 0x08
	struct UAnimInstance* PropAnimInstance; // Offset: 0x18 // Size: 0x08
	float ScaleRate; // Offset: 0x20 // Size: 0x04
	bool bSemiTransparentIfExistGroundPet; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct FName MatSlot; // Offset: 0x28 // Size: 0x08
	struct FName MatParamName; // Offset: 0x30 // Size: 0x08
	float MatBaseParamValue; // Offset: 0x38 // Size: 0x04
	float MatModifiedParamValue; // Offset: 0x3c // Size: 0x04
	bool bCastPhotonShadow; // Offset: 0x40 // Size: 0x01
	bool bEnableDissolve; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x6]; // Offset: 0x42 // Size: 0x06
	struct TArray<struct FSubActorDissolveMatCfg> DissolveMatCfgList; // Offset: 0x48 // Size: 0x10
	float DissolveStartAngle; // Offset: 0x58 // Size: 0x04
	float DissolveEndAngle; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SubActorDissolveMatCfg
// Size: 0x30 // Inherited bytes: 0x00
struct FSubActorDissolveMatCfg {
	// Fields
	struct UMaterialInterface* MatInterface; // Offset: 0x00 // Size: 0x28
	struct FName MatSlot; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimTagAlias
// Size: 0x78 // Inherited bytes: 0x00
struct FAnimTagAlias {
	// Fields
	struct FGameplayTag AssetTag; // Offset: 0x00 // Size: 0x08
	MapProperty ContextOverride; // Offset: 0x08 // Size: 0x50
	struct FGameplayTag CachedContextType; // Offset: 0x58 // Size: 0x08
	char pad_0x60[0x18]; // Offset: 0x60 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.ArmsRaceWeaponGroupWeightConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FArmsRaceWeaponGroupWeightConfig {
	// Fields
	IntProperty GroupID; // Offset: 0x00 // Size: 0x04
	IntProperty Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ArmsRaceWeaponConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FArmsRaceWeaponConfig {
	// Fields
	IntProperty WeaponItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> AttachmentItemIDs_a; // Offset: 0x08 // Size: 0x10
	IntProperty BulletItemID; // Offset: 0x18 // Size: 0x04
	IntProperty BulletCount; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PropSkillNoiseRangeParam
// Size: 0x24 // Inherited bytes: 0x00
struct FPropSkillNoiseRangeParam {
	// Fields
	float GenProbility; // Offset: 0x00 // Size: 0x04
	IntProperty PropSkillLevel; // Offset: 0x04 // Size: 0x04
	float RangeLifeSpan; // Offset: 0x08 // Size: 0x04
	float MarkerLifeSpan; // Offset: 0x0c // Size: 0x04
	float RangeRadius; // Offset: 0x10 // Size: 0x04
	IntProperty HumanBuffID; // Offset: 0x14 // Size: 0x04
	IntProperty ZombieBuffID; // Offset: 0x18 // Size: 0x04
	IntProperty ZombieWeakSpeakBuffID; // Offset: 0x1c // Size: 0x04
	IntProperty MarkerIconID; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RangeCheckRetParam
// Size: 0x90 // Inherited bytes: 0x00
struct FRangeCheckRetParam {
	// Fields
	struct FHitResult HitResult; // Offset: 0x00 // Size: 0x88
	bool IsBlockedBySomething; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.PropSkillSmokeDamageParam
// Size: 0x34 // Inherited bytes: 0x00
struct FPropSkillSmokeDamageParam {
	// Fields
	float GenProbility; // Offset: 0x00 // Size: 0x04
	IntProperty PropSkillLevel; // Offset: 0x04 // Size: 0x04
	float PlayerInnerDamageHealth; // Offset: 0x08 // Size: 0x04
	float PlayerOuterDamageHealth; // Offset: 0x0c // Size: 0x04
	float ZombieInnerDamageHealth; // Offset: 0x10 // Size: 0x04
	float ZombieOuterDamageHealth; // Offset: 0x14 // Size: 0x04
	float WallWeakenDamageRatio; // Offset: 0x18 // Size: 0x04
	float InnerDamageRadius; // Offset: 0x1c // Size: 0x04
	float OuterDamageRadius; // Offset: 0x20 // Size: 0x04
	float SomkeLifeSpan; // Offset: 0x24 // Size: 0x04
	float CheckPeriod; // Offset: 0x28 // Size: 0x04
	IntProperty HumanBuffID; // Offset: 0x2c // Size: 0x04
	IntProperty ZombieBuffID; // Offset: 0x30 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AudioRegionData
// Size: 0x20 // Inherited bytes: 0x08
struct FAudioRegionData : FTableRowBase {
	// Fields
	IntProperty RegionID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct UAkAudioEvent*> WwiseEvent; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AudioRegionWwiseData
// Size: 0x28 // Inherited bytes: 0x00
struct FAudioRegionWwiseData {
	// Fields
	bool bThirdPerson; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty SwitchGroup; // Offset: 0x08 // Size: 0x10
	StrProperty SwitchState; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoAimInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FAutoAimInfo {
	// Fields
	struct AActor* AimClass; // Offset: 0x00 // Size: 0x08
	struct FVector AimOffset; // Offset: 0x08 // Size: 0x0c
	float MaxAimDistance; // Offset: 0x14 // Size: 0x04
	float MaxAimScreenDis; // Offset: 0x18 // Size: 0x04
	struct FVector2D ScreenAimRect; // Offset: 0x1c // Size: 0x08
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	float DefaultLockDelay; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FName LockSocketName; // Offset: 0x30 // Size: 0x08
	float DotValue; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyMatConfig
// Size: 0x50 // Inherited bytes: 0x18
struct FAvatarAction_ApplyMatConfig : FAvatarActionBase {
	// Fields
	struct FCustomMatConfig CacheMatConfig; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMatConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FCustomMatConfig {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FCustomMatScalar> ScalarConfig; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FCustomMatColor> ColorConfig; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FCustomMatTextrue> TextrueConfig; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMatTextrue
// Size: 0x48 // Inherited bytes: 0x00
struct FCustomMatTextrue {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	struct FName Tips; // Offset: 0x08 // Size: 0x08
	struct UTexture* Textrue; // Offset: 0x10 // Size: 0x28
	StrProperty TextruePath; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMatColor
// Size: 0x20 // Inherited bytes: 0x00
struct FCustomMatColor {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	struct FName Tips; // Offset: 0x08 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMatScalar
// Size: 0x18 // Inherited bytes: 0x00
struct FCustomMatScalar {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	struct FName Tips; // Offset: 0x08 // Size: 0x08
	float Scalar; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyDIYMatParam
// Size: 0x60 // Inherited bytes: 0x50
struct FAvatarAction_ApplyDIYMatParam : FAvatarAction_ApplyMatConfig {
	// Fields
	struct TArray<IntProperty> MatID; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyDIYMirroParam
// Size: 0x60 // Inherited bytes: 0x50
struct FAvatarAction_ApplyDIYMirroParam : FAvatarAction_ApplyMatConfig {
	// Fields
	struct TArray<IntProperty> MirroParam; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyDIYPattern
// Size: 0x30 // Inherited bytes: 0x18
struct FAvatarAction_ApplyDIYPattern : FAvatarActionBase {
	// Fields
	struct TArray<struct FDIYMergedTexData> DIYTextureParam; // Offset: 0x18 // Size: 0x10
	IntProperty UVIndex; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyItemHandle
// Size: 0x30 // Inherited bytes: 0x18
struct FAvatarAction_ApplyItemHandle : FAvatarActionBase {
	// Fields
	struct FItemDefineID ItemDefineID; // Offset: 0x18 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyMaterial
// Size: 0x48 // Inherited bytes: 0x18
struct FAvatarAction_ApplyMaterial : FAvatarActionBase {
	// Fields
	IntProperty MaterialBPID; // Offset: 0x14 // Size: 0x04
	struct FMaterialGroup CacheMatGroup; // Offset: 0x18 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialGroup
// Size: 0x30 // Inherited bytes: 0x00
struct FMaterialGroup {
	// Fields
	struct TArray<struct FMaterialAsset> MatList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UMaterialInterface*> NewMatObjectList; // Offset: 0x10 // Size: 0x10
	struct TArray<struct UMaterialInterface*> OriMatObjectList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialAsset
// Size: 0x68 // Inherited bytes: 0x00
struct FMaterialAsset {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* MatInst; // Offset: 0x08 // Size: 0x28
	struct UMaterialInterface* MatBase; // Offset: 0x30 // Size: 0x28
	struct UMaterialInterface* MatBaseObject; // Offset: 0x58 // Size: 0x08
	bool bDynamicMat; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_TickableBase
// Size: 0x28 // Inherited bytes: 0x18
struct FAvatarAction_TickableBase : FAvatarActionBase {
	// Fields
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyMatParamModify
// Size: 0xc8 // Inherited bytes: 0x28
struct FAvatarAction_ApplyMatParamModify : FAvatarAction_TickableBase {
	// Fields
	char pad_0x28[0xa0]; // Offset: 0x28 // Size: 0xa0
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyMesh
// Size: 0xf0 // Inherited bytes: 0x18
struct FAvatarAction_ApplyMesh : FAvatarActionBase {
	// Fields
	IntProperty MeshBPID; // Offset: 0x14 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FMeshAsset CachedMeshAsset; // Offset: 0x20 // Size: 0xd0
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeshAsset
// Size: 0xd0 // Inherited bytes: 0x00
struct FMeshAsset {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct USkeletalMesh* SkeletalMesh; // Offset: 0x30 // Size: 0x28
	struct UStaticMesh* StaticMesh; // Offset: 0x58 // Size: 0x28
	struct FName AttachSocket; // Offset: 0x80 // Size: 0x08
	enum class EMeshAssetType meshType; // Offset: 0x88 // Size: 0x01
	bool bKeepRelative; // Offset: 0x89 // Size: 0x01
	char pad_0x8A[0x6]; // Offset: 0x8a // Size: 0x06
	struct UAnimInstance* animBP; // Offset: 0x90 // Size: 0x08
	struct UClass* animBPClass; // Offset: 0x98 // Size: 0x28
	bool bAnimInit; // Offset: 0xc0 // Size: 0x01
	bool bUpdateTransform; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0xe]; // Offset: 0xc2 // Size: 0x0e
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyParticle
// Size: 0x50 // Inherited bytes: 0x18
struct FAvatarAction_ApplyParticle : FAvatarActionBase {
	// Fields
	IntProperty ParticleBPID; // Offset: 0x14 // Size: 0x04
	struct FName ParticleName; // Offset: 0x18 // Size: 0x08
	struct FParticleGroup ParticleGroup; // Offset: 0x20 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyVehicleDIYPattern
// Size: 0x48 // Inherited bytes: 0x18
struct FAvatarAction_ApplyVehicleDIYPattern : FAvatarActionBase {
	// Fields
	struct TArray<struct FDIYVehicleParamData> DIYParam; // Offset: 0x18 // Size: 0x10
	IntProperty UVIndex; // Offset: 0x28 // Size: 0x04
	IntProperty SectionIndex; // Offset: 0x2c // Size: 0x04
	struct FName TextureName; // Offset: 0x30 // Size: 0x08
	struct FName MatSlotName; // Offset: 0x38 // Size: 0x08
	bool bAllMatSlot; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_ApplyWeaponHandle
// Size: 0xd8 // Inherited bytes: 0x30
struct FAvatarAction_ApplyWeaponHandle : FAvatarAction_ApplyItemHandle {
	// Fields
	MapProperty CachedMeshAssets; // Offset: 0x30 // Size: 0x50
	struct TArray<struct FMeshAsset> CachedExtMeshAssets; // Offset: 0x80 // Size: 0x10
	enum class EWeaponMeshType CurMeshType; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	struct TArray<struct FMaterialAsset> CachedMatAsset; // Offset: 0x98 // Size: 0x10
	struct UFXSystemAsset* CachedLightAsset; // Offset: 0xa8 // Size: 0x28
	char pad_0xD0[0x8]; // Offset: 0xd0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_CycleSwitchMesh
// Size: 0x58 // Inherited bytes: 0x28
struct FAvatarAction_CycleSwitchMesh : FAvatarAction_TickableBase {
	// Fields
	char pad_0x28[0x30]; // Offset: 0x28 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAction_SampleCurveToMPC
// Size: 0x40 // Inherited bytes: 0x28
struct FAvatarAction_SampleCurveToMPC : FAvatarAction_TickableBase {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.MatParamModifyCfg
// Size: 0xd0 // Inherited bytes: 0x00
struct FMatParamModifyCfg {
	// Fields
	struct FSoftObjectPath CurveAsset; // Offset: 0x00 // Size: 0x18
	struct FName ParamName; // Offset: 0x18 // Size: 0x08
	struct FName ParticleTag; // Offset: 0x20 // Size: 0x08
	float FxWaitTime; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<IntProperty> RelatedSlots; // Offset: 0x30 // Size: 0x10
	struct UCurveFloat* CachedCurve; // Offset: 0x40 // Size: 0x08
	struct FName ReplaceMatSlotName; // Offset: 0x48 // Size: 0x08
	struct FSoftObjectPath NormalMat; // Offset: 0x50 // Size: 0x18
	struct FSoftObjectPath ReplaceMat; // Offset: 0x68 // Size: 0x18
	MapProperty AdditionalParams; // Offset: 0x80 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialConfig
// Size: 0x68 // Inherited bytes: 0x00
struct FMaterialConfig {
	// Fields
	struct FName MatSlotName; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* Mat; // Offset: 0x08 // Size: 0x28
	struct UMaterialInterface* MatBase; // Offset: 0x30 // Size: 0x28
	struct TArray<struct FMaterialAsset> additionalMats; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MeshGroup
// Size: 0x30 // Inherited bytes: 0x00
struct FMeshGroup {
	// Fields
	struct TArray<struct FMeshAsset> MeshAssetList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UObject*> MeshObjectList; // Offset: 0x10 // Size: 0x10
	struct TArray<struct UMeshComponent*> MeshCompList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.LoadParticleAssetRequest
// Size: 0x58 // Inherited bytes: 0x00
struct FLoadParticleAssetRequest {
	// Fields
	struct TArray<struct FParticleAsset> ParticleAsset; // Offset: 0x00 // Size: 0x10
	struct FParticleGroup ParticleGroup; // Offset: 0x10 // Size: 0x30
	struct UMeshComponent* Outer; // Offset: 0x40 // Size: 0x08
	DelegateProperty Callback; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.LoadMeshAssetRequest
// Size: 0x58 // Inherited bytes: 0x00
struct FLoadMeshAssetRequest {
	// Fields
	struct TArray<struct FMeshAsset> MeshAsset; // Offset: 0x00 // Size: 0x10
	struct FMeshGroup MeshGroup; // Offset: 0x10 // Size: 0x30
	struct UMeshComponent* Outer; // Offset: 0x40 // Size: 0x08
	DelegateProperty Callback; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CaptureMeshDesc
// Size: 0x38 // Inherited bytes: 0x00
struct FCaptureMeshDesc {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	struct UMeshComponent* MeshComp; // Offset: 0x08 // Size: 0x08
	IntProperty SlotType; // Offset: 0x10 // Size: 0x04
	enum class EMeshType meshType; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct UAnimInstance* AnimClass; // Offset: 0x18 // Size: 0x08
	struct TArray<struct FCaptureMeshBase> AttachMeshDesc; // Offset: 0x20 // Size: 0x10
	bool bSyncVisibleInfo; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.CaptureMeshBase
// Size: 0x18 // Inherited bytes: 0x00
struct FCaptureMeshBase {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	struct UMeshComponent* MeshComp; // Offset: 0x08 // Size: 0x08
	struct UAnimInstance* AnimClass; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAnimAsset
// Size: 0xc0 // Inherited bytes: 0x00
struct FWeaponAnimAsset {
	// Fields
	struct FName WeaponName; // Offset: 0x00 // Size: 0x08
	struct FName AttachSocketName; // Offset: 0x08 // Size: 0x08
	struct FTransform AttachRelativeTransform; // Offset: 0x10 // Size: 0x30
	struct UAnimSequenceBase* AnimPose; // Offset: 0x40 // Size: 0x28
	struct UAnimSequenceBase* AnimAdd; // Offset: 0x68 // Size: 0x28
	struct UAnimSequenceBase* WeaponAnimBP; // Offset: 0x90 // Size: 0x28
	char pad_0xB8[0x8]; // Offset: 0xb8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LUAAvatarCustom
// Size: 0x20 // Inherited bytes: 0x00
struct FLUAAvatarCustom {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ColorID; // Offset: 0x04 // Size: 0x04
	IntProperty PatternID; // Offset: 0x08 // Size: 0x04
	IntProperty CustomNumber; // Offset: 0x0c // Size: 0x04
	IntProperty PlanData; // Offset: 0x10 // Size: 0x04
	IntProperty ShapeInfo; // Offset: 0x14 // Size: 0x04
	IntProperty FootEffect; // Offset: 0x18 // Size: 0x04
	IntProperty Source; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DIYUVInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FDIYUVInfo {
	// Fields
	float UVCorrdX; // Offset: 0x00 // Size: 0x04
	float UVCorrdY; // Offset: 0x04 // Size: 0x04
	float UVSizeX; // Offset: 0x08 // Size: 0x04
	float UVSizeY; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DIYMatParam
// Size: 0x20 // Inherited bytes: 0x00
struct FDIYMatParam {
	// Fields
	StrProperty MatTexPath; // Offset: 0x00 // Size: 0x10
	struct FLinearColor MatTexColor; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DIYData
// Size: 0x50 // Inherited bytes: 0x00
struct FDIYData {
	// Fields
	struct UTexture2D* Texture; // Offset: 0x00 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x08 // Size: 0x10
	struct FVector2D Scale; // Offset: 0x18 // Size: 0x08
	struct FVector2D Offset; // Offset: 0x20 // Size: 0x08
	float Rotation; // Offset: 0x28 // Size: 0x04
	enum class EDIYProjectDirection Direction; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	struct FLinearColor UVClip; // Offset: 0x30 // Size: 0x10
	struct FLinearColor UVInfo; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarExceptStruct
// Size: 0xf8 // Inherited bytes: 0x00
struct FAvatarExceptStruct {
	// Fields
	char pad_0x0[0xf8]; // Offset: 0x00 // Size: 0xf8
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarExceptCount
// Size: 0x50 // Inherited bytes: 0x00
struct FAvatarExceptCount {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SuitDIYColorInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FSuitDIYColorInfo {
	// Fields
	bool bUsingSyncProp; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty SuitID; // Offset: 0x04 // Size: 0x04
	IntProperty PlanID; // Offset: 0x08 // Size: 0x04
	IntProperty OriginPlanID; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> PartColorList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GoldenSuitAvatarState
// Size: 0x0c // Inherited bytes: 0x00
struct FGoldenSuitAvatarState {
	// Fields
	IntProperty AvatarPeriod; // Offset: 0x00 // Size: 0x04
	IntProperty AvatarState; // Offset: 0x04 // Size: 0x04
	IntProperty AvatarLevel; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GlobalItemAvatarMap
// Size: 0x10 // Inherited bytes: 0x00
struct FGlobalItemAvatarMap {
	// Fields
	struct TArray<struct FGlobalItemAvatar> AvatarItemList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GlobalItemAvatar
// Size: 0x08 // Inherited bytes: 0x00
struct FGlobalItemAvatar {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty AvatarID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CreateAvatarHandleListAsyncRequest
// Size: 0x38 // Inherited bytes: 0x00
struct FCreateAvatarHandleListAsyncRequest {
	// Fields
	struct TArray<struct FItemDefineID> DefineIDList; // Offset: 0x00 // Size: 0x10
	struct TArray<StrProperty> PathList; // Offset: 0x10 // Size: 0x10
	struct UObject* Outer; // Offset: 0x20 // Size: 0x08
	DelegateProperty Callback; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CreateAvatarHandleAsyncRequest
// Size: 0x40 // Inherited bytes: 0x00
struct FCreateAvatarHandleAsyncRequest {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	struct UObject* Outer; // Offset: 0x18 // Size: 0x08
	StrProperty Path; // Offset: 0x20 // Size: 0x10
	DelegateProperty Callback; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttrPreviewDataRow
// Size: 0x50 // Inherited bytes: 0x00
struct FWeaponAttrPreviewDataRow {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponReuseCfgDataRow
// Size: 0x50 // Inherited bytes: 0x00
struct FWeaponReuseCfgDataRow {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ModTableByMode
// Size: 0x50 // Inherited bytes: 0x00
struct FModTableByMode {
	// Fields
	StrProperty UpWeaponTableName; // Offset: 0x00 // Size: 0x10
	StrProperty UpWeaponAttachmentTableName; // Offset: 0x10 // Size: 0x10
	StrProperty UpBulletTableName; // Offset: 0x20 // Size: 0x10
	StrProperty ChipTableName; // Offset: 0x30 // Size: 0x10
	StrProperty ChipSupportTableName; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachmentsDataRow
// Size: 0xb8 // Inherited bytes: 0x00
struct FWeaponAttachmentsDataRow {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	IntProperty BulletID; // Offset: 0x04 // Size: 0x04
	IntProperty ProposeBulletNum; // Offset: 0x08 // Size: 0x04
	IntProperty AIMinAttackDist; // Offset: 0x0c // Size: 0x04
	IntProperty AIMaxAttackDist; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> MuzzleIDList; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> UpperIDList; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> StockIDList; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> MagazineIDList; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> LowerIDList; // Offset: 0x58 // Size: 0x10
	struct TArray<IntProperty> UpperSideIDList; // Offset: 0x68 // Size: 0x10
	struct TArray<IntProperty> CoreIDList; // Offset: 0x78 // Size: 0x10
	struct TArray<IntProperty> BezelIDList; // Offset: 0x88 // Size: 0x10
	struct TArray<IntProperty> GunLockIDList; // Offset: 0x98 // Size: 0x10
	struct TArray<IntProperty> TacticalAttachIDList; // Offset: 0xa8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SupportUpBullets
// Size: 0x10 // Inherited bytes: 0x00
struct FSupportUpBullets {
	// Fields
	struct TArray<struct FSupportUpBullet> SupportUpBulletList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChipSupportItem
// Size: 0x58 // Inherited bytes: 0x00
struct FChipSupportItem {
	// Fields
	IntProperty ChipSubType; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty SupportItemDic; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChipDataRow
// Size: 0x18 // Inherited bytes: 0x00
struct FChipDataRow {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FAttrModifyData> AttrModifyList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AttrModifyData
// Size: 0x18 // Inherited bytes: 0x00
struct FAttrModifyData {
	// Fields
	StrProperty ModifyAttr; // Offset: 0x00 // Size: 0x10
	enum class EAttrOperator Op; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float ModifyValue; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChipSupportDataRow
// Size: 0x20 // Inherited bytes: 0x00
struct FChipSupportDataRow {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> SupportChipSupTypeList; // Offset: 0x08 // Size: 0x10
	IntProperty SupportChipNum; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UpBulletTableDataRow
// Size: 0x40 // Inherited bytes: 0x00
struct FUpBulletTableDataRow {
	// Fields
	IntProperty MiltiBulletID; // Offset: 0x00 // Size: 0x04
	IntProperty ParentBulletID; // Offset: 0x04 // Size: 0x04
	float BulletImpactDamagePerc; // Offset: 0x08 // Size: 0x04
	IntProperty BulletImpactDamageAddVal; // Offset: 0x0c // Size: 0x04
	float BulletMomentumPerc; // Offset: 0x10 // Size: 0x04
	IntProperty BulletMomentumAddVal; // Offset: 0x14 // Size: 0x04
	IntProperty DefaultPriority; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<IntProperty> BulletHitBuffIdList; // Offset: 0x20 // Size: 0x10
	StrProperty IgnoreBulletHitBuffAttrName; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.UpWeaponAttachmentDataRow
// Size: 0x18 // Inherited bytes: 0x00
struct FUpWeaponAttachmentDataRow {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.UpWeaponDataRow
// Size: 0x1c // Inherited bytes: 0x00
struct FUpWeaponDataRow {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAvatarAttrRow
// Size: 0x90 // Inherited bytes: 0x00
struct FWeaponAvatarAttrRow {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterAnimSpecialOverrideListCfg
// Size: 0x18 // Inherited bytes: 0x00
struct FCharacterAnimSpecialOverrideListCfg {
	// Fields
	IntProperty DependentItemID; // Offset: 0x00 // Size: 0x04
	enum class EAvatarSlotType SlotID; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct TArray<struct FAvatarAnimOverrideData> CharacterAnimOverrideList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarAnimOverrideData
// Size: 0x18 // Inherited bytes: 0x00
struct FAvatarAnimOverrideData {
	// Fields
	enum class EAnimLayerType Layer; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UUAECharAnimListCompBase* AnimListCompClass; // Offset: 0x08 // Size: 0x08
	struct UUAECharAnimListCompBase* AnimListCompInstance; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarPostOperation
// Size: 0x03 // Inherited bytes: 0x00
struct FAvatarPostOperation {
	// Fields
	enum class EAvatarSlotType SlotID; // Offset: 0x00 // Size: 0x01
	enum class EPostOperationType operationWhenReplaced; // Offset: 0x01 // Size: 0x01
	enum class EPostOperationType operationWhenHidden; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.BodyAttachmentConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FBodyAttachmentConfig {
	// Fields
	struct FText AttachmentID; // Offset: 0x00 // Size: 0x18
	struct TArray<struct FBodyAttachmentAttrModify> BodyAttachmentAttrModifiers; // Offset: 0x18 // Size: 0x10
	StrProperty BodyDurabilityIndexName; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BodyAttachmentAttrModify
// Size: 0x18 // Inherited bytes: 0x00
struct FBodyAttachmentAttrModify {
	// Fields
	StrProperty ModifyAttr; // Offset: 0x00 // Size: 0x10
	enum class EAttrOperator Op; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float ModifyValue; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarItemData
// Size: 0xe0 // Inherited bytes: 0xc0
struct FAvatarItemData : FBattleItemData {
	// Fields
	struct USkeletalMesh* SkeletalMesh; // Offset: 0xc0 // Size: 0x08
	struct UStaticMesh* StaticMesh; // Offset: 0xc8 // Size: 0x08
	struct UMaterialInstance* MatInst; // Offset: 0xd0 // Size: 0x08
	IntProperty meshType; // Offset: 0xd8 // Size: 0x04
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarPendantConfig_SpecialParam
// Size: 0x40 // Inherited bytes: 0x00
struct FAvatarPendantConfig_SpecialParam {
	// Fields
	struct FName SpecialUseExplanation; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform AdditionalTransform2SocketRelativeTransform; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarSpecialIdlePreAction
// Size: 0x88 // Inherited bytes: 0x00
struct FAvatarSpecialIdlePreAction {
	// Fields
	enum class ESpecialIdleType IdleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimMontage* PreActionAnim; // Offset: 0x08 // Size: 0x28
	MapProperty PreActionAnimForSlot; // Offset: 0x30 // Size: 0x50
	enum class EAvatarGender AvatarGender; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarSpecialIdle
// Size: 0x38 // Inherited bytes: 0x00
struct FAvatarSpecialIdle {
	// Fields
	enum class ESpecialIdleType IdleType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimSequence* IdleAnim; // Offset: 0x08 // Size: 0x28
	enum class EAvatarGender AvatarGender; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.SlotToMatPattern
// Size: 0x78 // Inherited bytes: 0x00
struct FSlotToMatPattern {
	// Fields
	enum class EAvatarSlotType SlotID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UTexture* PatternTexture_2; // Offset: 0x08 // Size: 0x28
	float IconScale_2; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct UTexture* PatternTexture_3; // Offset: 0x38 // Size: 0x28
	float IconScale_3; // Offset: 0x60 // Size: 0x04
	struct FLinearColor IconOffset; // Offset: 0x64 // Size: 0x10
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SlotToMatColor
// Size: 0x48 // Inherited bytes: 0x00
struct FSlotToMatColor {
	// Fields
	enum class EAvatarSlotType SlotID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FLinearColor> MaskColor; // Offset: 0x08 // Size: 0x10
	float GrayScale; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UTexture* MaskGrayTexture; // Offset: 0x20 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClearAndRecoverStrategy
// Size: 0x48 // Inherited bytes: 0x00
struct FClearAndRecoverStrategy {
	// Fields
	struct TArray<IntProperty> FliterItemTypes; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> FliterItemSubTypes; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> FliterItemIDs; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> NotRecoverItemIDs; // Offset: 0x30 // Size: 0x10
	bool bKeepBullet; // Offset: 0x40 // Size: 0x01
	bool bRecoverAimEquip; // Offset: 0x41 // Size: 0x01
	bool bForceKeepItems; // Offset: 0x42 // Size: 0x01
	bool bClearAvatarData; // Offset: 0x43 // Size: 0x01
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RecoverKeepAllItemData
// Size: 0x30 // Inherited bytes: 0x00
struct FRecoverKeepAllItemData {
	// Fields
	struct TArray<struct FRecoverKeepItemData> ItemDatas; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FRecoverKeepWeaponData> WeaponDatas; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> NotDropItemList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RecoverKeepItemData
// Size: 0x20 // Inherited bytes: 0x00
struct FRecoverKeepItemData {
	// Fields
	IntProperty ItemTypeID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	bool TotalNumLimit; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RecoverKeepWeaponData
// Size: 0x48 // Inherited bytes: 0x20
struct FRecoverKeepWeaponData : FRecoverKeepItemData {
	// Fields
	enum class ESurviveWeaponPropSlot WeaponSlot; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<struct FRecoverKeepItemData> AttachmentDatas; // Offset: 0x28 // Size: 0x10
	IntProperty ClipBulletNum; // Offset: 0x38 // Size: 0x04
	enum class EWeaponShootIntervalMode WeaponShootIntervalMode; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	IntProperty WeaponShootType; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemAvatarMaterial
// Size: 0x30 // Inherited bytes: 0x00
struct FItemAvatarMaterial {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* AssetMaterial; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemAvatarData
// Size: 0x58 // Inherited bytes: 0x00
struct FItemAvatarData {
	// Fields
	struct FName SlotID; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* MatInstance; // Offset: 0x08 // Size: 0x28
	struct UMaterialInterface* LobbyMatInstance; // Offset: 0x30 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SortAuxStruct
// Size: 0x18 // Inherited bytes: 0x00
struct FSortAuxStruct {
	// Fields
	IntProperty TypeSpecificID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
	int64_t Priority; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.GenderMultiAnimConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FGenderMultiAnimConfig {
	// Fields
	struct FName GenderStr; // Offset: 0x00 // Size: 0x08
	struct ACharacter* Character; // Offset: 0x08 // Size: 0x08
	struct UAnimationAsset* Anim; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyGenderAnimData
// Size: 0x50 // Inherited bytes: 0x00
struct FLobbyGenderAnimData {
	// Fields
	struct UAnimationAsset* BoyAnim; // Offset: 0x00 // Size: 0x28
	struct UAnimationAsset* GirlAnim; // Offset: 0x28 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.GrenadeSoundAssetSet
// Size: 0x18 // Inherited bytes: 0x00
struct FGrenadeSoundAssetSet {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FGrenadeSoundAsset> SoundList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GrenadeSoundAsset
// Size: 0x40 // Inherited bytes: 0x00
struct FGrenadeSoundAsset {
	// Fields
	struct UAkAudioEvent* GrenadeSound; // Offset: 0x00 // Size: 0x28
	struct FName Name; // Offset: 0x28 // Size: 0x08
	StrProperty Key; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GrenadeParticleSystemAssetSet
// Size: 0x48 // Inherited bytes: 0x00
struct FGrenadeParticleSystemAssetSet {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FGrenadeParticleSystemAsset> FxList; // Offset: 0x08 // Size: 0x10
	struct FSoftObjectPath ExLevelSequence; // Offset: 0x18 // Size: 0x18
	struct FSoftObjectPath SkyExLevelSequence; // Offset: 0x30 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.GrenadeParticleSystemAsset
// Size: 0x40 // Inherited bytes: 0x00
struct FGrenadeParticleSystemAsset {
	// Fields
	struct UParticleSystem* GrenadeParticleSystem; // Offset: 0x00 // Size: 0x28
	struct FName Name; // Offset: 0x28 // Size: 0x08
	StrProperty Key; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackpackObserverData
// Size: 0x40 // Inherited bytes: 0x00
struct FBackpackObserverData {
	// Fields
	float OccupiedCapacity; // Offset: 0x00 // Size: 0x04
	float BackpackCapacity; // Offset: 0x04 // Size: 0x04
	float OccupiedSafetyBoxCapacity; // Offset: 0x08 // Size: 0x04
	float SafetyBoxCapacity; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FBackpackObserverItem> ObserverItems; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0x10]; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FCustomAccessoriesData> ObserverCustomAccData; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackpackObserverItem
// Size: 0x40 // Inherited bytes: 0x00
struct FBackpackObserverItem {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	uint64 InstanceID; // Offset: 0x08 // Size: 0x08
	uint64 ItemState; // Offset: 0x10 // Size: 0x08
	bool bMarkDelete; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct TArray<struct FItemDefineID> AssociationDefineIDArray; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlaneEffectData
// Size: 0x70 // Inherited bytes: 0x00
struct FPlaneEffectData {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct UParticleSystem* ParticleSystem; // Offset: 0x30 // Size: 0x28
	struct FName AttachSocket; // Offset: 0x58 // Size: 0x08
	struct TArray<struct FParticleSysParam> InstanceParameters; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlaneAvatarData
// Size: 0x30 // Inherited bytes: 0x00
struct FPlaneAvatarData {
	// Fields
	struct FName SlotID; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* MatInstance; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.TouchInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FTouchInfo {
	// Fields
	char pad_0x0[0x14]; // Offset: 0x00 // Size: 0x14
};

// Object Name: ScriptStruct ShadowTrackerExtra.ResultItemData
// Size: 0x08 // Inherited bytes: 0x00
struct FResultItemData {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Durability; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachItemUnit
// Size: 0x20 // Inherited bytes: 0x00
struct FWeaponAttachItemUnit {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	enum class EWeaponAttachmentSocketType Socket; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.CreateBattleItemHandleListAsyncRequest
// Size: 0x38 // Inherited bytes: 0x00
struct FCreateBattleItemHandleListAsyncRequest {
	// Fields
	struct TArray<struct FItemDefineID> DefineIDList; // Offset: 0x00 // Size: 0x10
	struct TArray<StrProperty> PathList; // Offset: 0x10 // Size: 0x10
	struct UObject* Outer; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CreateBattleItemHandleAsyncRequest
// Size: 0x40 // Inherited bytes: 0x00
struct FCreateBattleItemHandleAsyncRequest {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	struct UObject* Outer; // Offset: 0x18 // Size: 0x08
	StrProperty Path; // Offset: 0x20 // Size: 0x10
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemDefineSortingInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FItemDefineSortingInfo {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	bool bUsed; // Offset: 0x18 // Size: 0x01
	bool bMainHand; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	IntProperty Count; // Offset: 0x1c // Size: 0x04
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickupItemDataSortingInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FPickupItemDataSortingInfo {
	// Fields
	struct FPickUpItemData Data; // Offset: 0x00 // Size: 0x38
	bool bHighPriority; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleSearchBoxSortingInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FBattleSearchBoxSortingInfo {
	// Fields
	struct FSearchedPickUpItemResult pickUpItemResult; // Offset: 0x00 // Size: 0x40
	bool bHighPriority; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	IntProperty pickCount; // Offset: 0x44 // Size: 0x04
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleSearchItemSortingInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FBattleSearchItemSortingInfo {
	// Fields
	struct FSearchedPickUpItemResult SearchItemResult; // Offset: 0x00 // Size: 0x40
	bool bHighPriority; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	IntProperty pickCount; // Offset: 0x44 // Size: 0x04
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleItemSortingInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FBattleItemSortingInfo {
	// Fields
	struct FItemDefineID ItemDefineID; // Offset: 0x00 // Size: 0x18
	bool bHighPriority; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAccessoryMatData
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleAccessoryMatData {
	// Fields
	struct FName SlotID; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* MatInstance; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAvatarProperty
// Size: 0x138 // Inherited bytes: 0x00
struct FVehicleAvatarProperty {
	// Fields
	struct USkeletalMesh* TPPMesh; // Offset: 0x00 // Size: 0x28
	struct USkeletalMesh* FPPMesh; // Offset: 0x28 // Size: 0x28
	struct TArray<struct FWheelSetup> WheelSetups; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FWheelHubSetup> WheelHubSetups; // Offset: 0x60 // Size: 0x10
	struct TArray<struct FSTExtraVehicleWheelHP> WheelsHP; // Offset: 0x70 // Size: 0x10
	struct FVehicleTransmissionData GearSetup; // Offset: 0x80 // Size: 0x30
	struct FVector CenterOfMassOffset; // Offset: 0xb0 // Size: 0x0c
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct FVehicleNeutralThrottleConfig NeutralThrottleConfig; // Offset: 0xc0 // Size: 0x70
	float CabrioletAnimLength; // Offset: 0x130 // Size: 0x04
	char pad_0x134[0x4]; // Offset: 0x134 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleNeutralThrottleConfig
// Size: 0x70 // Inherited bytes: 0x00
struct FVehicleNeutralThrottleConfig {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	enum class EVehicleDifferential DifferentialType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float CanNeutralThrottleMinSpeed; // Offset: 0x04 // Size: 0x04
	float NeutralThrottleToMaxRPMSeconds; // Offset: 0x08 // Size: 0x04
	float NeutralThrottleDecelSeconds; // Offset: 0x0c // Size: 0x04
	float WheelRPMOverEngineRPMRate; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct UAkAudioEvent* FrictionAudio; // Offset: 0x18 // Size: 0x28
	struct FVector CameraOffset; // Offset: 0x40 // Size: 0x0c
	float AccelCameraOffsetSeconds; // Offset: 0x4c // Size: 0x04
	float DecelCameraOffsetSeconds; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct UCameraShake* CameraShake; // Offset: 0x58 // Size: 0x08
	float CameraShakeDelay; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct USTVehicleWheelSlipDustConfig* DustConfig; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleWheelHP
// Size: 0x20 // Inherited bytes: 0x00
struct FSTExtraVehicleWheelHP {
	// Fields
	float HPMax; // Offset: 0x00 // Size: 0x04
	bool DontDamageWheels; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FName BoneName; // Offset: 0x08 // Size: 0x08
	struct TArray<struct FName> AssociationBoneName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheelHubSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FWheelHubSetup {
	// Fields
	struct UVehicleWheel* WheelClass; // Offset: 0x00 // Size: 0x08
	struct FName TireBoneName; // Offset: 0x08 // Size: 0x08
	struct TArray<struct FName> AssociationBoneName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMultiSlotEquipData
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleMultiSlotEquipData {
	// Fields
	enum class EVehiclePartSlot PartSlot; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	StrProperty HandlePath; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FItemAvatarMatPath> SlotMats; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMultiSlotItemEntry
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleMultiSlotItemEntry {
	// Fields
	enum class EVehiclePartSlot PartSlot; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehiclePerItemMatParamOverride
// Size: 0x18 // Inherited bytes: 0x00
struct FVehiclePerItemMatParamOverride {
	// Fields
	IntProperty VehicleItemID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FVehicleSlotMatParamSet> MatParamSets; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSlotMatParamSet
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleSlotMatParamSet {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FVehicleMatScalarParam> ScalarParams; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FVehicleMatVectorParam> VectorParams; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMatVectorParam
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleMatVectorParam {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	struct FLinearColor Value; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMatScalarParam
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleMatScalarParam {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	float Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAccessorySlot
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleAccessorySlot {
	// Fields
	struct FName AccessorySlotName; // Offset: 0x00 // Size: 0x08
	struct FName AttachBoneName; // Offset: 0x08 // Size: 0x08
	struct FVector AccessoryPos; // Offset: 0x10 // Size: 0x0c
	struct FRotator AccessoryRot; // Offset: 0x1c // Size: 0x0c
	struct FVector AccessoryScale; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAttachmentAvatarConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleAttachmentAvatarConfig {
	// Fields
	struct FName AttachmentTag; // Offset: 0x00 // Size: 0x08
	struct FName MeshTag; // Offset: 0x08 // Size: 0x08
	struct USkeletalMesh* SkeletalMesh; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehDecalCfg
// Size: 0x78 // Inherited bytes: 0x00
struct FVehDecalCfg {
	// Fields
	bool Enable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float NeedParkTime; // Offset: 0x04 // Size: 0x04
	struct UMaterialInterface* DecalMaterial; // Offset: 0x08 // Size: 0x28
	struct UTexture* DecalTexture; // Offset: 0x30 // Size: 0x28
	struct FVector2D UVScale; // Offset: 0x58 // Size: 0x08
	struct FVector2D UVOffset; // Offset: 0x60 // Size: 0x08
	struct FVector DecalSize; // Offset: 0x68 // Size: 0x0c
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMatParamModifyCfg
// Size: 0xa0 // Inherited bytes: 0x00
struct FVehicleMatParamModifyCfg {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	enum class EVehicleModifyMatParamType ParamType; // Offset: 0x08 // Size: 0x01
	enum class EVehicleModifyMatParamUsage Usage; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct FRuntimeFloatCurve ParamModifyCurve; // Offset: 0x10 // Size: 0x78
	enum class EVehicleModifyMatTargetType TargetType; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct UCurveVector* VectorCurve; // Offset: 0x90 // Size: 0x08
	float MaxLerpSpeed; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehCharAnimDataWrapper
// Size: 0x18 // Inherited bytes: 0x00
struct FVehCharAnimDataWrapper {
	// Fields
	struct FName AnimCompTag; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FVehCharAnimData> VehCharAnimDataList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleItemAvatarCollection
// Size: 0x70 // Inherited bytes: 0x00
struct FVehicleItemAvatarCollection {
	// Fields
	struct FVehicleItemAvatar Normal; // Offset: 0x00 // Size: 0x38
	struct FVehicleItemAvatar Broken; // Offset: 0x38 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleItemAvatar
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleItemAvatar {
	// Fields
	struct USkeletalMesh* AssetMesh; // Offset: 0x00 // Size: 0x28
	struct TArray<struct FItemAvatarMaterial> AssetMaterials; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankWeaponAvatarCollection
// Size: 0x78 // Inherited bytes: 0x70
struct FTankWeaponAvatarCollection : FVehicleItemAvatarCollection {
	// Fields
	struct FName WeaponTag; // Offset: 0x70 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankWeaponAvatar
// Size: 0x40 // Inherited bytes: 0x38
struct FTankWeaponAvatar : FVehicleItemAvatar {
	// Fields
	struct FName WeaponTag; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LevelSequenceBoundingBox2D
// Size: 0x10 // Inherited bytes: 0x00
struct FLevelSequenceBoundingBox2D {
	// Fields
	struct FVector2D Min; // Offset: 0x00 // Size: 0x08
	struct FVector2D Max; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyWeaponSkinExclusiveActionCfg
// Size: 0x20 // Inherited bytes: 0x00
struct FLobbyWeaponSkinExclusiveActionCfg {
	// Fields
	IntProperty ActionID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FSoftObjectPath ActionHandlePath; // Offset: 0x08 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponKillEffectCfg
// Size: 0x08 // Inherited bytes: 0x00
struct FWeaponKillEffectCfg {
	// Fields
	struct APlayerTombBox* DeadInventoryBoxTemplate; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WingmanAvatarData
// Size: 0x30 // Inherited bytes: 0x00
struct FWingmanAvatarData {
	// Fields
	struct FName SlotID; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* MatInstance; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.VoicePlayInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FVoicePlayInfo {
	// Fields
	StrProperty EventName; // Offset: 0x00 // Size: 0x10
	struct TWeakObjectPtr<struct AActor> OwnerActor; // Offset: 0x10 // Size: 0x08
	struct FVector Location; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DollyZoomParam
// Size: 0x0c // Inherited bytes: 0x00
struct FDollyZoomParam {
	// Fields
	float FOV; // Offset: 0x00 // Size: 0x04
	float Scale; // Offset: 0x04 // Size: 0x04
	float Offset; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GroupTeams
// Size: 0x10 // Inherited bytes: 0x00
struct FGroupTeams {
	// Fields
	struct TArray<IntProperty> Teams; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GroupPlayers
// Size: 0x10 // Inherited bytes: 0x00
struct FGroupPlayers {
	// Fields
	struct TArray<uint32_t> Players; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIControllerList
// Size: 0x10 // Inherited bytes: 0x00
struct FAIControllerList {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIPawnPoolItem
// Size: 0x10 // Inherited bytes: 0x00
struct FAIPawnPoolItem {
	// Fields
	struct ASTExtraBaseCharacter* PlayerPawn; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DSTickRateOptimize
// Size: 0x10 // Inherited bytes: 0x00
struct FDSTickRateOptimize {
	// Fields
	float TickFrequency; // Offset: 0x00 // Size: 0x04
	float NetConsiderFrequency; // Offset: 0x04 // Size: 0x04
	float NetUpdateFrequency; // Offset: 0x08 // Size: 0x04
	float MinNetUpdateFrequency; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemAttach
// Size: 0x18 // Inherited bytes: 0x00
struct FItemAttach {
	// Fields
	IntProperty BaseItemID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FAddItemInfo> AttachItemList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AddItemInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FAddItemInfo {
	// Fields
	IntProperty AddItemID; // Offset: 0x00 // Size: 0x04
	IntProperty AddItemNum; // Offset: 0x04 // Size: 0x04
	bool TotalNumLimit; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerStartObjets
// Size: 0x30 // Inherited bytes: 0x00
struct FPlayerStartObjets {
	// Fields
	struct UObject* Objects; // Offset: 0x00 // Size: 0x08
	struct FVector SpawnLoc; // Offset: 0x08 // Size: 0x0c
	struct FRotator SpawnRot; // Offset: 0x14 // Size: 0x0c
	struct FVector Scale; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BeamEffectDataParams
// Size: 0x38 // Inherited bytes: 0x00
struct FBeamEffectDataParams {
	// Fields
	bool bAttachRightSocket; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector SourceLocation; // Offset: 0x04 // Size: 0x0c
	struct FVector TargetLocation; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct AActor* SourceActor; // Offset: 0x20 // Size: 0x08
	struct AActor* TargetActor; // Offset: 0x28 // Size: 0x08
	float TargetZOffset; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BitMsg
// Size: 0x28 // Inherited bytes: 0x00
struct FBitMsg {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.BitMsgDelta
// Size: 0x28 // Inherited bytes: 0x00
struct FBitMsgDelta {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.HomeMapBaseRegion
// Size: 0x48 // Inherited bytes: 0x00
struct FHomeMapBaseRegion {
	// Fields
	struct FHomeBaseRegion BaseRegionLeft; // Offset: 0x00 // Size: 0x24
	struct FHomeBaseRegion BaseRegionRight; // Offset: 0x24 // Size: 0x24
};

// Object Name: ScriptStruct ShadowTrackerExtra.HomeBaseRegion
// Size: 0x24 // Inherited bytes: 0x00
struct FHomeBaseRegion {
	// Fields
	IntProperty RegionID; // Offset: 0x00 // Size: 0x04
	struct FVector2D P1; // Offset: 0x04 // Size: 0x08
	struct FVector2D P2; // Offset: 0x0c // Size: 0x08
	struct FVector2D P3; // Offset: 0x14 // Size: 0x08
	struct FVector2D P4; // Offset: 0x1c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AddWeaponAnimInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FAddWeaponAnimInfo {
	// Fields
	IntProperty BaseItemID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FLobbyCharacterWeaponAnimData> addAnimData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObjectTypeAvoidanceWeights
// Size: 0x68 // Inherited bytes: 0x00
struct FObjectTypeAvoidanceWeights {
	// Fields
	IntProperty DefaultAvoidanceResponseWeight; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty ActorFilterResponseMap; // Offset: 0x08 // Size: 0x50
	struct TArray<struct AActor*> IgnoreActorFilterList; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvoidanceBoxTraceSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FAvoidanceBoxTraceSettings {
	// Fields
	float TraceForwardOffset; // Offset: 0x00 // Size: 0x04
	float TraceLength; // Offset: 0x04 // Size: 0x04
	struct FVector TraceHalfSize; // Offset: 0x08 // Size: 0x0c
	struct FRotator TraceOrientation; // Offset: 0x14 // Size: 0x0c
	float TopSpeedTraceSizeMultiplier; // Offset: 0x20 // Size: 0x04
	float TopSpeed; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraMoveSettings
// Size: 0x01 // Inherited bytes: 0x00
struct FCameraMoveSettings {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamModuleBase
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimParamModuleBase {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UCharacterAnimShareParamsComp* OwnerComponent; // Offset: 0x08 // Size: 0x08
	struct ASTExtraBaseCharacter* OwnerCharacter; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimMovementParam
// Size: 0xe8 // Inherited bytes: 0x18
struct FAnimMovementParam : FAnimParamModuleBase {
	// Fields
	char pad_0x18[0xd0]; // Offset: 0x18 // Size: 0xd0
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimWeaponParam
// Size: 0x18 // Inherited bytes: 0x18
struct FAnimWeaponParam : FAnimParamModuleBase {
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimVehicleParam
// Size: 0x18 // Inherited bytes: 0x18
struct FAnimVehicleParam : FAnimParamModuleBase {
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParachuteParam
// Size: 0x20 // Inherited bytes: 0x18
struct FAnimParachuteParam : FAnimParamModuleBase {
	// Fields
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimComplexParamBase
// Size: 0x20 // Inherited bytes: 0x18
struct FAnimComplexParamBase : FAnimParamModuleBase {
	// Fields
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimRotatorParam
// Size: 0x28 // Inherited bytes: 0x20
struct FAnimRotatorParam : FAnimComplexParamBase {
	// Fields
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.OwnerControlRotationNormalized
// Size: 0x28 // Inherited bytes: 0x28
struct FOwnerControlRotationNormalized : FAnimRotatorParam {
};

// Object Name: ScriptStruct ShadowTrackerExtra.OwnerActorRotationNormalized
// Size: 0x28 // Inherited bytes: 0x28
struct FOwnerActorRotationNormalized : FAnimRotatorParam {
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimVectorParam
// Size: 0x28 // Inherited bytes: 0x20
struct FAnimVectorParam : FAnimComplexParamBase {
	// Fields
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.OwnerActorLocalVelocity
// Size: 0x28 // Inherited bytes: 0x28
struct FOwnerActorLocalVelocity : FAnimVectorParam {
};

// Object Name: ScriptStruct ShadowTrackerExtra.OwnerActorWorldVelocity
// Size: 0x28 // Inherited bytes: 0x28
struct FOwnerActorWorldVelocity : FAnimVectorParam {
};

// Object Name: ScriptStruct ShadowTrackerExtra.OwnerActorMoveInputDirector
// Size: 0x28 // Inherited bytes: 0x28
struct FOwnerActorMoveInputDirector : FAnimVectorParam {
};

// Object Name: ScriptStruct ShadowTrackerExtra.RandomPlayerSeqEntry
// Size: 0x10 // Inherited bytes: 0x00
struct FRandomPlayerSeqEntry {
	// Fields
	struct UAnimSequence* Sequence; // Offset: 0x00 // Size: 0x08
	bool bLoop; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float PlayRate; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClothCustomMaterialMapping
// Size: 0x10 // Inherited bytes: 0x00
struct FClothCustomMaterialMapping {
	// Fields
	IntProperty SourceValue; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UMaterialInterface* TargetMaterial; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClothCustomVectorMapping
// Size: 0x14 // Inherited bytes: 0x00
struct FClothCustomVectorMapping {
	// Fields
	IntProperty SourceValue; // Offset: 0x00 // Size: 0x04
	struct FLinearColor TargetValue; // Offset: 0x04 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClothCustomFloatMapping
// Size: 0x08 // Inherited bytes: 0x00
struct FClothCustomFloatMapping {
	// Fields
	IntProperty SourceValue; // Offset: 0x00 // Size: 0x04
	float TargetValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClothCustomEffectContext
// Size: 0x28 // Inherited bytes: 0x00
struct FClothCustomEffectContext {
	// Fields
	struct UCharacterAvatarComponent2* AvatarComp; // Offset: 0x00 // Size: 0x08
	struct UMeshComponent* ClothesMesh; // Offset: 0x08 // Size: 0x08
	struct FAvatarCustom CustomInfo; // Offset: 0x10 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProgressiveMatReplaceCfg
// Size: 0x18 // Inherited bytes: 0x00
struct FProgressiveMatReplaceCfg {
	// Fields
	enum class EAvatarSlotType Slot; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName MatSlot; // Offset: 0x08 // Size: 0x08
	struct UMaterialInterface* ReplaceMat; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProgressiveMatParamCfg
// Size: 0x10 // Inherited bytes: 0x00
struct FProgressiveMatParamCfg {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* ValueCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterEffectSwitchMatCfg
// Size: 0x30 // Inherited bytes: 0x00
struct FCharacterEffectSwitchMatCfg {
	// Fields
	struct UMaterialInterface* MatInterface; // Offset: 0x00 // Size: 0x28
	struct FName MatSlot; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterEffectSwitchEffectCfg
// Size: 0x38 // Inherited bytes: 0x00
struct FCharacterEffectSwitchEffectCfg {
	// Fields
	struct UParticleSystem* ParticleEffect; // Offset: 0x00 // Size: 0x28
	struct FName HangPoint; // Offset: 0x28 // Size: 0x08
	bool bClear; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float LifeTime; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FormationInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FFormationInfo {
	// Fields
	bool bIsFollower; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct ASTExtraBaseCharacter* Leader; // Offset: 0x08 // Size: 0x08
	struct FVector RelativeLocation; // Offset: 0x10 // Size: 0x0c
	struct FRotator RelativeRotation; // Offset: 0x1c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.FormationMoveInput
// Size: 0x10 // Inherited bytes: 0x00
struct FFormationMoveInput {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	struct FVector MoveDir; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParachuteMoveClientAdjustment
// Size: 0x2c // Inherited bytes: 0x00
struct FParachuteMoveClientAdjustment {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	bool bAckGoodMove; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FVector NewPosition; // Offset: 0x08 // Size: 0x0c
	struct FVector NewVelocity; // Offset: 0x14 // Size: 0x0c
	struct FRotator NewRotation; // Offset: 0x20 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParachuteMoveState
// Size: 0x44 // Inherited bytes: 0x00
struct FParachuteMoveState {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	float ThrottleInput; // Offset: 0x04 // Size: 0x04
	float SteerInput; // Offset: 0x08 // Size: 0x04
	struct FRotator CameraRotation; // Offset: 0x0c // Size: 0x0c
	struct FVector Position; // Offset: 0x18 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x24 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x30 // Size: 0x0c
	enum class EParachuteState State; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	float GlidingSpeed; // Offset: 0x40 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterReplayRecordData
// Size: 0x50 // Inherited bytes: 0x00
struct FCharacterReplayRecordData {
	// Fields
	bool bIsValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float DSMaxSpeedForReplay; // Offset: 0x04 // Size: 0x04
	float DSSpeedModifierForReplay; // Offset: 0x08 // Size: 0x04
	struct FCharacterJumpDebugInfo JumpDebugInfo; // Offset: 0x0c // Size: 0x0c
	struct FParachuteDebugInfo ParachuteDebugInfo; // Offset: 0x18 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.ViewPitchLimitReplayData
// Size: 0x20 // Inherited bytes: 0x00
struct FViewPitchLimitReplayData {
	// Fields
	float PitchMin; // Offset: 0x00 // Size: 0x04
	float PitchMax; // Offset: 0x04 // Size: 0x04
	float SetTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty CallerInfo; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerReplayExceptionData
// Size: 0x50 // Inherited bytes: 0x00
struct FPlayerReplayExceptionData {
	// Fields
	MapProperty Datas; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayExceptionData
// Size: 0x08 // Inherited bytes: 0x00
struct FReplayExceptionData {
	// Fields
	float LastBroadcastTime; // Offset: 0x00 // Size: 0x04
	IntProperty RequestCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterThrowData
// Size: 0xc0 // Inherited bytes: 0x00
struct FCharacterThrowData {
	// Fields
	struct FVector RelativeLocation_Stand; // Offset: 0x00 // Size: 0x0c
	struct FVector RelativeLocation_Crouch; // Offset: 0x0c // Size: 0x0c
	struct FVector RelativeLocation_Prone; // Offset: 0x18 // Size: 0x0c
	struct FVector RelativeLocation_Vehicle; // Offset: 0x24 // Size: 0x0c
	MapProperty RelativeLocation_ShapedVehicle; // Offset: 0x30 // Size: 0x50
	struct FThrowableAnim StandAnim; // Offset: 0x80 // Size: 0x10
	struct FThrowableAnim CrouchAnim; // Offset: 0x90 // Size: 0x10
	struct FThrowableAnim ProneAnim; // Offset: 0xa0 // Size: 0x10
	struct FThrowableAnim VehicleAnim; // Offset: 0xb0 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ThrowableAnim
// Size: 0x10 // Inherited bytes: 0x00
struct FThrowableAnim {
	// Fields
	struct UAnimMontage* Prepare; // Offset: 0x00 // Size: 0x08
	struct UAnimMontage* Release; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChatQuickTextInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FChatQuickTextInfo {
	// Fields
	IntProperty chatTextID; // Offset: 0x00 // Size: 0x04
	bool bIncludeAll; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickChatIDAndAudio
// Size: 0x10 // Inherited bytes: 0x00
struct FQuickChatIDAndAudio {
	// Fields
	IntProperty chatTextID; // Offset: 0x00 // Size: 0x04
	IntProperty RealTextID; // Offset: 0x04 // Size: 0x04
	IntProperty AlternateTextID; // Offset: 0x08 // Size: 0x04
	bool bIncludeAll; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickGroundFlag
// Size: 0x14 // Inherited bytes: 0x00
struct FQuickGroundFlag {
	// Fields
	IntProperty Index; // Offset: 0x00 // Size: 0x04
	IntProperty flagID; // Offset: 0x04 // Size: 0x04
	struct FVector hitPosition; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickChatFlag
// Size: 0x28 // Inherited bytes: 0x00
struct FQuickChatFlag {
	// Fields
	enum class ChatFlagType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<IntProperty> chatIDList; // Offset: 0x08 // Size: 0x10
	IntProperty AlternateChatID; // Offset: 0x18 // Size: 0x04
	IntProperty FlagIndex; // Offset: 0x1c // Size: 0x04
	IntProperty traceDist; // Offset: 0x20 // Size: 0x04
	float minDist; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickChatOption
// Size: 0x10 // Inherited bytes: 0x00
struct FQuickChatOption {
	// Fields
	IntProperty chatTextID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAkAudioEvent* audioEvent1; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.IngameInvitedNode
// Size: 0x20 // Inherited bytes: 0x00
struct FIngameInvitedNode {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	StrProperty gid; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.IngameFriendChat
// Size: 0x10 // Inherited bytes: 0x00
struct FIngameFriendChat {
	// Fields
	struct TArray<struct FIngameFriendChatMsg> ChatList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.IngameFriendChatMsg
// Size: 0x30 // Inherited bytes: 0x00
struct FIngameFriendChatMsg {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	StrProperty Content; // Offset: 0x10 // Size: 0x10
	bool IsSelf; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty MsgType; // Offset: 0x24 // Size: 0x04
	bool bReply; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.InGameFilterChatMsg
// Size: 0x18 // Inherited bytes: 0x00
struct FInGameFilterChatMsg {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	bool isMe; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReportChatMsgInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FReportChatMsgInfo {
	// Fields
	StrProperty msgContent; // Offset: 0x00 // Size: 0x10
	uint32_t ItemId; // Offset: 0x10 // Size: 0x04
	uint32_t MsgID; // Offset: 0x14 // Size: 0x04
	struct FVector hitPosition; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.OverlapCullingData
// Size: 0x08 // Inherited bytes: 0x00
struct FOverlapCullingData {
	// Fields
	float UpperCullPlane; // Offset: 0x00 // Size: 0x04
	float DownerCullPlane; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CircleBlockedPosition
// Size: 0x10 // Inherited bytes: 0x00
struct FCircleBlockedPosition {
	// Fields
	struct FVector Position; // Offset: 0x00 // Size: 0x0c
	float Radius; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CirCleCfg
// Size: 0xc0 // Inherited bytes: 0x00
struct FCirCleCfg {
	// Fields
	IntProperty CircleID; // Offset: 0x00 // Size: 0x04
	float delayTime; // Offset: 0x04 // Size: 0x04
	float RadiusWhenDestoryMap; // Offset: 0x08 // Size: 0x04
	float SafeZoneAppeartime; // Offset: 0x0c // Size: 0x04
	bool bIsCircleWarningUseFilter; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct TArray<float> BlueCirclePreWarning; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FCircleWarningConfig> BlueCirclePreWarningWithFilter; // Offset: 0x28 // Size: 0x10
	float LastTime; // Offset: 0x38 // Size: 0x04
	float Pain; // Offset: 0x3c // Size: 0x04
	bool bUseCustomBluePoint; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	struct FVector2D bluepoint; // Offset: 0x44 // Size: 0x08
	float blueradius; // Offset: 0x4c // Size: 0x04
	bool bUseCustomWhitePoint; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct AActor* CustomWhiteActor; // Offset: 0x58 // Size: 0x08
	bool bUseCustomWhiteStrategy; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
	struct TArray<struct FVector> Whitepoints; // Offset: 0x68 // Size: 0x10
	float whiteradius; // Offset: 0x78 // Size: 0x04
	float Alpha; // Offset: 0x7c // Size: 0x04
	bool bUseContainActor; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x3]; // Offset: 0x81 // Size: 0x03
	float DestinyChance; // Offset: 0x84 // Size: 0x04
	bool bActiveScreenSize; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float ScreenSizeFactor; // Offset: 0x8c // Size: 0x04
	float ExtraRadius; // Offset: 0x90 // Size: 0x04
	bool bEnableDamageMagnifier; // Offset: 0x94 // Size: 0x01
	char pad_0x95[0x3]; // Offset: 0x95 // Size: 0x03
	float DamageMagnifierRange; // Offset: 0x98 // Size: 0x04
	float DamageMagnifier; // Offset: 0x9c // Size: 0x04
	struct UCurveFloat* DamageMagnifierCurve; // Offset: 0xa0 // Size: 0x08
	struct TArray<struct FVector> AvoidPoints; // Offset: 0xa8 // Size: 0x10
	float EdgeDistance; // Offset: 0xb8 // Size: 0x04
	bool bUseAvoidPoints; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.CircleWarningConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FCircleWarningConfig {
	// Fields
	float WarningTime; // Offset: 0x00 // Size: 0x04
	enum class InCircleState WarningState; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayReportConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FReplayReportConfig {
	// Fields
	enum class EReplayReportRPCType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ReportInterval; // Offset: 0x04 // Size: 0x04
	bool bOnlyReportLatest; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.SlotDefaultMeshPack
// Size: 0x2a8 // Inherited bytes: 0x00
struct FSlotDefaultMeshPack {
	// Fields
	struct FMeshPackage MeshPack; // Offset: 0x00 // Size: 0x258
	MapProperty MeshPackMap; // Offset: 0x258 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleSysColor
// Size: 0x50 // Inherited bytes: 0x00
struct FParticleSysColor {
	// Fields
	MapProperty colorMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.HandleParticleSystem
// Size: 0x0c // Inherited bytes: 0x00
struct FHandleParticleSystem {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	IntProperty Type; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HandleMesh
// Size: 0x0c // Inherited bytes: 0x00
struct FHandleMesh {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	IntProperty Type; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ImageOriginal
// Size: 0x1c // Inherited bytes: 0x00
struct FImageOriginal {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FLinearColor OriginalColir; // Offset: 0x08 // Size: 0x10
	IntProperty Type; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponFireResetData
// Size: 0x0c // Inherited bytes: 0x00
struct FWeaponFireResetData {
	// Fields
	enum class EFireResetType ResetType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ResetTime; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x4]; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CrossHairCirclePerform
// Size: 0x28 // Inherited bytes: 0x00
struct FCrossHairCirclePerform {
	// Fields
	float RadiusDelta; // Offset: 0x00 // Size: 0x04
	float Thickness; // Offset: 0x04 // Size: 0x04
	float MaxThickness; // Offset: 0x08 // Size: 0x04
	float MinThickness; // Offset: 0x0c // Size: 0x04
	bool ZoomThicknessByRadius; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct UMaterial* CircleMaterial; // Offset: 0x18 // Size: 0x08
	struct UMaterialInstanceDynamic* pDynamicCircleMat; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CrossHairPerformDatas
// Size: 0x18 // Inherited bytes: 0x00
struct FCrossHairPerformDatas {
	// Fields
	struct TArray<struct FWeaponCrossHairPerformData> Datas; // Offset: 0x00 // Size: 0x10
	bool DrawCircle; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponCrossHairHitPerformData
// Size: 0x40 // Inherited bytes: 0x18
struct FWeaponCrossHairHitPerformData : FWeaponCrossHairPerformData {
	// Fields
	float DefaultShowHitTime; // Offset: 0x14 // Size: 0x04
	float DamageRangeMin; // Offset: 0x18 // Size: 0x04
	float DamageRangeMax; // Offset: 0x1c // Size: 0x04
	float DamageScaleSpreadMin; // Offset: 0x20 // Size: 0x04
	float DamageScaleSpreadMax; // Offset: 0x24 // Size: 0x04
	float CurDamageScaleMin; // Offset: 0x28 // Size: 0x04
	float CurDamageScaleMax; // Offset: 0x2c // Size: 0x04
	float CurDamageScaleDecreaseSpeed; // Offset: 0x30 // Size: 0x04
	float ShowHitCrosshairLeftTime; // Offset: 0x34 // Size: 0x04
	float CurDamageScale; // Offset: 0x38 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DrawCircleItemData
// Size: 0x28 // Inherited bytes: 0x00
struct FDrawCircleItemData {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.DrawBoxItemData
// Size: 0x30 // Inherited bytes: 0x00
struct FDrawBoxItemData {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.CrowdAgent
// Size: 0x318 // Inherited bytes: 0x00
struct FCrowdAgent {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
	struct AActor* actorPtr; // Offset: 0x18 // Size: 0x08
	char pad_0x20[0x2f8]; // Offset: 0x20 // Size: 0x2f8
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomCndWrappperIns
// Size: 0x10 // Inherited bytes: 0x00
struct FCustomCndWrappperIns {
	// Fields
	struct UCustomCndWrapper* Wrapper; // Offset: 0x00 // Size: 0x08
	IntProperty CndWrapperId; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomCndIns
// Size: 0x08 // Inherited bytes: 0x00
struct FCustomCndIns {
	// Fields
	struct UCustomCondition* Cnd; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChildPendingActiveObject
// Size: 0x78 // Inherited bytes: 0x00
struct FChildPendingActiveObject {
	// Fields
	struct UClass* ChildWidgetClass; // Offset: 0x00 // Size: 0x28
	struct FAnchorData anchor; // Offset: 0x28 // Size: 0x28
	bool bAutoSize; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	IntProperty ZOrder; // Offset: 0x54 // Size: 0x04
	StrProperty MountName; // Offset: 0x58 // Size: 0x10
	StrProperty MountOuterName; // Offset: 0x68 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChildPendingActiveWidget
// Size: 0x80 // Inherited bytes: 0x00
struct FChildPendingActiveWidget {
	// Fields
	struct UClass* ChildWidgetClass; // Offset: 0x00 // Size: 0x28
	StrProperty WidgetTreeNameToAssign; // Offset: 0x28 // Size: 0x10
	struct FAnchorData anchor; // Offset: 0x38 // Size: 0x28
	bool bAutoSize; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
	IntProperty ZOrder; // Offset: 0x64 // Size: 0x04
	struct TArray<StrProperty> ModeUIList; // Offset: 0x68 // Size: 0x10
	bool bDefaultCreate; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.DDMCData
// Size: 0x20 // Inherited bytes: 0x00
struct FDDMCData {
	// Fields
	struct TArray<struct FSoftObjectPath> Stuffs; // Offset: 0x00 // Size: 0x10
	IntProperty HPPercentageRangeMin; // Offset: 0x10 // Size: 0x04
	IntProperty HPPercentageRangeMax; // Offset: 0x14 // Size: 0x04
	bool bUseRPC; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageNumberTeamColorInfo
// Size: 0x2c // Inherited bytes: 0x00
struct FDamageNumberTeamColorInfo {
	// Fields
	char pad_0x0[0x2c]; // Offset: 0x00 // Size: 0x2c
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageNumberConfig
// Size: 0x80 // Inherited bytes: 0x00
struct FDamageNumberConfig {
	// Fields
	float UpScaleFactor; // Offset: 0x00 // Size: 0x04
	IntProperty ScaleRandom; // Offset: 0x04 // Size: 0x04
	float ScaleRandOffset; // Offset: 0x08 // Size: 0x04
	struct FLinearColor HeadDrawColor; // Offset: 0x0c // Size: 0x10
	struct FLinearColor HeadDrawOutlineColor; // Offset: 0x1c // Size: 0x10
	IntProperty HeadOutlineSize; // Offset: 0x2c // Size: 0x04
	IntProperty HeadSizeScale; // Offset: 0x30 // Size: 0x04
	struct FLinearColor BodyDrawColor; // Offset: 0x34 // Size: 0x10
	struct FLinearColor BodyDrawOutlineColor; // Offset: 0x44 // Size: 0x10
	IntProperty BodyOutlineSize; // Offset: 0x54 // Size: 0x04
	IntProperty BodySizeScale; // Offset: 0x58 // Size: 0x04
	struct FVector2D DefalutOringialPosition; // Offset: 0x5c // Size: 0x08
	struct FVector2D OringialPositionEnemy; // Offset: 0x64 // Size: 0x08
	IntProperty OringialPosRandom; // Offset: 0x6c // Size: 0x04
	struct UCurveVector* SpeedCurve; // Offset: 0x70 // Size: 0x08
	float TimeLife; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageNumber
// Size: 0xa0 // Inherited bytes: 0x00
struct FDamageNumber {
	// Fields
	char pad_0x0[0xa0]; // Offset: 0x00 // Size: 0xa0
};

// Object Name: ScriptStruct ShadowTrackerExtra.DanceTogetherPartcile
// Size: 0x60 // Inherited bytes: 0x00
struct FDanceTogetherPartcile {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct UParticleSystem* Partcile; // Offset: 0x30 // Size: 0x28
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterAnimStateAbilityInstanceProxy
// Size: 0x640 // Inherited bytes: 0x630
struct FCharacterAnimStateAbilityInstanceProxy : FAnimAbilityAnimInstanceProxy {
	// Fields
	struct UDataDriverAnimInstance* AnimInst; // Offset: 0x630 // Size: 0x08
	char pad_0x638[0x8]; // Offset: 0x638 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterAnimStateInstanceProxy
// Size: 0x5d0 // Inherited bytes: 0x5d0
struct FCharacterAnimStateInstanceProxy : FAnimInstanceProxy {
	// Fields
	struct UDataDriverAnimInstance* AnimInst; // Offset: 0x5c8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimGameplayTag
// Size: 0x08 // Inherited bytes: 0x00
struct FAnimGameplayTag {
	// Fields
	struct FGameplayTag Tag; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimContainer
// Size: 0x28 // Inherited bytes: 0x08
struct FAnimContainer : FAnimGameplayTag {
	// Fields
	struct UAnimInstanceContainer* Container; // Offset: 0x08 // Size: 0x08
	bool bFpp; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct UAnimInstance* AnimClass; // Offset: 0x18 // Size: 0x08
	struct UAnimInstance* MeshAnimClass; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetMontage
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimAssetMontage : FAnimGameplayTag {
	// Fields
	struct UAnimMontage* Montage; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetAimOffset
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimAssetAimOffset : FAnimGameplayTag {
	// Fields
	struct UAimOffsetBlendSpace* AimOffset; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetBlendSpace
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimAssetBlendSpace : FAnimGameplayTag {
	// Fields
	struct UBlendSpace* BlendSpace; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetBlendSpace1D
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimAssetBlendSpace1D : FAnimGameplayTag {
	// Fields
	struct UBlendSpace1D* BlendSpace1D; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetSequence
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimAssetSequence : FAnimGameplayTag {
	// Fields
	struct UAnimSequence* AnimSequence; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamCurveFloat
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimParamCurveFloat : FAnimGameplayTag {
	// Fields
	struct UCurveFloat* CurveFloat; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamRotator
// Size: 0x18 // Inherited bytes: 0x08
struct FAnimParamRotator : FAnimGameplayTag {
	// Fields
	struct FRotator Rotation; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamVector
// Size: 0x18 // Inherited bytes: 0x08
struct FAnimParamVector : FAnimGameplayTag {
	// Fields
	struct FVector Vector; // Offset: 0x08 // Size: 0x0c
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamFloat
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimParamFloat : FAnimGameplayTag {
	// Fields
	float fValue; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamInt
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimParamInt : FAnimGameplayTag {
	// Fields
	IntProperty iValue; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamEnum
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimParamEnum : FAnimGameplayTag {
	// Fields
	char eValue; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamBool
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimParamBool : FAnimGameplayTag {
	// Fields
	bool bValue; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.FireEventConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FFireEventConfig {
	// Fields
	IntProperty EventID; // Offset: 0x00 // Size: 0x04
	float RandomOccur; // Offset: 0x04 // Size: 0x04
	float RandomTimeRange; // Offset: 0x08 // Size: 0x04
	IntProperty EventParam; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PVEFireEventConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FPVEFireEventConfig {
	// Fields
	IntProperty EventID; // Offset: 0x00 // Size: 0x04
	float RandomOccur; // Offset: 0x04 // Size: 0x04
	float RandomTimeRange; // Offset: 0x08 // Size: 0x04
	IntProperty EventParam; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeadPlayShowMeshStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FDeadPlayShowMeshStruct {
	// Fields
	struct USkeletalMesh* DeadPlayShowSkMesh; // Offset: 0x00 // Size: 0x08
	struct UAnimSequence* DeadPlayAnim; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeadBoxParticleSystemAsset
// Size: 0x70 // Inherited bytes: 0x00
struct FDeadBoxParticleSystemAsset {
	// Fields
	struct UFXSystemAsset* Particle; // Offset: 0x00 // Size: 0x28
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FTransform ParticleTransform; // Offset: 0x30 // Size: 0x30
	bool bAutoDestroy; // Offset: 0x60 // Size: 0x01
	bool bAutoActivate; // Offset: 0x61 // Size: 0x01
	char pad_0x62[0x6]; // Offset: 0x62 // Size: 0x06
	struct FName SocketName; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TDMRoundScoreData
// Size: 0x08 // Inherited bytes: 0x00
struct FTDMRoundScoreData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty RoundScore; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BRDeathMatchPlayerStateHistoryData
// Size: 0x18 // Inherited bytes: 0x00
struct FBRDeathMatchPlayerStateHistoryData {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	IntProperty Kills; // Offset: 0x04 // Size: 0x04
	IntProperty Assists; // Offset: 0x08 // Size: 0x04
	IntProperty Deaths; // Offset: 0x0c // Size: 0x04
	IntProperty Score; // Offset: 0x10 // Size: 0x04
	IntProperty ContinuouKills; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchTeamScoreData
// Size: 0x30 // Inherited bytes: 0x00
struct FDeathMatchTeamScoreData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Result; // Offset: 0x08 // Size: 0x10
	IntProperty TeamRank; // Offset: 0x18 // Size: 0x04
	IntProperty TeamScore; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FDeathMatchPlayerStateData> PlayerStateDatas; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathMatchPlayerStartSelectConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FDeathMatchPlayerStartSelectConfig {
	// Fields
	bool bIsEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float NoEnemyRangeRadius; // Offset: 0x04 // Size: 0x04
	float ExistTeammateRanageRadius; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WWIEBankContainer
// Size: 0x10 // Inherited bytes: 0x00
struct FWWIEBankContainer {
	// Fields
	struct UAkAudioEvent* MaleBank; // Offset: 0x00 // Size: 0x08
	struct UAkAudioEvent* FemaleBank; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DecalBakingRTCache
// Size: 0x30 // Inherited bytes: 0x00
struct FDecalBakingRTCache {
	// Fields
	enum class EDIYDecalBakingType DecalBakingType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty PlayerUID; // Offset: 0x08 // Size: 0x10
	IntProperty WeaponAvatarID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct UTextureRenderTarget2D* TextureRenderTarget; // Offset: 0x20 // Size: 0x08
	float LastActiveTime; // Offset: 0x28 // Size: 0x04
	bool bMainRoleRT; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.DecoratorParams
// Size: 0x18 // Inherited bytes: 0x00
struct FDecoratorParams {
	// Fields
	bool bShouldHitGround; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty BPPath; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DecoyMovementModePair
// Size: 0x18 // Inherited bytes: 0x00
struct FDecoyMovementModePair {
	// Fields
	enum class EMovementMode OwnerMovementMode; // Offset: 0x00 // Size: 0x01
	enum class EMovementMode ParentMovementMode; // Offset: 0x01 // Size: 0x01
	enum class ECustomMovmentMode OwnerCustomMovementMode; // Offset: 0x02 // Size: 0x01
	enum class ECustomMovmentMode ParentCustomMovementMode; // Offset: 0x03 // Size: 0x01
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Reason; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClonedWeaponMeshData
// Size: 0x20 // Inherited bytes: 0x00
struct FClonedWeaponMeshData {
	// Fields
	struct USceneComponent* ClonedRootComponent; // Offset: 0x00 // Size: 0x08
	bool bCopyCompleted; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct UObject* CachedMasterGunMesh; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.RequestPlayDedicatedMontageData
// Size: 0x0c // Inherited bytes: 0x00
struct FRequestPlayDedicatedMontageData {
	// Fields
	struct TWeakObjectPtr<struct UAnimMontage> DedicatedMontage; // Offset: 0x00 // Size: 0x08
	float PlayRate; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeliveryCondition
// Size: 0x08 // Inherited bytes: 0x00
struct FDeliveryCondition {
	// Fields
	struct UDeliveryConditionCheck* CheckCnd; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DesertStormMiniMapData
// Size: 0x60 // Inherited bytes: 0x00
struct FDesertStormMiniMapData {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
	IntProperty NormalIconID; // Offset: 0x58 // Size: 0x04
	IntProperty GrayIconID; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepWaterInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FRepWaterInfo {
	// Fields
	struct FWaterInfo WaterInfo; // Offset: 0x00 // Size: 0x18
	enum class EDivingMStateType MStateStatus; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float WaterDepth; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WaterInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FWaterInfo {
	// Fields
	struct FName WaterTag; // Offset: 0x00 // Size: 0x08
	enum class EWaterType WaterType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FName CameraEffectTag; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropGroupContainer
// Size: 0x18 // Inherited bytes: 0x00
struct FDropGroupContainer {
	// Fields
	IntProperty GroupIndex; // Offset: 0x00 // Size: 0x04
	float GroupTime; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FItemCurveAnim> List; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicBatchActorMap
// Size: 0x50 // Inherited bytes: 0x00
struct FDynamicBatchActorMap {
	// Fields
	MapProperty Value; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.UIWidgetConfig
// Size: 0x88 // Inherited bytes: 0x00
struct FUIWidgetConfig {
	// Fields
	struct UClass* WidgetClassPath; // Offset: 0x00 // Size: 0x28
	IntProperty ZOrder; // Offset: 0x28 // Size: 0x04
	struct FMargin MarginData; // Offset: 0x2c // Size: 0x10
	struct FAnchors AnchorsData; // Offset: 0x3c // Size: 0x10
	struct FVector2D Position; // Offset: 0x4c // Size: 0x08
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty MountName; // Offset: 0x58 // Size: 0x10
	StrProperty MountOuterName; // Offset: 0x68 // Size: 0x10
	bool bMountUIRoot; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	struct UObject* UIWidgetClass; // Offset: 0x80 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LevelCopyInfo
// Size: 0xc0 // Inherited bytes: 0x00
struct FLevelCopyInfo {
	// Fields
	SetProperty PackageNames; // Offset: 0x00 // Size: 0x50
	struct ULevelStreaming* LevelStreamingClass; // Offset: 0x50 // Size: 0x08
	struct FVector2D LayoutGridSize; // Offset: 0x58 // Size: 0x08
	IntProperty LayoutRowNum; // Offset: 0x60 // Size: 0x04
	struct FVector StartLocOfLevel; // Offset: 0x64 // Size: 0x0c
	struct FVector StartLocOfStreamVolume; // Offset: 0x70 // Size: 0x0c
	struct FVector StartLocOfPlayerStart; // Offset: 0x7c // Size: 0x0c
	struct FVector StartLocOfMinMapPoint; // Offset: 0x88 // Size: 0x0c
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	StrProperty StreamVolumeName; // Offset: 0x98 // Size: 0x10
	StrProperty PlayerStartName; // Offset: 0xa8 // Size: 0x10
	struct AActor* MiniMapStandardPoint; // Offset: 0xb8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LuaFeatureInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FLuaFeatureInfo {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	StrProperty LuaFilePath; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicOptimizeComponentTick
// Size: 0x20 // Inherited bytes: 0x00
struct FDynamicOptimizeComponentTick {
	// Fields
	bool bIsActive; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Reason; // Offset: 0x08 // Size: 0x10
	bool bTickEnable; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicOptimizeComponentFull
// Size: 0x28 // Inherited bytes: 0x00
struct FDynamicOptimizeComponentFull {
	// Fields
	bool bAbsoluteLocation; // Offset: 0x00 // Size: 0x01
	bool bAbsoluteRotation; // Offset: 0x01 // Size: 0x01
	bool bAbsoluteScale; // Offset: 0x02 // Size: 0x01
	bool bSkipUpdateChildTransforms; // Offset: 0x03 // Size: 0x01
	bool bShouldUpdateOverLaps; // Offset: 0x04 // Size: 0x01
	bool bShouldUpdatePhysicsVolume; // Offset: 0x05 // Size: 0x01
	bool bNoSkeletonUpdate; // Offset: 0x06 // Size: 0x01
	enum class ECollisionEnabled CollisionType; // Offset: 0x07 // Size: 0x01
	bool bVisible; // Offset: 0x08 // Size: 0x01
	bool bHide; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	bool bIsActive; // Offset: 0x10 // Size: 0x01
	bool bReplicate; // Offset: 0x11 // Size: 0x01
	bool bTickEnable; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x5]; // Offset: 0x13 // Size: 0x05
	StrProperty Reason; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherFogCfg
// Size: 0x50 // Inherited bytes: 0x00
struct FWeatherFogCfg {
	// Fields
	struct TArray<enum class EWeatherStatusType> WeatherTypeList; // Offset: 0x00 // Size: 0x10
	struct AExponentialHeightFog* Fog; // Offset: 0x10 // Size: 0x08
	struct FWeatherDstFog DstWeatherFog; // Offset: 0x18 // Size: 0x14
	struct FWeatherSrcFog SrcWeatherFog; // Offset: 0x2c // Size: 0x0c
	float BlendTime; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<struct UDynamicWeatherController*> WeatherControllerList; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherSrcFog
// Size: 0x0c // Inherited bytes: 0x00
struct FWeatherSrcFog {
	// Fields
	float StartDistance; // Offset: 0x00 // Size: 0x04
	float CustomFogLow_DensityCoefficient; // Offset: 0x04 // Size: 0x04
	float CustomFogHigh_DensityCoefficient; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherDstFog
// Size: 0x14 // Inherited bytes: 0x00
struct FWeatherDstFog {
	// Fields
	bool UseStartDistance; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float StartDistance; // Offset: 0x04 // Size: 0x04
	bool UseDensityCoefficient; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float CustomFogLow_DensityCoefficient; // Offset: 0x0c // Size: 0x04
	float CustomFogHigh_DensityCoefficient; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerKeyDstWeather
// Size: 0x08 // Inherited bytes: 0x00
struct FPlayerKeyDstWeather {
	// Fields
	struct ASTExtraPlayerController* PC; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenAppearanceCfg
// Size: 0x28 // Inherited bytes: 0x00
struct FScreenAppearanceCfg {
	// Fields
	bool UseScreenAppearance; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty ScreenAppearanceName; // Offset: 0x08 // Size: 0x10
	enum class EScreenParticleEffectType ParticleType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float ScreenAppearanceConcentration; // Offset: 0x1c // Size: 0x04
	struct FName ShaderName; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherDebugView
// Size: 0x28 // Inherited bytes: 0x00
struct FWeatherDebugView {
	// Fields
	StrProperty CurrentWeather; // Offset: 0x00 // Size: 0x10
	StrProperty WeatherStage; // Offset: 0x10 // Size: 0x10
	float TotalElapsedTime; // Offset: 0x20 // Size: 0x04
	float WeatherElapsedTime; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeatherObject
// Size: 0x68 // Inherited bytes: 0x00
struct FWeatherObject {
	// Fields
	float MainLight_Density; // Offset: 0x00 // Size: 0x04
	struct FLinearColor MainLight_Color; // Offset: 0x04 // Size: 0x10
	float MainLight_Temperature; // Offset: 0x14 // Size: 0x04
	struct FRotator MainLight_Rotation; // Offset: 0x18 // Size: 0x0c
	float SkyLight_Density; // Offset: 0x24 // Size: 0x04
	struct FLinearColor SkyLight_Color; // Offset: 0x28 // Size: 0x10
	float CustomFogLow_DensityCoefficient; // Offset: 0x38 // Size: 0x04
	struct FLinearColor CustomFogLow_Color; // Offset: 0x3c // Size: 0x10
	float CustomFogHigh_DensityCoefficient; // Offset: 0x4c // Size: 0x04
	struct FLinearColor CustomFogHigh_Color; // Offset: 0x50 // Size: 0x10
	float HeightFallOff; // Offset: 0x60 // Size: 0x04
	float StartDistance; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ECSWeaponHitInfoComponent
// Size: 0xc0 // Inherited bytes: 0x00
struct FECSWeaponHitInfoComponent {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FBulletHitInfoUploadData ECSComDataHitInfo; // Offset: 0x08 // Size: 0xb8
};

// Object Name: ScriptStruct ShadowTrackerExtra.EliteProjectile_MeleeHurtEffect
// Size: 0x38 // Inherited bytes: 0x00
struct FEliteProjectile_MeleeHurtEffect {
	// Fields
	struct UParticleSystem* Template_Effect; // Offset: 0x00 // Size: 0x08
	struct FName SocketName; // Offset: 0x08 // Size: 0x08
	struct FName HurtRotationSocketName; // Offset: 0x10 // Size: 0x08
	float Scale; // Offset: 0x18 // Size: 0x04
	struct FVector LocationOffset; // Offset: 0x1c // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SegmentPoint
// Size: 0x18 // Inherited bytes: 0x00
struct FSegmentPoint {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector Normal; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ConditionAndRestriction
// Size: 0x01 // Inherited bytes: 0x00
struct FConditionAndRestriction {
	// Fields
	char bEnable : 1; // Offset: 0x00 // Size: 0x01
	char bSatisfied : 1; // Offset: 0x00 // Size: 0x01
	char bRestriction : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_3 : 5; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActorLocationMarker
// Size: 0x18 // Inherited bytes: 0x00
struct FActorLocationMarker {
	// Fields
	struct UActorPositionWidget* LocationMarkerClass; // Offset: 0x00 // Size: 0x08
	struct UTexture2D* MarkerTex; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageApplyFunction
// Size: 0x18 // Inherited bytes: 0x00
struct FDamageApplyFunction {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct UDamageType* DamageTypeClass; // Offset: 0x08 // Size: 0x08
	IntProperty ItemId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RadialDamageApplyFunction
// Size: 0x28 // Inherited bytes: 0x18
struct FRadialDamageApplyFunction : FDamageApplyFunction {
	// Fields
	struct UCurveFloat* DamageCurve; // Offset: 0x18 // Size: 0x08
	float BaseMomentum; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HorizontalVerticalRadialDamageFunction
// Size: 0x30 // Inherited bytes: 0x28
struct FHorizontalVerticalRadialDamageFunction : FRadialDamageApplyFunction {
	// Fields
	struct UCurveFloat* DistanceCurveVertical; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PointDamageApplyFunction
// Size: 0x18 // Inherited bytes: 0x18
struct FPointDamageApplyFunction : FDamageApplyFunction {
	// Fields
	float Damage; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuffApplierFunction
// Size: 0x38 // Inherited bytes: 0x00
struct FBuffApplierFunction {
	// Fields
	struct FName BuffName; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* DurationCurve; // Offset: 0x08 // Size: 0x08
	char bRemoveBuffFromExpiredTargets : 1; // Offset: 0x10 // Size: 0x01
	char bRefreshBuff : 1; // Offset: 0x10 // Size: 0x01
	char bClearBuffsOnDisabled : 1; // Offset: 0x10 // Size: 0x01
	char pad_0x10_3 : 5; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct TArray<struct AActor*> LastTimeTargets; // Offset: 0x18 // Size: 0x10
	struct AActor* Causer; // Offset: 0x28 // Size: 0x08
	struct AController* Instigator; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileVoiceCheckEvent
// Size: 0x08 // Inherited bytes: 0x00
struct FProjectileVoiceCheckEvent {
	// Fields
	float VoiceCheckRadius; // Offset: 0x00 // Size: 0x04
	float DisplayDuration; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExplosionCameraShakeFunction
// Size: 0x30 // Inherited bytes: 0x00
struct FExplosionCameraShakeFunction {
	// Fields
	struct UCameraShake* FrontShake; // Offset: 0x00 // Size: 0x08
	struct UCameraShake* BackShake; // Offset: 0x08 // Size: 0x08
	struct UCameraShake* RightShake; // Offset: 0x10 // Size: 0x08
	struct UCameraShake* LeftShake; // Offset: 0x18 // Size: 0x08
	struct UCurveFloat* ShakeIntensityCurve; // Offset: 0x20 // Size: 0x08
	enum class ECameraAnimPlaySpace CameraAnimPlaySpace; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileExplosionNoise
// Size: 0x38 // Inherited bytes: 0x00
struct FProjectileExplosionNoise {
	// Fields
	float NoiseRadius; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAkAudioEvent* AkEvent; // Offset: 0x08 // Size: 0x08
	StrProperty RTPC_ExplosionDistance_2; // Offset: 0x10 // Size: 0x10
	StrProperty RTPC_ExplosionDistance_3; // Offset: 0x20 // Size: 0x10
	float RTPCValue_3; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileRepMovement
// Size: 0x28 // Inherited bytes: 0x00
struct FProjectileRepMovement {
	// Fields
	struct FVector LinearVelocity; // Offset: 0x00 // Size: 0x0c
	struct FVector Location; // Offset: 0x0c // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x18 // Size: 0x0c
	char bReplicateRotation : 1; // Offset: 0x24 // Size: 0x01
	char pad_0x24_1 : 7; // Offset: 0x24 // Size: 0x01
	enum class EVectorQuantization LocationQuantizationLevel; // Offset: 0x25 // Size: 0x01
	enum class EVectorQuantization VelocityQuantizationLevel; // Offset: 0x26 // Size: 0x01
	enum class ERotatorQuantization RotationQuantizationLevel; // Offset: 0x27 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileEvent
// Size: 0x30 // Inherited bytes: 0x00
struct FProjectileEvent {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	char EventFlag; // Offset: 0x18 // Size: 0x01
	enum class EProjectileEventType EventType; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x6]; // Offset: 0x1a // Size: 0x06
	struct TArray<enum class EProjectileEventType> ReplicatedEvents; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileHealthSetting
// Size: 0x08 // Inherited bytes: 0x00
struct FProjectileHealthSetting {
	// Fields
	float Health; // Offset: 0x00 // Size: 0x04
	float DamageScale; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ThrowReplaceCharAnimData
// Size: 0x28 // Inherited bytes: 0x00
struct FThrowReplaceCharAnimData {
	// Fields
	enum class ECharacterAnimType CharacterAnimType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UAnimationAsset*> PoseAnimList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UAnimationAsset*> FPPPoseAnimList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.FlyControlPoint
// Size: 0x18 // Inherited bytes: 0x00
struct FFlyControlPoint {
	// Fields
	struct FVector Point1; // Offset: 0x00 // Size: 0x0c
	struct FVector Point2; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ControlPoints
// Size: 0x18 // Inherited bytes: 0x00
struct FControlPoints {
	// Fields
	struct FVector Point1; // Offset: 0x00 // Size: 0x0c
	struct FVector Point2; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChangeHeadTexReplaceItem
// Size: 0x50 // Inherited bytes: 0x00
struct FChangeHeadTexReplaceItem {
	// Fields
	MapProperty ParamDescMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChangeParamDescItem
// Size: 0x10 // Inherited bytes: 0x00
struct FChangeParamDescItem {
	// Fields
	IntProperty SrcSlotIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName SrcParamName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.EmoteCollisionData
// Size: 0x10 // Inherited bytes: 0x00
struct FEmoteCollisionData {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootVerifyConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FShootVerifyConfig {
	// Fields
	float ClientMuzzleHeightMax; // Offset: 0x00 // Size: 0x04
	float ClientPureMuzzleHeightMax; // Offset: 0x04 // Size: 0x04
	float VehicleWeaponClientMuzzleHeightMax; // Offset: 0x08 // Size: 0x04
	float VehicleWeaponClientPureMuzzleHeightMax; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.EnvStateInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FEnvStateInfo {
	// Fields
	bool IsBlending; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty EnvIndex; // Offset: 0x04 // Size: 0x04
	IntProperty StartId; // Offset: 0x08 // Size: 0x04
	IntProperty EndId; // Offset: 0x0c // Size: 0x04
	float Rate; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UEnvParamData
// Size: 0x60 // Inherited bytes: 0x00
struct FUEnvParamData {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	struct FSkyLightData SkyLight; // Offset: 0x10 // Size: 0x14
	struct FDirectionalLightData DirectionalLight; // Offset: 0x24 // Size: 0x14
	struct FHeightFogData HeightFog; // Offset: 0x38 // Size: 0x24
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HeightFogData
// Size: 0x24 // Inherited bytes: 0x00
struct FHeightFogData {
	// Fields
	float FogDensity; // Offset: 0x00 // Size: 0x04
	struct FLinearColor FogInscatteringColor; // Offset: 0x04 // Size: 0x10
	float FogHeightFalloff; // Offset: 0x14 // Size: 0x04
	float FogMaxOpacity; // Offset: 0x18 // Size: 0x04
	float StartDistance; // Offset: 0x1c // Size: 0x04
	float FogCutoffDistance; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DirectionalLightData
// Size: 0x14 // Inherited bytes: 0x00
struct FDirectionalLightData {
	// Fields
	float Intensity; // Offset: 0x00 // Size: 0x04
	struct FLinearColor LightColor; // Offset: 0x04 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkyLightData
// Size: 0x14 // Inherited bytes: 0x00
struct FSkyLightData {
	// Fields
	float Intensity; // Offset: 0x00 // Size: 0x04
	struct FLinearColor LightColor; // Offset: 0x04 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExFootIKInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FExFootIKInfo {
	// Fields
	struct FName IKBoneOrSocketName; // Offset: 0x00 // Size: 0x08
	struct FName FixedBoneOrSocketName; // Offset: 0x08 // Size: 0x08
	struct FVector IKBoneOrSocketOffset; // Offset: 0x10 // Size: 0x0c
	struct FVector IKEffectorOffset; // Offset: 0x1c // Size: 0x0c
	struct FRotator IKEffectorRotation; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x1c]; // Offset: 0x34 // Size: 0x1c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExplosionFinderWrapper
// Size: 0x08 // Inherited bytes: 0x00
struct FExplosionFinderWrapper {
	// Fields
	struct UExplosionFinder* ExplosionFinder; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActorFilterParams
// Size: 0x28 // Inherited bytes: 0x00
struct FActorFilterParams {
	// Fields
	struct AActor* Causer; // Offset: 0x00 // Size: 0x08
	struct AController* Instigator; // Offset: 0x08 // Size: 0x08
	struct FVector Origin; // Offset: 0x10 // Size: 0x0c
	struct FVector Direction; // Offset: 0x1c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.FinderResult
// Size: 0x90 // Inherited bytes: 0x00
struct FFinderResult {
	// Fields
	struct FHitResult Hit; // Offset: 0x00 // Size: 0x88
	char bMarkForRemoving : 1; // Offset: 0x88 // Size: 0x01
	char bMarkForKeeping : 1; // Offset: 0x88 // Size: 0x01
	char pad_0x88_2 : 6; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.FakePlayerCustomRow
// Size: 0x60 // Inherited bytes: 0x00
struct FFakePlayerCustomRow {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ControllerPath; // Offset: 0x08 // Size: 0x10
	StrProperty Name; // Offset: 0x18 // Size: 0x10
	IntProperty SpeciesType; // Offset: 0x28 // Size: 0x04
	IntProperty SpeciesGrade; // Offset: 0x2c // Size: 0x04
	IntProperty Gender; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty ItemStr; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> PlayerItems; // Offset: 0x48 // Size: 0x10
	IntProperty IsUseRandomName; // Offset: 0x58 // Size: 0x04
	IntProperty NameLocalizeId; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FakePlayerSpeciesParams
// Size: 0x18 // Inherited bytes: 0x00
struct FFakePlayerSpeciesParams {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	IntProperty TeamID; // Offset: 0x04 // Size: 0x04
	IntProperty SingleId; // Offset: 0x08 // Size: 0x04
	IntProperty ParamsID; // Offset: 0x0c // Size: 0x04
	IntProperty Campid; // Offset: 0x10 // Size: 0x04
	bool bAddToAIActingManager; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.FakePlayerParams
// Size: 0x14 // Inherited bytes: 0x00
struct FFakePlayerParams {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty ParamsID; // Offset: 0x04 // Size: 0x04
	IntProperty Campid; // Offset: 0x08 // Size: 0x04
	IntProperty AILevel; // Offset: 0x0c // Size: 0x04
	bool bUsePool; // Offset: 0x10 // Size: 0x01
	bool bAddToAIActingManager; // Offset: 0x11 // Size: 0x01
	bool bForceSpawn; // Offset: 0x12 // Size: 0x01
	bool bIsMLAI; // Offset: 0x13 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.FeatureSetItem
// Size: 0x58 // Inherited bytes: 0x00
struct FFeatureSetItem {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
};

// Object Name: ScriptStruct ShadowTrackerExtra.FeatureConfigItem
// Size: 0xa8 // Inherited bytes: 0x00
struct FFeatureConfigItem {
	// Fields
	StrProperty TargetClassName; // Offset: 0x00 // Size: 0x10
	IntProperty bUseFeatureSet; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<StrProperty> ExcludeComponentsList_DS; // Offset: 0x18 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_Autonomous; // Offset: 0x28 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_Team; // Offset: 0x38 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_NonTeam; // Offset: 0x48 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_DSAI; // Offset: 0x58 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_DSMLAI; // Offset: 0x68 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_ClientAI; // Offset: 0x78 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_Standalone; // Offset: 0x88 // Size: 0x10
	struct TArray<StrProperty> ExcludeComponentsList_StandaloneAI; // Offset: 0x98 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShowTextWidgetData
// Size: 0x28 // Inherited bytes: 0x00
struct FShowTextWidgetData {
	// Fields
	struct UUserWidget* FloatingTextWidget; // Offset: 0x00 // Size: 0x08
	float RecycleTime; // Offset: 0x08 // Size: 0x04
	struct FVector ShowWorldPos; // Offset: 0x0c // Size: 0x0c
	struct FVector RandomOffset; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingTextData
// Size: 0x14 // Inherited bytes: 0x00
struct FFloatingTextData {
	// Fields
	float BaseDamage; // Offset: 0x00 // Size: 0x04
	bool IsHeadShot; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FVector_NetQuantize ImpactPoint; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepFlyingMovement
// Size: 0x18 // Inherited bytes: 0x00
struct FRepFlyingMovement {
	// Fields
	float FlySpeed; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FVector_NetQuantize100> FlyingNavigationPath; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.FootprintInstanceInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FFootprintInstanceInfo {
	// Fields
	float CreationTime; // Offset: 0x00 // Size: 0x04
	IntProperty OwnerPlayerKey; // Offset: 0x04 // Size: 0x04
	StrProperty OwnerPlayerName; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
	struct FTransform FootprintTransform; // Offset: 0x20 // Size: 0x30
	bool bActive; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0xf]; // Offset: 0x51 // Size: 0x0f
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerStartGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerStartGroup {
	// Fields
	IntProperty GroupID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct ASTExtraPlayerStart*> PlayerStarts; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.FourInOneRoleLevelMap
// Size: 0x01 // Inherited bytes: 0x00
struct FFourInOneRoleLevelMap {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.FrameTimeSwitcher
// Size: 0x58 // Inherited bytes: 0x00
struct FFrameTimeSwitcher {
	// Fields
	float CurrentThresholdDeltaTime; // Offset: 0x00 // Size: 0x04
	float AcmuDeltaTime; // Offset: 0x04 // Size: 0x04
	MapProperty ThresholdDeltaTimeMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.GlobalFramingTickConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FGlobalFramingTickConfig {
	// Fields
	float AverageTickCount; // Offset: 0x00 // Size: 0x04
	float FrameIntervelScale; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FramingTickConfig
// Size: 0x38 // Inherited bytes: 0x00
struct FFramingTickConfig {
	// Fields
	bool Enable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float LOD0_ScreenSize; // Offset: 0x04 // Size: 0x04
	uint32_t LOD0_FrameIntervel; // Offset: 0x08 // Size: 0x04
	float LOD1_ScreenSize; // Offset: 0x0c // Size: 0x04
	uint32_t LOD1_FrameIntervel; // Offset: 0x10 // Size: 0x04
	float LOD2_ScreenSize; // Offset: 0x14 // Size: 0x04
	uint32_t LOD2_FrameIntervel; // Offset: 0x18 // Size: 0x04
	float LOD3_ScreenSize; // Offset: 0x1c // Size: 0x04
	uint32_t LOD3_FrameIntervel; // Offset: 0x20 // Size: 0x04
	float LOD4_ScreenSize; // Offset: 0x24 // Size: 0x04
	uint32_t LOD4_FrameIntervel; // Offset: 0x28 // Size: 0x04
	uint32_t ClassID; // Offset: 0x2c // Size: 0x04
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleLevelObjArray
// Size: 0x10 // Inherited bytes: 0x00
struct FSingleLevelObjArray {
	// Fields
	struct TArray<struct AActor*> LevelObjs; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.LevelRelifePointInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FLevelRelifePointInfo {
	// Fields
	struct FGameLevelDesc LevelDesc; // Offset: 0x00 // Size: 0x18
	struct TArray<struct FRelifePointInfo> RelifePointList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RelifePointInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FRelifePointInfo {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FTransform RelifeTrans; // Offset: 0x10 // Size: 0x30
	bool IsActivePoint; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0xf]; // Offset: 0x41 // Size: 0x0f
};

// Object Name: ScriptStruct ShadowTrackerExtra.AliveMonsterNum
// Size: 0x08 // Inherited bytes: 0x00
struct FAliveMonsterNum {
	// Fields
	IntProperty Num; // Offset: 0x00 // Size: 0x04
	enum class EMonsterSpawnSourceType SourceType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.LevelVehicleInfo
// Size: 0x04 // Inherited bytes: 0x00
struct FLevelVehicleInfo {
	// Fields
	IntProperty VehicleShapeType; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameModeParam
// Size: 0x58 // Inherited bytes: 0x00
struct FGameModeParam {
	// Fields
	float Radius0; // Offset: 0x00 // Size: 0x04
	float Radius1; // Offset: 0x04 // Size: 0x04
	float Radius3; // Offset: 0x08 // Size: 0x04
	bool bUsingPolygon; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float Radius2; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FVector2D> PolygonPoints; // Offset: 0x18 // Size: 0x10
	float BlueCircleRadius; // Offset: 0x28 // Size: 0x04
	struct FVector MapCenter; // Offset: 0x2c // Size: 0x0c
	float PlaneSpeed; // Offset: 0x38 // Size: 0x04
	float PlaneHeight; // Offset: 0x3c // Size: 0x04
	float CanOpenParachuteHeight; // Offset: 0x40 // Size: 0x04
	float ForceOpenParachuteHeight; // Offset: 0x44 // Size: 0x04
	float CloseParachuteHeight; // Offset: 0x48 // Size: 0x04
	bool bCrossCenter; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
	float CrossCenterRadius; // Offset: 0x50 // Size: 0x04
	float FixedJumpPointRate; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BornPlayerStartData
// Size: 0x18 // Inherited bytes: 0x00
struct FBornPlayerStartData {
	// Fields
	IntProperty BornPointID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct ASTExtraPlayerStart*> PlayerStarts; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlaneTypes
// Size: 0x18 // Inherited bytes: 0x00
struct FPlaneTypes {
	// Fields
	IntProperty SeasonIdx; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PlaneClassFullPath; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayFileHeader
// Size: 0x58 // Inherited bytes: 0x00
struct FReplayFileHeader {
	// Fields
	IntProperty ReplayFileFormatRevision; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty ReplayName; // Offset: 0x08 // Size: 0x10
	StrProperty ReplayVersion; // Offset: 0x18 // Size: 0x10
	IntProperty DateTime; // Offset: 0x28 // Size: 0x04
	float TotalTime; // Offset: 0x2c // Size: 0x04
	StrProperty RoomName; // Offset: 0x30 // Size: 0x10
	IntProperty GameModeID; // Offset: 0x40 // Size: 0x04
	IntProperty SubModeId; // Offset: 0x44 // Size: 0x04
	IntProperty MapID; // Offset: 0x48 // Size: 0x04
	IntProperty PlayerNum; // Offset: 0x4c // Size: 0x04
	IntProperty CustomGameModeId; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickSignInfoInReplay
// Size: 0x70 // Inherited bytes: 0x00
struct FQuickSignInfoInReplay {
	// Fields
	StrProperty MsgID; // Offset: 0x00 // Size: 0x10
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	struct FVector HitPos; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty ConfigKey; // Offset: 0x30 // Size: 0x10
	IntProperty audioID; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty ParamString; // Offset: 0x48 // Size: 0x10
	IntProperty BindActorGUID; // Offset: 0x58 // Size: 0x04
	IntProperty RelationID; // Offset: 0x5c // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x60 // Size: 0x04
	IntProperty MiniMapIconTypeId; // Offset: 0x64 // Size: 0x04
	IntProperty MsgType; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ChatInfoInReplay
// Size: 0x60 // Inherited bytes: 0x00
struct FChatInfoInReplay {
	// Fields
	StrProperty PlayerName; // Offset: 0x00 // Size: 0x10
	uint32_t playerIdentifier; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty msgContent; // Offset: 0x18 // Size: 0x10
	IntProperty MsgID; // Offset: 0x28 // Size: 0x04
	IntProperty audioID; // Offset: 0x2c // Size: 0x04
	IntProperty ItemId; // Offset: 0x30 // Size: 0x04
	IntProperty ItemCount; // Offset: 0x34 // Size: 0x04
	StrProperty PlayerKeyString; // Offset: 0x38 // Size: 0x10
	bool bHitValid; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
	struct FVector hitPosition; // Offset: 0x4c // Size: 0x0c
	IntProperty itemIDOnGround; // Offset: 0x58 // Size: 0x04
	bool bSTTMsg; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.FireInfoInReplay
// Size: 0x0c // Inherited bytes: 0x00
struct FFireInfoInReplay {
	// Fields
	uint32_t Shooter; // Offset: 0x00 // Size: 0x04
	IntProperty WeaponItemId; // Offset: 0x04 // Size: 0x04
	IntProperty RemainAmmo; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GrenadeInfoInReplay
// Size: 0x20 // Inherited bytes: 0x00
struct FGrenadeInfoInReplay {
	// Fields
	uint32_t UniqueId; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x10 // Size: 0x0c
	IntProperty ItemId; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropInfoInReplay
// Size: 0x20 // Inherited bytes: 0x00
struct FAirDropInfoInReplay {
	// Fields
	uint32_t UniqueId; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
	bool bLanded; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleInfoInReplay
// Size: 0x68 // Inherited bytes: 0x00
struct FVehicleInfoInReplay {
	// Fields
	uint32_t UniqueId; // Offset: 0x00 // Size: 0x04
	char Type; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FVector Location; // Offset: 0x08 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x14 // Size: 0x0c
	float Hp; // Offset: 0x20 // Size: 0x04
	char HealthStatus; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct FVector Velocity; // Offset: 0x28 // Size: 0x0c
	uint32_t Driver; // Offset: 0x34 // Size: 0x04
	struct TArray<uint32_t> SeatOccupiers; // Offset: 0x38 // Size: 0x10
	float UpVectorZ; // Offset: 0x48 // Size: 0x04
	float Fuel; // Offset: 0x4c // Size: 0x04
	bool bIsUsingHorn; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct TArray<float> WheelsCurrentHP; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerKillInfoInReplay
// Size: 0x14 // Inherited bytes: 0x00
struct FPlayerKillInfoInReplay {
	// Fields
	uint32_t CauserKey; // Offset: 0x00 // Size: 0x04
	uint32_t VictimKey; // Offset: 0x04 // Size: 0x04
	IntProperty DamageType; // Offset: 0x08 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x0c // Size: 0x04
	IntProperty ResultHealthStatus; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerBaseInfoInReplay
// Size: 0x180 // Inherited bytes: 0x00
struct FPlayerBaseInfoInReplay {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x1c // Size: 0x0c
	uint64 CurrentStates; // Offset: 0x28 // Size: 0x08
	float Health; // Offset: 0x30 // Size: 0x04
	char LiveState; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	IntProperty mainWeaponID; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<IntProperty> MainWeaponAttachmentItemID; // Offset: 0x40 // Size: 0x10
	struct TArray<IntProperty> MainWeaponAttachmentSlotID; // Offset: 0x50 // Size: 0x10
	IntProperty SecWeaponID; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> SecWeaponAttachmentItemID; // Offset: 0x68 // Size: 0x10
	struct TArray<IntProperty> SecWeaponAttachmentSlotID; // Offset: 0x78 // Size: 0x10
	IntProperty SubWeaponID; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct TArray<IntProperty> SubWeaponAttachmentItemID; // Offset: 0x90 // Size: 0x10
	struct TArray<IntProperty> SubWeaponAttachmentSlotID; // Offset: 0xa0 // Size: 0x10
	uint32_t CurWeaponIndex; // Offset: 0xb0 // Size: 0x04
	uint32_t CurWeaponState; // Offset: 0xb4 // Size: 0x04
	IntProperty CurWeaponFireMode; // Offset: 0xb8 // Size: 0x04
	float Energy; // Offset: 0xbc // Size: 0x04
	IntProperty CurSkillID; // Offset: 0xc0 // Size: 0x04
	IntProperty CurSkillPhase; // Offset: 0xc4 // Size: 0x04
	bool bLost; // Offset: 0xc8 // Size: 0x01
	bool bUseConsumables; // Offset: 0xc9 // Size: 0x01
	char pad_0xCA[0x2]; // Offset: 0xca // Size: 0x02
	IntProperty RemainRevivalCount; // Offset: 0xcc // Size: 0x04
	IntProperty MaxRevivalCount; // Offset: 0xd0 // Size: 0x04
	IntProperty RemainSelfRevivalCount; // Offset: 0xd4 // Size: 0x04
	struct TArray<IntProperty> AvatarItemID; // Offset: 0xd8 // Size: 0x10
	struct TArray<IntProperty> AvatarSlotID; // Offset: 0xe8 // Size: 0x10
	struct FVector AirplaneStartLoc; // Offset: 0xf8 // Size: 0x0c
	struct FVector AirplaneStopLoc; // Offset: 0x104 // Size: 0x0c
	struct FVector AirplaneCanJumpLoc; // Offset: 0x110 // Size: 0x0c
	struct FVector AirplaneForceJumpLoc; // Offset: 0x11c // Size: 0x0c
	struct FVector AirplaneLoc; // Offset: 0x128 // Size: 0x0c
	char pad_0x134[0x4]; // Offset: 0x134 // Size: 0x04
	StrProperty AirplaneName; // Offset: 0x138 // Size: 0x10
	bool IsRescueingOther; // Offset: 0x148 // Size: 0x01
	bool IsBeingRescued; // Offset: 0x149 // Size: 0x01
	char pad_0x14A[0x2]; // Offset: 0x14a // Size: 0x02
	struct FVector MapMark; // Offset: 0x14c // Size: 0x0c
	struct TArray<struct FVector> MapMultiMark; // Offset: 0x158 // Size: 0x10
	struct TArray<StrProperty> BackpackData; // Offset: 0x168 // Size: 0x10
	IntProperty CurWeaponID; // Offset: 0x178 // Size: 0x04
	char pad_0x17C[0x4]; // Offset: 0x17c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameBaseInfoInReplay
// Size: 0x1c // Inherited bytes: 0x00
struct FGameBaseInfoInReplay {
	// Fields
	struct FVector WhiteCircle; // Offset: 0x00 // Size: 0x0c
	struct FVector BlueprintCircle; // Offset: 0x0c // Size: 0x0c
	bool bCircleIsLessening; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerStaticInfoInReplay
// Size: 0x18 // Inherited bytes: 0x00
struct FPlayerStaticInfoInReplay {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint32_t PlayerKey; // Offset: 0x08 // Size: 0x04
	char Type; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty TeamID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MLAIInfoRecordData
// Size: 0x68 // Inherited bytes: 0x00
struct FMLAIInfoRecordData {
	// Fields
	float MLAITimeStamp; // Offset: 0x00 // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x04 // Size: 0x04
	uint64 UID; // Offset: 0x08 // Size: 0x08
	char Type; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	MapProperty AdditionalData; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleStrategyRecordFullInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FSingleStrategyRecordFullInfo {
	// Fields
	IntProperty StrategyTypeInReplay; // Offset: 0x00 // Size: 0x04
	struct FSingleStrategyRecordInReplay SingleStrategyRecordInReplay; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleStrategyRecordInReplay
// Size: 0x04 // Inherited bytes: 0x00
struct FSingleStrategyRecordInReplay {
	// Fields
	char CountValue; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x1]; // Offset: 0x01 // Size: 0x01
	uint16_t ReplayTimeStampInSeconds; // Offset: 0x02 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayStrategyConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FReplayStrategyConfig {
	// Fields
	IntProperty StrategyID; // Offset: 0x00 // Size: 0x04
	IntProperty MaxRecordCnt; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerEventInfoRecordData
// Size: 0x20 // Inherited bytes: 0x00
struct FPlayerEventInfoRecordData {
	// Fields
	StrProperty PlayerUID; // Offset: 0x00 // Size: 0x10
	uint64 RecordTimestamp; // Offset: 0x10 // Size: 0x08
	uint32_t EventType; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameReplayRecordData
// Size: 0x01 // Inherited bytes: 0x00
struct FGameReplayRecordData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorUpdateDataForReplay
// Size: 0x08 // Inherited bytes: 0x00
struct FDoorUpdateDataForReplay {
	// Fields
	uint32_t Guid; // Offset: 0x00 // Size: 0x04
	char DoorState; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorDataForReplay
// Size: 0x24 // Inherited bytes: 0x00
struct FDoorDataForReplay {
	// Fields
	struct FVector_NetQuantize Location; // Offset: 0x00 // Size: 0x0c
	float RotationYaw; // Offset: 0x0c // Size: 0x04
	uint16_t ClassID; // Offset: 0x10 // Size: 0x02
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
	uint32_t Guid; // Offset: 0x14 // Size: 0x04
	char DoorState; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0xb]; // Offset: 0x19 // Size: 0x0b
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorClassConfigForReplay
// Size: 0x18 // Inherited bytes: 0x00
struct FDoorClassConfigForReplay {
	// Fields
	StrProperty DoorClassPath; // Offset: 0x00 // Size: 0x10
	uint16_t ClassID; // Offset: 0x10 // Size: 0x02
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpListDataForReplay
// Size: 0x10 // Inherited bytes: 0x00
struct FPickUpListDataForReplay {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CVarConfigItem
// Size: 0x20 // Inherited bytes: 0x00
struct FCVarConfigItem {
	// Fields
	StrProperty Key; // Offset: 0x00 // Size: 0x10
	StrProperty Value; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RenderStyleAndPPMaping
// Size: 0x50 // Inherited bytes: 0x00
struct FRenderStyleAndPPMaping {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.LuaHideGoodsInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FLuaHideGoodsInfo {
	// Fields
	struct TArray<IntProperty> HideGoodIDs; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.LuaGoodsDiscountInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FLuaGoodsDiscountInfo {
	// Fields
	struct TArray<struct FGoodDiscountInfo> GoodsDiscountInfo; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GoodDiscountInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FGoodDiscountInfo {
	// Fields
	IntProperty DiscountItemID; // Offset: 0x00 // Size: 0x04
	IntProperty DiscountCount; // Offset: 0x04 // Size: 0x04
	float DiscountRate; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LuaBuyGoodsInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FLuaBuyGoodsInfo {
	// Fields
	struct TArray<struct FBuyGoodInfo> BuyGoodsInfo; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuyGoodInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FBuyGoodInfo {
	// Fields
	IntProperty BuyGoodID; // Offset: 0x00 // Size: 0x04
	IntProperty BuyGoodCount; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LuaBattleGoodsInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FLuaBattleGoodsInfo {
	// Fields
	struct TArray<struct FBattleGoodInfo> BattleGoodsInfo; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleGoodInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FBattleGoodInfo {
	// Fields
	IntProperty GoodID; // Offset: 0x00 // Size: 0x04
	IntProperty GoodBuyType; // Offset: 0x04 // Size: 0x04
	IntProperty ItemId; // Offset: 0x08 // Size: 0x04
	IntProperty BattleLimitCount; // Offset: 0x0c // Size: 0x04
	IntProperty StoreLimitCount; // Offset: 0x10 // Size: 0x04
	IntProperty PlayerLimitCount; // Offset: 0x14 // Size: 0x04
	IntProperty TimeLimit; // Offset: 0x18 // Size: 0x04
	IntProperty itemType; // Offset: 0x1c // Size: 0x04
	IntProperty ItemOrder; // Offset: 0x20 // Size: 0x04
	IntProperty ItemCountPerBuy; // Offset: 0x24 // Size: 0x04
	IntProperty Price; // Offset: 0x28 // Size: 0x04
	bool AddToStore; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.CurrencyInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FCurrencyInfo {
	// Fields
	enum class ECurrencyType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	StrProperty Icon; // Offset: 0x18 // Size: 0x10
	StrProperty Comment; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GoodsInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FGoodsInfo {
	// Fields
	IntProperty GoodID; // Offset: 0x00 // Size: 0x04
	IntProperty ItemId; // Offset: 0x04 // Size: 0x04
	IntProperty Count; // Offset: 0x08 // Size: 0x04
	IntProperty MaxCount; // Offset: 0x0c // Size: 0x04
	IntProperty itemType; // Offset: 0x10 // Size: 0x04
	IntProperty ItemOrder; // Offset: 0x14 // Size: 0x04
	IntProperty ItemCountPerBuy; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<IntProperty> CurrencyCost; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GeneralSMState
// Size: 0x28 // Inherited bytes: 0x00
struct FGeneralSMState {
	// Fields
	struct FName StateName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UGeneralSMTask*> BeginTasks; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UGeneralSMTask*> EndUntimedTasks; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GeneralSMTaskInstance
// Size: 0x20 // Inherited bytes: 0x00
struct FGeneralSMTaskInstance {
	// Fields
	struct UGeneralSMTask* Task; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x18]; // Offset: 0x08 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.GeneralSMComponentPicker
// Size: 0x10 // Inherited bytes: 0x00
struct FGeneralSMComponentPicker {
	// Fields
	struct UActorComponent* ComponentClass; // Offset: 0x00 // Size: 0x08
	struct FName ComponentTag; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.Chori
// Size: 0x18 // Inherited bytes: 0x00
struct FChori {
	// Fields
	IntProperty Ctrl; // Offset: 0x00 // Size: 0x04
	IntProperty Well; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FCaco> Array; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.Caco
// Size: 0x18 // Inherited bytes: 0x00
struct FCaco {
	// Fields
	IntProperty Ctrl; // Offset: 0x00 // Size: 0x04
	IntProperty Alt; // Offset: 0x04 // Size: 0x04
	struct TArray<float> Space; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.Bazi
// Size: 0x18 // Inherited bytes: 0x00
struct FBazi {
	// Fields
	IntProperty Adam; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<float> Array; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GPProfileMatch
// Size: 0x20 // Inherited bytes: 0x00
struct FGPProfileMatch {
	// Fields
	StrProperty Profile; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FGPProfileMatchItem> Match; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GPProfileMatchItem
// Size: 0x18 // Inherited bytes: 0x00
struct FGPProfileMatchItem {
	// Fields
	enum class EGPSourceType SourceType; // Offset: 0x00 // Size: 0x01
	enum class EGPCompareType CompareType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty MatchString; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GrenadePredictResult
// Size: 0x30 // Inherited bytes: 0x00
struct FGrenadePredictResult {
	// Fields
	struct TArray<struct FVector> SplinePoints; // Offset: 0x00 // Size: 0x10
	bool IsHitActor; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector HitActorLocation; // Offset: 0x14 // Size: 0x0c
	struct FRotator HitActorRotation; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NormalGridSpawnData
// Size: 0x70 // Inherited bytes: 0x10
struct FNormalGridSpawnData : FGridGeneratorSpawnData {
	// Fields
	struct FVector SpawnLoc; // Offset: 0x10 // Size: 0x0c
	struct FRotator SpawnRot; // Offset: 0x1c // Size: 0x0c
	StrProperty ClassPath; // Offset: 0x28 // Size: 0x10
	struct TWeakObjectPtr<struct AActor> AttachedActor; // Offset: 0x38 // Size: 0x08
	StrProperty Tag; // Offset: 0x40 // Size: 0x10
	StrProperty EventType; // Offset: 0x50 // Size: 0x10
	StrProperty EventID; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GuideInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FGuideInfo {
	// Fields
	struct UWidget* Widget; // Offset: 0x00 // Size: 0x08
	IntProperty guildUI; // Offset: 0x08 // Size: 0x04
	struct FVector2D Offset; // Offset: 0x0c // Size: 0x08
	struct FVector2D Size; // Offset: 0x14 // Size: 0x08
	IntProperty childData; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HardPointTeamScoreData
// Size: 0x08 // Inherited bytes: 0x00
struct FHardPointTeamScoreData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty Score; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HardPointSwitchConfigData
// Size: 0x10 // Inherited bytes: 0x00
struct FHardPointSwitchConfigData {
	// Fields
	struct TArray<struct FHardPointSwitchConfig> SwitchConfigList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.HardPointSwitchConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FHardPointSwitchConfig {
	// Fields
	float WaitTime; // Offset: 0x00 // Size: 0x04
	IntProperty HardPointID; // Offset: 0x04 // Size: 0x04
	float ActivateTime; // Offset: 0x08 // Size: 0x04
	IntProperty WinScore; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HardPointStopJoinConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FHardPointStopJoinConfig {
	// Fields
	bool bIsEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty HardPointIndex; // Offset: 0x04 // Size: 0x04
	float ActivatedTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActivatedHardPointDataRecord
// Size: 0x78 // Inherited bytes: 0x00
struct FActivatedHardPointDataRecord {
	// Fields
	struct AHardPointActor* HardPointActor; // Offset: 0x00 // Size: 0x08
	IntProperty WinTeamID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x6c]; // Offset: 0x0c // Size: 0x6c
};

// Object Name: ScriptStruct ShadowTrackerExtra.HardPoint_TeamScoreData
// Size: 0x18 // Inherited bytes: 0x00
struct FHardPoint_TeamScoreData {
	// Fields
	IntProperty TeamID; // Offset: 0x00 // Size: 0x04
	IntProperty OccupyScore; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FHardPoint_PlayerScoreData> PlayerScoreDataList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.HardPoint_PlayerScoreData
// Size: 0x08 // Inherited bytes: 0x00
struct FHardPoint_PlayerScoreData {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	IntProperty OccupyScore; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HUDRenderObject
// Size: 0x38 // Inherited bytes: 0x00
struct FHUDRenderObject {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	bool bHidden; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float RenderPriority; // Offset: 0x0c // Size: 0x04
	struct FVector2D Position; // Offset: 0x10 // Size: 0x08
	struct FVector2D Size; // Offset: 0x18 // Size: 0x08
	struct FLinearColor RenderColor; // Offset: 0x20 // Size: 0x10
	float RenderOpacity; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HUDRenderObject_Text
// Size: 0xa0 // Inherited bytes: 0x38
struct FHUDRenderObject_Text : FHUDRenderObject {
	// Fields
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
	struct FText Text; // Offset: 0x48 // Size: 0x18
	struct UFont* Font; // Offset: 0x60 // Size: 0x08
	float TextScale; // Offset: 0x68 // Size: 0x04
	bool bDrawShadow; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	struct FVector2D ShadowDirection; // Offset: 0x70 // Size: 0x08
	struct FLinearColor ShadowColor; // Offset: 0x78 // Size: 0x10
	bool bDrawOutline; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	struct FLinearColor OutlineColor; // Offset: 0x8c // Size: 0x10
	enum class ETextHorzPos HorzPosition; // Offset: 0x9c // Size: 0x01
	enum class ETextVertPos VertPosition; // Offset: 0x9d // Size: 0x01
	char pad_0x9E[0x2]; // Offset: 0x9e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.HUDRenderObject_Texture
// Size: 0x80 // Inherited bytes: 0x38
struct FHUDRenderObject_Texture : FHUDRenderObject {
	// Fields
	struct UTexture* Atlas; // Offset: 0x38 // Size: 0x08
	struct FTextureUVs UVs; // Offset: 0x40 // Size: 0x10
	bool bUseTeamColors; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct TArray<struct FLinearColor> TeamColorOverrides; // Offset: 0x58 // Size: 0x10
	bool bIsBorderElement; // Offset: 0x68 // Size: 0x01
	bool bIsSlateElement; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x2]; // Offset: 0x6a // Size: 0x02
	struct FVector2D RenderOffset; // Offset: 0x6c // Size: 0x08
	float Rotation; // Offset: 0x74 // Size: 0x04
	struct FVector2D RotPivot; // Offset: 0x78 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TextureUVs
// Size: 0x10 // Inherited bytes: 0x00
struct FTextureUVs {
	// Fields
	float U; // Offset: 0x00 // Size: 0x04
	float V; // Offset: 0x04 // Size: 0x04
	float UL; // Offset: 0x08 // Size: 0x04
	float VL; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HurtAppearanceResourceEntry
// Size: 0x40 // Inherited bytes: 0x00
struct FHurtAppearanceResourceEntry {
	// Fields
	struct FDynamicHurtAppearanceData Data; // Offset: 0x00 // Size: 0x38
	IntProperty RefCount; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicHurtAppearanceData
// Size: 0x38 // Inherited bytes: 0x00
struct FDynamicHurtAppearanceData {
	// Fields
	struct UParticleSystem* OverrideParticle; // Offset: 0x00 // Size: 0x08
	struct UAkAudioEvent* OverrideAudioEvent; // Offset: 0x08 // Size: 0x08
	struct UScreenAppearanceProvider* ScreenAppearanceProvider; // Offset: 0x10 // Size: 0x08
	bool bShouldPlayHitNotify; // Offset: 0x18 // Size: 0x01
	bool bShouldPlayHitAnim; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x6]; // Offset: 0x1a // Size: 0x06
	struct TArray<struct FWeaponCrossHairIconData> IconList; // Offset: 0x20 // Size: 0x10
	struct UAkAudioEvent* HitFeedBackAudioEvent; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CreativeIdeaDecalParam
// Size: 0xa0 // Inherited bytes: 0x00
struct FCreativeIdeaDecalParam {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FTransform DecalTrans; // Offset: 0x10 // Size: 0x30
	struct UMaterialInterface* DecalMaterial; // Offset: 0x40 // Size: 0x08
	struct UMaterialInterface* DecalLod1Material; // Offset: 0x48 // Size: 0x08
	struct FVector2D DecalUVOffset; // Offset: 0x50 // Size: 0x08
	struct FVector2D DecalUVScale; // Offset: 0x58 // Size: 0x08
	struct TArray<struct FPlane> DecalClipPlaneData; // Offset: 0x60 // Size: 0x10
	IntProperty TranslucentSortPriority; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct FName DecalTag; // Offset: 0x78 // Size: 0x08
	struct FColor DecalColor; // Offset: 0x80 // Size: 0x04
	bool bOnlyStatic; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	struct FName CollisionProfileName; // Offset: 0x88 // Size: 0x08
	float DecalClipArea; // Offset: 0x90 // Size: 0x04
	float DecalClipBias; // Offset: 0x94 // Size: 0x04
	char pad_0x98[0x8]; // Offset: 0x98 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CreativeDecalInfo
// Size: 0xc0 // Inherited bytes: 0x00
struct FCreativeDecalInfo {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x1c]; // Offset: 0x04 // Size: 0x1c
	struct FTransform Transform; // Offset: 0x20 // Size: 0x30
	char pad_0x50[0x10]; // Offset: 0x50 // Size: 0x10
	IntProperty TranslucentSortPriority; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct FName SocketName; // Offset: 0x68 // Size: 0x08
	enum class EIdeaDecalParentType ParentType; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	struct TWeakObjectPtr<struct UPrimitiveComponent> Parent; // Offset: 0x74 // Size: 0x08
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct FName DecalTag; // Offset: 0x80 // Size: 0x08
	struct FName CollisionProfileName; // Offset: 0x88 // Size: 0x08
	struct FColor Color; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct TArray<struct FPlane> DecalClipPlaneData; // Offset: 0x98 // Size: 0x10
	uint32_t LayerID; // Offset: 0xa8 // Size: 0x04
	float DecalClipArea; // Offset: 0xac // Size: 0x04
	float DecalClipBias; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0xc]; // Offset: 0xb4 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.DecalBlock
// Size: 0x10 // Inherited bytes: 0x00
struct FDecalBlock {
	// Fields
	struct UMaterialInterface* DecalMaterial; // Offset: 0x00 // Size: 0x08
	struct UTexture* DecalTexure; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.IdeaDecalParam
// Size: 0x90 // Inherited bytes: 0x00
struct FIdeaDecalParam {
	// Fields
	struct FTransform DecalTrans; // Offset: 0x00 // Size: 0x30
	struct UMaterialInstanceDynamic* DecalMaterialInstance; // Offset: 0x30 // Size: 0x08
	struct FVector2D DecalUVOffset; // Offset: 0x38 // Size: 0x08
	struct FVector2D DecalUVScale; // Offset: 0x40 // Size: 0x08
	char TraceAxis; // Offset: 0x48 // Size: 0x01
	bool bNegativeDir; // Offset: 0x49 // Size: 0x01
	enum class EDecalTraceTowardsType DecalTraceTowardsType; // Offset: 0x4a // Size: 0x01
	char pad_0x4B[0x5]; // Offset: 0x4b // Size: 0x05
	struct FName CollisionProfileName; // Offset: 0x50 // Size: 0x08
	IntProperty TranslucentSortPriority; // Offset: 0x58 // Size: 0x04
	bool bCreateCollision; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
	IntProperty ClipPlaneNum; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct FName DecalTag; // Offset: 0x68 // Size: 0x08
	bool bOnlyStatic; // Offset: 0x70 // Size: 0x01
	bool bIgnoreCauserActor; // Offset: 0x71 // Size: 0x01
	char pad_0x72[0x2]; // Offset: 0x72 // Size: 0x02
	struct TWeakObjectPtr<struct AActor> CauserActor; // Offset: 0x74 // Size: 0x08
	bool bAllowDecalAsParticle; // Offset: 0x7c // Size: 0x01
	char pad_0x7D[0x3]; // Offset: 0x7d // Size: 0x03
	struct FVector DecalLocationOffset; // Offset: 0x80 // Size: 0x0c
	enum class EIdeaDecalTangentReferenceAxis TangentReferenceAxis; // Offset: 0x8c // Size: 0x01
	bool bUniqueComponent; // Offset: 0x8d // Size: 0x01
	char pad_0x8E[0x2]; // Offset: 0x8e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimSourceEntryGroup
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimSourceEntryGroup {
	// Fields
	MapProperty Entries; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimSourceEntry
// Size: 0x58 // Inherited bytes: 0x00
struct FAnimSourceEntry {
	// Fields
	struct FGameplayTag ContextType; // Offset: 0x00 // Size: 0x08
	MapProperty LoadedAssets; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamPrerequisiteAsset
// Size: 0x58 // Inherited bytes: 0x00
struct FAnimParamPrerequisiteAsset {
	// Fields
	struct FGameplayTag ParamTag; // Offset: 0x00 // Size: 0x08
	struct FAnimParamValuePrerequisites ValuePrerequisites; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamValuePrerequisites
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimParamValuePrerequisites {
	// Fields
	MapProperty ValuePrerequisite; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParamPrerequisites
// Size: 0x10 // Inherited bytes: 0x00
struct FAnimParamPrerequisites {
	// Fields
	struct TArray<struct FGameplayTag> AssetTags; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimContainerConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimContainerConfig {
	// Fields
	StrProperty Tag; // Offset: 0x00 // Size: 0x10
	StrProperty AnimInstance; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.UnifiedAnimConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FUnifiedAnimConfig {
	// Fields
	struct FGameplayTag ContextType; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FUnifiedAnimEntry> Entries; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.UnifiedAnimEntry
// Size: 0x80 // Inherited bytes: 0x00
struct FUnifiedAnimEntry {
	// Fields
	struct FGameplayTag AnimTag; // Offset: 0x00 // Size: 0x08
	MapProperty ContextFieldValues; // Offset: 0x08 // Size: 0x50
	struct UAnimationAsset* Asset; // Offset: 0x58 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.GameplayTagValueMappingRow
// Size: 0x18 // Inherited bytes: 0x08
struct FGameplayTagValueMappingRow : FTableRowBase {
	// Fields
	struct FGameplayTag Tag; // Offset: 0x08 // Size: 0x08
	IntProperty Value; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimSkillData
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimSkillData {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	IntProperty SubStateID; // Offset: 0x04 // Size: 0x04
	float ResetDuration; // Offset: 0x08 // Size: 0x04
	float IdleDuration; // Offset: 0x0c // Size: 0x04
	struct FAnimSkillDataBase SkillDatas; // Offset: 0x10 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimSkillDataBase
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimSkillDataBase {
	// Fields
	struct TArray<struct FPawnAnimDataEx> TPPBaseDatas; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FPawnAnimDataEx> FPPBaseDatas; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PawnAnimData
// Size: 0x80 // Inherited bytes: 0x00
struct FPawnAnimData {
	// Fields
	struct FGameplayTag KeyType; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* StandAsset; // Offset: 0x08 // Size: 0x28
	struct UAnimationAsset* CrouchAsset; // Offset: 0x30 // Size: 0x28
	struct UAnimationAsset* ProneAsset; // Offset: 0x58 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.PawnAnimDataEx
// Size: 0x88 // Inherited bytes: 0x80
struct FPawnAnimDataEx : FPawnAnimData {
	// Fields
	enum class ECharacterAnimType AnimType; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetContextBase
// Size: 0x08 // Inherited bytes: 0x00
struct FAnimAssetContextBase {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimCustomizableChunkContext
// Size: 0x10 // Inherited bytes: 0x08
struct FAnimCustomizableChunkContext : FAnimAssetContextBase {
	// Fields
	IntProperty Layer; // Offset: 0x08 // Size: 0x04
	IntProperty SubLayer; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomCharAnimData
// Size: 0x58 // Inherited bytes: 0x00
struct FCustomCharAnimData {
	// Fields
	struct FAnimBulkInstanceData AnimInstanceDatas; // Offset: 0x00 // Size: 0x50
	struct UCustomizableAnimData* AnimAssetDatas; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimBulkInstanceData
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimBulkInstanceData {
	// Fields
	MapProperty AnimSlotToBP; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.IGameAnimDataTableRow
// Size: 0x30 // Inherited bytes: 0x00
struct FIGameAnimDataTableRow {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	IntProperty Type; // Offset: 0x04 // Size: 0x04
	struct UDataAsset* RawDataAsset; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAnimData
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleAnimData {
	// Fields
	struct FName SeatCompTag; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FAnimBulkData> AnimData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimBulkData
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimBulkData {
	// Fields
	struct FGameplayTag KeyType; // Offset: 0x00 // Size: 0x08
	struct UAnimationAsset* Asset; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetChunkContext
// Size: 0x20 // Inherited bytes: 0x08
struct FAnimAssetChunkContext : FAnimAssetContextBase {
	// Fields
	bool bIsFPP; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty SubLayer; // Offset: 0x0c // Size: 0x04
	int64_t BaseBit; // Offset: 0x10 // Size: 0x08
	IntProperty Layer; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterVehicleAnimAssetChunkContext
// Size: 0x28 // Inherited bytes: 0x20
struct FCharacterVehicleAnimAssetChunkContext : FAnimAssetChunkContext {
	// Fields
	IntProperty VehicleShapeType; // Offset: 0x1c // Size: 0x04
	IntProperty SeatIndex; // Offset: 0x20 // Size: 0x04
	IntProperty AvatarID; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimCharacterData
// Size: 0x20 // Inherited bytes: 0x00
struct FAnimCharacterData {
	// Fields
	struct TArray<struct FPawnAnimData> BaseDatas; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FAnimMotionData> AdditiveDatas; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimMotionData
// Size: 0x18 // Inherited bytes: 0x00
struct FAnimMotionData {
	// Fields
	enum class EnumAnimMotionType MotionType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FAnimBulkData> Datas; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimAssetDependencies
// Size: 0x90 // Inherited bytes: 0x00
struct FAnimAssetDependencies {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct AActor* Owner; // Offset: 0x08 // Size: 0x28
	char pad_0x30[0x60]; // Offset: 0x30 // Size: 0x60
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimDataChunkAsyncReq
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimDataChunkAsyncReq {
	// Fields
	MapProperty AysncReqs; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimDataChunk
// Size: 0x50 // Inherited bytes: 0x00
struct FAnimDataChunk {
	// Fields
	MapProperty Datas; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterViewPointConfig
// Size: 0x48 // Inherited bytes: 0x00
struct FCharacterViewPointConfig {
	// Fields
	enum class ECharacterAnimBlendPoseType PoseStatus; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FAnimCharacterCondition> Conditions; // Offset: 0x08 // Size: 0x10
	struct TArray<enum class EPawnState> MustNotHaveStates; // Offset: 0x18 // Size: 0x10
	struct FFloatRange EnterStatusPitchRange; // Offset: 0x28 // Size: 0x10
	struct FFloatRange LeaveStatusPitchRange; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimCharacterCondition
// Size: 0x01 // Inherited bytes: 0x00
struct FAnimCharacterCondition {
	// Fields
	enum class EPawnState status; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.ImpactSpawnLimitConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FImpactSpawnLimitConfig {
	// Fields
	IntProperty MaxSpawnCount; // Offset: 0x00 // Size: 0x04
	IntProperty FrameWindow; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WidgetHPCheckParam
// Size: 0x38 // Inherited bytes: 0x00
struct FWidgetHPCheckParam {
	// Fields
	struct TArray<enum class EObjectTypeQuery> CheckObjectTypes; // Offset: 0x00 // Size: 0x10
	struct TArray<struct AActor*> ValidActorClass; // Offset: 0x10 // Size: 0x10
	float SphereCheckRadius; // Offset: 0x20 // Size: 0x04
	float CheckDistance; // Offset: 0x24 // Size: 0x04
	float CheckAngle; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FName SocketName; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.Interp3ControlPoint
// Size: 0x34 // Inherited bytes: 0x1c
struct FInterp3ControlPoint : FInterpControlPoint {
	// Fields
	struct FRotator RotationControlPoint; // Offset: 0x1c // Size: 0x0c
	float RotationRadius; // Offset: 0x28 // Size: 0x04
	enum class EInterp3Method Interp3Method; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x7]; // Offset: 0x2d // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.IntervalFrequencyStatistics
// Size: 0x80 // Inherited bytes: 0x00
struct FIntervalFrequencyStatistics {
	// Fields
	float IntervalSize; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x7c]; // Offset: 0x04 // Size: 0x7c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemsBoxDataTableRow
// Size: 0x70 // Inherited bytes: 0x08
struct FItemsBoxDataTableRow : FTableRowBase {
	// Fields
	StrProperty Category; // Offset: 0x08 // Size: 0x10
	IntProperty Weight; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	MapProperty ItemsData; // Offset: 0x20 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemsBoxConfigDataAssetConfigGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FItemsBoxConfigDataAssetConfigGroup {
	// Fields
	StrProperty GroupName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FItemsBoxConfigDataAssetConfigItem> ConfigItems; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemsBoxConfigDataAssetConfigItem
// Size: 0x18 // Inherited bytes: 0x00
struct FItemsBoxConfigDataAssetConfigItem {
	// Fields
	float ProbabilityPercent; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty CategoryFilter; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.JumpLimitor
// Size: 0x01 // Inherited bytes: 0x00
struct FJumpLimitor {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.FindRecordMovementData
// Size: 0x0c // Inherited bytes: 0x00
struct FFindRecordMovementData {
	// Fields
	IntProperty Type; // Offset: 0x00 // Size: 0x04
	float TimeStamp; // Offset: 0x04 // Size: 0x04
	uint32_t MoveSequence; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DistanceContinueHitCheck
// Size: 0x2c // Inherited bytes: 0x00
struct FDistanceContinueHitCheck {
	// Fields
	float CheckDisSquared; // Offset: 0x00 // Size: 0x04
	IntProperty MaxContinueTimes; // Offset: 0x04 // Size: 0x04
	float ShootIntervalBuff; // Offset: 0x08 // Size: 0x04
	float MaxCheatTimes; // Offset: 0x0c // Size: 0x04
	char pad_0x10[0x1c]; // Offset: 0x10 // Size: 0x1c
};

// Object Name: ScriptStruct ShadowTrackerExtra.PingSectionData
// Size: 0x50 // Inherited bytes: 0x00
struct FPingSectionData {
	// Fields
	MapProperty Data; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.PingVerifyData
// Size: 0x50 // Inherited bytes: 0x00
struct FPingVerifyData {
	// Fields
	MapProperty Data; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootVerifyParameter
// Size: 0x18 // Inherited bytes: 0x00
struct FShootVerifyParameter {
	// Fields
	struct ASTExtraShootWeapon* Weapon; // Offset: 0x00 // Size: 0x08
	struct ASTExtraCharacter* Shooter; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.IndefiniteVerifyCfg
// Size: 0x08 // Inherited bytes: 0x00
struct FIndefiniteVerifyCfg {
	// Fields
	IntProperty CountThreshold; // Offset: 0x00 // Size: 0x04
	float PercentThreshold; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ServerCheckBox
// Size: 0x4c // Inherited bytes: 0x00
struct FServerCheckBox {
	// Fields
	enum class ESTEPoseState PoseID; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector BodyBoundBoxExtent; // Offset: 0x04 // Size: 0x0c
	struct FVector HeadBoundBoxExtent; // Offset: 0x10 // Size: 0x0c
	struct FVector Offset; // Offset: 0x1c // Size: 0x0c
	struct FVector PitchOffset; // Offset: 0x28 // Size: 0x0c
	float ReferenceHSlope; // Offset: 0x34 // Size: 0x04
	float ReferenceVSlope; // Offset: 0x38 // Size: 0x04
	float HMinScale; // Offset: 0x3c // Size: 0x04
	float VMinScale; // Offset: 0x40 // Size: 0x04
	float HMaxScale; // Offset: 0x44 // Size: 0x04
	float VMaxScale; // Offset: 0x48 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HeadShoulderOffsetTable
// Size: 0xfc // Inherited bytes: 0x00
struct FHeadShoulderOffsetTable {
	// Fields
	struct FHeadShoulderOffsetConfig Stand; // Offset: 0x00 // Size: 0x24
	struct FHeadShoulderOffsetConfig StandPeekL; // Offset: 0x24 // Size: 0x24
	struct FHeadShoulderOffsetConfig StandPeekR; // Offset: 0x48 // Size: 0x24
	struct FHeadShoulderOffsetConfig Crouch; // Offset: 0x6c // Size: 0x24
	struct FHeadShoulderOffsetConfig CrouchPeekL; // Offset: 0x90 // Size: 0x24
	struct FHeadShoulderOffsetConfig CrouchPeekR; // Offset: 0xb4 // Size: 0x24
	struct FHeadShoulderOffsetConfig Prone; // Offset: 0xd8 // Size: 0x24
};

// Object Name: ScriptStruct ShadowTrackerExtra.HeadShoulderOffsetConfig
// Size: 0x24 // Inherited bytes: 0x00
struct FHeadShoulderOffsetConfig {
	// Fields
	struct FVector HeadRatio; // Offset: 0x00 // Size: 0x0c
	struct FVector LShouderRatio; // Offset: 0x0c // Size: 0x0c
	struct FVector RShouderRatio; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletHitDataCache
// Size: 0xc0 // Inherited bytes: 0x00
struct FBulletHitDataCache {
	// Fields
	struct FBulletHitInfoUploadData UploadData; // Offset: 0x00 // Size: 0xb8
	float LimitMaxDamageRate; // Offset: 0xb8 // Size: 0x04
	bool IsValid; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.HeightLOD
// Size: 0x08 // Inherited bytes: 0x00
struct FHeightLOD {
	// Fields
	float Height; // Offset: 0x00 // Size: 0x04
	IntProperty LOD; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DigLandScapeDataArray
// Size: 0xc8 // Inherited bytes: 0xb0
struct FDigLandScapeDataArray : FFastArraySerializer {
	// Fields
	struct ADigLandScapeActor* Owner; // Offset: 0xb0 // Size: 0x08
	struct TArray<struct FDigLandScapeData> Items; // Offset: 0xb8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DigLandScapeData
// Size: 0x28 // Inherited bytes: 0x0c
struct FDigLandScapeData : FFastArraySerializerItem {
	// Fields
	uint32_t HoleID; // Offset: 0x0c // Size: 0x04
	enum class DestructionShape Shape; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector HoleLocation; // Offset: 0x14 // Size: 0x0c
	IntProperty HoleRadius; // Offset: 0x20 // Size: 0x04
	IntProperty HoleDepth; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LandScapeRuntimeChangeMask
// Size: 0x38 // Inherited bytes: 0x00
struct FLandScapeRuntimeChangeMask {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
	struct TArray<char> DigMaskSerializedData; // Offset: 0x20 // Size: 0x10
	IntProperty MaskTextureSizeX; // Offset: 0x30 // Size: 0x04
	IntProperty MaskTextureSizeY; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LandScapeDamageTypeToHoleInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FLandScapeDamageTypeToHoleInfo {
	// Fields
	float HoleRadiusScale; // Offset: 0x00 // Size: 0x04
	float HoleDepthScale; // Offset: 0x04 // Size: 0x04
	IntProperty TlogID; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LensFlareElement
// Size: 0x28 // Inherited bytes: 0x00
struct FLensFlareElement {
	// Fields
	float Position; // Offset: 0x00 // Size: 0x04
	float Size; // Offset: 0x04 // Size: 0x04
	struct FVector2D UV0; // Offset: 0x08 // Size: 0x08
	struct FVector2D UVSize; // Offset: 0x10 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.LastLiftRepMovement
// Size: 0x24 // Inherited bytes: 0x00
struct FLastLiftRepMovement {
	// Fields
	struct FVector LocationOffset; // Offset: 0x00 // Size: 0x0c
	struct FVector RelativeScale3D; // Offset: 0x0c // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.LiftRepMovement
// Size: 0x24 // Inherited bytes: 0x00
struct FLiftRepMovement {
	// Fields
	struct FVector_NetQuantize100 LocationOffset; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize100 RelativeScale3D; // Offset: 0x0c // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.OtherAircraftPersonConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FOtherAircraftPersonConfig {
	// Fields
	struct USkeletalMesh* SkeletalMesh; // Offset: 0x00 // Size: 0x08
	struct UObject* AnimInstance; // Offset: 0x08 // Size: 0x08
	struct UAnimSequence* IdleAnim; // Offset: 0x10 // Size: 0x08
	struct UAnimMontage* OpenAnim; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.FootLockTransitionSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FFootLockTransitionSettings {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName FootLeftBoneName; // Offset: 0x08 // Size: 0x08
	struct FName FootRightBoneName; // Offset: 0x10 // Size: 0x08
	float FootDeltaThreshold; // Offset: 0x18 // Size: 0x04
	bool bIgnoreVerticalAxis; // Offset: 0x1c // Size: 0x01
	enum class EAnimBoneSampleStrategy SampleStrategy; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
	float SampleTime; // Offset: 0x20 // Size: 0x04
	IntProperty SampleCount; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyFeetState
// Size: 0x120 // Inherited bytes: 0x00
struct FLobbyFeetState {
	// Fields
	struct FLobbyFootState Left; // Offset: 0x00 // Size: 0x90
	struct FLobbyFootState Right; // Offset: 0x90 // Size: 0x90
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyFootState
// Size: 0x90 // Inherited bytes: 0x00
struct FLobbyFootState {
	// Fields
	struct FVector TargetLocation; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FQuat TargetRotation; // Offset: 0x10 // Size: 0x10
	float LockAmount; // Offset: 0x20 // Size: 0x04
	struct FVector LockLocation; // Offset: 0x24 // Size: 0x0c
	struct FQuat LockRotation; // Offset: 0x30 // Size: 0x10
	struct FVector LockComponentRelativeLocation; // Offset: 0x40 // Size: 0x0c
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct FQuat LockComponentRelativeRotation; // Offset: 0x50 // Size: 0x10
	struct FVector IkLocation; // Offset: 0x60 // Size: 0x0c
	struct FRotator IkRotation; // Offset: 0x6c // Size: 0x0c
	struct FVector PoleVectorLocation; // Offset: 0x78 // Size: 0x0c
	char pad_0x84[0xc]; // Offset: 0x84 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyFootLockSettings
// Size: 0x78 // Inherited bytes: 0x00
struct FLobbyFootLockSettings {
	// Fields
	struct FName ThighLeftBoneName; // Offset: 0x00 // Size: 0x08
	struct FName CalfLeftBoneName; // Offset: 0x08 // Size: 0x08
	struct FName FootLeftBoneName; // Offset: 0x10 // Size: 0x08
	struct FName ThighRightBoneName; // Offset: 0x18 // Size: 0x08
	struct FName CalfRightBoneName; // Offset: 0x20 // Size: 0x08
	struct FName FootRightBoneName; // Offset: 0x28 // Size: 0x08
	struct FName FootLeftIkBoneName; // Offset: 0x30 // Size: 0x08
	struct FName FootRightIkBoneName; // Offset: 0x38 // Size: 0x08
	float FootLockCurveAdditive; // Offset: 0x40 // Size: 0x04
	float DisableDecayLambda; // Offset: 0x44 // Size: 0x04
	float PoleVectorScale; // Offset: 0x48 // Size: 0x04
	float PoleVectorDecayLambda; // Offset: 0x4c // Size: 0x04
	struct FLobbyFootLockCurveNames CurveNames; // Offset: 0x50 // Size: 0x18
	bool bBlockRotationWhileLocked; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x3]; // Offset: 0x69 // Size: 0x03
	float RotateBlockLockAmountThreshold; // Offset: 0x6c // Size: 0x04
	IntProperty RotateBlockOnFrames; // Offset: 0x70 // Size: 0x04
	IntProperty RotateBlockOffFrames; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyFootLockCurveNames
// Size: 0x18 // Inherited bytes: 0x00
struct FLobbyFootLockCurveNames {
	// Fields
	struct FName FootLeftLockCurveName; // Offset: 0x00 // Size: 0x08
	struct FName FootRightLockCurveName; // Offset: 0x08 // Size: 0x08
	struct FName FootLockEnableCurveName; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyGodEffectData
// Size: 0x30 // Inherited bytes: 0x00
struct FLobbyGodEffectData {
	// Fields
	IntProperty TextId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UParticleSystem* ParticleEffect; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.XTaskSaveData
// Size: 0x14 // Inherited bytes: 0x00
struct FXTaskSaveData {
	// Fields
	IntProperty TaskID; // Offset: 0x00 // Size: 0x04
	IntProperty CurProgress; // Offset: 0x04 // Size: 0x04
	IntProperty AimProgress; // Offset: 0x08 // Size: 0x04
	IntProperty FobidShow; // Offset: 0x0c // Size: 0x04
	enum class FXTaskStateType State; // Offset: 0x10 // Size: 0x01
	enum class EXTaskType TaskType; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x2]; // Offset: 0x12 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.XTaskExtraSyncData
// Size: 0x20 // Inherited bytes: 0x00
struct FXTaskExtraSyncData {
	// Fields
	IntProperty TaskID; // Offset: 0x00 // Size: 0x04
	enum class EXTaskType TaskType; // Offset: 0x04 // Size: 0x01
	bool TimerEnabled; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float CurAccumTime; // Offset: 0x08 // Size: 0x04
	float TotalTime; // Offset: 0x0c // Size: 0x04
	float ServerStartTime; // Offset: 0x10 // Size: 0x04
	struct FVector Position; // Offset: 0x14 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.XTaskSyncData
// Size: 0x10 // Inherited bytes: 0x00
struct FXTaskSyncData {
	// Fields
	IntProperty TaskID; // Offset: 0x00 // Size: 0x04
	IntProperty CurProgress; // Offset: 0x04 // Size: 0x04
	IntProperty AimProgress; // Offset: 0x08 // Size: 0x04
	enum class FXTaskStateType State; // Offset: 0x0c // Size: 0x01
	enum class EXTaskType TaskType; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.MarkUpdateData
// Size: 0x28 // Inherited bytes: 0x00
struct FMarkUpdateData {
	// Fields
	float CustomFloat; // Offset: 0x00 // Size: 0x04
	IntProperty CustomState; // Offset: 0x04 // Size: 0x04
	StrProperty CustomString; // Offset: 0x08 // Size: 0x10
	struct FVector Location; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CDMarkData
// Size: 0x90 // Inherited bytes: 0x00
struct FCDMarkData {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct ShadowTrackerExtra.MarkDispatchAction
// Size: 0x88 // Inherited bytes: 0x00
struct FMarkDispatchAction {
	// Fields
	enum class EMarkDispatchActionType ActionType; // Offset: 0x00 // Size: 0x01
	enum class EMarkDispatchRange RangeType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct FMarkSyncData SyncData; // Offset: 0x08 // Size: 0x58
	float DispatchDelayTime; // Offset: 0x60 // Size: 0x04
	float RangeRad; // Offset: 0x64 // Size: 0x04
	struct TWeakObjectPtr<struct ASTExtraPlayerState> WeakPlayerState; // Offset: 0x68 // Size: 0x08
	float DispatchTime; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	DelegateProperty OnMapAlertSet; // Offset: 0x78 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MarkFastSyncData
// Size: 0x18 // Inherited bytes: 0x00
struct FMarkFastSyncData {
	// Fields
	uint32_t TypeId; // Offset: 0x00 // Size: 0x04
	bool bIsHide; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x1]; // Offset: 0x05 // Size: 0x01
	int16_t LocX; // Offset: 0x06 // Size: 0x02
	int16_t LocY; // Offset: 0x08 // Size: 0x02
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	IntProperty CustomState; // Offset: 0x0c // Size: 0x04
	struct TWeakObjectPtr<struct AActor> TargetActor; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MapMarksUpdateInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FMapMarksUpdateInfo {
	// Fields
	struct TArray<struct FVector2D> MultiMarkLocs; // Offset: 0x00 // Size: 0x10
	bool IsShow; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float Opacity; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MapImageMarkData
// Size: 0x38 // Inherited bytes: 0x00
struct FMapImageMarkData {
	// Fields
	IntProperty ConfigID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UImage* Image; // Offset: 0x08 // Size: 0x08
	struct FVector CurrentWorldPos; // Offset: 0x10 // Size: 0x0c
	struct FVector2D OriginalSize; // Offset: 0x1c // Size: 0x08
	bool bIsBigPOI; // Offset: 0x24 // Size: 0x01
	bool bCanHighlight; // Offset: 0x25 // Size: 0x01
	char pad_0x26[0x2]; // Offset: 0x26 // Size: 0x02
	struct TWeakObjectPtr<struct AActor> BindingActor; // Offset: 0x28 // Size: 0x08
	float MaxShowDistance; // Offset: 0x30 // Size: 0x04
	bool bIsBindActor; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.MapMarkTempInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FMapMarkTempInfo {
	// Fields
	IntProperty InstanceID; // Offset: 0x00 // Size: 0x04
	struct FVector WorldPos; // Offset: 0x04 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> BindingActor; // Offset: 0x10 // Size: 0x08
	bool bIsBindActor; // Offset: 0x18 // Size: 0x01
	bool bCanHighlight; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float CustomSize; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UpdateStateChangePorperty
// Size: 0x48 // Inherited bytes: 0x00
struct FUpdateStateChangePorperty {
	// Fields
	struct UWidget* UpdateWidget; // Offset: 0x00 // Size: 0x08
	struct TArray<StrProperty> IconPathArray; // Offset: 0x08 // Size: 0x10
	struct TArray<enum class ESlateVisibility> IconVisibleArray; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FLinearColor> IconColorArray; // Offset: 0x28 // Size: 0x10
	struct TArray<bool> CanHighlightArray; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MarkActorInstInfo
// Size: 0x04 // Inherited bytes: 0x00
struct FMarkActorInstInfo {
	// Fields
	IntProperty UIBPInstID; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleMarkInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FSingleMarkInfo {
	// Fields
	enum class EUIMarkState MarkState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UMapUIMarkBaseWidget* pWidget; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MatScalarBlendEffect
// Size: 0xb0 // Inherited bytes: 0x00
struct FMatScalarBlendEffect {
	// Fields
	struct FRuntimeFloatCurve BlendCurve; // Offset: 0x00 // Size: 0x78
	struct FName ParamName; // Offset: 0x78 // Size: 0x08
	struct UMeshComponent* BlendMeshComponent; // Offset: 0x80 // Size: 0x08
	struct UMaterialInterface* OriMatInstance; // Offset: 0x88 // Size: 0x08
	struct UMaterialInstanceDynamic* MatDynamic; // Offset: 0x90 // Size: 0x08
	char pad_0x98[0x18]; // Offset: 0x98 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.MobAIStateData
// Size: 0xb8 // Inherited bytes: 0x00
struct FMobAIStateData {
	// Fields
	struct TWeakObjectPtr<struct APawn> LastAttackerPawn; // Offset: 0x00 // Size: 0x08
	float TickCheckPeriod; // Offset: 0x08 // Size: 0x04
	float CurrentDeltaTime; // Offset: 0x0c // Size: 0x04
	float CurrentAttackDist; // Offset: 0x10 // Size: 0x04
	bool IsInWater; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct TWeakObjectPtr<struct ASTExtraPlayerCharacter> FightbackTarget; // Offset: 0x18 // Size: 0x08
	float CheckFightbackTargetElapsedTime; // Offset: 0x20 // Size: 0x04
	float FightbackTraceTime; // Offset: 0x24 // Size: 0x04
	float RememberEnemyElapsedTime; // Offset: 0x28 // Size: 0x04
	float FightbackEnemyInSightElapsedTime; // Offset: 0x2c // Size: 0x04
	float CanNotSeeTargetElapsedTime; // Offset: 0x30 // Size: 0x04
	float LastAttackedMeElapsedTime; // Offset: 0x34 // Size: 0x04
	float LockTargetElapsedTime; // Offset: 0x38 // Size: 0x04
	float LockPreciseHatredElapsedTime; // Offset: 0x3c // Size: 0x04
	float LockHeardPosElapsedTime; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<struct FHatredInfo> HatredInfo; // Offset: 0x48 // Size: 0x10
	struct TWeakObjectPtr<struct APawn> LastBestHatredPawn; // Offset: 0x58 // Size: 0x08
	struct TWeakObjectPtr<struct APawn> ForceToAttackPawn; // Offset: 0x60 // Size: 0x08
	IntProperty RandomSkillTriggerTimes; // Offset: 0x68 // Size: 0x04
	IntProperty RandomSkillCastedTimes; // Offset: 0x6c // Size: 0x04
	bool IsTargetInWater; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	float fMoveBlockTime; // Offset: 0x74 // Size: 0x04
	struct FVector MoveBlock_LastValidLocation; // Offset: 0x78 // Size: 0x0c
	float MoveBlock_LastValidTime; // Offset: 0x84 // Size: 0x04
	IntProperty iCastSkillBlockedTimes; // Offset: 0x88 // Size: 0x04
	struct FVector JumpStartLocation; // Offset: 0x8c // Size: 0x0c
	struct FVector JumpDstLocation; // Offset: 0x98 // Size: 0x0c
	struct FVector JumpWallLocation; // Offset: 0xa4 // Size: 0x0c
	float JumpWallHeight; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HatredInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FHatredInfo {
	// Fields
	struct TWeakObjectPtr<struct APawn> Target; // Offset: 0x00 // Size: 0x08
	float hatredValue; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MobMoveBatchData
// Size: 0x2428 // Inherited bytes: 0x00
struct FMobMoveBatchData {
	// Fields
	struct FMobMoveData MoveBatchDataArray[0x100]; // Offset: 0x00 // Size: 0x2400
	char pad_0x2400[0x28]; // Offset: 0x2400 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.MobMoveData
// Size: 0x24 // Inherited bytes: 0x00
struct FMobMoveData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector LinearVelocity; // Offset: 0x0c // Size: 0x0c
	float Yaw; // Offset: 0x18 // Size: 0x04
	float ReplicatedServerLastTransformUpdateTimeStamp; // Offset: 0x1c // Size: 0x04
	char MobState; // Offset: 0x20 // Size: 0x01
	bool bRepDeltaError; // Offset: 0x21 // Size: 0x01
	uint8_t PacketID; // Offset: 0x22 // Size: 0x01
	char pad_0x23[0x1]; // Offset: 0x23 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.NoiseInfo
// Size: 0x24 // Inherited bytes: 0x00
struct FNoiseInfo {
	// Fields
	enum class ESTAINoiseType NoiseType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct TWeakObjectPtr<struct AActor> Instigator; // Offset: 0x04 // Size: 0x08
	struct FVector NoiseLocation; // Offset: 0x0c // Size: 0x0c
	float LoudnessAtStart; // Offset: 0x18 // Size: 0x04
	float LoudnessHeard; // Offset: 0x1c // Size: 0x04
	float HeardTime; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NoiseCheckResult
// Size: 0x08 // Inherited bytes: 0x00
struct FNoiseCheckResult {
	// Fields
	bool Result; // Offset: 0x00 // Size: 0x01
	enum class ESTAINoiseType NoiseType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float LoudnessHeard; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ModAdapterSpawnInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FModAdapterSpawnInfo {
	// Fields
	struct AActor* RelatedActor; // Offset: 0x00 // Size: 0x08
	struct FName LightType; // Offset: 0x08 // Size: 0x08
	struct FTransform SpawnTransform; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAnimAsset
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterAnimAsset {
	// Fields
	struct FUAEBlackboardKeySelector AnimVarName; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UAnimationAsset*> AnimSoftPtr; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAnimAssetDeclare
// Size: 0x08 // Inherited bytes: 0x00
struct FMonsterAnimAssetDeclare {
	// Fields
	struct FUAEBlackboardKeySelector AnimVarName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAnimVarName
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterAnimVarName {
	// Fields
	struct FName AnimVarName; // Offset: 0x00 // Size: 0x08
	StrProperty Description; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAnimGroup
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterAnimGroup {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	IntProperty RandomAnimID; // Offset: 0x04 // Size: 0x04
	struct TArray<struct TWeakObjectPtr<struct ASTExtraSimpleCharacter>> MonsterGroup; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterHurtAnimCache
// Size: 0x10 // Inherited bytes: 0x00
struct FMonsterHurtAnimCache {
	// Fields
	struct UBlendSpace* CachedHurtAnim; // Offset: 0x00 // Size: 0x08
	float CachedPlayRate; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterHurtSetting
// Size: 0x10 // Inherited bytes: 0x00
struct FMonsterHurtSetting {
	// Fields
	struct FName HurtAnimName; // Offset: 0x00 // Size: 0x08
	float HurtingAnimPlayRate; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAnimCache
// Size: 0x10 // Inherited bytes: 0x00
struct FMonsterAnimCache {
	// Fields
	IntProperty LoadedIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimationAsset* Asset; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterTableRow
// Size: 0xc0 // Inherited bytes: 0x00
struct FMonsterTableRow {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	IntProperty MonsterTeamID; // Offset: 0x04 // Size: 0x04
	StrProperty MonsterName; // Offset: 0x08 // Size: 0x10
	StrProperty MonsterNameID; // Offset: 0x18 // Size: 0x10
	IntProperty SpeciesGrade; // Offset: 0x28 // Size: 0x04
	IntProperty BPID; // Offset: 0x2c // Size: 0x04
	IntProperty Gold; // Offset: 0x30 // Size: 0x04
	IntProperty SuperGold; // Offset: 0x34 // Size: 0x04
	IntProperty Score; // Offset: 0x38 // Size: 0x04
	IntProperty DropID; // Offset: 0x3c // Size: 0x04
	IntProperty ProduceID; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct FMonsterDropTableRow DropData; // Offset: 0x48 // Size: 0x28
	IntProperty SpeciesType; // Offset: 0x70 // Size: 0x04
	IntProperty MonsterFuncType; // Offset: 0x74 // Size: 0x04
	IntProperty Health; // Offset: 0x78 // Size: 0x04
	IntProperty AI; // Offset: 0x7c // Size: 0x04
	IntProperty SkillStrength; // Offset: 0x80 // Size: 0x04
	IntProperty HealthBarCount; // Offset: 0x84 // Size: 0x04
	struct TArray<IntProperty> PaSkillIds; // Offset: 0x88 // Size: 0x10
	StrProperty BPPath; // Offset: 0x98 // Size: 0x10
	IntProperty NeedSendAttackFlow; // Offset: 0xa8 // Size: 0x04
	bool bEnableAvatar; // Offset: 0xac // Size: 0x01
	char pad_0xAD[0x3]; // Offset: 0xad // Size: 0x03
	float TakeDamageScale; // Offset: 0xb0 // Size: 0x04
	float DamageScale; // Offset: 0xb4 // Size: 0x04
	IntProperty RagDollPlanID; // Offset: 0xb8 // Size: 0x04
	IntProperty HitPartCoffOverridePlanID; // Offset: 0xbc // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterDropTableRow
// Size: 0x28 // Inherited bytes: 0x00
struct FMonsterDropTableRow {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FMonsterSingleDropIds> DropIDs; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FMonsterSingleBulletDropIds> BulletDropIds; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterFloatingTextData
// Size: 0x14 // Inherited bytes: 0x00
struct FMonsterFloatingTextData {
	// Fields
	float BaseDamage; // Offset: 0x00 // Size: 0x04
	bool IsHeadShot; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FVector_NetQuantize ImpactPoint; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterDebugPayload
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterDebugPayload {
	// Fields
	float ServerTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FMonsterDebugSnapshot> Monsters; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterDebugSnapshot
// Size: 0x14 // Inherited bytes: 0x00
struct FMonsterDebugSnapshot {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	char LODLevel; // Offset: 0x10 // Size: 0x01
	char StateFlags; // Offset: 0x11 // Size: 0x01
	char MonsterType; // Offset: 0x12 // Size: 0x01
	char pad_0x13[0x1]; // Offset: 0x13 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterLODRec
// Size: 0x18 // Inherited bytes: 0x00
struct FMonsterLODRec {
	// Fields
	struct TWeakObjectPtr<struct UObject> EntityObject; // Offset: 0x00 // Size: 0x08
	enum class EMonsterLODLevel CurrentLOD; // Offset: 0x08 // Size: 0x01
	enum class EMonsterLODLevel PendingLOD; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	IntProperty PendingCount; // Offset: 0x0c // Size: 0x04
	uint32_t MonsterID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpawnTableData
// Size: 0x18 // Inherited bytes: 0x00
struct FSpawnTableData {
	// Fields
	IntProperty PawnID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PathName; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpawnGroupItemInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FSpawnGroupItemInfo {
	// Fields
	IntProperty PawnGroupID; // Offset: 0x00 // Size: 0x04
	IntProperty PawnID; // Offset: 0x04 // Size: 0x04
	IntProperty PawnPercent; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RagDollImpulseSetting
// Size: 0x58 // Inherited bytes: 0x00
struct FRagDollImpulseSetting {
	// Fields
	struct FRagDollImpulse DefaultImpulse; // Offset: 0x00 // Size: 0x08
	MapProperty SpecialImpulse; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.RagDollImpulse
// Size: 0x08 // Inherited bytes: 0x00
struct FRagDollImpulse {
	// Fields
	float Scale; // Offset: 0x00 // Size: 0x04
	float ZOffset; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RagDollDamageInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FRagDollDamageInfo {
	// Fields
	float Damage; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct AActor* Caster; // Offset: 0x08 // Size: 0x08
	struct AActor* Source; // Offset: 0x10 // Size: 0x08
	struct AActor* Target; // Offset: 0x18 // Size: 0x08
	IntProperty DamageType; // Offset: 0x20 // Size: 0x04
	IntProperty DamageSubType; // Offset: 0x24 // Size: 0x04
	IntProperty DamageHitPos; // Offset: 0x28 // Size: 0x04
	IntProperty DamageShootID; // Offset: 0x2c // Size: 0x04
	struct FVector ImpactPoint; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterSpeciesParams
// Size: 0x70 // Inherited bytes: 0x00
struct FMonsterSpeciesParams {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FMonsterParams Params; // Offset: 0x08 // Size: 0x60
	IntProperty SingleId; // Offset: 0x68 // Size: 0x04
	bool bForceSpawn; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterParams
// Size: 0x60 // Inherited bytes: 0x00
struct FMonsterParams {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	IntProperty FlowID; // Offset: 0x04 // Size: 0x04
	IntProperty MonsterTeamID; // Offset: 0x08 // Size: 0x04
	IntProperty MonsterWaveID; // Offset: 0x0c // Size: 0x04
	IntProperty MonsterChapterID; // Offset: 0x10 // Size: 0x04
	IntProperty SpeciesGrade; // Offset: 0x14 // Size: 0x04
	IntProperty MonsterRebornTimes; // Offset: 0x18 // Size: 0x04
	IntProperty RebornDelay; // Offset: 0x1c // Size: 0x04
	IntProperty BornRandomRadius; // Offset: 0x20 // Size: 0x04
	struct FVector Location; // Offset: 0x24 // Size: 0x0c
	struct TArray<struct FRoadPointInfo> RoadPoints; // Offset: 0x30 // Size: 0x10
	struct APawn* CallPawn; // Offset: 0x40 // Size: 0x08
	uint32_t CallPawnKey; // Offset: 0x48 // Size: 0x04
	IntProperty CallType; // Offset: 0x4c // Size: 0x04
	enum class EMonsterSpawnSourceType SourceType; // Offset: 0x50 // Size: 0x01
	bool bForceSpawn; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x2]; // Offset: 0x52 // Size: 0x02
	IntProperty ProduceID; // Offset: 0x54 // Size: 0x04
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDragConfig
// Size: 0x58 // Inherited bytes: 0x00
struct FAirDragConfig {
	// Fields
	struct FMappedData SpeedToForwardForceMap; // Offset: 0x00 // Size: 0x10
	struct FMappedData ForwardVelocityDotToForwardForceMap; // Offset: 0x10 // Size: 0x10
	struct UCurveFloat* SpeedToForwardMergeCurve; // Offset: 0x20 // Size: 0x08
	struct UCurveVector* SpeedDragCurve; // Offset: 0x28 // Size: 0x08
	struct UCurveVector* HeightToSpeedCurve; // Offset: 0x30 // Size: 0x08
	float EngineOffDragScale; // Offset: 0x38 // Size: 0x04
	float ZeroThrottleDragThreshold; // Offset: 0x3c // Size: 0x04
	float ZeroThrottleRelAltitudeDragThreshold; // Offset: 0x40 // Size: 0x04
	struct FMappedData ZeroThrottleDrag; // Offset: 0x44 // Size: 0x10
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MappedData
// Size: 0x10 // Inherited bytes: 0x00
struct FMappedData {
	// Fields
	struct FVector2D InputMap; // Offset: 0x00 // Size: 0x08
	struct FVector2D OutputMap; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirControlLimitConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FAirControlLimitConfig {
	// Fields
	float MaxRoll; // Offset: 0x00 // Size: 0x04
	float MaxPitch; // Offset: 0x04 // Size: 0x04
	float MaxYaw; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirControlForceConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FAirControlForceConfig {
	// Fields
	float TorqueMassScale; // Offset: 0x00 // Size: 0x04
	struct FVector StaticCOMOffset; // Offset: 0x04 // Size: 0x0c
	struct FMappedData SpeedToControlForceMap; // Offset: 0x10 // Size: 0x10
	struct UCurveVector* RollControlCurve; // Offset: 0x20 // Size: 0x08
	struct UCurveVector* PitchControlCurve; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirControlTorqueConfig
// Size: 0x88 // Inherited bytes: 0x00
struct FAirControlTorqueConfig {
	// Fields
	float RollForceScale; // Offset: 0x00 // Size: 0x04
	float PitchForceScale; // Offset: 0x04 // Size: 0x04
	struct FMappedData SpeedToRollForceMap; // Offset: 0x08 // Size: 0x10
	struct FMappedData SpeedToPitchForceMap; // Offset: 0x18 // Size: 0x10
	struct FMappedData SpeedToRollDampingMap; // Offset: 0x28 // Size: 0x10
	struct FMappedData SpeedToPitchDampingMap; // Offset: 0x38 // Size: 0x10
	struct FMappedData SpeedToYawDampingMap; // Offset: 0x48 // Size: 0x10
	struct FMappedData RollTargetForceMap; // Offset: 0x58 // Size: 0x10
	struct FMappedData PitchTargetForceMap; // Offset: 0x68 // Size: 0x10
	struct FMappedData RollToPitchForceMap; // Offset: 0x78 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirLiftConfig
// Size: 0xb8 // Inherited bytes: 0x00
struct FAirLiftConfig {
	// Fields
	float LiftForceMassScale; // Offset: 0x00 // Size: 0x04
	struct FMappedData SpeedToLiftForceMap; // Offset: 0x04 // Size: 0x10
	struct FVector LiftForceStaticOffset; // Offset: 0x14 // Size: 0x0c
	struct FMappedData RollLiftOffsetMap; // Offset: 0x20 // Size: 0x10
	struct FVector RollLiftOffsetVector; // Offset: 0x30 // Size: 0x0c
	struct FMappedData PitchLiftOffsetMap; // Offset: 0x3c // Size: 0x10
	struct FVector PitchLiftOffsetVector; // Offset: 0x4c // Size: 0x0c
	float GroundEffectMaxDistance; // Offset: 0x58 // Size: 0x04
	float GroundEffectMassScale; // Offset: 0x5c // Size: 0x04
	struct FVector GroundEffectExtent; // Offset: 0x60 // Size: 0x0c
	struct FMappedData GroundEffectSpeedMap; // Offset: 0x6c // Size: 0x10
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct UCurveFloat* GroundEffectPowerCurve; // Offset: 0x80 // Size: 0x08
	struct UCurveFloat* GroundEffectOffsetCurve; // Offset: 0x88 // Size: 0x08
	struct FVector GroundEffectTraceOffset; // Offset: 0x90 // Size: 0x0c
	struct FMappedData GroundEffectAlphaOffsetMap; // Offset: 0x9c // Size: 0x10
	char pad_0xAC[0x4]; // Offset: 0xac // Size: 0x04
	struct UCurveFloat* AltitudeToLiftFactorCurve; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirEngineState
// Size: 0x2c // Inherited bytes: 0x00
struct FAirEngineState {
	// Fields
	bool bIsEngineOn; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EngineOnAlpha; // Offset: 0x04 // Size: 0x04
	float EnginePower; // Offset: 0x08 // Size: 0x04
	float EnginePowerAlpha; // Offset: 0x0c // Size: 0x04
	float CurrentEngineThrottle; // Offset: 0x10 // Size: 0x04
	float CurrentRotorThrottle; // Offset: 0x14 // Size: 0x04
	float CurrentRotorRPM; // Offset: 0x18 // Size: 0x04
	float TargetRotorRPM; // Offset: 0x1c // Size: 0x04
	float CurrentRotorRotation; // Offset: 0x20 // Size: 0x04
	float CurrentRotorRotationFast; // Offset: 0x24 // Size: 0x04
	bool bIsFastRotorActive; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirVehicleState
// Size: 0x34 // Inherited bytes: 0x00
struct FAirVehicleState {
	// Fields
	float SpeedInKm; // Offset: 0x00 // Size: 0x04
	float RelativeAltitudeMeters; // Offset: 0x04 // Size: 0x04
	float RelativeAltitudeAlpha; // Offset: 0x08 // Size: 0x04
	float AbsoluteAltitudeMeters; // Offset: 0x0c // Size: 0x04
	float ClimbRate; // Offset: 0x10 // Size: 0x04
	float EngineForceNormalized; // Offset: 0x14 // Size: 0x04
	float GroundEffectAlpha; // Offset: 0x18 // Size: 0x04
	struct FVector GroundEffectLocation; // Offset: 0x1c // Size: 0x0c
	struct FVector GroundEffectNormal; // Offset: 0x28 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirEngineConfig
// Size: 0xa0 // Inherited bytes: 0x00
struct FAirEngineConfig {
	// Fields
	float TorqueMassScale; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UCurveVector* EngineCurve; // Offset: 0x08 // Size: 0x08
	struct FVector StaticCOMOffset; // Offset: 0x10 // Size: 0x0c
	struct FVector RollInputOffsetVector; // Offset: 0x1c // Size: 0x0c
	struct FMappedData RollInputOffsetMap; // Offset: 0x28 // Size: 0x10
	struct FVector PitchInputOffsetVector; // Offset: 0x38 // Size: 0x0c
	struct FMappedData PitchInputOffsetMap; // Offset: 0x44 // Size: 0x10
	struct FMappedData ElevationScalarSpeedMap; // Offset: 0x54 // Size: 0x10
	struct FMappedData ReverseRelativeAltMap; // Offset: 0x64 // Size: 0x10
	struct FMappedData ReverseBackSpeedMap; // Offset: 0x74 // Size: 0x10
	float MinThrottleForBackForce; // Offset: 0x84 // Size: 0x04
	float MinSpeedInKmForFastOn; // Offset: 0x88 // Size: 0x04
	float MinRotorRpmForFastOn; // Offset: 0x8c // Size: 0x04
	struct FInputInterpSetting FastOnInterp; // Offset: 0x90 // Size: 0x08
	struct FInputInterpSetting SlowOnInterp; // Offset: 0x98 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.InputInterpSetting
// Size: 0x08 // Inherited bytes: 0x00
struct FInputInterpSetting {
	// Fields
	float RiseRate; // Offset: 0x00 // Size: 0x04
	float FallRate; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirRotorConfig
// Size: 0x48 // Inherited bytes: 0x00
struct FAirRotorConfig {
	// Fields
	struct FInputInterpSetting ThrottleInterpForward; // Offset: 0x00 // Size: 0x08
	struct FInputInterpSetting ThrottleInterpReverse; // Offset: 0x08 // Size: 0x08
	struct FMappedData RotorSpeedThrottleOffset; // Offset: 0x10 // Size: 0x10
	struct FMappedData EnginePowerRotorSpeedScale; // Offset: 0x20 // Size: 0x10
	struct UCurveFloat* ThrottleToRPMCurve; // Offset: 0x30 // Size: 0x08
	float EngineOnRPMInterpSpeed; // Offset: 0x38 // Size: 0x04
	float EngineOffRPMInterpSpeed; // Offset: 0x3c // Size: 0x04
	float FastRotorOnSpeed; // Offset: 0x40 // Size: 0x04
	float FastRotorOffSpeed; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirInputConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FAirInputConfig {
	// Fields
	struct FInputInterpSetting RollInterpolation; // Offset: 0x00 // Size: 0x08
	struct FInputInterpSetting PitchInterpolation; // Offset: 0x08 // Size: 0x08
	struct FInputInterpSetting ThrottleForwardInterpolation; // Offset: 0x10 // Size: 0x08
	struct FInputInterpSetting ThrottleBackwardInterpolation; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirGeneralConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FAirGeneralConfig {
	// Fields
	bool bCheckRelativeAltitude; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float MaxRelAltitudeDistInM; // Offset: 0x04 // Size: 0x04
	float MaxTraceDistInM; // Offset: 0x08 // Size: 0x04
	float MinSpeedForAirTick; // Offset: 0x0c // Size: 0x04
	struct FMappedData SpeedToAnimInputMap; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirInput
// Size: 0x10 // Inherited bytes: 0x00
struct FAirInput {
	// Fields
	float Throttle; // Offset: 0x00 // Size: 0x04
	struct FVector AxisControls; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterMoveDistanceAccumulator
// Size: 0x78 // Inherited bytes: 0x00
struct FCharacterMoveDistanceAccumulator {
	// Fields
	char pad_0x0[0x78]; // Offset: 0x00 // Size: 0x78
};

// Object Name: ScriptStruct ShadowTrackerExtra.RealtimeMoveSpeedCheck
// Size: 0x30 // Inherited bytes: 0x00
struct FRealtimeMoveSpeedCheck {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientMoveSpeedCheck
// Size: 0x28 // Inherited bytes: 0x00
struct FClientMoveSpeedCheck {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
	float ThresholdScale; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientTimeSpeedCheck
// Size: 0x3c // Inherited bytes: 0x00
struct FClientTimeSpeedCheck {
	// Fields
	char pad_0x0[0x24]; // Offset: 0x00 // Size: 0x24
	float CheckTimeDeltaInterval; // Offset: 0x24 // Size: 0x04
	float MaxClientTimeDeltaAheadServer; // Offset: 0x28 // Size: 0x04
	float MaxPublishForbidMoveTime; // Offset: 0x2c // Size: 0x04
	float MaxServerTimeDelta; // Offset: 0x30 // Size: 0x04
	float MaxClientAheadServerTotalTime; // Offset: 0x34 // Size: 0x04
	IntProperty MaxProcessCounterOneFrame; // Offset: 0x38 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveCheatAntiStrategy
// Size: 0x90 // Inherited bytes: 0x00
struct FMoveCheatAntiStrategy {
	// Fields
	uint32_t bIsOpen; // Offset: 0x00 // Size: 0x04
	uint32_t bIgnoreCheck; // Offset: 0x04 // Size: 0x04
	float MaxAllowClientSideTimeLag; // Offset: 0x08 // Size: 0x04
	float CheckTimeSpeedIntervel; // Offset: 0x0c // Size: 0x04
	IntProperty MaxAllowCheatMoveTimes; // Offset: 0x10 // Size: 0x04
	float MaxMoveDistanceScaleFactor; // Offset: 0x14 // Size: 0x04
	float MaxPublishForbidMoveTime; // Offset: 0x18 // Size: 0x04
	float ServerSendPingIntervel; // Offset: 0x1c // Size: 0x04
	float MaxMoveSpeedValue; // Offset: 0x20 // Size: 0x04
	IntProperty MaxSpeedSplitNum; // Offset: 0x24 // Size: 0x04
	IntProperty MaxContinuousCheatMoveTimes; // Offset: 0x28 // Size: 0x04
	float MaxClientSpeed; // Offset: 0x2c // Size: 0x04
	char pad_0x30[0x60]; // Offset: 0x30 // Size: 0x60
};

// Object Name: ScriptStruct ShadowTrackerExtra.AngleRelevantInternalRate
// Size: 0x08 // Inherited bytes: 0x00
struct FAngleRelevantInternalRate {
	// Fields
	float Costheta; // Offset: 0x00 // Size: 0x04
	float InternalRate; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DistanceRelevantInternal
// Size: 0x0c // Inherited bytes: 0x00
struct FDistanceRelevantInternal {
	// Fields
	float DistSq; // Offset: 0x00 // Size: 0x04
	float Internal; // Offset: 0x04 // Size: 0x04
	float BehideInternal; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveBatchData
// Size: 0x3018 // Inherited bytes: 0x00
struct FMoveBatchData {
	// Fields
	struct FMoveData MoveBatchDataArray[0x80]; // Offset: 0x00 // Size: 0x3000
	char pad_0x3000[0x18]; // Offset: 0x3000 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveData
// Size: 0x60 // Inherited bytes: 0x00
struct FMoveData {
	// Fields
	bool bRepDeltaError; // Offset: 0x00 // Size: 0x01
	bool bHighSpeed; // Offset: 0x01 // Size: 0x01
	bool bRepVehicle; // Offset: 0x02 // Size: 0x01
	bool bSimulatedPhysicSleep; // Offset: 0x03 // Size: 0x01
	bool bRepPhysics; // Offset: 0x04 // Size: 0x01
	bool bPhysicsHit; // Offset: 0x05 // Size: 0x01
	bool bFreeCamera; // Offset: 0x06 // Size: 0x01
	uint8_t PacketID; // Offset: 0x07 // Size: 0x01
	char Ping; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float Yaw; // Offset: 0x0c // Size: 0x04
	float ViewYaw; // Offset: 0x10 // Size: 0x04
	float Pitch; // Offset: 0x14 // Size: 0x04
	float Roll; // Offset: 0x18 // Size: 0x04
	float RemoteViewPitch; // Offset: 0x1c // Size: 0x04
	float ReplicatedServerLastTransformUpdateTimeStamp; // Offset: 0x20 // Size: 0x04
	struct FVector Location; // Offset: 0x24 // Size: 0x0c
	struct FVector LinearVelocity; // Offset: 0x30 // Size: 0x0c
	struct FVector AngularVelocity; // Offset: 0x3c // Size: 0x0c
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08
	struct FVector RelativeLocation; // Offset: 0x50 // Size: 0x0c
	float RelativeYaw; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MovePhysicsParams
// Size: 0x44 // Inherited bytes: 0x00
struct FMovePhysicsParams {
	// Fields
	float MaxWalkSpeed; // Offset: 0x00 // Size: 0x04
	float MaxAccelerationWalking; // Offset: 0x04 // Size: 0x04
	float BrakingDecelerationWalking; // Offset: 0x08 // Size: 0x04
	float GroundFriction; // Offset: 0x0c // Size: 0x04
	float MaxStepHeight; // Offset: 0x10 // Size: 0x04
	float WalkableFloorAngle; // Offset: 0x14 // Size: 0x04
	float MaxFallSpeed; // Offset: 0x18 // Size: 0x04
	float BrakingDecelerationFalling; // Offset: 0x1c // Size: 0x04
	float GravityScale; // Offset: 0x20 // Size: 0x04
	float AirControl; // Offset: 0x24 // Size: 0x04
	float AirControlBoostMultiplier; // Offset: 0x28 // Size: 0x04
	float AirControlBoostVelocityThreshold; // Offset: 0x2c // Size: 0x04
	float JumpZVelocity; // Offset: 0x30 // Size: 0x04
	float FallingLateralFriction; // Offset: 0x34 // Size: 0x04
	float MaxFlySpeed; // Offset: 0x38 // Size: 0x04
	float MaxAccelerationFlying; // Offset: 0x3c // Size: 0x04
	float BrakingDecelerationFlying; // Offset: 0x40 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveModuleConfig
// Size: 0x50 // Inherited bytes: 0x00
struct FMoveModuleConfig {
	// Fields
	struct TArray<struct UMoveModuleBase*> FSMTickModules; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UMoveModuleBase*> InputTransformModules; // Offset: 0x10 // Size: 0x10
	struct TArray<struct UMoveModuleBase*> VelocityPostModules; // Offset: 0x20 // Size: 0x10
	struct TArray<struct UMoveModuleBase*> RotationSolveModules; // Offset: 0x30 // Size: 0x10
	struct TArray<struct UMoveModuleBase*> ExecuteModules; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveContext
// Size: 0x48 // Inherited bytes: 0x00
struct FMoveContext {
	// Fields
	struct ASTExtraBaseCharacter* Owner; // Offset: 0x00 // Size: 0x08
	struct USTCharacterMovementComponent* CMC; // Offset: 0x08 // Size: 0x08
	float DeltaTime; // Offset: 0x10 // Size: 0x04
	IntProperty Iterations; // Offset: 0x14 // Size: 0x04
	struct FVector RawInput; // Offset: 0x18 // Size: 0x0c
	struct FRotator ControlRotation; // Offset: 0x24 // Size: 0x0c
	float DistanceToLand; // Offset: 0x30 // Size: 0x04
	bool bIsOnGround; // Offset: 0x34 // Size: 0x01
	char CurrentFSMState; // Offset: 0x35 // Size: 0x01
	char Role; // Offset: 0x36 // Size: 0x01
	bool bHasInputOverride; // Offset: 0x37 // Size: 0x01
	struct FVector InputOverride; // Offset: 0x38 // Size: 0x0c
	bool bHasNextFSMState; // Offset: 0x44 // Size: 0x01
	char NextFSMState; // Offset: 0x45 // Size: 0x01
	bool bMoveSelfExecuted; // Offset: 0x46 // Size: 0x01
	char pad_0x47[0x1]; // Offset: 0x47 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicNavDataParamList
// Size: 0x10 // Inherited bytes: 0x00
struct FDynamicNavDataParamList {
	// Fields
	struct TArray<struct FDynamicNavDataParam> Params; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicNavDataParam
// Size: 0x58 // Inherited bytes: 0x00
struct FDynamicNavDataParam {
	// Fields
	IntProperty NavDataID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName NavDataDesc; // Offset: 0x08 // Size: 0x08
	struct FName AgentName; // Offset: 0x10 // Size: 0x08
	StrProperty ExtraNavDataPath; // Offset: 0x18 // Size: 0x10
	struct FVector NavBoundsVolumeOriginLocation; // Offset: 0x28 // Size: 0x0c
	struct FVector NavmeshOffset; // Offset: 0x34 // Size: 0x0c
	char bBoxShape : 1; // Offset: 0x40 // Size: 0x01
	char pad_0x40_1 : 7; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	struct FVector HalfBoxSize; // Offset: 0x44 // Size: 0x0c
	float SphereRadius; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.OcclusionInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FOcclusionInfo {
	// Fields
	struct TArray<uint16_t> OcclusionIndex; // Offset: 0x00 // Size: 0x10
	SetProperty ShowIndex; // Offset: 0x10 // Size: 0x50
	bool IsShow; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ComponentInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FComponentInfo {
	// Fields
	struct TArray<uint16_t> BorderIndexData1; // Offset: 0x00 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData2; // Offset: 0x10 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData3; // Offset: 0x20 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData4; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ComponentBorderInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FComponentBorderInfo {
	// Fields
	struct FIntPoint ComponentIndex; // Offset: 0x00 // Size: 0x08
	IntProperty IndexOffset; // Offset: 0x08 // Size: 0x04
	IntProperty VertexOffset; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> ComponentBorderIB01; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> ComponentBorderIB02; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> ComponentBorderIB03; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> ComponentBorderIB04; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SubLevelCompInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FSubLevelCompInfo {
	// Fields
	struct TArray<uint16_t> IndexOffsetArray; // Offset: 0x00 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData1; // Offset: 0x10 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData2; // Offset: 0x20 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData3; // Offset: 0x30 // Size: 0x10
	struct TArray<uint16_t> BorderIndexData4; // Offset: 0x40 // Size: 0x10
	IntProperty Sibling1Name; // Offset: 0x50 // Size: 0x04
	IntProperty Sibling2Name; // Offset: 0x54 // Size: 0x04
	IntProperty Sibling3Name; // Offset: 0x58 // Size: 0x04
	IntProperty Sibling4Name; // Offset: 0x5c // Size: 0x04
	IntProperty Sibling1Idx; // Offset: 0x60 // Size: 0x04
	IntProperty Sibling2Idx; // Offset: 0x64 // Size: 0x04
	IntProperty Sibling3Idx; // Offset: 0x68 // Size: 0x04
	IntProperty Sibling4Idx; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SubLevelComponentMapValue
// Size: 0xb8 // Inherited bytes: 0x00
struct FSubLevelComponentMapValue {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> IndexOffsetArray; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer1; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer2; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer3; // Offset: 0x40 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer4; // Offset: 0x50 // Size: 0x10
	StrProperty Sibling1Name; // Offset: 0x60 // Size: 0x10
	StrProperty Sibling2Name; // Offset: 0x70 // Size: 0x10
	StrProperty Sibling3Name; // Offset: 0x80 // Size: 0x10
	StrProperty Sibling4Name; // Offset: 0x90 // Size: 0x10
	IntProperty Sibling1Idx; // Offset: 0xa0 // Size: 0x04
	IntProperty Sibling2Idx; // Offset: 0xa4 // Size: 0x04
	IntProperty Sibling3Idx; // Offset: 0xa8 // Size: 0x04
	IntProperty Sibling4Idx; // Offset: 0xac // Size: 0x04
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMarkDataInNavigator
// Size: 0x30 // Inherited bytes: 0x00
struct FCustomMarkDataInNavigator {
	// Fields
	IntProperty MarkInstID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UWidget* MarkWidget; // Offset: 0x08 // Size: 0x08
	struct UTextBlock* MarkDistanceText; // Offset: 0x10 // Size: 0x08
	struct FVector MarkLocation; // Offset: 0x18 // Size: 0x0c
	float MaxDistance; // Offset: 0x24 // Size: 0x04
	bool bAdjustWhenOutRange; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.MLAIDestroyBulletInfo
// Size: 0x34 // Inherited bytes: 0x00
struct FMLAIDestroyBulletInfo {
	// Fields
	float LowHPThreshold; // Offset: 0x00 // Size: 0x04
	struct FMLAISingleDestroyBulletInfo LowHPDestroyBulletInfo; // Offset: 0x04 // Size: 0x10
	struct FMLAISingleDestroyBulletInfo HighHPDestroyBulletInfo; // Offset: 0x14 // Size: 0x10
	struct FMLAISingleDestroyBulletInfo FatalDamageDestroyBulletInfo; // Offset: 0x24 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MLAISingleDestroyBulletInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FMLAISingleDestroyBulletInfo {
	// Fields
	float MaxDestroyTime; // Offset: 0x00 // Size: 0x04
	IntProperty MaxDestroyNum; // Offset: 0x04 // Size: 0x04
	float DestroyCD; // Offset: 0x08 // Size: 0x04
	float DestroyBulletProb; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AIDataTable
// Size: 0x48 // Inherited bytes: 0x00
struct FAIDataTable {
	// Fields
	struct TWeakObjectPtr<struct ASTExtraPlayerCharacter> FightbackTarget; // Offset: 0x00 // Size: 0x08
	float CheckFightbackTargetElapsedTime; // Offset: 0x08 // Size: 0x04
	float FightbackTraceTime; // Offset: 0x0c // Size: 0x04
	float RememberEnemyElapsedTime; // Offset: 0x10 // Size: 0x04
	float FightbackEnemyInSightElapsedTime; // Offset: 0x14 // Size: 0x04
	float CanNotSeeTargetElapsedTime; // Offset: 0x18 // Size: 0x04
	float LastAttackedMeElapsedTime; // Offset: 0x1c // Size: 0x04
	float LockTargetElapsedTime; // Offset: 0x20 // Size: 0x04
	float NearestEnemyVisibleElapsedTime; // Offset: 0x24 // Size: 0x04
	bool IsDarkView; // Offset: 0x28 // Size: 0x01
	bool IsFinalDarkView; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x2]; // Offset: 0x2a // Size: 0x02
	float WarningTime; // Offset: 0x2c // Size: 0x04
	float AILastFightTime; // Offset: 0x30 // Size: 0x04
	enum class EWeatherStatusType CurWeaterStatus; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x13]; // Offset: 0x35 // Size: 0x13
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponDurabilityConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FWeaponDurabilityConfig {
	// Fields
	float LowDurabilityRate; // Offset: 0x00 // Size: 0x04
	float GameEndReduceRate; // Offset: 0x04 // Size: 0x04
	float ModeReduceRate; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty DurabilityLowAttrModifierID; // Offset: 0x10 // Size: 0x10
	StrProperty DurabilityLossAttrModifierID; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SceneCompUpdateOptimizationItem
// Size: 0x05 // Inherited bytes: 0x00
struct FSceneCompUpdateOptimizationItem {
	// Fields
	char pad_0x0[0x5]; // Offset: 0x00 // Size: 0x05
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleWeaponItemDisplayData
// Size: 0x20 // Inherited bytes: 0x00
struct FBattleWeaponItemDisplayData {
	// Fields
	StrProperty ItemName; // Offset: 0x00 // Size: 0x10
	StrProperty WhiteIconPath; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.HitTargetExtraData
// Size: 0x24 // Inherited bytes: 0x00
struct FHitTargetExtraData {
	// Fields
	char Platform; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty CharacterReplicatID; // Offset: 0x04 // Size: 0x04
	IntProperty CharacterMovementReplicatID; // Offset: 0x08 // Size: 0x04
	float LastReplicatedServerLastTransformUpdateTimeStamp; // Offset: 0x0c // Size: 0x04
	float LastReplicatedTimePass; // Offset: 0x10 // Size: 0x04
	float CapsulePreMoveDistance; // Offset: 0x14 // Size: 0x04
	float MeshOffsetDistance; // Offset: 0x18 // Size: 0x04
	float AverageFPS; // Offset: 0x1c // Size: 0x04
	float ImpactFrameDeltaTime; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletHitInfoRepData
// Size: 0x40 // Inherited bytes: 0x00
struct FBulletHitInfoRepData {
	// Fields
	struct FVector ImpactPoint; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantizeNormal ImpactNormal; // Offset: 0x0c // Size: 0x0c
	struct FVector ShootMomentMuzzlePos; // Offset: 0x18 // Size: 0x0c
	char SurfaceType; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x28 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // Offset: 0x30 // Size: 0x08
	IntProperty ClientTimeStamp; // Offset: 0x38 // Size: 0x04
	char HitBodyType; // Offset: 0x3c // Size: 0x01
	char bIsUnderWater : 1; // Offset: 0x3d // Size: 0x01
	char pad_0x3D_1 : 7; // Offset: 0x3d // Size: 0x01
	char pad_0x3E[0x2]; // Offset: 0x3e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttachmentSlot
// Size: 0x04 // Inherited bytes: 0x00
struct FWeaponAttachmentSlot {
	// Fields
	IntProperty TypeSpecificID; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScopeZoomConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FScopeZoomConfig {
	// Fields
	IntProperty DisplayMaxScale; // Offset: 0x00 // Size: 0x04
	IntProperty DisplayMinScale; // Offset: 0x04 // Size: 0x04
	struct UCurveFloat* FovCurve; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SwitchWeaponReplicatedToOwnerData
// Size: 0x08 // Inherited bytes: 0x00
struct FSwitchWeaponReplicatedToOwnerData {
	// Fields
	enum class ESurviveWeaponPropSlot Slot; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty OperationIndex; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DestroyWeaponReplicatedToOwnerData
// Size: 0x10 // Inherited bytes: 0x00
struct FDestroyWeaponReplicatedToOwnerData {
	// Fields
	struct FName LogicSocket; // Offset: 0x00 // Size: 0x08
	IntProperty OperationIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DisUseWeaponReplicatedToOwnerData
// Size: 0x04 // Inherited bytes: 0x00
struct FDisUseWeaponReplicatedToOwnerData {
	// Fields
	IntProperty OperationIndex; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UseWeaponReplicatedToOwnerData
// Size: 0x10 // Inherited bytes: 0x00
struct FUseWeaponReplicatedToOwnerData {
	// Fields
	struct FName LogicSocket; // Offset: 0x00 // Size: 0x08
	bool bNeedWaitHandleSpawnFinishedOnClient; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	IntProperty OperationIndex; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SRangeAttenuateConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FSRangeAttenuateConfig {
	// Fields
	IntProperty rangeStart; // Offset: 0x00 // Size: 0x04
	IntProperty rangeEnd; // Offset: 0x04 // Size: 0x04
	float rangeAttenuateFactor; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SDeviation
// Size: 0x34 // Inherited bytes: 0x00
struct FSDeviation {
	// Fields
	float DeviationBase; // Offset: 0x00 // Size: 0x04
	float DeviationRecoilGain; // Offset: 0x04 // Size: 0x04
	float DeviationMax; // Offset: 0x08 // Size: 0x04
	float DeviationMinMove; // Offset: 0x0c // Size: 0x04
	float DeviationMaxMove; // Offset: 0x10 // Size: 0x04
	float DeviationMoveMultiplier; // Offset: 0x14 // Size: 0x04
	float DeviationStanceStand; // Offset: 0x18 // Size: 0x04
	float DeviationStanceCrouch; // Offset: 0x1c // Size: 0x04
	float DeviationStanceProne; // Offset: 0x20 // Size: 0x04
	float DeviationStanceJump; // Offset: 0x24 // Size: 0x04
	float DeviationShoulderMultiplier; // Offset: 0x28 // Size: 0x04
	float DeviationBaseADS; // Offset: 0x2c // Size: 0x04
	float DeviationRecoilGainADS; // Offset: 0x30 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SRecoilInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FSRecoilInfo {
	// Fields
	struct UCurveVector* RecoilCurve; // Offset: 0x00 // Size: 0x08
	float RecoilValueClimb; // Offset: 0x08 // Size: 0x04
	float RecoilValueFail; // Offset: 0x0c // Size: 0x04
	float VerticalRecoilVariation; // Offset: 0x10 // Size: 0x04
	float RecoilSpeedVertical; // Offset: 0x14 // Size: 0x04
	float VerticalRecoilMin; // Offset: 0x18 // Size: 0x04
	float VerticalRecoilMax; // Offset: 0x1c // Size: 0x04
	float VerticalRecoveryModifier; // Offset: 0x20 // Size: 0x04
	float RecovertySpeedVertical; // Offset: 0x24 // Size: 0x04
	float VerticalRecoveryClamp; // Offset: 0x28 // Size: 0x04
	float VerticalRecoveryMax; // Offset: 0x2c // Size: 0x04
	bool ShootSightReturn; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	float ShootSightReturnSpeed; // Offset: 0x34 // Size: 0x04
	float BurstEmptyDelay; // Offset: 0x38 // Size: 0x04
	bool SwitchOnTime; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	float TimePerSwitch; // Offset: 0x40 // Size: 0x04
	IntProperty BulletPerSwitch; // Offset: 0x44 // Size: 0x04
	float LeftMax; // Offset: 0x48 // Size: 0x04
	float RightMax; // Offset: 0x4c // Size: 0x04
	float HorizontalTendency; // Offset: 0x50 // Size: 0x04
	float RecoilHorizontalMinScalar; // Offset: 0x54 // Size: 0x04
	float RecoilSpeedHorizontal; // Offset: 0x58 // Size: 0x04
	float RecoilModifierStand; // Offset: 0x5c // Size: 0x04
	float RecoilModifierCrouch; // Offset: 0x60 // Size: 0x04
	float RecoilModifierProne; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponNotifyActionData
// Size: 0x08 // Inherited bytes: 0x00
struct FWeaponNotifyActionData {
	// Fields
	IntProperty OperationIndex; // Offset: 0x00 // Size: 0x04
	enum class EWeaponAction Action; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponReloadData
// Size: 0x0c // Inherited bytes: 0x00
struct FWeaponReloadData {
	// Fields
	float FillTime; // Offset: 0x00 // Size: 0x04
	float SingleBulletPrepareTime; // Offset: 0x04 // Size: 0x04
	float UploadTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AdditionalAudioEventMap
// Size: 0x50 // Inherited bytes: 0x00
struct FAdditionalAudioEventMap {
	// Fields
	MapProperty AdditionalAudioEventMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.MutilAudioEvent
// Size: 0x10 // Inherited bytes: 0x00
struct FMutilAudioEvent {
	// Fields
	struct TArray<struct UAkAudioEvent*> MutilAudioEvent; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.OverrideAudioEventMap
// Size: 0x50 // Inherited bytes: 0x00
struct FOverrideAudioEventMap {
	// Fields
	MapProperty OverrideAudioEventMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObbyRepMovement
// Size: 0x30 // Inherited bytes: 0x00
struct FObbyRepMovement {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	struct FVector Scale; // Offset: 0x18 // Size: 0x0c
	float PlayTimeRepValue; // Offset: 0x24 // Size: 0x04
	char SyncFlag; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	uint32_t RepComponentGUID; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleParticleComps
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleParticleComps {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleDistance
// Size: 0x0c // Inherited bytes: 0x00
struct FParticleDistance {
	// Fields
	struct TWeakObjectPtr<struct UParticleSystemComponent> ParticleSystemComp; // Offset: 0x00 // Size: 0x08
	IntProperty ToPlayerDistance; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleCache
// Size: 0x18 // Inherited bytes: 0x00
struct FParticleCache {
	// Fields
	struct TArray<struct UParticleSystemComponent*> CachedParticles; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticlePool
// Size: 0x20 // Inherited bytes: 0x00
struct FParticlePool {
	// Fields
	IntProperty VisiableParticleNum; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> Pool; // Offset: 0x08 // Size: 0x10
	IntProperty Size; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleCacheConfig
// Size: 0x28 // Inherited bytes: 0x00
struct FParticleCacheConfig {
	// Fields
	struct FName ParticleName; // Offset: 0x00 // Size: 0x08
	float MaxCullingDistance; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FParticleCountLimit> CountLimit; // Offset: 0x10 // Size: 0x10
	enum class EDisplayPolicy DisplayPolicy; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty DeviceLevelLimit; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleCountLimit
// Size: 0x08 // Inherited bytes: 0x00
struct FParticleCountLimit {
	// Fields
	IntProperty Level; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PassengerCameraViewLimit
// Size: 0x24 // Inherited bytes: 0x00
struct FPassengerCameraViewLimit {
	// Fields
	bool bLimitPitch; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector2D PitchRange; // Offset: 0x04 // Size: 0x08
	bool bLimitYaw; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FVector2D YawRange; // Offset: 0x10 // Size: 0x08
	bool bLimitRoll; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	struct FVector2D RollRange; // Offset: 0x1c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PenetrateSurfaceResult
// Size: 0x38 // Inherited bytes: 0x00
struct FPenetrateSurfaceResult {
	// Fields
	enum class EPhysicalSurface SurfaceType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector InPoint; // Offset: 0x04 // Size: 0x0c
	struct FVector OutPoint; // Offset: 0x10 // Size: 0x0c
	struct FVector Normal; // Offset: 0x1c // Size: 0x0c
	struct TArray<struct FName> Tags; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetMeshPackage
// Size: 0x128 // Inherited bytes: 0x08
struct FPetMeshPackage : FAssetPackage {
	// Fields
	bool bGetMaterialFormMesh; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct UStaticMesh* stMesh; // Offset: 0x10 // Size: 0x28
	struct USkeletalMesh* skMesh; // Offset: 0x38 // Size: 0x28
	struct USkeletalMesh* SkMeshLow; // Offset: 0x60 // Size: 0x28
	struct UAnimInstance* animBP; // Offset: 0x88 // Size: 0x08
	struct UAnimInstance* LobbyAnimBP; // Offset: 0x90 // Size: 0x08
	struct UAnimInstance* TransformAnimBP; // Offset: 0x98 // Size: 0x08
	struct TArray<struct FParticleAsset> ParticleData; // Offset: 0xa0 // Size: 0x10
	struct UMaterialInterface* Mat; // Offset: 0xb0 // Size: 0x28
	struct UMaterialInterface* MatBase; // Offset: 0xd8 // Size: 0x28
	struct TArray<struct FMaterialAsset> additionalMats; // Offset: 0x100 // Size: 0x10
	struct TArray<struct FMaterialAsset> SpecialMats; // Offset: 0x110 // Size: 0x10
	char pad_0x120[0x8]; // Offset: 0x120 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetEventPlayerStateTypeSt
// Size: 0x02 // Inherited bytes: 0x00
struct FPetEventPlayerStateTypeSt {
	// Fields
	enum class EPawnState PawnState; // Offset: 0x00 // Size: 0x01
	enum class EPawnStateChangeType StateChangeType; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetAttachInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FPetAttachInfo {
	// Fields
	struct FName AttachSocketName; // Offset: 0x00 // Size: 0x08
	struct FVector AttachOffset; // Offset: 0x08 // Size: 0x0c
	struct FRotator AttachRotation; // Offset: 0x14 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.FixPetAttachInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FFixPetAttachInfo {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty PetId; // Offset: 0x04 // Size: 0x04
	IntProperty Priority; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetMontageConfig
// Size: 0x08 // Inherited bytes: 0x00
struct FPetMontageConfig {
	// Fields
	IntProperty AnimationAssetId; // Offset: 0x00 // Size: 0x04
	IntProperty Weight; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetEventItemIns
// Size: 0x18 // Inherited bytes: 0x00
struct FPetEventItemIns {
	// Fields
	StrProperty Tips; // Offset: 0x00 // Size: 0x10
	struct UPetEventItem* EventItem; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.GridPickupDataContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FGridPickupDataContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FGridPickupData> DataList; // Offset: 0xb0 // Size: 0x10
	struct APickupGrid* Owner; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.GridPickupData
// Size: 0x34 // Inherited bytes: 0x0c
struct FGridPickupData : FFastArraySerializerItem {
	// Fields
	uint32_t UniqueId; // Offset: 0x0c // Size: 0x04
	struct FVector_NetQuantize10 Loc; // Offset: 0x10 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x1c // Size: 0x0c
	IntProperty ItemId; // Offset: 0x28 // Size: 0x04
	IntProperty Type; // Offset: 0x2c // Size: 0x04
	IntProperty Count; // Offset: 0x30 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemTypeUsefulCache
// Size: 0x1e0 // Inherited bytes: 0x00
struct FItemTypeUsefulCache {
	// Fields
	MapProperty ItemGuid2Useful; // Offset: 0x00 // Size: 0x50
	MapProperty WeaponTypeUseful; // Offset: 0x50 // Size: 0x50
	MapProperty AttachmentTypeUseful; // Offset: 0xa0 // Size: 0x50
	MapProperty AmmoTypeUseful; // Offset: 0xf0 // Size: 0x50
	MapProperty ConsumableTypeUseful; // Offset: 0x140 // Size: 0x50
	MapProperty SkillPropsTypeUseful; // Offset: 0x190 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AllSearchedTombBoxesInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FAllSearchedTombBoxesInfo {
	// Fields
	struct TArray<struct FSearchedTombBoxesInfo> AllBoxes; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SearchedPickupItemInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FSearchedPickupItemInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FBattleSearchItemSortingInfo> SortedItemsArray; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SearchedTombBoxesInfo
// Size: 0x28 // Inherited bytes: 0x18
struct FSearchedTombBoxesInfo : FSearchedPickupItemInfo {
	// Fields
	struct APlayerTombBox* Box; // Offset: 0x18 // Size: 0x08
	IntProperty NeedUpdateUICount; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SoftRefCacheData
// Size: 0x28 // Inherited bytes: 0x00
struct FSoftRefCacheData {
	// Fields
	struct FSoftObjectPath SoftMeshPath; // Offset: 0x00 // Size: 0x18
	struct TArray<struct FSoftObjectPath> SoftMaterialPaths; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpTransactionResult
// Size: 0x48 // Inherited bytes: 0x00
struct FPickUpTransactionResult {
	// Fields
	enum class EPickUpTransactionFailure Failure; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FPickUpTransactionItem Item; // Offset: 0x08 // Size: 0x38
	IntProperty PickedUpCount; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpWrapperDataForReplay
// Size: 0x30 // Inherited bytes: 0x00
struct FPickUpWrapperDataForReplay {
	// Fields
	IntProperty TypeSpecificID; // Offset: 0x00 // Size: 0x04
	struct FVector_NetQuantize Location; // Offset: 0x04 // Size: 0x0c
	uint32_t Guid; // Offset: 0x10 // Size: 0x04
	uint32_t AttachedActorGUID; // Offset: 0x14 // Size: 0x04
	char Flags; // Offset: 0x18 // Size: 0x01
	char BoxType; // Offset: 0x19 // Size: 0x01
	uint16_t Count; // Offset: 0x1a // Size: 0x02
	uint32_t OwnerUniqueID; // Offset: 0x1c // Size: 0x04
	IntProperty ItemId; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0xc]; // Offset: 0x24 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.InBoxReplayItem
// Size: 0x0c // Inherited bytes: 0x00
struct FInBoxReplayItem {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	IntProperty InstanceID; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpWrapperItem
// Size: 0x38 // Inherited bytes: 0x00
struct FPickUpWrapperItem {
	// Fields
	struct FItemDefineID DefineID; // Offset: 0x00 // Size: 0x18
	IntProperty Count; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x20 // Size: 0x10
	IntProperty ParentIndex; // Offset: 0x30 // Size: 0x04
	IntProperty ItemInstanceID; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropEffectData
// Size: 0x20 // Inherited bytes: 0x00
struct FDropEffectData {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	float Duration; // Offset: 0x04 // Size: 0x04
	StrProperty EffectPath; // Offset: 0x08 // Size: 0x10
	struct FColor EffectColor; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropGroundEffectInfo
// Size: 0x80 // Inherited bytes: 0x00
struct FDropGroundEffectInfo {
	// Fields
	float GroundEffectLifeSpan; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FTransform EffectTransform; // Offset: 0x10 // Size: 0x30
	struct UParticleSystem* GroundEffect; // Offset: 0x40 // Size: 0x28
	StrProperty EffectPath; // Offset: 0x68 // Size: 0x10
	bool bShowGroundEffect; // Offset: 0x78 // Size: 0x01
	bool bUsePickUpSelfEffect; // Offset: 0x79 // Size: 0x01
	bool bEffectActive; // Offset: 0x7a // Size: 0x01
	char pad_0x7B[0x5]; // Offset: 0x7b // Size: 0x05
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickupWrapperInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FPickupWrapperInfo {
	// Fields
	struct TWeakObjectPtr<struct APickUpWrapperActor> PickUpActor; // Offset: 0x00 // Size: 0x08
	bool bRecentlyRendered; // Offset: 0x08 // Size: 0x01
	bool bEffectSpawnd; // Offset: 0x09 // Size: 0x01
	bool bShowEffect; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x1]; // Offset: 0x0b // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickupCountLimit
// Size: 0x08 // Inherited bytes: 0x00
struct FPickupCountLimit {
	// Fields
	IntProperty DeviceLevel; // Offset: 0x00 // Size: 0x04
	IntProperty CountLimit; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PendingEnterPlaneTask
// Size: 0x10 // Inherited bytes: 0x00
struct FPendingEnterPlaneTask {
	// Fields
	IntProperty FlightNo; // Offset: 0x00 // Size: 0x04
	IntProperty CurrentPlayerIndex; // Offset: 0x04 // Size: 0x04
	IntProperty CurrentAIIndex; // Offset: 0x08 // Size: 0x04
	bool bPlayersFinished; // Offset: 0x0c // Size: 0x01
	bool bAIsFinished; // Offset: 0x0d // Size: 0x01
	bool bFullyFinished; // Offset: 0x0e // Size: 0x01
	char pad_0xF[0x1]; // Offset: 0x0f // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpecialInterval
// Size: 0x1c // Inherited bytes: 0x00
struct FSpecialInterval {
	// Fields
	bool bUsingRatio; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float StartRatio; // Offset: 0x04 // Size: 0x04
	float EndRatio; // Offset: 0x08 // Size: 0x04
	struct FVector2D StartPoint; // Offset: 0x0c // Size: 0x08
	struct FVector2D EndPoint; // Offset: 0x14 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlaneData
// Size: 0xa8 // Inherited bytes: 0x00
struct FPlaneData {
	// Fields
	IntProperty FlightNo; // Offset: 0x00 // Size: 0x04
	bool bStarted; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct AActor* ThePlane; // Offset: 0x08 // Size: 0x08
	bool bCanJump; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector PlaneVelocity; // Offset: 0x14 // Size: 0x0c
	struct FVector PlaneStartLoc; // Offset: 0x20 // Size: 0x0c
	struct FVector PlaneEndLoc; // Offset: 0x2c // Size: 0x0c
	struct FVector2D CanJumpLoc; // Offset: 0x38 // Size: 0x08
	struct FVector2D ForceJumpLoc; // Offset: 0x40 // Size: 0x08
	float PlaneHeight; // Offset: 0x48 // Size: 0x04
	IntProperty TotalPlayerNum; // Offset: 0x4c // Size: 0x04
	struct TArray<struct APlayerController*> TotalPlayers; // Offset: 0x50 // Size: 0x10
	struct TArray<struct APlayerController*> CurPlayers; // Offset: 0x60 // Size: 0x10
	IntProperty TotalAINum; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<struct AAIController*> TotalAIs; // Offset: 0x78 // Size: 0x10
	struct TArray<struct AAIController*> CurAIs; // Offset: 0x88 // Size: 0x10
	IntProperty CurAINum; // Offset: 0x98 // Size: 0x04
	float FixedJumpPointRate; // Offset: 0x9c // Size: 0x04
	bool bCanFixedJump; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x7]; // Offset: 0xa1 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.SyncPlatformMovement
// Size: 0x0c // Inherited bytes: 0x00
struct FSyncPlatformMovement {
	// Fields
	struct FVector Velocity; // Offset: 0x00 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.TempleItemCollisionData
// Size: 0x03 // Inherited bytes: 0x00
struct FTempleItemCollisionData {
	// Fields
	enum class ECollisionEnabled CollisionType; // Offset: 0x00 // Size: 0x01
	bool bEnable; // Offset: 0x01 // Size: 0x01
	bool bSpecialItemToClose; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerAutoNavOperator
// Size: 0x28 // Inherited bytes: 0x00
struct FPlayerAutoNavOperator {
	// Fields
	bool bIsCached; // Offset: 0x00 // Size: 0x01
	enum class EPlayerAutoNavMode CurMode; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	StrProperty TargetParam; // Offset: 0x08 // Size: 0x10
	struct FVector TargetDesc; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterTakeDamageResult
// Size: 0x168 // Inherited bytes: 0x00
struct FCharacterTakeDamageResult {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	float Damage; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct AActor* DamageCauser; // Offset: 0x10 // Size: 0x08
	struct ASTExtraBaseCharacter* Victim; // Offset: 0x18 // Size: 0x08
	struct AController* VictimController; // Offset: 0x20 // Size: 0x08
	struct ASTExtraPlayerController* VictimPC; // Offset: 0x28 // Size: 0x08
	struct ASTExtraPlayerState* VictimPlayerState; // Offset: 0x30 // Size: 0x08
	IntProperty VictimLastHealthStatus; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	uint64 VictimLastStates; // Offset: 0x40 // Size: 0x08
	float VictimLastHealth; // Offset: 0x48 // Size: 0x04
	float VictimLastBreath; // Offset: 0x4c // Size: 0x04
	float VictimLastMoveSpeed; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct ASTExtraCharacter* AttackerCharacter; // Offset: 0x58 // Size: 0x08
	struct ASTExtraBaseCharacter* AttackerBaseCharacter; // Offset: 0x60 // Size: 0x08
	struct AController* AttackController; // Offset: 0x68 // Size: 0x08
	struct ASTExtraPlayerController* AttackerPC; // Offset: 0x70 // Size: 0x08
	struct ASTExtraPlayerState* AttackerPlayerState; // Offset: 0x78 // Size: 0x08
	bool AttackerIsTeammate; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x3]; // Offset: 0x81 // Size: 0x03
	float DamageValue[0xd]; // Offset: 0x84 // Size: 0x34
	IntProperty ExtractDamageType; // Offset: 0xb8 // Size: 0x04
	IntProperty DamageItemID; // Offset: 0xbc // Size: 0x04
	bool bHeadShoot; // Offset: 0xc0 // Size: 0x01
	enum class EAvatarDamagePosition DamageHitPos; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x2]; // Offset: 0xc2 // Size: 0x02
	struct FVector HitImpulseDir; // Offset: 0xc4 // Size: 0x0c
	struct FHitResult HitInfo; // Offset: 0xd0 // Size: 0x88
	float ConsumeHp; // Offset: 0x158 // Size: 0x04
	IntProperty ConsumeDamageRet; // Offset: 0x15c // Size: 0x04
	bool IsMakeDeath; // Offset: 0x160 // Size: 0x01
	bool IsMakeDying; // Offset: 0x161 // Size: 0x01
	char pad_0x162[0x2]; // Offset: 0x162 // Size: 0x02
	IntProperty HSChangeMargin; // Offset: 0x164 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExtractDamageParam
// Size: 0x18 // Inherited bytes: 0x00
struct FExtractDamageParam {
	// Fields
	IntProperty DamageType; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> KillFXItemID; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.HItResuktWithVisbility
// Size: 0x90 // Inherited bytes: 0x00
struct FHItResuktWithVisbility {
	// Fields
	char pad_0x0[0x90]; // Offset: 0x00 // Size: 0x90
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomTypeIDDamageEvent
// Size: 0x18 // Inherited bytes: 0x10
struct FCustomTypeIDDamageEvent : FDamageEvent {
	// Fields
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.LowTemperatureDamageEvent
// Size: 0xb0 // Inherited bytes: 0xb0
struct FLowTemperatureDamageEvent : FSTPointDamageEvent {
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillDamageEvent
// Size: 0xc0 // Inherited bytes: 0xb0
struct FSkillDamageEvent : FSTPointDamageEvent {
	// Fields
	char pad_0xB0[0x10]; // Offset: 0xb0 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PoisonFogDamageEvent
// Size: 0xb0 // Inherited bytes: 0xb0
struct FPoisonFogDamageEvent : FSTPointDamageEvent {
};

// Object Name: ScriptStruct ShadowTrackerExtra.PullLeapParam
// Size: 0x30 // Inherited bytes: 0x00
struct FPullLeapParam {
	// Fields
	float BlockDis; // Offset: 0x00 // Size: 0x04
	float BlockHeight; // Offset: 0x04 // Size: 0x04
	struct UCurveFloat* UpwardCurve; // Offset: 0x08 // Size: 0x08
	struct UCurveFloat* ForwardCurve; // Offset: 0x10 // Size: 0x08
	bool bForceStartXY; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct UAnimSequence* Anim; // Offset: 0x20 // Size: 0x08
	float AnimTime; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetCoopVaultState
// Size: 0x38 // Inherited bytes: 0x00
struct FNetCoopVaultState {
	// Fields
	enum class ECoopVaultRole SelfRole; // Offset: 0x00 // Size: 0x01
	enum class ECoopVaultRole AnotherRole; // Offset: 0x01 // Size: 0x01
	enum class ECoopVaultStage SelfStage; // Offset: 0x02 // Size: 0x01
	enum class ECoopVaultStage AnotherStage; // Offset: 0x03 // Size: 0x01
	char SubStageInfo; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct ASTExtraBaseCharacter* CoopCharacter; // Offset: 0x08 // Size: 0x08
	struct FVector StartLocation; // Offset: 0x10 // Size: 0x0c
	struct FVector StartDirection; // Offset: 0x1c // Size: 0x0c
	struct FVector ClimbPoint; // Offset: 0x28 // Size: 0x0c
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CoopVaultState
// Size: 0x18 // Inherited bytes: 0x00
struct FCoopVaultState {
	// Fields
	enum class ECoopVaultRole Role; // Offset: 0x00 // Size: 0x01
	enum class ECoopVaultStage Stage; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct ASTExtraBaseCharacter* CoopCharacter; // Offset: 0x08 // Size: 0x08
	char SubStageInfo; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.VaultDataMap
// Size: 0x98 // Inherited bytes: 0x00
struct FVaultDataMap {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct UAnimMontage* AnimMontage; // Offset: 0x10 // Size: 0x28
	struct TArray<struct FVaultCheckRule> CheckRuleList; // Offset: 0x38 // Size: 0x10
	MapProperty VaultData; // Offset: 0x48 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.VaultDataParam
// Size: 0x70 // Inherited bytes: 0x00
struct FVaultDataParam {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty montageSectionName; // Offset: 0x08 // Size: 0x10
	struct UCurveFloat* upCurve; // Offset: 0x18 // Size: 0x08
	struct UCurveFloat* ForwardCurve; // Offset: 0x20 // Size: 0x08
	float BlockDis; // Offset: 0x28 // Size: 0x04
	float BlockHeight; // Offset: 0x2c // Size: 0x04
	float blokcThicklength; // Offset: 0x30 // Size: 0x04
	bool isjump; // Offset: 0x34 // Size: 0x01
	bool forceStartSync; // Offset: 0x35 // Size: 0x01
	char pad_0x36[0x2]; // Offset: 0x36 // Size: 0x02
	float CountTime; // Offset: 0x38 // Size: 0x04
	float playSpeed; // Offset: 0x3c // Size: 0x04
	float speedChangeTime; // Offset: 0x40 // Size: 0x04
	float changeSpeedRate; // Offset: 0x44 // Size: 0x04
	float StartFaceCameraTime; // Offset: 0x48 // Size: 0x04
	bool standState; // Offset: 0x4c // Size: 0x01
	bool walkState; // Offset: 0x4d // Size: 0x01
	bool SprintState; // Offset: 0x4e // Size: 0x01
	bool isPutUpGun; // Offset: 0x4f // Size: 0x01
	float BreakWindowDelayTime; // Offset: 0x50 // Size: 0x04
	bool isCancelable; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	float MinCancelVTimer; // Offset: 0x58 // Size: 0x04
	float MaxCancelVTimer; // Offset: 0x5c // Size: 0x04
	bool fallingVault; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
	float fallingvaultMinHeight; // Offset: 0x64 // Size: 0x04
	struct UCurveFloat* CameraTargetOffset; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VaultCheckRule
// Size: 0x10 // Inherited bytes: 0x00
struct FVaultCheckRule {
	// Fields
	float CheckHeight; // Offset: 0x00 // Size: 0x04
	float standCheckDis; // Offset: 0x04 // Size: 0x04
	float walkCheckDis; // Offset: 0x08 // Size: 0x04
	float sprintCheckDis; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnDelayAddItemList
// Size: 0x10 // Inherited bytes: 0x00
struct FRespawnDelayAddItemList {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnDelayAddItem
// Size: 0x08 // Inherited bytes: 0x00
struct FRespawnDelayAddItem {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnIgnoreItemType
// Size: 0x10 // Inherited bytes: 0x00
struct FRespawnIgnoreItemType {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnKeepAllItemData
// Size: 0x20 // Inherited bytes: 0x00
struct FRespawnKeepAllItemData {
	// Fields
	struct TArray<struct FRespawnKeepItemData> ItemDatas; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FRespawnKeepWeaponData> WeaponDatas; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnKeepItemData
// Size: 0x20 // Inherited bytes: 0x00
struct FRespawnKeepItemData {
	// Fields
	IntProperty ItemTypeID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	bool TotalNumLimit; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnKeepWeaponData
// Size: 0x48 // Inherited bytes: 0x20
struct FRespawnKeepWeaponData : FRespawnKeepItemData {
	// Fields
	enum class ESurviveWeaponPropSlot WeaponSlot; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<struct FRespawnKeepItemData> AttachmentDatas; // Offset: 0x28 // Size: 0x10
	IntProperty ClipBulletNum; // Offset: 0x38 // Size: 0x04
	enum class EWeaponShootIntervalMode WeaponShootIntervalMode; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	IntProperty WeaponShootType; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplaceWeaponDataMap
// Size: 0x50 // Inherited bytes: 0x00
struct FReplaceWeaponDataMap {
	// Fields
	MapProperty ReplaceWeaponDataMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplaceWeaponData
// Size: 0xd8 // Inherited bytes: 0x00
struct FReplaceWeaponData {
	// Fields
	IntProperty WeaponId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FBattleItemData WeaponItemData; // Offset: 0x08 // Size: 0xc0
	struct TArray<struct FBattleItemData> WeaponAssociateItemDataList; // Offset: 0xc8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TombBoxAvatarSkinInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FTombBoxAvatarSkinInfo {
	// Fields
	IntProperty AvatarID; // Offset: 0x00 // Size: 0x04
	bool bHasSpawned; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemTombParticle
// Size: 0x88 // Inherited bytes: 0x00
struct FItemTombParticle {
	// Fields
	struct UParticleSystem* SoftPS; // Offset: 0x00 // Size: 0x28
	struct UParticleSystemComponent* PS; // Offset: 0x28 // Size: 0x08
	SetProperty ItemSpecificIDArray; // Offset: 0x30 // Size: 0x50
	char pad_0x80[0x8]; // Offset: 0x80 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TombboxLifeSpanStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FTombboxLifeSpanStruct {
	// Fields
	struct AUAEGameMode* GameModeClass; // Offset: 0x00 // Size: 0x08
	IntProperty LifeSpan; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.StateTime
// Size: 0x0c // Inherited bytes: 0x00
struct FStateTime {
	// Fields
	bool bInState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float StartTime; // Offset: 0x04 // Size: 0x04
	float ExpectedEndTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UnderEnermyAttackCharacter
// Size: 0x48 // Inherited bytes: 0x00
struct FUnderEnermyAttackCharacter {
	// Fields
	float FinalDamage; // Offset: 0x00 // Size: 0x04
	float LastHealth; // Offset: 0x04 // Size: 0x04
	char DamageHitPos; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	uint64 OldStates; // Offset: 0x10 // Size: 0x08
	bool bFatalHealthCost; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	StrProperty BigHeadDurabilityIndexName; // Offset: 0x20 // Size: 0x10
	StrProperty BigBodyDurabilityIndexName; // Offset: 0x30 // Size: 0x10
	float OldBigHeadDurability; // Offset: 0x40 // Size: 0x04
	float OldBigBodyDurability; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FatalDamageParameter
// Size: 0xc0 // Inherited bytes: 0x00
struct FFatalDamageParameter {
	// Fields
	struct FFatalDamageStringParameter String; // Offset: 0x00 // Size: 0x70
	IntProperty DamageType; // Offset: 0x70 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x74 // Size: 0x04
	bool IsHeadShot; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	IntProperty ResultHealthStatus; // Offset: 0x7c // Size: 0x04
	IntProperty Relationship; // Offset: 0x80 // Size: 0x04
	IntProperty PreviousHealthStatus; // Offset: 0x84 // Size: 0x04
	IntProperty realKillerNewKillNum; // Offset: 0x88 // Size: 0x04
	uint32_t CauserKey; // Offset: 0x8c // Size: 0x04
	uint32_t VictimKey; // Offset: 0x90 // Size: 0x04
	IntProperty CauserWeaponAvatarID; // Offset: 0x94 // Size: 0x04
	IntProperty CauserClothAvatarID; // Offset: 0x98 // Size: 0x04
	IntProperty CauserType; // Offset: 0x9c // Size: 0x04
	IntProperty VictimType; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<char> ExpandDataContent; // Offset: 0xa8 // Size: 0x10
	IntProperty AssistNum; // Offset: 0xb8 // Size: 0x04
	bool isCausedByDevliver; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.FatalDamageStringParameter
// Size: 0x70 // Inherited bytes: 0x00
struct FFatalDamageStringParameter {
	// Fields
	StrProperty causerName; // Offset: 0x00 // Size: 0x10
	StrProperty VictimName; // Offset: 0x10 // Size: 0x10
	StrProperty FuzzyCauserName; // Offset: 0x20 // Size: 0x10
	StrProperty FuzzyVictimName; // Offset: 0x30 // Size: 0x10
	StrProperty RealKillerName; // Offset: 0x40 // Size: 0x10
	StrProperty CauserNation; // Offset: 0x50 // Size: 0x10
	StrProperty VictimNation; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirDropVisionInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FAirDropVisionInfo {
	// Fields
	IntProperty AirDropId; // Offset: 0x00 // Size: 0x04
	struct FVector Position; // Offset: 0x04 // Size: 0x0c
	bool IsSmoking; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.IslandInteractionEmoteConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FIslandInteractionEmoteConfig {
	// Fields
	IntProperty PrepareEmoteId; // Offset: 0x00 // Size: 0x04
	IntProperty SelfEmoteId; // Offset: 0x04 // Size: 0x04
	IntProperty OtherEmoteId; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponVisualBulletClientModeConfig
// Size: 0xb0 // Inherited bytes: 0x00
struct FWeaponVisualBulletClientModeConfig {
	// Fields
	struct FWeaponVisualBulletCameraModeConfig AutonomousClientSetting; // Offset: 0x00 // Size: 0x30
	struct FWeaponVisualBulletCameraModeConfig OBPawnPerspectiveClientSetting; // Offset: 0x30 // Size: 0x30
	struct FWeaponVisualBulletCameraModeConfig ReplayPawnPerspectiveClientSetting; // Offset: 0x60 // Size: 0x30
	struct FWeaponVisualBulletItemConfig DefaultSetting; // Offset: 0x90 // Size: 0x10
	struct FWeaponVisualBulletItemConfig ReplayDefaultSetting; // Offset: 0xa0 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponVisualBulletCameraModeConfig
// Size: 0x30 // Inherited bytes: 0x00
struct FWeaponVisualBulletCameraModeConfig {
	// Fields
	struct FWeaponVisualBulletItemConfig FPPSetting; // Offset: 0x00 // Size: 0x10
	struct FWeaponVisualBulletItemConfig TPPSetting; // Offset: 0x10 // Size: 0x10
	struct FWeaponVisualBulletItemConfig GunADSSetting; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomMiniMapGuideLineInfo
// Size: 0x3c // Inherited bytes: 0x00
struct FCustomMiniMapGuideLineInfo {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	enum class EAddMarkFlag MapAdded; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	struct FVector StartLoc; // Offset: 0x0c // Size: 0x0c
	struct FVector EndLoc; // Offset: 0x18 // Size: 0x0c
	struct FLinearColor DrawColor; // Offset: 0x24 // Size: 0x10
	float LineDashSize; // Offset: 0x34 // Size: 0x04
	float LineThickness; // Offset: 0x38 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RealTimeMarkData
// Size: 0x18 // Inherited bytes: 0x00
struct FRealTimeMarkData {
	// Fields
	struct FVector_NetQuantize Location; // Offset: 0x00 // Size: 0x0c
	IntProperty CustomState; // Offset: 0x0c // Size: 0x04
	bool bIsHide; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty TypeId; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SlotWeaponData
// Size: 0x18 // Inherited bytes: 0x00
struct FSlotWeaponData {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> AttachMentIDList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleDamageRepData
// Size: 0x28 // Inherited bytes: 0x00
struct FSimpleDamageRepData {
	// Fields
	float Damage; // Offset: 0x00 // Size: 0x04
	float CurrentHeath; // Offset: 0x04 // Size: 0x04
	bool IsFatalHealthCost; // Offset: 0x08 // Size: 0x01
	bool IsHeadShotDamage; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
	struct APawn* DamageInstigatorPawn; // Offset: 0x10 // Size: 0x08
	struct APawn* DamageReceiver; // Offset: 0x18 // Size: 0x08
	IntProperty NetCounter; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SuperAirDropBoxDataItem
// Size: 0x10 // Inherited bytes: 0x00
struct FSuperAirDropBoxDataItem {
	// Fields
	float GenerateRate; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UDataTable* Table; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SoundData
// Size: 0x14 // Inherited bytes: 0x00
struct FSoundData {
	// Fields
	enum class FSoundType SoundType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector SoundDir; // Offset: 0x04 // Size: 0x0c
	float SoundVolume; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AkEventTableRow
// Size: 0x18 // Inherited bytes: 0x08
struct FAkEventTableRow : FTableRowBase {
	// Fields
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UAkAudioEvent* AkEvent; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpGlobalDAndWrapperTableRow
// Size: 0x18 // Inherited bytes: 0x08
struct FPickUpGlobalDAndWrapperTableRow : FTableRowBase {
	// Fields
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct APickUpWrapperActor* Template; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpActionReplicatedDataBroadcast
// Size: 0x0c // Inherited bytes: 0x00
struct FPickUpActionReplicatedDataBroadcast {
	// Fields
	IntProperty ActionID; // Offset: 0x00 // Size: 0x04
	IntProperty TargetPickUpItemID; // Offset: 0x04 // Size: 0x04
	enum class EHandlePickUpActionReplicatedDataActionType ActionType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpActionReplicatedData
// Size: 0x20 // Inherited bytes: 0x00
struct FPickUpActionReplicatedData {
	// Fields
	IntProperty ActionID; // Offset: 0x00 // Size: 0x04
	IntProperty TargetPickUpItemID; // Offset: 0x04 // Size: 0x04
	struct AActor* ServerTargetActor; // Offset: 0x08 // Size: 0x08
	struct AActor* WrapperActor; // Offset: 0x10 // Size: 0x08
	enum class EHandlePickUpActionReplicatedDataActionType ActionType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponComponentItemData
// Size: 0x1d0 // Inherited bytes: 0x00
struct FWeaponComponentItemData {
	// Fields
	struct FPickUpGlobalDataTableRow PickUpGlobalDataTableRow; // Offset: 0x00 // Size: 0x1b0
	struct FWeaponComponentDataTableRow WeaponComponentDataTableRow; // Offset: 0x1b0 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.SurviveTableRowBase
// Size: 0x10 // Inherited bytes: 0x08
struct FSurviveTableRowBase : FTableRowBase {
	// Fields
	IntProperty ID; // Offset: 0x08 // Size: 0x04
	IntProperty PickUpSoundID; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponComponentDataTableRow
// Size: 0x20 // Inherited bytes: 0x10
struct FWeaponComponentDataTableRow : FSurviveTableRowBase {
	// Fields
	IntProperty WeaponComponentID; // Offset: 0x10 // Size: 0x04
	enum class EWeaponComponentType Type; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct UStaticMesh* ShowMesh; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PickUpGlobalDataTableRow
// Size: 0x1b0 // Inherited bytes: 0x10
struct FPickUpGlobalDataTableRow : FSurviveTableRowBase {
	// Fields
	enum class ESurvivePickUpGlobalCategory SurvivePickUpGlobalCategory; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct FSlateBrush SmallProfileImage; // Offset: 0x18 // Size: 0xb8
	struct FSlateBrush LargerProfileImage; // Offset: 0xd0 // Size: 0xb8
	StrProperty Name; // Offset: 0x188 // Size: 0x10
	StrProperty Description; // Offset: 0x198 // Size: 0x10
	IntProperty DisplayPriority; // Offset: 0x1a8 // Size: 0x04
	char pad_0x1AC[0x4]; // Offset: 0x1ac // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerEquipmentItemData
// Size: 0x1d0 // Inherited bytes: 0x00
struct FPlayerEquipmentItemData {
	// Fields
	struct FPickUpGlobalDataTableRow PickUpGlobalDataTableRow; // Offset: 0x00 // Size: 0x1b0
	struct FPlayerEquipmentDataTableRow PlayerEquipmentDataTableRow; // Offset: 0x1b0 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.PlayerEquipmentDataTableRow
// Size: 0x20 // Inherited bytes: 0x10
struct FPlayerEquipmentDataTableRow : FSurviveTableRowBase {
	// Fields
	IntProperty PlayerEquipmentID; // Offset: 0x10 // Size: 0x04
	enum class EPlayerEquipmentSlotType Type; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float DamageMultiplyAdditionalRate; // Offset: 0x18 // Size: 0x04
	bool bIsAvata; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.MainSlotItemData
// Size: 0x1e0 // Inherited bytes: 0x00
struct FMainSlotItemData {
	// Fields
	struct FPickUpGlobalDataTableRow PickUpGlobalDataTableRow; // Offset: 0x00 // Size: 0x1b0
	struct FWeaponDataTableRow WeaponDataTableRow; // Offset: 0x1b0 // Size: 0x28
	struct AActor* TargetActor; // Offset: 0x1d8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponDataTableRow
// Size: 0x28 // Inherited bytes: 0x10
struct FWeaponDataTableRow : FSurviveTableRowBase {
	// Fields
	IntProperty WeaponId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct ASTExtraWeapon* WeaponTemplate; // Offset: 0x18 // Size: 0x08
	enum class ESurvivePickUpCategory SurvivePickUpCategory; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.UseBackpackItemParams
// Size: 0x01 // Inherited bytes: 0x00
struct FUseBackpackItemParams {
	// Fields
	enum class ESurviveWeaponPropSlot TargetEquipWeaponComponentMainSlot; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackpackItemData
// Size: 0x1c8 // Inherited bytes: 0x00
struct FBackpackItemData {
	// Fields
	IntProperty Num; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FPickUpGlobalDataTableRow BaseData; // Offset: 0x08 // Size: 0x1b0
	bool bIsUsing; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x3]; // Offset: 0x1b9 // Size: 0x03
	float FinishPercentage; // Offset: 0x1bc // Size: 0x04
	enum class ESurvivePickUpGlobalCategory SurvivePickUpGlobalCategory; // Offset: 0x1c0 // Size: 0x01
	char pad_0x1C1[0x7]; // Offset: 0x1c1 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.OutlineConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FOutlineConfig {
	// Fields
	struct FLinearColor Color; // Offset: 0x00 // Size: 0x10
	float Thickness; // Offset: 0x10 // Size: 0x04
	bool IsEnable; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.PredictLineMaterialParams
// Size: 0x10 // Inherited bytes: 0x00
struct FPredictLineMaterialParams {
	// Fields
	struct UMaterialParameterCollection* MaterialParamCollection; // Offset: 0x00 // Size: 0x08
	struct FName ParamName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PredictLineConfigParams
// Size: 0x0c // Inherited bytes: 0x00
struct FPredictLineConfigParams {
	// Fields
	bool bShowEndPointEffect; // Offset: 0x00 // Size: 0x01
	bool bShowEndPointEffectWhenNoBlock; // Offset: 0x01 // Size: 0x01
	bool bSetEndPointEffectRotation; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	IntProperty ShowSplineCount; // Offset: 0x04 // Size: 0x04
	float ShowSplineCountPercent; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomDropRule
// Size: 0x03 // Inherited bytes: 0x00
struct FCustomDropRule {
	// Fields
	bool bTraceIgnorePawn; // Offset: 0x00 // Size: 0x01
	bool bTraceIgnoreWarteringArea; // Offset: 0x01 // Size: 0x01
	bool bAttachToTargetActor; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorRotationMoation
// Size: 0x2c // Inherited bytes: 0x00
struct FDoorRotationMoation {
	// Fields
	bool IgnoreMotionState; // Offset: 0x00 // Size: 0x01
	bool bIsActive; // Offset: 0x01 // Size: 0x01
	bool bIsExDoor; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	IntProperty FromState; // Offset: 0x04 // Size: 0x04
	IntProperty ToState; // Offset: 0x08 // Size: 0x04
	float RotationFrom; // Offset: 0x0c // Size: 0x04
	float RotationTo; // Offset: 0x10 // Size: 0x04
	float RotationCurrent; // Offset: 0x14 // Size: 0x04
	float RotationLerpTime; // Offset: 0x18 // Size: 0x04
	float RotationCurrentTime; // Offset: 0x1c // Size: 0x04
	float RotationCurrentLerpTime; // Offset: 0x20 // Size: 0x04
	struct TWeakObjectPtr<struct UStaticMeshComponent> DoorMesh; // Offset: 0x24 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorOpenConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FDoorOpenConfig {
	// Fields
	IntProperty DoorState; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct ASTExtraBaseCharacter* Character; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorNinjaMoation
// Size: 0x6c // Inherited bytes: 0x00
struct FDoorNinjaMoation {
	// Fields
	bool IgnoreMotionState; // Offset: 0x00 // Size: 0x01
	bool bIsActive; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty FromState; // Offset: 0x04 // Size: 0x04
	IntProperty ToState; // Offset: 0x08 // Size: 0x04
	struct FVector LocationFrom; // Offset: 0x0c // Size: 0x0c
	struct FVector LocationMid; // Offset: 0x18 // Size: 0x0c
	struct FVector LocationTo; // Offset: 0x24 // Size: 0x0c
	struct FVector LocationCurrent; // Offset: 0x30 // Size: 0x0c
	float SlideLerpTime; // Offset: 0x3c // Size: 0x04
	float SlideCurrentTime; // Offset: 0x40 // Size: 0x04
	struct FVector SlideAxis; // Offset: 0x44 // Size: 0x0c
	float SlideDistance; // Offset: 0x50 // Size: 0x04
	struct FVector MidOffset; // Offset: 0x54 // Size: 0x0c
	float MidTimeRatio; // Offset: 0x60 // Size: 0x04
	struct TWeakObjectPtr<struct UStaticMeshComponent> DoorMesh; // Offset: 0x64 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.DoorSlideMoation
// Size: 0x50 // Inherited bytes: 0x00
struct FDoorSlideMoation {
	// Fields
	bool IgnoreMotionState; // Offset: 0x00 // Size: 0x01
	bool bIsActive; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	IntProperty FromState; // Offset: 0x04 // Size: 0x04
	IntProperty ToState; // Offset: 0x08 // Size: 0x04
	struct FVector LocationFrom; // Offset: 0x0c // Size: 0x0c
	struct FVector LocationTo; // Offset: 0x18 // Size: 0x0c
	struct FVector LocationCurrent; // Offset: 0x24 // Size: 0x0c
	float SlideLerpTime; // Offset: 0x30 // Size: 0x04
	float SlideCurrentTime; // Offset: 0x34 // Size: 0x04
	struct FVector SlideAxis; // Offset: 0x38 // Size: 0x0c
	float SlideDistance; // Offset: 0x44 // Size: 0x04
	struct TWeakObjectPtr<struct UStaticMeshComponent> DoorMesh; // Offset: 0x48 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.PVECircleDeploymentConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FPVECircleDeploymentConfig {
	// Fields
	IntProperty CircleID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct AActor* Location; // Offset: 0x08 // Size: 0x08
	float Radius; // Offset: 0x10 // Size: 0x04
	float MoveTime; // Offset: 0x14 // Size: 0x04
	float Pain; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ProjectileDistanceStrategyConfig
// Size: 0x14 // Inherited bytes: 0x00
struct FProjectileDistanceStrategyConfig {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float DirectShotDistance; // Offset: 0x04 // Size: 0x04
	float MaxParabolicDistanceRatio; // Offset: 0x08 // Size: 0x04
	float MaxRangeLaunchAngle; // Offset: 0x0c // Size: 0x04
	float HeightDiffCorrectionThreshold; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HighArcParam
// Size: 0x08 // Inherited bytes: 0x00
struct FHighArcParam {
	// Fields
	float HeightDiff; // Offset: 0x00 // Size: 0x04
	float GravityScale; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.IntelligentSignCheckParam
// Size: 0xd8 // Inherited bytes: 0x00
struct FIntelligentSignCheckParam {
	// Fields
	struct TArray<enum class EObjectTypeQuery> CheckObjectTypes; // Offset: 0x00 // Size: 0x10
	MapProperty ValidActorClass; // Offset: 0x10 // Size: 0x50
	MapProperty ValidActorTags; // Offset: 0x60 // Size: 0x50
	float SphereCheckRadius; // Offset: 0xb0 // Size: 0x04
	float BeginDistance; // Offset: 0xb4 // Size: 0x04
	float CheckDistance; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct TArray<struct FVector> SignOffsets; // Offset: 0xc0 // Size: 0x10
	float Angle; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DangerousSignInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FDangerousSignInfo {
	// Fields
	StrProperty MsgID; // Offset: 0x00 // Size: 0x10
	struct FVector LastDangerousLocation; // Offset: 0x10 // Size: 0x0c
	float LastMarkDangerousTime; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.QuickSignIDArray
// Size: 0x10 // Inherited bytes: 0x00
struct FQuickSignIDArray {
	// Fields
	struct TArray<StrProperty> InnerArray; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReportQuickSignMsg
// Size: 0x14 // Inherited bytes: 0x00
struct FReportQuickSignMsg {
	// Fields
	struct FVector HitPos; // Offset: 0x00 // Size: 0x0c
	uint32_t ItemId; // Offset: 0x0c // Size: 0x04
	IntProperty MsgType; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RadiationCircleData
// Size: 0x44 // Inherited bytes: 0x00
struct FRadiationCircleData {
	// Fields
	bool bNeedUpdateCircle; // Offset: 0x00 // Size: 0x01
	bool bDrawWhiteCircle; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FVector2D CircleCenter; // Offset: 0x04 // Size: 0x08
	struct FLinearColor CircleColor; // Offset: 0x0c // Size: 0x10
	float CircleRadius; // Offset: 0x1c // Size: 0x04
	float MapWindowExtent; // Offset: 0x20 // Size: 0x04
	struct FVector2D PlayerCoord; // Offset: 0x24 // Size: 0x08
	IntProperty OnPaintType; // Offset: 0x2c // Size: 0x04
	bool bAntiAlias; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct FVector2D BlueCircleCoord; // Offset: 0x34 // Size: 0x08
	struct FVector2D BlueCircleScale; // Offset: 0x3c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.RayProjectileInfo
// Size: 0x34 // Inherited bytes: 0x00
struct FRayProjectileInfo {
	// Fields
	float MinRayLength; // Offset: 0x00 // Size: 0x04
	float RayRadius; // Offset: 0x04 // Size: 0x04
	float RayCheckInterval; // Offset: 0x08 // Size: 0x04
	float RayHitDamage; // Offset: 0x0c // Size: 0x04
	struct FVector HitRayBoxVector; // Offset: 0x10 // Size: 0x0c
	float HitRayZAxisOffset; // Offset: 0x1c // Size: 0x04
	float RaySpeed; // Offset: 0x20 // Size: 0x04
	float CheckHeight; // Offset: 0x24 // Size: 0x04
	enum class EMoveType MoveType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float Dist; // Offset: 0x2c // Size: 0x04
	float ExtraCheckLength; // Offset: 0x30 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillRaySoundEffect
// Size: 0x78 // Inherited bytes: 0x00
struct FSkillRaySoundEffect {
	// Fields
	struct UAkAudioEvent* AkEvent_SoftPtr; // Offset: 0x00 // Size: 0x28
	struct UAkAudioEvent* AkEvent; // Offset: 0x28 // Size: 0x08
	struct UAkAudioEvent* StopAkEvent_SoftPtr; // Offset: 0x30 // Size: 0x28
	struct UAkAudioEvent* StopAkEvent; // Offset: 0x58 // Size: 0x08
	struct FVector LocationOffset; // Offset: 0x60 // Size: 0x0c
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct UAkComponent* AkComp; // Offset: 0x70 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.EmitterData
// Size: 0x0c // Inherited bytes: 0x00
struct FEmitterData {
	// Fields
	IntProperty BeamEmitterIndex; // Offset: 0x00 // Size: 0x04
	IntProperty BeamEmitterSourceIndex; // Offset: 0x04 // Size: 0x04
	IntProperty BeamEmitterTargetIndex; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CallRPCStatistics
// Size: 0x14 // Inherited bytes: 0x00
struct FCallRPCStatistics {
	// Fields
	float costTime; // Offset: 0x00 // Size: 0x04
	IntProperty CallCount; // Offset: 0x04 // Size: 0x04
	IntProperty DiscardCount; // Offset: 0x08 // Size: 0x04
	float MaxCostTimeInSingleFrame; // Offset: 0x0c // Size: 0x04
	char pad_0x10[0x4]; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RPCParamOptimizedSerializer
// Size: 0x10 // Inherited bytes: 0x00
struct FRPCParamOptimizedSerializer {
	// Fields
	struct TArray<char> Data; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ObjectPropertyPair
// Size: 0x10 // Inherited bytes: 0x00
struct FObjectPropertyPair {
	// Fields
	struct TWeakObjectPtr<struct UObject> Object; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct UProperty> Property; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.StateReportData
// Size: 0x18 // Inherited bytes: 0x00
struct FStateReportData {
	// Fields
	struct TArray<IntProperty> States; // Offset: 0x00 // Size: 0x10
	IntProperty MoveType; // Offset: 0x10 // Size: 0x04
	IntProperty ReplicateMovement; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SettingRecordData
// Size: 0x140 // Inherited bytes: 0x00
struct FSettingRecordData {
	// Fields
	MapProperty BoolSettingItems; // Offset: 0x00 // Size: 0x50
	MapProperty IntSettingItems; // Offset: 0x50 // Size: 0x50
	MapProperty FloatSettingItems; // Offset: 0xa0 // Size: 0x50
	MapProperty IntIntMapSettingItems; // Offset: 0xf0 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.IntIntMapData
// Size: 0x50 // Inherited bytes: 0x00
struct FIntIntMapData {
	// Fields
	MapProperty Data; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathHistoryInfo
// Size: 0x1d8 // Inherited bytes: 0x00
struct FDeathHistoryInfo {
	// Fields
	struct FBattleDeathPlaybackInfo BattleDeathPlaybackInfo; // Offset: 0x00 // Size: 0x80
	struct FDeathReplayData DeathReplayData; // Offset: 0x80 // Size: 0x158
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleDeathPlaybackInfo
// Size: 0x80 // Inherited bytes: 0x00
struct FBattleDeathPlaybackInfo {
	// Fields
	float DeathPlaybackStartTime; // Offset: 0x00 // Size: 0x04
	float DeathPlaybackEndTime; // Offset: 0x04 // Size: 0x04
	float DeathPlaybackKeyTime; // Offset: 0x08 // Size: 0x04
	bool bIsSelf; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float PVSVisibleBeforeKeyTime; // Offset: 0x10 // Size: 0x04
	float PVSVisibleAfterKeyTime; // Offset: 0x14 // Size: 0x04
	float PVSInvisibleBeforeKeyTime; // Offset: 0x18 // Size: 0x04
	float PVSInvisibleAfterKeyTime; // Offset: 0x1c // Size: 0x04
	float LastNearDeathTime; // Offset: 0x20 // Size: 0x04
	float FinalDeathTime; // Offset: 0x24 // Size: 0x04
	float StartRecordingTime; // Offset: 0x28 // Size: 0x04
	float StopRecordingTime; // Offset: 0x2c // Size: 0x04
	MapProperty AdditionData; // Offset: 0x30 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyDeathInfo
// Size: 0xb8 // Inherited bytes: 0x00
struct FLobbyDeathInfo {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint64 GameID; // Offset: 0x08 // Size: 0x08
	uint64 SaveTimestamp; // Offset: 0x10 // Size: 0x08
	StrProperty ModeID; // Offset: 0x18 // Size: 0x10
	IntProperty SegmentLevel; // Offset: 0x28 // Size: 0x04
	float TotalTime; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FDeathPeriodInfo> TypeInfoArray; // Offset: 0x30 // Size: 0x10
	StrProperty AppVersion; // Offset: 0x40 // Size: 0x10
	StrProperty SrcVersion; // Offset: 0x50 // Size: 0x10
	enum class EDeathErrorCode ErrorCode; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
	MapProperty AdditionData; // Offset: 0x68 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.DeathPeriodInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FDeathPeriodInfo {
	// Fields
	float DeathTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	MapProperty AdditionalData; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyWonderfulInfo
// Size: 0xc8 // Inherited bytes: 0x00
struct FLobbyWonderfulInfo {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint64 GameID; // Offset: 0x08 // Size: 0x08
	uint64 SaveTimestamp; // Offset: 0x10 // Size: 0x08
	StrProperty ModeID; // Offset: 0x18 // Size: 0x10
	IntProperty SegmentLevel; // Offset: 0x28 // Size: 0x04
	float TotalTime; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FWonderfulTypeInfo> TypeInfoArray; // Offset: 0x30 // Size: 0x10
	StrProperty AppVersion; // Offset: 0x40 // Size: 0x10
	StrProperty SrcVersion; // Offset: 0x50 // Size: 0x10
	enum class EWonderfulErrorCode ErrorCode; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
	struct TArray<struct FWonderfulWeSeeInfo> WeSeeInfoArray; // Offset: 0x68 // Size: 0x10
	MapProperty AdditionData; // Offset: 0x78 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulWeSeeInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FWonderfulWeSeeInfo {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	float EndTime; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulTypeInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FWonderfulTypeInfo {
	// Fields
	char WondefulType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<float> AdditionalData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.BattleWonderfulInfo
// Size: 0xa0 // Inherited bytes: 0x00
struct FBattleWonderfulInfo {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	uint64 GameID; // Offset: 0x08 // Size: 0x08
	StrProperty PlayerName; // Offset: 0x10 // Size: 0x10
	StrProperty OpenID; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FWonderfulPeriodInfo> WonderfulPeriodInfoArray; // Offset: 0x30 // Size: 0x10
	MapProperty WonderfulPeriodSubTypeInfoMap; // Offset: 0x40 // Size: 0x50
	struct TArray<char> CustomInfo; // Offset: 0x90 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulPeriodSubTypeInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FWonderfulPeriodSubTypeInfo {
	// Fields
	struct TArray<struct FWonderfulSubTypeInfo> WonderfulSubTypeInfoList; // Offset: 0x00 // Size: 0x10
	StrProperty AdditionData; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulSubTypeInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FWonderfulSubTypeInfo {
	// Fields
	IntProperty WonderfulType; // Offset: 0x00 // Size: 0x04
	float Time; // Offset: 0x04 // Size: 0x04
	StrProperty AdditionData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulPeriodInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FWonderfulPeriodInfo {
	// Fields
	float WonderfulStartTime; // Offset: 0x00 // Size: 0x04
	float WonderfulEndTime; // Offset: 0x04 // Size: 0x04
	IntProperty WonderfulPeriodIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FWonderfulTypeInfo WondefulTypeInfo; // Offset: 0x10 // Size: 0x18
	struct TArray<char> CustomInfo; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayPawnInfo
// Size: 0x0c // Inherited bytes: 0x00
struct FReplayPawnInfo {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	bool IsEnemy; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty UIIndex; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayTeammateInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FReplayTeammateInfo {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayPreInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FReplayPreInfo {
	// Fields
	enum class EDemoType ReplayType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty ReplayNameStr; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplayEnemyUIInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FReplayEnemyUIInfo {
	// Fields
	IntProperty UIIndex; // Offset: 0x00 // Size: 0x04
	struct FVector WordLocation; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnItemConfigInst
// Size: 0x10 // Inherited bytes: 0x00
struct FRespawnItemConfigInst {
	// Fields
	IntProperty RandomWeight; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct URespawnItemConfig* RespawnItemConfigClass; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnItemMajorGroup
// Size: 0x18 // Inherited bytes: 0x00
struct FRespawnItemMajorGroup {
	// Fields
	IntProperty RandomTimes; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FRespawnItemMinorGroup> MinorGroupList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnItemMinorGroup
// Size: 0x18 // Inherited bytes: 0x00
struct FRespawnItemMinorGroup {
	// Fields
	IntProperty RandomWeight; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FRespawnItem> ItemList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RespawnItem
// Size: 0x08 // Inherited bytes: 0x00
struct FRespawnItem {
	// Fields
	IntProperty ItemTableID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RollItemData
// Size: 0x10 // Inherited bytes: 0x00
struct FRollItemData {
	// Fields
	uint64 InstanceID; // Offset: 0x00 // Size: 0x08
	uint32_t OwnerPlayerKey; // Offset: 0x08 // Size: 0x04
	bool bFinished; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.RollItemResultData
// Size: 0x18 // Inherited bytes: 0x00
struct FRollItemResultData {
	// Fields
	struct TArray<struct FRollItemResult> RollResults; // Offset: 0x00 // Size: 0x10
	bool bRollFinished; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float RollEndTime; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RollItemResult
// Size: 0x40 // Inherited bytes: 0x00
struct FRollItemResult {
	// Fields
	struct FPickUpItemData ItemData; // Offset: 0x00 // Size: 0x38
	IntProperty Roll; // Offset: 0x38 // Size: 0x04
	bool bIsMine; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.StopFireInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FStopFireInfo {
	// Fields
	uint32_t CurClipID; // Offset: 0x00 // Size: 0x04
	IntProperty CurrentBullet; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveBaseInfo_NetQuantize
// Size: 0x50 // Inherited bytes: 0x00
struct FMoveBaseInfo_NetQuantize {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenAppearanceProviders
// Size: 0x10 // Inherited bytes: 0x00
struct FScreenAppearanceProviders {
	// Fields
	struct TArray<struct UScreenAppearanceProvider*> ScreenAppearances; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenAppearanceColorParameter
// Size: 0x18 // Inherited bytes: 0x00
struct FScreenAppearanceColorParameter {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct FLinearColor ParameterValue; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenAppearanceScalarParameter
// Size: 0x10 // Inherited bytes: 0x00
struct FScreenAppearanceScalarParameter {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	float ParameterValue; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenAppearanceLOD_Particle
// Size: 0x28 // Inherited bytes: 0x00
struct FScreenAppearanceLOD_Particle {
	// Fields
	struct UParticleSystem* ParticleTemplate; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenAppearanceLOD_Mesh
// Size: 0x50 // Inherited bytes: 0x00
struct FScreenAppearanceLOD_Mesh {
	// Fields
	struct UStaticMesh* MeshTemplate; // Offset: 0x00 // Size: 0x28
	struct UMaterialInterface* Material; // Offset: 0x28 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenParticleEffect
// Size: 0x40 // Inherited bytes: 0x00
struct FScreenParticleEffect {
	// Fields
	enum class EEnvironmentType EffectType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UParticleSystem* ParticleEffect; // Offset: 0x08 // Size: 0x28
	struct FName ParticleParamName; // Offset: 0x30 // Size: 0x08
	bool KeepWorldRotation; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.AppearanceParameter
// Size: 0x30 // Inherited bytes: 0x00
struct FAppearanceParameter {
	// Fields
	struct FName ParameterName; // Offset: 0x00 // Size: 0x08
	struct UCurveBase* ControlCurve; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.PainMaterials
// Size: 0x80 // Inherited bytes: 0x00
struct FPainMaterials {
	// Fields
	enum class EEnvironmentType EnvironmentType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UMaterialInterface* Pain; // Offset: 0x08 // Size: 0x28
	struct UMaterialInterface* Environment; // Offset: 0x30 // Size: 0x28
	struct UMaterialInterface* PainAndEnvironment; // Offset: 0x58 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.CheckParams
// Size: 0x20 // Inherited bytes: 0x00
struct FCheckParams {
	// Fields
	float CheckAngle; // Offset: 0x00 // Size: 0x04
	IntProperty CheckDistance; // Offset: 0x04 // Size: 0x04
	IntProperty CheckCount; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct AActor* ValidActorClass; // Offset: 0x10 // Size: 0x08
	bool CheckBlock; // Offset: 0x18 // Size: 0x01
	bool PauseCheck; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float CheckFrequency; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenMarkPriorityGroup
// Size: 0x18 // Inherited bytes: 0x00
struct FScreenMarkPriorityGroup {
	// Fields
	IntProperty MaxShowNum; // Offset: 0x00 // Size: 0x04
	IntProperty CurShowNum; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> GroupTypeArray; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenMarkGroupData
// Size: 0x1a8 // Inherited bytes: 0x00
struct FScreenMarkGroupData {
	// Fields
	struct FScreenMarkGroupConfig Config; // Offset: 0x00 // Size: 0xb8
	struct UUIDuplicatedItemPool* UIPool; // Offset: 0xb8 // Size: 0x08
	MapProperty MarkInstanceDataMap; // Offset: 0xc0 // Size: 0x50
	struct TArray<struct UWidget*> HidingUIArr; // Offset: 0x110 // Size: 0x10
	struct TArray<struct UWidget*> ShowingUIArr; // Offset: 0x120 // Size: 0x10
	MapProperty MarkBindingUIMap; // Offset: 0x130 // Size: 0x50
	char pad_0x180[0x8]; // Offset: 0x180 // Size: 0x08
	struct UUAEUserWidget* ScreenMarkPanel; // Offset: 0x188 // Size: 0x08
	struct UCanvasPanel* AddToPanel; // Offset: 0x190 // Size: 0x08
	struct TArray<struct TWeakObjectPtr<struct AActor>> IgnoreBlockArr; // Offset: 0x198 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenMarkInstanceData
// Size: 0x38 // Inherited bytes: 0x00
struct FScreenMarkInstanceData {
	// Fields
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x00 // Size: 0x08
	struct FVector Position; // Offset: 0x08 // Size: 0x0c
	IntProperty CustomInt; // Offset: 0x14 // Size: 0x04
	float CustomFloat; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	StrProperty CustomString; // Offset: 0x20 // Size: 0x10
	bool bIsValid; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenMarkGroupConfig
// Size: 0xb8 // Inherited bytes: 0x00
struct FScreenMarkGroupConfig {
	// Fields
	IntProperty PreloadNum; // Offset: 0x00 // Size: 0x04
	IntProperty MaxWidgetNum; // Offset: 0x04 // Size: 0x04
	float MaxShowDistance; // Offset: 0x08 // Size: 0x04
	float MinShowDistance; // Offset: 0x0c // Size: 0x04
	float UpdateBindingInterval; // Offset: 0x10 // Size: 0x04
	float UpdateBindingIntervalMax; // Offset: 0x14 // Size: 0x04
	float ReduseBindingVelocityThreshold; // Offset: 0x18 // Size: 0x04
	bool bIsBindingActor; // Offset: 0x1c // Size: 0x01
	bool bIsUpdatedByPanel; // Offset: 0x1d // Size: 0x01
	bool bBindOutScreen; // Offset: 0x1e // Size: 0x01
	bool bBindBlocked; // Offset: 0x1f // Size: 0x01
	struct TArray<IntProperty> ExtraCheckObjectTypes; // Offset: 0x20 // Size: 0x10
	struct TArray<struct AActor*> ExtraCheckClasses; // Offset: 0x30 // Size: 0x10
	StrProperty UIPathName; // Offset: 0x40 // Size: 0x10
	bool bCollapseWhenFree; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct FName SkeletaSocketName; // Offset: 0x58 // Size: 0x08
	struct FVector WorldPositionOffset; // Offset: 0x60 // Size: 0x0c
	bool bUseLuaWorldOffset; // Offset: 0x6c // Size: 0x01
	bool bUseLuaWorldSocketName; // Offset: 0x6d // Size: 0x01
	char pad_0x6E[0x2]; // Offset: 0x6e // Size: 0x02
	struct FVector2D UIOffset; // Offset: 0x70 // Size: 0x08
	bool bNeedUpdateState; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	StrProperty PriorityGroupTag; // Offset: 0x80 // Size: 0x10
	char Priority; // Offset: 0x90 // Size: 0x01
	bool bNeedOBShow; // Offset: 0x91 // Size: 0x01
	bool bNeedReplayShow; // Offset: 0x92 // Size: 0x01
	char pad_0x93[0x1]; // Offset: 0x93 // Size: 0x01
	struct FVector2D LimitXY; // Offset: 0x94 // Size: 0x08
	struct FVector2D LimitZW; // Offset: 0x9c // Size: 0x08
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct FName BindActorComponentTag; // Offset: 0xa8 // Size: 0x08
	bool bIgnoreSelfPawnBlock; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActorVectorPair
// Size: 0x18 // Inherited bytes: 0x00
struct FActorVectorPair {
	// Fields
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x00 // Size: 0x08
	struct FVector Vector; // Offset: 0x08 // Size: 0x0c
	IntProperty InstanceID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenRotationMarkGroupData
// Size: 0x148 // Inherited bytes: 0x00
struct FScreenRotationMarkGroupData {
	// Fields
	struct FScreenRotationMarkConfig Config; // Offset: 0x00 // Size: 0x50
	struct UUIDuplicatedItemPool* UIPool; // Offset: 0x50 // Size: 0x08
	struct TArray<struct TWeakObjectPtr<struct AActor>> WorldObjectArr; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FVector> WorldLocationArr; // Offset: 0x68 // Size: 0x10
	struct TArray<struct UWidget*> HidingUIArr; // Offset: 0x78 // Size: 0x10
	struct TArray<struct UWidget*> ShowingUIArr; // Offset: 0x88 // Size: 0x10
	MapProperty BindingActorUIMap; // Offset: 0x98 // Size: 0x50
	MapProperty BindingLocationUIMap; // Offset: 0xe8 // Size: 0x50
	struct UCanvasPanel* RootPanel; // Offset: 0x138 // Size: 0x08
	char pad_0x140[0x8]; // Offset: 0x140 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenRotationMarkConfig
// Size: 0x50 // Inherited bytes: 0x00
struct FScreenRotationMarkConfig {
	// Fields
	struct FScreenRotationRangeValue DistanceRange; // Offset: 0x00 // Size: 0x10
	struct FScreenRotationRangeValue AngleRange; // Offset: 0x10 // Size: 0x10
	struct TWeakObjectPtr<struct AActor> BindActor; // Offset: 0x20 // Size: 0x08
	StrProperty UIPathName; // Offset: 0x28 // Size: 0x10
	float AngleOffset; // Offset: 0x38 // Size: 0x04
	bool bIsIcon; // Offset: 0x3c // Size: 0x01
	bool bIsBindingActor; // Offset: 0x3d // Size: 0x01
	char pad_0x3E[0x2]; // Offset: 0x3e // Size: 0x02
	float UpdateBindingInterval; // Offset: 0x40 // Size: 0x04
	IntProperty DefaultNum; // Offset: 0x44 // Size: 0x04
	float Radius; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenRotationRangeValue
// Size: 0x10 // Inherited bytes: 0x00
struct FScreenRotationRangeValue {
	// Fields
	float MaxValue; // Offset: 0x00 // Size: 0x04
	bool IsCloseOutMaxValue; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float MinValue; // Offset: 0x08 // Size: 0x04
	bool IsCloseInMinValue; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.StatueBaseParam
// Size: 0x30 // Inherited bytes: 0x00
struct FStatueBaseParam {
	// Fields
	StrProperty MatPath; // Offset: 0x00 // Size: 0x10
	StrProperty TeamFlag; // Offset: 0x10 // Size: 0x10
	StrProperty TeamName; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SectorRangeData
// Size: 0x08 // Inherited bytes: 0x00
struct FSectorRangeData {
	// Fields
	float Angle; // Offset: 0x00 // Size: 0x04
	float Distance; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SeekAndLockRPGBulletLaunchParams
// Size: 0x80 // Inherited bytes: 0x00
struct FSeekAndLockRPGBulletLaunchParams {
	// Fields
	struct FProjectileBulletLaunchParams BaseParam; // Offset: 0x00 // Size: 0x60
	struct FRPGBulletSeekAndLockData SeekAndLockData; // Offset: 0x60 // Size: 0x14
	char pad_0x74[0xc]; // Offset: 0x74 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.RPGBulletSeekAndLockData
// Size: 0x14 // Inherited bytes: 0x00
struct FRPGBulletSeekAndLockData {
	// Fields
	float DirectFlyTime; // Offset: 0x00 // Size: 0x04
	float TurnDirectionRadSpeed; // Offset: 0x04 // Size: 0x04
	float FollowTargetTime; // Offset: 0x08 // Size: 0x04
	struct TWeakObjectPtr<struct AActor> FollowTarget; // Offset: 0x0c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.HistoryLockMapDataItem
// Size: 0x0c // Inherited bytes: 0x00
struct FHistoryLockMapDataItem {
	// Fields
	float LockTime; // Offset: 0x00 // Size: 0x04
	float FrameLength; // Offset: 0x04 // Size: 0x04
	float CacheTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TraceShootData
// Size: 0x44 // Inherited bytes: 0x00
struct FTraceShootData {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	struct FRotator ShootRotate; // Offset: 0x04 // Size: 0x0c
	struct FVector TraceStart; // Offset: 0x10 // Size: 0x0c
	struct FVector TraceEnd; // Offset: 0x1c // Size: 0x0c
	enum class ETraceShootType ShootMode; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	struct FVector ShootTargetLoc; // Offset: 0x2c // Size: 0x0c
	float Deviation; // Offset: 0x38 // Size: 0x04
	struct FVector2D BackScreenPos; // Offset: 0x3c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TargetBodyData
// Size: 0x08 // Inherited bytes: 0x00
struct FTargetBodyData {
	// Fields
	enum class EAvatarDamagePosition DamagePosition; // Offset: 0x00 // Size: 0x01
	enum class ETargetBodyType TargetBodyType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float DamageScale; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FXDistancaScaleStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FFXDistancaScaleStruct {
	// Fields
	float FXStartScaleDistance; // Offset: 0x00 // Size: 0x04
	float FXEndScaleDistance; // Offset: 0x04 // Size: 0x04
	float FXStartScaleValue; // Offset: 0x08 // Size: 0x04
	float FXEndScaleValue; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponReloadCfg
// Size: 0x0c // Inherited bytes: 0x00
struct FWeaponReloadCfg {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	float TimeMagOut; // Offset: 0x04 // Size: 0x04
	float TimeMagIn; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletThroughBodyConfig
// Size: 0x58 // Inherited bytes: 0x00
struct FBulletThroughBodyConfig {
	// Fields
	MapProperty BodyMap; // Offset: 0x00 // Size: 0x50
	float Attenuation; // Offset: 0x50 // Size: 0x04
	IntProperty MaxTime; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ExtendBulletNumAttachment
// Size: 0x08 // Inherited bytes: 0x00
struct FExtendBulletNumAttachment {
	// Fields
	IntProperty TypeSpecificID; // Offset: 0x00 // Size: 0x04
	IntProperty ExtendMaxBulletNumInOneClip; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShovelAntiCheat
// Size: 0x88 // Inherited bytes: 0x00
struct FShovelAntiCheat {
	// Fields
	float DataSendInterval; // Offset: 0x00 // Size: 0x04
	float DataSampleInterval; // Offset: 0x04 // Size: 0x04
	float SampleMoveVelocityTorelate; // Offset: 0x08 // Size: 0x04
	float CheatLockTime; // Offset: 0x0c // Size: 0x04
	IntProperty MaxServerClientDeltaCount; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x6c]; // Offset: 0x14 // Size: 0x6c
	struct UMoveAntiCheatComponent* OwnerMoveAntiCheat; // Offset: 0x80 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShovelInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FShovelInfo {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShovelStat
// Size: 0x18 // Inherited bytes: 0x00
struct FShovelStat {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.FrameUITransformData
// Size: 0x40 // Inherited bytes: 0x00
struct FFrameUITransformData {
	// Fields
	struct FTransform Offset; // Offset: 0x00 // Size: 0x30
	float BaseSizeX; // Offset: 0x30 // Size: 0x04
	float BaseSizeY; // Offset: 0x34 // Size: 0x04
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WingmanInfoInBornIsland
// Size: 0x50 // Inherited bytes: 0x00
struct FWingmanInfoInBornIsland {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty WingmanClassPath; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
	struct FTransform WingmanSpawnTransform; // Offset: 0x20 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleInfoInBornIsland
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleInfoInBornIsland {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty VehiclePath; // Offset: 0x08 // Size: 0x10
	StrProperty VehicleContainerPath; // Offset: 0x18 // Size: 0x10
	IntProperty ShowAvatarID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSpots
// Size: 0xb0 // Inherited bytes: 0x00
struct FVehicleSpots {
	// Fields
	struct TArray<struct FTransform> Spots; // Offset: 0x00 // Size: 0x10
	SetProperty UsedSpot; // Offset: 0x10 // Size: 0x50
	MapProperty GroupIndexUsedVehicleSpotsMap; // Offset: 0x60 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.UsedVehicleSpots
// Size: 0x50 // Inherited bytes: 0x00
struct FUsedVehicleSpots {
	// Fields
	SetProperty UsedSpot; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimDataPair
// Size: 0x30 // Inherited bytes: 0x00
struct FAnimDataPair {
	// Fields
	IntProperty PoseTypeID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UAnimationAsset* AnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.RayProjectileData
// Size: 0x44 // Inherited bytes: 0x00
struct FRayProjectileData {
	// Fields
	float MaxRayLength; // Offset: 0x00 // Size: 0x04
	float MinRayLength; // Offset: 0x04 // Size: 0x04
	float RayRadius; // Offset: 0x08 // Size: 0x04
	float RayCheckInterval; // Offset: 0x0c // Size: 0x04
	float RayHitDamage; // Offset: 0x10 // Size: 0x04
	IntProperty HitMarkBuffID; // Offset: 0x14 // Size: 0x04
	bool FilterBuffID; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float BodyCapsuleTolerance; // Offset: 0x1c // Size: 0x04
	struct FVector HitRayBoxVector; // Offset: 0x20 // Size: 0x0c
	float HitRayZAxisOffset; // Offset: 0x2c // Size: 0x04
	float BornLocationStartCheckLength; // Offset: 0x30 // Size: 0x04
	float BornLocationEndCheckLength; // Offset: 0x34 // Size: 0x04
	bool bEnableRayOptimization; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float OverlayCheckRadiusScale; // Offset: 0x3c // Size: 0x04
	bool bUseLineTracePreCheck; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.RayBeamEmitterConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FRayBeamEmitterConfig {
	// Fields
	IntProperty BeamEmitterIndex; // Offset: 0x00 // Size: 0x04
	IntProperty BeamEmitterSourceIndex; // Offset: 0x04 // Size: 0x04
	IntProperty BeamEmitterTargetIndex; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepSnapshot
// Size: 0x38 // Inherited bytes: 0x00
struct FRepSnapshot {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	struct FVector_NetQuantize Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator_NetQuantize Rotation; // Offset: 0x10 // Size: 0x0c
	struct FVector_NetQuantize LinearVelocity; // Offset: 0x1c // Size: 0x0c
	struct FVector_NetQuantize AngularVelocity; // Offset: 0x28 // Size: 0x0c
	bool IsTeleport; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.Rotator_NetQuantize
// Size: 0x0c // Inherited bytes: 0x0c
struct FRotator_NetQuantize : FRotator {
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimulateSyncSmooth
// Size: 0xe4 // Inherited bytes: 0x00
struct FSimulateSyncSmooth {
	// Fields
	float LocErrorTolerance; // Offset: 0x00 // Size: 0x04
	float RotErrorTolerance; // Offset: 0x04 // Size: 0x04
	float MaxPredictMoveTime; // Offset: 0x08 // Size: 0x04
	float MaxMoveDeltaTime; // Offset: 0x0c // Size: 0x04
	float SmoothNetUpdateTime; // Offset: 0x10 // Size: 0x04
	float SmoothNetUpdateRotationTime; // Offset: 0x14 // Size: 0x04
	bool bNoSmoothingWhenLargeDiff; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float MaxDistanceNoSmoothing; // Offset: 0x1c // Size: 0x04
	char pad_0x20[0xc4]; // Offset: 0x20 // Size: 0xc4
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleBackpackItemDataContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FSingleBackpackItemDataContainer : FFastArraySerializer {
	// Fields
	struct USingleBackpackComp* Owner; // Offset: 0xb0 // Size: 0x08
	struct TArray<struct FSingleBackpackItemData> ItemDataList; // Offset: 0xb8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleBackpackItemData
// Size: 0x48 // Inherited bytes: 0x0c
struct FSingleBackpackItemData : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FPickUpItemData ItemData; // Offset: 0x10 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.SingleTrainingData
// Size: 0x01 // Inherited bytes: 0x00
struct FSingleTrainingData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocialIslandInteractEmoteData
// Size: 0x28 // Inherited bytes: 0x00
struct FSocialIslandInteractEmoteData {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	IntProperty MyEmoteID; // Offset: 0x04 // Size: 0x04
	IntProperty TargetEmoteID; // Offset: 0x08 // Size: 0x04
	IntProperty PrepareEmoteId; // Offset: 0x0c // Size: 0x04
	IntProperty EmoteTipTextID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty EmoteTipTexPath; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillPhasePawnStateConfig
// Size: 0x58 // Inherited bytes: 0x00
struct FSkillPhasePawnStateConfig {
	// Fields
	struct FName PresetName; // Offset: 0x00 // Size: 0x08
	MapProperty Overrides; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillPawnStateEntry
// Size: 0x02 // Inherited bytes: 0x00
struct FSkillPawnStateEntry {
	// Fields
	bool bMutex; // Offset: 0x00 // Size: 0x01
	bool bBan; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillPawnStatePreset
// Size: 0x88 // Inherited bytes: 0x00
struct FSkillPawnStatePreset {
	// Fields
	struct FName PresetName; // Offset: 0x00 // Size: 0x08
	struct FText DisplayName; // Offset: 0x08 // Size: 0x18
	struct FText Comment; // Offset: 0x20 // Size: 0x18
	MapProperty Entries; // Offset: 0x38 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillPawnStateGroup
// Size: 0x28 // Inherited bytes: 0x00
struct FSkillPawnStateGroup {
	// Fields
	struct FName GroupName; // Offset: 0x00 // Size: 0x08
	StrProperty Comment; // Offset: 0x08 // Size: 0x10
	struct TArray<enum class EPawnState> States; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillRaySegmentedSoundEffect
// Size: 0x78 // Inherited bytes: 0x00
struct FSkillRaySegmentedSoundEffect {
	// Fields
	struct UAkAudioEvent* AkEvent_SoftPtr; // Offset: 0x00 // Size: 0x28
	struct UAkAudioEvent* AkEvent; // Offset: 0x28 // Size: 0x08
	struct UAkAudioEvent* StopAkEvent_SoftPtr; // Offset: 0x30 // Size: 0x28
	struct UAkAudioEvent* StopAkEvent; // Offset: 0x58 // Size: 0x08
	struct FVector LocationOffset; // Offset: 0x60 // Size: 0x0c
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct UAkComponent* AkComp; // Offset: 0x70 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillRayData
// Size: 0x178 // Inherited bytes: 0x00
struct FSkillRayData {
	// Fields
	float MaxRayLength; // Offset: 0x00 // Size: 0x04
	float RayRadius; // Offset: 0x04 // Size: 0x04
	float RayCheckInterval; // Offset: 0x08 // Size: 0x04
	float RayHitDamage; // Offset: 0x0c // Size: 0x04
	IntProperty HitBuffID; // Offset: 0x10 // Size: 0x04
	float ExplodeInterval; // Offset: 0x14 // Size: 0x04
	float ExplodeInnerDamage; // Offset: 0x18 // Size: 0x04
	float ExplodeOuterDamage; // Offset: 0x1c // Size: 0x04
	float ExplodeInnerRadius; // Offset: 0x20 // Size: 0x04
	float ExplodeOuterRadius; // Offset: 0x24 // Size: 0x04
	float ExplodeFalloff; // Offset: 0x28 // Size: 0x04
	IntProperty ExplodeBuffID; // Offset: 0x2c // Size: 0x04
	MapProperty AddtionalDamage; // Offset: 0x30 // Size: 0x50
	struct UParticleSystem* ExplodeEffect_SoftPtr; // Offset: 0x80 // Size: 0x28
	struct UAkAudioEvent* HitAkEvent_SoftPtr; // Offset: 0xa8 // Size: 0x28
	float HitEffectInterval; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct UParticleSystem* HitEffect_SoftPtr; // Offset: 0xd8 // Size: 0x28
	struct UParticleSystem* HeadEffect_SoftPtr; // Offset: 0x100 // Size: 0x28
	struct UParticleSystem* BodyEffect_SoftPtr; // Offset: 0x128 // Size: 0x28
	struct UParticleSystem* TailEffect_SoftPtr; // Offset: 0x150 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkirtConfigData
// Size: 0x1c0 // Inherited bytes: 0x00
struct FSkirtConfigData {
	// Fields
	struct TArray<enum class EPawnState> PawnStateList; // Offset: 0x00 // Size: 0x10
	struct FSkirtChainData DynamicChainData; // Offset: 0x10 // Size: 0x140
	struct FSkirtModifyListData BoneModifyData; // Offset: 0x150 // Size: 0x70
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkirtModifyListData
// Size: 0x70 // Inherited bytes: 0x00
struct FSkirtModifyListData {
	// Fields
	struct FSkirtBoneModifyData Modify_L; // Offset: 0x00 // Size: 0x1c
	struct FSkirtBoneModifyData Modify_FL; // Offset: 0x1c // Size: 0x1c
	struct FSkirtBoneModifyData Modify_R; // Offset: 0x38 // Size: 0x1c
	struct FSkirtBoneModifyData Modify_FR; // Offset: 0x54 // Size: 0x1c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkirtBoneModifyData
// Size: 0x1c // Inherited bytes: 0x00
struct FSkirtBoneModifyData {
	// Fields
	enum class EBoneModificationMode TranslationMode; // Offset: 0x00 // Size: 0x01
	enum class EBoneModificationMode RotationMode; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	struct FVector Translation; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkirtChainData
// Size: 0x140 // Inherited bytes: 0x00
struct FSkirtChainData {
	// Fields
	struct FSkirtAnimDynamicData Chain_FR; // Offset: 0x00 // Size: 0x50
	struct FSkirtAnimDynamicData Chain_FL; // Offset: 0x50 // Size: 0x50
	struct FSkirtAnimDynamicData Chain_L; // Offset: 0xa0 // Size: 0x50
	struct FSkirtAnimDynamicData Chain_R; // Offset: 0xf0 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkirtAnimDynamicData
// Size: 0x50 // Inherited bytes: 0x00
struct FSkirtAnimDynamicData {
	// Fields
	enum class AnimPhysSimSpaceType SimulationSpace; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float GravityScale; // Offset: 0x04 // Size: 0x04
	bool bOverrideLinearDamping; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float LinearDampingOverride; // Offset: 0x0c // Size: 0x04
	bool bOverrideAngularDamping; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float AngularDampingOverride; // Offset: 0x14 // Size: 0x04
	struct FVector AngularLimitsMin; // Offset: 0x18 // Size: 0x0c
	struct FVector AngularLimitsMax; // Offset: 0x24 // Size: 0x0c
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkirtAnimSpecialEquipment
// Size: 0x18 // Inherited bytes: 0x00
struct FSkirtAnimSpecialEquipment {
	// Fields
	enum class EWeaponEffectValidSceneType ValidScene; // Offset: 0x00 // Size: 0x01
	enum class ESkirtAnimSpecialEquipmentType SpecialEquipmentType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct TArray<IntProperty> ItemIDs; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SegamentData
// Size: 0x10 // Inherited bytes: 0x00
struct FSegamentData {
	// Fields
	struct FVector TargetLocation; // Offset: 0x00 // Size: 0x0c
	float MoveSpeed; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.IslandItemSpotData
// Size: 0x58 // Inherited bytes: 0x00
struct FIslandItemSpotData {
	// Fields
	MapProperty ItemGroups; // Offset: 0x00 // Size: 0x50
	IntProperty LandId; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocialIslandSwitchLand
// Size: 0x10 // Inherited bytes: 0x00
struct FSocialIslandSwitchLand {
	// Fields
	struct TWeakObjectPtr<struct ASTExtraPlayerController> Controller; // Offset: 0x00 // Size: 0x08
	IntProperty TargetLandId; // Offset: 0x08 // Size: 0x04
	float SwitchDelayTime; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocialIslandPlayerStartGroup
// Size: 0x88 // Inherited bytes: 0x00
struct FSocialIslandPlayerStartGroup {
	// Fields
	IntProperty LandId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct ASTExtraPlayerStart*> PlayerStarts; // Offset: 0x08 // Size: 0x10
	MapProperty BattleStarts; // Offset: 0x18 // Size: 0x50
	struct FVector LandLeftTop; // Offset: 0x68 // Size: 0x0c
	struct FVector LandRightBottom; // Offset: 0x74 // Size: 0x0c
	char pad_0x80[0x8]; // Offset: 0x80 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocialIslandBattleStartGroup
// Size: 0x10 // Inherited bytes: 0x00
struct FSocialIslandBattleStartGroup {
	// Fields
	struct TArray<struct ASTExtraPlayerStart*> PlayerStarts; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.IslandRacingData
// Size: 0x10 // Inherited bytes: 0x00
struct FIslandRacingData {
	// Fields
	enum class EIslandBattleState RacingState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EndTime; // Offset: 0x04 // Size: 0x04
	struct ASTExtraBaseCharacter* RacingPlayer; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.IslandBattleData
// Size: 0x10 // Inherited bytes: 0x00
struct FIslandBattleData {
	// Fields
	enum class EIslandBattleState BattleState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EndTime; // Offset: 0x04 // Size: 0x04
	struct ASTExtraBaseCharacter* BattlePlayer; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.IslandDuelData
// Size: 0x10 // Inherited bytes: 0x00
struct FIslandDuelData {
	// Fields
	enum class EIslandDuelState DState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EndTime; // Offset: 0x04 // Size: 0x04
	struct ASTExtraBaseCharacter* DuelPlayer; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SIslandPlayerMarkInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FSIslandPlayerMarkInfo {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PlayerName; // Offset: 0x08 // Size: 0x10
	struct FGameModePlayerAliasInfo PlayerAliasInfo; // Offset: 0x18 // Size: 0x48
	struct ASTExtraPlayerState* PlayerState; // Offset: 0x60 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocialIslandRankData
// Size: 0x01 // Inherited bytes: 0x00
struct FSocialIslandRankData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpawnerInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FSpawnerInfo {
	// Fields
	struct FGuid SpawnerID; // Offset: 0x00 // Size: 0x10
	IntProperty ConfigID; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty State; // Offset: 0x18 // Size: 0x10
	char bAutoSpawn : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_1 : 7; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty TeamID; // Offset: 0x2c // Size: 0x04
	StrProperty OwnerZone; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DamageParamters
// Size: 0x14 // Inherited bytes: 0x00
struct FDamageParamters {
	// Fields
	float MinimumDamage; // Offset: 0x00 // Size: 0x04
	float DamageInnerRadius; // Offset: 0x04 // Size: 0x04
	float DamageOuterRadius; // Offset: 0x08 // Size: 0x04
	float DamageFalloff; // Offset: 0x0c // Size: 0x04
	float BaseMomentumMag; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraTargetOffsetSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FCameraTargetOffsetSetup {
	// Fields
	struct UCurveVector* CurveTargetOffset; // Offset: 0x00 // Size: 0x08
	float InterpSpeed; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STAILoopQueryCharactersItems
// Size: 0x50 // Inherited bytes: 0x00
struct FSTAILoopQueryCharactersItems {
	// Fields
	StrProperty Tips; // Offset: 0x00 // Size: 0x10
	float Radius; // Offset: 0x10 // Size: 0x04
	float Interval; // Offset: 0x14 // Size: 0x04
	float RandomDeviation; // Offset: 0x18 // Size: 0x04
	bool IsQueryFirstValidCharacter; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	struct TArray<struct FSTConditionConfig> Conditions; // Offset: 0x20 // Size: 0x10
	StrProperty SelectBestFuncName; // Offset: 0x30 // Size: 0x10
	StrProperty DoEventFuncName; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.STConditionConfig
// Size: 0x28 // Inherited bytes: 0x00
struct FSTConditionConfig {
	// Fields
	StrProperty ConditionFuncName; // Offset: 0x00 // Size: 0x10
	struct TArray<StrProperty> ConditionParams; // Offset: 0x10 // Size: 0x10
	bool bInverseCondition; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.STAITriggerPerceptionItems
// Size: 0x50 // Inherited bytes: 0x00
struct FSTAITriggerPerceptionItems {
	// Fields
	StrProperty Tips; // Offset: 0x00 // Size: 0x10
	StrProperty EventType; // Offset: 0x10 // Size: 0x10
	StrProperty EventID; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FSTConditionConfig> Conditions; // Offset: 0x30 // Size: 0x10
	StrProperty DoEventFuncName; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.STAINoiseEvent
// Size: 0x38 // Inherited bytes: 0x00
struct FSTAINoiseEvent {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	struct FVector NoiseLocation; // Offset: 0x04 // Size: 0x0c
	float Loudness; // Offset: 0x10 // Size: 0x04
	float MaxRange; // Offset: 0x14 // Size: 0x04
	struct AActor* Instigator; // Offset: 0x18 // Size: 0x08
	struct FName Tag; // Offset: 0x20 // Size: 0x08
	enum class ESTAINoiseType NoiseType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float StartAttenuationDist; // Offset: 0x2c // Size: 0x04
	float EndAttenuationDist; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimalStateMutual
// Size: 0x02 // Inherited bytes: 0x00
struct FAnimalStateMutual {
	// Fields
	enum class EAnimalState state1; // Offset: 0x00 // Size: 0x01
	enum class EAnimalState state2; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.StateAudioEntry
// Size: 0x30 // Inherited bytes: 0x00
struct FStateAudioEntry {
	// Fields
	struct FName StateMachineName; // Offset: 0x00 // Size: 0x08
	struct FName StateName; // Offset: 0x08 // Size: 0x08
	struct UAkAudioEvent* StartEvent; // Offset: 0x10 // Size: 0x08
	struct UAkAudioEvent* StopEvent; // Offset: 0x18 // Size: 0x08
	struct FName AttachBoneName; // Offset: 0x20 // Size: 0x08
	bool bStopWhenAttachedToDestroyed; // Offset: 0x28 // Size: 0x01
	bool bStopOnExitState; // Offset: 0x29 // Size: 0x01
	char pad_0x2A[0x6]; // Offset: 0x2a // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.StateType
// Size: 0x10 // Inherited bytes: 0x00
struct FStateType {
	// Fields
	enum class EStateType StateType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	int64_t TimeStamp; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuildingConsumeData
// Size: 0x14 // Inherited bytes: 0x00
struct FBuildingConsumeData {
	// Fields
	IntProperty BuildingID; // Offset: 0x00 // Size: 0x04
	IntProperty ConsumeItemID; // Offset: 0x04 // Size: 0x04
	IntProperty ConsumeItemCount; // Offset: 0x08 // Size: 0x04
	IntProperty ReturnItemCount; // Offset: 0x0c // Size: 0x04
	bool bLobby; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleFollowRepMovement
// Size: 0x18 // Inherited bytes: 0x00
struct FSimpleFollowRepMovement {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.LeaderPathData
// Size: 0x28 // Inherited bytes: 0x00
struct FLeaderPathData {
	// Fields
	struct TArray<struct FVector_NetQuantize> PathPoints; // Offset: 0x00 // Size: 0x10
	IntProperty MaxPathIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<float> PathRotsYaw; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterFollowQueueInfo
// Size: 0x78 // Inherited bytes: 0x00
struct FCharacterFollowQueueInfo {
	// Fields
	IntProperty QueueID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct USTCharacterFollowComponent*> MemeberComps; // Offset: 0x08 // Size: 0x10
	struct TArray<uint32_t> MemeberPlayerKeys; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x50]; // Offset: 0x28 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterFollowInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FCharacterFollowInfo {
	// Fields
	enum class ECharacterFollowType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct USTCharacterFollowComponent* LeaderCom; // Offset: 0x08 // Size: 0x08
	uint32_t LeaderPlayerKey; // Offset: 0x10 // Size: 0x04
	IntProperty QueueIndex; // Offset: 0x14 // Size: 0x04
	enum class ECharacterLeaderMoveType LeaderMoveType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.CheckForbiddenMoveCondition
// Size: 0x68 // Inherited bytes: 0x00
struct FCheckForbiddenMoveCondition {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	float CacheTime; // Offset: 0x04 // Size: 0x04
	float ContinueTimer; // Offset: 0x08 // Size: 0x04
	struct FVector CurrentFrameInput; // Offset: 0x0c // Size: 0x0c
	bool bNoSkill; // Offset: 0x18 // Size: 0x01
	bool bNotEnableProneHoldingWeapon; // Offset: 0x19 // Size: 0x01
	char pad_0x1A[0x2]; // Offset: 0x1a // Size: 0x02
	float ContinueSeconds; // Offset: 0x1c // Size: 0x04
	float MoveDeltaThresholdSq; // Offset: 0x20 // Size: 0x04
	float MoveSpeedThresholdSq; // Offset: 0x24 // Size: 0x04
	float InputThresholdSq; // Offset: 0x28 // Size: 0x04
	float RecentlyBlockSeconds; // Offset: 0x2c // Size: 0x04
	float PingThreshold; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<enum class EPawnState> ExcludeStates; // Offset: 0x38 // Size: 0x10
	struct TArray<enum class EPawnState> IncludeStates; // Offset: 0x48 // Size: 0x10
	struct TArray<enum class EMovementMode> ExcludeMovementModes; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PenetrationCollisionInvalid
// Size: 0x10 // Inherited bytes: 0x00
struct FPenetrationCollisionInvalid {
	// Fields
	struct AActor* ClientCollisionInvalidActor; // Offset: 0x00 // Size: 0x08
	bool bClientInvalid; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.ServerReceiveMove
// Size: 0x1c // Inherited bytes: 0x00
struct FServerReceiveMove {
	// Fields
	char pad_0x0[0x1c]; // Offset: 0x00 // Size: 0x1c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ServerMoveData
// Size: 0x58 // Inherited bytes: 0x00
struct FServerMoveData {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
	struct UPrimitiveComponent* ClientMovementBase; // Offset: 0x18 // Size: 0x08
	char pad_0x20[0x38]; // Offset: 0x20 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientCharacterMoveData
// Size: 0x40 // Inherited bytes: 0x00
struct FClientCharacterMoveData {
	// Fields
	uint32_t Sequence; // Offset: 0x00 // Size: 0x04
	uint32_t Checksum; // Offset: 0x04 // Size: 0x04
	struct TWeakObjectPtr<struct UPrimitiveComponent> ClientMovementBase; // Offset: 0x08 // Size: 0x08
	struct FName ClientBoneName; // Offset: 0x10 // Size: 0x08
	struct TArray<char> UserCmd; // Offset: 0x18 // Size: 0x10
	struct TArray<char> UserCmdDelta; // Offset: 0x28 // Size: 0x10
	bool IsDualData; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimulateLODThesholds
// Size: 0x18 // Inherited bytes: 0x00
struct FSimulateLODThesholds {
	// Fields
	float ScreenSize; // Offset: 0x00 // Size: 0x04
	float DragDistanceSq; // Offset: 0x04 // Size: 0x04
	float ShakeMoveDiffPercent; // Offset: 0x08 // Size: 0x04
	float LODOptimizeCosAngle; // Offset: 0x0c // Size: 0x04
	float BatchMovesDelaySeconds; // Offset: 0x10 // Size: 0x04
	float QueryPhysicsInternal; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientSimulateDrag
// Size: 0x18 // Inherited bytes: 0x00
struct FClientSimulateDrag {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	IntProperty DragCount; // Offset: 0x04 // Size: 0x04
	IntProperty SimulateDragCount; // Offset: 0x08 // Size: 0x04
	IntProperty SimulateShakeCount; // Offset: 0x0c // Size: 0x04
	IntProperty AnimLowUROCount; // Offset: 0x10 // Size: 0x04
	float StartTime; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimulateDragData
// Size: 0x34 // Inherited bytes: 0x00
struct FSimulateDragData {
	// Fields
	float ReportSimulateDragConfigSeconds; // Offset: 0x00 // Size: 0x04
	float ReportSimulateDragSeconds; // Offset: 0x04 // Size: 0x04
	float ReportSimulateDragTimer; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x28]; // Offset: 0x0c // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimulateRepData
// Size: 0x60 // Inherited bytes: 0x00
struct FSimulateRepData {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
	struct FRepMovement RepMovement; // Offset: 0x18 // Size: 0x48
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterDistanceSquareTickInternal
// Size: 0x08 // Inherited bytes: 0x00
struct FCharacterDistanceSquareTickInternal {
	// Fields
	float DistanceSquare; // Offset: 0x00 // Size: 0x04
	float TickInternal; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DirectMoveData
// Size: 0x68 // Inherited bytes: 0x00
struct FDirectMoveData {
	// Fields
	bool bOverrideZ; // Offset: 0x00 // Size: 0x01
	bool bClearZ; // Offset: 0x01 // Size: 0x01
	bool bGravityZ; // Offset: 0x02 // Size: 0x01
	bool bHandleHit; // Offset: 0x03 // Size: 0x01
	bool bManualExit; // Offset: 0x04 // Size: 0x01
	bool bPlayerCanControRotate; // Offset: 0x05 // Size: 0x01
	bool bPlayerCanControPitchRotate; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
	float RotateInterpSpeed; // Offset: 0x08 // Size: 0x04
	bool bStopWhenHit; // Offset: 0x0c // Size: 0x01
	bool bStopWhenNotFindFloor; // Offset: 0x0d // Size: 0x01
	enum class EDirectMoveType DirectMoveType; // Offset: 0x0e // Size: 0x01
	char pad_0xF[0x1]; // Offset: 0x0f // Size: 0x01
	float InertiaRatio; // Offset: 0x10 // Size: 0x04
	bool bResetToCachedVel; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float Distance; // Offset: 0x18 // Size: 0x04
	float TotalTime; // Offset: 0x1c // Size: 0x04
	struct UCurveFloat* SpeedCurve; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x28]; // Offset: 0x28 // Size: 0x28
	struct FVector BaseSpeed; // Offset: 0x50 // Size: 0x0c
	struct FVector DestinationLocation; // Offset: 0x5c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.UserCmdBitMsg
// Size: 0xe0 // Inherited bytes: 0x00
struct FUserCmdBitMsg {
	// Fields
	char pad_0x0[0xe0]; // Offset: 0x00 // Size: 0xe0
};

// Object Name: ScriptStruct ShadowTrackerExtra.PushAwayData
// Size: 0x30 // Inherited bytes: 0x00
struct FPushAwayData {
	// Fields
	float TimeStamp; // Offset: 0x00 // Size: 0x04
	bool bIsBeingPushed; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FVector HitPointLinearVelocity; // Offset: 0x08 // Size: 0x0c
	struct FVector HitPointAngularVelocity; // Offset: 0x14 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> HitActor; // Offset: 0x20 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.NearDeathReduceData
// Size: 0x18 // Inherited bytes: 0x00
struct FNearDeathReduceData {
	// Fields
	struct TArray<struct FNearDeathReduceCondition> Conditions; // Offset: 0x00 // Size: 0x10
	float ConditionsReduceFactor; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NearDeathReduceCondition
// Size: 0x50 // Inherited bytes: 0x00
struct FNearDeathReduceCondition {
	// Fields
	MapProperty AndStatesMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.NearDeathRestoredOrignalHealthStruct
// Size: 0x10 // Inherited bytes: 0x00
struct FNearDeathRestoredOrignalHealthStruct {
	// Fields
	struct AUAEGameMode* GameModeClass; // Offset: 0x00 // Size: 0x08
	float Health; // Offset: 0x08 // Size: 0x04
	float BreathDecreathRate; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.anPickerData
// Size: 0x14 // Inherited bytes: 0x00
struct FanPickerData {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float Angle; // Offset: 0x04 // Size: 0x04
	float Offset; // Offset: 0x08 // Size: 0x04
	bool IsShowDebugFan; // Offset: 0x0c // Size: 0x01
	bool bEnableTrace; // Offset: 0x0d // Size: 0x01
	char pad_0xE[0x2]; // Offset: 0x0e // Size: 0x02
	float LowerTraceRatio; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DynamicRuleStack
// Size: 0x10 // Inherited bytes: 0x00
struct FDynamicRuleStack {
	// Fields
	struct TArray<IntProperty> HandleStack; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.HitEffectItemDataList
// Size: 0x50 // Inherited bytes: 0x00
struct FHitEffectItemDataList {
	// Fields
	MapProperty ItemDataListMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.DecalData
// Size: 0x20 // Inherited bytes: 0x00
struct FDecalData {
	// Fields
	float DecalSize; // Offset: 0x00 // Size: 0x04
	float LifeSpan; // Offset: 0x04 // Size: 0x04
	struct UMaterial* DecalMaterial; // Offset: 0x08 // Size: 0x08
	float ImpactEffectStartScaleDistance; // Offset: 0x10 // Size: 0x04
	float ImpactEffectEndScaleDistance; // Offset: 0x14 // Size: 0x04
	float ImpactEffectStartScaleValue; // Offset: 0x18 // Size: 0x04
	float ImpactEffectEndScaleValue; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NodeTargetSpeedOverrides
// Size: 0x10 // Inherited bytes: 0x00
struct FNodeTargetSpeedOverrides {
	// Fields
	float ForwardTargetSpeedOverride; // Offset: 0x00 // Size: 0x04
	float ForwardMaxSpeedOverride; // Offset: 0x04 // Size: 0x04
	float ReverseTargetSpeedOverride; // Offset: 0x08 // Size: 0x04
	float ReverseMaxSpeedOverride; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WaypointNetworkConnectionList
// Size: 0x10 // Inherited bytes: 0x00
struct FWaypointNetworkConnectionList {
	// Fields
	struct TArray<struct FWaypointNetworkConnection> Connections; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WaypointNetworkConnection
// Size: 0x10 // Inherited bytes: 0x00
struct FWaypointNetworkConnection {
	// Fields
	struct ASTExtraAIWaypointSegment* ConnectedSegment; // Offset: 0x00 // Size: 0x08
	IntProperty WaypointIndex; // Offset: 0x08 // Size: 0x04
	bool bPathSegmentInReverse; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimParam_Accumulate
// Size: 0x48 // Inherited bytes: 0x00
struct FAnimParam_Accumulate {
	// Fields
	struct UAnimSequence* AccumulateAnimSeq; // Offset: 0x00 // Size: 0x08
	struct UAnimSequence* AccumulateAnimSeqNew; // Offset: 0x08 // Size: 0x08
	bool bAccumulateAnimSeqChange; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float AccumulateAnimSeqChangeTimer; // Offset: 0x14 // Size: 0x04
	float AccumulateAnimSeqChangeTimerCounter; // Offset: 0x18 // Size: 0x04
	float AccumulateRealtime; // Offset: 0x1c // Size: 0x04
	bool bAccumulateRealTimeMax; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	float AccumulateRate; // Offset: 0x24 // Size: 0x04
	bool bAccumulateRate; // Offset: 0x28 // Size: 0x01
	bool bAccumulateRateMax; // Offset: 0x29 // Size: 0x01
	bool bHasAccumulateRate; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x1]; // Offset: 0x2b // Size: 0x01
	float BlendInSpeed; // Offset: 0x2c // Size: 0x04
	float BlendOutSpeed; // Offset: 0x30 // Size: 0x04
	float BlendOutRealSpeed; // Offset: 0x34 // Size: 0x04
	float BlendOutDelayTime; // Offset: 0x38 // Size: 0x04
	float BlendOutDelayTime_Counter; // Offset: 0x3c // Size: 0x04
	float CacheAccumulateRate; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraAnimInstanceProxy
// Size: 0x5f0 // Inherited bytes: 0x5d0
struct FSTExtraAnimInstanceProxy : FAnimInstanceProxy {
	// Fields
	struct ASTExtraBaseCharacter* OwnerPawn; // Offset: 0x5c8 // Size: 0x08
	struct USTExtraAnimInstanceBase* ParentAnimInst; // Offset: 0x5d0 // Size: 0x08
	char pad_0x5E0[0x10]; // Offset: 0x5e0 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MoveSpeedParameter
// Size: 0x24 // Inherited bytes: 0x00
struct FMoveSpeedParameter {
	// Fields
	float MaxWalkSpeed; // Offset: 0x00 // Size: 0x04
	float WalkCurveSpeed; // Offset: 0x04 // Size: 0x04
	float SpeedValue; // Offset: 0x08 // Size: 0x04
	float SpeedScale; // Offset: 0x0c // Size: 0x04
	float SpeedRate; // Offset: 0x10 // Size: 0x04
	float SwimSpeedDynamicScale; // Offset: 0x14 // Size: 0x04
	float EnergySpeedScale; // Offset: 0x18 // Size: 0x04
	float WalkSpeedCurveScale; // Offset: 0x1c // Size: 0x04
	float Velocity; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.EmoteData
// Size: 0x20 // Inherited bytes: 0x00
struct FEmoteData {
	// Fields
	IntProperty EmoteIndex; // Offset: 0x00 // Size: 0x04
	IntProperty Rand; // Offset: 0x04 // Size: 0x04
	uint32_t FollowPlayerKey; // Offset: 0x08 // Size: 0x04
	bool bKeepFollowState; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	StrProperty ExtraInfo; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientLeftUIInfoRecordData
// Size: 0xd8 // Inherited bytes: 0x00
struct FClientLeftUIInfoRecordData {
	// Fields
	enum class ELeftUIInfoRecordType RecordType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty PhaseMark; // Offset: 0x04 // Size: 0x04
	struct FClientFatalDamageRecordData DamageInfo; // Offset: 0x08 // Size: 0xd0
};

// Object Name: ScriptStruct ShadowTrackerExtra.SyncAKEvent
// Size: 0x10 // Inherited bytes: 0x00
struct FSyncAKEvent {
	// Fields
	IntProperty AkEventID; // Offset: 0x00 // Size: 0x04
	struct FVector AkLocation; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemInfoPack
// Size: 0x20 // Inherited bytes: 0x00
struct FItemInfoPack {
	// Fields
	StrProperty ItemName; // Offset: 0x00 // Size: 0x10
	IntProperty ItemId; // Offset: 0x10 // Size: 0x04
	IntProperty MatchDist; // Offset: 0x14 // Size: 0x04
	bool bContains; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomPlayerMakeupPic
// Size: 0x20 // Inherited bytes: 0x00
struct FCustomPlayerMakeupPic {
	// Fields
	StrProperty PlayerUID; // Offset: 0x00 // Size: 0x10
	StrProperty PlayerMakeupPicPath; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.CustomTeamLogoAndColor
// Size: 0xf0 // Inherited bytes: 0x00
struct FCustomTeamLogoAndColor {
	// Fields
	IntProperty TeamNo; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty TeamName; // Offset: 0x08 // Size: 0x10
	StrProperty TeamLogoPath; // Offset: 0x18 // Size: 0x10
	struct FColor TeamColor; // Offset: 0x28 // Size: 0x04
	struct FColor PlayerColor; // Offset: 0x2c // Size: 0x04
	StrProperty CornerMarkPath; // Offset: 0x30 // Size: 0x10
	MapProperty TeamLogoTexture; // Offset: 0x40 // Size: 0x50
	StrProperty KillInfoPath; // Offset: 0x90 // Size: 0x10
	MapProperty KillInfoTexture; // Offset: 0xa0 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.ComponentIsVisibleParams
// Size: 0x10 // Inherited bytes: 0x00
struct FComponentIsVisibleParams {
	// Fields
	bool DrawVisibleTraceDebugLine; // Offset: 0x00 // Size: 0x01
	bool IsConsideringVehicleBlock; // Offset: 0x01 // Size: 0x01
	bool IsIgnoreTargetVehicleBlock; // Offset: 0x02 // Size: 0x01
	bool IsIgnoreHitActorSelf; // Offset: 0x03 // Size: 0x01
	bool IsDoubleSideQuery; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0xb]; // Offset: 0x05 // Size: 0x0b
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuffApplierConditionPair
// Size: 0x90 // Inherited bytes: 0x00
struct FBuffApplierConditionPair {
	// Fields
	enum class EBuffApplierCondition ConditionVar; // Offset: 0x00 // Size: 0x01
	bool IsShowDebugLine; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float InSightCheckAngle; // Offset: 0x04 // Size: 0x04
	float InnerRangeDistance; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UCurveFloat* CurveExpirePerDistance; // Offset: 0x10 // Size: 0x08
	StrProperty Description; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> BuffIDArray; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> BuffIDArrayForZombie; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> BuffSkillIdArray; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> BuffSkillIdArrayForZombie; // Offset: 0x58 // Size: 0x10
	StrProperty IgnorePawnAttrName; // Offset: 0x68 // Size: 0x10
	float ResidenceTimeOnRemove; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct TArray<struct UUTSkillPickerFilter*> PickerFilters; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingVehicleReplicaSetup
// Size: 0x2c // Inherited bytes: 0x00
struct FFloatingVehicleReplicaSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float RepDuration; // Offset: 0x04 // Size: 0x04
	struct FVector LocationTolerance; // Offset: 0x08 // Size: 0x0c
	struct FRotator RotationTolerance; // Offset: 0x14 // Size: 0x0c
	struct FVector MaxBlendDeltaAngle; // Offset: 0x20 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingVehicleValidationSetup
// Size: 0x24 // Inherited bytes: 0x00
struct FFloatingVehicleValidationSetup {
	// Fields
	float PingScale; // Offset: 0x00 // Size: 0x04
	float MaxPing; // Offset: 0x04 // Size: 0x04
	float AllowDistance; // Offset: 0x08 // Size: 0x04
	float MaxSpeedV; // Offset: 0x0c // Size: 0x04
	float UnContactWaterDuration; // Offset: 0x10 // Size: 0x04
	float MaxSpeedH; // Offset: 0x14 // Size: 0x04
	float SpeedScale; // Offset: 0x18 // Size: 0x04
	float MaxOmega; // Offset: 0x1c // Size: 0x04
	float BodyScale; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FloatingVehicleNetSetup
// Size: 0x14 // Inherited bytes: 0x00
struct FFloatingVehicleNetSetup {
	// Fields
	float DeltaDistance; // Offset: 0x00 // Size: 0x04
	float DeltaRotation; // Offset: 0x04 // Size: 0x04
	float DeltaVel; // Offset: 0x08 // Size: 0x04
	float DeltaAngVel; // Offset: 0x0c // Size: 0x04
	float DeltaTime; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ActorExtraComponents
// Size: 0x10 // Inherited bytes: 0x00
struct FActorExtraComponents {
	// Fields
	struct TArray<struct UClass*> BPComponents; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.OBCircleInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FOBCircleInfo {
	// Fields
	IntProperty CircleStateStartServerWorldSecond; // Offset: 0x00 // Size: 0x04
	IntProperty CircleStatusLastTime; // Offset: 0x04 // Size: 0x04
	IntProperty CircleStatus; // Offset: 0x08 // Size: 0x04
	IntProperty CurrentCircleIndex; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GM
// Size: 0x04 // Inherited bytes: 0x00
struct FGM {
	// Fields
	char GrassEnable : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.HelicopterTorqueCurveFloat
// Size: 0x10 // Inherited bytes: 0x00
struct FHelicopterTorqueCurveFloat {
	// Fields
	struct UCurveFloat* TorqueCurveFloat; // Offset: 0x00 // Size: 0x08
	float CurveTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuildingSearchPath
// Size: 0x18 // Inherited bytes: 0x00
struct FBuildingSearchPath {
	// Fields
	struct TArray<struct FBuildingSearchPathLink> itemPosLinkList; // Offset: 0x00 // Size: 0x10
	uint8_t buildingPartIndext; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuildingSearchPathLink
// Size: 0x18 // Inherited bytes: 0x00
struct FBuildingSearchPathLink {
	// Fields
	struct TArray<struct FVector> WayPointList; // Offset: 0x00 // Size: 0x10
	IntProperty targetSpotIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyCharacterAvatarEquipmentInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FLobbyCharacterAvatarEquipmentInfo {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	struct FAvatarCustom CustomInfo; // Offset: 0x04 // Size: 0x18
	bool IsWeapon; // Offset: 0x1c // Size: 0x01
	bool IsUsing; // Offset: 0x1d // Size: 0x01
	char pad_0x1E[0x2]; // Offset: 0x1e // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.CharacterStatueInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FCharacterStatueInfo {
	// Fields
	IntProperty AGender; // Offset: 0x00 // Size: 0x04
	IntProperty Head; // Offset: 0x04 // Size: 0x04
	IntProperty hair; // Offset: 0x08 // Size: 0x04
	IntProperty WeaponId; // Offset: 0x0c // Size: 0x04
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	StrProperty Nation; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> AvatarList; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FGameModePlayerItem> AvatarInfoList; // Offset: 0x40 // Size: 0x10
	IntProperty Index; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LobbyVehicleAnimParams
// Size: 0x01 // Inherited bytes: 0x00
struct FLobbyVehicleAnimParams {
	// Fields
	enum class ECabrioletState CabrioletState; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.TickSTExtraManagerFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FTickSTExtraManagerFunction : FTickFunction {
	// Fields
	struct USTExtraManagerBase* Manager; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetBunchQueueClassConfig
// Size: 0x40 // Inherited bytes: 0x00
struct FNetBunchQueueClassConfig {
	// Fields
	enum class ENetBunchQueueTopStrategy TopStrategy; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ViewMinDistSquared; // Offset: 0x04 // Size: 0x04
	float ViewDistSquared; // Offset: 0x08 // Size: 0x04
	enum class ENetBunchQueueSpawnStrategy SpawnStrategy; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	IntProperty PerTypeSpawnNValue; // Offset: 0x10 // Size: 0x04
	float PerTypeTimeLimitValue; // Offset: 0x14 // Size: 0x04
	enum class ENetBunchQueueSpawnInterval SpawnInterval; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty NFramesLaterValue; // Offset: 0x1c // Size: 0x04
	float NSecondsLaterValue; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FName SpecificGameState; // Offset: 0x28 // Size: 0x08
	StrProperty ExtraParam; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.NewBuffApplierConditionPair
// Size: 0x30 // Inherited bytes: 0x00
struct FNewBuffApplierConditionPair {
	// Fields
	enum class ENewBuffApplierCondition ConditionVar; // Offset: 0x00 // Size: 0x01
	bool IsShowDebugLine; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float InSightCheckAngle; // Offset: 0x04 // Size: 0x04
	float InnerRangeDistance; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> BuffSkillIdArray; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> BuffSkillIdArrayForZombie; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetLevelInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FPetLevelInfo {
	// Fields
	IntProperty PetId; // Offset: 0x00 // Size: 0x04
	IntProperty PetLevel; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetVisibilityInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FPetVisibilityInfo {
	// Fields
	bool Visible; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Time; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.PetEventSyncData
// Size: 0x10 // Inherited bytes: 0x00
struct FPetEventSyncData {
	// Fields
	struct UPetEventItem* EventItem; // Offset: 0x00 // Size: 0x08
	float StartTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpectatorPetStateInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FSpectatorPetStateInfo {
	// Fields
	enum class ESpectatorPetState CurrentState; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Param; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FramingCharState
// Size: 0x28 // Inherited bytes: 0x00
struct FFramingCharState {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientMoveDataPackage
// Size: 0x58 // Inherited bytes: 0x00
struct FClientMoveDataPackage {
	// Fields
	bool IsOldMove; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float OldTimeStamp; // Offset: 0x04 // Size: 0x04
	struct FVector_NetQuantize10 OldAccel; // Offset: 0x08 // Size: 0x0c
	char OldMoveFlags; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	struct FClientCharacterMoveData MoveData; // Offset: 0x18 // Size: 0x40
};

// Object Name: ScriptStruct ShadowTrackerExtra.BuffEffectSettingTableRow
// Size: 0x20 // Inherited bytes: 0x00
struct FBuffEffectSettingTableRow {
	// Fields
	IntProperty EffectID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty SkillID; // Offset: 0x08 // Size: 0x10
	IntProperty EffectObj; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParachuteStateParams
// Size: 0x34 // Inherited bytes: 0x00
struct FParachuteStateParams {
	// Fields
	float MinForwardForce; // Offset: 0x00 // Size: 0x04
	float MaxForwardForce; // Offset: 0x04 // Size: 0x04
	float DragForceFractor; // Offset: 0x08 // Size: 0x04
	float MinPitchAngle; // Offset: 0x0c // Size: 0x04
	float MaxPitchAngle; // Offset: 0x10 // Size: 0x04
	float MinRollAngle; // Offset: 0x14 // Size: 0x04
	float MaxRollAngle; // Offset: 0x18 // Size: 0x04
	float MinForwardSpeed; // Offset: 0x1c // Size: 0x04
	float MaxForwardSpeed; // Offset: 0x20 // Size: 0x04
	float MinRightSpeed; // Offset: 0x24 // Size: 0x04
	float MaxRightSpeed; // Offset: 0x28 // Size: 0x04
	float MinDownSpeed; // Offset: 0x2c // Size: 0x04
	float MaxDownSpeed; // Offset: 0x30 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CacheTouchData
// Size: 0x34 // Inherited bytes: 0x00
struct FCacheTouchData {
	// Fields
	char pad_0x0[0x34]; // Offset: 0x00 // Size: 0x34
};

// Object Name: ScriptStruct ShadowTrackerExtra.PropSkillCureRangeParam
// Size: 0x10 // Inherited bytes: 0x00
struct FPropSkillCureRangeParam {
	// Fields
	float RangeLifeSpan; // Offset: 0x00 // Size: 0x04
	float CheckPeriod; // Offset: 0x04 // Size: 0x04
	float RangeRadius; // Offset: 0x08 // Size: 0x04
	IntProperty CureBuffID; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BulletThroughCharacterInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FBulletThroughCharacterInfo {
	// Fields
	struct TArray<struct TWeakObjectPtr<struct AActor>> ThroughActors; // Offset: 0x00 // Size: 0x10
	float LastRefreshTime; // Offset: 0x10 // Size: 0x04
	float DamageRate; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCharacterCachedDeathInfo
// Size: 0xc0 // Inherited bytes: 0x00
struct FSimpleCharacterCachedDeathInfo {
	// Fields
	char pad_0x0[0xc0]; // Offset: 0x00 // Size: 0xc0
};

// Object Name: ScriptStruct ShadowTrackerExtra.NightStatusRateMap
// Size: 0x50 // Inherited bytes: 0x00
struct FNightStatusRateMap {
	// Fields
	MapProperty RateMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.StateMutual
// Size: 0x08 // Inherited bytes: 0x00
struct FStateMutual {
	// Fields
	IntProperty state1; // Offset: 0x00 // Size: 0x04
	IntProperty state2; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.UAVTorqueCurveFloat
// Size: 0x10 // Inherited bytes: 0x00
struct FUAVTorqueCurveFloat {
	// Fields
	struct UCurveFloat* TorqueCurveFloat; // Offset: 0x00 // Size: 0x08
	float CurveTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DriverAttachmentData
// Size: 0x80 // Inherited bytes: 0x00
struct FDriverAttachmentData {
	// Fields
	struct FName AttachmentDataName; // Offset: 0x00 // Size: 0x08
	struct UStaticMesh* AttachmentMesh; // Offset: 0x08 // Size: 0x28
	struct UStaticMesh* AttachmentMeshLod; // Offset: 0x30 // Size: 0x28
	struct FName AttachSocket; // Offset: 0x58 // Size: 0x08
	float AttachDelayTime; // Offset: 0x60 // Size: 0x04
	float DettachDelayTime; // Offset: 0x64 // Size: 0x04
	char pad_0x68[0x8]; // Offset: 0x68 // Size: 0x08
	struct UStaticMeshComponent* AttachmentComponentInstance; // Offset: 0x70 // Size: 0x08
	struct ASTExtraPlayerCharacter* AttachDriverCache; // Offset: 0x78 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TextrueAsyncRequest
// Size: 0x30 // Inherited bytes: 0x00
struct FTextrueAsyncRequest {
	// Fields
	StrProperty Path; // Offset: 0x00 // Size: 0x10
	struct UObject* ImageOuter; // Offset: 0x10 // Size: 0x08
	bool KeepSize; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	DelegateProperty Callback; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WidgetAsyncCreateData
// Size: 0x30 // Inherited bytes: 0x00
struct FWidgetAsyncCreateData {
	// Fields
	StrProperty WidgetPath; // Offset: 0x00 // Size: 0x10
	struct TWeakObjectPtr<struct UObject> Outer; // Offset: 0x10 // Size: 0x08
	IntProperty InstID; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	DelegateProperty Callback; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DebugVehicleSpawn
// Size: 0x40 // Inherited bytes: 0x00
struct FDebugVehicleSpawn {
	// Fields
	IntProperty SpawnCount; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FName SpawnTag; // Offset: 0x08 // Size: 0x08
	bool bSpawnAtLocation; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector SpawnLocation; // Offset: 0x14 // Size: 0x0c
	struct FRotator SpawnRotation; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FWaypointNetworkConnection StartingPath; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleBehaviorPayload
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleBehaviorPayload {
	// Fields
	struct APawn* VehiclePawn; // Offset: 0x00 // Size: 0x08
	struct UBehaviorTree* BehaviorTree; // Offset: 0x08 // Size: 0x08
	struct UBlackboardData* BlackboardData; // Offset: 0x10 // Size: 0x08
	struct FWaypointNetworkConnection StartingPath; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSpawn
// Size: 0xd0 // Inherited bytes: 0x08
struct FVehicleSpawn : FTableRowBase {
	// Fields
	struct FGuid ID; // Offset: 0x08 // Size: 0x10
	enum class ESpawnType SpawnType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
	struct UClass* VehicleClass; // Offset: 0x20 // Size: 0x28
	struct UBehaviorTree* BehaviorTreeAsset; // Offset: 0x48 // Size: 0x28
	struct UBlackboardData* BlackboardDataAsset; // Offset: 0x70 // Size: 0x28
	float InitialSpawnDelay; // Offset: 0x98 // Size: 0x04
	float SubsequentSpawnDelay; // Offset: 0x9c // Size: 0x04
	IntProperty MaxTriggers; // Offset: 0xa0 // Size: 0x04
	char MinToSpawn; // Offset: 0xa4 // Size: 0x01
	char MaxToSpawn; // Offset: 0xa5 // Size: 0x01
	char pad_0xA6[0x2]; // Offset: 0xa6 // Size: 0x02
	struct FSpawnFilter SpawnFilter; // Offset: 0xa8 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleAntiCheatSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FWheeledVehicleAntiCheatSetup {
	// Fields
	bool AntiSideswayCheat; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float minSpeed; // Offset: 0x04 // Size: 0x04
	float MaxVelZ; // Offset: 0x08 // Size: 0x04
	float GroundSinTolerance; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleTurboSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FWheeledVehicleTurboSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector2D RpmRange; // Offset: 0x04 // Size: 0x08
	float TurboStrength; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleReplicaSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FWheeledVehicleReplicaSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float RepDuration; // Offset: 0x04 // Size: 0x04
	struct FVector LocationTolerance; // Offset: 0x08 // Size: 0x0c
	struct FRotator RotationTolerance; // Offset: 0x14 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleDriftTLogSetup
// Size: 0x04 // Inherited bytes: 0x00
struct FWheeledVehicleDriftTLogSetup {
	// Fields
	float DonutRadiusTolerance; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ArmedVehicleWeaponConfig
// Size: 0x90 // Inherited bytes: 0x68
struct FArmedVehicleWeaponConfig : FSTExtraVehicleWeaponConfig {
	// Fields
	enum class EVehicleWeaponType WeaponType; // Offset: 0x64 // Size: 0x01
	enum class EVehicleWeaponParentType ParentType; // Offset: 0x65 // Size: 0x01
	struct FName PlayerSocket; // Offset: 0x68 // Size: 0x08
	struct TArray<IntProperty> AuthoritySeats; // Offset: 0x70 // Size: 0x10
	struct TArray<IntProperty> DefaultControlSeats; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.STExtraVehicleWheelSfxOnSurface
// Size: 0x70 // Inherited bytes: 0x58
struct FSTExtraVehicleWheelSfxOnSurface : FSTExtraVehicleSfxLoopBase {
	// Fields
	struct UPhysicalMaterial* LastSurfaceMaterial; // Offset: 0x58 // Size: 0x08
	struct UWheelSfxConfig* WheelSfxConfig; // Offset: 0x60 // Size: 0x08
	char pad_0x68[0x8]; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BufferedWheelSimState
// Size: 0xd0 // Inherited bytes: 0x00
struct FBufferedWheelSimState {
	// Fields
	bool IsInAir; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FBufferedSuspensionState SuspensionState; // Offset: 0x04 // Size: 0x24
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FBufferedWheelState WheelState; // Offset: 0x30 // Size: 0x40
	struct FBufferedTireState TireState; // Offset: 0x70 // Size: 0x24
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct FBufferedContactState ContactState; // Offset: 0x98 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.BufferedContactState
// Size: 0x38 // Inherited bytes: 0x00
struct FBufferedContactState {
	// Fields
	struct FVector ContactNormal; // Offset: 0x00 // Size: 0x0c
	struct FVector ContactPoint; // Offset: 0x0c // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> ContactActor; // Offset: 0x18 // Size: 0x08
	struct TWeakObjectPtr<struct UPrimitiveComponent> ContactComponent; // Offset: 0x20 // Size: 0x08
	struct FName ContactBone; // Offset: 0x28 // Size: 0x08
	struct TWeakObjectPtr<struct UPhysicalMaterial> ContactMaterial; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BufferedTireState
// Size: 0x24 // Inherited bytes: 0x00
struct FBufferedTireState {
	// Fields
	float Friction; // Offset: 0x00 // Size: 0x04
	struct FVector LongitudinalDirection; // Offset: 0x04 // Size: 0x0c
	struct FVector LateralDirection; // Offset: 0x10 // Size: 0x0c
	float LongitudinalSlip; // Offset: 0x1c // Size: 0x04
	float LateralSlip; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BufferedWheelState
// Size: 0x40 // Inherited bytes: 0x00
struct FBufferedWheelState {
	// Fields
	float SteerAngle; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.BufferedSuspensionState
// Size: 0x24 // Inherited bytes: 0x00
struct FBufferedSuspensionState {
	// Fields
	struct FVector LineStart; // Offset: 0x00 // Size: 0x0c
	struct FVector LineDirection; // Offset: 0x0c // Size: 0x0c
	float LineLength; // Offset: 0x18 // Size: 0x04
	float Jounce; // Offset: 0x1c // Size: 0x04
	float SpringForce; // Offset: 0x20 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterSpawnInfo
// Size: 0x68 // Inherited bytes: 0x00
struct FMonsterSpawnInfo {
	// Fields
	IntProperty FlowID; // Offset: 0x00 // Size: 0x04
	IntProperty MonsterID; // Offset: 0x04 // Size: 0x04
	IntProperty MonsterRebornTimes; // Offset: 0x08 // Size: 0x04
	IntProperty MonsterReBornDelay; // Offset: 0x0c // Size: 0x04
	IntProperty MonsterWaveID; // Offset: 0x10 // Size: 0x04
	IntProperty MonsterChapterID; // Offset: 0x14 // Size: 0x04
	IntProperty SpeciesGrade; // Offset: 0x18 // Size: 0x04
	float GenerateTime; // Offset: 0x1c // Size: 0x04
	struct FVector pos; // Offset: 0x20 // Size: 0x0c
	struct FRotator Rot; // Offset: 0x2c // Size: 0x0c
	IntProperty PosRadius; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<struct FRoadPointInfo> RoadPoints; // Offset: 0x40 // Size: 0x10
	enum class EMonsterSpawnSourceType SourceType; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct APawn* CallPawn; // Offset: 0x58 // Size: 0x08
	uint32_t CallPawnKey; // Offset: 0x60 // Size: 0x04
	IntProperty CallType; // Offset: 0x64 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LootProjectileRepMovement
// Size: 0x54 // Inherited bytes: 0x00
struct FLootProjectileRepMovement {
	// Fields
	struct FVector LinearVelocity; // Offset: 0x00 // Size: 0x0c
	struct FVector Location; // Offset: 0x0c // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x18 // Size: 0x0c
	struct FVector MeshLinearVelocity; // Offset: 0x24 // Size: 0x0c
	struct FVector MeshAngularVelocity; // Offset: 0x30 // Size: 0x0c
	struct FVector MeshLocation; // Offset: 0x3c // Size: 0x0c
	struct FRotator MeshRotation; // Offset: 0x48 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.CameraRecordData
// Size: 0x28 // Inherited bytes: 0x00
struct FCameraRecordData {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector NormalDir; // Offset: 0x0c // Size: 0x0c
	float WorldTime; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0xc]; // Offset: 0x1c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.TagKeyFloatValue
// Size: 0x10 // Inherited bytes: 0x00
struct FTagKeyFloatValue {
	// Fields
	struct FGameplayTag Key; // Offset: 0x00 // Size: 0x08
	float Value; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplicatedProjectileStateContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FReplicatedProjectileStateContainer : FFastArraySerializer {
	// Fields
	struct ASTProjectileBase* Owner; // Offset: 0xb0 // Size: 0x08
	struct TArray<struct FReplicatedProjectileState> States; // Offset: 0xb8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ReplicatedProjectileState
// Size: 0x50 // Inherited bytes: 0x0c
struct FReplicatedProjectileState : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FGameplayTag StateType; // Offset: 0x10 // Size: 0x08
	struct FSTProjectileStateParam StateParam; // Offset: 0x18 // Size: 0x30
	bool bClientNeedChange; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.STProjectileStateParam
// Size: 0x30 // Inherited bytes: 0x00
struct FSTProjectileStateParam {
	// Fields
	struct FGameplayTag StateChangeType; // Offset: 0x00 // Size: 0x08
	float ServerBeginTimestamp; // Offset: 0x08 // Size: 0x04
	IntProperty IntValue; // Offset: 0x0c // Size: 0x04
	float FloatValue; // Offset: 0x10 // Size: 0x04
	struct FVector VectorValue; // Offset: 0x14 // Size: 0x0c
	struct FRotator RotatorValue; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STProjectileState
// Size: 0x78 // Inherited bytes: 0x00
struct FSTProjectileState {
	// Fields
	struct TArray<struct USTProjectileTask*> Tasks; // Offset: 0x00 // Size: 0x10
	float LifeSpan; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct FGameplayTag NextStateForLifeSpanEnd; // Offset: 0x18 // Size: 0x08
	struct ASTProjectileBase* Projectile; // Offset: 0x20 // Size: 0x08
	struct FGameplayTag StateType; // Offset: 0x28 // Size: 0x08
	float BeginTimestamp; // Offset: 0x30 // Size: 0x04
	float ElapsedTime; // Offset: 0x34 // Size: 0x04
	float EndTimestamp; // Offset: 0x38 // Size: 0x04
	float bEnded; // Offset: 0x3c // Size: 0x04
	struct FSTProjectileStateParam StateParam; // Offset: 0x40 // Size: 0x30
	bool bRedo; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.StrongholdWeaponBoxConfig
// Size: 0x48 // Inherited bytes: 0x00
struct FStrongholdWeaponBoxConfig {
	// Fields
	struct UClass* WeaponBoxType; // Offset: 0x00 // Size: 0x28
	struct FVector RelativeLocation; // Offset: 0x28 // Size: 0x0c
	struct FRotator RelativeRotation; // Offset: 0x34 // Size: 0x0c
	bool bAttachToLifer; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.StrongholdMiniMapData
// Size: 0x18 // Inherited bytes: 0x00
struct FStrongholdMiniMapData {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	IntProperty MapIconID; // Offset: 0x04 // Size: 0x04
	IntProperty DelayShowCD; // Offset: 0x08 // Size: 0x04
	IntProperty UnActivatedIndex; // Offset: 0x0c // Size: 0x04
	IntProperty ActivatedIndex; // Offset: 0x10 // Size: 0x04
	IntProperty GrayIndex; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MultiAppearanceMeshData
// Size: 0x18 // Inherited bytes: 0x00
struct FMultiAppearanceMeshData {
	// Fields
	struct UStaticMeshComponent* MultiAppearanceMesh; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AppearanceMeshData
// Size: 0x40 // Inherited bytes: 0x00
struct FAppearanceMeshData {
	// Fields
	struct UStaticMeshComponent* AppearanceMeshComp; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x38]; // Offset: 0x08 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScreenParticleEffectData
// Size: 0x80 // Inherited bytes: 0x00
struct FScreenParticleEffectData {
	// Fields
	enum class EScreenParticleEffectType EffectType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty ScreenParticleEffectName; // Offset: 0x08 // Size: 0x10
	struct UParticleSystem* ParticleEffect; // Offset: 0x18 // Size: 0x28
	struct FName ParticleParamName; // Offset: 0x40 // Size: 0x08
	struct TArray<StrProperty> ExtraScreenAppearanceList; // Offset: 0x48 // Size: 0x10
	struct FVector ScreenParticleEffectLoc; // Offset: 0x58 // Size: 0x0c
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct UParticleSystemComponent* EffectComponent; // Offset: 0x68 // Size: 0x08
	bool KeepWorldRotation; // Offset: 0x70 // Size: 0x01
	bool bNeedReset; // Offset: 0x71 // Size: 0x01
	bool IsShowing; // Offset: 0x72 // Size: 0x01
	char pad_0x73[0x1]; // Offset: 0x73 // Size: 0x01
	float CurrentParamValue; // Offset: 0x74 // Size: 0x04
	enum class EPlatformDeviceLevel DisableDeviceLevel; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.MltAppearanceMatData
// Size: 0x80 // Inherited bytes: 0x00
struct FMltAppearanceMatData {
	// Fields
	StrProperty AppearanceKey; // Offset: 0x00 // Size: 0x10
	struct FName AppearanceTag; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x8]; // Offset: 0x18 // Size: 0x08
	struct FTransform AppearanceMeshRelativeTransform; // Offset: 0x20 // Size: 0x30
	struct UMaterialInterface* ParentMaterial; // Offset: 0x50 // Size: 0x08
	float MatialAlpha; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct UMaterialInstanceDynamic* AppearanceMat; // Offset: 0x60 // Size: 0x08
	struct UStaticMeshComponent* OwnerAppearanceMesh; // Offset: 0x68 // Size: 0x08
	bool IsLogicShow; // Offset: 0x70 // Size: 0x01
	bool IsShowOut; // Offset: 0x71 // Size: 0x01
	bool IsShowIn; // Offset: 0x72 // Size: 0x01
	char pad_0x73[0x1]; // Offset: 0x73 // Size: 0x01
	float GradualFrag; // Offset: 0x74 // Size: 0x04
	float delayTime; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AppearanceMatData
// Size: 0xb0 // Inherited bytes: 0x00
struct FAppearanceMatData {
	// Fields
	StrProperty AppearanceKey; // Offset: 0x00 // Size: 0x10
	float LifeSpan; // Offset: 0x10 // Size: 0x04
	bool IgnoreIndoor; // Offset: 0x14 // Size: 0x01
	bool HideUI; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	struct UMaterialInterface* ParentMaterial; // Offset: 0x18 // Size: 0x28
	struct UMaterialInstanceDynamic* AppearanceMat; // Offset: 0x40 // Size: 0x08
	struct UStaticMeshComponent* AppearanceMeshComp; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0x10]; // Offset: 0x50 // Size: 0x10
	struct FTransform AppearanceMeshRelativeTransform; // Offset: 0x60 // Size: 0x30
	struct FName MatInstParamName; // Offset: 0x90 // Size: 0x08
	struct UCurveFloat* ParamCurve; // Offset: 0x98 // Size: 0x08
	char pad_0xA0[0x10]; // Offset: 0xa0 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SearchControlRuntimeState
// Size: 0x10 // Inherited bytes: 0x00
struct FSearchControlRuntimeState {
	// Fields
	struct FCharacterSearchHandle AppliedHandle; // Offset: 0x00 // Size: 0x04
	bool bPausedByThis; // Offset: 0x04 // Size: 0x01
	bool bResumedByThis; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	struct FName ScopedTag; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SelectTouchPointCach
// Size: 0x10 // Inherited bytes: 0x00
struct FSelectTouchPointCach {
	// Fields
	IntProperty FingerIndex; // Offset: 0x00 // Size: 0x04
	struct FVector2D TouchLoc; // Offset: 0x04 // Size: 0x08
	float TouchTime; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCrossHairData
// Size: 0x20 // Inherited bytes: 0x00
struct FSimpleCrossHairData {
	// Fields
	StrProperty Tag; // Offset: 0x00 // Size: 0x10
	struct UTexture2D* CrossHairTexture; // Offset: 0x10 // Size: 0x08
	float Scale; // Offset: 0x18 // Size: 0x04
	IntProperty Priority; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.HitPerformData
// Size: 0xb0 // Inherited bytes: 0x00
struct FHitPerformData {
	// Fields
	struct TArray<struct FWeaponCrossHairIconData> IconList; // Offset: 0x00 // Size: 0x10
	float DefaultSpread; // Offset: 0x10 // Size: 0x04
	float SpreadMax; // Offset: 0x14 // Size: 0x04
	float HeadExtraScale; // Offset: 0x18 // Size: 0x04
	float AddSpreadScale; // Offset: 0x1c // Size: 0x04
	float SpreadDecreaseSpeed; // Offset: 0x20 // Size: 0x04
	float DefaultOffset; // Offset: 0x24 // Size: 0x04
	float DefaultAlpha; // Offset: 0x28 // Size: 0x04
	float AlphaDecreaseSpeed; // Offset: 0x2c // Size: 0x04
	char IsHeadShot : 1; // Offset: 0x30 // Size: 0x01
	char bIsDyingShot : 1; // Offset: 0x30 // Size: 0x01
	char bIsDeathShot : 1; // Offset: 0x30 // Size: 0x01
	char pad_0x30_3 : 5; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct FLinearColor HitBodyDrawColor; // Offset: 0x34 // Size: 0x10
	struct FLinearColor HitHeadDrawColor; // Offset: 0x44 // Size: 0x10
	struct FLinearColor HitToDyingDrawColor; // Offset: 0x54 // Size: 0x10
	struct FLinearColor HitToDeathDrawColor; // Offset: 0x64 // Size: 0x10
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct UAkAudioEvent* HeadShotSound; // Offset: 0x78 // Size: 0x08
	struct UAkAudioEvent* BodyShotSound; // Offset: 0x80 // Size: 0x08
	struct UAkAudioEvent* DyingShotSound; // Offset: 0x88 // Size: 0x08
	struct UAkAudioEvent* DeadlyShotSound; // Offset: 0x90 // Size: 0x08
	float CurCrosshairSpread; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x14]; // Offset: 0x9c // Size: 0x14
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankTrackEffect
// Size: 0x40 // Inherited bytes: 0x00
struct FTankTrackEffect {
	// Fields
	struct TArray<enum class EPhysicalSurface> TrackEffectMatList; // Offset: 0x00 // Size: 0x10
	struct UParticleSystem* MoveFx; // Offset: 0x10 // Size: 0x08
	struct TArray<struct FTransform> EffectTransforms; // Offset: 0x18 // Size: 0x10
	IntProperty ValidDeviceLevel; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty AudioSwitchState; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoChooseParachuteTeamLeaderData
// Size: 0x50 // Inherited bytes: 0x00
struct FAutoChooseParachuteTeamLeaderData {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	StrProperty PlayerName; // Offset: 0x08 // Size: 0x10
	float MaxRankingScore; // Offset: 0x18 // Size: 0x04
	IntProperty LeaderCount; // Offset: 0x1c // Size: 0x04
	uint64 LastGameLeaderUID; // Offset: 0x20 // Size: 0x08
	struct TArray<uint64> LastGameTeammatesUID; // Offset: 0x28 // Size: 0x10
	uint64 LastGameBattleID; // Offset: 0x38 // Size: 0x08
	bool bDoInitialFollow; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	float BehaviorScore; // Offset: 0x44 // Size: 0x04
	bool bIsInactive; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.TickListItem
// Size: 0x10 // Inherited bytes: 0x00
struct FTickListItem {
	// Fields
	struct UActorComponent* Comp; // Offset: 0x00 // Size: 0x08
	enum class ECustomTickRoleType RoleType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.RegisterTimerInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FRegisterTimerInfo {
	// Fields
	struct TArray<struct FRegisterDelayTime> DelayTimes; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RegisterDelayTime
// Size: 0x20 // Inherited bytes: 0x00
struct FRegisterDelayTime {
	// Fields
	float delayTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> CallBackPar; // Offset: 0x08 // Size: 0x10
	bool IsDone; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x7]; // Offset: 0x19 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.RegisterTimer
// Size: 0x28 // Inherited bytes: 0x00
struct FRegisterTimer {
	// Fields
	IntProperty waveIndex; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<float> Times; // Offset: 0x08 // Size: 0x10
	char pad_0x18[0x10]; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TlogEventSample
// Size: 0x18 // Inherited bytes: 0x00
struct FTlogEventSample {
	// Fields
	uint32_t TimeSec; // Offset: 0x00 // Size: 0x04
	enum class ETlogEventType EventType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	StrProperty ExtraData; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TlogFramePlayerSnapshot
// Size: 0x0c // Inherited bytes: 0x00
struct FTlogFramePlayerSnapshot {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	int16_t XMeter; // Offset: 0x04 // Size: 0x02
	int16_t YMeter; // Offset: 0x06 // Size: 0x02
	char Health; // Offset: 0x08 // Size: 0x01
	char AliveState; // Offset: 0x09 // Size: 0x01
	char Kills; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x1]; // Offset: 0x0b // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.TlogFrameStats
// Size: 0x18 // Inherited bytes: 0x00
struct FTlogFrameStats {
	// Fields
	char AliveCount; // Offset: 0x00 // Size: 0x01
	char AliveTeams; // Offset: 0x01 // Size: 0x01
	char AliveHumans; // Offset: 0x02 // Size: 0x01
	char AliveBots; // Offset: 0x03 // Size: 0x01
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FTlogFrameZone> Zones; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TlogFrameZone
// Size: 0x08 // Inherited bytes: 0x00
struct FTlogFrameZone {
	// Fields
	enum class ETlogZoneType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x1]; // Offset: 0x01 // Size: 0x01
	int16_t CenterXM; // Offset: 0x02 // Size: 0x02
	int16_t CenterYM; // Offset: 0x04 // Size: 0x02
	int16_t RadiusM; // Offset: 0x06 // Size: 0x02
};

// Object Name: ScriptStruct ShadowTrackerExtra.TlogPlayerSample
// Size: 0x40 // Inherited bytes: 0x00
struct FTlogPlayerSample {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PlayerID; // Offset: 0x08 // Size: 0x10
	StrProperty Nickname; // Offset: 0x18 // Size: 0x10
	IntProperty TeamID; // Offset: 0x28 // Size: 0x04
	bool bIsBot; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	IntProperty SegmentLevel; // Offset: 0x30 // Size: 0x04
	IntProperty Assists; // Offset: 0x34 // Size: 0x04
	IntProperty Damage; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TlogMetaSample
// Size: 0x60 // Inherited bytes: 0x00
struct FTlogMetaSample {
	// Fields
	StrProperty MatchID; // Offset: 0x00 // Size: 0x10
	StrProperty Mode; // Offset: 0x10 // Size: 0x10
	StrProperty Map; // Offset: 0x20 // Size: 0x10
	StrProperty StartTime; // Offset: 0x30 // Size: 0x10
	StrProperty EndTime; // Offset: 0x40 // Size: 0x10
	IntProperty TotalPlayers; // Offset: 0x50 // Size: 0x04
	IntProperty TotalTeams; // Offset: 0x54 // Size: 0x04
	IntProperty TotalHumans; // Offset: 0x58 // Size: 0x04
	IntProperty TotalBots; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackMarkSetup
// Size: 0xa8 // Inherited bytes: 0x00
struct FTrackMarkSetup {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	MapProperty MarkClassMap; // Offset: 0x08 // Size: 0x50
	struct FVector LocationOffset; // Offset: 0x58 // Size: 0x0c
	enum class ECustomTickIntervel TickInterval; // Offset: 0x64 // Size: 0x01
	char pad_0x65[0x3]; // Offset: 0x65 // Size: 0x03
	float minSpeed; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<IntProperty> ForwardMarkWheelIndices; // Offset: 0x70 // Size: 0x10
	struct TArray<IntProperty> BackwardMarkWheelIndices; // Offset: 0x80 // Size: 0x10
	struct UCurveFloat* CurveAlpha; // Offset: 0x90 // Size: 0x08
	struct TArray<struct ATrailMarkActor*> MarkClasses; // Offset: 0x98 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackRollAnimSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FTrackRollAnimSetup {
	// Fields
	struct FName MatSlotName; // Offset: 0x00 // Size: 0x08
	struct FName MatParamNames[0x2]; // Offset: 0x08 // Size: 0x10
	float AnimSpeedScale; // Offset: 0x18 // Size: 0x04
	enum class ECustomTickIntervel TickInterval; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackCollisionSetup
// Size: 0x38 // Inherited bytes: 0x00
struct FTrackCollisionSetup {
	// Fields
	bool bUseShapeCollision; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<enum class ECollisionChannel> CollisionChannels; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FName> BoneNames; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> ShapeIndices; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleInputState
// Size: 0x10 // Inherited bytes: 0x00
struct FTrackedVehicleInputState {
	// Fields
	float SteeringInput; // Offset: 0x00 // Size: 0x04
	float ThrottleInput; // Offset: 0x04 // Size: 0x04
	float BrakeInput; // Offset: 0x08 // Size: 0x04
	IntProperty CurrentGear; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehiclePivotSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FTrackedVehiclePivotSetup {
	// Fields
	float MinSteeringInput; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UCurveFloat* CurveThrottleInput; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleSuspensionSetup
// Size: 0x04 // Inherited bytes: 0x00
struct FTrackedVehicleSuspensionSetup {
	// Fields
	IntProperty MinDeviceLevelForSweep; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleTrackSetup
// Size: 0x38 // Inherited bytes: 0x00
struct FTrackedVehicleTrackSetup {
	// Fields
	struct UVehicleWheel* DriveWheel; // Offset: 0x00 // Size: 0x08
	struct UCurveVector* LongSlipGraph; // Offset: 0x08 // Size: 0x08
	struct UCurveFloat* LatSlipGraph; // Offset: 0x10 // Size: 0x08
	struct UCurveFloat* LatSlipRecoveryGraph; // Offset: 0x18 // Size: 0x08
	struct UCurveVector* SlipGraph; // Offset: 0x20 // Size: 0x08
	bool bEnableSleepAtLowSpeed; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float SleepSpeedThreshold; // Offset: 0x2c // Size: 0x04
	float SleepAngularThreshold; // Offset: 0x30 // Size: 0x04
	float LowSpeedDuration; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleTransmissionSetup
// Size: 0x28 // Inherited bytes: 0x00
struct FTrackedVehicleTransmissionSetup {
	// Fields
	bool bUseGearAutoBox; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float GearSwitchTime; // Offset: 0x04 // Size: 0x04
	float GearAutoBoxLatency; // Offset: 0x08 // Size: 0x04
	float FinalRatio; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FTrackedVehicleGearData> ForwardGears; // Offset: 0x10 // Size: 0x10
	float ReverseGearRatio; // Offset: 0x20 // Size: 0x04
	float NeutralGearUpRatio; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleGearData
// Size: 0x0c // Inherited bytes: 0x00
struct FTrackedVehicleGearData {
	// Fields
	float Ratio; // Offset: 0x00 // Size: 0x04
	float DownRatio; // Offset: 0x04 // Size: 0x04
	float UpRatio; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleBoostSetup
// Size: 0x08 // Inherited bytes: 0x00
struct FTrackedVehicleBoostSetup {
	// Fields
	float OmegaScale; // Offset: 0x00 // Size: 0x04
	float PowerScale; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrackedVehicleEngineSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FTrackedVehicleEngineSetup {
	// Fields
	struct UCurveFloat* TorqueCurve; // Offset: 0x00 // Size: 0x08
	float MaxRPM; // Offset: 0x08 // Size: 0x04
	float MOI; // Offset: 0x0c // Size: 0x04
	float DampingRateFullThrottle; // Offset: 0x10 // Size: 0x04
	float DampingRateZeroThrottleClutchEngaged; // Offset: 0x14 // Size: 0x04
	float DampingRateZeroThrottleClutchDisengaged; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TrailMarkInputData
// Size: 0x60 // Inherited bytes: 0x00
struct FTrailMarkInputData {
	// Fields
	bool bContainValidData; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0xf]; // Offset: 0x01 // Size: 0x0f
	struct FTransform Trans; // Offset: 0x10 // Size: 0x30
	struct FVector Normal; // Offset: 0x40 // Size: 0x0c
	enum class ETrailMarkType Type; // Offset: 0x4c // Size: 0x01
	bool bBackWheel; // Offset: 0x4d // Size: 0x01
	char pad_0x4E[0x2]; // Offset: 0x4e // Size: 0x02
	struct FColor Color; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0xc]; // Offset: 0x54 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.TransformDuration
// Size: 0x50 // Inherited bytes: 0x00
struct FTransformDuration {
	// Fields
	MapProperty Durations; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpawnItemCfg
// Size: 0x1b8 // Inherited bytes: 0x00
struct FSpawnItemCfg {
	// Fields
	enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod; // Offset: 0x00 // Size: 0x01
	enum class ESpawnItemFunction SpawnItemFunction; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct TArray<struct FSecondsSegment> SecondsSegmentCondition; // Offset: 0x08 // Size: 0x10
	struct TArray<StrProperty> LineTracePlaceInclude; // Offset: 0x18 // Size: 0x10
	struct TArray<StrProperty> LineTracePlaceExclude; // Offset: 0x28 // Size: 0x10
	IntProperty GenerateSpotCountPerTick; // Offset: 0x38 // Size: 0x04
	bool bItemGenerateOffset; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct FVector ItemGenerateOffset; // Offset: 0x40 // Size: 0x0c
	bool bSpawnLocationZOffset; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
	float SpawnLocationZOffset; // Offset: 0x50 // Size: 0x04
	bool bRandomSpawnRotatorYaw; // Offset: 0x54 // Size: 0x01
	bool bSpawnRotatorYaw; // Offset: 0x55 // Size: 0x01
	char pad_0x56[0x2]; // Offset: 0x56 // Size: 0x02
	float ItemSpawnRotatorYaw; // Offset: 0x58 // Size: 0x04
	bool bUseCookedRotator; // Offset: 0x5c // Size: 0x01
	bool bUseSpotPercent; // Offset: 0x5d // Size: 0x01
	bool bNetCullDistance; // Offset: 0x5e // Size: 0x01
	char pad_0x5F[0x1]; // Offset: 0x5f // Size: 0x01
	float NetCullDistance; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	StrProperty CookedFilePath; // Offset: 0x68 // Size: 0x10
	struct TArray<StrProperty> DeleteCategoryList; // Offset: 0x78 // Size: 0x10
	IntProperty DropHeight; // Offset: 0x88 // Size: 0x04
	IntProperty AppearRadiusStart; // Offset: 0x8c // Size: 0x04
	IntProperty AppearRadius; // Offset: 0x90 // Size: 0x04
	IntProperty AppearRadiusSecondLevel; // Offset: 0x94 // Size: 0x04
	bool bExpressUseSpotLocation; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x3]; // Offset: 0x99 // Size: 0x03
	float ExpressUseSpotLocationMinDistance; // Offset: 0x9c // Size: 0x04
	float ExpressUseSpotLocationMaxDistance; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	StrProperty MonsterSpawnDataTablePath; // Offset: 0xa8 // Size: 0x10
	StrProperty TreasureBoxTablePath; // Offset: 0xb8 // Size: 0x10
	StrProperty ItemSpawnDataTablePath; // Offset: 0xc8 // Size: 0x10
	bool bCombinationCategoryAndValue; // Offset: 0xd8 // Size: 0x01
	bool bSpotPerGroupNumCtrl; // Offset: 0xd9 // Size: 0x01
	char pad_0xDA[0x2]; // Offset: 0xda // Size: 0x02
	IntProperty NeedSpotPerGroupMin; // Offset: 0xdc // Size: 0x04
	IntProperty NeedSpotPerGroupMax; // Offset: 0xe0 // Size: 0x04
	bool bGroupNumCtrl; // Offset: 0xe4 // Size: 0x01
	char pad_0xE5[0x3]; // Offset: 0xe5 // Size: 0x03
	IntProperty NeedGroupMin; // Offset: 0xe8 // Size: 0x04
	IntProperty NeedGroupMax; // Offset: 0xec // Size: 0x04
	bool bGeneratedBySpotFileDirect; // Offset: 0xf0 // Size: 0x01
	enum class EAirDropType AirDropType; // Offset: 0xf1 // Size: 0x01
	bool RandomItemAtItemSpotUseSpotPercent; // Offset: 0xf2 // Size: 0x01
	bool bExcludeUsedGroup; // Offset: 0xf3 // Size: 0x01
	bool bExcludeUsedSpot; // Offset: 0xf4 // Size: 0x01
	bool bNeedInBlueCircle; // Offset: 0xf5 // Size: 0x01
	bool UseGroupInBlueCircle; // Offset: 0xf6 // Size: 0x01
	bool bNeedInWhiteCircle; // Offset: 0xf7 // Size: 0x01
	bool UseGroupInWhiteCircle; // Offset: 0xf8 // Size: 0x01
	bool UseExcludeAirLine; // Offset: 0xf9 // Size: 0x01
	char pad_0xFA[0x2]; // Offset: 0xfa // Size: 0x02
	float ExcludeAirLineDistance; // Offset: 0xfc // Size: 0x04
	bool UseIncludeAirLine; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
	float IncludeAirLineDistance; // Offset: 0x104 // Size: 0x04
	bool UseItemGeneratorAreaItem; // Offset: 0x108 // Size: 0x01
	bool UseItemGeneratorAreaIIDItem; // Offset: 0x109 // Size: 0x01
	bool UseSpotTriggerOtherSpot; // Offset: 0x10a // Size: 0x01
	char pad_0x10B[0x5]; // Offset: 0x10b // Size: 0x05
	struct TArray<struct FSpotTriggerOtherSpot> SpotTriggerOtherSpotList; // Offset: 0x110 // Size: 0x10
	bool UseCleanUpSpot; // Offset: 0x120 // Size: 0x01
	bool bNeedAircraft; // Offset: 0x121 // Size: 0x01
	bool bExpressItemNumCtrl; // Offset: 0x122 // Size: 0x01
	char pad_0x123[0x1]; // Offset: 0x123 // Size: 0x01
	IntProperty ExpressItemNumMin; // Offset: 0x124 // Size: 0x04
	IntProperty ExpressItemNumMax; // Offset: 0x128 // Size: 0x04
	bool bExpressItemNumPerPlayerCtrl; // Offset: 0x12c // Size: 0x01
	char pad_0x12D[0x3]; // Offset: 0x12d // Size: 0x03
	IntProperty ExpressItemNumPerPlayer; // Offset: 0x130 // Size: 0x04
	IntProperty ExpressItemNumPerPlayerTotal; // Offset: 0x134 // Size: 0x04
	bool bSpawnExpressItemPerPlayerCD; // Offset: 0x138 // Size: 0x01
	char pad_0x139[0x3]; // Offset: 0x139 // Size: 0x03
	float SpawnExpressItemPerPlayerCD; // Offset: 0x13c // Size: 0x04
	bool bSupplementExpressItemCD; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x3]; // Offset: 0x141 // Size: 0x03
	float SupplementExpressItemCD; // Offset: 0x144 // Size: 0x04
	bool bExpressReplaceZombie; // Offset: 0x148 // Size: 0x01
	bool bDestroySpots; // Offset: 0x149 // Size: 0x01
	bool bAISpawnExpressItem; // Offset: 0x14a // Size: 0x01
	bool bAttachToHostActor; // Offset: 0x14b // Size: 0x01
	bool bCaculateRelativeTransform; // Offset: 0x14c // Size: 0x01
	bool bAttachToHostActorIsStatic; // Offset: 0x14d // Size: 0x01
	bool UseSpawnTogetherClass; // Offset: 0x14e // Size: 0x01
	bool IsTogetherItemSameAsMainItem; // Offset: 0x14f // Size: 0x01
	bool UseDropLifeTime; // Offset: 0x150 // Size: 0x01
	char pad_0x151[0x3]; // Offset: 0x151 // Size: 0x03
	float DropLifeTime; // Offset: 0x154 // Size: 0x04
	bool UseDropItem; // Offset: 0x158 // Size: 0x01
	char pad_0x159[0x7]; // Offset: 0x159 // Size: 0x07
	struct FDropItemCfg DropItemCfg; // Offset: 0x160 // Size: 0x30
	bool UseRepeatItem; // Offset: 0x190 // Size: 0x01
	char pad_0x191[0x3]; // Offset: 0x191 // Size: 0x03
	struct FRepeatItemCfg RepeatItemCfg; // Offset: 0x194 // Size: 0x04
	IntProperty FuelPercentMax; // Offset: 0x198 // Size: 0x04
	bool ActiveByStartVolume; // Offset: 0x19c // Size: 0x01
	bool UseLocationID; // Offset: 0x19d // Size: 0x01
	bool bRegistHostActor; // Offset: 0x19e // Size: 0x01
	bool bUseItemIndex; // Offset: 0x19f // Size: 0x01
	bool bSpawnPedestal; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A1[0x7]; // Offset: 0x1a1 // Size: 0x07
	struct TArray<struct FSpotGroupProperty> SpotGroupProperties; // Offset: 0x1a8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.RepeatItemCfg
// Size: 0x04 // Inherited bytes: 0x00
struct FRepeatItemCfg {
	// Fields
	float RepeatSpawnItemCD; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.DropItemCfg
// Size: 0x30 // Inherited bytes: 0x00
struct FDropItemCfg {
	// Fields
	StrProperty DropConfigTablePath; // Offset: 0x00 // Size: 0x10
	StrProperty DropRuleConfigTablePath; // Offset: 0x10 // Size: 0x10
	bool UseDropID; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	IntProperty DropID; // Offset: 0x24 // Size: 0x04
	bool UseActorLocation; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty MaxRandomWeight; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpotTriggerOtherSpot
// Size: 0x20 // Inherited bytes: 0x00
struct FSpotTriggerOtherSpot {
	// Fields
	StrProperty SrcSpotTag; // Offset: 0x00 // Size: 0x10
	StrProperty DstSpotTag; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.SecondsSegment
// Size: 0x08 // Inherited bytes: 0x00
struct FSecondsSegment {
	// Fields
	float BeginSeconds; // Offset: 0x00 // Size: 0x04
	float EndSeconds; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ItemGenerateSpawnDatas
// Size: 0x20 // Inherited bytes: 0x00
struct FItemGenerateSpawnDatas {
	// Fields
	StrProperty ValueCatetory; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FItemGenerateSpawnData> AllGenerateSpawnDatas; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.GroupLocationToID
// Size: 0x10 // Inherited bytes: 0x00
struct FGroupLocationToID {
	// Fields
	struct FVector GroupLocation; // Offset: 0x00 // Size: 0x0c
	IntProperty ID; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GroupLocationPercent
// Size: 0x10 // Inherited bytes: 0x00
struct FGroupLocationPercent {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	IntProperty percent; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.Location2HostActor
// Size: 0x18 // Inherited bytes: 0x00
struct FLocation2HostActor {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct AActor* Host; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScmHitbox
// Size: 0x50 // Inherited bytes: 0x00
struct FScmHitbox {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.BoundingSpherePersistentChecker
// Size: 0x528 // Inherited bytes: 0x00
struct FBoundingSpherePersistentChecker {
	// Fields
	char pad_0x0[0x528]; // Offset: 0x00 // Size: 0x528
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleSpherePersistentChecker
// Size: 0x20 // Inherited bytes: 0x00
struct FSimpleSpherePersistentChecker {
	// Fields
	struct UPrimitiveComponent* TargetComponent; // Offset: 0x00 // Size: 0x08
	struct FSimpleCollisionSphere Sphere; // Offset: 0x08 // Size: 0x10
	float PassedTime; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCollisionSphere
// Size: 0x10 // Inherited bytes: 0x00
struct FSimpleCollisionSphere {
	// Fields
	struct FVector Origin; // Offset: 0x00 // Size: 0x0c
	float Radius; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCapsulePersistentChecker
// Size: 0x28 // Inherited bytes: 0x00
struct FSimpleCapsulePersistentChecker {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCapsuleCheck
// Size: 0x28 // Inherited bytes: 0x00
struct FSimpleCapsuleCheck {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCollisionLine
// Size: 0x3c // Inherited bytes: 0x00
struct FSimpleCollisionLine {
	// Fields
	struct FVector Start; // Offset: 0x00 // Size: 0x0c
	struct FVector End; // Offset: 0x0c // Size: 0x0c
	struct FVector HitLocation; // Offset: 0x18 // Size: 0x0c
	struct FVector ImpactLocation; // Offset: 0x24 // Size: 0x0c
	struct FVector HitNormal; // Offset: 0x30 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCollisionHull
// Size: 0x68 // Inherited bytes: 0x00
struct FSimpleCollisionHull {
	// Fields
	struct FVector Origin; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x5c]; // Offset: 0x0c // Size: 0x5c
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimpleCollisionCapsule
// Size: 0x1c // Inherited bytes: 0x00
struct FSimpleCollisionCapsule {
	// Fields
	struct FVector Start; // Offset: 0x00 // Size: 0x0c
	struct FVector End; // Offset: 0x0c // Size: 0x0c
	float Radius; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FocusTargetItem
// Size: 0x38 // Inherited bytes: 0x00
struct FFocusTargetItem {
	// Fields
	struct TWeakObjectPtr<struct AActor> Actor; // Offset: 0x00 // Size: 0x08
	struct FVector Position; // Offset: 0x08 // Size: 0x0c
	bool IsStartTurnTarget; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
	float TurnTargetVelocity; // Offset: 0x18 // Size: 0x04
	struct FRotator LastActorRotation; // Offset: 0x1c // Size: 0x0c
	StrProperty CurveName; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MonsterAnimPhaseData
// Size: 0x30 // Inherited bytes: 0x00
struct FMonsterAnimPhaseData {
	// Fields
	enum class EMonsterPoseType PosType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAnimationAsset* PhaseAnimSoftPtr; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.PVELinkLevelData
// Size: 0x10 // Inherited bytes: 0x00
struct FPVELinkLevelData {
	// Fields
	struct TArray<StrProperty> levelList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.AnimUpdateRateParamDebugOptions
// Size: 0x78 // Inherited bytes: 0x00
struct FAnimUpdateRateParamDebugOptions {
	// Fields
	char bShouldUseLodMap : 1; // Offset: 0x00 // Size: 0x01
	char bUseSkipMapForDistanceFactor : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_2 : 6; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	MapProperty LODToFrameSkipMap; // Offset: 0x08 // Size: 0x50
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // Offset: 0x58 // Size: 0x10
	IntProperty MinDistFromMainChar; // Offset: 0x68 // Size: 0x04
	IntProperty MaxDistFromMainChar; // Offset: 0x6c // Size: 0x04
	IntProperty BaseNonRenderedUpdateRate; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LODToSkipFrame
// Size: 0x08 // Inherited bytes: 0x00
struct FLODToSkipFrame {
	// Fields
	IntProperty LODLevel; // Offset: 0x00 // Size: 0x04
	IntProperty SkipFrame; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.Skill3CPreviousState
// Size: 0x10 // Inherited bytes: 0x00
struct FSkill3CPreviousState {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.Skill3CSetting_Pose
// Size: 0x06 // Inherited bytes: 0x00
struct FSkill3CSetting_Pose {
	// Fields
	enum class ESkill3CPosePreset Preset; // Offset: 0x00 // Size: 0x01
	enum class ESkill3CSwitchMode Mode; // Offset: 0x01 // Size: 0x01
	enum class ESkill3CManualSwitchControl ManualSwitchControl; // Offset: 0x02 // Size: 0x01
	enum class ESkill3CPoseTarget TargetPose; // Offset: 0x03 // Size: 0x01
	bool bIgnoreCD; // Offset: 0x04 // Size: 0x01
	bool bIgnoreCheck; // Offset: 0x05 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.Skill3CSetting_View
// Size: 0x05 // Inherited bytes: 0x00
struct FSkill3CSetting_View {
	// Fields
	enum class ESkill3CViewPreset Preset; // Offset: 0x00 // Size: 0x01
	enum class ESkill3CSwitchMode Mode; // Offset: 0x01 // Size: 0x01
	enum class ESkill3CManualSwitchControl ManualSwitchControl; // Offset: 0x02 // Size: 0x01
	bool bTargetFPP; // Offset: 0x03 // Size: 0x01
	bool bAuthoritySetIsNetFPP; // Offset: 0x04 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.Skill3CSetting_Weapon
// Size: 0x07 // Inherited bytes: 0x00
struct FSkill3CSetting_Weapon {
	// Fields
	enum class ESkill3CWeaponPreset Preset; // Offset: 0x00 // Size: 0x01
	enum class ESkill3CSwitchMode Mode; // Offset: 0x01 // Size: 0x01
	enum class ESkill3CManualSwitchControl ManualSwitchControl; // Offset: 0x02 // Size: 0x01
	bool bUseAnim; // Offset: 0x03 // Size: 0x01
	bool bForceFinishPreviousSwitch; // Offset: 0x04 // Size: 0x01
	bool bIgnoreState; // Offset: 0x05 // Size: 0x01
	bool bConsumeDelayTask; // Offset: 0x06 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillEventTypes
// Size: 0x02 // Inherited bytes: 0x00
struct FSkillEventTypes {
	// Fields
	enum class EUAESkillEvent UAESkillEventType; // Offset: 0x00 // Size: 0x01
	enum class UTSkillEventType SkillEventType; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillReplaceJumpAnimData
// Size: 0x28 // Inherited bytes: 0x00
struct FSkillReplaceJumpAnimData {
	// Fields
	enum class ECharacterJumpType JumpAnimType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct UAnimationAsset*> JumpAnimList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct UAnimationAsset*> FPPJumpAnimList; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.UTSkillPicker_BoxCreateData
// Size: 0x60 // Inherited bytes: 0x00
struct FUTSkillPicker_BoxCreateData {
	// Fields
	float BoxLength; // Offset: 0x00 // Size: 0x04
	float BoxWidth; // Offset: 0x04 // Size: 0x04
	float BoxHeight; // Offset: 0x08 // Size: 0x04
	float Angle; // Offset: 0x0c // Size: 0x04
	struct FVector Offset; // Offset: 0x10 // Size: 0x0c
	struct FRotator RelativeViewRotOffset; // Offset: 0x1c // Size: 0x0c
	bool bUseBlackboardRotation; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FUAEBlackboardKeySelector BlackboardRotationKey; // Offset: 0x30 // Size: 0x08
	bool Random; // Offset: 0x38 // Size: 0x01
	bool IsShowDebugBox; // Offset: 0x39 // Size: 0x01
	bool IsHeadJudgeWithoutOwner; // Offset: 0x3a // Size: 0x01
	bool bPickUpMonsters; // Offset: 0x3b // Size: 0x01
	bool bIgnoreAimCheck; // Offset: 0x3c // Size: 0x01
	bool bCanPickEnvAndTarget; // Offset: 0x3d // Size: 0x01
	bool bIgnoreInSmoke; // Offset: 0x3e // Size: 0x01
	bool bSortByAngle; // Offset: 0x3f // Size: 0x01
	struct TArray<struct AActor*> IgnoredActors; // Offset: 0x40 // Size: 0x10
	enum class ECollisionChannel ClientCollisionChannel; // Offset: 0x50 // Size: 0x01
	bool bForwardHitAim; // Offset: 0x51 // Size: 0x01
	bool bDoubleSideQuery; // Offset: 0x52 // Size: 0x01
	char pad_0x53[0x5]; // Offset: 0x53 // Size: 0x05
	struct AActor* DebugObjectSpawnForLocation; // Offset: 0x58 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.UTSkillPicker_CapsuleCreateData
// Size: 0x58 // Inherited bytes: 0x00
struct FUTSkillPicker_CapsuleCreateData {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float HalfHeight; // Offset: 0x04 // Size: 0x04
	float MinCosValue; // Offset: 0x08 // Size: 0x04
	struct FRotator ActionRotationOffset; // Offset: 0x0c // Size: 0x0c
	struct FVector Offset; // Offset: 0x18 // Size: 0x0c
	float HorizonOffset; // Offset: 0x24 // Size: 0x04
	float VerticalOffset; // Offset: 0x28 // Size: 0x04
	float ForwardOffset; // Offset: 0x2c // Size: 0x04
	bool IsShowDebugFan; // Offset: 0x30 // Size: 0x01
	bool bIsBoneCheck; // Offset: 0x31 // Size: 0x01
	bool bTraceUseOwnerLoc; // Offset: 0x32 // Size: 0x01
	bool bPickUpMonsters; // Offset: 0x33 // Size: 0x01
	bool bPickUpBuildinga; // Offset: 0x34 // Size: 0x01
	bool bCanApplyTrainModel; // Offset: 0x35 // Size: 0x01
	char pad_0x36[0x2]; // Offset: 0x36 // Size: 0x02
	struct FVector VehiclePickerOffset; // Offset: 0x38 // Size: 0x0c
	char pad_0x44[0x14]; // Offset: 0x44 // Size: 0x14
};

// Object Name: ScriptStruct ShadowTrackerExtra.UTSkillPicker_FanCreateData
// Size: 0x70 // Inherited bytes: 0x00
struct FUTSkillPicker_FanCreateData {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float MinRadius; // Offset: 0x04 // Size: 0x04
	StrProperty RadiusAttrName; // Offset: 0x08 // Size: 0x10
	float Angle; // Offset: 0x18 // Size: 0x04
	float CapsuleRadius; // Offset: 0x1c // Size: 0x04
	struct FVector Offset; // Offset: 0x20 // Size: 0x0c
	struct FVector CapsuleOffset; // Offset: 0x2c // Size: 0x0c
	struct FRotator RelativeViewRotOffset; // Offset: 0x38 // Size: 0x0c
	float CollisionFreeRadius; // Offset: 0x44 // Size: 0x04
	bool Random; // Offset: 0x48 // Size: 0x01
	bool IsShowDebugFan; // Offset: 0x49 // Size: 0x01
	bool IsHeadJudgeWithoutOwner; // Offset: 0x4a // Size: 0x01
	bool bPickUpMonsters; // Offset: 0x4b // Size: 0x01
	bool bIgnoreAimCheck; // Offset: 0x4c // Size: 0x01
	bool bCanPickEnvAndTarget; // Offset: 0x4d // Size: 0x01
	bool bIgnoreInSmoke; // Offset: 0x4e // Size: 0x01
	bool bSortByAngle; // Offset: 0x4f // Size: 0x01
	struct TArray<struct AActor*> IgnoredActors; // Offset: 0x50 // Size: 0x10
	enum class ECollisionChannel ClientCollisionChannel; // Offset: 0x60 // Size: 0x01
	bool bForwardHitAim; // Offset: 0x61 // Size: 0x01
	bool bDoubleSideQuery; // Offset: 0x62 // Size: 0x01
	char pad_0x63[0x5]; // Offset: 0x63 // Size: 0x05
	struct AActor* DebugObjectSpawnForLocation; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.InRangeWithCircleState
// Size: 0x08 // Inherited bytes: 0x00
struct FInRangeWithCircleState {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	float Range; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillIconConfig
// Size: 0x18 // Inherited bytes: 0x00
struct FSkillIconConfig {
	// Fields
	StrProperty IconPath; // Offset: 0x00 // Size: 0x10
	IntProperty IconWidth; // Offset: 0x10 // Size: 0x04
	IntProperty IconHeight; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillInstActorData
// Size: 0x50 // Inherited bytes: 0x00
struct FSkillInstActorData {
	// Fields
	MapProperty SkillInstMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillActorData
// Size: 0x68 // Inherited bytes: 0x00
struct FSkillActorData {
	// Fields
	struct TWeakObjectPtr<struct AUTSkill> SkillActor; // Offset: 0x00 // Size: 0x08
	SetProperty MemoryStoredComponents; // Offset: 0x08 // Size: 0x50
	char pad_0x58[0x10]; // Offset: 0x58 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.NewSkillTableRow
// Size: 0xa0 // Inherited bytes: 0x00
struct FNewSkillTableRow {
	// Fields
	IntProperty SkillID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	StrProperty IconPath; // Offset: 0x18 // Size: 0x10
	IntProperty SkillType; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<IntProperty> SkillTags; // Offset: 0x30 // Size: 0x10
	float CoolTime; // Offset: 0x40 // Size: 0x04
	IntProperty SkillCategory; // Offset: 0x44 // Size: 0x04
	struct FName SkillGroup; // Offset: 0x48 // Size: 0x08
	StrProperty BPPath; // Offset: 0x50 // Size: 0x10
	StrProperty UIPanelPath; // Offset: 0x60 // Size: 0x10
	StrProperty LuaDataPath; // Offset: 0x70 // Size: 0x10
	StrProperty ModeStrings; // Offset: 0x80 // Size: 0x10
	IntProperty ModeOpen; // Offset: 0x90 // Size: 0x04
	IntProperty TemplateID; // Offset: 0x94 // Size: 0x04
	bool bHasLuaDataPath; // Offset: 0x98 // Size: 0x01
	bool bClientPreLoad; // Offset: 0x99 // Size: 0x01
	bool bTssDataCheck; // Offset: 0x9a // Size: 0x01
	char pad_0x9B[0x5]; // Offset: 0x9b // Size: 0x05
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillPromptParams
// Size: 0x0c // Inherited bytes: 0x00
struct FSkillPromptParams {
	// Fields
	IntProperty PromptID; // Offset: 0x00 // Size: 0x04
	bool bForce; // Offset: 0x04 // Size: 0x01
	enum class EShowSkillPromptReason PromptReason; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	float PastTime; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkillPoseMontageData
// Size: 0xd0 // Inherited bytes: 0x00
struct FSkillPoseMontageData {
	// Fields
	struct UAnimMontage* AnimMontage_Stand; // Offset: 0x00 // Size: 0x28
	struct UAnimMontage* AnimMontage_Crouch; // Offset: 0x28 // Size: 0x28
	struct UAnimMontage* AnimMontage_Prone; // Offset: 0x50 // Size: 0x28
	struct UAnimMontage* AnimMontage_Vehicle; // Offset: 0x78 // Size: 0x28
	struct UAnimMontage* AnimMontage_Max; // Offset: 0xa0 // Size: 0x28
	enum class EAnimPlayFlag AnimPlayFlag; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x7]; // Offset: 0xc9 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.FanPickerConfigData
// Size: 0x50 // Inherited bytes: 0x00
struct FFanPickerConfigData {
	// Fields
	float Radius; // Offset: 0x00 // Size: 0x04
	float Angle; // Offset: 0x04 // Size: 0x04
	float CapsuleRadius; // Offset: 0x08 // Size: 0x04
	struct FVector Offset; // Offset: 0x0c // Size: 0x0c
	bool Random; // Offset: 0x18 // Size: 0x01
	bool IsShowDebugFan; // Offset: 0x19 // Size: 0x01
	bool IsHeadJudgeWithoutOwner; // Offset: 0x1a // Size: 0x01
	bool bPickUpMonsters; // Offset: 0x1b // Size: 0x01
	bool bIgnoreAimCheck; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	struct TArray<struct AActor*> IgnoredActors; // Offset: 0x20 // Size: 0x10
	bool bForwardHitAim; // Offset: 0x30 // Size: 0x01
	enum class UTSkillPickerType PickerType; // Offset: 0x31 // Size: 0x01
	enum class UTPickerTargetType PickerTargetType; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x1]; // Offset: 0x33 // Size: 0x01
	IntProperty PickerMaxCount; // Offset: 0x34 // Size: 0x04
	bool bIncludeOwner; // Offset: 0x38 // Size: 0x01
	bool bOnlyHero; // Offset: 0x39 // Size: 0x01
	bool bEnableTrace; // Offset: 0x3a // Size: 0x01
	bool bIsUsingViewRotation; // Offset: 0x3b // Size: 0x01
	bool bUseNewOffset; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	struct TArray<struct TWeakObjectPtr<struct AActor>> IgnoreTargets; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.FocusActorCheckParam
// Size: 0x58 // Inherited bytes: 0x00
struct FFocusActorCheckParam {
	// Fields
	struct TArray<IntProperty> CheckObjectTypes; // Offset: 0x00 // Size: 0x10
	struct TArray<struct AActor*> ValidActorClass; // Offset: 0x10 // Size: 0x10
	float SphereCheckRadius; // Offset: 0x20 // Size: 0x04
	float CapsuleCheckOffset; // Offset: 0x24 // Size: 0x04
	float CheckDistance; // Offset: 0x28 // Size: 0x04
	float CheckAngle; // Offset: 0x2c // Size: 0x04
	float CheckActorNum; // Offset: 0x30 // Size: 0x04
	bool CheckBlock; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	struct FName SocketName; // Offset: 0x38 // Size: 0x08
	struct TArray<IntProperty> FanCheckObjectTypes; // Offset: 0x40 // Size: 0x10
	bool bIgnoreSelfVehicle; // Offset: 0x50 // Size: 0x01
	bool bDebugShow; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x6]; // Offset: 0x52 // Size: 0x06
};

// Object Name: ScriptStruct ShadowTrackerExtra.ComparableGrenadeItemType
// Size: 0xc8 // Inherited bytes: 0x00
struct FComparableGrenadeItemType {
	// Fields
	struct FBattleItemData BattleItemData; // Offset: 0x00 // Size: 0xc0
	IntProperty ItemPriority; // Offset: 0xc0 // Size: 0x04
	IntProperty GrenadeItemID; // Offset: 0xc4 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SimplePropertyInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FSimplePropertyInfo {
	// Fields
	StrProperty PropertyName; // Offset: 0x00 // Size: 0x10
	StrProperty PropertyType; // Offset: 0x10 // Size: 0x10
	StrProperty propertyValue; // Offset: 0x20 // Size: 0x10
	struct TArray<StrProperty> EnumPropertyType; // Offset: 0x30 // Size: 0x10
	bool bIsLoadedProp; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x17]; // Offset: 0x41 // Size: 0x17
};

// Object Name: ScriptStruct ShadowTrackerExtra.SpeciesParams
// Size: 0x18 // Inherited bytes: 0x00
struct FSpeciesParams {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	IntProperty ID; // Offset: 0x04 // Size: 0x04
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	IntProperty SingleId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.LocationFilterCapsuleParams
// Size: 0x10 // Inherited bytes: 0x00
struct FLocationFilterCapsuleParams {
	// Fields
	bool bUsePawnCapsuleSize; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float CapsuleRadius; // Offset: 0x04 // Size: 0x04
	float CapsuleHalfHeight; // Offset: 0x08 // Size: 0x04
	float CapsuleErrorScale; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AINavStateData
// Size: 0x38 // Inherited bytes: 0x00
struct FAINavStateData {
	// Fields
	IntProperty CurrentTargetWaypointIdx; // Offset: 0x00 // Size: 0x04
	struct FVector TargetPosition; // Offset: 0x04 // Size: 0x0c
	struct FVector StartPosition; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<IntProperty> PathWayPoints; // Offset: 0x20 // Size: 0x10
	IntProperty PathWayPointNum; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftThrusterRollSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FAircraftThrusterRollSetup {
	// Fields
	struct UCurveVector* CurveOmega; // Offset: 0x00 // Size: 0x08
	float OmegaAccel; // Offset: 0x08 // Size: 0x04
	float RPMScale; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AircraftThrusterParticlesSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FAircraftThrusterParticlesSetup {
	// Fields
	struct FName ParticleName; // Offset: 0x00 // Size: 0x08
	float minSpeed; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AirdropPauseState
// Size: 0x1c // Inherited bytes: 0x00
struct FAirdropPauseState {
	// Fields
	bool bPaused; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x10 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAnimInstanceProxyTank
// Size: 0x5e0 // Inherited bytes: 0x5e0
struct FVehicleAnimInstanceProxyTank : FVehicleAnimInstanceProxy {
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleMeshPackage
// Size: 0x120 // Inherited bytes: 0x08
struct FVehicleMeshPackage : FAssetPackage {
	// Fields
	struct UStaticMesh* stMesh; // Offset: 0x08 // Size: 0x28
	struct USkeletalMesh* skMesh; // Offset: 0x30 // Size: 0x28
	struct UMaterialInterface* Mat; // Offset: 0x58 // Size: 0x28
	struct UMaterialInterface* BrokenMat; // Offset: 0x80 // Size: 0x28
	struct UMaterialInterface* MatBase; // Offset: 0xa8 // Size: 0x28
	struct TArray<struct FMaterialAsset> additionalMats; // Offset: 0xd0 // Size: 0x10
	struct UClass* animBP; // Offset: 0xe0 // Size: 0x28
	struct TArray<struct FParticleAsset> ParticleData; // Offset: 0x108 // Size: 0x10
	char pad_0x118[0x8]; // Offset: 0x118 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAvatarEntry
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleAvatarEntry {
	// Fields
	struct USkeletalMesh* Mesh; // Offset: 0x00 // Size: 0x28
	struct TArray<struct FVehicleAvatarMat> MatInstances; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleAvatarMat
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleAvatarMat {
	// Fields
	struct FName SlotID; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* MatInstance; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackupVehicleShapeAnimAssets
// Size: 0x50 // Inherited bytes: 0x00
struct FBackupVehicleShapeAnimAssets {
	// Fields
	MapProperty BackupAssetsBySeatTag; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.BackupSeatAnimAssets
// Size: 0x50 // Inherited bytes: 0x00
struct FBackupSeatAnimAssets {
	// Fields
	MapProperty BackupAssetsByVarName; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleDamageRecord
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleDamageRecord {
	// Fields
	struct AController* Instigator; // Offset: 0x00 // Size: 0x08
	float Time; // Offset: 0x08 // Size: 0x04
	float Damage; // Offset: 0x0c // Size: 0x04
	IntProperty DamageType; // Offset: 0x10 // Size: 0x04
	IntProperty AdditionalParam; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MaterialDamage
// Size: 0x10 // Inherited bytes: 0x00
struct FMaterialDamage {
	// Fields
	struct UPhysicalMaterial* PhysicalMaterial; // Offset: 0x00 // Size: 0x08
	float DamageScale; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleBoneHp
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleBoneHp {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	float Hp; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankArmor
// Size: 0x20 // Inherited bytes: 0x00
struct FTankArmor {
	// Fields
	float DamageFactor; // Offset: 0x00 // Size: 0x04
	enum class ETankArmorType ArmorType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FName Tag; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x10]; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.ContainerCollision
// Size: 0x40 // Inherited bytes: 0x00
struct FContainerCollision {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	struct FVector BoxExtent; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleCustomImpulse
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleCustomImpulse {
	// Fields
	struct TArray<struct AActor*> IgnoreClasses; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVehicleCustomImpulseFilter> ImpulseFilters; // Offset: 0x10 // Size: 0x10
	struct UDamageType* DamageType; // Offset: 0x20 // Size: 0x08
	bool bApplyImpulseWhileDestroyed; // Offset: 0x28 // Size: 0x01
	bool bApplyImpulseWhileStopped; // Offset: 0x29 // Size: 0x01
	bool bUseHitActorAsDamageInstigator; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleCustomImpulseFilter
// Size: 0x28 // Inherited bytes: 0x00
struct FVehicleCustomImpulseFilter {
	// Fields
	struct AActor* ImpulseAbsorberType; // Offset: 0x00 // Size: 0x08
	bool bApplyRadialImpulse; // Offset: 0x08 // Size: 0x01
	bool bApplyImpulseAsVelocityChange; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	float MaxDamagingImpulseMagnituge; // Offset: 0x0c // Size: 0x04
	float MaxImpulseDamage; // Offset: 0x10 // Size: 0x04
	float ImpulseStrength; // Offset: 0x14 // Size: 0x04
	float RadialImpulseStrength; // Offset: 0x18 // Size: 0x04
	float ImpulseRadius; // Offset: 0x1c // Size: 0x04
	enum class ERadialImpulseFalloff ImpulseFalloffType; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleLowSpeedSleepSetup
// Size: 0x1c // Inherited bytes: 0x00
struct FWheeledVehicleLowSpeedSleepSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float SpeedThreshold; // Offset: 0x04 // Size: 0x04
	float VelZThreshold; // Offset: 0x08 // Size: 0x04
	float OmegaThreshold; // Offset: 0x0c // Size: 0x04
	float ChassisScale; // Offset: 0x10 // Size: 0x04
	float CompressedSuspensionRatio; // Offset: 0x14 // Size: 0x04
	float PhysicsContactCoolDown; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.CachedWheelData
// Size: 0x10 // Inherited bytes: 0x00
struct FCachedWheelData {
	// Fields
	bool WheelsInAir; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float WheelSuspensionOffset; // Offset: 0x04 // Size: 0x04
	struct UPhysicalMaterial* WheelContactMaterial; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleInputState
// Size: 0x28 // Inherited bytes: 0x00
struct FWheeledVehicleInputState {
	// Fields
	char ApplyState; // Offset: 0x00 // Size: 0x01
	bool HasDriver; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float RawSteeringInput; // Offset: 0x04 // Size: 0x04
	float RawThrottleInput; // Offset: 0x08 // Size: 0x04
	float RawBrakeInput; // Offset: 0x0c // Size: 0x04
	bool RawHandbrakeInput; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float SteeringInput; // Offset: 0x14 // Size: 0x04
	float ThrottleInput; // Offset: 0x18 // Size: 0x04
	float BrakeInput; // Offset: 0x1c // Size: 0x04
	float HandBrakeInput; // Offset: 0x20 // Size: 0x04
	uint8_t CurrentGear; // Offset: 0x24 // Size: 0x01
	enum class EWheeledVehicleMovementType MovementType; // Offset: 0x25 // Size: 0x01
	char SubMovementType; // Offset: 0x26 // Size: 0x01
	char pad_0x27[0x1]; // Offset: 0x27 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleParticleParachuteSteering
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleParticleParachuteSteering {
	// Fields
	struct TArray<struct FVehicleParticleParachute> Particles; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleParticleParachute
// Size: 0x20 // Inherited bytes: 0x00
struct FVehicleParticleParachute {
	// Fields
	struct UParticleSystem* Particle; // Offset: 0x00 // Size: 0x08
	struct FName Socket; // Offset: 0x08 // Size: 0x08
	struct FVector Scale; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.STVehicleSlipWheelDust
// Size: 0x18 // Inherited bytes: 0x00
struct FSTVehicleSlipWheelDust {
	// Fields
	enum class EPhysicalSurface ContactSurface; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FSTVehicleSingleWheelFx> WheelFx; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.STVehicleSingleWheelFx
// Size: 0x30 // Inherited bytes: 0x00
struct FSTVehicleSingleWheelFx {
	// Fields
	enum class EVehicleWheelIndex Wheel; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UParticleSystem* WheelFx; // Offset: 0x08 // Size: 0x08
	struct FName SocketName; // Offset: 0x10 // Size: 0x08
	struct FVector WheelFxOffset; // Offset: 0x18 // Size: 0x0c
	struct FVector WheelFxScale; // Offset: 0x24 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.DriftParticleSetup
// Size: 0x90 // Inherited bytes: 0x00
struct FDriftParticleSetup {
	// Fields
	bool IsValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	MapProperty WheelParticles; // Offset: 0x08 // Size: 0x50
	struct UParticleSystem* WheelHubParticle; // Offset: 0x58 // Size: 0x28
	struct TArray<struct FName> WheelHubSocketNames; // Offset: 0x80 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DriftWheelParticleSetup
// Size: 0x50 // Inherited bytes: 0x00
struct FDriftWheelParticleSetup {
	// Fields
	struct UParticleSystem* AssetDustParticle; // Offset: 0x00 // Size: 0x28
	struct UParticleSystem* AssetTrailParticle; // Offset: 0x28 // Size: 0x28
};

// Object Name: ScriptStruct ShadowTrackerExtra.STVehicleWheelDust
// Size: 0x28 // Inherited bytes: 0x00
struct FSTVehicleWheelDust {
	// Fields
	enum class EPhysicalSurface ContactSurface; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UParticleSystem* MoveFx; // Offset: 0x08 // Size: 0x08
	struct UParticleSystem* SlipFx; // Offset: 0x10 // Size: 0x08
	struct UParticleSystem* HubFx; // Offset: 0x18 // Size: 0x08
	float minSpeed; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AvatarExhaustPSsMotorcycle
// Size: 0x68 // Inherited bytes: 0x00
struct FAvatarExhaustPSsMotorcycle {
	// Fields
	struct TArray<struct FName> AttachSocketNames; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FTransform> Transforms; // Offset: 0x10 // Size: 0x10
	struct TArray<struct UParticleSystem*> AssetPSs; // Offset: 0x20 // Size: 0x10
	struct TArray<struct UParticleSystem*> PSs; // Offset: 0x30 // Size: 0x10
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> PSCs; // Offset: 0x40 // Size: 0x10
	char pad_0x50[0x18]; // Offset: 0x50 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.UGCTankEnemyEffectSwitcher
// Size: 0x160 // Inherited bytes: 0x00
struct FUGCTankEnemyEffectSwitcher {
	// Fields
	struct FUGCTankEnemyEffect InactiveEffect; // Offset: 0x00 // Size: 0xb0
	struct FUGCTankEnemyEffect ActiveEffect; // Offset: 0xb0 // Size: 0xb0
};

// Object Name: ScriptStruct ShadowTrackerExtra.UGCTankEnemyEffect
// Size: 0xb0 // Inherited bytes: 0x00
struct FUGCTankEnemyEffect {
	// Fields
	struct FName SlotName; // Offset: 0x00 // Size: 0x08
	MapProperty ScalarParams; // Offset: 0x08 // Size: 0x50
	MapProperty VectorParams; // Offset: 0x58 // Size: 0x50
	char pad_0xA8[0x8]; // Offset: 0xa8 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleFeatureData
// Size: 0x10 // Inherited bytes: 0x00
struct FVehicleFeatureData {
	// Fields
	struct TArray<struct FVehicleFeatureEntry> FeatureEntries; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleFeatureEntry
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleFeatureEntry {
	// Fields
	struct TArray<enum class ESTExtraVehicleShapeType> VehicleShapeTypes; // Offset: 0x00 // Size: 0x10
	StrProperty ComponentClassPath; // Offset: 0x10 // Size: 0x10
	enum class EVFComponentOpType OpType; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<enum class EVFNetSide> NetSides; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleHitCharacterTriggerSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleHitCharacterTriggerSetup {
	// Fields
	struct FName CollisionProfileName; // Offset: 0x00 // Size: 0x08
	struct FName Tag; // Offset: 0x08 // Size: 0x08
	bool bGenerateEvents; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.LicenseStruct
// Size: 0x40 // Inherited bytes: 0x00
struct FLicenseStruct {
	// Fields
	struct TArray<IntProperty> LicenseNumArray; // Offset: 0x00 // Size: 0x10
	IntProperty ItemId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> AccessoryIdList; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> EffectIDList; // Offset: 0x28 // Size: 0x10
	IntProperty ChassisLightId; // Offset: 0x38 // Size: 0x04
	IntProperty LicenseBackgroundId; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.MotorGliderThrusterDamageSetup
// Size: 0x28 // Inherited bytes: 0x00
struct FMotorGliderThrusterDamageSetup {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	struct FVector HalfExtent; // Offset: 0x08 // Size: 0x0c
	float TimeInterval; // Offset: 0x14 // Size: 0x04
	float DamageCD; // Offset: 0x18 // Size: 0x04
	float Damage; // Offset: 0x1c // Size: 0x04
	struct UDamageType* DamageTypeClass; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankFadeOutSteering
// Size: 0x10 // Inherited bytes: 0x00
struct FTankFadeOutSteering {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float minSpeed; // Offset: 0x04 // Size: 0x04
	float ReverseMinSpeed; // Offset: 0x08 // Size: 0x04
	float ThrustDiff; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankPivotSteering
// Size: 0x24 // Inherited bytes: 0x00
struct FTankPivotSteering {
	// Fields
	bool bEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float MinSteeringInput; // Offset: 0x04 // Size: 0x04
	float MaxSpeed; // Offset: 0x08 // Size: 0x04
	float EnterSpeed; // Offset: 0x0c // Size: 0x04
	float EnterThrottle; // Offset: 0x10 // Size: 0x04
	float EnterBrake; // Offset: 0x14 // Size: 0x04
	float ThrottleInput; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x8]; // Offset: 0x1c // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankTransmissionData
// Size: 0x38 // Inherited bytes: 0x00
struct FTankTransmissionData {
	// Fields
	bool bUseGearAutoBox; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float GearSwitchTime; // Offset: 0x04 // Size: 0x04
	float GearAutoBoxLatency; // Offset: 0x08 // Size: 0x04
	enum class EVehicleDriveTankControlMode ControlMode; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float FinalRatio; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FTankGearData> ForwardGears; // Offset: 0x18 // Size: 0x10
	float ReverseGearRatio; // Offset: 0x28 // Size: 0x04
	float NeutralGearUpRatio; // Offset: 0x2c // Size: 0x04
	float ClutchStrength; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankGearData
// Size: 0x0c // Inherited bytes: 0x00
struct FTankGearData {
	// Fields
	float Ratio; // Offset: 0x00 // Size: 0x04
	float DownRatio; // Offset: 0x04 // Size: 0x04
	float UpRatio; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankEngineData
// Size: 0x90 // Inherited bytes: 0x00
struct FTankEngineData {
	// Fields
	struct FRuntimeFloatCurve TorqueCurve; // Offset: 0x00 // Size: 0x78
	float MaxRPM; // Offset: 0x78 // Size: 0x04
	float MOI; // Offset: 0x7c // Size: 0x04
	float DampingRateFullThrottle; // Offset: 0x80 // Size: 0x04
	float DampingRateZeroThrottleClutchEngaged; // Offset: 0x84 // Size: 0x04
	float DampingRateZeroThrottleClutchDisengaged; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleHitCharacterInReplay
// Size: 0x38 // Inherited bytes: 0x00
struct FVehicleHitCharacterInReplay {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x04 // Size: 0x04
	bool IsFromClient; // Offset: 0x08 // Size: 0x01
	bool IsValidHit; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x2]; // Offset: 0x0a // Size: 0x02
	struct FVector CharacterLocation; // Offset: 0x0c // Size: 0x0c
	struct FVector VehicleLocation; // Offset: 0x18 // Size: 0x0c
	struct FRotator VehicleRotation; // Offset: 0x24 // Size: 0x0c
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleNetMovement4WInReplay
// Size: 0x88 // Inherited bytes: 0x00
struct FVehicleNetMovement4WInReplay {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	enum class EVehicleCorrectionReason RejectReason; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	StrProperty ExtraData; // Offset: 0x08 // Size: 0x10
	struct FVehicleNetMovement4W ClientMovement; // Offset: 0x18 // Size: 0x70
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleNetHit4W
// Size: 0x58 // Inherited bytes: 0x00
struct FVehicleNetHit4W {
	// Fields
	struct AActor* OtherActor; // Offset: 0x00 // Size: 0x08
	struct FVector Impulse; // Offset: 0x08 // Size: 0x0c
	struct FVector ImpactPoint; // Offset: 0x14 // Size: 0x0c
	struct FRigidVehicleMovement Movement; // Offset: 0x20 // Size: 0x34
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RigidVehicleNetHit
// Size: 0x58 // Inherited bytes: 0x00
struct FRigidVehicleNetHit {
	// Fields
	struct AActor* OtherActor; // Offset: 0x00 // Size: 0x08
	struct FVector Impulse; // Offset: 0x08 // Size: 0x0c
	struct FVector ImpactPoint; // Offset: 0x14 // Size: 0x0c
	struct FRigidVehicleMovement Movement; // Offset: 0x20 // Size: 0x34
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleHitInOneFrame
// Size: 0x58 // Inherited bytes: 0x00
struct FVehicleHitInOneFrame {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleHitImpulse
// Size: 0xc8 // Inherited bytes: 0x00
struct FVehicleHitImpulse {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x0c // Size: 0x0c
	struct FVector LinVel; // Offset: 0x18 // Size: 0x0c
	struct FVector AngVel; // Offset: 0x24 // Size: 0x0c
	struct FVector Impulse; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct FHitResult Hit; // Offset: 0x40 // Size: 0x88
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleStuckInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FVehicleStuckInfo {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.TankMovementState
// Size: 0x20 // Inherited bytes: 0x00
struct FTankMovementState {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleReplayRecordData
// Size: 0x40 // Inherited bytes: 0x00
struct FVehicleReplayRecordData {
	// Fields
	bool bIsValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	uint32_t SimDisabledFlags; // Offset: 0x04 // Size: 0x04
	char ReqEnterVehicleFlag; // Offset: 0x08 // Size: 0x01
	char EnterVehicleFailReason; // Offset: 0x09 // Size: 0x01
	char ReqExitVehicleFlag; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x5]; // Offset: 0x0b // Size: 0x05
	struct TArray<struct FVehicleAudioDebugData> AudioDebugList; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FVehicleExceptionData> ExceptionList; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FVehicleOpPanelExceptionData> OpPanelExceptions; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DriverSwitchWeapnStruct
// Size: 0x58 // Inherited bytes: 0x00
struct FDriverSwitchWeapnStruct {
	// Fields
	IntProperty mType; // Offset: 0x00 // Size: 0x04
	enum class ESurviveWeaponPropSlot mWeaponSlot; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty mGrenadeID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FItemDefineID mMeleeDefineID; // Offset: 0x10 // Size: 0x18
	struct FBattleItemUseTarget mMeleeTarget; // Offset: 0x28 // Size: 0x28
	enum class EBattleItemUseReason mMeleeReason; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSpringArmTranReplaceData
// Size: 0x48 // Inherited bytes: 0x00
struct FVehicleSpringArmTranReplaceData {
	// Fields
	struct FVector PreviousArmOrigin; // Offset: 0x00 // Size: 0x0c
	struct FVector PreviousDesiredLoc; // Offset: 0x0c // Size: 0x0c
	struct FRotator PreviousDesiredRot; // Offset: 0x18 // Size: 0x0c
	struct FVector DesiredLoc; // Offset: 0x24 // Size: 0x0c
	struct FRotator DesiredRot; // Offset: 0x30 // Size: 0x0c
	struct FRotator SmartCamRotationExtra; // Offset: 0x3c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSpringArmRotLimitData
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleSpringArmRotLimitData {
	// Fields
	struct FRotator Min; // Offset: 0x00 // Size: 0x0c
	struct FRotator Max; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleStatesDataRecord
// Size: 0x14 // Inherited bytes: 0x00
struct FVehicleStatesDataRecord {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	float Time; // Offset: 0x04 // Size: 0x04
	bool always; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float Param1; // Offset: 0x0c // Size: 0x04
	float Param2; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleStatesData
// Size: 0x0c // Inherited bytes: 0x00
struct FVehicleStatesData {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	float Time; // Offset: 0x04 // Size: 0x04
	bool always; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.ClientSmoothCorrection
// Size: 0x34 // Inherited bytes: 0x00
struct FClientSmoothCorrection {
	// Fields
	char pad_0x0[0x4]; // Offset: 0x00 // Size: 0x04
	float ConfigSmoothSeconds; // Offset: 0x04 // Size: 0x04
	float ConfigSmoothMinDistanceSq; // Offset: 0x08 // Size: 0x04
	float ConfigSmoothMaxDistanceSq; // Offset: 0x0c // Size: 0x04
	char pad_0x10[0x24]; // Offset: 0x10 // Size: 0x24
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleHitRewindThreshold
// Size: 0x0c // Inherited bytes: 0x00
struct FVehicleHitRewindThreshold {
	// Fields
	float ValidDeltaSeconds; // Offset: 0x00 // Size: 0x04
	float VehicleRewindDistance; // Offset: 0x04 // Size: 0x04
	float HitCharacterDistance; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleNetValidationSetup
// Size: 0x08 // Inherited bytes: 0x00
struct FWheeledVehicleNetValidationSetup {
	// Fields
	float ChassisScale; // Offset: 0x00 // Size: 0x04
	bool ProtectPhysicsStuck; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleSyncPostPhysxTick
// Size: 0xb8 // Inherited bytes: 0xb0
struct FVehicleSyncPostPhysxTick : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleCorrectionSetup
// Size: 0x04 // Inherited bytes: 0x00
struct FVehicleCorrectionSetup {
	// Fields
	float TimeInterval; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RigidHitSentSetup
// Size: 0x04 // Inherited bytes: 0x00
struct FRigidHitSentSetup {
	// Fields
	float TimeInterval; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RigidMovementSentSetup
// Size: 0x14 // Inherited bytes: 0x00
struct FRigidMovementSentSetup {
	// Fields
	float Distance; // Offset: 0x00 // Size: 0x04
	float Angle; // Offset: 0x04 // Size: 0x04
	float Speed; // Offset: 0x08 // Size: 0x04
	float Omega; // Offset: 0x0c // Size: 0x04
	float TimeInterval; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.RigidNetValidationSetup
// Size: 0x14 // Inherited bytes: 0x00
struct FRigidNetValidationSetup {
	// Fields
	float MaxDistanceError; // Offset: 0x00 // Size: 0x04
	float ChassisScale; // Offset: 0x04 // Size: 0x04
	float SpeedScale; // Offset: 0x08 // Size: 0x04
	float VelSinTolerance; // Offset: 0x0c // Size: 0x04
	float AbnormalVelZ; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NetTankMovementState
// Size: 0x38 // Inherited bytes: 0x00
struct FNetTankMovementState {
	// Fields
	struct FVector_NetQuantize100 Location; // Offset: 0x00 // Size: 0x0c
	struct FVector_NetQuantize100 LinVel; // Offset: 0x0c // Size: 0x0c
	struct FVector_NetQuantizeNormal Rotation; // Offset: 0x18 // Size: 0x0c
	struct FVector_NetQuantize100 AngVel; // Offset: 0x24 // Size: 0x0c
	float TurretYaw; // Offset: 0x30 // Size: 0x04
	float MainGunPitch; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.FormTypeNode
// Size: 0x02 // Inherited bytes: 0x00
struct FFormTypeNode {
	// Fields
	enum class EFormType PrevType; // Offset: 0x00 // Size: 0x01
	enum class EFormType NextType; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleParams
// Size: 0x14 // Inherited bytes: 0x00
struct FVehicleParams {
	// Fields
	struct FVector LocationOffset; // Offset: 0x00 // Size: 0x0c
	float HitGroundHeight; // Offset: 0x0c // Size: 0x04
	bool bShouldHitGround; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleUserReconnRepData
// Size: 0x18 // Inherited bytes: 0x00
struct FVehicleUserReconnRepData {
	// Fields
	struct ASTExtraVehicleBase* Vehicle; // Offset: 0x00 // Size: 0x08
	struct ASTExtraPlayerCharacter* Character; // Offset: 0x08 // Size: 0x08
	enum class ESTExtraVehicleUserState VehicleUserState; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty SeatIdx; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleQueryParams
// Size: 0x98 // Inherited bytes: 0x00
struct FVehicleQueryParams {
	// Fields
	char pad_0x0[0x98]; // Offset: 0x00 // Size: 0x98
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleWeaponCameraViewLimit
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleWeaponCameraViewLimit {
	// Fields
	bool bLimitPitch; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector2D PitchRange; // Offset: 0x04 // Size: 0x08
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UCurveFloat* CurveMinPitch; // Offset: 0x10 // Size: 0x08
	struct UCurveFloat* CurveMaxPitch; // Offset: 0x18 // Size: 0x08
	bool bLimitYaw; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	struct FVector2D YawRange; // Offset: 0x24 // Size: 0x08
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VerifySwitch
// Size: 0x28 // Inherited bytes: 0x00
struct FVerifySwitch {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	IntProperty PunishThresHold; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x1]; // Offset: 0x0c // Size: 0x01
	bool bShouldPunish; // Offset: 0x0d // Size: 0x01
	bool bRecordOnlyIfReplay; // Offset: 0x0e // Size: 0x01
	char pad_0xF[0x1]; // Offset: 0x0f // Size: 0x01
	IntProperty VerifyFailedCnt; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x8]; // Offset: 0x14 // Size: 0x08
	IntProperty StrategyTypeInReplay; // Offset: 0x1c // Size: 0x04
	IntProperty AutoPunishType; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BurstVerifySwitch
// Size: 0x80 // Inherited bytes: 0x28
struct FBurstVerifySwitch : FVerifySwitch {
	// Fields
	char pad_0x28[0x50]; // Offset: 0x28 // Size: 0x50
	float BurstTime; // Offset: 0x78 // Size: 0x04
	IntProperty BurstCount; // Offset: 0x7c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldFrame
// Size: 0x50 // Inherited bytes: 0x00
struct FVisualFieldFrame {
	// Fields
	MapProperty VisualFieldFrameMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldCamp
// Size: 0x10 // Inherited bytes: 0x00
struct FVisualFieldCamp {
	// Fields
	struct TArray<struct FVisibleActorInfo> VisibleActorList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisibleActorInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FVisibleActorInfo {
	// Fields
	struct FVisualFieldMetaInfo VisibleActorMetaInfo; // Offset: 0x00 // Size: 0x10
	struct TWeakObjectPtr<struct AActor> VisibleActor; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldLayerConfig
// Size: 0x10 // Inherited bytes: 0x00
struct FVisualFieldLayerConfig {
	// Fields
	struct TArray<struct FVisualFieldLayer> VisualLayerList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.VisualFieldLayer
// Size: 0x0c // Inherited bytes: 0x00
struct FVisualFieldLayer {
	// Fields
	float LayerFloorHeight; // Offset: 0x00 // Size: 0x04
	float LayerRoofHeight; // Offset: 0x04 // Size: 0x04
	IntProperty LayerID; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.ScoreChangeValue
// Size: 0x08 // Inherited bytes: 0x00
struct FScoreChangeValue {
	// Fields
	IntProperty Score_RescueOthers; // Offset: 0x00 // Size: 0x04
	IntProperty Score_Kill; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WarGameTeamScore
// Size: 0x10 // Inherited bytes: 0x00
struct FWarGameTeamScore {
	// Fields
	IntProperty Campid; // Offset: 0x00 // Size: 0x04
	IntProperty TeamID; // Offset: 0x04 // Size: 0x04
	IntProperty TeamRank; // Offset: 0x08 // Size: 0x04
	IntProperty TeamScore; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.BunnyDanceSyncData
// Size: 0x0c // Inherited bytes: 0x00
struct FBunnyDanceSyncData {
	// Fields
	IntProperty CurrentIndex; // Offset: 0x00 // Size: 0x04
	bool bIsDancing; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float TimeStamp; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocketAttachmentNameTable
// Size: 0x28 // Inherited bytes: 0x00
struct FSocketAttachmentNameTable {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	struct FVector OffsetLoc; // Offset: 0x08 // Size: 0x0c
	struct FRotator OffsetRot; // Offset: 0x14 // Size: 0x0c
	struct UAnimMontage* AnimMontage; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SocketAttachmentInternalData
// Size: 0x38 // Inherited bytes: 0x00
struct FSocketAttachmentInternalData {
	// Fields
	struct FName SocketName; // Offset: 0x00 // Size: 0x08
	struct USceneComponent* SocketBase; // Offset: 0x08 // Size: 0x08
	struct AActor* AttachedPlayer; // Offset: 0x10 // Size: 0x08
	struct FVector OffsetLoc; // Offset: 0x18 // Size: 0x0c
	struct FRotator OffsetRot; // Offset: 0x24 // Size: 0x0c
	struct UAnimMontage* AnimMontage; // Offset: 0x30 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.SkeletalAnimationSyncData
// Size: 0x10 // Inherited bytes: 0x00
struct FSkeletalAnimationSyncData {
	// Fields
	struct USceneComponent* SocketBase; // Offset: 0x00 // Size: 0x08
	bool status; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct ShadowTrackerExtra.LoveTreeData
// Size: 0x18 // Inherited bytes: 0x00
struct FLoveTreeData {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	struct FVector Loc; // Offset: 0x04 // Size: 0x0c
	float minRate; // Offset: 0x10 // Size: 0x04
	float maxRate; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WaterDropItemData
// Size: 0x18 // Inherited bytes: 0x00
struct FWaterDropItemData {
	// Fields
	struct AActor* HostActor; // Offset: 0x00 // Size: 0x08
	struct FVector DropLocation; // Offset: 0x08 // Size: 0x0c
	IntProperty DropID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.GuidActorsArray
// Size: 0x10 // Inherited bytes: 0x00
struct FGuidActorsArray {
	// Fields
	struct TArray<struct AWeakGuidActor*> GuidActors; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeakGuidTableRow
// Size: 0x40 // Inherited bytes: 0x00
struct FWeakGuidTableRow {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty UIName; // Offset: 0x08 // Size: 0x10
	StrProperty UILayer; // Offset: 0x18 // Size: 0x10
	StrProperty RootClass; // Offset: 0x28 // Size: 0x10
	IntProperty GuidTxt; // Offset: 0x38 // Size: 0x04
	IntProperty GuidNum; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoAimTargetSelector
// Size: 0x300 // Inherited bytes: 0x00
struct FAutoAimTargetSelector {
	// Fields
	struct UWeaponAutoAimingComponent* AimComp; // Offset: 0x00 // Size: 0x08
	struct ASTExtraBaseCharacter* PlayerPawn; // Offset: 0x08 // Size: 0x08
	struct ASTExtraPlayerController* PlayerController; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x2e8]; // Offset: 0x18 // Size: 0x2e8
};

// Object Name: ScriptStruct ShadowTrackerExtra.CompareEnemyInfo
// Size: 0x01 // Inherited bytes: 0x00
struct FCompareEnemyInfo {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct ShadowTrackerExtra.PoseWeaponStaticMuzzleOffsetData
// Size: 0x50 // Inherited bytes: 0x00
struct FPoseWeaponStaticMuzzleOffsetData {
	// Fields
	MapProperty PoseMuzzleOffsetMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.PeekMuzzleOffsetData
// Size: 0x50 // Inherited bytes: 0x00
struct FPeekMuzzleOffsetData {
	// Fields
	MapProperty PeekMuzzleOffsetMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.PitchMuzzleOffsetData
// Size: 0x10 // Inherited bytes: 0x00
struct FPitchMuzzleOffsetData {
	// Fields
	struct TArray<struct FMuzzleOffsetData> PitchMuzzleOffsetDataList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MuzzleOffsetData
// Size: 0x10 // Inherited bytes: 0x00
struct FMuzzleOffsetData {
	// Fields
	IntProperty Pitch; // Offset: 0x00 // Size: 0x04
	struct FVector MuzzleOffset; // Offset: 0x04 // Size: 0x0c
};

// Object Name: ScriptStruct ShadowTrackerExtra.ParticleEffectGroup
// Size: 0x20 // Inherited bytes: 0x00
struct FParticleEffectGroup {
	// Fields
	struct TArray<struct UParticleSystemComponent*> ParticleCompList; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FParticleRes> ParticleRes; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.MiniItem
// Size: 0x08 // Inherited bytes: 0x00
struct FMiniItem {
	// Fields
	IntProperty Type; // Offset: 0x00 // Size: 0x04
	IntProperty TypeSpecificID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponFxParamModifyCfg
// Size: 0x28 // Inherited bytes: 0x00
struct FWeaponFxParamModifyCfg {
	// Fields
	struct FName ParticleTag; // Offset: 0x00 // Size: 0x08
	struct FName ParamName; // Offset: 0x08 // Size: 0x08
	enum class EWeaponFxParamType ParamType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float ParamFloatValue; // Offset: 0x14 // Size: 0x04
	struct FVector ParamVectorValue; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponEffectMatParamModifyCfg
// Size: 0x28 // Inherited bytes: 0x00
struct FWeaponEffectMatParamModifyCfg {
	// Fields
	struct FName ParamName; // Offset: 0x00 // Size: 0x08
	enum class EWeaponEffectMatParamType ParamType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float ParamFloatValue; // Offset: 0x0c // Size: 0x04
	struct FLinearColor ParamColorValue; // Offset: 0x10 // Size: 0x10
	struct UTexture* ParamTextureValue; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MuzzleEffectTypeSnapshot
// Size: 0x48 // Inherited bytes: 0x00
struct FMuzzleEffectTypeSnapshot {
	// Fields
	struct FMuzzleEffectChannelSnapshot Local; // Offset: 0x00 // Size: 0x18
	struct FMuzzleEffectChannelSnapshot SCOPE; // Offset: 0x18 // Size: 0x18
	struct FMuzzleEffectChannelSnapshot Remote; // Offset: 0x30 // Size: 0x18
};

// Object Name: ScriptStruct ShadowTrackerExtra.MuzzleEffectChannelSnapshot
// Size: 0x18 // Inherited bytes: 0x00
struct FMuzzleEffectChannelSnapshot {
	// Fields
	struct UParticleSystem* PreFX; // Offset: 0x00 // Size: 0x08
	struct FVector PreScale; // Offset: 0x08 // Size: 0x0c
	bool bOverridden; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.ImpactMapValueData
// Size: 0x10 // Inherited bytes: 0x00
struct FImpactMapValueData {
	// Fields
	struct TArray<struct ASTEShootWeaponBulletImpactEffect*> ImpactEffectList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.DefaultWeaponHolderInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FDefaultWeaponHolderInfo {
	// Fields
	struct ASTExtraWeapon* WeaponClass; // Offset: 0x00 // Size: 0x08
	struct FName WeaponSocket; // Offset: 0x08 // Size: 0x08
	IntProperty WeaponSepcificID; // Offset: 0x10 // Size: 0x04
	IntProperty WeaponTypeID; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.AutoTriggerWeaponEventTask
// Size: 0x38 // Inherited bytes: 0x00
struct FAutoTriggerWeaponEventTask {
	// Fields
	char pad_0x0[0x38]; // Offset: 0x00 // Size: 0x38
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponReconnectReplicateDataWrapper
// Size: 0x88 // Inherited bytes: 0x00
struct FWeaponReconnectReplicateDataWrapper {
	// Fields
	struct FWeaponReconnectReplicateData WeaponReconnectReplicateData; // Offset: 0x00 // Size: 0x80
	struct ASTExtraWeapon* Weapon; // Offset: 0x80 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ResolvedMuzzleEntry
// Size: 0x40 // Inherited bytes: 0x00
struct FResolvedMuzzleEntry {
	// Fields
	struct FResolvedMuzzleChannel LocalChannel; // Offset: 0x00 // Size: 0x10
	struct FResolvedMuzzleChannel ScopeChannel; // Offset: 0x10 // Size: 0x10
	struct FResolvedMuzzleChannel RemoteChannel; // Offset: 0x20 // Size: 0x10
	bool bHasSocketName; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct FName MuzzleFXSocketName; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ResolvedMuzzleChannel
// Size: 0x10 // Inherited bytes: 0x00
struct FResolvedMuzzleChannel {
	// Fields
	bool bShouldOverride; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAvatarParticleEntityBase* ParticleEntity; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.MuzzleEffectEntry
// Size: 0x40 // Inherited bytes: 0x00
struct FMuzzleEffectEntry {
	// Fields
	bool bOverrideMuzzleEffect; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UAvatarParticleEntityBase* OverrideMuzzleEffect; // Offset: 0x08 // Size: 0x08
	bool bOverrideScopeMuzzleEffect; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct UAvatarParticleEntityBase* OverrideScopeMuzzleEffect; // Offset: 0x18 // Size: 0x08
	bool bOverrideRemoteMuzzleEffect; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct UAvatarParticleEntityBase* OverrideRemoteMuzzleEffect; // Offset: 0x28 // Size: 0x08
	bool bOverrideMuzzleFXSocketName; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct FName MuzzleFXSocketName; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.ShootWeaponReplayRecordData
// Size: 0x34 // Inherited bytes: 0x00
struct FShootWeaponReplayRecordData {
	// Fields
	bool bIsValid; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FReplayStartFireInfo ReplayStartFireInfo; // Offset: 0x04 // Size: 0x30
};

// Object Name: ScriptStruct ShadowTrackerExtra.WeaponAttrReloadTableStruct
// Size: 0x408 // Inherited bytes: 0x00
struct FWeaponAttrReloadTableStruct {
	// Fields
	IntProperty KeyID; // Offset: 0x00 // Size: 0x04
	float AutoAimingConfig_InnerRange_Speed; // Offset: 0x04 // Size: 0x04
	float AutoAimingConfig_InnerRange_CenterSpeedRate; // Offset: 0x08 // Size: 0x04
	float AutoAimingConfig_InnerRange_RangeRate; // Offset: 0x0c // Size: 0x04
	float AutoAimingConfig_InnerRange_SpeedRate; // Offset: 0x10 // Size: 0x04
	float AutoAimingConfig_InnerRange_RangeRateSight; // Offset: 0x14 // Size: 0x04
	float AutoAimingConfig_InnerRange_SpeedRateSight; // Offset: 0x18 // Size: 0x04
	float AutoAimingConfig_InnerRange_CrouchRate; // Offset: 0x1c // Size: 0x04
	float AutoAimingConfig_InnerRange_ProneRate; // Offset: 0x20 // Size: 0x04
	float AutoAimingConfig_InnerRange_DyingRate; // Offset: 0x24 // Size: 0x04
	float AutoAimingConfig_InnerRange_DriveVehicleRate; // Offset: 0x28 // Size: 0x04
	float AutoAimingConfig_InnerRange_InVehicleRate; // Offset: 0x2c // Size: 0x04
	float AutoAimingConfig_InnerRange_FreeFallRate; // Offset: 0x30 // Size: 0x04
	float AutoAimingConfig_InnerRange_OpeningRate; // Offset: 0x34 // Size: 0x04
	float AutoAimingConfig_InnerRange_LandingRate; // Offset: 0x38 // Size: 0x04
	float AutoAimingConfig_InnerRange_AdsorbMaxRange; // Offset: 0x3c // Size: 0x04
	float AutoAimingConfig_InnerRange_AdsorbMinRange; // Offset: 0x40 // Size: 0x04
	float AutoAimingConfig_InnerRange_AdsorbMinAttenuationDis; // Offset: 0x44 // Size: 0x04
	float AutoAimingConfig_InnerRange_AdsorbMaxAttenuationDis; // Offset: 0x48 // Size: 0x04
	float AutoAimingConfig_InnerRange_AdsorbActiveMinRange; // Offset: 0x4c // Size: 0x04
	float AutoAimingConfig_OuterRange_Speed; // Offset: 0x50 // Size: 0x04
	float AutoAimingConfig_OuterRange_CenterSpeedRate; // Offset: 0x54 // Size: 0x04
	float AutoAimingConfig_OuterRange_RangeRate; // Offset: 0x58 // Size: 0x04
	float AutoAimingConfig_OuterRange_SpeedRate; // Offset: 0x5c // Size: 0x04
	float AutoAimingConfig_OuterRange_RangeRateSight; // Offset: 0x60 // Size: 0x04
	float AutoAimingConfig_OuterRange_SpeedRateSight; // Offset: 0x64 // Size: 0x04
	float AutoAimingConfig_OuterRange_CrouchRate; // Offset: 0x68 // Size: 0x04
	float AutoAimingConfig_OuterRange_ProneRate; // Offset: 0x6c // Size: 0x04
	float AutoAimingConfig_OuterRange_DyingRate; // Offset: 0x70 // Size: 0x04
	float AutoAimingConfig_OuterRange_DriveVehicleRate; // Offset: 0x74 // Size: 0x04
	float AutoAimingConfig_OuterRange_InVehicleRate; // Offset: 0x78 // Size: 0x04
	float AutoAimingConfig_OuterRange_FreeFallRate; // Offset: 0x7c // Size: 0x04
	float AutoAimingConfig_OuterRange_OpeningRate; // Offset: 0x80 // Size: 0x04
	float AutoAimingConfig_OuterRange_LandingRate; // Offset: 0x84 // Size: 0x04
	float AutoAimingConfig_OuterRange_AdsorbMaxRange; // Offset: 0x88 // Size: 0x04
	float AutoAimingConfig_OuterRange_AdsorbMinRange; // Offset: 0x8c // Size: 0x04
	float AutoAimingConfig_OuterRange_AdsorbMinAttenuationDis; // Offset: 0x90 // Size: 0x04
	float AutoAimingConfig_OuterRange_AdsorbMaxAttenuationDis; // Offset: 0x94 // Size: 0x04
	float AutoAimingConfig_OuterRange_AdsorbActiveMinRange; // Offset: 0x98 // Size: 0x04
	float AutoAimingConfig_ScopeRange_Speed; // Offset: 0x9c // Size: 0x04
	float AutoAimingConfig_ScopeRange_CenterSpeedRate; // Offset: 0xa0 // Size: 0x04
	float AutoAimingConfig_ScopeRange_RangeRate; // Offset: 0xa4 // Size: 0x04
	float AutoAimingConfig_ScopeRange_SpeedRate; // Offset: 0xa8 // Size: 0x04
	float AutoAimingConfig_ScopeRange_RangeRateSight; // Offset: 0xac // Size: 0x04
	float AutoAimingConfig_ScopeRange_SpeedRateSight; // Offset: 0xb0 // Size: 0x04
	float AutoAimingConfig_ScopeRange_CrouchRate; // Offset: 0xb4 // Size: 0x04
	float AutoAimingConfig_ScopeRange_ProneRate; // Offset: 0xb8 // Size: 0x04
	float AutoAimingConfig_ScopeRange_DyingRate; // Offset: 0xbc // Size: 0x04
	float AutoAimingConfig_ScopeRange_DriveVehicleRate; // Offset: 0xc0 // Size: 0x04
	float AutoAimingConfig_ScopeRange_InVehicleRate; // Offset: 0xc4 // Size: 0x04
	float AutoAimingConfig_ScopeRange_FreeFallRate; // Offset: 0xc8 // Size: 0x04
	float AutoAimingConfig_ScopeRange_OpeningRate; // Offset: 0xcc // Size: 0x04
	float AutoAimingConfig_ScopeRange_LandingRate; // Offset: 0xd0 // Size: 0x04
	float AutoAimingConfig_ScopeRange_AdsorbMaxRange; // Offset: 0xd4 // Size: 0x04
	float AutoAimingConfig_ScopeRange_AdsorbMinRange; // Offset: 0xd8 // Size: 0x04
	float AutoAimingConfig_ScopeRange_AdsorbMinAttenuationDis; // Offset: 0xdc // Size: 0x04
	float AutoAimingConfig_ScopeRange_AdsorbMaxAttenuationDis; // Offset: 0xe0 // Size: 0x04
	float AutoAimingConfig_ScopeRange_AdsorbActiveMinRange; // Offset: 0xe4 // Size: 0x04
	float AutoAimingConfig_FollowTimeMax; // Offset: 0xe8 // Size: 0x04
	float AutoAimingConfig_MaxAngle; // Offset: 0xec // Size: 0x04
	IntProperty AutoAimingConfig_TriggerBeforeFire; // Offset: 0xf0 // Size: 0x04
	char pad_0xF4[0x4]; // Offset: 0xf4 // Size: 0x04
	StrProperty AutoAimingConfig_SpeedCurve; // Offset: 0xf8 // Size: 0x10
	StrProperty AutoAimingConfig_DistanceCurvePath; // Offset: 0x108 // Size: 0x10
	StrProperty AutoAimingConfig_SensitiveCurvePath; // Offset: 0x118 // Size: 0x10
	float AccessoriesVRecoilFactor; // Offset: 0x128 // Size: 0x04
	float AccessoriesHRecoilFactor; // Offset: 0x12c // Size: 0x04
	float AccessoriesRecoveryFactor; // Offset: 0x130 // Size: 0x04
	float RecoilLeftMax; // Offset: 0x134 // Size: 0x04
	float RecoilRightMax; // Offset: 0x138 // Size: 0x04
	float RecoilKickADS; // Offset: 0x13c // Size: 0x04
	float ExtraHitPerformScale; // Offset: 0x140 // Size: 0x04
	float RecoilModifierStand; // Offset: 0x144 // Size: 0x04
	float RecoilModifierCrouch; // Offset: 0x148 // Size: 0x04
	float RecoilModifierProne; // Offset: 0x14c // Size: 0x04
	float DeviationBase; // Offset: 0x150 // Size: 0x04
	float DeviationBaseAim; // Offset: 0x154 // Size: 0x04
	float DeviationRecoilGain; // Offset: 0x158 // Size: 0x04
	float DeviationRecoilGainAim; // Offset: 0x15c // Size: 0x04
	float DeviationMaxMove; // Offset: 0x160 // Size: 0x04
	float DeviationMoveMultiplier; // Offset: 0x164 // Size: 0x04
	float DeviationStanceJump; // Offset: 0x168 // Size: 0x04
	float DeviationShoulderMultiplier; // Offset: 0x16c // Size: 0x04
	float GameDeviationFactor; // Offset: 0x170 // Size: 0x04
	float HitPartCoffHead; // Offset: 0x174 // Size: 0x04
	float HitPartCoffBody; // Offset: 0x178 // Size: 0x04
	float HitPartCoffLimbs; // Offset: 0x17c // Size: 0x04
	float HitPartCoffHand; // Offset: 0x180 // Size: 0x04
	float HitPartCoffFoot; // Offset: 0x184 // Size: 0x04
	float ZombileHitPartCoffHead; // Offset: 0x188 // Size: 0x04
	float ZombileHitPartCoffBody; // Offset: 0x18c // Size: 0x04
	float ZombileHitPartCoffLimbs; // Offset: 0x190 // Size: 0x04
	float ZombileHitPartCoffHand; // Offset: 0x194 // Size: 0x04
	float ZombileHitPartCoffFoot; // Offset: 0x198 // Size: 0x04
	float BaseImpactDamage; // Offset: 0x19c // Size: 0x04
	float RangeModifier; // Offset: 0x1a0 // Size: 0x04
	float ReferenceDistance; // Offset: 0x1a4 // Size: 0x04
	float IgnoreRangeAttenuatDis; // Offset: 0x1a8 // Size: 0x04
	char pad_0x1AC[0x4]; // Offset: 0x1ac // Size: 0x04
	StrProperty BaseDamageDistanceCurve; // Offset: 0x1b0 // Size: 0x10
	float ReloadTime; // Offset: 0x1c0 // Size: 0x04
	float ReloadTimeTactical; // Offset: 0x1c4 // Size: 0x04
	float ReloadTimeMagOut; // Offset: 0x1c8 // Size: 0x04
	float ReloadTimeMagIn; // Offset: 0x1cc // Size: 0x04
	float ReloadDurationStart; // Offset: 0x1d0 // Size: 0x04
	float ReloadDurationLoop; // Offset: 0x1d4 // Size: 0x04
	float MaxBulletNumInOneClip; // Offset: 0x1d8 // Size: 0x04
	float InitBulletInClip; // Offset: 0x1dc // Size: 0x04
	float BulletFireSpeed; // Offset: 0x1e0 // Size: 0x04
	float ImpactEffectSkipDistance; // Offset: 0x1e4 // Size: 0x04
	float MaxImpactEffectSkipTime; // Offset: 0x1e8 // Size: 0x04
	IntProperty bEnableVehicleShoot; // Offset: 0x1ec // Size: 0x04
	IntProperty bEnableLeanOutHolding; // Offset: 0x1f0 // Size: 0x04
	float Bullet_RadialDamageParams_BaseDamage; // Offset: 0x1f4 // Size: 0x04
	float Bullet_RadialDamageParams_MinimumDamage; // Offset: 0x1f8 // Size: 0x04
	float Bullet_RadialDamageParams_DamageInnerRadius; // Offset: 0x1fc // Size: 0x04
	float Bullet_RadialDamageParams_DamageOuterRadius; // Offset: 0x200 // Size: 0x04
	float Bullet_RadialDamageParams_DamageFalloff; // Offset: 0x204 // Size: 0x04
	float Bullet_MaxNoGravityRange; // Offset: 0x208 // Size: 0x04
	float Bullet_LaunchGravityScale; // Offset: 0x20c // Size: 0x04
	float ShootInterval; // Offset: 0x210 // Size: 0x04
	char pad_0x214[0x4]; // Offset: 0x214 // Size: 0x04
	StrProperty Bullet_RadialDamageParams_DamageTypeClass; // Offset: 0x218 // Size: 0x10
	StrProperty ImpactActorTemplatePath; // Offset: 0x228 // Size: 0x10
	StrProperty BulletTemplatePath; // Offset: 0x238 // Size: 0x10
	IntProperty ReloadWithNoCost; // Offset: 0x248 // Size: 0x04
	char pad_0x24C[0x4]; // Offset: 0x24c // Size: 0x04
	StrProperty MuzzleFX; // Offset: 0x250 // Size: 0x10
	StrProperty ScopeMuzzleFX; // Offset: 0x260 // Size: 0x10
	StrProperty RemoteMuzzleFX; // Offset: 0x270 // Size: 0x10
	StrProperty LocalSilencerMuzzleFX; // Offset: 0x280 // Size: 0x10
	StrProperty ScopeSilencerMuzzleFX; // Offset: 0x290 // Size: 0x10
	StrProperty RemoteSilencerMuzzleFX; // Offset: 0x2a0 // Size: 0x10
	StrProperty LocalFiringSuppressorMuzzleFX; // Offset: 0x2b0 // Size: 0x10
	StrProperty ScopeFiringSuppressorMuzzleFX; // Offset: 0x2c0 // Size: 0x10
	StrProperty RemoteFiringSuppressorMuzzleFX; // Offset: 0x2d0 // Size: 0x10
	StrProperty LocalCompensatorMuzzleFX; // Offset: 0x2e0 // Size: 0x10
	StrProperty ScopeCompensatorMuzzleFX; // Offset: 0x2f0 // Size: 0x10
	StrProperty RemoteCompensatorMuzzleFX; // Offset: 0x300 // Size: 0x10
	StrProperty Bullet_AutonomousFPPFX; // Offset: 0x310 // Size: 0x10
	StrProperty Bullet_AutonomousTPPFX; // Offset: 0x320 // Size: 0x10
	StrProperty Bullet_AutonomousGunADSFX; // Offset: 0x330 // Size: 0x10
	StrProperty Bullet_OBFPPFX; // Offset: 0x340 // Size: 0x10
	StrProperty Bullet_OBTPPFX; // Offset: 0x350 // Size: 0x10
	StrProperty Bullet_OBGunADSFX; // Offset: 0x360 // Size: 0x10
	StrProperty Bullet_ReplayFPPFX; // Offset: 0x370 // Size: 0x10
	StrProperty Bullet_ReplayTPPFX; // Offset: 0x380 // Size: 0x10
	StrProperty Bullet_ReplayGunADSFX; // Offset: 0x390 // Size: 0x10
	StrProperty Bullet_DefaultFX; // Offset: 0x3a0 // Size: 0x10
	IntProperty bSimulateBulletOptimize; // Offset: 0x3b0 // Size: 0x04
	IntProperty BulletTrackDistanceFix; // Offset: 0x3b4 // Size: 0x04
	IntProperty BulletLaunchRangeFromMuzzleMin; // Offset: 0x3b8 // Size: 0x04
	IntProperty BulletLaunchRangeFromMuzzleMax; // Offset: 0x3bc // Size: 0x04
	IntProperty SimulateBulletLaunchRangeFromMuzzleMin; // Offset: 0x3c0 // Size: 0x04
	IntProperty SimulateBulletLaunchRangeFromMuzzleMax; // Offset: 0x3c4 // Size: 0x04
	float AnimationKick; // Offset: 0x3c8 // Size: 0x04
	float VehicleDamageScale; // Offset: 0x3cc // Size: 0x04
	IntProperty WeaponDurability; // Offset: 0x3d0 // Size: 0x04
	IntProperty ShootReduceDurabilityAmount; // Offset: 0x3d4 // Size: 0x04
	StrProperty CameraShakeNormalPath; // Offset: 0x3d8 // Size: 0x10
	StrProperty CameraShakeNearPath; // Offset: 0x3e8 // Size: 0x10
	StrProperty CameraShakeAimPath; // Offset: 0x3f8 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WarmAttrModify
// Size: 0x58 // Inherited bytes: 0x00
struct FWarmAttrModify {
	// Fields
	IntProperty WarmBegin; // Offset: 0x00 // Size: 0x04
	IntProperty WarmEnd; // Offset: 0x04 // Size: 0x04
	MapProperty AttributeMap; // Offset: 0x08 // Size: 0x50
};

// Object Name: ScriptStruct ShadowTrackerExtra.WarmAttrModifyCell
// Size: 0x0c // Inherited bytes: 0x00
struct FWarmAttrModifyCell {
	// Fields
	enum class EAttrOperator ModifierOp; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ModifierValue; // Offset: 0x04 // Size: 0x04
	bool ClientSimulate; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct ShadowTrackerExtra.VehicleFlyProtectionSetup
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleFlyProtectionSetup {
	// Fields
	float MaxDistance; // Offset: 0x00 // Size: 0x04
	float MaxVelZ; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.NonDrivenProtectionSetup
// Size: 0x1c // Inherited bytes: 0x00
struct FNonDrivenProtectionSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float MinThrottleInput; // Offset: 0x04 // Size: 0x04
	float ErrorDistance; // Offset: 0x08 // Size: 0x04
	float Duration; // Offset: 0x0c // Size: 0x04
	float MaxUpVectorZ; // Offset: 0x10 // Size: 0x04
	float OverlapScale; // Offset: 0x14 // Size: 0x04
	IntProperty NumWheelsInAir; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleShootDriveSetup
// Size: 0x04 // Inherited bytes: 0x00
struct FWheeledVehicleShootDriveSetup {
	// Fields
	float minSpeed; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleShootDrivePhysicsSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FWheeledVehicleShootDrivePhysicsSetup {
	// Fields
	float PeakTorque; // Offset: 0x00 // Size: 0x04
	float ClutchStrength; // Offset: 0x04 // Size: 0x04
	float LinearDamping; // Offset: 0x08 // Size: 0x04
	float AngularDamping; // Offset: 0x0c // Size: 0x04
	struct UTireConfig* TireConfig; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.BikeDriftRollSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FBikeDriftRollSetup {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UCurveFloat* CurveRoll; // Offset: 0x08 // Size: 0x08
	float RollSpeed; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleExitDriftSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FWheeledVehicleExitDriftSetup {
	// Fields
	float minSpeed; // Offset: 0x00 // Size: 0x04
	float MinAngle; // Offset: 0x04 // Size: 0x04
	float MaxAngle; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct TArray<enum class ECollisionChannel> IgnoreChannels; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleDriftBrakeSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FWheeledVehicleDriftBrakeSetup {
	// Fields
	struct UCurveFloat* OmegaDecel; // Offset: 0x00 // Size: 0x08
	struct UCurveFloat* Decel; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleDriftSetup
// Size: 0x50 // Inherited bytes: 0x00
struct FWheeledVehicleDriftSetup {
	// Fields
	float AntiCheatMaxOmega; // Offset: 0x00 // Size: 0x04
	float MaxOmega; // Offset: 0x04 // Size: 0x04
	struct FVehicleInputRate SteeringInputRate; // Offset: 0x08 // Size: 0x08
	struct UCurveVector* CurveOmegaAccel; // Offset: 0x10 // Size: 0x08
	struct UCurveVector* CurveRecovery; // Offset: 0x18 // Size: 0x08
	struct UCurveFloat* CurveRecoveryScale; // Offset: 0x20 // Size: 0x08
	struct UCurveVector* CurveSpeed; // Offset: 0x28 // Size: 0x08
	struct UCurveFloat* CurveAccel; // Offset: 0x30 // Size: 0x08
	struct UCurveFloat* CurveAccelScale; // Offset: 0x38 // Size: 0x08
	struct UCurveFloat* CurveDecel; // Offset: 0x40 // Size: 0x08
	float DragDecel; // Offset: 0x48 // Size: 0x04
	float NetConnectionErrorDuration; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleEnterDriftSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FWheeledVehicleEnterDriftSetup {
	// Fields
	float minSpeed; // Offset: 0x00 // Size: 0x04
	float MinSteeringInput; // Offset: 0x04 // Size: 0x04
	float MinAngle; // Offset: 0x08 // Size: 0x04
	float MinOmega; // Offset: 0x0c // Size: 0x04
	float OmegaAccel; // Offset: 0x10 // Size: 0x04
	float Duration; // Offset: 0x14 // Size: 0x04
	struct UCurveFloat* CurveDecel; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleDriftEngineSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FWheeledVehicleDriftEngineSetup {
	// Fields
	float MinRPM; // Offset: 0x00 // Size: 0x04
	struct FVector ThrottleRPMRate; // Offset: 0x04 // Size: 0x0c
	float NoThrottleRPMRate; // Offset: 0x10 // Size: 0x04
	float BrakeRPMRate; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehicleDriftPhysicsSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FWheeledVehicleDriftPhysicsSetup {
	// Fields
	float PeakTorque; // Offset: 0x00 // Size: 0x04
	float LinearDamping; // Offset: 0x04 // Size: 0x04
	float AngularDamping; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UTireConfig* TireConfig; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehiclePivotSetup
// Size: 0x10 // Inherited bytes: 0x00
struct FWheeledVehiclePivotSetup {
	// Fields
	float EnterSpeed; // Offset: 0x00 // Size: 0x04
	float MinSteeringInput; // Offset: 0x04 // Size: 0x04
	float OmegaAccel; // Offset: 0x08 // Size: 0x04
	float MaxOmega; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheeledVehiclePivotPhysicsSetup
// Size: 0x18 // Inherited bytes: 0x00
struct FWheeledVehiclePivotPhysicsSetup {
	// Fields
	float PeakTorque; // Offset: 0x00 // Size: 0x04
	float ClutchStrength; // Offset: 0x04 // Size: 0x04
	float LinearDamping; // Offset: 0x08 // Size: 0x04
	float AngularDamping; // Offset: 0x0c // Size: 0x04
	struct UTireConfig* TireConfig; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.WheelSfxOnSurface
// Size: 0x18 // Inherited bytes: 0x00
struct FWheelSfxOnSurface {
	// Fields
	struct UPhysicalMaterial* SurfaceMaterial; // Offset: 0x00 // Size: 0x08
	struct UAkAudioEvent* EventStart; // Offset: 0x08 // Size: 0x08
	struct UAkAudioEvent* EventStop; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct ShadowTrackerExtra.TextureRenderTarget2DManagerWidgetInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FTextureRenderTarget2DManagerWidgetInfo {
	// Fields
	struct UClass* UserWidgetClass; // Offset: 0x00 // Size: 0x28
	struct UUserWidget* LoadedUserWidgetClass; // Offset: 0x28 // Size: 0x08
	struct UUserWidget* UserWidget; // Offset: 0x30 // Size: 0x08
	struct FName UpdateWidgetFunctionName; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x10]; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WingManUserDataStruct
// Size: 0xd8 // Inherited bytes: 0x00
struct FWingManUserDataStruct {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty RPScore; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	IntProperty SkinID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FGameModePlayerShowUpassInfo UnPassInfo; // Offset: 0x28 // Size: 0xb0
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulCutContinuousKillOutputData
// Size: 0x10 // Inherited bytes: 0x00
struct FWonderfulCutContinuousKillOutputData {
	// Fields
	float BeginTimeSecs; // Offset: 0x00 // Size: 0x04
	float EndTimeSecs; // Offset: 0x04 // Size: 0x04
	IntProperty KillNum; // Offset: 0x08 // Size: 0x04
	float FarthestKillDistance; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulCutOutputData
// Size: 0x20 // Inherited bytes: 0x00
struct FWonderfulCutOutputData {
	// Fields
	float BeginTimeSecs; // Offset: 0x00 // Size: 0x04
	float EndTimeSecs; // Offset: 0x04 // Size: 0x04
	enum class EWonderfulCutOutputType WonderfulCutType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float ShootDistance; // Offset: 0x0c // Size: 0x04
	StrProperty causerName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulCutShootDamageSortData
// Size: 0x20 // Inherited bytes: 0x00
struct FWonderfulCutShootDamageSortData {
	// Fields
	float DamageIntervalSecs; // Offset: 0x00 // Size: 0x04
	float DamageTimeSecs; // Offset: 0x04 // Size: 0x04
	bool bVictimAI; // Offset: 0x08 // Size: 0x01
	enum class EWonderfulCutCaptureType CaptureType; // Offset: 0x09 // Size: 0x01
	enum class EWonderfulCutShootDamageType ShootDamageType; // Offset: 0x0a // Size: 0x01
	char pad_0xB[0x1]; // Offset: 0x0b // Size: 0x01
	float ShootDistance; // Offset: 0x0c // Size: 0x04
	StrProperty causerName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulCutShootDamageData
// Size: 0x18 // Inherited bytes: 0x00
struct FWonderfulCutShootDamageData {
	// Fields
	IntProperty DamagePlayerID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FWonderfulCut_OneShootDamage> ShootDamageList; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WonderfulCut_OneShootDamage
// Size: 0x20 // Inherited bytes: 0x00
struct FWonderfulCut_OneShootDamage {
	// Fields
	bool bVictimAI; // Offset: 0x00 // Size: 0x01
	enum class EWonderfulCutCaptureType CaptureType; // Offset: 0x01 // Size: 0x01
	enum class EWonderfulCutShootDamageType ShootDamageType; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
	float DamageTimeSecs; // Offset: 0x04 // Size: 0x04
	float ShootDistance; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty causerName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WorldActorFlagList
// Size: 0x10 // Inherited bytes: 0x00
struct FWorldActorFlagList {
	// Fields
	struct TArray<struct FWorldActorFlagData> FlagList; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct ShadowTrackerExtra.WorldActorFlagData
// Size: 0x08 // Inherited bytes: 0x00
struct FWorldActorFlagData {
	// Fields
	IntProperty ActorNetGUID; // Offset: 0x00 // Size: 0x04
	uint32_t PlayerKey; // Offset: 0x04 // Size: 0x04
};

