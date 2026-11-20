#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C
// Size: 0xeb8 // Inherited bytes: 0xca0
struct ABP_PlayerLobbyPawn_C : ASTExtraLobbyCharacter {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xca0 // Size: 0x08
	struct UCameraComponent* Camera; // Offset: 0xca8 // Size: 0x08
	struct UBP_LobbyWeaponManager_C* BP_LobbyWeaponManager; // Offset: 0xcb0 // Size: 0x08
	struct ULobbyPlayEmoteComponent_BP_C* LobbyPlayEmoteComponent_BP; // Offset: 0xcb8 // Size: 0x08
	struct ULobbyWeaponAnimationComponent_C* LobbyWeaponAnimationComponent; // Offset: 0xcc0 // Size: 0x08
	struct USkeletalMeshComponent* WeaponSkeletalMesh; // Offset: 0xcc8 // Size: 0x08
	struct UCharacterAvatarComp2_BP_C* CharacterAvatarComp2_BP; // Offset: 0xcd0 // Size: 0x08
	struct UAELobbyCharAnimListComp* AELobbyCharAnimListComp; // Offset: 0xcd8 // Size: 0x08
	float Timeline_0_Time_DFD4E0A94A64AF2CC7AD9DB7F31CA12E; // Offset: 0xce0 // Size: 0x04
	enum class ETimelineDirection Timeline_0__Direction_DFD4E0A94A64AF2CC7AD9DB7F31CA12E; // Offset: 0xce4 // Size: 0x01
	char pad_0xCE5[0x3]; // Offset: 0xce5 // Size: 0x03
	struct UTimelineComponent* Timeline_1; // Offset: 0xce8 // Size: 0x08
	IntProperty headid; // Offset: 0xcf0 // Size: 0x04
	IntProperty resID; // Offset: 0xcf4 // Size: 0x04
	bool press; // Offset: 0xcf8 // Size: 0x01
	char pad_0xCF9[0x3]; // Offset: 0xcf9 // Size: 0x03
	float LocationX; // Offset: 0xcfc // Size: 0x04
	enum class ETouchIndex FingerIndex; // Offset: 0xd00 // Size: 0x01
	char pad_0xD01[0x3]; // Offset: 0xd01 // Size: 0x03
	IntProperty LobbyPosition; // Offset: 0xd04 // Size: 0x04
	struct ASTExtraWeapon* curEquipingWeapon; // Offset: 0xd08 // Size: 0x08
	MapProperty EmoteItemIDToHandleMap; // Offset: 0xd10 // Size: 0x50
	StrProperty PlayerKey; // Offset: 0xd60 // Size: 0x10
	bool HeadIsVisible; // Offset: 0xd70 // Size: 0x01
	bool canRotate; // Offset: 0xd71 // Size: 0x01
	char pad_0xD72[0x2]; // Offset: 0xd72 // Size: 0x02
	IntProperty LuaID; // Offset: 0xd74 // Size: 0x04
	struct FScriptMulticastDelegate OnPlayAction; // Offset: 0xd78 // Size: 0x10
	struct FScriptMulticastDelegate OnStopAction; // Offset: 0xd88 // Size: 0x10
	struct FScriptMulticastDelegate OnChangeEquipment; // Offset: 0xd98 // Size: 0x10
	struct UBackpackEmoteHandle* CurEmoteHandle; // Offset: 0xda8 // Size: 0x08
	bool bIsEmoteLooping; // Offset: 0xdb0 // Size: 0x01
	char pad_0xDB1[0x3]; // Offset: 0xdb1 // Size: 0x03
	IntProperty CurrentActionID; // Offset: 0xdb4 // Size: 0x04
	bool IsChangingHead; // Offset: 0xdb8 // Size: 0x01
	char pad_0xDB9[0x3]; // Offset: 0xdb9 // Size: 0x03
	IntProperty PlayOnChangingHeadAcionID; // Offset: 0xdbc // Size: 0x04
	IntProperty CurPlayEmoteId; // Offset: 0xdc0 // Size: 0x04
	bool IsPlayingAction; // Offset: 0xdc4 // Size: 0x01
	char pad_0xDC5[0x3]; // Offset: 0xdc5 // Size: 0x03
	float RotateTime; // Offset: 0xdc8 // Size: 0x04
	float TargetRotation; // Offset: 0xdcc // Size: 0x04
	bool StartRotateFlag; // Offset: 0xdd0 // Size: 0x01
	char pad_0xDD1[0x3]; // Offset: 0xdd1 // Size: 0x03
	float ClothAnimDyAlpha; // Offset: 0xdd4 // Size: 0x04
	float CurClothAnimDyAlpha; // Offset: 0xdd8 // Size: 0x04
	float ClothAnimDyAlphaDiff; // Offset: 0xddc // Size: 0x04
	bool isMVPMotion; // Offset: 0xde0 // Size: 0x01
	char pad_0xDE1[0x7]; // Offset: 0xde1 // Size: 0x07
	struct FScriptMulticastDelegate OnchangeGender; // Offset: 0xde8 // Size: 0x10
	bool bEquipingSkateAircraft; // Offset: 0xdf8 // Size: 0x01
	bool isAutoTest; // Offset: 0xdf9 // Size: 0x01
	char pad_0xDFA[0x2]; // Offset: 0xdfa // Size: 0x02
	struct FVector LocationBeforeEmote; // Offset: 0xdfc // Size: 0x0c
	float Inten; // Offset: 0xe08 // Size: 0x04
	char pad_0xE0C[0x4]; // Offset: 0xe0c // Size: 0x04
	MapProperty DynamicMatClothMap; // Offset: 0xe10 // Size: 0x50
	float WindSpeed_Editor; // Offset: 0xe60 // Size: 0x04
	float WindStrength_Editor; // Offset: 0xe64 // Size: 0x04
	float WindRadius_Editor; // Offset: 0xe68 // Size: 0x04
	char pad_0xE6C[0x4]; // Offset: 0xe6c // Size: 0x04
	struct UCurveFloat* WindSpeed; // Offset: 0xe70 // Size: 0x08
	float AccumelateWindTime; // Offset: 0xe78 // Size: 0x04
	char pad_0xE7C[0x4]; // Offset: 0xe7c // Size: 0x04
	struct FScriptMulticastDelegate OnSceneType2Change; // Offset: 0xe80 // Size: 0x10
	IntProperty SceneType2; // Offset: 0xe90 // Size: 0x04
	bool NeedLookAtCam; // Offset: 0xe94 // Size: 0x01
	char pad_0xE95[0x3]; // Offset: 0xe95 // Size: 0x03
	struct FScriptMulticastDelegate OnPreChangeEquip; // Offset: 0xe98 // Size: 0x10
	bool bIgnoreDragRotation; // Offset: 0xea8 // Size: 0x01
	char pad_0xEA9[0x7]; // Offset: 0xea9 // Size: 0x07
	struct UAnimInstance* LobbyFootLockABP; // Offset: 0xeb0 // Size: 0x08

