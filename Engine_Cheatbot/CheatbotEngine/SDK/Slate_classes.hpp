#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Slate.ButtonWidgetStyle
// Size: 0x368 // Inherited bytes: 0x30
struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FButtonStyle ButtonStyle; // Offset: 0x30 // Size: 0x338
};

// Object Name: Class Slate.CheckBoxWidgetStyle
// Size: 0x760 // Inherited bytes: 0x30
struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FCheckBoxStyle CheckBoxStyle; // Offset: 0x30 // Size: 0x730
};

// Object Name: Class Slate.ComboBoxWidgetStyle
// Size: 0x538 // Inherited bytes: 0x30
struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FComboBoxStyle ComboBoxStyle; // Offset: 0x30 // Size: 0x508
};

// Object Name: Class Slate.ComboButtonWidgetStyle
// Size: 0x500 // Inherited bytes: 0x30
struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FComboButtonStyle ComboButtonStyle; // Offset: 0x30 // Size: 0x4d0
};

// Object Name: Class Slate.EditableTextBoxWidgetStyle
// Size: 0xa98 // Inherited bytes: 0x30
struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FEditableTextBoxStyle EditableTextBoxStyle; // Offset: 0x30 // Size: 0xa68
};

// Object Name: Class Slate.EditableTextWidgetStyle
// Size: 0x2e0 // Inherited bytes: 0x30
struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FEditableTextStyle EditableTextStyle; // Offset: 0x30 // Size: 0x2b0
};

// Object Name: Class Slate.ProgressWidgetStyle
// Size: 0x260 // Inherited bytes: 0x30
struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FProgressBarStyle ProgressBarStyle; // Offset: 0x30 // Size: 0x230
};

// Object Name: Class Slate.ScrollBarWidgetStyle
// Size: 0x6b0 // Inherited bytes: 0x30
struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FScrollBarStyle ScrollBarStyle; // Offset: 0x30 // Size: 0x680
};

// Object Name: Class Slate.ScrollBoxWidgetStyle
// Size: 0x318 // Inherited bytes: 0x30
struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FScrollBoxStyle ScrollBoxStyle; // Offset: 0x30 // Size: 0x2e8
};

// Object Name: Class Slate.SlateSettings
// Size: 0x30 // Inherited bytes: 0x28
struct USlateSettings : UObject {
	// Fields
	bool bExplicitCanvasChildZOrder; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: Class Slate.SpinBoxWidgetStyle
// Size: 0x408 // Inherited bytes: 0x30
struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FSpinBoxStyle SpinBoxStyle; // Offset: 0x30 // Size: 0x3d8
};

// Object Name: Class Slate.TextBlockWidgetStyle
// Size: 0x280 // Inherited bytes: 0x30
struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FTextBlockStyle TextBlockStyle; // Offset: 0x30 // Size: 0x250
};

