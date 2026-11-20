#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_STExtraPlayerController.BP_STExtraPlayerController_C
// Size: 0x49b1 // Inherited bytes: 0x44f0
struct ABP_STExtraPlayerController_C : ASTExtraPlayerController {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x44f0 // Size: 0x08
	struct USecurityImprisonComp* SecurityImprisonComp; // Offset: 0x44f8 // Size: 0x08
	struct UStateMachineComponent* NewStateMachineCompent; // Offset: 0x4500 // Size: 0x08
	struct UHiggsBosonComponent* HiggsBoson; // Offset: 0x4508 // Size: 0x08
	struct ULuaTaskComponent* LuaTask; // Offset: 0x4510 // Size: 0x08
	struct UQuickSignComponent_BP_C* QuickSignComponent_BP; // Offset: 0x4518 // Size: 0x08
	struct UBP_MapUIMarkManager_C* BP_MapUIMarkManager; // Offset: 0x4520 // Size: 0x08
	struct UBP_ChangeWearingComp_C* BP_ChangeWearingComp; // Offset: 0x4528 // Size: 0x08
	struct UBP_GameEventListener_C* BP_GameEventListener; // Offset: 0x4530 // Size: 0x08
	struct UGuideComponent_BP_C* GuideComponent_BP; // Offset: 0x4538 // Size: 0x08
	struct UBP_ServerSwitcher_C* BP_ServerSwitcher; // Offset: 0x4540 // Size: 0x08
	struct USTExtraUnderWaterEffectComp* STExtraUnderWaterEffectComp; // Offset: 0x4548 // Size: 0x08
	struct UChatComponent_BP_C* ChatComponent_BP; // Offset: 0x4550 // Size: 0x08
	struct UBP_CommonBtn_C* BP_CommonBtn; // Offset: 0x4558 // Size: 0x08
	struct UBP_VehicleUser_C* BP_VehicleUser; // Offset: 0x4560 // Size: 0x08
	float GrayToOne_Alpha_7DE4452444DF4112B2469DBCAE9CD7B1; // Offset: 0x4568 // Size: 0x04
	enum class ETimelineDirection GrayToOne__Direction_7DE4452444DF4112B2469DBCAE9CD7B1; // Offset: 0x456c // Size: 0x01
	char pad_0x456D[0x3]; // Offset: 0x456d // Size: 0x03
	struct UTimelineComponent* GrayToOne; // Offset: 0x4570 // Size: 0x08
	float GrayToZero_Alpha_AEAD84AB4721658A84A855B8F2969A97; // Offset: 0x4578 // Size: 0x04
	enum class ETimelineDirection GrayToZero__Direction_AEAD84AB4721658A84A855B8F2969A97; // Offset: 0x457c // Size: 0x01
	char pad_0x457D[0x3]; // Offset: 0x457d // Size: 0x03
	struct UTimelineComponent* GrayToZero; // Offset: 0x4580 // Size: 0x08
	struct APostProcessVolume* MainPostProcessVolume; // Offset: 0x4588 // Size: 0x08
	enum class EPlayerCameraMode LastCameraMode; // Offset: 0x4590 // Size: 0x01
	char pad_0x4591[0x7]; // Offset: 0x4591 // Size: 0x07
	struct APawn* PrePlayerPawn; // Offset: 0x4598 // Size: 0x08
	bool bInItemGenerator; // Offset: 0x45a0 // Size: 0x01
	char pad_0x45A1[0x3]; // Offset: 0x45a1 // Size: 0x03
	float InItemGeneratorUIRefreshTime; // Offset: 0x45a4 // Size: 0x04
	float CurInItemGeneratorUIRefreshTime; // Offset: 0x45a8 // Size: 0x04
	char pad_0x45AC[0x4]; // Offset: 0x45ac // Size: 0x04
	struct UObject* WaitingUI; // Offset: 0x45b0 // Size: 0x08
	struct UObject* SimulatePlane; // Offset: 0x45b8 // Size: 0x08
	struct FScriptMulticastDelegate ReloadingCDStart; // Offset: 0x45c0 // Size: 0x10
	struct FScriptMulticastDelegate ReloadingCDEnd; // Offset: 0x45d0 // Size: 0x10
	bool AlreadyAimed; // Offset: 0x45e0 // Size: 0x01
	char pad_0x45E1[0x7]; // Offset: 0x45e1 // Size: 0x07
	struct ASTExtraBaseCharacter* closedAimTarget_1; // Offset: 0x45e8 // Size: 0x08
	struct TArray<struct ASTExtraBaseCharacter*> CurAimTargets; // Offset: 0x45f0 // Size: 0x10
	float CloseDistance; // Offset: 0x4600 // Size: 0x04
	enum class EDrawDebugTrace AutoAimDrawType; // Offset: 0x4604 // Size: 0x01
	char pad_0x4605[0x3]; // Offset: 0x4605 // Size: 0x03
	struct FScriptMulticastDelegate AirborneLanded; // Offset: 0x4608 // Size: 0x10
	float MotionRate_Yaw; // Offset: 0x4618 // Size: 0x04
	float MotionRate_Pitch; // Offset: 0x461c // Size: 0x04
	float MotionAimRate_Pitch; // Offset: 0x4620 // Size: 0x04
	float MotionAimRate_Yaw; // Offset: 0x4624 // Size: 0x04
	float MotionRate_Pitch_Threshold; // Offset: 0x4628 // Size: 0x04
	float MotionRate_Yaw_Threshold; // Offset: 0x462c // Size: 0x04
	float MotionTouchAimRate_Pitch; // Offset: 0x4630 // Size: 0x04
	float MotionTouchAimRate_Yaw; // Offset: 0x4634 // Size: 0x04
	float MotionTouchRate_Yaw; // Offset: 0x4638 // Size: 0x04
	float MotionTouchRate_Pitch; // Offset: 0x463c // Size: 0x04
	bool bDefaultIsAutoAimEnabled; // Offset: 0x4640 // Size: 0x01
	bool DriveWithForwardAxis; // Offset: 0x4641 // Size: 0x01
	bool DriveWithRightAxis; // Offset: 0x4642 // Size: 0x01
	bool bInTombBoxGenerator; // Offset: 0x4643 // Size: 0x01
	char pad_0x4644[0x4]; // Offset: 0x4644 // Size: 0x04
	struct FScriptMulticastDelegate PlayerEnterWater; // Offset: 0x4648 // Size: 0x10
	struct FScriptMulticastDelegate PlayerLeaveWater; // Offset: 0x4658 // Size: 0x10
	bool bindWeapon; // Offset: 0x4668 // Size: 0x01
	bool bLandScapeOrientation; // Offset: 0x4669 // Size: 0x01
	char pad_0x466A[0x2]; // Offset: 0x466a // Size: 0x02
	float PitchReverce; // Offset: 0x466c // Size: 0x04
	float Left; // Offset: 0x4670 // Size: 0x04
	float Right; // Offset: 0x4674 // Size: 0x04
	float LastTime; // Offset: 0x4678 // Size: 0x04
	char pad_0x467C[0x4]; // Offset: 0x467c // Size: 0x04
	struct TArray<struct FVector> MotionDataStack; // Offset: 0x4680 // Size: 0x10
	struct FVector CurMotionData; // Offset: 0x4690 // Size: 0x0c
	char pad_0x469C[0x4]; // Offset: 0x469c // Size: 0x04
	struct FScriptMulticastDelegate BindEventToBackpackComponent; // Offset: 0x46a0 // Size: 0x10
	struct FScriptMulticastDelegate VaultFailDS; // Offset: 0x46b0 // Size: 0x10
	MapProperty AdaptationDict; // Offset: 0x46c0 // Size: 0x50
	struct FUIAdaptationStructure CurDeviceAdaptationOffset; // Offset: 0x4710 // Size: 0x20
	bool bIsJoyStickShow; // Offset: 0x4730 // Size: 0x01
	bool bIsInitSensibility; // Offset: 0x4731 // Size: 0x01
	bool 3DTouchSwitcher; // Offset: 0x4732 // Size: 0x01
	bool adaption; // Offset: 0x4733 // Size: 0x01
	bool initAdaptation; // Offset: 0x4734 // Size: 0x01
	char pad_0x4735[0x3]; // Offset: 0x4735 // Size: 0x03
	IntProperty PressFireFingerIndex; // Offset: 0x4738 // Size: 0x04
	bool IsShowFireBtn; // Offset: 0x473c // Size: 0x01
	bool IsThrowGrenade; // Offset: 0x473d // Size: 0x01
	char pad_0x473E[0x2]; // Offset: 0x473e // Size: 0x02
	IntProperty VoiceMemberID; // Offset: 0x4740 // Size: 0x04
	IntProperty VoiceMemberStatus; // Offset: 0x4744 // Size: 0x04
	enum class ESurviveWeaponPropSlot AttachmentAttachSlot; // Offset: 0x4748 // Size: 0x01
	char pad_0x4749[0x7]; // Offset: 0x4749 // Size: 0x07
	struct FItemDefineID AttachmentDefineID; // Offset: 0x4750 // Size: 0x18
	enum class ESurviveWeaponPropSlot UnequipWeaponType; // Offset: 0x4768 // Size: 0x01
	bool IsShowInputControl; // Offset: 0x4769 // Size: 0x01
	char pad_0x476A[0x2]; // Offset: 0x476a // Size: 0x02
	IntProperty InputTeamID; // Offset: 0x476c // Size: 0x04
	IntProperty EmoteItemType; // Offset: 0x4770 // Size: 0x04
	bool bLongPressSideSwitch; // Offset: 0x4774 // Size: 0x01
	bool bLongPressSniperSwitch; // Offset: 0x4775 // Size: 0x01
	char pad_0x4776[0x2]; // Offset: 0x4776 // Size: 0x02
	struct FVector2D AimBtnPos; // Offset: 0x4778 // Size: 0x08
	struct FVector2D AimBtnSize; // Offset: 0x4780 // Size: 0x08
	IntProperty PeekMode; // Offset: 0x4788 // Size: 0x04
	IntProperty AimMode; // Offset: 0x478c // Size: 0x04
	MapProperty EmoteItemIDToBPIDMap; // Offset: 0x4790 // Size: 0x50
	MapProperty EmoteBPIDToHandlePath; // Offset: 0x47e0 // Size: 0x50
	MapProperty EmoteItemIDToImagePathMap; // Offset: 0x4830 // Size: 0x50
	MapProperty EmoteItemIDToImageBattlePathMap; // Offset: 0x4880 // Size: 0x50
	bool bAlwaysHideTouchInterface; // Offset: 0x48d0 // Size: 0x01
	char pad_0x48D1[0x7]; // Offset: 0x48d1 // Size: 0x07
	MapProperty BattleSoundMap; // Offset: 0x48d8 // Size: 0x50
	MapProperty BattleBankMap; // Offset: 0x4928 // Size: 0x50
	IntProperty GameMode; // Offset: 0x4978 // Size: 0x04
	IntProperty currentColorBlindnessType; // Offset: 0x497c // Size: 0x04
	IntProperty CurrentHitEffectIndex; // Offset: 0x4980 // Size: 0x04
	IntProperty CurrentHurtEffectIndex; // Offset: 0x4984 // Size: 0x04
	struct FRotator CurControllerRotation; // Offset: 0x4988 // Size: 0x0c
	bool IsCurExitJump; // Offset: 0x4994 // Size: 0x01
	bool bStopDownloadAvatar; // Offset: 0x4995 // Size: 0x01
	char pad_0x4996[0x2]; // Offset: 0x4996 // Size: 0x02
	IntProperty ShoulderMode; // Offset: 0x4998 // Size: 0x04
	char pad_0x499C[0x4]; // Offset: 0x499c // Size: 0x04
	struct TArray<IntProperty> EmoteIDArray; // Offset: 0x49a0 // Size: 0x10
	bool bUseNewMotionInput; // Offset: 0x49b0 // Size: 0x01

