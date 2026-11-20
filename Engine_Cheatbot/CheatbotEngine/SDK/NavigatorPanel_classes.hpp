#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass NavigatorPanel.NavigatorPanel_C
// Size: 0x789 // Inherited bytes: 0x5d0
struct UNavigatorPanel_C : UNavigatorPannelUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x5d0 // Size: 0x08
	struct UWidgetAnimation* Anim_FadeOut; // Offset: 0x5d8 // Size: 0x08
	struct UWidgetAnimation* Anim_Guide; // Offset: 0x5e0 // Size: 0x08
	struct UBorder* Border_1; // Offset: 0x5e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Navigator; // Offset: 0x5f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Navigator_NoClip; // Offset: 0x5f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x600 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SafeArea_2; // Offset: 0x608 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Tips; // Offset: 0x610 // Size: 0x08
	struct UImage* CarTips; // Offset: 0x618 // Size: 0x08
	struct UImage* CompassImage; // Offset: 0x620 // Size: 0x08
	struct UImage* DirectionMarker; // Offset: 0x628 // Size: 0x08
	struct UTextBlock* DirectionMarker2_Dist; // Offset: 0x630 // Size: 0x08
	struct UTextBlock* DirectionMarker3_Dist; // Offset: 0x638 // Size: 0x08
	struct UTextBlock* DirectionMarker4_Dist; // Offset: 0x640 // Size: 0x08
	struct UImage* footTips; // Offset: 0x648 // Size: 0x08
	struct UImage* Image_BombingMark; // Offset: 0x650 // Size: 0x08
	struct UImage* Image_CarMark; // Offset: 0x658 // Size: 0x08
	struct UImage* Image_NavigationMark; // Offset: 0x660 // Size: 0x08
	struct UImage* LineVert; // Offset: 0x668 // Size: 0x08
	struct UImage* LineVert2; // Offset: 0x670 // Size: 0x08
	struct UNavigatorPlayerMarkItem_C* NavigatorPlayerMarkItem; // Offset: 0x678 // Size: 0x08
	struct UImage* PlayerMarker1; // Offset: 0x680 // Size: 0x08
	struct UImage* PlayerMarker2; // Offset: 0x688 // Size: 0x08
	struct UInvalidationBox* PlayerMarker2_Group; // Offset: 0x690 // Size: 0x08
	struct UImage* PlayerMarker3; // Offset: 0x698 // Size: 0x08
	struct UInvalidationBox* PlayerMarker3_Group; // Offset: 0x6a0 // Size: 0x08
	struct UImage* PlayerMarker4; // Offset: 0x6a8 // Size: 0x08
	struct UInvalidationBox* PlayerMarker4_Group; // Offset: 0x6b0 // Size: 0x08
	struct UImage* Point; // Offset: 0x6b8 // Size: 0x08
	struct UImage* shotTips; // Offset: 0x6c0 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_3; // Offset: 0x6c8 // Size: 0x08
	enum class ESlateVisibility PlayerMarkerShow; // Offset: 0x6d0 // Size: 0x01
	char pad_0x6D1[0x7]; // Offset: 0x6d1 // Size: 0x07
	struct TArray<struct ASTExtraPlayerState*> TeamMatePlayerStateList; // Offset: 0x6d8 // Size: 0x10
	IntProperty LocalPlayerIndex; // Offset: 0x6e8 // Size: 0x04
	char pad_0x6EC[0x4]; // Offset: 0x6ec // Size: 0x04
	struct TArray<struct ASTExtraPlayerState*> TeamPlayerWithoutLocalPlayer; // Offset: 0x6f0 // Size: 0x10
	bool bNeedUpdateTeamMateInfo; // Offset: 0x700 // Size: 0x01
	char pad_0x701[0x7]; // Offset: 0x701 // Size: 0x07
	struct TArray<struct UWidget*> TeamPlayerMarkerArray; // Offset: 0x708 // Size: 0x10
	struct TArray<struct UBP_VoiceUIObject_C*> VoiceImageObjectList; // Offset: 0x718 // Size: 0x10
	struct UBP_VoiceCheck_C* VoiceCheck; // Offset: 0x728 // Size: 0x08
	float angleToPiexl; // Offset: 0x730 // Size: 0x04
	float nowAngle0PosX; // Offset: 0x734 // Size: 0x04
	struct ABP_STExtraPlayerController_C* PlayerController; // Offset: 0x738 // Size: 0x08
	float HalfShowSize; // Offset: 0x740 // Size: 0x04
	float HalfFullSize; // Offset: 0x744 // Size: 0x04
	float ImageSize; // Offset: 0x748 // Size: 0x04
	char pad_0x74C[0x4]; // Offset: 0x74c // Size: 0x04
	struct TArray<struct UBP_VoiceUIObject_C*> VoiceShowList; // Offset: 0x750 // Size: 0x10
	struct TArray<struct UTextBlock*> TeamPlayerMarkDistArray; // Offset: 0x760 // Size: 0x10
	struct UUIDuplicatedItemPool* MarkItemPool; // Offset: 0x770 // Size: 0x08
	struct TArray<struct UUserWidget*> PlayerIconBPArray; // Offset: 0x778 // Size: 0x10
	bool bShowFadeOutAnim; // Offset: 0x788 // Size: 0x01

	// Functions

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.OnUpdateMinimapStand
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnUpdateMinimapStand(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.RegistEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RegistEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.IsInfectMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsInfectMode(bool& IsInfectMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.AddOnePlayer
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddOnePlayer(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.SetSpecialBigTipsText
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetSpecialBigTipsText(IntProperty Rotation); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.HideAllMarks
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAllMarks(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.TestPlayerController
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void TestPlayerController(bool NewParam, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.Reconnect_ResetUIByPlayerControllerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Reconnect_ResetUIByPlayerControllerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.RemoveSameActorShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RemoveSameActorShow(struct UBP_VoiceUIObject_C* UIObject); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.GetFinalX
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetFinalX(float middlsX, float playerX, float Scale, float& Result); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.UpdateDirection
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateDirection(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.InitCompassWidget
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitCompassWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.SetVoiceChekImageZorder
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetVoiceChekImageZorder(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.SetOneData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetOneData(struct UBP_VoiceUIObject_C* UIObject, struct UBP_VoiceDataSubObject_C* subObject); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.ShowTrigerVoiceIcom
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowTrigerVoiceIcom(struct UBP_VoiceDataSubObject_C* nowObject); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.IsSamVoiceObject
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsSamVoiceObject(struct UBP_VoiceDataSubObject_C* subObject, struct UBP_VoiceUIObject_C* NewParam, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.UpdateVoiceStateOneType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateVoiceStateOneType(struct UBP_VoiceDataObject_C* nowObject); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.GetMinShowTimeObject
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetMinShowTimeObject(struct UBP_VoiceDataSubObject_C* nowSubObject, struct UBP_VoiceUIObject_C*& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.UpdateNewVocieState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateNewVocieState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.UpdateShowVoiceIcon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateShowVoiceIcon(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.GetVoicePostion
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetVoicePostion(IntProperty Index, float Scale, float& resultposx, float& resultposy); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.CreateVoiceCheckObject
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CreateVoiceCheckObject(enum class BP_VoiceCheckType checkType, struct UBP_VoiceUIObject_C*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.InitVoiceImageList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitVoiceImageList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.CreateTipsImage
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CreateTipsImage(enum class BP_VoiceCheckType NewParam, struct UImage*& Image); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.GetPlayerColorByIndex
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerColorByIndex(IntProperty Index, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.InitPlayerMarkerArray
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPlayerMarkerArray(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.RepositionMapMark
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RepositionMapMark(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.BindTeamMapMarkDelegate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BindTeamMapMarkDelegate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.InitPlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.DemoReplayReInit
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DemoReplayReInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.BndEvt__Anim_FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Anim_FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.CallOnPlayerEnterSafeZone
	// Flags: [Event|Protected|BlueprintEvent]
	void CallOnPlayerEnterSafeZone(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.OnRepPlayerState
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnRepPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function NavigatorPanel.NavigatorPanel_C.ExecuteUbergraph_NavigatorPanel
	// Flags: [None]
	void ExecuteUbergraph_NavigatorPanel(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

