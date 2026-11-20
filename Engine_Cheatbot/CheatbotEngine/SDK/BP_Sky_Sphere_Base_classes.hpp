#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C
// Size: 0x560 // Inherited bytes: 0x4b0
struct ABP_Sky_Sphere_Base_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x4b8 // Size: 0x08
	struct USceneComponent* Base; // Offset: 0x4c0 // Size: 0x08
	struct UMaterialInstanceDynamic* Sky material; // Offset: 0x4c8 // Size: 0x08
	bool Refresh material; // Offset: 0x4d0 // Size: 0x01
	char pad_0x4D1[0x7]; // Offset: 0x4d1 // Size: 0x07
	struct ADirectionalLight* Directional light actor; // Offset: 0x4d8 // Size: 0x08
	float Sun height; // Offset: 0x4e0 // Size: 0x04
	float Sun brightness; // Offset: 0x4e4 // Size: 0x04
	float Horizon Falloff; // Offset: 0x4e8 // Size: 0x04
	struct FLinearColor Zenith Color; // Offset: 0x4ec // Size: 0x10
	struct FLinearColor Horizon color; // Offset: 0x4fc // Size: 0x10
	struct FLinearColor Cloud color; // Offset: 0x50c // Size: 0x10
	struct FLinearColor Overall Color; // Offset: 0x51c // Size: 0x10
	char pad_0x52C[0x4]; // Offset: 0x52c // Size: 0x04
	struct UMaterialInterface* SrcMaterial; // Offset: 0x530 // Size: 0x08
	struct UMaterialInterface* RainSkyMaterial_NoCloud; // Offset: 0x538 // Size: 0x08
	struct FLinearColor SunColor; // Offset: 0x540 // Size: 0x10
	struct TArray<struct AActor*> ShowOnlyArray; // Offset: 0x550 // Size: 0x10

	// Functions

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.SetMaterial_Param
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetMaterial_Param(StrProperty Name, float Value); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.UpdatePixelProjector
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdatePixelProjector(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.SwitchSky
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchSky(bool SwitchNoCloudMaterial); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.UpdateSunDirection
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSunDirection(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.UserConstructionScript
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Sky_Sphere_Base.BP_Sky_Sphere_Base_C.ExecuteUbergraph_BP_Sky_Sphere_Base
	// Flags: [None]
	void ExecuteUbergraph_BP_Sky_Sphere_Base(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

