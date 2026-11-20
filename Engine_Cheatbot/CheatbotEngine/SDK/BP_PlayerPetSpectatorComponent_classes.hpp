#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C
// Size: 0x248 // Inherited bytes: 0x248
struct UBP_PlayerPetSpectatorComponent_C : UPlayerPetSpectatorComponent {
	// Functions

	// Object Name: Function BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C.ClientRPC_ServerDoTransformDone
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientRPC_ServerDoTransformDone(IntProperty ClientRPC_ServerDoTransformDone_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C.ClientDoTeleportToPlayer
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientDoTeleportToPlayer(IntProperty ClientDoTeleportToPlayer_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C.ClientDoRecover
	// Flags: [Net|NetReliablePublic|NetClient]
	void ClientDoRecover(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C.ServerTeleportToPlayer
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerTeleportToPlayer(IntProperty ServerTeleportToPlayer_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C.ServerSetSpectatingPetVisible
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerSetSpectatingPetVisible(char ServerSetSpectatingPetVisible_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerPetSpectatorComponent.BP_PlayerPetSpectatorComponent_C.ServerDoTransform
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerDoTransform(IntProperty ServerDoTransform_param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)
};

