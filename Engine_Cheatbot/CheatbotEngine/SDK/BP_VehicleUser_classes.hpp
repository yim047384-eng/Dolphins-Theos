#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C
// Size: 0x6e1 // Inherited bytes: 0x6a8
struct UBP_VehicleUser_C : UVehicleUserComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x6a8 // Size: 0x08
	bool AxisMoveForwardFreezed; // Offset: 0x6b0 // Size: 0x01
	bool AxisMoveRightFreezed; // Offset: 0x6b1 // Size: 0x01
	char pad_0x6B2[0x2]; // Offset: 0x6b2 // Size: 0x02
	float Fuel; // Offset: 0x6b4 // Size: 0x04
	float FuelMax; // Offset: 0x6b8 // Size: 0x04
	float Hp; // Offset: 0x6bc // Size: 0x04
	float HPMax; // Offset: 0x6c0 // Size: 0x04
	float RawSpeed; // Offset: 0x6c4 // Size: 0x04
	enum class ESTExtraVehicleSeatType SeatType; // Offset: 0x6c8 // Size: 0x01
	enum class ESurviveWeaponPropSlot LastWeaponSlot; // Offset: 0x6c9 // Size: 0x01
	char pad_0x6CA[0x2]; // Offset: 0x6ca // Size: 0x02
	float UnmanedFuel; // Offset: 0x6cc // Size: 0x04
	float UnmanedFuelMax; // Offset: 0x6d0 // Size: 0x04
	float UnmanedHP; // Offset: 0x6d4 // Size: 0x04
	float UnmanedHPMax; // Offset: 0x6d8 // Size: 0x04
	float UnmanedCallBackTime; // Offset: 0x6dc // Size: 0x04
	bool bShowUnmanedLowPowerTips; // Offset: 0x6e0 // Size: 0x01

	// Functions

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.RPC_Server_TriggerVehicleSkillServer
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_TriggerVehicleSkillServer(IntProperty RPC_Server_TriggerVehicleSkillServer_param1, IntProperty RPC_Server_TriggerVehicleSkillServer_param2, float RPC_Server_TriggerVehicleSkillServer_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.RPC_Server_StopVehicleSkillServer
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_StopVehicleSkillServer(IntProperty RPC_Server_StopVehicleSkillServer_param1, IntProperty RPC_Server_StopVehicleSkillServer_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.RPC_Server_RequestPassengerBoost
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_RequestPassengerBoost(char RPC_Server_RequestPassengerBoost_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.RPC_Server_ReqAgentMove
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_ReqAgentMove(char RPC_Server_ReqAgentMove_param1, char RPC_Server_ReqAgentMove_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EditorAxisMoveFreezed
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EditorAxisMoveFreezed(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SetUAVSpeedPercent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetUAVSpeedPercent(float SpeedPercent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SetUAVCameraMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetUAVCameraMode(bool FreeCamera); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnUnmanedVehicleFuelChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnUnmanedVehicleFuelChanged(float Fuel, float MacFuel); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SendUIMsgWhenChangeSeatCompleted
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SendUIMsgWhenChangeSeatCompleted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SendUIMsgWhenEnterVehicleCompleted
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SendUIMsgWhenEnterVehicleCompleted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SendUIMsgWhenExitVehicleCompleted
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SendUIMsgWhenExitVehicleCompleted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.GetVehicleGoStraight
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetVehicleGoStraight(float& VehicleGoStraight); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SetHelicopterCameraMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetHelicopterCameraMode(bool IsFreeCamera); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.HandleCharacterUnequipWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleCharacterUnequipWeapon(struct ASTExtraWeapon* NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.HandleCharacterEquipWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleCharacterEquipWeapon(struct ASTExtraWeapon* NewWeapon, enum class ESurviveWeaponPropSlot Slot); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SwitchToLastWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchToLastWeapon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.CacheLastUseWeaponSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CacheLastUseWeaponSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.SetDrivingViewMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDrivingViewMode(IntProperty int mode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.ResetInputs
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetInputs(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnMotorcycleContactChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnMotorcycleContactChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.FixGoStraight
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void FixGoStraight(float InMoveRightRate, float GoStraightThreshold, float& OutMoveRightRate); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.GetPlayerController
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetPlayerController(struct ABP_STExtraPlayerController_C*& PlayerController); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.ExitVehicle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ExitVehicle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EnterVehicle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnterVehicle(bool IsDriver); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnEnterVehicleCompleted
	// Flags: [Event|Protected|BlueprintEvent]
	void OnEnterVehicleCompleted(enum class ESTExtraVehicleSeatType SeatType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnExitVehicleCompleted
	// Flags: [Event|Protected|BlueprintEvent]
	void OnExitVehicleCompleted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnChangeVehicleSeatCompleted
	// Flags: [Event|Public|BlueprintEvent]
	void OnChangeVehicleSeatCompleted(enum class ESTExtraVehicleSeatType SeatType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnCurrrentClosestVehicleChanged
	// Flags: [Event|Protected|BlueprintEvent]
	void OnCurrrentClosestVehicleChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EventSetDrivingViewMode
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetDrivingViewMode(IntProperty IntValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveForward
	// Flags: [Event|Public|BlueprintEvent]
	void OnInputAxisMoveForward(float Rate); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveRight
	// Flags: [Event|Public|BlueprintEvent]
	void OnInputAxisMoveRight(float Rate); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EventSetCarMusicSwitch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetCarMusicSwitch(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EventSetHelicopterFreeCamera
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetHelicopterFreeCamera(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnShutDownUnmannedVehicleCompleted
	// Flags: [Event|Public|BlueprintEvent]
	void OnShutDownUnmannedVehicleCompleted(float cdTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnLaunchUnmannedVehicleCompleted
	// Flags: [Event|Public|BlueprintEvent]
	void OnLaunchUnmannedVehicleCompleted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.OnPauseUnmannedVehicleCompleted
	// Flags: [Event|Public|BlueprintEvent]
	void OnPauseUnmannedVehicleCompleted(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EventSetUAVFreeCamera
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetUAVFreeCamera(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EventSetSpeedPercent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetSpeedPercent(float FloatValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.EventUAVSingleOperate
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventUAVSingleOperate(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleUser.BP_VehicleUser_C.ExecuteUbergraph_BP_VehicleUser
	// Flags: [None]
	void ExecuteUbergraph_BP_VehicleUser(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

