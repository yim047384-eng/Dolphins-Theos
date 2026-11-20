#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UMG.Visual
// Size: 0x28 // Inherited bytes: 0x28
struct UVisual : UObject {
};

// Object Name: Class UMG.Widget
// Size: 0x100 // Inherited bytes: 0x28
struct UWidget : UVisual {
	// Fields
	struct UPanelSlot* Slot; // Offset: 0x28 // Size: 0x08
	DelegateProperty bIsEnabledDelegate; // Offset: 0x30 // Size: 0x10
	struct FText ToolTipText; // Offset: 0x40 // Size: 0x18
	DelegateProperty ToolTipTextDelegate; // Offset: 0x58 // Size: 0x10
	struct UWidget* ToolTipWidget; // Offset: 0x68 // Size: 0x08
	DelegateProperty ToolTipWidgetDelegate; // Offset: 0x70 // Size: 0x10
	DelegateProperty VisibilityDelegate; // Offset: 0x80 // Size: 0x10
	struct FWidgetTransform RenderTransform; // Offset: 0x90 // Size: 0x1c
	struct FVector2D RenderTransformPivot; // Offset: 0xac // Size: 0x08
	char bIsVariable : 1; // Offset: 0xb4 // Size: 0x01
	char bCreatedByConstructionScript : 1; // Offset: 0xb4 // Size: 0x01
	char bIsEnabled : 1; // Offset: 0xb4 // Size: 0x01
	char bOverride_Cursor : 1; // Offset: 0xb4 // Size: 0x01
	char bIsVolatile : 1; // Offset: 0xb4 // Size: 0x01
	char bIsVolatileThrottle : 1; // Offset: 0xb4 // Size: 0x01
	char bDisableVolatileInSlateGI : 1; // Offset: 0xb4 // Size: 0x01
	char bWriteSceneZBuffer : 1; // Offset: 0xb4 // Size: 0x01
	char bWriteSceneZBufferNew : 1; // Offset: 0xb5 // Size: 0x01
	char pad_0xB5_1 : 7; // Offset: 0xb5 // Size: 0x01
	char UsedLayerPolicy; // Offset: 0xb6 // Size: 0x01
	char PreservedLayerNum; // Offset: 0xb7 // Size: 0x01
	enum class EMouseCursor Cursor; // Offset: 0xb8 // Size: 0x01
	enum class EWidgetClipping Clipping; // Offset: 0xb9 // Size: 0x01
	enum class ESlateVisibility Visibility; // Offset: 0xba // Size: 0x01
	bool bVisiblePass; // Offset: 0xbb // Size: 0x01
	enum class EWidgetVisible WidgetVisible; // Offset: 0xbc // Size: 0x01
	bool bOpenReciveClick; // Offset: 0xbd // Size: 0x01
	bool bReciveClick; // Offset: 0xbe // Size: 0x01
	char pad_0xBF[0x1]; // Offset: 0xbf // Size: 0x01
	struct UWidgetNavigation* Navigation; // Offset: 0xc0 // Size: 0x08
	char pad_0xC8[0x28]; // Offset: 0xc8 // Size: 0x28
	struct TArray<struct UPropertyBinding*> NativeBindings; // Offset: 0xf0 // Size: 0x10

	// Functions

	// Object Name: Function UMG.Widget.SetWidgetVisibility
	// Flags: [Native|Public|BlueprintCallable]
	void SetWidgetVisibility(enum class ESlateVisibility InVisibility); // Offset: 0x105528880 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.SetWidgetRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWidgetRender(enum class EWidgetVisible InWidgetVisible); // Offset: 0x105528804 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.SetVisibility
	// Flags: [Native|Public|BlueprintCallable]
	void SetVisibility(enum class ESlateVisibility InVisibility); // Offset: 0x105528780 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.SetUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUserFocus(struct APlayerController* PlayerController); // Offset: 0x105528704 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.SetToolTipText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetToolTipText(struct FText& InToolTipText); // Offset: 0x105528658 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.Widget.SetToolTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetToolTip(struct UWidget* Widget); // Offset: 0x1055285dc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.SetRenderTranslation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetRenderTranslation(struct FVector2D Translation); // Offset: 0x105528564 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.SetRenderTransformPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetRenderTransformPivot(struct FVector2D Pivot); // Offset: 0x1055284ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.SetRenderTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRenderTransform(struct FWidgetTransform InTransform); // Offset: 0x105528440 // Return & Params: Num(1) Size(0x1c)

