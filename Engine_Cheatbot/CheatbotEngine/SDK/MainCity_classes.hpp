#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MainCity.CarryBackMCAnimInstance
// Size: 0x1830 // Inherited bytes: 0x17e0
struct UCarryBackMCAnimInstance : UCharacterAnimStateBase {
	// Fields
	struct UBlendSpace* BS_CarryBackMove; // Offset: 0x17e0 // Size: 0x08
	struct UBlendSpace* BS_beCarryBackMove; // Offset: 0x17e8 // Size: 0x08
	enum class ECarryBackAnimState CurrentCarryBackState; // Offset: 0x17f0 // Size: 0x01
	char pad_0x17F1[0x7]; // Offset: 0x17f1 // Size: 0x07
	float CarryBackTimeAccumulator; // Offset: 0x17f8 // Size: 0x04
	bool bCarryBackState; // Offset: 0x17fc // Size: 0x01
	bool bBeCarryBackState; // Offset: 0x17fd // Size: 0x01
	char pad_0x17FE[0x2]; // Offset: 0x17fe // Size: 0x02
	IntProperty SubStateID; // Offset: 0x1800 // Size: 0x04
	char pad_0x1804[0x4]; // Offset: 0x1804 // Size: 0x04
	struct ASTExtraBaseCharacter* AttachParentCharacter; // Offset: 0x1808 // Size: 0x08
	struct FVector AttachParentPawnMoveVelocity; // Offset: 0x1810 // Size: 0x0c
	struct FVector PreAnimVelocity; // Offset: 0x181c // Size: 0x0c
	struct USTExtraAnimInstanceBase* MainInstance; // Offset: 0x1828 // Size: 0x08

	// Functions

	// Object Name: Function MainCity.CarryBackMCAnimInstance.HandlePlayerPoseChange
	// Flags: [Native|Public]
	void HandlePlayerPoseChange(enum class ESTEPoseState LastPose, enum class ESTEPoseState NewPose); // Offset: 0x1021be9e8 // Return & Params: Num(2) Size(0x2)
};

