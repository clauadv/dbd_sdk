
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/DBDProceduralCamera.MotionType
/// Size: 0x08
enum class MotionType : uint8_t
{
	Static                                                                           = 0,
	FreeCamera                                                                       = 1,
	Pan                                                                              = 2,
	Tilt                                                                             = 3,
	Orbital                                                                          = 4,
	Crab                                                                             = 5,
	Boom                                                                             = 6,
	MotionType_MAX                                                                   = 7
};

/// Class /Script/DBDProceduralCamera.CameraShotType
/// Size: 0x0028 (0x000230 - 0x000258)
class ACameraShotType : public AActor
{ 
public:
	bool                                               bIsCameraRotationFixed;                                     // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	float                                              MinimumDistanceFromCamera;                                  // 0x0234   (0x0004)  
	float                                              MaximumDistanceFromCamera;                                  // 0x0238   (0x0004)  
	float                                              HorizontalAngleFreedom;                                     // 0x023C   (0x0004)  
	float                                              VerticalAngleFreedom;                                       // 0x0240   (0x0004)  
	SDK_UNDEFINED(1,4554) /* TEnumAsByte<MotionType> */ __um(CameraMotionType);                                    // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	int32_t                                            KeyPoseNumber;                                              // 0x0248   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	class USplineComponent*                            CameraTrack;                                                // 0x0250   (0x0008)  
};

/// Struct /Script/DBDProceduralCamera.CameraShot
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCameraShot
{ 
	class ACameraShotType*                             CameraShotType;                                             // 0x0000   (0x0008)  
	float                                              ShotDuration;                                               // 0x0008   (0x0004)  
	float                                              PriorityWeight;                                             // 0x000C   (0x0004)  
	int32_t                                            TrackSamplingNumberForObstructionComputation;               // 0x0010   (0x0004)  
	float                                              ObstructionScore;                                           // 0x0014   (0x0004)  
};

/// Class /Script/DBDProceduralCamera.ProceduralCameraRaD
/// Size: 0x0050 (0x000298 - 0x0002E8)
class AProceduralCameraRaD : public APawn
{ 
public:
	class UCameraComponent*                            CameraComp;                                                 // 0x0298   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x02A0   (0x0008)  
	TArray<FCameraShot>                                Shots;                                                      // 0x02A8   (0x0010)  
	float                                              MaximumCinematicLengthWanted;                               // 0x02B8   (0x0004)  
	float                                              CinematicTotalLength;                                       // 0x02BC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x02C0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDProceduralCamera.ProceduralCameraRaD.SelectTracks
	// void SelectTracks();                                                                                                  // [0x4c55220] Final|Native|Public  
	// Function /Script/DBDProceduralCamera.ProceduralCameraRaD.PlayCinematic
	// void PlayCinematic();                                                                                                 // [0x4c55200] Final|Native|Private 
	// Function /Script/DBDProceduralCamera.ProceduralCameraRaD.OnCameraTransition
	// void OnCameraTransition(float TransitionDuration, float BeginAt);                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDProceduralCamera.ProceduralCameraRaD.ComputeTrackObstructionScore
	// void ComputeTrackObstructionScore(FCameraShot& CameraShot);                                                           // [0x4c55150] Final|Native|Private|HasOutParms 
	// Function /Script/DBDProceduralCamera.ProceduralCameraRaD.BeginCinematic
	// void BeginCinematic();                                                                                                // [0x4c55130] Final|Native|Public  
};

