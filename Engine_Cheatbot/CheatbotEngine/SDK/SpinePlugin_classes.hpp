#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class SpinePlugin.SpineAtlasAsset
// Size: 0x58 // Inherited bytes: 0x28
struct USpineAtlasAsset : UObject {
	// Fields
	struct TArray<struct UTexture2D*> atlasPages; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
	StrProperty rawData; // Offset: 0x40 // Size: 0x10
	struct FName atlasFileName; // Offset: 0x50 // Size: 0x08
};

// Object Name: Class SpinePlugin.SpineBoneDriverComponent
// Size: 0x3d0 // Inherited bytes: 0x3a0
struct USpineBoneDriverComponent : USceneComponent {
	// Fields
	struct AActor* Target; // Offset: 0x3a0 // Size: 0x08
	StrProperty BoneName; // Offset: 0x3a8 // Size: 0x10
	bool UseComponentTransform; // Offset: 0x3b8 // Size: 0x01
	bool UsePosition; // Offset: 0x3b9 // Size: 0x01
	bool UseRotation; // Offset: 0x3ba // Size: 0x01
	bool UseScale; // Offset: 0x3bb // Size: 0x01
	char pad_0x3BC[0x14]; // Offset: 0x3bc // Size: 0x14

	// Functions

	// Object Name: Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	// Flags: [Final|Native|Protected]
	void BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton); // Offset: 0x10234846c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class SpinePlugin.SpineBoneFollowerComponent
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct USpineBoneFollowerComponent : USceneComponent {
	// Fields
	struct AActor* Target; // Offset: 0x3a0 // Size: 0x08
	StrProperty BoneName; // Offset: 0x3a8 // Size: 0x10
	bool UseComponentTransform; // Offset: 0x3b8 // Size: 0x01
	bool UsePosition; // Offset: 0x3b9 // Size: 0x01
	bool UseRotation; // Offset: 0x3ba // Size: 0x01
	bool UseScale; // Offset: 0x3bb // Size: 0x01
	char pad_0x3BC[0x4]; // Offset: 0x3bc // Size: 0x04
};

// Object Name: Class SpinePlugin.TrackEntry
// Size: 0x90 // Inherited bytes: 0x28
struct UTrackEntry : UObject {
	// Fields
	struct FScriptMulticastDelegate animationStart; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate AnimationInterrupt; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate AnimationEvent; // Offset: 0x48 // Size: 0x10
	struct FScriptMulticastDelegate AnimationComplete; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate animationEnd; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate AnimationDispose; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x8]; // Offset: 0x88 // Size: 0x08

	// Functions

	// Object Name: Function SpinePlugin.TrackEntry.SetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTrackTime(float trackTime); // Offset: 0x102349538 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTrackEnd(float trackEnd); // Offset: 0x1023494bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTimeScale(float TimeScale); // Offset: 0x102349440 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMixTime(float mixTime); // Offset: 0x1023493c4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMixDuration(float mixDuration); // Offset: 0x102349348 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLoop(bool Loop); // Offset: 0x1023492c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpinePlugin.TrackEntry.SetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEventThreshold(float eventThreshold); // Offset: 0x102349248 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDrawOrderThreshold(float drawOrderThreshold); // Offset: 0x1023491cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDelay(float Delay); // Offset: 0x102349150 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAttachmentThreshold(float attachmentThreshold); // Offset: 0x1023490d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimationStart(float animationStart); // Offset: 0x102349058 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimationLast(float animationLast); // Offset: 0x102348fdc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimationEnd(float animationEnd); // Offset: 0x102348f60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.SetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAlpha(float Alpha); // Offset: 0x102348ee4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.isValidAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool isValidAnimation(); // Offset: 0x102348ec0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpinePlugin.TrackEntry.GetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetTrackTime(); // Offset: 0x102348e8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetTrackIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetTrackIndex(); // Offset: 0x102348e58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetTrackEnd(); // Offset: 0x102348e24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetTimeScale(); // Offset: 0x102348df0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetMixTime(); // Offset: 0x102348dbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetMixDuration(); // Offset: 0x102348d88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool GetLoop(); // Offset: 0x102348d54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpinePlugin.TrackEntry.GetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetEventThreshold(); // Offset: 0x102348d20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetDrawOrderThreshold(); // Offset: 0x102348cec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetDelay(); // Offset: 0x102348cb8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAttachmentThreshold(); // Offset: 0x102348c84 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAnimationStart(); // Offset: 0x102348c50 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.getAnimationName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty getAnimationName(); // Offset: 0x102348bec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.TrackEntry.GetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAnimationLast(); // Offset: 0x102348bb8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAnimationEnd(); // Offset: 0x102348b84 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	float getAnimationDuration(); // Offset: 0x102348b50 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.TrackEntry.GetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAlpha(); // Offset: 0x102348b1c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class SpinePlugin.SpineSkeletonComponent
