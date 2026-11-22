#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTestDragLeave__DelegateSignature
struct UCommon_DragDrop_Item_C_OnTestDragLeave__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTestDragEnter__DelegateSignature
struct UCommon_DragDrop_Item_C_OnTestDragEnter__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchMoved__DelegateSignature
struct UCommon_DragDrop_Item_C_OnItemTouchMoved__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchEnded__DelegateSignature
struct UCommon_DragDrop_Item_C_OnItemTouchEnded__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchStarted__DelegateSignature
struct UCommon_DragDrop_Item_C_OnItemTouchStarted__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragSuccess__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragSuccess__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragClicked__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragClicked__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragReadyToShape__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragReadyToShape__DelegateSignature_Params
{
	class UWidget*                                     generatedWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommon_DragDrop_Data_C*                     dragOperation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCanceled__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragCanceled__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

