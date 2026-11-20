#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass Vault_Controller.Vault_Controller_C
// Size: 0xab8 // Inherited bytes: 0xab0
struct UVault_Controller_C : UPlayerMantleComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xab0 // Size: 0x08

	// Functions

	// Object Name: Function Vault_Controller.Vault_Controller_C.ServerRPC_RequestCooperationVaultItem
	// Flags: [Net|NetReliablePublic|NetServer]
	void ServerRPC_RequestCooperationVaultItem(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Vault_Controller.Vault_Controller_C.JumpVault
	// Flags: [BlueprintCallable|BlueprintEvent]
	void JumpVault(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Vault_Controller.Vault_Controller_C.VaultServer
	// Flags: [BlueprintCallable|BlueprintEvent]
	void VaultServer(float dis, float Height, float Length, StrProperty VaultKey, struct FVector StartPos, struct AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, struct FVector HitPoint, struct AActor* WindowActor, struct FRotator MoveDir); // Offset: 0x1048d7660 // Return & Params: Num(11) Size(0x64)

	// Object Name: Function Vault_Controller.Vault_Controller_C.vaultAll
	// Flags: [BlueprintCallable|BlueprintEvent]
	void vaultAll(float dis, float Height, float Length, StrProperty VaultKey, struct FVector StartPos, struct AActor* checkActor, float crossmaxFalling, float crossmaxDis, struct FVector HitPoint, struct FRotator MoveDir); // Offset: 0x1048d7660 // Return & Params: Num(10) Size(0x58)

	// Object Name: Function Vault_Controller.Vault_Controller_C.StopVault
	// Flags: [BlueprintCallable|BlueprintEvent]
	void StopVault(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Vault_Controller.Vault_Controller_C.DsCheckStopVault
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DsCheckStopVault(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller
	// Flags: [HasDefaults]
	void ExecuteUbergraph_Vault_Controller(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

