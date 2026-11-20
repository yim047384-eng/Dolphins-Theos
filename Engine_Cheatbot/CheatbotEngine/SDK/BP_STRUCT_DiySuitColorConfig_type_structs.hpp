#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_DiySuitColorConfig_type.BP_STRUCT_DiySuitColorConfig_type
// Size: 0x78 // Inherited bytes: 0x00
struct FBP_STRUCT_DiySuitColorConfig_type {
	// Fields
	IntProperty ItemID_1_15B6748029F10AF4167429B5070FACB4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty BPUrl_2_1E617EC03A4F456D2C223D0106670E5C; // Offset: 0x08 // Size: 0x10
	IntProperty Cost_3_63AB73C07271FCFF75FDA1880D66A384; // Offset: 0x18 // Size: 0x04
	IntProperty ID_4_0CD2D0C023DDAD912AEEEF92052D66D4; // Offset: 0x1c // Size: 0x04
	StrProperty ColorName_9_56C1CD807D19C79E1E3D3EDE01B12E25; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> MaskColor1_a_11_14512C805333B5405D0FD0FD032BE651; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> MaskColor2_a_12_6E69ECC05EBDA3E75D0FD734032BE551; // Offset: 0x40 // Size: 0x10
	struct TArray<IntProperty> MaskColor3_a_13_4882AD006A47928E5D0F3AA4032BEC51; // Offset: 0x50 // Size: 0x10
	float GrayScale_f_15_0D6CFD80123EC6A658D3D8300FFAF166; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct TArray<IntProperty> UIShowColor_a_16_100C6D00219953BA2ABB948401FA2891; // Offset: 0x68 // Size: 0x10
};

