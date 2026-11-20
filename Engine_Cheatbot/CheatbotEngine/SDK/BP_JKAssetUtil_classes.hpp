#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_JKAssetUtil.BP_JKAssetUtil_C
// Size: 0x118 // Inherited bytes: 0x28
struct UBP_JKAssetUtil_C : UUJKAssetsUtil {
	// Fields
	MapProperty ParticleCfg; // Offset: 0x28 // Size: 0x50
	MapProperty ParticleCfgDefault; // Offset: 0x78 // Size: 0x50
	SetProperty HitParticleSet; // Offset: 0xc8 // Size: 0x50

	// Functions

	// Object Name: Function BP_JKAssetUtil.BP_JKAssetUtil_C.GetAssetPathByStr
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FSoftObjectPath GetAssetPathByStr(StrProperty Name); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function BP_JKAssetUtil.BP_JKAssetUtil_C.UseDeafultCfg
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void UseDeafultCfg(bool bHitEffect, bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_JKAssetUtil.BP_JKAssetUtil_C.GetAssetByStr
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct UParticleSystem* GetAssetByStr(StrProperty Name); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)
};

