
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX         = 3
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00B8 (0x000068 - 0x000120)
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	SDK_UNDEFINED(48,4188) /* TWeakObjectPtr<UClass*> */ __um(BoundActorClass);                                    // 0x0070   (0x0030)  
	SDK_UNDEFINED(48,4189) /* TWeakObjectPtr<AActor*> */ __um(BoundPreviewActor);                                  // 0x00A0   (0x0030)  
	SDK_UNDEFINED(80,4190) /* TMap<FGuid, FName> */    __um(BoundActorComponents);                                 // 0x00D0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000120 - 0x000120)
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0660 (0x000030 - 0x000690)
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0038   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0050   (0x0560)  
	float                                              PostProcessBlendWeight;                                     // 0x05B0   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x05B4   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x05C0   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x05D8   (0x0060)  
	float                                              CurrentFocalLength;                                         // 0x0638   (0x0004)  
	float                                              CurrentAperture;                                            // 0x063C   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0640   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4C];                                      // 0x0644   (0x004C)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0030 (0x000030 - 0x000060)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0030   (0x0008)  
	float                                              PlayRate;                                                   // 0x0038   (0x0004)  
	float                                              Scale;                                                      // 0x003C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0040   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0044   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0048   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	class USequenceCameraShakeSequencePlayer*          Player;                                                     // 0x0050   (0x0008)  
	class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                              // 0x0058   (0x0008)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x0400 (0x000030 - 0x000430)
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x2A8];                                     // 0x0030   (0x02A8)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x02D8   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x02E0   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02E8   (0x00E8)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x03D0   (0x0060)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	SDK_UNDEFINED(8,4191) /* TWeakObjectPtr<UObject*> */ __um(Object);                                             // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0060 (0x000230 - 0x000290)
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0230   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0240   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x0258   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0260   (0x0020)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0280   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x028C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                // [0x4c1eaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                         // [0x4c1e9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                              // [0x4c1e9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                   // [0x4c1e970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                               // [0x4c1e940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x0004F0 - 0x0004F8)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x4c1e7c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x001C)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x002C   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0030   (0x00A0)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0018 (0x000170 - 0x000188)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0170   (0x0008)  MISSED
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0178   (0x0010)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0048   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0048   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000048 - 0x000098)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

