#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PlayerDeadInventoryBox.PlayerDeadInventoryBox_C
// Size: 0x756 // Inherited bytes: 0x6e8
struct APlayerDeadInventoryBox_C : APlayerTombBox {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x6e8 // Size: 0x08
	struct UAkComponent* AkComponent; // Offset: 0x6f0 // Size: 0x08
	struct USTScreenAppearanceComponent* STScreenAppearance; // Offset: 0x6f8 // Size: 0x08
	struct UStaticMeshComponent* SM_plane_01; // Offset: 0x700 // Size: 0x08
	struct USplineComponent* Spline; // Offset: 0x708 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x710 // Size: 0x08
	struct UStaticMeshComponent* Survive_FMC_Chest1; // Offset: 0x718 // Size: 0x08
	struct UMaterialInstanceDynamic* DynamicMat; // Offset: 0x720 // Size: 0x08
	struct FVector TeammateParticleLoc; // Offset: 0x728 // Size: 0x0c
	char pad_0x734[0x4]; // Offset: 0x734 // Size: 0x04
	struct UParticleSystem* TeammateParticle; // Offset: 0x738 // Size: 0x08
	struct UParticleSystem* DeadParticle; // Offset: 0x740 // Size: 0x08
	struct FVector DeadParticleLoc; // Offset: 0x748 // Size: 0x0c
	bool bIsPlayingAudio; // Offset: 0x754 // Size: 0x01
	bool bHasOpenAnim; // Offset: 0x755 // Size: 0x01

	// Functions

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.LuaCheckCanPlayAudio
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void LuaCheckCanPlayAudio(bool& bCanPlayAudio); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetGroundLocation
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FVector GetGroundLocation(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetVector4
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetVector4(struct FVector Dest, float Ratio); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.HideDeadTombApparence
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void HideDeadTombApparence(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.SwitchToDeadTombBox
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SwitchToDeadTombBox(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowNormal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowNormal(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowShine
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowShine(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.OpenListenUIEvent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OpenListenUIEvent(bool bOpen); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ExecuteUbergraph_PlayerDeadInventoryBox
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PlayerDeadInventoryBox(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

