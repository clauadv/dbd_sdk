
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: UMG

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0030 (0x000030 - 0x000060)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
public:
	FGuid                                              SkelTrackGuid;                                              // 0x0030   (0x0010)  
	FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0040   (0x0020)  
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0040 (0x000030 - 0x000070)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class AActor*                                      TransformOriginActor;                                       // 0x0038   (0x0008)  
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0030)  
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0000 (0x000030 - 0x000030)
class ULevelSequenceMetaData : public UInterface
{ 
public:
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FLevelSequenceBindingReferences
{ 
	SDK_UNDEFINED(80,1599) /* TMap<FGuid, FLevelSequenceBindingReferenceArray> */ __um(BindingIdToReferences);     // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1600) /* TSet<FGuid> */           __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x0168 (0x000068 - 0x0001D0)
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0078   (0x0050)  
	FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x00C8   (0x00A0)  
	SDK_UNDEFINED(80,1601) /* TMap<FString, FLevelSequenceObject> */ __um(PossessedObjects);                       // 0x0168   (0x0050)  
	class UClass*                                      DirectorClass;                                              // 0x01B8   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x01C0   (0x0010)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(class UClass* InClass);                                                                    // [0x783a5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// class UObject* FindOrAddMetaDataByClass(class UClass* InClass);                                                       // [0x7839a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// class UObject* FindMetaDataByClass(class UClass* InClass);                                                            // [0x7839a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// class UObject* CopyMetaData(class UObject* InMetaData);                                                               // [0x7839a90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0030 (0x000030 - 0x000060)
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0038   (0x0020)  
	class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                         // [0x783a9d0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1602) /* TEnumAsByte<EAspectRatioAxisConstraint> */ __um(AspectRatioAxisConstraint);           // 0x0001   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0090 (0x000230 - 0x0002C0)
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0248   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x025C   (0x0004)  MISSED
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x0260   (0x0008)  
	FSoftObjectPath                                    LevelSequence;                                              // 0x0268   (0x0020)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x0288   (0x0002)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x028A   (0x0006)  MISSED
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x0290   (0x0008)  
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x0298   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x02A0:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x02A0:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x02A0:2 (0x0001)  
	unsigned char                                      UnknownData03_4[0x7];                                       // 0x02A1   (0x0007)  MISSED
	class UObject*                                     DefaultInstanceData;                                        // 0x02A8   (0x0008)  
	class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x02B0   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                    // [0x783abf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(class ULevelSequence* InSequence);                                                                   // [0x783ab60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                    // [0x783aad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                        // [0x783a870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);           // [0x783a710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                 // [0x783a6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                // [0x783a630] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName Tag, class AActor* Actor);                                                              // [0x783a4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);                                          // [0x783a3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                      // [0x61d2f50] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
	// class ULevelSequence* LoadSequence();                                                                                 // [0x783a360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                    // [0x783a340] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                      // [0x783a2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// class ULevelSequence* GetSequence();                                                                                  // [0x783a250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                      // [0x7839d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                               // [0x7839c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);                            // [0x7839960] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);               // [0x7839810] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceAnimSequenceLinkItem
{ 
	FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)  
	FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0020)  
	bool                                               bExportTransforms;                                          // 0x0030   (0x0001)  
	bool                                               bExportCurves;                                              // 0x0031   (0x0001)  
	bool                                               bRecordInWorldSpace;                                        // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0010 (0x000030 - 0x000040)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
public:
	TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0030   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLevelSequenceSnapshotSettings
{ 
	char                                               ZeroPadAmount;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FLevelSequencePlayerSnapshot
{ 
	SDK_UNDEFINED(16,1603) /* FString */               __um(MasterName);                                           // 0x0000   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1604) /* FString */               __um(CurrentShotName);                                      // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1605) /* FString */               __um(SourceTimecode);                                       // 0x0060   (0x0010)  
	SDK_UNDEFINED(48,1606) /* TWeakObjectPtr<UCameraComponent*> */ __um(CameraComponent);                          // 0x0070   (0x0030)  
	FLevelSequenceSnapshotSettings                     Settings;                                                   // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class ULevelSequence*                              ActiveShot;                                                 // 0x00B0   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C8 (0x000298 - 0x000360)
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0298   (0x00C0)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(class UObject* InSettings);                                                                          // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// class UClass* GetSettingsClass();                                                                                     // [0x783a300] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0010 (0x000030 - 0x000040)
class ULevelSequenceDirector : public UObject
{ 
public:
	class ULevelSequencePlayer*                        Player;                                                     // 0x0030   (0x0008)  
	int32_t                                            SubSequenceID;                                              // 0x0038   (0x0004)  
	int32_t                                            MovieScenePlayerIndex;                                      // 0x003C   (0x0004)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	// void OnCreated();                                                                                                     // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                             // [0x783a2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                           // [0x783a140] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	// class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x783a070] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                             // [0x7839f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	// class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x7839e90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0128 (0x0004F0 - 0x000618)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	SDK_UNDEFINED(16,1607) /* FMulticastInlineDelegate */ __um(OnCameraCut);                                       // 0x04F0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x118];                                     // 0x0500   (0x0118)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// class UCameraComponent* GetActiveCameraComponent();                                                                   // [0x7839e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor); // [0x7839b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000048 - 0x000078)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
public:
	bool                                               bDefaultLockEngineToDisplayRate;                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,1608) /* FString */               __um(DefaultDisplayRate);                                   // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1609) /* FString */               __um(DefaultTickResolution);                                // 0x0060   (0x0010)  
	EUpdateClockSource                                 DefaultClockSource;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000230 - 0x000258)
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	class ALevelSequenceActor*                         Sequence;                                                   // 0x0238   (0x0008)  
	class UMediaComponent*                             MediaComponent;                                             // 0x0240   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x0248   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x024C   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                               // [0x783ac10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                          // [0x783a3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                  // [0x783a390] Final|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// class ALevelSequenceActor* GetSequence();                                                                             // [0x783a280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// class UMediaComponent* GetMediaComponent();                                                                           // [0x5c4fda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0040 (0x000000 - 0x000040)
struct FLevelSequenceBindingReference
{ 
	SDK_UNDEFINED(16,1610) /* FString */               __um(PackageName);                                          // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0020)  
	SDK_UNDEFINED(16,1611) /* FString */               __um(ObjectPath);                                           // 0x0030   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceObject
{ 
	SDK_UNDEFINED(28,1612) /* TLazyObjectPtr<UObject*> */ __um(ObjectOrOwner);                                     // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1613) /* FString */               __um(ComponentName);                                        // 0x0020   (0x0010)  
	SDK_UNDEFINED(8,1614) /* TWeakObjectPtr<UObject*> */ __um(CachedComponent);                                    // 0x0030   (0x0008)  
};

