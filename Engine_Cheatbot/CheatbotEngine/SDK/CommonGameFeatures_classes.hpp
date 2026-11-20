#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CommonGameFeatures.ActorRepControlComponent
// Size: 0x288 // Inherited bytes: 0x238
struct UActorRepControlComponent : ULuaActorComponent {
	// Fields
	MapProperty ItemRepBlockingUIDMap; // Offset: 0x238 // Size: 0x50

	// Functions

	// Object Name: Function CommonGameFeatures.ActorRepControlComponent.ToggleGroupedRepControlByUID
	// Flags: [Native|Public]
	void ToggleGroupedRepControlByUID(int64_t UID, IntProperty ControlMark, IntProperty RepControlGroup); // Offset: 0x1021a91b8 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function CommonGameFeatures.ActorRepControlComponent.ShouldBlockRepByUID
	// Flags: [Native|Public|Const]
	bool ShouldBlockRepByUID(int64_t UID, IntProperty RepControlGroup); // Offset: 0x1021a90e8 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function CommonGameFeatures.ActorRepControlComponent.GetControlGroupData
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetControlGroupData(IntProperty RepControlGroup, struct FRepControlGroupData& OutData); // Offset: 0x1021a8ff0 // Return & Params: Num(3) Size(0x59)
};

// Object Name: Class CommonGameFeatures.RepControlActorBase
// Size: 0x578 // Inherited bytes: 0x570
struct ARepControlActorBase : ALuaActor {
	// Fields
	bool bCanBlockNet; // Offset: 0x569 // Size: 0x01
	IntProperty RepControlGroup; // Offset: 0x56c // Size: 0x04
	struct UActorRepControlComponent* CachedBlockingComp; // Offset: 0x570 // Size: 0x08

	// Functions

	// Object Name: Function CommonGameFeatures.RepControlActorBase.IsNetRelevantForCustomCheck
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	bool IsNetRelevantForCustomCheck(struct AActor* RealViewer, struct AActor* ViewTarget, struct FVector& SrcLocation); // Offset: 0x1021a9518 // Return & Params: Num(4) Size(0x1d)
};

