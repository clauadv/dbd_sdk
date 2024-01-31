
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/RemoteContentCache.ERemoteContentDownloadStrategy
/// Size: 0x03
enum class ERemoteContentDownloadStrategy : uint8_t
{
	ERemoteContentDownloadStrategy__PreferRemote                                     = 0,
	ERemoteContentDownloadStrategy__PreferPackaged                                   = 1,
	ERemoteContentDownloadStrategy__ERemoteContentDownloadStrategy_MAX               = 2
};

/// Class /Script/RemoteContentCache.TestObject
/// Size: 0x0008 (0x000030 - 0x000038)
class UTestObject : public UObject
{ 
public:
	int32_t                                            TestValue;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/RemoteContentCache.RemoteContentCacheSubsystem
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class URemoteContentCacheSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0038   (0x00A8)  MISSED
};

/// Class /Script/RemoteContentCache.AsyncLoadSoftPtrAsTexture2DNode
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UAsyncLoadSoftPtrAsTexture2DNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1266) /* FMulticastInlineDelegate */ __um(Loaded);                                            // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1267) /* FMulticastInlineDelegate */ __um(LoadFailed);                                        // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0058   (0x0068)  MISSED


	/// Functions
	// Function /Script/RemoteContentCache.AsyncLoadSoftPtrAsTexture2DNode.SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature
	// void SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature(class UTexture2D* LoadedTexture);                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/RemoteContentCache.AsyncLoadSoftPtrAsTexture2DNode.LoadAsTexture2D
	// class UAsyncLoadSoftPtrAsTexture2DNode* LoadAsTexture2D(class UObject* WorldContextObject, FSoftRemoteContentCacheObjectPtr ptrToLoad); // [0x4ac1310] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RemoteContentCache.SoftRemoteContentCacheObjectPtrLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class USoftRemoteContentCacheObjectPtrLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RemoteContentCache.SoftRemoteContentCacheObjectPtrLibrary.BindToImage
	// void BindToImage(class UObject* WorldContextObject, FSoftRemoteContentCacheObjectPtr ptrToBind, class UImage* Target); // [0x4ac1170] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/RemoteContentCache.SoftRemoteContentCacheObjectPtr
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSoftRemoteContentCacheObjectPtr
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/RemoteContentCache.RemoteContentCacheEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRemoteContentCacheEntry
{ 
	SDK_UNDEFINED(16,1268) /* FString */               __um(Schema);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1269) /* FString */               __um(Uri);                                                  // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1270) /* FString */               __um(ContentVersion);                                       // 0x0020   (0x0010)  
	FSoftObjectPath                                    PackagedObjectPath;                                         // 0x0030   (0x0020)  
	ERemoteContentDownloadStrategy                     DownloadStrategy;                                           // 0x0050   (0x0001)  
	bool                                               _isPackaged;                                                // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Struct /Script/RemoteContentCache.RemoteContentCacheLocalManifestEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRemoteContentCacheLocalManifestEntry
{ 
	SDK_UNDEFINED(16,1271) /* FString */               __um(Uri);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1272) /* FString */               __um(ContentVersion);                                       // 0x0010   (0x0010)  
};

/// Struct /Script/RemoteContentCache.RemoteContentCacheLocalManifest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRemoteContentCacheLocalManifest
{ 
	TArray<FRemoteContentCacheLocalManifestEntry>      Entries;                                                    // 0x0000   (0x0010)  
};

