#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass GuideComponent_BP.GuideComponent_BP_C
// Size: 0x1ad // Inherited bytes: 0x1a0
struct UGuideComponent_BP_C : UGuideComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1a0 // Size: 0x08
	IntProperty guideStep; // Offset: 0x1a8 // Size: 0x04
	bool Enabled; // Offset: 0x1ac // Size: 0x01

	// Functions

	// Object Name: Function GuideComponent_BP.GuideComponent_BP_C.ShowGuideByStep
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowGuideByStep(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GuideComponent_BP.GuideComponent_BP_C.AddUIGuide
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddUIGuide(struct UWidget* Widget1, IntProperty guildUI1, struct FVector2D offset1, struct FVector2D size1, IntProperty childData1); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function GuideComponent_BP.GuideComponent_BP_C.InitUIGuide
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitUIGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GuideComponent_BP.GuideComponent_BP_C.CreateGuideUI
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void CreateGuideUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GuideComponent_BP.GuideComponent_BP_C.ExecuteUbergraph_GuideComponent_BP
	// Flags: [None]
	void ExecuteUbergraph_GuideComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

