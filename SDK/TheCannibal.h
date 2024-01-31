
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BHVRAnalytics
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnalytics
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTagUtilities
/// dependency: StatSystem
/// dependency: TheHillbilly

/// Class /Script/TheCannibal.BBQAndChili
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UBBQAndChili : public UPerk
{ 
public:
	float                                              _auraRevealDuration;                                        // 0x03C8   (0x0004)  
	float                                              _minDistanceToHookedPlayerByLevel;                          // 0x03CC   (0x000C)  
	class UClass*                                      _survivorImposedEffectClass;                                // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheCannibal.BBQAndChili.GetMinDistanceToKillerByLevel
	// float GetMinDistanceToKillerByLevel(int32_t Level);                                                                   // [0x5a282c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheCannibal.BBQAndChili.GetAuraRevealDuration
	// float GetAuraRevealDuration();                                                                                        // [0x4b75200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheCannibal.CannibalChainsawHitEventAddon
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UCannibalChainsawHitEventAddon : public UOnEventBaseAddon
{ 
public:
};

/// Class /Script/TheCannibal.CannibalAddonBegrimedChains
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UCannibalAddonBegrimedChains : public UCannibalChainsawHitEventAddon
{ 
public:
};

/// Class /Script/TheCannibal.CannibalAnalyticsComponent
/// Size: 0x0020 (0x000100 - 0x000120)
class UCannibalAnalyticsComponent : public UChainsawAnalyticsBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0100   (0x0020)  MISSED
};

/// Class /Script/TheCannibal.CannibalChainsawAttack
/// Size: 0x00C0 (0x000460 - 0x000520)
class UCannibalChainsawAttack : public UBaseChainsawAttack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0460   (0x0010)  MISSED
	FTagStateBool                                      _isInTantrum;                                               // 0x0470   (0x0030)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x04A0   (0x0024)  MISSED
	float                                              _immuneToSuccessiveChainsawHitsDuration;                    // 0x04C4   (0x0004)  
	SDK_UNDEFINED(80,5453) /* TMap<ADBDPlayer*, float> */ __um(_lastChainsawHitTimes);                             // 0x04C8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0518   (0x0008)  MISSED
};

/// Class /Script/TheCannibal.CannibalChainsawAttackOpenSubstate
/// Size: 0x0018 (0x000168 - 0x000180)
class UCannibalChainsawAttackOpenSubstate : public UBaseChainsawAttackOpenSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0168   (0x0018)  MISSED
};

/// Class /Script/TheCannibal.CannibalChainsawAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UCannibalChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/TheCannibal.CannibalChainsawAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UCannibalChainsawAttackSuccessSubstate : public UBaseChainsawAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheCannibal.CannibalChainsawAttackMissSubstate
/// Size: 0x0018 (0x000120 - 0x000138)
class UCannibalChainsawAttackMissSubstate : public UBaseChainsawAttackMissSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0120   (0x0018)  MISSED
};

/// Class /Script/TheCannibal.CannibalChainsawAttackObstructSubstate
/// Size: 0x0060 (0x000128 - 0x000188)
class UCannibalChainsawAttackObstructSubstate : public UBaseChainsawAttackObstructSubstate
{ 
public:
	FTagStateBool                                      _isInTantrum;                                               // 0x0128   (0x0030)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0158   (0x0030)  MISSED
};

/// Class /Script/TheCannibal.CannibalChainsawPowerComponent
/// Size: 0x05F8 (0x0000B8 - 0x0006B0)
class UCannibalChainsawPowerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UPowerChargeComponent*                       _chainsawPowerCharge;                                       // 0x00C0   (0x0008)  
	class UPowerChargeComponent*                       _chainsawPowerDischarge;                                    // 0x00C8   (0x0008)  
	class UPowerChargeComponent*                       _tantrumPowerCharge;                                        // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0xD0];                                      // 0x00D8   (0x00D0)  MISSED
	FTagStateBool                                      _isInTantrum;                                               // 0x01A8   (0x0030)  
	int32_t                                            _numPowerCharges;                                           // 0x01D8   (0x0004)  
	int32_t                                            _numPowerChargesConsumed;                                   // 0x01DC   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x01E0   (0x0008)  MISSED
	FTunableStat                                       _chainsawDashDuration;                                      // 0x01E8   (0x0080)  
	FTunableStat                                       _chainsawPowerMaxCharge;                                    // 0x0268   (0x0080)  
	FTunableStat                                       _chainsawChargeRate;                                        // 0x02E8   (0x0080)  
	FTunableStat                                       _chainsawMaxNumberOfCharges;                                // 0x0368   (0x0080)  
	FDBDTunableRowHandle                               _chainsawCooldownIncreaseRate;                              // 0x03E8   (0x0028)  
	FTunableStat                                       _chainsawCooldownDuration;                                  // 0x0410   (0x0080)  
	FDBDTunableRowHandle                               _chainsawMaxCooldownDuration;                               // 0x0490   (0x0028)  
	FDBDTunableRowHandle                               _tantrumChargeRate;                                         // 0x04B8   (0x0028)  
	FDBDTunableRowHandle                               _tantrumDischargeRate;                                      // 0x04E0   (0x0028)  
	FTunableStat                                       _tantrumMaxCharge;                                          // 0x0508   (0x0080)  
	FDBDTunableRowHandle                               _tantrumDurationIncreaseRate;                               // 0x0588   (0x0028)  
	FTunableStat                                       _tantrumDuration;                                           // 0x05B0   (0x0080)  
	FTunableStat                                       _tantrumMaxDuration;                                        // 0x0630   (0x0080)  


	/// Functions
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull
	// void Server_OnTantrumPowerChargeFull();                                                                               // [0x5a29b40] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges
	// void OnRep_NumPowerCharges(int32_t previousNumPowerCharges);                                                          // [0x5a29ab0] Final|Native|Private 
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5a29a90] Final|Native|Private 
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull
	// void Multicast_OnTantrumPowerChargeFull();                                                                            // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull
	// void Local_OnTantrumPowerChargeFull();                                                                                // [0x5a29a70] Final|Native|Private 
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges
	// int32_t GetNumberOfChainsawPowerCharges();                                                                            // [0x5a29a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull
	// void Authority_OnChainsawPowerChargeFull();                                                                           // [0x5a29a20] Final|Native|Private 
};