// Object Name: Class MainCity.CharLocomotionMCAnimInstance
// Size: 0x1a40 // Inherited bytes: 0x17e0
struct UCharLocomotionMCAnimInstance : UCharacterAnimStateBase {
	// Fields
	struct UBlendSpace* BS_MovementStand; // Offset: 0x17e0 // Size: 0x08
	struct UBlendSpace* BS_MovementCrouch; // Offset: 0x17e8 // Size: 0x08
	struct UBlendSpace* BS_MovementProne; // Offset: 0x17f0 // Size: 0x08
	struct UBlendSpace* BS_MovementStandDest; // Offset: 0x17f8 // Size: 0x08
	struct UBlendSpace* BS_MovementCrouchDest; // Offset: 0x1800 // Size: 0x08
	struct UBlendSpace* BS_MovementProneDest; // Offset: 0x1808 // Size: 0x08
	struct UAnimSequence* AS_StandScopeBlend; // Offset: 0x1810 // Size: 0x08
	struct UAnimSequence* AS_CrouchScopeBlend; // Offset: 0x1818 // Size: 0x08
	MapProperty MovementStand_SourceTransTime; // Offset: 0x1820 // Size: 0x50
	MapProperty MovementStand_DestTransTime; // Offset: 0x1870 // Size: 0x50
	MapProperty CustomMovement_BlendTime; // Offset: 0x18c0 // Size: 0x50
	struct UAnimSequence* AS_SwitchPose_StandToCrouch; // Offset: 0x1910 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_StandToProne; // Offset: 0x1918 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_CrouchToStand; // Offset: 0x1920 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_CrouchToProne; // Offset: 0x1928 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_ProneToStand; // Offset: 0x1930 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_ProneToCrouch; // Offset: 0x1938 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_StandToCrouchDest; // Offset: 0x1940 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_StandToProneDest; // Offset: 0x1948 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_CrouchToStandDest; // Offset: 0x1950 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_CrouchToProneDest; // Offset: 0x1958 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_ProneToStandDest; // Offset: 0x1960 // Size: 0x08
	struct UAnimSequence* AS_SwitchPose_ProneToCrouchDest; // Offset: 0x1968 // Size: 0x08
	struct FVector moveVelocity; // Offset: 0x1970 // Size: 0x0c
	enum class ECharacterPoseType PoseType; // Offset: 0x197c // Size: 0x01
	enum class EWeaponType WeaponType; // Offset: 0x197d // Size: 0x01
	enum class ECharacterPoseType InterruptCachePose; // Offset: 0x197e // Size: 0x01
	enum class ECharacterPoseType RecoverCharPose; // Offset: 0x197f // Size: 0x01
	char pad_0x1980[0x8]; // Offset: 0x1980 // Size: 0x08
	bool bIsOnVehicle; // Offset: 0x1988 // Size: 0x01
	bool bScoping; // Offset: 0x1989 // Size: 0x01
	bool bIsMoving; // Offset: 0x198a // Size: 0x01
	bool bMovementChanged; // Offset: 0x198b // Size: 0x01
	char pad_0x198C[0x1]; // Offset: 0x198c // Size: 0x01
	bool bMovementChangedAndNotSwitchingPose; // Offset: 0x198d // Size: 0x01
	char pad_0x198E[0x1]; // Offset: 0x198e // Size: 0x01
	bool bWithoutWeapon; // Offset: 0x198f // Size: 0x01
	bool bIsSwitchingPose; // Offset: 0x1990 // Size: 0x01
	bool bUseInterruptPose; // Offset: 0x1991 // Size: 0x01
	bool bEmptyToCrouch; // Offset: 0x1992 // Size: 0x01
	bool bEmptyToProne; // Offset: 0x1993 // Size: 0x01
	bool bEmptyToStand; // Offset: 0x1994 // Size: 0x01
	bool bStandToProne; // Offset: 0x1995 // Size: 0x01
	bool bStandToCrouchNotMove; // Offset: 0x1996 // Size: 0x01
	bool bStandToCrouchMove; // Offset: 0x1997 // Size: 0x01
	bool bStandTo_StandToProne; // Offset: 0x1998 // Size: 0x01
	bool bStandTo_StandToCrouch; // Offset: 0x1999 // Size: 0x01
	bool bCrouchToProne; // Offset: 0x199a // Size: 0x01
	bool bCrouchToStandNotMove; // Offset: 0x199b // Size: 0x01
	bool bCrouchToStandMove; // Offset: 0x199c // Size: 0x01
	bool bCrouchTo_CrouchToProne; // Offset: 0x199d // Size: 0x01
	bool bCrouchTo_CrouchToStand; // Offset: 0x199e // Size: 0x01
	bool bProneToStand; // Offset: 0x199f // Size: 0x01
	bool bProneToCrouch; // Offset: 0x19a0 // Size: 0x01
	bool bProneTo_ProneToCrouch; // Offset: 0x19a1 // Size: 0x01
	bool bProneTo_ProneToStand; // Offset: 0x19a2 // Size: 0x01
	bool bProneToStand_ToStand; // Offset: 0x19a3 // Size: 0x01
	bool bStandToProne_ToProne; // Offset: 0x19a4 // Size: 0x01
	bool bCrouchToProne_ToProne; // Offset: 0x19a5 // Size: 0x01
	bool bProneToCrouch_ToCrouch; // Offset: 0x19a6 // Size: 0x01
	char pad_0x19A7[0x1]; // Offset: 0x19a7 // Size: 0x01
	float StandSwitchToPronePoseAnimDuration; // Offset: 0x19a8 // Size: 0x04
	float StandSwitchFromPronePoseAnimDuration; // Offset: 0x19ac // Size: 0x04
	float CrouchSwitchToPronePoseAnimDuration; // Offset: 0x19b0 // Size: 0x04
	float CrouchSwitchFromPronePoseAnimDuration; // Offset: 0x19b4 // Size: 0x04
	float StandSwitchToPronePoseAnimDelay; // Offset: 0x19b8 // Size: 0x04
	float StandSwitchFromPronePoseAnimDelay; // Offset: 0x19bc // Size: 0x04
	float CrouchSwitchToPronePoseAnimDelay; // Offset: 0x19c0 // Size: 0x04
	float CrouchSwitchFromPronePoseAnimDelay; // Offset: 0x19c4 // Size: 0x04
	float MovementBlendTime; // Offset: 0x19c8 // Size: 0x04
	float SwitchPoseTransTime; // Offset: 0x19cc // Size: 0x04
	float SwitchingPoseTimer; // Offset: 0x19d0 // Size: 0x04
	float SwitchingPoseTimerInternal; // Offset: 0x19d4 // Size: 0x04
	float InterruptPoseInternal; // Offset: 0x19d8 // Size: 0x04
	float SwitchPoseAnimStartPosition; // Offset: 0x19dc // Size: 0x04
	float CustomMovementBlendTime; // Offset: 0x19e0 // Size: 0x04
	float ScopeVelocityInterpSpeed; // Offset: 0x19e4 // Size: 0x04
	float SprintToPronePlayRate; // Offset: 0x19e8 // Size: 0x04
	bool bCarryBackState; // Offset: 0x19ec // Size: 0x01
	char pad_0x19ED[0x7]; // Offset: 0x19ed // Size: 0x07
	float CarryBackTimeAccumulator; // Offset: 0x19f4 // Size: 0x04
	struct TArray<struct FCharacterViewPointConfig> PoseStatusViewPointConfig; // Offset: 0x19f8 // Size: 0x10
	char pad_0x1A08[0x10]; // Offset: 0x1a08 // Size: 0x10
	float LeaveStateTimerInternal; // Offset: 0x1a18 // Size: 0x04
	float GunSprintToProneDefaultPlayRate; // Offset: 0x1a1c // Size: 0x04
	float CommonSprintToProneDefaultPlayRate; // Offset: 0x1a20 // Size: 0x04
	char pad_0x1A24[0x4]; // Offset: 0x1a24 // Size: 0x04
	struct FName JumpProneBlendCurveName; // Offset: 0x1a28 // Size: 0x08
	struct USTExtraAnimInstanceBase* MainInstance; // Offset: 0x1a30 // Size: 0x08
	char pad_0x1A38[0x8]; // Offset: 0x1a38 // Size: 0x08

