#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class BlockyLua.Blocky3DVarWidget
// Size: 0x2c8 // Inherited bytes: 0x260
struct UBlocky3DVarWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08
	bool IsBPInit; // Offset: 0x288 // Size: 0x01
	char pad_0x289[0x7]; // Offset: 0x289 // Size: 0x07
	StrProperty X; // Offset: 0x290 // Size: 0x10
	StrProperty Y; // Offset: 0x2a0 // Size: 0x10
	StrProperty Z; // Offset: 0x2b0 // Size: 0x10
	IntProperty StartSlotIdx; // Offset: 0x2c0 // Size: 0x04
	char pad_0x2C4[0x4]; // Offset: 0x2c4 // Size: 0x04

	// Functions

	// Object Name: Function BlockyLua.Blocky3DVarWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(); // Offset: 0x10632b064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.Blocky3DVarWidget.InitText
	// Flags: [Event|Public|BlueprintEvent]
	void InitText(float X, float Y, float Z); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BlockyLua.Blocky3DVarWidget.CleanNumber
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty CleanNumber(StrProperty Input); // Offset: 0x10632af94 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class BlockyLua.BlockyBlockDisplayWidget
// Size: 0x288 // Inherited bytes: 0x260
struct UBlockyBlockDisplayWidget : UUserWidget {
	// Fields
	char pad_0x260[0x10]; // Offset: 0x260 // Size: 0x10
	struct UBlockyGraphData* BlockyGraphData; // Offset: 0x270 // Size: 0x08
	struct FVector2D BlockSize; // Offset: 0x278 // Size: 0x08
	bool Movable; // Offset: 0x280 // Size: 0x01
	char pad_0x281[0x7]; // Offset: 0x281 // Size: 0x07
};

// Object Name: Class BlockyLua.BlockyBlockDisplayWidget_Custom
// Size: 0x2b0 // Inherited bytes: 0x288
struct UBlockyBlockDisplayWidget_Custom : UBlockyBlockDisplayWidget {
	// Fields
	struct UCustomConfig* Config; // Offset: 0x288 // Size: 0x08
	StrProperty BlockName; // Offset: 0x290 // Size: 0x10
	struct TArray<StrProperty> ParamName; // Offset: 0x2a0 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLua.BlockyBlockDisplayWidget_Custom.UpdateName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateName(StrProperty Name); // Offset: 0x10632b3f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyBlockDisplayWidget_Custom.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(enum class ECustomBlockType Type); // Offset: 0x10632b37c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLua.BlockyBlockDisplayWidget_Preset
// Size: 0x288 // Inherited bytes: 0x288
struct UBlockyBlockDisplayWidget_Preset : UBlockyBlockDisplayWidget {
	// Functions

	// Object Name: Function BlockyLua.BlockyBlockDisplayWidget_Preset.InitPreset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitPreset(struct UBlockyGraphWidget* HostGraphWidget); // Offset: 0x10632b680 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyBlockDisplayWidget_Variable
// Size: 0x298 // Inherited bytes: 0x288
struct UBlockyBlockDisplayWidget_Variable : UBlockyBlockDisplayWidget {
	// Fields
	struct UNamedVar* NamedVar; // Offset: 0x288 // Size: 0x08
	bool HasSettingIcon; // Offset: 0x290 // Size: 0x01
	bool HasCopyIcon; // Offset: 0x291 // Size: 0x01
	bool IsEditingDisplay; // Offset: 0x292 // Size: 0x01
	char pad_0x293[0x5]; // Offset: 0x293 // Size: 0x05

	// Functions

