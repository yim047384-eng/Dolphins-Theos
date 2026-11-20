#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// Size: 0x81 // Inherited bytes: 0x38
struct UAnimNotify_AkEvent_C : UAnimNotify {
	// Fields
	StrProperty Attach Name; // Offset: 0x38 // Size: 0x10
	struct UAkAudioEvent* Event; // Offset: 0x48 // Size: 0x08
	bool Follow; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	StrProperty EventName; // Offset: 0x58 // Size: 0x10
	enum class EAnimNotifyLimit NotifyLimit; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
	struct UAkAudioEvent* OverrideEvent_Teammate; // Offset: 0x70 // Size: 0x08
	struct UAkAudioEvent* OverrideEvent_Enemy; // Offset: 0x78 // Size: 0x08
	bool bUseOwnersOwnerForPawnCheck; // Offset: 0x80 // Size: 0x01

	// Functions

	// Object Name: Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.TryGetOwnerPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	void TryGetOwnerPawn(struct AActor* Owner, struct APawn*& Pawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.GetEvent
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	void GetEvent(struct USkeletalMeshComponent* MeshComp, struct UAkAudioEvent*& OutEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)
};