	// Functions

	// Object Name: Function MainCity.CharLocomotionMCAnimInstance.SwitchingPoseFinishCallback
	// Flags: [Final|Native|Public]
	void SwitchingPoseFinishCallback(); // Offset: 0x1021bef08 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.CharLocomotionMCAnimInstance.SetViewPointLimitByPoseStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetViewPointLimitByPoseStatus(enum class ECharacterAnimBlendPoseType InPoseType, bool bEnter); // Offset: 0x1021bee48 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MainCity.CharLocomotionMCAnimInstance.SetInterruptPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetInterruptPose(bool bUseInterruptPose, enum class ECharacterPoseType InterruptPose); // Offset: 0x1021bed80 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MainCity.CharLocomotionMCAnimInstance.LeaveStateCallback
	// Flags: [Final|Native|Public]
	void LeaveStateCallback(); // Offset: 0x1021bed6c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.CharLocomotionMCAnimInstance.HandleStateLeave
	// Flags: [Final|Native|Public]
	void HandleStateLeave(enum class EPawnState LeaveState); // Offset: 0x1021becf0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainCity.CharLocomotionMCAnimInstance.HandlePlayerPoseChange
	// Flags: [Native|Public]
	void HandlePlayerPoseChange(enum class ESTEPoseState LastPose, enum class ESTEPoseState NewPose); // Offset: 0x1021bec30 // Return & Params: Num(2) Size(0x2)
};

// Object Name: Class MainCity.CharMainMCAnimInstance
// Size: 0x18d0 // Inherited bytes: 0x17e0
struct UCharMainMCAnimInstance : UCharacterAnimStateBase {
	// Fields
	struct UAnimSequence* C_IdleAddtive; // Offset: 0x17e0 // Size: 0x08
	struct UAnimSequence* C_JumpStart; // Offset: 0x17e8 // Size: 0x08
	struct UAnimSequence* C_LandLight; // Offset: 0x17f0 // Size: 0x08
	struct UAnimSequence* C_LandHeavy; // Offset: 0x17f8 // Size: 0x08
	struct UBlendSpace1D* C_FallingBS; // Offset: 0x1800 // Size: 0x08
	bool bUseCustomBS; // Offset: 0x1808 // Size: 0x01
	char pad_0x1809[0x7]; // Offset: 0x1809 // Size: 0x07
	struct UAnimSequence* C_JumpCustom; // Offset: 0x1810 // Size: 0x08
	struct UBlendSpace1D* C_FallingCustom; // Offset: 0x1818 // Size: 0x08
	bool C_Scoping; // Offset: 0x1820 // Size: 0x01
	char pad_0x1821[0x3]; // Offset: 0x1821 // Size: 0x03
	float C_CharacterYawRotateRate; // Offset: 0x1824 // Size: 0x04
	float C_CharacterYawRotateRate_Reverse; // Offset: 0x1828 // Size: 0x04
	float ScopeVelocityInterpSpeed; // Offset: 0x182c // Size: 0x04
	float b_WalkAdditiveAlpha; // Offset: 0x1830 // Size: 0x04
	bool b_UnarmedFallingToRifleFallLandingHard; // Offset: 0x1834 // Size: 0x01
	bool b_WalkToRifleJumpStationStart; // Offset: 0x1835 // Size: 0x01
	bool C_IdleAddtiveValid; // Offset: 0x1836 // Size: 0x01
	bool C_ShouldPauseAnim; // Offset: 0x1837 // Size: 0x01
	bool bWalkToJumpStart; // Offset: 0x1838 // Size: 0x01
	bool C_Move; // Offset: 0x1839 // Size: 0x01
	char pad_0x183A[0x2]; // Offset: 0x183a // Size: 0x02
	struct FVector C_MoveVelocity; // Offset: 0x183c // Size: 0x0c
	float f_C_MoveVelocityLengthSquard; // Offset: 0x1848 // Size: 0x04
	enum class EWeaponType C_WeaponType; // Offset: 0x184c // Size: 0x01
	bool b_C_LastMovementMode_NEQ_Falling_OR_HoldGrenade; // Offset: 0x184d // Size: 0x01
	bool b_WalkToUnarmedFalling; // Offset: 0x184e // Size: 0x01
	bool b_UnarmedFallingToRifleCombatFallLanding; // Offset: 0x184f // Size: 0x01
	float f_FallingVelocityZFactor; // Offset: 0x1850 // Size: 0x04
	float MaxFallingVelocityThreshold; // Offset: 0x1854 // Size: 0x04
	float f_C_MoveVelocity_X_FallingZFactor; // Offset: 0x1858 // Size: 0x04
	float C_MaxFallingSpeed; // Offset: 0x185c // Size: 0x04
	bool MovingOnGround; // Offset: 0x1860 // Size: 0x01
	bool C_MovingOnGroundAndMovbale; // Offset: 0x1861 // Size: 0x01
	enum class ECharacterPoseType C_PoseType; // Offset: 0x1862 // Size: 0x01
	enum class EMovementMode C_LastMovementMode; // Offset: 0x1863 // Size: 0x01
	bool C_IsJumping; // Offset: 0x1864 // Size: 0x01
	bool bIsLandingHard; // Offset: 0x1865 // Size: 0x01
	bool bAlwaysLandLight; // Offset: 0x1866 // Size: 0x01
	char pad_0x1867[0x1]; // Offset: 0x1867 // Size: 0x01
	struct FVector moveVelocity; // Offset: 0x1868 // Size: 0x0c
	bool C_ClimbAnimSwitch; // Offset: 0x1874 // Size: 0x01
	char pad_0x1875[0x3]; // Offset: 0x1875 // Size: 0x03
	float C_ClimbAnimTransTime; // Offset: 0x1878 // Size: 0x04
	float C_ClimbAnimTime_A; // Offset: 0x187c // Size: 0x04
	float C_ClimbAnimTime_B; // Offset: 0x1880 // Size: 0x04
	char pad_0x1884[0x4]; // Offset: 0x1884 // Size: 0x04
	struct UAnimSequence* C_Climb_FrameAnim_A; // Offset: 0x1888 // Size: 0x08
	struct UAnimSequence* C_Climb_FrameAnim_B; // Offset: 0x1890 // Size: 0x08
	bool C_PlayerUseSeesaw; // Offset: 0x1898 // Size: 0x01
	bool bIsLinkMotionLayer; // Offset: 0x1899 // Size: 0x01
	char pad_0x189A[0x6]; // Offset: 0x189a // Size: 0x06
	struct FName LinkMotionLayerTagName; // Offset: 0x18a0 // Size: 0x08
	bool bHasCarryBacK; // Offset: 0x18a8 // Size: 0x01
	enum class ECustomMovmentMode C_CustomMovementMode; // Offset: 0x18a9 // Size: 0x01
	char pad_0x18AA[0x6]; // Offset: 0x18aa // Size: 0x06
	struct USTExtraAnimInstanceBase* MainInstance; // Offset: 0x18b0 // Size: 0x08
	struct UAnimInstanceContainer* LocomotionAnimContainer; // Offset: 0x18b8 // Size: 0x08
	struct UAnimInstance* TargetLocomotionBP; // Offset: 0x18c0 // Size: 0x08
	char pad_0x18C8[0x8]; // Offset: 0x18c8 // Size: 0x08

