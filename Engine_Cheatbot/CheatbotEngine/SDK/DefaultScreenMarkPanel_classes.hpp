#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass DefaultScreenMarkPanel.DefaultScreenMarkPanel_C
// Size: 0x4a8 // Inherited bytes: 0x418
struct UDefaultScreenMarkPanel_C : UUAEUserWidget {
	// Fields
	struct UCanvasPanel* AddToPanel; // Offset: 0x418 // Size: 0x08
	struct UImage* MarkIconTemplate; // Offset: 0x420 // Size: 0x08
	struct TArray<struct UWidget*> NewVar_1; // Offset: 0x428 // Size: 0x10
	struct TArray<struct UWidget*> NewVar_2; // Offset: 0x438 // Size: 0x10
	struct TArray<struct AActor*> bindingactors; // Offset: 0x448 // Size: 0x10
	MapProperty ID2WidgetMap; // Offset: 0x458 // Size: 0x50
};

