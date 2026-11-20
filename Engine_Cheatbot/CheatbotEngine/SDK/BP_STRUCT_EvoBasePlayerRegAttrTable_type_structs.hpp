#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EvoBasePlayerRegAttrTable_type.BP_STRUCT_EvoBasePlayerRegAttrTable_type
// Size: 0x9c // Inherited bytes: 0x00
struct FBP_STRUCT_EvoBasePlayerRegAttrTable_type {
	// Fields
	IntProperty AttrDataType_0_163E00007F1132DA40EEB5DD07CB3A25; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AttrGroudName_1_63EC598074DD8FEC7A9B34FF0062E8B5; // Offset: 0x08 // Size: 0x10
	IntProperty bClientApply_2_23F184003109F2B0554E2D3608187659; // Offset: 0x18 // Size: 0x04
	IntProperty bDSEvent_3_5A3B910072801B6A74C856350F5027D4; // Offset: 0x1c // Size: 0x04
	IntProperty bDynamicAttr_4_283562C03DB1E81943C011EF0E7A6312; // Offset: 0x20 // Size: 0x04
	IntProperty bDyOneceModify_5_7D782E803DD6768E329A2263084F09C9; // Offset: 0x24 // Size: 0x04
	IntProperty bModSimulateSync_6_041E8B0009F0657C13FED78F0DD97213; // Offset: 0x28 // Size: 0x04
	IntProperty bNotDyClientEvent_7_0ED1FE805659E22A1D7C67E1008DD854; // Offset: 0x2c // Size: 0x04
	IntProperty bNotDyClientSync_8_4952854000A01D874218C5510009BF83; // Offset: 0x30 // Size: 0x04
	IntProperty bUseMaxMinValue_9_01DF87C067032D1D7CE4D36205513525; // Offset: 0x34 // Size: 0x04
	IntProperty bUseOriginValue_10_1E4C2F4066972A557C998F02055435C5; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty DyMaxAttrName_11_114E92001AC3BA063C0C236F0E780645; // Offset: 0x40 // Size: 0x10
	StrProperty DyMinAttrName_12_79AD918000C32C340AAB69BB0E780C45; // Offset: 0x50 // Size: 0x10
	IntProperty GroupDamageID_13_126F48805DBF91B83A1EEFBB08C3D384; // Offset: 0x60 // Size: 0x04
	IntProperty ID_14_25CCF580053BEBAC043124BC062CEF34; // Offset: 0x64 // Size: 0x04
	float MaxValue_f_15_7D182C40401EECBF4998C78E009365A6; // Offset: 0x68 // Size: 0x04
	float MinValue_f_16_1BDEEBC03056F9D142AEFDB200936146; // Offset: 0x6c // Size: 0x04
	StrProperty ModeStrings_17_1B4DEE0001D89EF856DC296705B6DC83; // Offset: 0x70 // Size: 0x10
	IntProperty ModOpen_18_7A229EC050A8C559383A9CBC0E3BA9BE; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty Name_19_1F5CF280308D0CA403FEBF000CF0A215; // Offset: 0x88 // Size: 0x10
	float OriginValue_f_20_47281CC00584846B7BBCB1F204AEAC66; // Offset: 0x98 // Size: 0x04
};