	// Functions

	// Object Name: Function MainCity.CharMainMCAnimInstance.SetClimbAnimation
	// Flags: [Final|Native|Public]
	void SetClimbAnimation(struct UAnimSequence* AnimSequence, bool bFlag); // Offset: 0x1021bf974 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainCity.CharMainMCAnimInstance.HandlePlayerAnimMontagePlayExtraDelegate
	// Flags: [Final|Native|Public]
	void HandlePlayerAnimMontagePlayExtraDelegate(struct UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, struct FName StartSection, float StartPos, bool bOnlyJumpToSectionWhilePlaying, struct FName IgnoreStopSection); // Offset: 0x1021bf778 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function MainCity.CharMainMCAnimInstance.HandlePlayerAnimMontagePlayDelegate
	// Flags: [Final|Native|Public]
	void HandlePlayerAnimMontagePlayDelegate(struct UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, struct FName StartSection, float StartPos); // Offset: 0x1021bf5f4 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function MainCity.CharMainMCAnimInstance.HandleAnimPlaySlotAnimDelegate
	// Flags: [Final|Native|Public]
	void HandleAnimPlaySlotAnimDelegate(struct UAnimSequenceBase* AnimSequence, bool bWantsPlay, struct FName SlotName, float PlayRate, float BlendTime, char InLoopCount, float InStartPos, float LoopStartPos); // Offset: 0x1021bf3cc // Return & Params: Num(8) Size(0x2c)
};

// Object Name: Class MainCity.CharSeesawMCAnimInstance
// Size: 0xcb0 // Inherited bytes: 0xc80
struct UCharSeesawMCAnimInstance : USTExtraAnimInstanceBase {
	// Fields
	char pad_0xC80[0x8]; // Offset: 0xc80 // Size: 0x08
	struct UAssetPlayerSyncNode* AssetPlayerSyncNode; // Offset: 0xc88 // Size: 0x08
	bool C_IsActivate; // Offset: 0xc90 // Size: 0x01
	bool C_IsLooping; // Offset: 0xc91 // Size: 0x01
	char pad_0xC92[0x2]; // Offset: 0xc92 // Size: 0x02
	IntProperty C_CurSeatState; // Offset: 0xc94 // Size: 0x04
	IntProperty C_OtherSeatState; // Offset: 0xc98 // Size: 0x04
	IntProperty C_SeesawState; // Offset: 0xc9c // Size: 0x04
	bool C_SitAtA; // Offset: 0xca0 // Size: 0x01
	bool C_SelfKnockUp; // Offset: 0xca1 // Size: 0x01
	bool C_OtherKnockUp; // Offset: 0xca2 // Size: 0x01
	bool C_SelfIdle; // Offset: 0xca3 // Size: 0x01
	bool C_SelfWaiting; // Offset: 0xca4 // Size: 0x01
	bool C_SelfEntering; // Offset: 0xca5 // Size: 0x01
	bool C_SelfEntered; // Offset: 0xca6 // Size: 0x01
	bool C_SelfExiting; // Offset: 0xca7 // Size: 0x01
	bool C_OtherIdle; // Offset: 0xca8 // Size: 0x01
	bool C_OtherWaiting; // Offset: 0xca9 // Size: 0x01
	bool C_OtherEntering; // Offset: 0xcaa // Size: 0x01
	bool C_OtherEntered; // Offset: 0xcab // Size: 0x01
	bool C_OtherExiting; // Offset: 0xcac // Size: 0x01
	bool C_IsEnterField; // Offset: 0xcad // Size: 0x01
	bool C_IsInGame; // Offset: 0xcae // Size: 0x01
	bool C_IsSpeedUp; // Offset: 0xcaf // Size: 0x01
};