	// Functions

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(HighlightShowFeature.ClientRPC_TriggerHighlightMoment)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(HighlightShowFeature.ClientRPC_TriggerHighlightMoment)](uint32_t #[FeatureRPC(HighlightShowFeature.ClientRPC_TriggerHighlightMoment)]_param1, uint32_t #[FeatureRPC(HighlightShowFeature.ClientRPC_TriggerHighlightMoment)]_param2, uint32_t #[FeatureRPC(HighlightShowFeature.ClientRPC_TriggerHighlightMoment)]_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(HeroPropFeature.RPC_Client_AutoSelectSkill)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(HeroPropFeature.RPC_Client_AutoSelectSkill)](IntProperty #[FeatureRPC(HeroPropFeature.RPC_Client_AutoSelectSkill)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(AvatarBagFeature.RPCClient_UpdateAllWears)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(AvatarBagFeature.RPCClient_UpdateAllWears)](struct TArray<char> #[FeatureRPC(AvatarBagFeature.RPCClient_UpdateAllWears)]_param1, struct TArray<struct FGameModePlayerItem> #[FeatureRPC(AvatarBagFeature.RPCClient_UpdateAllWears)]_param2, struct TArray<IntProperty> #[FeatureRPC(AvatarBagFeature.RPCClient_UpdateAllWears)]_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(ParachuteFollowBehaviorFeature.RPC_Server_ReportUIActivity)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(ParachuteFollowBehaviorFeature.RPC_Server_ReportUIActivity)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(ParachuteFollowBehaviorFeature.RPC_Server_ReportMicStatus)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(ParachuteFollowBehaviorFeature.RPC_Server_ReportMicStatus)](char #[FeatureRPC(ParachuteFollowBehaviorFeature.RPC_Server_ReportMicStatus)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(OptionalGarageFeature.ServerRPC_ChooseVehicle)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(OptionalGarageFeature.ServerRPC_ChooseVehicle)](struct AActor* #[FeatureRPC(OptionalGarageFeature.ServerRPC_ChooseVehicle)]_param1, IntProperty #[FeatureRPC(OptionalGarageFeature.ServerRPC_ChooseVehicle)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(LevelSequenceExitFeature.ServerRPC_ExitLevelSequence)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(LevelSequenceExitFeature.ServerRPC_ExitLevelSequence)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(LevelSequenceExitFeature.ServerRPC_EarlyQuit)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(LevelSequenceExitFeature.ServerRPC_EarlyQuit)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(HeroPropFeature.RPC_Server_SetRollSkillInfo)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(HeroPropFeature.RPC_Server_SetRollSkillInfo)](IntProperty #[FeatureRPC(HeroPropFeature.RPC_Server_SetRollSkillInfo)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CheckParachuteOpenFeature.RPC_ServerParachuteOpen)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CheckParachuteOpenFeature.RPC_ServerParachuteOpen)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CheckParachuteOpenFeature.RPC_ServerParachuteClose)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CheckParachuteOpenFeature.RPC_ServerParachuteClose)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_ClientHUDDisplayHitDamage
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_ClientHUDDisplayHitDamage(IntProperty RPC_ClientHUDDisplayHitDamage_param1, char RPC_ClientHUDDisplayHitDamage_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_WonderfulPeriod
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_WonderfulPeriod(IntProperty RPC_Client_WonderfulPeriod_param1, float RPC_Client_WonderfulPeriod_param2, float RPC_Client_WonderfulPeriod_param3, struct TArray<float> RPC_Client_WonderfulPeriod_param4, IntProperty RPC_Client_WonderfulPeriod_param5, float RPC_Client_WonderfulPeriod_param6, char RPC_Client_WonderfulPeriod_param7, struct TArray<struct FWonderfulSubTypeInfo> RPC_Client_WonderfulPeriod_param8); // Offset: 0x101bc757c // Return & Params: Num(8) Size(0x40)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_ShowBattleGMOutputText
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_ShowBattleGMOutputText(StrProperty StrProperty_24); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_PostTGPAIS
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_PostTGPAIS(IntProperty RPC_Client_PostTGPAIS_param1, StrProperty StrProperty_23); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_PopupAFKWindow
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_PopupAFKWindow(char RPC_Client_PopupAFKWindow_param1, char RPC_Client_PopupAFKWindow_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_NotifyUseShareSkin
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_NotifyUseShareSkin(IntProperty RPC_Client_NotifyUseShareSkin_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_MarkShoot
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_MarkShoot(struct AActor* RPC_Client_MarkShoot_param1, struct AActor* RPC_Client_MarkShoot_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_MaliciousTeammateVictimReceiveTips
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_MaliciousTeammateVictimReceiveTips(StrProperty StrProperty_22, char RPC_Client_MaliciousTeammateVictimReceiveTips_param2, IntProperty RPC_Client_MaliciousTeammateVictimReceiveTips_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_MaliciousTeammateReceiveWarningTips
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_MaliciousTeammateReceiveWarningTips(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.Client_GenericRPC
	// Flags: [Net|NetReliablePublic|NetClient]
	void Client_GenericRPC(IntProperty Client_GenericRPC_param1, struct TArray<char> Client_GenericRPC_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_WeakTips)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_WeakTips)](StrProperty StrProperty_21); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_SyncBanID)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_SyncBanID)](IntProperty #[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_SyncBanID)]_param1, IntProperty #[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_SyncBanID)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_StrongTips)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_StrongTips)](StrProperty StrProperty_20); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_NormalTips)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(SecurityNotifyPCFeature.ClientRPC_NormalTips)](StrProperty StrProperty_19); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(PlayerControllerFatalDamageFeature.RPC_Client_BroadcastFatalDamageToClientForLua)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(PlayerControllerFatalDamageFeature.RPC_Client_BroadcastFatalDamageToClientForLua)](struct FFatalDamageParameterCompress #[FeatureRPC(PlayerControllerFatalDamageFeature.RPC_Client_BroadcastFatalDamageToClientForLua)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(OncePerGameAkEventFeature.RPC_Client_PlayAkEvent)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(OncePerGameAkEventFeature.RPC_Client_PlayAkEvent)](StrProperty StrProperty_18); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(NewbieAssistFeature.RPC_Client_RescueOtherSuccessfully)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(NewbieAssistFeature.RPC_Client_RescueOtherSuccessfully)](uint32_t #[FeatureRPC(NewbieAssistFeature.RPC_Client_RescueOtherSuccessfully)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerWatchLike)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerWatchLike)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerWatchLike)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerWatchLike)]_param2, uint64 #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerWatchLike)]_param3, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerWatchLike)]_param4, StrProperty StrProperty_17); // Offset: 0x101bc757c // Return & Params: Num(5) Size(0x28)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerLike)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerLike)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerLike)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerLike)]_param2, uint64 #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerLike)]_param3, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_TriggerLike)]_param4); // Offset: 0x101bc757c // Return & Params: Num(4) Size(0x14)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_ShowOff)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_ShowOff)](IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_ShowOff)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)]_param2, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)]_param3, StrProperty StrProperty_15, StrProperty StrProperty_16, char #[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)]_param6, char #[FeatureRPC(IngameLikeFeature.RPC_Client_RPGiveNotify)]_param7); // Offset: 0x101bc757c // Return & Params: Num(7) Size(0x32)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_RecieveLike)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_RecieveLike)](uint64 #[FeatureRPC(IngameLikeFeature.RPC_Client_RecieveLike)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_RecieveLike)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_LikeProgress)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_LikeProgress)](IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_LikeProgress)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_KillNumChange)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_KillNumChange)](StrProperty StrProperty_14); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Client_HideLike)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(IngameLikeFeature.RPC_Client_HideLike)](IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Client_HideLike)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCClient_XSuitIconRsp)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CommerFeature.RPCClient_XSuitIconRsp)](char #[FeatureRPC(CommerFeature.RPCClient_XSuitIconRsp)]_param1, IntProperty #[FeatureRPC(CommerFeature.RPCClient_XSuitIconRsp)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCClient_TeamShowPetEnlargeDataRsp)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CommerFeature.RPCClient_TeamShowPetEnlargeDataRsp)](StrProperty StrProperty_13); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCClient_TeamShowPetEffectRsp)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CommerFeature.RPCClient_TeamShowPetEffectRsp)](StrProperty StrProperty_12); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCClient_TeamShowMiniTvDataRsp)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CommerFeature.RPCClient_TeamShowMiniTvDataRsp)](StrProperty StrProperty_11); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCClient_CollectScoreRsp)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CommerFeature.RPCClient_CollectScoreRsp)](char #[FeatureRPC(CommerFeature.RPCClient_CollectScoreRsp)]_param1, StrProperty StrProperty_10, IntProperty #[FeatureRPC(CommerFeature.RPCClient_CollectScoreRsp)]_param3, IntProperty #[FeatureRPC(CommerFeature.RPCClient_CollectScoreRsp)]_param4, char #[FeatureRPC(CommerFeature.RPCClient_CollectScoreRsp)]_param5); // Offset: 0x101bc757c // Return & Params: Num(5) Size(0x21)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCClient_AliasEnterBroadcastRsp)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(CommerFeature.RPCClient_AliasEnterBroadcastRsp)](IntProperty #[FeatureRPC(CommerFeature.RPCClient_AliasEnterBroadcastRsp)]_param1, IntProperty #[FeatureRPC(CommerFeature.RPCClient_AliasEnterBroadcastRsp)]_param2, StrProperty StrProperty_9, IntProperty #[FeatureRPC(CommerFeature.RPCClient_AliasEnterBroadcastRsp)]_param4); // Offset: 0x101bc757c // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.Server_GenericRPC
	// Flags: [Net|NetReliablePublic|NetServer]
	void Server_GenericRPC(IntProperty Server_GenericRPC_param1, struct TArray<char> Server_GenericRPC_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Server_SetPetRandomAnimDisable
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_SetPetRandomAnimDisable(char RPC_Server_SetPetRandomAnimDisable_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Server_SetGameReadyCountDown
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_SetGameReadyCountDown(IntProperty RPC_Server_SetGameReadyCountDown_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Server_SetAutoUseMelee
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_SetAutoUseMelee(char RPC_Server_SetAutoUseMelee_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Server_ReqUseShareSkin
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_ReqUseShareSkin(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Server_RealUseShareSkin
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_RealUseShareSkin(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Server_PlaySpecifiedPetAnimation
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_PlaySpecifiedPetAnimation(IntProperty RPC_Server_PlaySpecifiedPetAnimation_param1, float RPC_Server_PlaySpecifiedPetAnimation_param2, IntProperty RPC_Server_PlaySpecifiedPetAnimation_param3, char RPC_Server_PlaySpecifiedPetAnimation_param4, char RPC_Server_PlaySpecifiedPetAnimation_param5); // Offset: 0x101bc757c // Return & Params: Num(5) Size(0xe)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(NewbieAssistFeature.RPC_Server_StartNewbieAssistDSSubSystem)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(NewbieAssistFeature.RPC_Server_StartNewbieAssistDSSubSystem)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendRSTSSubtitleText)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendRSTSSubtitleText)](StrProperty StrProperty_7, float #[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendRSTSSubtitleText)]_param2, float #[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendRSTSSubtitleText)]_param3, StrProperty StrProperty_8); // Offset: 0x101bc757c // Return & Params: Num(4) Size(0x28)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendAIVoiceTLog)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendAIVoiceTLog)](uint64 #[FeatureRPC(MLAIVoiceFeature.RPC_Server_SendAIVoiceTLog)]_param1, StrProperty StrProperty_5, StrProperty StrProperty_6); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_ShowOff)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_ShowOff)](IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_ShowOff)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)]_param2, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)]_param3, StrProperty StrProperty_3, StrProperty StrProperty_4, char #[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)]_param6, char #[FeatureRPC(IngameLikeFeature.RPC_Server_RPGive)]_param7); // Offset: 0x101bc757c // Return & Params: Num(7) Size(0x32)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_RespondLike)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_RespondLike)](uint64 #[FeatureRPC(IngameLikeFeature.RPC_Server_RespondLike)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_RespondLike)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_LikeSwitch)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_LikeSwitch)](IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_LikeSwitch)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_Like)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_Like)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Server_Like)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_Like)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_ClientReady)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientReady)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientReady)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientReady)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(IngameLikeFeature.RPC_Server_ClientEnterCircle)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientEnterCircle)](uint32_t #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientEnterCircle)]_param1, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientEnterCircle)]_param2, IntProperty #[FeatureRPC(IngameLikeFeature.RPC_Server_ClientEnterCircle)]_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCServer_XSuitIconReq)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CommerFeature.RPCServer_XSuitIconReq)](StrProperty StrProperty_2); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCServer_CollectScoreReq)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CommerFeature.RPCServer_CollectScoreReq)](StrProperty StrProperty_1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.#[FeatureRPC(CommerFeature.RPCServer_AliasEnterBroadcastReq)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(CommerFeature.RPCServer_AliasEnterBroadcastReq)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Multicast_OnCreateDecal
	// Flags: [Net|NetReliableNetMulticast|Public]
	void RPC_Multicast_OnCreateDecal(IntProperty RPC_Multicast_OnCreateDecal_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PreShowTouchInterfaceCheck
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PreShowTouchInterfaceCheck(bool Show, IntProperty& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PostOnShowTouchInterface
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PostOnShowTouchInterface(bool bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.NotCanShowTouchInterfaceHandle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void NotCanShowTouchInterfaceHandle(bool& NotCanShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAutoEquipMelleeConfig
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadAutoEquipMelleeConfig(bool NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.TriggerInputAction
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TriggerInputAction(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchFreeViewInOB
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchFreeViewInOB(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchToTeammate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchToTeammate(IntProperty TeammateIdx); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LuaShouldShowTouchInterface
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void LuaShouldShowTouchInterface(bool bShow, bool& ShouldShow); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CreateTouchComp
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CreateTouchComp(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadSceenMoveXAdd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadSceenMoveXAdd(bool SceenMoveXAdd); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadClientReplayConfig
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadClientReplayConfig(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESBH
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESBH(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveLuaTick
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReceiveLuaTick(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveLuaBeginPlay
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReceiveLuaBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.StopAvatarDownload
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StopAvatarDownload(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMultiVersionRedSwitchConfig
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetMultiVersionRedSwitchConfig(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESGlobal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESGlobal(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESVN
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESVN(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESJK
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESJK(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToES
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToES(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigEffectSettingColorSingleLayer
	// Flags: [Private|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadConfigEffectSettingColorSingleLayer(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigEffectSettingColorMultiLayer
	// Flags: [Private|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadConfigEffectSettingColorMultiLayer(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieCounts
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitNewbieCounts(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AddIgnoreCameraMoveIndex
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddIgnoreCameraMoveIndex(enum class ETouchIndex _Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessTypeBoolDelegate
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void ReadConfigColorBlindnessTypeBoolDelegate(bool NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessTypeIntDelegate
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void ReadConfigColorBlindnessTypeIntDelegate(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckGlobalReadRed
	// Flags: [Private|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckGlobalReadRed(StrProperty StrID, bool& bIsRed); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckIsBood
	// Flags: [Private|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckIsBood(StrProperty StrID, bool& bIsBlood); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckJapnReadRed
	// Flags: [Private|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckJapnReadRed(StrProperty StrID, bool& bIsRed); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetJKCBColor
	// Flags: [Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetJKCBColor(StrProperty ID, bool& bFind, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetVNCBColor
	// Flags: [Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetVNCBColor(StrProperty ID, bool& bFind, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetCBColor
	// Flags: [Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCBColor(struct FBP_STRUCT_ColorBlindnessConfig_type tempCBData, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x120)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessType
	// Flags: [Private|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadConfigColorBlindnessType(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CurGameMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CurGameMode(IntProperty& GameMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsFPP
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsFPP(bool& IsFPP); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_InWateringRange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnRep_InWateringRange(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LoadAllBattleSound
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadAllBattleSound(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AsyncLoadBattleSound
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AsyncLoadBattleSound(struct UObject* Object, IntProperty SoundID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LoadBattleSound
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadBattleSound(StrProperty BankName, StrProperty EventName, IntProperty SoundID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetAlwaysHideTouchInterface
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetAlwaysHideTouchInterface(bool Hide); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayBattleSoundInBP
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayBattleSoundInBP(IntProperty SoundID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsReleasePosInAimBtnRange
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsReleasePosInAimBtnRange(struct FVector Loc); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadEmoteDataRowPC
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadEmoteDataRowPC(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsAtaptation
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsAtaptation(bool& adaptation); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAdaptationTable
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadAdaptationTable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWeather
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitWeather(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMotionParam
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetMotionParam(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetStickLeftSize
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetStickLeftSize(struct FVector2D& Size); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFightingUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowFightingUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigCrossHairColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadConfigCrossHairColor(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigMotionControl
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadConfigMotionControl(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigAutoAim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ReadConfigAutoAim(bool NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigFromHUD
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ReadConfigFromHUD(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugNotDrawGuideLine
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DebugNotDrawGuideLine(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchAimMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchAimMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleJumpBtnPressEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleJumpBtnPressEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_bInCar
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnRep_bInCar(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshUI(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UpdateInputPanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateInputPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshWeaponPanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWeaponPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetTouchInputEnabled
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetTouchInputEnabled(bool bEnabled); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowMainInputControl
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowMainInputControl(bool bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowTouchInterface
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowTouchInterface(bool bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnableDeathGray
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnableDeathGray(float BlendWeight); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetDeathGrayLerpValue
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDeathGrayLerpValue(float Lerp); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPostProcessVolume
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetPostProcessVolume(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__FinishedFunc
	// Flags: [BlueprintEvent]
	void GrayToOne__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__UpdateFunc
	// Flags: [BlueprintEvent]
	void GrayToOne__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__FinishedFunc
	// Flags: [BlueprintEvent]
	void GrayToZero__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__UpdateFunc
	// Flags: [BlueprintEvent]
	void GrayToZero__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSetMouseCursor_K2Node_InputActionEvent_174
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSetMouseCursor_K2Node_InputActionEvent_174(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCFire_K2Node_InputActionEvent_173
	// Flags: [BlueprintEvent]
	void InpActEvt_PCFire_K2Node_InputActionEvent_173(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCFire_K2Node_InputActionEvent_172
	// Flags: [BlueprintEvent]
	void InpActEvt_PCFire_K2Node_InputActionEvent_172(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAim_K2Node_InputActionEvent_171
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAim_K2Node_InputActionEvent_171(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAim_K2Node_InputActionEvent_170
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAim_K2Node_InputActionEvent_170(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSwitchWeaponShootType_K2Node_InputActionEvent_169
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSwitchWeaponShootType_K2Node_InputActionEvent_169(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCChangeThrowMode_K2Node_InputActionEvent_168
	// Flags: [BlueprintEvent]
	void InpActEvt_PCChangeThrowMode_K2Node_InputActionEvent_168(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCFreeCamera_K2Node_InputActionEvent_167
	// Flags: [BlueprintEvent]
	void InpActEvt_PCFreeCamera_K2Node_InputActionEvent_167(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCFreeCamera_K2Node_InputActionEvent_166
	// Flags: [BlueprintEvent]
	void InpActEvt_PCFreeCamera_K2Node_InputActionEvent_166(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCEntireMapZoomIn_K2Node_InputActionEvent_165
	// Flags: [BlueprintEvent]
	void InpActEvt_PCEntireMapZoomIn_K2Node_InputActionEvent_165(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCEntireMapZoomOut_K2Node_InputActionEvent_164
	// Flags: [BlueprintEvent]
	void InpActEvt_PCEntireMapZoomOut_K2Node_InputActionEvent_164(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCReload_K2Node_InputActionEvent_163
	// Flags: [BlueprintEvent]
	void InpActEvt_PCReload_K2Node_InputActionEvent_163(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCProne_K2Node_InputActionEvent_162
	// Flags: [BlueprintEvent]
	void InpActEvt_PCProne_K2Node_InputActionEvent_162(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSwitchPMode_K2Node_InputActionEvent_161
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSwitchPMode_K2Node_InputActionEvent_161(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAutoSprint_K2Node_InputActionEvent_160
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAutoSprint_K2Node_InputActionEvent_160(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCCrouch_K2Node_InputActionEvent_159
	// Flags: [BlueprintEvent]
	void InpActEvt_PCCrouch_K2Node_InputActionEvent_159(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectNextWeapon_K2Node_InputActionEvent_158
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectNextWeapon_K2Node_InputActionEvent_158(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectPreWeapon_K2Node_InputActionEvent_157
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectPreWeapon_K2Node_InputActionEvent_157(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSetTeamSpeaker_K2Node_InputActionEvent_156
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSetTeamSpeaker_K2Node_InputActionEvent_156(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSetTeamMicphone_K2Node_InputActionEvent_155
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSetTeamMicphone_K2Node_InputActionEvent_155(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectGrenade_K2Node_InputActionEvent_154
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectGrenade_K2Node_InputActionEvent_154(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectSmokeGrenade_K2Node_InputActionEvent_153
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectSmokeGrenade_K2Node_InputActionEvent_153(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectMedKit_K2Node_InputActionEvent_152
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectMedKit_K2Node_InputActionEvent_152(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectMolotovCocktailOrStunGrenade_K2Node_InputActionEvent_151
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectMolotovCocktailOrStunGrenade_K2Node_InputActionEvent_151(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectFirstAidKit_K2Node_InputActionEvent_150
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectFirstAidKit_K2Node_InputActionEvent_150(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectBandages_K2Node_InputActionEvent_149
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectBandages_K2Node_InputActionEvent_149(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectEnergyDrink_K2Node_InputActionEvent_148
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectEnergyDrink_K2Node_InputActionEvent_148(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectMelee_K2Node_InputActionEvent_147
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectMelee_K2Node_InputActionEvent_147(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCCancelThrow_K2Node_InputActionEvent_146
	// Flags: [BlueprintEvent]
	void InpActEvt_PCCancelThrow_K2Node_InputActionEvent_146(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVault_K2Node_InputActionEvent_145
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVault_K2Node_InputActionEvent_145(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVault_K2Node_InputActionEvent_144
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVault_K2Node_InputActionEvent_144(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSprint_K2Node_InputActionEvent_143
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSprint_K2Node_InputActionEvent_143(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSprint_K2Node_InputActionEvent_142
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSprint_K2Node_InputActionEvent_142(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCCloseUI_K2Node_InputActionEvent_141
	// Flags: [BlueprintEvent]
	void InpActEvt_PCCloseUI_K2Node_InputActionEvent_141(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCChangeSeat_K2Node_InputActionEvent_140
	// Flags: [BlueprintEvent]
	void InpActEvt_PCChangeSeat_K2Node_InputActionEvent_140(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCChangeSeat_K2Node_InputActionEvent_139
	// Flags: [BlueprintEvent]
	void InpActEvt_PCChangeSeat_K2Node_InputActionEvent_139(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCExitVehicle_K2Node_InputActionEvent_138
	// Flags: [BlueprintEvent]
	void InpActEvt_PCExitVehicle_K2Node_InputActionEvent_138(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBasicSkill1_K2Node_InputActionEvent_137
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBasicSkill1_K2Node_InputActionEvent_137(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBasicSkill1_K2Node_InputActionEvent_136
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBasicSkill1_K2Node_InputActionEvent_136(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBasicSkill2_K2Node_InputActionEvent_135
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBasicSkill2_K2Node_InputActionEvent_135(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBasicSkill2_K2Node_InputActionEvent_134
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBasicSkill2_K2Node_InputActionEvent_134(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBasicSkill3_K2Node_InputActionEvent_133
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBasicSkill3_K2Node_InputActionEvent_133(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBasicSkill3_K2Node_InputActionEvent_132
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBasicSkill3_K2Node_InputActionEvent_132(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleForward_K2Node_InputActionEvent_131
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleForward_K2Node_InputActionEvent_131(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleForward_K2Node_InputActionEvent_130
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleForward_K2Node_InputActionEvent_130(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleBackward_K2Node_InputActionEvent_129
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleBackward_K2Node_InputActionEvent_129(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleBackward_K2Node_InputActionEvent_128
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleBackward_K2Node_InputActionEvent_128(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleTurnLeft_K2Node_InputActionEvent_127
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleTurnLeft_K2Node_InputActionEvent_127(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleTurnLeft_K2Node_InputActionEvent_126
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleTurnLeft_K2Node_InputActionEvent_126(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleTurnRight_K2Node_InputActionEvent_125
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleTurnRight_K2Node_InputActionEvent_125(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleTurnRight_K2Node_InputActionEvent_124
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleTurnRight_K2Node_InputActionEvent_124(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleControl_K2Node_InputActionEvent_123
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleControl_K2Node_InputActionEvent_123(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCVehicleControl_K2Node_InputActionEvent_122
	// Flags: [BlueprintEvent]
	void InpActEvt_PCVehicleControl_K2Node_InputActionEvent_122(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAircraftThrust_K2Node_InputActionEvent_121
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAircraftThrust_K2Node_InputActionEvent_121(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAircraftThrust_K2Node_InputActionEvent_120
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAircraftThrust_K2Node_InputActionEvent_120(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAircraftThrustBackward_K2Node_InputActionEvent_119
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAircraftThrustBackward_K2Node_InputActionEvent_119(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCAircraftThrustBackward_K2Node_InputActionEvent_118
	// Flags: [BlueprintEvent]
	void InpActEvt_PCAircraftThrustBackward_K2Node_InputActionEvent_118(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_117
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_117(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_116
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_116(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_115
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_115(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_114
	// Flags: [BlueprintEvent]
	void InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_114(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_113
	// Flags: [BlueprintEvent]
	void InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_113(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_OBSkipOverPanel_K2Node_InputActionEvent_112
	// Flags: [BlueprintEvent]
	void InpActEvt_OBSkipOverPanel_K2Node_InputActionEvent_112(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeammate1_K2Node_InputActionEvent_111
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeammate1_K2Node_InputActionEvent_111(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeammate2_K2Node_InputActionEvent_110
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeammate2_K2Node_InputActionEvent_110(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeammate3_K2Node_InputActionEvent_109
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeammate3_K2Node_InputActionEvent_109(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeammate4_K2Node_InputActionEvent_108
	// Flags: [BlueprintEvent]
	void InpActEvt_SwitchToTeammate4_K2Node_InputActionEvent_108(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_OBSwitchFreeView_K2Node_InputActionEvent_107
	// Flags: [BlueprintEvent]
	void InpActEvt_OBSwitchFreeView_K2Node_InputActionEvent_107(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCPeekRight_K2Node_InputActionEvent_106
	// Flags: [BlueprintEvent]
	void InpActEvt_PCPeekRight_K2Node_InputActionEvent_106(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCPeekRight_K2Node_InputActionEvent_105
	// Flags: [BlueprintEvent]
	void InpActEvt_PCPeekRight_K2Node_InputActionEvent_105(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCPeekLeft_K2Node_InputActionEvent_104
	// Flags: [BlueprintEvent]
	void InpActEvt_PCPeekLeft_K2Node_InputActionEvent_104(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCPeekLeft_K2Node_InputActionEvent_103
	// Flags: [BlueprintEvent]
	void InpActEvt_PCPeekLeft_K2Node_InputActionEvent_103(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCChangeSight_K2Node_InputActionEvent_102
	// Flags: [BlueprintEvent]
	void InpActEvt_PCChangeSight_K2Node_InputActionEvent_102(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCChangeSight_K2Node_InputActionEvent_101
	// Flags: [BlueprintEvent]
	void InpActEvt_PCChangeSight_K2Node_InputActionEvent_101(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCQuickSign_K2Node_InputActionEvent_100
	// Flags: [BlueprintEvent]
	void InpActEvt_PCQuickSign_K2Node_InputActionEvent_100(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectWeapon3_K2Node_InputActionEvent_99
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectWeapon3_K2Node_InputActionEvent_99(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectWeapon2_K2Node_InputActionEvent_98
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectWeapon2_K2Node_InputActionEvent_98(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSelectWeapon1_K2Node_InputActionEvent_97
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSelectWeapon1_K2Node_InputActionEvent_97(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCQuickChatMenu_K2Node_InputActionEvent_96
	// Flags: [BlueprintEvent]
	void InpActEvt_PCQuickChatMenu_K2Node_InputActionEvent_96(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCBackPack_K2Node_InputActionEvent_95
	// Flags: [BlueprintEvent]
	void InpActEvt_PCBackPack_K2Node_InputActionEvent_95(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCEntireMap_K2Node_InputActionEvent_94
	// Flags: [BlueprintEvent]
	void InpActEvt_PCEntireMap_K2Node_InputActionEvent_94(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSwimDown_K2Node_InputActionEvent_93
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSwimDown_K2Node_InputActionEvent_93(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSwimDown_K2Node_InputActionEvent_92
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSwimDown_K2Node_InputActionEvent_92(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSwimup_K2Node_InputActionEvent_91
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSwimup_K2Node_InputActionEvent_91(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCSwimup_K2Node_InputActionEvent_90
	// Flags: [BlueprintEvent]
	void InpActEvt_PCSwimup_K2Node_InputActionEvent_90(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_GoBack_K2Node_InputActionEvent_89
	// Flags: [BlueprintEvent]
	void InpActEvt_GoBack_K2Node_InputActionEvent_89(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_PCOBViewAttacker_K2Node_InputActionEvent_88
	// Flags: [BlueprintEvent]
	void InpActEvt_PCOBViewAttacker_K2Node_InputActionEvent_88(struct FKey Key); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnShowAnimationButton
	// Flags: [Event|Public|BlueprintEvent]
	void OnShowAnimationButton(bool IsShow, IntProperty NewUIType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnCharacterCurrentActivityIDRep
	// Flags: [Event|Public|BlueprintEvent]
	void OnCharacterCurrentActivityIDRep(IntProperty CurrentActivityID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSpectatorCameraChange
	// Flags: [Event|Public|BlueprintEvent]
	void OnSpectatorCameraChange(bool bDie); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnStopFireEventHandle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnStopFireEventHandle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchCameraSatrtHandle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnSwitchCameraSatrtHandle(enum class EPlayerCameraMode CameraMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlayerPutDownActorHandle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerPutDownActorHandle(struct ASTExtraBaseCharacter* TargetPlayer, struct AActor* TargetActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchWeaponHandle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnSwitchWeaponHandle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnUseInventoryitemHandle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnUseInventoryitemHandle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshTopMostUIPanel
	// Flags: [Event|Public|BlueprintEvent]
	void RefreshTopMostUIPanel(enum class ETopMostUIPanelType Type); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStart
	// Flags: [BlueprintCallable|BlueprintEvent]
	void GameStart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMoveableAirborne
	// Flags: [BlueprintCallable|BlueprintEvent]
	void SetMoveableAirborne(bool NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnLandOnGroundAfterJumpPlaneEnd
	// Flags: [Event|Public|BlueprintEvent]
	void OnLandOnGroundAfterJumpPlaneEnd(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPanels
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPanels(struct TArray<struct UUAEUserWidget*>& panels); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressFire
	// Flags: [Event|Public|BlueprintEvent]
	void PressFire(IntProperty FingerIndex); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFireBtn
	// Flags: [Event|Public|BlueprintEvent]
	void ShowFireBtn(bool bShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressGrenade
	// Flags: [Event|Public|BlueprintEvent]
	void PressGrenade(bool isThrow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MemberVoice
	// Flags: [Event|Public|BlueprintEvent]
	void MemberVoice(IntProperty Member, IntProperty status); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveClientRestart
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveClientRestart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnWeaponEquipAttachment
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnWeaponEquipAttachment(enum class ESurviveWeaponPropSlot WeaponPropSlot, struct FItemDefineID& DefineID, bool bEquip); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControliOS
	// Flags: [BlueprintCallable|BlueprintEvent]
	void MotionControliOS(struct FVector AxisValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1
	// Flags: [BlueprintEvent]
	void InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(struct FVector AxisValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroidTick
	// Flags: [BlueprintCallable|BlueprintEvent]
	void MotionControlAndroidTick(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroid
	// Flags: [BlueprintCallable|BlueprintEvent]
	void MotionControlAndroid(struct FVector AxisValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBackpackComponent
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBackpackComponent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieComponent
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void InitNewbieComponent(struct TArray<IntProperty>& FinishedGuide, struct TArray<IntProperty>& FinishedCounts, IntProperty PlayerLevel, IntProperty PlayerExperienceType); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugOpenGuide
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DebugOpenGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BP_OceanSideDetected
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void BP_OceanSideDetected(struct FVector& OceansideLocation, bool bDetectedRiver); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CallShowTouchInterface
	// Flags: [Event|Public|BlueprintEvent]
	void CallShowTouchInterface(bool InShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnGameModeStateChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnGameModeStateChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReleaseFire
	// Flags: [Event|Public|BlueprintEvent]
	void ReleaseFire(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_InWateringRangeBP
	// Flags: [Event|Public|BlueprintEvent]
	void OnRep_InWateringRangeBP(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerExitJumpEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PlayerExitJumpEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnterFightingStateDelegate
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EnterFightingStateDelegate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStartCountDownDelegate
	// Flags: [BlueprintCallable|BlueprintEvent]
	void GameStartCountDownDelegate(float CountDownTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LuaReceiveBeginPlay
	// Flags: [BlueprintCallable|BlueprintEvent]
	void LuaReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_Acceleration_K2Node_InputVectorAxisEvent_4
	// Flags: [BlueprintEvent]
	void InpAxisKeyEvt_Acceleration_K2Node_InputVectorAxisEvent_4(struct FVector AxisValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DynamicHoldGun
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DynamicHoldGun(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ActivateDefaultTouchInterface
	// Flags: [Event|Public|BlueprintEvent]
	void ActivateDefaultTouchInterface(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ExecuteUbergraph_BP_STExtraPlayerController
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_STExtraPlayerController(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.VaultFailDS__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void VaultFailDS__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEventToBackpackComponent__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void BindEventToBackpackComponent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerLeaveWater__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void PlayerLeaveWater__DelegateSignature(bool HideLung); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerEnterWater__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void PlayerEnterWater__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AirborneLanded__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void AirborneLanded__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDEnd__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ReloadingCDEnd__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDStart__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ReloadingCDStart__DelegateSignature(float CD); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

