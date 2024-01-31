
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BeUtil.BeMaterialEditorHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UBeMaterialEditorHelper : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BeUtil.BeMaterialEditorHelper.ReloadTexture
	// class UTexture* ReloadTexture(class UTexture* InTexture, FString InSourceName);                                       // [0x44a62d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BeUtil.BeMaterialEditorHelper.EditMaterialConstant
	// void EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<FBeMaterialScalar> InScalars, TArray<FBeMaterialVector> InVectors, TArray<FBeMaterialTexture> InTextures); // [0x44a60a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/BeUtil.BeMaterialTexture
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBeMaterialTexture
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UTexture*                                    Texture;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/BeUtil.BeMaterialScalar
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBeMaterialScalar
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	float                                              Scalar;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/BeUtil.BeMaterialVector
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBeMaterialVector
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FLinearColor                                       Vector;                                                     // 0x000C   (0x0010)  
};

