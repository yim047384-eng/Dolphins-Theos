#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C
// Size: 0xaa9 // Inherited bytes: 0xa70
struct UVehicleAvatarComponent_BP_C : UVehicleAvatarComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa70 // Size: 0x08
	struct UParticleSystem* CurLightEffect; // Offset: 0xa78 // Size: 0x28
	struct UParticleSystemComponent* LightEffect; // Offset: 0xaa0 // Size: 0x08
	bool VehicleBroken; // Offset: 0xaa8 // Size: 0x01

	// Functions

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetReflectionCubeName_Lobby
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FName GetReflectionCubeName_Lobby(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.TryAddLightEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TryAddLightEffect(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetItemAvatarHandlePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	StrProperty GetItemAvatarHandlePath(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetItemAvatarHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackCommonAvatarHandle* GetItemAvatarHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B(struct UObject* Loaded); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.OnAddLightEffect
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAddLightEffect(struct UParticleSystem* LightEffect); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.LoadedBrokenMat
	// Flags: [BlueprintCallable|BlueprintEvent]
	void LoadedBrokenMat(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.ClearVehicleLightEffect
	// Flags: [Event|Public|BlueprintEvent]
	void ClearVehicleLightEffect(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.ExecuteUbergraph_VehicleAvatarComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VehicleAvatarComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

