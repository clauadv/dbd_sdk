
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x04
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2,
	MT_MAX                                                                           = 3
};

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UMoviePlayerSettings : public UObject
{ 
public:
	bool                                               bWaitForMoviesToComplete;                                   // 0x0030   (0x0001)  
	bool                                               bMoviesAreSkippable;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(16,4882) /* TArray<FString> */       __um(StartupMovies);                                        // 0x0038   (0x0010)  
};

