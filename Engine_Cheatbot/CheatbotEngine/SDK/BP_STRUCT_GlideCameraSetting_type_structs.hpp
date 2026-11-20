#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_GlideCameraSetting_type.BP_STRUCT_GlideCameraSetting_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_GlideCameraSetting_type {
	// Fields
	IntProperty ArmLength_0_4C0BC9006574368670F7590B07088F68; // Offset: 0x00 // Size: 0x04
	IntProperty CameraZLoc_2_5772B8C04B5D141B7A82CEED0E4AF813; // Offset: 0x04 // Size: 0x04
	IntProperty LobbyArmLength_3_7887A70051D863A8005812FD08D15BF8; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty CameraRotation_4_72E0AEC005F470A3628544CB03E6E6CE; // Offset: 0x10 // Size: 0x10
	IntProperty TypeID_5_56C5D4405C49BCD70F71B9990D331B14; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty CameraLocationOffset_6_3C0622C021A9D77341BC5401038A3FB4; // Offset: 0x28 // Size: 0x10
};

