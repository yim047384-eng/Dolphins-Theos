#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BuildSystemComp_BP.BuildSystemComp_BP_C
// Size: 0x55b // Inherited bytes: 0x550
struct UBuildSystemComp_BP_C : USTBuildSystemComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x550 // Size: 0x08
	bool bPNHDebugDraw; // Offset: 0x558 // Size: 0x01
	bool bCPODebugDraw; // Offset: 0x559 // Size: 0x01
	bool bOverlapPlace; // Offset: 0x55a // Size: 0x01

	// Functions

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsOverlayBuildHeightValid
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool IsOverlayBuildHeightValid(struct FVector BuildLocation, float OverlayMaxHeightFromGround); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.CheckPlacementWithPitch
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool CheckPlacementWithPitch(struct FHitResult& Hit, struct FVector& OutLocation, struct FRotator& OutRotation, struct FVector& BoxExtent, struct FBuildingData& CurBuildData); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xf9)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestRotation
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FRotator GetNewDestRotation(struct FRotator DestRotation, struct AActor* CacheActor); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsLocationValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsLocationValid(struct FVector Location, float MaxBuildDist); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestLocation
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FVector GetNewDestLocation(struct FVector DestLocation, struct AActor* CacheActor, struct FVector ViewLocation); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPProcessNothingHitTrace
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool BPProcessNothingHitTrace(struct FVector DestLocation, struct FRotator DestRotation, float MaxBuildDist, IntProperty buildIndex, struct FVector& OutLocation); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x2d)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPCheckPlacement
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool BPCheckPlacement(struct TArray<struct FHitResult>& HitArray, struct FVector BoxExtent, struct FBuildingData CurBuildData, struct FRotator ControlRot, struct FVector ViewLocation, struct FVector& OutLocation, bool& bHasForbiddenObject); // Offset: 0x1048d7660 // Return & Params: Num(8) Size(0x8e)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.ProccessNothingHitTraceOverlap
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool ProccessNothingHitTraceOverlap(struct FVector& DestLocation, struct FRotator& DestRotation, float MaxBuildDist, struct FVector& OutLocation, IntProperty buildIndex, struct FVector& ViewLocation); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x39)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.CheckPlacementOverlap
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool CheckPlacementOverlap(struct TArray<struct FHitResult>& HitArray, struct FVector& OutLocation, struct FVector& BoxExtent, struct FBuildingData& CurBuildData, struct FRotator& BuildRotation, struct FRotator& ControlRot, struct FVector& ViewLocation, bool& HasForbiddenObject); // Offset: 0x1048d7660 // Return & Params: Num(9) Size(0x96)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.ShouldEnableDoubleTouchMode
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool ShouldEnableDoubleTouchMode(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsCanPlaceBuildingBP
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	bool IsCanPlaceBuildingBP(IntProperty InBuildID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnConstructionComplete_Event_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnConstructionComplete_Event_1(bool bWasSuccessful, enum class EBuildingActionType ConstructionType, bool bIsFromServer); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x3)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnInsufficientMaterial_Event_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnInsufficientMaterial_Event_1(enum class EBuildingActionType BuildType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.RegisterUIEvents
	// Flags: [BlueprintCallable|BlueprintEvent]
	void RegisterUIEvents(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(float FloatValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.UpdateParameters
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UpdateParameters(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_4
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_4(IntProperty IntValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_5
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_5(IntProperty IntValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_1(float FloatValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.LuaReceiveBeginPlay
	// Flags: [BlueprintCallable|BlueprintEvent]
	void LuaReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.TryAttachToMoveablePlatform
	// Flags: [Event|Protected|BlueprintEvent]
	void TryAttachToMoveablePlatform(struct AActor* SpawnedBuilding, struct FVector BuildLocation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BuildSystemComp_BP.BuildSystemComp_BP_C.ExecuteUbergraph_BuildSystemComp_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BuildSystemComp_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

