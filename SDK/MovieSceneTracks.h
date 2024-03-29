
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
/// Size: 0x07
enum class MovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X                                                  = 0,
	MovieScene3DPathSection_Axis__Y                                                  = 1,
	MovieScene3DPathSection_Axis__Z                                                  = 2,
	MovieScene3DPathSection_Axis__NEG_X                                              = 3,
	MovieScene3DPathSection_Axis__NEG_Y                                              = 4,
	MovieScene3DPathSection_Axis__NEG_Z                                              = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX                        = 6
};

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x04
enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation                                       = 0,
	EFireEventsAtPosition__AtEndOfEvaluation                                         = 1,
	EFireEventsAtPosition__AfterSpawn                                                = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX                                 = 3
};

/// Enum /Script/MovieSceneTracks.ELevelVisibility
/// Size: 0x03
enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible                                                        = 0,
	ELevelVisibility__Hidden                                                         = 1,
	ELevelVisibility__ELevelVisibility_MAX                                           = 2
};

/// Enum /Script/MovieSceneTracks.EParticleKey
/// Size: 0x04
enum class EParticleKey : uint8_t
{
	EParticleKey__Activate                                                           = 0,
	EParticleKey__Deactivate                                                         = 1,
	EParticleKey__Trigger                                                            = 2,
	EParticleKey__EParticleKey_MAX                                                   = 3
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeEvaluator
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovieSceneCameraShakeEvaluator : public UObject
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
/// Size: 0x0038 (0x000098 - 0x0000D0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{ 
public:
	class UMovieSceneSection*                          SectionToKey;                                               // 0x0098   (0x0008)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x00A0   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00C0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.ByteChannelEvaluatorSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.FloatChannelEvaluatorSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOrigin
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovieSceneTransformOrigin : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// FTransform BP_GetTransformOrigin();                                                                                   // [0x61d2f50] Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.IntegerChannelEvaluatorSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{ 
public:
	FGuid                                              ConstraintId;                                               // 0x00F0   (0x0010)  
	FMovieSceneObjectBindingID                         ConstraintBindingID;                                        // 0x0100   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	// void SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID);                                       // [0x7242e70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	// FMovieSceneObjectBindingID GetConstraintBindingID();                                                                  // [0x7242d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
/// Size: 0x0028 (0x000118 - 0x000140)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0118   (0x0008)  MISSED
	FName                                              AttachSocketName;                                           // 0x0120   (0x000C)  
	FName                                              AttachComponentName;                                        // 0x012C   (0x000C)  
	EAttachmentRule                                    AttachmentLocationRule;                                     // 0x0138   (0x0001)  
	EAttachmentRule                                    AttachmentRotationRule;                                     // 0x0139   (0x0001)  
	EAttachmentRule                                    AttachmentScaleRule;                                        // 0x013A   (0x0001)  
	EDetachmentRule                                    DetachmentLocationRule;                                     // 0x013B   (0x0001)  
	EDetachmentRule                                    DetachmentRotationRule;                                     // 0x013C   (0x0001)  
	EDetachmentRule                                    DetachmentScaleRule;                                        // 0x013D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x013E   (0x0002)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                         // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathSection
/// Size: 0x00A8 (0x000118 - 0x0001C0)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{ 
public:
	FMovieSceneFloatChannel                            TimingCurve;                                                // 0x0118   (0x00A0)  
	MovieScene3DPathSection_Axis                       FrontAxisEnum;                                              // 0x01B8   (0x0001)  
	MovieScene3DPathSection_Axis                       UpAxisEnum;                                                 // 0x01B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01BA   (0x0002)  MISSED
	bool                                               bFollow : 1;                                                // 0x01BC:0 (0x0001)  
	bool                                               bReverse : 1;                                               // 0x01BC:1 (0x0001)  
	bool                                               bForceUpright : 1;                                          // 0x01BC:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01BD   (0x0003)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePropertySystem
/// Size: 0x0018 (0x000048 - 0x000060)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0048   (0x0008)  MISSED
	class UMovieScenePropertyInstantiatorSystem*       InstantiatorSystem;                                         // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
/// Size: 0x0658 (0x0000F0 - 0x000748)
class UMovieScene3DTransformSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneTransformMask                           TransformMask;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x0100   (0x01E0)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x02E0   (0x01E0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x04C0   (0x01E0)  
	FMovieSceneFloatChannel                            ManualWeight;                                               // 0x06A0   (0x00A0)  
	bool                                               bUseQuaternionInterpolation;                                // 0x0740   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0741   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceKey
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneActorReferenceKey
{ 
	FMovieSceneObjectBindingID                         Object;                                                     // 0x0000   (0x0018)  
	FName                                              ComponentName;                                              // 0x0018   (0x000C)  
	FName                                              SocketName;                                                 // 0x0024   (0x000C)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceData
/// Size: 0x00B0 (0x000008 - 0x0000B8)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	FMovieSceneActorReferenceKey                       defaultValue;                                               // 0x0018   (0x0030)  
	TArray<FMovieSceneActorReferenceKey>               KeyValues;                                                  // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0058   (0x0060)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
/// Size: 0x0148 (0x0000F0 - 0x000238)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{ 
public:
	FMovieSceneActorReferenceData                      ActorReferenceData;                                         // 0x00F0   (0x00B8)  
	FIntegralCurve                                     ActorGuidIndexCurve;                                        // 0x01A8   (0x0080)  
	SDK_UNDEFINED(16,974) /* TArray<FString> */        __um(ActorGuidStrings);                                     // 0x0228   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSection
/// Size: 0x0260 (0x0000F0 - 0x000350)
class UMovieSceneAudioSection : public UMovieSceneSection
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x00F0   (0x0008)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x00F8   (0x0004)  
	float                                              startOffset;                                                // 0x00FC   (0x0004)  
	float                                              AudioStartTime;                                             // 0x0100   (0x0004)  
	float                                              AudioDilationFactor;                                        // 0x0104   (0x0004)  
	float                                              AudioVolume;                                                // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            SoundVolume;                                                // 0x0110   (0x00A0)  
	FMovieSceneFloatChannel                            PitchMultiplier;                                            // 0x01B0   (0x00A0)  
	FMovieSceneActorReferenceData                      AttachActorData;                                            // 0x0250   (0x00B8)  
	bool                                               bLooping;                                                   // 0x0308   (0x0001)  
	bool                                               bSuppressSubtitles;                                         // 0x0309   (0x0001)  
	bool                                               bOverrideAttenuation;                                       // 0x030A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x030B   (0x0005)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0310   (0x0008)  
	SDK_UNDEFINED(20,975) /* FDelegateProperty */      __um(OnQueueSubtitles);                                     // 0x0318   (0x0014)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	SDK_UNDEFINED(16,976) /* FMulticastInlineDelegate */ __um(OnAudioFinished);                                    // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,977) /* FMulticastInlineDelegate */ __um(OnAudioPlaybackPercent);                             // 0x0340   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	// void SetStartOffset(FFrameNumber InStartOffset);                                                                      // [0x7242fc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSound
	// void SetSound(class USoundBase* InSound);                                                                             // [0x7242f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	// FFrameNumber GetStartOffset();                                                                                        // [0x7242d90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSound
	// class USoundBase* GetSound();                                                                                         // [0x7242d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AudioSections;                                              // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneBytePropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteSection
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UMovieSceneByteSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneByteChannel                             ByteCurve;                                                  // 0x00F8   (0x0098)  
};

/// Class /Script/MovieSceneTracks.MovieSceneByteTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{ 
public:
	class UEnum*                                       Enum;                                                       // 0x00D0   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneCameraAnimSectionData
{ 
	class UCameraAnim*                                 CameraAnim;                                                 // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              PlayScale;                                                  // 0x000C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0010   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0014   (0x0004)  
	bool                                               bLooping;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraAnimSection
/// Size: 0x0040 (0x0000F0 - 0x000130)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{ 
public:
	FMovieSceneCameraAnimSectionData                   AnimData;                                                   // 0x00F0   (0x0020)  
	class UCameraAnim*                                 CameraAnim;                                                 // 0x0110   (0x0008)  
	float                                              PlayRate;                                                   // 0x0118   (0x0004)  
	float                                              PlayScale;                                                  // 0x011C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0120   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0124   (0x0004)  
	bool                                               bLooping;                                                   // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraAnimTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                         // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
/// Size: 0x0080 (0x0000F0 - 0x000170)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	bool                                               bLockPreviousCamera;                                        // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FGuid                                              CameraGuid;                                                 // 0x00FC   (0x0010)  
	FMovieSceneObjectBindingID                         CameraBindingID;                                            // 0x010C   (0x0018)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0124   (0x000C)  MISSED
	FTransform                                         InitialCameraCutTransform;                                  // 0x0130   (0x0030)  
	bool                                               bHasInitialCameraCutTransform;                              // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0161   (0x000F)  MISSED


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	// void SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID);                                               // [0x7242db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	// FMovieSceneObjectBindingID GetCameraBindingID();                                                                      // [0x7242d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{ 
public:
	bool                                               bCanBlend;                                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0058   (0x0068)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneCameraShakeSectionData
{ 
	class UClass*                                      ShakeClass;                                                 // 0x0000   (0x0008)  
	float                                              PlayScale;                                                  // 0x0008   (0x0004)  
	ECameraShakePlaySpace                              PlaySpace;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
/// Size: 0x0040 (0x0000F0 - 0x000130)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSectionData                  ShakeData;                                                  // 0x00F0   (0x0020)  
	class UClass*                                      ShakeClass;                                                 // 0x0110   (0x0008)  
	float                                              PlayScale;                                                  // 0x0118   (0x0004)  
	ECameraShakePlaySpace                              PlaySpace;                                                  // 0x011C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0120   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSectionData                  ShakeData;                                                  // 0x00F0   (0x0020)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                        // 0x00A0   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneCameraShakeSourceTrigger
{ 
	class UClass*                                      ShakeClass;                                                 // 0x0000   (0x0008)  
	float                                              PlayScale;                                                  // 0x0008   (0x0004)  
	ECameraShakePlaySpace                              PlaySpace;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
/// Size: 0x0080 (0x000008 - 0x000088)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	TArray<FMovieSceneCameraShakeSourceTrigger>        KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
/// Size: 0x0088 (0x0000F0 - 0x000178)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSourceTriggerChannel         Channel;                                                    // 0x00F0   (0x0088)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
/// Size: 0x0028 (0x000170 - 0x000198)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{ 
public:
	SDK_UNDEFINED(16,978) /* FString */                __um(ShotDisplayName);                                      // 0x0170   (0x0010)  
	SDK_UNDEFINED(24,979) /* FText */                  __um(DisplayName);                                          // 0x0180   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	// void SetShotDisplayName(FString InShotDisplayName);                                                                   // [0x72489f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	// FString GetShotDisplayName();                                                                                         // [0x72488c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorSection
/// Size: 0x0288 (0x0000F0 - 0x000378)
class UMovieSceneColorSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            RedCurve;                                                   // 0x00F8   (0x00A0)  
	FMovieSceneFloatChannel                            GreenCurve;                                                 // 0x0198   (0x00A0)  
	FMovieSceneFloatChannel                            BlueCurve;                                                  // 0x0238   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaCurve;                                                 // 0x02D8   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneColorTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{ 
public:
	bool                                               bIsSlateColor;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
/// Size: 0x0180 (0x000048 - 0x0001C8)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x180];                                     // 0x0048   (0x0180)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
/// Size: 0x01E0 (0x000048 - 0x000228)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1E0];                                     // 0x0048   (0x01E0)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentTransformSystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
/// Size: 0x0018 (0x000048 - 0x000060)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumSection
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UMovieSceneEnumSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneByteChannel                             EnumCurve;                                                  // 0x00F8   (0x0098)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{ 
public:
	class UEnum*                                       Enum;                                                       // 0x00D0   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSectionBase
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{ 
public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPtrs
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEventPtrs
{ 
	class UFunction*                                   Function;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEvent
{ 
	FMovieSceneEventPtrs                               Ptrs;                                                       // 0x0000   (0x0028)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneEvent                                   Event;                                                      // 0x00F8   (0x0028)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEventParameters
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/MovieSceneTracks.EventPayload
/// Size: 0x0040 (0x000000 - 0x000040)
struct FEventPayload
{ 
	FName                                              EventName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneEventParameters                         Parameters;                                                 // 0x0010   (0x0030)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionData
/// Size: 0x0080 (0x000008 - 0x000088)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	TArray<FEventPayload>                              KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneEventSection : public UMovieSceneSection
{ 
public:
	FNameCurve                                         Events;                                                     // 0x00F0   (0x0078)  
	FMovieSceneEventSectionData                        EventData;                                                  // 0x0168   (0x0088)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSystem
/// Size: 0x0050 (0x000048 - 0x000098)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem
/// Size: 0x0000 (0x000098 - 0x000098)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem
/// Size: 0x0000 (0x000098 - 0x000098)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostEvalEventSystem
/// Size: 0x0000 (0x000098 - 0x000098)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0098   (0x0010)  MISSED
	bool                                               bFireEventsWhenForwards : 1;                                // 0x00A8:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards : 1;                               // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00A9   (0x0003)  MISSED
	EFireEventsAtPosition                              EventPosition;                                              // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00B0   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventChannel
/// Size: 0x0080 (0x000008 - 0x000088)
struct FMovieSceneEventChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	TArray<FMovieSceneEvent>                           KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection
/// Size: 0x0090 (0x0000F0 - 0x000180)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneEventChannel                            EventChannel;                                               // 0x00F8   (0x0088)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSection
/// Size: 0x00B8 (0x0000F0 - 0x0001A8)
class UMovieSceneFadeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x00F0   (0x00A0)  
	FLinearColor                                       FadeColor;                                                  // 0x0190   (0x0010)  
	bool                                               bFadeAudio : 1;                                             // 0x01A0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatSection
/// Size: 0x00A8 (0x0000F0 - 0x000198)
class UMovieSceneFloatSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x00F8   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneInitialValueSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerSection
/// Size: 0x0098 (0x0000F0 - 0x000188)
class UMovieSceneIntegerSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneIntegerChannel                          IntegerCurve;                                               // 0x00F8   (0x0090)  
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
/// Size: 0x01A8 (0x000048 - 0x0001F0)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1A8];                                     // 0x0048   (0x01A8)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	ELevelVisibility                                   Visibility;                                                 // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TArray<FName>                                      LevelNames;                                                 // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	// void SetVisibility(ELevelVisibility InVisibility);                                                                    // [0x7248af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	// void SetLevelNames(TArray<FName>& InLevelNames);                                                                      // [0x7248940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	// ELevelVisibility GetVisibility();                                                                                     // [0x496cba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	// TArray<FName> GetLevelNames();                                                                                        // [0x7248890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
/// Size: 0x0188 (0x000048 - 0x0001D0)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x188];                                     // 0x0048   (0x0188)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class UMaterialParameterCollection*                MPC;                                                        // 0x00B0   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A8   (0x0008)  MISSED
	int32_t                                            MaterialIndex;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0048   (0x0058)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertySection
/// Size: 0x00C8 (0x0000F0 - 0x0001B8)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{ 
public:
	FMovieSceneObjectPathChannel                       ObjectChannel;                                              // 0x00F0   (0x00C8)  
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00D0   (0x0008)  MISSED
	class UClass*                                      PropertyClass;                                              // 0x00D8   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.BoolParameterNameAndCurve
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FBoolParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneBoolChannel                             ParameterCurve;                                             // 0x0010   (0x0090)  
};

/// Struct /Script/MovieSceneTracks.ScalarParameterNameAndCurve
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FScalarParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            ParameterCurve;                                             // 0x0010   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
/// Size: 0x0150 (0x000000 - 0x000150)
struct FVector2DParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0010   (0x00A0)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x00B0   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.VectorParameterNameAndCurves
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FVectorParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0010   (0x00A0)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x00B0   (0x00A0)  
	FMovieSceneFloatChannel                            ZCurve;                                                     // 0x0150   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.ColorParameterNameAndCurves
/// Size: 0x0290 (0x000000 - 0x000290)
struct FColorParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            RedCurve;                                                   // 0x0010   (0x00A0)  
	FMovieSceneFloatChannel                            GreenCurve;                                                 // 0x00B0   (0x00A0)  
	FMovieSceneFloatChannel                            BlueCurve;                                                  // 0x0150   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaCurve;                                                 // 0x01F0   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.TransformParameterNameAndCurves
/// Size: 0x05B0 (0x000000 - 0x0005B0)
struct FTransformParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x0010   (0x01E0)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x01F0   (0x01E0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x03D0   (0x01E0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSection
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UMovieSceneParameterSection : public UMovieSceneSection
{ 
public:
	TArray<FBoolParameterNameAndCurve>                 BoolParameterNamesAndCurves;                                // 0x00F0   (0x0010)  
	TArray<FScalarParameterNameAndCurve>               ScalarParameterNamesAndCurves;                              // 0x0100   (0x0010)  
	TArray<FVector2DParameterNameAndCurves>            Vector2DParameterNamesAndCurves;                            // 0x0110   (0x0010)  
	TArray<FVectorParameterNameAndCurves>              VectorParameterNamesAndCurves;                              // 0x0120   (0x0010)  
	TArray<FColorParameterNameAndCurves>               ColorParameterNamesAndCurves;                               // 0x0130   (0x0010)  
	TArray<FTransformParameterNameAndCurves>           TransformParameterNamesAndCurves;                           // 0x0140   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	// bool RemoveVectorParameter(FName InParameterName);                                                                    // [0x724ef00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	// bool RemoveVector2DParameter(FName InParameterName);                                                                  // [0x724ee50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	// bool RemoveTransformParameter(FName InParameterName);                                                                 // [0x724eda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	// bool RemoveScalarParameter(FName InParameterName);                                                                    // [0x724ecf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	// bool RemoveColorParameter(FName InParameterName);                                                                     // [0x724ec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	// bool RemoveBoolParameter(FName InParameterName);                                                                      // [0x724eb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	// void GetParameterNames(TSet<FName>& ParameterNames);                                                                  // [0x724ea50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	// void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);                              // [0x724e910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	// void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);                          // [0x724e7f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	// void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, FTransform& InValue);                       // [0x724e670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	// void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);                                // [0x724e540] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	// void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);                          // [0x724e410] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	// void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);                                   // [0x724e2e0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A0   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleChannel
/// Size: 0x0000 (0x000098 - 0x000098)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{ 
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleSection
/// Size: 0x0098 (0x0000F0 - 0x000188)
class UMovieSceneParticleSection : public UMovieSceneSection
{ 
public:
	FMovieSceneParticleChannel                         ParticleKeys;                                               // 0x00F0   (0x0098)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  ParticleSections;                                           // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
/// Size: 0x0028 (0x000070 - 0x000098)
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
/// Size: 0x0028 (0x000070 - 0x000098)
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
/// Size: 0x0028 (0x000070 - 0x000098)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
/// Size: 0x00C0 (0x000070 - 0x000130)
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0070   (0x00C0)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0070   (0x0048)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection
/// Size: 0x00C8 (0x0000F0 - 0x0001B8)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{ 
public:
	FMovieSceneObjectPathChannel                       MaterialChannel;                                            // 0x00F0   (0x00C8)  
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00D0   (0x0008)  MISSED
	int32_t                                            MaterialIndex;                                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
/// Size: 0x0208 (0x000048 - 0x000250)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x208];                                     // 0x0048   (0x0208)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
/// Size: 0x0000 (0x000048 - 0x000048)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FMovieSceneSkeletalAnimationParams
{ 
	class UAnimSequenceBase*                           Animation;                                                  // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x001C   (0x000C)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0028   (0x00A0)  
	bool                                               bSkipAnimNotifiers;                                         // 0x00C8   (0x0001)  
	bool                                               bForceCustomMode;                                           // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	float                                              startOffset;                                                // 0x00CC   (0x0004)  
	float                                              EndOffset;                                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
/// Size: 0x0190 (0x0000F0 - 0x000280)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{ 
public:
	FMovieSceneSkeletalAnimationParams                 Params;                                                     // 0x00F0   (0x00D8)  
	class UAnimSequence*                               AnimSequence;                                               // 0x01C8   (0x0008)  
	class UAnimSequenceBase*                           Animation;                                                  // 0x01D0   (0x0008)  
	float                                              startOffset;                                                // 0x01D8   (0x0004)  
	float                                              EndOffset;                                                  // 0x01DC   (0x0004)  
	float                                              PlayRate;                                                   // 0x01E0   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x01E4:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x01E5   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x01E8   (0x000C)  
	FVector                                            StartLocationOffset;                                        // 0x01F4   (0x000C)  
	FRotator                                           StartRotationOffset;                                        // 0x0200   (0x000C)  
	bool                                               bMatchWithPrevious;                                         // 0x020C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x020D   (0x0003)  MISSED
	FName                                              MatchedBoneName;                                            // 0x0210   (0x000C)  
	FVector                                            MatchedLocationOffset;                                      // 0x021C   (0x000C)  
	FRotator                                           MatchedRotationOffset;                                      // 0x0228   (0x000C)  
	bool                                               bMatchTranslation;                                          // 0x0234   (0x0001)  
	bool                                               bMatchIncludeZHeight;                                       // 0x0235   (0x0001)  
	bool                                               bMatchRotationYaw;                                          // 0x0236   (0x0001)  
	bool                                               bMatchRotationPitch;                                        // 0x0237   (0x0001)  
	bool                                               bMatchRotationRoll;                                         // 0x0238   (0x0001)  
	unsigned char                                      UnknownData02_6[0x47];                                      // 0x0239   (0x0047)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
/// Size: 0x0058 (0x000098 - 0x0000F0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
	bool                                               bUseLegacySectionIndexBlend;                                // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FMovieSceneSkeletalAnimRootMotionTrackParams       RootMotionParams;                                           // 0x00B8   (0x0030)  
	bool                                               bBlendFirstChildOfRoot;                                     // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSection
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UMovieSceneSlomoSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x00F0   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringChannel
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FMovieSceneStringChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,980) /* TArray<FString> */        __um(Values);                                               // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,981) /* FString */                __um(defaultValue);                                         // 0x0028   (0x0010)  
	bool                                               bHasDefaultValue;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x67];                                      // 0x0039   (0x0067)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneStringSection
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UMovieSceneStringSection : public UMovieSceneSection
{ 
public:
	FMovieSceneStringChannel                           StringCurve;                                                // 0x00F0   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneStringTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginSystem
/// Size: 0x0038 (0x000048 - 0x000080)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0048   (0x0038)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorSection
/// Size: 0x0290 (0x0000F0 - 0x000380)
class UMovieSceneVectorSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            Curves;                                                     // 0x00F8   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x0378   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x037C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorTrack
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{ 
public:
	int32_t                                            NumChannelsUsed;                                            // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
/// Size: 0x0050 (0x000048 - 0x000098)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem
/// Size: 0x0038 (0x000048 - 0x000080)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0048   (0x0038)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
/// Size: 0x00C0 (0x000020 - 0x0000E0)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneObjectBindingID                         PathBindingID;                                              // 0x0020   (0x0018)  
	FMovieSceneFloatChannel                            TimingCurve;                                                // 0x0038   (0x00A0)  
	MovieScene3DPathSection_Axis                       FrontAxisEnum;                                              // 0x00D8   (0x0001)  
	MovieScene3DPathSection_Axis                       UpAxisEnum;                                                 // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00DA   (0x0002)  MISSED
	bool                                               bFollow : 1;                                                // 0x00DC:0 (0x0001)  
	bool                                               bReverse : 1;                                               // 0x00DC:1 (0x0001)  
	bool                                               bForceUpright : 1;                                          // 0x00DC:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
/// Size: 0x0040 (0x000008 - 0x000048)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0014   (0x000C)  
	FVector                                            Scale;                                                      // 0x0020   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x002C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Scale;                                                      // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{ 
	FRotator                                           Rotation;                                                   // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
/// Size: 0x00D8 (0x000020 - 0x0000F8)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScenePropertySectionData                     PropertyData;                                               // 0x0020   (0x0020)  
	FMovieSceneActorReferenceData                      ActorReferenceData;                                         // 0x0040   (0x00B8)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAudioSection*                     AudioSection;                                               // 0x0020   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneCameraAnimSectionData                   SourceData;                                                 // 0x0020   (0x0020)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneCameraShakeSectionData                  SourceData;                                                 // 0x0020   (0x0020)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0044   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate
{ 
	TArray<FFrameNumber>                               TriggerTimes;                                               // 0x0020   (0x0010)  
	TArray<FMovieSceneCameraShakeSourceTrigger>        TriggerValues;                                              // 0x0030   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneCameraShakeSectionData                  SourceData;                                                 // 0x0020   (0x0020)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorKeyStruct
/// Size: 0x0030 (0x000008 - 0x000038)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{ 
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       Time;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x001C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorSectionTemplate
/// Size: 0x0288 (0x000040 - 0x0002C8)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            Curves;                                                     // 0x0040   (0x0280)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02C1   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPayloadVariable
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEventPayloadVariable
{ 
	SDK_UNDEFINED(16,982) /* FString */                __um(value);                                                // 0x0000   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventTriggerData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMovieSceneEventTriggerData
{ 
	FMovieSceneEventPtrs                               Ptrs;                                                       // 0x0000   (0x0028)  
	FGuid                                              ObjectBindingId;                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
/// Size: 0x0090 (0x000020 - 0x0000B0)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneEventSectionData                        EventData;                                                  // 0x0020   (0x0088)  
	bool                                               bFireEventsWhenForwards : 1;                                // 0x00A8:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards : 1;                               // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneFadeSectionTemplate
/// Size: 0x00B8 (0x000020 - 0x0000D8)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneFloatChannel                            FadeCurve;                                                  // 0x0020   (0x00A0)  
	FLinearColor                                       FadeColor;                                                  // 0x00C0   (0x0010)  
	bool                                               bFadeAudio : 1;                                             // 0x00D0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	TArray<FScalarParameterNameAndCurve>               Scalars;                                                    // 0x0020   (0x0010)  
	TArray<FBoolParameterNameAndCurve>                 Bools;                                                      // 0x0030   (0x0010)  
	TArray<FVector2DParameterNameAndCurves>            Vector2Ds;                                                  // 0x0040   (0x0010)  
	TArray<FVectorParameterNameAndCurves>              Vectors;                                                    // 0x0050   (0x0010)  
	TArray<FColorParameterNameAndCurves>               Colors;                                                     // 0x0060   (0x0010)  
	TArray<FTransformParameterNameAndCurves>           Transforms;                                                 // 0x0070   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
/// Size: 0x0008 (0x000080 - 0x000088)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	class UMaterialParameterCollection*                MPC;                                                        // 0x0080   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneObjectPropertyTemplate
/// Size: 0x00C8 (0x000040 - 0x000108)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneObjectPathChannel                       ObjectChannel;                                              // 0x0040   (0x00C8)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
/// Size: 0x0008 (0x000080 - 0x000088)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
/// Size: 0x0098 (0x000020 - 0x0000B8)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneParticleChannel                         ParticleKeys;                                               // 0x0020   (0x0098)  
};

/// Struct /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
/// Size: 0x00D0 (0x000020 - 0x0000F0)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMovieSceneObjectPathChannel                       MaterialChannel;                                            // 0x0028   (0x00C8)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringPropertySectionTemplate
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneStringChannel                           StringCurve;                                                // 0x0040   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x0040   (0x0090)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x00D8   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x00DC   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
/// Size: 0x00E0 (0x000020 - 0x000100)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                  // 0x0020   (0x00E0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
/// Size: 0x00A0 (0x000020 - 0x0000C0)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneFloatChannel                            SlomoCurve;                                                 // 0x0020   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.LevelVisibilityComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLevelVisibilityComponentData
{ 
	class UMovieSceneLevelVisibilitySection*           Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4KeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector4                                           Vector;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{ 
	FVector                                            Vector;                                                     // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
/// Size: 0x0008 (0x000028 - 0x000030)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{ 
	FVector2D                                          Vector;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{ 
};