// Size: 0x1d0 // Inherited bytes: 0x178
struct USpineSkeletonComponent : UActorComponent {
	// Fields
	struct USpineAtlasAsset* Atlas; // Offset: 0x178 // Size: 0x08
	struct USpineSkeletonDataAsset* SkeletonData; // Offset: 0x180 // Size: 0x08
	struct FScriptMulticastDelegate BeforeUpdateWorldTransform; // Offset: 0x188 // Size: 0x10
	struct FScriptMulticastDelegate AfterUpdateWorldTransform; // Offset: 0x198 // Size: 0x10
	char pad_0x1A8[0x28]; // Offset: 0x1a8 // Size: 0x28

	// Functions

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateWorldTransform(); // Offset: 0x10234bafc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetToSetupPose(); // Offset: 0x10234bae8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSlotsToSetupPose(); // Offset: 0x10234bad4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetSlotColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSlotColor(StrProperty SlotName, struct FColor Color); // Offset: 0x10234b9b4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SetSkins(struct TArray<StrProperty>& SkinNames); // Offset: 0x10234b8fc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetSkin(StrProperty SkinName); // Offset: 0x10234b808 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScaleY(float ScaleY); // Offset: 0x10234b78c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScaleX(float ScaleX); // Offset: 0x10234b710 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetBoneWorldPosition(StrProperty BoneName, struct FVector& Position); // Offset: 0x10234b62c // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBonesToSetupPose(); // Offset: 0x10234b618 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetAttachment(StrProperty SlotName, StrProperty AttachmentName); // Offset: 0x10234b48c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasSlot(StrProperty SlotName); // Offset: 0x10234b398 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasSkin(StrProperty SkinName); // Offset: 0x10234b2a4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasBone(StrProperty BoneName); // Offset: 0x10234b1b0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasAnimation(StrProperty AnimationName); // Offset: 0x10234b0bc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetSlots(struct TArray<StrProperty>& Slots); // Offset: 0x10234b014 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetSkins(struct TArray<StrProperty>& Skins); // Offset: 0x10234af6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetScaleY(); // Offset: 0x10234af38 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetScaleX(); // Offset: 0x10234af04 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FTransform GetBoneWorldTransform(StrProperty BoneName); // Offset: 0x10234ae48 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetBones(struct TArray<StrProperty>& Bones); // Offset: 0x10234ada0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetAnimations(struct TArray<StrProperty>& Animations); // Offset: 0x10234acf8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	float getAnimationDuration(StrProperty AnimationName); // Offset: 0x10234ac04 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class SpinePlugin.SpineSkeletonAnimationComponent
// Size: 0x2d0 // Inherited bytes: 0x1d0
struct USpineSkeletonAnimationComponent : USpineSkeletonComponent {
	// Fields
	struct FScriptMulticastDelegate animationStart; // Offset: 0x1d0 // Size: 0x10
	struct FScriptMulticastDelegate AnimationInterrupt; // Offset: 0x1e0 // Size: 0x10
	struct FScriptMulticastDelegate AnimationEvent; // Offset: 0x1f0 // Size: 0x10
	struct FScriptMulticastDelegate AnimationComplete; // Offset: 0x200 // Size: 0x10
	struct FScriptMulticastDelegate animationEnd; // Offset: 0x210 // Size: 0x10
	struct FScriptMulticastDelegate AnimationDispose; // Offset: 0x220 // Size: 0x10
	StrProperty PreviewAnimation; // Offset: 0x230 // Size: 0x10
	StrProperty PreviewSkin; // Offset: 0x240 // Size: 0x10
	char pad_0x250[0x8]; // Offset: 0x250 // Size: 0x08
	SetProperty trackEntries; // Offset: 0x258 // Size: 0x50
	bool bAutoPlaying; // Offset: 0x2a8 // Size: 0x01
	char pad_0x2A9[0x27]; // Offset: 0x2a9 // Size: 0x27

