#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BetterVehicleEffect_type.BP_STRUCT_BetterVehicleEffect_type
// Size: 0x1d8 // Inherited bytes: 0x00
struct FBP_STRUCT_BetterVehicleEffect_type {
	// Fields
	IntProperty BornFall_0_699F66401857D3717272C3F90C031E0C; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty EnterTeamVideo_1_439821406CC04453172EAC6100F15A2F; // Offset: 0x08 // Size: 0x10
	IntProperty ID_2_6258A58050DEEC1C34CC36960D71DA44; // Offset: 0x18 // Size: 0x04
	IntProperty Parachute_3_58CF69800AF0CE4447FE852D0F6443F5; // Offset: 0x1c // Size: 0x04
	IntProperty VehicleMusic_4_0E3A12801F42C31E41988F0109D257A3; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty ParachuteVehicle_5_266D99802E2F69A84C03D52C0AFAC775; // Offset: 0x28 // Size: 0x10
	StrProperty VehicleContainer_6_0FC11B00763F5CF0333D88620BFE3412; // Offset: 0x38 // Size: 0x10
	StrProperty VehicleInBornIsland_7_536A1B00296E6F2C6F6CE5DA0FA35564; // Offset: 0x48 // Size: 0x10
	StrProperty GiftPreview_14_558C5D4070F33535251D5E080A28E547; // Offset: 0x58 // Size: 0x10
	StrProperty GetQualityImage_16_035D5D4050366A773BD94FF4054AD0C5; // Offset: 0x68 // Size: 0x10
	StrProperty GetVehicleImage_17_062453006ABB76D04A9785020C4A7C45; // Offset: 0x78 // Size: 0x10
	StrProperty GetShareGiveVersion_18_142EC3404FFEDF7558828BCC004D11DE; // Offset: 0x88 // Size: 0x10
	StrProperty GiftPreviewShadow_19_1C8416C067541F557648D1C906B6A027; // Offset: 0x98 // Size: 0x10
	StrProperty GetQualityImage2_20_1034C9C00A93CC5131F91D5B04AD0CD2; // Offset: 0xa8 // Size: 0x10
	StrProperty VehicleInSocialIsland_21_2A6CAD80415C40A2077B867D0B8A25A4; // Offset: 0xb8 // Size: 0x10
	StrProperty ShareQualityImage_22_107532001D3220D2428BC2110CE56945; // Offset: 0xc8 // Size: 0x10
	StrProperty PropertyForParachute_23_5D8FAC8075FF989E5B7DDD4703989875; // Offset: 0xd8 // Size: 0x10
	StrProperty GetVehicleImage2_27_135CDF8017A892822F0104B004A7C442; // Offset: 0xe8 // Size: 0x10
	IntProperty MiniTVVehiclePhoto_28_7D9DC2802F47773069FB947102CE464F; // Offset: 0xf8 // Size: 0x04
	IntProperty LightParamID_29_706CFFC014B7173168C24F950D3AEF94; // Offset: 0xfc // Size: 0x04
	bool DontShowGiftBtn_30_4C275B4042CAB41D1187A9860F79DB8E; // Offset: 0x100 // Size: 0x01
	char pad_0x101[0x3]; // Offset: 0x101 // Size: 0x03
	IntProperty LocalizeID_31_794C92404B9DFE895B9FEB2F080CC134; // Offset: 0x104 // Size: 0x04
	StrProperty SprayPaint_32_6BC5C500441187985EBAEDED093D46A4; // Offset: 0x108 // Size: 0x10
	StrProperty GiftPreviewLight_34_460F9B407F00864D101C210F042073A4; // Offset: 0x118 // Size: 0x10
	IntProperty VehicleType_35_63A09AC03DAA668D062464CD059FE985; // Offset: 0x128 // Size: 0x04
	char pad_0x12C[0x4]; // Offset: 0x12c // Size: 0x04
	StrProperty GetVehicleImage3_36_135DDFC017A892832F0104B104A7C443; // Offset: 0x130 // Size: 0x10
	IntProperty UseBattleModel_37_3F3E00C018E206AD2DD763C0068B0BBC; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	StrProperty AnimationName_38_25832A801B4DFB3067FC63D001DC6335; // Offset: 0x148 // Size: 0x10
	IntProperty OldGetResource_39_7455A40056C10C6C78004B8B037ADAC5; // Offset: 0x158 // Size: 0x04
	char pad_0x15C[0x4]; // Offset: 0x15c // Size: 0x04
	struct TArray<float> ChassisLightLoc_af_40_6D8C44C0775A192F19BFAC2E03B493D6; // Offset: 0x160 // Size: 0x10
	struct TArray<float> ChassisLightScale_af_41_4E7377405EF83203535123FC08841666; // Offset: 0x170 // Size: 0x10
	bool IfHideOpenDoorBtn_42_4AA1FF007FF0F8402164D8230E267A6E; // Offset: 0x180 // Size: 0x01
	char pad_0x181[0x7]; // Offset: 0x181 // Size: 0x07
	StrProperty Time_43_1A6A6600069C24C6612CD4E101DB3345; // Offset: 0x188 // Size: 0x10
	bool IfHiddenCar_44_2F8886804E73689C152A7B07070E5062; // Offset: 0x198 // Size: 0x01
	char pad_0x199[0x3]; // Offset: 0x199 // Size: 0x03
	IntProperty ShowSortId_45_69629FC029E7F1E5689819AF0D5D9CE4; // Offset: 0x19c // Size: 0x04
	struct TArray<float> ChassisLightLocInBattle_af_46_36A1C98065A05CD427EA43F40FE83E46; // Offset: 0x1a0 // Size: 0x10
	IntProperty UseSpecialCarScene_47_58E6DEC07B07A5390A03587608B22165; // Offset: 0x1b0 // Size: 0x04
	IntProperty CabrioletDelayTime_48_573B8700212FA7340F84628F02A8CC35; // Offset: 0x1b4 // Size: 0x04
	StrProperty GetVehicleImage4_49_135EE00017A892842F0104B604A7C444; // Offset: 0x1b8 // Size: 0x10
	StrProperty GetVehicleImage5_50_135FE04017A892852F0104B704A7C445; // Offset: 0x1c8 // Size: 0x10
};

