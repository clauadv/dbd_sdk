
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x08
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined                                             = 0,
	EGameplayTagQueryExprType__AnyTagsMatch                                          = 1,
	EGameplayTagQueryExprType__AllTagsMatch                                          = 2,
	EGameplayTagQueryExprType__NoTagsMatch                                           = 3,
	EGameplayTagQueryExprType__AnyExprMatch                                          = 4,
	EGameplayTagQueryExprType__AllExprMatch                                          = 5,
	EGameplayTagQueryExprType__NoExprMatch                                           = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX                         = 7
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x03
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any                                                 = 0,
	EGameplayContainerMatchType__All                                                 = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX                     = 2
};

/// Enum /Script/GameplayTags.EGameplayTagMatchType
/// Size: 0x03
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit                                                  = 0,
	EGameplayTagMatchType__IncludeParentTags                                         = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX                                 = 2
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x05
enum class EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None                                                  = 0,
	EGameplayTagSelectionType__NonRestrictedOnly                                     = 1,
	EGameplayTagSelectionType__RestrictedOnly                                        = 2,
	EGameplayTagSelectionType__All                                                   = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX                         = 4
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x07
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native                                                   = 0,
	EGameplayTagSourceType__DefaultTagList                                           = 1,
	EGameplayTagSourceType__TagList                                                  = 2,
	EGameplayTagSourceType__RestrictedTagList                                        = 3,
	EGameplayTagSourceType__DataTable                                                = 4,
	EGameplayTagSourceType__Invalid                                                  = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX                               = 6
};

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	// bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                        // [0x77aaa90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	// bool NotEqual_TagTag(FGameplayTag A, FString B);                                                                      // [0x77aa950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	// bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);                                           // [0x77aa7e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	// bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                               // [0x77aa690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	// bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                            // [0x77aa590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	// bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);                                          // [0x77aa450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	// bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch);                    // [0x77aa2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	// FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer value);                                   // [0x77aa1e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	// FGameplayTag MakeLiteralGameplayTag(FGameplayTag value);                                                              // [0x77aa130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	// FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);                                                   // [0x77aa000] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	// FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);                                        // [0x77a9f30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags);                          // [0x77a9e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	// bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery);                                                                    // [0x77a9d80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	// bool IsGameplayTagValid(FGameplayTag GameplayTag);                                                                    // [0x77a9ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag
	// bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);                                 // [0x77a9b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	// bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);        // [0x77a9940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	// bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);        // [0x77a96e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(TScriptInterface<Class> TagContainerInterface, FGameplayTagContainer& OtherContainer); // [0x77a95c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	// FName GetTagName(FGameplayTag& GameplayTag);                                                                          // [0x77a9440] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	// int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer);                                           // [0x77a92c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	// FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer);                                  // [0x77a91c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	// FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);                                                      // [0x77a90e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors); // [0x77a8f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	// bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                             // [0x77a8db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	// bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                          // [0x77a8cb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// bool DoesTagAssetInterfaceHaveTag(TScriptInterface<Class> TagContainerInterface, FGameplayTag Tag);                   // [0x77a8bb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	// bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery);                    // [0x77a8a50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);      // [0x77a8930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	// void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer);    // [0x77a8800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	// void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                           // [0x77a86e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameplayTagAssetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FGameplayTag TagToCheck);                                                                 // [0x77a9ad0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                 // [0x77a9870] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                 // [0x77a94f0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	// void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);                                                       // [0x77a9380] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGameplayTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayTagQuery
{ 
	int32_t                                            TokenStreamVersion;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGameplayTag>                               TagDictionary;                                              // 0x0008   (0x0010)  
	TArray<char>                                       QueryTokenStream;                                           // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,812) /* FString */                __um(UserDescription);                                      // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,813) /* FString */                __um(AutoDescription);                                      // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UEditableGameplayTagQuery : public UObject
{ 
public:
	SDK_UNDEFINED(16,814) /* FString */                __um(UserDescription);                                      // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	class UEditableGameplayTagQueryExpression*         RootExpression;                                             // 0x0050   (0x0008)  
	FGameplayTagQuery                                  TagQueryExportText_Helper;                                  // 0x0058   (0x0048)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0000 (0x000030 - 0x000030)
class UEditableGameplayTagQueryExpression : public UObject
{ 
public:
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagContainer
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
	TArray<FGameplayTag>                               ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0020 (0x000030 - 0x000050)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0030   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0020 (0x000030 - 0x000050)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0030   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0020 (0x000030 - 0x000050)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0030   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0010 (0x000030 - 0x000040)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0010 (0x000030 - 0x000040)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0010 (0x000030 - 0x000040)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x0218 (0x000030 - 0x000248)
class UGameplayTagsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x138];                                     // 0x0030   (0x0138)  MISSED
	SDK_UNDEFINED(80,815) /* TMap<FName, FGameplayTagSource> */ __um(TagSources);                                  // 0x0168   (0x0050)  
	unsigned char                                      UnknownData01_5[0x80];                                      // 0x01B8   (0x0080)  MISSED
	TArray<class UDataTable*>                          GameplayTagTables;                                          // 0x0238   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FGameplayTagTableRow : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,816) /* FString */                __um(DevComment);                                           // 0x0018   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0020 (0x000030 - 0x000050)
class UGameplayTagsList : public UObject
{ 
public:
	SDK_UNDEFINED(16,817) /* FString */                __um(ConfigFileName);                                       // 0x0030   (0x0010)  
	TArray<FGameplayTagTableRow>                       GameplayTagList;                                            // 0x0040   (0x0010)  
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0020 (0x000030 - 0x000050)
class URestrictedGameplayTagsList : public UObject
{ 
public:
	SDK_UNDEFINED(16,818) /* FString */                __um(ConfigFileName);                                       // 0x0030   (0x0010)  
	TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList;                                  // 0x0040   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagCategoryRemap
{ 
	SDK_UNDEFINED(16,819) /* FString */                __um(BaseCategory);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,820) /* TArray<FString> */        __um(RemapCategories);                                      // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x000C)  
	FName                                              NewTagName;                                                 // 0x000C   (0x000C)  
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRestrictedConfigInfo
{ 
	SDK_UNDEFINED(16,821) /* FString */                __um(RestrictedConfigName);                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,822) /* TArray<FString> */        __um(Owners);                                               // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UGameplayTagsSettings : public UGameplayTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0050   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0051   (0x0001)  
	bool                                               ClearInvalidTags;                                           // 0x0052   (0x0001)  
	bool                                               FastReplication;                                            // 0x0053   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,823) /* FString */                __um(InvalidTagCharacters);                                 // 0x0058   (0x0010)  
	TArray<FGameplayTagCategoryRemap>                  CategoryRemapping;                                          // 0x0068   (0x0010)  
	TArray<FSoftObjectPath>                            GameplayTagTableList;                                       // 0x0078   (0x0010)  
	TArray<FGameplayTagRedirect>                       GameplayTagRedirects;                                       // 0x0088   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0098   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A8   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00AC   (0x0004)  
	TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles;                                      // 0x00B0   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0020 (0x000048 - 0x000068)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(16,824) /* FString */                __um(DeveloperConfigName);                                  // 0x0048   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0058   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGameplayTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTagReferenceHelper
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGameplayTagNode
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x000C)  
	EGameplayTagSourceType                             SourceType;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	class UGameplayTagsList*                           SourceTagList;                                              // 0x0010   (0x0008)  
	class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

