
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: AnimationUtilities
/// dependency: BHVRAnalytics
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DBDAnalytics
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: StatSystem

/// Class /Script/TheHillbilly.ChainsawAnalyticsBaseComponent
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UChainsawAnalyticsBaseComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	float                                              _maxDistanceFromHookToBeConsideredCamping;                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x00D4   (0x002C)  MISSED
};

/// Class /Script/TheHillbilly.HillbillyChainsawAttack
/// Size: 0x0070 (0x000390 - 0x000400)
class UHillbillyChainsawAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0390   (0x0058)  MISSED
	FGameplayTag                                       _chainsawHitGameEventTag;                                   // 0x03E8   (0x000C)  
	FGameplayTag                                       _chainsawAttemptGameEventTag;                               // 0x03F4   (0x000C)  
};

/// Class /Script/TheHillbilly.HillbillyChainsawAttackOpenSubstate
/// Size: 0x0048 (0x000130 - 0x000178)
class UHillbillyChainsawAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0130   (0x0048)  MISSED
};

/// Class /Script/TheHillbilly.HillbillyChainsawAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UHillbillyChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/TheHillbilly.HillbillyChainsawAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UHillbillyChainsawAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheHillbilly.HillbillyChainsawAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UHillbillyChainsawAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheHillbilly.HillbillyChainsawAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UHillbillyChainsawAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheHillbilly.ChainsawRevInteraction
/// Size: 0x0060 (0x000790 - 0x0007F0)
class UChainsawRevInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0790   (0x0028)  MISSED
	FName                                              _soundCueDistanceDataID;                                    // 0x07B8   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x07C4   (0x0004)  MISSED
	class UAkAudioEvent*                               _chainsawRevStartAkAudioEvent;                              // 0x07C8   (0x0008)  
	class UAkAudioEvent*                               _chainsawRevEndAkAudioEvent;                                // 0x07D0   (0x0008)  
	class ASlasherPlayer*                              _owningSlasher;                                             // 0x07D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x07E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5acbfb0] Final|Native|Private 
};

/// Class /Script/TheHillbilly.ApexMufflerAddon
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UApexMufflerAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{ 
public:
};

/// Class /Script/TheHillbilly.HillbillyAnalyticsComponent
/// Size: 0x0088 (0x000100 - 0x000188)
class UHillbillyAnalyticsComponent : public UChainsawAnalyticsBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0100   (0x0088)  MISSED
};

/// Class /Script/TheHillbilly.HillbillyAnimInstance
/// Size: 0x0000 (0x000610 - 0x000610)
class UHillbillyAnimInstance : public UKillerAnimInstance
{ 
public:
};

/// Class /Script/TheHillbilly.HillbillyChainsawHitEventAddon
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UHillbillyChainsawHitEventAddon : public UOnEventBaseAddon
{ 
public:
};

/// Class /Script/TheHillbilly.HillbillyChainsawOverheatComponent
/// Size: 0x0460 (0x0000B8 - 0x000518)
class UHillbillyChainsawOverheatComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5061) /* FMulticastInlineDelegate */ __um(OnHeatChargeUpdateDelegate);                        // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x118];                                     // 0x00C8   (0x0118)  MISSED
	FTagStateBool                                      _isChainsawOverheating;                                     // 0x01E0   (0x0030)  
	class UPowerChargeComponent*                       _chainsawHeatCharge;                                        // 0x0210   (0x0008)  
	FTunableStat                                       _heatMaxCharge;                                             // 0x0218   (0x0080)  
	FTunableStat                                       _heatRevStartAmount;                                        // 0x0298   (0x0080)  
	FTunableStat                                       _heatRevChargeRate;                                         // 0x0318   (0x0080)  
	FTunableStat                                       _heatDashChargeRate;                                        // 0x0398   (0x0080)  
	FTunableStat                                       _heatDischargeRate;                                         // 0x0418   (0x0080)  
	FTunableStat                                       _overheatDischargeRate;                                     // 0x0498   (0x0080)  


	/// Functions
	// Function /Script/TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating
	// void OnRep_IsChainsawOverheating();                                                                                   // [0x5acd210] Final|Native|Private 
	// Function /Script/TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5acd1f0] Final|Native|Private 
	// Function /Script/TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate
	// void OnHeatChargeUpdate(float currentCharge, float previosCharge);                                                    // [0x5acd120] Final|Native|Private 
	// Function /Script/TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating
	// bool IsChainsawOverheating();                                                                                         // [0x5acd0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull
	// void Authority_OnHeatChargeFull();                                                                                    // [0x5acd0d0] Final|Native|Private 
	// Function /Script/TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty
	// void Authority_OnHeatChargeEmpty();                                                                                   // [0x5acd0b0] Final|Native|Private 
};

