#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VoiceUIObject.BP_VoiceUIObject_C
// Size: 0x90 // Inherited bytes: 0x28
struct UBP_VoiceUIObject_C : UObject {
	// Fields
	enum class BP_VoiceCheckType ShowType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float ShowTimeLeave; // Offset: 0x2c // Size: 0x04
	struct FVector WorldPos; // Offset: 0x30 // Size: 0x0c
	IntProperty NowIndex; // Offset: 0x3c // Size: 0x04
	float minScale; // Offset: 0x40 // Size: 0x04
	float MaxScale; // Offset: 0x44 // Size: 0x04
	float MaxCheckLength; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct ASTExtraBaseCharacter* nowplayer; // Offset: 0x50 // Size: 0x08
	struct ASTExtraShootWeapon* Weapon; // Offset: 0x58 // Size: 0x08
	struct ASTExtraVehicleBase* Vehicle; // Offset: 0x60 // Size: 0x08
	float nowshowScale; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct UImage* middleImage; // Offset: 0x70 // Size: 0x08
	IntProperty nowZorder; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	struct ABP_STExtraPlayerController_C* PlayerController; // Offset: 0x80 // Size: 0x08
	float normalScaleDis; // Offset: 0x88 // Size: 0x04
	float MinScaleIDs; // Offset: 0x8c // Size: 0x04

	// Functions

	// Object Name: Function BP_VoiceUIObject.BP_VoiceUIObject_C.HideAll
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAll(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetNowOwnPlayer
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetNowOwnPlayer(struct ASTExtraBaseCharacter*& Player); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetPosIndex
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPosIndex(IntProperty& Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VoiceUIObject.BP_VoiceUIObject_C.UpdateState
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateState(float detaTime, bool& IsShow); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)
};

