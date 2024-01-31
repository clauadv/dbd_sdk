
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine

/// Enum /Script/DBDUIManagers.EDPIScaleCurveRatio
/// Size: 0x04
enum class EDPIScaleCurveRatio : uint8_t
{
	EDPIScaleCurveRatio__Default                                                     = 0,
	EDPIScaleCurveRatio__SmallerEqual4                                               = 1,
	EDPIScaleCurveRatio__Mobile                                                      = 2,
	EDPIScaleCurveRatio__EDPIScaleCurveRatio_MAX                                     = 3
};

/// Enum /Script/DBDUIManagers.EScaleType
/// Size: 0x05
enum class EScaleType : uint8_t
{
	EScaleType__None                                                                 = 0,
	EScaleType__Menu                                                                 = 1,
	EScaleType__Hud                                                                  = 2,
	EScaleType__SkillCheck                                                           = 3,
	EScaleType__EScaleType_MAX                                                       = 4
};

/// Class /Script/DBDUIManagers.DBDTextManager
/// Size: 0x0020 (0x000038 - 0x000058)
class UDBDTextManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0038   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIManagers.DBDTextManager.GetLargeTextEnabled
	// bool GetLargeTextEnabled();                                                                                           // [0x48cb6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIManagers.UIAnalyticsManager
/// Size: 0x0030 (0x000038 - 0x000068)
class UUIAnalyticsManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/DBDUIManagers.UIDataManager
/// Size: 0x0240 (0x000038 - 0x000278)
class UUIDataManager : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(80,3275) /* TMap<EItemRarity, FRarityMaterialData> */ __um(RarityMaterialMap);                   // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,3276) /* TMap<FString, FTextBlockStyle> */ __um(RichTextStyleMap);                            // 0x0088   (0x0050)  
	SDK_UNDEFINED(80,3277) /* TMap<ECurrencyType, FCurrencyProgressionUIData> */ __um(CurrencyUIDataMap);          // 0x00D8   (0x0050)  
	SDK_UNDEFINED(80,3278) /* TMap<EProgressionType, FCurrencyProgressionUIData> */ __um(ProgressionUIDataMap);    // 0x0128   (0x0050)  
	SDK_UNDEFINED(80,3279) /* TMap<EArchiveMenuState, FArchiveTomeSkinData> */ __um(ArchiveTomeSkinDataMap);       // 0x0178   (0x0050)  
	SDK_UNDEFINED(80,3280) /* TMap<FString, UTexture2D*> */ __um(TooltipEventSkinUIDataMap);                       // 0x01C8   (0x0050)  
	SDK_UNDEFINED(80,3281) /* TMap<FString, UTexture2D*> */ __um(AlertRewardEventSkinUIDataMap);                   // 0x0218   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0268   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIManagers.UIDataManager.GetTooltipRarityMaterial
	// class UMaterialInterface* GetTooltipRarityMaterial(EItemRarity Rarity);                                               // [0x48cb940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetTooltipEventHeader
	// class UTexture2D* GetTooltipEventHeader(FString EventBannerLabel);                                                    // [0x48cb840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetLoadoutPartRarityMaterial
	// class UMaterialInterface* GetLoadoutPartRarityMaterial(EItemRarity Rarity);                                           // [0x48cb6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetCustomizationRarityMaterial
	// class UMaterialInterface* GetCustomizationRarityMaterial(EItemRarity Rarity);                                         // [0x48cb5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetCurrencyIcon
	// TWeakObjectPtr<UTexture2D*> GetCurrencyIcon(ECurrencyType CurrencyType);                                              // [0x48cb4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetAlertRewardEventBackground
	// class UTexture2D* GetAlertRewardEventBackground(FString EventThemeLabel);                                             // [0x48cb3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIManagers.UIEventDispatcher
/// Size: 0x01F0 (0x000038 - 0x000228)
class UUIEventDispatcher : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1F0];                                     // 0x0038   (0x01F0)  MISSED
};

/// Class /Script/DBDUIManagers.UIScaleManager
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UUIScaleManager : public UGameInstanceSubsystem
{ 
public:
	class UDataTable*                                  _dpiScaleCurveDB;                                           // 0x0038   (0x0008)  
	class UCurveFloat*                                 _dpiScaleCurve;                                             // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x98];                                      // 0x0048   (0x0098)  MISSED


	/// Functions
	// Function /Script/DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor
	// float GetSkillCheckScaleFactor();                                                                                     // [0x48cb810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetScaleFactor
	// float GetScaleFactor(EScaleType Type);                                                                                // [0x48cb780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetMenuScaleFactor
	// float GetMenuScaleFactor();                                                                                           // [0x48cb750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetHudScaleFactor
	// float GetHudScaleFactor();                                                                                            // [0x48cb670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio
	// EDPIScaleCurveRatio GetDPIScaleCurveRatio();                                                                          // [0x48cb640] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DBDUIManagers.DPIScaleCurveForRatio
/// Size: 0x0038 (0x000008 - 0x000040)
struct FDPIScaleCurveForRatio : FDBDTableRowBase
{ 
	EDPIScaleCurveRatio                                Ratio;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(48,3282) /* TWeakObjectPtr<UCurveFloat*> */ __um(DPIScaleCurve);                                 // 0x0010   (0x0030)  
};