	// Object Name: Function BlockyLua.BlockyBlockDisplayWidget_Variable.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(); // Offset: 0x10632b894 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyBlockDisplayWidget_Variable.CalculateDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D CalculateDrawSize(); // Offset: 0x10632b860 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyBlockListWidget
// Size: 0x2a8 // Inherited bytes: 0x260
struct UBlockyBlockListWidget : UUserWidget {
	// Fields
	char pad_0x260[0x28]; // Offset: 0x260 // Size: 0x28
	struct UBlockyBlockWindowWidget* HostWindow; // Offset: 0x288 // Size: 0x08
	float HorizontalMoveCheckDelta; // Offset: 0x290 // Size: 0x04
	float VerticalMoveCheckDelta; // Offset: 0x294 // Size: 0x04
	bool IsOpenComment; // Offset: 0x298 // Size: 0x01
	char pad_0x299[0x7]; // Offset: 0x299 // Size: 0x07
	struct UBlockyBlockListItemObject* PointAtListItem; // Offset: 0x2a0 // Size: 0x08
};

// Object Name: Class BlockyLua.BlockyBlockWindowWidget
// Size: 0x278 // Inherited bytes: 0x260
struct UBlockyBlockWindowWidget : UUserWidget {
	// Fields
	struct UBlockyGraphData* GraphWidget; // Offset: 0x260 // Size: 0x08
	struct UBlockyBlockListWidget* WidgetToPaint; // Offset: 0x268 // Size: 0x08
	char pad_0x270[0x8]; // Offset: 0x270 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyBlockWindowWidget.SetWidgetVariableToShow
	// Flags: [Event|Public|BlueprintEvent]
	void SetWidgetVariableToShow(struct UBlockyMenuItemObject_Variable* item_Variable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCustomToShow
	// Flags: [Event|Public|BlueprintEvent]
	void SetWidgetCustomToShow(struct UBlockyMenuItemObject_Custom* item_Custom); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCommonToShow
	// Flags: [Event|Public|BlueprintEvent]
	void SetWidgetCommonToShow(struct UBlockyMenuItemObject* MenuItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyBlockWindowWidget.SetWidgetBPToShow
	// Flags: [Event|Public|BlueprintEvent]
	void SetWidgetBPToShow(struct UUserWidget* Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyBooleanWidget
// Size: 0x288 // Inherited bytes: 0x260
struct UBlockyBooleanWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyBooleanWidget.SetText
	// Flags: [Event|Public|BlueprintEvent]
	void SetText(StrProperty Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyBooleanWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(StrProperty displayValue, StrProperty Value); // Offset: 0x10632bf38 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class BlockyLua.BlockyCategoryItemWidget
// Size: 0x2a8 // Inherited bytes: 0x260
struct UBlockyCategoryItemWidget : UUserWidget {
	// Fields
	IntProperty Index; // Offset: 0x260 // Size: 0x04
	char pad_0x264[0x4]; // Offset: 0x264 // Size: 0x04
	struct FText Name; // Offset: 0x268 // Size: 0x18
	bool IsScrolling; // Offset: 0x280 // Size: 0x01
	char pad_0x281[0xf]; // Offset: 0x281 // Size: 0x0f
	struct UBlockyCategoryWidget* HostWidget; // Offset: 0x290 // Size: 0x08
	struct UScrollBox* SubScrollBox; // Offset: 0x298 // Size: 0x08
	char pad_0x2A0[0x8]; // Offset: 0x2a0 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyCategoryItemWidget.SetSelected
	// Flags: [Event|Public|BlueprintEvent]
	void SetSelected(bool IsSelected); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyCategoryItemWidget.OnScroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnScroll(); // Offset: 0x10632c2b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyCategoryItemWidget.OnClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClick(); // Offset: 0x10632c2a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyCategoryItemWidget.InitWithItemObject
	// Flags: [Event|Public|BlueprintEvent]
	void InitWithItemObject(struct UBlockyCategoryItemObject* Item); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyCategoryItemWidget.InitTextToShow
	// Flags: [Event|Public|BlueprintEvent]
	void InitTextToShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyCategoryWidget
// Size: 0x2a0 // Inherited bytes: 0x260
struct UBlockyCategoryWidget : UUserWidget {
	// Fields
	struct UBlockyGraphData* GraphWidget; // Offset: 0x260 // Size: 0x08
	struct UObject* CategoryItemWidgetType; // Offset: 0x268 // Size: 0x08
	struct FText CategoryName; // Offset: 0x270 // Size: 0x18
	char pad_0x288[0x8]; // Offset: 0x288 // Size: 0x08
	struct UScrollBox* SubScrollBox; // Offset: 0x290 // Size: 0x08
	float CurrentScrollOffset; // Offset: 0x298 // Size: 0x04
	char pad_0x29C[0x4]; // Offset: 0x29c // Size: 0x04

	// Functions

	// Object Name: Function BlockyLua.BlockyCategoryWidget.GetCurrentCategoryNameWithVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FText GetCurrentCategoryNameWithVariable(); // Offset: 0x10632c5a8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.BlockyCategoryWidget.GetCategoryContainer
	// Flags: [Event|Public|BlueprintEvent]
	struct UPanelWidget* GetCategoryContainer(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyColorPickerWidget
// Size: 0x2a8 // Inherited bytes: 0x260
struct UBlockyColorPickerWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08
	struct TArray<struct FLinearColor> RecommendedColors; // Offset: 0x288 // Size: 0x10
	struct TArray<struct FLinearColor> StoredColors; // Offset: 0x298 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLua.BlockyColorPickerWidget.SetResult
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetResult(struct FLinearColor& Value); // Offset: 0x10632c7c4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyColorPickerWidget.SetColor
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void SetColor(struct FLinearColor& Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyColorPickerWidget.LoadColors
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadColors(); // Offset: 0x10632c7b0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyEditor
// Size: 0x470 // Inherited bytes: 0x260
struct UBlockyEditor : UUserWidget {
	// Fields
	char pad_0x260[0x8]; // Offset: 0x260 // Size: 0x08
	struct UBlockyGraphData* GraphData; // Offset: 0x268 // Size: 0x08
	bool IsSlotPreset; // Offset: 0x270 // Size: 0x01
	bool IsLastPresetCategory; // Offset: 0x271 // Size: 0x01
	char pad_0x272[0x6]; // Offset: 0x272 // Size: 0x06
	StrProperty LastPresetCategory; // Offset: 0x278 // Size: 0x10
	struct UWidget* MainPanel; // Offset: 0x288 // Size: 0x08
	bool IsCustomVarVisable; // Offset: 0x290 // Size: 0x01
	char pad_0x291[0x7]; // Offset: 0x291 // Size: 0x07
	struct UBlockyEnumWidget* EnumWidget; // Offset: 0x298 // Size: 0x08
	struct UBlockyStringWidget* StringWidget; // Offset: 0x2a0 // Size: 0x08
	struct UBlockyBooleanWidget* BooleanWidget; // Offset: 0x2a8 // Size: 0x08
	struct UBlockyFloatWidget* FloatWidget; // Offset: 0x2b0 // Size: 0x08
	struct UBlocky3DVarWidget* Var3DWidget; // Offset: 0x2b8 // Size: 0x08
	struct UBlockyIntegerWidget* IntegerWidget; // Offset: 0x2c0 // Size: 0x08
	struct UBlockyColorPickerWidget* ColorWidget; // Offset: 0x2c8 // Size: 0x08
	struct UBlockyPresetWidget* PresetWidget; // Offset: 0x2d0 // Size: 0x08
	struct UBlockySelectFromSceneWidget* SelectFromSceneWidget; // Offset: 0x2d8 // Size: 0x08
	struct TArray<struct UBlockyMenuItemObject*> CurrentMenuItems; // Offset: 0x2e0 // Size: 0x10
	struct UBlockyMenuItemObject* CurrentSerchMenuItem; // Offset: 0x2f0 // Size: 0x08
	struct UBlockyBlockListItemObject* ListItemSerchAtPoint; // Offset: 0x2f8 // Size: 0x08
	struct UMaterial* AnimateMaterial; // Offset: 0x300 // Size: 0x08
	struct UMaterialInstance* DeleteUIDockingMaterial; // Offset: 0x308 // Size: 0x08
	struct UMaterialInstance* DeleteRangeUIDockingMaterial; // Offset: 0x310 // Size: 0x08
	struct UMaterialInstance* DeleteUIBgDockingMaterial; // Offset: 0x318 // Size: 0x08
	struct UBlockyMenuWidget* MenuWidget; // Offset: 0x320 // Size: 0x08
	struct UBlockyCategoryWidget* CategoryWidget; // Offset: 0x328 // Size: 0x08
	struct UBlockyBlockWindowWidget* BlockWindowWidget; // Offset: 0x330 // Size: 0x08
	struct UBlockyLogWidget* BlockyLogWidget; // Offset: 0x338 // Size: 0x08
	struct TArray<struct UWidget*> ShortcutBlockingWidgets; // Offset: 0x340 // Size: 0x10
	float PresetTagTitleY; // Offset: 0x350 // Size: 0x04
	char pad_0x354[0x4]; // Offset: 0x354 // Size: 0x04
	struct UBlockyMenuItemWidget* CurrentMenuItemWidget; // Offset: 0x358 // Size: 0x08
	MapProperty TypeFilterItems; // Offset: 0x360 // Size: 0x50
	MapProperty TypeFilterArrayItems; // Offset: 0x3b0 // Size: 0x50
	struct TArray<struct UBlockyMenuItemObject_TypeFilter*> TypeFilterMenus; // Offset: 0x400 // Size: 0x10
	struct TArray<struct UBlockyCategoryItemObject*> CurrentSlotPresetCategorys; // Offset: 0x410 // Size: 0x10
	char pad_0x420[0x50]; // Offset: 0x420 // Size: 0x50

	// Functions

	// Object Name: Function BlockyLua.BlockyEditor.UpdateTriggerGroups
	// Flags: [Event|Public|BlueprintEvent]
	void UpdateTriggerGroups(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyEditor.UpdateSearchPanel
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UpdateSearchPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyEditor.UpdateSearchButtonVisible
	// Flags: [Event|Public|BlueprintEvent]
	void UpdateSearchButtonVisible(bool IsShowSearchButton); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.TryBackToVariableOrCustomPanel
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool TryBackToVariableOrCustomPanel(); // Offset: 0x10632d69c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.ShowPresetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowPresetAnimation(struct UPresetDesc* PresetDesc); // Offset: 0x10632d620 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyEditor.SetWidgetBPToShow
	// Flags: [Event|Public|BlueprintEvent]
	void SetWidgetBPToShow(struct UUserWidget* Widget, bool HideCategory); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLua.BlockyEditor.SetMenuWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMenuWidget(struct UBlockyMenuWidget* Widget); // Offset: 0x10632d5a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyEditor.SetCategoryWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCategoryWidget(struct UBlockyCategoryWidget* Widget); // Offset: 0x10632d528 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyEditor.SetBlockLogWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockLogWidget(struct UBlockyLogWidget* Widget); // Offset: 0x10632d4ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyEditor.SetBlockListWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockListWidget(struct UBlockyBlockWindowWidget* Widget); // Offset: 0x10632d430 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyEditor.ResetAsyncWidgetHandleMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetAsyncWidgetHandleMap(); // Offset: 0x10632d41c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyEditor.OnUpdateUndoRedoState
	// Flags: [Event|Public|BlueprintEvent]
	void OnUpdateUndoRedoState(bool HasUndoCommands, bool HasRedoCommands); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BlockyLua.BlockyEditor.OnShowTips
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnShowTips(struct FText& Tips); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.BlockyEditor.OnShowPresetPanelHandler
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnShowPresetPanelHandler(bool IsShow); // Offset: 0x10632d398 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.LoadWidgetAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LoadWidgetAsync(StrProperty WidgetName, StrProperty WidgetPath, DelegateProperty& Delegate); // Offset: 0x10632d19c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function BlockyLua.BlockyEditor.LoadMaterialInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UMaterialInterface* LoadMaterialInterface(StrProperty AnimationPath); // Offset: 0x10632d0a8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLua.BlockyEditor.IsShowExplain
	// Flags: [Event|Public|BlueprintEvent]
	void IsShowExplain(bool bFlag); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.IsCloseComment
	// Flags: [Event|Public|BlueprintEvent]
	void IsCloseComment(bool bFlag); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.GetSaveCooldownDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSaveCooldownDuration(); // Offset: 0x10632d074 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyEditor.GetLocaleString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetLocaleString(StrProperty KeyString); // Offset: 0x10632cfa4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLua.BlockyEditor.GetCurrentMenuItem
	// Flags: [Native|Public|BlueprintCallable]
	struct UBlockyMenuItemObject* GetCurrentMenuItem(); // Offset: 0x10632cf68 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyEditor.CollectListItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CollectListItem(bool bCollect); // Offset: 0x10632cee4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.BP_OnShowTools
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void BP_OnShowTools(struct TArray<enum class EBlockyBPToolButtonType>& ButtonTypes); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyEditor.BP_OnBlockyEditorShortcut
	// Flags: [Event|Public|BlueprintEvent]
	void BP_OnBlockyEditorShortcut(enum class EBlockyEditorShortcutKey ShortCutKey); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyEditor.AddChildBluckyWidget
	// Flags: [Event|Public|BlueprintEvent]
	void AddChildBluckyWidget(struct UUserWidget* Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyEnumWidget
// Size: 0x288 // Inherited bytes: 0x260
struct UBlockyEnumWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyEnumWidget.SetShowDisplayItems
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void SetShowDisplayItems(MapProperty& Names); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLua.BlockyEnumWidget.SetResultWithName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResultWithName(struct FName Name); // Offset: 0x10632dfb8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyFloatWidget
// Size: 0x288 // Inherited bytes: 0x260
struct UBlockyFloatWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyFloatWidget.SetText
	// Flags: [Event|Public|BlueprintEvent]
	void SetText(StrProperty Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyFloatWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(StrProperty Value); // Offset: 0x10632e31c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyFloatWidget.CleanNumber
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty CleanNumber(StrProperty Input); // Offset: 0x10632e24c // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class BlockyLua.BlockyGraphWidget
// Size: 0x300 // Inherited bytes: 0x260
struct UBlockyGraphWidget : UUserWidget {
	// Fields
	char pad_0x260[0x8]; // Offset: 0x260 // Size: 0x08
	struct UBlockyGraphData* BlockyGraphData; // Offset: 0x268 // Size: 0x08
	struct UBlockyEditor* HostEditor; // Offset: 0x270 // Size: 0x08
	struct FGraphSettingMap GraphSettingsMap; // Offset: 0x278 // Size: 0x50
	struct TArray<IntProperty> defaultTags; // Offset: 0x2c8 // Size: 0x10
	bool IsOnTouch; // Offset: 0x2d8 // Size: 0x01
	bool IsMoveGraphOnly; // Offset: 0x2d9 // Size: 0x01
	char pad_0x2DA[0x6]; // Offset: 0x2da // Size: 0x06
	DelegateProperty OnAsyncLoadBinCompletedHandle; // Offset: 0x2e0 // Size: 0x10
	struct UDeleteBlockUI* DeleteBlockUI; // Offset: 0x2f0 // Size: 0x08
	bool IsShowSaveTemplate; // Offset: 0x2f8 // Size: 0x01
	char pad_0x2F9[0x7]; // Offset: 0x2f9 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockyGraphWidget.ViewPosToCanvasPos
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D ViewPosToCanvasPos(struct FVector2D Postion); // Offset: 0x106330b54 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.UpdateVariableItemNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FText> UpdateVariableItemNames(); // Offset: 0x106330af0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.UpdateTriggerGroups
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateTriggerGroups(); // Offset: 0x106330adc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.UpdateCustomItemNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FText> UpdateCustomItemNames(); // Offset: 0x106330a78 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.UpdateBlockByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateBlockByTag(); // Offset: 0x106330a64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Undo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Undo(); // Offset: 0x106330a50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.TryBackToVariableOrCustomPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool TryBackToVariableOrCustomPanel(); // Offset: 0x106330a1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ShowTips
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ShowTips(struct FText& Tips); // Offset: 0x106330970 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ShowPresetParamPop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowPresetParamPop(); // Offset: 0x10633095c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetViewScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetViewScale(float InScale); // Offset: 0x1063308e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetViewPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetViewPosition(struct FVector2D ViewPosition); // Offset: 0x106330868 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetTagsSetting
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetTagsSetting(struct TArray<IntProperty>& newDefaultTags, struct FGraphSettingMap& newGraphSettingsMap); // Offset: 0x106330748 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetShowSaveTemplateVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetShowSaveTemplateVar(bool IsShow); // Offset: 0x1063306c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetMenuWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMenuWidget(struct UBlockyMenuWidget* Widget); // Offset: 0x106330648 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetGraphCanMove
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGraphCanMove(bool isCanMove); // Offset: 0x1063305c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetCurrentSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCurrentSubGraph(StrProperty InName); // Offset: 0x1063304e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetCategoryWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCategoryWidget(struct UBlockyCategoryWidget* Widget); // Offset: 0x106330464 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetCaptureScreenShot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct UTexture2D* SetCaptureScreenShot(struct FVector2D screenRect); // Offset: 0x1063303dc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetBlockLogWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockLogWidget(struct UBlockyLogWidget* Widget); // Offset: 0x106330360 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SetBlockListWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockListWidget(struct UBlockyBlockWindowWidget* Widget); // Offset: 0x1063302e4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SaveGraphToJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SaveGraphToJsonText(); // Offset: 0x106330280 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SaveGraphToBin
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> SaveGraphToBin(); // Offset: 0x10633021c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SaveGlobalVarToJsonText(); // Offset: 0x1063301b8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToBin
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> SaveGlobalVarToBin(); // Offset: 0x106330154 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SaveCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveCustom(); // Offset: 0x106330140 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.SaveBlockyGraphToTemplate
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> SaveBlockyGraphToTemplate(struct UBlockyGraph* BlockyGraph); // Offset: 0x10633008c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Save
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Save(); // Offset: 0x106330078 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ReturnToPreviewGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReturnToPreviewGraph(); // Offset: 0x106330064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ReturnToMainGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReturnToMainGraph(); // Offset: 0x106330050 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ResetMenuItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetMenuItems(); // Offset: 0x10633003c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ResetJsonChangedFlag
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetJsonChangedFlag(); // Offset: 0x106330028 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ResetGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetGraph(); // Offset: 0x106330014 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.RemoveSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveSubGraph(StrProperty InName); // Offset: 0x10632ff30 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.RefreshFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshFont(); // Offset: 0x10632ff1c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ReEditVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReEditVariable(IntProperty Index); // Offset: 0x10632fea0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Redo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Redo(); // Offset: 0x10632fe8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.QuoteCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QuoteCustom(); // Offset: 0x10632fe78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Quote
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Quote(); // Offset: 0x10632fe64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Paste
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Paste(); // Offset: 0x10632fe50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.OnCloseItemList
	// Flags: [Event|Public|BlueprintEvent]
	void OnCloseItemList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.OnAsyncLoadGraphBinCompleted
	// Flags: [Final|Native|Public]
	void OnAsyncLoadGraphBinCompleted(); // Offset: 0x10632fe3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph_Test
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadTemplateToBlockyGraph_Test(struct TArray<char> TemplateAst, bool IsCreateNewGraph, bool IsLoadPresetsInGraph); // Offset: 0x10632fcc0 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LoadTemplateToBlockyGraph(struct TArray<char>& TemplateAst, bool IsCreateNewGraph, bool IsLoadPresetsInGraph); // Offset: 0x10632fb7c // Return & Params: Num(3) Size(0x12)

	// Object Name: Function BlockyLua.BlockyGraphWidget.LoadGraphFromJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadGraphFromJsonText(StrProperty JsonStr); // Offset: 0x10632fa98 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.LoadGraphFromBin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LoadGraphFromBin(struct TArray<char>& JsonStr); // Offset: 0x10632f9f0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadGlobalVarFromJsonText(StrProperty JsonStr); // Offset: 0x10632f90c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromBin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LoadGlobalVarFromBin(struct TArray<char>& JsonStr); // Offset: 0x10632f864 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Load
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Load(); // Offset: 0x10632f850 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.IsViewOverlap
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool IsViewOverlap(struct FVector2D Position, struct FVector2D Size); // Offset: 0x10632f790 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BlockyLua.BlockyGraphWidget.IsFirstGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsFirstGraph(); // Offset: 0x10632f75c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GM_GenerateAllBlocks
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GM_GenerateAllBlocks(IntProperty CombinedBlocksNum, IntProperty GraphBlocksNum, bool bNeedResetGraph); // Offset: 0x10632f664 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GM_AddBlocks
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GM_AddBlocks(struct TArray<StrProperty>& typeNames, IntProperty X, IntProperty Y); // Offset: 0x10632f534 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetViewSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetViewSize(); // Offset: 0x10632f500 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetViewScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetViewScale(); // Offset: 0x10632f4cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetViewPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetViewPosition(); // Offset: 0x10632f498 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetJsonChangedFlag
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetJsonChangedFlag(); // Offset: 0x10632f464 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetGraphSettingByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GetGraphSettingByName(StrProperty GraphName, bool& CanCopy, bool& CanReName, bool& CanDel, bool& CanSave, struct TArray<IntProperty>& Tags); // Offset: 0x10632f1b4 // Return & Params: Num(6) Size(0x28)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetDeleteBlockUIRect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetDeleteBlockUIRect(float InRectWidth); // Offset: 0x10632f138 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyGraphWidget.GetCurrentGraph
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UBlockyGraph* GetCurrentGraph(); // Offset: 0x10632f104 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.FocusTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FocusTo(struct UBlockBase* TargetBlock); // Offset: 0x10632f088 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGraphWidget.FinishVariableEdit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishVariableEdit(bool bSaveVar, bool bReEdit); // Offset: 0x10632efb8 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BlockyLua.BlockyGraphWidget.FinishCustomEdit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishCustomEdit(bool bSave); // Offset: 0x10632ef34 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.FinishBlockSetting
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishBlockSetting(bool bSave); // Offset: 0x10632eeb0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Eject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Eject(); // Offset: 0x10632ee9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.EditCustumBlockGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditCustumBlockGraph(); // Offset: 0x10632ee88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.EditCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditCustom(); // Offset: 0x10632ee74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Disable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Disable(); // Offset: 0x10632ee60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.DeleteVariableListItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteVariableListItem(IntProperty Index); // Offset: 0x10632ede4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyGraphWidget.DeleteSelected
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteSelected(); // Offset: 0x10632edd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.DeleteCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteCustom(); // Offset: 0x10632edbc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.DefineCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DefineCustom(); // Offset: 0x10632eda8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Define
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Define(); // Offset: 0x10632ed94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Copy
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Copy(); // Offset: 0x10632ed80 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Comment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Comment(); // Offset: 0x10632ed6c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.CollectListItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CollectListItem(bool bCollect); // Offset: 0x10632ece8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyGraphWidget.Clone
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Clone(); // Offset: 0x10632ecd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ClearUndoRedoDatas
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearUndoRedoDatas(); // Offset: 0x10632ecc0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ClearTextSizeCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTextSizeCache(); // Offset: 0x10632ecac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.ClearLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearLog(); // Offset: 0x10632ec98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyGraphWidget.CanvasPosToViewPos
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D CanvasPosToViewPos(struct FVector2D Postion); // Offset: 0x10632ec10 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyGraphWidget.BlockyLog_Show
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BlockyLog_Show(enum class EBlockyLogMsgMode Mode, struct UBlockBase* BlockSource, StrProperty SlotID, StrProperty Info); // Offset: 0x10632ea0c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLua.BlockyGraphWidget.AsyncLoadGraphFromBin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AsyncLoadGraphFromBin(struct TArray<char>& GraphBinContent, struct TArray<char>& GlobalVarBinContent); // Offset: 0x10632e8f4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLua.BlockyGraphWidget.AddSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddSubGraph(StrProperty InName, StrProperty InType); // Offset: 0x10632e778 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLua.BlockyGraphWidget.AddGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UBlockyGraph* AddGraph(StrProperty InName, StrProperty InType); // Offset: 0x10632e5ec // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLua.BlockyGraphWidget.AddGlobalComment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddGlobalComment(); // Offset: 0x10632e5d8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyGroupItemWidget
// Size: 0x260 // Inherited bytes: 0x260
struct UBlockyGroupItemWidget : UUserWidget {
};

// Object Name: Class BlockyLua.BlockyGroupWidget
// Size: 0x278 // Inherited bytes: 0x260
struct UBlockyGroupWidget : UUserWidget {
	// Fields
	struct UButton* BT_AddGroupItem; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x10]; // Offset: 0x268 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLua.BlockyGroupWidget.GetGroupContainer
	// Flags: [Event|Public|BlueprintEvent]
	struct UPanelWidget* GetGroupContainer(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyGroupWidget.AddGroupItem
	// Flags: [Final|Native|Public]
	void AddGroupItem(); // Offset: 0x1063325a0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyIntegerWidget
// Size: 0x290 // Inherited bytes: 0x260
struct UBlockyIntegerWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08
	bool NegativeEnable; // Offset: 0x288 // Size: 0x01
	char pad_0x289[0x7]; // Offset: 0x289 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockyIntegerWidget.SetText
	// Flags: [Event|Public|BlueprintEvent]
	void SetText(StrProperty Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyIntegerWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(StrProperty Value); // Offset: 0x106332818 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyIntegerWidget.SetNegativeEnable
	// Flags: [Event|Public|BlueprintEvent]
	void SetNegativeEnable(bool Enable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLua.BlockyLogItemWidget
// Size: 0x2a8 // Inherited bytes: 0x260
struct UBlockyLogItemWidget : UUserWidget {
	// Fields
	struct UBlockyGraphData* GraphWidget; // Offset: 0x260 // Size: 0x08
	struct UBlockyLogWidget* LogWidget; // Offset: 0x268 // Size: 0x08
	struct UBlockBase* BlockBase; // Offset: 0x270 // Size: 0x08
	StrProperty BlockSlotId; // Offset: 0x278 // Size: 0x10
	char pad_0x288[0x20]; // Offset: 0x288 // Size: 0x20

	// Functions

	// Object Name: Function BlockyLua.BlockyLogItemWidget.SetShowWarn
	// Flags: [Event|Public|BlueprintEvent]
	void SetShowWarn(StrProperty Warn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.SetShowInfo
	// Flags: [Event|Public|BlueprintEvent]
	void SetShowInfo(StrProperty Info); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.SetShowError
	// Flags: [Event|Public|BlueprintEvent]
	void SetShowError(StrProperty Error); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.SetActiveWidgetIndex
	// Flags: [Event|Public|BlueprintEvent]
	void SetActiveWidgetIndex(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.OnClickBtnToBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClickBtnToBlock(); // Offset: 0x106335c14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.GetTextBlockWarn
	// Flags: [Event|Public|BlueprintEvent]
	struct UTextBlock* GetTextBlockWarn(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.GetTextBlockInfo
	// Flags: [Event|Public|BlueprintEvent]
	struct UTextBlock* GetTextBlockInfo(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.GetTextBlockError
	// Flags: [Event|Public|BlueprintEvent]
	struct UTextBlock* GetTextBlockError(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLogItemWidget.GetActiveWidgetIndex
	// Flags: [Event|Public|BlueprintEvent]
	IntProperty GetActiveWidgetIndex(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class BlockyLua.BlockyLogWidget
// Size: 0x290 // Inherited bytes: 0x260
struct UBlockyLogWidget : UUserWidget {
	// Fields
	struct UBlockyGraphData* GraphWidget; // Offset: 0x260 // Size: 0x08
	struct UObject* LogItemWidgetType; // Offset: 0x268 // Size: 0x08
	char pad_0x270[0x20]; // Offset: 0x270 // Size: 0x20

	// Functions

	// Object Name: Function BlockyLua.BlockyLogWidget.ShowLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowLog(); // Offset: 0x10633641c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLogWidget.SetBtnWarnText
	// Flags: [Event|Public|BlueprintEvent]
	void SetBtnWarnText(StrProperty Warn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogWidget.SetBtnInfoText
	// Flags: [Event|Public|BlueprintEvent]
	void SetBtnInfoText(StrProperty Info); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogWidget.SetBtnErrorText
	// Flags: [Event|Public|BlueprintEvent]
	void SetBtnErrorText(StrProperty Error); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogWidget.OnClickWarnShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClickWarnShow(); // Offset: 0x106336408 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLogWidget.OnClickInfoShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClickInfoShow(); // Offset: 0x1063363f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLogWidget.OnClickErrorShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClickErrorShow(); // Offset: 0x1063363e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLogWidget.OnClickAllShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClickAllShow(); // Offset: 0x1063363cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLogWidget.GetLogContainer
	// Flags: [Event|Public|BlueprintEvent]
	struct UPanelWidget* GetLogContainer(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLogWidget.GetItemTextWidth
	// Flags: [Event|Public|BlueprintEvent]
	float GetItemTextWidth(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLogWidget.GetBtnWarnText
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetBtnWarnText(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogWidget.GetBtnInfoText
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetBtnInfoText(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLogWidget.GetBtnErrorText
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetBtnErrorText(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLua.BlockyLuaLoopScrollBase
// Size: 0xc50 // Inherited bytes: 0xb28
struct UBlockyLuaLoopScrollBase : UScrollBox {
	// Fields
	bool bDelayLoad; // Offset: 0xb28 // Size: 0x01
	char pad_0xB29[0x3]; // Offset: 0xb29 // Size: 0x03
	float BlockyLuaEdgePadding; // Offset: 0xb2c // Size: 0x04
	struct FScriptMulticastDelegate OnRefreshItem; // Offset: 0xb30 // Size: 0x10
	struct FScriptMulticastDelegate OnItemCreated; // Offset: 0xb40 // Size: 0x10
	struct FScriptMulticastDelegate OnChangeData; // Offset: 0xb50 // Size: 0x10
	char pad_0xB60[0xd0]; // Offset: 0xb60 // Size: 0xd0
	struct UWidget* itemType; // Offset: 0xc30 // Size: 0x08
	char pad_0xC38[0x10]; // Offset: 0xc38 // Size: 0x10
	struct UCanvasPanel* CanvasPanel; // Offset: 0xc48 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.UserScrolled
	// Flags: [Final|Native|Protected]
	void UserScrolled(float Offset); // Offset: 0x1063370e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.SetItemType
	// Flags: [Final|Native|Public]
	void SetItemType(struct UWidget* _ItemType); // Offset: 0x106337068 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.SetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetItemCount(IntProperty Count); // Offset: 0x106336fdc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.RemoveItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveItem(IntProperty Index); // Offset: 0x106336f60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.RefreshItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RefreshItem(IntProperty Index); // Offset: 0x106336ed4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshAllItems(); // Offset: 0x106336ec0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.Push
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Push(); // Offset: 0x106336eac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.Pop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Pop(); // Offset: 0x106336e98 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnRefreshItem__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnRefreshItem__DelegateSignature(struct UWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnItemCreated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnItemCreated__DelegateSignature(struct UWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnChangeData__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnChangeData__DelegateSignature(struct UWidget* Item, IntProperty Index, StrProperty Key); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.InsertItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InsertItem(IntProperty Index); // Offset: 0x106336e1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.GetWidgetIndex
	// Flags: [Final|Native|Protected]
	IntProperty GetWidgetIndex(struct UWidget* Item); // Offset: 0x106336d90 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetItemCount(); // Offset: 0x106336d5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.GetIndexOfWidget
	// Flags: [Final|Native|Protected]
	struct UWidget* GetIndexOfWidget(IntProperty Index); // Offset: 0x106336cd0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.ChangeData
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ChangeData(IntProperty Index, StrProperty Key); // Offset: 0x106336b9c // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.CallTick
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void CallTick(float DeltaTime); // Offset: 0x106336b20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase.AutoSize
	// Flags: [Final|Native|Public]
	void AutoSize(bool bAutoSize); // Offset: 0x106336a9c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLua.BlockyLuaLoopScrollBase_MultiItem
// Size: 0xc98 // Inherited bytes: 0xb28
struct UBlockyLuaLoopScrollBase_MultiItem : UScrollBox {
	// Fields
	bool bDelayLoad; // Offset: 0xb28 // Size: 0x01
	char pad_0xB29[0x3]; // Offset: 0xb29 // Size: 0x03
	float BlockyLuaEdgePadding; // Offset: 0xb2c // Size: 0x04
	struct FScriptMulticastDelegate OnRefreshItem; // Offset: 0xb30 // Size: 0x10
	struct FScriptMulticastDelegate OnItemCreated; // Offset: 0xb40 // Size: 0x10
	struct FScriptMulticastDelegate OnChangeData; // Offset: 0xb50 // Size: 0x10
	char pad_0xB60[0x130]; // Offset: 0xb60 // Size: 0x130
	struct UCanvasPanel* CanvasPanel; // Offset: 0xc90 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.UserScrolled
	// Flags: [Final|Native|Protected]
	void UserScrolled(float Offset); // Offset: 0x106337de0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemType
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetItemType(struct TArray<struct UWidget*>& TypeArray); // Offset: 0x106337d38 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetItemCount(IntProperty Count); // Offset: 0x106337cac // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RemoveItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveItem(IntProperty Index); // Offset: 0x106337c30 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RefreshItem(IntProperty Index); // Offset: 0x106337ba4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshAllItems(); // Offset: 0x106337b90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Push
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Push(struct UWidget* Type); // Offset: 0x106337b14 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Pop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Pop(); // Offset: 0x106337b00 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnRefreshItem__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnRefreshItem__DelegateSignature(struct UWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnItemCreated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnItemCreated__DelegateSignature(struct UWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnChangeData__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnChangeData__DelegateSignature(struct UWidget* Item, IntProperty Index, StrProperty Key); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.InsertItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InsertItem(IntProperty Index, struct UWidget* Type); // Offset: 0x106337a48 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetWidgetIndex
	// Flags: [Final|Native|Protected]
	IntProperty GetWidgetIndex(struct UWidget* Item); // Offset: 0x1063379bc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetItemCount(); // Offset: 0x106337988 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetIndexOfWidget
	// Flags: [Final|Native|Protected]
	struct UWidget* GetIndexOfWidget(IntProperty Index); // Offset: 0x1063378fc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ClearItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearItems(); // Offset: 0x1063378e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ChangeData
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ChangeData(IntProperty Index, StrProperty Key); // Offset: 0x1063377b4 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.CallTick
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void CallTick(float DeltaTime); // Offset: 0x106337738 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.AutoSize
	// Flags: [Final|Native|Public]
	void AutoSize(bool bAutoSize); // Offset: 0x1063376b4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLua.BlockyLuaLoopScrollBox
// Size: 0xc60 // Inherited bytes: 0xc50
struct UBlockyLuaLoopScrollBox : UBlockyLuaLoopScrollBase {
	// Fields
	float ItemSize; // Offset: 0xc50 // Size: 0x04
	float Padding; // Offset: 0xc54 // Size: 0x04
	bool bAlignMagnetic; // Offset: 0xc58 // Size: 0x01
	char pad_0xC59[0x7]; // Offset: 0xc59 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBox.ScrollToItem
	// Flags: [Native|Public]
	void ScrollToItem(IntProperty Index); // Offset: 0x1063383b0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class BlockyLua.BlockyLuaLoopScrollBox_MultiItem
// Size: 0xd40 // Inherited bytes: 0xc98
struct UBlockyLuaLoopScrollBox_MultiItem : UBlockyLuaLoopScrollBase_MultiItem {
	// Fields
	MapProperty WidgetSizeMap; // Offset: 0xc98 // Size: 0x50
	MapProperty WidgetPaddingMap; // Offset: 0xce8 // Size: 0x50
	bool bAlignMagnetic; // Offset: 0xd38 // Size: 0x01
	char pad_0xD39[0x7]; // Offset: 0xd39 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.ScrollToItem
	// Flags: [Native|Public|BlueprintCallable]
	void ScrollToItem(IntProperty Index); // Offset: 0x1063386e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_UserScrolled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BP_UserScrolled(float Offset); // Offset: 0x106338668 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_PreventScrollOutOfSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool BP_PreventScrollOutOfSize(bool bScroll); // Offset: 0x1063385d4 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_GetContentSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float BP_GetContentSize(); // Offset: 0x1063385a0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class BlockyLua.BlockyLuaLoopScrollGrid
// Size: 0xc78 // Inherited bytes: 0xc50
struct UBlockyLuaLoopScrollGrid : UBlockyLuaLoopScrollBase {
	// Fields
	struct FVector2D ItemSize; // Offset: 0xc50 // Size: 0x08
	struct FVector2D Padding; // Offset: 0xc58 // Size: 0x08
	bool bAlignGrid; // Offset: 0xc60 // Size: 0x01
	bool bAlignAnimation; // Offset: 0xc61 // Size: 0x01
	char pad_0xC62[0x16]; // Offset: 0xc62 // Size: 0x16

	// Functions

	// Object Name: Function BlockyLua.BlockyLuaLoopScrollGrid.ScrollToItem
	// Flags: [Native|Public|BlueprintCallable]
	void ScrollToItem(IntProperty Index); // Offset: 0x1063389bc // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class BlockyLua.BlockyMenuItemWidget
// Size: 0x290 // Inherited bytes: 0x260
struct UBlockyMenuItemWidget : UUserWidget {
	// Fields
	IntProperty Index; // Offset: 0x260 // Size: 0x04
	char pad_0x264[0x4]; // Offset: 0x264 // Size: 0x04
	struct FText Name; // Offset: 0x268 // Size: 0x18
	struct UBlockyMenuWidget* HostWidget; // Offset: 0x280 // Size: 0x08
	struct UBlockyCategoryItemWidget* CurrentCategoryItemWidget; // Offset: 0x288 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyMenuItemWidget.SetSelected
	// Flags: [Event|Public|BlueprintEvent]
	void SetSelected(bool IsSelected); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyMenuItemWidget.OnClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClick(); // Offset: 0x106338c8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyMenuItemWidget.InitWithItemObject
	// Flags: [Event|Public|BlueprintEvent]
	void InitWithItemObject(struct UBlockyMenuItemObject* Item); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyMenuItemWidget.InitTextToShow
	// Flags: [Event|Public|BlueprintEvent]
	void InitTextToShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyMenuWidget
// Size: 0x280 // Inherited bytes: 0x260
struct UBlockyMenuWidget : UUserWidget {
	// Fields
	struct UObject* MenuItemWidgetType; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x10]; // Offset: 0x268 // Size: 0x10
	struct UBlockyGraphData* GraphWidget; // Offset: 0x278 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyMenuWidget.SelectMenu
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SelectMenu(struct UBlockyMenuItemWidget* MenuItemWidget); // Offset: 0x106338f7c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLua.BlockyMenuWidget.OnAddMenuItemWidget
	// Flags: [Event|Public|BlueprintEvent]
	void OnAddMenuItemWidget(struct UBlockyMenuItemWidget* MenuItemWidget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyMenuWidget.GetMenuContainer
	// Flags: [Event|Public|BlueprintEvent]
	struct UPanelWidget* GetMenuContainer(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLua.BlockyPresetItemWidget
// Size: 0x280 // Inherited bytes: 0x260
struct UBlockyPresetItemWidget : UUserWidget {
	// Fields
	struct UPresetDesc* Desc; // Offset: 0x260 // Size: 0x08
	struct UBlockyPresetWidget* Host; // Offset: 0x268 // Size: 0x08
	struct UBlockySearchWidget* SearchHost; // Offset: 0x270 // Size: 0x08
	struct UScrollBox* SubScrollBox; // Offset: 0x278 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyPresetItemWidget.SetPresetDesc_BP
	// Flags: [Event|Public|BlueprintEvent]
	void SetPresetDesc_BP(struct UPresetDesc* PresetDesc); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyPresetItemWidget.SetImageShowIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetImageShowIcon(struct UImage* Image); // Offset: 0x1063392ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyPresetItemWidget.GetPresetDescCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPresetDescCode(); // Offset: 0x106339248 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLua.BlockyPresetWidget
// Size: 0x300 // Inherited bytes: 0x260
struct UBlockyPresetWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyEditor* HostWidget; // Offset: 0x280 // Size: 0x08
	struct UButton* Button_FilterAction; // Offset: 0x288 // Size: 0x08
	StrProperty SlotTypeName; // Offset: 0x290 // Size: 0x10
	MapProperty CurrentTages; // Offset: 0x2a0 // Size: 0x50
	struct TArray<StrProperty> CurrentTagesStr; // Offset: 0x2f0 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLua.BlockyPresetWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(struct UPresetDesc* Value); // Offset: 0x106339888 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyPresetWidget.SetPresets
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void SetPresets(struct TArray<struct UPresetDesc*>& Presets); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyPresetWidget.ResetMenuItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetMenuItem(); // Offset: 0x106339874 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyPresetWidget.OnFilterBtnClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty OnFilterBtnClick(); // Offset: 0x106339810 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoopScrollBoxFilterStr(StrProperty filter); // Offset: 0x106339778 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LoopScrollBoxFilterByTag(MapProperty& Tags, struct TArray<StrProperty> curTagsStr); // Offset: 0x106339620 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function BlockyLua.BlockyPresetWidget.InitPresets
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitPresets(); // Offset: 0x10633960c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockyPresetWidget.GetPresetDesc
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPresetDesc* GetPresetDesc(); // Offset: 0x1063395d8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyPresetWidget.GetLoopScrollBox
	// Flags: [Event|Public|BlueprintEvent]
	struct UScrollBox* GetLoopScrollBox(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyPresetWidget.GetIsIconWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetIsIconWidget(); // Offset: 0x1063395a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockyPresetWidget.ClearSearchText
	// Flags: [Event|Public|BlueprintEvent]
	void ClearSearchText(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyRichTextBlock
// Size: 0x428 // Inherited bytes: 0x128
struct UBlockyRichTextBlock : UTextLayoutWidget {
	// Fields
	struct FText Text; // Offset: 0x128 // Size: 0x18
	DelegateProperty TextDelegate; // Offset: 0x140 // Size: 0x10
	struct FSlateFontInfo Font; // Offset: 0x150 // Size: 0x58
	struct FLinearColor Color; // Offset: 0x1a8 // Size: 0x10
	struct TArray<struct URichTextBlockDecorator*> Decorators; // Offset: 0x1b8 // Size: 0x10
	char pad_0x1C8[0x260]; // Offset: 0x1c8 // Size: 0x260

	// Functions

	// Object Name: Function BlockyLua.BlockyRichTextBlock.SetText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetText(struct FText& InText); // Offset: 0x106339d7c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.BlockyRichTextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetText(); // Offset: 0x106339d18 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class BlockyLua.BlockySearchResultPanel
// Size: 0x328 // Inherited bytes: 0x260
struct UBlockySearchResultPanel : UUserWidget {
	// Fields
	float DrawBottomDelta; // Offset: 0x260 // Size: 0x04
	float HorizontalMoveCheckDelta; // Offset: 0x264 // Size: 0x04
	float VerticalMoveCheckDelta; // Offset: 0x268 // Size: 0x04
	float WhileRefreshBlockSizeY; // Offset: 0x26c // Size: 0x04
	bool IsDragging; // Offset: 0x270 // Size: 0x01
	bool IsHorizontalMove; // Offset: 0x271 // Size: 0x01
	char pad_0x272[0x2]; // Offset: 0x272 // Size: 0x02
	struct FVector2D TouchStartPosition; // Offset: 0x274 // Size: 0x08
	struct FVector2D PointAtOffset; // Offset: 0x27c // Size: 0x08
	IntProperty CurrentCategoryIndex; // Offset: 0x284 // Size: 0x04
	IntProperty YOffset; // Offset: 0x288 // Size: 0x04
	IntProperty TotalHeight_Blocks; // Offset: 0x28c // Size: 0x04
	IntProperty TotalHeight_Graphs; // Offset: 0x290 // Size: 0x04
	IntProperty TotalHeight_GraphsTitle; // Offset: 0x294 // Size: 0x04
	IntProperty ViewHeight; // Offset: 0x298 // Size: 0x04
	IntProperty totalHeight; // Offset: 0x29c // Size: 0x04
	bool bNeedUpdateTotalHeight_Graphs; // Offset: 0x2a0 // Size: 0x01
	char pad_0x2A1[0x7]; // Offset: 0x2a1 // Size: 0x07
	struct UBlockyBlockListItemObject* ListItemAtPoint; // Offset: 0x2a8 // Size: 0x08
	struct TWeakObjectPtr<struct UBlockyMenuItemObject_Search> FoundResults; // Offset: 0x2b0 // Size: 0x08
	struct USpacer* BlocksContainer; // Offset: 0x2b8 // Size: 0x08
	struct UBlockyLuaLoopScrollBox_MultiItem* GraphBlocksContainer; // Offset: 0x2c0 // Size: 0x08
	struct UObject* GraphBlocksWidgetType; // Offset: 0x2c8 // Size: 0x08
	struct UObject* GraphItemBlockWidgetType; // Offset: 0x2d0 // Size: 0x08
	struct UBlockyGraphData* GraphData; // Offset: 0x2d8 // Size: 0x08
	struct UScrollBox* TabContainer; // Offset: 0x2e0 // Size: 0x08
	bool bShowComment; // Offset: 0x2e8 // Size: 0x01
	char pad_0x2E9[0x3]; // Offset: 0x2e9 // Size: 0x03
	struct TWeakObjectPtr<struct UBlockyGraph> LastSelectedGraph; // Offset: 0x2ec // Size: 0x08
	struct TWeakObjectPtr<struct UBlockBase> LastSelectedBlock; // Offset: 0x2f4 // Size: 0x08
	char pad_0x2FC[0x4]; // Offset: 0x2fc // Size: 0x04
	struct TArray<struct UBlockyGraph*> CollapsedGraphs; // Offset: 0x300 // Size: 0x10
	struct TArray<struct UObject*> ItemObjectList; // Offset: 0x310 // Size: 0x10
	enum class ESearchResultVisibleType SearchResultVisibleType; // Offset: 0x320 // Size: 0x01
	char pad_0x321[0x7]; // Offset: 0x321 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockySearchResultPanel.UpdateGraphContentSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateGraphContentSize(); // Offset: 0x10633a3e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.ToggleGraphResults
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleGraphResults(struct UBlockyGraph* InGraph); // Offset: 0x10633a36c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.ScrollToCategory
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToCategory(IntProperty CategoryIndex, bool GraphCategory); // Offset: 0x10633a2b0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.RefreshGraphBlocksWidgets
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshGraphBlocksWidgets(); // Offset: 0x10633a29c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.OnGraphBlocksCreated
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnGraphBlocksCreated(struct UWidget* Widget, IntProperty Index); // Offset: 0x10633a1e4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.FocusToBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FocusToBlock(struct UBlockyGraph* InGraph, struct UBlockBase* InBlock); // Offset: 0x10633a130 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.FilterOutSearchResultToShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FilterOutSearchResultToShow(enum class ESearchResultVisibleType VisibleType); // Offset: 0x10633a0b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchResultPanel.BP_ScrollYOffset
	// Flags: [Event|Protected|BlueprintEvent]
	bool BP_ScrollYOffset(IntProperty DeltaY); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class BlockyLua.BlockySearchResults_GraphItemWidget
// Size: 0x2b8 // Inherited bytes: 0x260
struct UBlockySearchResults_GraphItemWidget : UUserWidget {
	// Fields
	struct FVector2D IconSize; // Offset: 0x260 // Size: 0x08
	StrProperty SearchingStr; // Offset: 0x268 // Size: 0x10
	StrProperty BlockDisplayString; // Offset: 0x278 // Size: 0x10
	struct TWeakObjectPtr<struct UBlockyGraph> BlockGraph; // Offset: 0x288 // Size: 0x08
	struct TWeakObjectPtr<struct UBlockBase> bLock; // Offset: 0x290 // Size: 0x08
	struct UBlockySearchResultPanel* HostResultPanel; // Offset: 0x298 // Size: 0x08
	bool bIsDragging; // Offset: 0x2a0 // Size: 0x01
	char pad_0x2A1[0x7]; // Offset: 0x2a1 // Size: 0x07
	struct UImage* BlockIcon; // Offset: 0x2a8 // Size: 0x08
	struct UBlockyRichTextBlock* TextBlock_BlockDisplay; // Offset: 0x2b0 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockySearchResults_GraphItemWidget.OnClickedBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnClickedBlock(); // Offset: 0x10633a9e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchResults_GraphItemWidget.OnBlockWidgetSelected
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OnBlockWidgetSelected(bool bSelected); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchResults_GraphItemWidget.MarkSearchingStringWithColor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty MarkSearchingStringWithColor(StrProperty InputString, StrProperty Target, StrProperty ColorString); // Offset: 0x10633a868 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function BlockyLua.BlockySearchResults_GraphItemWidget.IsSearchUseCase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsSearchUseCase(); // Offset: 0x10633a834 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchResults_GraphItemWidget.GetKeyWordColor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetKeyWordColor(); // Offset: 0x10633a7d0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLua.BlockySearchResults_GraphWidget
// Size: 0x290 // Inherited bytes: 0x260
struct UBlockySearchResults_GraphWidget : UUserWidget {
	// Fields
	struct UObject* GraphBlockItemWidgetType; // Offset: 0x260 // Size: 0x08
	StrProperty GraphDisplayName; // Offset: 0x268 // Size: 0x10
	struct UBlockySearchResultPanel* HostResultPanel; // Offset: 0x278 // Size: 0x08
	struct TWeakObjectPtr<struct UBlockyGraph> BlockGraph; // Offset: 0x280 // Size: 0x08
	bool bIsDragging; // Offset: 0x288 // Size: 0x01
	char pad_0x289[0x7]; // Offset: 0x289 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockySearchResults_GraphWidget.ToggleGraphResultsCollapse
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleGraphResultsCollapse(); // Offset: 0x10633ad48 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchResults_GraphWidget.OnSetGraphResultsCollapse
	// Flags: [Event|Public|BlueprintEvent]
	void OnSetGraphResultsCollapse(bool InCollapse); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchResults_GraphWidget.OnRefreshDisplayNameView
	// Flags: [Event|Public|BlueprintEvent]
	void OnRefreshDisplayNameView(StrProperty InGraphDisplayName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLua.BlockySearchResultsTab
// Size: 0x290 // Inherited bytes: 0x260
struct UBlockySearchResultsTab : UUserWidget {
	// Fields
	bool IsGraphCategory; // Offset: 0x260 // Size: 0x01
	char pad_0x261[0x3]; // Offset: 0x261 // Size: 0x03
	IntProperty TabIndex; // Offset: 0x264 // Size: 0x04
	struct FText TabDisplayName; // Offset: 0x268 // Size: 0x18
	bool IsPresetTab; // Offset: 0x280 // Size: 0x01
	char pad_0x281[0x7]; // Offset: 0x281 // Size: 0x07
	struct UBlockySearchWidget* SearchWidget; // Offset: 0x288 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockySearchResultsTab.OnSetSelected
	// Flags: [Event|Public|BlueprintEvent]
	void OnSetSelected(bool bSelected); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLua.BlockySearchWidget
// Size: 0x3e8 // Inherited bytes: 0x260
struct UBlockySearchWidget : UUserWidget {
	// Fields
	MapProperty MenuItemVisibility; // Offset: 0x260 // Size: 0x50
	MapProperty CategoriesVisibility; // Offset: 0x2b0 // Size: 0x50
	MapProperty BlockItemsVisibility; // Offset: 0x300 // Size: 0x50
	char pad_0x350[0x8]; // Offset: 0x350 // Size: 0x08
	struct TArray<struct UBlockyCategoryItemObject*> PresetCategorysResults; // Offset: 0x358 // Size: 0x10
	struct TArray<struct UPresetDesc*> ResultPresets; // Offset: 0x368 // Size: 0x10
	struct TArray<StrProperty> PresetsCategorys; // Offset: 0x378 // Size: 0x10
	bool IsPresetsSearch; // Offset: 0x388 // Size: 0x01
	char pad_0x389[0x7]; // Offset: 0x389 // Size: 0x07
	struct UScrollBox* TabContainer; // Offset: 0x390 // Size: 0x08
	struct UBlockySearchResultPanel* SearchResultPanel; // Offset: 0x398 // Size: 0x08
	struct FText ContentTabText; // Offset: 0x3a0 // Size: 0x18
	struct UObject* SearchResultsTabType; // Offset: 0x3b8 // Size: 0x08
	struct UBlockyMenuItemObject_Search* SearchResults; // Offset: 0x3c0 // Size: 0x08
	struct UBlockyGraphWidget* HostGraphWidget; // Offset: 0x3c8 // Size: 0x08
	enum class ESearchResultVisibleType SearchResultVisibleType; // Offset: 0x3d0 // Size: 0x01
	char pad_0x3D1[0x7]; // Offset: 0x3d1 // Size: 0x07
	struct TArray<StrProperty> SearchHistories; // Offset: 0x3d8 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLua.BlockySearchWidget.StoreLastSelectedMenuItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StoreLastSelectedMenuItems(bool OverrideLastData); // Offset: 0x10633baa8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchWidget.ShouldCommitString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool ShouldCommitString(struct FText& Value); // Offset: 0x10633b9ec // Return & Params: Num(2) Size(0x19)

	// Object Name: Function BlockyLua.BlockySearchWidget.SetSearchHistories
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSearchHistories(struct TArray<StrProperty> searchArr); // Offset: 0x10633b908 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockySearchWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(struct UPresetDesc* Value); // Offset: 0x10633b88c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySearchWidget.SetGraphWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGraphWidget(struct UBlockyGraphWidget* InGraphWidget); // Offset: 0x10633b810 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySearchWidget.SearchMatchingResults
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SearchMatchingResults(StrProperty SearchStr); // Offset: 0x10633b768 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLua.BlockySearchWidget.ScrollToTabContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ScrollToTabContent(struct UBlockySearchResultsTab* NewSelectedTab); // Offset: 0x10633b6ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySearchWidget.SaveSearchHistories
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveSearchHistories(); // Offset: 0x10633b6d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.RevertLastSelectedMenuItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RevertLastSelectedMenuItem(); // Offset: 0x10633b6c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.RefreshTabContainerView
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshTabContainerView(); // Offset: 0x10633b6b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.RefreshSearchResultsView
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshSearchResultsView(); // Offset: 0x10633b69c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.LoadSearchHistories
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadSearchHistories(); // Offset: 0x10633b688 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.IsSearchUseCase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsSearchUseCase(); // Offset: 0x10633b654 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchWidget.InitLoopScroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitLoopScroll(struct UBlockyLoopScrollBox* ScrollBox, struct TArray<struct UPresetDesc*> arrayPresets); // Offset: 0x10633b530 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLua.BlockySearchWidget.HasMenuSelected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasMenuSelected(); // Offset: 0x10633b4fc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchWidget.HasAnySearchResults
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasAnySearchResults(); // Offset: 0x10633b4c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchWidget.HasAnyHistory
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasAnyHistory(); // Offset: 0x10633b494 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetTotalSearchedNums
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTotalSearchedNums(); // Offset: 0x10633b460 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetSearchHistories
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<StrProperty> GetSearchHistories(); // Offset: 0x10633b3fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetPresetsSearchedNums
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPresetsSearchedNums(); // Offset: 0x10633b3c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetPresetDesc
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UPresetDesc* GetPresetDesc(); // Offset: 0x10633b394 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetHistoryStoreNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetHistoryStoreNum(); // Offset: 0x10633b360 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetHistoryNums
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetHistoryNums(); // Offset: 0x10633b32c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetGraphSearchedNums
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetGraphSearchedNums(); // Offset: 0x10633b2f8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockySearchWidget.GetBlockSearchedNums
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetBlockSearchedNums(); // Offset: 0x10633b2c4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockySearchWidget.FilterSearchResultVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FilterSearchResultVisible(enum class ESearchResultVisibleType InSearchResultVisibleType); // Offset: 0x10633b248 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLua.BlockySearchWidget.EmptyListItemSeleceted
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EmptyListItemSeleceted(); // Offset: 0x10633b234 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.DoSearching
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void DoSearching(StrProperty SearchStr); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockySearchWidget.ClearTabSelected
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTabSelected(); // Offset: 0x10633b220 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.ClearSearchHistories
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearSearchHistories(); // Offset: 0x10633b20c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.ClearMenuSelectionStore
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMenuSelectionStore(); // Offset: 0x10633b1f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLua.BlockySearchWidget.AddSearchHistory
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddSearchHistory(StrProperty NewHistory); // Offset: 0x10633b114 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLua.BlockySelectFromSceneWidget
// Size: 0x2c0 // Inherited bytes: 0x260
struct UBlockySelectFromSceneWidget : UUserWidget {
	// Fields
	struct UBlockBase* LinkedSlotHost; // Offset: 0x260 // Size: 0x08
	char pad_0x268[0x18]; // Offset: 0x268 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x280 // Size: 0x08
	struct UPresetDesc* PresetDesc; // Offset: 0x288 // Size: 0x08
	struct TArray<struct UObjectDesc*> OtherPresetDescs; // Offset: 0x290 // Size: 0x10
	struct FText DefaultShowName; // Offset: 0x2a0 // Size: 0x18
	struct UObjectDesc* ObjectDesc; // Offset: 0x2b8 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockySelectFromSceneWidget.SetPreset
	// Flags: [Event|Public|BlueprintEvent]
	void SetPreset(struct UPresetDesc* Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySelectFromSceneWidget.SetObjectDesc
	// Flags: [Event|Public|BlueprintEvent]
	void SetObjectDesc(struct UObjectDesc* Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySelectFromSceneWidget.SetImageShowIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetImageShowIcon(struct UImage* Image); // Offset: 0x10633f3f8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLua.BlockySelectFromSceneWidget.OnReceiveCustomSelectionResult
	// Flags: [Final|Native|Public]
	void OnReceiveCustomSelectionResult(struct UObjectDesc* Value); // Offset: 0x10633f37c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockySelectFromSceneWidget.CallSelectScenePreset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallSelectScenePreset(); // Offset: 0x10633f368 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLua.BlockyStringWidget
// Size: 0x2e8 // Inherited bytes: 0x260
struct UBlockyStringWidget : UUserWidget {
	// Fields
	MapProperty ResultSlotsMap; // Offset: 0x260 // Size: 0x50
	struct UBlockBase* LinkedSlotHost; // Offset: 0x2b0 // Size: 0x08
	char pad_0x2B8[0x18]; // Offset: 0x2b8 // Size: 0x18
	struct UBlockyGraphData* HostWidget; // Offset: 0x2d0 // Size: 0x08
	struct FVector2D TextBoxSize; // Offset: 0x2d8 // Size: 0x08
	bool IsFinishedInput; // Offset: 0x2e0 // Size: 0x01
	char pad_0x2E1[0x7]; // Offset: 0x2e1 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLua.BlockyStringWidget.StrDelEnt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FText StrDelEnt(struct FText& Value); // Offset: 0x10633f990 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function BlockyLua.BlockyStringWidget.StoreSlotDataWithSerialId
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StoreSlotDataWithSerialId(IntProperty SerialId); // Offset: 0x10633f914 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyStringWidget.SetText
	// Flags: [Event|Public|BlueprintEvent]
	void SetText(StrProperty Value); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyStringWidget.SetResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetResult(StrProperty Value, IntProperty SerialId); // Offset: 0x10633f83c // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class BlockyLua.CustomizeEditableText
// Size: 0x5c0 // Inherited bytes: 0x500
struct UCustomizeEditableText : UEditableText {
	// Fields
	char pad_0x500[0x90]; // Offset: 0x500 // Size: 0x90
	struct FScriptMulticastDelegate OnTextPreCommitted; // Offset: 0x590 // Size: 0x10
	struct FScriptMulticastDelegate OnTextReceiveCommitted; // Offset: 0x5a0 // Size: 0x10
	IntProperty TextCountLimit; // Offset: 0x5b0 // Size: 0x04
	IntProperty SerialId; // Offset: 0x5b4 // Size: 0x04
	bool LimitEmojiInput; // Offset: 0x5b8 // Size: 0x01
	bool IsReceiveCheckStringResult; // Offset: 0x5b9 // Size: 0x01
	char pad_0x5BA[0x6]; // Offset: 0x5ba // Size: 0x06

	// Functions

	// Object Name: Function BlockyLua.CustomizeEditableText.SetNewText
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetNewText(struct FText InText); // Offset: 0x10633feec // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.CustomizeEditableText.ReceiveCheckStringResultProcess
	// Flags: [Final|Native|Protected|HasOutParms]
	void ReceiveCheckStringResultProcess(bool Result, StrProperty ValidString, struct FCheckStringHandleData& Data); // Offset: 0x10633fdb0 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function BlockyLua.CustomizeEditableText.OpenKeyBoard
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void OpenKeyBoard(); // Offset: 0x10633fd9c // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction BlockyLua.CustomizeEditableText.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(struct FText& CommittedText, enum class ETextCommit CommitMethod, IntProperty SerialId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLua.CustomizeEditableText.GetValidText
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct FText GetValidText(); // Offset: 0x10633fd38 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class BlockyLua.CustomizeEditableTextBox
// Size: 0xd70 // Inherited bytes: 0xcb0
struct UCustomizeEditableTextBox : UEditableTextBox {
	// Fields
	char pad_0xCB0[0x90]; // Offset: 0xcb0 // Size: 0x90
	struct FScriptMulticastDelegate OnTextPreCommitted; // Offset: 0xd40 // Size: 0x10
	struct FScriptMulticastDelegate OnTextReceiveCommitted; // Offset: 0xd50 // Size: 0x10
	IntProperty TextCountLimit; // Offset: 0xd60 // Size: 0x04
	IntProperty SerialId; // Offset: 0xd64 // Size: 0x04
	bool LimitEmojiInput; // Offset: 0xd68 // Size: 0x01
	bool IsReceiveCheckStringResult; // Offset: 0xd69 // Size: 0x01
	char pad_0xD6A[0x6]; // Offset: 0xd6a // Size: 0x06

	// Functions

	// Object Name: Function BlockyLua.CustomizeEditableTextBox.SetNewText
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetNewText(struct FText InText); // Offset: 0x1063403e0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.CustomizeEditableTextBox.ReceiveCheckStringResultProcess
	// Flags: [Final|Native|Protected|HasOutParms]
	void ReceiveCheckStringResultProcess(bool Result, StrProperty ValidString, struct FCheckStringHandleData& Data); // Offset: 0x1063402a4 // Return & Params: Num(3) Size(0x30)

	// Object Name: DelegateFunction BlockyLua.CustomizeEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(struct FText& CommittedText, enum class ETextCommit CommitMethod, IntProperty SerialId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLua.CustomizeEditableTextBox.GetValidText
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct FText GetValidText(); // Offset: 0x106340240 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class BlockyLua.CustomizeMultiLineEditableTextBox
// Size: 0xfa8 // Inherited bytes: 0xee8
struct UCustomizeMultiLineEditableTextBox : UMultiLineEditableTextBox {
	// Fields
	char pad_0xEE8[0x90]; // Offset: 0xee8 // Size: 0x90
	struct FScriptMulticastDelegate OnTextPreCommitted; // Offset: 0xf78 // Size: 0x10
	struct FScriptMulticastDelegate OnTextReceiveCommitted; // Offset: 0xf88 // Size: 0x10
	IntProperty TextCountLimit; // Offset: 0xf98 // Size: 0x04
	IntProperty SerialId; // Offset: 0xf9c // Size: 0x04
	bool LimitEmojiInput; // Offset: 0xfa0 // Size: 0x01
	bool IsReceiveCheckStringResult; // Offset: 0xfa1 // Size: 0x01
	char pad_0xFA2[0x6]; // Offset: 0xfa2 // Size: 0x06

	// Functions

	// Object Name: Function BlockyLua.CustomizeMultiLineEditableTextBox.SetNewText
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetNewText(struct FText InText); // Offset: 0x106340988 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.CustomizeMultiLineEditableTextBox.ReceiveCheckStringResultProcess
	// Flags: [Final|Native|Protected|HasOutParms]
	void ReceiveCheckStringResultProcess(bool Result, StrProperty ValidString, struct FCheckStringHandleData& Data); // Offset: 0x10634084c // Return & Params: Num(3) Size(0x30)

	// Object Name: DelegateFunction BlockyLua.CustomizeMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(struct FText& CommittedText, enum class ETextCommit CommitMethod, IntProperty SerialId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLua.CustomizeMultiLineEditableTextBox.GetValidText
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct FText GetValidText(); // Offset: 0x1063407e8 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLua.CustomizeMultiLineEditableTextBox.CheckStringValidProcess
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	void CheckStringValidProcess(struct FText& InText, enum class ETextCommit CommitMethod); // Offset: 0x1063406f0 // Return & Params: Num(2) Size(0x19)
};

// Object Name: Class BlockyLua.DeleteBlockUI
// Size: 0x68 // Inherited bytes: 0x28
struct UDeleteBlockUI : UObject {
	// Fields
	struct FBlockRect rect; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
	struct UBrushData* BrushBG; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0xc]; // Offset: 0x50 // Size: 0x0c
	bool IsInArrange; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0xb]; // Offset: 0x5d // Size: 0x0b
};

// Object Name: Class BlockyLua.BlockyAutoScrollBox
// Size: 0xb48 // Inherited bytes: 0xb28
struct UBlockyAutoScrollBox : UScrollBox {
	// Fields
	enum class BLOCKYLUA_AUTO_SCROLL_TYPE AutoScrollType; // Offset: 0xb28 // Size: 0x01
	char pad_0xB29[0x3]; // Offset: 0xb29 // Size: 0x03
	float RollSpeed; // Offset: 0xb2c // Size: 0x04
	float StayTimeWhenStart; // Offset: 0xb30 // Size: 0x04
	float StayTimeWhenEnd; // Offset: 0xb34 // Size: 0x04
	char pad_0xB38[0x10]; // Offset: 0xb38 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLua.BlockyAutoScrollBox.Tick
	// Flags: [Native|Public|BlueprintCallable]
	void Tick(float DeltaTime); // Offset: 0x106340ed4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyAutoScrollBox.SetTextPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTextPadding(struct UTextBlock* Text, struct UScrollBoxSlot* boxSlot, float totalLength); // Offset: 0x106340de4 // Return & Params: Num(3) Size(0x14)
};

// Object Name: Class BlockyLua.BlockyLoopScrollBase
// Size: 0xcb0 // Inherited bytes: 0xb28
struct UBlockyLoopScrollBase : UScrollBox {
	// Fields
	bool bDelayLoad; // Offset: 0xb28 // Size: 0x01
	char pad_0xB29[0x3]; // Offset: 0xb29 // Size: 0x03
	float BlockyLuaEdgePadding; // Offset: 0xb2c // Size: 0x04
	struct FScriptMulticastDelegate OnRefreshItem; // Offset: 0xb30 // Size: 0x10
	struct FScriptMulticastDelegate OnItemCreated; // Offset: 0xb40 // Size: 0x10
	struct FScriptMulticastDelegate OnChangeData; // Offset: 0xb50 // Size: 0x10
	char pad_0xB60[0xe8]; // Offset: 0xb60 // Size: 0xe8
	bool bViewSizeInit; // Offset: 0xc48 // Size: 0x01
	char pad_0xC49[0x3]; // Offset: 0xc49 // Size: 0x03
	float LastPresetTitleOffset; // Offset: 0xc4c // Size: 0x04
	char pad_0xC50[0x20]; // Offset: 0xc50 // Size: 0x20
	struct UBlockyPresetWidget* Host; // Offset: 0xc70 // Size: 0x08
	struct UBlockySearchWidget* SearchHost; // Offset: 0xc78 // Size: 0x08
	char pad_0xC80[0x8]; // Offset: 0xc80 // Size: 0x08
	struct UWidget* ItemString; // Offset: 0xc88 // Size: 0x08
	struct UWidget* ItemIcon; // Offset: 0xc90 // Size: 0x08
	char pad_0xC98[0x10]; // Offset: 0xc98 // Size: 0x10
	struct UCanvasPanel* CanvasPanel; // Offset: 0xca8 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.UserScrolled
	// Flags: [Final|Native|Protected]
	void UserScrolled(float Offset); // Offset: 0x106341aa0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.Tick
	// Flags: [Native|Public|BlueprintCallable]
	void Tick(float DeltaTime); // Offset: 0x106341a1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.SetItemType
	// Flags: [Final|Native|Public]
	void SetItemType(struct UWidget* _ItemType); // Offset: 0x1063419a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.SetItemCount
	// Flags: [Final|Native|Public]
	bool SetItemCount(IntProperty Count); // Offset: 0x106341914 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.RemoveItem
	// Flags: [Final|Native|Public]
	void RemoveItem(IntProperty Index); // Offset: 0x106341898 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.RefreshItem
	// Flags: [Final|Native|Public]
	bool RefreshItem(IntProperty Index); // Offset: 0x10634180c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.RefreshAllItems
	// Flags: [Final|Native|Public]
	void RefreshAllItems(); // Offset: 0x1063417f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction BlockyLua.BlockyLoopScrollBase.OnRefreshItem__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnRefreshItem__DelegateSignature(struct UWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction BlockyLua.BlockyLoopScrollBase.OnItemCreated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnItemCreated__DelegateSignature(struct UWidget* Item, IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: DelegateFunction BlockyLua.BlockyLoopScrollBase.OnChangeData__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnChangeData__DelegateSignature(struct UWidget* Item, IntProperty Index, StrProperty Key); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoopScrollBoxFilterStr(StrProperty filter); // Offset: 0x106341760 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LoopScrollBoxFilterByTag(MapProperty& Tags); // Offset: 0x1063416b4 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.InsertItem
	// Flags: [Final|Native|Public]
	void InsertItem(IntProperty Index); // Offset: 0x106341638 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.GetWidgetIndex
	// Flags: [Final|Native|Protected]
	IntProperty GetWidgetIndex(struct UWidget* Item); // Offset: 0x1063415ac // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.GetItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UWidget*> GetItems(); // Offset: 0x106341548 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetItemCount(); // Offset: 0x106341514 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.GetIndexOfWidget
	// Flags: [Final|Native|Protected]
	struct UWidget* GetIndexOfWidget(IntProperty Index); // Offset: 0x106341488 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.ChangeData
	// Flags: [Final|Native|Public]
	bool ChangeData(IntProperty Index, StrProperty Key); // Offset: 0x106341354 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLua.BlockyLoopScrollBase.AutoSize
	// Flags: [Final|Native|Public]
	void AutoSize(bool bAutoSize); // Offset: 0x1063412d0 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLua.BlockyLoopScrollBox
// Size: 0xce8 // Inherited bytes: 0xcb0
struct UBlockyLoopScrollBox : UBlockyLoopScrollBase {
	// Fields
	struct FVector2D StringItemSize; // Offset: 0xcb0 // Size: 0x08
	struct FVector2D IconItemSize; // Offset: 0xcb8 // Size: 0x08
	struct FVector2D StringItemPadding; // Offset: 0xcc0 // Size: 0x08
	struct FVector2D IconItemPadding; // Offset: 0xcc8 // Size: 0x08
	bool bAlignMagnetic; // Offset: 0xcd0 // Size: 0x01
	char pad_0xCD1[0x17]; // Offset: 0xcd1 // Size: 0x17

	// Functions

	// Object Name: Function BlockyLua.BlockyLoopScrollBox.Tick
	// Flags: [Native|Public|BlueprintCallable]
	void Tick(float DeltaTime); // Offset: 0x106342100 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLua.BlockyLoopScrollBox.ScrollToItem
	// Flags: [Native|Public]
	void ScrollToItem(IntProperty Index); // Offset: 0x10634207c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class BlockyLua.BlockyLoopScrollGrid
// Size: 0xcd8 // Inherited bytes: 0xcb0
struct UBlockyLoopScrollGrid : UBlockyLoopScrollBase {
	// Fields
	struct FVector2D ItemSize; // Offset: 0xcb0 // Size: 0x08
	struct FVector2D Padding; // Offset: 0xcb8 // Size: 0x08
	bool bAlignGrid; // Offset: 0xcc0 // Size: 0x01
	bool bAlignAnimation; // Offset: 0xcc1 // Size: 0x01
	char pad_0xCC2[0x16]; // Offset: 0xcc2 // Size: 0x16

	// Functions

	// Object Name: Function BlockyLua.BlockyLoopScrollGrid.ScrollToItem
	// Flags: [Native|Public|BlueprintCallable]
	void ScrollToItem(IntProperty Index); // Offset: 0x106342338 // Return & Params: Num(1) Size(0x4)
};