	// Functions

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTimeScale(float TimeScale); // Offset: 0x10234a700 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates); // Offset: 0x10234a640 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* SetEmptyAnimation(IntProperty TrackIndex, float mixDuration); // Offset: 0x10234a578 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoPlay(bool bInAutoPlays); // Offset: 0x10234a4f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* SetAnimation(IntProperty TrackIndex, StrProperty AnimationName, bool Loop); // Offset: 0x10234a378 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetTimeScale(); // Offset: 0x10234a344 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* GetCurrent(IntProperty TrackIndex); // Offset: 0x10234a2b8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTracks(); // Offset: 0x10234a2a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTrack(IntProperty TrackIndex); // Offset: 0x10234a228 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* AddEmptyAnimation(IntProperty TrackIndex, float mixDuration, float Delay); // Offset: 0x10234a128 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* AddAnimation(IntProperty TrackIndex, StrProperty AnimationName, bool Loop, float Delay); // Offset: 0x102349f6c // Return & Params: Num(5) Size(0x28)
};

// Object Name: Class SpinePlugin.SpineSkeletonDataAsset
// Size: 0xf8 // Inherited bytes: 0x28
struct USpineSkeletonDataAsset : UObject {
	// Fields
	float DefaultMix; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FSpineAnimationStateMixData> MixData; // Offset: 0x30 // Size: 0x10
	struct TArray<StrProperty> Bones; // Offset: 0x40 // Size: 0x10
	struct TArray<StrProperty> Slots; // Offset: 0x50 // Size: 0x10
	struct TArray<StrProperty> Skins; // Offset: 0x60 // Size: 0x10
	struct TArray<StrProperty> Animations; // Offset: 0x70 // Size: 0x10
	struct TArray<StrProperty> Events; // Offset: 0x80 // Size: 0x10
	struct TArray<char> rawData; // Offset: 0x90 // Size: 0x10
	struct FName skeletonDataFileName; // Offset: 0xa0 // Size: 0x08
	char pad_0xA8[0x50]; // Offset: 0xa8 // Size: 0x50
};

// Object Name: Class SpinePlugin.SpineSkeletonRendererComponent
// Size: 0xe40 // Inherited bytes: 0xa90
struct USpineSkeletonRendererComponent : UProceduralMeshComponent {
	// Fields
	struct UMaterialInterface* NormalBlendMaterial; // Offset: 0xa88 // Size: 0x08
	struct UMaterialInterface* AdditiveBlendMaterial; // Offset: 0xa90 // Size: 0x08
	struct UMaterialInterface* MultiplyBlendMaterial; // Offset: 0xa98 // Size: 0x08
	struct UMaterialInterface* ScreenBlendMaterial; // Offset: 0xaa0 // Size: 0x08
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // Offset: 0xaa8 // Size: 0x10
	char pad_0xAC0[0x48]; // Offset: 0xac0 // Size: 0x48
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // Offset: 0xb08 // Size: 0x10
	char pad_0xB18[0x50]; // Offset: 0xb18 // Size: 0x50
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // Offset: 0xb68 // Size: 0x10
	char pad_0xB78[0x50]; // Offset: 0xb78 // Size: 0x50
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // Offset: 0xbc8 // Size: 0x10
	char pad_0xBD8[0x50]; // Offset: 0xbd8 // Size: 0x50
	float DepthOffset; // Offset: 0xc28 // Size: 0x04
	char pad_0xC2C[0x4]; // Offset: 0xc2c // Size: 0x04
	struct FName TextureParameterName; // Offset: 0xc30 // Size: 0x08
	struct FLinearColor Color; // Offset: 0xc38 // Size: 0x10
	bool bCreateCollision; // Offset: 0xc48 // Size: 0x01
	char pad_0xC49[0x1f7]; // Offset: 0xc49 // Size: 0x1f7
};

// Object Name: Class SpinePlugin.SpineWidget
// Size: 0x7e8 // Inherited bytes: 0x100
struct USpineWidget : UWidget {
	// Fields
	float Scale; // Offset: 0x100 // Size: 0x04
	char pad_0x104[0x4]; // Offset: 0x104 // Size: 0x04
	StrProperty InitialSkin; // Offset: 0x108 // Size: 0x10
	struct USpineAtlasAsset* Atlas; // Offset: 0x118 // Size: 0x08
	struct USpineSkeletonDataAsset* SkeletonData; // Offset: 0x120 // Size: 0x08
	struct UMaterialInterface* NormalBlendMaterial; // Offset: 0x128 // Size: 0x08
	struct UMaterialInterface* AdditiveBlendMaterial; // Offset: 0x130 // Size: 0x08
	struct UMaterialInterface* MultiplyBlendMaterial; // Offset: 0x138 // Size: 0x08
	struct UMaterialInterface* ScreenBlendMaterial; // Offset: 0x140 // Size: 0x08
	MapProperty CustomMaterials; // Offset: 0x148 // Size: 0x50
	MapProperty Sockets; // Offset: 0x198 // Size: 0x50
	char pad_0x1E8[0x50]; // Offset: 0x1e8 // Size: 0x50
	struct FName TextureParameterName; // Offset: 0x238 // Size: 0x08
	float DepthOffset; // Offset: 0x240 // Size: 0x04
	struct FLinearColor Color; // Offset: 0x244 // Size: 0x10
	char pad_0x254[0x4]; // Offset: 0x254 // Size: 0x04
	struct FSlateBrush Brush; // Offset: 0x258 // Size: 0xb8
	struct FScriptMulticastDelegate BeforeUpdateWorldTransform; // Offset: 0x310 // Size: 0x10
	struct FScriptMulticastDelegate AfterUpdateWorldTransform; // Offset: 0x320 // Size: 0x10
	struct FScriptMulticastDelegate animationStart; // Offset: 0x330 // Size: 0x10
	struct FScriptMulticastDelegate AnimationInterrupt; // Offset: 0x340 // Size: 0x10
	struct FScriptMulticastDelegate AnimationEvent; // Offset: 0x350 // Size: 0x10
	struct FScriptMulticastDelegate AnimationComplete; // Offset: 0x360 // Size: 0x10
	struct FScriptMulticastDelegate animationEnd; // Offset: 0x370 // Size: 0x10
	struct FScriptMulticastDelegate AnimationDispose; // Offset: 0x380 // Size: 0x10
	char pad_0x390[0x40]; // Offset: 0x390 // Size: 0x40
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // Offset: 0x3d0 // Size: 0x10
	char pad_0x3E0[0x50]; // Offset: 0x3e0 // Size: 0x50
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // Offset: 0x430 // Size: 0x10
	char pad_0x440[0x50]; // Offset: 0x440 // Size: 0x50
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // Offset: 0x490 // Size: 0x10
	char pad_0x4A0[0x50]; // Offset: 0x4a0 // Size: 0x50
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // Offset: 0x4f0 // Size: 0x10
	char pad_0x500[0x240]; // Offset: 0x500 // Size: 0x240
	SetProperty trackEntries; // Offset: 0x740 // Size: 0x50
	char pad_0x790[0x50]; // Offset: 0x790 // Size: 0x50
	bool bAutoPlaying; // Offset: 0x7e0 // Size: 0x01
	char pad_0x7E1[0x7]; // Offset: 0x7e1 // Size: 0x07

