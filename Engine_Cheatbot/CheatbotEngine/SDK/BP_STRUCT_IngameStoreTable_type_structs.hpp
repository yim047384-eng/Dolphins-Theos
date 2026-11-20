#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_IngameStoreTable_type.BP_STRUCT_IngameStoreTable_type
// Size: 0x28 // Inherited bytes: 0x00
struct FBP_STRUCT_IngameStoreTable_type {
	// Fields
	IntProperty bDisableWhenNotInBlueCircle_1_522951806D147D8840F703520641C995; // Offset: 0x00 // Size: 0x04
	IntProperty BuyFrequence_3_378AEA80445C022668C28EB60106D8F5; // Offset: 0x04 // Size: 0x04
	IntProperty BuySuccessType_4_3D1BA1C06A5A7A7341ED4E0301E3F475; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty DataTableName_5_5CE8EFC032AF8DE70CDE2A5104BA3495; // Offset: 0x10 // Size: 0x10
	IntProperty StoreID_7_1329FD807F0518344936F83C0BCC9714; // Offset: 0x20 // Size: 0x04
	IntProperty NewGoodNotifyTimes_11_5A84E2806CEA702812506115060094F3; // Offset: 0x24 // Size: 0x04
};

