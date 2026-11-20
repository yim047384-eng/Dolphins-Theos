#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_DesignatedStoreItem_type.BP_STRUCT_DesignatedStoreItem_type
// Size: 0xa4 // Inherited bytes: 0x00
struct FBP_STRUCT_DesignatedStoreItem_type {
	// Fields
	bool AddToStore_28_45BAC0C0555A2D5150BDD333092E7295; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty BattleLimitCount_1_6DE0E38070097872562FEDD509C87244; // Offset: 0x04 // Size: 0x04
	IntProperty ConditionLimit_2_259BD400151EA4144948C39E0AFBAED4; // Offset: 0x08 // Size: 0x04
	IntProperty Desc_3_557A8A4048362FC77DABD15602641213; // Offset: 0x0c // Size: 0x04
	IntProperty DropConfigID_4_0946A8802B86A7F2487FE448024B1CD4; // Offset: 0x10 // Size: 0x04
	IntProperty DropItemID1_5_2246E300599A28B4078FB51306EC6301; // Offset: 0x14 // Size: 0x04
	IntProperty DropItemID2_6_2247E340599A28B5078FB51406EC6302; // Offset: 0x18 // Size: 0x04
	IntProperty DropItemID3_7_2248E380599A28B6078FB51506EC6303; // Offset: 0x1c // Size: 0x04
	IntProperty DropItemID4_8_2249E3C0599A28B7078FB51606EC6304; // Offset: 0x20 // Size: 0x04
	IntProperty DropItemID5_9_224AE400599A28B8078FB51706EC6305; // Offset: 0x24 // Size: 0x04
	IntProperty DropItemID6_10_224BE440599A28B9078FB56806EC6306; // Offset: 0x28 // Size: 0x04
	IntProperty GoldType_11_648D748076ABED8C334A32870CABE415; // Offset: 0x2c // Size: 0x04
	IntProperty GoodID_12_6718B00036DE1306695DD840047CDAB4; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	StrProperty IconPath_13_1956D0004A57CB9E4898E77308E10CE8; // Offset: 0x38 // Size: 0x10
	IntProperty ItemCountPerBuy_14_12EE26406F5B05FD24932E8D0D2C58D9; // Offset: 0x48 // Size: 0x04
	IntProperty ItemID_26_53347180395912A674A86CEF05B443B4; // Offset: 0x4c // Size: 0x04
	IntProperty ItemOrder_16_7083AD406622E4C350CE4C5C0440D182; // Offset: 0x50 // Size: 0x04
	IntProperty ItemType_17_5A94D6C0337967E743F789270440E5D5; // Offset: 0x54 // Size: 0x04
	IntProperty Name_18_0F5A8AC0575CFBED7D832FCA0265FAB5; // Offset: 0x58 // Size: 0x04
	bool NewGood_19_6776D740111E394B6D62ED8B0F240404; // Offset: 0x5c // Size: 0x01
	bool NewVersionPatch_20_26478A8026222EDE4DAD981D02DC4C78; // Offset: 0x5d // Size: 0x01
	char pad_0x5E[0x2]; // Offset: 0x5e // Size: 0x02
	IntProperty PlayerLimitCount_21_665D27C0675A5A1D2F8026900D2EB014; // Offset: 0x60 // Size: 0x04
	IntProperty Price_22_252127404ABA1BB9324F866C065C67B5; // Offset: 0x64 // Size: 0x04
	IntProperty StoreLimitCount_23_76928FC049EAF13F01E090730E3A1524; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty StoreRandomSetting_24_097CDD806194A430556B338804BAD0A7; // Offset: 0x70 // Size: 0x10
	IntProperty TimeLimit_25_7F9E6E00338860743D75A5ED0BC4B324; // Offset: 0x80 // Size: 0x04
	IntProperty GoodBuyType_27_2DF8A14030242DE91D1B08B70F898DC5; // Offset: 0x84 // Size: 0x04
	IntProperty RotatingDiscount_29_1A9C2EC0354F70C51F8F32420A5369C4; // Offset: 0x88 // Size: 0x04
	IntProperty UpdateDescID_30_7294C64074FA60B91E852D1B0CD4BD14; // Offset: 0x8c // Size: 0x04
	struct TArray<IntProperty> TimeID_a_31_31ECE18070B25C5A300B366202BBBD41; // Offset: 0x90 // Size: 0x10
	IntProperty SubTypeID_32_2557A0C0489246F74B39BD480FA63884; // Offset: 0xa0 // Size: 0x04
};

