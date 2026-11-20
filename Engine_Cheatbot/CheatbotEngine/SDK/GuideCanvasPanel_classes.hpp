#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass GuideCanvasPanel.GuideCanvasPanel_C
// Size: 0x138 // Inherited bytes: 0x130
struct UGuideCanvasPanel_C : UUAECanvasPanel {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x130 // Size: 0x08

	// Functions

	// Object Name: Function GuideCanvasPanel.GuideCanvasPanel_C.ReceiveInitCanvasPanel
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveInitCanvasPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GuideCanvasPanel.GuideCanvasPanel_C.ExecuteUbergraph_GuideCanvasPanel
	// Flags: [HasDefaults]
	void ExecuteUbergraph_GuideCanvasPanel(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