// Object Name: Class MainCity.FollowerSysDataAsset
// Size: 0xa0 // Inherited bytes: 0x30
struct UFollowerSysDataAsset : UDataAsset {
	// Fields
	struct FName HandHoldingSocket; // Offset: 0x30 // Size: 0x08
	struct FVector HandHoldingSocketLocOffset; // Offset: 0x38 // Size: 0x0c
	struct FRotator HandHoldingSocketRotOffset; // Offset: 0x44 // Size: 0x0c
	float PullW; // Offset: 0x50 // Size: 0x04
	bool NormalizePull; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	struct FVector PositivePullFactor; // Offset: 0x58 // Size: 0x0c
	struct FVector NegativePullFactor; // Offset: 0x64 // Size: 0x0c
	bool RotateBone; // Offset: 0x70 // Size: 0x01
	bool RotateLimb; // Offset: 0x71 // Size: 0x01
	char pad_0x72[0x2]; // Offset: 0x72 // Size: 0x02
	float DeltaSmoothSpeed; // Offset: 0x74 // Size: 0x04
	float AngularDeltaSmoothSpeed; // Offset: 0x78 // Size: 0x04
	float OffsetSoverParms1; // Offset: 0x7c // Size: 0x04
	float TargetLocLerpSpeed; // Offset: 0x80 // Size: 0x04
	bool SmoothPositionOverTime; // Offset: 0x84 // Size: 0x01
	char pad_0x85[0x3]; // Offset: 0x85 // Size: 0x03
	float MaxPositionSpeed; // Offset: 0x88 // Size: 0x04
	float MaxPositionDistance; // Offset: 0x8c // Size: 0x04
	bool SmoothRotationOverTime; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x3]; // Offset: 0x91 // Size: 0x03
	float MaxDegreesSpeed; // Offset: 0x94 // Size: 0x04
	float MaxDegreesDistance; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class MainCity.HoldingHandsMCAnimInstance
// Size: 0x18d0 // Inherited bytes: 0x17e0
struct UHoldingHandsMCAnimInstance : UCharacterAnimStateBase {
	// Fields
	struct UBlendSpace* BS_HoldingHoldsLeader; // Offset: 0x17e0 // Size: 0x08
	struct UBlendSpace* BS_HoldingHoldsFollower; // Offset: 0x17e8 // Size: 0x08
	struct FVector HoldingHandsTargetLoc; // Offset: 0x17f0 // Size: 0x0c
	struct FRotator HoldingHandsTargetRot; // Offset: 0x17fc // Size: 0x0c
	struct FVector LeaderHoldingHandsTargetLoc; // Offset: 0x1808 // Size: 0x0c
	struct FVector FollowerHoldingHandsTargetLoc; // Offset: 0x1814 // Size: 0x0c
	bool bIsFollower; // Offset: 0x1820 // Size: 0x01
	char pad_0x1821[0x3]; // Offset: 0x1821 // Size: 0x03
	struct FVector OffsetSover1; // Offset: 0x1824 // Size: 0x0c
	float OffsetSoverParms1; // Offset: 0x1830 // Size: 0x04
	char pad_0x1834[0x4]; // Offset: 0x1834 // Size: 0x04
	struct UFollowerSysDataAsset* FollowerDA; // Offset: 0x1838 // Size: 0x08
	struct UFollowerSysDataAsset* LeaderDA; // Offset: 0x1840 // Size: 0x08
	float PullW; // Offset: 0x1848 // Size: 0x04
	bool NormalizePull; // Offset: 0x184c // Size: 0x01
	char pad_0x184D[0x3]; // Offset: 0x184d // Size: 0x03
	struct FVector PositivePullFactor; // Offset: 0x1850 // Size: 0x0c
	struct FVector NegativePullFactor; // Offset: 0x185c // Size: 0x0c
	bool RotateBone; // Offset: 0x1868 // Size: 0x01
	bool RotateLimb; // Offset: 0x1869 // Size: 0x01
	char pad_0x186A[0x2]; // Offset: 0x186a // Size: 0x02
	float DeltaSmoothSpeed; // Offset: 0x186c // Size: 0x04
	float AngularDeltaSmoothSpeed; // Offset: 0x1870 // Size: 0x04
	float F_PullW; // Offset: 0x1874 // Size: 0x04
	bool F_NormalizePull; // Offset: 0x1878 // Size: 0x01
	char pad_0x1879[0x3]; // Offset: 0x1879 // Size: 0x03
	struct FVector F_PositivePullFactor; // Offset: 0x187c // Size: 0x0c
	struct FVector F_NegativePullFactor; // Offset: 0x1888 // Size: 0x0c
	bool F_RotateBone; // Offset: 0x1894 // Size: 0x01
	bool F_RotateLimb; // Offset: 0x1895 // Size: 0x01
	char pad_0x1896[0x2]; // Offset: 0x1896 // Size: 0x02
	float F_DeltaSmoothSpeed; // Offset: 0x1898 // Size: 0x04
	float F_AngularDeltaSmoothSpeed; // Offset: 0x189c // Size: 0x04
	enum class ECharacterFollowType FollowType; // Offset: 0x18a0 // Size: 0x01
	enum class EHoldingHandsIKMode EHandIKMode; // Offset: 0x18a1 // Size: 0x01
	char pad_0x18A2[0x2]; // Offset: 0x18a2 // Size: 0x02
	struct FVector followerVelocity; // Offset: 0x18a4 // Size: 0x0c
	bool bUsePredictVelocity; // Offset: 0x18b0 // Size: 0x01
	char pad_0x18B1[0x3]; // Offset: 0x18b1 // Size: 0x03
	float followerSpeed; // Offset: 0x18b4 // Size: 0x04
	char pad_0x18B8[0x18]; // Offset: 0x18b8 // Size: 0x18
};

