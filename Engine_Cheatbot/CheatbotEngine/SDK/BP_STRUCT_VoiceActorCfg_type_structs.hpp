#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_VoiceActorCfg_type.BP_STRUCT_VoiceActorCfg_type
// Size: 0xb0 // Inherited bytes: 0x00
struct FBP_STRUCT_VoiceActorCfg_type {
	// Fields
	IntProperty ActorItemID_1_7EA64A805D4CF7C83F9ED7C20956DD34; // Offset: 0x00 // Size: 0x04
	IntProperty ActorID_2_66EEA6C00EC097255E83F50D0C7CE884; // Offset: 0x04 // Size: 0x04
	StrProperty ActorName_5_084563C0289004B337AECB5D0CE91C45; // Offset: 0x08 // Size: 0x10
	IntProperty SortKey_9_023E1980778A370A5BD689D703B81F89; // Offset: 0x18 // Size: 0x04
	IntProperty IsUnLock_11_5BD327406959D86F0700649705BBD32B; // Offset: 0x1c // Size: 0x04
	bool IsPlayInGlobal_12_14DF9BC04FFBCB15583BB67E0769332C; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	StrProperty OpenTime_15_14046D8013EB228646C4CC690BBB4AE5; // Offset: 0x28 // Size: 0x10
	StrProperty BankDepend_16_1453384006553C13591DBA5107495114; // Offset: 0x38 // Size: 0x10
	StrProperty BankName_17_72DF248073CEC0563E7F45210B58A305; // Offset: 0x48 // Size: 0x10
	bool IsLimitRegion_19_4FEB4D00214E87C4181FAD020238523E; // Offset: 0x58 // Size: 0x01
	bool IsShowUntilGet_20_24C807804D192C0A34758E20002987D4; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x6]; // Offset: 0x5a // Size: 0x06
	StrProperty OpenPublish_21_4EEE3F807004AA067FA56CB009D6AB28; // Offset: 0x60 // Size: 0x10
	StrProperty OpenRegion_22_25FEC2C01D13489B7B49BCAA0B6D05EE; // Offset: 0x70 // Size: 0x10
	IntProperty ActorQuality_23_309BFDC07AD15BDF4630985F0D71FE29; // Offset: 0x80 // Size: 0x04
	IntProperty IsMultiLanguage_24_68B560007D614E8A22F1FC6B03037045; // Offset: 0x84 // Size: 0x04
	bool IsWardrobeHidden_25_55BBB4C002A2206144511CB70982EAFE; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	StrProperty MultiLanguageActorIDList_26_10829980195F82E04E49A4FC0FDD54F4; // Offset: 0x90 // Size: 0x10
	IntProperty SortKeyJP_27_276D80003AE6692C369ECA2A081F8E40; // Offset: 0xa0 // Size: 0x04
	IntProperty SortKeyKR_28_567460C05940793D369EF038081F8FB2; // Offset: 0xa4 // Size: 0x04
	bool IsContainingSign_29_4B537B000BD895EA3459001502F0590E; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x3]; // Offset: 0xa9 // Size: 0x03
	IntProperty OpenTimestamp_30_3CD156C01C22BF6B71400E1D0E7114E0; // Offset: 0xac // Size: 0x04
};

