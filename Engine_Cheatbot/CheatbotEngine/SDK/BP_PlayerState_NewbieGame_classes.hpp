#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerState_NewbieGame.BP_PlayerState_NewbieGame_C
// Size: 0x1ce0 // Inherited bytes: 0x1ce0
struct ABP_PlayerState_NewbieGame_C : ABP_PlayerState_C {
	// Functions

	// Object Name: Function BP_PlayerState_NewbieGame.BP_PlayerState_NewbieGame_C.#[FeatureRPC(InstructorGuideFeature.ClientRPC_TriggerAIGuide)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(InstructorGuideFeature.ClientRPC_TriggerAIGuide)](IntProperty #[FeatureRPC(InstructorGuideFeature.ClientRPC_TriggerAIGuide)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerState_NewbieGame.BP_PlayerState_NewbieGame_C.#[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportInstructorParachuteChoice)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportInstructorParachuteChoice)](char #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportInstructorParachuteChoice)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerState_NewbieGame.BP_PlayerState_NewbieGame_C.#[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportInstructorConsent)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportInstructorConsent)](char #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportInstructorConsent)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerState_NewbieGame.BP_PlayerState_NewbieGame_C.#[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportGuideState)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportGuideState)](IntProperty #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportGuideState)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerState_NewbieGame.BP_PlayerState_NewbieGame_C.#[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportAIGuideDone)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportAIGuideDone)](IntProperty #[FeatureRPC(InstructorGuideFeature.ServerRPC_ReportAIGuideDone)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)
};

