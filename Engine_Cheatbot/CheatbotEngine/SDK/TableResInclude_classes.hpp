#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class TableResInclude.BaseTableResMap
// Size: 0x88 // Inherited bytes: 0x28
struct UBaseTableResMap : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	struct UScriptStruct* DataStruct; // Offset: 0x80 // Size: 0x08
};

// Object Name: Class TableResInclude.EvoBaseMapUIMarkTableMap
// Size: 0x88 // Inherited bytes: 0x88
struct UEvoBaseMapUIMarkTableMap : UBaseTableResMap {
	// Functions

	// Object Name: Function TableResInclude.EvoBaseMapUIMarkTableMap.TraversTable
	// Flags: [Final|Native|Public]
	void TraversTable(struct UUAEDataTable* TableData, struct FName Key); // Offset: 0x103ded8d8 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class TableResInclude.EvoBaseModTableTestTableMap
// Size: 0x88 // Inherited bytes: 0x88
struct UEvoBaseModTableTestTableMap : UBaseTableResMap {
	// Functions

	// Object Name: Function TableResInclude.EvoBaseModTableTestTableMap.TraversTable
	// Flags: [Final|Native|Public]
	void TraversTable(struct UUAEDataTable* TableData, struct FName Key); // Offset: 0x103dee62c // Return & Params: Num(2) Size(0x10)
};

