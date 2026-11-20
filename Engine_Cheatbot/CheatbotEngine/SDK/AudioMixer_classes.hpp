#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, IntProperty EntryIndex, bool bBypassed); // Offset: 0x1060fcb0c // Return & Params: Num(4) Size(0x15)

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, IntProperty EntryIndex); // Offset: 0x1060fca24 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Offset: 0x1060fc978 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Offset: 0x1060fc8c4 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Offset: 0x1060fc850 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry entry); // Offset: 0x1060fc76c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Offset: 0x1060fc6c0 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0xd0 // Inherited bytes: 0x40
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	// Fields
	char pad_0x40[0x68]; // Offset: 0x40 // Size: 0x68
	struct FSubmixEffectDynamicsProcessorSettings Settings; // Offset: 0xa8 // Size: 0x28

	// Functions

	// Object Name: Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& InSettings); // Offset: 0x1060fd12c // Return & Params: Num(1) Size(0x28)
};

// Object Name: Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xa0 // Inherited bytes: 0x40
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	// Fields
	char pad_0x40[0x50]; // Offset: 0x40 // Size: 0x50
	struct FSubmixEffectSubmixEQSettings Settings; // Offset: 0x90 // Size: 0x10

	// Functions

	// Object Name: Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Offset: 0x1060fd4d4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xe0 // Inherited bytes: 0x40
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	// Fields
	char pad_0x40[0x70]; // Offset: 0x40 // Size: 0x70
	struct FSubmixEffectReverbSettings Settings; // Offset: 0xb0 // Size: 0x30

	// Functions

	// Object Name: Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel); // Offset: 0x1060fd85c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Offset: 0x1060fd7a0 // Return & Params: Num(1) Size(0x30)
};

// Object Name: Class AudioMixer.SynthSound
// Size: 0x2f0 // Inherited bytes: 0x2d0
struct USynthSound : USoundWaveProcedural {
	// Fields
	char pad_0x2D0[0x20]; // Offset: 0x2d0 // Size: 0x20
};

// Object Name: Class AudioMixer.SynthComponent
// Size: 0x6d0 // Inherited bytes: 0x3a0
struct USynthComponent : USceneComponent {
	// Fields
	char bAutoDestroy : 1; // Offset: 0x399 // Size: 0x01
	char bStopWhenOwnerDestroyed : 1; // Offset: 0x399 // Size: 0x01
	char bAllowSpatialization : 1; // Offset: 0x399 // Size: 0x01
	char bOverrideAttenuation : 1; // Offset: 0x399 // Size: 0x01
	struct USoundAttenuation* AttenuationSettings; // Offset: 0x3a0 // Size: 0x08
	struct FSoundAttenuationSettings AttenuationOverrides; // Offset: 0x3a8 // Size: 0x2b8
	struct USoundConcurrency* ConcurrencySettings; // Offset: 0x660 // Size: 0x08
	struct USoundClass* SoundClass; // Offset: 0x668 // Size: 0x08
	struct USoundEffectSourcePresetChain* SourceEffectChain; // Offset: 0x670 // Size: 0x08
	struct USoundSubmix* SoundSubmix; // Offset: 0x678 // Size: 0x08
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // Offset: 0x680 // Size: 0x10
	char bIsUISound : 1; // Offset: 0x690 // Size: 0x01
	char pad_0x690_5 : 3; // Offset: 0x690 // Size: 0x01
	char pad_0x691[0x7]; // Offset: 0x691 // Size: 0x07
	struct USynthSound* Synth; // Offset: 0x698 // Size: 0x08
	struct UAudioComponent* AudioComponent; // Offset: 0x6a0 // Size: 0x08
	char pad_0x6A8[0x28]; // Offset: 0x6a8 // Size: 0x28

	// Functions

	// Object Name: Function AudioMixer.SynthComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x1060fdcbc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AudioMixer.SynthComponent.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Start(); // Offset: 0x1060fdca8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AudioMixer.SynthComponent.SetSubmixSend
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSubmixSend(struct USoundSubmix* Submix, float SendLevel); // Offset: 0x1060fdbf0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AudioMixer.SynthComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlaying(); // Offset: 0x1060fdbbc // Return & Params: Num(1) Size(0x1)
};

