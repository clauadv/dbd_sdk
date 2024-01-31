
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SignificanceUtilities.SignificanceStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class USignificanceStrategy : public UObject
{ 
public:
};

/// Class /Script/SignificanceUtilities.DistanceBasedTickDisabler
/// Size: 0x00C8 (0x0000B8 - 0x000180)
class UDistanceBasedTickDisabler : public UActorComponent
{ 
public:
	bool                                               _autoRegisterOwner;                                         // 0x00B8   (0x0001)  
	bool                                               _autoRegisterTimelines;                                     // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00BA   (0x0006)  MISSED
	FBHVRPerDetailModeFloat                            _tickDisableDistance;                                       // 0x00C0   (0x00A0)  
	bool                                               _insignificantWhenBehindTheCamera;                          // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<class UActorComponent*>                     _components;                                                // 0x0168   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0178   (0x0008)  MISSED


	/// Functions
	// Function /Script/SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent
	// void UnregisterComponent(class UActorComponent* Component);                                                           // [0x8586f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent
	// void RegisterComponent(class UActorComponent* Component);                                                             // [0x8586ea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SignificanceUtilities.SignificanceManagerComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class USignificanceManagerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x00B8   (0x0020)  MISSED
	class USignificanceStrategy*                       _significanceStrategy;                                      // 0x00D8   (0x0008)  
	TArray<class AActor*>                              _dependentActorsToCheckSignficance;                         // 0x00E0   (0x0010)  
};

/// Class /Script/SignificanceUtilities.LinearSignificanceStrategy
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class ULinearSignificanceStrategy : public USignificanceStrategy
{ 
public:
	FBHVRPerDetailModeFloat                            _maxDistance;                                               // 0x0030   (0x00A0)  
	bool                                               _updateEvenIfNotRendered;                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

