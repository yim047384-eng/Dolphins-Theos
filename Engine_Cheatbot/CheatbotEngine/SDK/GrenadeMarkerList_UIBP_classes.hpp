#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass GrenadeMarkerList_UIBP.GrenadeMarkerList_UIBP_C
// Size: 0x470 // Inherited bytes: 0x418
struct UGrenadeMarkerList_UIBP_C : UUAEUserWidget {
	// Fields
	struct UCanvasPanel* MarkerListPanel; // Offset: 0x418 // Size: 0x08
	MapProperty GrenadeIDBrushMap; // Offset: 0x420 // Size: 0x50

	// Functions

	// Object Name: Function GrenadeMarkerList_UIBP.GrenadeMarkerList_UIBP_C.GetBrushByGrenadeID
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetBrushByGrenadeID(IntProperty GrenadeID, struct FSlateBrush& Brush); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc0)
};

