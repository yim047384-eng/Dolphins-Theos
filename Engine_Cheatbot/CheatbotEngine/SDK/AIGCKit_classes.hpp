#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AIGCKit.AIGCAnimData
// Size: 0x48 // Inherited bytes: 0x28
struct UAIGCAnimData : UObject {
	// Fields
	struct TArray<struct FAIBonesTransfroms> BonesTransfroms; // Offset: 0x28 // Size: 0x10
	IntProperty FrameRate; // Offset: 0x38 // Size: 0x04
	bool bUseCustomSpace; // Offset: 0x3c // Size: 0x01
	struct FSkeletonModifyRule CustomRule; // Offset: 0x3d // Size: 0x06
	char pad_0x43[0x5]; // Offset: 0x43 // Size: 0x05
};

// Object Name: Class AIGCKit.AIGCAnimInstance
// Size: 0x420 // Inherited bytes: 0x3f0
struct UAIGCAnimInstance : UAnimInstance {
	// Fields
	struct TArray<struct FAIBonesTransfroms> BonesTransfroms; // Offset: 0x3e8 // Size: 0x10
	bool bUseAIGCAnimation; // Offset: 0x3f8 // Size: 0x01
	float CurrentAIGCAnimFrameIndex; // Offset: 0x3fc // Size: 0x04
	enum class EBoneModificationMode TranslationMode; // Offset: 0x400 // Size: 0x01
	enum class EBoneModificationMode RotationMode; // Offset: 0x401 // Size: 0x01
	enum class EBoneModificationMode ScaleMode; // Offset: 0x402 // Size: 0x01
	enum class EBoneControlSpace TranslationSpace; // Offset: 0x403 // Size: 0x01
	enum class EBoneControlSpace RotationSpace; // Offset: 0x404 // Size: 0x01
	enum class EBoneControlSpace ScaleSpace; // Offset: 0x405 // Size: 0x01
	float AIGCAnimFrameRate; // Offset: 0x408 // Size: 0x04
	struct FSkeletonModifyRule DefaultSkeletonModifyRule; // Offset: 0x40c // Size: 0x06
	char pad_0x415[0xb]; // Offset: 0x415 // Size: 0x0b

	// Functions

	// Object Name: Function AIGCKit.AIGCAnimInstance.GetCurrentFrameIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCurrentFrameIndex(); // Offset: 0x1021436d4 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AIGCKit.AIGCKitFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAIGCKitFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AIGCKit.AIGCKitFunctionLibrary.GetAnimData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UAIGCAnimData* GetAnimData(struct TArray<char>& CompressData, IntProperty FrameRate, IntProperty FrameNum, struct FSkeletonNodeInfo& SkeletonNodeInfo); // Offset: 0x102143c28 // Return & Params: Num(5) Size(0x80)

	// Object Name: Function AIGCKit.AIGCKitFunctionLibrary.DecompressBone
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable]
	bool DecompressBone(IntProperty TrackIndex, struct FTransform& OutAtom, struct TArray<char>& RawAnimData, float Time, float RelativePos); // Offset: 0x102143a54 // Return & Params: Num(6) Size(0x59)

	// Object Name: Function AIGCKit.AIGCKitFunctionLibrary.DecompressAnimData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool DecompressAnimData(struct UAIGCAnimData* OutAnimData, struct TArray<char>& RawAnimData, IntProperty FrameNum, float TargetFramerate, struct FSkeletonNodeInfo& SkeletonNodeInfo); // Offset: 0x102143878 // Return & Params: Num(6) Size(0x81)
};

// Object Name: Class AIGCKit.AIGCKitSettings
// Size: 0xd8 // Inherited bytes: 0x28
struct UAIGCKitSettings : UObject {
	// Fields
	MapProperty FaceSkeletons; // Offset: 0x28 // Size: 0x50
	MapProperty BodySkeletons; // Offset: 0x78 // Size: 0x50
	struct FSkeletonModifyRule DefaultFaceRule; // Offset: 0xc8 // Size: 0x06
	struct FSkeletonModifyRule DefaultBodyRule; // Offset: 0xce // Size: 0x06
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
};

