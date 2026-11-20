#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_StextraBoatBase.BP_StextraBoatBase_C
// Size: 0x1d89 // Inherited bytes: 0x1d60
struct ABP_StextraBoatBase_C : ASTExtraFloatingVehicle {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1d60 // Size: 0x08
	struct UBP_VehicleSafeSpawn_C* BP_VehicleSafeSpawn; // Offset: 0x1d68 // Size: 0x08
	struct UBoatAvatarComponent_BP_C* BoatAvatarComponent_BP; // Offset: 0x1d70 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x1d78 // Size: 0x08
	struct UVehicleSpringArmComponent* vehicleSpringArm; // Offset: 0x1d80 // Size: 0x08
	bool bLobbyShow; // Offset: 0x1d88 // Size: 0x01

	// Functions

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.ClientTeleportVehicleMaintainSpeed
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientTeleportVehicleMaintainSpeed(struct FVector ClientTeleportVehicleMaintainSpeed_param1, struct FRotator ClientTeleportVehicleMaintainSpeed_param2, struct FVector ClientTeleportVehicleMaintainSpeed_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.ClientResetToTransform
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientResetToTransform(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.ClientResetAdnSetToTransform
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientResetAdnSetToTransform(struct FVector ClientResetAdnSetToTransform_param1, struct FRotator ClientResetAdnSetToTransform_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.ClientApplyVehicleImpulse
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientApplyVehicleImpulse(struct FVector ClientApplyVehicleImpulse_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.MulticastResetAdnSetToTransform
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MulticastResetAdnSetToTransform(struct FVector MulticastResetAdnSetToTransform_param1, struct FRotator MulticastResetAdnSetToTransform_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.UpdateEffects
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateEffects(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.OnUpdateEffects
	// Flags: [Event|Public|BlueprintEvent]
	void OnUpdateEffects(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraBoatBase.BP_StextraBoatBase_C.ExecuteUbergraph_BP_StextraBoatBase
	// Flags: [None]
	void ExecuteUbergraph_BP_StextraBoatBase(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

