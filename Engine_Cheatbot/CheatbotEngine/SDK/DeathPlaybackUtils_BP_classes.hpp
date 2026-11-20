#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass DeathPlaybackUtils_BP.DeathPlaybackUtils_BP_C
// Size: 0x1b2 // Inherited bytes: 0x188
struct UDeathPlaybackUtils_BP_C : UDeathPlaybackUtils {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x188 // Size: 0x08
	struct TArray<IntProperty> InvalidDamageType; // Offset: 0x190 // Size: 0x10
	struct TArray<enum class EGameModeType> ValidGameModeType; // Offset: 0x1a0 // Size: 0x10
	bool EnableAIDeathPlay; // Offset: 0x1b0 // Size: 0x01
	bool EnableSuicideDeathPlay; // Offset: 0x1b1 // Size: 0x01

	// Functions

	// Object Name: Function DeathPlaybackUtils_BP.DeathPlaybackUtils_BP_C.BP_OverwriteDeathReplayData
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FDeathReplayData BP_OverwriteDeathReplayData(struct AController* EventInstigator, struct AActor* DamageCauser, struct ASTExtraBaseCharacter* DeadCharacter, IntProperty DamageTypeId); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x178)

	// Object Name: Function DeathPlaybackUtils_BP.DeathPlaybackUtils_BP_C.IsValidGameState
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool IsValidGameState(struct ASTExtraGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function DeathPlaybackUtils_BP.DeathPlaybackUtils_BP_C.IsValidDamageEvent
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool IsValidDamageEvent(struct FDamageEvent& DamageEvent, IntProperty DamageType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function DeathPlaybackUtils_BP.DeathPlaybackUtils_BP_C.ExecuteUbergraph_DeathPlaybackUtils_BP
	// Flags: [None]
	void ExecuteUbergraph_DeathPlaybackUtils_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

