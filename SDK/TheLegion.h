
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
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: StatSystem

/// Enum /Script/TheLegion.EFrenzyEndReason
/// Size: 0x09
enum class EFrenzyEndReason : uint8_t
{
	EFrenzyEndReason__OutOfTime                                                      = 0,
	EFrenzyEndReason__Manual                                                         = 1,
	EFrenzyEndReason__PickUpCamper                                                   = 2,
	EFrenzyEndReason__Stunned                                                        = 3,
	EFrenzyEndReason__Mori                                                           = 4,
	EFrenzyEndReason__Blinded                                                        = 5,
	EFrenzyEndReason__ChainComplete                                                  = 6,
	EFrenzyEndReason__PowerPrevented                                                 = 7,
	EFrenzyEndReason__EFrenzyEndReason_MAX                                           = 8
};

/// Class /Script/TheLegion.Addon_Frenzy_ColdDirt
/// Size: 0x0068 (0x0002B8 - 0x000320)
class UAddon_Frenzy_ColdDirt : public UItemAddon
{ 
public:
	SDK_UNDEFINED(80,5165) /* TMap<int32_t, int32_t> */ __um(_mapTokenPerChainedHit);                              // 0x02B8   (0x0050)  
	int32_t                                            _tokensToReachForActivation;                                // 0x0308   (0x0004)  
	float                                              _movementSpeedMultiplierModifier;                           // 0x030C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0310   (0x0010)  MISSED
};

/// Class /Script/TheLegion.BaseFrenzyMixtapeAddon
/// Size: 0x0028 (0x0002B8 - 0x0002E0)
class UBaseFrenzyMixtapeAddon : public UItemAddon
{ 
public:
	TArray<FName>                                      _audioSwitchGroups;                                         // 0x02B8   (0x0010)  
	FName                                              _audioSwitchState;                                          // 0x02C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x02D4   (0x000C)  MISSED
};

/// Class /Script/TheLegion.Addon_Frenzy_FranksMixTape
/// Size: 0x0010 (0x0002E0 - 0x0002F0)
class UAddon_Frenzy_FranksMixTape : public UBaseFrenzyMixtapeAddon
{ 
public:
	class UClass*                                      _statusEffectFranksWalls;                                   // 0x02E0   (0x0008)  
	class UClass*                                      _statusEffectFranksGenerators;                              // 0x02E8   (0x0008)  
};

/// Class /Script/TheLegion.Addon_Frenzy_FumingMixTape
/// Size: 0x0058 (0x0002E0 - 0x000338)
class UAddon_Frenzy_FumingMixTape : public UBaseFrenzyMixtapeAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x02E0   (0x0050)  MISSED
	float                                              _regressionModifier;                                        // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0334   (0x0004)  MISSED
};

/// Class /Script/TheLegion.Addon_Frenzy_JoeysMixTape
/// Size: 0x0020 (0x0002E0 - 0x000300)
class UAddon_Frenzy_JoeysMixTape : public UBaseFrenzyMixtapeAddon
{ 
public:
	class UClass*                                      _statusEffectToImpose;                                      // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02E8   (0x0018)  MISSED
};

