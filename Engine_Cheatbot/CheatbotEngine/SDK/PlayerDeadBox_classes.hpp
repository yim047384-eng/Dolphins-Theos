#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PlayerDeadBox.PlayerDeadBox_C
// Size: 0x7b0 // Inherited bytes: 0x6e8
struct APlayerDeadBox_C : APlayerTombBox {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x6e8 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x6f0 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x6f8 // Size: 0x08
	struct UParticleSystemComponent* TeammateParticleSystem; // Offset: 0x700 // Size: 0x08
	struct UParticleSystemComponent* DeadParticleSystem; // Offset: 0x708 // Size: 0x08
	struct USkeletalMeshComponent* SkeletalMesh; // Offset: 0x710 // Size: 0x08
	struct UDeadBoxAvatarComponent_BP_C* DeadBoxAvatarComponent_BP; // Offset: 0x718 // Size: 0x08
	struct UAkComponent* AkComponent; // Offset: 0x720 // Size: 0x08
	struct USTScreenAppearanceComponent* STScreenAppearance; // Offset: 0x728 // Size: 0x08
	struct UStaticMeshComponent* SM_plane_01; // Offset: 0x730 // Size: 0x08
	struct USplineComponent* Spline; // Offset: 0x738 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0x740 // Size: 0x08
	struct UStaticMeshComponent* Survive_FMC_Chest1; // Offset: 0x748 // Size: 0x08
	float PitchTimeline_NewTrack_2_968FF7FD4B819605A16739A661556F94; // Offset: 0x750 // Size: 0x04
	enum class ETimelineDirection PitchTimeline__Direction_968FF7FD4B819605A16739A661556F94; // Offset: 0x754 // Size: 0x01
	char pad_0x755[0x3]; // Offset: 0x755 // Size: 0x03
	struct UTimelineComponent* PitchTimeline; // Offset: 0x758 // Size: 0x08
	float MatParamTimeline_NewTrack_1_BC760681429EE06B831346878CD5F7A7; // Offset: 0x760 // Size: 0x04
	enum class ETimelineDirection MatParamTimeline__Direction_BC760681429EE06B831346878CD5F7A7; // Offset: 0x764 // Size: 0x01
	char pad_0x765[0x3]; // Offset: 0x765 // Size: 0x03
	struct UTimelineComponent* MatParamTimeline; // Offset: 0x768 // Size: 0x08
	float CameraMove_NewTrack_0_D08AF709411B99835C3653A068B1A989; // Offset: 0x770 // Size: 0x04
	enum class ETimelineDirection CameraMove__Direction_D08AF709411B99835C3653A068B1A989; // Offset: 0x774 // Size: 0x01
	char pad_0x775[0x3]; // Offset: 0x775 // Size: 0x03
	struct UTimelineComponent* CameraMove; // Offset: 0x778 // Size: 0x08
	struct UMaterialInstanceDynamic* DynamicMat; // Offset: 0x780 // Size: 0x08
	bool bIsPlayingAudio; // Offset: 0x788 // Size: 0x01
	bool bHasOpenAnim; // Offset: 0x789 // Size: 0x01
	char pad_0x78A[0x6]; // Offset: 0x78a // Size: 0x06
	struct UStaticMesh* DefaultMesh; // Offset: 0x790 // Size: 0x08
	struct FVector CarryBoxScale; // Offset: 0x798 // Size: 0x0c
	struct FVector DefaultBoxScale; // Offset: 0x7a4 // Size: 0x0c

	// Functions

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.WarmodeEnterSpectating
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void WarmodeEnterSpectating(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.LuaCheckCanPlayAudio
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void LuaCheckCanPlayAudio(bool& bCanPlayAudio); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.GetGroundLocation
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FVector GetGroundLocation(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.CameraMove__FinishedFunc
	// Flags: [BlueprintEvent]
	void CameraMove__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.CameraMove__UpdateFunc
	// Flags: [BlueprintEvent]
	void CameraMove__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.MatParamTimeline__FinishedFunc
	// Flags: [BlueprintEvent]
	void MatParamTimeline__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.MatParamTimeline__UpdateFunc
	// Flags: [BlueprintEvent]
	void MatParamTimeline__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.PitchTimeline__FinishedFunc
	// Flags: [BlueprintEvent]
	void PitchTimeline__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.PitchTimeline__UpdateFunc
	// Flags: [BlueprintEvent]
	void PitchTimeline__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.ShowShine
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowShine(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.ShowNormal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowNormal(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.SwitchToDeadTombBox
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SwitchToDeadTombBox(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.HideDeadTombApparence
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void HideDeadTombApparence(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.OnRep_AvatarId
	// Flags: [Event|Public|BlueprintEvent]
	void OnRep_AvatarId(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.OnAvatarLoadedDone
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnAvatarLoadedDone(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.ResetToDefaultMesh
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ResetToDefaultMesh(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlayerDeadBox.PlayerDeadBox_C.ExecuteUbergraph_PlayerDeadBox
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PlayerDeadBox(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

