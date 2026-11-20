#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass SurviveGameState.SurviveGameState_C
// Size: 0x1648 // Inherited bytes: 0x1620
struct ASurviveGameState_C : ASTExtraGameStateBase {
	// Fields
	struct UAirAttackComponent* AirAttack; // Offset: 0x1620 // Size: 0x08
	struct UReviveBattleUIComponent* ReviveBattleUI; // Offset: 0x1628 // Size: 0x08
	struct UGameLevelManagerComponent* GameLevelManager; // Offset: 0x1630 // Size: 0x08
	struct UAirAttackCS* AirAttackCS; // Offset: 0x1638 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x1640 // Size: 0x08

	// Functions

	// Object Name: Function SurviveGameState.SurviveGameState_C.RPC_UpdateAlivePlayerNum
	// Flags: [Net|NetReliableNetMulticast|Public]
	void RPC_UpdateAlivePlayerNum(IntProperty RPC_UpdateAlivePlayerNum_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SurviveGameState.SurviveGameState_C.MulticastRPC_CheckAndUpdateModeState
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MulticastRPC_CheckAndUpdateModeState(StrProperty StrProperty_1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SurviveGameState.SurviveGameState_C.MultiCast_GenericRPC
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MultiCast_GenericRPC(IntProperty MultiCast_GenericRPC_param1, struct UObject* MultiCast_GenericRPC_param2, struct TArray<char> MultiCast_GenericRPC_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function SurviveGameState.SurviveGameState_C.#[FeatureRPC(ReviveState.MulticastRevivalTimeEnd)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(ReviveState.MulticastRevivalTimeEnd)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SurviveGameState.SurviveGameState_C.#[FeatureRPC(FatalDamageFeature.MulticastRPC_BroadcastFatalDamageToClientForLua)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(FatalDamageFeature.MulticastRPC_BroadcastFatalDamageToClientForLua)](struct FFatalDamageParameterCompress #[FeatureRPC(FatalDamageFeature.MulticastRPC_BroadcastFatalDamageToClientForLua)]_param1, struct TArray<char> #[FeatureRPC(FatalDamageFeature.MulticastRPC_BroadcastFatalDamageToClientForLua)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0xd0)

	// Object Name: Function SurviveGameState.SurviveGameState_C.GetHasAR
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetHasAR(bool& bHasAR); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SurviveGameState.SurviveGameState_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

