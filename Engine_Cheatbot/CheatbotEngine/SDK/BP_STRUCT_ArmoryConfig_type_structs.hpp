#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_ArmoryConfig_type.BP_STRUCT_ArmoryConfig_type
// Size: 0xb8 // Inherited bytes: 0x00
struct FBP_STRUCT_ArmoryConfig_type {
	// Fields
	StrProperty Power_0_66023CC06166E049160058F001EA47E2; // Offset: 0x00 // Size: 0x10
	StrProperty ShotRange_1_59BA1C40037657B76427F9810CB9A205; // Offset: 0x10 // Size: 0x10
	IntProperty WeaponID_2_04A777401625BC6D3B1E56BA09255CF4; // Offset: 0x20 // Size: 0x04
	IntProperty BulletID_3_7D8136C0262C958112A0BCFE0A90D7B4; // Offset: 0x24 // Size: 0x04
	IntProperty IsShow_4_4C2F70C02E814ECD68323BF600FA3D47; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty VerticalRecoil_5_34839F80315AFB6669A7FB050FB382AC; // Offset: 0x30 // Size: 0x10
	StrProperty Shake_6_7E9B148046BA7452166E7E6601E6CE35; // Offset: 0x40 // Size: 0x10
	IntProperty WeaponType_7_482A1C8059A944560A6FD461055DA945; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty ShootInterval_8_49712E00653738B65705EBAE034CD55C; // Offset: 0x58 // Size: 0x10
	StrProperty HorizontalRecoil_9_1EB63B80354249506510039F02A0FBAC; // Offset: 0x68 // Size: 0x10
	StrProperty ReloadSpeed_10_13836B803042987230C406AD067DC2C4; // Offset: 0x78 // Size: 0x10
	StrProperty ClipCapacity_11_3EA5A7000BBA4130106249B307164639; // Offset: 0x88 // Size: 0x10
	StrProperty WeaponName_12_715DB4407742DAAB0A7C764D055D6F15; // Offset: 0x98 // Size: 0x10
	StrProperty ExtCapcity_13_128419002CEBB022532CC2890B99BD99; // Offset: 0xa8 // Size: 0x10
};

