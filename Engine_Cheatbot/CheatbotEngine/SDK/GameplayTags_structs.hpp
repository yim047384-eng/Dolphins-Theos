#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 // Inherited bytes: 0x00
struct FGameplayTagContainer {
	// Fields
	struct TArray<struct FGameplayTag> GameplayTags; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FGameplayTag> ParentTags; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 // Inherited bytes: 0x00
struct FGameplayTag {
	// Fields
	struct FName TagName; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 // Inherited bytes: 0x00
struct FGameplayTagQuery {
	// Fields
	IntProperty TokenStreamVersion; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FGameplayTag> TagDictionary; // Offset: 0x08 // Size: 0x10
	struct TArray<char> QueryTokenStream; // Offset: 0x18 // Size: 0x10
	StrProperty UserDescription; // Offset: 0x28 // Size: 0x10
	StrProperty AutoDescription; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x01 // Inherited bytes: 0x00
struct FGameplayTagCreationWidgetHelper {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 // Inherited bytes: 0x00
struct FGameplayTagReferenceHelper {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 // Inherited bytes: 0x00
struct FGameplayTagNode {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x18 // Inherited bytes: 0x00
struct FGameplayTagSource {
	// Fields
	struct FName SourceName; // Offset: 0x00 // Size: 0x08
	enum class EGameplayTagSourceType SourceType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct UGameplayTagsList* SourceTagList; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 // Inherited bytes: 0x08
struct FGameplayTagTableRow : FTableRowBase {
	// Fields
	struct FName Tag; // Offset: 0x08 // Size: 0x08
	StrProperty DevComment; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 // Inherited bytes: 0x00
struct FGameplayTagCategoryRemap {
	// Fields
	StrProperty BaseCategory; // Offset: 0x00 // Size: 0x10
	struct TArray<StrProperty> RemapCategories; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 // Inherited bytes: 0x00
struct FGameplayTagRedirect {
	// Fields
	struct FName OldTagName; // Offset: 0x00 // Size: 0x08
	struct FName NewTagName; // Offset: 0x08 // Size: 0x08
};

