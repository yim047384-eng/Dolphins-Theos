#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct BlockyLuaCore.CheckStringHandleData
// Size: 0x18 // Inherited bytes: 0x00
struct FCheckStringHandleData {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct BlockyLuaCore.MessageDataStruct
// Size: 0x28 // Inherited bytes: 0x00
struct FMessageDataStruct {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
};

// Object Name: ScriptStruct BlockyLuaCore.GraphSettingMap
// Size: 0x50 // Inherited bytes: 0x00
struct FGraphSettingMap {
	// Fields
	MapProperty graphSettings; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct BlockyLuaCore.GraphSetting
// Size: 0x18 // Inherited bytes: 0x00
struct FGraphSetting {
	// Fields
	bool CanCopy; // Offset: 0x00 // Size: 0x01
	bool CanReName; // Offset: 0x01 // Size: 0x01
	bool CanDel; // Offset: 0x02 // Size: 0x01
	bool CanSave; // Offset: 0x03 // Size: 0x01
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> Tags; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.Type
// Size: 0x70 // Inherited bytes: 0x00
struct FType {
	// Fields
	char pad_0x0[0x58]; // Offset: 0x00 // Size: 0x58
	StrProperty TypeName; // Offset: 0x58 // Size: 0x10
	char pad_0x68[0x8]; // Offset: 0x68 // Size: 0x08
};

// Object Name: ScriptStruct BlockyLuaCore.BlockyLuaHandle
// Size: 0x08 // Inherited bytes: 0x00
struct FBlockyLuaHandle {
	// Fields
	uint32_t Low; // Offset: 0x00 // Size: 0x04
	uint32_t High; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct BlockyLuaCore.BlockySlotString
// Size: 0x38 // Inherited bytes: 0x00
struct FBlockySlotString {
	// Fields
	char pad_0x0[0x28]; // Offset: 0x00 // Size: 0x28
	StrProperty CustomStr; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.BlockOutputInfo
// Size: 0x40 // Inherited bytes: 0x00
struct FBlockOutputInfo {
	// Fields
	struct TArray<StrProperty> Infos; // Offset: 0x00 // Size: 0x10
	struct UBlockBase* SlotHostBlock; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x18]; // Offset: 0x18 // Size: 0x18
	struct UBlockBase* TargetBlock; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct BlockyLuaCore.GraphString
// Size: 0x40 // Inherited bytes: 0x00
struct FGraphString {
	// Fields
	struct FGuid ID; // Offset: 0x00 // Size: 0x10
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	StrProperty DisplayName; // Offset: 0x20 // Size: 0x10
	StrProperty TemplateName; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.CustomConfigString
// Size: 0x28 // Inherited bytes: 0x00
struct FCustomConfigString {
	// Fields
	struct FGuid ID; // Offset: 0x00 // Size: 0x10
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	enum class ECustomBlockType Type; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
};

// Object Name: ScriptStruct BlockyLuaCore.CustomVariableString
// Size: 0x28 // Inherited bytes: 0x00
struct FCustomVariableString {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
	StrProperty Name; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.QuoteData
// Size: 0x28 // Inherited bytes: 0x00
struct FQuoteData {
	// Fields
	struct FVector2D pos; // Offset: 0x00 // Size: 0x08
	StrProperty BlockName; // Offset: 0x08 // Size: 0x10
	StrProperty GraphName; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.Sequence
// Size: 0x10 // Inherited bytes: 0x00
struct FSequence {
	// Fields
	struct TArray<StrProperty> SequenceNames; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.BlockyBrushInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FBlockyBrushInfo {
	// Fields
	StrProperty RectName; // Offset: 0x00 // Size: 0x10
	StrProperty TexturePath; // Offset: 0x10 // Size: 0x10
	float TextureWidth; // Offset: 0x20 // Size: 0x04
	float TextureHeight; // Offset: 0x24 // Size: 0x04
	IntProperty DrawTypeInt; // Offset: 0x28 // Size: 0x04
	struct FVector2D StartUV; // Offset: 0x2c // Size: 0x08
	struct FVector2D SizeUV; // Offset: 0x34 // Size: 0x08
	struct FMargin RectMargin; // Offset: 0x3c // Size: 0x10
	IntProperty CrossDelta; // Offset: 0x4c // Size: 0x04
	float RectAngle; // Offset: 0x50 // Size: 0x04
	struct FVector2D RectSize; // Offset: 0x54 // Size: 0x08
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
};

// Object Name: ScriptStruct BlockyLuaCore.BlockRect
// Size: 0x10 // Inherited bytes: 0x00
struct FBlockRect {
	// Fields
	struct FBlockPoint Position; // Offset: 0x00 // Size: 0x08
	struct FBlockPoint Size; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct BlockyLuaCore.BlockPoint
// Size: 0x08 // Inherited bytes: 0x00
struct FBlockPoint {
	// Fields
	float X; // Offset: 0x00 // Size: 0x04
	float Y; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct BlockyLuaCore.PresetTypeData
// Size: 0x68 // Inherited bytes: 0x00
struct FPresetTypeData {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
	struct UVarDefiner* VarDefiner; // Offset: 0x10 // Size: 0x08
	MapProperty Presets; // Offset: 0x18 // Size: 0x50
};

// Object Name: ScriptStruct BlockyLuaCore.BlockyLuaStub
// Size: 0x80 // Inherited bytes: 0x00
struct FBlockyLuaStub {
	// Fields
	struct UObject* OverrideContext; // Offset: 0x00 // Size: 0x08
	struct UObject* Host; // Offset: 0x08 // Size: 0x08
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	struct TArray<char> ArgumentsData; // Offset: 0x20 // Size: 0x10
	struct TArray<char> ReturnData; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FStubType> ArgTypes; // Offset: 0x40 // Size: 0x10
	struct FStubType ReturnType; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x20]; // Offset: 0x60 // Size: 0x20
};

// Object Name: ScriptStruct BlockyLuaCore.StubType
// Size: 0x10 // Inherited bytes: 0x00
struct FStubType {
	// Fields
	enum class EBlockyLuaStubArgType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UScriptStruct* Struct; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct BlockyLuaCore.BlockParam
// Size: 0x30 // Inherited bytes: 0x00
struct FBlockParam {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct FText DisplayName; // Offset: 0x10 // Size: 0x18
	bool bIsEnabled; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
};

// Object Name: ScriptStruct BlockyLuaCore.BlockPreviewBrush
// Size: 0x38 // Inherited bytes: 0x00
struct FBlockPreviewBrush {
	// Fields
	struct UBrushData* Brush; // Offset: 0x00 // Size: 0x08
	struct UBlockBase* InsideHostBlock; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x28]; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct BlockyLuaCore.FunctionParameter
// Size: 0xd8 // Inherited bytes: 0x00
struct FFunctionParameter {
	// Fields
	struct UObject* BlockType; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0xd0]; // Offset: 0x08 // Size: 0xd0
};

// Object Name: ScriptStruct BlockyLuaCore.HotFixSlotHandle
// Size: 0x08 // Inherited bytes: 0x00
struct FHotFixSlotHandle {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct BlockyLuaCore.MsgData
// Size: 0x60 // Inherited bytes: 0x00
struct FMsgData {
	// Fields
	struct FText Info; // Offset: 0x00 // Size: 0x18
	struct UBlockBase* SourceBlock; // Offset: 0x18 // Size: 0x08
	char pad_0x20[0x40]; // Offset: 0x20 // Size: 0x40
};

// Object Name: ScriptStruct BlockyLuaCore.NamedVarData
// Size: 0x28 // Inherited bytes: 0x00
struct FNamedVarData {
	// Fields
	enum class EBlockyAccessType Access; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct UVarDefiner* Definer; // Offset: 0x08 // Size: 0x08
	bool bIsArray; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty InitValueString; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct BlockyLuaCore.DependResInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FDependResInfo {
	// Fields
	struct TArray<IntProperty> AssetIDs; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> FeatureIDs; // Offset: 0x10 // Size: 0x10
	struct TArray<StrProperty> CustomAssetKeys; // Offset: 0x20 // Size: 0x10
};

