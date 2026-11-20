#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass WaterSwimObject_New.WaterSwimObject_New_C
// Size: 0x591 // Inherited bytes: 0x500
struct AWaterSwimObject_New_C : AWaterSwimActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x500 // Size: 0x08
	struct UGameEventListener* GameEventListener; // Offset: 0x508 // Size: 0x08
	struct UParticleSystemComponent* P_Water_down_01; // Offset: 0x510 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0x518 // Size: 0x08
	struct UPostProcessComponent* PostProcess; // Offset: 0x520 // Size: 0x08
	struct UBoxComponent* PostSceneBox; // Offset: 0x528 // Size: 0x08
	struct UStaticMeshComponent* watermesh; // Offset: 0x530 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x538 // Size: 0x08
	MapProperty WaterMatMap; // Offset: 0x540 // Size: 0x50
	enum class ERenderQuality EditorDefaultQuality; // Offset: 0x590 // Size: 0x01

	// Functions

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.RefreshWaterMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWaterMaterial(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.IsCapsult
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsCapsult(struct UObject* PlayerPawn, struct UActorComponent* Comp); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(IntProperty UserQualitySettingLevel); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.CustomEvent_3
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_3(bool UserMsaaSetting); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.CustomEvent_4
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_4(bool bOpenWaterReflection); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject_New.WaterSwimObject_New_C.ExecuteUbergraph_WaterSwimObject_New
	// Flags: [HasDefaults]
	void ExecuteUbergraph_WaterSwimObject_New(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

