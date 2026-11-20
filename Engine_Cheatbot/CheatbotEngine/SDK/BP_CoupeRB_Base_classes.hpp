#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_CoupeRB_Base.BP_CoupeRB_Base_C
// Size: 0x2238 // Inherited bytes: 0x2218
struct ABP_CoupeRB_Base_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2218 // Size: 0x08
	struct UBP_Battle_VehicleLicensePlateComponent_C* BP_Battle_VehicleLicensePlateComponent; // Offset: 0x2220 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersFR; // Offset: 0x2228 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2230 // Size: 0x08

	// Functions

	// Object Name: Function BP_CoupeRB_Base.BP_CoupeRB_Base_C.HandleSeatDetached
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleSeatDetached(struct ASTExtraPlayerCharacter* Character, enum class ESTExtraVehicleSeatType SeatType, IntProperty SeatIndex); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function BP_CoupeRB_Base.BP_CoupeRB_Base_C.HandleMusicListChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleMusicListChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CoupeRB_Base.BP_CoupeRB_Base_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

