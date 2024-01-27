
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0040 (0x000098 - 0x0000D8)
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               IsPathRelativeToProjectRoot;                                // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	FFrameRate                                         FrameRateOverride;                                          // 0x009C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	SDK_UNDEFINED(16,4823) /* FString */               __um(ProxyOverride);                                        // 0x00A8   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	// void SetSequencePath(FString Path);                                                                                   // [0x4cf9ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	// void SetMipLevelDistance(float distance);                                                                             // [0x4cf9a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	// void RemoveTargetObject(class AActor* InActor);                                                                       // [0x4cf99c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	// void RemoveGlobalCamera(class AActor* InActor);                                                                       // [0x4cf9930] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	// FString GetSequencePath();                                                                                            // [0x4cf9870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                         // [0x4cf97a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	// void AddTargetObject(class AActor* InActor, float Width);                                                             // [0x4cf96d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	// void AddGlobalCamera(class AActor* InActor);                                                                          // [0x4cf9640] Final|Native|Public|BlueprintCallable 
};

