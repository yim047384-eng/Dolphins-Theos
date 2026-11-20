#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AnimationCore.Axis
// Size: 0x10 // Inherited bytes: 0x00
struct FAxis {
	// Fields
	struct FVector Axis; // Offset: 0x00 // Size: 0x0c
	bool bInLocalSpace; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct AnimationCore.ConstraintData
// Size: 0x80 // Inherited bytes: 0x00
struct FConstraintData {
	// Fields
	struct FConstraintDescriptor Constraint; // Offset: 0x00 // Size: 0x10
	struct FName TargetNode; // Offset: 0x10 // Size: 0x08
	float Weight; // Offset: 0x18 // Size: 0x04
	bool bMaintainOffset; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	struct FTransform Offset; // Offset: 0x20 // Size: 0x30
	struct FTransform CurrentTransform; // Offset: 0x50 // Size: 0x30
};

// Object Name: ScriptStruct AnimationCore.ConstraintDescriptor
// Size: 0x10 // Inherited bytes: 0x00
struct FConstraintDescriptor {
	// Fields
	enum class EConstraintType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0xf]; // Offset: 0x01 // Size: 0x0f
};

// Object Name: ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size: 0x10 // Inherited bytes: 0x00
struct FConstraintDescriptionEx {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FFilterOptionPerAxis AxesFilterOption; // Offset: 0x08 // Size: 0x03
	char pad_0xB[0x5]; // Offset: 0x0b // Size: 0x05
};

// Object Name: ScriptStruct AnimationCore.FilterOptionPerAxis
// Size: 0x03 // Inherited bytes: 0x00
struct FFilterOptionPerAxis {
	// Fields
	bool bX; // Offset: 0x00 // Size: 0x01
	bool bY; // Offset: 0x01 // Size: 0x01
	bool bZ; // Offset: 0x02 // Size: 0x01
};

// Object Name: ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x30 // Inherited bytes: 0x10
struct FAimConstraintDescription : FConstraintDescriptionEx {
	// Fields
	struct FAxis LookAt_Axis; // Offset: 0x0c // Size: 0x10
	struct FAxis LookUp_Axis; // Offset: 0x1c // Size: 0x10
	bool bUseLookUp; // Offset: 0x2c // Size: 0x01
};

// Object Name: ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x10 // Inherited bytes: 0x10
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	// Fields
	enum class ETransformConstraintType TransformType; // Offset: 0x0b // Size: 0x01
};

// Object Name: ScriptStruct AnimationCore.TransformConstraint
// Size: 0x28 // Inherited bytes: 0x00
struct FTransformConstraint {
	// Fields
	struct FConstraintDescription Operator; // Offset: 0x00 // Size: 0x0d
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FName SourceNode; // Offset: 0x10 // Size: 0x08
	struct FName TargetNode; // Offset: 0x18 // Size: 0x08
	float Weight; // Offset: 0x20 // Size: 0x04
	bool bMaintainOffset; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct AnimationCore.ConstraintDescription
// Size: 0x0d // Inherited bytes: 0x00
struct FConstraintDescription {
	// Fields
	bool bTranslation; // Offset: 0x00 // Size: 0x01
	bool bRotation; // Offset: 0x01 // Size: 0x01
	bool bScale; // Offset: 0x02 // Size: 0x01
	bool bParent; // Offset: 0x03 // Size: 0x01
	struct FFilterOptionPerAxis TranslationAxes; // Offset: 0x04 // Size: 0x03
	struct FFilterOptionPerAxis RotationAxes; // Offset: 0x07 // Size: 0x03
	struct FFilterOptionPerAxis ScaleAxes; // Offset: 0x0a // Size: 0x03
};

// Object Name: ScriptStruct AnimationCore.ConstraintOffset
// Size: 0x60 // Inherited bytes: 0x00
struct FConstraintOffset {
	// Fields
	struct FVector Translation; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FQuat Rotation; // Offset: 0x10 // Size: 0x10
	struct FVector Scale; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct FTransform Parent; // Offset: 0x30 // Size: 0x30
};

// Object Name: ScriptStruct AnimationCore.NodeChain
// Size: 0x10 // Inherited bytes: 0x00
struct FNodeChain {
	// Fields
	struct TArray<struct FName> Nodes; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size: 0x78 // Inherited bytes: 0x00
struct FNodeHierarchyWithUserData {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	struct FNodeHierarchyData Hierarchy; // Offset: 0x08 // Size: 0x70
};

// Object Name: ScriptStruct AnimationCore.NodeHierarchyData
// Size: 0x70 // Inherited bytes: 0x00
struct FNodeHierarchyData {
	// Fields
	struct TArray<struct FNodeObject> Nodes; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FTransform> Transforms; // Offset: 0x10 // Size: 0x10
	MapProperty NodeNameToIndexMapping; // Offset: 0x20 // Size: 0x50
};

// Object Name: ScriptStruct AnimationCore.NodeObject
// Size: 0x10 // Inherited bytes: 0x00
struct FNodeObject {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct FName ParentName; // Offset: 0x08 // Size: 0x08
};

