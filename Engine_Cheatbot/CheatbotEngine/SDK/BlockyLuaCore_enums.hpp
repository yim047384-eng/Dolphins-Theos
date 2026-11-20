#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum BlockyLuaCore.EBlockyToolButtonType
enum class EBlockyToolButtonType : int32 {
	BTBT_None = 0,
	BTBT_Copy = 1,
	BTBT_Eject = 2,
	BTBT_Comment = 4,
	BTBT_Paste = 8,
	BTBT_Disable = 16,
	BTBT_Delete = 32,
	BTBT_Define = 64,
	BTBT_Quote = 128,
	BTBT_Explain = 256,
	BTBT_Clone = 512,
	BTBT_GlobalComment = 1024,
	BTBT_MAX = 1025
};

// Object Name: Enum BlockyLuaCore.EBlockyLogMsgMode
enum class EBlockyLogMsgMode : uint8 {
	Error = 0,
	Warn = 1,
	Info = 2,
	EBlockyLogMsgMode_MAX = 3
};

// Object Name: Enum BlockyLuaCore.EVectorArithmeticOperationType
enum class EVectorArithmeticOperationType : uint8 {
	EVOT_Addition = 0,
	EVOT_Subtraction = 1,
	EVOT_Multiplication = 2,
	EVOT_Division = 3,
	EVOT_MAX = 4
};

// Object Name: Enum BlockyLuaCore.EIntegerArithmeticOperationType
enum class EIntegerArithmeticOperationType : int32 {
	EIOT_None = -1,
	EIOT_Addition = 0,
	EIOT_Subtraction = 1,
	EIOT_Multiplication = 2,
	EIOT_Division = 3,
	EIOT_Remainder = 17,
	EIOT_Exponentiation = 18,
	EIOT_MAX = 19
};

// Object Name: Enum BlockyLuaCore.EArithmeticOperationType
enum class EArithmeticOperationType : int32 {
	EOT_None = -1,
	EOT_Addition = 0,
	EOT_Subtraction = 1,
	EOT_Multiplication = 2,
	EOT_Division = 3,
	EOT_ExactDivision = 19,
	EOT_Remainder = 17,
	EOT_Exponentiation = 18,
	EOT_MAX = 20
};

// Object Name: Enum BlockyLuaCore.EBlockyBinaryOperation
enum class EBlockyBinaryOperation : uint8 {
	EBBO_Add = 0,
	EBBO_Subtract = 1,
	EBBO_Multiply = 2,
	EBBO_Divide = 3,
	EBBO_Modulus = 4,
	EBBO_Inequality = 5,
	EBBO_Equality = 6,
	EBBO_BitwiseOr = 7,
	EBBO_BitwiseAnd = 8,
	EBBO_BitwiseLeftShift = 9,
	EBBO_BitwiseRightShift = 10,
	EBBO_BooleanOr = 11,
	EBBO_BooleanAnd = 12,
	EBBO_LessThan = 13,
	EBBO_LessThanOrEqual = 14,
	EBBO_GreaterThan = 15,
	EBBO_GreaterThanOrEqual = 16,
	EBBO_Remainder = 17,
	EBBO_Exponentiation = 18,
	EBBO_ExactDivision = 19,
	EBBO_MAX = 20
};

// Object Name: Enum BlockyLuaCore.ESlotClickType
enum class ESlotClickType : int32 {
	Default = 0,
	MenuItems = 1,
	InputWithType = 2,
	CustomSelection = 4,
	InputEnumWithIcon = 8,
	InputBoolean = 16,
	Variables = 32,
	Preset = 64,
	TypeFilter = 128,
	TypeString = 256,
	CustomVar = 512,
	All = 4095,
	ESlotClickType_MAX = 4096
};

// Object Name: Enum BlockyLuaCore.EBlockyValueType
enum class EBlockyValueType : uint8 {
	BVT_Boolean = 0,
	BVT_String = 1,
	BVT_Int8 = 2,
	BVT_UInt8 = 3,
	BVT_Int16 = 4,
	BVT_UInt16 = 5,
	BVT_Int32 = 6,
	BVT_UInt32 = 7,
	BVT_Int64 = 8,
	BVT_UInt64 = 9,
	BVT_Float = 10,
	BVT_Double = 11,
	BVT_MAX = 12
};

