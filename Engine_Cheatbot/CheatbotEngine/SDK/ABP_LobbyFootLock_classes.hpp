#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass ABP_LobbyFootLock.ABP_LobbyFootLock_C
// Size: 0x22f0 // Inherited bytes: 0x19e0
struct UABP_LobbyFootLock_C : ULobbyFootLockAnimState {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x19e0 // Size: 0x08
	struct FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_943D7C964D81FA3030066D9BA18D69ED; // Offset: 0x19e8 // Size: 0x70
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_FBF0ECC24BA365D3E301D1B196C6E2CA; // Offset: 0x1a58 // Size: 0x80
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3C8C9EB7454DF2DE06790BA3DBE3A6F1; // Offset: 0x1ad8 // Size: 0xc0
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12E19BD14CC22A8D75E5DB9495986D16; // Offset: 0x1b98 // Size: 0x58
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_B51141A64C31044538489D857EE50F7B; // Offset: 0x1bf0 // Size: 0x50
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_83B366F247150B2E08BAC8852ADD2310; // Offset: 0x1c40 // Size: 0x1c0
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_BDA234194CFED3542F2C92B2407309D5; // Offset: 0x1e00 // Size: 0x1c0
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FA6301214BA6CF4073B0CABEDB794C9A; // Offset: 0x1fc0 // Size: 0x50
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_DF6D1D3E4E50C94FD47E35A392506C78; // Offset: 0x2010 // Size: 0x58
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_602184DF436C308B4E157AA0F3D09B83; // Offset: 0x2068 // Size: 0xe8
	struct FAnimNode_SubInput AnimGraphNode_SubInput_DE4D65F34C1A683F3B8C5C8DA9A900EB; // Offset: 0x2150 // Size: 0x70
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_05C0A1B441F4ABB9F509689FFE2ABC8F; // Offset: 0x21c0 // Size: 0x70
	struct FAnimNode_Slot AnimGraphNode_Slot_762C64BD4449FDAF80A3F29DA857385B; // Offset: 0x2230 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_Root_288FCB394EF42302FFA3B1AAA8CF38C4; // Offset: 0x22a0 // Size: 0x50

	// Functions

	// Object Name: Function ABP_LobbyFootLock.ABP_LobbyFootLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_SequenceEvaluator_05C0A1B441F4ABB9F509689FFE2ABC8F
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_SequenceEvaluator_05C0A1B441F4ABB9F509689FFE2ABC8F(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_LobbyFootLock.ABP_LobbyFootLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_TwoBoneIK_BDA234194CFED3542F2C92B2407309D5
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_TwoBoneIK_BDA234194CFED3542F2C92B2407309D5(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_LobbyFootLock.ABP_LobbyFootLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_TwoBoneIK_83B366F247150B2E08BAC8852ADD2310
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_TwoBoneIK_83B366F247150B2E08BAC8852ADD2310(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_LobbyFootLock.ABP_LobbyFootLock_C.ExecuteUbergraph_ABP_LobbyFootLock
	// Flags: [None]
	void ExecuteUbergraph_ABP_LobbyFootLock(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

