#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_SuitDyePlan_type.BP_STRUCT_SuitDyePlan_type
// Size: 0xa0 // Inherited bytes: 0x00
struct FBP_STRUCT_SuitDyePlan_type {
	// Fields
	IntProperty ID_0_59A69D4019E7BA2D6EA8C9BE020AB384; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> PartColor1_a_1_65E57BC0174988D3635C1F77082CC561; // Offset: 0x08 // Size: 0x10
	struct TArray<IntProperty> PartColor2_a_2_3FFE3C0016084FAA635C1B2E082CC661; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> PartColor3_a_3_1A16FC4014C71681635C37BD082CCB61; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> PartColor4_a_4_742FBC801385DD58635C3234082CCC61; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> PartColor5_a_5_4E487CC01244A42F635C0EAF082CC961; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> PartColor6_a_6_28613D0011036B06635C0A26082CCA61; // Offset: 0x58 // Size: 0x10
	IntProperty Period_7_2EB2D2C07C9265057BB1DA14023E86E4; // Offset: 0x68 // Size: 0x04
	IntProperty PlanNo_8_73A58C006F0F79A27BD149BF024089FF; // Offset: 0x6c // Size: 0x04
	IntProperty PlanType_9_618405407406DC23285B1F1900891225; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<IntProperty> ExtraParamID_a_11_3E00EA8053C4C47E12F2AFAA05D30D41; // Offset: 0x78 // Size: 0x10
	bool ShowEffect_12_7363D5806932BA0C43560A5B010E06C4; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	StrProperty SpecificIcon_13_272485C01EAAC26B03635ED70E034B1E; // Offset: 0x90 // Size: 0x10
};

