#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_DesignatedStoreItemForest_type.BP_STRUCT_DesignatedStoreItemForest_type
// Size: 0xa4 // Inherited bytes: 0x00
struct FBP_STRUCT_DesignatedStoreItemForest_type {
	// Fields
	bool AddToStore_27_6667FD8047A4E8B4436F2F6F0598A015; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty BattleLimitCount_1_746FE0407775D4A77DF12993057688C4; // Offset: 0x04 // Size: 0x04
	IntProperty ConditionLimit_2_081F90C02CCACF5733682BD600773C34; // Offset: 0x08 // Size: 0x04
	IntProperty Desc_3_6306070005C05B1C674396EA0ED2E093; // Offset: 0x0c // Size: 0x04
	IntProperty DropConfigID_4_347F254050C12C1711D21CEC08B99184; // Offset: 0x10 // Size: 0x04
	IntProperty DropItemID1_5_26A1BFC055B584012C28FFF00D854BC1; // Offset: 0x14 // Size: 0x04
	IntProperty DropItemID2_6_26A2C00055B584022C28FFF10D854BC2; // Offset: 0x18 // Size: 0x04
	IntProperty DropItemID3_7_26A3C04055B584032C28FFFE0D854BC3; // Offset: 0x1c // Size: 0x04
	IntProperty DropItemID4_8_26A4C08055B584042C28FFFF0D854BC4; // Offset: 0x20 // Size: 0x04
	IntProperty DropItemID5_9_26A5C0C055B584052C28FFFC0D854BC5; // Offset: 0x24 // Size: 0x04
	IntProperty DropItemID6_10_26A6C10055B584062C28FFFD0D854BC6; // Offset: 0x28 // Size: 0x04
	IntProperty GoldType_11_676F714041B2EF712EC0A6EF0A2772C5; // Offset: 0x2c // Size: 0x04
	IntProperty GoodBuyType_12_32537E006B1809C60D1F017104E42505; // Offset: 0x30 // Size: 0x04
	IntProperty GoodID_13_78EF6CC03AC2FA2920D248ED02AA5604; // Offset: 0x34 // Size: 0x04
	StrProperty IconPath_14_1C38CCC04874EA730812A2BF066DBA18; // Offset: 0x38 // Size: 0x10
	IntProperty ItemCountPerBuy_15_55DF830033C94F3A742E700D059909F9; // Offset: 0x48 // Size: 0x04
	IntProperty ItemID_16_650B2E403A767F291BEB41530346CF04; // Offset: 0x4c // Size: 0x04
	IntProperty ItemOrder_17_08B34A004314EE1E690A27490D0BBEA2; // Offset: 0x50 // Size: 0x04
	IntProperty ItemType_18_5D76D3805809F17C066FE30D06CC7325; // Offset: 0x54 // Size: 0x04
	IntProperty Name_19_1CE6078002254C02677A6A010ED30C35; // Offset: 0x58 // Size: 0x04
	bool NewGood_20_603B34005F6F666817020DFF000B4964; // Offset: 0x5c // Size: 0x01
	bool NewVersionPatch_21_6938E7407336C2CB72E013780A172098; // Offset: 0x5d // Size: 0x01
	char pad_0x5E[0x2]; // Offset: 0x5e // Size: 0x02
	IntProperty PlayerLimitCount_22_6CEC248023322192606CB40A01A07A94; // Offset: 0x60 // Size: 0x04
	IntProperty Price_23_0B3A44000F8990B4411069CC0D334F75; // Offset: 0x64 // Size: 0x04
	IntProperty StoreLimitCount_24_3983EC800B856D6C02E0B14D06ED7A04; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty StoreRandomSetting_25_60D71A404CA700736E33E39B02687C17; // Offset: 0x70 // Size: 0x10
	IntProperty TimeLimit_26_17CE0AC03265576F089228C1038FDE44; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct TArray<IntProperty> TimeID_a_28_34CEDE402ED9197F0F112C1B04370BB1; // Offset: 0x88 // Size: 0x10
	IntProperty RotatingDiscount_29_212B2B802549CB3A40F4ECC506E5FB44; // Offset: 0x98 // Size: 0x04
	IntProperty UpdateDescID_30_1DCD430062ADF46E45B748D70A2631A4; // Offset: 0x9c // Size: 0x04
	IntProperty SubTypeID_31_3D873D8073B7DDB225690690076D57A4; // Offset: 0xa0 // Size: 0x04
};

