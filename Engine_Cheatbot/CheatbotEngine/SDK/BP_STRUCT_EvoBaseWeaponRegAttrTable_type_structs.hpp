#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EvoBaseWeaponRegAttrTable_type.BP_STRUCT_EvoBaseWeaponRegAttrTable_type
// Size: 0x9c // Inherited bytes: 0x00
struct FBP_STRUCT_EvoBaseWeaponRegAttrTable_type {
	// Fields
	IntProperty AttrDataType_0_359A5F401FB2EDA31087770203603245; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AttrGroudName_1_7C8D18C066AC533365B259B20AD26275; // Offset: 0x08 // Size: 0x10
	IntProperty bClientApply_2_434DE34051ABAD794C7F926A0CAD7E79; // Offset: 0x18 // Size: 0x04
	IntProperty bDSEvent_3_1AA67040132EA50328B9560504584374; // Offset: 0x1c // Size: 0x04
	IntProperty bDynamicAttr_4_4791C2005E53A2E25D3620BC0AD16AB2; // Offset: 0x20 // Size: 0x04
	IntProperty bDyOneceModify_5_732D4DC020A4365D2640BC4E0F476D69; // Offset: 0x24 // Size: 0x04
	IntProperty bModSimulateSync_6_3F6C6A4037E240F53BE424D805BDDB13; // Offset: 0x28 // Size: 0x04
	IntProperty bNotDyClientEvent_7_62A43DC0760B502144FEF7BF06C741D4; // Offset: 0x2c // Size: 0x04
	IntProperty bNotDyClientSync_8_04A064802E91F9005FD51747086D18F3; // Offset: 0x30 // Size: 0x04
	IntProperty bUseMaxMinValue_9_50790700664EE58E6807624205D76395; // Offset: 0x34 // Size: 0x04
	IntProperty bUseOriginValue_10_6CE5AE8065E2E2C66C37157405D27F75; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty DyMaxAttrName_11_29EF51400C927D4D57A3A18404A88405; // Offset: 0x40 // Size: 0x10
	StrProperty DyMinAttrName_12_124E50C07291EF7B66C98F2D04A88E05; // Offset: 0x50 // Size: 0x10
	IntProperty GroupDamageID_13_2B1007C04F8E54FF405E5F710E5355C4; // Offset: 0x60 // Size: 0x04
	IntProperty ID_14_5A2D94C053D666CB59CAFAD90D248B94; // Offset: 0x64 // Size: 0x04
	float MaxValue_f_15_755BCB8061F58E7E15F69FB3090FD0A6; // Offset: 0x68 // Size: 0x04
	float MinValue_f_16_14228B00522D9B907F56B90A090FCA46; // Offset: 0x6c // Size: 0x04
	StrProperty ModeStrings_17_0D35ED406EE5F6D91237646402708C03; // Offset: 0x70 // Size: 0x10
	IntProperty ModOpen_18_4C591E001895182A454A0CC7088B2E7E; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty Name_19_3DD651C051C2BC8D5EB98524048C0B15; // Offset: 0x88 // Size: 0x10
	float OriginValue_f_20_5FC8DC00775347B25A1EB8F70E3E23A6; // Offset: 0x98 // Size: 0x04
};

