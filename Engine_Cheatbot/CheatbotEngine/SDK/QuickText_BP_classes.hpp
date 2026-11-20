#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass QuickText_BP.QuickText_BP_C
// Size: 0x5ad // Inherited bytes: 0x418
struct UQuickText_BP_C : UUAEUserWidget {
	// Fields
	struct UHorizontalBox* HeightBox; // Offset: 0x418 // Size: 0x08
	struct UIngame_TeamIdx_C* Ingame_TeamIdx; // Offset: 0x420 // Size: 0x08
	struct UUTRichTextBlock* RichTextBlock; // Offset: 0x428 // Size: 0x08
	bool QuickSend; // Offset: 0x430 // Size: 0x01
	char pad_0x431[0x3]; // Offset: 0x431 // Size: 0x03
	IntProperty MsgID; // Offset: 0x434 // Size: 0x04
	bool Invite; // Offset: 0x438 // Size: 0x01
	char pad_0x439[0x7]; // Offset: 0x439 // Size: 0x07
	StrProperty gid; // Offset: 0x440 // Size: 0x10
	StrProperty Name; // Offset: 0x450 // Size: 0x10
	IntProperty MsgType; // Offset: 0x460 // Size: 0x04
	bool bReply; // Offset: 0x464 // Size: 0x01
	char pad_0x465[0x3]; // Offset: 0x465 // Size: 0x03
	struct FScriptMulticastDelegate ED_QuickTextClicked; // Offset: 0x468 // Size: 0x10
	IntProperty RealTextID; // Offset: 0x478 // Size: 0x04
	char pad_0x47C[0x4]; // Offset: 0x47c // Size: 0x04
	struct FQuickSignMsg Msg; // Offset: 0x480 // Size: 0x70
	struct FInGameChatMsg ChatMsg; // Offset: 0x4f0 // Size: 0x90
	bool bIsTopChat; // Offset: 0x580 // Size: 0x01
	char pad_0x581[0x3]; // Offset: 0x581 // Size: 0x03
	struct FMargin TopMargin; // Offset: 0x584 // Size: 0x10
	struct FMargin NormalMargin; // Offset: 0x594 // Size: 0x10
	float LastOpTime; // Offset: 0x5a4 // Size: 0x04
	float OPCD; // Offset: 0x5a8 // Size: 0x04
	bool bIncludeAll; // Offset: 0x5ac // Size: 0x01

	// Functions

	// Object Name: Function QuickText_BP.QuickText_BP_C.SetTopScale
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetTopScale(bool bIsTop); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickText_BP.QuickText_BP_C.SetTeamIdx
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetTeamIdx(bool isMe); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickText_BP.QuickText_BP_C.SetChatMsg
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetChatMsg(struct FInGameChatMsg Msg); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x90)

	// Object Name: Function QuickText_BP.QuickText_BP_C.SetMsg
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetMsg(struct FQuickSignMsg Msg); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x70)

	// Object Name: Function QuickText_BP.QuickText_BP_C.CutMessageActorName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CutMessageActorName(StrProperty Message, StrProperty& ReturnString); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function QuickText_BP.QuickText_BP_C.AddMessageActorName
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddMessageActorName(StrProperty MessageName, IntProperty ActorId, StrProperty& AddedMessage); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function QuickText_BP.QuickText_BP_C.UIMsg_UpdateQuickText
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_UpdateQuickText(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickText_BP.QuickText_BP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function QuickText_BP.QuickText_BP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function QuickText_BP.QuickText_BP_C.ED_QuickTextClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_QuickTextClicked__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

