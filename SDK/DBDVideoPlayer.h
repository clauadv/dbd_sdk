
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: UMG

/// Class /Script/DBDVideoPlayer.VideoNativePlayer
/// Size: 0x0060 (0x000230 - 0x000290)
class AVideoNativePlayer : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0230   (0x0060)  MISSED
};

/// Class /Script/DBDVideoPlayer.VideoPlayer
/// Size: 0x0000 (0x000030 - 0x000030)
class UVideoPlayer : public UInterface
{ 
public:
};

/// Class /Script/DBDVideoPlayer.VideoThumbnailPlayer
/// Size: 0x00C8 (0x000230 - 0x0002F8)
class AVideoThumbnailPlayer : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0230   (0x0050)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0280   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x0288   (0x0008)  
	class UUserWidget*                                 VideoPlayerWidget;                                          // 0x0290   (0x0008)  
	class UAudioComponent*                             _audioComponent;                                            // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x02A0   (0x0018)  MISSED
	SDK_UNDEFINED(48,4974) /* TWeakObjectPtr<UMediaSource*> */ __um(_source);                                      // 0x02B8   (0x0030)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x02E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDVideoPlayer.VideoThumbnailPlayer.OnVideoAssetLoaded
	// void OnVideoAssetLoaded();                                                                                            // [0x85acc70] Final|Native|Private 
	// Function /Script/DBDVideoPlayer.VideoThumbnailPlayer.OnMediaOpened
	// void OnMediaOpened(FString OpenedUrl);                                                                                // [0x85acb80] Final|Native|Private 
	// Function /Script/DBDVideoPlayer.VideoThumbnailPlayer.OnMediaClosed
	// void OnMediaClosed();                                                                                                 // [0x85acb60] Final|Native|Private 
	// Function /Script/DBDVideoPlayer.VideoThumbnailPlayer.OnEndReached
	// void OnEndReached();                                                                                                  // [0x85acb40] Final|Native|Private 
};

/// Struct /Script/DBDVideoPlayer.VideoThumbnailProperties
/// Size: 0x0058 (0x000008 - 0x000060)
struct FVideoThumbnailProperties : FDBDTableRowBase
{ 
	FName                                              _id;                                                        // 0x0008   (0x000C)  
	bool                                               _hasAudio;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector2D                                          _size;                                                      // 0x0018   (0x0008)  
	SDK_UNDEFINED(48,4975) /* TWeakObjectPtr<UMediaSource*> */ __um(_source);                                      // 0x0020   (0x0030)  
	float                                              _fadeInDuration;                                            // 0x0050   (0x0004)  
	float                                              _fadeOutDuration;                                           // 0x0054   (0x0004)  
	float                                              _delayDuration;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

