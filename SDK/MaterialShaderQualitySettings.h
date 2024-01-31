
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality
/// Size: 0x05
enum class EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering                                                = 0,
	EMobileShadowQuality__PCF_1x1                                                    = 1,
	EMobileShadowQuality__PCF_2x2                                                    = 2,
	EMobileShadowQuality__PCF_3x3                                                    = 3,
	EMobileShadowQuality__EMobileShadowQuality_MAX                                   = 4
};

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UMaterialShaderQualitySettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,5271) /* TMap<FName, UShaderPlatformQualitySettings*> */ __um(ForwardSettingMap);             // 0x0030   (0x0050)  
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0009 (0x000000 - 0x000009)
struct FMaterialQualityOverrides
{ 
	bool                                               bDiscardQualityDuringCook;                                  // 0x0000   (0x0001)  
	bool                                               bEnableOverride;                                            // 0x0001   (0x0001)  
	bool                                               bForceFullyRough;                                           // 0x0002   (0x0001)  
	bool                                               bForceNonMetal;                                             // 0x0003   (0x0001)  
	bool                                               bForceDisableLMDirectionality;                              // 0x0004   (0x0001)  
	bool                                               bForceLQReflections;                                        // 0x0005   (0x0001)  
	bool                                               bForceDisablePreintegratedGF;                               // 0x0006   (0x0001)  
	bool                                               bDisableMaterialNormalCalculation;                          // 0x0007   (0x0001)  
	EMobileShadowQuality                               MobileShadowQuality;                                        // 0x0008   (0x0001)  
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0038 (0x000030 - 0x000068)
class UShaderPlatformQualitySettings : public UObject
{ 
public:
	FMaterialQualityOverrides                          QualityOverrides;                                           // 0x0030   (0x0024)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0054   (0x0014)  MISSED
};

