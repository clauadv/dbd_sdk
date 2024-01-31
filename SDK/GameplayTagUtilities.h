
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/GameplayTagUtilities.DBDGameplayTagUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName
	// FName GetScoreModifierName(FName scoreEventID);                                                                       // [0x8490ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists
	// bool GameplayTagExists(FName TagName);                                                                                // [0x8490a10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTagUtilities.TagContainerQueryInstance
/// Size: 0x0068 (0x000030 - 0x000098)
class UTagContainerQueryInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FGameplayTagQuery                                  Query;                                                      // 0x0038   (0x0048)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Class /Script/GameplayTagUtilities.GameplayTagContainerComponent
/// Size: 0x0118 (0x0000B8 - 0x0001D0)
class UGameplayTagContainerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x00B8   (0x0078)  MISSED
	SDK_UNDEFINED(80,1258) /* TMap<FGameplayTag, FQueryInstanceCollection> */ __um(_tagToQueries);                 // 0x0130   (0x0050)  
	SDK_UNDEFINED(80,1259) /* TMap<UObject*, FQueryInstanceCollection> */ __um(_ownerToQueries);                   // 0x0180   (0x0050)  


	/// Functions
	// Function /Script/GameplayTagUtilities.GameplayTagContainerComponent.Remove
	// void Remove(FGameplayTag State);                                                                                      // [0x84919d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTagUtilities.GameplayTagContainerComponent.GetTags
	// FGameplayTagContainer GetTags();                                                                                      // [0x8491990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTagUtilities.GameplayTagContainerComponent.Add
	// void Add(FGameplayTag State);                                                                                         // [0x84918f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTagUtilities.ObjectStateProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UObjectStateProvider : public UInterface
{ 
public:
};

/// Struct /Script/GameplayTagUtilities.TagStateBoolBase
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTagStateBoolBase
{ 
	bool                                               _isTrue;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0001   (0x002F)  MISSED
};

/// Struct /Script/GameplayTagUtilities.TagStateBool
/// Size: 0x0000 (0x000030 - 0x000030)
struct FTagStateBool : FTagStateBoolBase
{ 
};

/// Struct /Script/GameplayTagUtilities.QueryInstanceCollection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQueryInstanceCollection
{ 
	TArray<class UTagContainerQueryInstance*>          Instances;                                                  // 0x0000   (0x0010)  
};