/// Class /Script/TheHillbilly.HillbillyChainsawRevInteraction
/// Size: 0x0050 (0x0007F0 - 0x000840)
class UHillbillyChainsawRevInteraction : public UChainsawRevInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x07F0   (0x0050)  MISSED
};

/// Class /Script/TheHillbilly.HillbillyChainsawSubAnimInstance
/// Size: 0x0020 (0x000620 - 0x000640)
class UHillbillyChainsawSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{ 
public:
	bool                                               _isRevvingChainsaw;                                         // 0x0618   (0x0001)  
	bool                                               _isRevvingChainsawCancelled;                                // 0x0619   (0x0001)  
	bool                                               _isChainsawSprinting;                                       // 0x061A   (0x0001)  
	bool                                               _isWaitingForChainsaw;                                      // 0x061B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x061C   (0x0024)  MISSED
};

/// Class /Script/TheHillbilly.HillbillyOverheatPresentationItemProgressComponent
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UHillbillyOverheatPresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UHillbillyChainsawOverheatComponent*         _hillbillyChainsawOverheatComponent;                        // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
	// void SetHillbillyChainsawOverheatComponent(class UHillbillyChainsawOverheatComponent* HillbillyChainsawOverheatComponent); // [0x57ebc00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheHillbilly.IridescentBrickAddon
/// Size: 0x0038 (0x0002C8 - 0x000300)
class UIridescentBrickAddon : public UOnEventBaseAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x02C8   (0x0028)  MISSED
	class UClass*                                      _undetectableStatusEffectClass;                             // 0x02F0   (0x0008)  
	class UStatusEffect*                               _undetectableStatusEffect;                                  // 0x02F8   (0x0008)  
};

/// Class /Script/TheHillbilly.LightbornAuraRevealEffect
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class ULightbornAuraRevealEffect : public UBaseLingeringStatusEffect
{ 
public:
};

/// Class /Script/TheHillbilly.LightbornBlindFailedIndicatorCondition
/// Size: 0x0060 (0x0000F0 - 0x000150)
class ULightbornBlindFailedIndicatorCondition : public UEventDrivenModifierCondition
{ 
public:
	float                                              _conditionReevaluationTimerDurationAfterFailedBlind;        // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x5C];                                      // 0x00F4   (0x005C)  MISSED
};

/// Class /Script/TheHillbilly.LoProChainsAddon
/// Size: 0x0058 (0x0002B8 - 0x000310)
class ULoProChainsAddon : public UItemAddon
{ 
public:
	FAnimationMontageDescriptor                        _breakPalletMontage;                                        // 0x02B8   (0x0020)  
	float                                              _halfDamageDurationAfterBreakable;                          // 0x02D8   (0x0004)  
	bool                                               _doesAddonIncludeBreakableWalls;                            // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x33];                                      // 0x02DD   (0x0033)  MISSED
};

/// Struct /Script/TheHillbilly.ChainsawEvent
/// Size: 0x0004 (0x000000 - 0x000004)
struct FChainsawEvent
{ 
	float                                              ElapsedMatchTime;                                           // 0x0000   (0x0004)  
};

/// Struct /Script/TheHillbilly.ChainsawEventWhileCamping
/// Size: 0x0004 (0x000004 - 0x000008)
struct FChainsawEventWhileCamping : FChainsawEvent
{ 
	float                                              DistanceFromClosestHook;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/TheHillbilly.ChainsawAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FChainsawAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,5062) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	TArray<FChainsawEventWhileCamping>                 DownSurvivorsWithChainsawWhileCampingEvents;                // 0x00C8   (0x0010)  
};

/// Struct /Script/TheHillbilly.HillbillyAnalytics
/// Size: 0x0040 (0x0000D8 - 0x000118)
struct FHillbillyAnalytics : FChainsawAnalytics
{ 
	TArray<FChainsawEvent>                             OverheatEvents;                                             // 0x00D8   (0x0010)  
	TArray<FChainsawEvent>                             OverheatWhileSprintingEvents;                               // 0x00E8   (0x0010)  
	TArray<FChainsawEventWhileCamping>                 OverheatWhileCampingEvents;                                 // 0x00F8   (0x0010)  
	TArray<FChainsawEvent>                             RevFromZeroHeatEvents;                                      // 0x0108   (0x0010)  
};

