
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x00F0   (0x0008)  
	bool                                               bLoop;                                                      // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x00F0   (0x0008)  
	bool                                               bLooping;                                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x00FC   (0x0004)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0100   (0x0008)  
	class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0108   (0x0008)  
	bool                                               bUseExternalMediaPlayer;                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	class UMediaPlayer*                                ExternalMediaPlayer;                                        // 0x0118   (0x0008)  
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  MediaSections;                                              // 0x00A0   (0x0010)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (0x000040 - 0x000050)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	class UMediaSource*                                MediaSource;                                                // 0x0040   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0048   (0x0004)  
	bool                                               bLoop;                                                      // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneMediaSectionParams
{ 
	class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0000   (0x0008)  
	class UMediaSource*                                MediaSource;                                                // 0x0008   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0010   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0018   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndFrame;                                            // 0x0024   (0x0004)  
	bool                                               bLooping;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneMediaSectionParams                      Params;                                                     // 0x0020   (0x0030)  
};