	// Object Name: Function UMG.Widget.SetRenderShear
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetRenderShear(struct FVector2D Shear); // Offset: 0x1055283c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.SetRenderScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetRenderScale(struct FVector2D Scale); // Offset: 0x105528350 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.SetRenderAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRenderAngle(float Angle); // Offset: 0x1055282d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Widget.SetNavigationRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Offset: 0x1055281e0 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function UMG.Widget.SetKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetKeyboardFocus(); // Offset: 0x1055281cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.Widget.SetIsEnabled
	// Flags: [Native|Public|BlueprintCallable]
	void SetIsEnabled(bool bInIsEnabled); // Offset: 0x105528140 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.SetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCursor(enum class EMouseCursor InCursor); // Offset: 0x1055280c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.SetClipping
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClipping(enum class EWidgetClipping InClipping); // Offset: 0x105528048 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.SetAllNavigationRules
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Offset: 0x105527f90 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.Widget.ResetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetCursor(); // Offset: 0x105527f7c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.Widget.RemoveFromParent
	// Flags: [Native|Public|BlueprintCallable]
	void RemoveFromParent(); // Offset: 0x105527f60 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction UMG.Widget.OnReply__DelegateSignature
	// Flags: [Public|Delegate]
	struct FEventReply OnReply__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xb8)

	// Object Name: DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	// Flags: [Public|Delegate|HasOutParms]
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.Widget.IsVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsVisible(); // Offset: 0x105527f2c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.IsHovered
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsHovered(); // Offset: 0x105527ef8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.InvalidateLayoutCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InvalidateLayoutCache(); // Offset: 0x105527ee4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.Widget.InvalidateLayoutAndVolatility
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InvalidateLayoutAndVolatility(); // Offset: 0x105527ed0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.Widget.HasUserFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Offset: 0x105527e44 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.Widget.HasUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasUserFocus(struct APlayerController* PlayerController); // Offset: 0x105527db8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.Widget.HasMouseCapture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasMouseCapture(); // Offset: 0x105527d84 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.HasKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasKeyboardFocus(); // Offset: 0x105527d50 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.HasFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasFocusedDescendants(); // Offset: 0x105527d1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.HasAnyUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasAnyUserFocus(); // Offset: 0x105527ce8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.GetWidgetRender
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EWidgetVisible GetWidgetRender(); // Offset: 0x105527cb4 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	// Flags: [Public|Delegate]
	struct UWidget* GetWidget__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ESlateVisibility GetVisibility(); // Offset: 0x105527c80 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.GetTickSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGeometry GetTickSpaceGeometry(); // Offset: 0x105527c48 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function UMG.Widget.GetTheTemplate
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UWidget* GetTheTemplate(); // Offset: 0x105527c14 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction UMG.Widget.GetText__DelegateSignature
	// Flags: [Public|Delegate]
	struct FText GetText__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	// Flags: [Public|Delegate]
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	// Flags: [Public|Delegate]
	struct FSlateColor GetSlateColor__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x28)

	// Object Name: DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	// Flags: [Public|Delegate]
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.Widget.GetParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPanelWidget* GetParent(); // Offset: 0x105527be0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.GetPaintSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGeometry GetPaintSpaceGeometry(); // Offset: 0x105527ba8 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function UMG.Widget.GetOwningPlayer
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct APlayerController* GetOwningPlayer(); // Offset: 0x105527b6c // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	// Flags: [Public|Delegate]
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	struct FLinearColor GetLinearColor__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Widget.GetIsEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsEnabled(); // Offset: 0x105527b38 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	// Flags: [Public|Delegate]
	IntProperty GetInt32__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	// Flags: [Public|Delegate]
	float GetFloat__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Widget.GetDesiredSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetDesiredSize(); // Offset: 0x105527b04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Widget.GetClipping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EWidgetClipping GetClipping(); // Offset: 0x105527ad0 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	// Flags: [Public|Delegate]
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.GetCachedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGeometry GetCachedGeometry(); // Offset: 0x105527a98 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function UMG.Widget.GetCachedAllottedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FGeometry GetCachedAllottedGeometry(); // Offset: 0x105527a60 // Return & Params: Num(1) Size(0x38)

	// Object Name: DelegateFunction UMG.Widget.GetBool__DelegateSignature
	// Flags: [Public|Delegate]
	bool GetBool__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	// Flags: [Public|Delegate]
	struct UWidget* GenerateWidgetForString__DelegateSignature(StrProperty Item); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// Flags: [Public|Delegate]
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.Widget.ForceVolatileThrottle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForceVolatileThrottle(bool bForce); // Offset: 0x1055279dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.ForceVolatile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForceVolatile(bool bForce); // Offset: 0x105527958 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.ForceLayoutPrepass
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForceLayoutPrepass(); // Offset: 0x105527944 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.Widget.DisableVolatileInSlateGI
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DisableVolatileInSlateGI(bool bDisabled); // Offset: 0x1055278c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Widget.AdaptationWidgetSlot
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AdaptationWidgetSlot(struct FMargin& InOffset); // Offset: 0x105527834 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class UMG.UserWidget
// Size: 0x260 // Inherited bytes: 0x100
struct UUserWidget : UWidget {
	// Fields
	char pad_0x100[0x8]; // Offset: 0x100 // Size: 0x08
	struct FLinearColor ColorAndOpacity; // Offset: 0x108 // Size: 0x10
	DelegateProperty ColorAndOpacityDelegate; // Offset: 0x118 // Size: 0x10
	struct FSlateColor ForegroundColor; // Offset: 0x128 // Size: 0x28
	DelegateProperty ForegroundColorDelegate; // Offset: 0x150 // Size: 0x10
	struct FMargin Padding; // Offset: 0x160 // Size: 0x10
	struct FWAnimTime WAnimTime; // Offset: 0x170 // Size: 0x10
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // Offset: 0x180 // Size: 0x10
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // Offset: 0x190 // Size: 0x10
	DelegateProperty OnTouchStart; // Offset: 0x1a0 // Size: 0x10
	DelegateProperty OnTouchMove; // Offset: 0x1b0 // Size: 0x10
	DelegateProperty OnTouchEnd; // Offset: 0x1c0 // Size: 0x10
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // Offset: 0x1d0 // Size: 0x10
	struct UWidgetTree* WidgetTree; // Offset: 0x1e0 // Size: 0x08
	IntProperty Priority; // Offset: 0x1e8 // Size: 0x04
	char bSupportsKeyboardFocus : 1; // Offset: 0x1ec // Size: 0x01
	char bIsFocusable : 1; // Offset: 0x1ec // Size: 0x01
	char bStopAction : 1; // Offset: 0x1ec // Size: 0x01
	char bCanEverTick : 1; // Offset: 0x1ec // Size: 0x01
	char bCanEverPaint : 1; // Offset: 0x1ec // Size: 0x01
	char bDontPaintWhenChildEmpty : 1; // Offset: 0x1ec // Size: 0x01
	char bEnableLazyLoad : 1; // Offset: 0x1ec // Size: 0x01
	char pad_0x1EC_7 : 1; // Offset: 0x1ec // Size: 0x01
	char bCookedWidgetTree : 1; // Offset: 0x1ed // Size: 0x01
	char pad_0x1ED_1 : 7; // Offset: 0x1ed // Size: 0x01
	bool needAutoPlay; // Offset: 0x1ee // Size: 0x01
	bool isAutoLoop; // Offset: 0x1ef // Size: 0x01
	struct TArray<struct FName> autoPlayNameList; // Offset: 0x1f0 // Size: 0x10
	enum class EWidgetTickFrequency TickFrequency; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x7]; // Offset: 0x201 // Size: 0x07
	struct UInputComponent* InputComponent; // Offset: 0x208 // Size: 0x08
	char pad_0x210[0x50]; // Offset: 0x210 // Size: 0x50

	// Functions

	// Object Name: Function UMG.UserWidget.UnregisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void UnregisterInputComponent(); // Offset: 0x105522b0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function UMG.UserWidget.StopListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Offset: 0x105522a4c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.UserWidget.StopListeningForAllInputActions
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void StopListeningForAllInputActions(); // Offset: 0x105522a38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.StopAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Offset: 0x1055229bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.SetWAnimTime
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetWAnimTime(struct FWAnimTime InWAnimTime); // Offset: 0x10552293c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.UserWidget.SetPositionInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Offset: 0x105522880 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.UserWidget.SetPlaybackSpeed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Offset: 0x1055227c8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UMG.UserWidget.SetPadding
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105522748 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.UserWidget.SetOwningPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Offset: 0x1055226cc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.SetOwningLocalPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetOwningLocalPlayer(struct ULocalPlayer* LocalPlayer); // Offset: 0x105522650 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.SetNumLoopsToPlay
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, IntProperty NumLoopsToPlay); // Offset: 0x105522598 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UMG.UserWidget.SetInputActionPriority
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetInputActionPriority(IntProperty NewPriority); // Offset: 0x10552251c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.UserWidget.SetInputActionBlocking
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetInputActionBlocking(bool bShouldBlock); // Offset: 0x105522498 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.SetForegroundColor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Offset: 0x105522398 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function UMG.UserWidget.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x105522314 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.SetDesiredSizeInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	void SetDesiredSizeInViewport(struct FVector2D Size); // Offset: 0x10552229c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.SetColorAndOpacity
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Offset: 0x105522220 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.UserWidget.SetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetAnchorsInViewport(struct FAnchors Anchors); // Offset: 0x1055221a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.UserWidget.SetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	void SetAlignmentInViewport(struct FVector2D Alignment); // Offset: 0x105522128 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.ReverseAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Offset: 0x1055220ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.RemoveFromViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void RemoveFromViewport(); // Offset: 0x105522098 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.RegisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void RegisterInputComponent(); // Offset: 0x105522084 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.PlayUserWidgetAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void PlayUserWidgetAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, IntProperty NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Offset: 0x105521f18 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function UMG.UserWidget.PlaySound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void PlaySound(struct USoundBase* SoundToPlay); // Offset: 0x105521e9c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.PlayAnimationTo
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void PlayAnimationTo(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, IntProperty NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Offset: 0x105521cf8 // Return & Params: Num(6) Size(0x1c)

	// Object Name: Function UMG.UserWidget.PlayAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, IntProperty NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Offset: 0x105521b8c // Return & Params: Num(5) Size(0x18)

	// Object Name: Function UMG.UserWidget.PauseAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Offset: 0x105521b00 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UMG.UserWidget.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnTouchGesture
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnRemovedFromFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.OnPreviewMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnPreviewKeyDown
	// Flags: [Event|Public|BlueprintEvent]
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x130)

	// Object Name: Function UMG.UserWidget.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const]
	void OnPaint(struct FPaintContext& Context); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function UMG.UserWidget.OnMouseWheel
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnMouseMove
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function UMG.UserWidget.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb0)

	// Object Name: Function UMG.UserWidget.OnMouseCaptureLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void OnMouseCaptureLost(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.OnMouseButtonUp
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnMouseButtonDoubleClick
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function UMG.UserWidget.OnMotionDetected
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x140)

	// Object Name: Function UMG.UserWidget.OnKeyUp
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x130)

	// Object Name: Function UMG.UserWidget.OnKeyDown
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x130)

	// Object Name: Function UMG.UserWidget.OnKeyChar
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x118)

	// Object Name: Function UMG.UserWidget.OnFocusReceived
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xf8)

	// Object Name: Function UMG.UserWidget.OnFocusLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.OnDrop
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xb9)

	// Object Name: Function UMG.UserWidget.OnDragOver
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xb9)

	// Object Name: Function UMG.UserWidget.OnDragLeave
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function UMG.UserWidget.OnDragEnter
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function UMG.UserWidget.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function UMG.UserWidget.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function UMG.UserWidget.OnAnimationStarted
	// Flags: [BlueprintCosmetic|Native|Event|Public|BlueprintEvent]
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Offset: 0x105521a7c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.OnAnimationFinished
	// Flags: [BlueprintCosmetic|Native|Event|Public|BlueprintEvent]
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Offset: 0x1055219f8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.OnAnalogValueChanged
	// Flags: [Event|Public|BlueprintEvent]
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x138)

	// Object Name: Function UMG.UserWidget.OnAddedToFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.ListenForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, DelegateProperty Callback); // Offset: 0x10552189c // Return & Params: Num(4) Size(0x20)

	// Object Name: Function UMG.UserWidget.IsPlayingAnimation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlayingAnimation(); // Offset: 0x105521878 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.IsListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsListeningForInputAction(struct FName ActionName); // Offset: 0x1055217ec // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.UserWidget.IsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInViewport(); // Offset: 0x1055217b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.IsInteractable
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent|Const]
	bool IsInteractable(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.IsAnyAnimationPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsAnyAnimationPlaying(); // Offset: 0x105521784 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.IsAnimationPlayingForward
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Offset: 0x1055216f8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.UserWidget.IsAnimationPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Offset: 0x10552166c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.UserWidget.GetWidgetFromName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	struct UWidget* GetWidgetFromName(struct FName& Name); // Offset: 0x1055215d0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.UserWidget.GetOwningPlayerPawn
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct APawn* GetOwningPlayerPawn(); // Offset: 0x10552159c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.GetOwningPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct APlayerController* GetOwningPlayer(); // Offset: 0x105521560 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.GetOwningLocalPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULocalPlayer* GetOwningLocalPlayer(); // Offset: 0x10552152c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.GetOrCreateLazyChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UWidget* GetOrCreateLazyChild(StrProperty Name); // Offset: 0x105521438 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UMG.UserWidget.GetIsVisible
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsVisible(); // Offset: 0x105521404 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.GetEnableLazyLoad
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetEnableLazyLoad(); // Offset: 0x1055213d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x10552139c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UserWidget.GetAnimationCurrentTime
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Offset: 0x105521310 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UMG.UserWidget.GetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FAnchors GetAnchorsInViewport(); // Offset: 0x1055212d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.UserWidget.GetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetAlignmentInViewport(); // Offset: 0x1055212a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.UserWidget.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Destruct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.UserWidget.AddToViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void AddToViewport(IntProperty ZOrder); // Offset: 0x105521228 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.UserWidget.AddToPlayerScreen
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	bool AddToPlayerScreen(IntProperty ZOrder); // Offset: 0x10552119c // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class UMG.WidgetComponent
// Size: 0xb90 // Inherited bytes: 0xa20
struct UWidgetComponent : UMeshComponent {
	// Fields
	bool bAntialiased; // Offset: 0xa1d // Size: 0x01
	float RTScale; // Offset: 0xa20 // Size: 0x04
	enum class EWidgetSpace Space; // Offset: 0xa24 // Size: 0x01
	enum class EWidgetTimingPolicy TimingPolicy; // Offset: 0xa25 // Size: 0x01
	char pad_0xA27[0x1]; // Offset: 0xa27 // Size: 0x01
	struct UUserWidget* WidgetClass; // Offset: 0xa28 // Size: 0x08
	struct FIntPoint DrawSize; // Offset: 0xa30 // Size: 0x08
	bool bManuallyRedraw; // Offset: 0xa38 // Size: 0x01
	bool bRedrawRequested; // Offset: 0xa39 // Size: 0x01
	char pad_0xA3A[0x2]; // Offset: 0xa3a // Size: 0x02
	float RedrawTime; // Offset: 0xa3c // Size: 0x04
	char pad_0xA40[0x8]; // Offset: 0xa40 // Size: 0x08
	struct FIntPoint CurrentDrawSize; // Offset: 0xa48 // Size: 0x08
	char pad_0xA50[0x4]; // Offset: 0xa50 // Size: 0x04
	bool bDrawAtDesiredSize; // Offset: 0xa54 // Size: 0x01
	char pad_0xA55[0x3]; // Offset: 0xa55 // Size: 0x03
	struct FVector2D Pivot; // Offset: 0xa58 // Size: 0x08
	bool bReceiveHardwareInput; // Offset: 0xa60 // Size: 0x01
	bool bWindowFocusable; // Offset: 0xa61 // Size: 0x01
	char pad_0xA62[0x6]; // Offset: 0xa62 // Size: 0x06
	struct ULocalPlayer* OwnerPlayer; // Offset: 0xa68 // Size: 0x08
	struct FLinearColor BackgroundColor; // Offset: 0xa70 // Size: 0x10
	struct FLinearColor TintColorAndOpacity; // Offset: 0xa80 // Size: 0x10
	float OpacityFromTexture; // Offset: 0xa90 // Size: 0x04
	enum class EWidgetBlendMode BlendMode; // Offset: 0xa94 // Size: 0x01
	bool bIsTwoSided; // Offset: 0xa95 // Size: 0x01
	bool TickWhenOffscreen; // Offset: 0xa96 // Size: 0x01
	char pad_0xA97[0x1]; // Offset: 0xa97 // Size: 0x01
	struct UUserWidget* Widget; // Offset: 0xa98 // Size: 0x08
	char pad_0xAA0[0x20]; // Offset: 0xaa0 // Size: 0x20
	struct UBodySetup* BodySetup; // Offset: 0xac0 // Size: 0x08
	struct UMaterialInterface* TranslucentMaterialAA; // Offset: 0xac8 // Size: 0x08
	struct UMaterialInterface* TranslucentMaterialAA_OneSided; // Offset: 0xad0 // Size: 0x08
	struct UMaterialInterface* TranslucentMaterial; // Offset: 0xad8 // Size: 0x08
	struct UMaterialInterface* TranslucentMaterial_OneSided; // Offset: 0xae0 // Size: 0x08
	struct UMaterialInterface* OpaqueMaterial; // Offset: 0xae8 // Size: 0x08
	struct UMaterialInterface* OpaqueMaterial_OneSided; // Offset: 0xaf0 // Size: 0x08
	struct UMaterialInterface* MaskedMaterial; // Offset: 0xaf8 // Size: 0x08
	struct UMaterialInterface* MaskedMaterial_OneSided; // Offset: 0xb00 // Size: 0x08
	struct UTextureRenderTarget2D* RenderTarget; // Offset: 0xb08 // Size: 0x08
	struct UMaterialInstanceDynamic* MaterialInstance; // Offset: 0xb10 // Size: 0x08
	bool bAddedToScreen; // Offset: 0xb18 // Size: 0x01
	bool bEditTimeUsable; // Offset: 0xb19 // Size: 0x01
	char pad_0xB1A[0x6]; // Offset: 0xb1a // Size: 0x06
	struct FName SharedLayerName; // Offset: 0xb20 // Size: 0x08
	IntProperty LayerZOrder; // Offset: 0xb28 // Size: 0x04
	enum class EWidgetGeometryMode GeometryMode; // Offset: 0xb2c // Size: 0x01
	char pad_0xB2D[0x3]; // Offset: 0xb2d // Size: 0x03
	float CylinderArcAngle; // Offset: 0xb30 // Size: 0x04
	char pad_0xB34[0x54]; // Offset: 0xb34 // Size: 0x54
	bool ForceDisableShareRT; // Offset: 0xb88 // Size: 0x01
	char pad_0xB89[0x7]; // Offset: 0xb89 // Size: 0x07

	// Functions

	// Object Name: Function UMG.WidgetComponent.SetWidget
	// Flags: [Native|Public|BlueprintCallable]
	void SetWidget(struct UUserWidget* Widget); // Offset: 0x10552f538 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.SetTintColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Offset: 0x10552f4bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.WidgetComponent.SetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Offset: 0x10552f440 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.SetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetDrawSize(struct FVector2D Size); // Offset: 0x10552f3c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Offset: 0x10552f34c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.WidgetComponent.RequestRedraw
	// Flags: [Native|Public|BlueprintCallable]
	void RequestRedraw(); // Offset: 0x10552f330 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.WidgetComponent.GetUserWidgetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUserWidget* GetUserWidgetObject(); // Offset: 0x10552f2fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.GetRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UTextureRenderTarget2D* GetRenderTarget(); // Offset: 0x10552f2c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.GetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULocalPlayer* GetOwnerPlayer(); // Offset: 0x10552f294 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.GetMaterialInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Offset: 0x10552f260 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.GetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetDrawSize(); // Offset: 0x10552f22c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetComponent.GetCurrentDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetCurrentDrawSize(); // Offset: 0x10552f1f8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.PanelWidget
// Size: 0x118 // Inherited bytes: 0x100
struct UPanelWidget : UWidget {
	// Fields
	struct TArray<struct UPanelSlot*> Slots; // Offset: 0x100 // Size: 0x10
	char pad_0x110[0x8]; // Offset: 0x110 // Size: 0x08

	// Functions

	// Object Name: Function UMG.PanelWidget.RemoveChildAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveChildAt(IntProperty Index); // Offset: 0x105514c8c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function UMG.PanelWidget.RemoveChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveChild(struct UWidget* Content); // Offset: 0x105514c00 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.PanelWidget.HasChild
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasChild(struct UWidget* Content); // Offset: 0x105514b74 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.PanelWidget.HasAnyChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasAnyChildren(); // Offset: 0x105514b40 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.PanelWidget.GetChildrenCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildrenCount(); // Offset: 0x105514b0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.PanelWidget.GetChildIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildIndex(struct UWidget* Content); // Offset: 0x105514a80 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UMG.PanelWidget.GetChildAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidget* GetChildAt(IntProperty Index); // Offset: 0x1055149f4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.PanelWidget.ClearChildren
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearChildren(); // Offset: 0x1055149e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.PanelWidget.AddChildAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPanelSlot* AddChildAt(IntProperty Index, struct UWidget* Content); // Offset: 0x105514918 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function UMG.PanelWidget.AddChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPanelSlot* AddChild(struct UWidget* Content); // Offset: 0x10551488c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.CanvasPanel
// Size: 0x130 // Inherited bytes: 0x118
struct UCanvasPanel : UPanelWidget {
	// Fields
	char pad_0x118[0x10]; // Offset: 0x118 // Size: 0x10
	bool bDontPaintWhenChildEmpty; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x7]; // Offset: 0x129 // Size: 0x07

	// Functions

	// Object Name: Function UMG.CanvasPanel.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x105507178 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CanvasPanel.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Protected|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x105507144 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CanvasPanel.AddChildToCanvas
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Offset: 0x1055070b8 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.ContentWidget
// Size: 0x118 // Inherited bytes: 0x118
struct UContentWidget : UPanelWidget {
	// Functions

	// Object Name: Function UMG.ContentWidget.SetContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPanelSlot* SetContent(struct UWidget* Content); // Offset: 0x105509a88 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.ContentWidget.GetContentSlot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPanelSlot* GetContentSlot(); // Offset: 0x105509a54 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.ContentWidget.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidget* GetContent(); // Offset: 0x105509a20 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.Slider
// Size: 0x498 // Inherited bytes: 0x100
struct USlider : UWidget {
	// Fields
	float Value; // Offset: 0x100 // Size: 0x04
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
	DelegateProperty ValueDelegate; // Offset: 0x108 // Size: 0x10
	struct FSliderStyle WidgetStyle; // Offset: 0x118 // Size: 0x2f0
	enum class EOrientation Orientation; // Offset: 0x408 // Size: 0x01
	char pad_0x409[0x3]; // Offset: 0x409 // Size: 0x03
	struct FLinearColor SliderBarColor; // Offset: 0x40c // Size: 0x10
	struct FLinearColor SliderHandleColor; // Offset: 0x41c // Size: 0x10
	bool IndentHandle; // Offset: 0x42c // Size: 0x01
	bool Locked; // Offset: 0x42d // Size: 0x01
	char pad_0x42E[0x2]; // Offset: 0x42e // Size: 0x02
	float StepSize; // Offset: 0x430 // Size: 0x04
	bool IsFocusable; // Offset: 0x434 // Size: 0x01
	char pad_0x435[0x3]; // Offset: 0x435 // Size: 0x03
	struct FScriptMulticastDelegate OnMouseCaptureBegin; // Offset: 0x438 // Size: 0x10
	struct FScriptMulticastDelegate OnMouseCaptureEnd; // Offset: 0x448 // Size: 0x10
	struct FScriptMulticastDelegate OnControllerCaptureBegin; // Offset: 0x458 // Size: 0x10
	struct FScriptMulticastDelegate OnControllerCaptureEnd; // Offset: 0x468 // Size: 0x10
	struct FScriptMulticastDelegate OnValueChanged; // Offset: 0x478 // Size: 0x10
	char pad_0x488[0x10]; // Offset: 0x488 // Size: 0x10

	// Functions

	// Object Name: Function UMG.Slider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetValue(float InValue); // Offset: 0x10551a468 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Slider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetStepSize(float InValue); // Offset: 0x10551a3ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Slider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSliderHandleColor(struct FLinearColor InValue); // Offset: 0x10551a370 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Slider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSliderBarColor(struct FLinearColor InValue); // Offset: 0x10551a2f4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Slider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLocked(bool InValue); // Offset: 0x10551a270 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Slider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIndentHandle(bool InValue); // Offset: 0x10551a1ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Slider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetValue(); // Offset: 0x10551a1b8 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.PanelSlot
// Size: 0x40 // Inherited bytes: 0x28
struct UPanelSlot : UVisual {
	// Fields
	struct UPanelWidget* Parent; // Offset: 0x28 // Size: 0x08
	struct UWidget* Content; // Offset: 0x30 // Size: 0x08
	struct UObject* ContentClass; // Offset: 0x38 // Size: 0x08
};

// Object Name: Class UMG.HorizontalBoxSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UHorizontalBoxSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	struct FSlateChildSize Size; // Offset: 0x50 // Size: 0x08
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x58 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0xe]; // Offset: 0x5a // Size: 0x0e

	// Functions

	// Object Name: Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x10550e014 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.HorizontalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSize(struct FSlateChildSize InSize); // Offset: 0x10550df7c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.HorizontalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x10550defc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x10550de80 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.HorizontalBox
// Size: 0x128 // Inherited bytes: 0x118
struct UHorizontalBox : UPanelWidget {
	// Fields
	bool bDontPaintWhenChildEmpty; // Offset: 0x111 // Size: 0x01
	char pad_0x119[0xf]; // Offset: 0x119 // Size: 0x0f

	// Functions

	// Object Name: Function UMG.HorizontalBox.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x10550dbec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.HorizontalBox.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Protected|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x10550dbb8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.HorizontalBox.AddChildToHorizontalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Offset: 0x10550db2c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.VerticalBoxSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UVerticalBoxSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	struct FSlateChildSize Size; // Offset: 0x50 // Size: 0x08
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x58 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0xe]; // Offset: 0x5a // Size: 0x0e

	// Functions

	// Object Name: Function UMG.VerticalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105526710 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.VerticalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSize(struct FSlateChildSize InSize); // Offset: 0x105526678 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.VerticalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x1055265f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x10552657c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.VerticalBox
// Size: 0x128 // Inherited bytes: 0x118
struct UVerticalBox : UPanelWidget {
	// Fields
	bool bDontPaintWhenChildEmpty; // Offset: 0x111 // Size: 0x01
	char pad_0x119[0xf]; // Offset: 0x119 // Size: 0x0f

	// Functions

	// Object Name: Function UMG.VerticalBox.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x1055262e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.VerticalBox.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Protected|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x1055262b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.VerticalBox.AddChildToVerticalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Offset: 0x105526224 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.ScrollBox
// Size: 0xb28 // Inherited bytes: 0x118
struct UScrollBox : UPanelWidget {
	// Fields
	struct FScrollBoxStyle WidgetStyle; // Offset: 0x118 // Size: 0x2e8
	struct FScrollBarStyle WidgetBarStyle; // Offset: 0x400 // Size: 0x680
	struct USlateWidgetStyleAsset* Style; // Offset: 0xa80 // Size: 0x08
	struct USlateWidgetStyleAsset* BarStyle; // Offset: 0xa88 // Size: 0x08
	enum class EOrientation Orientation; // Offset: 0xa90 // Size: 0x01
	enum class ESlateVisibility ScrollBarVisibility; // Offset: 0xa91 // Size: 0x01
	enum class EConsumeMouseWheel ConsumeMouseWheel; // Offset: 0xa92 // Size: 0x01
	char pad_0xA93[0x1]; // Offset: 0xa93 // Size: 0x01
	struct FVector2D ScrollbarThickness; // Offset: 0xa94 // Size: 0x08
	bool AlwaysShowScrollbar; // Offset: 0xa9c // Size: 0x01
	bool AllowOverscroll; // Offset: 0xa9d // Size: 0x01
	enum class EDescendantScrollDestination NavigationDestination; // Offset: 0xa9e // Size: 0x01
	char pad_0xA9F[0x1]; // Offset: 0xa9f // Size: 0x01
	float NavigationScrollPadding; // Offset: 0xaa0 // Size: 0x04
	float EdgePadding; // Offset: 0xaa4 // Size: 0x04
	bool bAllowRightClickDragScrolling; // Offset: 0xaa8 // Size: 0x01
	bool bDisableHorOrVertMove; // Offset: 0xaa9 // Size: 0x01
	bool bDisableScroll; // Offset: 0xaaa // Size: 0x01
	bool bDontPaintWhenChildEmpty; // Offset: 0xaab // Size: 0x01
	char pad_0xAAC[0x4]; // Offset: 0xaac // Size: 0x04
	struct FScriptMulticastDelegate OnUserScrolled; // Offset: 0xab0 // Size: 0x10
	struct FScriptMulticastDelegate OnUserScrolledUnused; // Offset: 0xac0 // Size: 0x10
	struct FScriptMulticastDelegate OnBeginScroll; // Offset: 0xad0 // Size: 0x10
	struct FScriptMulticastDelegate OnEndScroll; // Offset: 0xae0 // Size: 0x10
	struct FScriptMulticastDelegate OnTouchStartEvent; // Offset: 0xaf0 // Size: 0x10
	struct FScriptMulticastDelegate OnTouchEndEvent; // Offset: 0xb00 // Size: 0x10
	char pad_0xB10[0x18]; // Offset: 0xb10 // Size: 0x18

	// Functions

	// Object Name: Function UMG.ScrollBox.StopScroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopScroll(); // Offset: 0x1055171f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.ScrollBox.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScrollOffset(float NewScrollOffset); // Offset: 0x10551717c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ScrollBox.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Offset: 0x105517100 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.SetScrollbarThickness
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Offset: 0x105517078 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.ScrollBox.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOrientation(enum class EOrientation NewOrientation); // Offset: 0x105516ffc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.SetMaxScrollSpd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxScrollSpd(float Val); // Offset: 0x105516f80 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ScrollBox.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x105516efc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Offset: 0x105516e78 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.SetAllowOverscroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAllowOverscroll(bool NewAllowOverscroll); // Offset: 0x105516df4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.ScrollWidgetIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination); // Offset: 0x105516cf0 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function UMG.ScrollBox.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToStart(); // Offset: 0x105516cdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.ScrollBox.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToEnd(); // Offset: 0x105516cc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.ScrollBox.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetScrollOffset(); // Offset: 0x105516c94 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ScrollBox.GetScrollEndOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetScrollEndOffset(); // Offset: 0x105516c60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ScrollBox.GetIsScrolling
	// Flags: [Final|Native|Public]
	bool GetIsScrolling(); // Offset: 0x105516c38 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x105516c04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScrollBox.GetCacheOverscrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetCacheOverscrollOffset(); // Offset: 0x105516bd0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.TextLayoutWidget
// Size: 0x128 // Inherited bytes: 0x100
struct UTextLayoutWidget : UWidget {
	// Fields
	struct FShapedTextOptions ShapedTextOptions; // Offset: 0x100 // Size: 0x04
	enum class ETextJustify Justification; // Offset: 0x104 // Size: 0x01
	enum class ETextVerticalJustify VerticalJustification; // Offset: 0x105 // Size: 0x01
	bool AutoWrapText; // Offset: 0x106 // Size: 0x01
	char pad_0x107[0x1]; // Offset: 0x107 // Size: 0x01
	float WrapTextAt; // Offset: 0x108 // Size: 0x04
	enum class ETextWrappingPolicy WrappingPolicy; // Offset: 0x10c // Size: 0x01
	char pad_0x10D[0x3]; // Offset: 0x10d // Size: 0x03
	struct FMargin Margin; // Offset: 0x110 // Size: 0x10
	float LineHeightPercentage; // Offset: 0x120 // Size: 0x04
	char pad_0x124[0x4]; // Offset: 0x124 // Size: 0x04
};

// Object Name: Class UMG.TextBlock
// Size: 0x298 // Inherited bytes: 0x128
struct UTextBlock : UTextLayoutWidget {
	// Fields
	struct FText Text; // Offset: 0x128 // Size: 0x18
	bool AutoCapitalizeText; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x7]; // Offset: 0x141 // Size: 0x07
	DelegateProperty TextDelegate; // Offset: 0x148 // Size: 0x10
	struct TArray<struct FSlateColor> ColorSwitchList; // Offset: 0x158 // Size: 0x10
	IntProperty ActiveColorIndex; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x4]; // Offset: 0x16c // Size: 0x04
	struct FSlateColor ColorAndOpacity; // Offset: 0x170 // Size: 0x28
	DelegateProperty ColorAndOpacityDelegate; // Offset: 0x198 // Size: 0x10
	struct FSlateColor SelectColorAndOpacity; // Offset: 0x1a8 // Size: 0x28
	struct FSlateColor NoSelectColorAndOpacity; // Offset: 0x1d0 // Size: 0x28
	bool bHaveSelectColorAndOpacity; // Offset: 0x1f8 // Size: 0x01
	bool bIsSelected; // Offset: 0x1f9 // Size: 0x01
	char pad_0x1FA[0x6]; // Offset: 0x1fa // Size: 0x06
	struct FSlateFontInfo Font; // Offset: 0x200 // Size: 0x58
	struct FVector2D ShadowOffset; // Offset: 0x258 // Size: 0x08
	struct FLinearColor ShadowColorAndOpacity; // Offset: 0x260 // Size: 0x10
	DelegateProperty ShadowColorAndOpacityDelegate; // Offset: 0x270 // Size: 0x10
	float MinDesiredWidth; // Offset: 0x280 // Size: 0x04
	bool AutoEllipsisText; // Offset: 0x284 // Size: 0x01
	bool bWrapWithInvalidationPanel; // Offset: 0x285 // Size: 0x01
	char pad_0x286[0x12]; // Offset: 0x286 // Size: 0x12

	// Functions

	// Object Name: Function UMG.TextBlock.SetVerticalJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalJustification(enum class ETextVerticalJustify InJustification); // Offset: 0x10551dbd0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.TextBlock.SetText
	// Flags: [Native|Public|BlueprintCallable]
	void SetText(struct FText InText); // Offset: 0x10551db08 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.TextBlock.SetShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetShadowOffset(struct FVector2D InShadowOffset); // Offset: 0x10551da90 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.TextBlock.SetShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Offset: 0x10551da14 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.TextBlock.SetSelectColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSelectColor(bool bIsSelect); // Offset: 0x10551d990 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.TextBlock.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOpacity(float InOpacity); // Offset: 0x10551d914 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.TextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinDesiredWidth(float InMinDesiredWidth); // Offset: 0x10551d898 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.TextBlock.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetJustification(enum class ETextJustify InJustification); // Offset: 0x10551d81c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.TextBlock.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFont(struct FSlateFontInfo InFontInfo); // Offset: 0x10551d710 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function UMG.TextBlock.SetColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Offset: 0x10551d610 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function UMG.TextBlock.SetAutoEllipsisText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoEllipsisText(bool InAutoEllipsisText); // Offset: 0x10551d58c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.TextBlock.SetActiveColorIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActiveColorIndex(IntProperty InIndex); // Offset: 0x10551d510 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.TextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x10551d4ac // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class UMG.ComboBoxString
// Size: 0x1070 // Inherited bytes: 0x100
struct UComboBoxString : UWidget {
	// Fields
	struct TArray<StrProperty> DefaultOptions; // Offset: 0x100 // Size: 0x10
	StrProperty SelectedOption; // Offset: 0x110 // Size: 0x10
	struct FComboBoxStyle WidgetStyle; // Offset: 0x120 // Size: 0x508
	struct FTableRowStyle ItemStyle; // Offset: 0x628 // Size: 0x8f8
	struct FMargin ContentPadding; // Offset: 0xf20 // Size: 0x10
	float MaxListHeight; // Offset: 0xf30 // Size: 0x04
	bool HasDownArrow; // Offset: 0xf34 // Size: 0x01
	bool EnableGamepadNavigationMode; // Offset: 0xf35 // Size: 0x01
	char pad_0xF36[0x2]; // Offset: 0xf36 // Size: 0x02
	struct FSlateFontInfo Font; // Offset: 0xf38 // Size: 0x58
	struct FSlateColor ForegroundColor; // Offset: 0xf90 // Size: 0x28
	bool bIsFocusable; // Offset: 0xfb8 // Size: 0x01
	bool bAbove; // Offset: 0xfb9 // Size: 0x01
	char pad_0xFBA[0x6]; // Offset: 0xfba // Size: 0x06
	DelegateProperty OnGenerateWidgetEvent; // Offset: 0xfc0 // Size: 0x10
	char pad_0xFD0[0x20]; // Offset: 0xfd0 // Size: 0x20
	struct FScriptMulticastDelegate OnSelectionChanged; // Offset: 0xff0 // Size: 0x10
	struct FScriptMulticastDelegate OnOpening; // Offset: 0x1000 // Size: 0x10
	struct FScriptMulticastDelegate OnOpenChanged; // Offset: 0x1010 // Size: 0x10
	char pad_0x1020[0x50]; // Offset: 0x1020 // Size: 0x50

	// Functions

	// Object Name: Function UMG.ComboBoxString.SetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSelectedOption(StrProperty Option); // Offset: 0x1055094f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.ComboBoxString.SetComboListViewOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty SetComboListViewOffset(float Offset); // Offset: 0x10550946c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function UMG.ComboBoxString.RemoveOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveOption(StrProperty Option); // Offset: 0x1055093c4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function UMG.ComboBoxString.RefreshOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshOptions(); // Offset: 0x1055093b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnSelectionChangedEvent__DelegateSignature(StrProperty SelectedItem, enum class ESelectInfo SelectionType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnOpeningEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction UMG.ComboBoxString.OnOpenChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnOpenChangedEvent__DelegateSignature(bool bIsOpen, bool bAbove); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function UMG.ComboBoxString.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetSelectedOption(); // Offset: 0x10550934c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.ComboBoxString.GetOptionCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetOptionCount(); // Offset: 0x105509318 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ComboBoxString.GetOptionAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetOptionAtIndex(IntProperty Index); // Offset: 0x105509264 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UMG.ComboBoxString.FindOptionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty FindOptionIndex(StrProperty Option); // Offset: 0x1055091bc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function UMG.ComboBoxString.CloseComboBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseComboBox(); // Offset: 0x1055091a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.ComboBoxString.ClearSelection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearSelection(); // Offset: 0x105509194 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.ComboBoxString.ClearOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearOptions(); // Offset: 0x105509180 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.ComboBoxString.AddOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddOption(StrProperty Option); // Offset: 0x1055090e8 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class UMG.Button
// Size: 0x520 // Inherited bytes: 0x118
struct UButton : UContentWidget {
	// Fields
	struct USlateWidgetStyleAsset* Style; // Offset: 0x118 // Size: 0x08
	struct FButtonStyle WidgetStyle; // Offset: 0x120 // Size: 0x338
	struct FLinearColor ColorAndOpacity; // Offset: 0x458 // Size: 0x10
	struct FLinearColor BackgroundColor; // Offset: 0x468 // Size: 0x10
	enum class EButtonClickMethod ClickMethod; // Offset: 0x478 // Size: 0x01
	enum class EButtonTouchMethod TouchMethod; // Offset: 0x479 // Size: 0x01
	bool IsFocusable; // Offset: 0x47a // Size: 0x01
	bool IsPassMouseEvent; // Offset: 0x47b // Size: 0x01
	float nClickCd; // Offset: 0x47c // Size: 0x04
	bool bTouchPass; // Offset: 0x480 // Size: 0x01
	bool bPressEventWithParamPass; // Offset: 0x481 // Size: 0x01
	char pad_0x482[0x6]; // Offset: 0x482 // Size: 0x06
	struct FScriptMulticastDelegate OnClicked; // Offset: 0x488 // Size: 0x10
	struct FScriptMulticastDelegate OnPressed; // Offset: 0x498 // Size: 0x10
	struct FScriptMulticastDelegate OnReleased; // Offset: 0x4a8 // Size: 0x10
	struct FScriptMulticastDelegate OnHovered; // Offset: 0x4b8 // Size: 0x10
	struct FScriptMulticastDelegate OnUnhovered; // Offset: 0x4c8 // Size: 0x10
	struct FScriptMulticastDelegate OnPressedParam; // Offset: 0x4d8 // Size: 0x10
	DelegateProperty OnMouseButtonDownEvent; // Offset: 0x4e8 // Size: 0x10
	enum class EButtonOnClickSound OnClickSoundType; // Offset: 0x4f8 // Size: 0x01
	char pad_0x4F9[0x1f]; // Offset: 0x4f9 // Size: 0x1f
	enum class EButtonClickGroupEnum ButtonClickGroupName; // Offset: 0x518 // Size: 0x01
	char pad_0x519[0x7]; // Offset: 0x519 // Size: 0x07

	// Functions

	// Object Name: Function UMG.Button.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Offset: 0x105506914 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Button.SetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetStyle(struct FButtonStyle& InStyle); // Offset: 0x105506860 // Return & Params: Num(1) Size(0x338)

	// Object Name: Function UMG.Button.SetPressEventWithParamPassEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPressEventWithParamPassEnabled(bool bEnabled); // Offset: 0x1055067dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Button.SetOnClickSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOnClickSound(DelegateProperty onSound); // Offset: 0x105506754 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Button.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Offset: 0x1055066d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Button.SetClickSoundType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClickSoundType(enum class EButtonOnClickSound onSoundType); // Offset: 0x10550665c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Button.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Offset: 0x1055065e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Button.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Offset: 0x105506564 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Button.Release
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Release(); // Offset: 0x105506550 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction UMG.Button.OnButtonSoundEvent__DelegateSignature
	// Flags: [Public|Delegate]
	void OnButtonSoundEvent__DelegateSignature(char Sound); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Button.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPressed(); // Offset: 0x10550651c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.EditableTextBox
// Size: 0xcb0 // Inherited bytes: 0x100
struct UEditableTextBox : UWidget {
	// Fields
	struct FText Text; // Offset: 0x100 // Size: 0x18
	DelegateProperty TextDelegate; // Offset: 0x118 // Size: 0x10
	bool bAutoScrollText; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x3]; // Offset: 0x129 // Size: 0x03
	float ScrollSpeed; // Offset: 0x12c // Size: 0x04
	enum class EAutoScrollType AutoScrollType; // Offset: 0x130 // Size: 0x01
	char pad_0x131[0x7]; // Offset: 0x131 // Size: 0x07
	struct FEditableTextBoxStyle WidgetStyle; // Offset: 0x138 // Size: 0xa68
	struct USlateWidgetStyleAsset* Style; // Offset: 0xba0 // Size: 0x08
	struct FText HintText; // Offset: 0xba8 // Size: 0x18
	DelegateProperty HintTextDelegate; // Offset: 0xbc0 // Size: 0x10
	struct FSlateFontInfo Font; // Offset: 0xbd0 // Size: 0x58
	struct FLinearColor ForegroundColor; // Offset: 0xc28 // Size: 0x10
	struct FLinearColor BackgroundColor; // Offset: 0xc38 // Size: 0x10
	struct FLinearColor ReadOnlyForegroundColor; // Offset: 0xc48 // Size: 0x10
	bool IsReadOnly; // Offset: 0xc58 // Size: 0x01
	bool IsPassword; // Offset: 0xc59 // Size: 0x01
	char pad_0xC5A[0x2]; // Offset: 0xc5a // Size: 0x02
	float MinimumDesiredWidth; // Offset: 0xc5c // Size: 0x04
	struct FMargin Padding; // Offset: 0xc60 // Size: 0x10
	bool IsCaretMovedWhenGainFocus; // Offset: 0xc70 // Size: 0x01
	bool SelectAllTextWhenFocused; // Offset: 0xc71 // Size: 0x01
	bool RevertTextOnEscape; // Offset: 0xc72 // Size: 0x01
	bool ClearKeyboardFocusOnCommit; // Offset: 0xc73 // Size: 0x01
	bool SelectAllTextOnCommit; // Offset: 0xc74 // Size: 0x01
	bool AllowContextMenu; // Offset: 0xc75 // Size: 0x01
	enum class EVirtualKeyboardType KeyboardType; // Offset: 0xc76 // Size: 0x01
	char pad_0xC77[0x1]; // Offset: 0xc77 // Size: 0x01
	struct FShapedTextOptions ShapedTextOptions; // Offset: 0xc78 // Size: 0x04
	bool bVirtualKeyboardTriggerDirect; // Offset: 0xc7c // Size: 0x01
	char pad_0xC7D[0x3]; // Offset: 0xc7d // Size: 0x03
	struct FScriptMulticastDelegate OnTextChanged; // Offset: 0xc80 // Size: 0x10
	struct FScriptMulticastDelegate OnTextCommitted; // Offset: 0xc90 // Size: 0x10
	char pad_0xCA0[0x10]; // Offset: 0xca0 // Size: 0x10

	// Functions

	// Object Name: Function UMG.EditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetText(struct FText InText); // Offset: 0x10550c6d8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableTextBox.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScrollOffset(float Offset); // Offset: 0x10550c65c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.EditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsReadOnly(bool bReadOnly); // Offset: 0x10550c5d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.EditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHintText(struct FText InText); // Offset: 0x10550c518 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetError(struct FText InError); // Offset: 0x10550c458 // Return & Params: Num(1) Size(0x18)

	// Object Name: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableTextBox.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasError(); // Offset: 0x10550c424 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.EditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x10550c3c0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableTextBox.ClearError
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearError(); // Offset: 0x10550c3ac // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UMG.Image
// Size: 0x288 // Inherited bytes: 0x100
struct UImage : UWidget {
	// Fields
	struct FSlateBrush Brush; // Offset: 0x100 // Size: 0xb8
	DelegateProperty BrushDelegate; // Offset: 0x1b8 // Size: 0x10
	bool MatchSize; // Offset: 0x1c8 // Size: 0x01
	char pad_0x1C9[0x7]; // Offset: 0x1c9 // Size: 0x07
	DelegateProperty OnSetBrushAsyncComplete; // Offset: 0x1d0 // Size: 0x10
	struct TArray<struct FSlateColor> ColorSwitchList; // Offset: 0x1e0 // Size: 0x10
	IntProperty ActiveColorIndex; // Offset: 0x1f0 // Size: 0x04
	struct FLinearColor ColorAndOpacity; // Offset: 0x1f4 // Size: 0x10
	char pad_0x204[0x4]; // Offset: 0x204 // Size: 0x04
	DelegateProperty ColorAndOpacityDelegate; // Offset: 0x208 // Size: 0x10
	StrProperty imageSrcPath; // Offset: 0x218 // Size: 0x10
	struct FVector2D ScalePivot; // Offset: 0x228 // Size: 0x08
	DelegateProperty OnMouseButtonDownEvent; // Offset: 0x230 // Size: 0x10
	struct FSoftObjectPath AsyncLoadResourcePath; // Offset: 0x240 // Size: 0x18
	char pad_0x258[0x20]; // Offset: 0x258 // Size: 0x20
	float HitTestAreaRadius; // Offset: 0x278 // Size: 0x04
	bool bIsEnhancedImage; // Offset: 0x27c // Size: 0x01
	bool bIsUseEnhancedHitTest; // Offset: 0x27d // Size: 0x01
	bool bFixOverScale; // Offset: 0x27e // Size: 0x01
	bool bVersionImg; // Offset: 0x27f // Size: 0x01
	bool bDontPaintWhenAlphaZero; // Offset: 0x280 // Size: 0x01
	bool bDontPaintWhenColorZero; // Offset: 0x281 // Size: 0x01
	bool bAsyncLoadImageAsset; // Offset: 0x282 // Size: 0x01
	bool bDisablePixelSnapping; // Offset: 0x283 // Size: 0x01
	char pad_0x284[0x4]; // Offset: 0x284 // Size: 0x04

	// Functions

	// Object Name: Function UMG.Image.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOpacity(float InOpacity); // Offset: 0x10550ece0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Image.SetDontPaintWhenColorZero
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenColorZero(bool Enable); // Offset: 0x10550ec5c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Image.SetDontPaintWhenAlphaZero
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenAlphaZero(bool Enable); // Offset: 0x10550ebd8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Image.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Offset: 0x10550eb5c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Image.SetBrushResourceFromPathSync
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushResourceFromPathSync(StrProperty ResourcePath, bool bMatchSize); // Offset: 0x10550ea7c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function UMG.Image.SetBrushFromTextureDynamic
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Offset: 0x10550e9bc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.Image.SetBrushFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Offset: 0x10550e8fc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.Image.SetBrushFromSoftObjectPathAsync
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetBrushFromSoftObjectPathAsync(struct FSoftObjectPath& SoftObjectPath, bool bMatchSize); // Offset: 0x10550e7f4 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function UMG.Image.SetBrushFromPathAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromPathAsync(StrProperty ResourcePath, bool bMatchSize); // Offset: 0x10550e714 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function UMG.Image.SetBrushFromMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Offset: 0x10550e698 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Image.SetBrushFromAtlasInterface
	// Flags: [Native|Public|BlueprintCallable]
	void SetBrushFromAtlasInterface(struct TScriptInterface<Class> AtlasRegion, bool bMatchSize); // Offset: 0x10550e5c0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function UMG.Image.SetBrushFromAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Offset: 0x10550e544 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Image.SetBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetBrush(struct FSlateBrush& InBrush); // Offset: 0x10550e498 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.Image.SetActiveColorIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActiveColorIndex(IntProperty InIndex); // Offset: 0x10550e41c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Image.SeFixOverScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SeFixOverScale(bool Enable); // Offset: 0x10550e398 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Image.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Offset: 0x10550e364 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Image.GetDontPaintWhenColorZero
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenColorZero(); // Offset: 0x10550e330 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Image.GetDontPaintWhenAlphaZero
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenAlphaZero(); // Offset: 0x10550e2fc // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.InvalidationBox
// Size: 0x128 // Inherited bytes: 0x118
struct UInvalidationBox : UContentWidget {
	// Fields
	bool bCanCache; // Offset: 0x111 // Size: 0x01
	bool CacheRelativeTransforms; // Offset: 0x112 // Size: 0x01
	bool bDontPaintWhenChildEmpty; // Offset: 0x113 // Size: 0x01
	char pad_0x11B[0xd]; // Offset: 0x11b // Size: 0x0d

	// Functions

	// Object Name: Function UMG.InvalidationBox.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x10550fe74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.InvalidationBox.SetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCanCache(bool CanCache); // Offset: 0x10550fdf0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.InvalidationBox.InvalidateCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InvalidateCache(); // Offset: 0x10550fddc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.InvalidationBox.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x10550fda8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.InvalidationBox.GetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetCanCache(); // Offset: 0x10550fd74 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.RetainerBox
// Size: 0x140 // Inherited bytes: 0x118
struct URetainerBox : UContentWidget {
	// Fields
	bool RenderOnInvalidation; // Offset: 0x111 // Size: 0x01
	bool RenderOnPhase; // Offset: 0x112 // Size: 0x01
	IntProperty Phase; // Offset: 0x114 // Size: 0x04
	IntProperty PhaseCount; // Offset: 0x118 // Size: 0x04
	struct UMaterialInterface* EffectMaterial; // Offset: 0x120 // Size: 0x08
	struct FName TextureParameter; // Offset: 0x128 // Size: 0x08
	char pad_0x132[0xe]; // Offset: 0x132 // Size: 0x0e

	// Functions

	// Object Name: Function UMG.RetainerBox.SkipCurrentFrameRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SkipCurrentFrameRender(); // Offset: 0x10551567c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.RetainerBox.SetTextureParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTextureParameter(struct FName TextureParameter); // Offset: 0x105515600 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.RetainerBox.SetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Offset: 0x105515584 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.RetainerBox.RequestRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestRender(); // Offset: 0x105515570 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.RetainerBox.GetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Offset: 0x10551553c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.AsyncTaskDownloadImage
// Size: 0x48 // Inherited bytes: 0x28
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFail; // Offset: 0x38 // Size: 0x10

	// Functions

	// Object Name: Function UMG.AsyncTaskDownloadImage.DownloadImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAsyncTaskDownloadImage* DownloadImage(StrProperty URL); // Offset: 0x10550405c // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class UMG.BackgroundBlur
// Size: 0x2c8 // Inherited bytes: 0x118
struct UBackgroundBlur : UContentWidget {
	// Fields
	struct FMargin Padding; // Offset: 0x114 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x124 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x125 // Size: 0x01
	bool bApplyAlphaToBlur; // Offset: 0x126 // Size: 0x01
	float BlurStrength; // Offset: 0x128 // Size: 0x04
	bool bOverrideAutoRadiusCalculation; // Offset: 0x12c // Size: 0x01
	enum class EBlurType BlurType; // Offset: 0x12d // Size: 0x01
	float BlurDirection; // Offset: 0x130 // Size: 0x04
	struct FVector2D BlurCenter; // Offset: 0x134 // Size: 0x08
	IntProperty BlurRadius; // Offset: 0x13c // Size: 0x04
	struct UTexture* BlurMask; // Offset: 0x140 // Size: 0x08
	struct FSlateBrush LowQualityFallbackBrush; // Offset: 0x148 // Size: 0xb8
	struct FSlateBrush BlurMaskBrush; // Offset: 0x200 // Size: 0xb8
	char pad_0x2B9[0xf]; // Offset: 0x2b9 // Size: 0x0f

	// Functions

	// Object Name: Function UMG.BackgroundBlur.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105504740 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.BackgroundBlur.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x1055046c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Offset: 0x105504614 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.BackgroundBlur.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105504598 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.BackgroundBlur.SetBlurStrength
	// Flags: [Native|Public|BlueprintCallable]
	void SetBlurStrength(float InStrength); // Offset: 0x105504514 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.BackgroundBlur.SetBlurRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlurRadius(IntProperty InBlurRadius); // Offset: 0x105504498 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.BackgroundBlur.SetBlurMask
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlurMask(struct UTexture* InTexture); // Offset: 0x10550441c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.BackgroundBlur.SetBlurDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlurDirection(float InDirection); // Offset: 0x1055043a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.BackgroundBlur.SetBlurCenter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetBlurCenter(struct FVector2D InCenter); // Offset: 0x105504328 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.BackgroundBlur.SetApplyAlphaToBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Offset: 0x1055042a4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.BackgroundBlurSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UBackgroundBlurSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x16]; // Offset: 0x52 // Size: 0x16

	// Functions

	// Object Name: Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105504ce4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.BackgroundBlurSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105504c64 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105504be8 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.PropertyBinding
// Size: 0x48 // Inherited bytes: 0x28
struct UPropertyBinding : UObject {
	// Fields
	struct TWeakObjectPtr<struct UObject> SourceObject; // Offset: 0x28 // Size: 0x08
	struct FDynamicPropertyPath SourcePath; // Offset: 0x30 // Size: 0x10
	struct FName DestinationProperty; // Offset: 0x40 // Size: 0x08
};

// Object Name: Class UMG.BoolBinding
// Size: 0x48 // Inherited bytes: 0x48
struct UBoolBinding : UPropertyBinding {
	// Functions

	// Object Name: Function UMG.BoolBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	bool GetValue(); // Offset: 0x105504f48 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.Border
// Size: 0x290 // Inherited bytes: 0x118
struct UBorder : UContentWidget {
	// Fields
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x111 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x112 // Size: 0x01
	char bShowEffectWhenDisabled : 1; // Offset: 0x113 // Size: 0x01
	struct FLinearColor ContentColorAndOpacity; // Offset: 0x114 // Size: 0x10
	DelegateProperty ContentColorAndOpacityDelegate; // Offset: 0x128 // Size: 0x10
	struct FMargin Padding; // Offset: 0x138 // Size: 0x10
	struct FSlateBrush Background; // Offset: 0x148 // Size: 0xb8
	DelegateProperty BackgroundDelegate; // Offset: 0x200 // Size: 0x10
	struct FLinearColor BrushColor; // Offset: 0x210 // Size: 0x10
	DelegateProperty BrushColorDelegate; // Offset: 0x220 // Size: 0x10
	struct FVector2D DesiredSizeScale; // Offset: 0x230 // Size: 0x08
	DelegateProperty OnMouseButtonDownEvent; // Offset: 0x238 // Size: 0x10
	DelegateProperty OnMouseButtonUpEvent; // Offset: 0x248 // Size: 0x10
	DelegateProperty OnMouseMoveEvent; // Offset: 0x258 // Size: 0x10
	DelegateProperty OnMouseDoubleClickEvent; // Offset: 0x268 // Size: 0x10
	bool bDontPaintWhenChildEmpty; // Offset: 0x278 // Size: 0x01
	bool bDontPaintWhenAlphaZero; // Offset: 0x279 // Size: 0x01
	char pad_0x27C_1 : 7; // Offset: 0x27c // Size: 0x01
	char pad_0x27D[0x13]; // Offset: 0x27d // Size: 0x13

	// Functions

	// Object Name: Function UMG.Border.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x10550571c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Border.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x10550569c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Border.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105505620 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Border.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x10550559c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Border.SetDontPaintWhenAlphaZero
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenAlphaZero(bool Enable); // Offset: 0x105505518 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Border.SetDesiredSizeScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetDesiredSizeScale(struct FVector2D InScale); // Offset: 0x1055054a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Border.SetContentColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Offset: 0x105505424 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Border.SetBrushFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromTexture(struct UTexture2D* Texture); // Offset: 0x1055053a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Border.SetBrushFromMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Offset: 0x10550532c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Border.SetBrushFromAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Offset: 0x1055052b0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Border.SetBrushColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetBrushColor(struct FLinearColor InBrushColor); // Offset: 0x105505234 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.Border.SetBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetBrush(struct FSlateBrush& InBrush); // Offset: 0x105505188 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.Border.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Offset: 0x105505154 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Border.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x105505120 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Border.GetDontPaintWhenAlphaZero
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenAlphaZero(); // Offset: 0x1055050ec // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.BorderSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UBorderSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x16]; // Offset: 0x52 // Size: 0x16

	// Functions

	// Object Name: Function UMG.BorderSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105505e08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.BorderSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105505d88 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.BorderSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105505d0c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.BrushBinding
// Size: 0x50 // Inherited bytes: 0x48
struct UBrushBinding : UPropertyBinding {
	// Fields
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08

	// Functions

	// Object Name: Function UMG.BrushBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	struct FSlateBrush GetValue(); // Offset: 0x105506070 // Return & Params: Num(1) Size(0xb8)
};

// Object Name: Class UMG.ButtonSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UButtonSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x16]; // Offset: 0x52 // Size: 0x16

	// Functions

	// Object Name: Function UMG.ButtonSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105506e58 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ButtonSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105506dd8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.ButtonSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105506d5c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.CanvasPanelSlot
// Size: 0x78 // Inherited bytes: 0x40
struct UCanvasPanelSlot : UPanelSlot {
	// Fields
	struct FAnchorData LayoutData; // Offset: 0x40 // Size: 0x28
	bool bAutoSize; // Offset: 0x68 // Size: 0x01
	bool bSupportNotch; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x2]; // Offset: 0x6a // Size: 0x02
	IntProperty ZOrder; // Offset: 0x6c // Size: 0x04
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08

	// Functions

	// Object Name: Function UMG.CanvasPanelSlot.SetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetZOrder(IntProperty InZOrder); // Offset: 0x105507bbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.CanvasPanelSlot.SetSupportNotch
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSupportNotch(bool InSupportNotch); // Offset: 0x105507b38 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CanvasPanelSlot.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSize(struct FVector2D InSize); // Offset: 0x105507ac0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.SetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetPosition(struct FVector2D InPosition); // Offset: 0x105507a48 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.SetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOffsets(struct FMargin InOffset); // Offset: 0x1055079c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.CanvasPanelSlot.SetMinimum
	// Flags: [Final|Native|Public|HasDefaults]
	void SetMinimum(struct FVector2D InMinimumAnchors); // Offset: 0x105507950 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.SetMaximum
	// Flags: [Final|Native|Public|HasDefaults]
	void SetMaximum(struct FVector2D InMaximumAnchors); // Offset: 0x1055078d8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.SetLayout
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetLayout(struct FAnchorData& InLayoutData); // Offset: 0x105507848 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function UMG.CanvasPanelSlot.SetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoSize(bool InbAutoSize); // Offset: 0x1055077c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CanvasPanelSlot.SetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnchors(struct FAnchors InAnchors); // Offset: 0x105507744 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.CanvasPanelSlot.SetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetAlignment(struct FVector2D InAlignment); // Offset: 0x1055076cc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.GetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetZOrder(); // Offset: 0x105507698 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.CanvasPanelSlot.GetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetSize(); // Offset: 0x105507664 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetPosition(); // Offset: 0x105507630 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.GetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FMargin GetOffsets(); // Offset: 0x1055075f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.CanvasPanelSlot.GetLayout
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FAnchorData GetLayout(); // Offset: 0x1055075a8 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function UMG.CanvasPanelSlot.GetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetAutoSize(); // Offset: 0x105507574 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CanvasPanelSlot.GetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FAnchors GetAnchors(); // Offset: 0x10550753c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.CanvasPanelSlot.GetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetAlignment(); // Offset: 0x105507508 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.CanvasPanelSlot.GeSupportNotch
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GeSupportNotch(); // Offset: 0x1055074d4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.CheckBox
// Size: 0x910 // Inherited bytes: 0x118
struct UCheckBox : UContentWidget {
	// Fields
	enum class ECheckBoxState CheckedState; // Offset: 0x111 // Size: 0x01
	DelegateProperty CheckedStateDelegate; // Offset: 0x118 // Size: 0x10
	struct FCheckBoxStyle WidgetStyle; // Offset: 0x128 // Size: 0x730
	struct USlateWidgetStyleAsset* Style; // Offset: 0x858 // Size: 0x08
	struct USlateBrushAsset* UncheckedImage; // Offset: 0x860 // Size: 0x08
	struct USlateBrushAsset* UncheckedHoveredImage; // Offset: 0x868 // Size: 0x08
	struct USlateBrushAsset* UncheckedPressedImage; // Offset: 0x870 // Size: 0x08
	struct USlateBrushAsset* CheckedImage; // Offset: 0x878 // Size: 0x08
	struct USlateBrushAsset* CheckedHoveredImage; // Offset: 0x880 // Size: 0x08
	struct USlateBrushAsset* CheckedPressedImage; // Offset: 0x888 // Size: 0x08
	struct USlateBrushAsset* UndeterminedImage; // Offset: 0x890 // Size: 0x08
	struct USlateBrushAsset* UndeterminedHoveredImage; // Offset: 0x898 // Size: 0x08
	struct USlateBrushAsset* UndeterminedPressedImage; // Offset: 0x8a0 // Size: 0x08
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x8a8 // Size: 0x01
	char pad_0x8AA[0x2]; // Offset: 0x8aa // Size: 0x02
	struct FMargin Padding; // Offset: 0x8ac // Size: 0x10
	char pad_0x8BC[0x4]; // Offset: 0x8bc // Size: 0x04
	struct FSlateColor BorderBackgroundColor; // Offset: 0x8c0 // Size: 0x28
	bool IsFocusable; // Offset: 0x8e8 // Size: 0x01
	char pad_0x8E9[0x7]; // Offset: 0x8e9 // Size: 0x07
	struct FScriptMulticastDelegate OnCheckStateChanged; // Offset: 0x8f0 // Size: 0x10
	char pad_0x900[0x10]; // Offset: 0x900 // Size: 0x10

	// Functions

	// Object Name: Function UMG.CheckBox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsChecked(bool InIsChecked); // Offset: 0x105508454 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CheckBox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Offset: 0x1055083d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CheckBox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPressed(); // Offset: 0x1055083a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CheckBox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsChecked(); // Offset: 0x105508370 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.CheckBox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECheckBoxState GetCheckedState(); // Offset: 0x10550833c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.CheckedStateBinding
// Size: 0x50 // Inherited bytes: 0x48
struct UCheckedStateBinding : UPropertyBinding {
	// Fields
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08

	// Functions

	// Object Name: Function UMG.CheckedStateBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	enum class ECheckBoxState GetValue(); // Offset: 0x105508778 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.CircularThrobber
// Size: 0x1e8 // Inherited bytes: 0x100
struct UCircularThrobber : UWidget {
	// Fields
	IntProperty NumberOfPieces; // Offset: 0x100 // Size: 0x04
	float Period; // Offset: 0x104 // Size: 0x04
	float Radius; // Offset: 0x108 // Size: 0x04
	char pad_0x10C[0x4]; // Offset: 0x10c // Size: 0x04
	struct USlateBrushAsset* PieceImage; // Offset: 0x110 // Size: 0x08
	struct FSlateBrush Image; // Offset: 0x118 // Size: 0xb8
	bool bEnableRadius; // Offset: 0x1d0 // Size: 0x01
	char pad_0x1D1[0x17]; // Offset: 0x1d1 // Size: 0x17

	// Functions

	// Object Name: Function UMG.CircularThrobber.SetRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRadius(float InRadius); // Offset: 0x105508a04 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.CircularThrobber.SetPeriod
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPeriod(float InPeriod); // Offset: 0x105508988 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.CircularThrobber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNumberOfPieces(IntProperty InNumberOfPieces); // Offset: 0x10550890c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.ColorBinding
// Size: 0x50 // Inherited bytes: 0x48
struct UColorBinding : UPropertyBinding {
	// Fields
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08

	// Functions

	// Object Name: Function UMG.ColorBinding.GetSlateValue
	// Flags: [Final|Native|Public|Const]
	struct FSlateColor GetSlateValue(); // Offset: 0x105508cac // Return & Params: Num(1) Size(0x28)

	// Object Name: Function UMG.ColorBinding.GetLinearValue
	// Flags: [Final|Native|Public|HasDefaults|Const]
	struct FLinearColor GetLinearValue(); // Offset: 0x105508c74 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class UMG.ComboBox
// Size: 0x138 // Inherited bytes: 0x100
struct UComboBox : UWidget {
	// Fields
	struct TArray<struct UObject*> Items; // Offset: 0x100 // Size: 0x10
	DelegateProperty OnGenerateWidgetEvent; // Offset: 0x110 // Size: 0x10
	bool bIsFocusable; // Offset: 0x120 // Size: 0x01
	char pad_0x121[0x17]; // Offset: 0x121 // Size: 0x17
};

// Object Name: Class UMG.DragDropOperation
// Size: 0x88 // Inherited bytes: 0x28
struct UDragDropOperation : UObject {
	// Fields
	StrProperty Tag; // Offset: 0x28 // Size: 0x10
	struct UObject* Payload; // Offset: 0x38 // Size: 0x08
	struct UWidget* DefaultDragVisual; // Offset: 0x40 // Size: 0x08
	enum class EDragPivot Pivot; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x3]; // Offset: 0x49 // Size: 0x03
	struct FVector2D Offset; // Offset: 0x4c // Size: 0x08
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct FScriptMulticastDelegate OnDrop; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate OnDragCancelled; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate OnDragged; // Offset: 0x78 // Size: 0x10

	// Functions

	// Object Name: Function UMG.DragDropOperation.Drop
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void Drop(struct FPointerEvent& PointerEvent); // Offset: 0x10550a1b0 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function UMG.DragDropOperation.Dragged
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void Dragged(struct FPointerEvent& PointerEvent); // Offset: 0x10550a0b8 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function UMG.DragDropOperation.DragCancelled
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void DragCancelled(struct FPointerEvent& PointerEvent); // Offset: 0x105509fc0 // Return & Params: Num(1) Size(0x78)
};

// Object Name: Class UMG.EditableText
// Size: 0x500 // Inherited bytes: 0x100
struct UEditableText : UWidget {
	// Fields
	struct FText Text; // Offset: 0x100 // Size: 0x18
	DelegateProperty TextDelegate; // Offset: 0x118 // Size: 0x10
	struct FText HintText; // Offset: 0x128 // Size: 0x18
	DelegateProperty HintTextDelegate; // Offset: 0x140 // Size: 0x10
	struct TArray<struct FSlateColor> ColorSwitchList; // Offset: 0x150 // Size: 0x10
	IntProperty ActiveColorIndex; // Offset: 0x160 // Size: 0x04
	char pad_0x164[0x4]; // Offset: 0x164 // Size: 0x04
	struct FEditableTextStyle WidgetStyle; // Offset: 0x168 // Size: 0x2b0
	struct USlateWidgetStyleAsset* Style; // Offset: 0x418 // Size: 0x08
	struct USlateBrushAsset* BackgroundImageSelected; // Offset: 0x420 // Size: 0x08
	struct USlateBrushAsset* BackgroundImageComposing; // Offset: 0x428 // Size: 0x08
	struct USlateBrushAsset* CaretImage; // Offset: 0x430 // Size: 0x08
	struct FSlateFontInfo Font; // Offset: 0x438 // Size: 0x58
	struct FSlateColor ColorAndOpacity; // Offset: 0x490 // Size: 0x28
	bool IsReadOnly; // Offset: 0x4b8 // Size: 0x01
	bool IsPassword; // Offset: 0x4b9 // Size: 0x01
	char pad_0x4BA[0x2]; // Offset: 0x4ba // Size: 0x02
	float MinimumDesiredWidth; // Offset: 0x4bc // Size: 0x04
	bool IsCaretMovedWhenGainFocus; // Offset: 0x4c0 // Size: 0x01
	bool SelectAllTextWhenFocused; // Offset: 0x4c1 // Size: 0x01
	bool RevertTextOnEscape; // Offset: 0x4c2 // Size: 0x01
	bool ClearKeyboardFocusOnCommit; // Offset: 0x4c3 // Size: 0x01
	bool SelectAllTextOnCommit; // Offset: 0x4c4 // Size: 0x01
	bool AllowContextMenu; // Offset: 0x4c5 // Size: 0x01
	enum class EVirtualKeyboardType KeyboardType; // Offset: 0x4c6 // Size: 0x01
	char pad_0x4C7[0x1]; // Offset: 0x4c7 // Size: 0x01
	struct FShapedTextOptions ShapedTextOptions; // Offset: 0x4c8 // Size: 0x04
	bool bVirtualKeyboardTriggerDirect; // Offset: 0x4cc // Size: 0x01
	char pad_0x4CD[0x3]; // Offset: 0x4cd // Size: 0x03
	struct FScriptMulticastDelegate OnTextChanged; // Offset: 0x4d0 // Size: 0x10
	struct FScriptMulticastDelegate OnTextCommitted; // Offset: 0x4e0 // Size: 0x10
	char pad_0x4F0[0x10]; // Offset: 0x4f0 // Size: 0x10

	// Functions

	// Object Name: Function UMG.EditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetText(struct FText InText); // Offset: 0x10550a984 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsReadOnly(bool InbIsReadyOnly); // Offset: 0x10550a900 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.EditableText.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsPassword(bool InbIsPassword); // Offset: 0x10550a87c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.EditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHintText(struct FText InHintText); // Offset: 0x10550a7bc // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableText.SetActiveColorIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActiveColorIndex(IntProperty InIndex); // Offset: 0x10550a740 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.EditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x10550a6dc // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class UMG.ExpandableArea
// Size: 0x3c0 // Inherited bytes: 0x100
struct UExpandableArea : UWidget {
	// Fields
	char pad_0x100[0x8]; // Offset: 0x100 // Size: 0x08
	struct FExpandableAreaStyle Style; // Offset: 0x108 // Size: 0x180
	struct FSlateBrush BorderBrush; // Offset: 0x288 // Size: 0xb8
	struct FSlateColor BorderColor; // Offset: 0x340 // Size: 0x28
	bool bIsExpanded; // Offset: 0x368 // Size: 0x01
	char pad_0x369[0x3]; // Offset: 0x369 // Size: 0x03
	float MaxHeight; // Offset: 0x36c // Size: 0x04
	struct FMargin HeaderPadding; // Offset: 0x370 // Size: 0x10
	struct FMargin AreaPadding; // Offset: 0x380 // Size: 0x10
	struct FScriptMulticastDelegate OnExpansionChanged; // Offset: 0x390 // Size: 0x10
	struct UWidget* HeaderContent; // Offset: 0x3a0 // Size: 0x08
	struct UWidget* BodyContent; // Offset: 0x3a8 // Size: 0x08
	char pad_0x3B0[0x10]; // Offset: 0x3b0 // Size: 0x10

	// Functions

	// Object Name: Function UMG.ExpandableArea.SetIsExpanded_Animated
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsExpanded_Animated(bool IsExpanded); // Offset: 0x10550cc30 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ExpandableArea.SetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsExpanded(bool IsExpanded); // Offset: 0x10550cbac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ExpandableArea.GetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsExpanded(); // Offset: 0x10550cb78 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.FloatBinding
// Size: 0x48 // Inherited bytes: 0x48
struct UFloatBinding : UPropertyBinding {
	// Functions

	// Object Name: Function UMG.FloatBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	float GetValue(); // Offset: 0x10550cecc // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.GridPanel
// Size: 0x150 // Inherited bytes: 0x118
struct UGridPanel : UPanelWidget {
	// Fields
	struct TArray<float> ColumnFill; // Offset: 0x118 // Size: 0x10
	struct TArray<float> RowFill; // Offset: 0x128 // Size: 0x10
	bool bDontPaintWhenChildEmpty; // Offset: 0x138 // Size: 0x01
	char pad_0x139[0x17]; // Offset: 0x139 // Size: 0x17

	// Functions

	// Object Name: Function UMG.GridPanel.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x10550d134 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.GridPanel.ReSortSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReSortSlot(); // Offset: 0x10550d120 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.GridPanel.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x10550d0ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.GridPanel.AddChildToGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UGridSlot* AddChildToGrid(struct UWidget* Content); // Offset: 0x10550d060 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.GridSlot
// Size: 0x78 // Inherited bytes: 0x40
struct UGridSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x2]; // Offset: 0x52 // Size: 0x02
	IntProperty Row; // Offset: 0x54 // Size: 0x04
	IntProperty RowSpan; // Offset: 0x58 // Size: 0x04
	IntProperty Column; // Offset: 0x5c // Size: 0x04
	IntProperty ColumnSpan; // Offset: 0x60 // Size: 0x04
	IntProperty Layer; // Offset: 0x64 // Size: 0x04
	struct FVector2D Nudge; // Offset: 0x68 // Size: 0x08
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08

	// Functions

	// Object Name: Function UMG.GridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x10550d778 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.GridSlot.SetRowSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRowSpan(IntProperty InRowSpan); // Offset: 0x10550d6fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.GridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRow(IntProperty InRow); // Offset: 0x10550d680 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.GridSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x10550d600 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.GridSlot.SetLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLayer(IntProperty InLayer); // Offset: 0x10550d584 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.GridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x10550d508 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.GridSlot.SetColumnSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetColumnSpan(IntProperty InColumnSpan); // Offset: 0x10550d48c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.GridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetColumn(IntProperty InColumn); // Offset: 0x10550d410 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.InputKeySelector
// Size: 0x798 // Inherited bytes: 0x100
struct UInputKeySelector : UWidget {
	// Fields
	struct FButtonStyle WidgetStyle; // Offset: 0x100 // Size: 0x338
	struct FTextBlockStyle TextStyle; // Offset: 0x438 // Size: 0x250
	struct FInputChord SelectedKey; // Offset: 0x688 // Size: 0x20
	struct FSlateFontInfo Font; // Offset: 0x6a8 // Size: 0x58
	struct FMargin Margin; // Offset: 0x700 // Size: 0x10
	struct FLinearColor ColorAndOpacity; // Offset: 0x710 // Size: 0x10
	struct FText KeySelectionText; // Offset: 0x720 // Size: 0x18
	struct FText NoKeySpecifiedText; // Offset: 0x738 // Size: 0x18
	bool bAllowModifierKeys; // Offset: 0x750 // Size: 0x01
	bool bAllowGamepadKeys; // Offset: 0x751 // Size: 0x01
	char pad_0x752[0x6]; // Offset: 0x752 // Size: 0x06
	struct TArray<struct FKey> EscapeKeys; // Offset: 0x758 // Size: 0x10
	struct FScriptMulticastDelegate OnKeySelected; // Offset: 0x768 // Size: 0x10
	struct FScriptMulticastDelegate OnIsSelectingKeyChanged; // Offset: 0x778 // Size: 0x10
	char pad_0x788[0x10]; // Offset: 0x788 // Size: 0x10

	// Functions

	// Object Name: Function UMG.InputKeySelector.SetTextBlockVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Offset: 0x10550f878 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.InputKeySelector.SetSelectedKey
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Offset: 0x10550f7bc // Return & Params: Num(1) Size(0x20)

	// Object Name: Function UMG.InputKeySelector.SetNoKeySpecifiedText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Offset: 0x10550f6fc // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.InputKeySelector.SetKeySelectionText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetKeySelectionText(struct FText InKeySelectionText); // Offset: 0x10550f63c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.InputKeySelector.SetAllowModifierKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Offset: 0x10550f5b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.InputKeySelector.SetAllowGamepadKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Offset: 0x10550f534 // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnIsSelectingKeyChanged__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.InputKeySelector.GetIsSelectingKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetIsSelectingKey(); // Offset: 0x10550f500 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.Int32Binding
// Size: 0x48 // Inherited bytes: 0x48
struct UInt32Binding : UPropertyBinding {
	// Functions

	// Object Name: Function UMG.Int32Binding.GetValue
	// Flags: [Final|Native|Public|Const]
	IntProperty GetValue(); // Offset: 0x10550fbe4 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.TableViewBase
// Size: 0x100 // Inherited bytes: 0x100
struct UTableViewBase : UWidget {
};

// Object Name: Class UMG.ListView
// Size: 0x140 // Inherited bytes: 0x100
struct UListView : UTableViewBase {
	// Fields
	float ItemHeight; // Offset: 0x100 // Size: 0x04
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
	struct TArray<struct UObject*> Items; // Offset: 0x108 // Size: 0x10
	enum class ESelectionMode SelectionMode; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x7]; // Offset: 0x119 // Size: 0x07
	DelegateProperty OnGenerateRowEvent; // Offset: 0x120 // Size: 0x10
	char pad_0x130[0x10]; // Offset: 0x130 // Size: 0x10
};

// Object Name: Class UMG.MenuAnchor
// Size: 0x158 // Inherited bytes: 0x118
struct UMenuAnchor : UContentWidget {
	// Fields
	struct UUserWidget* MenuClass; // Offset: 0x118 // Size: 0x08
	DelegateProperty OnGetMenuContentEvent; // Offset: 0x120 // Size: 0x10
	enum class EMenuPlacement Placement; // Offset: 0x130 // Size: 0x01
	bool ShouldDeferPaintingAfterWindowContent; // Offset: 0x131 // Size: 0x01
	bool UseApplicationMenuStack; // Offset: 0x132 // Size: 0x01
	char pad_0x133[0x5]; // Offset: 0x133 // Size: 0x05
	struct FScriptMulticastDelegate OnMenuOpenChanged; // Offset: 0x138 // Size: 0x10
	char pad_0x148[0x10]; // Offset: 0x148 // Size: 0x10

	// Functions

	// Object Name: Function UMG.MenuAnchor.ToggleOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleOpen(bool bFocusOnOpen); // Offset: 0x10551047c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MenuAnchor.ShouldOpenDueToClick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool ShouldOpenDueToClick(); // Offset: 0x105510448 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MenuAnchor.Open
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Open(bool bFocusMenu); // Offset: 0x1055103c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MenuAnchor.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOpen(); // Offset: 0x105510390 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MenuAnchor.HasOpenSubMenus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasOpenSubMenus(); // Offset: 0x10551035c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MenuAnchor.GetMenuPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetMenuPosition(); // Offset: 0x105510328 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.MenuAnchor.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Close(); // Offset: 0x105510314 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UMG.MouseCursorBinding
// Size: 0x48 // Inherited bytes: 0x48
struct UMouseCursorBinding : UPropertyBinding {
	// Functions

	// Object Name: Function UMG.MouseCursorBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	enum class EMouseCursor GetValue(); // Offset: 0x10551084c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.MovieScene2DTransformSection
// Size: 0x3c8 // Inherited bytes: 0xb0
struct UMovieScene2DTransformSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FRichCurve Translation[0x2]; // Offset: 0xb8 // Size: 0xe0
	struct FRichCurve Rotation; // Offset: 0x198 // Size: 0x70
	struct FRichCurve Scale[0x2]; // Offset: 0x208 // Size: 0xe0
	struct FRichCurve Shear[0x2]; // Offset: 0x2e8 // Size: 0xe0
};

// Object Name: Class UMG.MovieScene2DTransformTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Object Name: Class UMG.MovieSceneMarginSection
// Size: 0x278 // Inherited bytes: 0xb0
struct UMovieSceneMarginSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FRichCurve TopCurve; // Offset: 0xb8 // Size: 0x70
	struct FRichCurve LeftCurve; // Offset: 0x128 // Size: 0x70
	struct FRichCurve RightCurve; // Offset: 0x198 // Size: 0x70
	struct FRichCurve BottomCurve; // Offset: 0x208 // Size: 0x70
};

// Object Name: Class UMG.MovieSceneMarginTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Object Name: Class UMG.MovieSceneWAnimTimeSection
// Size: 0x278 // Inherited bytes: 0xb0
struct UMovieSceneWAnimTimeSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FRichCurve PlayTimeCurve_2; // Offset: 0xb8 // Size: 0x70
	struct FRichCurve PlayTimeCurve_3; // Offset: 0x128 // Size: 0x70
	struct FRichCurve PlayTimeCurve_4; // Offset: 0x198 // Size: 0x70
	struct FRichCurve PlayTimeCurve_5; // Offset: 0x208 // Size: 0x70
};

// Object Name: Class UMG.MovieSceneWAnimTimeTrack
// Size: 0x80 // Inherited bytes: 0x80
struct UMovieSceneWAnimTimeTrack : UMovieScenePropertyTrack {
};

// Object Name: Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 // Inherited bytes: 0x68
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	// Fields
	struct TArray<struct FName> BrushPropertyNamePath; // Offset: 0x68 // Size: 0x10
	struct FName TrackName; // Offset: 0x78 // Size: 0x08
};

// Object Name: Class UMG.MultiLineEditableText
// Size: 0x468 // Inherited bytes: 0x128
struct UMultiLineEditableText : UTextLayoutWidget {
	// Fields
	struct FText Text; // Offset: 0x128 // Size: 0x18
	struct FText HintText; // Offset: 0x140 // Size: 0x18
	DelegateProperty HintTextDelegate; // Offset: 0x158 // Size: 0x10
	struct TArray<struct FSlateColor> ColorSwitchList; // Offset: 0x168 // Size: 0x10
	IntProperty ActiveColorIndex; // Offset: 0x178 // Size: 0x04
	char pad_0x17C[0x4]; // Offset: 0x17c // Size: 0x04
	struct FTextBlockStyle WidgetStyle; // Offset: 0x180 // Size: 0x250
	bool bIsReadOnly; // Offset: 0x3d0 // Size: 0x01
	char pad_0x3D1[0x7]; // Offset: 0x3d1 // Size: 0x07
	struct FSlateFontInfo Font; // Offset: 0x3d8 // Size: 0x58
	bool AllowContextMenu; // Offset: 0x430 // Size: 0x01
	char pad_0x431[0x7]; // Offset: 0x431 // Size: 0x07
	struct FScriptMulticastDelegate OnTextChanged; // Offset: 0x438 // Size: 0x10
	struct FScriptMulticastDelegate OnTextCommitted; // Offset: 0x448 // Size: 0x10
	char pad_0x458[0x10]; // Offset: 0x458 // Size: 0x10

	// Functions

	// Object Name: Function UMG.MultiLineEditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetText(struct FText InText); // Offset: 0x105511800 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.MultiLineEditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsReadOnly(bool bReadOnly); // Offset: 0x10551177c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MultiLineEditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHintText(struct FText InText); // Offset: 0x1055116bc // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.MultiLineEditableText.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFont(struct FSlateFontInfo InNewFont); // Offset: 0x1055115b0 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function UMG.MultiLineEditableText.SetActiveColorIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActiveColorIndex(IntProperty InIndex); // Offset: 0x105511534 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.MultiLineEditableText.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToEnd(); // Offset: 0x105511520 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.MultiLineEditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x1055114bc // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class UMG.MultiLineEditableTextBox
// Size: 0xee8 // Inherited bytes: 0x128
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	// Fields
	struct FText Text; // Offset: 0x128 // Size: 0x18
	struct FText HintText; // Offset: 0x140 // Size: 0x18
	DelegateProperty HintTextDelegate; // Offset: 0x158 // Size: 0x10
	struct FEditableTextBoxStyle WidgetStyle; // Offset: 0x168 // Size: 0xa68
	struct FTextBlockStyle TextStyle; // Offset: 0xbd0 // Size: 0x250
	bool bIsReadOnly; // Offset: 0xe20 // Size: 0x01
	bool AllowContextMenu; // Offset: 0xe21 // Size: 0x01
	char pad_0xE22[0x6]; // Offset: 0xe22 // Size: 0x06
	struct USlateWidgetStyleAsset* Style; // Offset: 0xe28 // Size: 0x08
	struct FSlateFontInfo Font; // Offset: 0xe30 // Size: 0x58
	struct FLinearColor ForegroundColor; // Offset: 0xe88 // Size: 0x10
	struct FLinearColor BackgroundColor; // Offset: 0xe98 // Size: 0x10
	struct FLinearColor ReadOnlyForegroundColor; // Offset: 0xea8 // Size: 0x10
	struct FScriptMulticastDelegate OnTextChanged; // Offset: 0xeb8 // Size: 0x10
	struct FScriptMulticastDelegate OnTextCommitted; // Offset: 0xec8 // Size: 0x10
	char pad_0xED8[0x10]; // Offset: 0xed8 // Size: 0x10

	// Functions

	// Object Name: Function UMG.MultiLineEditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetText(struct FText InText); // Offset: 0x105511ed0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsReadOnly(bool bReadOnly); // Offset: 0x105511e4c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.MultiLineEditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHintText(struct FText InText); // Offset: 0x105511d8c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.MultiLineEditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetError(struct FText InError); // Offset: 0x105511ccc // Return & Params: Num(1) Size(0x18)

	// Object Name: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.MultiLineEditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x105511c68 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class UMG.NamedSlot
// Size: 0x128 // Inherited bytes: 0x118
struct UNamedSlot : UContentWidget {
	// Fields
	char pad_0x118[0x10]; // Offset: 0x118 // Size: 0x10
};

// Object Name: Class UMG.NamedSlotInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UNamedSlotInterface : UInterface {
};

// Object Name: Class UMG.NativeWidgetHost
// Size: 0x110 // Inherited bytes: 0x100
struct UNativeWidgetHost : UWidget {
	// Fields
	char pad_0x100[0x10]; // Offset: 0x100 // Size: 0x10
};

// Object Name: Class UMG.Overlay
// Size: 0x128 // Inherited bytes: 0x118
struct UOverlay : UPanelWidget {
	// Fields
	char pad_0x118[0x10]; // Offset: 0x118 // Size: 0x10

	// Functions

	// Object Name: Function UMG.Overlay.AddChildToOverlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Offset: 0x1055141f4 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.OverlaySlot
// Size: 0x60 // Inherited bytes: 0x40
struct UOverlaySlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0xe]; // Offset: 0x52 // Size: 0x0e

	// Functions

	// Object Name: Function UMG.OverlaySlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105514524 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.OverlaySlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x1055144a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.OverlaySlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105514428 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.ProgressBar
// Size: 0x3a0 // Inherited bytes: 0x100
struct UProgressBar : UWidget {
	// Fields
	struct FProgressBarStyle WidgetStyle; // Offset: 0x100 // Size: 0x230
	struct USlateWidgetStyleAsset* Style; // Offset: 0x330 // Size: 0x08
	struct USlateBrushAsset* BackgroundImage; // Offset: 0x338 // Size: 0x08
	struct USlateBrushAsset* FillImage; // Offset: 0x340 // Size: 0x08
	struct USlateBrushAsset* MarqueeImage; // Offset: 0x348 // Size: 0x08
	float percent; // Offset: 0x350 // Size: 0x04
	enum class EProgressBarFillType BarFillType; // Offset: 0x354 // Size: 0x01
	bool bIsMarquee; // Offset: 0x355 // Size: 0x01
	char pad_0x356[0x2]; // Offset: 0x356 // Size: 0x02
	struct FVector2D BorderPadding; // Offset: 0x358 // Size: 0x08
	DelegateProperty PercentDelegate; // Offset: 0x360 // Size: 0x10
	struct FLinearColor FillColorAndOpacity; // Offset: 0x370 // Size: 0x10
	DelegateProperty FillColorAndOpacityDelegate; // Offset: 0x380 // Size: 0x10
	char pad_0x390[0x10]; // Offset: 0x390 // Size: 0x10

	// Functions

	// Object Name: Function UMG.ProgressBar.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPercent(float InPercent); // Offset: 0x1055151cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ProgressBar.SetIsMarquee
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsMarquee(bool InbIsMarquee); // Offset: 0x105515148 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ProgressBar.SetFillColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Offset: 0x1055150cc // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class UMG.RichTextBlock
// Size: 0x428 // Inherited bytes: 0x128
struct URichTextBlock : UTextLayoutWidget {
	// Fields
	struct FText Text; // Offset: 0x128 // Size: 0x18
	DelegateProperty TextDelegate; // Offset: 0x140 // Size: 0x10
	struct FSlateFontInfo Font; // Offset: 0x150 // Size: 0x58
	struct FLinearColor Color; // Offset: 0x1a8 // Size: 0x10
	struct TArray<struct URichTextBlockDecorator*> Decorators; // Offset: 0x1b8 // Size: 0x10
	char pad_0x1C8[0x260]; // Offset: 0x1c8 // Size: 0x260
};

// Object Name: Class UMG.RichTextBlockDecorator
// Size: 0x30 // Inherited bytes: 0x28
struct URichTextBlockDecorator : UObject {
	// Fields
	bool bReveal; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty RevealedIndex; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class UMG.SafeZone
// Size: 0x128 // Inherited bytes: 0x118
struct USafeZone : UContentWidget {
	// Fields
	bool PadLeft; // Offset: 0x111 // Size: 0x01
	bool PadRight; // Offset: 0x112 // Size: 0x01
	bool PadTop; // Offset: 0x113 // Size: 0x01
	bool PadBottom; // Offset: 0x114 // Size: 0x01
	char pad_0x11C[0xc]; // Offset: 0x11c // Size: 0x0c

	// Functions

	// Object Name: Function UMG.SafeZone.SetSidesToPad
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Offset: 0x105515b20 // Return & Params: Num(4) Size(0x4)
};

// Object Name: Class UMG.SafeZoneSlot
// Size: 0x68 // Inherited bytes: 0x40
struct USafeZoneSlot : UPanelSlot {
	// Fields
	bool bIsTitleSafe; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	struct FMargin SafeAreaScale; // Offset: 0x44 // Size: 0x10
	enum class EHorizontalAlignment HAlign; // Offset: 0x54 // Size: 0x01
	enum class EVerticalAlignment VAlign; // Offset: 0x55 // Size: 0x01
	char pad_0x56[0x2]; // Offset: 0x56 // Size: 0x02
	struct FMargin Padding; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class UMG.ScaleBox
// Size: 0x130 // Inherited bytes: 0x118
struct UScaleBox : UContentWidget {
	// Fields
	enum class EStretch Stretch; // Offset: 0x111 // Size: 0x01
	enum class EStretchDirection StretchDirection; // Offset: 0x112 // Size: 0x01
	float UserSpecifiedScale; // Offset: 0x114 // Size: 0x04
	float UserSpecifiedScaleBias; // Offset: 0x118 // Size: 0x04
	bool IgnoreInheritedScale; // Offset: 0x11c // Size: 0x01
	bool bFixQuivering; // Offset: 0x11d // Size: 0x01
	bool bSingleLayoutPass; // Offset: 0x11e // Size: 0x01
	char pad_0x125[0xb]; // Offset: 0x125 // Size: 0x0b

	// Functions

	// Object Name: Function UMG.ScaleBox.SetUserSpecifiedScaleBias
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUserSpecifiedScaleBias(float InUserSpecifiedScaleBias); // Offset: 0x1055161c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ScaleBox.SetUserSpecifiedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Offset: 0x10551614c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.ScaleBox.SetStretchDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Offset: 0x1055160d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScaleBox.SetStretch
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetStretch(enum class EStretch InStretch); // Offset: 0x105516054 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScaleBox.SetIgnoreInheritedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Offset: 0x105515fd0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScaleBox.SetFixQuiver
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFixQuiver(bool InFixQuiver); // Offset: 0x105515f4c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.ScaleBoxSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UScaleBoxSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x16]; // Offset: 0x52 // Size: 0x16

	// Functions

	// Object Name: Function UMG.ScaleBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105516634 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.ScaleBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x1055165b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105516538 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.ScrollBar
// Size: 0x7a8 // Inherited bytes: 0x100
struct UScrollBar : UWidget {
	// Fields
	struct FScrollBarStyle WidgetStyle; // Offset: 0x100 // Size: 0x680
	struct USlateWidgetStyleAsset* Style; // Offset: 0x780 // Size: 0x08
	bool bAlwaysShowScrollbar; // Offset: 0x788 // Size: 0x01
	enum class EOrientation Orientation; // Offset: 0x789 // Size: 0x01
	char pad_0x78A[0x2]; // Offset: 0x78a // Size: 0x02
	struct FVector2D Thickness; // Offset: 0x78c // Size: 0x08
	char pad_0x794[0x14]; // Offset: 0x794 // Size: 0x14

	// Functions

	// Object Name: Function UMG.ScrollBar.SetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Offset: 0x105516898 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class UMG.ScrollBoxSlot
// Size: 0x60 // Inherited bytes: 0x40
struct UScrollBoxSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0xf]; // Offset: 0x51 // Size: 0x0f

	// Functions

	// Object Name: Function UMG.ScrollBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105517900 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105517884 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.ShareWidgetRT
// Size: 0x90 // Inherited bytes: 0x28
struct UShareWidgetRT : UObject {
	// Fields
	struct UTextureRenderTarget2D* RenderTarget; // Offset: 0x28 // Size: 0x08
	SetProperty AllSharedWidget; // Offset: 0x30 // Size: 0x50
	char pad_0x80[0x10]; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class UMG.ShareWidgetRTManager
// Size: 0x500 // Inherited bytes: 0x4b0
struct AShareWidgetRTManager : AActor {
	// Fields
	MapProperty SharedWidgetRTMap; // Offset: 0x4b0 // Size: 0x50
};

// Object Name: Class UMG.SizeBox
// Size: 0x140 // Inherited bytes: 0x118
struct USizeBox : UContentWidget {
	// Fields
	char bOverride_WidthOverride : 1; // Offset: 0x111 // Size: 0x01
	char bOverride_HeightOverride : 1; // Offset: 0x111 // Size: 0x01
	char bOverride_MinDesiredWidth : 1; // Offset: 0x111 // Size: 0x01
	char bOverride_MinDesiredHeight : 1; // Offset: 0x111 // Size: 0x01
	char bOverride_MaxDesiredWidth : 1; // Offset: 0x111 // Size: 0x01
	char bOverride_MaxDesiredHeight : 1; // Offset: 0x111 // Size: 0x01
	char bOverride_MaxAspectRatio : 1; // Offset: 0x111 // Size: 0x01
	char bDontPaintWhenChildEmpty : 1; // Offset: 0x111 // Size: 0x01
	float WidthOverride; // Offset: 0x114 // Size: 0x04
	float HeightOverride; // Offset: 0x118 // Size: 0x04
	float MinDesiredWidth; // Offset: 0x11c // Size: 0x04
	float MinDesiredHeight; // Offset: 0x120 // Size: 0x04
	float MaxDesiredWidth; // Offset: 0x124 // Size: 0x04
	float MaxDesiredHeight; // Offset: 0x128 // Size: 0x04
	float MaxAspectRatio; // Offset: 0x12c // Size: 0x04
	char pad_0x135[0xb]; // Offset: 0x135 // Size: 0x0b

	// Functions

	// Object Name: Function UMG.SizeBox.SetWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWidthOverride(float InWidthOverride); // Offset: 0x105518150 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinDesiredWidth(float InMinDesiredWidth); // Offset: 0x1055180d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinDesiredHeight(float InMinDesiredHeight); // Offset: 0x105518058 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Offset: 0x105517fdc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Offset: 0x105517f60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxAspectRatio(float InMaxAspectRatio); // Offset: 0x105517ee4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHeightOverride(float InHeightOverride); // Offset: 0x105517e68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SizeBox.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x105517de4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.SizeBox.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x105517db0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.SizeBox.ClearWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearWidthOverride(); // Offset: 0x105517d9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SizeBox.ClearMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMinDesiredWidth(); // Offset: 0x105517d88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SizeBox.ClearMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMinDesiredHeight(); // Offset: 0x105517d74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SizeBox.ClearMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMaxDesiredWidth(); // Offset: 0x105517d60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SizeBox.ClearMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMaxDesiredHeight(); // Offset: 0x105517d4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SizeBox.ClearMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMaxAspectRatio(); // Offset: 0x105517d38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SizeBox.ClearHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearHeightOverride(); // Offset: 0x105517d24 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UMG.SizeBoxSlot
// Size: 0x68 // Inherited bytes: 0x40
struct USizeBoxSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x16]; // Offset: 0x52 // Size: 0x16

	// Functions

	// Object Name: Function UMG.SizeBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x1055188bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.SizeBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x10551883c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.SizeBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x1055187c0 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.SlateBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate); // Offset: 0x10551952c // Return & Params: Num(4) Size(0x50)

	// Object Name: Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate); // Offset: 0x105519438 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function UMG.SlateBlueprintLibrary.ScreenToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Offset: 0x105519344 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function UMG.SlateBlueprintLibrary.LocalToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Offset: 0x1055191b0 // Return & Params: Num(5) Size(0x58)

	// Object Name: Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Offset: 0x1055190e0 // Return & Params: Num(3) Size(0x48)

	// Object Name: Function UMG.SlateBlueprintLibrary.IsUnderLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Offset: 0x105519000 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function UMG.SlateBlueprintLibrary.GetLocalSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Offset: 0x105518f70 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Offset: 0x105518ee0 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function UMG.SlateBlueprintLibrary.GetAbsolutePosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetAbsolutePosition(struct FGeometry& Geometry); // Offset: 0x105518e50 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Offset: 0x105518d2c // Return & Params: Num(3) Size(0x171)

	// Object Name: Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Offset: 0x105518bf0 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Offset: 0x105518b20 // Return & Params: Num(3) Size(0x48)
};

// Object Name: Class UMG.SlateDataSheet
// Size: 0x430 // Inherited bytes: 0x28
struct USlateDataSheet : UObject {
	// Fields
	struct UTexture2D* DataTexture; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x400]; // Offset: 0x30 // Size: 0x400
};

// Object Name: Class UMG.SlateVectorArtData
// Size: 0x60 // Inherited bytes: 0x28
struct USlateVectorArtData : UObject {
	// Fields
	struct TArray<struct FSlateMeshVertex> VertexData; // Offset: 0x28 // Size: 0x10
	struct TArray<uint32_t> IndexData; // Offset: 0x38 // Size: 0x10
	struct UMaterialInterface* Material; // Offset: 0x48 // Size: 0x08
	struct FVector2D ExtentMin; // Offset: 0x50 // Size: 0x08
	struct FVector2D ExtentMax; // Offset: 0x58 // Size: 0x08
};

// Object Name: Class UMG.Spacer
// Size: 0x118 // Inherited bytes: 0x100
struct USpacer : UWidget {
	// Fields
	struct FVector2D Size; // Offset: 0x100 // Size: 0x08
	char pad_0x108[0x10]; // Offset: 0x108 // Size: 0x10

	// Functions

	// Object Name: Function UMG.Spacer.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSize(struct FVector2D InSize); // Offset: 0x10551c2e4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.SpinBox
// Size: 0x5f8 // Inherited bytes: 0x100
struct USpinBox : UWidget {
	// Fields
	float Value; // Offset: 0x100 // Size: 0x04
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
	DelegateProperty ValueDelegate; // Offset: 0x108 // Size: 0x10
	struct FSpinBoxStyle WidgetStyle; // Offset: 0x118 // Size: 0x3d8
	struct USlateWidgetStyleAsset* Style; // Offset: 0x4f0 // Size: 0x08
	float Delta; // Offset: 0x4f8 // Size: 0x04
	float SliderExponent; // Offset: 0x4fc // Size: 0x04
	struct FSlateFontInfo Font; // Offset: 0x500 // Size: 0x58
	enum class ETextJustify Justification; // Offset: 0x558 // Size: 0x01
	char pad_0x559[0x3]; // Offset: 0x559 // Size: 0x03
	float MinDesiredWidth; // Offset: 0x55c // Size: 0x04
	bool ClearKeyboardFocusOnCommit; // Offset: 0x560 // Size: 0x01
	bool SelectAllTextOnCommit; // Offset: 0x561 // Size: 0x01
	char pad_0x562[0x6]; // Offset: 0x562 // Size: 0x06
	struct FSlateColor ForegroundColor; // Offset: 0x568 // Size: 0x28
	struct FScriptMulticastDelegate OnValueChanged; // Offset: 0x590 // Size: 0x10
	struct FScriptMulticastDelegate OnValueCommitted; // Offset: 0x5a0 // Size: 0x10
	struct FScriptMulticastDelegate OnBeginSliderMovement; // Offset: 0x5b0 // Size: 0x10
	struct FScriptMulticastDelegate OnEndSliderMovement; // Offset: 0x5c0 // Size: 0x10
	char bOverride_MinValue : 1; // Offset: 0x5d0 // Size: 0x01
	char bOverride_MaxValue : 1; // Offset: 0x5d0 // Size: 0x01
	char bOverride_MinSliderValue : 1; // Offset: 0x5d0 // Size: 0x01
	char bOverride_MaxSliderValue : 1; // Offset: 0x5d0 // Size: 0x01
	char pad_0x5D0_4 : 4; // Offset: 0x5d0 // Size: 0x01
	char pad_0x5D1[0x3]; // Offset: 0x5d1 // Size: 0x03
	float MinValue; // Offset: 0x5d4 // Size: 0x04
	float MaxValue; // Offset: 0x5d8 // Size: 0x04
	float MinSliderValue; // Offset: 0x5dc // Size: 0x04
	float MaxSliderValue; // Offset: 0x5e0 // Size: 0x04
	char pad_0x5E4[0x14]; // Offset: 0x5e4 // Size: 0x14

	// Functions

	// Object Name: Function UMG.SpinBox.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetValue(float NewValue); // Offset: 0x10551ca58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinValue(float NewValue); // Offset: 0x10551c9dc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.SetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinSliderValue(float NewValue); // Offset: 0x10551c960 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxValue(float NewValue); // Offset: 0x10551c8e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.SetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxSliderValue(float NewValue); // Offset: 0x10551c868 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.SetForegroundColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Offset: 0x10551c768 // Return & Params: Num(1) Size(0x28)

	// Object Name: DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SpinBox.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetValue(); // Offset: 0x10551c734 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.GetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetMinValue(); // Offset: 0x10551c700 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.GetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetMinSliderValue(); // Offset: 0x10551c6cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.GetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetMaxValue(); // Offset: 0x10551c698 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.GetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetMaxSliderValue(); // Offset: 0x10551c664 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.SpinBox.ClearMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMinValue(); // Offset: 0x10551c650 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SpinBox.ClearMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMinSliderValue(); // Offset: 0x10551c63c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SpinBox.ClearMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMaxValue(); // Offset: 0x10551c628 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.SpinBox.ClearMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMaxSliderValue(); // Offset: 0x10551c614 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UMG.StaticMeshWidget
// Size: 0x120 // Inherited bytes: 0x100
struct UStaticMeshWidget : UWidget {
	// Fields
	struct USlateVectorArtData* StaticMeshAsset; // Offset: 0x100 // Size: 0x08
	struct FVector2D MeshScale; // Offset: 0x108 // Size: 0x08
	char pad_0x110[0x10]; // Offset: 0x110 // Size: 0x10
};

// Object Name: Class UMG.TextBinding
// Size: 0x50 // Inherited bytes: 0x48
struct UTextBinding : UPropertyBinding {
	// Fields
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08

	// Functions

	// Object Name: Function UMG.TextBinding.GetTextValue
	// Flags: [Final|Native|Public|Const]
	struct FText GetTextValue(); // Offset: 0x10551d2a8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.TextBinding.GetStringValue
	// Flags: [Final|Native|Public|Const]
	StrProperty GetStringValue(); // Offset: 0x10551d244 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class UMG.Throbber
// Size: 0x1d8 // Inherited bytes: 0x100
struct UThrobber : UWidget {
	// Fields
	IntProperty NumberOfPieces; // Offset: 0x100 // Size: 0x04
	bool bAnimateHorizontally; // Offset: 0x104 // Size: 0x01
	bool bAnimateVertically; // Offset: 0x105 // Size: 0x01
	bool bAnimateOpacity; // Offset: 0x106 // Size: 0x01
	char pad_0x107[0x1]; // Offset: 0x107 // Size: 0x01
	struct USlateBrushAsset* PieceImage; // Offset: 0x108 // Size: 0x08
	struct FSlateBrush Image; // Offset: 0x110 // Size: 0xb8
	char pad_0x1C8[0x10]; // Offset: 0x1c8 // Size: 0x10

	// Functions

	// Object Name: Function UMG.Throbber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNumberOfPieces(IntProperty InNumberOfPieces); // Offset: 0x10551e4ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.Throbber.SetAnimateVertically
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimateVertically(bool bInAnimateVertically); // Offset: 0x10551e428 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Throbber.SetAnimateOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimateOpacity(bool bInAnimateOpacity); // Offset: 0x10551e3a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.Throbber.SetAnimateHorizontally
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Offset: 0x10551e320 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.TileView
// Size: 0x140 // Inherited bytes: 0x100
struct UTileView : UTableViewBase {
	// Fields
	float ItemWidth; // Offset: 0x100 // Size: 0x04
	float ItemHeight; // Offset: 0x104 // Size: 0x04
	struct TArray<struct UObject*> Items; // Offset: 0x108 // Size: 0x10
	enum class ESelectionMode SelectionMode; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x7]; // Offset: 0x119 // Size: 0x07
	DelegateProperty OnGenerateTileEvent; // Offset: 0x120 // Size: 0x10
	char pad_0x130[0x10]; // Offset: 0x130 // Size: 0x10

	// Functions

	// Object Name: Function UMG.TileView.SetItemWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetItemWidth(float Width); // Offset: 0x10551e82c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.TileView.SetItemHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetItemHeight(float Height); // Offset: 0x10551e7b0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.TileView.RequestListRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestListRefresh(); // Offset: 0x10551e79c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UMG.UMGSequencePlayer
// Size: 0x720 // Inherited bytes: 0x28
struct UUMGSequencePlayer : UObject {
	// Fields
	char pad_0x28[0x348]; // Offset: 0x28 // Size: 0x348
	struct UWidgetAnimation* Animation; // Offset: 0x370 // Size: 0x08
	char pad_0x378[0x3a8]; // Offset: 0x378 // Size: 0x3a8
};

// Object Name: Class UMG.UniformGridPanel
// Size: 0x140 // Inherited bytes: 0x118
struct UUniformGridPanel : UPanelWidget {
	// Fields
	struct FMargin SlotPadding; // Offset: 0x114 // Size: 0x10
	float MinDesiredSlotWidth; // Offset: 0x124 // Size: 0x04
	float MinDesiredSlotHeight; // Offset: 0x128 // Size: 0x04
	char pad_0x130[0x10]; // Offset: 0x130 // Size: 0x10

	// Functions

	// Object Name: Function UMG.UniformGridPanel.SetSlotPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSlotPadding(struct FMargin InSlotPadding); // Offset: 0x10551ede0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Offset: 0x10551ed64 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Offset: 0x10551ece8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.UniformGridPanel.AddChildToUniformGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content); // Offset: 0x10551ec5c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.UniformGridSlot
// Size: 0x58 // Inherited bytes: 0x40
struct UUniformGridSlot : UPanelSlot {
	// Fields
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x40 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x41 // Size: 0x01
	char pad_0x42[0x2]; // Offset: 0x42 // Size: 0x02
	IntProperty Row; // Offset: 0x44 // Size: 0x04
	IntProperty Column; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0xc]; // Offset: 0x4c // Size: 0x0c

	// Functions

	// Object Name: Function UMG.UniformGridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x10551f204 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UniformGridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetRow(IntProperty InRow); // Offset: 0x10551f188 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.UniformGridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x10551f10c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.UniformGridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetColumn(IntProperty InColumn); // Offset: 0x10551f090 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.Viewport
// Size: 0x140 // Inherited bytes: 0x118
struct UViewport : UContentWidget {
	// Fields
	struct FLinearColor BackgroundColor; // Offset: 0x114 // Size: 0x10
	char pad_0x128[0x18]; // Offset: 0x128 // Size: 0x18

	// Functions

	// Object Name: Function UMG.Viewport.Spawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AActor* Spawn(struct AActor* ActorClass); // Offset: 0x105526b54 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.Viewport.SetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetViewRotation(struct FRotator Rotation); // Offset: 0x105526ad8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function UMG.Viewport.SetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetViewLocation(struct FVector Location); // Offset: 0x105526a5c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function UMG.Viewport.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FRotator GetViewRotation(); // Offset: 0x105526a24 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function UMG.Viewport.GetViewportWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWorld* GetViewportWorld(); // Offset: 0x1055269f0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.Viewport.GetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetViewLocation(); // Offset: 0x1055269b8 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class UMG.VisibilityBinding
// Size: 0x48 // Inherited bytes: 0x48
struct UVisibilityBinding : UPropertyBinding {
	// Functions

	// Object Name: Function UMG.VisibilityBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	enum class ESlateVisibility GetValue(); // Offset: 0x105526e94 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.WeakRefImage
// Size: 0x2a8 // Inherited bytes: 0x288
struct UWeakRefImage : UImage {
	// Fields
	char pad_0x288[0x20]; // Offset: 0x288 // Size: 0x20

	// Functions

	// Object Name: Function UMG.WeakRefImage.UnloadTextureResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnloadTextureResource(); // Offset: 0x1055271a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.WeakRefImage.LoadTextureResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadTextureResource(bool bAsync); // Offset: 0x10552711c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.WidgetAnimation
// Size: 0x320 // Inherited bytes: 0x2e8
struct UWidgetAnimation : UMovieSceneSequence {
	// Fields
	struct FScriptMulticastDelegate OnAnimationStarted; // Offset: 0x2e8 // Size: 0x10
	struct FScriptMulticastDelegate OnAnimationFinished; // Offset: 0x2f8 // Size: 0x10
	struct UMovieScene* MovieScene; // Offset: 0x308 // Size: 0x08
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // Offset: 0x310 // Size: 0x10

	// Functions

	// Object Name: Function UMG.WidgetAnimation.GetStartTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetStartTime(); // Offset: 0x105529824 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.WidgetAnimation.GetEndTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetEndTime(); // Offset: 0x1055297f0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class UMG.WidgetBinding
// Size: 0x48 // Inherited bytes: 0x48
struct UWidgetBinding : UPropertyBinding {
	// Functions

	// Object Name: Function UMG.WidgetBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	struct UWidget* GetValue(); // Offset: 0x105529ad0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x508 // Inherited bytes: 0x498
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	// Fields
	struct UWidgetTree* WidgetTree; // Offset: 0x498 // Size: 0x08
	char bAllowTemplate : 1; // Offset: 0x4a0 // Size: 0x01
	char bValidTemplate : 1; // Offset: 0x4a0 // Size: 0x01
	char bTemplateInitialized : 1; // Offset: 0x4a0 // Size: 0x01
	char bCookedTemplate : 1; // Offset: 0x4a0 // Size: 0x01
	char bClassRequiresNativeTick : 1; // Offset: 0x4a0 // Size: 0x01
	char pad_0x4A0_5 : 3; // Offset: 0x4a0 // Size: 0x01
	char pad_0x4A1[0x7]; // Offset: 0x4a1 // Size: 0x07
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // Offset: 0x4a8 // Size: 0x10
	struct TArray<struct UWidgetAnimation*> Animations; // Offset: 0x4b8 // Size: 0x10
	struct TArray<struct FName> NamedSlots; // Offset: 0x4c8 // Size: 0x10
	struct UUserWidget* TemplateAsset; // Offset: 0x4d8 // Size: 0x28
	struct UUserWidget* Template; // Offset: 0x500 // Size: 0x08
};

// Object Name: Class UMG.WidgetBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function UMG.WidgetBlueprintLibrary.UnlockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Offset: 0x10552d0d4 // Return & Params: Num(2) Size(0x170)

	// Object Name: Function UMG.WidgetBlueprintLibrary.Unhandled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FEventReply Unhandled(); // Offset: 0x10552d03c // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Offset: 0x10552cea0 // Return & Params: Num(4) Size(0x180)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetMousePosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Offset: 0x10552cd50 // Return & Params: Num(3) Size(0x178)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetInputMode_UIOnlyEx(struct APlayerController* Target, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Offset: 0x10552cc68 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Offset: 0x10552cb78 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetInputMode_GameOnly(struct APlayerController* Target); // Offset: 0x10552cb04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetInputMode_GameAndUIEx(struct APlayerController* Target, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Offset: 0x10552c9d8 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Offset: 0x10552c8a4 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Offset: 0x10552c778 // Return & Params: Num(5) Size(0x21)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetFocusToGameViewport(); // Offset: 0x10552c764 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Offset: 0x10552c67c // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Offset: 0x10552c594 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Offset: 0x10552c484 // Return & Params: Num(2) Size(0x170)

	// Object Name: Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Offset: 0x10552c328 // Return & Params: Num(3) Size(0x178)

	// Object Name: Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush NoResourceBrush(); // Offset: 0x10552c2c4 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, IntProperty Width, IntProperty Height); // Offset: 0x10552c1ac // Return & Params: Num(4) Size(0xc8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, IntProperty Width, IntProperty Height); // Offset: 0x10552c094 // Return & Params: Num(4) Size(0xc8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Offset: 0x10552bff0 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.LockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Offset: 0x10552be9c // Return & Params: Num(3) Size(0x178)

	// Object Name: Function UMG.WidgetBlueprintLibrary.IsDragDropping
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsDragDropping(); // Offset: 0x10552be68 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetBlueprintLibrary.Handled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FEventReply Handled(); // Offset: 0x10552bdd0 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector2D& SafePadding, struct FVector2D& SafePaddingScale, struct FVector2D& SpillOverPadding); // Offset: 0x10552bc7c // Return & Params: Num(4) Size(0x20)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Offset: 0x10552bba8 // Return & Params: Num(2) Size(0x88)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Offset: 0x10552baa4 // Return & Params: Num(2) Size(0x98)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Offset: 0x10552b9e8 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Offset: 0x10552b908 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Offset: 0x10552b84c // Return & Params: Num(2) Size(0x48)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Offset: 0x10552b7a0 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UDragDropOperation* GetDragDroppingContent(); // Offset: 0x10552b76c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Offset: 0x10552b6c0 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Offset: 0x10552b614 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetBrushResource
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Offset: 0x10552b568 // Return & Params: Num(2) Size(0xc0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct UInterface* Interface, struct TArray<struct UUserWidget*>& FoundWidgets, bool TopLevelOnly); // Offset: 0x10552b404 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Offset: 0x10552b29c // Return & Params: Num(4) Size(0x21)

	// Object Name: Function UMG.WidgetBlueprintLibrary.EndDragDrop
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Offset: 0x10552b18c // Return & Params: Num(2) Size(0x170)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, IntProperty FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Offset: 0x10552af4c // Return & Params: Num(7) Size(0x78)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DrawText
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawText(struct FPaintContext& Context, StrProperty inString, struct FVector2D Position, struct FLinearColor Tint); // Offset: 0x10552adec // Return & Params: Num(4) Size(0x58)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DrawLines
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias); // Offset: 0x10552ac64 // Return & Params: Num(4) Size(0x51)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DrawLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias); // Offset: 0x10552aaec // Return & Params: Num(5) Size(0x51)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DrawBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Offset: 0x10552a97c // Return & Params: Num(5) Size(0x58)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void DismissAllMenus(); // Offset: 0x10552a968 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Offset: 0x10552a738 // Return & Params: Num(4) Size(0x150)

	// Object Name: Function UMG.WidgetBlueprintLibrary.DetectDrag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Offset: 0x10552a548 // Return & Params: Num(4) Size(0x190)

	// Object Name: Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Offset: 0x10552a4cc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetBlueprintLibrary.Create
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Offset: 0x10552a3dc // Return & Params: Num(4) Size(0x20)

	// Object Name: Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Offset: 0x10552a280 // Return & Params: Num(3) Size(0x178)

	// Object Name: Function UMG.WidgetBlueprintLibrary.CheckWidgetIsActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CheckWidgetIsActive(struct UWidget* Widget); // Offset: 0x10552a204 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UMG.WidgetBlueprintLibrary.CaptureMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Offset: 0x10552a0b0 // Return & Params: Num(3) Size(0x178)

	// Object Name: Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Offset: 0x105529f14 // Return & Params: Num(4) Size(0x180)

	// Object Name: Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CancelDragDrop(); // Offset: 0x105529f00 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UMG.WidgetInteractionComponent
// Size: 0x590 // Inherited bytes: 0x3a0
struct UWidgetInteractionComponent : USceneComponent {
	// Fields
	struct FScriptMulticastDelegate OnHoveredWidgetChanged; // Offset: 0x3a0 // Size: 0x10
	char pad_0x3B0[0x10]; // Offset: 0x3b0 // Size: 0x10
	IntProperty VirtualUserIndex; // Offset: 0x3c0 // Size: 0x04
	float PointerIndex; // Offset: 0x3c4 // Size: 0x04
	enum class ECollisionChannel TraceChannel; // Offset: 0x3c8 // Size: 0x01
	char pad_0x3C9[0x3]; // Offset: 0x3c9 // Size: 0x03
	float InteractionDistance; // Offset: 0x3cc // Size: 0x04
	enum class EWidgetInteractionSource InteractionSource; // Offset: 0x3d0 // Size: 0x01
	bool bEnableHitTesting; // Offset: 0x3d1 // Size: 0x01
	bool bShowDebug; // Offset: 0x3d2 // Size: 0x01
	char pad_0x3D3[0x1]; // Offset: 0x3d3 // Size: 0x01
	struct FLinearColor DebugColor; // Offset: 0x3d4 // Size: 0x10
	char pad_0x3E4[0x7c]; // Offset: 0x3e4 // Size: 0x7c
	struct FHitResult CustomHitResult; // Offset: 0x460 // Size: 0x88
	struct FVector2D LocalHitLocation; // Offset: 0x4e8 // Size: 0x08
	struct FVector2D LastLocalHitLocation; // Offset: 0x4f0 // Size: 0x08
	struct UWidgetComponent* HoveredWidgetComponent; // Offset: 0x4f8 // Size: 0x08
	struct FHitResult LastHitResult; // Offset: 0x500 // Size: 0x88
	bool bIsHoveredWidgetInteractable; // Offset: 0x588 // Size: 0x01
	bool bIsHoveredWidgetFocusable; // Offset: 0x589 // Size: 0x01
	bool bIsHoveredWidgetHitTestVisible; // Offset: 0x58a // Size: 0x01
	char pad_0x58B[0x5]; // Offset: 0x58b // Size: 0x05

	// Functions

	// Object Name: Function UMG.WidgetInteractionComponent.SetCustomHitResult
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetCustomHitResult(struct FHitResult& HitResult); // Offset: 0x105530388 // Return & Params: Num(1) Size(0x88)

	// Object Name: Function UMG.WidgetInteractionComponent.SendKeyChar
	// Flags: [Native|Public|BlueprintCallable]
	bool SendKeyChar(StrProperty Characters, bool bRepeat); // Offset: 0x105530244 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function UMG.WidgetInteractionComponent.ScrollWheel
	// Flags: [Native|Public|BlueprintCallable]
	void ScrollWheel(float ScrollDelta); // Offset: 0x1055301c0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.WidgetInteractionComponent.ReleasePointerKey
	// Flags: [Native|Public|BlueprintCallable]
	void ReleasePointerKey(struct FKey Key); // Offset: 0x1055300d0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.WidgetInteractionComponent.ReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	bool ReleaseKey(struct FKey Key); // Offset: 0x10552ffd0 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function UMG.WidgetInteractionComponent.PressPointerKey
	// Flags: [Native|Public|BlueprintCallable]
	void PressPointerKey(struct FKey Key); // Offset: 0x10552fee0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function UMG.WidgetInteractionComponent.PressKey
	// Flags: [Native|Public|BlueprintCallable]
	bool PressKey(struct FKey Key, bool bRepeat); // Offset: 0x10552fd98 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	bool PressAndReleaseKey(struct FKey Key); // Offset: 0x10552fc98 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOverInteractableWidget(); // Offset: 0x10552fc64 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOverHitTestVisibleWidget(); // Offset: 0x10552fc30 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOverFocusableWidget(); // Offset: 0x10552fbfc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetInteractionComponent.GetLastHitResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FHitResult GetLastHitResult(); // Offset: 0x10552fbc4 // Return & Params: Num(1) Size(0x88)

	// Object Name: Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Offset: 0x10552fb90 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetInteractionComponent.Get2DHitLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D Get2DHitLocation(); // Offset: 0x10552fb5c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.WidgetLayoutLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Offset: 0x1055313b4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Offset: 0x105531338 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Offset: 0x1055312bc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Offset: 0x105531240 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Offset: 0x1055311c4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Offset: 0x105531148 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Offset: 0x1055310cc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.SetOriginalViewPortSizeXY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOriginalViewPortSizeXY(IntProperty X, IntProperty Y); // Offset: 0x105531020 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function UMG.WidgetLayoutLibrary.SetOriginalViewPortSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetOriginalViewPortSize(struct FIntPoint& Size); // Offset: 0x105530fa0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Offset: 0x105530f2c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPositionReturnValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D ProjectWorldLocationToWidgetPositionReturnValue(struct APlayerController* PlayerController, struct FVector WorldLocation); // Offset: 0x105530e74 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition); // Offset: 0x105530d74 // Return & Params: Num(4) Size(0x1d)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Offset: 0x105530cec // Return & Params: Num(2) Size(0x40)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetViewportSize
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Offset: 0x105530c70 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetViewportScale
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	float GetViewportScale(struct UObject* WorldContextObject); // Offset: 0x105530bf4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Offset: 0x105530b6c // Return & Params: Num(2) Size(0x40)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Offset: 0x105530a50 // Return & Params: Num(4) Size(0x11)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Offset: 0x1055309d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector2D GetMousePositionOnPlatform(); // Offset: 0x1055309a0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.WidgetNavigation
// Size: 0xb8 // Inherited bytes: 0x28
struct UWidgetNavigation : UObject {
	// Fields
	struct FWidgetNavigationData Up; // Offset: 0x28 // Size: 0x18
	struct FWidgetNavigationData Down; // Offset: 0x40 // Size: 0x18
	struct FWidgetNavigationData Left; // Offset: 0x58 // Size: 0x18
	struct FWidgetNavigationData Right; // Offset: 0x70 // Size: 0x18
	struct FWidgetNavigationData Next; // Offset: 0x88 // Size: 0x18
	struct FWidgetNavigationData Previous; // Offset: 0xa0 // Size: 0x18
};

// Object Name: Class UMG.WidgetSwitcher
// Size: 0x130 // Inherited bytes: 0x118
struct UWidgetSwitcher : UPanelWidget {
	// Fields
	IntProperty ActiveWidgetIndex; // Offset: 0x114 // Size: 0x04
	bool bDontPaintWhenChildEmpty; // Offset: 0x118 // Size: 0x01
	char pad_0x11D[0x13]; // Offset: 0x11d // Size: 0x13

	// Functions

	// Object Name: Function UMG.WidgetSwitcher.SetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDontPaintWhenChildEmpty(bool Enable); // Offset: 0x105531e94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	// Flags: [Native|Public|BlueprintCallable]
	void SetActiveWidgetIndex(IntProperty Index); // Offset: 0x105531e10 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.WidgetSwitcher.SetActiveWidget
	// Flags: [Native|Public|BlueprintCallable]
	void SetActiveWidget(struct UWidget* Widget); // Offset: 0x105531d8c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WidgetSwitcher.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidget* GetWidgetAtIndex(IntProperty Index); // Offset: 0x105531d00 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UMG.WidgetSwitcher.GetNumWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumWidgets(); // Offset: 0x105531ccc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.WidgetSwitcher.GetDontPaintWhenChildEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetDontPaintWhenChildEmpty(); // Offset: 0x105531c98 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetActiveWidgetIndex(); // Offset: 0x105531c64 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.WidgetSwitcher.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidget* GetActiveWidget(); // Offset: 0x105531c30 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UMG.WidgetSwitcherSlot
// Size: 0x60 // Inherited bytes: 0x40
struct UWidgetSwitcherSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0xe]; // Offset: 0x52 // Size: 0x0e

	// Functions

	// Object Name: Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105532374 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WidgetSwitcherSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x1055322f4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105532278 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.WidgetTree
// Size: 0x50 // Inherited bytes: 0x28
struct UWidgetTree : UObject {
	// Fields
	struct UWidget* RootWidget; // Offset: 0x28 // Size: 0x08
	struct TArray<struct UWidget*> AllWidgets; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FLazyLoadBinding> LazyLoadBindings; // Offset: 0x40 // Size: 0x10
};

// Object Name: Class UMG.WindowTitleBarArea
// Size: 0x130 // Inherited bytes: 0x118
struct UWindowTitleBarArea : UContentWidget {
	// Fields
	bool bDoubleClickTogglesFullscreen; // Offset: 0x111 // Size: 0x01
	char pad_0x119[0x17]; // Offset: 0x119 // Size: 0x17

	// Functions

	// Object Name: Function UMG.WindowTitleBarArea.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105532894 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WindowTitleBarArea.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105532814 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.WindowTitleBarArea.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105532798 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UWindowTitleBarAreaSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x50 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x16]; // Offset: 0x52 // Size: 0x16

	// Functions

	// Object Name: Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x105532c00 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WindowTitleBarAreaSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x105532b80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105532b04 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class UMG.WrapBox
// Size: 0x138 // Inherited bytes: 0x118
struct UWrapBox : UPanelWidget {
	// Fields
	struct FVector2D InnerSlotPadding; // Offset: 0x114 // Size: 0x08
	float WrapWidth; // Offset: 0x11c // Size: 0x04
	bool bExplicitWrapWidth; // Offset: 0x120 // Size: 0x01
	char pad_0x125[0x13]; // Offset: 0x125 // Size: 0x13

	// Functions

	// Object Name: Function UMG.WrapBox.SetInnerSlotPadding
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetInnerSlotPadding(struct FVector2D InPadding); // Offset: 0x105532ef0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UMG.WrapBox.AddChildWrapBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UWrapBoxSlot* AddChildWrapBox(struct UWidget* Content); // Offset: 0x105532e64 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UMG.WrapBoxSlot
// Size: 0x68 // Inherited bytes: 0x40
struct UWrapBoxSlot : UPanelSlot {
	// Fields
	struct FMargin Padding; // Offset: 0x40 // Size: 0x10
	bool bFillEmptySpace; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	float FillSpanWhenLessThan; // Offset: 0x54 // Size: 0x04
	enum class EHorizontalAlignment HorizontalAlignment; // Offset: 0x58 // Size: 0x01
	enum class EVerticalAlignment VerticalAlignment; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0xe]; // Offset: 0x5a // Size: 0x0e

	// Functions

	// Object Name: Function UMG.WrapBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Offset: 0x10553331c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WrapBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPadding(struct FMargin InPadding); // Offset: 0x10553329c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UMG.WrapBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Offset: 0x105533220 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Offset: 0x1055331a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UMG.WrapBoxSlot.SetFillEmptySpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFillEmptySpace(bool InbFillEmptySpace); // Offset: 0x105533120 // Return & Params: Num(1) Size(0x1)
};

