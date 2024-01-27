
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
	// bool GetLargeTextEnabled();                                                                                           // [0x49361f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIManagers.UIAnalyticsManager
/// Size: 0x0030 (0x000038 - 0x000068)
class UUIAnalyticsManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/DBDUIManagers.UIDataManager
/// Size: 0x01E0 (0x000038 - 0x000218)
class UUIDataManager : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(80,3202) /* TMap<EItemRarity, FRarityMaterialData> */ __um(RarityMaterialMap);                   // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,3203) /* TMap<FString, FTextBlockStyle> */ __um(RichTextStyleMap);                            // 0x0088   (0x0050)  
	SDK_UNDEFINED(80,3204) /* TMap<ECurrencyType, FCurrencyProgressionUIData> */ __um(CurrencyUIDataMap);          // 0x00D8   (0x0050)  
	SDK_UNDEFINED(80,3205) /* TMap<EProgressionType, FCurrencyProgressionUIData> */ __um(ProgressionUIDataMap);    // 0x0128   (0x0050)  
	SDK_UNDEFINED(80,3206) /* TMap<EArchiveMenuState, FArchiveTomeSkinData> */ __um(ArchiveTomeSkinDataMap);       // 0x0178   (0x0050)  
	SDK_UNDEFINED(80,3207) /* TMap<FString, UTexture2D*> */ __um(TooltipEventSkinUIDataMap);                       // 0x01C8   (0x0050)  


	/// Functions
	// Function /Script/DBDUIManagers.UIDataManager.GetTooltipRarityMaterial
	// class UMaterialInterface* GetTooltipRarityMaterial(EItemRarity Rarity);                                               // [0x4936490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetTooltipEventHeader
	// class UTexture2D* GetTooltipEventHeader(FString EventBannerLabel);                                                    // [0x4936390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetLoadoutPartRarityMaterial
	// class UMaterialInterface* GetLoadoutPartRarityMaterial(EItemRarity Rarity);                                           // [0x4936210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetCustomizationRarityMaterial
	// class UMaterialInterface* GetCustomizationRarityMaterial(EItemRarity Rarity);                                         // [0x4936100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIDataManager.GetCurrencyIcon
	// TWeakObjectPtr<UTexture2D*> GetCurrencyIcon(ECurrencyType CurrencyType);                                              // [0x4936030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIManagers.UIEventDispatcher
/// Size: 0x01C0 (0x000038 - 0x0001F8)
class UUIEventDispatcher : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x0038   (0x01C0)  MISSED
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
	// float GetSkillCheckScaleFactor();                                                                                     // [0x4936360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetScaleFactor
	// float GetScaleFactor(EScaleType Type);                                                                                // [0x49362d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetMenuScaleFactor
	// float GetMenuScaleFactor();                                                                                           // [0x49362a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetHudScaleFactor
	// float GetHudScaleFactor();                                                                                            // [0x49361c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio
	// EDPIScaleCurveRatio GetDPIScaleCurveRatio();                                                                          // [0x4936190] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DBDUIManagers.DPIScaleCurveForRatio
/// Size: 0x0038 (0x000008 - 0x000040)
struct FDPIScaleCurveForRatio : FDBDTableRowBase
{ 
	EDPIScaleCurveRatio                                Ratio;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(48,3208) /* TWeakObjectPtr<UCurveFloat*> */ __um(DPIScaleCurve);                                 // 0x0010   (0x0030)  
};

