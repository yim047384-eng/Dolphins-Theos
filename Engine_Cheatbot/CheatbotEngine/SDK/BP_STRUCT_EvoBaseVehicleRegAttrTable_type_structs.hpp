#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EvoBaseVehicleRegAttrTable_type.BP_STRUCT_EvoBaseVehicleRegAttrTable_type
// Size: 0x9c // Inherited bytes: 0x00
struct FBP_STRUCT_EvoBaseVehicleRegAttrTable_type {
	// Fields
	IntProperty AttrDataType_0_14D494C03506D0971C8C60BD04DE6D25; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty AttrGroudName_1_37048E406A4356014F1C54E901379865; // Offset: 0x08 // Size: 0x10
	IntProperty bClientApply_2_228818C0334745E11D08A50E0B130359; // Offset: 0x18 // Size: 0x04
	IntProperty bDSEvent_3_62ABA5C00A3B5C8358B7E0D90A2726C4; // Offset: 0x1c // Size: 0x04
	IntProperty bDynamicAttr_4_26CBF7800CC08EB869F732F60D6F3412; // Offset: 0x20 // Size: 0x04
	IntProperty bDyOneceModify_5_3E42034053C713550B3AF3EC02BA0AD9; // Offset: 0x24 // Size: 0x04
	IntProperty bModSimulateSync_6_0BDB9FC033985BAB7851AFD30AD84563; // Offset: 0x28 // Size: 0x04
	IntProperty bNotDyClientEvent_7_3FD0B340187F79BF6ED5A45C00B868C4; // Offset: 0x2c // Size: 0x04
	IntProperty bNotDyClientSync_8_510F9A00444666B26E87DF3D090AE683; // Offset: 0x30 // Size: 0x04
	IntProperty bUseMaxMinValue_9_318AFC804C10CB4C57B0C90E04012675; // Offset: 0x34 // Size: 0x04
	IntProperty bUseOriginValue_10_4DF7A4004D99E0CA2ECFCC3004042495; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty DyMaxAttrName_11_6466C6C06C8B323F30E040130F417675; // Offset: 0x40 // Size: 0x10
	StrProperty DyMinAttrName_12_4CC5C64013B4A53D19510F5A0F411C75; // Offset: 0x50 // Size: 0x10
	IntProperty GroupDamageID_13_65877D4078CF980909C01E6E07F4A3B4; // Offset: 0x60 // Size: 0x04
	IntProperty ID_14_60A34A4065895D17352FD289035BEC24; // Offset: 0x64 // Size: 0x04
	float MaxValue_f_15_7E3B8100517238E459CB99B807AE72D6; // Offset: 0x68 // Size: 0x04
	float MinValue_f_16_1D0240806C8739B23F2BDA8507AE7836; // Offset: 0x6c // Size: 0x04
	StrProperty ModeStrings_17_7692E2C01D7EEB3379AB1C420465ABF3; // Offset: 0x70 // Size: 0x10
	IntProperty ModOpen_18_140113806247E62E42F025E80D6ED86E; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty Name_19_44A687400A3D2D1168B19C850BEDB565; // Offset: 0x88 // Size: 0x10
	float OriginValue_f_20_1A4051806F480CB422DE286F05D9D9B6; // Offset: 0x98 // Size: 0x04
};

