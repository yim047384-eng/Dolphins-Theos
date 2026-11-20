#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VoiceDataSubObject.BP_VoiceDataSubObject_C
// Size: 0x68 // Inherited bytes: 0x28
struct UBP_VoiceDataSubObject_C : UObject {
	// Fields
	bool IsShow; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float ShowCD; // Offset: 0x2c // Size: 0x04
	enum class BP_VoiceCheckType checkType; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x3]; // Offset: 0x31 // Size: 0x03
	struct FVector WorldPos; // Offset: 0x34 // Size: 0x0c
	float minShowScale; // Offset: 0x40 // Size: 0x04
	float maxShowScale; // Offset: 0x44 // Size: 0x04
	float MaxCheckLength; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct ASTExtraBaseCharacter* nowplayer; // Offset: 0x50 // Size: 0x08
	struct ASTExtraShootWeapon* noweapon; // Offset: 0x58 // Size: 0x08
	struct ASTExtraVehicleBase* Vehicle; // Offset: 0x60 // Size: 0x08
};

