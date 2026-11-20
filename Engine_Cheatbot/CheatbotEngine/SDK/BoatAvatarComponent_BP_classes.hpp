#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BoatAvatarComponent_BP.BoatAvatarComponent_BP_C
// Size: 0xaa8 // Inherited bytes: 0xa70
struct UBoatAvatarComponent_BP_C : UVehicleAvatarComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa70 // Size: 0x08
	struct UParticleSystem* CurLightEffect; // Offset: 0xa78 // Size: 0x28
	struct UParticleSystemComponent* LightEffect; // Offset: 0xaa0 // Size: 0x08

	// Functions

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.GetItemAvatarHandlePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	StrProperty GetItemAvatarHandlePath(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.GetItemAvatarHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackCommonAvatarHandle* GetItemAvatarHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.OnLoaded_5D98FAF940B1D039C5FC33AEF60CE902
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoaded_5D98FAF940B1D039C5FC33AEF60CE902(struct UObject* Loaded); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.BoatAvatarEquiped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BoatAvatarEquiped(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.OnAddLightEffect
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAddLightEffect(struct UParticleSystem* LightEffect); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.BoatFPPMeshLoaded
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BoatFPPMeshLoaded(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.LoadedBrokenMat
	// Flags: [BlueprintCallable|BlueprintEvent]
	void LoadedBrokenMat(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BoatAvatarComponent_BP.BoatAvatarComponent_BP_C.ExecuteUbergraph_BoatAvatarComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BoatAvatarComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

