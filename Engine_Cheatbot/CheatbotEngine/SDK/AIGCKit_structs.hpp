#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AIGCKit.AIBonesTransfroms
// Size: 0x90 // Inherited bytes: 0x00
struct FAIBonesTransfroms {
	// Fields
	struct TArray<struct FName> BonesName; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FVector> BonesTranslation; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FVector> BonesScale; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FRotator> BonesRotation; // Offset: 0x30 // Size: 0x10
	MapProperty BonesIdxs; // Offset: 0x40 // Size: 0x50
};

// Object Name: ScriptStruct AIGCKit.SkeletonNodeInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FSkeletonNodeInfo {
	// Fields
	struct TArray<struct FName> SkeletonNodes; // Offset: 0x00 // Size: 0x10
	struct FSkeletonAnimCompressInfo CompressInfo; // Offset: 0x10 // Size: 0x50
};

// Object Name: ScriptStruct AIGCKit.SkeletonAnimCompressInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FSkeletonAnimCompressInfo {
	// Fields
	MapProperty NodeToTrackMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct AIGCKit.SkeletonModifyRule
// Size: 0x06 // Inherited bytes: 0x00
struct FSkeletonModifyRule {
	// Fields
	enum class EBoneModificationMode TranslationMode; // Offset: 0x00 // Size: 0x01
	enum class EBoneModificationMode RotationMode; // Offset: 0x01 // Size: 0x01
	enum class EBoneModificationMode ScaleMode; // Offset: 0x02 // Size: 0x01
	enum class EBoneControlSpace TranslationSpace; // Offset: 0x03 // Size: 0x01
	enum class EBoneControlSpace RotationSpace; // Offset: 0x04 // Size: 0x01
	enum class EBoneControlSpace ScaleSpace; // Offset: 0x05 // Size: 0x01
};