// Object Name: Class MainCity.MainCityGameMode
// Size: 0x2330 // Inherited bytes: 0x22b0
struct AMainCityGameMode : ABattleRoyaleGameMode {
	// Fields
	char pad_0x22B0[0x54]; // Offset: 0x22b0 // Size: 0x54
	uint32_t MaxAcceptOneFrame; // Offset: 0x2304 // Size: 0x04
	float MinAcceptTimeDelta; // Offset: 0x2308 // Size: 0x04
	float UpdateDistTimeDelta; // Offset: 0x230c // Size: 0x04
	struct TArray<float> RelevantDistArray; // Offset: 0x2310 // Size: 0x10
	float TickTimeDelta; // Offset: 0x2320 // Size: 0x04
	float RelevantDataLifeTime; // Offset: 0x2324 // Size: 0x04
	float ForceRelevantTimeDelta; // Offset: 0x2328 // Size: 0x04
	char pad_0x232C[0x4]; // Offset: 0x232c // Size: 0x04

	// Functions

	// Object Name: Function MainCity.MainCityGameMode.ReplayRecoverGenerateDSCheckpoint
	// Flags: [Final|Native|Public]
	void ReplayRecoverGenerateDSCheckpoint(StrProperty InReplayName); // Offset: 0x1021c0788 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.MainCityGameMode.PreInitGameState
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreInitGameState(); // Offset: 0x1021c076c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCityGameMode.InternalNotifyPlayerExit
	// Flags: [Native|Event|Public|BlueprintEvent]
	void InternalNotifyPlayerExit(struct ASTExtraPlayerController* PlayerController); // Offset: 0x1021c06e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainCity.MainCityGameMode.InitConsoleVar
	// Flags: [Final|Native|Public]
	void InitConsoleVar(StrProperty Command); // Offset: 0x1021c0650 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.MainCityGameMode.GenReplayDone
	// Flags: [Native|Event|Public|BlueprintEvent]
	void GenReplayDone(StrProperty ErrorMsg); // Offset: 0x1021c05b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.MainCityGameMode.DSPlayerKickOut
	// Flags: [Final|Native|Public]
	void DSPlayerKickOut(uint64 UID, struct FName PlayerType, StrProperty ExitReason); // Offset: 0x1021c0448 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class MainCity.MainCityGameModeStateActive
// Size: 0xc8 // Inherited bytes: 0xc8
struct UMainCityGameModeStateActive : UGameModeStateActive {
};

// Object Name: Class MainCity.MainCityGameModeStateFighting
// Size: 0xd0 // Inherited bytes: 0xd0
struct UMainCityGameModeStateFighting : UGameModeStateFighting {
};

// Object Name: Class MainCity.MainCityGameModeStateFinished
// Size: 0xc0 // Inherited bytes: 0xc0
struct UMainCityGameModeStateFinished : UGameModeStateFinished {
};

// Object Name: Class MainCity.MainCityGameModeStateReady
// Size: 0x118 // Inherited bytes: 0x118
struct UMainCityGameModeStateReady : UGameModeStateReady {
};

// Object Name: Class MainCity.MainCityGameplayStatics
// Size: 0x28 // Inherited bytes: 0x28
struct UMainCityGameplayStatics : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function MainCity.MainCityGameplayStatics.GetProjectSavedDir
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetProjectSavedDir(); // Offset: 0x1021c0ee4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class MainCity.MainCityGameState
// Size: 0x1638 // Inherited bytes: 0x1620
struct AMainCityGameState : ASTExtraGameStateBase {
	// Fields
	struct FScriptMulticastDelegate OnMainCityPlayerStateChangedDelegate; // Offset: 0x1620 // Size: 0x10
	bool bEnableTimeUpdate; // Offset: 0x1630 // Size: 0x01
	bool bEnableTimeOffset; // Offset: 0x1631 // Size: 0x01
	char pad_0x1632[0x2]; // Offset: 0x1632 // Size: 0x02
	float ReplicatedWorldTimeSecondsOffset; // Offset: 0x1634 // Size: 0x04
};

// Object Name: Class MainCity.MainCityHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UMainCityHelper : UObject {
	// Functions

