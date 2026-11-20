#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct SlateCore.Margin
// Size: 0x10 // Inherited bytes: 0x00
struct FMargin {
	// Fields
	float Left; // Offset: 0x00 // Size: 0x04
	float Top; // Offset: 0x04 // Size: 0x04
	float Right; // Offset: 0x08 // Size: 0x04
	float Bottom; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct SlateCore.Geometry
// Size: 0x38 // Inherited bytes: 0x00
struct FGeometry {
	// Fields
	char pad_0x0[0x38]; // Offset: 0x00 // Size: 0x38
};

// Object Name: ScriptStruct SlateCore.SlateBrush
// Size: 0xb8 // Inherited bytes: 0x00
struct FSlateBrush {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FVector2D ImageSize; // Offset: 0x08 // Size: 0x08
	struct FMargin Margin; // Offset: 0x10 // Size: 0x10
	struct FSlateColor TintColor; // Offset: 0x20 // Size: 0x28
	bool bAsyncEnabled; // Offset: 0x48 // Size: 0x01
	bool bOnlySoftInEditor; // Offset: 0x49 // Size: 0x01
	char pad_0x4A[0x6]; // Offset: 0x4a // Size: 0x06
	struct UObject* ResourceObject; // Offset: 0x50 // Size: 0x08
	struct UObject* SoftResourceObject; // Offset: 0x58 // Size: 0x28
	struct FName ResourceName; // Offset: 0x80 // Size: 0x08
	struct FBox2D UVRegion; // Offset: 0x88 // Size: 0x14
	enum class ESlateBrushDrawType DrawAs; // Offset: 0x9c // Size: 0x01
	enum class ESlateBrushTileType Tiling; // Offset: 0x9d // Size: 0x01
	enum class ESlateBrushMirrorType Mirroring; // Offset: 0x9e // Size: 0x01
	enum class ESlateBrushImageType ImageType; // Offset: 0x9f // Size: 0x01
	char pad_0xA0[0x10]; // Offset: 0xa0 // Size: 0x10
	char bIsDynamicallyLoaded : 1; // Offset: 0xb0 // Size: 0x01
	char bHasUObject : 1; // Offset: 0xb0 // Size: 0x01
	char bUseImageSizeAsTextureSize : 1; // Offset: 0xb0 // Size: 0x01
	char pad_0xB0_3 : 5; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct SlateCore.SlateColor
// Size: 0x28 // Inherited bytes: 0x00
struct FSlateColor {
	// Fields
	struct FLinearColor SpecifiedColor; // Offset: 0x00 // Size: 0x10
	enum class ESlateColorStylingMode ColorUseRule; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x17]; // Offset: 0x11 // Size: 0x17
};

// Object Name: ScriptStruct SlateCore.InputEvent
// Size: 0x20 // Inherited bytes: 0x00
struct FInputEvent {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct SlateCore.PointerEvent
// Size: 0x78 // Inherited bytes: 0x20
struct FPointerEvent : FInputEvent {
	// Fields
	char pad_0x20[0x58]; // Offset: 0x20 // Size: 0x58
};

// Object Name: ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 // Inherited bytes: 0x00
struct FSlateWidgetStyle {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct SlateCore.ButtonStyle
// Size: 0x338 // Inherited bytes: 0x08
struct FButtonStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush Normal; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush Hovered; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush Pressed; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush Disabled; // Offset: 0x230 // Size: 0xb8
	struct FMargin NormalPadding; // Offset: 0x2e8 // Size: 0x10
	struct FMargin PressedPadding; // Offset: 0x2f8 // Size: 0x10
	struct FSlateSound PressedSlateSound; // Offset: 0x308 // Size: 0x18
	struct FSlateSound HoveredSlateSound; // Offset: 0x320 // Size: 0x18
};

// Object Name: ScriptStruct SlateCore.SlateSound
// Size: 0x18 // Inherited bytes: 0x00
struct FSlateSound {
	// Fields
	struct UObject* ResourceObject; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x10]; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct SlateCore.SlateFontInfo
// Size: 0x58 // Inherited bytes: 0x00
struct FSlateFontInfo {
	// Fields
	struct UObject* FontObject; // Offset: 0x00 // Size: 0x08
	struct UObject* FontMaterial; // Offset: 0x08 // Size: 0x08
	struct FFontOutlineSettings OutlineSettings; // Offset: 0x10 // Size: 0x28
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
	struct FName TypefaceFontName; // Offset: 0x48 // Size: 0x08
	IntProperty Size; // Offset: 0x50 // Size: 0x04
	bool IsBold; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
};

// Object Name: ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x28 // Inherited bytes: 0x00
struct FFontOutlineSettings {
	// Fields
	IntProperty OutlineSize; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UObject* OutlineMaterial; // Offset: 0x08 // Size: 0x08
	struct FLinearColor OutlineColor; // Offset: 0x10 // Size: 0x10
	bool bSeparateFillAlpha; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct SlateCore.TableRowStyle
// Size: 0x8f8 // Inherited bytes: 0x08
struct FTableRowStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush SelectorFocusedBrush; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush ActiveHoveredBrush; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush ActiveBrush; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush InactiveHoveredBrush; // Offset: 0x230 // Size: 0xb8
	struct FSlateBrush InactiveBrush; // Offset: 0x2e8 // Size: 0xb8
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // Offset: 0x3a0 // Size: 0xb8
	struct FSlateBrush EvenRowBackgroundBrush; // Offset: 0x458 // Size: 0xb8
	struct FSlateBrush OddRowBackgroundHoveredBrush; // Offset: 0x510 // Size: 0xb8
	struct FSlateBrush OddRowBackgroundBrush; // Offset: 0x5c8 // Size: 0xb8
	struct FSlateColor TextColor; // Offset: 0x680 // Size: 0x28
	struct FSlateColor SelectedTextColor; // Offset: 0x6a8 // Size: 0x28
	struct FSlateBrush DropIndicator_Above; // Offset: 0x6d0 // Size: 0xb8
	struct FSlateBrush DropIndicator_Onto; // Offset: 0x788 // Size: 0xb8
	struct FSlateBrush DropIndicator_Below; // Offset: 0x840 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x508 // Inherited bytes: 0x08
struct FComboBoxStyle : FSlateWidgetStyle {
	// Fields
	struct FComboButtonStyle ComboButtonStyle; // Offset: 0x08 // Size: 0x4d0
	struct FSlateSound PressedSlateSound; // Offset: 0x4d8 // Size: 0x18
	struct FSlateSound SelectionChangeSlateSound; // Offset: 0x4f0 // Size: 0x18
};

// Object Name: ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x4d0 // Inherited bytes: 0x08
struct FComboButtonStyle : FSlateWidgetStyle {
	// Fields
	struct FButtonStyle ButtonStyle; // Offset: 0x08 // Size: 0x338
	struct FSlateBrush DownArrowImage; // Offset: 0x340 // Size: 0xb8
	float ArrowPaddingLeft; // Offset: 0x3f8 // Size: 0x04
	float ArrowPaddingRight; // Offset: 0x3fc // Size: 0x04
	float ArrowPaddingTop; // Offset: 0x400 // Size: 0x04
	float ArrowPaddingBottom; // Offset: 0x404 // Size: 0x04
	struct FSlateBrush MenuBorderBrush; // Offset: 0x408 // Size: 0xb8
	struct FMargin MenuBorderPadding; // Offset: 0x4c0 // Size: 0x10
};

// Object Name: ScriptStruct SlateCore.EditableTextStyle
// Size: 0x2b0 // Inherited bytes: 0x08
struct FEditableTextStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateFontInfo Font; // Offset: 0x08 // Size: 0x58
	struct FSlateColor ColorAndOpacity; // Offset: 0x60 // Size: 0x28
	struct FSlateBrush BackgroundImageSelected; // Offset: 0x88 // Size: 0xb8
	struct FSlateBrush BackgroundImageComposing; // Offset: 0x140 // Size: 0xb8
	struct FSlateBrush CaretImage; // Offset: 0x1f8 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0xa68 // Inherited bytes: 0x08
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush BackgroundImageNormal; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush BackgroundImageHovered; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush BackgroundImageFocused; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush BackgroundImageReadOnly; // Offset: 0x230 // Size: 0xb8
	struct FMargin Padding; // Offset: 0x2e8 // Size: 0x10
	struct FSlateFontInfo Font; // Offset: 0x2f8 // Size: 0x58
	struct FSlateColor ForegroundColor; // Offset: 0x350 // Size: 0x28
	struct FSlateColor BackgroundColor; // Offset: 0x378 // Size: 0x28
	struct FSlateColor ReadOnlyForegroundColor; // Offset: 0x3a0 // Size: 0x28
	struct FMargin HScrollBarPadding; // Offset: 0x3c8 // Size: 0x10
	struct FMargin VScrollBarPadding; // Offset: 0x3d8 // Size: 0x10
	struct FScrollBarStyle ScrollBarStyle; // Offset: 0x3e8 // Size: 0x680
};

// Object Name: ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x680 // Inherited bytes: 0x08
struct FScrollBarStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush HorizontalBackgroundImage; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush VerticalBackgroundImage; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush VerticalTopSlotImage; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush HorizontalTopSlotImage; // Offset: 0x230 // Size: 0xb8
	struct FSlateBrush VerticalBottomSlotImage; // Offset: 0x2e8 // Size: 0xb8
	struct FSlateBrush HorizontalBottomSlotImage; // Offset: 0x3a0 // Size: 0xb8
	struct FSlateBrush NormalThumbImage; // Offset: 0x458 // Size: 0xb8
	struct FSlateBrush HoveredThumbImage; // Offset: 0x510 // Size: 0xb8
	struct FSlateBrush DraggedThumbImage; // Offset: 0x5c8 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.TextBlockStyle
// Size: 0x250 // Inherited bytes: 0x08
struct FTextBlockStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateFontInfo Font; // Offset: 0x08 // Size: 0x58
	char pad_0x60[0x8]; // Offset: 0x60 // Size: 0x08
	struct FSlateColor ColorAndOpacity; // Offset: 0x68 // Size: 0x28
	struct FVector2D ShadowOffset; // Offset: 0x90 // Size: 0x08
	struct FLinearColor ShadowColorAndOpacity; // Offset: 0x98 // Size: 0x10
	struct FSlateColor SelectedBackgroundColor; // Offset: 0xa8 // Size: 0x28
	struct FLinearColor HighlightColor; // Offset: 0xd0 // Size: 0x10
	struct FSlateBrush HighlightShape; // Offset: 0xe0 // Size: 0xb8
	struct FSlateBrush UnderlineBrush; // Offset: 0x198 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x3d8 // Inherited bytes: 0x08
struct FSpinBoxStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush BackgroundBrush; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush HoveredBackgroundBrush; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush ActiveFillBrush; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush InactiveFillBrush; // Offset: 0x230 // Size: 0xb8
	struct FSlateBrush ArrowsImage; // Offset: 0x2e8 // Size: 0xb8
	struct FSlateColor ForegroundColor; // Offset: 0x3a0 // Size: 0x28
	struct FMargin TextPadding; // Offset: 0x3c8 // Size: 0x10
};

// Object Name: ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x2e8 // Inherited bytes: 0x08
struct FScrollBoxStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush TopShadowBrush; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush BottomShadowBrush; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush LeftShadowBrush; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush RightShadowBrush; // Offset: 0x230 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.FocusEvent
// Size: 0x08 // Inherited bytes: 0x00
struct FFocusEvent {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct SlateCore.KeyEvent
// Size: 0x40 // Inherited bytes: 0x20
struct FKeyEvent : FInputEvent {
	// Fields
	char pad_0x20[0x20]; // Offset: 0x20 // Size: 0x20
};

// Object Name: ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x48 // Inherited bytes: 0x40
struct FAnalogInputEvent : FKeyEvent {
	// Fields
	char pad_0x40[0x8]; // Offset: 0x40 // Size: 0x08
};

// Object Name: ScriptStruct SlateCore.CharacterEvent
// Size: 0x28 // Inherited bytes: 0x20
struct FCharacterEvent : FInputEvent {
	// Fields
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct SlateCore.MotionEvent
// Size: 0x50 // Inherited bytes: 0x20
struct FMotionEvent : FInputEvent {
	// Fields
	char pad_0x20[0x30]; // Offset: 0x20 // Size: 0x30
};

// Object Name: ScriptStruct SlateCore.WAnimTime
// Size: 0x10 // Inherited bytes: 0x00
struct FWAnimTime {
	// Fields
	float PlayTime_2; // Offset: 0x00 // Size: 0x04
	float PlayTime_3; // Offset: 0x04 // Size: 0x04
	float PlayTime_4; // Offset: 0x08 // Size: 0x04
	float PlayTime_5; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct SlateCore.CompositeFont
// Size: 0x20 // Inherited bytes: 0x00
struct FCompositeFont {
	// Fields
	struct FTypeface DefaultTypeface; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FCompositeSubFont> SubTypefaces; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct SlateCore.CompositeSubFont
// Size: 0x28 // Inherited bytes: 0x00
struct FCompositeSubFont {
	// Fields
	struct FTypeface Typeface; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FInt32Range> CharacterRanges; // Offset: 0x10 // Size: 0x10
	float ScalingFactor; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct SlateCore.Typeface
// Size: 0x10 // Inherited bytes: 0x00
struct FTypeface {
	// Fields
	struct TArray<struct FTypefaceEntry> Fonts; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28 // Inherited bytes: 0x00
struct FTypefaceEntry {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FFontData Font; // Offset: 0x08 // Size: 0x20
};

// Object Name: ScriptStruct SlateCore.FontData
// Size: 0x20 // Inherited bytes: 0x00
struct FFontData {
	// Fields
	StrProperty FontFilename; // Offset: 0x00 // Size: 0x10
	enum class EFontHinting Hinting; // Offset: 0x10 // Size: 0x01
	enum class EFontLoadingPolicy LoadingPolicy; // Offset: 0x11 // Size: 0x01
	char pad_0x12[0x6]; // Offset: 0x12 // Size: 0x06
	struct UObject* FontFaceAsset; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct SlateCore.NavigationEvent
// Size: 0x28 // Inherited bytes: 0x20
struct FNavigationEvent : FInputEvent {
	// Fields
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct SlateCore.WindowStyle
// Size: 0x1490 // Inherited bytes: 0x08
struct FWindowStyle : FSlateWidgetStyle {
	// Fields
	struct FButtonStyle MinimizeButtonStyle; // Offset: 0x08 // Size: 0x338
	struct FButtonStyle MaximizeButtonStyle; // Offset: 0x340 // Size: 0x338
	struct FButtonStyle RestoreButtonStyle; // Offset: 0x678 // Size: 0x338
	struct FButtonStyle CloseButtonStyle; // Offset: 0x9b0 // Size: 0x338
	struct FTextBlockStyle TitleTextStyle; // Offset: 0xce8 // Size: 0x250
	struct FSlateBrush ActiveTitleBrush; // Offset: 0xf38 // Size: 0xb8
	struct FSlateBrush InactiveTitleBrush; // Offset: 0xff0 // Size: 0xb8
	struct FSlateBrush FlashTitleBrush; // Offset: 0x10a8 // Size: 0xb8
	struct FSlateColor BackgroundColor; // Offset: 0x1160 // Size: 0x28
	struct FSlateBrush OutlineBrush; // Offset: 0x1188 // Size: 0xb8
	struct FSlateColor OutlineColor; // Offset: 0x1240 // Size: 0x28
	struct FSlateBrush BorderBrush; // Offset: 0x1268 // Size: 0xb8
	struct FSlateBrush BackgroundBrush; // Offset: 0x1320 // Size: 0xb8
	struct FSlateBrush ChildBackgroundBrush; // Offset: 0x13d8 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x178 // Inherited bytes: 0x08
struct FScrollBorderStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush TopShadowBrush; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush BottomShadowBrush; // Offset: 0xc0 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.DockTabStyle
// Size: 0x940 // Inherited bytes: 0x08
struct FDockTabStyle : FSlateWidgetStyle {
	// Fields
	struct FButtonStyle CloseButtonStyle; // Offset: 0x08 // Size: 0x338
	struct FSlateBrush NormalBrush; // Offset: 0x340 // Size: 0xb8
	struct FSlateBrush ActiveBrush; // Offset: 0x3f8 // Size: 0xb8
	struct FSlateBrush ColorOverlayTabBrush; // Offset: 0x4b0 // Size: 0xb8
	struct FSlateBrush ColorOverlayIconBrush; // Offset: 0x568 // Size: 0xb8
	struct FSlateBrush ForegroundBrush; // Offset: 0x620 // Size: 0xb8
	struct FSlateBrush HoveredBrush; // Offset: 0x6d8 // Size: 0xb8
	struct FSlateBrush ContentAreaBrush; // Offset: 0x790 // Size: 0xb8
	struct FSlateBrush TabWellBrush; // Offset: 0x848 // Size: 0xb8
	struct FMargin TabPadding; // Offset: 0x900 // Size: 0x10
	float OverlapWidth; // Offset: 0x910 // Size: 0x04
	char pad_0x914[0x4]; // Offset: 0x914 // Size: 0x04
	struct FSlateColor FlashColor; // Offset: 0x918 // Size: 0x28
};

// Object Name: ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xf60 // Inherited bytes: 0x08
struct FHeaderRowStyle : FSlateWidgetStyle {
	// Fields
	struct FTableColumnHeaderStyle ColumnStyle; // Offset: 0x08 // Size: 0x680
	struct FTableColumnHeaderStyle LastColumnStyle; // Offset: 0x688 // Size: 0x680
	struct FSplitterStyle ColumnSplitterStyle; // Offset: 0xd08 // Size: 0x178
	struct FSlateBrush BackgroundBrush; // Offset: 0xe80 // Size: 0xb8
	struct FSlateColor ForegroundColor; // Offset: 0xf38 // Size: 0x28
};

// Object Name: ScriptStruct SlateCore.SplitterStyle
// Size: 0x178 // Inherited bytes: 0x08
struct FSplitterStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush HandleNormalBrush; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush HandleHighlightBrush; // Offset: 0xc0 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x680 // Inherited bytes: 0x08
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush SortPrimaryAscendingImage; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush SortPrimaryDescendingImage; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush SortSecondaryAscendingImage; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush SortSecondaryDescendingImage; // Offset: 0x230 // Size: 0xb8
	struct FSlateBrush NormalBrush; // Offset: 0x2e8 // Size: 0xb8
	struct FSlateBrush HoveredBrush; // Offset: 0x3a0 // Size: 0xb8
	struct FSlateBrush MenuDropdownImage; // Offset: 0x458 // Size: 0xb8
	struct FSlateBrush MenuDropdownNormalBorderBrush; // Offset: 0x510 // Size: 0xb8
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // Offset: 0x5c8 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xc8 // Inherited bytes: 0x08
struct FInlineTextImageStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush Image; // Offset: 0x08 // Size: 0xb8
	int16_t Baseline; // Offset: 0xc0 // Size: 0x02
	char pad_0xC2[0x6]; // Offset: 0xc2 // Size: 0x06
};

// Object Name: ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x690 // Inherited bytes: 0x08
struct FVolumeControlStyle : FSlateWidgetStyle {
	// Fields
	struct FSliderStyle SliderStyle; // Offset: 0x08 // Size: 0x2f0
	struct FSlateBrush HighVolumeImage; // Offset: 0x2f8 // Size: 0xb8
	struct FSlateBrush MidVolumeImage; // Offset: 0x3b0 // Size: 0xb8
	struct FSlateBrush LowVolumeImage; // Offset: 0x468 // Size: 0xb8
	struct FSlateBrush NoVolumeImage; // Offset: 0x520 // Size: 0xb8
	struct FSlateBrush MutedImage; // Offset: 0x5d8 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.SliderStyle
// Size: 0x2f0 // Inherited bytes: 0x08
struct FSliderStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush NormalBarImage; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush DisabledBarImage; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush NormalThumbImage; // Offset: 0x178 // Size: 0xb8
	struct FSlateBrush DisabledThumbImage; // Offset: 0x230 // Size: 0xb8
	float BarThickness; // Offset: 0x2e8 // Size: 0x04
	char pad_0x2EC[0x4]; // Offset: 0x2ec // Size: 0x04
};

// Object Name: ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xdc0 // Inherited bytes: 0x08
struct FSearchBoxStyle : FSlateWidgetStyle {
	// Fields
	struct FEditableTextBoxStyle TextBoxStyle; // Offset: 0x08 // Size: 0xa68
	struct FSlateFontInfo ActiveFontInfo; // Offset: 0xa70 // Size: 0x58
	struct FSlateBrush UpArrowImage; // Offset: 0xac8 // Size: 0xb8
	struct FSlateBrush DownArrowImage; // Offset: 0xb80 // Size: 0xb8
	struct FSlateBrush GlassImage; // Offset: 0xc38 // Size: 0xb8
	struct FSlateBrush ClearImage; // Offset: 0xcf0 // Size: 0xb8
	struct FMargin ImagePadding; // Offset: 0xda8 // Size: 0x10
	bool bLeftAlignButtons; // Offset: 0xdb8 // Size: 0x01
	char pad_0xDB9[0x7]; // Offset: 0xdb9 // Size: 0x07
};

// Object Name: ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x180 // Inherited bytes: 0x08
struct FExpandableAreaStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush CollapsedImage; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush ExpandedImage; // Offset: 0xc0 // Size: 0xb8
	float RolloutAnimationSeconds; // Offset: 0x178 // Size: 0x04
	char pad_0x17C[0x4]; // Offset: 0x17c // Size: 0x04
};

// Object Name: ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x230 // Inherited bytes: 0x08
struct FProgressBarStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush BackgroundImage; // Offset: 0x08 // Size: 0xb8
	struct FSlateBrush FillImage; // Offset: 0xc0 // Size: 0xb8
	struct FSlateBrush MarqueeImage; // Offset: 0x178 // Size: 0xb8
};

// Object Name: ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xcc0 // Inherited bytes: 0x08
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	// Fields
	struct FEditableTextBoxStyle EditableTextBoxStyle; // Offset: 0x08 // Size: 0xa68
	struct FTextBlockStyle TextStyle; // Offset: 0xa70 // Size: 0x250
};

// Object Name: ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x5a0 // Inherited bytes: 0x08
struct FHyperlinkStyle : FSlateWidgetStyle {
	// Fields
	struct FButtonStyle UnderlineStyle; // Offset: 0x08 // Size: 0x338
	struct FTextBlockStyle TextStyle; // Offset: 0x340 // Size: 0x250
	struct FMargin Padding; // Offset: 0x590 // Size: 0x10
};

// Object Name: ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x730 // Inherited bytes: 0x08
struct FCheckBoxStyle : FSlateWidgetStyle {
	// Fields
	enum class ESlateCheckBoxType CheckBoxType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FSlateBrush UncheckedImage; // Offset: 0x10 // Size: 0xb8
	struct FSlateBrush UncheckedHoveredImage; // Offset: 0xc8 // Size: 0xb8
	struct FSlateBrush UncheckedPressedImage; // Offset: 0x180 // Size: 0xb8
	struct FSlateBrush CheckedImage; // Offset: 0x238 // Size: 0xb8
	struct FSlateBrush CheckedHoveredImage; // Offset: 0x2f0 // Size: 0xb8
	struct FSlateBrush CheckedPressedImage; // Offset: 0x3a8 // Size: 0xb8
	struct FSlateBrush UndeterminedImage; // Offset: 0x460 // Size: 0xb8
	struct FSlateBrush UndeterminedHoveredImage; // Offset: 0x518 // Size: 0xb8
	struct FSlateBrush UndeterminedPressedImage; // Offset: 0x5d0 // Size: 0xb8
	struct FMargin Padding; // Offset: 0x688 // Size: 0x10
	struct FSlateColor ForegroundColor; // Offset: 0x698 // Size: 0x28
	struct FSlateColor BorderBackgroundColor; // Offset: 0x6c0 // Size: 0x28
	struct FSlateSound CheckedSlateSound; // Offset: 0x6e8 // Size: 0x18
	struct FSlateSound UncheckedSlateSound; // Offset: 0x700 // Size: 0x18
	struct FSlateSound HoveredSlateSound; // Offset: 0x718 // Size: 0x18
};

