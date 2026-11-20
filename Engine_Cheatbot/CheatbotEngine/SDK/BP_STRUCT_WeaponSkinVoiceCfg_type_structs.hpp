#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponSkinVoiceCfg_type.BP_STRUCT_WeaponSkinVoiceCfg_type
// Size: 0xd8 // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponSkinVoiceCfg_type {
	// Fields
	StrProperty BankName_0_023386005FCFA57216056BA00C7B05C5; // Offset: 0x00 // Size: 0x10
	StrProperty EquipWeaponVoice_3_291EDFC0097C063D6CD3E64F01235295; // Offset: 0x10 // Size: 0x10
	IntProperty EquipWeaponVoiceVisibleRange_4_1D3D0E80178C7C345902C050095BC9F5; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty GrenadeExplosionVoice_5_541D42001C15408400B3349C04BFA615; // Offset: 0x28 // Size: 0x10
	IntProperty GrenadeExplosionVoiceVisibleRange_6_12BDF0C02DFB38B7172299470C275D75; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty HeadShotVoice_7_6EBA684071A013F3411331BA0FE99275; // Offset: 0x40 // Size: 0x10
	IntProperty HeadShotVoiceVisibleRange_8_144597000A4CEFD6635E1EB007918AD5; // Offset: 0x50 // Size: 0x04
	IntProperty ItemID_9_50BF0DC01867CC17563AB6C804769494; // Offset: 0x54 // Size: 0x04
	StrProperty MagazineInVoice_10_19A07D0039573EFE158869A102D99FB5; // Offset: 0x58 // Size: 0x10
	IntProperty MagazineInVoiceVisibleRange_11_169F2BC037BBD6F15DC8ED6D0A818495; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	StrProperty MagazineOutVoice_12_7D76DD400533E2B92B469ABC02D15C15; // Offset: 0x70 // Size: 0x10
	StrProperty ShootVoice_14_1E5167801E0310583801CC4E03DFBCE5; // Offset: 0x80 // Size: 0x10
	IntProperty ShootVoiceVisibleRange_15_36F11640569A633F703278290B8767A5; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	StrProperty UnequipWeaponVoice_16_432AB8806D9A5BC054B2A5E508BA19E5; // Offset: 0x98 // Size: 0x10
	StrProperty KillBroadcastVoice_19_363F4C0033DB787C059FBF7807B0D3C5; // Offset: 0xa8 // Size: 0x10
	StrProperty ShootVoice2_21_7D47B40032626A4A1638314B0DFBCEB2; // Offset: 0xb8 // Size: 0x10
	struct TArray<IntProperty> UnlockVoice_a_22_0A242F4033A1A0634EF463F802CD9571; // Offset: 0xc8 // Size: 0x10
};

