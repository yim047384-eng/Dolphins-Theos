#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass MapDataBase_BP.MapDataBase_BP_C
// Size: 0xd8 // Inherited bytes: 0x98
struct UMapDataBase_BP_C : UMapObjct {
	// Fields
	struct UMapUIBase_BP_C* CurrentMapUI_BP; // Offset: 0x98 // Size: 0x08
	struct UMapDataBase* CurrentMapData; // Offset: 0xa0 // Size: 0x08
	struct UUIDuplicatedItemPool* PlayerIconPool; // Offset: 0xa8 // Size: 0x08
	struct UUIDuplicatedItemPool* PlayerMarkPool; // Offset: 0xb0 // Size: 0x08
	struct UCanvasPanel* MarkRootPanel; // Offset: 0xb8 // Size: 0x08
	StrProperty DuplicatedPoolPath; // Offset: 0xc0 // Size: 0x10
	struct UUIDuplicatedItemPool* PlayerMultiMarkPool; // Offset: 0xd0 // Size: 0x08

	// Functions

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.OnDestroy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnDestroy(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.OnModPaint
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnModPaint(struct FPaintContext PaintContext, enum class EMapType PaintType, struct FLinearColor CircleColor); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x44)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.InitMapData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitMapData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.AddToRootPanel
	// Flags: [Protected|BlueprintCallable|BlueprintEvent]
	void AddToRootPanel(struct UWidget* BPWidget, IntProperty ZOrder, struct UCanvasPanel* RootPanel); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.GetFullPath
	// Flags: [Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetFullPath(StrProperty DirecPath, StrProperty ItemPath, StrProperty& fullPath); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.InitUIDuplicatedItemPool
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitUIDuplicatedItemPool(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.GetCurrentMapUI
	// Flags: [Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetCurrentMapUI(struct UMapUIBase*& MapUIBase); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MapDataBase_BP.MapDataBase_BP_C.HandleConstruct
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleConstruct(struct UMapUIBase_BP_C* INMapUI); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

