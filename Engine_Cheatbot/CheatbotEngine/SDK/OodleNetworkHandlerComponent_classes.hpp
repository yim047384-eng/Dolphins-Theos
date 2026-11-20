#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0x98 // Inherited bytes: 0x80
struct UOodleNetworkTrainerCommandlet : UCommandlet {
	// Fields
	bool bCompressionTest; // Offset: 0x79 // Size: 0x01
	bool bWriteV5Dictionaries; // Offset: 0x7a // Size: 0x01
	IntProperty HashTableSize; // Offset: 0x7c // Size: 0x04
	IntProperty DictionarySize; // Offset: 0x80 // Size: 0x04
	IntProperty DictionaryTrials; // Offset: 0x84 // Size: 0x04
	IntProperty TrialRandomness; // Offset: 0x88 // Size: 0x04
	IntProperty TrialGenerations; // Offset: 0x8c // Size: 0x04
	bool bNoTrials; // Offset: 0x90 // Size: 0x01
	char pad_0x97[0x1]; // Offset: 0x97 // Size: 0x01
};

