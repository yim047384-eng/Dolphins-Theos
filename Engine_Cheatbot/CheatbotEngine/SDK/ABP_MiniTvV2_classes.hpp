#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass ABP_MiniTvV2.ABP_MiniTvV2_C
// Size: 0xfa9 // Inherited bytes: 0x3f0
struct UABP_MiniTvV2_C : UAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x3f0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_3CA492C64B817B9B336F31B48DA44582; // Offset: 0x3f8 // Size: 0x50
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9452BEDA44C9873D1F58EFB6EE16DCB6; // Offset: 0x448 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21378E764DBB7DD292494BAB7888D1F1; // Offset: 0x490 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0B3B17044090A86B8CBBF79C02843677; // Offset: 0x4d8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B0F82852421A66DECFE9EFB6EF4F6C75; // Offset: 0x520 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19841E7D4C46CCAFB40201BDF9E5D873; // Offset: 0x568 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3C3955134122D53E221155BEDB025AB1; // Offset: 0x5b0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CC54C0DE4BA6E9A5DF3DA1879D014F03; // Offset: 0x5f8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F58490434CB11F9A31650F99F1D1DF1F; // Offset: 0x640 // Size: 0x48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A32C1EA14E2AE46E7347A7B7DA822E7A; // Offset: 0x688 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_FE231A5B49B93C4E070460B45A9BDBC7; // Offset: 0x6f8 // Size: 0x50
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0EF67A5049A5CD62888251AFDE418FDA; // Offset: 0x748 // Size: 0x128
	struct FAnimNode_Root AnimGraphNode_StateResult_80C0E2204BF35923595780B59814FEAB; // Offset: 0x870 // Size: 0x50
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_8A9E8E3A46E8EA408644E3A04A6F8F0B; // Offset: 0x8c0 // Size: 0xd0
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3E29B9C24F91A50DE19CFF8F39F14473; // Offset: 0x990 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AD1541C84EC0DCF9144CB7AAC9C9C34E; // Offset: 0xa00 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_84B851554992EDC4728DBD94F8E4DE8D; // Offset: 0xa70 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7B2D365E43AE89A2851F938D79E9D9AE; // Offset: 0xac0 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_75B5136D4567EDDF4BE8E19085C147FE; // Offset: 0xb30 // Size: 0x50
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_90B7F6A24016EED663E049A0B83BE627; // Offset: 0xb80 // Size: 0xd0
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_630884284C9CB49FEDBE8B96AD28E6B6; // Offset: 0xc50 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4603C6CA4DE3334948CA81912973F84B; // Offset: 0xcc0 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_81BC5AD448D55A82DC87BD874BCC98B9; // Offset: 0xd30 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_359A9A494A59A90A62AA87943538C56D; // Offset: 0xd80 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_359F14E841315272ED46A1A9D25C2536; // Offset: 0xdf0 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_565079614924516F42E80EAECD60539D; // Offset: 0xe40 // Size: 0xd8
	struct FAnimNode_Slot AnimGraphNode_Slot_9BC88A3842C7E1E1F2E94D8641B68764; // Offset: 0xf18 // Size: 0x70
	bool bDrag; // Offset: 0xf88 // Size: 0x01
	bool BWalk; // Offset: 0xf89 // Size: 0x01
	char pad_0xF8A[0x2]; // Offset: 0xf8a // Size: 0x02
	IntProperty DoubleState; // Offset: 0xf8c // Size: 0x04
	struct FScriptMulticastDelegate OnWalkEnd; // Offset: 0xf90 // Size: 0x10
	float Speed; // Offset: 0xfa0 // Size: 0x04
	IntProperty dragtype; // Offset: 0xfa4 // Size: 0x04
	bool BFloat; // Offset: 0xfa8 // Size: 0x01

	// Functions

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.SetFloat
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetFloat(bool NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.SetDragType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDragType(IntProperty dragtype); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.SetSpeed
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSpeed(float Speed); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.SetWalk
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWalk(bool Walk); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.SetDrag
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDrag(bool Drag); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_19841E7D4C46CCAFB40201BDF9E5D873
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_19841E7D4C46CCAFB40201BDF9E5D873(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_CC54C0DE4BA6E9A5DF3DA1879D014F03
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_CC54C0DE4BA6E9A5DF3DA1879D014F03(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_F58490434CB11F9A31650F99F1D1DF1F
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_F58490434CB11F9A31650F99F1D1DF1F(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_B0F82852421A66DECFE9EFB6EF4F6C75
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_B0F82852421A66DECFE9EFB6EF4F6C75(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendSpacePlayer_0EF67A5049A5CD62888251AFDE418FDA
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendSpacePlayer_0EF67A5049A5CD62888251AFDE418FDA(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendListByInt_8A9E8E3A46E8EA408644E3A04A6F8F0B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendListByInt_8A9E8E3A46E8EA408644E3A04A6F8F0B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_21378E764DBB7DD292494BAB7888D1F1
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_21378E764DBB7DD292494BAB7888D1F1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendListByInt_90B7F6A24016EED663E049A0B83BE627
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendListByInt_90B7F6A24016EED663E049A0B83BE627(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_9452BEDA44C9873D1F58EFB6EE16DCB6
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_9452BEDA44C9873D1F58EFB6EE16DCB6(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.ExecuteUbergraph_ABP_MiniTvV2
	// Flags: [None]
	void ExecuteUbergraph_ABP_MiniTvV2(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ABP_MiniTvV2.ABP_MiniTvV2_C.OnWalkEnd__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnWalkEnd__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

