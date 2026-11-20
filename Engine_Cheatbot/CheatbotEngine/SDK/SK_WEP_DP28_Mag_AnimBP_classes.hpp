#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C
// Size: 0x9d8 // Inherited bytes: 0x530
struct USK_WEP_DP28_Mag_AnimBP_C : UWeaponAnimInstanceBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x530 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_75DC7AD048D128D7A60F73A87421A62C; // Offset: 0x538 // Size: 0x50
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3F815D2E489DAB0F26EBD18E6B28703E; // Offset: 0x588 // Size: 0xc0
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_09B632FF463931F40C0C39A0EF72E37D; // Offset: 0x648 // Size: 0x50
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C2BA1A8349F1B46F9D31C4A48501DC29; // Offset: 0x698 // Size: 0x50
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_80FBBDAE4061915ABA2650A82A929D75; // Offset: 0x6e8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_627469D9487B6AACA1E3FBAB1B249B35; // Offset: 0x730 // Size: 0x48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8FB2044848DE240DCC84D38E01C648DD; // Offset: 0x778 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_664526AC44A102A4E82DD8B99051D7F3; // Offset: 0x7e8 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2F62F9694252C89E1BB1E3987A0890E8; // Offset: 0x838 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_09FF596B455B99365C0DD0BA205F521A; // Offset: 0x8a8 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_A0C6397A42CB3F9C13F82BB0E2FC48E2; // Offset: 0x8f8 // Size: 0xd8
	float RotateZ; // Offset: 0x9d0 // Size: 0x04
	float ResetFireDuration; // Offset: 0x9d4 // Size: 0x04

	// Functions

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.FireOneShotEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void FireOneShotEffect(enum class EWeaponAction NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.MagOutDelayEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MagOutDelayEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP_AnimGraphNode_ModifyBone_3F815D2E489DAB0F26EBD18E6B28703E
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP_AnimGraphNode_ModifyBone_3F815D2E489DAB0F26EBD18E6B28703E(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP_AnimGraphNode_TransitionResult_80FBBDAE4061915ABA2650A82A929D75
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP_AnimGraphNode_TransitionResult_80FBBDAE4061915ABA2650A82A929D75(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP_AnimGraphNode_TransitionResult_627469D9487B6AACA1E3FBAB1B249B35
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP_AnimGraphNode_TransitionResult_627469D9487B6AACA1E3FBAB1B249B35(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.BlueprintInitializeAnimation
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintInitializeAnimation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.OnWeaponChangeState
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnWeaponChangeState(enum class EFreshWeaponStateType CurState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SK_WEP_DP28_Mag_AnimBP.SK_WEP_DP28_Mag_AnimBP_C.ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_SK_WEP_DP28_Mag_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

