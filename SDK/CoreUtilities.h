
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CoreUtilities.RealCaseGapEnum
/// Size: 0x04
enum class RealCaseGapEnum : uint16_t
{
	RealCaseGapEnum__None                                                            = 0,
	RealCaseGapEnum__SavefileDeserializationFailure                                  = 100,
	RealCaseGapEnum__EarnPlayerXpParamError                                          = 402,
	RealCaseGapEnum__RealCaseGapEnum_MAX                                             = 403
};

/// Enum /Script/CoreUtilities.OutOfOrderEnum
/// Size: 0x04
enum class OutOfOrderEnum : uint8_t
{
	OutOfOrderEnum__Value1                                                           = 2,
	OutOfOrderEnum__Value2                                                           = 0,
	OutOfOrderEnum__Value3                                                           = 1,
	OutOfOrderEnum__OutOfOrderEnum_MAX                                               = 3
};

/// Enum /Script/CoreUtilities.GapEnum
/// Size: 0x04
enum class GapEnum : uint8_t
{
	GapEnum__Value1                                                                  = 0,
	GapEnum__Value2                                                                  = 2,
	GapEnum__Value3                                                                  = 3,
	GapEnum__GapEnum_MAX                                                             = 4
};

/// Enum /Script/CoreUtilities.SimpleEnum
/// Size: 0x04
enum class SimpleEnum : uint8_t
{
	SimpleEnum__Value1                                                               = 0,
	SimpleEnum__Value2                                                               = 1,
	SimpleEnum__Value3                                                               = 2,
	SimpleEnum__SimpleEnum_MAX                                                       = 3
};

/// Class /Script/CoreUtilities.CoreUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CoreUtilities.CoreUtilities.GetWorldFromContext
	// class UWorld* GetWorldFromContext(class UObject* WorldContextObject);                                                 // [0x827ac20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreUtilities.CoreUtilities.GetRandomValuesFromArray
	// TArray<int32_t> GetRandomValuesFromArray(TArray<int32_t>& Values, int32_t numberOfDesiredValues);                     // [0x827aae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CoreUtilities.CoreUtilities.GetGlobalWorld
	// class UWorld* GetGlobalWorld();                                                                                       // [0x827aab0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreUtilities.CoreUtilities.GetGameInstance
	// class UGameInstance* GetGameInstance(class UObject* WorldContextObject);                                              // [0x827aa20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CoreUtilities.PropertyParser
/// Size: 0x0000 (0x000030 - 0x000030)
class UPropertyParser : public UObject
{ 
public:


	/// Functions
	// Function /Script/CoreUtilities.PropertyParser.CopyProperties
	// void CopyProperties(class UActorComponent* Dest, class UActorComponent* Origin, bool copyTransform, TArray<FName> propertiesToExclude); // [0x827b110] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/CoreUtilities.DelegateHandleWrapper
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelegateHandleWrapper
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

