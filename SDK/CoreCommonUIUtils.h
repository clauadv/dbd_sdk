
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CoreCommonUIUtils.ERemainingTimeFormat
/// Size: 0x04
enum class ERemainingTimeFormat : uint8_t
{
	ERemainingTimeFormat__Short                                                      = 0,
	ERemainingTimeFormat__Long                                                       = 1,
	ERemainingTimeFormat__EndsIn                                                     = 2,
	ERemainingTimeFormat__ERemainingTimeFormat_MAX                                   = 3
};

/// Class /Script/CoreCommonUIUtils.CoreCommonUIUtils
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreCommonUIUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.WrapTextWithStyleTag
	// FText WrapTextWithStyleTag(FText& Text, FText& Style);                                                                // [0x858ba40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.SetConditionalWidgetVisibility
	// void SetConditionalWidgetVisibility(class UWidget* Widget, bool Condition, ESlateVisibility trueVisibility, ESlateVisibility falseVisibility); // [0x858b8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.HasOuter
	// bool HasOuter(class UObject* Object, class UObject* Root);                                                            // [0x858b810] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.GetTextBasedOnRarity
	// FText GetTextBasedOnRarity(EItemRarity Rarity);                                                                       // [0x858b730] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.GetNextUpdateRate
	// float GetNextUpdateRate(FDateTime& EndTime);                                                                          // [0x858b6a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.GetDPIScale
	// float GetDPIScale();                                                                                                  // [0x858b670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericText
	// FText GetBeautifiedNumericText(int32_t value);                                                                        // [0x858b590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericString
	// FString GetBeautifiedNumericString(int32_t value);                                                                    // [0x858b4c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.BeautifyNarrativeText
	// FString BeautifyNarrativeText(FString str, int32_t charLimit);                                                        // [0x858b3a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreCommonUIUtils.CoreCommonUIUtils.BeautifyName
	// FString BeautifyName(FString Name, int32_t maxCharacters);                                                            // [0x858b280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

