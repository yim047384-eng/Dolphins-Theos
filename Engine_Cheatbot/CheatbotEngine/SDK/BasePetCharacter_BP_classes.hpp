#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BasePetCharacter_BP.BasePetCharacter_BP_C
// Size: 0x14f1 // Inherited bytes: 0x1400
struct ABasePetCharacter_BP_C : ASTExtraFightPetCharacter {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1400 // Size: 0x08
	struct UPetBubbleComponent_BP_C* PetBubbleComponent_BP; // Offset: 0x1408 // Size: 0x08
	struct UPetAvatarComponent_BP_C* PetAvatarComponent_BP; // Offset: 0x1410 // Size: 0x08
	struct USTBuffSystemComponent* STBuffSystem; // Offset: 0x1418 // Size: 0x08
	struct UPetEntityComponent_BP_C* PetEntity; // Offset: 0x1420 // Size: 0x08
	struct UPetEventManagerComponent* PetEventManager; // Offset: 0x1428 // Size: 0x08
	float Timeline_0_Track_CE2094E94B1D206C7858FC99724BAEFA; // Offset: 0x1430 // Size: 0x04
	enum class ETimelineDirection Timeline_0__Direction_CE2094E94B1D206C7858FC99724BAEFA; // Offset: 0x1434 // Size: 0x01
	char pad_0x1435[0x3]; // Offset: 0x1435 // Size: 0x03
	struct UTimelineComponent* Timeline_1; // Offset: 0x1438 // Size: 0x08
	struct ASTExtraPlayerController* OwnerCharacterController; // Offset: 0x1440 // Size: 0x08
	struct FScriptMulticastDelegate PetOwnerStateChangeDispatcher; // Offset: 0x1448 // Size: 0x10
	struct TArray<IntProperty> UnlockAnimIds; // Offset: 0x1458 // Size: 0x10
	struct USplineComponent* PetParachuteSpline; // Offset: 0x1468 // Size: 0x08
	struct USplineMeshComponent* ParachuteSpline; // Offset: 0x1470 // Size: 0x08
	bool VisibilityToSet; // Offset: 0x1478 // Size: 0x01
	char pad_0x1479[0x7]; // Offset: 0x1479 // Size: 0x07
	struct FTimerHandle CheckAirAttackTimer; // Offset: 0x1480 // Size: 0x08
	struct FVector CurAttackArea; // Offset: 0x1488 // Size: 0x0c
	bool IsInAttackArea; // Offset: 0x1494 // Size: 0x01
	char pad_0x1495[0x3]; // Offset: 0x1495 // Size: 0x03
	struct FTimerHandle DebugLineTimer; // Offset: 0x1498 // Size: 0x08
	bool IsPlayingAppearAnim; // Offset: 0x14a0 // Size: 0x01
	char pad_0x14A1[0x3]; // Offset: 0x14a1 // Size: 0x03
	float PetAppearTime; // Offset: 0x14a4 // Size: 0x04
	float PetDelayLeaveDisappearTime; // Offset: 0x14a8 // Size: 0x04
	char pad_0x14AC[0x4]; // Offset: 0x14ac // Size: 0x04
	struct FTimerHandle PetDelayLeaveDisappearTimer; // Offset: 0x14b0 // Size: 0x08
	bool HasResetAttachByAnim; // Offset: 0x14b8 // Size: 0x01
	enum class EPawnState TPlayerState; // Offset: 0x14b9 // Size: 0x01
	enum class EPawnStateChangeType TChangeType; // Offset: 0x14ba // Size: 0x01
	char pad_0x14BB[0x1]; // Offset: 0x14bb // Size: 0x01
	float TeleportMinAngle; // Offset: 0x14bc // Size: 0x04
	float TeleportMaxAngle; // Offset: 0x14c0 // Size: 0x04
	bool ShouldHideOnFirstPersonView; // Offset: 0x14c4 // Size: 0x01
	char pad_0x14C5[0x3]; // Offset: 0x14c5 // Size: 0x03
	struct FVector SwimOffset; // Offset: 0x14c8 // Size: 0x0c
	IntProperty CountToPlayWinAnim; // Offset: 0x14d4 // Size: 0x04
	IntProperty MaxCountToPlayWinAnim; // Offset: 0x14d8 // Size: 0x04
	float IntervalToPlayWinAnim; // Offset: 0x14dc // Size: 0x04
	bool bPetHidden; // Offset: 0x14e0 // Size: 0x01
	bool bPetExitParachuteForPlayerState; // Offset: 0x14e1 // Size: 0x01
	bool bScopeInState; // Offset: 0x14e2 // Size: 0x01
	char pad_0x14E3[0x1]; // Offset: 0x14e3 // Size: 0x01
	struct FVector OriginalMeshScale; // Offset: 0x14e4 // Size: 0x0c
	bool bSkipResetVisibilityWhenStateChange; // Offset: 0x14f0 // Size: 0x01

