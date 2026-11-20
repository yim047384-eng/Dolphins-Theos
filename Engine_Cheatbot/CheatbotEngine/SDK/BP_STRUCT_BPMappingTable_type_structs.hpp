#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BPMappingTable_type.BP_STRUCT_BPMappingTable_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_BPMappingTable_type {
	// Fields
	StrProperty BPMapping_0_359D8E805EAA95B608F926810D8E6097; // Offset: 0x00 // Size: 0x10
	IntProperty ItemID_2_53343E0047BD3A720C3CF0DE04726144; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty DependPath_3_269ACE405F922C993E0095690CDABC28; // Offset: 0x18 // Size: 0x10
	StrProperty ActorMapping_4_57DC08407CB974393F1F63C300853947; // Offset: 0x28 // Size: 0x10
};

