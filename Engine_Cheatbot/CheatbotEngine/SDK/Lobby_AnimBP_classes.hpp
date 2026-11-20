#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass Lobby_AnimBP.Lobby_AnimBP_C
// Size: 0x35e1 // Inherited bytes: 0x6c0
struct ULobby_AnimBP_C : ULobbyPawnAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x6c0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_AFF52F6C457272B774D5C286273B97F4; // Offset: 0x6c8 // Size: 0x50
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B; // Offset: 0x718 // Size: 0x2c0
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9A8BCB494C60C4E6B163B69FBF189C85; // Offset: 0x9d8 // Size: 0x50
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9E8CA6A84B12F57225A6DB8E983D5123; // Offset: 0xa28 // Size: 0x50
	struct FAnimNode_Slot AnimGraphNode_Slot_32F8A3014A4B2F525C7DD4B2D614EA15; // Offset: 0xa78 // Size: 0x70
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_D1F9C59643EF5AB6506D33B1FAF9BEAE; // Offset: 0xae8 // Size: 0x80
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4F7536174C45371D788EBA946ED43248; // Offset: 0xb68 // Size: 0x70
	struct FAnimNode_Slot AnimGraphNode_Slot_B65895564C080E77F70DF7AA5C4C1300; // Offset: 0xbd8 // Size: 0x70
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4; // Offset: 0xc48 // Size: 0xd0
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_279239D64DB636652BBE09A92658848B; // Offset: 0xd18 // Size: 0xd0
	struct FAnimNode_Slot AnimGraphNode_Slot_CCDB50C04AEC8E7BEDFF17983C8785F2; // Offset: 0xde8 // Size: 0x70
	struct FAnimNode_Slot AnimGraphNode_Slot_788E56964F71F1A4A93B2CABE4F1D8E8; // Offset: 0xe58 // Size: 0x70
	struct FAnimNode_Slot AnimGraphNode_Slot_1E97E4B0457381BA95218FBB4C991AB2; // Offset: 0xec8 // Size: 0x70
	struct FAnimNode_Slot AnimGraphNode_Slot_1C0B457D417E62429FAEDCB758ABB77E; // Offset: 0xf38 // Size: 0x70
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3FB655374AB247D268DADB981A652201; // Offset: 0xfa8 // Size: 0xd0
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_DC2031D14BE69EA210FD2593169301C1; // Offset: 0x1078 // Size: 0x158
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_06B5494B4F5900B6EE7DB9A9B2B29E83; // Offset: 0x11d0 // Size: 0xc0
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_F7C438744D7EFFFB24B33EB3F34A83B8; // Offset: 0x1290 // Size: 0x58
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4680C92D414B58CF86313D822700A770; // Offset: 0x12e8 // Size: 0x58
	struct FAnimNode_SubInstanceContainer AnimGraphNode_SubInstanceContainer_B640AAFF41B7DB6A75191A9832EC7034; // Offset: 0x1340 // Size: 0x110
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_07D3B80E4038DBDEA4345A84665D4823; // Offset: 0x1450 // Size: 0x50
	struct FAnimNode_PUBGMLookAt AnimGraphNode_PUBGMLookAt_9F3A0CC54046EDF6E958B191C97A759A; // Offset: 0x14a0 // Size: 0xd0
	struct FAnimNode_PUBGMLookAt AnimGraphNode_PUBGMLookAt_7C8A4864489206FE250532934595DBC9; // Offset: 0x1570 // Size: 0xd0
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_456542674F19FB0865F05092CA1A32F4; // Offset: 0x1640 // Size: 0xc0
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_E01E9A8D4C870D76758D71B2BAFD7EFF; // Offset: 0x1700 // Size: 0x58
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22FD472D48DAABA6AB280E9FBAB9B203; // Offset: 0x1758 // Size: 0x58
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_848F8D764F16213009139F8E6E9B141C; // Offset: 0x17b0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2B3E6A4040124AE0F0DC4D92A24A8C36; // Offset: 0x17f8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9A8ED55140884D8F417F84A517FED756; // Offset: 0x1840 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37A3DE2A40B0D2329393B285C1B636F3; // Offset: 0x1888 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C016BEAA4084A7F5A776639CAA502FA4; // Offset: 0x18d0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D7279BA7489D4B069A62D9A99E006FF6; // Offset: 0x1918 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_951D7AC34D8F6E4CA89A9B93415580A5; // Offset: 0x1960 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_61EFD29F4F2BEFD096C9A9A2A41329B1; // Offset: 0x19a8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1831AA48453E1916453917A459399FE3; // Offset: 0x19f0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B369AD3F49929607FD86AFAFE5163995; // Offset: 0x1a38 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_481799124484A12DFEB167994CA6DE8C; // Offset: 0x1a80 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_982FE2684988796D02A644B7EA57C585; // Offset: 0x1ac8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_083E77C146D30B93289CE2B8A314B943; // Offset: 0x1b10 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_77F98A3A4C0E1632929358B892D2C85D; // Offset: 0x1b58 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_60D24CA640B3BAE5EFB728BAC988790B; // Offset: 0x1ba0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CD8BBCFA4588B3C19D1FC989259280E5; // Offset: 0x1be8 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_513492C7471A49B98E552DB91CACE70D; // Offset: 0x1c30 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44E34D5640A7E84FEE3970BD6E19647B; // Offset: 0x1c78 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6A5A1A444D74CF2CB7C649AD6990D70F; // Offset: 0x1cc0 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_281471F843B217A1764176BC71FB9398; // Offset: 0x1d08 // Size: 0x48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D0D1790F4BC231CABFE1FFAF747F699C; // Offset: 0x1d50 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_3E69EC854C931F531A1850BA2107DE75; // Offset: 0x1dc0 // Size: 0x50
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_D10928F14C3030121157BFB5CE8BAF6A; // Offset: 0x1e10 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_D51687BE4EA2088EA637A4B190C5A31E; // Offset: 0x1e80 // Size: 0x50
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_166E9D0A4D155470A3ED0B8749F87E04; // Offset: 0x1ed0 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_A0DA261E44B6B9AF3CCB52BBCD79B619; // Offset: 0x1f40 // Size: 0x50
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1F03D991489F4E88BB867CB145BDF6E9; // Offset: 0x1f90 // Size: 0x50
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_720282BE43459404AFA330A354A0E023; // Offset: 0x1fe0 // Size: 0x1c0
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6EF521ED4643F80A4B5E0C988B51E7C8; // Offset: 0x21a0 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A2FD588D42043858DCCF3B9069E220B4; // Offset: 0x21f0 // Size: 0x70
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_599E51EE4C0B0DD41DB11B8E82A9A27E; // Offset: 0x2260 // Size: 0xd0
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15F183F84D6D9FF318939D9D62044D1B; // Offset: 0x2330 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_096829D44DB49579A8E89E836B5FB542; // Offset: 0x23a0 // Size: 0x70
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_BE33BC5A47C226041CC75C875B3E3F48; // Offset: 0x2410 // Size: 0x80
	struct FAnimNode_Root AnimGraphNode_StateResult_FE4CF1244323B9682B264FAA1B8A245A; // Offset: 0x2490 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_B89DC77542C1207DFF710FAEF1DB4BF3; // Offset: 0x24e0 // Size: 0xd8
	struct FAnimNode_Root AnimGraphNode_StateResult_BC87D33147480A3D15C431970B46AC7E; // Offset: 0x25b8 // Size: 0x50
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_A751EBD242D2953FEFBD969FC57046EC; // Offset: 0x2608 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_0D6188684CACEF8EE8D0DD8A1ABA414E; // Offset: 0x2678 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A577DC434DDFE48A4C8AB8B563553923; // Offset: 0x26c8 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_070794E14F0099CC587F5488DF34BB99; // Offset: 0x2738 // Size: 0x70
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1583A45D4A2762C5B1E033A969B60B96; // Offset: 0x27a8 // Size: 0x80
	struct FAnimNode_Root AnimGraphNode_StateResult_B0B7B81D4D014B4D56DBFA82A4568BAD; // Offset: 0x2828 // Size: 0x50
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3705AD7C4BDC5156FADF86AB0A79BAB7; // Offset: 0x2878 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_27CF2F5A40252C3CDFE5C79FD15F33062; // Offset: 0x28e8 // Size: 0x50
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_529F3CDC4EDE17364BD844ADFCEBD591; // Offset: 0x2938 // Size: 0x48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D6DE7CD9437D40AE605A52A5034FC22C; // Offset: 0x2980 // Size: 0x48
	struct FAnimNode_InertializationBlendByBool AnimGraphNode_InertializationBlendByBool_1F9A1EB84173C56C53F3E79ACF1BE5AF; // Offset: 0x29c8 // Size: 0xd0
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1D81FBFF44E35B9BE3C592ADBF332D7D; // Offset: 0x2a98 // Size: 0x80
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2FA92E5D4297748BB1919F93F1CE8B00; // Offset: 0x2b18 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_254E20294F1775CBCDF7E0A750D6A9BF; // Offset: 0x2b88 // Size: 0x70
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_AB9E60F3441952F86BFFA185055FFB63; // Offset: 0x2bf8 // Size: 0x80
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81D811B54F143DDF592A4CB674D822DD; // Offset: 0x2c78 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_855E0CB54AD5EC1775E556AB936AD75A; // Offset: 0x2ce8 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_A75753904AA89C533B1D7888CDDC68652; // Offset: 0x2d58 // Size: 0x50
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_0AE4BFA7414AB7EE51F98FB199AAE929; // Offset: 0x2da8 // Size: 0x80
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2867F45948EAF5B9A36713894E71300F; // Offset: 0x2e28 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AD0D363B443EDE62B9E2309A3902054E; // Offset: 0x2e98 // Size: 0x70
	struct FAnimNode_Root AnimGraphNode_StateResult_A75753904AA89C533B1D7888CDDC6865; // Offset: 0x2f08 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_76D5DCD349466C2DC82C1EA5FD61FB12; // Offset: 0x2f58 // Size: 0xd8
	struct FAnimNode_Root AnimGraphNode_StateResult_27CF2F5A40252C3CDFE5C79FD15F3306; // Offset: 0x3030 // Size: 0x50
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_757E4F3248915A780CE100B802F9A600; // Offset: 0x3080 // Size: 0x48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_202AF9ED4D687290300EB79274F16E20; // Offset: 0x30c8 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6E1523E64287D23AE2BACFA8A3BBDECC; // Offset: 0x3138 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26DD922C4DFC5378CCCE8DBAEA28C11B; // Offset: 0x31a8 // Size: 0x70
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_0059A36D4855FBA73777C288ADFEC09D; // Offset: 0x3218 // Size: 0xe8
	struct FAnimNode_Root AnimGraphNode_StateResult_64116E7C47716918C63899971A7367F4; // Offset: 0x3300 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2499A09F49B8E177A7357FA6A09CD01A; // Offset: 0x3350 // Size: 0xd8
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D24B493B40DBFA8CA24311B54D745801; // Offset: 0x3428 // Size: 0x50
	struct FAnimNode_RefPose AnimGraphNode_IdentityPose_CA568B3F44D26441EBFDB18EE6E87026; // Offset: 0x3478 // Size: 0x38
	struct FAnimNode_SubInstanceContainer AnimGraphNode_SubInstanceContainer_DF7423194A18343EDB40B29BE1360CBD; // Offset: 0x34b0 // Size: 0x110
	struct ABP_PlayerLobbyPawn_C* BP_LobbyPawn; // Offset: 0x35c0 // Size: 0x08
	bool IsBPLobbyPawnValid; // Offset: 0x35c8 // Size: 0x01
	char pad_0x35C9[0x7]; // Offset: 0x35c9 // Size: 0x07
	struct UAnimMontage* MaleTransition; // Offset: 0x35d0 // Size: 0x08
	struct UAnimMontage* FemaleTransition; // Offset: 0x35d8 // Size: 0x08
	bool bIsTransitionReady; // Offset: 0x35e0 // Size: 0x01

	// Functions

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_CD8BBCFA4588B3C19D1FC989259280E5
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_CD8BBCFA4588B3C19D1FC989259280E5(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_513492C7471A49B98E552DB91CACE70D
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_513492C7471A49B98E552DB91CACE70D(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_44E34D5640A7E84FEE3970BD6E19647B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_44E34D5640A7E84FEE3970BD6E19647B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_6A5A1A444D74CF2CB7C649AD6990D70F
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_6A5A1A444D74CF2CB7C649AD6990D70F(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_982FE2684988796D02A644B7EA57C585
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_982FE2684988796D02A644B7EA57C585(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_281471F843B217A1764176BC71FB9398
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_281471F843B217A1764176BC71FB9398(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D0D1790F4BC231CABFE1FFAF747F699C
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D0D1790F4BC231CABFE1FFAF747F699C(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_D10928F14C3030121157BFB5CE8BAF6A
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_D10928F14C3030121157BFB5CE8BAF6A(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_481799124484A12DFEB167994CA6DE8C
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_481799124484A12DFEB167994CA6DE8C(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_083E77C146D30B93289CE2B8A314B943
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_083E77C146D30B93289CE2B8A314B943(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_166E9D0A4D155470A3ED0B8749F87E04
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_166E9D0A4D155470A3ED0B8749F87E04(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_60D24CA640B3BAE5EFB728BAC988790B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_60D24CA640B3BAE5EFB728BAC988790B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TwoBoneIK_720282BE43459404AFA330A354A0E023
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TwoBoneIK_720282BE43459404AFA330A354A0E023(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_A2FD588D42043858DCCF3B9069E220B4
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_A2FD588D42043858DCCF3B9069E220B4(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_599E51EE4C0B0DD41DB11B8E82A9A27E
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_599E51EE4C0B0DD41DB11B8E82A9A27E(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_15F183F84D6D9FF318939D9D62044D1B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_15F183F84D6D9FF318939D9D62044D1B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_096829D44DB49579A8E89E836B5FB542
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_096829D44DB49579A8E89E836B5FB542(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_B369AD3F49929607FD86AFAFE5163995
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_B369AD3F49929607FD86AFAFE5163995(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_1831AA48453E1916453917A459399FE3
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_1831AA48453E1916453917A459399FE3(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_A751EBD242D2953FEFBD969FC57046EC
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_A751EBD242D2953FEFBD969FC57046EC(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_A577DC434DDFE48A4C8AB8B563553923
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_A577DC434DDFE48A4C8AB8B563553923(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_070794E14F0099CC587F5488DF34BB99
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_070794E14F0099CC587F5488DF34BB99(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_3705AD7C4BDC5156FADF86AB0A79BAB7
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_3705AD7C4BDC5156FADF86AB0A79BAB7(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_61EFD29F4F2BEFD096C9A9A2A41329B1
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_61EFD29F4F2BEFD096C9A9A2A41329B1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_D6DE7CD9437D40AE605A52A5034FC22C
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_D6DE7CD9437D40AE605A52A5034FC22C(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_InertializationBlendByBool_1F9A1EB84173C56C53F3E79ACF1BE5AF
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_InertializationBlendByBool_1F9A1EB84173C56C53F3E79ACF1BE5AF(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2FA92E5D4297748BB1919F93F1CE8B00
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2FA92E5D4297748BB1919F93F1CE8B00(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_254E20294F1775CBCDF7E0A750D6A9BF
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_254E20294F1775CBCDF7E0A750D6A9BF(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_81D811B54F143DDF592A4CB674D822DD
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_81D811B54F143DDF592A4CB674D822DD(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_855E0CB54AD5EC1775E556AB936AD75A
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_855E0CB54AD5EC1775E556AB936AD75A(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_951D7AC34D8F6E4CA89A9B93415580A5
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_951D7AC34D8F6E4CA89A9B93415580A5(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_D7279BA7489D4B069A62D9A99E006FF6
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_D7279BA7489D4B069A62D9A99E006FF6(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2867F45948EAF5B9A36713894E71300F
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2867F45948EAF5B9A36713894E71300F(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_AD0D363B443EDE62B9E2309A3902054E
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_AD0D363B443EDE62B9E2309A3902054E(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_C016BEAA4084A7F5A776639CAA502FA4
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_C016BEAA4084A7F5A776639CAA502FA4(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_37A3DE2A40B0D2329393B285C1B636F3
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_37A3DE2A40B0D2329393B285C1B636F3(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_6E1523E64287D23AE2BACFA8A3BBDECC
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_6E1523E64287D23AE2BACFA8A3BBDECC(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_26DD922C4DFC5378CCCE8DBAEA28C11B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_26DD922C4DFC5378CCCE8DBAEA28C11B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_0059A36D4855FBA73777C288ADFEC09D
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_0059A36D4855FBA73777C288ADFEC09D(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_9A8ED55140884D8F417F84A517FED756
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_9A8ED55140884D8F417F84A517FED756(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_2B3E6A4040124AE0F0DC4D92A24A8C36
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_2B3E6A4040124AE0F0DC4D92A24A8C36(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_848F8D764F16213009139F8E6E9B141C
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_848F8D764F16213009139F8E6E9B141C(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_PUBGMLookAt_7C8A4864489206FE250532934595DBC9
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_PUBGMLookAt_7C8A4864489206FE250532934595DBC9(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_PUBGMLookAt_9F3A0CC54046EDF6E958B191C97A759A
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_PUBGMLookAt_9F3A0CC54046EDF6E958B191C97A759A(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_DC2031D14BE69EA210FD2593169301C1
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_DC2031D14BE69EA210FD2593169301C1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_3FB655374AB247D268DADB981A652201
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_3FB655374AB247D268DADB981A652201(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_279239D64DB636652BBE09A92658848B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_279239D64DB636652BBE09A92658848B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_77F98A3A4C0E1632929358B892D2C85D
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_77F98A3A4C0E1632929358B892D2C85D(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.BlueprintInitializeAnimation
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintInitializeAnimation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.AnimNotify_NormalToWeapon
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_NormalToWeapon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.AnimNotify_WeaponToNormal
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_WeaponToNormal(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.AnimNotify_LeavePreviosWeapon
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimNotify_LeavePreviosWeapon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Lobby_AnimBP.Lobby_AnimBP_C.ExecuteUbergraph_Lobby_AnimBP
	// Flags: [None]
	void ExecuteUbergraph_Lobby_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

