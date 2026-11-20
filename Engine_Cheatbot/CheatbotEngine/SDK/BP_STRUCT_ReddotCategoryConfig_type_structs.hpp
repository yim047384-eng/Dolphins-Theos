#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_ReddotCategoryConfig_type.BP_STRUCT_ReddotCategoryConfig_type
// Size: 0x80 // Inherited bytes: 0x00
struct FBP_STRUCT_ReddotCategoryConfig_type {
	// Fields
	IntProperty ID_0_4C8BA6403419DB9F748D9B5808287634; // Offset: 0x00 // Size: 0x04
	IntProperty InQueueLevel_1_44CE90005C383BE8671DC3D70DC96F0C; // Offset: 0x04 // Size: 0x04
	IntProperty OutQueueLevel_2_0FC3B04025B5B1E50FA495CF03E9C00C; // Offset: 0x08 // Size: 0x04
	IntProperty SubID_3_748F90C0419C7AFD433D84A507743454; // Offset: 0x0c // Size: 0x04
	IntProperty SystemID_4_446DE7805572693A20E9AAA00882D684; // Offset: 0x10 // Size: 0x04
	IntProperty Weight_5_68CF3D001CE210B0618D61EC0733D584; // Offset: 0x14 // Size: 0x04
	bool IsInMessageCenter_6_447E094038DF26314190299A0D3033A2; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty Style1_29_258953806D4DAB764807E2630743EAF1; // Offset: 0x1c // Size: 0x04
	IntProperty Style2_33_258A53C06D4DAB774807E2620743EAF2; // Offset: 0x20 // Size: 0x04
	IntProperty Style3_28_258B54006D4DAB784807E2610743EAF3; // Offset: 0x24 // Size: 0x04
	IntProperty Style4_31_258C54406D4DAB794807E2600743EAF4; // Offset: 0x28 // Size: 0x04
	IntProperty StyleInner_32_7F9C66401B6FAB4B31CAA92C0AE91722; // Offset: 0x2c // Size: 0x04
	IntProperty Category_13_54AA728026C4F47E0AE57AFA0083B0E9; // Offset: 0x30 // Size: 0x04
	IntProperty Style5OrInner_30_2A7EE3C0712F4F5D2DCBF8C60252FB32; // Offset: 0x34 // Size: 0x04
	IntProperty ValidHoursFromGen_18_636BCEC01742F9C13B4D499A0231D4BE; // Offset: 0x38 // Size: 0x04
	IntProperty ValidHoursFromSeen_19_350A2B007FDA5BE2238C7CF9031E0B9E; // Offset: 0x3c // Size: 0x04
	IntProperty ValidLevel_20_0ECD1D005B666450312BD31B0805FCBC; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty ValidUser_21_247846C05B6279095501CC4F007EBAC2; // Offset: 0x48 // Size: 0x10
	IntProperty StyleOrientation1_34_1E1596804F29876A39832879059644E1; // Offset: 0x58 // Size: 0x04
	IntProperty SpecialReddotConfig_35_11B8614056695FF320C63C7A0E08FF87; // Offset: 0x5c // Size: 0x04
	StrProperty SpecialRedEndTime_36_2796A3802FB9B9466EE0EB2A045CCEA5; // Offset: 0x60 // Size: 0x10
	StrProperty SpecialRedStartTime_37_22DBE1402EDD833530893AD20DFB2E85; // Offset: 0x70 // Size: 0x10
};