	// Functions

	// Object Name: Function SpinePlugin.SpineWidget.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateWorldTransform(); // Offset: 0x10234dba8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineWidget.Tick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Tick(float DeltaTime, bool CallDelegates); // Offset: 0x10234dae8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function SpinePlugin.SpineWidget.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetToSetupPose(); // Offset: 0x10234dad4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineWidget.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTimeScale(float TimeScale); // Offset: 0x10234da58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSlotsToSetupPose(); // Offset: 0x10234da44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineWidget.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SetSkins(struct TArray<StrProperty>& SkinNames); // Offset: 0x10234d98c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineWidget.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetSkin(StrProperty SkinName); // Offset: 0x10234d898 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineWidget.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScaleY(float ScaleY); // Offset: 0x10234d81c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetScaleX(float ScaleX); // Offset: 0x10234d7a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.SetScale
	// Flags: [Native|Protected|BlueprintCallable]
	void SetScale(float InScale); // Offset: 0x10234d71c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates); // Offset: 0x10234d65c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function SpinePlugin.SpineWidget.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* SetEmptyAnimation(IntProperty TrackIndex, float mixDuration); // Offset: 0x10234d594 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.SetColor
	// Flags: [Native|Protected|HasDefaults|BlueprintCallable]
	void SetColor(struct FLinearColor InColor); // Offset: 0x10234d510 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBonesToSetupPose(); // Offset: 0x10234d4fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineWidget.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoPlay(bool bInAutoPlays); // Offset: 0x10234d478 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SpinePlugin.SpineWidget.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetAttachment(StrProperty SlotName, StrProperty AttachmentName); // Offset: 0x10234d2ec // Return & Params: Num(3) Size(0x21)

