#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass RiverDetectZone.RiverDetectZone_C
// Size: 0x4e0 // Inherited bytes: 0x4b0
struct ARiverDetectZone_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0x4b8 // Size: 0x08
	struct USplineComponent* Spline; // Offset: 0x4c0 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x4c8 // Size: 0x08
	struct USceneComponent* Scene; // Offset: 0x4d0 // Size: 0x08
	float MaxHearableDistance; // Offset: 0x4d8 // Size: 0x04
	float CurRTPCValue; // Offset: 0x4dc // Size: 0x04

	// Functions

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.CalcRTPCValue
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CalcRTPCValue(float& OutValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.StopRiverVoice
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StopRiverVoice(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function RiverDetectZone.RiverDetectZone_C.ExecuteUbergraph_RiverDetectZone
	// Flags: [HasDefaults]
	void ExecuteUbergraph_RiverDetectZone(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

