#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VoiceDataObject.BP_VoiceDataObject_C
// Size: 0xa0 // Inherited bytes: 0x28
struct UBP_VoiceDataObject_C : UObject {
	// Fields
	struct FBP_VoiceCheckData Data; // Offset: 0x28 // Size: 0x24
	float nowdis; // Offset: 0x4c // Size: 0x04
	float nowCheckCd; // Offset: 0x50 // Size: 0x04
	enum class BP_VoiceCheckType nowType; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	struct UBP_VoiceCheck_C* VoiceCheck; // Offset: 0x58 // Size: 0x08
	float maxCheckDis; // Offset: 0x60 // Size: 0x04
	float showTime; // Offset: 0x64 // Size: 0x04
	float showScale; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct TArray<struct UBP_VoiceDataSubObject_C*> subcheckList; // Offset: 0x70 // Size: 0x10
	IntProperty MaxCheckNum; // Offset: 0x80 // Size: 0x04
	float MaxCheckCD; // Offset: 0x84 // Size: 0x04
	bool IsRefresh; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct UBP_VoiceDataSubObject_C* TriggerSubObject; // Offset: 0x90 // Size: 0x08
	struct ABP_STExtraPlayerController_C* PlayerController; // Offset: 0x98 // Size: 0x08

	// Functions

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetSubObjectData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSubObjectData(float nowScale, struct FVector nowPos, struct UBP_VoiceDataSubObject_C* subObject, float MaxCheckLength); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetCheckData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetCheckData(IntProperty Index, struct FVector Postion, float CheckLength, struct ASTExtraBaseCharacter* nowplayer, struct ASTExtraShootWeapon* nowWeapon, struct ASTExtraVehicleBase* nowVehicle); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x30)

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.InitSubList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitSubList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateWaeponCheck
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateWaeponCheck(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateChekcVehicleMove
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateChekcVehicleMove(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheckPlayeCheck
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateCheckPlayeCheck(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheck
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateCheck(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

