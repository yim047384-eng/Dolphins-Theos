#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomLayout.CustomizePanelBase.SetScale
struct UCustomizePanelBase_SetScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetPosition
struct UCustomizePanelBase_SetPosition_Params
{
	struct FVector2D                                   Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetOpacityWithClamp
struct UCustomizePanelBase_SetOpacityWithClamp_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinOpacity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxOpacity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetOpacity
struct UCustomizePanelBase_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetMovable
struct UCustomizePanelBase_SetMovable_Params
{
	bool                                               bInMovable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetMaxScale
struct UCustomizePanelBase_SetMaxScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetInvalid
struct UCustomizePanelBase_SetInvalid_Params
{
	bool                                               Invalid;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetInterceptChildInput
struct UCustomizePanelBase_SetInterceptChildInput_Params
{
	bool                                               bInIntercept;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetDrawMargin
struct UCustomizePanelBase_SetDrawMargin_Params
{
	bool                                               bDraw;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetDetectMargin
struct UCustomizePanelBase_SetDetectMargin_Params
{
	struct FMargin                                     InMargin;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetDesireScale
struct UCustomizePanelBase_SetDesireScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetDesirePosition
struct UCustomizePanelBase_SetDesirePosition_Params
{
	struct FVector2D                                   Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.SetDefaultLayoutCode
struct UCustomizePanelBase_SetDefaultLayoutCode_Params
{
	struct FCustomLayoutBlueprintCode                  InCode;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomLayout.CustomizePanelBase.SetDefaultLayoutByPositionAndAnchors
struct UCustomizePanelBase_SetDefaultLayoutByPositionAndAnchors_Params
{
	struct FVector2D                                   InPosition;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FAnchors                                    InAnchors;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomLayout.CustomizePanelBase.SetCustomType
struct UCustomizePanelBase_SetCustomType_Params
{
	int                                                NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.RestoreInBound
struct UCustomizePanelBase_RestoreInBound_Params
{
};

// Function CustomLayout.CustomizePanelBase.ResetMaxScale
struct UCustomizePanelBase_ResetMaxScale_Params
{
};

// Function CustomLayout.CustomizePanelBase.IsOutOfBound
struct UCustomizePanelBase_IsOutOfBound_Params
{
	float                                              InvisibleCheckOffset;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.InitDefaultLayoutData
struct UCustomizePanelBase_InitDefaultLayoutData_Params
{
};

// Function CustomLayout.CustomizePanelBase.GetScale
struct UCustomizePanelBase_GetScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.GetPosition
struct UCustomizePanelBase_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.GetOpacity
struct UCustomizePanelBase_GetOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.GetMovable
struct UCustomizePanelBase_GetMovable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.GetMaxScale
struct UCustomizePanelBase_GetMaxScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.GetLayoutData
struct UCustomizePanelBase_GetLayoutData_Params
{
	struct FUIElemLayoutDetail                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomizePanelBase.GetLayoutCode
struct UCustomizePanelBase_GetLayoutCode_Params
{
	struct FCustomLayoutBlueprintCode                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomizePanelBase.GetInvalid
struct UCustomizePanelBase_GetInvalid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.GetDefaultLayoutData
struct UCustomizePanelBase_GetDefaultLayoutData_Params
{
	struct FUIElemLayoutDetail                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomizePanelBase.GetCustomType
struct UCustomizePanelBase_GetCustomType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.ClampPosition
struct UCustomizePanelBase_ClampPosition_Params
{
	struct FVector2D                                   DesiredPos;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomizePanelBase.ApplyLayoutData
struct UCustomizePanelBase_ApplyLayoutData_Params
{
	struct FUIElemLayoutDetail                         LayoutDetail;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomLayout.CustomizePanelBase.ApplyLayoutCode
struct UCustomizePanelBase_ApplyLayoutCode_Params
{
	struct FCustomLayoutBlueprintCode                  InCode;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomLayout.CustomizePanelBase.ApplyDefaultLayout
struct UCustomizePanelBase_ApplyDefaultLayout_Params
{
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.MakeLayoutDetail
struct UCustomLayoutBlueprintLibrary_MakeLayoutDetail_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EAnchorsType                                       AnchorType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // (Parm, IsPlainOldData)
	struct FUIElemLayoutDetail                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.GenerateUserSettingFromIndexer
struct UCustomLayoutBlueprintLibrary_GenerateUserSettingFromIndexer_Params
{
	class UDynamicCustomIndexer*                       InIndexer;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCustomLayoutUserSetting*                    InOutUserSetting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.CreateCustomLayoutUserSetting
struct UCustomLayoutBlueprintLibrary_CreateCustomLayoutUserSetting_Params
{
	struct FString                                     InSaveSlotName;                                           // (Parm, ZeroConstructor)
	class UCustomLayoutUserSetting*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_TypeToAnchors
struct UCustomLayoutBlueprintLibrary_Conv_TypeToAnchors_Params
{
	EAnchorsType                                       InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnchors                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_TouchStatInfoToLong
struct UCustomLayoutBlueprintLibrary_Conv_TouchStatInfoToLong_Params
{
	struct FTouchStatInfo                              Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_LongToTouchStatInfo
struct UCustomLayoutBlueprintLibrary_Conv_LongToTouchStatInfo_Params
{
	uint64_t                                           Num;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTouchStatInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_LayoutDetailToCode
struct UCustomLayoutBlueprintLibrary_Conv_LayoutDetailToCode_Params
{
	struct FUIElemLayoutDetail                         InDetail;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCustomLayoutBlueprintCode                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_CodeToLayoutDetail
struct UCustomLayoutBlueprintLibrary_Conv_CodeToLayoutDetail_Params
{
	struct FCustomLayoutBlueprintCode                  InCode;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIElemLayoutDetail                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_AnchorsToType
struct UCustomLayoutBlueprintLibrary_Conv_AnchorsToType_Params
{
	struct FAnchors                                    InAnchors;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	EAnchorsType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.UnregisterCustomPanel
struct UCustomLayoutSubsystem_UnregisterCustomPanel_Params
{
	class UCustomPanel*                                InCustomizePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.SetScreenPadding
struct UCustomLayoutSubsystem_SetScreenPadding_Params
{
	struct FMargin                                     InOffset;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.SetEditMode
struct UCustomLayoutSubsystem_SetEditMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.RemoveUserSettingSlot
struct UCustomLayoutSubsystem_RemoveUserSettingSlot_Params
{
	class UCustomLayoutUserSetting*                    InUserSetting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.RegisterCustomPanel
struct UCustomLayoutSubsystem_RegisterCustomPanel_Params
{
	class UCustomPanel*                                InCustomizePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.InsertUserSettingSlot
struct UCustomLayoutSubsystem_InsertUserSettingSlot_Params
{
	class UCustomLayoutUserSetting*                    InUserSetting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.GetUserSettingInSlot
struct UCustomLayoutSubsystem_GetUserSettingInSlot_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UCustomLayoutUserSetting*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.GetRegisteredPanel
struct UCustomLayoutSubsystem_GetRegisteredPanel_Params
{
	int                                                InCustomType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomPanel*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.FlushRegisteredPanelMap
struct UCustomLayoutSubsystem_FlushRegisteredPanelMap_Params
{
};

// Function CustomLayout.CustomLayoutSubsystem.FindLayoutDetail
struct UCustomLayoutSubsystem_FindLayoutDetail_Params
{
	int                                                InCustomType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIElemLayoutDetail                         OutDetail;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutSubsystem.ClearUserSettingSlots
struct UCustomLayoutSubsystem_ClearUserSettingSlots_Params
{
};

// Function CustomLayout.CustomLayoutSubsystem.ClearRegisteredPanelMap
struct UCustomLayoutSubsystem_ClearRegisteredPanelMap_Params
{
};

// Function CustomLayout.CustomLayoutSubsystem.BroadcastCustomLayoutChange
struct UCustomLayoutSubsystem_BroadcastCustomLayoutChange_Params
{
	TArray<int>                                        InCustomTypeList;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomLayout.CustomLayoutSubsystem.AddUserSettingSlot
struct UCustomLayoutSubsystem_AddUserSettingSlot_Params
{
	class UCustomLayoutUserSetting*                    InUserSetting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutUserSetting.UpdateTimeTag
struct UCustomLayoutUserSetting_UpdateTimeTag_Params
{
};

// Function CustomLayout.CustomLayoutUserSetting.SetTimeTagFromUnixTimestamp
struct UCustomLayoutUserSetting_SetTimeTagFromUnixTimestamp_Params
{
	int64_t                                            InUnixTimestamp;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutUserSetting.SetDataByLayoutDetail
struct UCustomLayoutUserSetting_SetDataByLayoutDetail_Params
{
	int                                                InCustomType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIElemLayoutDetail                         InData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomLayout.CustomLayoutUserSetting.RemoveData
struct UCustomLayoutUserSetting_RemoveData_Params
{
	int                                                InCustomType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutUserSetting.GetTimeTagAsUnixTimestamp
struct UCustomLayoutUserSetting_GetTimeTagAsUnixTimestamp_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutUserSetting.GetLayoutCodeCheckSum
struct UCustomLayoutUserSetting_GetLayoutCodeCheckSum_Params
{
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomLayoutUserSetting.GetDataAsLayoutDetail
struct UCustomLayoutUserSetting_GetDataAsLayoutDetail_Params
{
	int                                                InCustomType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIElemLayoutDetail                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomLayout.CustomLayoutUserSetting.GetCustomTypeList
struct UCustomLayoutUserSetting_GetCustomTypeList_Params
{
	TArray<int>                                        OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function CustomLayout.CustomLayoutUserSetting.Contains
struct UCustomLayoutUserSetting_Contains_Params
{
	int                                                InCustomType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.CustomPanel.UpdateCustomLayout
struct UCustomPanel_UpdateCustomLayout_Params
{
};

// Function CustomLayout.CustomPanel.SetEditable
struct UCustomPanel_SetEditable_Params
{
	bool                                               bEditable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.DynamicCustomIndexer.SetupDefaultLayoutForPanel
struct UDynamicCustomIndexer_SetupDefaultLayoutForPanel_Params
{
	int                                                CustomType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomizePanelBase*                         Panel;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.DynamicCustomIndexer.GetIndexer
struct UDynamicCustomIndexer_GetIndexer_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UDynamicCustomIndexer*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.DynamicCustomIndexer.CreateDynamicCustomWidgets
struct UDynamicCustomIndexer_CreateDynamicCustomWidgets_Params
{
	TArray<int>                                        InCustomTypeList;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<int, class UCustomizePanelBase*>              CustomPanelMap;                                           // (Parm, OutParm, ZeroConstructor)
	class UPanelWidget*                                Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIgnoreDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<int, class UCustomizePanelBase*>              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomLayout.PinchDragWidget.SetPinchEnabled
struct UPinchDragWidget_SetPinchEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.PinchDragWidget.SetDragEnabled
struct UPinchDragWidget_SetDragEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.PinchDragWidget.ScreenDeltaToParentLocal
struct UPinchDragWidget_ScreenDeltaToParentLocal_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ScreenDelta;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.PinchDragWidget.Reset
struct UPinchDragWidget_Reset_Params
{
};

// Function CustomLayout.PinchDragWidget.IsPinchEnabled
struct UPinchDragWidget_IsPinchEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.PinchDragWidget.IsFirstPointIndex
struct UPinchDragWidget_IsFirstPointIndex_Params
{
	struct FPointerEvent                               InPointerEvent;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.PinchDragWidget.IsDragEnabled
struct UPinchDragWidget_IsDragEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.SetSelectedImageOriginEffect
struct USettingCustomPanel_SetSelectedImageOriginEffect_Params
{
};

// Function CustomLayout.SettingCustomPanel.SetSelectedImageFlashEffect
struct USettingCustomPanel_SetSelectedImageFlashEffect_Params
{
};

// Function CustomLayout.SettingCustomPanel.SetDisplayState
struct USettingCustomPanel_SetDisplayState_Params
{
	ESCPDisplayState                                   State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.OnTouchPreview
struct USettingCustomPanel_OnTouchPreview_Params
{
};

// Function CustomLayout.SettingCustomPanel.IsSquareFlashEffectAssetName
struct USettingCustomPanel_IsSquareFlashEffectAssetName_Params
{
	struct FString                                     InAssetName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.IsCircleFlashEffectAssetName
struct USettingCustomPanel_IsCircleFlashEffectAssetName_Params
{
	struct FString                                     InAssetName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.GetWidgetByType
struct USettingCustomPanel_GetWidgetByType_Params
{
	class UWidget*                                     RootWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      WidgetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.GetSelectedImage
struct USettingCustomPanel_GetSelectedImage_Params
{
	class UImage*                                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.GetParentWidget
struct USettingCustomPanel_GetParentWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.GetNamedWidgetFromOwner
struct USettingCustomPanel_GetNamedWidgetFromOwner_Params
{
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.GetInvalidImage
struct USettingCustomPanel_GetInvalidImage_Params
{
	class UImage*                                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.GetCenterPositionInScreenSpace
struct USettingCustomPanel_GetCenterPositionInScreenSpace_Params
{
	class UWidget*                                     FullScreenWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.FlashHighlight
struct USettingCustomPanel_FlashHighlight_Params
{
	float                                              Seconds;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomLayout.SettingCustomPanel.ConvertCenterPositionFromScreenSpace
struct USettingCustomPanel_ConvertCenterPositionFromScreenSpace_Params
{
	class UWidget*                                     FullScreenWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   SSPosition;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

