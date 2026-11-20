#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BTMode_type.BP_STRUCT_BTMode_type
// Size: 0xf8 // Inherited bytes: 0x00
struct FBP_STRUCT_BTMode_type {
	// Fields
	bool ReplenishMember_0_56C8BE01491A3980077266B5765FBB7E; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty MaxTime_1_7232641F4B0A92ACB0F846B21C9F5399; // Offset: 0x04 // Size: 0x04
	IntProperty ResId_2_5E45EAAC460670A83C4720B781616C8C; // Offset: 0x08 // Size: 0x04
	IntProperty MaxMember_3_A42196714762C028A8C5A3ABD14F0CB4; // Offset: 0x0c // Size: 0x04
	IntProperty MaxTeamMember_4_5D4F9D62477EF4C88F5413AA30877780; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty BTMode_5_77E060BC473F3E6D0910319C6BE861F7; // Offset: 0x18 // Size: 0x10
	StrProperty GameModeName_6_A6B631D345B9E565C6C3CDBB3C52A6DD; // Offset: 0x28 // Size: 0x10
	StrProperty ModeName_7_9EA67950438327CE228344AACFA0D20F; // Offset: 0x38 // Size: 0x10
	StrProperty MapShowId_8_4B52A74022232EBB4EC8398C0B4410F4; // Offset: 0x48 // Size: 0x10
	IntProperty MapID_9_528FF7006DCEED66745B6B750D7B0A04; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	StrProperty NumberShowId_10_72897A006C2DA3E63FE3A520004BBEE4; // Offset: 0x60 // Size: 0x10
	bool IsFpp_11_28EBE4C07A2817A57B12AE730D78F3A0; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x3]; // Offset: 0x71 // Size: 0x03
	IntProperty AirlineCoefficient_14_44EF75002DA1A0AA4D16A02B0F6BE0A4; // Offset: 0x74 // Size: 0x04
	bool usedSimulation_15_252541C01A1F24B71316F8F10B7CE55E; // Offset: 0x78 // Size: 0x01
	bool HasFlyState_17_7E891E403FF0F7954D4AD70E0E8CA185; // Offset: 0x79 // Size: 0x01
	char pad_0x7A[0x6]; // Offset: 0x7a // Size: 0x06
	StrProperty SubMod_18_5850BEC038E53B7F3DDA5A5007239F84; // Offset: 0x80 // Size: 0x10
	StrProperty SubModeImagePath_19_29169400797E41525A15F52D0857D508; // Offset: 0x90 // Size: 0x10
	IntProperty ModeFightType_20_09D132801A35CAA60236FD43012E01E5; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	StrProperty ModType_22_01121CC03C8DF8C917FB0E7C0CD77D15; // Offset: 0xa8 // Size: 0x10
	bool EnableParachutingVehicle_24_63B58B80279318843DBABCF40F500D85; // Offset: 0xb8 // Size: 0x01
	bool EnableVehicleInBornIsland_25_31C916C0568A4D431872FDEC049D0734; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x2]; // Offset: 0xba // Size: 0x02
	IntProperty SpWordsToShowID_26_379A3D006790C40466944BDF002CA154; // Offset: 0xbc // Size: 0x04
	bool EnableCarryBack_28_495ADA805298D3DA13323D9700F27ADB; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x7]; // Offset: 0xc1 // Size: 0x07
	StrProperty FriendMapShowId_29_540C5D40483BC9DF0EE19E7304E89D74; // Offset: 0xc8 // Size: 0x10
	IntProperty LoadingTimeOut_30_4AF5CD803B816C4C739E52580774B5B4; // Offset: 0xd8 // Size: 0x04
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
	StrProperty RandomSceneSolution_32_3AB6174076DA961F13F115500EAE6D8E; // Offset: 0xe0 // Size: 0x10
	bool EnableTableInheritance_34_4B8CF280797C32C24FE2E9100D6EE175; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x3]; // Offset: 0xf1 // Size: 0x03
	IntProperty BattleModeFightType_35_18B3C98059A09D7C0649045A09A6CC95; // Offset: 0xf4 // Size: 0x04
};

