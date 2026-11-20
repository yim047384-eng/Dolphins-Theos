#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass Baltic_Main.Baltic_Main_C
// Size: 0x5b8 // Inherited bytes: 0x4b0
struct ABaltic_Main_C : ALevelScriptActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	float fFactor; // Offset: 0x4b8 // Size: 0x04
	char pad_0x4BC[0x4]; // Offset: 0x4bc // Size: 0x04
	struct UMaterialInterface* MatSoftObj; // Offset: 0x4c0 // Size: 0x28
	struct UMyLandscapeGeometry* GeoSoftObj; // Offset: 0x4e8 // Size: 0x28
	struct UMyLandscapeGeometry* HoleGeoSoftObj; // Offset: 0x510 // Size: 0x28
	struct UMyLandscapeGeometry* LowDeviceGeoSoftObj; // Offset: 0x538 // Size: 0x28
	struct ULandscapeGeometry_ExtendData* ExtendDataGeoSoftObj; // Offset: 0x560 // Size: 0x28
	struct UMyLandscapeGeometry* GeoSoftObjNew; // Offset: 0x588 // Size: 0x28
	struct ALandscape* Landscape_0_ExecuteUbergraph_Baltic_Main_RefProperty; // Offset: 0x5b0 // Size: 0x08

	// Functions

	// Object Name: Function Baltic_Main.Baltic_Main_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Baltic_Main.Baltic_Main_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Baltic_Main.Baltic_Main_C.ExecuteUbergraph_Baltic_Main
	// Flags: [None]
	void ExecuteUbergraph_Baltic_Main(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

