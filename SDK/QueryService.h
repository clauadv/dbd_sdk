
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/QueryService.ActorPairQueryEvaluatorComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UActorPairQueryEvaluatorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B8   (0x0058)  MISSED
};

/// Class /Script/QueryService.ActorPairQueryEvaluatorSubscriberTest
/// Size: 0x0028 (0x000230 - 0x000258)
class AActorPairQueryEvaluatorSubscriberTest : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0230   (0x0028)  MISSED


	/// Functions
	// Function /Script/QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged
	// void OnRangeChanged(bool inRange);                                                                                    // [0x85e1e00] Final|Native|Public  
};

/// Struct /Script/QueryService.ActorPairQuery
/// Size: 0x0068 (0x000000 - 0x000068)
struct FActorPairQuery
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(80,1719) /* TMap<uint32_t, FDistanceTrackerCase> */ __um(_distanceTrackerCases);                 // 0x0010   (0x0050)  
	uint32_t                                           _caseIndex;                                                 // 0x0060   (0x0004)  
	bool                                               _usePlanarDistance;                                         // 0x0064   (0x0001)  
	bool                                               _isHeightRangeLimited;                                      // 0x0065   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0066   (0x0002)  MISSED
};

/// Struct /Script/QueryService.ActorPairQueryHeightRange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FActorPairQueryHeightRange
{ 
	float                                              _lower;                                                     // 0x0000   (0x0004)  
	float                                              _upper;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/QueryService.DistanceTrackerCase
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDistanceTrackerCase
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
	float                                              _distanceToTrackSquared;                                    // 0x0018   (0x0004)  
	FActorPairQueryHeightRange                         _heightRange;                                               // 0x001C   (0x0008)  
	bool                                               _inRange;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

