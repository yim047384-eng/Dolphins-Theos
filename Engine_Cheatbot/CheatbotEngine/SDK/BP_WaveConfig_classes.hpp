#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_WaveConfig.BP_WaveConfig_C
// Size: 0x248 // Inherited bytes: 0x238
struct UBP_WaveConfig_C : ULuaActorComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x238 // Size: 0x08
	struct FName WaveLevelName; // Offset: 0x240 // Size: 0x08

	// Functions

	// Object Name: Function BP_WaveConfig.BP_WaveConfig_C.IsOpenWave
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsOpenWave(bool& bOpen); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_WaveConfig.BP_WaveConfig_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_WaveConfig.BP_WaveConfig_C.OnRenderQualitySettingsChanged_Event
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnRenderQualitySettingsChanged_Event(struct FRenderQualitySettings RenderQualitySettings); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_WaveConfig.BP_WaveConfig_C.ExecuteUbergraph_BP_WaveConfig
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_WaveConfig(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

