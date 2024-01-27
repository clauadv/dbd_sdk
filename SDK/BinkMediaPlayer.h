
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
/// Size: 0x06
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
	BMASM_Bink_DS_RenderToTexture                                                    = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio                                   = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize                                           = 2,
	BMASM_Bink_DS_OverlayFillScreen                                                  = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle                                = 4,
	BMASM_Bink_DS_MAX                                                                = 5
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
/// Size: 0x08
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
	BMASM_Bink_Sound_None                                                            = 0,
	BMASM_Bink_Sound_Simple                                                          = 1,
	BMASM_Bink_Sound_LanguageOverride                                                = 2,
	BMASM_Bink_Sound                                                                 = 3,
	BMASM_Bink_Sound_51LanguageOverride                                              = 4,
	BMASM_Bink_Sound6                                                                = 5,
	BMASM_Bink_Sound_71LanguageOverride                                              = 6,
	BMASM_Bink_Sound_MAX                                                             = 7
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
/// Size: 0x04
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
	BMASM_Bink_Stream                                                                = 0,
	BMASM_Bink_PreloadAll                                                            = 1,
	BMASM_Bink_StreamUntilResident                                                   = 2,
	BMASM_Bink_MAX                                                                   = 3
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
/// Size: 0x08
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
	MP_Bink_Sound_None                                                               = 0,
	MP_Bink_Sound_Simple                                                             = 1,
	MP_Bink_Sound_LanguageOverride                                                   = 2,
	MP_Bink_Sound                                                                    = 3,
	MP_Bink_Sound_51LanguageOverride                                                 = 4,
	MP_Bink_Sound6                                                                   = 5,
	MP_Bink_Sound_71LanguageOverride                                                 = 6,
	MP_Bink_Sound_MAX                                                                = 7
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
/// Size: 0x04
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
	MP_Bink_Stream                                                                   = 0,
	MP_Bink_PreloadAll                                                               = 1,
	MP_Bink_StreamUntilResident                                                      = 2,
	MP_Bink_MAX                                                                      = 3
};

/// Class /Script/BinkMediaPlayer.BinkFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	// FTimespan BinkLoadingMovie_GetTime();                                                                                 // [0x4a21760] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
	// FTimespan BinkLoadingMovie_GetDuration();                                                                             // [0x4a21720] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
	// void Bink_DrawOverlays();                                                                                             // [0x4a217a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/BinkMediaPlayer.BinkMediaPlayer
