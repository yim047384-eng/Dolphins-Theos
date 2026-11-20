#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C
// Size: 0x2218 // Inherited bytes: 0x21b0
struct ABP_STExtraWheeledVehicle_C : ASTExtraWheeledVehicle {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x21b0 // Size: 0x08
	struct UBP_VehicleMusic_C* BP_VehicleMusic; // Offset: 0x21b8 // Size: 0x08
	struct UWheeledVehicleProtectionComponent* VehicleProtection; // Offset: 0x21c0 // Size: 0x08
	struct UBP_VehicleShowFrameComp_C* BP_VehicleShowFrameComp; // Offset: 0x21c8 // Size: 0x08
	struct UVehicleAvatarComponent_BP_C* VehicleAvatarComponent_BP; // Offset: 0x21d0 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x21d8 // Size: 0x08
	struct UVehicleSpringArmComponent* vehicleSpringArm; // Offset: 0x21e0 // Size: 0x08
	bool IsPlayingEngineAk; // Offset: 0x21e8 // Size: 0x01
	char pad_0x21E9[0x7]; // Offset: 0x21e9 // Size: 0x07
	struct FName TailLightParamName; // Offset: 0x21f0 // Size: 0x08
	struct FName FrontLightParamName; // Offset: 0x21f8 // Size: 0x08
	struct FName FPPBoostLightParamName; // Offset: 0x2200 // Size: 0x08
	bool bEngineStarted; // Offset: 0x2208 // Size: 0x01
	char pad_0x2209[0x3]; // Offset: 0x2209 // Size: 0x03
	float LastOverlapShakeTime; // Offset: 0x220c // Size: 0x04
	float OverlapShakeInterval; // Offset: 0x2210 // Size: 0x04
	bool bLobbyShow; // Offset: 0x2214 // Size: 0x01
	bool bInvincibleProtect; // Offset: 0x2215 // Size: 0x01
	bool EnableLightEffect; // Offset: 0x2216 // Size: 0x01
	bool bEnableUpdateExhuastEffectBP; // Offset: 0x2217 // Size: 0x01

	// Functions

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ClientTeleportVehicleMaintainSpeed
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientTeleportVehicleMaintainSpeed(struct FVector ClientTeleportVehicleMaintainSpeed_param1, struct FRotator ClientTeleportVehicleMaintainSpeed_param2, struct FVector ClientTeleportVehicleMaintainSpeed_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ClientResetToTransform
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientResetToTransform(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ClientResetAdnSetToTransform
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientResetAdnSetToTransform(struct FVector ClientResetAdnSetToTransform_param1, struct FRotator ClientResetAdnSetToTransform_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ClientApplyVehicleImpulse
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientApplyVehicleImpulse(struct FVector ClientApplyVehicleImpulse_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.MulticastResetAdnSetToTransform
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MulticastResetAdnSetToTransform(struct FVector MulticastResetAdnSetToTransform_param1, struct FRotator MulticastResetAdnSetToTransform_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChangedToDestory
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClientVehicleHealthStateChangedToDestory(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CreateDMI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.SetDMIParam
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDMIParam(struct UMaterialInstanceDynamic* Dim, struct FName Name, float Value); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateExhaustFx(struct FName ExhaustName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStart
	// Flags: [Event|Public|BlueprintEvent]
	void OnEngineStart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStop
	// Flags: [Event|Public|BlueprintEvent]
	void OnEngineStop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue
	// Flags: [Event|Public|BlueprintEvent]
	void OnSetTailLightValue(float LightValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnBoostingChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.VehicleMeshChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void VehicleMeshChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BPPlayOverlapDamageCameraShake
	// Flags: [Event|Public|BlueprintEvent]
	void BPPlayOverlapDamageCameraShake(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveActorBeginOverlap
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.AdvanceVehicleMeshChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AdvanceVehicleMeshChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle
	// Flags: [None]
	void ExecuteUbergraph_BP_STExtraWheeledVehicle(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

