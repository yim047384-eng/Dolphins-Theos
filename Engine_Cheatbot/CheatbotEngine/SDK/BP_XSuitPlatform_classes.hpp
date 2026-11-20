#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_XSuitPlatform.BP_XSuitPlatform_C
// Size: 0x5e9 // Inherited bytes: 0x580
struct ABP_XSuitPlatform_C : AUAENetActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x580 // Size: 0x08
	struct UStaticMeshComponent* SM_Summon_Base02; // Offset: 0x588 // Size: 0x08
	struct UWidgetComponent* Widget; // Offset: 0x590 // Size: 0x08
	struct UStaticMeshComponent* Plane1; // Offset: 0x598 // Size: 0x08
	struct UStaticMeshComponent* Plane; // Offset: 0x5a0 // Size: 0x08
	struct UStaticMeshComponent* Signboard; // Offset: 0x5a8 // Size: 0x08
	struct UBoxComponent* Box1; // Offset: 0x5b0 // Size: 0x08
	struct UCapsuleComponent* Capsule; // Offset: 0x5b8 // Size: 0x08
	struct UStaticMeshComponent* BaseMesh; // Offset: 0x5c0 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x5c8 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x5d0 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x5d8 // Size: 0x08
	struct ABP_XSuitPlatform_SeqActor_C* SequenceActorCls; // Offset: 0x5e0 // Size: 0x08
	bool bLoopRotate; // Offset: 0x5e8 // Size: 0x01

	// Functions

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.MulticastRPC_ShowCallTips
	// Flags: [Net|NetMulticast|Public]
	void MulticastRPC_ShowCallTips(IntProperty MulticastRPC_ShowCallTips_param1, StrProperty StrProperty_1); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.SetLoopRotate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetLoopRotate(bool bLoopRotate); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.HideAll
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAll(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.DisableAllCollion
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DisableAllCollion(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_XSuitPlatform.BP_XSuitPlatform_C.ExecuteUbergraph_BP_XSuitPlatform
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_XSuitPlatform(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

