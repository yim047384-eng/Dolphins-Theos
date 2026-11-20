#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class BlockyLuaCore.BlockBase
// Size: 0x200 // Inherited bytes: 0x28
struct UBlockBase : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct UBlockBase* ParentBlock; // Offset: 0x30 // Size: 0x08
	struct UBlockBase* CommentBlock; // Offset: 0x38 // Size: 0x08
	struct UBlockyGraph* HostGraph; // Offset: 0x40 // Size: 0x08
	char pad_0x48[0x28]; // Offset: 0x48 // Size: 0x28
	struct UBlockyGraphData* HostWidget; // Offset: 0x70 // Size: 0x08
	char pad_0x78[0x10]; // Offset: 0x78 // Size: 0x10
	struct UFunctionDesc* FunctionDesc; // Offset: 0x88 // Size: 0x08
	StrProperty DisplayName; // Offset: 0x90 // Size: 0x10
	char pad_0xA0[0x148]; // Offset: 0xa0 // Size: 0x148
	StrProperty QuoteVariableName; // Offset: 0x1e8 // Size: 0x10
	bool bIsDisable; // Offset: 0x1f8 // Size: 0x01
	char pad_0x1F9[0x7]; // Offset: 0x1f9 // Size: 0x07

	// Functions

	// Object Name: Function BlockyLuaCore.BlockBase.SetIsDisable
	// Flags: [Native|Public|BlueprintCallable]
	void SetIsDisable(bool Disable); // Offset: 0x1062b880c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockBase.IsEvent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsEvent(); // Offset: 0x1062b87c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockBase.GetCenterPos
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetCenterPos(); // Offset: 0x1062b8794 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.Executeable
// Size: 0x430 // Inherited bytes: 0x200
struct UExecuteable : UBlockBase {
	// Fields
	char pad_0x200[0x1c8]; // Offset: 0x200 // Size: 0x1c8
	MapProperty BlockParams; // Offset: 0x3c8 // Size: 0x50
	struct TArray<struct UNamedVar*> FuncVars; // Offset: 0x418 // Size: 0x10
	char pad_0x428[0x8]; // Offset: 0x428 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLuaCore.Executeable.SupportFuncVar
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool SupportFuncVar(); // Offset: 0x1062db0a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.Executeable.ReEditFuncVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReEditFuncVar(struct UNamedVar* var); // Offset: 0x1062db02c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.Executeable.DeleteFuncVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteFuncVar(struct UNamedVar* var); // Offset: 0x1062dafb0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.Executeable.CreateFuncVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CreateFuncVar(); // Offset: 0x1062daf9c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLuaCore.AddArrayElement
// Size: 0x760 // Inherited bytes: 0x430
struct UAddArrayElement : UExecuteable {
	// Fields
	char pad_0x430[0x330]; // Offset: 0x430 // Size: 0x330
};

// Object Name: Class BlockyLuaCore.Arithmetic
// Size: 0x728 // Inherited bytes: 0x200
struct UArithmetic : UBlockBase {
	// Fields
	char pad_0x200[0x528]; // Offset: 0x200 // Size: 0x528
};

// Object Name: Class BlockyLuaCore.ArrayLength
// Size: 0x3a0 // Inherited bytes: 0x200
struct UArrayLength : UBlockBase {
	// Fields
	char pad_0x200[0x198]; // Offset: 0x200 // Size: 0x198
	struct UBrushData* BrushBGSelected; // Offset: 0x398 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.ExpressionBase
// Size: 0x28 // Inherited bytes: 0x28
struct UExpressionBase : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BlockyLuaCore.ExpressionBase.ReleaseExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReleaseExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062db584 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.ExpressionBase.CreateExpressionBase
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateExpressionBase(); // Offset: 0x1062db550 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ArrayLengthExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UArrayLengthExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ArrayLengthExpression.SetTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTarget(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Target); // Offset: 0x1062b78a0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ArrayLengthExpression.GetTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetTarget(struct FBlockyLuaHandle ptr); // Offset: 0x1062b7824 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ArrayLengthExpression.CreateArrayLengthExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateArrayLengthExpression(); // Offset: 0x1062b77f0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.VarBase
// Size: 0x200 // Inherited bytes: 0x200
struct UVarBase : UBlockBase {
};

// Object Name: Class BlockyLuaCore.NamedVar
// Size: 0x4f8 // Inherited bytes: 0x200
struct UNamedVar : UVarBase {
	// Fields
	struct FText Name; // Offset: 0x200 // Size: 0x18
	char pad_0x218[0x8]; // Offset: 0x218 // Size: 0x08
	StrProperty NameInCode; // Offset: 0x220 // Size: 0x10
	bool IsValueValid; // Offset: 0x230 // Size: 0x01
	bool IsSourceValid; // Offset: 0x231 // Size: 0x01
	bool IsInitColorLoad; // Offset: 0x232 // Size: 0x01
	char pad_0x233[0x5]; // Offset: 0x233 // Size: 0x05
	struct TArray<struct UNamedVar*> CopiedChildVarCache; // Offset: 0x238 // Size: 0x10
	char pad_0x248[0x1d8]; // Offset: 0x248 // Size: 0x1d8
	bool bIsArray; // Offset: 0x420 // Size: 0x01
	char pad_0x421[0x7]; // Offset: 0x421 // Size: 0x07
	StrProperty InitValueString; // Offset: 0x428 // Size: 0x10
	struct UColorDesc* ColorDesc; // Offset: 0x438 // Size: 0x08
	struct TArray<struct UColorDesc*> ArrayColorDesc; // Offset: 0x440 // Size: 0x10
	IntProperty NowColorArrayIdx; // Offset: 0x450 // Size: 0x04
	bool NowColorIsArray; // Offset: 0x454 // Size: 0x01
	char pad_0x455[0x3]; // Offset: 0x455 // Size: 0x03
	struct UNamedVar* Source; // Offset: 0x458 // Size: 0x08
	char pad_0x460[0x40]; // Offset: 0x460 // Size: 0x40
	struct UBrushData* CopyBrush; // Offset: 0x4a0 // Size: 0x08
	char pad_0x4A8[0x50]; // Offset: 0x4a8 // Size: 0x50

	// Functions

