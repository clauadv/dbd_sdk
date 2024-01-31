
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/DBDMetaGameplay.DBDEmblem_KillerChaser
/// Size: 0x00B8 (0x000108 - 0x0001C0)
class UDBDEmblem_KillerChaser : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0108   (0x0040)  MISSED
	class UCurveFloat*                                 _chasePointsByDurationCurve;                                // 0x0148   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0150   (0x0018)  MISSED
	SDK_UNDEFINED(80,4945) /* TMap<ACamperPlayer*, float> */ __um(_hookedPlayersPenaltyDelay);                     // 0x0168   (0x0050)  
	class UClass*                                      _rankTunablesClass;                                         // 0x01B8   (0x0008)  


	/// Functions
	// Function /Script/DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart
	// void OnChaseStart(class ADBDPlayer* chasedPlayer);                                                                    // [0x509bbc0] Final|Native|Public  
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_KillerDevout
/// Size: 0x0038 (0x000108 - 0x000140)
class UDBDEmblem_KillerDevout : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0108   (0x0020)  MISSED
	TArray<class ACamperPlayer*>                       _playersToHook;                                             // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0138   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x509be80] Final|Native|Private 
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_KillerGatekeeper
/// Size: 0x0030 (0x000108 - 0x000138)
class UDBDEmblem_KillerGatekeeper : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0108   (0x0030)  MISSED
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_KillerMalicious
/// Size: 0x0068 (0x000108 - 0x000170)
class UDBDEmblem_KillerMalicious : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0108   (0x0010)  MISSED
	SDK_UNDEFINED(80,4946) /* TMap<ACamperPlayer*, int32_t> */ __um(_remainingSurvivorHookStates);                 // 0x0118   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0168   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x509c1d0] Final|Native|Public  
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_SurvivorBenevolent
/// Size: 0x0060 (0x000108 - 0x000168)
class UDBDEmblem_SurvivorBenevolent : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0108   (0x0060)  MISSED
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_SurvivorEvader
/// Size: 0x0078 (0x000108 - 0x000180)
class UDBDEmblem_SurvivorEvader : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0108   (0x0050)  MISSED
	class UCurveFloat*                                 _killerDistanceStealthPointCurve;                           // 0x0158   (0x0008)  
	class UCurveFloat*                                 _killerDistanceStealthPointCurveChasing;                    // 0x0160   (0x0008)  
	class UCurveFloat*                                 _chaseDurationPointCurve;                                   // 0x0168   (0x0008)  
	class UCurveFloat*                                 _ZAxisDistanceScalingCurve;                                 // 0x0170   (0x0008)  
	class UClass*                                      _rankTunablesClass;                                         // 0x0178   (0x0008)  


	/// Functions
	// Function /Script/DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent
	// void OnChaseStartEvent(class ADBDPlayer* chasedPlayer);                                                               // [0x509c620] Final|Native|Public  
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_SurvivorLightbringer
/// Size: 0x0088 (0x000108 - 0x000190)
class UDBDEmblem_SurvivorLightbringer : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0108   (0x0088)  MISSED
};

/// Class /Script/DBDMetaGameplay.DBDEmblem_SurvivorUnbroken
/// Size: 0x0030 (0x000108 - 0x000138)
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0108   (0x0010)  MISSED
	class UCurveFloat*                                 _pointsForTimeAlive;                                        // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0120   (0x0010)  MISSED
	class UClass*                                      _rankTunablesClass;                                         // 0x0130   (0x0008)  


	/// Functions
	// Function /Script/DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x509c9d0] Final|Native|Private 
};

