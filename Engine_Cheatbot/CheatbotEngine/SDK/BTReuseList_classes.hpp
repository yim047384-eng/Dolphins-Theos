#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BTReuseList.BTReuseList_C
// Size: 0x4f8 // Inherited bytes: 0x4c0
struct UBTReuseList_C : UBTReuseList {
	// Fields
	struct UGridPanel* FBox; // Offset: 0x4c0 // Size: 0x08
	struct UCustomScrollBox* List; // Offset: 0x4c8 // Size: 0x08
	struct FScriptMulticastDelegate UpdateItem; // Offset: 0x4d0 // Size: 0x10
	struct UUAEUserWidget* ItemParent; // Offset: 0x4e0 // Size: 0x08
	struct FScriptMulticastDelegate OnCreateItem; // Offset: 0x4e8 // Size: 0x10

	// Functions

	// Object Name: Function BTReuseList.BTReuseList_C.SetTemplate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetTemplate(struct UUAEUserWidget* Parent, IntProperty CacheNum); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BTReuseList.BTReuseList_C.OnCreateItem__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnCreateItem__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BTReuseList.BTReuseList_C.UpdateItem__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void UpdateItem__DelegateSignature(struct UUAEUserWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)
};

