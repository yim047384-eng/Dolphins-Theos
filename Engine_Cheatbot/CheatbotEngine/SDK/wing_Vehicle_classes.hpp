#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass wing_Vehicle.wing_Vehicle_C
// Size: 0x20d4 // Inherited bytes: 0x2079
struct Awing_Vehicle_C : ABP_StextraHelicopterBase_C {
	// Fields
	char pad_0x2079[0x7]; // Offset: 0x2079 // Size: 0x07
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2080 // Size: 0x08
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2088 // Size: 0x08
	struct UWingmanAvatarComp_BP_C* WingmanAvatarComp_BP; // Offset: 0x2090 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Passengers; // Offset: 0x2098 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x20a0 // Size: 0x08
	struct USTExtraHelicopterVehicleMovementComponent* STExtraHelicopterVehicleMovement; // Offset: 0x20a8 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x20b0 // Size: 0x08
	struct UVehicleSpringArmComponent* vehicleSpringArm; // Offset: 0x20b8 // Size: 0x08
	float Yaw; // Offset: 0x20c0 // Size: 0x04
	float Offset; // Offset: 0x20c4 // Size: 0x04
	struct FVector Ah6location; // Offset: 0x20c8 // Size: 0x0c

	// Functions

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.CanDrive
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CanDrive(struct ASTExtraPlayerCharacter* Character); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.verticalDown
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void verticalDown(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.Verticalsteady
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Verticalsteady(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.VerticalUp
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void VerticalUp(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.ChangeVehicleAvatar
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void ChangeVehicleAvatar(struct ASTExtraPlayerController* MainPlayerController); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function wing_Vehicle.wing_Vehicle_C.ExecuteUbergraph_wing_Vehicle
	// Flags: [None]
	void ExecuteUbergraph_wing_Vehicle(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