// Object Name: Enum BlockyLuaCore.EBlockyVisitMode
enum class EBlockyVisitMode : uint8 {
	BVM_Public = 0,
	BVM_Protected = 1,
	BVM_Private = 2,
	BVM_Local = 3,
	BVM_MAX = 4
};

// Object Name: Enum BlockyLuaCore.EBlockyVariableType
enum class EBlockyVariableType : uint8 {
	Var_BLIT_None = 0,
	Var_BLIT_DefineFunc = 1,
	Var_BLIT_Executeable = 2,
	Var_BLIT_Bool = 3,
	Var_BLIT_Int = 4,
	Var_BLIT_Float = 5,
	Var_BLIT_String = 6,
	Var_BLIT_Array = 7,
	Var_BLIT_Class = 8,
	Var_BLIT_CodeType = 9,
	Var_BLIT_Enum = 10,
	Var_BLIT_UInt = 11,
	Var_BLIT_Vector = 12,
	Var_BLIT_Rotator = 13,
	Var_BLIT_Color = 14,
	Var_BLIT_Integer = 15,
	Var_BLIT_Number = 16,
	Var_BLIT_Map = 17,
	Var_BLIT_PODType = 18,
	Var_BLIT_ToStringAll = 19,
	Var_BLIT_ArrayElementAll = 20,
	Var_BLIT_ArrayAll = 21,
	Var_BLIT_ALL = 22,
	Var_BLIT_MAX = 23
};

// Object Name: Enum BlockyLuaCore.EBlockyListItemType
enum class EBlockyListItemType : int32 {
	BLIT_None = 0,
	BLIT_DefineFunc = 1,
	BLIT_Executeable = 2,
	BLIT_Bool = 4,
	BLIT_Int = 8,
	BLIT_Float = 16,
	BLIT_String = 32,
	BLIT_Array = 64,
	BLIT_Class = 128,
	BLIT_CodeType = 256,
	BLIT_Enum = 512,
	BLIT_UInt = 1024,
	BLIT_Vector = 2048,
	BLIT_Rotator = 4096,
	BLIT_Color = 8192,
	BLIT_Map = 16384,
	BLIT_Integer = 1032,
	BLIT_Number = 1048,
	BLIT_PODType = 11324,
	BLIT_ToStringAll = 11580,
	BLIT_ArrayElementAll = 12220,
	BLIT_ArrayAll = 12284,
	BLIT_ALL = 4294967295,
	BLIT_MAX = 4294967296
};

// Object Name: Enum BlockyLuaCore.EBlockyBPToolButtonType
enum class EBlockyBPToolButtonType : uint8 {
	BP_BTBT_None = 0,
	BP_BTBT_Copy = 1,
	BP_BTBT_Eject = 2,
	BP_BTBT_Comment = 3,
	BP_BTBT_Paste = 4,
	BP_BTBT_Disable = 5,
	BP_BTBT_Delete = 6,
	BP_BTBT_Define = 7,
	BP_BTBT_Quote = 8,
	BP_BTBT_Explain = 9,
	BP_BTBT_Clone = 10,
	BP_BTBT_GlobalComment = 11,
	BP_BTBT_MAX = 12
};

// Object Name: Enum BlockyLuaCore.EBlockyBlockTypeGroup
enum class EBlockyBlockTypeGroup : uint8 {
	BBTG_Event = 0,
	BBTG_Action = 1,
	BBTG_Logic = 2,
	BBTG_Value = 3,
	BBTG_Undefine = 4,
	BBTG_Custom = 5,
	BBTG_Max = 6
};