/// Class /Script/TheLegion.Addon_Frenzy_MuralSketch
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAddon_Frenzy_MuralSketch : public UItemAddon
{ 
public:
	float                                              _speedBonusPerHit;                                          // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/TheLegion.Addon_Frenzy_NeverSleepPills
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAddon_Frenzy_NeverSleepPills : public UItemAddon
{ 
public:
	float                                              _speedModifierDuringFrenzy;                                 // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/TheLegion.Addon_Frenzy_StolenSketchBook
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAddon_Frenzy_StolenSketchBook : public UItemAddon
{ 
public:
	int32_t                                            _dropItemAfterChainedHitNumber;                             // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/TheLegion.BaseImposeEffectOnFrenzyBleedout
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UBaseImposeEffectOnFrenzyBleedout : public UItemAddon
{ 
public:
	class UClass*                                      _statusEffectToImpose;                                      // 0x02B8   (0x0008)  
};

/// Class /Script/TheLegion.FrenzyAttack
/// Size: 0x0010 (0x000390 - 0x0003A0)
class UFrenzyAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0390   (0x0010)  MISSED
};

/// Class /Script/TheLegion.FrenzyAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFrenzyAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/TheLegion.FrenzyAttackSuccessSubstate
/// Size: 0x0090 (0x000118 - 0x0001A8)
class UFrenzyAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
	FDBDTunableRowHandle                               _healthyTime;                                               // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _injuredTime;                                               // 0x0140   (0x0028)  
	FDBDTunableRowHandle                               _bleedoutTime;                                              // 0x0168   (0x0028)  
	class UCurveFloat*                                 _healthyCurve;                                              // 0x0190   (0x0008)  
	class UCurveFloat*                                 _injuredCurve;                                              // 0x0198   (0x0008)  
	class UCurveFloat*                                 _bleedoutCurve;                                             // 0x01A0   (0x0008)  
};

/// Class /Script/TheLegion.FrenzyComponent
/// Size: 0x0698 (0x0000B8 - 0x000750)
class UFrenzyComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,5166) /* FMulticastInlineDelegate */ __um(OnFrenzyStarted);                                   // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,5167) /* FMulticastInlineDelegate */ __um(OnFrenzyEnded);                                     // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,5168) /* FMulticastInlineDelegate */ __um(OnFrenzyEndedNoCooldown);                           // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,5169) /* FMulticastInlineDelegate */ __um(OnInjuredBleedoutStartedDuringFrenzy);              // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,5170) /* FMulticastInlineDelegate */ __um(OnFrenzyReadyToStart);                              // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,5171) /* FMulticastInlineDelegate */ __um(OnFrenzyIncreasedTier);                             // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_5[0x150];                                     // 0x0120   (0x0150)  MISSED
	FTunableStat                                       _allowManuallyEndFrenzy;                                    // 0x0270   (0x0080)  
	FTunableStat                                       _chargeToLoseOnRemoveBleedoutTimeAttack;                    // 0x02F0   (0x0080)  
	FTunableStat                                       _chargeToLoseOnNonFrenzyAttack;                             // 0x0370   (0x0080)  
	FTunableStat                                       _chargeToLoseOnMissedFrenzyAttack;                          // 0x03F0   (0x0080)  
	FTunableStat                                       _cooldownDuration;                                          // 0x0470   (0x0080)  
	FTunableStat                                       _frenzyMaxDuration;                                         // 0x04F0   (0x0080)  
	FTunableStat                                       _frenzyRechargeDuration;                                    // 0x0570   (0x0080)  
	FTunableStat                                       _usagePercentNeededToStartFrenzy;                           // 0x05F0   (0x0080)  
	class ASlasherPlayer*                              _slasher;                                                   // 0x0670   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0678   (0x0018)  MISSED
	class UInteractionDefinition*                      _cooldownInteraction;                                       // 0x0690   (0x0008)  
	class UClass*                                      _boltSlasherEffect;                                         // 0x0698   (0x0008)  
	class UClass*                                      _frenzySlasherEffect;                                       // 0x06A0   (0x0008)  
	class UClass*                                      _frenzyTier0SlasherEffect;                                  // 0x06A8   (0x0008)  
	class UClass*                                      _frenzyTier1SlasherEffect;                                  // 0x06B0   (0x0008)  
	class UClass*                                      _frenzyTier2SlasherEffect;                                  // 0x06B8   (0x0008)  
	class UClass*                                      _frenzyTier3SlasherEffect;                                  // 0x06C0   (0x0008)  
	class UClass*                                      _frenzyTier4SlasherEffect;                                  // 0x06C8   (0x0008)  
	class UClass*                                      _frenzyCooldownEffect;                                      // 0x06D0   (0x0008)  
	class UClass*                                      _boltCamperEffect;                                          // 0x06D8   (0x0008)  
	class UClass*                                      _frenzyCamperEffect;                                        // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x06E8   (0x0068)  MISSED


	/// Functions
	// Function /Script/TheLegion.FrenzyComponent.StartFrenzy
	// void StartFrenzy();                                                                                                   // [0x5d78fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.SetStartingFrenzy
	// void SetStartingFrenzy(bool startingFrenzy);                                                                          // [0x5d78f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.SetObjectState
	// void SetObjectState(class UGameplayTagContainerComponent* objectState);                                               // [0x5d78ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion
	// void ResumeFrenzyChargeDepletion();                                                                                   // [0x5d78e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion
	// void PauseFrenzyChargeDepletion();                                                                                    // [0x5d78e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.OnMoriStarted
	// void OnMoriStarted();                                                                                                 // [0x5d78e40] Final|Native|Private 
	// Function /Script/TheLegion.FrenzyComponent.OnFrenzyCooldownStarted
	// void OnFrenzyCooldownStarted();                                                                                       // [0x5d78e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.IsStartingFrenzy
	// bool IsStartingFrenzy();                                                                                              // [0x5d78de0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheLegion.FrenzyComponent.IsInFrenzyCooldown
	// bool IsInFrenzyCooldown();                                                                                            // [0x5d78da0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheLegion.FrenzyComponent.IsInFrenzy
	// bool IsInFrenzy();                                                                                                    // [0x5d78d60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheLegion.FrenzyComponent.InitializeFrenzy
	// void InitializeFrenzy();                                                                                              // [0x5d78d40] Final|Native|Private 
	// Function /Script/TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy
	// bool HasStartedInjuredBleedoutDuringThisFrenzy();                                                                     // [0x5d78d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheLegion.FrenzyComponent.GetFrenzyTier
	// int32_t GetFrenzyTier();                                                                                              // [0x5d78ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheLegion.FrenzyComponent.EndFrenzy
	// void EndFrenzy(EFrenzyEndReason Reason);                                                                              // [0x5d78c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.FrenzyComponent.CanStartFrenzy
	// bool CanStartFrenzy();                                                                                                // [0x5d78c20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheLegion.FrenzyComponent.CanManuallyEndFrenzy
	// bool CanManuallyEndFrenzy();                                                                                          // [0x5d78bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheLegion.FrenzySlasherVault
