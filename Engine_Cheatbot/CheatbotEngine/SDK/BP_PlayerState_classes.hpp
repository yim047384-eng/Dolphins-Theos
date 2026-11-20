#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// Size: 0x1ce0 // Inherited bytes: 0x1cd8
struct ABP_PlayerState_C : ASTExtraPlayerState {
	// Fields
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x1cd8 // Size: 0x08

	// Functions

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.RPC_Client_PromptCharacterTeleport
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_PromptCharacterTeleport(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PromotionFeature.ClientRPC_PromotionRoundPassed)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(PromotionFeature.ClientRPC_PromotionRoundPassed)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PromotionFeature.ClientRPC_PromotionParachute)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(PromotionFeature.ClientRPC_PromotionParachute)](IntProperty #[FeatureRPC(PromotionFeature.ClientRPC_PromotionParachute)]_param1, IntProperty #[FeatureRPC(PromotionFeature.ClientRPC_PromotionParachute)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(BlazingFeature.ClientRPC_OnBlazingStateChanged)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(BlazingFeature.ClientRPC_OnBlazingStateChanged)](IntProperty #[FeatureRPC(BlazingFeature.ClientRPC_OnBlazingStateChanged)]_param1, IntProperty #[FeatureRPC(BlazingFeature.ClientRPC_OnBlazingStateChanged)]_param2, IntProperty #[FeatureRPC(BlazingFeature.ClientRPC_OnBlazingStateChanged)]_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.RPC_Server_CharacterComfirmTeleport
	// Flags: [Net|NetReliablePublic|NetServer]
	void RPC_Server_CharacterComfirmTeleport(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(ItemPickUpGuideFeature.ServerAskVersionFilter)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(ItemPickUpGuideFeature.ServerAskVersionFilter)](StrProperty StrProperty_2); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(ItemPickUpGuideFeature.ServerAskItemCountChange)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(ItemPickUpGuideFeature.ServerAskItemCountChange)](IntProperty #[FeatureRPC(ItemPickUpGuideFeature.ServerAskItemCountChange)]_param1, IntProperty #[FeatureRPC(ItemPickUpGuideFeature.ServerAskItemCountChange)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PromotionFeature.MulticastRPC_PromotionSeriesComplete)]
	// Flags: [Net|NetReliableNetMulticast|Public]
	void #[FeatureRPC(PromotionFeature.MulticastRPC_PromotionSeriesComplete)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.ClientRPCTeammateRealExit
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPCTeammateRealExit(IntProperty ClientRPCTeammateRealExit_param1, uint32_t ClientRPCTeammateRealExit_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.ClientRPC_VersionTaskChanged
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPC_VersionTaskChanged(IntProperty ClientRPC_VersionTaskChanged_param1, IntProperty ClientRPC_VersionTaskChanged_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Client_RequestTeammateTakeOver)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(TeammateTakeOverFeature.RPC_Client_RequestTeammateTakeOver)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(StoreFeature.RPC_Client_BuyGoodsFinished)]
	// Flags: [Net|NetReliablePublic|NetClient]
	void #[FeatureRPC(StoreFeature.RPC_Client_BuyGoodsFinished)](char #[FeatureRPC(StoreFeature.RPC_Client_BuyGoodsFinished)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.ServerRPC_RecordOperationCount
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_RecordOperationCount(struct TArray<IntProperty> ServerRPC_RecordOperationCount_param1, char ServerRPC_RecordOperationCount_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.ServerRPC_EnableVoiceChanger
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_EnableVoiceChanger(char ServerRPC_EnableVoiceChanger_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.ServerRPC_AddCommonTLogData
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_AddCommonTLogData(IntProperty ServerRPC_AddCommonTLogData_param1, StrProperty StrProperty_1, IntProperty ServerRPC_AddCommonTLogData_param3); // Offset: 0x101bc757c // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.ReportClientPing
	// Flags: [Net|NetReliablePublic|NetServer]
	void ReportClientPing(IntProperty ReportClientPing_param1, IntProperty ReportClientPing_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)](char #[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)]_param1, char #[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(StoreFeature.RPC_Server_ShowNearestStore)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(StoreFeature.RPC_Server_ShowNearestStore)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(StoreFeature.RPC_Server_OpenStore)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(StoreFeature.RPC_Server_OpenStore)](struct AActor* #[FeatureRPC(StoreFeature.RPC_Server_OpenStore)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(StoreFeature.RPC_Server_CloseStore)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(StoreFeature.RPC_Server_CloseStore)](struct AActor* #[FeatureRPC(StoreFeature.RPC_Server_CloseStore)]_param1, IntProperty #[FeatureRPC(StoreFeature.RPC_Server_CloseStore)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)](struct AActor* #[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]_param1, struct TArray<IntProperty> #[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]_param2, struct TArray<IntProperty> #[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]_param3, struct TArray<IntProperty> #[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]_param4); // Offset: 0x101bc757c // Return & Params: Num(4) Size(0x38)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PlayPetFeature)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PhotoGrapherFeature.RPC_Server_PlayPetFeature)](); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PhotographerOp)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PhotoGrapherFeature.RPC_Server_PhotographerOp)](IntProperty #[FeatureRPC(PhotoGrapherFeature.RPC_Server_PhotographerOp)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)](char #[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)]_param1, IntProperty #[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)]_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangeEmotePlayRate)]
	// Flags: [Net|NetReliablePublic|NetServer]
	void #[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangeEmotePlayRate)](IntProperty #[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangeEmotePlayRate)]_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.MultiCast_GenericRPC
	// Flags: [Net|NetReliableNetMulticast|Public]
	void MultiCast_GenericRPC(IntProperty MultiCast_GenericRPC_param1, struct TArray<char> MultiCast_GenericRPC_param2); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerState.BP_PlayerState_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

