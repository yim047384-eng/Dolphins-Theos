#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerPawn.BP_PlayerPawn_C
// Size: 0x76e8 // Inherited bytes: 0x7430
struct ABP_PlayerPawn_C : ASTExtraPlayerCharacter {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x7430 // Size: 0x08
	struct UBP_CharacterSearchOtherComp_C* BP_CharacterSearchOtherComp; // Offset: 0x7438 // Size: 0x08
	struct UStaticMeshComponent* ScopeStaticMesh; // Offset: 0x7440 // Size: 0x08
	struct UScopeCameraComponent* ScopingCameraNew; // Offset: 0x7448 // Size: 0x08
	struct UCharacterFollowComponent_C* CharacterFollowComponent; // Offset: 0x7450 // Size: 0x08
	struct UCharacterAnimShareParamsComp* CharacterAnimShareParamsComp; // Offset: 0x7458 // Size: 0x08
	struct UBP_PlayEmoteComponent_C* BP_PlayEmoteComponent; // Offset: 0x7460 // Size: 0x08
	struct UCharacterBoundCapsuleComonent* MeshBoundCapsuleComonent; // Offset: 0x7468 // Size: 0x08
	struct UDynamicOptimizeCharacterComps_C* DynamicOptimizeCharacterComps; // Offset: 0x7470 // Size: 0x08
	struct UBP_CharacterCarryBackComp_C* BP_CharacterCarryBackComp; // Offset: 0x7478 // Size: 0x08
	struct UBP_SkillManagerComponent_C* BP_SkillManagerComponent; // Offset: 0x7480 // Size: 0x08
	struct UCustomCameraComponent* Camera; // Offset: 0x7488 // Size: 0x08
	struct UCapsuleComponent* ShareBounds; // Offset: 0x7490 // Size: 0x08
	struct UCharacterAnimList_Skill_C* CharacterAnimList_Skill; // Offset: 0x7498 // Size: 0x08
	struct UStaticMeshComponent* SCOPE; // Offset: 0x74a0 // Size: 0x08
	struct UPostProcessComponent* PostProcess; // Offset: 0x74a8 // Size: 0x08
	struct USpringArmComponent* ShoulderCameraSpringArm; // Offset: 0x74b0 // Size: 0x08
	struct USceneComponent* ShoulderCameraOffset; // Offset: 0x74b8 // Size: 0x08
	struct UCharacterAnimList_Base_C* CharacterAnimList_Base; // Offset: 0x74c0 // Size: 0x08
	struct UPetComponent_BP_C* PetComponent_BP; // Offset: 0x74c8 // Size: 0x08
	struct UCharacterAvatarComp2_BP_C* CharacterAvatarComp2_BP; // Offset: 0x74d0 // Size: 0x08
	struct UObserverCameraComponent* ObserverCameraFPPMode; // Offset: 0x74d8 // Size: 0x08
	struct UFPPSpringArmComponent* FPPSpringArm; // Offset: 0x74e0 // Size: 0x08
	struct UFPPComponent_C* FPPComponent; // Offset: 0x74e8 // Size: 0x08
	struct UParticleSystemComponent* ParticleSystem; // Offset: 0x74f0 // Size: 0x08
	struct USpringArmComponent* ScopingSpringArm; // Offset: 0x74f8 // Size: 0x08
	struct UCapsuleComponent* HitBox_Prone; // Offset: 0x7500 // Size: 0x08
	struct UCapsuleComponent* HitBox_Stand; // Offset: 0x7508 // Size: 0x08
	struct UVault_Controller_C* Vault_Controller; // Offset: 0x7510 // Size: 0x08
	struct UBP_SwimController_C* BP_SwimController; // Offset: 0x7518 // Size: 0x08
	struct UBP_AutoAimingComponent_C* BP_AutoAimingComponent; // Offset: 0x7520 // Size: 0x08
	struct UCharacterWeaponManagerComponent* CharacterWeaponManager; // Offset: 0x7528 // Size: 0x08
	struct UPickupManagerComponent* PickupManager; // Offset: 0x7530 // Size: 0x08
	struct USceneComponent* CameraRoot; // Offset: 0x7538 // Size: 0x08
	struct UCustomSpringArmComponent* CustomSpringArm; // Offset: 0x7540 // Size: 0x08
	struct UCameraSettingComponent_C* CameraSettingComponent; // Offset: 0x7548 // Size: 0x08
	float ScopeTimeline_NewTrack_1_FBCE53A7433799FDD4E08AA77C9DCE27; // Offset: 0x7550 // Size: 0x04
	enum class ETimelineDirection ScopeTimeline__Direction_FBCE53A7433799FDD4E08AA77C9DCE27; // Offset: 0x7554 // Size: 0x01
	char pad_0x7555[0x3]; // Offset: 0x7555 // Size: 0x03
	struct UTimelineComponent* ScopeTimeline; // Offset: 0x7558 // Size: 0x08
	bool IsReloading; // Offset: 0x7560 // Size: 0x01
	char pad_0x7561[0x3]; // Offset: 0x7561 // Size: 0x03
	float ReloadingCDMax; // Offset: 0x7564 // Size: 0x04
	bool Jumped; // Offset: 0x7568 // Size: 0x01
	enum class EPlayerCameraMode CurCameraMode; // Offset: 0x7569 // Size: 0x01
	char pad_0x756A[0x2]; // Offset: 0x756a // Size: 0x02
	struct FSTR_CameraSetting StandCameraSetting; // Offset: 0x756c // Size: 0x14
	struct FVector Normal; // Offset: 0x7580 // Size: 0x0c
	char pad_0x758C[0x4]; // Offset: 0x758c // Size: 0x04
	struct APickUpWrapperActor* PickUpTarget_1; // Offset: 0x7590 // Size: 0x08
	bool bIsPicking; // Offset: 0x7598 // Size: 0x01
	char pad_0x7599[0x3]; // Offset: 0x7599 // Size: 0x03
	float DefaultCapsuleRadius; // Offset: 0x759c // Size: 0x04
	struct USkeletalMeshComponent* ParachuteComponent_1; // Offset: 0x75a0 // Size: 0x08
	struct TArray<struct USpringArmComponent*> SpringArms; // Offset: 0x75a8 // Size: 0x10
	struct TArray<struct UCameraComponent*> Cameras; // Offset: 0x75b8 // Size: 0x10
	struct USpringArmComponent* CurActiveSpringArm; // Offset: 0x75c8 // Size: 0x08
	struct USpringArmComponent* NewVar_1; // Offset: 0x75d0 // Size: 0x08
	enum class ESTEPoseState CurPoseState; // Offset: 0x75d8 // Size: 0x01
	char pad_0x75D9[0x7]; // Offset: 0x75d9 // Size: 0x07
	MapProperty EmoteBPIDToAnimHandleMap; // Offset: 0x75e0 // Size: 0x50
	struct UParticleSystem* DecentBloodSpot; // Offset: 0x7630 // Size: 0x08
	struct UParticleSystem* BloodSpot_Red; // Offset: 0x7638 // Size: 0x08
	struct UParticleSystem* BloodSpot_Green; // Offset: 0x7640 // Size: 0x08
	struct TArray<enum class EPawnState> DisallowedWateringStates; // Offset: 0x7648 // Size: 0x10
	struct UChildActorComponent* PaintDecalDetectComp; // Offset: 0x7658 // Size: 0x08
	struct ASTExtraWeapon* CurUseingEmoteWeapon; // Offset: 0x7660 // Size: 0x08
	struct UMaterialBillboardComponent* FrameUIBillboard; // Offset: 0x7668 // Size: 0x08
	bool bIsAngledSightOnlyTurn_1; // Offset: 0x7670 // Size: 0x01
	char pad_0x7671[0x7]; // Offset: 0x7671 // Size: 0x07
	struct UMeshComponent* OriginAttachComponent; // Offset: 0x7678 // Size: 0x08
	struct UMeshComponent* TargetAttachComponent; // Offset: 0x7680 // Size: 0x08
	struct FRotator OriginRotOffset; // Offset: 0x7688 // Size: 0x0c
	struct FDollyZoomParam OriginDollyZoomParam; // Offset: 0x7694 // Size: 0x0c
	struct FDollyZoomParam TargetDollyZoomParam; // Offset: 0x76a0 // Size: 0x0c
	char pad_0x76AC[0x4]; // Offset: 0x76ac // Size: 0x04
	struct FName HurtSoundSwitchState; // Offset: 0x76b0 // Size: 0x08
	struct FVector BloodScale; // Offset: 0x76b8 // Size: 0x0c
	char pad_0x76C4[0x4]; // Offset: 0x76c4 // Size: 0x04
	struct FScriptMulticastDelegate OnCakePlacement; // Offset: 0x76c8 // Size: 0x10
	struct UPhysicsAsset* ShootPhysicsAssetOpt; // Offset: 0x76d8 // Size: 0x08
	struct UPhysicsAsset* ShootPhysicsAsset; // Offset: 0x76e0 // Size: 0x08

