#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C
// Size: 0x8d8 // Inherited bytes: 0x8a8
struct ABP_BattleRoyaleHUD_C : ASurviveHUD {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x8a8 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x8b0 // Size: 0x08
	struct TArray<IntProperty> DamageNumberDamageTypes; // Offset: 0x8b8 // Size: 0x10
	struct TArray<enum class EWeaponTypeNew> InvalidDamageNumberWeaponTypes; // Offset: 0x8c8 // Size: 0x10

	// Functions

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.IsValidDamageNumber
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool IsValidDamageNumber(struct AActor* DamageCauser, IntProperty DamageTypeId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.GetPlayerNameColorByTeamID
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FLinearColor GetPlayerNameColorByTeamID(IntProperty TeamID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.GetColorByTeamID
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FLinearColor GetColorByTeamID(IntProperty TeamID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.HitFeedBackChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void HitFeedBackChanged(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.OBSHitFeedbackChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OBSHitFeedbackChanged(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ExecuteUbergraph_BP_BattleRoyaleHUD
	// Flags: [None]
	void ExecuteUbergraph_BP_BattleRoyaleHUD(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