/// Class /Script/TheCannibal.CannibalChainsawRevInteraction
/// Size: 0x00A0 (0x0007F0 - 0x000890)
class UCannibalChainsawRevInteraction : public UChainsawRevInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x07F0   (0x00A0)  MISSED
};

/// Class /Script/TheCannibal.CannibalPowerPresentationItemProgressComponent
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UCannibalPowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UCannibalChainsawPowerComponent*             _cannibalPowerChainsawComponent;                            // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent
	// void SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);        // [0x57eeff0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheCannibal.CarburetorTuningGuideAddon
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UCarburetorTuningGuideAddon : public UOnEventBaseAddon
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x02C8   (0x0018)  MISSED
};

/// Class /Script/TheCannibal.FranklinsDemise
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UFranklinsDemise : public UPerk
{ 
public:
	float                                              _timeBeforeItemIsConsumed;                                  // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheCannibal.FranklinsDemise.Multicast_DroppedEvent
	// void Multicast_DroppedEvent(class ACamperPlayer* hitPlayer, class ACollectable* itemToDrop);                          // [0x4fed310] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheCannibal.FranklinsDemise.GetTimeBeforeItemIsConsumedAtLevel
	// float GetTimeBeforeItemIsConsumedAtLevel();                                                                           // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheCannibal.FranklinsDemise.BP_OnPlayerHitCosmetic
	// void BP_OnPlayerHitCosmetic(class ACamperPlayer* hitPlayer, class ACollectable* itemToDrop);                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheCannibal.IridescentLeatherAddon
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UIridescentLeatherAddon : public UCannibalChainsawHitEventAddon
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x02C8   (0x0018)  MISSED
};

/// Class /Script/TheCannibal.Knockout
/// Size: 0x0058 (0x0003C8 - 0x000420)
class UKnockout : public UPerk
{ 
public:
	float                                              _slowAndBlindDuration;                                      // 0x03C8   (0x000C)  
	float                                              _crawlSpeedPenalty;                                         // 0x03D4   (0x000C)  
	float                                              _auraDisruptionRange;                                       // 0x03E0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03EC   (0x0004)  MISSED
	FForAllSurvivorsStatusEffectImposer                _slowAndBlindEffectImposer;                                 // 0x03F0   (0x0018)  
	FForAllSurvivorsStatusEffectImposer                _hideAuraEffectImposer;                                     // 0x0408   (0x0018)  
};

/// Class /Script/TheCannibal.KnockOutSlowAndBlindEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UKnockOutSlowAndBlindEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheCannibal.KnockOutSlowAndBlindEffect.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(class ADBDPlayer* Player);                                                              // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/TheCannibal.ShopLubricantAddon
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class UShopLubricantAddon : public UOnEventBaseAddon
{ 
public:
	float                                              _auraBlockingDuration;                                      // 0x02C8   (0x0004)  
	float                                              _auraVisibleDistance;                                       // 0x02CC   (0x0004)  
	class UClass*                                      _hiddenFromOtherSurvivorsWhileDyingEffectClass;             // 0x02D0   (0x0008)  
};

/// Struct /Script/TheCannibal.ChainsawHitWithPowerCharge
/// Size: 0x0004 (0x000004 - 0x000008)
struct FChainsawHitWithPowerCharge : FChainsawEvent
{ 
	int32_t                                            NumPowerCharges;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/TheCannibal.CannibalAnalytics
/// Size: 0x0020 (0x0000D8 - 0x0000F8)
struct FCannibalAnalytics : FChainsawAnalytics
{ 
	TArray<FChainsawHitWithPowerCharge>                HitWithPowerChargeEvents;                                   // 0x00D8   (0x0010)  
	TArray<FChainsawEvent>                             RevToTantrumEvents;                                         // 0x00E8   (0x0010)  
};

