#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass QuickMenu_BP.QuickMenu_BP_C
// Size: 0x6f9 // Inherited bytes: 0x488
struct UQuickMenu_BP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Anim_close; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* Anim_open; // Offset: 0x498 // Size: 0x08
	struct UButton* BtnReturnFirstChat; // Offset: 0x4a0 // Size: 0x08
	struct UButton* Button_accept; // Offset: 0x4a8 // Size: 0x08
	struct UButton* Button_ChangeChannel; // Offset: 0x4b0 // Size: 0x08
	struct UButton* Button_PetWatchting; // Offset: 0x4b8 // Size: 0x08
	struct UButton* Button_Refuse; // Offset: 0x4c0 // Size: 0x08
	struct UButton* Button_sendfriend; // Offset: 0x4c8 // Size: 0x08
	struct UButton* Button_SpeechToText; // Offset: 0x4d0 // Size: 0x08
	struct UButton* Button_Teamsend; // Offset: 0x4d8 // Size: 0x08
	struct UButton* Button_Watching; // Offset: 0x4e0 // Size: 0x08
	struct UButton* ButtonFriends; // Offset: 0x4e8 // Size: 0x08
	struct UButton* ButtonRecord; // Offset: 0x4f0 // Size: 0x08
	struct UButton* ButtonRp; // Offset: 0x4f8 // Size: 0x08
	struct UButton* ButtonShortcut; // Offset: 0x500 // Size: 0x08
	struct UCanvasPanel* Canvas_RP; // Offset: 0x508 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_39; // Offset: 0x510 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Forbid; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PetWatchting; // Offset: 0x520 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SpeechToText; // Offset: 0x528 // Size: 0x08
	struct UCheckBox* CheckBox_disturb; // Offset: 0x530 // Size: 0x08
	struct UCustomScrollBox* CustomScrollBox_watchting; // Offset: 0x538 // Size: 0x08
	struct UCustomScrollBox* friendBox; // Offset: 0x540 // Size: 0x08
	struct UCustomScrollBox* friendChatBox; // Offset: 0x548 // Size: 0x08
	struct UEditableText* friendChatMsg; // Offset: 0x550 // Size: 0x08
	struct UWidgetSwitcher* friendPanelSwitch; // Offset: 0x558 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_6; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_14; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_16; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_17; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_83; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_96; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_Line; // Offset: 0x590 // Size: 0x08
	struct UEditableText* InputText; // Offset: 0x598 // Size: 0x08
	struct UButton* InviteClose; // Offset: 0x5a0 // Size: 0x08
	struct UTextBlock* InviteNextBattleText; // Offset: 0x5a8 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_1; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* QuickMenuTIPS; // Offset: 0x5b8 // Size: 0x08
	struct UReddot_Anchor_Item01_C* Reddot_Anchor_Item01; // Offset: 0x5c0 // Size: 0x08
	struct UReuseListMultiSize* ReuseListMultiSize_History; // Offset: 0x5c8 // Size: 0x08
	struct UScrollBox* ScrollBox_1; // Offset: 0x5d0 // Size: 0x08
	struct UCustomScrollBox* ScrollBox_Quick; // Offset: 0x5d8 // Size: 0x08
	struct UCustomScrollBox* ScrollBoxHistory; // Offset: 0x5e0 // Size: 0x08
	struct UWidgetSwitcher* Switcher_BAR; // Offset: 0x5e8 // Size: 0x08
	struct UTextBlock* Text_PetWatchting; // Offset: 0x5f0 // Size: 0x08
	struct UTextBlock* TextBlock_3; // Offset: 0x5f8 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x600 // Size: 0x08
	struct UTextBlock* TextBlock_Lock; // Offset: 0x608 // Size: 0x08
	struct UTextBlock* TextBlock_Team; // Offset: 0x610 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_1; // Offset: 0x618 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x620 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x628 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_3; // Offset: 0x630 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_4; // Offset: 0x638 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_5; // Offset: 0x640 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Friends; // Offset: 0x648 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_PetSpectating; // Offset: 0x650 // Size: 0x08
	bool bInit; // Offset: 0x658 // Size: 0x01
	char pad_0x659[0x7]; // Offset: 0x659 // Size: 0x07
	StrProperty currFriendGid; // Offset: 0x660 // Size: 0x10
	IntProperty currChatType; // Offset: 0x670 // Size: 0x04
	char pad_0x674[0x4]; // Offset: 0x674 // Size: 0x04
	StrProperty InviteNextBattleGid; // Offset: 0x678 // Size: 0x10
	StrProperty InviteNextBattleName; // Offset: 0x688 // Size: 0x10
	struct TArray<struct FBP_STRUCT_Item_type> EmoteItemStructArray; // Offset: 0x698 // Size: 0x10
	struct TArray<struct FBattleItemData> EmoteBackpackItem; // Offset: 0x6a8 // Size: 0x10
	struct UBackpackComponent* BackpackComp; // Offset: 0x6b8 // Size: 0x08
	IntProperty currMsgType; // Offset: 0x6c0 // Size: 0x04
	char pad_0x6C4[0x4]; // Offset: 0x6c4 // Size: 0x04
	struct TArray<struct UQuick_Watchting_Number_BP_C*> SpectatorItemList; // Offset: 0x6c8 // Size: 0x10
	IntProperty CurrentFreeSpectatorItemIndex; // Offset: 0x6d8 // Size: 0x04
	char pad_0x6DC[0x4]; // Offset: 0x6dc // Size: 0x04
	struct TArray<struct UWidgetSwitcher*> ButtonWidgetSwitcher; // Offset: 0x6e0 // Size: 0x10
	struct UUIDuplicatedItemPool* QuickTextPool; // Offset: 0x6f0 // Size: 0x08
	bool bForbidCustomChat; // Offset: 0x6f8 // Size: 0x01

	// Functions

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ClickRefuse
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClickRefuse(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ClickAgree
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClickAgree(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.AddFriendRequest
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddFriendRequest(StrProperty gid, StrProperty PlayerName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.InitUIPool
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitUIPool(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.HandleOnAddOneMark
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnAddOneMark(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.EnableMsgToReset
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnableMsgToReset(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.GetActorNameByID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetActorNameByID(IntProperty Actor ID, StrProperty& actorName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.InitSpectatorTabPage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitSpectatorTabPage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.SetSpectatorNum
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSpectatorNum(IntProperty SpectatorNum); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.GetFreeSpectatorItem
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetFreeSpectatorItem(struct UQuick_Watchting_Number_BP_C*& FreeSpectatorItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.HideAllSpectatorItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAllSpectatorItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.RefreshSpectatorTabPage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshSpectatorTabPage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ClickWaitButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClickWaitButton(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ClickRefuseButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClickRefuseButton(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendLastText
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void MakeFriendLastText(IntProperty MsgType, StrProperty Content, StrProperty& Msg); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ReceiveFriendInvite
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ReceiveFriendInvite(StrProperty gid, StrProperty Name, bool& succ); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.RemindChatBtn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RemindChatBtn(bool ShowRedPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ShowAllUnRead
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowAllUnRead(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ClearUnreadByGid
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearUnreadByGid(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ClickAChatFriend
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClickAChatFriend(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.AddFriendSecondChat
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddFriendSecondChat(StrProperty gid, StrProperty Name, StrProperty Content, bool IsSelf, IntProperty MsgType, bool bReply); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x39)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendChatText
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void MakeFriendChatText(StrProperty Name, StrProperty Content, bool IsSelf, IntProperty MsgType, bool Reply, StrProperty& Text); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x40)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.UpdateFriendSecondChatByGid
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateFriendSecondChatByGid(StrProperty gid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.AddFriendChat
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddFriendChat(StrProperty gid, StrProperty Name, StrProperty Content, bool IsSelf, IntProperty MsgID, bool bReply); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x39)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.AddChatToHistory
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddChatToHistory(StrProperty Message, bool isMe, struct FQuickSignMsg Msg, struct FInGameChatMsg ChatMsg); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x118)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.SelectOpt
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SelectOpt(IntProperty Type); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Watching_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Watching_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonRp_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__ButtonRp_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__CheckBox_disturb_K2Node_ComponentBoundEvent_93_OnCheckBoxComponentStateChanged__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__CheckBox_disturb_K2Node_ComponentBoundEvent_93_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickMenu_BP.QuickMenu_BP_C.ExecuteUbergraph_QuickMenu_BP
	// Flags: [None]
	void ExecuteUbergraph_QuickMenu_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

