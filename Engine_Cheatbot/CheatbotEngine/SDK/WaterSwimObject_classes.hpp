#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass WaterSwimObject.WaterSwimObject_C
// Size: 0xb99 // Inherited bytes: 0x500
struct AWaterSwimObject_C : AWaterSwimActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x500 // Size: 0x08
	struct UGameEventListener* GameEventListener; // Offset: 0x508 // Size: 0x08
	struct UParticleSystemComponent* P_Water_down_01; // Offset: 0x510 // Size: 0x08
	struct UAkComponent* Ak; // Offset: 0x518 // Size: 0x08
	struct UPostProcessComponent* PostProcess; // Offset: 0x520 // Size: 0x08
	struct UBoxComponent* PostSceneBox; // Offset: 0x528 // Size: 0x08
	struct UStaticMeshComponent* watermesh; // Offset: 0x530 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x538 // Size: 0x08
	float Gamma; // Offset: 0x540 // Size: 0x04
	char pad_0x544[0xc]; // Offset: 0x544 // Size: 0x0c
	struct FPostProcessSettings NewVar_1; // Offset: 0x550 // Size: 0x560
	struct TArray<struct ASTExtraBaseCharacter*> playerList; // Offset: 0xab0 // Size: 0x10
	enum class ESTEPoseState NewVar_2; // Offset: 0xac0 // Size: 0x01
	char pad_0xAC1[0x3]; // Offset: 0xac1 // Size: 0x03
	float FogDensity; // Offset: 0xac4 // Size: 0x04
	struct AExponentialHeightFog* HeightFog; // Offset: 0xac8 // Size: 0x08
	struct UMaterialInstanceDynamic* NoHDRWater; // Offset: 0xad0 // Size: 0x08
	struct UMaterialInstanceDynamic* HDROcean; // Offset: 0xad8 // Size: 0x08
	struct UMaterialInstanceDynamic* HDRSwamp; // Offset: 0xae0 // Size: 0x08
	struct UMaterialInterface* HDROceanMaterial; // Offset: 0xae8 // Size: 0x08
	struct UMaterialInterface* SUPHDROceanMaterial; // Offset: 0xaf0 // Size: 0x08
	struct UMaterialInterface* HDRSwampMaterial; // Offset: 0xaf8 // Size: 0x08
	struct UMaterialInterface* SUPHDRSwampMaterial; // Offset: 0xb00 // Size: 0x08
	struct UMaterialInterface* NoHDRWaterMaterial; // Offset: 0xb08 // Size: 0x08
	IntProperty CurrentMaterialIndex; // Offset: 0xb10 // Size: 0x04
	char pad_0xB14[0x4]; // Offset: 0xb14 // Size: 0x04
	struct TArray<struct UMaterialInterface*> MaterialList; // Offset: 0xb18 // Size: 0x10
	bool IsSetSwamp; // Offset: 0xb28 // Size: 0x01
	char pad_0xB29[0x7]; // Offset: 0xb29 // Size: 0x07
	SetProperty newIOSDevice; // Offset: 0xb30 // Size: 0x50
	struct UMaterialInterface* WaterMaterial_SUP_HDR; // Offset: 0xb80 // Size: 0x08
	struct UMaterialInterface* WaterMaterial_HDR; // Offset: 0xb88 // Size: 0x08
	struct UMaterialInterface* WaterMaterial_Normal; // Offset: 0xb90 // Size: 0x08
	bool IsIphoneNewWater; // Offset: 0xb98 // Size: 0x01

	// Functions

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.SetWaterMaterialByGamePawnEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWaterMaterialByGamePawnEvent(enum class EGamePawnEvent Event); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.SetWaterMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWaterMaterial(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.RefreshWaterMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWaterMaterial(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.DoTrySetWaterMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DoTrySetWaterMaterial(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.TrySetWaterMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TrySetWaterMaterial(IntProperty NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.IsSupportIndex
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsSupportIndex(IntProperty NewParam, bool& NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.IsNewIphone
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsNewIphone(bool& IsNewIphone); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.SetWateMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWateMaterial(bool bHDR); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.HideUnderWaterEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideUnderWaterEffect(struct UStaticMeshComponent* WaterPlane, struct UExponentialHeightFogComponent* CamFog); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.ShowUnderWaterEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowUnderWaterEffect(struct UStaticMeshComponent* WaterPlane, struct UExponentialHeightFogComponent* CamFog); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.IsCapsult
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsCapsult(struct UObject* PlayerPawn, struct UActorComponent* Comp); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(IntProperty UserQualitySettingLevel); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.CustomEvent_3
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_3(bool UserMsaaSetting); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.CustomEvent_4
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_4(bool bOpenWaterReflection); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WaterSwimObject.WaterSwimObject_C.ExecuteUbergraph_WaterSwimObject
	// Flags: [HasDefaults]
	void ExecuteUbergraph_WaterSwimObject(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