	// Object Name: Function MainCity.MainCityHelper.SetSwapRolesForReplay
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SetSwapRolesForReplay(struct AActor* InActor); // Offset: 0x1021c11d8 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class MainCity.MainCityPlayerState
// Size: 0x1cd8 // Inherited bytes: 0x1cd8
struct AMainCityPlayerState : ASTExtraPlayerState {
	// Functions

	// Object Name: Function MainCity.MainCityPlayerState.RefreshAliasInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void RefreshAliasInfo(struct FGameModePlayerAliasInfo& PlayerAliasInfo); // Offset: 0x1021c13bc // Return & Params: Num(1) Size(0x48)
};

// Object Name: Class MainCity.MainCitySeesawAnimInstance
// Size: 0x420 // Inherited bytes: 0x3f0
struct UMainCitySeesawAnimInstance : UAnimInstance {
	// Fields
	struct UAssetPlayerSyncNode* AssetPlayerSyncNode; // Offset: 0x3f0 // Size: 0x08
	bool C_IsActivate; // Offset: 0x3f8 // Size: 0x01
	bool C_IsLooping; // Offset: 0x3f9 // Size: 0x01
	char pad_0x3FA[0x2]; // Offset: 0x3fa // Size: 0x02
	IntProperty C_SeatAState; // Offset: 0x3fc // Size: 0x04
	IntProperty C_SeatBState; // Offset: 0x400 // Size: 0x04
	IntProperty C_SeesawState; // Offset: 0x404 // Size: 0x04
	bool C_AKnockUp; // Offset: 0x408 // Size: 0x01
	bool C_BKnockUp; // Offset: 0x409 // Size: 0x01
	bool C_A_Idle; // Offset: 0x40a // Size: 0x01
	bool C_A_Waiting; // Offset: 0x40b // Size: 0x01
	bool C_A_Entering; // Offset: 0x40c // Size: 0x01
	bool C_A_Entered; // Offset: 0x40d // Size: 0x01
	bool C_A_Exiting; // Offset: 0x40e // Size: 0x01
	bool C_B_Idle; // Offset: 0x40f // Size: 0x01
	bool C_B_Waiting; // Offset: 0x410 // Size: 0x01
	bool C_B_Entering; // Offset: 0x411 // Size: 0x01
	bool C_B_Entered; // Offset: 0x412 // Size: 0x01
	bool C_B_Exiting; // Offset: 0x413 // Size: 0x01
	bool C_IsEnterField; // Offset: 0x414 // Size: 0x01
	bool C_IsInGame; // Offset: 0x415 // Size: 0x01
	bool C_IsSpeedUp; // Offset: 0x416 // Size: 0x01
	char pad_0x417[0x9]; // Offset: 0x417 // Size: 0x09

	// Functions

