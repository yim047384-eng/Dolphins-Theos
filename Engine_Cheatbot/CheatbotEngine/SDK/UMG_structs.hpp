#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct UMG.EventReply
// Size: 0xb8 // Inherited bytes: 0x00
struct FEventReply {
	// Fields
	char pad_0x0[0xb8]; // Offset: 0x00 // Size: 0xb8
};

// Object Name: ScriptStruct UMG.WidgetTransform
// Size: 0x1c // Inherited bytes: 0x00
struct FWidgetTransform {
	// Fields
	struct FVector2D Translation; // Offset: 0x00 // Size: 0x08
	struct FVector2D Scale; // Offset: 0x08 // Size: 0x08
	struct FVector2D Shear; // Offset: 0x10 // Size: 0x08
	float Angle; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct UMG.ShapedTextOptions
// Size: 0x04 // Inherited bytes: 0x00
struct FShapedTextOptions {
	// Fields
	char bOverride_TextShapingMethod : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_TextFlowDirection : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_2 : 6; // Offset: 0x00 // Size: 0x01
	enum class ETextShapingMethod TextShapingMethod; // Offset: 0x01 // Size: 0x01
	enum class ETextFlowDirection TextFlowDirection; // Offset: 0x02 // Size: 0x01
	char pad_0x3[0x1]; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct UMG.AnchorData
// Size: 0x28 // Inherited bytes: 0x00
struct FAnchorData {
	// Fields
	struct FMargin Offsets; // Offset: 0x00 // Size: 0x10
	struct FAnchors Anchors; // Offset: 0x10 // Size: 0x10
	struct FVector2D Alignment; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct UMG.PaintContext
// Size: 0x30 // Inherited bytes: 0x00
struct FPaintContext {
	// Fields
	char pad_0x0[0x30]; // Offset: 0x00 // Size: 0x30
};

// Object Name: ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedSlotBinding {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct UWidget* Content; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct UMG.DynamicPropertyPath
// Size: 0x10 // Inherited bytes: 0x00
struct FDynamicPropertyPath {
	// Fields
	struct TArray<struct FPropertyPathSegment> Segments; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct UMG.PropertyPathSegment
// Size: 0x20 // Inherited bytes: 0x00
struct FPropertyPathSegment {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	IntProperty ArrayIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UStruct* Struct; // Offset: 0x10 // Size: 0x08
	struct UField* Field; // Offset: 0x18 // Size: 0x08
};

// Object Name: ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x358 // Inherited bytes: 0x40
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FRichCurve Translation[0x2]; // Offset: 0x40 // Size: 0xe0
	struct FRichCurve Rotation; // Offset: 0x120 // Size: 0x70
	struct FRichCurve Scale[0x2]; // Offset: 0x190 // Size: 0xe0
	struct FRichCurve Shear[0x2]; // Offset: 0x270 // Size: 0xe0
	enum class EMovieSceneBlendType BlendType; // Offset: 0x350 // Size: 0x01
	char pad_0x351[0x7]; // Offset: 0x351 // Size: 0x07
};

// Object Name: ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x208 // Inherited bytes: 0x40
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FRichCurve TopCurve; // Offset: 0x40 // Size: 0x70
	struct FRichCurve LeftCurve; // Offset: 0xb0 // Size: 0x70
	struct FRichCurve RightCurve; // Offset: 0x120 // Size: 0x70
	struct FRichCurve BottomCurve; // Offset: 0x190 // Size: 0x70
	enum class EMovieSceneBlendType BlendType; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x7]; // Offset: 0x201 // Size: 0x07
};

// Object Name: ScriptStruct UMG.MovieSceneWAnimTimeSectionTemplate
// Size: 0x208 // Inherited bytes: 0x40
struct FMovieSceneWAnimTimeSectionTemplate : FMovieScenePropertySectionTemplate {
	// Fields
	struct FRichCurve PlayTimeCurve_2; // Offset: 0x40 // Size: 0x70
	struct FRichCurve PlayTimeCurve_3; // Offset: 0xb0 // Size: 0x70
	struct FRichCurve PlayTimeCurve_4; // Offset: 0x120 // Size: 0x70
	struct FRichCurve PlayTimeCurve_5; // Offset: 0x190 // Size: 0x70
	enum class EMovieSceneBlendType BlendType; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x7]; // Offset: 0x201 // Size: 0x07
};

// Object Name: ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x58 // Inherited bytes: 0x48
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	// Fields
	struct TArray<struct FName> BrushPropertyNamePath; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct UMG.SlateMeshVertex
// Size: 0x3c // Inherited bytes: 0x00
struct FSlateMeshVertex {
	// Fields
	struct FVector2D Position; // Offset: 0x00 // Size: 0x08
	struct FColor Color; // Offset: 0x08 // Size: 0x04
	struct FVector2D UV0; // Offset: 0x0c // Size: 0x08
	struct FVector2D UV1; // Offset: 0x14 // Size: 0x08
	struct FVector2D UV2; // Offset: 0x1c // Size: 0x08
	struct FVector2D UV3; // Offset: 0x24 // Size: 0x08
	struct FVector2D UV4; // Offset: 0x2c // Size: 0x08
	struct FVector2D UV5; // Offset: 0x34 // Size: 0x08
};

// Object Name: ScriptStruct UMG.SlateChildSize
// Size: 0x08 // Inherited bytes: 0x00
struct FSlateChildSize {
	// Fields
	float Value; // Offset: 0x00 // Size: 0x04
	enum class ESlateSizeRule SizeRule; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct UMG.LazyLoadBinding
// Size: 0x18 // Inherited bytes: 0x00
struct FLazyLoadBinding {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct TWeakObjectPtr<struct UPanelSlot> PanelSlot; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x28 // Inherited bytes: 0x00
struct FWidgetAnimationBinding {
	// Fields
	struct FName WidgetName; // Offset: 0x00 // Size: 0x08
	struct FName SlotWidgetName; // Offset: 0x08 // Size: 0x08
	struct FGuid AnimationGuid; // Offset: 0x10 // Size: 0x10
	bool bIsRootWidget; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x38 // Inherited bytes: 0x00
struct FDelegateRuntimeBinding {
	// Fields
	StrProperty ObjectName; // Offset: 0x00 // Size: 0x10
	struct FName PropertyName; // Offset: 0x10 // Size: 0x08
	struct FName FunctionName; // Offset: 0x18 // Size: 0x08
	struct FDynamicPropertyPath SourcePath; // Offset: 0x20 // Size: 0x10
	enum class EBindingKind Kind; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct UMG.WidgetNavigationData
// Size: 0x18 // Inherited bytes: 0x00
struct FWidgetNavigationData {
	// Fields
	enum class EUINavigationRule Rule; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct FName WidgetToFocus; // Offset: 0x08 // Size: 0x08
	struct TWeakObjectPtr<struct UWidget> Widget; // Offset: 0x10 // Size: 0x08
};

