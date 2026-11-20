#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass QuickSignComponent_BP.QuickSignComponent_BP_C
// Size: 0xc80 // Inherited bytes: 0xa30
struct UQuickSignComponent_BP_C : UQuickSignComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xa30 // Size: 0x08
	struct UUAEDataTable* QuickSignDataTable; // Offset: 0xa38 // Size: 0x08
	MapProperty QuickTableConfigMap; // Offset: 0xa40 // Size: 0x50
	MapProperty QuickMarkMap; // Offset: 0xa90 // Size: 0x50
	StrProperty TeammateColor; // Offset: 0xae0 // Size: 0x10
	StrProperty SelfColor; // Offset: 0xaf0 // Size: 0x10
	StrProperty ColonChar; // Offset: 0xb00 // Size: 0x10
	StrProperty EndChar; // Offset: 0xb10 // Size: 0x10
	StrProperty SelfName; // Offset: 0xb20 // Size: 0x10
	struct FQuickSignMsg CurrMsg; // Offset: 0xb30 // Size: 0x70
	bool IsPlayVoiceCooldown; // Offset: 0xba0 // Size: 0x01
	char pad_0xBA1[0x7]; // Offset: 0xba1 // Size: 0x07
	MapProperty WeaponAttachmentSocketTextIDMap; // Offset: 0xba8 // Size: 0x50
	MapProperty DefaultAudioMap; // Offset: 0xbf8 // Size: 0x50
	struct FText distanceString; // Offset: 0xc48 // Size: 0x18
	bool isShowDistance; // Offset: 0xc60 // Size: 0x01
	char pad_0xC61[0x7]; // Offset: 0xc61 // Size: 0x07
	struct TArray<enum class EQuickSignSubType> ShowDistanceTypes; // Offset: 0xc68 // Size: 0x10
	IntProperty CurDistance; // Offset: 0xc78 // Size: 0x04
	IntProperty MaxShowVoiceDistance; // Offset: 0xc7c // Size: 0x04

	// Functions

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetBoxMarkText
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetBoxMarkText(StrProperty InputParam, StrProperty& FinalText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetMarkTextShowedInChatBox
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetMarkTextShowedInChatBox(StrProperty PlayerKey, IntProperty OldTextID, StrProperty& Text); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.SpectatorActorMark
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SpectatorActorMark(struct FQuickSignMsg& OriMarkInfo, struct FQuickSignMsg& MarkInfo, struct AActor* Actor); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xe8)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetDistanceText(struct FVector HidPosition, enum class EQuickSignSubType MsgType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAudioEventAndBank(IntProperty audioID, IntProperty ActorId, StrProperty& OutBankName, StrProperty& OutEventName); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetVoiceAudioID(IntProperty MsgType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PickupWrapperActorHandle(StrProperty Param, struct FQuickSignMark& MarkInfo); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xe0)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool GenerateMarkInfo(struct FQuickSignMsg& MsgItem, struct FQuickSignMark& MarkInfo); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x141)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadConfig(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ShowMsgTipsVoice(struct FQuickSignMsg& MsgItem, bool IsSelf, StrProperty PlayerKey); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x88)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PlayVoiceCD(float Duration); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ReportQuickSign(struct FQuickSignMsg& MsgItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x70)

	// Object Name: Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_QuickSignComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

