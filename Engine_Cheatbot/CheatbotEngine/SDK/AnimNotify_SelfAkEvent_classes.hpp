#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AnimNotify_SelfAkEvent.AnimNotify_SelfAkEvent_C
// Size: 0x81 // Inherited bytes: 0x81
struct UAnimNotify_SelfAkEvent_C : UAnimNotify_AkEvent_C {
	// Functions

	// Object Name: Function AnimNotify_SelfAkEvent.AnimNotify_SelfAkEvent_C.PlayAkEvent
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	bool PlayAkEvent(struct USkeletalMeshComponent* MeshComp); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AnimNotify_SelfAkEvent.AnimNotify_SelfAkEvent_C.Received_Notify
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)
};

