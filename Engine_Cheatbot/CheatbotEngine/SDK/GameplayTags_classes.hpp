#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Offset: 0x1055baebc // Return & Params: Num(3) Size(0x29)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool NotEqual_TagTag(struct FGameplayTag A, StrProperty B); // Offset: 0x1055bad98 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, StrProperty B); // Offset: 0x1055bac40 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Offset: 0x1055bab20 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Offset: 0x1055baa6c // Return & Params: Num(3) Size(0x11)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Offset: 0x1055ba974 // Return & Params: Num(4) Size(0x12)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Offset: 0x1055ba838 // Return & Params: Num(4) Size(0x2a)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Offset: 0x1055ba750 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Offset: 0x1055ba6d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Offset: 0x1055ba5e4 // Return & Params: Num(2) Size(0x90)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Offset: 0x1055ba540 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // Offset: 0x1055ba470 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Offset: 0x1055ba3f4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch); // Offset: 0x1055ba2b4 // Return & Params: Num(4) Size(0x2a)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Offset: 0x1055ba148 // Return & Params: Num(4) Size(0x42)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Offset: 0x1055b9fdc // Return & Params: Num(4) Size(0x42)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool HasAllMatchingGameplayTags(struct TScriptInterface<Class> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // Offset: 0x1055b9ee4 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // Offset: 0x1055b9e58 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // Offset: 0x1055b9dac // Return & Params: Num(2) Size(0x24)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // Offset: 0x1055b9cd8 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Offset: 0x1055b9c34 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // Offset: 0x1055b9ab4 // Return & Params: Num(4) Size(0x68)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Offset: 0x1055b9994 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Offset: 0x1055b98e0 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<Class> TagContainerInterface, struct FGameplayTag Tag); // Offset: 0x1055b9818 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // Offset: 0x1055b96f4 // Return & Params: Num(3) Size(0x69)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // Offset: 0x1055b95e8 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // Offset: 0x1055b94d8 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Offset: 0x1055b93f0 // Return & Params: Num(2) Size(0x28)
};

// Object Name: Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayTagAssetInterface : UInterface {
	// Functions

	// Object Name: Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Offset: 0x1055bbcd0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Offset: 0x1055bbc0c // Return & Params: Num(2) Size(0x21)

	// Object Name: Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Offset: 0x1055bbb48 // Return & Params: Num(2) Size(0x21)

	// Object Name: Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // Offset: 0x1055bba94 // Return & Params: Num(1) Size(0x20)
};

// Object Name: Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 // Inherited bytes: 0x28
struct UEditableGameplayTagQuery : UObject {
	// Fields
	StrProperty UserDescription; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
	struct UEditableGameplayTagQueryExpression* RootExpression; // Offset: 0x48 // Size: 0x08
	struct FGameplayTagQuery TagQueryExportText_Helper; // Offset: 0x50 // Size: 0x48
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression : UObject {
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	// Fields
	struct FGameplayTagContainer Tags; // Offset: 0x28 // Size: 0x20
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	// Fields
	struct FGameplayTagContainer Tags; // Offset: 0x28 // Size: 0x20
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	// Fields
	struct FGameplayTagContainer Tags; // Offset: 0x28 // Size: 0x20
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	// Fields
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	// Fields
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 // Inherited bytes: 0x28
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	// Fields
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class GameplayTags.GameplayTagsManager
// Size: 0x180 // Inherited bytes: 0x28
struct UGameplayTagsManager : UObject {
	// Fields
	char pad_0x28[0x80]; // Offset: 0x28 // Size: 0x80
	struct TArray<struct FGameplayTagSource> TagSources; // Offset: 0xa8 // Size: 0x10
	char pad_0xB8[0x68]; // Offset: 0xb8 // Size: 0x68
	struct TArray<struct UDataTable*> GameplayTagTables; // Offset: 0x120 // Size: 0x10
	char pad_0x130[0x50]; // Offset: 0x130 // Size: 0x50
};

// Object Name: Class GameplayTags.GameplayTagsList
// Size: 0x48 // Inherited bytes: 0x28
struct UGameplayTagsList : UObject {
	// Fields
	StrProperty ConfigFileName; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class GameplayTags.GameplayTagsSettings
// Size: 0xa0 // Inherited bytes: 0x48
struct UGameplayTagsSettings : UGameplayTagsList {
	// Fields
	bool ImportTagsFromConfig; // Offset: 0x48 // Size: 0x01
	bool WarnOnInvalidTags; // Offset: 0x49 // Size: 0x01
	char pad_0x4A[0x6]; // Offset: 0x4a // Size: 0x06
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // Offset: 0x50 // Size: 0x10
	bool FastReplication; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // Offset: 0x68 // Size: 0x10
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FName> CommonlyReplicatedTags; // Offset: 0x88 // Size: 0x10
	IntProperty NumBitsForContainerSize; // Offset: 0x98 // Size: 0x04
	IntProperty NetIndexFirstBitSegment; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x38 // Inherited bytes: 0x28
struct UGameplayTagsDeveloperSettings : UObject {
	// Fields
	StrProperty DeveloperConfigName; // Offset: 0x28 // Size: 0x10
};

