#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FSubmixEffectDynamicsProcessorSettings {
	// Fields
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // Offset: 0x00 // Size: 0x01
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float LookAheadMsec; // Offset: 0x04 // Size: 0x04
	float AttackTimeMsec; // Offset: 0x08 // Size: 0x04
	float ReleaseTimeMsec; // Offset: 0x0c // Size: 0x04
	float ThresholdDb; // Offset: 0x10 // Size: 0x04
	float Ratio; // Offset: 0x14 // Size: 0x04
	float KneeBandwidthDb; // Offset: 0x18 // Size: 0x04
	float InputGainDb; // Offset: 0x1c // Size: 0x04
	float OutputGainDb; // Offset: 0x20 // Size: 0x04
	char bChannelLinked : 1; // Offset: 0x24 // Size: 0x01
	char bAnalogMode : 1; // Offset: 0x24 // Size: 0x01
	char pad_0x24_2 : 6; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10 // Inherited bytes: 0x00
struct FSubmixEffectSubmixEQSettings {
	// Fields
	struct TArray<struct FSubmixEffectEQBand> EQBands; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10 // Inherited bytes: 0x00
struct FSubmixEffectEQBand {
	// Fields
	float Frequency; // Offset: 0x00 // Size: 0x04
	float Bandwidth; // Offset: 0x04 // Size: 0x04
	float GainDb; // Offset: 0x08 // Size: 0x04
	char bEnabled : 1; // Offset: 0x0c // Size: 0x01
	char pad_0xC_1 : 7; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x30 // Inherited bytes: 0x00
struct FSubmixEffectReverbSettings {
	// Fields
	float Density; // Offset: 0x00 // Size: 0x04
	float Diffusion; // Offset: 0x04 // Size: 0x04
	float Gain; // Offset: 0x08 // Size: 0x04
	float GainHF; // Offset: 0x0c // Size: 0x04
	float DecayTime; // Offset: 0x10 // Size: 0x04
	float DecayHFRatio; // Offset: 0x14 // Size: 0x04
	float ReflectionsGain; // Offset: 0x18 // Size: 0x04
	float ReflectionsDelay; // Offset: 0x1c // Size: 0x04
	float LateGain; // Offset: 0x20 // Size: 0x04
	float LateDelay; // Offset: 0x24 // Size: 0x04
	float AirAbsorptionGainHF; // Offset: 0x28 // Size: 0x04
	float WetLevel; // Offset: 0x2c // Size: 0x04
};

