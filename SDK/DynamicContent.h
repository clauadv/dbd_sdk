
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Class /Script/DynamicContent.AsyncTaskDownloadCacheImage
/// Size: 0x0030 (0x000038 - 0x000068)
class UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,4582) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4583) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,4584) /* FString */               __um(_url);                                                 // 0x0058   (0x0010)  
};

/// Class /Script/DynamicContent.DownloadingTextureTask
/// Size: 0x0038 (0x000030 - 0x000068)
class UDownloadingTextureTask : public UObject
{ 
public:
	class UAsyncTaskDownloadCacheImage*                _downloadingTask;                                           // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,4585) /* FString */               __um(_url);                                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0048   (0x0018)  MISSED
	class UTexture2DDynamic*                           _downloadedTexture;                                         // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/DynamicContent.DownloadingTextureTask.OnDownloadSucceeded
	// void OnDownloadSucceeded(class UTexture2DDynamic* textureDownloaded);                                                 // [0x8615720] Final|Native|Private 
	// Function /Script/DynamicContent.DownloadingTextureTask.OnDownloadFailed
	// void OnDownloadFailed(class UTexture2DDynamic* textureDownloaded);                                                    // [0x8615690] Final|Native|Private 
};

/// Class /Script/DynamicContent.DownloadMultiTextureTask
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UDownloadMultiTextureTask : public UObject
{ 
public:
	TArray<class UDownloadingTextureTask*>             _downloadingTasks;                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	SDK_UNDEFINED(80,4586) /* TMap<FName, UTexture2DDynamic*> */ __um(_downloadedTextures);                        // 0x0058   (0x0050)  
	int32_t                                            _remainingTasks;                                            // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete
	// void OnTextureDownloadComplete(class UDownloadingTextureTask* taskCompleted);                                         // [0x8615910] Final|Native|Private 
};

/// Struct /Script/DynamicContent.LRUTextureCache
/// Size: 0x0068 (0x000000 - 0x000068)
struct FLRUTextureCache
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(80,4587) /* TMap<FName, UTexture2DDynamic*> */ __um(_cachedTextures);                            // 0x0010   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/DynamicContent.TaskContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTaskContainer
{ 
	class UDownloadMultiTextureTask*                   DownloadTask;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/DynamicContent.DynamicContentHolder
/// Size: 0x01C8 (0x000038 - 0x000200)
class UDynamicContentHolder : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x138];                                     // 0x0038   (0x0138)  MISSED
	FLRUTextureCache                                   _loadedTextures;                                            // 0x0170   (0x0068)  
	TArray<FTaskContainer>                             _currentTasks;                                              // 0x01D8   (0x0010)  
	class ULoopBannerProvider*                         _marketingBannerProvider;                                   // 0x01E8   (0x0008)  
	class ULoopBannerProvider*                         _eventsBannerProvider;                                      // 0x01F0   (0x0008)  
	class ULoadingImagesDataProvider*                  _loadingImagesDataProvider;                                 // 0x01F8   (0x0008)  


	/// Functions
	// Function /Script/DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete
	// void OnDownloadingTaskComplete(class UDownloadMultiTextureTask* completeTask);                                        // [0x8615c80] Final|Native|Private 
};

/// Class /Script/DynamicContent.LoadingImagesDataProvider
/// Size: 0x0058 (0x000030 - 0x000088)
class ULoadingImagesDataProvider : public UObject
{ 
public:
	SDK_UNDEFINED(80,4588) /* TMap<FName, FLoadingImages> */ __um(_cachedLoadingImages);                           // 0x0030   (0x0050)  
	class UDynamicContentHolder*                       _owningDynamicContentHolder;                                // 0x0080   (0x0008)  
};

/// Class /Script/DynamicContent.LoopBannerProvider
/// Size: 0x0018 (0x000030 - 0x000048)
class ULoopBannerProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	int32_t                                            _currentLoopIndex;                                          // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/DynamicContent.BaseBannerData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBaseBannerData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            Priority;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(24,4589) /* FText */                 __um(TitleId);                                              // 0x0010   (0x0018)  
	SDK_UNDEFINED(16,4590) /* FString */               __um(BannerContentId);                                      // 0x0028   (0x0010)  
};

/// Struct /Script/DynamicContent.LoadingImagesHintInfo
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FLoadingImagesHintInfo
{ 
	SDK_UNDEFINED(24,4591) /* FText */                 __um(Title);                                                // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,4592) /* FText */                 __um(Description);                                          // 0x0018   (0x0018)  
	FSlateBrush                                        Icon;                                                       // 0x0030   (0x0090)  
	bool                                               IsAvailableForKiller;                                       // 0x00C0   (0x0001)  
	bool                                               IsAvailableForSurvivor;                                     // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
};

/// Struct /Script/DynamicContent.LoadingImages
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLoadingImages
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSlateBrush>                                Images;                                                     // 0x0010   (0x0010)  
	TArray<FLoadingImagesHintInfo>                     ImagesHintInfo;                                             // 0x0020   (0x0010)  
	bool                                               IsAvailableForSurvivor;                                     // 0x0030   (0x0001)  
	bool                                               IsAvailableForKiller;                                       // 0x0031   (0x0001)  
	bool                                               IsGenericImages;                                            // 0x0032   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Struct /Script/DynamicContent.MarketingBannerData
/// Size: 0x0028 (0x000038 - 0x000060)
struct FMarketingBannerData : FBaseBannerData
{ 
	SDK_UNDEFINED(24,4593) /* FText */                 __um(SubTitleId);                                           // 0x0038   (0x0018)  
	SDK_UNDEFINED(16,4594) /* FString */               __um(DeepLink);                                             // 0x0050   (0x0010)  
};

