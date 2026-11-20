#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C
// Size: 0x90 // Inherited bytes: 0x90
struct UGlobalBattleUIFunctionLibrary_C : UBlueprintFunctionOverride {
	// Functions

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPlayerTeamColor
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerTeamColor(IntProperty Index, struct UObject* __WorldContext, struct FLinearColor& Result); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAudioIDSignType(struct UObject* WorldContext, IntProperty ActorId, IntProperty SignType, struct UObject* __WorldContext, IntProperty& audioID); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsBankExistByActorID(struct UObject* WorldContext, IntProperty ActorId, struct UObject* __WorldContext, bool& bExist); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetButtomQualityPath(IntProperty Quality, struct UObject* __WorldContext, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBgQualityPath(IntProperty Quality, struct UObject* __WorldContext, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDateSize, struct UObject* __WorldContext, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetDurabilityColorConfig(IntProperty Durability, IntProperty MaxDurability, struct UObject* __WorldContext, struct FSlateColor& OutColor, IntProperty& status); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x3c)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetQuickSignText(struct UObject* WorldContext, IntProperty SignType, IntProperty ActorId, struct UObject* __WorldContext, IntProperty& TextId); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x1c)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetLocalizeVoiceText(StrProperty Key, struct UObject* __WorldContext, StrProperty& Text); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void Get3DTouchSwitch(struct UObject* __WorldContext, bool& TouchSwitch); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void Get3DTouchValue(struct UObject* __WorldContext, float& TouchValue); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsIOSOneGigabyteDevice(struct UObject* __WorldContext, bool& Output); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetLocalizeBattleText(StrProperty Key, struct UObject* __WorldContext, StrProperty& Text); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetReportBugSwitch(struct UObject* __WorldContext, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetSelfieSwitch(struct UObject* __WorldContext, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShowGender(struct UObject* __WorldContext, bool& BShowGender); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsWidgetVisible(struct UWidget* Widget, struct UObject* __WorldContext, bool& Visible); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetTimeByInt(IntProperty second_, struct UObject* __WorldContext, StrProperty& Time); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	void SetImageWithSpriteResInBattle(StrProperty ResPath, struct UImage* Image, struct UObject* __WorldContext); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetNationInfoInBattle(StrProperty NationCode, struct UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type& NationInfo); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xa8)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetNationSwitch(StrProperty Name, struct UObject* __WorldContext, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
	// Flags: [Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CreateUAEUserWidget(struct UUAEUserWidget* Class, struct UUAEUserWidget* Parent, struct UObject* __WorldContext, struct UUAEUserWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
	// Flags: [Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetLocalizeText(StrProperty Key, struct UObject* __WorldContext, StrProperty& Text); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)
};

