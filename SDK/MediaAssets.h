
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x06
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX             = 9
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x06
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x06
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x08
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX                                         = 7
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x05
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX                     = 4
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04
enum class EMediaSoundChannels : uint32_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX                                     = 3
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x05
enum class MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3,
	MTORI_MAX                                                                        = 4
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x03
enum class MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1,
	MTOF_MAX                                                                         = 2
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (0x000030 - 0x000088)
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSource.Validate
	// bool Validate();                                                                                                      // [0x782b550] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString
	// void SetMediaOptionString(FName& Key, FString value);                                                                 // [0x782b200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
	// void SetMediaOptionInt64(FName& Key, int64_t value);                                                                  // [0x782b110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
	// void SetMediaOptionFloat(FName& Key, float value);                                                                    // [0x782b020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
	// void SetMediaOptionBool(FName& Key, bool value);                                                                      // [0x782af30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.GetUrl
	// FString GetUrl();                                                                                                     // [0x4bfcbe0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              playerName;                                                 // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	SDK_UNDEFINED(16,1583) /* FString */               __um(FilePath);                                             // 0x0098   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x00A9   (0x0017)  MISSED


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	// void SetFilePath(FString Path);                                                                                       // [0x7828520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                          // [0x7826730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                           // [0x78265e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                           // [0x7826490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UMediaComponent : public UActorComponent
{ 
public:
	class UMediaTexture*                               MediaTexture;                                               // 0x00B8   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                               // [0x588b000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x7826c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000030 - 0x000040)
class UMediaTimeStampInfo : public UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0030   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0038   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0110 (0x000030 - 0x000140)
class UMediaPlayer : public UObject
{ 
public:
	SDK_UNDEFINED(16,1584) /* FMulticastInlineDelegate */ __um(OnEndReached);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1585) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                     // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1586) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1587) /* FMulticastInlineDelegate */ __um(OnMediaOpenFailed);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1588) /* FMulticastInlineDelegate */ __um(OnPlaybackResumed);                                 // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1589) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                               // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1590) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                   // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1591) /* FMulticastInlineDelegate */ __um(OnTracksChanged);                                   // 0x00A0   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00B0   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00B8   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00C0   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00C8   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00CC:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00CC:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00CD   (0x0003)  MISSED
	class UMediaPlaylist*                              Playlist;                                                   // 0x00D0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00E0   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00E8   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00EC   (0x0004)  
	FRotator                                           viewRotation;                                               // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData03_5[0x2C];                                      // 0x00FC   (0x002C)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0128   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0138   (0x0008)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                               // [0x7828dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                             // [0x7828d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                        // [0x7828cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                              // [0x7828be0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                   // [0x7828ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                // [0x78289b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                            // [0x78288a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	// void SetTimeDelay(FTimespan TimeDelay);                                                                               // [0x7828810] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                             // [0x7828780] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	// bool SetNativeVolume(float Volume);                                                                                   // [0x78286f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	// void SetMediaOptions(class UMediaSource* Options);                                                                    // [0x7828660] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                        // [0x78285c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	// void SetDesiredPlayerName(FName playerName);                                                                          // [0x7828480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	// void SetBlockOnTime(FTimespan& Time);                                                                                 // [0x78283f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                    // [0x7828320] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	// bool Seek(FTimespan& Time);                                                                                           // [0x7828280] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	// bool Rewind();                                                                                                        // [0x7828250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	// bool Reopen();                                                                                                        // [0x7828220] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	// bool Previous();                                                                                                      // [0x78281f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                   // [0x78281d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	// bool Play();                                                                                                          // [0x78281a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	// bool Pause();                                                                                                         // [0x7828170] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	// bool OpenUrl(FString URL);                                                                                            // [0x78280c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(class UMediaSource* MediaSource, FMediaPlayerOptions& Options);                            // [0x7827fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	// void OpenSourceLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x7827dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	// bool OpenSource(class UMediaSource* MediaSource);                                                                     // [0x7827d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t index);                                              // [0x7827c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	// bool OpenPlaylist(class UMediaPlaylist* InPlaylist);                                                                  // [0x7827bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	// bool OpenFile(FString FilePath);                                                                                      // [0x7827b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	// bool Next();                                                                                                          // [0x7827ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	// bool IsReady();                                                                                                       // [0x7827aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                   // [0x7827a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x7827a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	// bool IsPaused();                                                                                                      // [0x7827a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	// bool IsLooping();                                                                                                     // [0x78279e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	// bool IsConnecting();                                                                                                  // [0x78279b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	// bool IsClosed();                                                                                                      // [0x7827980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	// bool IsBuffering();                                                                                                   // [0x7827950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	// bool HasError();                                                                                                      // [0x7827920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	// FRotator GetViewRotation();                                                                                           // [0x78278e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x78277d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                         // [0x7827700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x7827630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                           // [0x7827550] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x7827480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                       // [0x7827450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	// FString GetUrl();                                                                                                     // [0x7827410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                            // [0x7827300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x7827230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                           // [0x7827100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	// class UMediaTimeStampInfo* GetTimeStamp();                                                                            // [0x78270d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	// FTimespan GetTimeDelay();                                                                                             // [0x7827090] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                  // [0x7827050] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                // [0x7826f50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                // [0x7826ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	// float GetRate();                                                                                                      // [0x7826e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                           // [0x7826e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	// class UMediaPlaylist* GetPlaylist();                                                                                  // [0x7826e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	// FName GetPlayerName();                                                                                                // [0x7826e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                    // [0x7826d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                          // [0x7826cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	// FText GetMediaName();                                                                                                 // [0x7826be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                     // [0x7826bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                              // [0x7826b70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	// FName GetDesiredPlayerName();                                                                                         // [0x7826b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x7826a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                             // [0x7826950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                               // [0x7826880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	// void Close();                                                                                                         // [0x7826470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	// bool CanPlayUrl(FString URL);                                                                                         // [0x78263c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	// bool CanPlaySource(class UMediaSource* MediaSource);                                                                  // [0x7826320] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	// bool CanPause();                                                                                                      // [0x78262f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (0x000030 - 0x000040)
class UMediaPlaylist : public UObject
{ 
public:
	TArray<class UMediaSource*>                        Items;                                                      // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	// bool Replace(int32_t index, class UMediaSource* Replacement);                                                         // [0x782ac70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	// bool RemoveAt(int32_t index);                                                                                         // [0x782abd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	// bool Remove(class UMediaSource* MediaSource);                                                                         // [0x782ab30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	// int32_t Num();                                                                                                        // [0x782ab10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	// void Insert(class UMediaSource* MediaSource, int32_t index);                                                          // [0x782aa40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	// class UMediaSource* GetRandom(int32_t& OutIndex);                                                                     // [0x782a920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	// class UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                 // [0x782a880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	// class UMediaSource* GetNext(int32_t& InOutIndex);                                                                     // [0x782a760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	// class UMediaSource* Get(int32_t index);                                                                               // [0x782a5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	// bool AddUrl(FString URL);                                                                                             // [0x782a2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	// bool AddFile(FString FilePath);                                                                                       // [0x782a220] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	// bool Add(class UMediaSource* MediaSource);                                                                            // [0x782a180] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0160 (0x0006E0 - 0x000840)
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x06E0   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x06E4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06E5   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x06E8   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x06EC   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06FC   (0x0004)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0700   (0x0008)  
	unsigned char                                      UnknownData02_6[0x138];                                     // 0x0708   (0x0138)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);        // [0x782b420] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                              // [0x782b300] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                   // [0x782ae60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                      // [0x782add0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                           // [0x782ad40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                           // [0x782a9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                 // [0x782a800] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x782a700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// float GetEnvelopeValue();                                                                                             // [0x782a6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                             // [0x782a380] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00E0 (0x000180 - 0x000260)
class UMediaTexture : public UTexture
{ 
public:
	SDK_UNDEFINED(1,1592) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x0178   (0x0001)  
	SDK_UNDEFINED(1,1593) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x0179   (0x0001)  
	bool                                               AutoClear;                                                  // 0x017A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x017B   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x017C   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x018C   (0x0001)  
	char                                               NumMips;                                                    // 0x018D   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x018E   (0x0001)  
	SDK_UNDEFINED(1,1594) /* TEnumAsByte<MediaTextureOutputFormat> */ __um(OutputFormat);                          // 0x018F   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x0190   (0x0004)  
	SDK_UNDEFINED(1,1595) /* TEnumAsByte<MediaTextureOrientation> */ __um(CurrentOrientation);                     // 0x0194   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0195   (0x0003)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0198   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x01A0   (0x00C0)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                              // [0x782b390] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	// int32_t GetWidth();                                                                                                   // [0x5c1c460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	// int32_t GetTextureNumMips();                                                                                          // [0x45c7fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x782a730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	// int32_t GetHeight();                                                                                                  // [0x782a6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	// float GetAspectRatio();                                                                                               // [0x782a670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000088 - 0x000090)
class UPlatformMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0088   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	SDK_UNDEFINED(16,1596) /* FString */               __um(StreamUrl);                                            // 0x0098   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x009C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x00A0   (0x0008)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMediaCaptureDevice
{ 
	SDK_UNDEFINED(24,1597) /* FText */                 __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,1598) /* FString */               __um(URL);                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