	// Functions

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.MulticastRPC_StopAnimation
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MulticastRPC_StopAnimation(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.NeedUpdateTranslationInParachuteState
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void NeedUpdateTranslationInParachuteState(bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadAvatarLater
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void LoadAvatarLater(struct TArray<IntProperty>& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadBehaviorTree
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadBehaviorTree(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetPetVisibility
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetPetVisibility(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.IsTeammateWithPetOwner
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsTeammateWithPetOwner(struct ASTExtraPlayerCharacter* OtherPlayer, bool& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleAirAttack
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleAirAttack(struct FVector Area, bool IsAirAttacking); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetHidden
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetPetHidden(bool bHidden); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetSwimmingStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPetSwimmingStateChange(bool bEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetGameModeType
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetGameModeType(enum class EGameModeType& GameModeType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleOnOwnerWin
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnOwnerWin(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChange
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnPetOwnerFallingModeChange(bool IsFalling); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.StopCurMontage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StopCurMontage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.ChangeToDefaultAttachInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeToDefaultAttachInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnDelayLeaveDisappear
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnDelayLeaveDisappear(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetLeaveState
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnPetLeaveState(enum class EPetState LeaveState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetEnterState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPetEnterState(enum class EPetState EnterState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetAppearAnimEnd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPetAppearAnimEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetDisappearStateChange
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnPetDisappearStateChange(bool IsEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetParachuteEquipments
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetParachuteEquipments(struct TArray<IntProperty>& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStopParachute
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandlePetStopParachute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStartParachute
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandlePetStartParachute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.DetachFromOwnerPlayer
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DetachFromOwnerPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.InitPetAvatar
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitPetAvatar(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetFollowType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetPetFollowType(enum class EPetFollowOwnerType Type); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetHasDisappearState
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void PetHasDisappearState(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFlyAroundStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPetFlyAroundStateChange(bool IsEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFollowStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPetFollowStateChange(bool IsEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateAttachInfoByOwnerDefaultAvatar
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateAttachInfoByOwnerDefaultAvatar(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetAttachInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ResetAttachInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetInfo(struct FGameModePlayerPetInfo& PetInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEntity
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetEntity(struct UPetEntityComponent_BP_C*& PetEntity); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.DisableUnuseComponent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DisableUnuseComponent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.CalcInAirAttackArea
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CalcInAirAttackArea(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.SelfPetVisibleSettingChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SelfPetVisibleSettingChanged(bool In); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OtherPetVisibleSettingChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OtherPetVisibleSettingChanged(bool In); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOtherVisibleSetting
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void PetOtherVisibleSetting(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetSelfVisibleSetting
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void PetSelfVisibleSetting(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetDefaultFollowType
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetDefaultFollowType(enum class EPetFollowOwnerType& FollowType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.DrawPetDebugInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void DrawPetDebugInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.AttachToOwnerPlayer
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AttachToOwnerPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStopEmote
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PetOwnerStopEmote(IntProperty EmoteId, IntProperty StopReason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerPlayEmote
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PetOwnerPlayEmote(IntProperty EmoteId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.AnimIdIsValid
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void AnimIdIsValid(IntProperty AnimId, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetRspInfoWithPlayerEmoteId
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPetRspInfoWithPlayerEmoteId(IntProperty PlayerEmoteId, struct FBP_STRUCT_PetPlayerEmoteTable_type& Out Row, bool& found); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAnimLimitePlayerState
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	StrProperty GetPetAnimLimitePlayerState(IntProperty AnimId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetUnlockAnimIds
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct TArray<IntProperty> GetPetUnlockAnimIds(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetOwnerCharacter
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct ASTExtraBaseCharacter* GetPetOwnerCharacter(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAttachInfo
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetAttachInfo(struct FPetAttachInfo& AttachInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEventManager
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetEventManager(struct UPetEventManagerComponent*& PetEventManager); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacterPC
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetOwnerCharacterPC(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetOwnerCharacter
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetOwnerCharacter(struct ABP_PlayerPawn_C*& OwnerCharacter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacter
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetOwnerCharacter(struct ABP_PlayerPawn_C* Owner); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetFollowPos
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetFollowPos(float MinRadius, float MaxRadius, struct FTransform& Out); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__FinishedFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__UpdateFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.BindEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BindEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature(struct UPetWaitEventInfo* EventInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PlayerStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayerStateChange(enum class EPawnState State, enum class EPawnStateChangeType ChangeType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerCharacterBecomeValid
	// Flags: [Event|Public|BlueprintEvent]
	void PetOwnerCharacterBecomeValid(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateSplineInfo
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UpdateSplineInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStopParchute
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PetStopParchute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStartParachute
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PetStartParachute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetStateChangeEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetStateChangeEvent(enum class EPetState State, bool IsEnter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetMontageEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetMontageEvent(struct FPetMontageData MontageData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAsyncLoadPetAnimRes
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAsyncLoadPetAnimRes(struct UObject* LoadObject); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetVisibility
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SetPetVisibility(bool Visible); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerWinEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerWinEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerKillSomeone
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerKillSomeone(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAssistKill
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerAssistKill(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnMoveVoiceAround
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnMoveVoiceAround(struct ASTExtraBaseCharacter* nowCharacter, struct FVector posVector, float showTime); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnShotVoiceAround
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnShotVoiceAround(struct ASTExtraBaseCharacter* OwnerPawn, struct ASTExtraShootWeapon* nowWeapon, struct FVector posVector, float showTime, bool isslience, bool isExplosion); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x22)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.TriggerPetEvent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void TriggerPetEvent(struct UPetWaitEventInfo* Event); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.NotifyBpDrawDebugLineChange
	// Flags: [Event|Public|BlueprintEvent]
	void NotifyBpDrawDebugLineChange(bool Draw); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.DebugLineTimerEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DebugLineTimerEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerStateInterruptEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetOwnerStateInterruptEvent(enum class EPawnState State, enum class EPawnState InterruptedBy); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAvatarEquipped
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OnOwnerAvatarEquipped(enum class EAvatarSlotType SlotType, bool IsEquipped, IntProperty InItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetEnterPlane
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PetEnterPlane(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChangeEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetOwnerFallingModeChangeEvent(bool IsFalling); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerPerspectiveChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerPerspectiveChanged(bool IsFPP); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerHoldGrenadeStateChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerHoldGrenadeStateChange(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerShoot
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetOwnerShoot(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterHide
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetVisibility_EnterHide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterVisible
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetVisibility_EnterVisible(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerEnterParachute
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerEnterParachute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerExitParachute
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerExitParachute(enum class EExitParachuteType exitType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingTPP
	// Flags: [BlueprintCallable|BlueprintEvent]
	void MyPetVisibleSettingTPP(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingFPP
	// Flags: [BlueprintCallable|BlueprintEvent]
	void MyPetVisibleSettingFPP(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.On
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void On(struct ASTExtraBaseCharacter* DeadCharacter, struct AController* Killer, struct AActor* DamageCauser, struct FHitResult& KillingHitInfo, struct FVector KillingHitImpulseDir, struct UDamageType* KillingHitDamageType); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xb8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerScopIN
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerScopIN(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAvatarAllMeshLoaded_Event_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAvatarAllMeshLoaded_Event_1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_3
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_3(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerRespawned
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerRespawned(struct AUAEPlayerController* PlayerController); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnRep_AttachToPetOwner
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OnRep_AttachToPetOwner(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetMaterialIfNeed
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ResetMaterialIfNeed(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.ExecuteUbergraph_BasePetCharacter_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BasePetCharacter_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStateChangeDispatcher__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void PetOwnerStateChangeDispatcher__DelegateSignature(enum class EPawnState State, enum class EPawnStateChangeType ChangeType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)
};

