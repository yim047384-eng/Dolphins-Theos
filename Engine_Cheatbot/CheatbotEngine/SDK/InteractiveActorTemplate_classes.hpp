#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass InteractiveActorTemplate.InteractiveActorTemplate_C
// Size: 0x6c4 // Inherited bytes: 0x660
struct AInteractiveActorTemplate_C : ADecoratorActor {
	// Fields
	struct USphereComponent* Sphere; // Offset: 0x660 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x668 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0x670 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x678 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x680 // Size: 0x08
	float LifeSpan; // Offset: 0x688 // Size: 0x04
	IntProperty BuffID; // Offset: 0x68c // Size: 0x04
	bool EnableBuff; // Offset: 0x690 // Size: 0x01
	bool NeedDestroy; // Offset: 0x691 // Size: 0x01
	bool NeedClick; // Offset: 0x692 // Size: 0x01
	bool EnableCount; // Offset: 0x693 // Size: 0x01
	bool EnableScan; // Offset: 0x694 // Size: 0x01
	char pad_0x695[0x3]; // Offset: 0x695 // Size: 0x03
	float ScanDistance; // Offset: 0x698 // Size: 0x04
	IntProperty ScanMaxNum; // Offset: 0x69c // Size: 0x04
	StrProperty ScannedActorTag; // Offset: 0x6a0 // Size: 0x10
	struct TArray<struct FScannedMarkInfo> ScannedMarkInfo; // Offset: 0x6b0 // Size: 0x10
	bool ShowMarkOnMap; // Offset: 0x6c0 // Size: 0x01
	bool ShowQuickSignInLevel; // Offset: 0x6c1 // Size: 0x01
	bool NeedScanCharacter; // Offset: 0x6c2 // Size: 0x01
	bool NeedRemoveAfterExit; // Offset: 0x6c3 // Size: 0x01

	// Functions

	// Object Name: Function InteractiveActorTemplate.InteractiveActorTemplate_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

