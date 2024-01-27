
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	// bool ApplyColorSpaceTransform(class UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget); // [0x4c231a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UOpenColorIOColorTransform : public UObject
{ 
public:
	class UOpenColorIOConfiguration*                   ConfigurationOwner;                                         // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,4919) /* FString */               __um(SourceColorSpace);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4920) /* FString */               __um(DestinationColorSpace);                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0058   (0x0048)  MISSED
};

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOpenColorIOColorSpace
{ 
	SDK_UNDEFINED(16,4921) /* FString */               __um(ColorSpaceName);                                       // 0x0000   (0x0010)  
	int32_t                                            ColorSpaceIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,4922) /* FString */               __um(FamilyName);                                           // 0x0018   (0x0010)  
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x0058 (0x000030 - 0x000088)
class UOpenColorIOConfiguration : public UObject
{ 
public:
	FFilePath                                          ConfigurationFile;                                          // 0x0030   (0x0010)  
	TArray<FOpenColorIOColorSpace>                     DesiredColorSpaces;                                         // 0x0040   (0x0010)  
	TArray<class UOpenColorIOColorTransform*>          ColorTransforms;                                            // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0010 (0x000030 - 0x000040)
class UOpenColorIODisplayExtensionWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	// void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);               // [0x4c23770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	// void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction);                         // [0x4c23680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	// void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);                            // [0x4c23560] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	// void RemoveSceneExtension();                                                                                          // [0x4c23540] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // [0x4c23370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FOpenColorIOColorConversionSettings
{ 
	class UOpenColorIOConfiguration*                   ConfigurationSource;                                        // 0x0000   (0x0008)  
	FOpenColorIOColorSpace                             SourceColorSpace;                                           // 0x0008   (0x0028)  
	FOpenColorIOColorSpace                             DestinationColorSpace;                                      // 0x0030   (0x0028)  
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x0060 (0x000000 - 0x000060)
struct FOpenColorIODisplayConfiguration
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FOpenColorIOColorConversionSettings                ColorConfiguration;                                         // 0x0008   (0x0058)  
};

