#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass VideoPlayer_UIBP.VideoPlayer_UIBP_C
// Size: 0x470 // Inherited bytes: 0x418
struct UVideoPlayer_UIBP_C : UUAEUserWidget {
	// Fields
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x418 // Size: 0x08
	struct FScriptMulticastDelegate OnMediaPlayerCompleted; // Offset: 0x420 // Size: 0x10
	struct FScriptMulticastDelegate OnMediaPlayerClosed; // Offset: 0x430 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayerOpenFailed; // Offset: 0x440 // Size: 0x10
	struct FScriptMulticastDelegate OnPlayerOpenSucceeded; // Offset: 0x450 // Size: 0x10
	StrProperty VideoPath; // Offset: 0x460 // Size: 0x10

	// Functions

	// Object Name: Function VideoPlayer_UIBP.VideoPlayer_UIBP_C.UIMsg_PlayVideoWithPath
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_PlayVideoWithPath(StrProperty Path); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function VideoPlayer_UIBP.VideoPlayer_UIBP_C.UIMsg_PlayVideo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UIMsg_PlayVideo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VideoPlayer_UIBP.VideoPlayer_UIBP_C.OnPlayerOpenSucceeded__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnPlayerOpenSucceeded__DelegateSignature(StrProperty FilePath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function VideoPlayer_UIBP.VideoPlayer_UIBP_C.OnPlayerOpenFailed__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnPlayerOpenFailed__DelegateSignature(StrProperty Path); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function VideoPlayer_UIBP.VideoPlayer_UIBP_C.OnMediaPlayerClosed__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnMediaPlayerClosed__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VideoPlayer_UIBP.VideoPlayer_UIBP_C.OnMediaPlayerCompleted__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnMediaPlayerCompleted__DelegateSignature(StrProperty FilePath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)
};