	// Object Name: Function SpinePlugin.SpineWidget.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* SetAnimation(IntProperty TrackIndex, StrProperty AnimationName, bool Loop); // Offset: 0x10234d170 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function SpinePlugin.SpineWidget.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasSlot(StrProperty SlotName); // Offset: 0x10234d07c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineWidget.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasSkin(StrProperty SkinName); // Offset: 0x10234cf88 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineWidget.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasBone(StrProperty BoneName); // Offset: 0x10234ce94 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineWidget.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HasAnimation(StrProperty AnimationName); // Offset: 0x10234cda0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function SpinePlugin.SpineWidget.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetTimeScale(); // Offset: 0x10234cd6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetSlots(struct TArray<StrProperty>& Slots); // Offset: 0x10234ccc4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetSkins(struct TArray<StrProperty>& Skins); // Offset: 0x10234cc1c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetScaleY(); // Offset: 0x10234cbe8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetScaleX(); // Offset: 0x10234cbb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.GetScale
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	float GetScale(); // Offset: 0x10234cb80 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* GetCurrent(IntProperty TrackIndex); // Offset: 0x10234caf4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.GetColor
	// Flags: [Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FLinearColor GetColor(); // Offset: 0x10234cabc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetBones(struct TArray<StrProperty>& Bones); // Offset: 0x10234ca14 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetAnimations(struct TArray<StrProperty>& Animations); // Offset: 0x10234c96c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SpinePlugin.SpineWidget.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	float getAnimationDuration(StrProperty AnimationName); // Offset: 0x10234c878 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function SpinePlugin.SpineWidget.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTracks(); // Offset: 0x10234c864 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SpinePlugin.SpineWidget.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTrack(IntProperty TrackIndex); // Offset: 0x10234c7e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SpinePlugin.SpineWidget.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* AddEmptyAnimation(IntProperty TrackIndex, float mixDuration, float Delay); // Offset: 0x10234c6e8 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function SpinePlugin.SpineWidget.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTrackEntry* AddAnimation(IntProperty TrackIndex, StrProperty AnimationName, bool Loop, float Delay); // Offset: 0x10234c52c // Return & Params: Num(5) Size(0x28)
};

