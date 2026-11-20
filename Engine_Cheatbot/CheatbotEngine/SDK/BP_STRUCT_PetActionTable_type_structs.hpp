#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_PetActionTable_type.BP_STRUCT_PetActionTable_type
// Size: 0xd8 // Inherited bytes: 0x00
struct FBP_STRUCT_PetActionTable_type {
	// Fields
	IntProperty PetID_7_6745CEC017101D417C9B58B90A755B44; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PetAnimRes_8_1054B74062846F873F7F61870FE97D73; // Offset: 0x08 // Size: 0x10
	StrProperty PetActionName_9_59EBE3401D89CA4B649608870B1AA8E5; // Offset: 0x18 // Size: 0x10
	IntProperty PetActionID_10_44C4A640765EB8DD578572F800DB1934; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty PetActionIcon_11_0E01054077EEE9A96496CC090B191A8E; // Offset: 0x30 // Size: 0x10
	IntProperty PetActionScale_13_14B83D0078112AE64FD26A6101879B95; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty PetActionOffset_14_563A3CC0122E069573D974410ABC02D4; // Offset: 0x48 // Size: 0x10
	IntProperty SortKey_15_4284558068BCA7003662F2D30BFA2BB9; // Offset: 0x58 // Size: 0x04
	IntProperty ShowInLobby_17_19FCF54003CF4A8B499026D50669DDB9; // Offset: 0x5c // Size: 0x04
	IntProperty PetLevelSequence_18_620F97C0416DE81971E437D407E050C5; // Offset: 0x60 // Size: 0x04
	IntProperty MasterLevelSequence_19_7E9F6880389AC7D05D27B6F50E5E3325; // Offset: 0x64 // Size: 0x04
	IntProperty MasterActionID_20_41F257005172E64A6B5508ED0B3D43A4; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty PetActionDes_21_4DEDCA007AFFDB12510AFD0F0DB194C3; // Offset: 0x70 // Size: 0x10
	IntProperty PetActionQuality_22_0B0B3D40109F72EB3D20AE6206BBA139; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	StrProperty LobbyPetAnimRes_23_14DFB5407421995D3FD421710D4C3683; // Offset: 0x88 // Size: 0x10
	IntProperty NeedResetTransform_24_2D3D5000702BED64355585DF0DB7ED2D; // Offset: 0x98 // Size: 0x04
	IntProperty IsShowInWorkshop_25_6C8D7D80144A232A340D11C70E5E4DE0; // Offset: 0x9c // Size: 0x04
	IntProperty ActionPattern_26_451A10400F2D985D0AA3122602B22CDE; // Offset: 0xa0 // Size: 0x04
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	StrProperty SubActions_27_2602A0000DDFB1263FBCEEF30E0D7803; // Offset: 0xa8 // Size: 0x10
	IntProperty RandomWeightInGame_28_66BB7FC06216921979CA00630DA660C5; // Offset: 0xb8 // Size: 0x04
	IntProperty RandomWeightInLobby_29_6D551F405571C1C9277D41740A7BD749; // Offset: 0xbc // Size: 0x04
	IntProperty CanPlayInBattle_30_50D0700025F57A9A73FE1C2103805E35; // Offset: 0xc0 // Size: 0x04
	IntProperty MasterSkillID_31_1F057F401C516F2B3752587D0A0726D4; // Offset: 0xc4 // Size: 0x04
	StrProperty DependingClothesID_32_74453C80189CCB6A4CAC5CB70ADF2C04; // Offset: 0xc8 // Size: 0x10
};

