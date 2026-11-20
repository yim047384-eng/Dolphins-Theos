#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C
// Size: 0x90 // Inherited bytes: 0x90
struct UGlobalUIFunctionLibrary_C : UBlueprintFunctionOverride {
	// Functions

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetImagePixelSize
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetImagePixelSize(StrProperty sPath, struct UObject* __WorldContext, IntProperty& Width, IntProperty& Height); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetLobbyCorpsIcon(IntProperty IconID, struct UObject* __WorldContext, struct UTexture2D*& Value); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsAsyncSetTexture
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsAsyncSetTexture(struct UObject* __WorldContext, bool& IsAsync); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetArenaWeaponLightProperty(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetLobbyDefaultLightProperty(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SwitchLobbyMeshBg(IntProperty BgIdx, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void AddOrUpdateBlendable(struct UCameraComponent* CameraComponent, struct UMaterialInstanceDynamic* MIDynamic, float BlendWeight, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void ProcessAndroidBack(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetSpecialIconWithSprite2DMatchSize(struct UImage* Widget, StrProperty specialIconPath, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetItemTableRow(IntProperty ID, struct UObject* __WorldContext, struct FBP_STRUCT_Item_type& Item); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x188)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SecondsToMMSS(IntProperty Seconds, struct UObject* __WorldContext, StrProperty& FormatTime); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void PlaySoundPopup(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void PlaySoundTab(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetUIRectOffset(struct UObject* __WorldContext, IntProperty& Left, IntProperty& Right); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsConfigGameModeSubType(enum class EGameModeSubType InSubType, struct UObject* Context, struct UObject* __WorldContext, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsConfigGameModeType(enum class EGameModeType InGameModeType, struct UObject* Context, struct UObject* __WorldContext, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetGlobalLuaUI(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct UGlobalLuaWidget_C*& AsGlobal Lua Widget); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetVector4(float X, float Y, float W, float H, struct UObject* __WorldContext, struct FVector4& Vector); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x30)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void InitAmmoDropBox(struct UMeshComponent* MeshComponent, IntProperty LOD, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	StrProperty GetRankIntegralBigIcon(StrProperty Icon, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	StrProperty GetRankIntegralSmallIcon(StrProperty Icon, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	StrProperty GetRankIntegralSubIcon(StrProperty Icon, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetRankInteral(struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevelInfo, struct UImage* ImageIcon, struct UTextBlock* TextBlock_Rank, struct UCanvasPanel* Canvas Panel_Star, struct UImage* Image_Star, struct UTextBlock* TextBlock_Star, bool isSegmentStarOpen, struct UImage* Image_Quality, struct UImage* vx_Image_Quality, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(10) Size(0x130)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetImageFromPath(struct UImage* Image, StrProperty IconPath, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetBrushFromSprite(struct FSlateBrush Brush, StrProperty Path, struct UObject* __WorldContext, struct FSlateBrush& Result); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x188)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadSprite(struct UImage* Image, StrProperty IconPath, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetXieQualityPath(IntProperty Quality, struct UObject* __WorldContext, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBgQualityPath(IntProperty Quality, struct UObject* __WorldContext, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetQualityPath(IntProperty Quality, struct UObject* __WorldContext, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetCornerQuality(struct UImage* Image, IntProperty Quality, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPingColor(float ms, struct UObject* __WorldContext, struct FLinearColor& Color); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetImgWithPath(struct UImage* ImgRef, StrProperty imgPath, bool IsMatchSize, struct UObject* __WorldContext, bool& Success); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x29)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetItemName(StrProperty Name, IntProperty Length, bool chineseSensity, struct UObject* __WorldContext, StrProperty& OutName); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateImageByPath(struct UImage* Image, StrProperty Path, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateImageTint(struct UImage* Image, struct FLinearColor Color, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeBrushColor(struct FSlateBrush Brush, struct FLinearColor Color, struct UObject* __WorldContext, struct FSlateBrush& NewBrush); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x188)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCameraMod(struct UObject* __WorldContext, IntProperty& Mod); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetHumanLightProperty(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetWeaponLightProperty(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetSceneSkyLightProperty(StrProperty lightName, struct FTransform Trans, float Intensity, struct FLinearColor Color, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x60)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetAndroidKeyIsValid(bool bValid, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void numToTimeStrFormat(IntProperty timeNum, struct UObject* __WorldContext, StrProperty& TimeStr); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void numToTimeStr(IntProperty timeNum, struct UObject* __WorldContext, StrProperty& TimeStr); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateNationImage(struct UImage* Image, StrProperty RoleNation, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetScenePointLightProperty(StrProperty lightName, struct FTransform targetTrans, float Intensity, struct FLinearColor Color, IntProperty inverseSquareFalloff, float Radius, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x68)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetSceneDirectionalLightProperty(StrProperty lightName, struct FTransform targetTrans, float Intensity, struct FLinearColor Color, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x60)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetLobbyGlobalBp(struct UObject* __WorldContext, struct UGlobal_Bp_C*& AsGlobal Bp); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetLobbyFrameTexture(IntProperty frameLevel, struct UObject* __WorldContext, struct UTexture2D*& Output); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetNationInfo(StrProperty NationCode, struct UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type& NationInfo); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xa8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetImageWithSpriteRes(StrProperty ResPath, struct UImage* Image, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetNationSwitch(StrProperty Name, struct UObject* __WorldContext, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckIfMenuOpen(IntProperty MenuId, struct UObject* __WorldContext, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetItemTimeS(IntProperty res_id, IntProperty FirstTimeNum, struct UObject* __WorldContext, StrProperty& time_s, bool& is_have_limit); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x21)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void ShowItemTipsByButton(IntProperty ItemId, struct UButton* Button, IntProperty validHours, bool isShowCloseBtn, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void CloseItemTips(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CreateUAEUserWidget(struct UUAEUserWidget* Class, struct UUAEUserWidget* Parent, struct UObject* __WorldContext, struct UUAEUserWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void PlaySoundCloseButton(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShowEffect(struct TArray<struct UWidget*>& Widget, bool IsShow, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsWidgetVisible(struct UWidget* Widget, struct UObject* __WorldContext, bool& Visible); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void PlaySoundClickButton(struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SendBAReport(IntProperty ButtonType, IntProperty Reason, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsWhiteSpace(StrProperty Text, struct UObject* __WorldContext, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetTextLength(StrProperty Text, bool chineseSensity, struct UObject* __WorldContext, IntProperty& Length); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void BoolToVisible(bool Visible, bool collapse, bool isButton, struct UObject* __WorldContext, enum class ESlateVisibility& Visibility); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x11)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsEnglish(StrProperty Text, struct UObject* __WorldContext, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetGlobalData(struct UObject* __WorldContext, struct Abp_global_C*& globalObj); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetLocalizeString(IntProperty ID, StrProperty string1, StrProperty string2, StrProperty string3, struct UObject* __WorldContext, StrProperty& TextValue); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x50)
};

