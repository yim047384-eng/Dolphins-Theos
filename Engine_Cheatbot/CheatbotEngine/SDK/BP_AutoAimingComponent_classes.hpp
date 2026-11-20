#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C
// Size: 0x668 // Inherited bytes: 0x650
struct UBP_AutoAimingComponent_C : UWeaponAutoAimingComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x650 // Size: 0x08
	enum class EDrawDebugTrace DrawDebugType; // Offset: 0x658 // Size: 0x01
	char pad_0x659[0x7]; // Offset: 0x659 // Size: 0x07
	struct UUserWidget* DebugUI; // Offset: 0x660 // Size: 0x08

	// Functions

	// Object Name: Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckInAngle
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool CheckInAngle(struct AActor* EnemeyActor, float MaxAngle); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool CheckSmoke(struct FVector& StartPoint, struct FVector& EndPoint, struct AActor* EnemeyActor); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool CanEnemeyRaycastReach(struct FVector& StartPoint, struct FVector& EndPoint, struct AActor* EnemeyActor, struct FName& OutHitBoneName); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x29)

	// Object Name: Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.BPDrawDebugInfo
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void BPDrawDebugInfo(struct TArray<float>& AutoAimParams); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.ExecuteUbergraph_BP_AutoAimingComponent
	// Flags: [None]
	void ExecuteUbergraph_BP_AutoAimingComponent(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

