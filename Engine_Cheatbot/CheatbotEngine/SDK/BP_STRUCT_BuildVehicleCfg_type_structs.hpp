#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BuildVehicleCfg_type.BP_STRUCT_BuildVehicleCfg_type
// Size: 0x78 // Inherited bytes: 0x00
struct FBP_STRUCT_BuildVehicleCfg_type {
	// Fields
	IntProperty AvatarID_0_074F708022B5653A614C87CE036EB054; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PreBuildingEffectPath_1_3B5EA14030DBB0453A383DA1023A41B8; // Offset: 0x08 // Size: 0x10
	StrProperty VehiclePath_2_12C488C044D393B946E39C650B562818; // Offset: 0x18 // Size: 0x10
	StrProperty BuildEffectPath_3_2193080041CB4792535CCA1209C2BD28; // Offset: 0x28 // Size: 0x10
	StrProperty RecoverEffectPath_4_022F018040FD84BA1E0A6E9A04179C48; // Offset: 0x38 // Size: 0x10
	StrProperty BuildEffectPath1_5_78C01440482CE333532CBEE70C2BD221; // Offset: 0x48 // Size: 0x10
	IntProperty VehicleSkinID_6_29A78E002F4C612801A6D1D406E15984; // Offset: 0x58 // Size: 0x04
	bool bAutoRide_7_566DB5404C538B196C542F9C02F7C9D5; // Offset: 0x5c // Size: 0x01
	bool bAutoStore_8_2D273780426E717E294BDA950F7ED1A5; // Offset: 0x5d // Size: 0x01
	bool bHideCharacter_9_55170FC06AD0E83525FB9EA209990742; // Offset: 0x5e // Size: 0x01
	char pad_0x5F[0x1]; // Offset: 0x5f // Size: 0x01
	IntProperty OverwriteMaxBuildDist_10_4CCC71C010D83C2B3A3C084104CE7F84; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	StrProperty VehicleRideAnimPath_11_602B4B004623477A1591F907024D7A98; // Offset: 0x68 // Size: 0x10
};