	// Object Name: Function MainCity.MainCitySeesawAnimInstance.SyncAttachedActorAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SyncAttachedActorAnimation(); // Offset: 0x1021c16e4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class MainCity.MainCitySubsystem
// Size: 0xd8 // Inherited bytes: 0x30
struct UMainCitySubsystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x58]; // Offset: 0x30 // Size: 0x58
	struct FName FeatureDefaultPawnName; // Offset: 0x88 // Size: 0x08
	StrProperty SkipLoadMapLevel; // Offset: 0x90 // Size: 0x10
	bool bShutdownUnrealNetwork; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x2f]; // Offset: 0xa1 // Size: 0x2f
	struct ASTExtraBaseCharacter* InitialCharacter; // Offset: 0xd0 // Size: 0x08

	// Functions

	// Object Name: Function MainCity.MainCitySubsystem.SetHasInitLobbyAvatar
	// Flags: [Final|Native|Public]
	void SetHasInitLobbyAvatar(struct ASTExtraPlayerController* InController, bool bInValue); // Offset: 0x1021c1ee0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MainCity.MainCitySubsystem.ResetMainCityGameState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetMainCityGameState(struct ASTExtraGameStateBase* InGameState); // Offset: 0x1021c1e64 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainCity.MainCitySubsystem.PreShutdownUnrealNetwork
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreShutdownUnrealNetwork(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PreEnterMainCityBattle
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreEnterMainCityBattle(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PreDestroyAutonomousChar
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreDestroyAutonomousChar(struct ASTExtraBaseCharacter* Character); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainCity.MainCitySubsystem.PostShutdownUnrealNetwork
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostShutdownUnrealNetwork(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PostPlayerActorChannelOpen
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostPlayerActorChannelOpen(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PostInitialize
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostInitialize(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PostEnterMainCityBattle
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostEnterMainCityBattle(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PostDeinitialize
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostDeinitialize(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.PostClearActors
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostClearActors(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainCity.MainCitySubsystem.KeepActor
	// Flags: [Final|Native|Public]
	void KeepActor(struct AActor* InActor); // Offset: 0x1021c1c84 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainCity.MainCitySubsystem.InitStandalonePawn
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct ASTExtraBaseCharacter* InitStandalonePawn(struct UObject* InClass, struct FVector& InLocation, struct FRotator& InRotation); // Offset: 0x1021c1b68 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function MainCity.MainCitySubsystem.ClearActors
	// Flags: [Final|Native|Public]
	void ClearActors(); // Offset: 0x1021c1b54 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class MainCity.MCAnimInstanceLocomotion
// Size: 0x1a80 // Inherited bytes: 0x1a70
struct UMCAnimInstanceLocomotion : UAnimInstanceLocomotion {
	// Fields
	bool bUseCustomBS; // Offset: 0x1a65 // Size: 0x01
	struct UBlendSpace* BS_MovementStandCustom; // Offset: 0x1a68 // Size: 0x08
	struct UBlendSpace* BS_MovementCrouchCustom; // Offset: 0x1a70 // Size: 0x08
	struct UBlendSpace* BS_MovementProneCustom; // Offset: 0x1a78 // Size: 0x08
};

// Object Name: Class MainCity.ReplayRecoverSubsystem
// Size: 0x178 // Inherited bytes: 0x30
struct UReplayRecoverSubsystem : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x60]; // Offset: 0x30 // Size: 0x60
	struct TArray<StrProperty> IncludeWorldNames; // Offset: 0x90 // Size: 0x10
	IntProperty MoveStaticBuffer; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<char> LuaInfo; // Offset: 0xa8 // Size: 0x10
	int64_t MaxTimeDelta; // Offset: 0xb8 // Size: 0x08
	IntProperty SkipRepNotifies; // Offset: 0xc0 // Size: 0x04
	char pad_0xC4[0xb4]; // Offset: 0xc4 // Size: 0xb4

	// Functions

	// Object Name: Function MainCity.ReplayRecoverSubsystem.WriteLuaInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void WriteLuaInfo(struct TArray<char>& InData); // Offset: 0x1021c30b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.SetReplayName
	// Flags: [Final|Native|Public]
	void SetReplayName(StrProperty InReplayName); // Offset: 0x1021c301c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.ReadLuaInfo
	// Flags: [Final|Native|Public]
	struct TArray<char> ReadLuaInfo(); // Offset: 0x1021c2fe4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PreInitializeWithParams
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreInitializeWithParams(struct UWorld* InWorld, struct UNetDriver* InDriver); // Offset: 0x1021c2f28 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PreInitializeForWorld
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreInitializeForWorld(StrProperty InURLStr, struct UWorld* InWorld, struct USTExtraGameInstance* InGameInstance); // Offset: 0x1021c2e0c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PreInitializeForGameMode
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreInitializeForGameMode(StrProperty InURLStr, struct UWorld* InWorld, struct AGameStateBase* InGameState); // Offset: 0x1021c2cf0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PreDemoPlaybackEnded
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PreDemoPlaybackEnded(struct UWorld* InWorld); // Offset: 0x1021c2c6c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PostInitializeWithParams
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostInitializeWithParams(struct UWorld* InWorld, struct UNetDriver* InDriver); // Offset: 0x1021c2bb0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PostInitializeForWorld
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostInitializeForWorld(StrProperty InURLStr, struct UWorld* InWorld, struct USTExtraGameInstance* InGameInstance); // Offset: 0x1021c2a94 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.PostInitializeForGameMode
	// Flags: [Native|Event|Public|BlueprintEvent]
	void PostInitializeForGameMode(StrProperty InURLStr, struct UWorld* InWorld, struct AGameStateBase* InGameState); // Offset: 0x1021c2978 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.LuaSaveLuaInfo
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaSaveLuaInfo(); // Offset: 0x1021c293c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.LoadReplayDone
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LoadReplayDone(StrProperty ErrorMsg); // Offset: 0x1021c289c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.IsVersionValid
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsVersionValid(StrProperty RecordVersion, StrProperty PlayerVersion); // Offset: 0x1021c2798 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.IsTimeValid
	// Flags: [Final|Native|Public]
	bool IsTimeValid(int64_t RecordTime, int64_t PlayTime); // Offset: 0x1021c26d4 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.GenReplayDone
	// Flags: [Native|Event|Public|BlueprintEvent]
	void GenReplayDone(StrProperty ErrorMsg); // Offset: 0x1021c2634 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.DeleteExpiredFiles
	// Flags: [Final|Native|Public]
	void DeleteExpiredFiles(float MaxKeepHours); // Offset: 0x1021c25b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainCity.ReplayRecoverSubsystem.ClearRecoverFile
	// Flags: [Final|Native|Public]
	void ClearRecoverFile(); // Offset: 0x1021c25a4 // Return & Params: Num(0) Size(0x0)
};

