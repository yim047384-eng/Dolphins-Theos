#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0x90 // Inherited bytes: 0x38
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	// Fields
	struct UNiagaraSystem* Template; // Offset: 0x38 // Size: 0x08
	struct FVector LocationOffset; // Offset: 0x40 // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x4c // Size: 0x0c
	struct FVector Scale; // Offset: 0x58 // Size: 0x0c
	char pad_0x64[0x1c]; // Offset: 0x64 // Size: 0x1c
	char Attached : 1; // Offset: 0x80 // Size: 0x01
	char pad_0x80_1 : 7; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x7]; // Offset: 0x81 // Size: 0x07
	struct FName SocketName; // Offset: 0x88 // Size: 0x08
};

// Object Name: Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x68 // Inherited bytes: 0x30
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	// Fields
	struct UNiagaraSystem* Template; // Offset: 0x30 // Size: 0x08
	bool bAttachToCharacter; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	struct FName SocketName; // Offset: 0x40 // Size: 0x08
	struct FVector LocationOffset; // Offset: 0x48 // Size: 0x0c
	struct FRotator RotationOffset; // Offset: 0x54 // Size: 0x0c
	bool bDestroyAtEnd; // Offset: 0x60 // Size: 0x01
	bool bNeedSetTranslucencySort; // Offset: 0x61 // Size: 0x01
	char pad_0x62[0x2]; // Offset: 0x62 // Size: 0x02
	IntProperty TranslucencySortPriority; // Offset: 0x64 // Size: 0x04

	// Functions

	// Object Name: Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetParentCharacter
	// Flags: [Final|Native|Private|Const]
	struct ACharacter* GetParentCharacter(struct USkeletalMeshComponent* MeshComp); // Offset: 0x10211628c // Return & Params: Num(2) Size(0x10)
};

