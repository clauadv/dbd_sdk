
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x05
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3,
	ECameraFocusMethod__MAX                                                          = 4
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000230 - 0x000260)
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0230   (0x0004)  
	float                                              CraneYaw;                                                   // 0x0234   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0238   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x023C   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x023D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x023E   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0240   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x0248   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x0250   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x0258   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000230 - 0x000250)
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0230   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x0234   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0235   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0238   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x0240   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x0248   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                     // [0x5c43a40] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	SDK_UNDEFINED(48,4087) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0018   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0048   (0x000C)  
	bool                                               bAllowRoll : 1;                                             // 0x0054:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0070 (0x0007C0 - 0x000830)
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x07C0   (0x0058)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0818   (0x0018)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                 // [0x76ad5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCameraTrackingFocusSettings
{ 
	SDK_UNDEFINED(48,4088) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0000   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0030   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0040)  
	bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0049   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x004C   (0x0004)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x0054   (0x0004)  
	float                                              FocusOffset;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNamedFilmbackPreset
{ 
	SDK_UNDEFINED(16,4089) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNamedLensPreset
{ 
	SDK_UNDEFINED(16,4090) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0100 (0x0007F0 - 0x0008F0)
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x07F0   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x07FC   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0808   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x0820   (0x0060)  
	float                                              CurrentFocalLength;                                         // 0x0880   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0884   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0888   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x088C   (0x000C)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0898   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x08A8   (0x0010)  
	SDK_UNDEFINED(16,4091) /* FString */               __um(DefaultFilmbackPresetName);                            // 0x08B8   (0x0010)  
	SDK_UNDEFINED(16,4092) /* FString */               __um(DefaultFilmbackPreset);                                // 0x08C8   (0x0010)  
	SDK_UNDEFINED(16,4093) /* FString */               __um(DefaultLensPresetName);                                // 0x08D8   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x08E8   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x08EC   (0x0004)  


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                       // [0x76adad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                   // [0x76ada30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                      // [0x76ad9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                       // [0x76ad980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                        // [0x76ad8a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                          // [0x76ad820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                     // [0x76ad7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                // [0x76ad710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                      // [0x76ad690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                               // [0x76ad5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

