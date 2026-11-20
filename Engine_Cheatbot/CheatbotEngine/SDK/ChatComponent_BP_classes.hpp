#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C
// Size: 0x8b0 // Inherited bytes: 0x510
struct UChatComponent_BP_C : UChatComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x510 // Size: 0x08
	StrProperty addToUIText; // Offset: 0x518 // Size: 0x10
	struct TArray<StrProperty> UITextArray; // Offset: 0x528 // Size: 0x10
	IntProperty FirstIndex; // Offset: 0x538 // Size: 0x04
	char pad_0x53C[0x4]; // Offset: 0x53c // Size: 0x04
	StrProperty currContentMsg; // Offset: 0x540 // Size: 0x10
	bool bInitSetting; // Offset: 0x550 // Size: 0x01
	char pad_0x551[0x7]; // Offset: 0x551 // Size: 0x07
	StrProperty FriendChatStrGid; // Offset: 0x558 // Size: 0x10
	StrProperty FriendChatSenderName; // Offset: 0x568 // Size: 0x10
	StrProperty FriendChatContent; // Offset: 0x578 // Size: 0x10
	bool FriendChatSelfMsg; // Offset: 0x588 // Size: 0x01
	char pad_0x589[0x7]; // Offset: 0x589 // Size: 0x07
	StrProperty FriendInviteStrGid; // Offset: 0x590 // Size: 0x10
	StrProperty FriendInviteSenderName; // Offset: 0x5a0 // Size: 0x10
	StrProperty FriendInviteBattleTextValue; // Offset: 0x5b0 // Size: 0x10
	StrProperty FriendReplyStrGid; // Offset: 0x5c0 // Size: 0x10
	StrProperty FriendReplySenderName; // Offset: 0x5d0 // Size: 0x10
	bool FriendReplyReply; // Offset: 0x5e0 // Size: 0x01
	bool isMe; // Offset: 0x5e1 // Size: 0x01
	char pad_0x5E2[0x2]; // Offset: 0x5e2 // Size: 0x02
	IntProperty UI_MsgID; // Offset: 0x5e4 // Size: 0x04
	StrProperty UI_ItemName; // Offset: 0x5e8 // Size: 0x10
	IntProperty UI_AlternateMsgID; // Offset: 0x5f8 // Size: 0x04
	char pad_0x5FC[0x4]; // Offset: 0x5fc // Size: 0x04
	struct USettingConfig_C* SettingConfig; // Offset: 0x600 // Size: 0x08
	struct TArray<IntProperty> ChatFlagTypeList; // Offset: 0x608 // Size: 0x10
	struct TArray<IntProperty> TmpChatIDList; // Offset: 0x618 // Size: 0x10
	bool bIsInfectMode; // Offset: 0x628 // Size: 0x01
	char pad_0x629[0x7]; // Offset: 0x629 // Size: 0x07
	struct TArray<struct FChatQuickTextInfo> ChatQuikcTextIDList_HumanMenu; // Offset: 0x630 // Size: 0x10
	struct TArray<struct FChatQuickTextInfo> ChatQuikcTextIDList_HumanTurnplate; // Offset: 0x640 // Size: 0x10
	struct TArray<struct FChatQuickTextInfo> ChatQuikcTextIDList_ZombieMenu; // Offset: 0x650 // Size: 0x10
	struct TArray<struct FChatQuickTextInfo> ChatQuikcTextIDList_ZombieTurnplate; // Offset: 0x660 // Size: 0x10
	struct TArray<IntProperty> InfectModePlayerType; // Offset: 0x670 // Size: 0x10
	enum class ECharacterMainType CurInfectModePlayerType; // Offset: 0x680 // Size: 0x01
	char pad_0x681[0x3]; // Offset: 0x681 // Size: 0x03
	struct FQuickChatIDAndAudio QuickChat; // Offset: 0x684 // Size: 0x10
	char pad_0x694[0x4]; // Offset: 0x694 // Size: 0x04
	SetProperty GlobalActorIDList; // Offset: 0x698 // Size: 0x50
	bool bIsVehicleWarMode; // Offset: 0x6e8 // Size: 0x01
	char pad_0x6E9[0x7]; // Offset: 0x6e9 // Size: 0x07
	struct TArray<struct FChatQuickTextInfo> ChatQuikcTextIDList_VWMenu; // Offset: 0x6f0 // Size: 0x10
	struct TArray<struct FChatQuickTextInfo> ChatQuikcTextIDList_VWTurnplate; // Offset: 0x700 // Size: 0x10
	IntProperty TraceItemID; // Offset: 0x710 // Size: 0x04
	char pad_0x714[0x4]; // Offset: 0x714 // Size: 0x04
	SetProperty MuteOnGlobal; // Offset: 0x718 // Size: 0x50
	SetProperty MuteMsgOnBluehole; // Offset: 0x768 // Size: 0x50
	struct TArray<IntProperty> SpecialShowDistanceMsgID; // Offset: 0x7b8 // Size: 0x10
	IntProperty MaxShowVoiceDistance; // Offset: 0x7c8 // Size: 0x04
	bool bIsMarkText; // Offset: 0x7cc // Size: 0x01
	char pad_0x7CD[0x3]; // Offset: 0x7cd // Size: 0x03
	StrProperty MarkText; // Offset: 0x7d0 // Size: 0x10
	struct TArray<StrProperty> MarkTextArray; // Offset: 0x7e0 // Size: 0x10
	IntProperty addToUIMsgID; // Offset: 0x7f0 // Size: 0x04
	char pad_0x7F4[0x4]; // Offset: 0x7f4 // Size: 0x04
	MapProperty UIMsgIDMap; // Offset: 0x7f8 // Size: 0x50
	SetProperty CDMsgIDs; // Offset: 0x848 // Size: 0x50
	float CDMsgDuration; // Offset: 0x898 // Size: 0x04
	char pad_0x89C[0x4]; // Offset: 0x89c // Size: 0x04
	struct TArray<struct FChatQuickTextInfo> NewVar_1; // Offset: 0x8a0 // Size: 0x10

	// Functions

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.GetIsForbidCustomChat
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetIsForbidCustomChat(bool& bIsForbid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.PlayAutoLanguageMsg
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayAutoLanguageMsg(IntProperty ActorId, IntProperty MsgID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.CheckCDMsgs
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckCDMsgs(IntProperty MsgID, bool& bIsShow); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.AddMarkAndPlaySound
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddMarkAndPlaySound(StrProperty Name, StrProperty Content, IntProperty MsgID, IntProperty ItemCount, IntProperty ItemId, StrProperty PlayerKeyString, bool bIsMe, bool PlaySound, bool ShowChat, float Distance); // Offset: 0x1048d7660 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUIInner
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddOneMarkToUIInner(bool bIsMe, StrProperty TextMsg); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.IsActorInGlobal
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsActorInGlobal(IntProperty ActorId, bool& IsExist); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.CheckIsAddReplyBtn
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckIsAddReplyBtn(IntProperty MsgID, StrProperty PlayerName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.GetSpecialDistanceString
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetSpecialDistanceString(StrProperty SendPlayerName, struct FText& DistanceText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.DistanceToString
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void DistanceToString(IntProperty Distance, IntProperty MsgID, StrProperty PlayerName, struct FText& DistanceText); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.GetActorNameByID
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetActorNameByID(IntProperty ActorId, StrProperty& actorName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.GetLocalText
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetLocalText(IntProperty MsgID, IntProperty ItemId, StrProperty PlayerKeyString, IntProperty Distance, StrProperty PlayerName, IntProperty ItemCount, StrProperty& ContentMsg); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x48)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.LoadVehicleModeQuickMsg
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadVehicleModeQuickMsg(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.IsVehicleWarMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsVehicleWarMode(bool& IsVehicleWarMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.InitActorIDList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitActorIDList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.LoadInfectModeQuickMsg
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadInfectModeQuickMsg(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.IsInfectMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsInfectMode(bool& IsInfectMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.InitChatFlagList
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitChatFlagList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.SetTurnplateQuickChatList
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetTurnplateQuickChatList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.GetActorBankByID
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetActorBankByID(IntProperty ActorId, StrProperty& BankName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.SwitchActorAudio
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchActorAudio(IntProperty ActorId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadSingleAudio(IntProperty chatTextID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadAllAudio(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CreateAudio(struct UObject* audio, IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetQuickChatList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitFromSetting(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddOneMsgToUIInner(bool isMe); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.PlaySound
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PlaySound(IntProperty MsgID, IntProperty ActorId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.AddToArray
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddToArray(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1
	// Flags: [Event|Public|BlueprintEvent]
	void AddOneMsgToUI1(StrProperty Name, StrProperty Content, IntProperty MsgID, IntProperty audioID, IntProperty ItemId, StrProperty PlayerKeyString, bool isMe, bool PlaySound, bool ShowChat, float Distance); // Offset: 0x1048d7660 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat
	// Flags: [Event|Public|BlueprintEvent]
	void NotifyFriendChat(StrProperty str_gid, StrProperty sender_name, StrProperty chat_content, bool self_msg); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void NotifyFriendInvite(StrProperty str_gid, StrProperty sender_name); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void NotifyFriendReplyInvite(StrProperty str_gid, StrProperty sender_name, bool bReply); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void CloseChatHistoryList(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UpdateQuickItemText(IntProperty MsgID, IntProperty resID, IntProperty alternateMsgID, IntProperty ItemCount); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.ReportBattleChat
	// Flags: [Event|Public|BlueprintEvent]
	void ReportBattleChat(IntProperty MsgID, StrProperty Msg, IntProperty msgExtraParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUI
	// Flags: [Event|Public|BlueprintEvent]
	void AddOneMarkToUI(StrProperty Name, StrProperty Content, IntProperty MsgID, IntProperty audioID, IntProperty ItemId, StrProperty PlayerKeyString, bool isMe, bool PlaySound, bool ShowChat, float Distance); // Offset: 0x1048d7660 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_ChatComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

