#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass ActorPredictLineComp_BP.ActorPredictLineComp_BP_C
// Size: 0xec0 // Inherited bytes: 0xe70
struct UActorPredictLineComp_BP_C : UPredictLineComponent {
	// Fields
	MapProperty PSPredictEndPointMap; // Offset: 0xe70 // Size: 0x50

	// Functions

	// Object Name: Function ActorPredictLineComp_BP.ActorPredictLineComp_BP_C.ActivePredictLine
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ActivePredictLine(bool bActive, bool bReset); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function ActorPredictLineComp_BP.ActorPredictLineComp_BP_C.InitPredictEndPointFX
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitPredictEndPointFX(IntProperty& ColorBlindnessType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

