#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_MultiAdvertisementActor.BP_MultiAdvertisementActor_C
// Size: 0x5d0 // Inherited bytes: 0x5b8
struct ABP_MultiAdvertisementActor_C : ABP_AdvertisementActorBase_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x5b8 // Size: 0x08
	float Timeline_0_TextureChangeTrack_E550C547429137496C1992BD52F2330E; // Offset: 0x5c0 // Size: 0x04
	enum class ETimelineDirection Timeline_0__Direction_E550C547429137496C1992BD52F2330E; // Offset: 0x5c4 // Size: 0x01
	char pad_0x5C5[0x3]; // Offset: 0x5c5 // Size: 0x03
	struct UTimelineComponent* Timeline_1; // Offset: 0x5c8 // Size: 0x08

	// Functions

	// Object Name: Function BP_MultiAdvertisementActor.BP_MultiAdvertisementActor_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MultiAdvertisementActor.BP_MultiAdvertisementActor_C.Timeline_0__FinishedFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MultiAdvertisementActor.BP_MultiAdvertisementActor_C.Timeline_0__UpdateFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MultiAdvertisementActor.BP_MultiAdvertisementActor_C.ReplaceTextureWithAnimation
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ReplaceTextureWithAnimation(struct UTexture* NextTexture); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_MultiAdvertisementActor.BP_MultiAdvertisementActor_C.ExecuteUbergraph_BP_MultiAdvertisementActor
	// Flags: [None]
	void ExecuteUbergraph_BP_MultiAdvertisementActor(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

