#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Development.PropertyItemData
// Size: 0x28 // Inherited bytes: 0x00
struct FPropertyItemData {
	// Fields
	StrProperty PropertyName; // Offset: 0x00 // Size: 0x10
	struct UEditableTextBox* EditableTextBox; // Offset: 0x10 // Size: 0x08
	struct UWidget* ContainerWidget; // Offset: 0x18 // Size: 0x08
	struct UButton* NameButton; // Offset: 0x20 // Size: 0x08
};

