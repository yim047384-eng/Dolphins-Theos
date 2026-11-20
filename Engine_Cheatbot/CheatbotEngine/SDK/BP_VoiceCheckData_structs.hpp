#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_VoiceCheckData.BP_VoiceCheckData
// Size: 0x24 // Inherited bytes: 0x00
struct FBP_VoiceCheckData {
	// Fields
	enum class BP_VoiceCheckType CheckType_10_2979E20A4318FC5AA71D74A3D0883B0A; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float checkLength_7_8308F79F440D45E8F56E24B1C2AD54DB; // Offset: 0x04 // Size: 0x04
	float TriggerCD_18_171DDF784C3E66546F9B2CB5D1C76D40; // Offset: 0x08 // Size: 0x04
	float ShowCD_25_64DF62A84C699369733ED7B80CBCE887; // Offset: 0x0c // Size: 0x04
	float MaxShowCDSCale_27_8612D6FB4C124C36D97566BCF37BD826; // Offset: 0x10 // Size: 0x04
	float MinShowCDScale_29_A298B9864245E006365E61A11DE50DCE; // Offset: 0x14 // Size: 0x04
	float MaxSizeScale_31_2E1C44054CCA97BE53C5C9A0221E98E2; // Offset: 0x18 // Size: 0x04
	float MinSizeScale_33_94F893FB496FDAF0704CD39054BAF717; // Offset: 0x1c // Size: 0x04
	float Minspeed_37_3455B4924DA5CB2D5F9BE8A0716073D5; // Offset: 0x20 // Size: 0x04
};

