#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass TreasureChestActor.TreasureChestActor_C
// Size: 0x72c // Inherited bytes: 0x660
struct ATreasureChestActor_C : ADecoratorActor {
	// Fields
	struct UStaticMeshComponent* StaticMesh1; // Offset: 0x660 // Size: 0x08
	struct UDropItemCurveAnimComponent* DropItemCurveAnim; // Offset: 0x668 // Size: 0x08
	struct UBP_ProduceDropItemComponent_C* BP_ProduceDropItemComponent; // Offset: 0x670 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x678 // Size: 0x08
	struct USphereComponent* Sphere; // Offset: 0x680 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x688 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x690 // Size: 0x08
	StrProperty ChestName; // Offset: 0x698 // Size: 0x10
	IntProperty OpenType; // Offset: 0x6a8 // Size: 0x04
	float BuffDropProbability; // Offset: 0x6ac // Size: 0x04
	struct FVector BuffPositionOffset; // Offset: 0x6b0 // Size: 0x0c
	char pad_0x6BC[0x4]; // Offset: 0x6bc // Size: 0x04
	struct TArray<struct FSoftObjectPath> BuffActors; // Offset: 0x6c0 // Size: 0x10
	bool ReportSpawnTLog; // Offset: 0x6d0 // Size: 0x01
	bool ReportOpenTLog; // Offset: 0x6d1 // Size: 0x01
	bool ReportGenerateTLog; // Offset: 0x6d2 // Size: 0x01
	char pad_0x6D3[0x5]; // Offset: 0x6d3 // Size: 0x05
	struct FSoftObjectPath OpenAudio; // Offset: 0x6d8 // Size: 0x18
	bool bEnableSM; // Offset: 0x6f0 // Size: 0x01
	bool bAutoActive; // Offset: 0x6f1 // Size: 0x01
	bool ReportActiveTLog; // Offset: 0x6f2 // Size: 0x01
	char pad_0x6F3[0x1]; // Offset: 0x6f3 // Size: 0x01
	IntProperty CountDownBeforeActive; // Offset: 0x6f4 // Size: 0x04
	IntProperty MapMarkIconID; // Offset: 0x6f8 // Size: 0x04
	IntProperty ScreenMarkIconID; // Offset: 0x6fc // Size: 0x04
	StrProperty TreasureChestMarkName; // Offset: 0x700 // Size: 0x10
	struct FRotator OpenChestRotator; // Offset: 0x710 // Size: 0x0c
	float OpenChestRotateTime; // Offset: 0x71c // Size: 0x04
	bool OpenHideMapMark; // Offset: 0x720 // Size: 0x01
	bool OpenHideScrrenMark; // Offset: 0x721 // Size: 0x01
	char pad_0x722[0x2]; // Offset: 0x722 // Size: 0x02
	IntProperty AvailableCount; // Offset: 0x724 // Size: 0x04
	float StopTickTime; // Offset: 0x728 // Size: 0x04

	// Functions

	// Object Name: Function TreasureChestActor.TreasureChestActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

