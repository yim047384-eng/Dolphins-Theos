#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_ConsumableBPTable_type.BP_STRUCT_ConsumableBPTable_type
// Size: 0x48 // Inherited bytes: 0x00
struct FBP_STRUCT_ConsumableBPTable_type {
	// Fields
	StrProperty CName_0_3A46A7E346B57C4E5F45619DF5906006; // Offset: 0x00 // Size: 0x10
	StrProperty Path_1_81463AA644426E53AF3240A311C1D4E0; // Offset: 0x10 // Size: 0x10
	IntProperty ID_2_AD337FD040A1235FE67F55BBA677262B; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty Wrapper_3_66935E806EA99C4E6B9844A505FF3052; // Offset: 0x28 // Size: 0x10
	StrProperty LobbyPath_4_60DFC780056E426A3B985A350FD8F288; // Offset: 0x38 // Size: 0x10
};

