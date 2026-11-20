#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Object Name: Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Object Name: Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Object Name: Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	DataTable = 3,
	Invalid = 4,
	EGameplayTagSourceType_MAX = 5
};

