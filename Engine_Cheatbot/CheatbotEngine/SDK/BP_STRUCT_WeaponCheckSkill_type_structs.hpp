#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponCheckSkill_type.BP_STRUCT_WeaponCheckSkill_type
// Size: 0x4c // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponCheckSkill_type {
	// Fields
	float LevelSequenceDuration_f_0_28DFE640752A3F2D0B6C7AB004C3F506; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty LevelSequencePath_1_295B06C028EEF951227E52F30C6E6378; // Offset: 0x08 // Size: 0x10
	StrProperty SequenceActorPath_2_06E96700791B0B5A200A16490A6D7B68; // Offset: 0x18 // Size: 0x10
	StrProperty TrackBindingInfoKeys_6_4D476D4049E072C377736F6A0CF03C13; // Offset: 0x28 // Size: 0x10
	StrProperty TrackBindingInfoValues_7_464D424003F0A10D01AA78E908E12723; // Offset: 0x38 // Size: 0x10
	IntProperty WeaponBPID_8_6BC719801F0DE3BA77D1EE2B0CD60B94; // Offset: 0x48 // Size: 0x04
};

