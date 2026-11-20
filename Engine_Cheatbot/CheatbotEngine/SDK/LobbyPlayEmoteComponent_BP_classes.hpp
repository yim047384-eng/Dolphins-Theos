#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C
// Size: 0x652 // Inherited bytes: 0x5e0
struct ULobbyPlayEmoteComponent_BP_C : ULobbyPlayEmoteComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x5e0 // Size: 0x08
	struct ULevelSequencePlayer* LevelSequencePlayer; // Offset: 0x5e8 // Size: 0x08
	struct ALevelSequenceActor* LevelSequenceActor; // Offset: 0x5f0 // Size: 0x08
	struct UUserWidget* levelSequenceMask; // Offset: 0x5f8 // Size: 0x08
	SetProperty stopEmoteArray; // Offset: 0x600 // Size: 0x50
	bool bFreezeEndFrame; // Offset: 0x650 // Size: 0x01
	bool bUseSequenceCamera; // Offset: 0x651 // Size: 0x01

	// Functions

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.OnEquipmentChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnEquipmentChange(IntProperty resID, bool bPutOn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.OnStartLevelSequence
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnStartLevelSequence(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.GetLobbyCamera
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetLobbyCamera(struct ACameraActor*& CameraActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.OnStopLevelSequence
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnStopLevelSequence(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.ChangetoLevelSequenceCamera
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangetoLevelSequenceCamera(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.OnTrackEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnTrackEvent(StrProperty EventData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.PlayCameraEmoteAnim
	// Flags: [Event|Public|BlueprintEvent]
	void PlayCameraEmoteAnim(struct ULevelSequence* CurrentCameraEmoteAnim); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.StopCameraEmoteAnim
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void StopCameraEmoteAnim(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.ShowAvatarForEmote
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void ShowAvatarForEmote(bool Show, bool Force); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.BindEventToCameraSequence
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void BindEventToCameraSequence(struct ULevelSequencePlayer* SeqPlayer); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.ExecuteUbergraph_LobbyPlayEmoteComponent_BP
	// Flags: [None]
	void ExecuteUbergraph_LobbyPlayEmoteComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

