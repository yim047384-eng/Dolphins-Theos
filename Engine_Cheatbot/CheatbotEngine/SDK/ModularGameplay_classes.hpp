#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ModularGameplay.GameFrameworkComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UGameFrameworkComponent : UActorComponent {
};

// Object Name: Class ModularGameplay.ControllerComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UControllerComponent : UGameFrameworkComponent {
};

// Object Name: Class ModularGameplay.GameFrameworkComponentManager
// Size: 0x120 // Inherited bytes: 0x30
struct UGameFrameworkComponentManager : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0xf0]; // Offset: 0x30 // Size: 0xf0

	// Functions

	// Object Name: Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveReceiver(struct AActor* Receiver); // Offset: 0x10212e7f8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddReceiver(struct AActor* Receiver, bool bAddOnlyInGameWorlds); // Offset: 0x10212e738 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class ModularGameplay.GameStateComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UGameStateComponent : UGameFrameworkComponent {
};

// Object Name: Class ModularGameplay.PawnComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UPawnComponent : UGameFrameworkComponent {
};

// Object Name: Class ModularGameplay.PlayerStateComponent
// Size: 0x178 // Inherited bytes: 0x178
struct UPlayerStateComponent : UGameFrameworkComponent {
};

