#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_ProduceDropItemComponent.BP_ProduceDropItemComponent_C
// Size: 0x498 // Inherited bytes: 0x490
struct UBP_ProduceDropItemComponent_C : UProduceDropItemComponent {
	// Fields
	struct UUAEDataTable* DataTableRef; // Offset: 0x490 // Size: 0x08

	// Functions

	// Object Name: Function BP_ProduceDropItemComponent.BP_ProduceDropItemComponent_C.GetWrapperActorClass
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UObject* GetWrapperActorClass(struct FItemDefineID DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BP_ProduceDropItemComponent.BP_ProduceDropItemComponent_C.GetWrapperActorPath
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	StrProperty GetWrapperActorPath(struct FItemDefineID DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)
};

