#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C
// Size: 0x155f // Inherited bytes: 0x510
struct UPetMiniTV_AnimBlueprint_C : USTExtraPetAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x510 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_C9E39A234EEDF321D02920B2479D5BEF; // Offset: 0x518 // Size: 0x50
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50BBE809472C38EAB593E3834784AEDB; // Offset: 0x568 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_00BBBF784BC9B749FFA330BFA402AEBD; // Offset: 0x5b0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CA199F1E416BF993AF4C84B8BAFD41C4; // Offset: 0x5f8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C17DD9FF4071D328B547BEA232EEB16F; // Offset: 0x640 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8184F36049B1B9154763B98AE881E97B; // Offset: 0x688 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1DDC764C421D165D8327F2911CC4991C; // Offset: 0x6d0 // Size: 0x48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5458D5FD468790039C4DCE88F9F3C341; // Offset: 0x718 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_FFE59E3544674C3B0997018906F806B0; // Offset: 0x788 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B95BF109444EA27E295BA5A3719574FA; // Offset: 0x7d8 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_52E3060346A6851D7806948D7C35485A; // Offset: 0x848 // Size: 0x50
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2306A39C4D7CE8A70EECEBB37BFCCB93; // Offset: 0x898 // Size: 0x128
	struct FAnimNode_Root AnimGraphNode_StateResult_FBF4150A4D493BF499668990935144AE; // Offset: 0x9c0 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_009041B3462D8CF2D4A201865DD876D2; // Offset: 0xa10 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_0B36E1E74255218192097EB7CBB22FC3; // Offset: 0xa80 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_E0FB467640D9C53014BDF1A08A1BD8B1; // Offset: 0xad0 // Size: 0xd8
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BE8933BC4CCCEB2BCB7183AD234DBB67; // Offset: 0xba8 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_C68145EE42730BC7755F3D9DD43A1378; // Offset: 0xc18 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_6945DDAC45D574B30BF676AB76C8099E; // Offset: 0xc68 // Size: 0xd8
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A30E6183458B0B3F2595A8A2ED7F8D0C; // Offset: 0xd40 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_AA3ADF8F403D8AF7041DA3B4FD89F07B; // Offset: 0xdb0 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_94939C3444B46FBCC07548B43E441B8F; // Offset: 0xe00 // Size: 0xd8
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8C17E583493EFEA0F44C919180EABFD2; // Offset: 0xed8 // Size: 0xc0
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_A3F2DFF946358CFE52D97B94D948E4AA; // Offset: 0xf98 // Size: 0xc0
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_C861DABD43F34B5D7DDE18B61B409F9E; // Offset: 0x1058 // Size: 0xc0
	struct FAnimNode_Slot AnimGraphNode_Slot_8936495044F5FF29C130F782420447F7; // Offset: 0x1118 // Size: 0x70
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2DE059B04DF7111204D21EBAFE22CE81; // Offset: 0x1188 // Size: 0xd0
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_823FBE9B475C16E23156C4A71722896F; // Offset: 0x1258 // Size: 0xd0
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_B6A862EB42F36F31F7308FA3D31D623A; // Offset: 0x1328 // Size: 0x58
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3D1960524214E1A6816BEF84FE55493B; // Offset: 0x1380 // Size: 0xd0
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_195F2EA040C4F0C39693A0AD5BC25FEC; // Offset: 0x1450 // Size: 0x58
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_C0CBCECB438375034C1DEC9DE3D54CDF; // Offset: 0x14a8 // Size: 0x58
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_F6EC15D049B2F3896FC0089BAE635DF9; // Offset: 0x1500 // Size: 0x58
	float EnterIdleTS; // Offset: 0x1558 // Size: 0x04
	bool bEnterSleepLoop; // Offset: 0x155c // Size: 0x01
	bool bCanEnterSleep; // Offset: 0x155d // Size: 0x01
	bool bInIdle; // Offset: 0x155e // Size: 0x01

	// Functions

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_1DDC764C421D165D8327F2911CC4991C
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_1DDC764C421D165D8327F2911CC4991C(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2306A39C4D7CE8A70EECEBB37BFCCB93
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2306A39C4D7CE8A70EECEBB37BFCCB93(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_C17DD9FF4071D328B547BEA232EEB16F
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_C17DD9FF4071D328B547BEA232EEB16F(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_SequencePlayer_009041B3462D8CF2D4A201865DD876D2
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_SequencePlayer_009041B3462D8CF2D4A201865DD876D2(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_CA199F1E416BF993AF4C84B8BAFD41C4
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_CA199F1E416BF993AF4C84B8BAFD41C4(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_SequencePlayer_BE8933BC4CCCEB2BCB7183AD234DBB67
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_SequencePlayer_BE8933BC4CCCEB2BCB7183AD234DBB67(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_SequencePlayer_A30E6183458B0B3F2595A8A2ED7F8D0C
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_SequencePlayer_A30E6183458B0B3F2595A8A2ED7F8D0C(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendListByBool_2DE059B04DF7111204D21EBAFE22CE81
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendListByBool_2DE059B04DF7111204D21EBAFE22CE81(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendListByBool_823FBE9B475C16E23156C4A71722896F
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendListByBool_823FBE9B475C16E23156C4A71722896F(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendListByBool_3D1960524214E1A6816BEF84FE55493B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_BlendListByBool_3D1960524214E1A6816BEF84FE55493B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_00BBBF784BC9B749FFA330BFA402AEBD
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_00BBBF784BC9B749FFA330BFA402AEBD(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_50BBE809472C38EAB593E3834784AEDB
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_50BBE809472C38EAB593E3834784AEDB(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.AnimNotify_OnEnterIdle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_OnEnterIdle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.AnimNotify_OnLeftIdle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_OnLeftIdle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.AnimNotify_OnEnterSleepStart
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_OnEnterSleepStart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.AnimNotify_OnLeftSleepStart
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_OnLeftSleepStart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_8184F36049B1B9154763B98AE881E97B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetMiniTV_AnimBlueprint_AnimGraphNode_TransitionResult_8184F36049B1B9154763B98AE881E97B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetMiniTV_AnimBlueprint.PetMiniTV_AnimBlueprint_C.ExecuteUbergraph_PetMiniTV_AnimBlueprint
	// Flags: [None]
	void ExecuteUbergraph_PetMiniTV_AnimBlueprint(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