// Object Name: Enum BlockyLuaCore.EBlockyCurrentGraphBlockyNumberType
enum class EBlockyCurrentGraphBlockyNumberType : uint8 {
	BCGBN_Total = 0,
	BCGBN_TotalEvent = 1,
	BCGBN_TotalAction = 2,
	BCGBN_TotalLogic = 3,
	BCGBN_TotalValue = 4,
	BCGBN_TotalVariable = 5,
	BCGBN_TotalCustomEvent = 6,
	BCGBN_TotalCustomAction = 7,
	BCGBN_TotalCustomValue = 8,
	BCGBN_MaxActionBlocksNumInEvent = 9,
	BCGBN_MaxBlocksNumInCustomEvent = 10,
	BCGBN_MaxBlocksNumInCustomAction = 11,
	BCGBN_MaxBlocksNumInCustomValue = 12,
	BCGBN_MAX = 13
};

// Object Name: Enum BlockyLuaCore.EBlockyLuaStubArgType
enum class EBlockyLuaStubArgType : uint8 {
	BlockyLuaStubArgType_Unknown = 0,
	BlockyLuaStubArgType_IntProperty = 1,
	BlockyLuaStubArgType_UInt32Property = 2,
	BlockyLuaStubArgType_Int64Property = 3,
	BlockyLuaStubArgType_UInt64Property = 4,
	BlockyLuaStubArgType_Int16Property = 5,
	BlockyLuaStubArgType_UInt16Property = 6,
	BlockyLuaStubArgType_Int8Property = 7,
	BlockyLuaStubArgType_ByteProperty = 8,
	BlockyLuaStubArgType_FloatProperty = 9,
	BlockyLuaStubArgType_DoubleProperty = 10,
	BlockyLuaStubArgType_BoolProperty = 11,
	BlockyLuaStubArgType_TextProperty = 12,
	BlockyLuaStubArgType_StrProperty = 13,
	BlockyLuaStubArgType_NameProperty = 14,
	BlockyLuaStubArgType_UObjectProperty = 15,
	BlockyLuaStubArgType_Struct = 16,
	BlockyLuaStubArgType_Handle = 17,
	BlockyLuaStubArgType_MAX = 18
};

// Object Name: Enum BlockyLuaCore.EBlockListShowType
enum class EBlockListShowType : uint8 {
	EBLS_All = 0,
	EBLS_Var = 1,
	EBLS_BlackBoard = 2,
	EBLS_CustomVar = 3,
	EBLS_MAX = 4
};

// Object Name: Enum BlockyLuaCore.ECustomBlockType
enum class ECustomBlockType : uint8 {
	ECBT_Action = 0,
	ECBT_Value = 1,
	ECBT_Event = 2,
	ECBT_MAX = 3
};

// Object Name: Enum BlockyLuaCore.EBlockyFunctionArgumentAttribute
enum class EBlockyFunctionArgumentAttribute : uint8 {
	EBFAA_Default = 0,
	EBFAA_In = 1,
	EBFAA_Out = 2,
	EBFAA_Ref = 3,
	EBFAA_MAX = 4
};

// Object Name: Enum BlockyLuaCore.ECompareOperationType
enum class ECompareOperationType : uint8 {
	EOT_Inequality = 5,
	EOT_Equality = 6,
	EOT_GreaterThan = 15,
	EOT_GreaterThanOrEqual = 16,
	EOT_LessThan = 13,
	EOT_LessThanOrEqual = 14
};

// Object Name: Enum BlockyLuaCore.EBlockyAccessType
enum class EBlockyAccessType : uint8 {
	EBAT_Global = 0,
	EBAT_Canvas = 1,
	EBAT_Local = 2,
	EBAT_CallBack = 3,
	EBAT_MAX = 4
};

// Object Name: Enum BlockyLuaCore.EBlockyUnaryOperation
enum class EBlockyUnaryOperation : uint8 {
	EBUO_Negative = 0,
	EBUO_BooleanNot = 1,
	EBUO_BitwiseNot = 2,
	EBUO_MAX = 3
};

// Object Name: Enum BlockyLuaCore.EBlockyVarInitType
enum class EBlockyVarInitType : uint8 {
	EBVIT_InputWithValue = 0,
	EBVIT_Preset = 1,
	EBVIT_ForbidInitialization = 2,
	EBVIT_CustomSelection = 3,
	EBVIT_MAX = 4
};

