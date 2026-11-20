#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AvatarCapture_BP.AvatarCapture_BP_C
// Size: 0x811 // Inherited bytes: 0x7d0
struct AAvatarCapture_BP_C : AAvatarCapture {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x7d0 // Size: 0x08
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // Offset: 0x7d8 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x7e0 // Size: 0x08
	struct UStaticMeshComponent* Background; // Offset: 0x7e8 // Size: 0x08
	struct USkeletalMeshComponent* EditorMesh; // Offset: 0x7f0 // Size: 0x08
	struct UDirectionalLightComponent* DirectionalLight1; // Offset: 0x7f8 // Size: 0x08
	struct UPointLightComponent* PointLight; // Offset: 0x800 // Size: 0x08
	struct ASceneCaptureCameraActor* SceneCaptureCameraActor; // Offset: 0x808 // Size: 0x08
	bool bUseNewCapture; // Offset: 0x810 // Size: 0x01

	// Functions

	// Object Name: Function AvatarCapture_BP.AvatarCapture_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarCapture_BP.AvatarCapture_BP_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarCapture_BP.AvatarCapture_BP_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AvatarCapture_BP.AvatarCapture_BP_C.BluePrintSetEnable
	// Flags: [Event|Public|BlueprintEvent]
	void BluePrintSetEnable(bool IsEnable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AvatarCapture_BP.AvatarCapture_BP_C.ModifyAnimationByCharAvatar
	// Flags: [Event|Public|BlueprintEvent]
	void ModifyAnimationByCharAvatar(struct UCharacterAvatarComponent2* InOBAvatarComponent, struct ASTExtraCharacter* InOBPlayerPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AvatarCapture_BP.AvatarCapture_BP_C.ExecuteUbergraph_AvatarCapture_BP
	// Flags: [None]
	void ExecuteUbergraph_AvatarCapture_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

