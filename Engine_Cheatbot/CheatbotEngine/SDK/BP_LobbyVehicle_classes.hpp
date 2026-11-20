#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C
// Size: 0x69c // Inherited bytes: 0x598
struct ABP_LobbyVehicle_C : ASTExtraLobbyVehicle {
	// Fields
	struct UBP_VehicleDIYComp_C* BP_VehicleDIYComp; // Offset: 0x598 // Size: 0x08
	struct UBP_Lobby_VehicleLicenseComponent_C* BP_Lobby_VehicleLicenseComponent; // Offset: 0x5a0 // Size: 0x08
	struct UVehicleAvatarComponent_BP_C* VehicleAvatarComponent_BP; // Offset: 0x5a8 // Size: 0x08
	struct UMaterialInstanceDynamic* DMI; // Offset: 0x5b0 // Size: 0x08
	struct UMaterialInstanceDynamic* FPPDynamicMat; // Offset: 0x5b8 // Size: 0x08
	struct FName TailLightParamName; // Offset: 0x5c0 // Size: 0x08
	struct FName FrontLightParamName; // Offset: 0x5c8 // Size: 0x08
	struct FName FPPBoostLightParamName; // Offset: 0x5d0 // Size: 0x08
	IntProperty vehicleResId; // Offset: 0x5d8 // Size: 0x04
	char pad_0x5DC[0x4]; // Offset: 0x5dc // Size: 0x04
	struct UMaterialInstanceDynamic* DMI_TailLight; // Offset: 0x5e0 // Size: 0x08
	struct UMaterialInstanceDynamic* DMI_AdvanceVehicle; // Offset: 0x5e8 // Size: 0x08
	IntProperty HighlightTryTime; // Offset: 0x5f0 // Size: 0x04
	char pad_0x5F4[0x4]; // Offset: 0x5f4 // Size: 0x04
	SetProperty SkyMotors; // Offset: 0x5f8 // Size: 0x50
	SetProperty SpecialMotors; // Offset: 0x648 // Size: 0x50
	IntProperty ShowType; // Offset: 0x698 // Size: 0x04

	// Functions

	// Object Name: Function BP_LobbyVehicle.BP_LobbyVehicle_C.TrySetHighLight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TrySetHighLight(float NewParam, float NewParam1, float NewParam2); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetHighLight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetHighLight(float invincible, float FreExp, float Speed); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetDMIParam
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDMIParam(struct UMaterialInstanceDynamic* Target, struct FName Name, float Value); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetVehicleMasterPath
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetVehicleMasterPath(IntProperty VehicleSkinID, StrProperty& MeshBasePath); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_LobbyVehicle.BP_LobbyVehicle_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

