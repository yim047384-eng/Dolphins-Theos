#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C
// Size: 0x6b8 // Inherited bytes: 0x6b8
struct UAvatarUtilsImp_BP_C : UAvatarBPUtils {
	// Functions

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	IntProperty GetAdjustWeaponBPID_Lobby(IntProperty WeaponId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool GetVehicleDefaultStyleID(IntProperty InVehicleSkinID, struct TArray<IntProperty>& OutStyleIDList); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	StrProperty GetVehicleBPPathBySkinID(IntProperty InVehicleSkinID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	IntProperty GetVehicleShapeBySkinID(IntProperty InVehicleSkinID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	void GetBPTableName(IntProperty Type, IntProperty TypeSpecificID, StrProperty& BPTableName, IntProperty& SpecificID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct UItemHandleBase* CreateAvatarHandle(struct FItemDefineID DefineID, struct UObject* Outer, bool bLobby); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	StrProperty GetAvatarHandlePath(struct FItemDefineID DefineID, bool bLobby); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)
};

