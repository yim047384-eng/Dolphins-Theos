#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_StextraHelicopterBase.BP_StextraHelicopterBase_C
// Size: 0x2079 // Inherited bytes: 0x2060
struct ABP_StextraHelicopterBase_C : ASTExtraHelicopterVehicle {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2060 // Size: 0x08
	struct UVehicleAvatarComponent_BP_C* VehicleAvatarComponent_BP; // Offset: 0x2068 // Size: 0x08
	struct UBP_VehicleShowFrameComp_C* BP_VehicleShowFrameComp; // Offset: 0x2070 // Size: 0x08
	bool ShowUpDownGUI; // Offset: 0x2078 // Size: 0x01

	// Functions

	// Object Name: Function BP_StextraHelicopterBase.BP_StextraHelicopterBase_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraHelicopterBase.BP_StextraHelicopterBase_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_StextraHelicopterBase.BP_StextraHelicopterBase_C.ExecuteUbergraph_BP_StextraHelicopterBase
	// Flags: [None]
	void ExecuteUbergraph_BP_StextraHelicopterBase(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

