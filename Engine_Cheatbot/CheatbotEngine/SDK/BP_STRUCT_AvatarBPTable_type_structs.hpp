#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_AvatarBPTable_type.BP_STRUCT_AvatarBPTable_type
// Size: 0xa0 // Inherited bytes: 0x00
struct FBP_STRUCT_AvatarBPTable_type {
	// Fields
	StrProperty CName_0_A4052DC94E7BDAA9FAD3B19A7B988D48; // Offset: 0x00 // Size: 0x10
	StrProperty AvatarBPPath_1_891FA0534B751701E31560B16F286D8B; // Offset: 0x10 // Size: 0x10
	IntProperty ItemID_2_5414CFBB435533293B561394BF4A770E; // Offset: 0x20 // Size: 0x04
	IntProperty IsPackage_4_4347B95845DB19587DE29887A52E05D7; // Offset: 0x24 // Size: 0x04
	StrProperty Wrapper_5_663E34007B103FC200DAC514020BE042; // Offset: 0x28 // Size: 0x10
	IntProperty TemplateID_6_2887AE005383C2E84A80675E0040CD54; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty LobbyPath_7_17C51D006376E0D618CF05350B08C778; // Offset: 0x40 // Size: 0x10
	IntProperty IsReuseWrapper_8_30F4A4006900D02E4EC7D5B60E3DD5A2; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty MaterialPath_9_66A36AC07FBB0355612D10BC0591FD48; // Offset: 0x58 // Size: 0x10
	StrProperty MeshPath_10_2C6542406658161909A9383A04A40258; // Offset: 0x68 // Size: 0x10
	StrProperty AvatarBPPathHigh_11_6BA33B405FACCD43564E00B30B43DE08; // Offset: 0x78 // Size: 0x10
	IntProperty DeviceLevel_12_0459CDC0469B730D146D87800F1483DC; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	StrProperty LobbyPathHigh_13_30DD5D0039F4D78E45BC9B560777E718; // Offset: 0x90 // Size: 0x10
};