	// Functions

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RPC_Client_SetShouldCheckPassWall
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_SetShouldCheckPassWall(char RPC_Client_SetShouldCheckPassWall_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(TeleportPawnFeature.RPC_Client_NotifyTeleportFailed)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(TeleportPawnFeature.RPC_Client_NotifyTeleportFailed)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(GeneralShowSpotFeature.RPC_Client_EnterShowSpot)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(GeneralShowSpotFeature.RPC_Client_EnterShowSpot)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(FinalKillEffect.TriggerParticleEffect)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(FinalKillEffect.TriggerParticleEffect)](IntProperty #[FeatureRPC(FinalKillEffect.TriggerParticleEffect)]_param1, struct FVector #[FeatureRPC(FinalKillEffect.TriggerParticleEffect)]_param2, struct FRotator #[FeatureRPC(FinalKillEffect.TriggerParticleEffect)]_param3, StrProperty StrProperty_13); // Offset: 0x101bc757c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(FinalKillEffect.PrepareItem)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(FinalKillEffect.PrepareItem)](IntProperty #[FeatureRPC(FinalKillEffect.PrepareItem)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(CarryDeadBoxFeature.ClientRPC_RejectCarryBox)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CarryDeadBoxFeature.ClientRPC_RejectCarryBox)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(BuildAircraftVehicleFeature.RPC_ShowTips)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(BuildAircraftVehicleFeature.RPC_ShowTips)](IntProperty #[FeatureRPC(BuildAircraftVehicleFeature.RPC_ShowTips)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(BuildAircraftVehicleFeature.ClientRPC_UpdateMaxBuildDistance)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(BuildAircraftVehicleFeature.ClientRPC_UpdateMaxBuildDistance)](IntProperty #[FeatureRPC(BuildAircraftVehicleFeature.ClientRPC_UpdateMaxBuildDistance)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(BuildAircraftVehicleFeature.Client_HideStore)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(BuildAircraftVehicleFeature.Client_HideStore)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ServerRPC_NearDeathGiveupRescue
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_NearDeathGiveupRescue(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ServerRPC_CarryDeadBox
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_CarryDeadBox(struct UObject* ServerRPC_CarryDeadBox_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RPC_Server_GmPlayAction
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_GmPlayAction(IntProperty RPC_Server_GmPlayAction_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(TeleportPawnFeature.RPC_Server_NotifyTeleportLoadingFinish)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(TeleportPawnFeature.RPC_Server_NotifyTeleportLoadingFinish)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(ParachuteFormation.RPC_ServerTacticalSpread)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(ParachuteFormation.RPC_ServerTacticalSpread)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(LifterControl.ServerRPC_SlideLifter)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(LifterControl.ServerRPC_SlideLifter)](char #[FeatureRPC(LifterControl.ServerRPC_SlideLifter)]_param1, char #[FeatureRPC(LifterControl.ServerRPC_SlideLifter)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(LifterControl.ServerRPC_ExitLifter)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(LifterControl.ServerRPC_ExitLifter)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(GeneralShowSpotFeature.RPC_Server_OnEnterShowSpotFailed)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(GeneralShowSpotFeature.RPC_Server_OnEnterShowSpotFailed)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(CommonBornlandTransformFeature.RPC_Server_DoTransfrom)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CommonBornlandTransformFeature.RPC_Server_DoTransfrom)](char #[FeatureRPC(CommonBornlandTransformFeature.RPC_Server_DoTransfrom)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(BuildAircraftVehicleFeature.ServerRPC_UpdateMaxBuildDistance)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(BuildAircraftVehicleFeature.ServerRPC_UpdateMaxBuildDistance)](IntProperty #[FeatureRPC(BuildAircraftVehicleFeature.ServerRPC_UpdateMaxBuildDistance)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(BuildAircraftVehicleFeature.ServerRPC_TryAutoEnterVehicle)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(BuildAircraftVehicleFeature.ServerRPC_TryAutoEnterVehicle)](struct ABioVehicleBase* #[FeatureRPC(BuildAircraftVehicleFeature.ServerRPC_TryAutoEnterVehicle)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(BuildAircraftVehicleFeature.RPC_PickupVehicle)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(BuildAircraftVehicleFeature.RPC_PickupVehicle)](struct ABioVehicleBase* #[FeatureRPC(BuildAircraftVehicleFeature.RPC_PickupVehicle)]_param1, char #[FeatureRPC(BuildAircraftVehicleFeature.RPC_PickupVehicle)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.MulticastRPC_GmPlayAction
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MulticastRPC_GmPlayAction(IntProperty MulticastRPC_GmPlayAction_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(SpecialSuitFeature.MulticastRPC_HitEffect)]
	// Flags: [Net|NetMulticast|Public]
	void #[FeatureRPC(SpecialSuitFeature.MulticastRPC_HitEffect)](struct FVector #[FeatureRPC(SpecialSuitFeature.MulticastRPC_HitEffect)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ClientRPC_TryJoinDance
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPC_TryJoinDance(struct AActor* ClientRPC_TryJoinDance_param1, IntProperty ClientRPC_TryJoinDance_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ClientRPC_ShowEffectAfterFruitBingo
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPC_ShowEffectAfterFruitBingo(StrProperty StrProperty_11, StrProperty StrProperty_12, IntProperty ClientRPC_ShowEffectAfterFruitBingo_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ClientRPC_PlayMontageCamera
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPC_PlayMontageCamera(struct FVector ClientRPC_PlayMontageCamera_param1, float ClientRPC_PlayMontageCamera_param2, float ClientRPC_PlayMontageCamera_param3, StrProperty StrProperty_10); // Offset: 0x101bc757c // Return & Params: Num(4) Size(0x28)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ClientRPC_FailedToJoinDance
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPC_FailedToJoinDance(IntProperty ClientRPC_FailedToJoinDance_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(WeaponKillCounterFeature.RPC_Client_UpdateCurBattleWeaponKillInfo)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(WeaponKillCounterFeature.RPC_Client_UpdateCurBattleWeaponKillInfo)](uint64 #[FeatureRPC(WeaponKillCounterFeature.RPC_Client_UpdateCurBattleWeaponKillInfo)]_param1, struct TArray<IntProperty> #[FeatureRPC(WeaponKillCounterFeature.RPC_Client_UpdateCurBattleWeaponKillInfo)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Client_RspMiniTvInteractionFailed)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(PetExhibitFeature.RPC_Client_RspMiniTvInteractionFailed)](IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Client_RspMiniTvInteractionFailed)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(CoopEmoteCharFeature.RPC_Client_LocalInteruptPlayEmote)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CoopEmoteCharFeature.RPC_Client_LocalInteruptPlayEmote)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(CoopEmoteCharFeature.RPC_Client_CasterFollow)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CoopEmoteCharFeature.RPC_Client_CasterFollow)](uint32_t #[FeatureRPC(CoopEmoteCharFeature.RPC_Client_CasterFollow)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ServerRPC_FailPreJoinDance
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_FailPreJoinDance(struct AActor* ServerRPC_FailPreJoinDance_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(WeaponKillCounterFeature.RPC_Server_GetCurBattleWeaponKillInfo)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(WeaponKillCounterFeature.RPC_Server_GetCurBattleWeaponKillInfo)](uint64 #[FeatureRPC(WeaponKillCounterFeature.RPC_Server_GetCurBattleWeaponKillInfo)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Server_ReqPlayPetExhibitAction)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PetExhibitFeature.RPC_Server_ReqPlayPetExhibitAction)](StrProperty StrProperty_9); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Server_ReqPetBubble)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PetExhibitFeature.RPC_Server_ReqPetBubble)](IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Server_ReqPetBubble)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Server_ReqMiniTvInteraction)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PetExhibitFeature.RPC_Server_ReqMiniTvInteraction)](IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Server_ReqMiniTvInteraction)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Server_PetExhibitFinished)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PetExhibitFeature.RPC_Server_PetExhibitFinished)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Server_CancelPetExhibit)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PetExhibitFeature.RPC_Server_CancelPetExhibit)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Server_CancelMiniTvInteraction)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PetExhibitFeature.RPC_Server_CancelMiniTvInteraction)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(CoopEmoteCharFeature.RPC_Server_BreakCoopEmote)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CoopEmoteCharFeature.RPC_Server_BreakCoopEmote)](uint32_t #[FeatureRPC(CoopEmoteCharFeature.RPC_Server_BreakCoopEmote)]_param1, IntProperty #[FeatureRPC(CoopEmoteCharFeature.RPC_Server_BreakCoopEmote)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ShowEffectAfterSelfRescueSucceed
	// Flags: [Net|NetReliableNetMulticast|Public]
	void ShowEffectAfterSelfRescueSucceed(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ServerShowShowUIConfigUI
	// Flags: [Net|NetReliableNetMulticast|Public]
	void ServerShowShowUIConfigUI(StrProperty StrProperty_8); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.MultiCast_GenericRPC
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MultiCast_GenericRPC(IntProperty MultiCast_GenericRPC_param1, struct TArray<char> MultiCast_GenericRPC_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetFormCharFeature.RPC_SyncPetEnlargeState)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PetFormCharFeature.RPC_SyncPetEnlargeState)](char #[FeatureRPC(PetFormCharFeature.RPC_SyncPetEnlargeState)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncPetExhibitData)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncPetExhibitData)](StrProperty StrProperty_4, StrProperty StrProperty_5, StrProperty StrProperty_6, StrProperty StrProperty_7, IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncPetExhibitData)]_param5); // Offset: 0x101bc757c // Return & Params: Num(5) Size(0x44)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncPetBubble)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncPetBubble)](IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncPetBubble)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)](IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)]_param1, StrProperty StrProperty_2, StrProperty StrProperty_3, struct FVector #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)]_param4, struct FVector #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)]_param5, struct FRotator #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)]_param6, IntProperty #[FeatureRPC(PetExhibitFeature.RPC_Multicast_SyncMiniTvInteraction)]_param7); // Offset: 0x101bc757c // Return & Params: Num(7) Size(0x50)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Multicast_CancelPetExhibit)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PetExhibitFeature.RPC_Multicast_CancelPetExhibit)](StrProperty StrProperty_1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.#[FeatureRPC(PetExhibitFeature.RPC_Multicast_CancelMiniTvInteraction)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PetExhibitFeature.RPC_Multicast_CancelMiniTvInteraction)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ShowScreenDamage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowScreenDamage(float Damage, enum class EDamageType DamageEventType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetBattleItemHandlePath
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBattleItemHandlePath(IntProperty ItemId, StrProperty& EmotePath); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshWeaponSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnLandedSetAutoSprint
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnLandedSetAutoSprint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeParticleEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangeParticleEffect(struct UParticleSystemComponent* Particle, struct FVector 3DScale); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SpawnEmitterEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SpawnEmitterEffect(struct FVector RelativeLocation, struct UParticleSystem* PSRef, struct USceneComponent* AttachParent, struct FVector RelativeScale); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x2c)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandlePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	StrProperty GetEmoteHandlePath(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_IsEnemyFrameUIExisted
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void Replay_IsEnemyFrameUIExisted(bool& bIsExisted); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnLanded
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnLanded(float ForceLandTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetGameModeState
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetGameModeState(struct FName& CurModeState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SetTpCameraFov
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetTpCameraFov(float FOV); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SetCapsuleParentBounds
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCapsuleParentBounds(bool UseParentBounds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ClearDecalBakingRTCache
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearDecalBakingRTCache(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.IsAngledSightAvailable
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsAngledSightAvailable(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshAngledSightUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshAngledSightUI(bool HaveAngledSight, bool IsAngledSight); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ShowAngledSightState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowAngledSightState(bool IsAngled); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetAngledSightRotator
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetAngledSightRotator(struct ASTExtraShootWeapon* NewParam, struct FRotator& NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimLogic
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AngledSightAnimLogic(enum class EAngledSightType Selection); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimUpdate
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AngledSightAnimUpdate(float InputPin, bool bIsOnlyTurn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_CreateEnemyFrameUI
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void Replay_CreateEnemyFrameUI(bool isPlayingCompletePlayback, bool is enemy); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_SetVisiableOfFrameUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Replay_SetVisiableOfFrameUI(bool is Visiable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateEmoteWeaponIdInfo
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void UpdateEmoteWeaponIdInfo(IntProperty ID, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.AllowWater
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void AllowWater(bool& bCanEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldRedBlood
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool ShouldRedBlood(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.CheckHasVehicleAvatar
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckHasVehicleAvatar(struct ASTExtraVehicleBase* InVehicle, struct ASTExtraBaseCharacter* PlayerCharacter, IntProperty& InItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeCurVehicleAvatar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangeCurVehicleAvatar(struct ASTExtraVehicleBase* InVehicle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnChangedVehicleSeat
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnChangedVehicleSeat(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetMasterBoneComponent
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetMasterBoneComponent(struct UMeshComponent*& MasterBoneComponent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.InitDefaultAvatarByResID
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitDefaultAvatarByResID(IntProperty AGender, IntProperty Head, IntProperty hair); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeCameraShakeByDir
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetGrenadeCameraShakeByDir(struct FVector ImpulseDir, struct UCameraShake*& RetVar); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandle
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct UBackpackEmoteHandle* GetEmoteHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	StrProperty GetShootWeaponNameByWeapon(IntProperty ItemDefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UCameraComponent* GetThirdPersonCamera(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct USpringArmComponent* GetThirdPersonSpringArm(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UCameraComponent* GetFPPCamera(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct USpringArmComponent* GetFPPSpringArm(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UCameraComponent* GetFirstPersonCamera(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct USpringArmComponent* GetFirstPersonSpringArm(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UCameraComponent* GetScopeCamera(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct USpringArmComponent* GetScopeSpringArm(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool ShouldAutoScopeWhenPeek(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetControllerViewCamera(struct UCameraComponent*& Camera); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void HandleOnDetachedVehicle(struct ASTExtraVehicleBase* NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnAttachedVehicle(struct ASTExtraVehicleBase* InVehicle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct USpringArmComponent* GetActiveSpringArm(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AimInterupted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWeapon(struct FVector& NewParam, struct FRotator& NewParam1, bool& bHaveWeapon); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetBPCameraSetting(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowDebugArrow(struct USceneComponent* self2, struct FRotator InRot, struct FLinearColor Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.IsAutonomous
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsAutonomous(bool& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PickUp(struct APickUpWrapperActor* NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DoPickUpTarget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RotateMesh(struct FRotator NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetAllCollisionEnabled(bool bEnable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MoveOutScope(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MoveInScope(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.Reload
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Reload(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchCrouch(enum class ESTEPoseState NewParam, enum class ESTEPoseState preState); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__FinishedFunc
	// Flags: [BlueprintEvent]
	void ScopeTimeline__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__UpdateFunc
	// Flags: [BlueprintEvent]
	void ScopeTimeline__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnPetOwnerPossessed
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetOwnerPossessed(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void BPNotifyStartDying(struct AController* Killer, struct AActor* DamageCauser, struct FHitResult& KillingHitInfo, struct FVector KillingHitImpulseDir, struct UDamageType* KillingHitDamageType); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ReloadEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon
	// Flags: [Event|Public|BlueprintEvent]
	void OnEquipWeapon(enum class ESurviveWeaponPropSlot Slot); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt
	// Flags: [Event|Public|BlueprintEvent]
	void OnNotifyHurt(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnLanded(struct FHitResult& Hit); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x88)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange
	// Flags: [Event|Public|BlueprintEvent]
	void OnPoseStateChange(enum class ESTEPoseState LastState, enum class ESTEPoseState CurState); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage
	// Flags: [Event|Public|BlueprintEvent]
	void BPReceiveDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser, enum class EDamageType DamageEventType); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x21)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ParachuteOnWater(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon
	// Flags: [Event|Public|BlueprintEvent]
	void OnUnEquipWeapon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void PawnVaultServerBluePrint(float dis, float Height, float Length, StrProperty& VaultKey, struct FVector StartPos, struct AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, struct FVector HitPoint, struct AActor* WindowActor, struct FRotator MoveDir); // Offset: 0x1048d7660 // Return & Params: Num(11) Size(0x64)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void PawnVaultAllBluePrint(float dis, float Height, float Length, StrProperty& VaultKey, struct FVector StartPos, struct AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, struct FVector HitPoint, struct FRotator MoveDir); // Offset: 0x1048d7660 // Return & Params: Num(10) Size(0x58)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ScopeInStop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PlayScopeInTimeline(float Rate); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveRadialDamage
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void BPReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, float Radius, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector& ImpulseDir, float CamerShakeScale); // Offset: 0x1048d7660 // Return & Params: Num(9) Size(0xc8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ReceivePossessed
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivePossessed(struct AController* NewController); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound
	// Flags: [Event|Public|BlueprintEvent]
	void ParachutePlaySound(struct UAkAudioEvent* LocalAkEvent, struct UAkAudioEvent* RemoteAkEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnWeaponEquipmentUpdate
	// Flags: [Event|Public|BlueprintEvent]
	void OnWeaponEquipmentUpdate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.BindAndExecStateChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BindAndExecStateChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.StateEnterHandler_Event_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void StateEnterHandler_Event_1(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnHitByCake
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnHitByCake(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.EnablePet
	// Flags: [Event|Public|BlueprintEvent]
	void EnablePet(bool Enable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnEnterStateForBp
	// Flags: [Event|Public|BlueprintEvent]
	void OnEnterStateForBp(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnLeaveStateForBp
	// Flags: [Event|Public|BlueprintEvent]
	void OnLeaveStateForBp(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveDestroyed
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveDestroyed(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerStopCheckBluePrint
	// Flags: [Event|Public|BlueprintEvent]
	void PawnVaultServerStopCheckBluePrint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultStopBluePrint
	// Flags: [Event|Public|BlueprintEvent]
	void PawnVaultStopBluePrint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchSightAngledLocal
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SwitchSightAngledLocal(enum class EAngledSightType Type, bool IsOnlyTurn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.DoAngledSight
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DoAngledSight(bool IsPush); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.DoNormalSight
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DoNormalSight(bool IsPush); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.StopSwitchAngledSight
	// Flags: [BlueprintCallable|BlueprintEvent]
	void StopSwitchAngledSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_4
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_4(struct ASTExtraShootWeapon* Weapon, enum class EWeaponAttachmentSocketType Type, bool bEquip); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_1(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnVehicleStateChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnVehicleStateChange(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnBPStateCheckIn
	// Flags: [Event|Public|BlueprintEvent]
	void OnBPStateCheckIn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.LuaReceiveBeginPlay
	// Flags: [BlueprintCallable|BlueprintEvent]
	void LuaReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchRearSight
	// Flags: [BlueprintCallable|BlueprintEvent]
	void SwitchRearSight(IntProperty PrevIndex, IntProperty NewIndex, struct FRotator AngleRotator); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.BPOnRespawned
	// Flags: [Event|Public|BlueprintEvent]
	void BPOnRespawned(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RemoveRemainingCameraBlood
	// Flags: [BlueprintCallable|BlueprintEvent]
	void RemoveRemainingCameraBlood(IntProperty SeatType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.DoWeaponSight
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DoWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.SetWeaponSightStateLocal
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SetWeaponSightStateLocal(bool IsOpenWeaponSight); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeLineUpdate
	// Flags: [Event|Public|BlueprintEvent]
	void RearSightTimeLineUpdate(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeLineFinish
	// Flags: [Event|Public|BlueprintEvent]
	void RearSightTimeLineFinish(IntProperty InRearSightNewIndex); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.AngleSightTimeLineUpdate
	// Flags: [Event|Public|BlueprintEvent]
	void AngleSightTimeLineUpdate(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.AngleSightTimeLineFinish
	// Flags: [Event|Public|BlueprintEvent]
	void AngleSightTimeLineFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon
	// Flags: [Event|Public|BlueprintEvent]
	void DoAutoReloadCurrentWeapon(struct ASTExtraShootWeapon* ShootWeapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_PlayerPawn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPawn.BP_PlayerPawn_C.OnCakePlacement__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnCakePlacement__DelegateSignature(bool Success); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

