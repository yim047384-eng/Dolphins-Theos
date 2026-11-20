#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_CollectCarFeatureCfg_type.BP_STRUCT_CollectCarFeatureCfg_type
// Size: 0x78 // Inherited bytes: 0x00
struct FBP_STRUCT_CollectCarFeatureCfg_type {
	// Fields
	IntProperty DriverVoiceID_1_282C8F402AD41AFD6BE2BD2D096F0144; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty DriverVoiceText_2_5DDE35401C316103704F62BC0F023594; // Offset: 0x08 // Size: 0x10
	IntProperty FeatureID_3_1D7749C07535953B5D76A22A08E86AC4; // Offset: 0x18 // Size: 0x04
	IntProperty FeatureType_4_0E176F007653DA2A14260E9A0869B885; // Offset: 0x1c // Size: 0x04
	IntProperty PassengerVoiceID_6_2C62FE405C3DBB3707A061500254D704; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty PassengerVoiceText_7_6945A4404373BB17754A333A04D47EA4; // Offset: 0x28 // Size: 0x10
	StrProperty ShowName_8_1D1A9C00587AF22C42C8E2BB056F0955; // Offset: 0x38 // Size: 0x10
	IntProperty ContainerAvatarID_11_4A4F3740173F6C1F7D720B0F0FA645A4; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct TArray<IntProperty> FeatureIDArray_a_13_4D4959802D9427F4064CDBF9061E2351; // Offset: 0x50 // Size: 0x10
	IntProperty AliasID_14_08D4D1405F74FC217DD51CE1098FD334; // Offset: 0x60 // Size: 0x04
	IntProperty RewardID_15_3B8DF000053F3D6C1385334306DDC7A4; // Offset: 0x64 // Size: 0x04
	StrProperty VoiceTime_16_3E08F4C01C6A32DF46A497A30FCE5CC5; // Offset: 0x68 // Size: 0x10
};