	// Object Name: Function BlockyLuaCore.NamedVar.UpdateColor
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateColor(struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.NamedVar.SetNameVarColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetNameVarColor(struct FLinearColor& Color); // Offset: 0x1062ebb14 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.NamedVar.SetIsArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsArray(bool IsArray); // Offset: 0x1062eba90 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.NamedVar.SetInitValueString
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetInitValueString(StrProperty Value); // Offset: 0x1062eb9ac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.NamedVar.SetDefiner
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDefiner(struct UVarDefiner* Definer); // Offset: 0x1062eb930 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.NamedVar.SetAccessType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAccessType(enum class EBlockyAccessType Access); // Offset: 0x1062eb8ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.NamedVar.IsGlobalVar
	// Flags: [Final|Native|Public|Const]
	bool IsGlobalVar(); // Offset: 0x1062eb878 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.NamedVar.IsCustomColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCustomColor(); // Offset: 0x1062eb844 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.NamedVar.IsArray
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsArray(); // Offset: 0x1062eb810 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.NamedVar.InitColorDesc
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitColorDesc(); // Offset: 0x1062eb7fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.NamedVar.GetNameVarColorDesc
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UColorDesc* GetNameVarColorDesc(IntProperty idx, bool IsArray); // Offset: 0x1062eb730 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function BlockyLuaCore.NamedVar.GetNameVarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FLinearColor GetNameVarColor(IntProperty idx, bool IsArray); // Offset: 0x1062eb660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BlockyLuaCore.NamedVar.GetInitValueString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetInitValueString(); // Offset: 0x1062eb5fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.NamedVar.GetDefiner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UVarDefiner* GetDefiner(); // Offset: 0x1062eb5c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.NamedVar.GetColorStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetColorStr(IntProperty idx, bool IsArray); // Offset: 0x1062eb4d4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BlockyLuaCore.NamedVar.GetAccessType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EBlockyAccessType GetAccessType(); // Offset: 0x1062eb490 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.NamedVar.CallCustomSelectObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CallCustomSelectObject(IntProperty idx, bool IsArray); // Offset: 0x1062eb3d4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BlockyLuaCore.NamedVar.AddColorToArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddColorToArray(); // Offset: 0x1062eb3c0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLuaCore.ArrayNamedVar
// Size: 0x4f8 // Inherited bytes: 0x4f8
struct UArrayNamedVar : UNamedVar {
};

// Object Name: Class BlockyLuaCore.BinaryOperatorExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UBinaryOperatorExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.SetWithParentheses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetWithParentheses(struct FBlockyLuaHandle ptr, bool Value); // Offset: 0x1062b80f0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.SetRight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetRight(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062b8044 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.SetOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOperation(struct FBlockyLuaHandle ptr, enum class EBlockyBinaryOperation BlockyOp); // Offset: 0x1062b7f94 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.SetLeft
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLeft(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062b7ee8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.GetWithParentheses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetWithParentheses(struct FBlockyLuaHandle ptr); // Offset: 0x1062b7e6c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.GetRight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetRight(struct FBlockyLuaHandle ptr); // Offset: 0x1062b7df0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.GetOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class EBlockyBinaryOperation GetOperation(struct FBlockyLuaHandle ptr); // Offset: 0x1062b7d74 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.GetLeft
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetLeft(struct FBlockyLuaHandle ptr); // Offset: 0x1062b7cf8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BinaryOperatorExpression.CreateBinaryOperatorExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateBinaryOperatorExpression(); // Offset: 0x1062b7cc4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.CategoryDefiner
// Size: 0xb8 // Inherited bytes: 0x28
struct UCategoryDefiner : UObject {
	// Fields
	StrProperty Type; // Offset: 0x28 // Size: 0x10
	StrProperty Menu; // Offset: 0x38 // Size: 0x10
	MapProperty ShowNameMap; // Offset: 0x48 // Size: 0x50
	StrProperty ShowIcon; // Offset: 0x98 // Size: 0x10
	StrProperty ShowIconSelected; // Offset: 0xa8 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLuaCore.CategoryDefiner.GetCurrentLocateShowName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetCurrentLocateShowName(); // Offset: 0x1062d2ddc // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLuaCore.BlackboardDefiner
// Size: 0xd8 // Inherited bytes: 0xb8
struct UBlackboardDefiner : UCategoryDefiner {
	// Fields
	char pad_0xB8[0x20]; // Offset: 0xb8 // Size: 0x20
};

// Object Name: Class BlockyLuaCore.BlockyCommandData
// Size: 0x30 // Inherited bytes: 0x28
struct UBlockyCommandData : UObject {
	// Fields
	struct UBlockBase* bLock; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.BlockyAddOrRemoveFromSlotCommandData
// Size: 0xf0 // Inherited bytes: 0x30
struct UBlockyAddOrRemoveFromSlotCommandData : UBlockyCommandData {
	// Fields
	struct FBlockPoint Position; // Offset: 0x30 // Size: 0x08
	struct UBlockBase* SlotHostBlock; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x18]; // Offset: 0x40 // Size: 0x18
	struct UBlockBase* ConvertBlock; // Offset: 0x58 // Size: 0x08
	char pad_0x60[0x18]; // Offset: 0x60 // Size: 0x18
	struct UBlockBase* ReplacedBlock; // Offset: 0x78 // Size: 0x08
	struct UBlockBase* ReplacedBlockSlotHostBlock; // Offset: 0x80 // Size: 0x08
	char pad_0x88[0x68]; // Offset: 0x88 // Size: 0x68
};

// Object Name: Class BlockyLuaCore.BlockyAddOrRemoveFromTopCommandData
// Size: 0x80 // Inherited bytes: 0x30
struct UBlockyAddOrRemoveFromTopCommandData : UBlockyCommandData {
	// Fields
	struct UBlockBase* TouchBlock; // Offset: 0x30 // Size: 0x08
	struct FBlockPoint Position; // Offset: 0x38 // Size: 0x08
	struct UBlockBase* TouchBlockHostSlotHost; // Offset: 0x40 // Size: 0x08
	char pad_0x48[0x18]; // Offset: 0x48 // Size: 0x18
	struct UBlockBase* SlotHostBlock; // Offset: 0x60 // Size: 0x08
	char pad_0x68[0x18]; // Offset: 0x68 // Size: 0x18
};

// Object Name: Class BlockyLuaCore.BlockyBindCommentCommandData
// Size: 0x40 // Inherited bytes: 0x30
struct UBlockyBindCommentCommandData : UBlockyCommandData {
	// Fields
	struct FBlockPoint Position; // Offset: 0x30 // Size: 0x08
	struct UCommentBlock* CommentBlock; // Offset: 0x38 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.BlockyBlockListItemObject
// Size: 0xe0 // Inherited bytes: 0x28
struct UBlockyBlockListItemObject : UObject {
	// Fields
	struct FText Name; // Offset: 0x28 // Size: 0x18
	StrProperty KeyName; // Offset: 0x40 // Size: 0x10
	StrProperty SubGraphName; // Offset: 0x50 // Size: 0x10
	StrProperty DisplayName; // Offset: 0x60 // Size: 0x10
	StrProperty NameInCode; // Offset: 0x70 // Size: 0x10
	struct FBlockPoint Size; // Offset: 0x80 // Size: 0x08
	struct FBlockPoint TextSize; // Offset: 0x88 // Size: 0x08
	StrProperty BlockClassName; // Offset: 0x90 // Size: 0x10
	char pad_0xA0[0x10]; // Offset: 0xa0 // Size: 0x10
	bool Visible; // Offset: 0xb0 // Size: 0x01
	bool VisibleByTag; // Offset: 0xb1 // Size: 0x01
	char pad_0xB2[0x6]; // Offset: 0xb2 // Size: 0x06
	struct UFunctionDesc* FunctionDesc; // Offset: 0xb8 // Size: 0x08
	bool bCollect; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x1f]; // Offset: 0xc1 // Size: 0x1f
};

// Object Name: Class BlockyLuaCore.BlockyBlockListItemObject_Custom
// Size: 0xe8 // Inherited bytes: 0xe0
struct UBlockyBlockListItemObject_Custom : UBlockyBlockListItemObject {
	// Fields
	struct UCustomConfig* CustomConfig; // Offset: 0xe0 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.BlockyBlockListItemObject_Preset
// Size: 0x2a8 // Inherited bytes: 0xe0
struct UBlockyBlockListItemObject_Preset : UBlockyBlockListItemObject {
	// Fields
	struct UPresetDesc* SourcePreset; // Offset: 0xe0 // Size: 0x08
	char pad_0xE8[0x1c0]; // Offset: 0xe8 // Size: 0x1c0
};

// Object Name: Class BlockyLuaCore.BlockyBlockListItemObject_Variable
// Size: 0xe8 // Inherited bytes: 0xe0
struct UBlockyBlockListItemObject_Variable : UBlockyBlockListItemObject {
	// Fields
	struct UNamedVar* SourceVar; // Offset: 0xe0 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.BlockyCategoryItemObject
// Size: 0xe8 // Inherited bytes: 0x28
struct UBlockyCategoryItemObject : UObject {
	// Fields
	struct FText Name; // Offset: 0x28 // Size: 0x18
	StrProperty Type; // Offset: 0x40 // Size: 0x10
	StrProperty MenuType; // Offset: 0x50 // Size: 0x10
	struct TArray<struct UBlockyBlockListItemObject*> Items; // Offset: 0x60 // Size: 0x10
	struct TArray<struct UBlockyBlockListItemObject*> AddItems; // Offset: 0x70 // Size: 0x10
	struct TArray<struct UBlockyBlockListItemObject*> DelItems; // Offset: 0x80 // Size: 0x10
	struct TArray<struct UPresetDesc*> Presets; // Offset: 0x90 // Size: 0x10
	bool Visible; // Offset: 0xa0 // Size: 0x01
	bool VisibleByTag; // Offset: 0xa1 // Size: 0x01
	bool ShowNum; // Offset: 0xa2 // Size: 0x01
	char pad_0xA3[0x5]; // Offset: 0xa3 // Size: 0x05
	struct UBrushData* Brush; // Offset: 0xa8 // Size: 0x08
	struct UBrushData* BrushSelected; // Offset: 0xb0 // Size: 0x08
	char pad_0xB8[0x10]; // Offset: 0xb8 // Size: 0x10
	struct UBlackboardDefiner* Blackboard; // Offset: 0xc8 // Size: 0x08
	bool bIsPlayerBlackboard; // Offset: 0xd0 // Size: 0x01
	bool bIsShowRedDot; // Offset: 0xd1 // Size: 0x01
	char pad_0xD2[0x16]; // Offset: 0xd2 // Size: 0x16

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyCategoryItemObject.SetShowRedDotVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetShowRedDotVar(bool var); // Offset: 0x1062b93b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyCategoryItemObject.InitShowRedDotVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitShowRedDotVar(StrProperty BlockName); // Offset: 0x1062b92cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyCategoryItemObject.GetSelectedIconBrush
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush GetSelectedIconBrush(); // Offset: 0x1062b9268 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function BlockyLuaCore.BlockyCategoryItemObject.GetNewBlockNums
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetNewBlockNums(); // Offset: 0x1062b9234 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.BlockyCategoryItemObject.GetIconBrush
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct FSlateBrush GetIconBrush(); // Offset: 0x1062b91d0 // Return & Params: Num(1) Size(0xb8)
};

// Object Name: Class BlockyLuaCore.BlockyCommand
// Size: 0x100 // Inherited bytes: 0x28
struct UBlockyCommand : UObject {
	// Fields
	char pad_0x28[0xa8]; // Offset: 0x28 // Size: 0xa8
	struct UBlockyCommandData* UndoData; // Offset: 0xd0 // Size: 0x08
	struct UBlockyCommandData* RedoData; // Offset: 0xd8 // Size: 0x08
	struct UBlockyGraph* Graph; // Offset: 0xe0 // Size: 0x08
	struct TArray<struct UBlockyCommand*> AdditionCommands; // Offset: 0xe8 // Size: 0x10
	char pad_0xF8[0x8]; // Offset: 0xf8 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.BlockyCustomCommand
// Size: 0x100 // Inherited bytes: 0x100
struct UBlockyCustomCommand : UBlockyCommand {
};

// Object Name: Class BlockyLuaCore.BlockyDeleteCommandData
// Size: 0xd0 // Inherited bytes: 0x30
struct UBlockyDeleteCommandData : UBlockyCommandData {
	// Fields
	struct FBlockPoint Position; // Offset: 0x30 // Size: 0x08
	struct UBlockBase* NextBlock; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x18]; // Offset: 0x40 // Size: 0x18
	struct UBlockBase* HostSlotBlock; // Offset: 0x58 // Size: 0x08
	char pad_0x60[0x70]; // Offset: 0x60 // Size: 0x70
};

// Object Name: Class BlockyLuaCore.BlockyEditorInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UBlockyEditorInterface : UInterface {
};

// Object Name: Class BlockyLuaCore.BlockyExporter
// Size: 0x28 // Inherited bytes: 0x28
struct UBlockyExporter : UObject {
};

// Object Name: Class BlockyLuaCore.BlockyGraph
// Size: 0x150 // Inherited bytes: 0x28
struct UBlockyGraph : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
	StrProperty Name; // Offset: 0x38 // Size: 0x10
	StrProperty Type; // Offset: 0x48 // Size: 0x10
	StrProperty DisplayName; // Offset: 0x58 // Size: 0x10
	StrProperty TemplateName; // Offset: 0x68 // Size: 0x10
	StrProperty Description; // Offset: 0x78 // Size: 0x10
	StrProperty CategoryMode; // Offset: 0x88 // Size: 0x10
	StrProperty CapturePath; // Offset: 0x98 // Size: 0x10
	StrProperty JsonPath; // Offset: 0xa8 // Size: 0x10
	bool bCanBeDuplicated; // Offset: 0xb8 // Size: 0x01
	bool bIsDisable; // Offset: 0xb9 // Size: 0x01
	char pad_0xBA[0x6]; // Offset: 0xba // Size: 0x06
	struct UBlockyGraphData* HostGraphData; // Offset: 0xc0 // Size: 0x08
	struct TArray<struct UBlockBase*> RootBlocks; // Offset: 0xc8 // Size: 0x10
	char pad_0xD8[0x8]; // Offset: 0xd8 // Size: 0x08
	struct TArray<struct UNamedVar*> LocalVars; // Offset: 0xe0 // Size: 0x10
	IntProperty CurrentVisibleBlockNum; // Offset: 0xf0 // Size: 0x04
	char pad_0xF4[0xc]; // Offset: 0xf4 // Size: 0x0c
	struct UCanvasRenderTarget2D* RenderTarget; // Offset: 0x100 // Size: 0x08
	struct FVector2D ViewPosition; // Offset: 0x108 // Size: 0x08
	struct FBlockPoint ViewSize; // Offset: 0x110 // Size: 0x08
	float ViewScale; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x34]; // Offset: 0x11c // Size: 0x34

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyGraph.UpdateCustomBlockName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateCustomBlockName(); // Offset: 0x1062ba540 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraph.TryAdjustingBlockIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TryAdjustingBlockIntoView(struct UBlockyGraphData* GraphData); // Offset: 0x1062ba4c4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraph.SetIsDisable
	// Flags: [Native|Public|BlueprintCallable]
	void SetIsDisable(bool Disable); // Offset: 0x1062ba438 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraph.SaveGraphToFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveGraphToFile(StrProperty Filename, bool IsNewFile); // Offset: 0x1062ba358 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.BlockyGraph.SaveGraphAsTemplate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SaveGraphAsTemplate(struct TArray<char>& OutData, struct UCustomConfig* CustomConfig); // Offset: 0x1062ba25c // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLuaCore.BlockyGraph.SaveCsutomGraphAsTemplate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SaveCsutomGraphAsTemplate(struct TArray<char>& OutData); // Offset: 0x1062ba1a4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.BlockyGraph.LoadGraphFromTemplate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadGraphFromTemplate(struct TArray<char> Data, bool IsLoadPresetsInGraph); // Offset: 0x1062ba070 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.BlockyGraph.IsCustomTemplateGraph
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCustomTemplateGraph(); // Offset: 0x1062ba03c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraph.IsCustomGraph
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCustomGraph(); // Offset: 0x1062ba008 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraph.IsBasicTemplateGraph
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsBasicTemplateGraph(); // Offset: 0x1062b9fd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraph.GetTriggerItemsByRootBlocks
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UBlockBase*> GetTriggerItemsByRootBlocks(); // Offset: 0x1062b9f70 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraph.GetTotalBlockNum
	// Flags: [Final|Native|Public]
	IntProperty GetTotalBlockNum(); // Offset: 0x1062b9f54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.BlockyGraph.CaptureScreenWithShot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct UTexture2D* CaptureScreenWithShot(struct UUserWidget* Widget, struct FVector2D rect); // Offset: 0x1062b9e90 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraph.CaptureScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CaptureScreenShot(struct UUserWidget* Widget); // Offset: 0x1062b9e14 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraph.CanSaveAsTemplate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool CanSaveAsTemplate(StrProperty& OutFailedReason); // Offset: 0x1062b9d5c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.BlockyGraph.CanBeRemove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool CanBeRemove(struct UBlockyGraphData* GraphData); // Offset: 0x1062b9cd0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyGraph.CanBeDuplicated
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool CanBeDuplicated(); // Offset: 0x1062b9c9c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLuaCore.BlockyGraphWidgetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UBlockyGraphWidgetInterface : UInterface {
};

// Object Name: Class BlockyLuaCore.BlockyGraphData
// Size: 0x6d0 // Inherited bytes: 0x28
struct UBlockyGraphData : UObject {
	// Fields
	struct TScriptInterface<Class> GraphWidgetInterface; // Offset: 0x28 // Size: 0x10
	struct FVector2D ViewPosition; // Offset: 0x38 // Size: 0x08
	struct FBlockPoint ViewSize; // Offset: 0x40 // Size: 0x08
	float ViewScale; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct FVector2D DisplayBlockSize; // Offset: 0x50 // Size: 0x08
	char pad_0x58[0x88]; // Offset: 0x58 // Size: 0x88
	bool bShowDeleteBlockUI; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
	struct UNamedVar* EditingVar; // Offset: 0xe8 // Size: 0x08
	struct TArray<struct UNamedVar*> GlobalVars; // Offset: 0xf0 // Size: 0x10
	MapProperty PresetDescMap_Graph; // Offset: 0x100 // Size: 0x50
	struct UCustomConfig* EditingCustomConfig; // Offset: 0x150 // Size: 0x08
	MapProperty TemplateCustomConfigs; // Offset: 0x158 // Size: 0x50
	MapProperty GameEventConfigs; // Offset: 0x1a8 // Size: 0x50
	struct UExecuteable* CurrExeBlock; // Offset: 0x1f8 // Size: 0x08
	struct UExecuteable* EditingExeBlock; // Offset: 0x200 // Size: 0x08
	struct TArray<struct UBlockyGraph*> SubBlockyGraphs; // Offset: 0x208 // Size: 0x10
	struct TArray<struct UBlockyGraph*> BlockyGraphsCallStack; // Offset: 0x218 // Size: 0x10
	MapProperty CacheData; // Offset: 0x228 // Size: 0x50
	struct FText Name; // Offset: 0x278 // Size: 0x18
	struct UBlockBase* CurrentPutSlotHostBlock; // Offset: 0x290 // Size: 0x08
	char pad_0x298[0x18]; // Offset: 0x298 // Size: 0x18
	struct UBlockBase* CurrentPutSlotReplacedBlock; // Offset: 0x2b0 // Size: 0x08
	struct UBlockBase* CurrentTopPutBlock; // Offset: 0x2b8 // Size: 0x08
	char pad_0x2C0[0x8]; // Offset: 0x2c0 // Size: 0x08
	struct UBlockBase* CurrentSettingBlock; // Offset: 0x2c8 // Size: 0x08
	struct USelectionData* CurrentSelection; // Offset: 0x2d0 // Size: 0x08
	struct USelectionData* CurrentPointAt; // Offset: 0x2d8 // Size: 0x08
	struct UExecuteablePreview* BlockPreview; // Offset: 0x2e0 // Size: 0x08
	struct FScriptMulticastDelegate OnSaveProgress; // Offset: 0x2e8 // Size: 0x10
	bool IsGraphDirty; // Offset: 0x2f8 // Size: 0x01
	bool IsLoading; // Offset: 0x2f9 // Size: 0x01
	char pad_0x2FA[0xe]; // Offset: 0x2fa // Size: 0x0e
	struct UBrushData* DefaultRectBrush; // Offset: 0x308 // Size: 0x08
	struct UMaterial* PreViewMaterial; // Offset: 0x310 // Size: 0x08
	struct UBrushData* PreViewBrush; // Offset: 0x318 // Size: 0x08
	struct UBrushData* AnimateBrush; // Offset: 0x320 // Size: 0x08
	struct UMaterialInstanceDynamic* DeleteUIDynamicMaterial; // Offset: 0x328 // Size: 0x08
	struct UMaterialInstanceDynamic* DeleteRangeUIDynamicMaterial; // Offset: 0x330 // Size: 0x08
	struct UMaterialInstanceDynamic* DeleteUIBgDynamicMaterial; // Offset: 0x338 // Size: 0x08
	struct UBrushData* DeleteRangeUIDockingBrush; // Offset: 0x340 // Size: 0x08
	struct UBrushData* DeleteUIDockingBrush; // Offset: 0x348 // Size: 0x08
	struct UBrushData* DeleteUIBgBrush; // Offset: 0x350 // Size: 0x08
	char pad_0x358[0x20]; // Offset: 0x358 // Size: 0x20
	struct UBlockBase* TouchBlockHostSlotHost; // Offset: 0x378 // Size: 0x08
	char pad_0x380[0xe8]; // Offset: 0x380 // Size: 0xe8
	DelegateProperty OnOpenCustomPanel; // Offset: 0x468 // Size: 0x10
	DelegateProperty OnOpenCustomPopup; // Offset: 0x478 // Size: 0x10
	DelegateProperty OnOpenCustomSavePopup; // Offset: 0x488 // Size: 0x10
	DelegateProperty OnCloseCustomPopup; // Offset: 0x498 // Size: 0x10
	DelegateProperty OnOpenVariablePopup; // Offset: 0x4a8 // Size: 0x10
	DelegateProperty OnOpenBlackboardPopup; // Offset: 0x4b8 // Size: 0x10
	DelegateProperty OnCloseVariablePopup; // Offset: 0x4c8 // Size: 0x10
	DelegateProperty OnOpenVariable; // Offset: 0x4d8 // Size: 0x10
	DelegateProperty OnUpdateUndoRedoState; // Offset: 0x4e8 // Size: 0x10
	DelegateProperty OnShowTips; // Offset: 0x4f8 // Size: 0x10
	DelegateProperty OnShowInitUI; // Offset: 0x508 // Size: 0x10
	DelegateProperty OnOpenVariablePanel; // Offset: 0x518 // Size: 0x10
	DelegateProperty OnOpenCreateBlackboardPanel; // Offset: 0x528 // Size: 0x10
	DelegateProperty OnOpenEditBlackboardPanel; // Offset: 0x538 // Size: 0x10
	DelegateProperty OnOpenCreateCustomVarPanel; // Offset: 0x548 // Size: 0x10
	DelegateProperty OnOpenEditCustomVarPanel; // Offset: 0x558 // Size: 0x10
	DelegateProperty OpenDelCustomVarPanel; // Offset: 0x568 // Size: 0x10
	DelegateProperty OnQuoteBlock; // Offset: 0x578 // Size: 0x10
	DelegateProperty OnShowBlockSettingPop; // Offset: 0x588 // Size: 0x10
	DelegateProperty OnOpenCommentPopup; // Offset: 0x598 // Size: 0x10
	DelegateProperty OnCloseCommentPopup; // Offset: 0x5a8 // Size: 0x10
	DelegateProperty OnSetBlockLogNum; // Offset: 0x5b8 // Size: 0x10
	DelegateProperty OnSetBlockLogTabNum; // Offset: 0x5c8 // Size: 0x10
	DelegateProperty OnSetBlockLogText; // Offset: 0x5d8 // Size: 0x10
	DelegateProperty OnClearBlockLog; // Offset: 0x5e8 // Size: 0x10
	DelegateProperty OnOpenAnimationPopup; // Offset: 0x5f8 // Size: 0x10
	DelegateProperty OnCloseAnimationPopup; // Offset: 0x608 // Size: 0x10
	DelegateProperty OnShowBlockVariablePopup; // Offset: 0x618 // Size: 0x10
	char pad_0x628[0x10]; // Offset: 0x628 // Size: 0x10
	struct TArray<StrProperty> OpendItemStrings; // Offset: 0x638 // Size: 0x10
	StrProperty CurSelectTriggerType; // Offset: 0x648 // Size: 0x10
	char pad_0x658[0x1]; // Offset: 0x658 // Size: 0x01
	bool IsOpenedCaption; // Offset: 0x659 // Size: 0x01
	bool IsFirstFindPresetMap; // Offset: 0x65a // Size: 0x01
	char pad_0x65B[0x75]; // Offset: 0x65b // Size: 0x75

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UseTemplate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UseTemplate(struct UBlockyGraph* templateGraph); // Offset: 0x1062bf03c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UpdateVariableMenu
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateVariableMenu(); // Offset: 0x1062bf028 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UpdateVariableItemNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FText> UpdateVariableItemNames(); // Offset: 0x1062befc4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UpdateCustomMenu
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateCustomMenu(); // Offset: 0x1062befb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UpdateCustomItemNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FText> UpdateCustomItemNames(); // Offset: 0x1062bef4c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UpdateAllPresetInGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateAllPresetInGraph(); // Offset: 0x1062bef38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.UpdateAfterLoadBin
	// Flags: [Final|Native|Public]
	void UpdateAfterLoadBin(); // Offset: 0x1062bef24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Undo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Undo(); // Offset: 0x1062bef10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.TryCloseItemList
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TryCloseItemList(); // Offset: 0x1062beefc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ShowTips
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ShowTips(struct FText& Tips); // Offset: 0x1062bee50 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ShowBlockSettingPop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowBlockSettingPop(); // Offset: 0x1062bee3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetSlotString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSlotString(struct FBlockySlotString& slotStr); // Offset: 0x1062bed50 // Return & Params: Num(1) Size(0x38)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetGraphStrings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetGraphStrings(struct FGraphString& graphStr); // Offset: 0x1062beca0 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetCustomVariableString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetCustomVariableString(struct FCustomVariableString& variableStr); // Offset: 0x1062bebb8 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetCustomConfigString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetCustomConfigString(struct FCustomConfigString& configStr); // Offset: 0x1062beb00 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetCurrentSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCurrentSubGraph(StrProperty InName); // Offset: 0x1062bea1c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetCacheData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetCacheData(MapProperty& Data); // Offset: 0x1062be970 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetBlockLogText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockLogText(enum class EBlockyLogMsgMode Mode, struct UBlockBase* BlockSource, StrProperty SlotID, StrProperty Info); // Offset: 0x1062be76c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetBlockLogTabNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockLogTabNum(IntProperty Mode, IntProperty Num); // Offset: 0x1062be6b8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SetBlockLogNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBlockLogNum(IntProperty Mode, IntProperty Num); // Offset: 0x1062be604 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SaveGraphToJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SaveGraphToJsonText(); // Offset: 0x1062be5a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SaveGraphToBinFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveGraphToBinFile(StrProperty FilePath); // Offset: 0x1062be508 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SaveGraphToBin
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> SaveGraphToBin(); // Offset: 0x1062be4a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty SaveGlobalVarToJsonText(); // Offset: 0x1062be440 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToBin
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> SaveGlobalVarToBin(); // Offset: 0x1062be3dc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.SaveCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SaveCustom(); // Offset: 0x1062be3c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Save
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Save(); // Offset: 0x1062be3b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ReturnToPreviewGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReturnToPreviewGraph(); // Offset: 0x1062be3a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ReturnToMainGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReturnToMainGraph(); // Offset: 0x1062be38c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ResetGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetGraph(); // Offset: 0x1062be378 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.RemoveSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveSubGraph(StrProperty InName); // Offset: 0x1062be294 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.RefreshFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshFont(); // Offset: 0x1062be280 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ReEditVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReEditVariable(IntProperty Index); // Offset: 0x1062be204 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Redo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Redo(); // Offset: 0x1062be1f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.QuoteVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QuoteVariable(IntProperty Index); // Offset: 0x1062be174 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.QuoteCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void QuoteCustom(); // Offset: 0x1062be160 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Quote
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Quote(); // Offset: 0x1062be14c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Paste
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Paste(); // Offset: 0x1062be138 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.OpenGuideWebUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenGuideWebUrl(); // Offset: 0x1062be124 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.OnLoadFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnLoadFinished(); // Offset: 0x1062be110 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.MarkGraphDirty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkGraphDirty(); // Offset: 0x1062be0e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.LoadGraphFromJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadGraphFromJsonText(StrProperty JsonStr); // Offset: 0x1062be004 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.LoadGraphFromBinFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadGraphFromBinFile(StrProperty FilePath); // Offset: 0x1062bdf6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.LoadGlobalVarFromJsonText
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadGlobalVarFromJsonText(StrProperty JsonStr); // Offset: 0x1062bde88 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.LoadByTicker
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadByTicker(); // Offset: 0x1062bde74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Load
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Load(); // Offset: 0x1062bde60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStrAndIdx
	// Flags: [Final|Native|Public]
	struct UBlockBase* JumpToFocusSlotByIdStrAndIdx(StrProperty blockId, char idx); // Offset: 0x1062bdd2c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStr
	// Flags: [Final|Native|Public]
	struct UBlockBase* JumpToFocusSlotByIdStr(StrProperty blockId, StrProperty TargetSlotIdStr); // Offset: 0x1062bdba0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.JumpToFocusBlockByIdStr
	// Flags: [Final|Native|Public]
	struct UBlockBase* JumpToFocusBlockByIdStr(StrProperty blockId); // Offset: 0x1062bdaac // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ItemHasOpend
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ItemHasOpend(StrProperty ItemStringName); // Offset: 0x1062bd9b8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.IsGraphChanged
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsGraphChanged(); // Offset: 0x1062bd984 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.IsFirstGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsFirstGraph(); // Offset: 0x1062bd950 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.IsBlockGuideButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsBlockGuideButton(); // Offset: 0x1062bd91c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.HasExecutableCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasExecutableCode(); // Offset: 0x1062bd8e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GM_LoadGraph_DS_FromFiles
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GM_LoadGraph_DS_FromFiles(StrProperty GraphFilePath, StrProperty GlobalVarsFilePath); // Offset: 0x1062bd7ec // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GM_LoadGraph_DS
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GM_LoadGraph_DS(); // Offset: 0x1062bd7d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GM_GenerateAllBlocks
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GM_GenerateAllBlocks(IntProperty CombinedBlocksNum, IntProperty GraphBlocksNum); // Offset: 0x1062bd724 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetTriggerList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct TArray<StrProperty> GetTriggerList(); // Offset: 0x1062bd6c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetTLogType
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<StrProperty> GetTLogType(); // Offset: 0x1062bd65c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetTLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	MapProperty GetTLog(); // Offset: 0x1062bd5f8 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UBlockBase*> GetQuoteVariableItem(struct UBlockyGraph* Graph); // Offset: 0x1062bd544 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UBlockyGraph*> GetQuoteVariableGraph(IntProperty Index); // Offset: 0x1062bd490 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetPresetDescArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UPresetDesc*> GetPresetDescArray(bool LocalOnly); // Offset: 0x1062bd3d4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetNewBlocksNumWithMenu
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetNewBlocksNumWithMenu(StrProperty menuItemName); // Offset: 0x1062bd2e0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetIsDisableComment
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetIsDisableComment(); // Offset: 0x1062bd2ac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetGraphStrings
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FGraphString> GetGraphStrings(); // Offset: 0x1062bd248 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetGraphMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	MapProperty GetGraphMap(); // Offset: 0x1062bd1e4 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetFunctionDescArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UFunctionDesc*> GetFunctionDescArray(); // Offset: 0x1062bd180 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetDeleteBlockUIRect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetDeleteBlockUIRect(float InRectWidth); // Offset: 0x1062bd108 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCustomVariableStrings
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FCustomVariableString> GetCustomVariableStrings(); // Offset: 0x1062bd0a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCustomNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FText> GetCustomNames(); // Offset: 0x1062bd040 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCustomEventConfigs
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UCustomConfig*> GetCustomEventConfigs(bool isCloudGameEvent); // Offset: 0x1062bcf84 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCustomConfigStrings
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FCustomConfigString> GetCustomConfigStrings(); // Offset: 0x1062bcf20 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCurrentGraphBlockyNumberByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetCurrentGraphBlockyNumberByType(enum class EBlockyCurrentGraphBlockyNumberType Type); // Offset: 0x1062bce94 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCurrentGraph
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UBlockyGraph* GetCurrentGraph(); // Offset: 0x1062bce60 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCurrentBlockyNumByMune
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetCurrentBlockyNumByMune(StrProperty Menu, StrProperty Category); // Offset: 0x1062bcd64 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetCacheData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	MapProperty GetCacheData(); // Offset: 0x1062bcd00 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPairWithBlocks
	// Flags: [Final|Native|Public|HasOutParms]
	void GetBlockyStringDatasInPairWithBlocks(struct TArray<struct FBlockySlotString>& OutSlotStrings, struct TArray<struct UBlockBase*>& OutBlocks); // Offset: 0x1062bcbe8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPair
	// Flags: [Final|Native|Public]
	struct TArray<struct FBlockySlotString> GetBlockyStringDatasInPair(); // Offset: 0x1062bcb84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetBlocks
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct UBlockBase*> GetBlocks(); // Offset: 0x1062bcb20 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetAllBlockyInGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UBlockBase*> GetAllBlockyInGraph(); // Offset: 0x1062bcabc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetAllBlockIdStrings
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetAllBlockIdStrings(); // Offset: 0x1062bca58 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.GetAllBlockByKeyName
	// Flags: [Final|Native|Public|BlueprintCallable]
	MapProperty GetAllBlockByKeyName(); // Offset: 0x1062bc9f4 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FocusToSlotByBlockySlotId
	// Flags: [Final|Native|Public]
	struct UBlockBase* FocusToSlotByBlockySlotId(struct FBlockySlotString SlotID); // Offset: 0x1062bc8e4 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FocusToSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FocusToSlot(struct UBlockBase* TargetBlock, StrProperty TargetSlotIdStr); // Offset: 0x1062bc7c0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FocusTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FocusTo(struct UBlockBase* TargetBlock); // Offset: 0x1062bc744 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FinishVariableEdit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishVariableEdit(bool bSaveVar, bool bReEdit); // Offset: 0x1062bc674 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FinishCustomEdit
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishCustomEdit(bool bSave); // Offset: 0x1062bc5f0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FinishBlockSetting
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FinishBlockSetting(bool bSaveVar); // Offset: 0x1062bc56c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.FindBlockByIdStr
	// Flags: [Final|Native|Public]
	struct UBlockBase* FindBlockByIdStr(StrProperty blockId); // Offset: 0x1062bc478 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.EmptyListItemSeleceted
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EmptyListItemSeleceted(); // Offset: 0x1062bc464 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Eject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Eject(); // Offset: 0x1062bc450 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.EditVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditVariable(); // Offset: 0x1062bc43c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.EditCustumBlockGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditCustumBlockGraph(); // Offset: 0x1062bc428 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.EditCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditCustom(); // Offset: 0x1062bc414 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DuplicateSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DuplicateSubGraph(StrProperty SrcName); // Offset: 0x1062bc330 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DuplicateBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DuplicateBlock(struct UBlockBase* bLock); // Offset: 0x1062bc2b4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Disable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Disable(); // Offset: 0x1062bc2a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteVariableListItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteVariableListItem(IntProperty Index); // Offset: 0x1062bc224 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteSelected
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteSelected(); // Offset: 0x1062bc210 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteCustom(); // Offset: 0x1062bc1fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteBlocks
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteBlocks(); // Offset: 0x1062bc1e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteBlockInGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteBlockInGraph(struct UBlockyGraph* InGraph, struct UBlockBase* bLock); // Offset: 0x1062bc134 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNextInGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteBlockAndNextInGraph(struct UBlockyGraph* InGraph, struct UBlockBase* bLock); // Offset: 0x1062bc080 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNext
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteBlockAndNext(struct UBlockBase* bLock); // Offset: 0x1062bc004 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DeleteBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteBlock(struct UBlockBase* bLock); // Offset: 0x1062bbf88 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.DefineCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DefineCustom(); // Offset: 0x1062bbf74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Define
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Define(); // Offset: 0x1062bbf60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.CustomNumByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty CustomNumByType(enum class ECustomBlockType CustomType); // Offset: 0x1062bbed4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.CurSelectSubBlockyGraphs
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UBlockyGraph*> CurSelectSubBlockyGraphs(); // Offset: 0x1062bbe70 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Copy
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Copy(); // Offset: 0x1062bbe5c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Comment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Comment(); // Offset: 0x1062bbe48 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.Clone
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Clone(); // Offset: 0x1062bbe34 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ClearUndoRedoDatas
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearUndoRedoDatas(); // Offset: 0x1062bbe20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ClearTextSizeCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTextSizeCache(); // Offset: 0x1062bbe0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ClearGraphDirty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearGraphDirty(); // Offset: 0x1062bbdf4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.ClearBlockLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearBlockLog(); // Offset: 0x1062bbde0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.CheckReports
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CheckReports(); // Offset: 0x1062bbdac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.AsyncLoadGraphFromBinFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AsyncLoadGraphFromBinFile(StrProperty FilePath, DelegateProperty Callback); // Offset: 0x1062bbcc0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.AddSubGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty AddSubGraph(StrProperty InName, StrProperty InType); // Offset: 0x1062bbb10 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.AddOpendNameToArr
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddOpendNameToArr(StrProperty ItemStringName); // Offset: 0x1062bba2c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.AddGraph
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UBlockyGraph* AddGraph(StrProperty InName, StrProperty InType); // Offset: 0x1062bb8a0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.BlockyGraphData.AddGlobalComment
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddGlobalComment(); // Offset: 0x1062bb88c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLuaCore.BlockyLuaCommandlet
// Size: 0x80 // Inherited bytes: 0x80
struct UBlockyLuaCommandlet : UCommandlet {
};

// Object Name: Class BlockyLuaCore.BlockyLuaConfig
// Size: 0x15e8 // Inherited bytes: 0x28
struct UBlockyLuaConfig : UObject {
	// Fields
	IntProperty MaxBlockCount; // Offset: 0x28 // Size: 0x04
	IntProperty MaxBlockCountInGraph; // Offset: 0x2c // Size: 0x04
	IntProperty MaxBlockCountInViewport; // Offset: 0x30 // Size: 0x04
	IntProperty MaxBlockCountInOneBlock; // Offset: 0x34 // Size: 0x04
	float BlockOffsetFromBin_X; // Offset: 0x38 // Size: 0x04
	float BlockOffsetFromBin_Y; // Offset: 0x3c // Size: 0x04
	SetProperty DisabledFuncSet; // Offset: 0x40 // Size: 0x50
	SetProperty BlockReginsSet; // Offset: 0x90 // Size: 0x50
	bool bShowGuideButton; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
	MapProperty ReginsGuideUrlSet; // Offset: 0xe8 // Size: 0x50
	float GraphMinScale; // Offset: 0x138 // Size: 0x04
	float GraphMaxScale; // Offset: 0x13c // Size: 0x04
	float DragCheckDelta; // Offset: 0x140 // Size: 0x04
	float EjectOffsetX; // Offset: 0x144 // Size: 0x04
	float EjectOffsetY; // Offset: 0x148 // Size: 0x04
	float PasteOffsetMaxCount; // Offset: 0x14c // Size: 0x04
	struct FVector2D PasteOffset; // Offset: 0x150 // Size: 0x08
	struct FVector2D ExecuteableSnapPositionOffset; // Offset: 0x158 // Size: 0x08
	enum class ESlotClickType DefaultArrayTypeFilterClickType; // Offset: 0x160 // Size: 0x04
	char pad_0x164[0x4]; // Offset: 0x164 // Size: 0x04
	struct TArray<StrProperty> NameInvalidChar; // Offset: 0x168 // Size: 0x10
	StrProperty InvalidTranslateString; // Offset: 0x178 // Size: 0x10
	StrProperty InvalidTranslateMaskString; // Offset: 0x188 // Size: 0x10
	StrProperty ArrayInitStringStart; // Offset: 0x198 // Size: 0x10
	StrProperty ArrayInitStringEnd; // Offset: 0x1a8 // Size: 0x10
	char ArrangeMaxTimePerFrame; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x7]; // Offset: 0x1b9 // Size: 0x07
	struct FSoftObjectPath FontName; // Offset: 0x1c0 // Size: 0x18
	IntProperty FontSize; // Offset: 0x1d8 // Size: 0x04
	char pad_0x1DC[0x4]; // Offset: 0x1dc // Size: 0x04
	struct FSlateFontInfo CustomDefaultFont; // Offset: 0x1e0 // Size: 0x58
	bool UseCustomFont; // Offset: 0x238 // Size: 0x01
	char pad_0x239[0x3]; // Offset: 0x239 // Size: 0x03
	float RTLYOffset; // Offset: 0x23c // Size: 0x04
	float LTRYOffset; // Offset: 0x240 // Size: 0x04
	struct FVector2D EmblemOffset; // Offset: 0x244 // Size: 0x08
	float DefaultBlockWidth; // Offset: 0x24c // Size: 0x04
	float DefaultBlockHeight; // Offset: 0x250 // Size: 0x04
	struct FMargin BlockPadding; // Offset: 0x254 // Size: 0x10
	float BlockIconSize; // Offset: 0x264 // Size: 0x04
	struct FMargin BlockIconBorder; // Offset: 0x268 // Size: 0x10
	float BlockButtonSize; // Offset: 0x278 // Size: 0x04
	float BlockSettingButtonSize; // Offset: 0x27c // Size: 0x04
	float BlockButtonClickSize; // Offset: 0x280 // Size: 0x04
	struct FMargin BlockButtonBorder; // Offset: 0x284 // Size: 0x10
	struct FMargin BlockTextBorder; // Offset: 0x294 // Size: 0x10
	struct FMargin BlockSlotBorder; // Offset: 0x2a4 // Size: 0x10
	float CrossDelta; // Offset: 0x2b4 // Size: 0x04
	float CornerDelta; // Offset: 0x2b8 // Size: 0x04
	float VariableIconSize; // Offset: 0x2bc // Size: 0x04
	float VariableIconIndent; // Offset: 0x2c0 // Size: 0x04
	float VariableCopyIconSize; // Offset: 0x2c4 // Size: 0x04
	struct FVector2D StringInputBlockSize; // Offset: 0x2c8 // Size: 0x08
	float DefaultSlotWidth; // Offset: 0x2d0 // Size: 0x04
	float DefaultSlotHeight; // Offset: 0x2d4 // Size: 0x04
	struct FMargin SlotPadding; // Offset: 0x2d8 // Size: 0x10
	float SlotIconSize; // Offset: 0x2e8 // Size: 0x04
	struct FMargin SlotIconBorder; // Offset: 0x2ec // Size: 0x10
	float TriangleIconSize; // Offset: 0x2fc // Size: 0x04
	struct FMargin SlotTriangleBorder; // Offset: 0x300 // Size: 0x10
	float WarringIconSize; // Offset: 0x310 // Size: 0x04
	float ForbiddenIconSize; // Offset: 0x314 // Size: 0x04
	struct FMargin SlotWarringBorder; // Offset: 0x318 // Size: 0x10
	struct FMargin SlotForbiddenBorder; // Offset: 0x328 // Size: 0x10
	struct FMargin SlotTextBorder; // Offset: 0x338 // Size: 0x10
	float SlotTextSizeRefactor; // Offset: 0x348 // Size: 0x04
	struct FVector2D ColorBrushSize; // Offset: 0x34c // Size: 0x08
	struct FVector2D ColorContentSize; // Offset: 0x354 // Size: 0x08
	float HookupSlotWidth; // Offset: 0x35c // Size: 0x04
	float HookupSlotHeight; // Offset: 0x360 // Size: 0x04
	float HookupChildIndentation; // Offset: 0x364 // Size: 0x04
	float HookupLinkWidth; // Offset: 0x368 // Size: 0x04
	struct FVector2D CommentButtonSize; // Offset: 0x36c // Size: 0x08
	struct FVector2D CommentTextSize; // Offset: 0x374 // Size: 0x08
	struct FVector2D CommentFlodSize; // Offset: 0x37c // Size: 0x08
	struct FVector2D CommentTitleSize; // Offset: 0x384 // Size: 0x08
	float CommentLineLen; // Offset: 0x38c // Size: 0x04
	IntProperty CommentBlinkCount; // Offset: 0x390 // Size: 0x04
	float CommentBlinkSpeed; // Offset: 0x394 // Size: 0x04
	float BlockListWidth; // Offset: 0x398 // Size: 0x04
	struct FMargin ListBlockSelectedIconPadding; // Offset: 0x39c // Size: 0x10
	float ListBlockSelectedIconSize; // Offset: 0x3ac // Size: 0x04
	float NextCategoryOffset; // Offset: 0x3b0 // Size: 0x04
	float NextCategoryOffset_Variable; // Offset: 0x3b4 // Size: 0x04
	float VarListXOffset; // Offset: 0x3b8 // Size: 0x04
	float DeleteBlocksYOffset; // Offset: 0x3bc // Size: 0x04
	struct FVector2D DeleteBlocksSize; // Offset: 0x3c0 // Size: 0x08
	struct FVector2D CanDeleteSize; // Offset: 0x3c8 // Size: 0x08
	struct FVector2D BlockEmblemSize; // Offset: 0x3d0 // Size: 0x08
	float DisplayViewMaxBlockWidth; // Offset: 0x3d8 // Size: 0x04
	struct FLinearColor DefaultBackColor; // Offset: 0x3dc // Size: 0x10
	struct FLinearColor DarkBackColor; // Offset: 0x3ec // Size: 0x10
	struct FLinearColor KeyWordColor; // Offset: 0x3fc // Size: 0x10
	struct FLinearColor IllegalWordColor; // Offset: 0x40c // Size: 0x10
	struct FLinearColor FunctionBackColor; // Offset: 0x41c // Size: 0x10
	float BlockSnapAreaLeft; // Offset: 0x42c // Size: 0x04
	float BlockSnapAreaTop; // Offset: 0x430 // Size: 0x04
	float BlockSnapAreaWidth; // Offset: 0x434 // Size: 0x04
	float BlockSnapAreaHeight; // Offset: 0x438 // Size: 0x04
	char pad_0x43C[0x4]; // Offset: 0x43c // Size: 0x04
	StrProperty PreViewMaterial; // Offset: 0x440 // Size: 0x10
	StrProperty LocalizationNameSpace; // Offset: 0x450 // Size: 0x10
	StrProperty DefaultRect; // Offset: 0x460 // Size: 0x10
	StrProperty ActionRect; // Offset: 0x470 // Size: 0x10
	StrProperty ActionRectSelected; // Offset: 0x480 // Size: 0x10
	StrProperty ValueRect; // Offset: 0x490 // Size: 0x10
	StrProperty ValueDisableRect; // Offset: 0x4a0 // Size: 0x10
	StrProperty ValueSelectDisableRect; // Offset: 0x4b0 // Size: 0x10
	StrProperty BoolBlock; // Offset: 0x4c0 // Size: 0x10
	StrProperty BoolBlockEmpty; // Offset: 0x4d0 // Size: 0x10
	StrProperty BoolBlockSelect; // Offset: 0x4e0 // Size: 0x10
	StrProperty BoolBlockDisable; // Offset: 0x4f0 // Size: 0x10
	StrProperty NumBlockEmpty; // Offset: 0x500 // Size: 0x10
	StrProperty NumBlockSelect; // Offset: 0x510 // Size: 0x10
	StrProperty NumBlockDisable; // Offset: 0x520 // Size: 0x10
	StrProperty DeleteBlocksRect; // Offset: 0x530 // Size: 0x10
	StrProperty SnapShowRect; // Offset: 0x540 // Size: 0x10
	StrProperty ListItemSelected; // Offset: 0x550 // Size: 0x10
	StrProperty SingleVarRect; // Offset: 0x560 // Size: 0x10
	StrProperty ArrayVarRect; // Offset: 0x570 // Size: 0x10
	StrProperty CallbackVarRect; // Offset: 0x580 // Size: 0x10
	StrProperty VarRectDisable; // Offset: 0x590 // Size: 0x10
	StrProperty VarOutline; // Offset: 0x5a0 // Size: 0x10
	StrProperty GlobalVarIcon; // Offset: 0x5b0 // Size: 0x10
	StrProperty CanvasVarIcon; // Offset: 0x5c0 // Size: 0x10
	StrProperty LocalVarIcon; // Offset: 0x5d0 // Size: 0x10
	StrProperty CallbackVarIcon; // Offset: 0x5e0 // Size: 0x10
	StrProperty CustomIcon; // Offset: 0x5f0 // Size: 0x10
	StrProperty CustomActionBG; // Offset: 0x600 // Size: 0x10
	StrProperty CustomActionBG_Selected; // Offset: 0x610 // Size: 0x10
	StrProperty CustomActionBG_Gray; // Offset: 0x620 // Size: 0x10
	StrProperty CustomActionBG_Gray_Selected; // Offset: 0x630 // Size: 0x10
	StrProperty CustomValueBG; // Offset: 0x640 // Size: 0x10
	StrProperty CustomValueBG_Selected; // Offset: 0x650 // Size: 0x10
	StrProperty CustomValueBG_Gray; // Offset: 0x660 // Size: 0x10
	StrProperty CustomValueBG_Gray_Selected; // Offset: 0x670 // Size: 0x10
	StrProperty CustomEventBG; // Offset: 0x680 // Size: 0x10
	StrProperty CustomEventBG_Selected; // Offset: 0x690 // Size: 0x10
	StrProperty CustomEventBG_Gray; // Offset: 0x6a0 // Size: 0x10
	StrProperty CustomEventBG_Gray_Selected; // Offset: 0x6b0 // Size: 0x10
	StrProperty CustomBlock_Emblem; // Offset: 0x6c0 // Size: 0x10
	StrProperty CustomBlock_Emblem_Selected; // Offset: 0x6d0 // Size: 0x10
	StrProperty CustomBlock_Emblem_Disable; // Offset: 0x6e0 // Size: 0x10
	StrProperty CustomBlock_Emblem_DisableSelected; // Offset: 0x6f0 // Size: 0x10
	StrProperty EventBlock_Emblem; // Offset: 0x700 // Size: 0x10
	StrProperty EventBlock_Emblem_Selected; // Offset: 0x710 // Size: 0x10
	StrProperty EventBlock_Emblem_Disable; // Offset: 0x720 // Size: 0x10
	StrProperty EventBlock_Emblem_DisableSelected; // Offset: 0x730 // Size: 0x10
	StrProperty LogicUp; // Offset: 0x740 // Size: 0x10
	StrProperty LogicUpSelected; // Offset: 0x750 // Size: 0x10
	StrProperty LogicUpGray; // Offset: 0x760 // Size: 0x10
	StrProperty LogicUpSelectedGray; // Offset: 0x770 // Size: 0x10
	StrProperty LogicMiddle; // Offset: 0x780 // Size: 0x10
	StrProperty LogicMiddleSelected; // Offset: 0x790 // Size: 0x10
	StrProperty LogicBottom; // Offset: 0x7a0 // Size: 0x10
	StrProperty LogicBottomGray; // Offset: 0x7b0 // Size: 0x10
	StrProperty LogicBottomSelected; // Offset: 0x7c0 // Size: 0x10
	StrProperty LogicBottomSelectedGray; // Offset: 0x7d0 // Size: 0x10
	StrProperty LogicSlot; // Offset: 0x7e0 // Size: 0x10
	StrProperty LogicSlotGray; // Offset: 0x7f0 // Size: 0x10
	StrProperty LogicSlotSelected; // Offset: 0x800 // Size: 0x10
	StrProperty LogicSlotSelectedGray; // Offset: 0x810 // Size: 0x10
	StrProperty HookupSlot; // Offset: 0x820 // Size: 0x10
	StrProperty ButtonWithTextBg_Enable; // Offset: 0x830 // Size: 0x10
	StrProperty ButtonWithTextBg_Selected; // Offset: 0x840 // Size: 0x10
	StrProperty ButtonWithTextBg_Disable; // Offset: 0x850 // Size: 0x10
	StrProperty ButtonWithTextBg_DisableSelected; // Offset: 0x860 // Size: 0x10
	StrProperty SlotTriangle; // Offset: 0x870 // Size: 0x10
	StrProperty SlotWarring; // Offset: 0x880 // Size: 0x10
	StrProperty SlotForbidden; // Offset: 0x890 // Size: 0x10
	StrProperty SlotIllegalInput; // Offset: 0x8a0 // Size: 0x10
	StrProperty FunctionIcon; // Offset: 0x8b0 // Size: 0x10
	StrProperty SettingIcon; // Offset: 0x8c0 // Size: 0x10
	StrProperty ColorIcon; // Offset: 0x8d0 // Size: 0x10
	struct TArray<struct FLinearColor> DefaultHSVs; // Offset: 0x8e0 // Size: 0x10
	StrProperty CopyIcon; // Offset: 0x8f0 // Size: 0x10
	StrProperty CommentIcon; // Offset: 0x900 // Size: 0x10
	StrProperty FlodIcon; // Offset: 0x910 // Size: 0x10
	StrProperty UnbindIcon; // Offset: 0x920 // Size: 0x10
	StrProperty SeparatorIcon; // Offset: 0x930 // Size: 0x10
	StrProperty NoneIcon; // Offset: 0x940 // Size: 0x10
	StrProperty DefaultCategoryIcon; // Offset: 0x950 // Size: 0x10
	StrProperty DefaultCategorySelectedIcon; // Offset: 0x960 // Size: 0x10
	StrProperty BlockyGlobalVarPath; // Offset: 0x970 // Size: 0x10
	StrProperty BlockyGraphPath; // Offset: 0x980 // Size: 0x10
	StrProperty GenerateCodePath; // Offset: 0x990 // Size: 0x10
	StrProperty AssetPackageName; // Offset: 0x9a0 // Size: 0x10
	StrProperty TextrueRectParamPath; // Offset: 0x9b0 // Size: 0x10
	StrProperty FunctionPath; // Offset: 0x9c0 // Size: 0x10
	StrProperty FunctionFolderPath; // Offset: 0x9d0 // Size: 0x10
	StrProperty VariablePath; // Offset: 0x9e0 // Size: 0x10
	StrProperty PresetsPath; // Offset: 0x9f0 // Size: 0x10
	StrProperty PresetsFolderPath; // Offset: 0xa00 // Size: 0x10
	StrProperty AllTypesPath; // Offset: 0xa10 // Size: 0x10
	StrProperty TranslateStringPath; // Offset: 0xa20 // Size: 0x10
	StrProperty BlockyNewStringPath; // Offset: 0xa30 // Size: 0x10
	StrProperty SequencePath; // Offset: 0xa40 // Size: 0x10
	StrProperty TLogParamPath; // Offset: 0xa50 // Size: 0x10
	IntProperty UndoMaxSteps; // Offset: 0xa60 // Size: 0x04
	IntProperty MaxStoredNumOfSearchHistory; // Offset: 0xa64 // Size: 0x04
	bool SearchUseCase; // Offset: 0xa68 // Size: 0x01
	char pad_0xA69[0x3]; // Offset: 0xa69 // Size: 0x03
	struct FLinearColor SearchedKeyWordColor; // Offset: 0xa6c // Size: 0x10
	IntProperty MaxTemplateDescriptionLen; // Offset: 0xa7c // Size: 0x04
	float SaveCooldownDuration; // Offset: 0xa80 // Size: 0x04
	char pad_0xA84[0x4]; // Offset: 0xa84 // Size: 0x04
	MapProperty BlockyBrushDatas; // Offset: 0xa88 // Size: 0x50
	MapProperty BlockyBrushInfos; // Offset: 0xad8 // Size: 0x50
	MapProperty RTLBrushMap; // Offset: 0xb28 // Size: 0x50
	struct TArray<StrProperty> BlockyBrushNames; // Offset: 0xb78 // Size: 0x10
	char pad_0xB88[0xa0]; // Offset: 0xb88 // Size: 0xa0
	MapProperty Functions; // Offset: 0xc28 // Size: 0x50
	MapProperty FuncTemplates; // Offset: 0xc78 // Size: 0x50
	MapProperty TypeFilterFunctions; // Offset: 0xcc8 // Size: 0x50
	struct TArray<struct UBlackboardDefiner*> BlackboardDefiners; // Offset: 0xd18 // Size: 0x10
	MapProperty VarDefiners; // Offset: 0xd28 // Size: 0x50
	MapProperty CustomDefiners; // Offset: 0xd78 // Size: 0x50
	MapProperty CategoryDefiners; // Offset: 0xdc8 // Size: 0x50
	MapProperty Enums; // Offset: 0xe18 // Size: 0x50
	struct TArray<struct UBlockyMenuItemObject*> MenuItems; // Offset: 0xe68 // Size: 0x10
	MapProperty TypeConverts; // Offset: 0xe78 // Size: 0x50
	MapProperty PresetDescMap; // Offset: 0xec8 // Size: 0x50
	MapProperty CodeNameAndTypeKeyPresetDescMap; // Offset: 0xf18 // Size: 0x50
	MapProperty TypeNameKeyPresetDescMap; // Offset: 0xf68 // Size: 0x50
	struct TArray<struct UBlockyMenuItemObject*> PresetMenuItems; // Offset: 0xfb8 // Size: 0x10
	struct TArray<struct UBlockyGraph*> TemplateGraphs; // Offset: 0xfc8 // Size: 0x10
	SetProperty AllTypes; // Offset: 0xfd8 // Size: 0x50
	SetProperty CustomVarTypes; // Offset: 0x1028 // Size: 0x50
	MapProperty TipsMap; // Offset: 0x1078 // Size: 0x50
	MapProperty BlockyNewsMap; // Offset: 0x10c8 // Size: 0x50
	MapProperty TLogParamsMap; // Offset: 0x1118 // Size: 0x50
	MapProperty TLogParamsTypeMap; // Offset: 0x1168 // Size: 0x50
	struct TArray<StrProperty> MenuSequence; // Offset: 0x11b8 // Size: 0x10
	MapProperty CategorySequence; // Offset: 0x11c8 // Size: 0x50
	MapProperty ItemSequence; // Offset: 0x1218 // Size: 0x50
	char pad_0x1268[0x18]; // Offset: 0x1268 // Size: 0x18
	struct FSlateFontInfo FontInfo; // Offset: 0x1280 // Size: 0x58
	char pad_0x12D8[0x8]; // Offset: 0x12d8 // Size: 0x08
	MapProperty AllTypesMap; // Offset: 0x12e0 // Size: 0x50
	MapProperty OnReceiveCheckStringResults; // Offset: 0x1330 // Size: 0x50
	DelegateProperty OnGetLocaleString; // Offset: 0x1380 // Size: 0x10
	DelegateProperty OnCallCustomSelectObject; // Offset: 0x1390 // Size: 0x10
	DelegateProperty OnReceiveCustomSelectObject; // Offset: 0x13a0 // Size: 0x10
	DelegateProperty OnCheckShowCustomSelection; // Offset: 0x13b0 // Size: 0x10
	DelegateProperty OnShowPresetPanelHandler; // Offset: 0x13c0 // Size: 0x10
	DelegateProperty OnCheckShowPresetFilterBtn; // Offset: 0x13d0 // Size: 0x10
	DelegateProperty OnModifyTip; // Offset: 0x13e0 // Size: 0x10
	DelegateProperty OnAddBlockyLog; // Offset: 0x13f0 // Size: 0x10
	DelegateProperty OnGetValidString; // Offset: 0x1400 // Size: 0x10
	DelegateProperty OnCheckStringValid; // Offset: 0x1410 // Size: 0x10
	DelegateProperty OnMessageData; // Offset: 0x1420 // Size: 0x10
	DelegateProperty OnIsCurrentCultureLTR; // Offset: 0x1430 // Size: 0x10
	DelegateProperty OnGetTextLen; // Offset: 0x1440 // Size: 0x10
	DelegateProperty OnPlayPresetSound; // Offset: 0x1450 // Size: 0x10
	DelegateProperty OnOpenGuide; // Offset: 0x1460 // Size: 0x10
	DelegateProperty OnSetGraphSetting; // Offset: 0x1470 // Size: 0x10
	DelegateProperty OnGetBlockNewState; // Offset: 0x1480 // Size: 0x10
	DelegateProperty OnSetBlockNewState; // Offset: 0x1490 // Size: 0x10
	DelegateProperty OnGetSearchHistorys; // Offset: 0x14a0 // Size: 0x10
	DelegateProperty OnSetSearchHistorys; // Offset: 0x14b0 // Size: 0x10
	DelegateProperty OnGetUrlIconAsset; // Offset: 0x14c0 // Size: 0x10
	DelegateProperty OnCallUrlIconAssetToLoad; // Offset: 0x14d0 // Size: 0x10
	DelegateProperty OnCallPresetSelectedCode; // Offset: 0x14e0 // Size: 0x10
	DelegateProperty OnGetPresetValidityDuration; // Offset: 0x14f0 // Size: 0x10
	DelegateProperty OnCallShortCutKey; // Offset: 0x1500 // Size: 0x10
	DelegateProperty OnUndoCustomCommand; // Offset: 0x1510 // Size: 0x10
	char pad_0x1520[0x70]; // Offset: 0x1520 // Size: 0x70
	struct UHotfixUtility* HotfixUtility; // Offset: 0x1590 // Size: 0x08
	char pad_0x1598[0x50]; // Offset: 0x1598 // Size: 0x50

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.SetCustomDefaultFont
	// Flags: [Final|Native|Public|HasOutParms]
	void SetCustomDefaultFont(struct FSlateFontInfo& DefaultFont); // Offset: 0x1062c7a48 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.ReplaceChCharToMaskChar
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty ReplaceChCharToMaskChar(StrProperty Source); // Offset: 0x1062c7978 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.PlayPresetSound
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void PlayPresetSound(StrProperty SoundPath); // Offset: 0x1062c7894 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.IsNameStringValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsNameStringValid(StrProperty NameString); // Offset: 0x1062c7734 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.IsBlackboardVar
	// Flags: [Final|Native|Public|Const]
	bool IsBlackboardVar(struct UVarDefiner* Definer); // Offset: 0x1062c76a8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.GetValidString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetValidString(StrProperty CheckString); // Offset: 0x1062c7310 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.GetTranslateStringTest
	// Flags: [Final|Native|Public]
	StrProperty GetTranslateStringTest(StrProperty KeyString); // Offset: 0x1062c7240 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.GetTranslateString
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetTranslateString(StrProperty KeyString); // Offset: 0x1062c7134 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.GetLocaleString
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetLocaleString(StrProperty KeyString); // Offset: 0x1062c7064 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.GetBlackboardDefiner
	// Flags: [Final|Native|Public|Const]
	struct UBlackboardDefiner* GetBlackboardDefiner(struct UVarDefiner* Definer); // Offset: 0x1062c6fd8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.ClearCustomDefaultFont
	// Flags: [Final|Native|Public]
	void ClearCustomDefaultFont(); // Offset: 0x1062c6fc4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.ClearAsyncTextureHandleMap
	// Flags: [Final|Native|Public]
	void ClearAsyncTextureHandleMap(); // Offset: 0x1062c6fb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyLuaConfig.CheckStringValidTest
	// Flags: [Final|Native|Public|HasOutParms]
	void CheckStringValidTest(StrProperty CheckString, struct FCheckStringHandleData& Data); // Offset: 0x1062c6ec0 // Return & Params: Num(2) Size(0x28)
};

// Object Name: Class BlockyLuaCore.BlockyLuaGameInstance
// Size: 0x2e8 // Inherited bytes: 0x2e8
struct UBlockyLuaGameInstance : UGameInstance {
};

// Object Name: Class BlockyLuaCore.BlockyLuaUtility
// Size: 0x28 // Inherited bytes: 0x28
struct UBlockyLuaUtility : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteUInt8
	// Flags: [Final|Native|Static|Public]
	void WriteUInt8(struct FBlockyLuaHandle ar, char Value); // Offset: 0x1062d0758 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteUInt64
	// Flags: [Final|Native|Static|Public]
	void WriteUInt64(struct FBlockyLuaHandle ar, uint64 Value); // Offset: 0x1062d06ac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteUInt32
	// Flags: [Final|Native|Static|Public]
	void WriteUInt32(struct FBlockyLuaHandle ar, uint32_t Value); // Offset: 0x1062d05fc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteUInt16
	// Flags: [Final|Native|Static|Public]
	void WriteUInt16(struct FBlockyLuaHandle ar, uint16_t Value); // Offset: 0x1062d054c // Return & Params: Num(2) Size(0xa)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteString
	// Flags: [Final|Native|Static|Public]
	void WriteString(struct FBlockyLuaHandle ar, StrProperty Value); // Offset: 0x1062d0430 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteSingle
	// Flags: [Final|Native|Static|Public]
	void WriteSingle(struct FBlockyLuaHandle ar, float Value); // Offset: 0x1062d0380 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteObjectPtr
	// Flags: [Final|Native|Static|Public]
	void WriteObjectPtr(struct FBlockyLuaHandle ar, struct UObject* Value); // Offset: 0x1062d02d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteInt8
	// Flags: [Final|Native|Static|Public]
	void WriteInt8(struct FBlockyLuaHandle ar, uint8_t Value); // Offset: 0x1062d0224 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteInt64
	// Flags: [Final|Native|Static|Public]
	void WriteInt64(struct FBlockyLuaHandle ar, int64_t Value); // Offset: 0x1062d0178 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteInt32
	// Flags: [Final|Native|Static|Public]
	void WriteInt32(struct FBlockyLuaHandle ar, IntProperty Value); // Offset: 0x1062d00c8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteInt16
	// Flags: [Final|Native|Static|Public]
	void WriteInt16(struct FBlockyLuaHandle ar, int16_t Value); // Offset: 0x1062d0018 // Return & Params: Num(2) Size(0xa)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteHandle
	// Flags: [Final|Native|Static|Public]
	void WriteHandle(struct FBlockyLuaHandle ar, struct FBlockyLuaHandle Value); // Offset: 0x1062cff6c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteDouble
	// Flags: [Final|Native|Static|Public]
	void WriteDouble(struct FBlockyLuaHandle ar, double Value); // Offset: 0x1062cfebc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.WriteBool
	// Flags: [Final|Native|Static|Public]
	void WriteBool(struct FBlockyLuaHandle ar, bool Value); // Offset: 0x1062cfe04 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadUInt8
	// Flags: [Final|Native|Static|Public]
	char ReadUInt8(struct FBlockyLuaHandle ar); // Offset: 0x1062cfd88 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadUInt64
	// Flags: [Final|Native|Static|Public]
	uint64 ReadUInt64(struct FBlockyLuaHandle ar); // Offset: 0x1062cfd0c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadUInt32
	// Flags: [Final|Native|Static|Public]
	uint32_t ReadUInt32(struct FBlockyLuaHandle ar); // Offset: 0x1062cfc90 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadUInt16
	// Flags: [Final|Native|Static|Public]
	uint16_t ReadUInt16(struct FBlockyLuaHandle ar); // Offset: 0x1062cfc14 // Return & Params: Num(2) Size(0xa)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadString
	// Flags: [Final|Native|Static|Public]
	StrProperty ReadString(struct FBlockyLuaHandle ar); // Offset: 0x1062cfb70 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadSingle
	// Flags: [Final|Native|Static|Public]
	float ReadSingle(struct FBlockyLuaHandle ar); // Offset: 0x1062cfaf4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadObjectPtr
	// Flags: [Final|Native|Static|Public]
	struct UObject* ReadObjectPtr(struct FBlockyLuaHandle ar); // Offset: 0x1062cfa78 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadInt8
	// Flags: [Final|Native|Static|Public]
	uint8_t ReadInt8(struct FBlockyLuaHandle ar); // Offset: 0x1062cf9fc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadInt64
	// Flags: [Final|Native|Static|Public]
	int64_t ReadInt64(struct FBlockyLuaHandle ar); // Offset: 0x1062cf980 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadInt32
	// Flags: [Final|Native|Static|Public]
	IntProperty ReadInt32(struct FBlockyLuaHandle ar); // Offset: 0x1062cf904 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadInt16
	// Flags: [Final|Native|Static|Public]
	int16_t ReadInt16(struct FBlockyLuaHandle ar); // Offset: 0x1062cf888 // Return & Params: Num(2) Size(0xa)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadHandle
	// Flags: [Final|Native|Static|Public]
	struct FBlockyLuaHandle ReadHandle(struct FBlockyLuaHandle ar); // Offset: 0x1062cf80c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadDouble
	// Flags: [Final|Native|Static|Public]
	double ReadDouble(struct FBlockyLuaHandle ar); // Offset: 0x1062cf790 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.ReadBool
	// Flags: [Final|Native|Static|Public]
	bool ReadBool(struct FBlockyLuaHandle ar); // Offset: 0x1062cf714 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.DestroyReturnWriter
	// Flags: [Final|Native|Static|Public]
	void DestroyReturnWriter(struct FBlockyLuaHandle ptr); // Offset: 0x1062cf6a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.DestroyArgumentsReader
	// Flags: [Final|Native|Static|Public]
	void DestroyArgumentsReader(struct FBlockyLuaHandle ptr); // Offset: 0x1062cf62c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.CreateReturnWriter
	// Flags: [Final|Native|Static|Public]
	struct FBlockyLuaHandle CreateReturnWriter(struct FBlockyLuaHandle stubHandle); // Offset: 0x1062cf5b0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.BlockyLuaUtility.CreateArgumentsReader
	// Flags: [Final|Native|Static|Public]
	struct FBlockyLuaHandle CreateArgumentsReader(struct FBlockyLuaHandle stubHandle); // Offset: 0x1062cf534 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class BlockyLuaCore.BlockyMenuItemObject
// Size: 0x128 // Inherited bytes: 0x28
struct UBlockyMenuItemObject : UObject {
	// Fields
	struct FText Name; // Offset: 0x28 // Size: 0x18
	struct TArray<struct UBlockyCategoryItemObject*> Categories; // Offset: 0x40 // Size: 0x10
	IntProperty CurrentCategoryIndex; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty DrawType; // Offset: 0x58 // Size: 0x10
	IntProperty DrawTopDelta; // Offset: 0x68 // Size: 0x04
	IntProperty DrawBottomDelta; // Offset: 0x6c // Size: 0x04
	StrProperty IconType; // Offset: 0x70 // Size: 0x10
	StrProperty Type; // Offset: 0x80 // Size: 0x10
	bool Visible; // Offset: 0x90 // Size: 0x01
	bool VisibleByTag; // Offset: 0x91 // Size: 0x01
	char pad_0x92[0x2]; // Offset: 0x92 // Size: 0x02
	float ItemInterval; // Offset: 0x94 // Size: 0x04
	float LineInterval; // Offset: 0x98 // Size: 0x04
	float VariableItemInterval; // Offset: 0x9c // Size: 0x04
	float PaddingLeft; // Offset: 0xa0 // Size: 0x04
	struct FLinearColor CategoryStringColor; // Offset: 0xa4 // Size: 0x10
	char pad_0xB4[0x10]; // Offset: 0xb4 // Size: 0x10
	float CategoryHeight; // Offset: 0xc4 // Size: 0x04
	float VariableCategoryHeight; // Offset: 0xc8 // Size: 0x04
	struct FLinearColor ItemStringColor; // Offset: 0xcc // Size: 0x10
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
	struct UBlockyGraphData* GraphData; // Offset: 0xe0 // Size: 0x08
	bool bShowRedDot; // Offset: 0xe8 // Size: 0x01
	char pad_0xE9[0x7]; // Offset: 0xe9 // Size: 0x07
	struct UBrushData* DefaultRectBrush; // Offset: 0xf0 // Size: 0x08
	struct UBrushData* CurrentItemBrush; // Offset: 0xf8 // Size: 0x08
	struct UBrushData* CurrentIconBrush; // Offset: 0x100 // Size: 0x08
	struct UBrushData* SelectedIconBrush; // Offset: 0x108 // Size: 0x08
	char pad_0x110[0x18]; // Offset: 0x110 // Size: 0x18

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject.SetShowRedDotVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetShowRedDotVar(bool var); // Offset: 0x1062d11d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject.InitShowRedDotVar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitShowRedDotVar(); // Offset: 0x1062d11bc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLuaCore.BlockyMenuItemObject_BP
// Size: 0x138 // Inherited bytes: 0x128
struct UBlockyMenuItemObject_BP : UBlockyMenuItemObject {
	// Fields
	struct UUserWidget* WidgetBP; // Offset: 0x128 // Size: 0x08
	bool bHideCategory; // Offset: 0x130 // Size: 0x01
	char pad_0x131[0x7]; // Offset: 0x131 // Size: 0x07
};

// Object Name: Class BlockyLuaCore.BlockyMenuItemObject_Custom
// Size: 0x138 // Inherited bytes: 0x128
struct UBlockyMenuItemObject_Custom : UBlockyMenuItemObject {
	// Fields
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Custom.NewCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void NewCustom(); // Offset: 0x1062d15b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Custom.IsCurrentCategoryEmpty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCurrentCategoryEmpty(); // Offset: 0x1062d157c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Custom.GetCustomType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECustomBlockType GetCustomType(); // Offset: 0x1062d1548 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Custom.ClosePopUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClosePopUp(); // Offset: 0x1062d1534 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BlockyLuaCore.BlockyMenuItemObject_Search
// Size: 0x190 // Inherited bytes: 0x128
struct UBlockyMenuItemObject_Search : UBlockyMenuItemObject {
	// Fields
	StrProperty SearchStr; // Offset: 0x128 // Size: 0x10
	char pad_0x138[0x58]; // Offset: 0x138 // Size: 0x58
};

// Object Name: Class BlockyLuaCore.BlockyMenuItemObject_TypeFilter
// Size: 0x128 // Inherited bytes: 0x128
struct UBlockyMenuItemObject_TypeFilter : UBlockyMenuItemObject {
};

// Object Name: Class BlockyLuaCore.BlockyMenuItemObject_Variable
// Size: 0x160 // Inherited bytes: 0x128
struct UBlockyMenuItemObject_Variable : UBlockyMenuItemObject {
	// Fields
	enum class EBlockyAccessType Access; // Offset: 0x128 // Size: 0x01
	enum class EBlockyAccessType CurSelectAccess; // Offset: 0x129 // Size: 0x01
	bool IsCustomVar; // Offset: 0x12a // Size: 0x01
	enum class EBlockListShowType ShowType; // Offset: 0x12b // Size: 0x01
	IntProperty TopCategory; // Offset: 0x12c // Size: 0x04
	char pad_0x130[0x10]; // Offset: 0x130 // Size: 0x10
	bool IsShowAllVariableItem; // Offset: 0x140 // Size: 0x01
	char pad_0x141[0x1f]; // Offset: 0x141 // Size: 0x1f

	// Functions

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void NewVariable(); // Offset: 0x1062d1de4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewCustomVariable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void NewCustomVariable(); // Offset: 0x1062d1dd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsSlotCustomVarToShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsSlotCustomVarToShow(); // Offset: 0x1062d1d9c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsPlayerBlackboard
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsPlayerBlackboard(); // Offset: 0x1062d1d68 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsCurrentCategoryEmpty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCurrentCategoryEmpty(); // Offset: 0x1062d1d34 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsBlackBoardVariable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsBlackBoardVariable(); // Offset: 0x1062d1d00 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterBlackboard
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FilterBlackboard(bool bIsPlayerVar); // Offset: 0x1062d1c7c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterAccess
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FilterAccess(enum class EBlockyAccessType InAccess); // Offset: 0x1062d1c00 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.BlockyMenuItemObject_Variable.CanSeeCustomVar
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void CanSeeCustomVar(bool& IsConfigContain, bool& IsOnlyShowCustom, bool& IsHiddenCustom); // Offset: 0x1062d1ad4 // Return & Params: Num(3) Size(0x3)
};

// Object Name: Class BlockyLuaCore.BlockyMoveCommandData
// Size: 0x38 // Inherited bytes: 0x30
struct UBlockyMoveCommandData : UBlockyCommandData {
	// Fields
	struct FBlockPoint Position; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.ExeSequencerBase
// Size: 0x638 // Inherited bytes: 0x430
struct UExeSequencerBase : UExecuteable {
	// Fields
	struct UBrushData* SlotBrush; // Offset: 0x430 // Size: 0x08
	struct UBrushData* TailBrush; // Offset: 0x438 // Size: 0x08
	char pad_0x440[0x1f8]; // Offset: 0x440 // Size: 0x1f8
};

// Object Name: Class BlockyLuaCore.BlockyTimer
// Size: 0xe40 // Inherited bytes: 0x638
struct UBlockyTimer : UExeSequencerBase {
	// Fields
	char pad_0x638[0x800]; // Offset: 0x638 // Size: 0x800
	struct UBrushData* IconBrush; // Offset: 0xe38 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.BlockyTimerParam
// Size: 0x208 // Inherited bytes: 0x200
struct UBlockyTimerParam : UBlockBase {
	// Fields
	struct UBlockyTimer* HostTimer; // Offset: 0x200 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.Break
// Size: 0x430 // Inherited bytes: 0x430
struct UBreak : UExecuteable {
};

// Object Name: Class BlockyLuaCore.BrushData
// Size: 0x108 // Inherited bytes: 0x28
struct UBrushData : UObject {
	// Fields
	struct FSlateBrush Brush; // Offset: 0x28 // Size: 0xb8
	struct UTexture2D* Texture; // Offset: 0xe0 // Size: 0x08
	float Angle; // Offset: 0xe8 // Size: 0x04
	struct FVector2D RectSize; // Offset: 0xec // Size: 0x08
	IntProperty CrossDelta; // Offset: 0xf4 // Size: 0x04
	char pad_0xF8[0x10]; // Offset: 0xf8 // Size: 0x10
};

// Object Name: Class BlockyLuaCore.CallFunction
// Size: 0x6c8 // Inherited bytes: 0x430
struct UCallFunction : UExecuteable {
	// Fields
	char pad_0x430[0x20]; // Offset: 0x430 // Size: 0x20
	struct UBrushData* IconBrush; // Offset: 0x450 // Size: 0x08
	struct UBrushData* SelectionBG; // Offset: 0x458 // Size: 0x08
	char pad_0x460[0x268]; // Offset: 0x460 // Size: 0x268
};

// Object Name: Class BlockyLuaCore.CastExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UCastExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.CastExpression.SetTargetType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTargetType(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Target); // Offset: 0x1062d2a80 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.CastExpression.SetExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetExpression(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Target); // Offset: 0x1062d29d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.CastExpression.GetTargetType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetTargetType(struct FBlockyLuaHandle ptr); // Offset: 0x1062d2958 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.CastExpression.GetExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062d28dc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.CastExpression.CreateCastExpression2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateCastExpression2(struct FBlockyLuaHandle TargetType, struct FBlockyLuaHandle expression); // Offset: 0x1062d2828 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BlockyLuaCore.CastExpression.CreateCastExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateCastExpression(); // Offset: 0x1062d27f4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ClassReferenceExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UClassReferenceExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ClassReferenceExpression.SetClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetClass(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle klass); // Offset: 0x1062d3094 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ClassReferenceExpression.GetClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetClass(struct FBlockyLuaHandle ptr); // Offset: 0x1062d3018 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ClassReferenceExpression.CreateClassReferenceExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateClassReferenceExpression(struct FBlockyLuaHandle klass); // Offset: 0x1062d2f9c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class BlockyLuaCore.ObjectDesc
// Size: 0x28 // Inherited bytes: 0x28
struct UObjectDesc : UObject {
};

// Object Name: Class BlockyLuaCore.ColorDesc
// Size: 0x280 // Inherited bytes: 0x28
struct UColorDesc : UObjectDesc {
	// Fields
	StrProperty KeyName; // Offset: 0x28 // Size: 0x10
	StrProperty Name; // Offset: 0x38 // Size: 0x10
	StrProperty CodeName; // Offset: 0x48 // Size: 0x10
	struct FText Menu; // Offset: 0x58 // Size: 0x18
	struct FText Category; // Offset: 0x70 // Size: 0x18
	struct FLinearColor Color; // Offset: 0x88 // Size: 0x10
	bool IsSelected; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x17]; // Offset: 0x99 // Size: 0x17
	bool Visible; // Offset: 0xb0 // Size: 0x01
	bool Removed; // Offset: 0xb1 // Size: 0x01
	bool Localed; // Offset: 0xb2 // Size: 0x01
	char pad_0xB3[0x1cd]; // Offset: 0xb3 // Size: 0x1cd

	// Functions

	// Object Name: Function BlockyLuaCore.ColorDesc.NameContainsString
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool NameContainsString(StrProperty filter); // Offset: 0x1062d3470 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.ColorDesc.IsNameEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsNameEmpty(); // Offset: 0x1062d344c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.ColorDesc.IsCodeNameEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCodeNameEmpty(); // Offset: 0x1062d3428 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.ColorDesc.GetType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FType GetType(); // Offset: 0x1062d340c // Return & Params: Num(1) Size(0x70)

	// Object Name: Function BlockyLuaCore.ColorDesc.GetLocaleName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetLocaleName(); // Offset: 0x1062d33a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.ColorDesc.GetHSVStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetHSVStr(); // Offset: 0x1062d3344 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.ColorDesc.GetColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FLinearColor GetColor(); // Offset: 0x1062d3328 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLuaCore.CommentBlock
// Size: 0x538 // Inherited bytes: 0x430
struct UCommentBlock : UExecuteable {
	// Fields
	char pad_0x430[0xf0]; // Offset: 0x430 // Size: 0xf0
	struct UBlockBase* CandidateParentBlock; // Offset: 0x520 // Size: 0x08
	char pad_0x528[0x10]; // Offset: 0x528 // Size: 0x10
};

// Object Name: Class BlockyLuaCore.CommonUIFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCommonUIFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.VarDefinerTypeCanBeArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool VarDefinerTypeCanBeArray(struct UVarDefiner* Definer); // Offset: 0x1062d48f8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.SetIsVirtualKeyboardVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetIsVirtualKeyboardVisible(bool Visible); // Offset: 0x1062d487c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextLength
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool LimitTextLength(struct FText& InputText, IntProperty MaxCharCount, struct FText& OutText); // Offset: 0x1062d4718 // Return & Params: Num(4) Size(0x39)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextEmojiInput
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FText LimitTextEmojiInput(struct FText& InputText); // Offset: 0x1062d4644 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.IsNameStringValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsNameStringValid(StrProperty NameString); // Offset: 0x1062d45ac // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.IsFuncDisabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsFuncDisabled(StrProperty FuncName); // Offset: 0x1062d44c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.IsDeveloperMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsDeveloperMode(); // Offset: 0x1062d4494 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString_BP
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetTranslateString_BP(StrProperty KeyString); // Offset: 0x1062d43d4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetTranslateString(StrProperty KeyString); // Offset: 0x1062d4314 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetTextLen
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetTextLen(struct FText& Text); // Offset: 0x1062d4268 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetPresetDescs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct UPresetDesc*> GetPresetDescs(struct UVarDefiner* Definer); // Offset: 0x1062d41c4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FText GetLocaleText(struct FText& KeyString); // Offset: 0x1062d40f0 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetLocaleString(StrProperty KeyString); // Offset: 0x1062d4030 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetIsVirtualKeyboardVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool GetIsVirtualKeyboardVisible(); // Offset: 0x1062d3ffc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetCustomVarNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetCustomVarNum(); // Offset: 0x1062d3fc8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringStart
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetArrayInitStringStart(); // Offset: 0x1062d3f64 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringEnd
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetArrayInitStringEnd(); // Offset: 0x1062d3f00 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GetAllDefiners
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct UVarDefiner*> GetAllDefiners(); // Offset: 0x1062d3e9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.GenerateNextNameWithSuffix
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GenerateNextNameWithSuffix(struct TArray<StrProperty>& ExistingNames, StrProperty InputName, bool InDuplicate); // Offset: 0x1062d3d24 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.FormatNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty FormatNumber(StrProperty Input); // Offset: 0x1062d3c64 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.DisplayNameToTranslate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty DisplayNameToTranslate(struct UBlockBase* bLock); // Offset: 0x1062d3bc0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.CollectAllObjects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CollectAllObjects(); // Offset: 0x1062d3bac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameValid
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool CheckNameValid(StrProperty InName, struct FText& ErrorMsg); // Offset: 0x1062d3a54 // Return & Params: Num(3) Size(0x29)

	// Object Name: Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameHasInvalidChar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool CheckNameHasInvalidChar(StrProperty InName); // Offset: 0x1062d3970 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class BlockyLuaCore.ConfigDataAsset
// Size: 0x130 // Inherited bytes: 0x30
struct UConfigDataAsset : UDataAsset {
	// Fields
	StrProperty AllType; // Offset: 0x30 // Size: 0x10
	StrProperty TextureRectParam; // Offset: 0x40 // Size: 0x10
	StrProperty Function; // Offset: 0x50 // Size: 0x10
	struct TArray<StrProperty> FunctionList; // Offset: 0x60 // Size: 0x10
	StrProperty Variable; // Offset: 0x70 // Size: 0x10
	StrProperty Sequence; // Offset: 0x80 // Size: 0x10
	StrProperty Preset; // Offset: 0x90 // Size: 0x10
	MapProperty PresetMap; // Offset: 0xa0 // Size: 0x50
	StrProperty TranslateString; // Offset: 0xf0 // Size: 0x10
	struct TArray<StrProperty> ModeList; // Offset: 0x100 // Size: 0x10
	StrProperty BlockyNew; // Offset: 0x110 // Size: 0x10
	StrProperty TLogParams; // Offset: 0x120 // Size: 0x10

	// Functions

	// Object Name: Function BlockyLuaCore.ConfigDataAsset.SaveToAsset
	// Flags: [Final|Native|Public]
	void SaveToAsset(StrProperty PackageName); // Offset: 0x1062d5168 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLuaCore.Continue
// Size: 0x430 // Inherited bytes: 0x430
struct UContinue : UExecuteable {
};

// Object Name: Class BlockyLuaCore.CreateFunction
// Size: 0x6e0 // Inherited bytes: 0x6c8
struct UCreateFunction : UCallFunction {
	// Fields
	char pad_0x6C8[0x18]; // Offset: 0x6c8 // Size: 0x18
};

// Object Name: Class BlockyLuaCore.CreateObjectExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UCreateObjectExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.CreateObjectExpression.SetTypeName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTypeName(struct FBlockyLuaHandle ptr, StrProperty Value); // Offset: 0x1062d58a8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CreateObjectExpression.SetParameters
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetParameters(struct FBlockyLuaHandle ptr, struct TArray<struct FBlockyLuaHandle> Value); // Offset: 0x1062d578c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CreateObjectExpression.GetTypeName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetTypeName(struct FBlockyLuaHandle ptr); // Offset: 0x1062d56e8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CreateObjectExpression.GetParameters
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetParameters(struct FBlockyLuaHandle ptr); // Offset: 0x1062d5644 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CreateObjectExpression.CreateCreateObjectExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateCreateObjectExpression(StrProperty TypeName); // Offset: 0x1062d5560 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class BlockyLuaCore.CreateSubDefineFunction
// Size: 0x9a0 // Inherited bytes: 0x638
struct UCreateSubDefineFunction : UExeSequencerBase {
	// Fields
	char pad_0x638[0x360]; // Offset: 0x638 // Size: 0x360
	struct UBrushData* IconBrush; // Offset: 0x998 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.CustomAction
// Size: 0x488 // Inherited bytes: 0x430
struct UCustomAction : UExecuteable {
	// Fields
	char pad_0x430[0x8]; // Offset: 0x430 // Size: 0x08
	struct UCustomConfig* Config; // Offset: 0x438 // Size: 0x08
	struct FGuid ConfigName; // Offset: 0x440 // Size: 0x10
	struct UBrushData* BrushBGSelected; // Offset: 0x450 // Size: 0x08
	struct UBrushData* IconBrush; // Offset: 0x458 // Size: 0x08
	struct UBrushData* BrushBG; // Offset: 0x460 // Size: 0x08
	char pad_0x468[0x20]; // Offset: 0x468 // Size: 0x20
};

// Object Name: Class BlockyLuaCore.CustomActionImp
// Size: 0x678 // Inherited bytes: 0x638
struct UCustomActionImp : UExeSequencerBase {
	// Fields
	char pad_0x638[0x18]; // Offset: 0x638 // Size: 0x18
	struct UCustomConfig* Config; // Offset: 0x650 // Size: 0x08
	struct FGuid ConfigName; // Offset: 0x658 // Size: 0x10
	struct UBrushData* IconBrush; // Offset: 0x668 // Size: 0x08
	struct UBrushData* BrushBG; // Offset: 0x670 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.CustomParam
// Size: 0x70 // Inherited bytes: 0x28
struct UCustomParam : UObject {
	// Fields
	StrProperty Name; // Offset: 0x28 // Size: 0x10
	StrProperty Description; // Offset: 0x38 // Size: 0x10
	bool bIsArray; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	struct UVarDefiner* Definer; // Offset: 0x50 // Size: 0x08
	char pad_0x58[0x18]; // Offset: 0x58 // Size: 0x18

	// Functions

	// Object Name: Function BlockyLuaCore.CustomParam.CopyFrom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CopyFrom(struct UCustomParam* Other); // Offset: 0x1062d5f84 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.CustomConfig
// Size: 0xa0 // Inherited bytes: 0x28
struct UCustomConfig : UObject {
	// Fields
	struct FGuid Name; // Offset: 0x28 // Size: 0x10
	StrProperty DisplayName; // Offset: 0x38 // Size: 0x10
	enum class ECustomBlockType Type; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	StrProperty Description; // Offset: 0x50 // Size: 0x10
	struct TArray<struct UCustomParam*> Params; // Offset: 0x60 // Size: 0x10
	struct UCustomParam* Return; // Offset: 0x70 // Size: 0x08
	struct UFunctionDesc* CustomDesc; // Offset: 0x78 // Size: 0x08
	struct UFunctionDesc* CustomImplDesc; // Offset: 0x80 // Size: 0x08
	char pad_0x88[0x18]; // Offset: 0x88 // Size: 0x18

	// Functions

	// Object Name: Function BlockyLuaCore.CustomConfig.UpdateDesc
	// Flags: [Final|Native|Public]
	void UpdateDesc(); // Offset: 0x1062d6398 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.CustomConfig.SetParamNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetParamNum(IntProperty paramNum); // Offset: 0x1062d631c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.CustomConfig.InitResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UCustomParam* InitResult(); // Offset: 0x1062d62e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.CustomConfig.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(); // Offset: 0x1062d62d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BlockyLuaCore.CustomConfig.GetParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UCustomParam* GetParam(IntProperty idx); // Offset: 0x1062d6248 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.CustomConfig.GetCustomGraphName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetCustomGraphName(); // Offset: 0x1062d61e4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.CustomConfig.CopyFrom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CopyFrom(struct UCustomConfig* Other); // Offset: 0x1062d6168 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.CustomInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCustomInterface : UInterface {
};

// Object Name: Class BlockyLuaCore.CustomDefiner
// Size: 0xe8 // Inherited bytes: 0xb8
struct UCustomDefiner : UCategoryDefiner {
	// Fields
	StrProperty HotfixUserData; // Offset: 0xb8 // Size: 0x10
	StrProperty TemplateFunc; // Offset: 0xc8 // Size: 0x10
	StrProperty TemplateImplFunc; // Offset: 0xd8 // Size: 0x10
};

// Object Name: Class BlockyLuaCore.DefineFunction
// Size: 0x480 // Inherited bytes: 0x430
struct UDefineFunction : UExecuteable {
	// Fields
	struct FText Name; // Offset: 0x430 // Size: 0x18
	char pad_0x448[0x38]; // Offset: 0x448 // Size: 0x38
};

// Object Name: Class BlockyLuaCore.CustomEvent
// Size: 0x500 // Inherited bytes: 0x480
struct UCustomEvent : UDefineFunction {
	// Fields
	char pad_0x480[0x8]; // Offset: 0x480 // Size: 0x08
	struct UCustomConfig* Config; // Offset: 0x488 // Size: 0x08
	struct FGuid ConfigName; // Offset: 0x490 // Size: 0x10
	struct UBrushData* IconBrush; // Offset: 0x4a0 // Size: 0x08
	struct UBrushData* BrushBG; // Offset: 0x4a8 // Size: 0x08
	char pad_0x4B0[0x50]; // Offset: 0x4b0 // Size: 0x50
};

// Object Name: Class BlockyLuaCore.CustomImpInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCustomImpInterface : UInterface {
};

// Object Name: Class BlockyLuaCore.CustomValue
// Size: 0x250 // Inherited bytes: 0x200
struct UCustomValue : UVarBase {
	// Fields
	char pad_0x200[0x8]; // Offset: 0x200 // Size: 0x08
	struct UCustomConfig* Config; // Offset: 0x208 // Size: 0x08
	struct FGuid ConfigName; // Offset: 0x210 // Size: 0x10
	struct UBrushData* BrushBGSelected; // Offset: 0x220 // Size: 0x08
	struct UBrushData* BrushBG; // Offset: 0x228 // Size: 0x08
	char pad_0x230[0x20]; // Offset: 0x230 // Size: 0x20
};

// Object Name: Class BlockyLuaCore.CustomValueImp
// Size: 0x810 // Inherited bytes: 0x638
struct UCustomValueImp : UExeSequencerBase {
	// Fields
	char pad_0x638[0x1b0]; // Offset: 0x638 // Size: 0x1b0
	struct UCustomConfig* Config; // Offset: 0x7e8 // Size: 0x08
	struct FGuid ConfigName; // Offset: 0x7f0 // Size: 0x10
	struct UBrushData* IconBrush; // Offset: 0x800 // Size: 0x08
	struct UBrushData* BrushBG; // Offset: 0x808 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.DefaultValueCommandData
// Size: 0x88 // Inherited bytes: 0x30
struct UDefaultValueCommandData : UBlockyCommandData {
	// Fields
	char pad_0x30[0x58]; // Offset: 0x30 // Size: 0x58
};

// Object Name: Class BlockyLuaCore.DefaultValueExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UDefaultValueExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.DefaultValueExpression.SetType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetType(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Type); // Offset: 0x1062da834 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.DefaultValueExpression.GetType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetType(struct FBlockyLuaHandle ptr); // Offset: 0x1062da7b8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateDefaultValueExpression2(struct FBlockyLuaHandle typeRef); // Offset: 0x1062da73c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateDefaultValueExpression(struct FBlockyLuaHandle typeClass); // Offset: 0x1062da6c0 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class BlockyLuaCore.DoNum
// Size: 0x970 // Inherited bytes: 0x638
struct UDoNum : UExeSequencerBase {
	// Fields
	char pad_0x638[0x330]; // Offset: 0x638 // Size: 0x330
	struct UBrushData* IconBrush; // Offset: 0x968 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.EnumDesc
// Size: 0xa0 // Inherited bytes: 0x28
struct UEnumDesc : UObject {
	// Fields
	StrProperty HotfixUserData; // Offset: 0x28 // Size: 0x10
	struct UEnum* EnumPtr; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x60]; // Offset: 0x40 // Size: 0x60
};

// Object Name: Class BlockyLuaCore.ExecuteablePreview
// Size: 0x460 // Inherited bytes: 0x430
struct UExecuteablePreview : UExecuteable {
	// Fields
	struct TArray<struct FBlockPreviewBrush> Rects; // Offset: 0x430 // Size: 0x10
	struct UBrushData* DisableIconBrush; // Offset: 0x440 // Size: 0x08
	char pad_0x448[0x18]; // Offset: 0x448 // Size: 0x18
};

// Object Name: Class BlockyLuaCore.ForEach
// Size: 0xb28 // Inherited bytes: 0x638
struct UForEach : UExeSequencerBase {
	// Fields
	char pad_0x638[0x4e8]; // Offset: 0x638 // Size: 0x4e8
	struct UBrushData* IconBrush; // Offset: 0xb20 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.FunctionDesc
// Size: 0x248 // Inherited bytes: 0x28
struct UFunctionDesc : UObject {
	// Fields
	StrProperty HotfixUserData; // Offset: 0x28 // Size: 0x10
	StrProperty KeyName; // Offset: 0x38 // Size: 0x10
	StrProperty CodeName; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x58]; // Offset: 0x58 // Size: 0x58
	StrProperty Host; // Offset: 0xb0 // Size: 0x10
	StrProperty Description; // Offset: 0xc0 // Size: 0x10
	char pad_0xD0[0x70]; // Offset: 0xd0 // Size: 0x70
	struct UObject* BlockClass; // Offset: 0x140 // Size: 0x08
	char pad_0x148[0x10]; // Offset: 0x148 // Size: 0x10
	struct TArray<struct FFunctionParameter> Parameters; // Offset: 0x158 // Size: 0x10
	struct TArray<struct FFunctionParameter> AddEventParameters; // Offset: 0x168 // Size: 0x10
	MapProperty ModuleRequires; // Offset: 0x178 // Size: 0x50
	char pad_0x1C8[0x80]; // Offset: 0x1c8 // Size: 0x80

	// Functions

	// Object Name: Function BlockyLuaCore.FunctionDesc.GetMenu
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetMenu(); // Offset: 0x1062db8bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionDesc.GetCategory
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetCategory(); // Offset: 0x1062db858 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLuaCore.FunctionInvokeArgumentExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UFunctionInvokeArgumentExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetOperationType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOperationType(struct FBlockyLuaHandle ptr, enum class EBlockyFunctionArgumentAttribute Value); // Offset: 0x1062dbf24 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetExpression(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062dbe78 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetAdditionPostCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetAdditionPostCode(struct FBlockyLuaHandle ptr, StrProperty Value); // Offset: 0x1062dbd5c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetOperationType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class EBlockyFunctionArgumentAttribute GetOperationType(struct FBlockyLuaHandle ptr); // Offset: 0x1062dbce0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062dbc64 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetAdditionPostCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetAdditionPostCode(struct FBlockyLuaHandle ptr); // Offset: 0x1062dbbc0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.FunctionInvokeArgumentExpression.CreateFunctionInvokeArgumentExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateFunctionInvokeArgumentExpression(); // Offset: 0x1062dbb8c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.FunctionInvokeExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UFunctionInvokeExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.SetReturnValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetReturnValue(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062dc94c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.SetHost
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetHost(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062dc8a0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.SetFunctionName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetFunctionName(struct FBlockyLuaHandle ptr, StrProperty Value); // Offset: 0x1062dc784 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.SetComment
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetComment(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062dc6d8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.SetArguments
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetArguments(struct FBlockyLuaHandle ptr, struct TArray<struct FBlockyLuaHandle> Value); // Offset: 0x1062dc5bc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.GetReturnValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetReturnValue(struct FBlockyLuaHandle ptr); // Offset: 0x1062dc540 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.GetHost
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetHost(struct FBlockyLuaHandle ptr); // Offset: 0x1062dc4c4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.GetFunctionName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetFunctionName(struct FBlockyLuaHandle ptr); // Offset: 0x1062dc420 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.GetComment
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetComment(struct FBlockyLuaHandle ptr); // Offset: 0x1062dc3a4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.GetArguments
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetArguments(struct FBlockyLuaHandle ptr); // Offset: 0x1062dc300 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.FunctionInvokeExpression.CreateFunctionInvokeExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateFunctionInvokeExpression(); // Offset: 0x1062dc2cc // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.GetArrayElement
// Size: 0x3b0 // Inherited bytes: 0x200
struct UGetArrayElement : UBlockBase {
	// Fields
	char pad_0x200[0x1a8]; // Offset: 0x200 // Size: 0x1a8
	struct UBrushData* BrushBGSelected; // Offset: 0x3a8 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.HotfixUtility
// Size: 0x80 // Inherited bytes: 0x28
struct UHotfixUtility : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58

	// Functions

	// Object Name: Function BlockyLuaCore.HotfixUtility.UVarDefiner_GetCurrentLocateShowName
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	StrProperty UVarDefiner_GetCurrentLocateShowName(struct UVarDefiner* pThis); // Offset: 0x1062e4be0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UPresetDesc_GetLocaleName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UPresetDesc_GetLocaleName(struct UPresetDesc* PresetDesc); // Offset: 0x1062e4b24 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_Index_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UNumFromTo_UpdateParameterDisplayName_Index_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e4a10 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e48fc // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName(struct UFunctionDesc* Desc, IntProperty& ParamIdx, StrProperty DisplayName); // Offset: 0x1062e4798 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_IndexBlock_Name
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UNumFromTo_InitializeBlock_IndexBlock_Name(struct UNumFromTo* NumFromTo, StrProperty Name); // Offset: 0x1062e4684 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_CurrentBlock_Name
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UNumFromTo_InitializeBlock_CurrentBlock_Name(struct UNumFromTo* NumFromTo, StrProperty Name); // Offset: 0x1062e4570 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UNamedVar_UpdateFormater_VarFormatNameText
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UNamedVar_UpdateFormater_VarFormatNameText(struct UNamedVar* var); // Offset: 0x1062e44b4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e43a0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e428c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementNormalDisplay
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_UpdateParameterDisplayName_ElementNormalDisplay(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e4178 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementDisableDisplay
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_UpdateParameterDisplayName_ElementDisableDisplay(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e4064 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachIndex_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_SetFunctionDesc_ForeachIndex_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e3f50 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachElement_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_SetFunctionDesc_ForeachElement_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e3e3c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementNormalDisplay
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_SetFunctionDesc_ElementNormalDisplay(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e3d28 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementDisableDisplay
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UForEach_SetFunctionDesc_ElementDisableDisplay(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e3c14 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UExecuteable_SetFunctionDesc_ParamDisplayName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UExecuteable_SetFunctionDesc_ParamDisplayName(struct UFunctionDesc* Desc, IntProperty& ParamIdx, StrProperty ParamDisplayName); // Offset: 0x1062e3ab0 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumValueName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UEnumDesc_GetCurrentLocaleEnumValueName(struct UEnumDesc* EnumDesc, struct FName& enumValueName, StrProperty enumValueLocName, bool useDefaultWhenNotFound); // Offset: 0x1062e3904 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumTypeName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UEnumDesc_GetCurrentLocaleEnumTypeName(struct UEnumDesc* EnumDesc, StrProperty EnumTypeName, bool useDefaultWhenNotFound); // Offset: 0x1062e37a8 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName(struct UFunctionDesc* Desc, StrProperty CurrentIndexDisplayName); // Offset: 0x1062e3694 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName(struct UFunctionDesc* Desc, StrProperty CurrentIndexDisplayName); // Offset: 0x1062e3580 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UDefineFunction_SetFunctionDesc_ParamName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UDefineFunction_SetFunctionDesc_ParamName(struct UFunctionDesc* Desc, IntProperty& ParamIdx, StrProperty ParamName); // Offset: 0x1062e341c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetTranslateString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UCommonUIFunctionLibrary_GetTranslateString(StrProperty KeyString); // Offset: 0x1062e3344 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetLocaleString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UCommonUIFunctionLibrary_GetLocaleString(StrProperty KeyString); // Offset: 0x1062e326c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UColorDesc_GetLocaleName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UColorDesc_GetLocaleName(struct UColorDesc* ColorDesc); // Offset: 0x1062e31b8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e30a4 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName(struct UFunctionDesc* Desc, StrProperty DisplayName); // Offset: 0x1062e2f90 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_ContentName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockySearchWidget_RefreshTabContainerView_ContentName(struct UUserWidget* pThis); // Offset: 0x1062e2ed4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_CategoryName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockySearchWidget_RefreshTabContainerView_CategoryName(struct UUserWidget* pThis, struct UBlockyCategoryItemObject* Category); // Offset: 0x1062e2de0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuWidget_UpdateMenus_MenuWidgetName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuWidget_UpdateMenus_MenuWidgetName(struct UUserWidget* pThis, struct UBlockyMenuItemObject* MenuItem); // Offset: 0x1062e2cec // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString(struct UBlockyMenuItemObject_Search* MenuItem, struct UBlockyBlockListItemObject* ItemObject); // Offset: 0x1062e2bf8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName(struct UBlockyMenuItemObject_Search* MenuItem, struct UBlockyCategoryItemObject* CategoryItem); // Offset: 0x1062e2b04 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedContentTitle
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuItemObject_Search_PaintSearchedContentTitle(); // Offset: 0x1062e2a98 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName(struct UNamedVar* var); // Offset: 0x1062e29dc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_Block
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuItemObject_Search_GetBlockSearchString_Block(struct UBlockBase* InBlock); // Offset: 0x1062e2920 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Paint_CategoryName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyMenuItemObject_Paint_CategoryName(struct UBlockyMenuItemObject* MenuItem, struct UBlockyCategoryItemObject* CategoryItem); // Offset: 0x1062e282c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyGraphData_GetCustomNames_CustomName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyGraphData_GetCustomNames_CustomName(struct UCustomConfig* Custom); // Offset: 0x1062e2770 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	void UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded(struct UBlockyGraph* pThis, struct UNamedVar* bLock); // Offset: 0x1062e26b4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	void UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded(struct UBlockyGraph* pThis, struct UBlockBase* bLock); // Offset: 0x1062e25f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterMenuName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UBlockyEditor_OnClickSlot_TypeFilterMenuName(struct UBlockBase* slotHost, struct FHotFixSlotHandle& Handle, StrProperty menuName); // Offset: 0x1062e2494 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterCategoryName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UBlockyEditor_OnClickSlot_TypeFilterCategoryName(struct UBlockBase* slotHost, struct FHotFixSlotHandle& Handle, StrProperty CategoryName); // Offset: 0x1062e2330 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName(struct UBlockBase* slotHost, struct FHotFixSlotHandle& Handle, StrProperty slotCustomClickTypeName); // Offset: 0x1062e21cc // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_EnumName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty UBlockyEditor_OnClickSlot_EnumName(struct UBlockBase* slotHost, struct UEnumDesc* EnumDesc, struct FName& EnumName, StrProperty EnumString); // Offset: 0x1062e202c // Return & Params: Num(5) Size(0x38)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_CategoryItemName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyEditor_OnClickSlot_CategoryItemName(struct UBlockBase* slotHost, StrProperty CategoryName); // Offset: 0x1062e1f18 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_BPMenuItemName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyEditor_OnClickSlot_BPMenuItemName(struct UBlockBase* slotHost, StrProperty menuName); // Offset: 0x1062e1e04 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyEditor_GetLocaleString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyEditor_GetLocaleString(StrProperty KeyString); // Offset: 0x1062e1d2c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName(struct UUserWidget* pThis, struct UBlockyCategoryItemObject* Category); // Offset: 0x1062e1c38 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Variable_GetStingUsedToSearch
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyBlockListItemObject_Variable_GetStingUsedToSearch(struct UBlockyBlockListItemObject_Variable* ItemObject); // Offset: 0x1062e1b7c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_GetStingUsedToSearch
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyBlockListItemObject_GetStingUsedToSearch(struct UBlockyBlockListItemObject* ItemObject); // Offset: 0x1062e1ac0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Custom_GetStingUsedToSearch
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty UBlockyBlockListItemObject_Custom_GetStingUsedToSearch(struct UBlockyBlockListItemObject_Custom* ItemObject); // Offset: 0x1062e1a04 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_IsValidPreset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_IsValidPreset(struct FHotFixSlotHandle& Handle, struct UPresetDesc* Preset); // Offset: 0x1062e1934 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_IsValidItem
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_IsValidItem(struct FHotFixSlotHandle& Handle, struct UBlockyBlockListItemObject* Item); // Offset: 0x1062e1864 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_IsValidHandle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_IsValidHandle(struct FHotFixSlotHandle& Handle); // Offset: 0x1062e17d8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_IsValidBlock
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_IsValidBlock(struct FHotFixSlotHandle& Handle, struct UBlockBase* blk); // Offset: 0x1062e1708 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_HasClickType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_HasClickType(struct FHotFixSlotHandle& Handle, IntProperty Type); // Offset: 0x1062e1638 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotPresetDesc
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UPresetDesc* Slot_GetSlotPresetDesc(struct FHotFixSlotHandle& Handle); // Offset: 0x1062e15ac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotName(struct FHotFixSlotHandle& Handle, struct FText& OutValue); // Offset: 0x1062e14a8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotItemType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotItemType(struct FHotFixSlotHandle& Handle, struct FType& OutValue); // Offset: 0x1062e13a4 // Return & Params: Num(3) Size(0x79)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotGetColorValue
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotGetColorValue(struct FHotFixSlotHandle& Handle, struct FLinearColor& OutValue); // Offset: 0x1062e12c8 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDisplayName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotDisplayName(struct FHotFixSlotHandle& Handle, StrProperty& OutValue); // Offset: 0x1062e11c8 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDefaultValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotDefaultValue(struct FHotFixSlotHandle& Handle, StrProperty& OutValue); // Offset: 0x1062e10c8 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickTypeName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotCustomClickTypeName(struct FHotFixSlotHandle& Handle, StrProperty& OutValue); // Offset: 0x1062e0fc8 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotCustomClickType(struct FHotFixSlotHandle& Handle, StrProperty& OutValue); // Offset: 0x1062e0ec8 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotColorDesc
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UColorDesc* Slot_GetSlotColorDesc(struct FHotFixSlotHandle& Handle); // Offset: 0x1062e0e3c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetSlotClickType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_GetSlotClickType(struct FHotFixSlotHandle& Handle, IntProperty& OutValue); // Offset: 0x1062e0d5c // Return & Params: Num(3) Size(0xd)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_GetHostBlock
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UBlockBase* Slot_GetHostBlock(struct FHotFixSlotHandle& Handle); // Offset: 0x1062e0cd0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.HotfixUtility.Slot_CanSetBlock
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool Slot_CanSetBlock(struct FHotFixSlotHandle& Handle, struct UBlockBase* Host, struct UBlockBase* blk); // Offset: 0x1062e0bc8 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function BlockyLuaCore.HotfixUtility.SetTypeValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetTypeValue(struct FType& Type, IntProperty NewValue); // Offset: 0x1062e0ae0 // Return & Params: Num(2) Size(0x74)

	// Object Name: Function BlockyLuaCore.HotfixUtility.GetTypeValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetTypeValue(struct FType& Type); // Offset: 0x1062e0a34 // Return & Params: Num(2) Size(0x74)

	// Object Name: Function BlockyLuaCore.HotfixUtility.GetTranslateString_ShowTips
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty GetTranslateString_ShowTips(StrProperty Tip); // Offset: 0x1062e095c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.GetTranslateString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty GetTranslateString(StrProperty String); // Offset: 0x1062e0884 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.GetDisplayNameString_SlotDisplayName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty GetDisplayNameString_SlotDisplayName(struct FHotFixSlotHandle& Handle, StrProperty SlotDisplayName, StrProperty SlotName); // Offset: 0x1062e0708 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FPresetTypeData_GetLocalTypeName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty FPresetTypeData_GetLocalTypeName(struct FPresetTypeData& PresetTypeData); // Offset: 0x1062e061c // Return & Params: Num(2) Size(0x78)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceTriggerName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty FMsgData_CreateMessageData_InfoString_ReplaceTriggerName(struct UFunctionDesc* Desc, StrProperty ListItemFormatString, StrProperty& InfoString); // Offset: 0x1062e04a4 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceBlockName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty FMsgData_CreateMessageData_InfoString_ReplaceBlockName(struct UBlockBase* bLock, StrProperty ListItemFormatString, StrProperty& InfoString); // Offset: 0x1062e032c // Return & Params: Num(4) Size(0x38)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_GetInfoTranslateString
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty FMsgData_CreateMessageData_GetInfoTranslateString(struct UBlockBase* bLock, struct FHotFixSlotHandle& Slot, StrProperty Info); // Offset: 0x1062e01c8 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_UpdateVarFormatters_SeparatorStr
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty FLocaleFormatter_UpdateVarFormatters_SeparatorStr(StrProperty str); // Offset: 0x1062e00f0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeListItemFormats_ListItemFormatString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty FLocaleFormatter_InitializeListItemFormats_ListItemFormatString(StrProperty ListItemFormatString, bool bNeedLocalization); // Offset: 0x1062dffd0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeFormats_FormatString
	// Flags: [RequiredAPI|Native|Event|Public|BlueprintEvent|Const]
	StrProperty FLocaleFormatter_InitializeFormats_FormatString(StrProperty FormatString, bool bNeedLocalization); // Offset: 0x1062dfeb0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName(struct UBlockyBlockListItemObject* ListItemObject, IntProperty& ParamIdx, StrProperty DisplayName); // Offset: 0x1062dfd4c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName
	// Flags: [RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	StrProperty FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName(struct UBlockyBlockListItemObject* ListItemObject, IntProperty& ParamIdx, StrProperty DisplayName); // Offset: 0x1062dfbe8 // Return & Params: Num(4) Size(0x30)
};

// Object Name: Class BlockyLuaCore.IfElse
// Size: 0x458 // Inherited bytes: 0x430
struct UIfElse : UExecuteable {
	// Fields
	struct UIfElseCondition* IfCondition; // Offset: 0x430 // Size: 0x08
	struct TArray<struct UIfElseCondition*> ElseConditions; // Offset: 0x438 // Size: 0x10
	char pad_0x448[0x10]; // Offset: 0x448 // Size: 0x10
};

// Object Name: Class BlockyLuaCore.IfElseCondition
// Size: 0x830 // Inherited bytes: 0x638
struct UIfElseCondition : UExeSequencerBase {
	// Fields
	struct UIfElse* ParentIfElse; // Offset: 0x638 // Size: 0x08
	char pad_0x640[0x1f0]; // Offset: 0x640 // Size: 0x1f0
};

// Object Name: Class BlockyLuaCore.IndexerOperatorExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UIndexerOperatorExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.IndexerOperatorExpression.SetTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTarget(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062ea4f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IndexerOperatorExpression.SetIndices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetIndices(struct FBlockyLuaHandle ptr, struct TArray<struct FBlockyLuaHandle> Value); // Offset: 0x1062ea3dc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.IndexerOperatorExpression.GetTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetTarget(struct FBlockyLuaHandle ptr); // Offset: 0x1062ea360 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IndexerOperatorExpression.GetIndices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetIndices(struct FBlockyLuaHandle ptr); // Offset: 0x1062ea2bc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.IndexerOperatorExpression.CreateIndexerOperatorExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateIndexerOperatorExpression(); // Offset: 0x1062ea288 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.InsertArrayElement
// Size: 0x770 // Inherited bytes: 0x430
struct UInsertArrayElement : UExecuteable {
	// Fields
	char pad_0x430[0x340]; // Offset: 0x430 // Size: 0x340
};

// Object Name: Class BlockyLuaCore.JsonSerializable
// Size: 0x28 // Inherited bytes: 0x28
struct UJsonSerializable : UObject {
};

// Object Name: Class BlockyLuaCore.LogicBase
// Size: 0x208 // Inherited bytes: 0x200
struct ULogicBase : UBlockBase {
	// Fields
	struct UBrushData* BrushBGSelected; // Offset: 0x200 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.LogicAnd
// Size: 0x548 // Inherited bytes: 0x208
struct ULogicAnd : ULogicBase {
	// Fields
	char pad_0x208[0x340]; // Offset: 0x208 // Size: 0x340
};

// Object Name: Class BlockyLuaCore.LogicCompare
// Size: 0x6d0 // Inherited bytes: 0x208
struct ULogicCompare : ULogicBase {
	// Fields
	char pad_0x208[0x4c8]; // Offset: 0x208 // Size: 0x4c8
};

// Object Name: Class BlockyLuaCore.LogicNot
// Size: 0x3a0 // Inherited bytes: 0x208
struct ULogicNot : ULogicBase {
	// Fields
	char pad_0x208[0x198]; // Offset: 0x208 // Size: 0x198
};

// Object Name: Class BlockyLuaCore.LogicOr
// Size: 0x548 // Inherited bytes: 0x208
struct ULogicOr : ULogicBase {
	// Fields
	char pad_0x208[0x340]; // Offset: 0x208 // Size: 0x340
};

// Object Name: Class BlockyLuaCore.Member
// Size: 0x3b0 // Inherited bytes: 0x208
struct UMember : ULogicBase {
	// Fields
	char pad_0x208[0x1a8]; // Offset: 0x208 // Size: 0x1a8
};

// Object Name: Class BlockyLuaCore.NullExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UNullExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.NullExpression.CreateNullExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateNullExpression(); // Offset: 0x1062ec220 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.NumFromTo
// Size: 0x1008 // Inherited bytes: 0x638
struct UNumFromTo : UExeSequencerBase {
	// Fields
	char pad_0x638[0x808]; // Offset: 0x638 // Size: 0x808
	struct UBrushData* IconBrush; // Offset: 0xe40 // Size: 0x08
	char pad_0xE48[0x1c0]; // Offset: 0xe48 // Size: 0x1c0
};

// Object Name: Class BlockyLuaCore.PostCustomEvent
// Size: 0x5f0 // Inherited bytes: 0x430
struct UPostCustomEvent : UExecuteable {
	// Fields
	char pad_0x430[0x1c0]; // Offset: 0x430 // Size: 0x1c0
};

// Object Name: Class BlockyLuaCore.PresetDesc
// Size: 0x330 // Inherited bytes: 0x28
struct UPresetDesc : UObjectDesc {
	// Fields
	StrProperty HotfixUserData; // Offset: 0x28 // Size: 0x10
	StrProperty KeyName; // Offset: 0x38 // Size: 0x10
	StrProperty Name; // Offset: 0x48 // Size: 0x10
	StrProperty CodeName; // Offset: 0x58 // Size: 0x10
	struct TArray<IntProperty> Tag; // Offset: 0x68 // Size: 0x10
	StrProperty Icon; // Offset: 0x78 // Size: 0x10
	struct FText Menu; // Offset: 0x88 // Size: 0x18
	struct FText Category; // Offset: 0xa0 // Size: 0x18
	bool isValidityPreset; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x3]; // Offset: 0xb9 // Size: 0x03
	IntProperty PresetValidityDuration; // Offset: 0xbc // Size: 0x04
	StrProperty AnimationPath; // Offset: 0xc0 // Size: 0x10
	StrProperty SoundPath; // Offset: 0xd0 // Size: 0x10
	bool IsSelected; // Offset: 0xe0 // Size: 0x01
	bool IsDSNeedSave; // Offset: 0xe1 // Size: 0x01
	char pad_0xE2[0x16]; // Offset: 0xe2 // Size: 0x16
	bool Visible; // Offset: 0xf8 // Size: 0x01
	bool Removed; // Offset: 0xf9 // Size: 0x01
	bool Localed; // Offset: 0xfa // Size: 0x01
	bool IsCustomVar; // Offset: 0xfb // Size: 0x01
	bool IsCustomVarArray; // Offset: 0xfc // Size: 0x01
	bool isNeedSelectCheck; // Offset: 0xfd // Size: 0x01
	char pad_0xFE[0x2]; // Offset: 0xfe // Size: 0x02
	struct FDependResInfo ResInfo; // Offset: 0x100 // Size: 0x30
	StrProperty CustomVarType; // Offset: 0x130 // Size: 0x10
	struct TArray<char> CustomExtraData; // Offset: 0x140 // Size: 0x10
	char DynamicType; // Offset: 0x150 // Size: 0x01
	bool Exclude; // Offset: 0x151 // Size: 0x01
	char pad_0x152[0x2]; // Offset: 0x152 // Size: 0x02
	IntProperty SortOrder; // Offset: 0x154 // Size: 0x04
	struct TArray<StrProperty> ReferencedByBlockIDs; // Offset: 0x158 // Size: 0x10
	char pad_0x168[0x1c8]; // Offset: 0x168 // Size: 0x1c8

	// Functions

	// Object Name: Function BlockyLuaCore.PresetDesc.NameContainsString
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool NameContainsString(StrProperty filter); // Offset: 0x1062ec894 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function BlockyLuaCore.PresetDesc.IsNameEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsNameEmpty(); // Offset: 0x1062ec870 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.PresetDesc.IsCodeNameEmpty
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCodeNameEmpty(); // Offset: 0x1062ec84c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.PresetDesc.HasIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasIcon(); // Offset: 0x1062ec828 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.PresetDesc.GetType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FType GetType(); // Offset: 0x1062ec80c // Return & Params: Num(1) Size(0x70)

	// Object Name: Function BlockyLuaCore.PresetDesc.GetPresetValidityDurationValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetPresetValidityDurationValue(); // Offset: 0x1062ec7d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BlockyLuaCore.PresetDesc.GetLocaleName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetLocaleName(); // Offset: 0x1062ec774 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLuaCore.PrimitiveExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UPrimitiveExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.GetValueType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class EBlockyValueType GetValueType(struct FBlockyLuaHandle ptr); // Offset: 0x1062ed428 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.GetValueString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetValueString(struct FBlockyLuaHandle ptr, StrProperty& str); // Offset: 0x1062ed34c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt8
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_UInt8(IntProperty Value); // Offset: 0x1062ed2d0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_UInt64(struct FBlockyLuaHandle Value); // Offset: 0x1062ed254 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt32
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_UInt32(IntProperty Value); // Offset: 0x1062ed1d8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt16
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_UInt16(IntProperty Value); // Offset: 0x1062ed15c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Str
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Str(StrProperty Value); // Offset: 0x1062ed0c0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int8
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Int8(IntProperty Value); // Offset: 0x1062ed044 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Int64(struct FBlockyLuaHandle Value); // Offset: 0x1062ecfc8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int32
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Int32(IntProperty Value); // Offset: 0x1062ecf4c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int16
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Int16(IntProperty Value); // Offset: 0x1062eced0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Float
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Float(float Value); // Offset: 0x1062ece54 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Double
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Double(struct FBlockyLuaHandle Value); // Offset: 0x1062ecdd8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Bool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreatePrimitiveExpression_Bool(bool Value); // Offset: 0x1062ecd54 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BlockyLuaCore.PrimitiveExpression.Clear
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void Clear(struct FBlockyLuaHandle ptr); // Offset: 0x1062ecce0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.RepeatFunction
// Size: 0x768 // Inherited bytes: 0x6c8
struct URepeatFunction : UCallFunction {
	// Fields
	char pad_0x6C8[0xa0]; // Offset: 0x6c8 // Size: 0xa0
};

// Object Name: Class BlockyLuaCore.Return
// Size: 0x430 // Inherited bytes: 0x430
struct UReturn : UExecuteable {
};

// Object Name: Class BlockyLuaCore.SelectionData
// Size: 0x50 // Inherited bytes: 0x28
struct USelectionData : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
	struct UBlockBase* bLock; // Offset: 0x40 // Size: 0x08
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08

	// Functions

	// Object Name: Function BlockyLuaCore.SelectionData.IsCurrentSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCurrentSlot(); // Offset: 0x1062edbc8 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class BlockyLuaCore.SelfReferenceExpression
// Size: 0x28 // Inherited bytes: 0x28
struct USelfReferenceExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.SelfReferenceExpression.CreateSelfReferenceExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateSelfReferenceExpression(); // Offset: 0x1062edd64 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.SetArrayElement
// Size: 0x770 // Inherited bytes: 0x430
struct USetArrayElement : UExecuteable {
	// Fields
	char pad_0x430[0x340]; // Offset: 0x430 // Size: 0x340
};

// Object Name: Class BlockyLuaCore.SetVar
// Size: 0x770 // Inherited bytes: 0x430
struct USetVar : UExecuteable {
	// Fields
	char pad_0x430[0x330]; // Offset: 0x430 // Size: 0x330
	struct UBrushData* IconBrush; // Offset: 0x760 // Size: 0x08
	struct UBrushData* SelectionBG; // Offset: 0x768 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.SnippetExpression
// Size: 0x28 // Inherited bytes: 0x28
struct USnippetExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.SnippetExpression.GetSnippetString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSnippetString(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee1d0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.SnippetExpression.GetParameters
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetParameters(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee12c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.SnippetExpression.CreateDefaultValueExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateDefaultValueExpression(); // Offset: 0x1062ee0f8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.StatementBase
// Size: 0x28 // Inherited bytes: 0x28
struct UStatementBase : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BlockyLuaCore.StatementBase.SetNextExpr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetNextExpr(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle nextExpr); // Offset: 0x1062ee580 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.StatementBase.ReleaseExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReleaseExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee50c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.StatementBase.GetNextExpr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetNextExpr(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee490 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.StatementBase.CreateStatementBase
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateStatementBase(); // Offset: 0x1062ee45c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.VariableDeclaration
// Size: 0x28 // Inherited bytes: 0x28
struct UVariableDeclaration : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.VariableDeclaration.SetVisitMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetVisitMode(struct FBlockyLuaHandle ptr, enum class EBlockyVisitMode visitMode); // Offset: 0x1062eed18 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.SetVariableName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetVariableName(struct FBlockyLuaHandle ptr, StrProperty Name); // Offset: 0x1062eebfc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.SetInitValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetInitValue(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle initValue); // Offset: 0x1062eeb50 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.SetComment
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetComment(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Comment); // Offset: 0x1062eeaa4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.GetVisitMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class EBlockyVisitMode GetVisitMode(struct FBlockyLuaHandle ptr); // Offset: 0x1062eea28 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.GetVariableName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetVariableName(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee984 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.GetInitValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetInitValue(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee908 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.GetComment
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetComment(struct FBlockyLuaHandle ptr); // Offset: 0x1062ee88c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.VariableDeclaration.CreateVariableDeclaration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateVariableDeclaration(); // Offset: 0x1062ee858 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.AssignOperatorStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UAssignOperatorStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.AssignOperatorStatement.SetTo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTo(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle To); // Offset: 0x1062ef320 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.AssignOperatorStatement.SetFrom
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetFrom(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle From); // Offset: 0x1062ef274 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.AssignOperatorStatement.GetTo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetTo(struct FBlockyLuaHandle ptr); // Offset: 0x1062ef1f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.AssignOperatorStatement.GetFrom
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetFrom(struct FBlockyLuaHandle ptr); // Offset: 0x1062ef17c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.AssignOperatorStatement.CreateAssignOperatorStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateAssignOperatorStatement(); // Offset: 0x1062ef148 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ExecuteSequenceStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UExecuteSequenceStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ExecuteSequenceStatement.SetSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetSequence(struct FBlockyLuaHandle ptr, struct TArray<struct FBlockyLuaHandle> Sequence); // Offset: 0x1062ef714 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ExecuteSequenceStatement.GetSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetSequence(struct FBlockyLuaHandle ptr); // Offset: 0x1062ef670 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ExecuteSequenceStatement.CreateExecuteSequenceStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateExecuteSequenceStatement(); // Offset: 0x1062ef63c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ReturnStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UReturnStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ReturnStatement.CreateReturnStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateReturnStatement(); // Offset: 0x1062efa18 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.IfStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UIfStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.IfStatement.SetTrueStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTrueStatement(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle trueStatement); // Offset: 0x1062f006c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IfStatement.SetFalseStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetFalseStatement(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle falseStatement); // Offset: 0x1062effc0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IfStatement.SetElseIfs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetElseIfs(struct FBlockyLuaHandle ptr, struct TArray<struct FBlockyLuaHandle> elseIfs); // Offset: 0x1062efea4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.IfStatement.SetCondition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetCondition(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Condition); // Offset: 0x1062efdf8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IfStatement.GetTrueStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetTrueStatement(struct FBlockyLuaHandle ptr); // Offset: 0x1062efd7c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IfStatement.GetFalseStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetFalseStatement(struct FBlockyLuaHandle ptr); // Offset: 0x1062efd00 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IfStatement.GetElseIfs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetElseIfs(struct FBlockyLuaHandle ptr); // Offset: 0x1062efc5c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.IfStatement.GetCondition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetCondition(struct FBlockyLuaHandle ptr); // Offset: 0x1062efbe0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.IfStatement.CreateIfStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateIfStatement(); // Offset: 0x1062efbac // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ForLoopStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UForLoopStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ForLoopStatement.SetStepExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetStepExpression(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle stepExpression); // Offset: 0x1062f0a80 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.SetLoopIndexName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopIndexName(struct FBlockyLuaHandle ptr, StrProperty loopIndexName); // Offset: 0x1062f0964 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.SetLoopBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopBody(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle loopBody); // Offset: 0x1062f08b8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.SetEndExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetEndExpression(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle endExpression); // Offset: 0x1062f080c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.SetBeginExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetBeginExpression(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle beginExpression); // Offset: 0x1062f0760 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.GetStepExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetStepExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062f06e4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.GetLoopIndexName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLoopIndexName(struct FBlockyLuaHandle ptr); // Offset: 0x1062f0640 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.GetLoopBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetLoopBody(struct FBlockyLuaHandle ptr); // Offset: 0x1062f05c4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.GetEndExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetEndExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062f0548 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.GetBeginExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetBeginExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062f04cc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForLoopStatement.CreateForLoopStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateForLoopStatement(); // Offset: 0x1062f0498 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ForeachLoopStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UForeachLoopStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopItemName(struct FBlockyLuaHandle ptr, StrProperty loopIndexName); // Offset: 0x1062f141c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemExp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopItemExp(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle loopItemExp); // Offset: 0x1062f1370 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.SetLoopIndexName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopIndexName(struct FBlockyLuaHandle ptr, StrProperty loopIndexName); // Offset: 0x1062f1254 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.SetLoopBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopBody(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle loopBody); // Offset: 0x1062f11a8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLoopItemName(struct FBlockyLuaHandle ptr); // Offset: 0x1062f1104 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemExp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetLoopItemExp(struct FBlockyLuaHandle ptr); // Offset: 0x1062f1088 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.GetLoopIndexName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetLoopIndexName(struct FBlockyLuaHandle ptr); // Offset: 0x1062f0fe4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.GetLoopBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetLoopBody(struct FBlockyLuaHandle ptr); // Offset: 0x1062f0f68 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ForeachLoopStatement.CreateForeachLoopStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateForeachLoopStatement(); // Offset: 0x1062f0f34 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.WhileLoopStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UWhileLoopStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.WhileLoopStatement.SetLoopBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLoopBody(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle loopBody); // Offset: 0x1062f1a90 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.WhileLoopStatement.SetCondition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetCondition(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Condition); // Offset: 0x1062f19e4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.WhileLoopStatement.GetLoopBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetLoopBody(struct FBlockyLuaHandle ptr); // Offset: 0x1062f1968 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.WhileLoopStatement.GetCondition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetCondition(struct FBlockyLuaHandle ptr); // Offset: 0x1062f18ec // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.WhileLoopStatement.CreateWhileLoopStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateWhileLoopStatement(); // Offset: 0x1062f18b8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ContinueStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UContinueStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ContinueStatement.CreateContinueStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateContinueStatement(); // Offset: 0x1062f1dac // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.BreakStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UBreakStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.BreakStatement.CreateBreakStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateBreakStatement(); // Offset: 0x1062f1f40 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.CommentStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UCommentStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.CommentStatement.SetNewLine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetNewLine(struct FBlockyLuaHandle ptr, bool newLine); // Offset: 0x1062f2344 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.CommentStatement.SetCommentString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetCommentString(struct FBlockyLuaHandle ptr, StrProperty commentString); // Offset: 0x1062f2228 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CommentStatement.GetNewLine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetNewLine(struct FBlockyLuaHandle ptr); // Offset: 0x1062f21ac // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.CommentStatement.GetCommentString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetCommentString(struct FBlockyLuaHandle ptr); // Offset: 0x1062f2108 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.CommentStatement.CreateCommentStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateCommentStatement(); // Offset: 0x1062f20d4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.ExpressionStatement
// Size: 0x28 // Inherited bytes: 0x28
struct UExpressionStatement : UStatementBase {
	// Functions

	// Object Name: Function BlockyLuaCore.ExpressionStatement.SetNextStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetNextStatement(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle nextStatement); // Offset: 0x1062f285c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ExpressionStatement.SetExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetExpression(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle expression); // Offset: 0x1062f27b0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ExpressionStatement.GetNextStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetNextStatement(struct FBlockyLuaHandle ptr); // Offset: 0x1062f2734 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ExpressionStatement.GetExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetExpression(struct FBlockyLuaHandle ptr); // Offset: 0x1062f26b8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.ExpressionStatement.CreateExpressionStatement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateExpressionStatement(); // Offset: 0x1062f2684 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.StatementsData
// Size: 0x28 // Inherited bytes: 0x28
struct UStatementsData : UBlueprintFunctionLibrary {
};

// Object Name: Class BlockyLuaCore.StringAppend
// Size: 0x540 // Inherited bytes: 0x200
struct UStringAppend : UBlockBase {
	// Fields
	char pad_0x200[0x340]; // Offset: 0x200 // Size: 0x340
};

// Object Name: Class BlockyLuaCore.StringAppendExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UStringAppendExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.StringAppendExpression.SetRight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetRight(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062f6fdc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.StringAppendExpression.SetLeft
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetLeft(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062f6f30 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.StringAppendExpression.SetExtras
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetExtras(struct FBlockyLuaHandle ptr, struct TArray<struct FBlockyLuaHandle> Value); // Offset: 0x1062f6e14 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.StringAppendExpression.GetRight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetRight(struct FBlockyLuaHandle ptr); // Offset: 0x1062f6d98 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.StringAppendExpression.GetLeft
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetLeft(struct FBlockyLuaHandle ptr); // Offset: 0x1062f6d1c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.StringAppendExpression.GetExtras
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FBlockyLuaHandle> GetExtras(struct FBlockyLuaHandle ptr); // Offset: 0x1062f6c78 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.StringAppendExpression.CreateStringAppendExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateStringAppendExpression(); // Offset: 0x1062f6c44 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.SubGraphCommandData
// Size: 0x90 // Inherited bytes: 0x30
struct USubGraphCommandData : UBlockyCommandData {
	// Fields
	StrProperty Name; // Offset: 0x30 // Size: 0x10
	StrProperty Type; // Offset: 0x40 // Size: 0x10
	StrProperty SrcName; // Offset: 0x50 // Size: 0x10
	struct TArray<IntProperty> InCallStackPos; // Offset: 0x60 // Size: 0x10
	IntProperty IdxInSubBLocky; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct UBlockyGraph* OpGraph; // Offset: 0x78 // Size: 0x08
	StrProperty SavedName; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class BlockyLuaCore.TemplateCommandData
// Size: 0x58 // Inherited bytes: 0x30
struct UTemplateCommandData : UBlockyCommandData {
	// Fields
	struct UBlockyGraph* Template; // Offset: 0x30 // Size: 0x08
	StrProperty CreatedGraphName; // Offset: 0x38 // Size: 0x10
	StrProperty CreatedGraphType; // Offset: 0x48 // Size: 0x10
};

// Object Name: Class BlockyLuaCore.TypeConvertDesc
// Size: 0x68 // Inherited bytes: 0x28
struct UTypeConvertDesc : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	StrProperty HotfixUserData; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x20]; // Offset: 0x40 // Size: 0x20
	struct UFunctionDesc* FunctionDesc; // Offset: 0x60 // Size: 0x08
};

// Object Name: Class BlockyLuaCore.TypeFilter
// Size: 0x398 // Inherited bytes: 0x200
struct UTypeFilter : UBlockBase {
	// Fields
	char pad_0x200[0x198]; // Offset: 0x200 // Size: 0x198
};

// Object Name: Class BlockyLuaCore.TypeReference
// Size: 0x28 // Inherited bytes: 0x28
struct UTypeReference : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function BlockyLuaCore.TypeReference.SetTypeName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTypeName(struct FBlockyLuaHandle Self, StrProperty Name); // Offset: 0x1062f7c1c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.TypeReference.ReleaseTypeReference
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReleaseTypeReference(struct FBlockyLuaHandle Self); // Offset: 0x1062f7ba8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.TypeReference.GetTypeName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetTypeName(struct FBlockyLuaHandle Self); // Offset: 0x1062f7b04 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.TypeReference.FindClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle FindClass(StrProperty Name); // Offset: 0x1062f7a20 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.TypeReference.CreateTypeReference3
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateTypeReference3(struct FBlockyLuaHandle klass, IntProperty numOfPointer, bool isRefer); // Offset: 0x1062f7928 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function BlockyLuaCore.TypeReference.CreateTypeReference
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateTypeReference(); // Offset: 0x1062f78f4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BlockyLuaCore.TypeReference.AsStub
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FBlockyLuaStub AsStub(struct FBlockyLuaHandle ptr); // Offset: 0x1062f7840 // Return & Params: Num(2) Size(0x88)
};

// Object Name: Class BlockyLuaCore.TypeString
// Size: 0x200 // Inherited bytes: 0x200
struct UTypeString : UBlockBase {
};

// Object Name: Class BlockyLuaCore.UnaryOperatorExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UUnaryOperatorExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.UnaryOperatorExpression.SetValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetValue(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Value); // Offset: 0x1062f83a0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.UnaryOperatorExpression.SetOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOperation(struct FBlockyLuaHandle ptr, enum class EBlockyUnaryOperation Op); // Offset: 0x1062f82f0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.UnaryOperatorExpression.GetValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetValue(struct FBlockyLuaHandle ptr); // Offset: 0x1062f8274 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.UnaryOperatorExpression.GetOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class EBlockyUnaryOperation GetOperation(struct FBlockyLuaHandle ptr); // Offset: 0x1062f81f8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BlockyLuaCore.UnaryOperatorExpression.CreateUnaryOperatorExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateUnaryOperatorExpression(); // Offset: 0x1062f81c4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class BlockyLuaCore.VarDefiner
// Size: 0x188 // Inherited bytes: 0x28
struct UVarDefiner : UObject {
	// Fields
	struct FType BPType; // Offset: 0x28 // Size: 0x70
	StrProperty HotfixUserData; // Offset: 0x98 // Size: 0x10
	char pad_0xA8[0x10]; // Offset: 0xa8 // Size: 0x10
	MapProperty ShowNameMap; // Offset: 0xb8 // Size: 0x50
	StrProperty ShowIcon; // Offset: 0x108 // Size: 0x10
	StrProperty ShowIconSelected; // Offset: 0x118 // Size: 0x10
	StrProperty DefaultValueString; // Offset: 0x128 // Size: 0x10
	bool bHideInCustom; // Offset: 0x138 // Size: 0x01
	enum class EBlockyVarInitType InitType; // Offset: 0x139 // Size: 0x01
	char pad_0x13A[0x6]; // Offset: 0x13a // Size: 0x06
	struct TArray<StrProperty> ExcludePresetCategories; // Offset: 0x140 // Size: 0x10
	struct TArray<StrProperty> ExcludePresetCodeNames; // Offset: 0x150 // Size: 0x10
	char pad_0x160[0x28]; // Offset: 0x160 // Size: 0x28

	// Functions

	// Object Name: Function BlockyLuaCore.VarDefiner.SetType
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	void SetType(struct FType& Value); // Offset: 0x1062f89a8 // Return & Params: Num(1) Size(0x70)

	// Object Name: Function BlockyLuaCore.VarDefiner.GetVarTypeEnum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EBlockyVariableType GetVarTypeEnum(); // Offset: 0x1062f8974 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.VarDefiner.GetTypeEnum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EBlockyListItemType GetTypeEnum(); // Offset: 0x1062f8940 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BlockyLuaCore.VarDefiner.GetType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FType GetType(); // Offset: 0x1062f8908 // Return & Params: Num(1) Size(0x70)

	// Object Name: Function BlockyLuaCore.VarDefiner.GetFirstShowName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetFirstShowName(); // Offset: 0x1062f88a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BlockyLuaCore.VarDefiner.GetCurrentLocateShowName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetCurrentLocateShowName(); // Offset: 0x1062f8840 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class BlockyLuaCore.VariableReferenceExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UVariableReferenceExpression : UExpressionBase {
	// Functions

	// Object Name: Function BlockyLuaCore.VariableReferenceExpression.SetVariableName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetVariableName(struct FBlockyLuaHandle ptr, StrProperty Name); // Offset: 0x1062f9050 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.VariableReferenceExpression.SetHost
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetHost(struct FBlockyLuaHandle ptr, struct FBlockyLuaHandle Host); // Offset: 0x1062f8fa4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.VariableReferenceExpression.GetVariableName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetVariableName(struct FBlockyLuaHandle ptr); // Offset: 0x1062f8f00 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BlockyLuaCore.VariableReferenceExpression.GetHost
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle GetHost(struct FBlockyLuaHandle ptr); // Offset: 0x1062f8e84 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateVariableReferenceExpression2(struct FBlockyLuaHandle Host, StrProperty VariableName); // Offset: 0x1062f8dac // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FBlockyLuaHandle CreateVariableReferenceExpression(StrProperty VariableName); // Offset: 0x1062f8d10 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class BlockyLuaCore.While
// Size: 0x7d8 // Inherited bytes: 0x638
struct UWhile : UExeSequencerBase {
	// Fields
	char pad_0x638[0x198]; // Offset: 0x638 // Size: 0x198
	struct UBrushData* IconBrush; // Offset: 0x7d0 // Size: 0x08
};

