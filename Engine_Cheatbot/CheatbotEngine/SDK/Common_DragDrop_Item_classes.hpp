#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Common_DragDrop_Item.Common_DragDrop_Item_C
// Size: 0x358 // Inherited bytes: 0x2c8
struct UCommon_DragDrop_Item_C : ULuaUserWidget {
	// Fields
	struct FScriptMulticastDelegate OnDragCanceled; // Offset: 0x2c8 // Size: 0x10
	struct FScriptMulticastDelegate OnDragReadyToShape; // Offset: 0x2d8 // Size: 0x10
	struct FScriptMulticastDelegate OnDragClicked; // Offset: 0x2e8 // Size: 0x10
	struct FScriptMulticastDelegate OnDragSuccess; // Offset: 0x2f8 // Size: 0x10
	struct FScriptMulticastDelegate OnItemTouchStarted; // Offset: 0x308 // Size: 0x10
	struct FScriptMulticastDelegate OnItemTouchEnded; // Offset: 0x318 // Size: 0x10
	struct FScriptMulticastDelegate OnItemTouchMoved; // Offset: 0x328 // Size: 0x10
	struct FScriptMulticastDelegate OnTestDragEnter; // Offset: 0x338 // Size: 0x10
	struct FScriptMulticastDelegate OnTestDragLeave; // Offset: 0x348 // Size: 0x10

	// Functions

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTestDragLeave__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTestDragLeave__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTestDragEnter__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTestDragEnter__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchMoved__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnItemTouchMoved__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchEnded__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnItemTouchEnded__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchStarted__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnItemTouchStarted__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragSuccess__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragSuccess__DelegateSignature(struct UCommon_DragDrop_Data_C* Operation); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragClicked__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragReadyToShape__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragReadyToShape__DelegateSignature(struct UWidget* generatedWidget, struct UCommon_DragDrop_Data_C* dragOperation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCanceled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnDragCanceled__DelegateSignature(struct UCommon_DragDrop_Data_C* Operation); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

