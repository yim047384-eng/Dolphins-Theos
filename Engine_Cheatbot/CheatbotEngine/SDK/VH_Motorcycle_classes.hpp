#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_Motorcycle.VH_Motorcycle_C
// Size: 0x22a0 // Inherited bytes: 0x2218
struct AVH_Motorcycle_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2218 // Size: 0x08
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2220 // Size: 0x08
	struct UVehicleAdvanceAvatarComp_BP_C* VehicleAdvanceAvatarComp_BP; // Offset: 0x2228 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Passenger; // Offset: 0x2230 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2238 // Size: 0x08
	struct UVehicleMotorbikeComponent* VehicleMotorbike; // Offset: 0x2240 // Size: 0x08
	bool bHadAddPSCExhaust; // Offset: 0x2248 // Size: 0x01
	char pad_0x2249[0x7]; // Offset: 0x2249 // Size: 0x07
	MapProperty PSCExhaustEffect; // Offset: 0x2250 // Size: 0x50

	// Functions

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnAddExhaustEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnAddExhaustEffect(bool bLobbyShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnDestroyExhaustEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnDestroyExhaustEffect(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.TickUpdateAvatarExhaust
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TickUpdateAvatarExhaust(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnLoaded_471C3E774367461D12A732AB89B9E676
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoaded_471C3E774367461D12A732AB89B9E676(struct UObject* Loaded); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnLoaded_137D0BCB4CD69E5EDCDF0F8D76242729
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoaded_137D0BCB4CD69E5EDCDF0F8D76242729(struct UObject* Loaded); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnLoaded_150A821A4E34995C45C96B98B9184D62
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoaded_150A821A4E34995C45C96B98B9184D62(struct UObject* Loaded); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnAddExhaustEffectEvent2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAddExhaustEffectEvent2(StrProperty SocketName, struct FTransform Transform, struct UParticleSystem* ParticleSystem); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x68)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnEngineStop
	// Flags: [Event|Public|BlueprintEvent]
	void OnEngineStop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnAddExhaustEffectEvent1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAddExhaustEffectEvent1(StrProperty SocketName, struct FTransform Transform, struct UParticleSystem* ParticleSystem); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x68)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnAddExhaustEffectEvent3
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAddExhaustEffectEvent3(StrProperty SocketName, struct FTransform Transform, struct UParticleSystem* ParticleSystem); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x68)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.OnClientVehicleHealthStateChangedToDestory
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClientVehicleHealthStateChangedToDestory(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle.VH_Motorcycle_C.ExecuteUbergraph_VH_Motorcycle
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_Motorcycle(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