/// Size: 0x0000 (0x000710 - 0x000710)
class UFrenzySlasherVault : public UKillerVaultDefinition
{ 
public:
};

/// Class /Script/TheLegion.JoeysMixtapeEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UJoeysMixtapeEffect : public UStatusEffect
{ 
public:
	class UClass*                                      _statusEffectToImpose;                                      // 0x0350   (0x0008)  
};

/// Class /Script/TheLegion.LegionAnimInstance
/// Size: 0x0020 (0x000610 - 0x000630)
class ULegionAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isFrenzy;                                                  // 0x0610   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0611   (0x001F)  MISSED
};

/// Class /Script/TheLegion.LegionAttackPicker
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class ULegionAttackPicker : public USlasherAttackPickerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheLegion.LegionCheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class ULegionCheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever
	// void DBD_LegionFrenzyForever();                                                                                       // [0x5d79b30] Final|Exec|Native|Public 
};

/// Class /Script/TheLegion.LegionKillerAnalyticsComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class ULegionKillerAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
	// void SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher);                                         // [0x5d79cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheLegion.LegionSurvivorAnalyticsComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class ULegionSurvivorAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B8   (0x0058)  MISSED


	/// Functions
	// Function /Script/TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
	// void SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher);                                         // [0x5d7a000] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
	// void OnGameEventDispatched(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x5d79ef0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheLegion.Madgrit
/// Size: 0x0008 (0x0003C8 - 0x0003D0)
class UMadgrit : public UPerk
{ 
public:
	class UCurveFloat*                                 _slashHittingSpeedCurve;                                    // 0x03C8   (0x0008)  
};

/// Class /Script/TheLegion.ModifyFrenzyFOVEffect
/// Size: 0x0038 (0x000350 - 0x000388)
class UModifyFrenzyFOVEffect : public UStatusEffect
{ 
public:
	float                                              _increaseFOVPerHit;                                         // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	FDBDTunableRowHandle                               _frenzyBaseFOV;                                             // 0x0358   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased
	// void Authority_OnFrenzyTierIncreased(int32_t tier);                                                                   // [0x5d7a410] Final|Native|Private 
};

/// Class /Script/TheLegion.OnSelfMendImposeEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class UOnSelfMendImposeEffect : public UStatusEffect
{ 
public:
	float                                              _statusEffectTime;                                          // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	class UClass*                                      _statusEffectToImpose;                                      // 0x0358   (0x0008)  
};

/// Struct /Script/TheLegion.LegionSurvivorAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FLegionSurvivorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,5172) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            DeepWoundCount;                                             // 0x00C8   (0x0004)  
	int32_t                                            FrenzyEffectivements;                                       // 0x00CC   (0x0004)  
	int32_t                                            DeepWoundDying;                                             // 0x00D0   (0x0004)  
	bool                                               DeepWoundEscape;                                            // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Struct /Script/TheLegion.LegionKillerAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FLegionKillerAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,5173) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            Pallet;                                                     // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

