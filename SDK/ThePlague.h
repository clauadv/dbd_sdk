
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BHVRAnalytics
/// dependency: CoreUObject
/// dependency: DBDAnalytics
/// dependency: DBDAnimation
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/ThePlague.CleanseSickness
/// Size: 0x0000 (0x000790 - 0x000790)
class UCleanseSickness : public UChargeableInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/ThePlague.CleanseSickness.OnCleanseComplete
	// void OnCleanseComplete(class ADBDPlayer* Player);                                                                     // [0x5df88e0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/ThePlague.K15AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK15AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isChargingVomit;                                           // 0x0610   (0x0001)  
	bool                                               _isSpewingVomit;                                            // 0x0611   (0x0001)  
	bool                                               _isVomitCoolDownEnd;                                        // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0613   (0x0001)  MISSED
	float                                              _pukeCharge;                                                // 0x0614   (0x0004)  
	bool                                               _carryFPV;                                                  // 0x0618   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0619   (0x0007)  MISSED


	/// Functions
	// Function /Script/ThePlague.K15AnimInstance.VomitCoolDownEnd
	// void VomitCoolDownEnd();                                                                                              // [0x5df8cd0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/ThePlague.PlagueSurvivorAnalyticsComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UPlagueSurvivorAnalyticsComponent : public UActorComponent
{ 
public:
	uint32_t                                           _replicatedRegularVomitHits;                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x00BC   (0x00A4)  MISSED
};

/// Class /Script/ThePlague.SicknessSurvivorSubAnimInstance
/// Size: 0x0070 (0x000550 - 0x0005C0)
class USicknessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	SDK_UNDEFINED(16,5586) /* FString */               __um(_vomitingEnteredStatEvent);                            // 0x0550   (0x0010)  
	float                                              _hitByVomitTime;                                            // 0x0560   (0x0004)  
	bool                                               _isSick;                                                    // 0x0564   (0x0001)  
	bool                                               _isVomiting;                                                // 0x0565   (0x0001)  
	bool                                               _hasRecentlyBeenHitByVomit;                                 // 0x0566   (0x0001)  
	bool                                               _isOpeningExitGate;                                         // 0x0567   (0x0001)  
	bool                                               _isHooked;                                                  // 0x0568   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0569   (0x0001)  
	bool                                               _isDead;                                                    // 0x056A   (0x0001)  
	bool                                               _isFrightScreaming;                                         // 0x056B   (0x0001)  
	EGuidedState                                       _guidedAction;                                              // 0x056C   (0x0001)  
	EInteractionAnimation                              _interactionType;                                           // 0x056D   (0x0001)  
	bool                                               _isInsideCloset;                                            // 0x056E   (0x0001)  
	bool                                               _isInteracting;                                             // 0x056F   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0570   (0x0001)  
	bool                                               _isHoldingAimItem;                                          // 0x0571   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0572   (0x0001)  
	bool                                               _isHoldingHandleItem;                                       // 0x0573   (0x0001)  
	bool                                               _isHoldingFlashbang;                                        // 0x0574   (0x0001)  
	bool                                               _isHoldingFirecracker;                                      // 0x0575   (0x0001)  
	bool                                               _isHoldingSmallItem;                                        // 0x0576   (0x0001)  
	unsigned char                                      UnknownData00_6[0x49];                                      // 0x0577   (0x0049)  MISSED
};

/// Struct /Script/ThePlague.PlagueSurvivorAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FPlagueSurvivorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,5587) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            BecomeInfectCount;                                          // 0x00C8   (0x0004)  
	int32_t                                            RegularVomitHits;                                           // 0x00CC   (0x0004)  
	int32_t                                            SuperVomitHits;                                             // 0x00D0   (0x0004)  
	int32_t                                            CleanSicknessCount;                                         // 0x00D4   (0x0004)  
	float                                              TimeWithSickness;                                           // 0x00D8   (0x0004)  
	float                                              TimeWithMaximumSickness;                                    // 0x00DC   (0x0004)  
	float                                              TimeInSuperMode;                                            // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

