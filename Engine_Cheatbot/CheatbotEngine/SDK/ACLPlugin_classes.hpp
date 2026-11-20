#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ACLPlugin.ACLStatsDumpCommandlet
// Size: 0x80 // Inherited bytes: 0x80
struct UACLStatsDumpCommandlet : UCommandlet {
};

// Object Name: Class ACLPlugin.AnimCompress_ACLBase
// Size: 0x40 // Inherited bytes: 0x40
struct UAnimCompress_ACLBase : UAnimCompress {
};

// Object Name: Class ACLPlugin.AnimCompress_ACL
// Size: 0x58 // Inherited bytes: 0x40
struct UAnimCompress_ACL : UAnimCompress_ACLBase {
	// Fields
	enum class ACLCompressionLevel CompressionLevel; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	float DefaultVirtualVertexDistance; // Offset: 0x44 // Size: 0x04
	float SafeVirtualVertexDistance; // Offset: 0x48 // Size: 0x04
	float SafetyFallbackThreshold; // Offset: 0x4c // Size: 0x04
	float ErrorThreshold; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: Class ACLPlugin.AnimCompress_ACLCustom
// Size: 0x68 // Inherited bytes: 0x40
struct UAnimCompress_ACLCustom : UAnimCompress_ACLBase {
	// Fields
	float DefaultVirtualVertexDistance; // Offset: 0x40 // Size: 0x04
	float SafeVirtualVertexDistance; // Offset: 0x44 // Size: 0x04
	enum class ACLCompressionLevel CompressionLevel; // Offset: 0x48 // Size: 0x01
	enum class ACLRotationFormat RotationFormat; // Offset: 0x49 // Size: 0x01
	enum class ACLVectorFormat TranslationFormat; // Offset: 0x4a // Size: 0x01
	enum class ACLVectorFormat ScaleFormat; // Offset: 0x4b // Size: 0x01
	float ErrorThreshold; // Offset: 0x4c // Size: 0x04
	float ConstantRotationThresholdAngle; // Offset: 0x50 // Size: 0x04
	float ConstantTranslationThreshold; // Offset: 0x54 // Size: 0x04
	float ConstantScaleThreshold; // Offset: 0x58 // Size: 0x04
	char bClipRangeReduceRotations : 1; // Offset: 0x5c // Size: 0x01
	char bClipRangeReduceTranslations : 1; // Offset: 0x5c // Size: 0x01
	char bClipRangeReduceScales : 1; // Offset: 0x5c // Size: 0x01
	char bEnableSegmenting : 1; // Offset: 0x5c // Size: 0x01
	char bSegmentRangeReduceRotations : 1; // Offset: 0x5c // Size: 0x01
	char bSegmentRangeReduceTranslations : 1; // Offset: 0x5c // Size: 0x01
	char bSegmentRangeReduceScales : 1; // Offset: 0x5c // Size: 0x01
	char pad_0x5C_7 : 1; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x1]; // Offset: 0x5d // Size: 0x01
	uint16_t IdealNumKeyFramesPerSegment; // Offset: 0x5e // Size: 0x02
	uint16_t MaxNumKeyFramesPerSegment; // Offset: 0x60 // Size: 0x02
	char pad_0x62[0x6]; // Offset: 0x62 // Size: 0x06
};

