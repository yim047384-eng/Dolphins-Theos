#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptBlueprintGeneratedClass bp_global.bp_global_C
// Size: 0x590 // Inherited bytes: 0x518
struct Abp_global_C : ALuaClassObj {
	// Fields
	struct UScriptContextComponent* Generated_ScriptContext; // Offset: 0x518 // Size: 0x08
	IntProperty GLOBAL_USE_ITEM; // Offset: 0x520 // Size: 0x04
	struct FBP_STRUCT_NATION_SWITCH BP_STRUCT_NATION_SWITCH; // Offset: 0x524 // Size: 0x04
	IntProperty BP_StartUpType; // Offset: 0x528 // Size: 0x04
	IntProperty BP_Share_Platform; // Offset: 0x52c // Size: 0x04
	bool BP_REVIEW_SVR_ENABLE_GM; // Offset: 0x530 // Size: 0x01
	char pad_0x531[0x3]; // Offset: 0x531 // Size: 0x03
	IntProperty BP_Platform; // Offset: 0x534 // Size: 0x04
	bool BP_IsAppleAudit; // Offset: 0x538 // Size: 0x01
	bool BP_IS_EXTERNAL_CHANNEL; // Offset: 0x539 // Size: 0x01
	bool BP_IOS_CHECK; // Offset: 0x53a // Size: 0x01
	char pad_0x53B[0x1]; // Offset: 0x53b // Size: 0x01
	IntProperty BP_GlobalSwitchCameraIndex; // Offset: 0x53c // Size: 0x04
	IntProperty BP_Global_PreviewItemId; // Offset: 0x540 // Size: 0x04
	bool BP_Global_AndroidKey_IsValid; // Offset: 0x544 // Size: 0x01
	bool BP_Global_AdvertiseNeedShowtask; // Offset: 0x545 // Size: 0x01
	char pad_0x546[0x2]; // Offset: 0x546 // Size: 0x02
	StrProperty BP_GEM_REPORT_SUBEVENT; // Offset: 0x548 // Size: 0x10
	StrProperty BP_GEM_REPORT_PARA2; // Offset: 0x558 // Size: 0x10
	StrProperty BP_GEM_REPORT_PARA1; // Offset: 0x568 // Size: 0x10
	bool BP_CHECK_MENU_OPEN_RESULT; // Offset: 0x578 // Size: 0x01
	char pad_0x579[0x3]; // Offset: 0x579 // Size: 0x03
	IntProperty BP_CHECK_MENU_OPEN_ID; // Offset: 0x57c // Size: 0x04
	IntProperty BP_BA_REASON; // Offset: 0x580 // Size: 0x04
	IntProperty BP_BA_BUTTON_TYPE; // Offset: 0x584 // Size: 0x04
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x588 // Size: 0x08

	// Functions

	// Object Name: Function bp_global.bp_global_C.EventShowPlatWXStartup_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventShowPlatWXStartup_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventShowPlatWXStartup
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventShowPlatWXStartup(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventShowPlatQQStartup_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventShowPlatQQStartup_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventShowPlatQQStartup
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventShowPlatQQStartup(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventShowPlatIconTips_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventShowPlatIconTips_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventShowPlatIconTips
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventShowPlatIconTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventSetInfo_Push_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetInfo_Push_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventSetInfo_Push
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSetInfo_Push(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventSendClickGemReport_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSendClickGemReport_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventSendClickGemReport
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSendClickGemReport(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventSendBAReport_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSendBAReport_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventSendBAReport
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventSendBAReport(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventGlobalUseItem_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventGlobalUseItem_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventGlobalUseItem
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventGlobalUseItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventGlobalCloseItemTips_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventGlobalCloseItemTips_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventGlobalCloseItemTips
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventGlobalCloseItemTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventFetchNationSwitch_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventFetchNationSwitch_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventFetchNationSwitch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventFetchNationSwitch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventFetchInfo_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventFetchInfo_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventFetchInfo
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventFetchInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventComMsgBoxSluaClickUrl_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventComMsgBoxSluaClickUrl_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventComMsgBoxSluaClickUrl
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventComMsgBoxSluaClickUrl(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventClickLobbyEventGemReport_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventClickLobbyEventGemReport_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventClickLobbyEventGemReport
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventClickLobbyEventGemReport(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventCheckIfMenuOpen_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventCheckIfMenuOpen_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventCheckIfMenuOpen
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventCheckIfMenuOpen(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventAndroidQuitGame_NoFetch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventAndroidQuitGame_NoFetch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.EventAndroidQuitGame
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventAndroidQuitGame(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function bp_global.bp_global_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