	// Functions

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateCameraLocation
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateCameraLocation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCompRotate
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetCompRotate(struct USceneComponent* RotateComp, float Rotate); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAddCharacterWeaponAnimListHandle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetAddCharacterWeaponAnimListHandle(struct TArray<struct FLobbyCharacterWeaponAnimData>& addAnimData); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponPendant
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CharEquipWeaponPendant(IntProperty WeaponId, enum class EWeaponPendantSocketType PendantSocketType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAllAssetLoadFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void WeaponAllAssetLoadFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CharUnEquipWeaponByResId(IntProperty resID, struct FName SocketName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CharUnEquipExtraWeapon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetForceUseDefaultIdle(bool Force); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateClothInten(float leten); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateClothMatParam(float RotateSpeed); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StopActionCamera(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RotateOnTickInternal(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurrentActionID(IntProperty& ActionID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnAvatarAllMeshLoaded(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TryRotateAvatar(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetAvatarVisibleForEmote(bool Visible); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RequestWeaponDIYData(StrProperty InPlayerUID, IntProperty WeaponAvatarID, IntProperty InDIYPlanID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetIsMVPMotion(bool isMVPMotion); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitDefaultAvatarByResID(IntProperty AGender, IntProperty Head, IntProperty hair); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetClothAnimDyAlphaInst(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetClothAnimDyAlphaGrad(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetClothAnimDyAlpha(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RotateOnTick(float RotateTime, float TargetRotation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnEndActionHandle(IntProperty ActionID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPlayActionHandle(IntProperty ActionID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetConflictRuleEnable(bool bEnableConflictRule); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PutOffEquipmentBySlot(enum class EAvatarSlotType SlotType, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayEmoteLoop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShouldCurEmoteShowWeapon(bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleWeaponDisplayWhenPlayEmote(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetAllEquipmentList(struct TArray<IntProperty>& Result); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCanRotate(bool canRotate); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PutOffEquipmentByResID(IntProperty resID, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideWeapon(bool isHide); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CharPlayEmoteByResId(IntProperty EmoteId, StrProperty ExtraInfo); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CharUnEquipWeapon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CharEquipWeaponByResId(IntProperty resID, bool bUse, bool bAsync, struct FName SocketName, struct ASTExtraWeapon*& Weapon); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackEmoteHandle* GetEmoteHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBPID(IntProperty RowName, IntProperty& BPID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten
	// Flags: [BlueprintCallable|BlueprintEvent]
	void TickClothLeten(float From); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_PlayerLobbyPawn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPreChangeEquip__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnPreChangeEquip__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSceneType2Change__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnSceneType2Change__DelegateSignature(IntProperty sceneType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnchangeGender__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnChangeEquipment__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnStopAction__DelegateSignature(IntProperty ActionID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnPlayAction__DelegateSignature(IntProperty ActionID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

