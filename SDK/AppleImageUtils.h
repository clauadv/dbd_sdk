
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/AppleImageUtils.EAppleTextureType
/// Size: 0x06
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown                                                       = 0,
	EAppleTextureType__Image                                                         = 1,
	EAppleTextureType__PixelBuffer                                                   = 2,
	EAppleTextureType__Surface                                                       = 3,
	EAppleTextureType__MetalTexture                                                  = 4,
	EAppleTextureType__EAppleTextureType_MAX                                         = 5
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection
/// Size: 0x09
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None                                                  = 0,
	ETextureRotationDirection__Left                                                  = 1,
	ETextureRotationDirection__Right                                                 = 2,
	ETextureRotationDirection__Down                                                  = 3,
	ETextureRotationDirection__LeftMirrored                                          = 4,
	ETextureRotationDirection__RightMirrored                                         = 5,
	ETextureRotationDirection__DownMirrored                                          = 6,
	ETextureRotationDirection__UpMirrored                                            = 7,
	ETextureRotationDirection__ETextureRotationDirection_MAX                         = 8
};

/// Struct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAppleImageUtilsImageConversionResult
{ 
	SDK_UNDEFINED(16,3541) /* FString */               __um(Error);                                                // 0x0000   (0x0010)  
	TArray<char>                                       ImageData;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,3542) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3543) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0058   (0x0010)  MISSED
	FAppleImageUtilsImageConversionResult              ConversionResult;                                           // 0x0068   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x4542330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x4542170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x4541f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x4541db0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AppleImageUtils.AppleImageInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAppleImageInterface : public UInterface
{ 
public:
};

