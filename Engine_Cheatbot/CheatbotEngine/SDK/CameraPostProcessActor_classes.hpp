#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C
// Size: 0xa70 // Inherited bytes: 0x4b0
struct ACameraPostProcessActor_C : AActor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4b0 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x4b8 // Size: 0x08
	float Timeline_LerpPPSettings_104_7E99B53D425173C51E1B2D83BB82148A; // Offset: 0x4c0 // Size: 0x04
	float Timeline_LerpPPSettings_103_7E99B53D425173C51E1B2D83BB82148A; // Offset: 0x4c4 // Size: 0x04
	float Timeline_LerpPPSettings_102_7E99B53D425173C51E1B2D83BB82148A; // Offset: 0x4c8 // Size: 0x04
	float Timeline_LerpPPSettings_101_7E99B53D425173C51E1B2D83BB82148A; // Offset: 0x4cc // Size: 0x04
	enum class ETimelineDirection Timeline_LerpPPSettings__Direction_7E99B53D425173C51E1B2D83BB82148A; // Offset: 0x4d0 // Size: 0x01
	char pad_0x4D1[0x7]; // Offset: 0x4d1 // Size: 0x07
	struct UTimelineComponent* Timeline_LerpPPSettings; // Offset: 0x4d8 // Size: 0x08
	struct APostProcessVolume* currentPostProcessVolumn; // Offset: 0x4e0 // Size: 0x08
	IntProperty isLerp; // Offset: 0x4e8 // Size: 0x04
	char pad_0x4EC[0x4]; // Offset: 0x4ec // Size: 0x04
	struct TArray<enum class EDepthOfFieldMethod> depthOfFieldMethodArray; // Offset: 0x4f0 // Size: 0x10
	float LerpAlpha; // Offset: 0x500 // Size: 0x04
	bool isReverse; // Offset: 0x504 // Size: 0x01
	char pad_0x505[0xb]; // Offset: 0x505 // Size: 0x0b
	struct FPostProcessSettings previousPPSettingsStruct; // Offset: 0x510 // Size: 0x560

	// Functions

	// Object Name: Function CameraPostProcessActor.CameraPostProcessActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__FinishedFunc
	// Flags: [BlueprintEvent]
	void Timeline_LerpPPSettings__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__UpdateFunc
	// Flags: [BlueprintEvent]
	void Timeline_LerpPPSettings__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CameraPostProcessActor.CameraPostProcessActor_C.Event LerpPostProcessSettings
	// Flags: [BlueprintCallable|BlueprintEvent]
	void Event LerpPostProcessSettings(struct APostProcessVolume* currentPPVolumn, struct FBP_STRUCT_CameraPostProcessSettings_type targetPPSettingsStruct, float Time, IntProperty ID, bool isReverse); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x131)

	// Object Name: Function CameraPostProcessActor.CameraPostProcessActor_C.ExecuteUbergraph_CameraPostProcessActor
	// Flags: [HasDefaults]
	void ExecuteUbergraph_CameraPostProcessActor(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

