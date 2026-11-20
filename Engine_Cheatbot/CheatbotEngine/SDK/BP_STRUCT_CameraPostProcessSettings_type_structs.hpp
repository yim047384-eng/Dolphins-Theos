#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_CameraPostProcessSettings_type.BP_STRUCT_CameraPostProcessSettings_type
// Size: 0x120 // Inherited bytes: 0x00
struct FBP_STRUCT_CameraPostProcessSettings_type {
	// Fields
	IntProperty ID_9_6DDED0804ABABB7E21825CAE0BFB83A4; // Offset: 0x00 // Size: 0x04
	IntProperty Method_19_7777E5806E9E62D27DA90767044756D4; // Offset: 0x04 // Size: 0x04
	bool HighQualityGaussianDoFOnMobile_8_767B59C049AE0B4B17E35358027731A5; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	StrProperty ApertureFstop_0_3C9D42407298D18B4EC4D6B2074E8A90; // Offset: 0x10 // Size: 0x10
	StrProperty FocalDistance_6_1FF851400B99AE5F6695D1370C4CBC35; // Offset: 0x20 // Size: 0x10
	StrProperty DepthBlurkmfor50_2_42A970C02AC0115B3D32FC2901718E90; // Offset: 0x30 // Size: 0x10
	StrProperty DepthBlurRadius_3_33EB49C0524E798F3CEE7CE20F937E73; // Offset: 0x40 // Size: 0x10
	StrProperty FocalRegion_7_782F7F8054963A12397464B409B73A8E; // Offset: 0x50 // Size: 0x10
	StrProperty NearTransitionRegion_12_1B2B52803A553DC02302A3AD06774C4E; // Offset: 0x60 // Size: 0x10
	StrProperty FarTransitionRegion_5_528FD7405048D389193787430D33704E; // Offset: 0x70 // Size: 0x10
	StrProperty Scale_14_0CAF0740551A369F06C987A3082E2995; // Offset: 0x80 // Size: 0x10
	StrProperty MaxBokehSize_10_2B8677C059F3F4C101764A6805FEB5E5; // Offset: 0x90 // Size: 0x10
	StrProperty NearBlurSize_11_43B99AC01DFD3E1B69D786E507F7FE15; // Offset: 0xa0 // Size: 0x10
	StrProperty FarBlurSize_4_51911F8012AC9A8A40FAFE4C0BFCBA45; // Offset: 0xb0 // Size: 0x10
	StrProperty Shape_15_26F1A9800A01877806E6CE8C082E57D5; // Offset: 0xc0 // Size: 0x10
	StrProperty Occlusion_13_54D7390038BB10D2131FD7620784DE7E; // Offset: 0xd0 // Size: 0x10
	StrProperty ColorThreshold_1_21AC78403E9774ED643A78EC07242D24; // Offset: 0xe0 // Size: 0x10
	StrProperty SizeThreshold_16_1B4ADF4029CA57D70523D5C7070708F4; // Offset: 0xf0 // Size: 0x10
	StrProperty SkyDistance_17_00C0C5C07A9D118B796380C10885F6B5; // Offset: 0x100 // Size: 0x10
	StrProperty VignetteSize_18_60EC6580565041B043CE534A091EC045; // Offset: 0x110 // Size: 0x10
};

