#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass AITouchSelectComp.AITouchSelectComp_C
// Size: 0x210 // Inherited bytes: 0x200
struct UAITouchSelectComp_C : USTTouchSelectComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x200 // Size: 0x08
	struct FVector2D ViewportLocalSize; // Offset: 0x208 // Size: 0x08

	// Functions

	// Object Name: Function AITouchSelectComp.AITouchSelectComp_C.UpdateViewportLocalSize
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateViewportLocalSize(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AITouchSelectComp.AITouchSelectComp_C.ModifyTouchLoc
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FVector2D ModifyTouchLoc(struct FGeometry& MyGeometry, struct FVector2D& TouchLoc); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x48)

	// Object Name: Function AITouchSelectComp.AITouchSelectComp_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AITouchSelectComp.AITouchSelectComp_C.OnTouchSelect
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnTouchSelect(struct AActor* SelectActor, struct FVector2D& TouchLoc); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AITouchSelectComp.AITouchSelectComp_C.OnViewPortChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnViewPortChange(struct FVector2D OldViewportSize, struct FVector2D NewViewportSize); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AITouchSelectComp.AITouchSelectComp_C.ExecuteUbergraph_AITouchSelectComp
	// Flags: [HasDefaults]
	void ExecuteUbergraph_AITouchSelectComp(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