/// Size: 0x00F8 (0x000030 - 0x000128)
class UBinkMediaPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,3187) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3188) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                     // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,3189) /* FMulticastInlineDelegate */ __um(OnMediaReachedEnd);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,3190) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                               // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,3191) /* FMulticastInlineDelegate */ __um(OnSubtitleChangeEvent);                             // 0x0078   (0x0010)  
	bool                                               Looping : 1;                                                // 0x0088:0 (0x0001)  
	bool                                               StartImmediately : 1;                                       // 0x0088:1 (0x0001)  
	bool                                               DelayedOpen : 1;                                            // 0x0088:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0089   (0x0003)  MISSED
	FVector2D                                          BinkDestinationUpperLeft;                                   // 0x008C   (0x0008)  
	FVector2D                                          BinkDestinationLowerRight;                                  // 0x0094   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3192) /* FString */               __um(URL);                                                  // 0x00A0   (0x0010)  
	SDK_UNDEFINED(1,3193) /* TEnumAsByte<EBinkMediaPlayerBinkBufferModes> */ __um(BinkBufferMode);                 // 0x00B0   (0x0001)  
	SDK_UNDEFINED(1,3194) /* TEnumAsByte<EBinkMediaPlayerBinkSoundTrack> */ __um(BinkSoundTrack);                  // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	int32_t                                            BinkSoundTrackStart;                                        // 0x00B4   (0x0004)  
	SDK_UNDEFINED(1,3195) /* TEnumAsByte<EBinkMediaPlayerBinkDrawStyle> */ __um(BinkDrawStyle);                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            BinkLayerDepth;                                             // 0x00BC   (0x0004)  
	unsigned char                                      UnknownData05_6[0x68];                                      // 0x00C0   (0x0068)  MISSED


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                               // [0x4a22170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                             // [0x4a22170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                        // [0x4a220a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Stop
	// void Stop();                                                                                                          // [0x4a22080] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetVolume
	// void SetVolume(float Rate);                                                                                           // [0x4a22000] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                             // [0x4a21f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetLooping
	// bool SetLooping(bool InLooping);                                                                                      // [0x4a21e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Seek
	// bool Seek(FTimespan& InTime);                                                                                         // [0x4a21da0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Rewind
	// bool Rewind();                                                                                                        // [0x4a21d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Play
	// bool Play();                                                                                                          // [0x4a21d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Pause
	// bool Pause();                                                                                                         // [0x4a21d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.OpenUrl
	// bool OpenUrl(FString NewUrl);                                                                                         // [0x4a21c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsStopped
	// bool IsStopped();                                                                                                     // [0x4a21c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsSeeking
	// bool IsSeeking();                                                                                                     // [0x4a21c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x4a21bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPaused
	// bool IsPaused();                                                                                                      // [0x4a21ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsLooping
	// bool IsLooping();                                                                                                     // [0x4a21b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsInitialized
	// bool IsInitialized();                                                                                                 // [0x4a21b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetUrl
	// FString GetUrl();                                                                                                     // [0x4a21b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                  // [0x4a21ac0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetRate
	// float GetRate();                                                                                                      // [0x4a21a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                              // [0x4a21a50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Draw
	// void Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float alpha, bool srgb_decode, bool hdr);          // [0x4a21860] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CloseUrl
	// void CloseUrl();                                                                                                      // [0x4a21840] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPlay
	// bool CanPlay();                                                                                                       // [0x4a217f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPause
	// bool CanPause();                                                                                                      // [0x4a217c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BinkMediaPlayer.BinkMediaTexture
/// Size: 0x0030 (0x000180 - 0x0001B0)
class UBinkMediaTexture : public UTexture
{ 
public:
	SDK_UNDEFINED(1,3196) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x0178   (0x0001)  
	SDK_UNDEFINED(1,3197) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x017A   (0x0006)  MISSED
	class UBinkMediaPlayer*                            MediaPlayer;                                                // 0x0180   (0x0008)  
	SDK_UNDEFINED(1,3198) /* TEnumAsByte<EPixelFormat> */ __um(PixelFormat);                                       // 0x0188   (0x0001)  
	bool                                               tonemap;                                                    // 0x0189   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x018A   (0x0002)  MISSED
	float                                              OutputNits;                                                 // 0x018C   (0x0004)  
	float                                              alpha;                                                      // 0x0190   (0x0004)  
	bool                                               DecodeSRGB;                                                 // 0x0194   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1B];                                      // 0x0195   (0x001B)  MISSED


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);                                                           // [0x4a21ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaTexture.Clear
	// void Clear();                                                                                                         // [0x4a21820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BinkMediaPlayer.BinkMoviePlayerSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UBinkMoviePlayerSettings : public UObject
{ 
public:
	SDK_UNDEFINED(1,3199) /* TEnumAsByte<EBinkMoviePlayerBinkBufferModes> */ __um(BinkBufferMode);                 // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,3200) /* TEnumAsByte<EBinkMoviePlayerBinkSoundTrack> */ __um(BinkSoundTrack);                  // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            BinkSoundTrackStart;                                        // 0x0034   (0x0004)  
	FVector2D                                          BinkDestinationUpperLeft;                                   // 0x0038   (0x0008)  
	FVector2D                                          BinkDestinationLowerRight;                                  // 0x0040   (0x0008)  
	SDK_UNDEFINED(1,3201) /* TEnumAsByte<EPixelFormat> */ __um(BinkPixelFormat);                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

