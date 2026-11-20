#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AnimGraphRuntime.AnimCustomInstance
// Size: 0x3f0 // Inherited bytes: 0x3f0
struct UAnimCustomInstance : UAnimInstance {
};

// Object Name: Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 // Inherited bytes: 0x38
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	// Fields
	struct FName NotifyName; // Offset: 0x38 // Size: 0x08
};

// Object Name: Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 // Inherited bytes: 0x30
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	// Fields
	struct FName NotifyName; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x3f0 // Inherited bytes: 0x3f0
struct UAnimSequencerInstance : UAnimCustomInstance {
};

// Object Name: Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Offset: 0x1054041c0 // Return & Params: Num(10) Size(0x60)

	// Object Name: Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Offset: 0x105403fbc // Return & Params: Num(7) Size(0x90)
};

// Object Name: Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8 // Inherited bytes: 0x28
struct UPlayMontageCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnCompleted; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnBlendOut; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnInterrupted; // Offset: 0x48 // Size: 0x10
	struct FScriptMulticastDelegate OnNotifyBegin; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate OnNotifyEnd; // Offset: 0x68 // Size: 0x10
	char pad_0x78[0x30]; // Offset: 0x78 // Size: 0x30

	// Functions

	// Object Name: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Offset: 0x105404a80 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Offset: 0x1054049ac // Return & Params: Num(2) Size(0x28)

	// Object Name: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// Flags: [Final|Native|Protected]
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Offset: 0x1054048ec // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// Flags: [Final|Native|Protected]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Offset: 0x10540482c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Offset: 0x1054046c8 // Return & Params: Num(6) Size(0x28)
};

