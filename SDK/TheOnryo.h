
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetworkUtilities
/// dependency: QueryService
/// dependency: StatSystem

/// Enum /Script/TheOnryo.ECondemnOrigin
/// Size: 0x07
enum class ECondemnOrigin : uint8_t
{
	ECondemnOrigin__None                                                             = 0,
	ECondemnOrigin__Addon                                                            = 1,
	ECondemnOrigin__PlayerHook                                                       = 2,
	ECondemnOrigin__Teleport                                                         = 3,
	ECondemnOrigin__VHS                                                              = 4,
	ECondemnOrigin__TurnOffTV                                                        = 5,
	ECondemnOrigin__ECondemnOrigin_MAX                                               = 6
};

/// Enum /Script/TheOnryo.ETelevisionCosmeticState
/// Size: 0x13
enum class ETelevisionCosmeticState : uint8_t
{
	ETelevisionCosmeticState__Off                                                    = 0,
	ETelevisionCosmeticState__TurningOn                                              = 1,
	ETelevisionCosmeticState__TurningOff                                             = 2,
	ETelevisionCosmeticState__Static                                                 = 3,
	ETelevisionCosmeticState__TransitionToSurvivorTape                               = 4,
	ETelevisionCosmeticState__PlaySurvivorTape                                       = 5,
	ETelevisionCosmeticState__TransitionToKillerTape                                 = 6,
	ETelevisionCosmeticState__PlayKillerTape                                         = 7,
	ETelevisionCosmeticState__TransitionFromSurvivorTapeToStatic                     = 8,
	ETelevisionCosmeticState__TransitionFromKillerTapeToStatic                       = 9,
	ETelevisionCosmeticState__FakeTeleport                                           = 10,
	ETelevisionCosmeticState__TurningOffOnEject                                      = 11,
	ETelevisionCosmeticState__ETelevisionCosmeticState_MAX                           = 12
};

/// Enum /Script/TheOnryo.EFlickerType
/// Size: 0x04
enum class EFlickerType : uint8_t
{
	EFlickerType__None                                                               = 0,
	EFlickerType__Flickering                                                         = 1,
	EFlickerType__FlickeringFast                                                     = 2,
	EFlickerType__EFlickerType_MAX                                                   = 3
};

/// Class /Script/TheOnryo.Addon_K27Power_01
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UAddon_K27Power_01 : public UItemAddon
{ 
public:
};

/// Class /Script/TheOnryo.Addon_K27Power_09
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAddon_K27Power_09 : public UItemAddon
{ 
public:
	class UClass*                                      _addonStatusEffect;                                         // 0x02B8   (0x0008)  
};

/// Class /Script/TheOnryo.Addon_K27Power_09StatusEffect
/// Size: 0x0018 (0x000350 - 0x000368)
class UAddon_K27Power_09StatusEffect : public UStatusEffect
{ 
public:
	float                                              _condemnNeededForBlind;                                     // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	class UStatusEffect*                               _blindnessEffect;                                           // 0x0358   (0x0008)  
	class UClass*                                      _blindnessStatusEffectClass;                                // 0x0360   (0x0008)  


	/// Functions
	// Function /Script/TheOnryo.Addon_K27Power_09StatusEffect.Authority_OnSurviorCondemnChange
	// void Authority_OnSurviorCondemnChange(class ACamperPlayer* Player, float condemnLevel);                               // [0x5dead60] Final|Native|Private 
};

/// Class /Script/TheOnryo.Addon_K27Power
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAddon_K27Power : public UItemAddon
{ 
public:
	float                                              _condemnStackNumber;                                        // 0x02B8   (0x0004)  
	bool                                               _onlyGiveStackForHealingFromInjuredToHealthy;               // 0x02BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02BD   (0x0003)  MISSED
};

/// Class /Script/TheOnryo.BaseManifestInteraction
/// Size: 0x0000 (0x0007D0 - 0x0007D0)
class UBaseManifestInteraction : public UBasicChargeableInteraction
{ 
public:


	/// Functions
	// Function /Script/TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionSucceeded
	// void Cosmetic_OnInteractionSucceeded(class ADBDPlayer* onryo);                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionStarted
	// void Cosmetic_OnInteractionStarted(class ADBDPlayer* onryo);                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionCancelled
	// void Cosmetic_OnInteractionCancelled(class ADBDPlayer* onryo);                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheOnryo.CondemnedComponent
/// Size: 0x0418 (0x0000B8 - 0x0004D0)
class UCondemnedComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x00B8   (0x0068)  MISSED
	FTunableStat                                       _condemnedRangeWhenTeleport;                                // 0x0120   (0x0080)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01A0   (0x0008)  MISSED
	FDBDTunableRowHandle                               _maxCondemnedLevel;                                         // 0x01A8   (0x0028)  
	FDBDTunableRowHandle                               _killerInstinctRevealDurationOnFullyCondemned;              // 0x01D0   (0x0028)  
	FDBDTunableRowHandle                               _stacksOnTurnOffTV;                                         // 0x01F8   (0x0028)  
	FDBDTunableRowHandle                               _stacksOnRetrieveVHS;                                       // 0x0220   (0x0028)  
	FDBDTunableRowHandle                               _stacksRemovedOnInsert;                                     // 0x0248   (0x0028)  
	FDBDTunableRowHandle                               _stacksOnOnryoTeleport;                                     // 0x0270   (0x0028)  
	FDBDTunableRowHandle                               _reducedAddonStacksOnOnryoTeleport;                         // 0x0298   (0x0028)  
	FDBDTunableRowHandle                               _stacksOnPlayerHooked;                                      // 0x02C0   (0x0028)  
	FDBDTunableRowHandle                               _maxLockInStacksPerHook;                                    // 0x02E8   (0x0028)  
	FTunableStat                                       _condemnedStackPerSecond;                                   // 0x0310   (0x0080)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0390   (0x0008)  MISSED
	TArray<FGameplayTag>                               _analyticScoreTag;                                          // 0x0398   (0x0010)  
	float                                              _condemnedLevel;                                            // 0x03A8   (0x0004)  
	float                                              _lockedCondemnedLevel;                                      // 0x03AC   (0x0004)  
	ECondemnOrigin                                     _previousReasonForCondemn;                                  // 0x03B0   (0x0001)  
	bool                                               _isHoldingVHS;                                              // 0x03B1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3E];                                      // 0x03B2   (0x003E)  MISSED
	class UClass*                                      _condemnKillerInstinctEffectClass;                          // 0x03F0   (0x0008)  
	class UStatusEffect*                               _condemnKillerInstinctEffect;                               // 0x03F8   (0x0008)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x0400   (0x0018)  MISSED
	TArray<FGameplayTag>                               _reactivateCondemnProgressEvents;                           // 0x0418   (0x0010)  
	unsigned char                                      UnknownData05_5[0x38];                                      // 0x0428   (0x0038)  MISSED
	FDBDTunableRowHandle                               _rangeToStopCondemnProgressAfterChase;                      // 0x0460   (0x0028)  
	FDBDTunableRowHandle                               _timeAwayFromKillerToResumeCondemn;                         // 0x0488   (0x0028)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x04B0   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheOnryo.CondemnedComponent.OnRep_HoldingVHS
	// void OnRep_HoldingVHS();                                                                                              // [0x5deb3a0] Final|Native|Private 
	// Function /Script/TheOnryo.CondemnedComponent.OnRep_CondemnedLevel
	// void OnRep_CondemnedLevel(float previousValue);                                                                       // [0x5deb320] Final|Native|Private 
	// Function /Script/TheOnryo.CondemnedComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5deb2a0] Final|Native|Private 
	// Function /Script/TheOnryo.CondemnedComponent.IsHoldingVHS
	// bool IsHoldingVHS();                                                                                                  // [0x5deb160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.CondemnedComponent.IsFullyCondemned
	// bool IsFullyCondemned();                                                                                              // [0x5deb130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.CondemnedComponent.IsCondemned
	// bool IsCondemned();                                                                                                   // [0x5deb100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.CondemnedComponent.GetLockedCondemnedPercent
	// float GetLockedCondemnedPercent();                                                                                    // [0x5deb070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.CondemnedComponent.GetCondemnedPercent
	// float GetCondemnedPercent();                                                                                          // [0x5deb040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.CondemnedComponent.GetCondemnedLevel
	// float GetCondemnedLevel();                                                                                            // [0x5deb010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.CondemnedComponent.DBD_SetCondemnMoriableAndDownAllSurvivors
	// void DBD_SetCondemnMoriableAndDownAllSurvivors();                                                                     // [0x4592da0] Final|Exec|Native|Public 
	// Function /Script/TheOnryo.CondemnedComponent.DBD_SetCondemnedLevel
	// void DBD_SetCondemnedLevel(float Level);                                                                              // [0x496cad0] Final|Exec|Native|Public 
};

/// Class /Script/TheOnryo.CondemnMoriInteraction
/// Size: 0x0000 (0x000830 - 0x000830)
class UCondemnMoriInteraction : public UKillInteractionDefinition
{ 
public:
};

/// Class /Script/TheOnryo.SurvivorTelevisionInteraction
/// Size: 0x0000 (0x0007D0 - 0x0007D0)
class USurvivorTelevisionInteraction : public UBasicChargeableInteraction
{ 
public:
};

/// Class /Script/TheOnryo.InsertVHS
/// Size: 0x0000 (0x0007D0 - 0x0007D0)
class UInsertVHS : public USurvivorTelevisionInteraction
{ 
public:
};

/// Class /Script/TheOnryo.K27Addon_16_ScreamRevealComponent
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UK27Addon_16_ScreamRevealComponent : public UActorComponent
{ 
public:
	bool                                               _authorityHasRequestedSurvivorScreamConfirmation;           // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              _screamDuration;                                            // 0x00BC   (0x0004)  
	class UClass*                                      _revealAuraToKillerEffectClass;                             // 0x00C0   (0x0008)  
	SDK_UNDEFINED(80,3698) /* TMap<TWeakObjectPtr<ACamperPlayer*>, UActivatableStatusEffect*> */ __um(_revealAuraToKillerPerSurvivor); // 0x00C8   (0x0050)  


	/// Functions
	// Function /Script/TheOnryo.K27Addon_16_ScreamRevealComponent.Server_ConfirmKillerIsInViewValidation
	// void Server_ConfirmKillerIsInViewValidation(bool isKillerInView);                                                     // [0x5c504c0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheOnryo.K27Addon_16_ScreamRevealComponent.Multicast_RevealAndMakeSurvivorScream
	// void Multicast_RevealAndMakeSurvivorScream(float screamRevealDuration);                                               // [0x57d3f50] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.K27Addon_16_ScreamRevealComponent.Client_QueryIsKillerInSurvivorView
	// void Client_QueryIsKillerInSurvivorView();                                                                            // [0x4dd4880] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/TheOnryo.K27Addon_16_ScreamRevealComponent.BP_RevealAndMakeSurvivorScream
	// void BP_RevealAndMakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration);                    // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheOnryo.K27P01
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UK27P01 : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	float                                              _survivorAuraRevealDuration;                                // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _timedRevealToKillerEffectClass;                            // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheOnryo.K27P01.GetAuraRevealDuration
	// float GetAuraRevealDuration();                                                                                        // [0x4fe8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.K27P01.Authority_OnSurvivorUnhookedOffScourgeHook
	// void Authority_OnSurvivorUnhookedOffScourgeHook(FGameEventData& GameEventData);                                       // [0x5deaf40] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheOnryo.K27P02
/// Size: 0x00B8 (0x0003C8 - 0x000480)
class UK27P02 : public UPerk
{ 
public:
	float                                              _activePerkDuration;                                        // 0x03C8   (0x000C)  
	float                                              _regressionModifier;                                        // 0x03D4   (0x000C)  
	SDK_UNDEFINED(80,3699) /* TMap<AGenerator*, FFastTimer> */ __um(_authority_affectedGeneratorsAndActiveTimers); // 0x03E0   (0x0050)  
	SDK_UNDEFINED(80,3700) /* TMap<AGenerator*, uint64_t> */ __um(_gameplayModifierHandles);                       // 0x0430   (0x0050)  


	/// Functions
	// Function /Script/TheOnryo.K27P02.Multicast_ShowBubbleNotification
	// void Multicast_ShowBubbleNotification(class AGenerator* triggeringGenerator);                                         // [0x4ff91d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.K27P02.Multicast_AddGeneratorAura
	// void Multicast_AddGeneratorAura(class AGenerator* Generator);                                                         // [0x586e260] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.K27P02.GetRegressionModifierAtLevel
	// float GetRegressionModifierAtLevel();                                                                                 // [0x4fe8230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.K27P02.GetActivationTimeAtLevel
	// float GetActivationTimeAtLevel();                                                                                     // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.K27P02.Cosmetic_ShowBubbleNotification
	// void Cosmetic_ShowBubbleNotification(class AGenerator* triggeringGenerator);                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheOnryo.K27P03
/// Size: 0x00C8 (0x0003C8 - 0x000490)
class UK27P03 : public UPerk
{ 
public:
	FLinearColor                                       _generatorBlockedAuraColorForKiller;                        // 0x03C8   (0x0010)  
	float                                              _generatorProgressionActivation;                            // 0x03D8   (0x000C)  
	float                                              _generatorBlockedDuration;                                  // 0x03E4   (0x000C)  
	SDK_UNDEFINED(80,3701) /* TMap<TWeakObjectPtr<AGenerator*>, FFastTimer> */ __um(_authority_blockedGeneratorsAndTimeToUnblock); // 0x03F0   (0x0050)  
	SDK_UNDEFINED(80,3702) /* TMap<TWeakObjectPtr<ACamperPlayer*>, TWeakObjectPtr<AGenerator*>> */ __um(_authority_affectedRepairersAndTheirGenerators); // 0x0440   (0x0050)  


	/// Functions
	// Function /Script/TheOnryo.K27P03.Multicast_HighlightBlockedGeneratorForKiller
	// void Multicast_HighlightBlockedGeneratorForKiller(class AGenerator* Generator);                                       // [0x4ff91d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.K27P03.Multicast_ActivateSkillCheck
	// void Multicast_ActivateSkillCheck(class ACamperPlayer* Survivor);                                                     // [0x586e260] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.K27P03.GetGeneratorProgressionActivationAtLevel
	// float GetGeneratorProgressionActivationAtLevel();                                                                     // [0x4fed0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.K27P03.GetGeneratorBlockedDurationAtLevel
	// float GetGeneratorBlockedDurationAtLevel();                                                                           // [0x4fe8140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheOnryo.ManifestationComponent
/// Size: 0x03F8 (0x0000B8 - 0x0004B0)
class UManifestationComponent : public UActorComponent
{ 
public:
	class UClass*                                      _unmanifestedUndetectableStatusEffectClass;                 // 0x00B8   (0x0008)  
	FTunableStat                                       _lingeringFlickerDuration;                                  // 0x00C0   (0x0080)  
	FDBDTunableRowHandle                               _maxTrackedTimeSinceManifest;                               // 0x0140   (0x0028)  
	FTunableStat                                       _manifestInteractionUndetectableLingerTime;                 // 0x0168   (0x0080)  
	FTunableStat                                       _teleportManifestUndetectableLingeringDuration;             // 0x01E8   (0x0080)  
	FTunableStat                                       _lingeringUndetectableDurationFromOtherSources;             // 0x0268   (0x0080)  
	FStatProperty                                      _scorePercent;                                              // 0x02E8   (0x0088)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0370   (0x0028)  MISSED
	class UOnryoVisibilityComponent*                   _onryoVisibilityComponent;                                  // 0x0398   (0x0008)  
	class UClass*                                      _onryoVisibilityComponentClass;                             // 0x03A0   (0x0008)  
	bool                                               _isManifested;                                              // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03A9   (0x0003)  MISSED
	float                                              _lingeringUndetectableEndTimeStamp;                         // 0x03AC   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC8];                                      // 0x03B0   (0x00C8)  MISSED
	class UStatusEffect*                               _unmanifestStatusEffect;                                    // 0x0478   (0x0008)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0480   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheOnryo.ManifestationComponent.OnRep_LingeringUndetectableEndTimeStamp
	// void OnRep_LingeringUndetectableEndTimeStamp();                                                                       // [0x5deb3e0] Final|Native|Private 
	// Function /Script/TheOnryo.ManifestationComponent.OnRep_IsManifested
	// void OnRep_IsManifested();                                                                                            // [0x5deb3c0] Final|Native|Private 
	// Function /Script/TheOnryo.ManifestationComponent.OnLingeringUndetectableTimerCompleted
	// void OnLingeringUndetectableTimerCompleted();                                                                         // [0x5deb300] Final|Native|Private 
	// Function /Script/TheOnryo.ManifestationComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5deb2c0] Final|Native|Private 
	// Function /Script/TheOnryo.ManifestationComponent.Multicast_OnManifestationTransitionComplete
	// void Multicast_OnManifestationTransitionComplete();                                                                   // [0x4d82970] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.ManifestationComponent.Multicast_OnManifestationChanged
	// void Multicast_OnManifestationChanged(bool isManifested, bool isImmediateManifest);                                   // [0x5deb1c0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.ManifestationComponent.Multicast_AttemptToPalletStunDemanifestedKiller
	// void Multicast_AttemptToPalletStunDemanifestedKiller();                                                               // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.ManifestationComponent.Authority_OnMoriStarted
	// void Authority_OnMoriStarted();                                                                                       // [0x5dead40] Final|Native|Private 
	// Function /Script/TheOnryo.ManifestationComponent.Authority_AttemptToPalletStunDemanifestedKiller
	// void Authority_AttemptToPalletStunDemanifestedKiller(FGameplayTag GameplayTag, FGameEventData& GameEventData);        // [0x5deac10] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheOnryo.ManifestInteraction
/// Size: 0x0010 (0x0007D0 - 0x0007E0)
class UManifestInteraction : public UBaseManifestInteraction
{ 
public:
	class UCurveFloat*                                 _postManifestSpeedCurve;                                    // 0x07D0   (0x0008)  
	float                                              _postManifestSpeedCurveDuration;                            // 0x07D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x07DC   (0x0004)  MISSED
};

/// Class /Script/TheOnryo.NearPoweredTelevisionWithLingerTime
/// Size: 0x0098 (0x0000F0 - 0x000188)
class UNearPoweredTelevisionWithLingerTime : public UEventDrivenModifierCondition
{ 
public:
	float                                              _distanceFromTelevision;                                    // 0x00F0   (0x0004)  
	float                                              _lingerDuration;                                            // 0x00F4   (0x0004)  
	FActorPairQueryHeightRange                         _heightRange;                                               // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0100   (0x0088)  MISSED


	/// Functions
	// Function /Script/TheOnryo.NearPoweredTelevisionWithLingerTime.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5deb2e0] Final|Native|Private 
	// Function /Script/TheOnryo.NearPoweredTelevisionWithLingerTime.GetPercentRemainingDuration
	// float GetPercentRemainingDuration();                                                                                  // [0x5deb0a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheOnryo.OnryoAfterImageComponent
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UOnryoAfterImageComponent : public UActorComponent
{ 
public:
	bool                                               _isAllowedToSpawnImages;                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0xC8];                                      // 0x00B9   (0x00C8)  MISSED
	bool                                               _hideAfterImageDuringInteractions;                          // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0182   (0x0006)  MISSED


	/// Functions
	// Function /Script/TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImageChanged
	// void ShouldShowAfterImageChanged(bool shouldBeVisible);                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImage
	// bool ShouldShowAfterImage();                                                                                          // [0x5deb490] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoAfterImageComponent.SetAllowedToSpawnImages
	// void SetAllowedToSpawnImages(bool canSpawnImages);                                                                    // [0x5deb400] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOnryo.OnryoAfterImageComponent.IsOnryoInvisible
	// bool IsOnryoInvisible();                                                                                              // [0x5ac46e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoAfterImageComponent.IsInteracting
	// bool IsInteracting();                                                                                                 // [0x5deb190] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoAfterImageComponent.IsAttacking
	// bool IsAttacking();                                                                                                   // [0x5deb0d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoAfterImageComponent.GetKiller
	// class ASlasherPlayer* GetKiller();                                                                                    // [0x5d798f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheOnryo.OnryoAnimInstance
/// Size: 0x0030 (0x000610 - 0x000640)
class UOnryoAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isTeleporting;                                             // 0x0610   (0x0001)  
	bool                                               _isStartingUpTeleport;                                      // 0x0611   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0612   (0x0002)  MISSED
	float                                              _teleportStartUpDuration;                                   // 0x0614   (0x0004)  
	bool                                               _isCrawlingOutOfTV;                                         // 0x0618   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0619   (0x0003)  MISSED
	float                                              _crawlingOutDuration;                                       // 0x061C   (0x0004)  
	bool                                               _isTeleportCancelled;                                       // 0x0620   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0621   (0x0003)  MISSED
	float                                              _teleportCancelledDuration;                                 // 0x0624   (0x0004)  
	bool                                               _isEnteringManifest;                                        // 0x0628   (0x0001)  
	bool                                               _isExitingManifest;                                         // 0x0629   (0x0001)  
	bool                                               _isInOtherWorld;                                            // 0x062A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x15];                                      // 0x062B   (0x0015)  MISSED
};

/// Class /Script/TheOnryo.OnryoFXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UOnryoFXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportSuccess
	// void Cosmetic_OnTeleportSuccess();                                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportStart
	// void Cosmetic_OnTeleportStart();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportFinished
	// void Cosmetic_OnTeleportFinished();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportCancelled
	// void Cosmetic_OnTeleportCancelled();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnManifestStateChanged
	// void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest);                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnKillerVisibilityChanged
	// void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force); // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnFailedAttemptPalletStun
	// void Cosmetic_OnFailedAttemptPalletStun();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestSuccess
	// void Cosmetic_OnChargeUnmanifestSuccess();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestStart
	// void Cosmetic_OnChargeUnmanifestStart();                                                                              // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestCancelled
	// void Cosmetic_OnChargeUnmanifestCancelled();                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestSuccess
	// void Cosmetic_OnChargeManifestSuccess();                                                                              // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestStart
	// void Cosmetic_OnChargeManifestStart();                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestCancelled
	// void Cosmetic_OnChargeManifestCancelled();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/TheOnryo.OnryoPower
/// Size: 0x01A0 (0x0004C8 - 0x000668)
class AOnryoPower : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x04C8   (0x0010)  MISSED
	class UClass*                                      _condemnedComponentClass;                                   // 0x04D8   (0x0008)  
	class UClass*                                      _manifestationComponentClass;                               // 0x04E0   (0x0008)  
	TArray<FStatusEffectSpawnData>                     _effects;                                                   // 0x04E8   (0x0010)  
	FDBDTunableRowHandle                               _teleportCooldownTime;                                      // 0x04F8   (0x0028)  
	FDBDTunableRowHandle                               _cooldownTimeToAllowCondemn;                                // 0x0520   (0x0028)  
	FPlayerStatusEffectSpawnerHelper                   _effectSpawner;                                             // 0x0548   (0x0088)  
	unsigned char                                      UnknownData01_5[0x68];                                      // 0x05D0   (0x0068)  MISSED
	class UOnryoTeleportTargeterComponent*             _televisionTargeter;                                        // 0x0638   (0x0008)  
	class UManifestationComponent*                     _manifestationComponent;                                    // 0x0640   (0x0008)  
	TArray<class AOnryoTelevision*>                    _televisions;                                               // 0x0648   (0x0010)  
	class UClass*                                      _televisionClass;                                           // 0x0658   (0x0008)  
	class UInteractionDefinition*                      _onryoPowerCooldownInteraction;                             // 0x0660   (0x0008)  


	/// Functions
	// Function /Script/TheOnryo.OnryoPower.PowerCooldownEnd_Cosmetic
	// void PowerCooldownEnd_Cosmetic();                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheOnryo.OnryoPowerPresentationComponent
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UOnryoPowerPresentationComponent : public UPresentationItemProgressComponent
{ 
public:
	class UOnryoTVInitialCooldownStateComponent*       _cooldownState;                                             // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

/// Class /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor
/// Size: 0x0078 (0x000270 - 0x0002E8)
class AOnryoSurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	class UCondemnedComponent*                         _condemnedComponent;                                        // 0x0270   (0x0008)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0278   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.OnSurvivorDisguisedOrUndisguised
	// void OnSurvivorDisguisedOrUndisguised(bool isDisguised);                                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.GetObjectState
	// class UGameplayTagContainerComponent* GetObjectState();                                                               // [0x5deea80] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.GetCondemnedComponent
	// class UCondemnedComponent* GetCondemnedComponent();                                                                   // [0x589b600] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnReceiveTape
	// void Cosmetic_OnReceiveTape(class ACamperPlayer* camper);                                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseTape
	// void Cosmetic_OnLoseTape(class ACamperPlayer* camper);                                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseCondemnStack
	// void Cosmetic_OnLoseCondemnStack(class ACamperPlayer* camper, float currentStacks);                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLightingSet
	// void Cosmetic_OnLightingSet(class ABaseSky* lighting);                                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnHookedChanged
	// void Cosmetic_OnHookedChanged();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnGainCondemnStack
	// void Cosmetic_OnGainCondemnStack(class ACamperPlayer* camper, float currentStacks);                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnDamageStateChanged
	// void Cosmetic_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryStart
	// void Cosmetic_OnCarryStart(class ACamperPlayer* camper);                                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryEnd
	// void Cosmetic_OnCarryEnd(class ACamperPlayer* camper);                                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheOnryo.OnryoTeleportInteraction
/// Size: 0x0160 (0x0007D0 - 0x000930)
class UOnryoTeleportInteraction : public UBasicChargeableInteraction
{ 
public:
	class ASlasherPlayer*                              _cachedOwningKiller;                                        // 0x07C8   (0x0008)  
	class AOnryoTelevision*                            _currentTargetTelevision;                                   // 0x07D0   (0x0008)  
	class AOnryoTelevision*                            _televisionTeleportingTo;                                   // 0x07D8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x07E0   (0x0008)  MISSED
	FDBDTunableRowHandle                               _teleportExitAnimDuration;                                  // 0x07E8   (0x0028)  
	FDBDTunableRowHandle                               _teleportCancelledAnimDuration;                             // 0x0810   (0x0028)  
	FDBDTunableRowHandle                               _postTeleportSpeedDuration;                                 // 0x0838   (0x0028)  
	class UCurveFloat*                                 _postTeleportSpeedCurve;                                    // 0x0860   (0x0008)  
	FStatProperty                                      _scorePercent;                                              // 0x0868   (0x0088)  
	class UCurveFloat*                                 _postTeleportAlternateSpeedCurve;                           // 0x08F0   (0x0008)  
	float                                              _offsetHeight;                                              // 0x08F8   (0x0004)  
	float                                              _rayCastLength;                                             // 0x08FC   (0x0004)  
	class UClass*                                      _cameraStrategyClass;                                       // 0x0900   (0x0008)  
	class UCurveFloat*                                 _cameraMaximumAngleFactorCurve;                             // 0x0908   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0910   (0x0010)  MISSED
	class UConeAroundDirectionCameraStrategy*          _cameraStrategy;                                            // 0x0920   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0928   (0x0008)  MISSED
};

/// Class /Script/TheOnryo.OnryoTelevision
/// Size: 0x0318 (0x000338 - 0x000650)
class AOnryoTelevision : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0338   (0x0018)  MISSED
	class USceneComponent*                             _teleportPosition;                                          // 0x0350   (0x0008)  
	bool                                               _isKillerInOtherWorld;                                      // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0359   (0x0007)  MISSED
	class UTelevisionOutlineUpdateStrategy*            _televisionOutlineUpdateStrategy;                           // 0x0360   (0x0008)  
	class ULocalPlayerTrackerComponent*                _localPlayerTracker;                                        // 0x0368   (0x0008)  
	class UMapActorComponent*                          _mapActorComponent;                                         // 0x0370   (0x0008)  
	class UOnryoTVAutoPowerComponent*                  _autoPowerComponent;                                        // 0x0378   (0x0008)  
	unsigned char                                      UnknownData02_5[0x48];                                      // 0x0380   (0x0048)  MISSED
	bool                                               _isPowered;                                                 // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x17];                                      // 0x03C9   (0x0017)  MISSED
	SDK_UNDEFINED(80,3703) /* TSet<ADBDPlayer*> */     __um(_nearbySurvivorsWithoutTape);                          // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData04_5[0x50];                                      // 0x0430   (0x0050)  MISSED
	FDBDTunableRowHandle                               _distanceNearTVWithoutTape;                                 // 0x0480   (0x0028)  
	FTunableStat                                       _survivorTurnOffTVDuration;                                 // 0x04A8   (0x0080)  
	FTunableStat                                       _teleportTurnOffDuration;                                   // 0x0528   (0x0080)  
	FTunableStat                                       _survivorInsertTapeTurnOffDuration;                         // 0x05A8   (0x0080)  
	FDBDTunableRowHandle                               _shouldRepowerOtherTelevisionsWhenAllTurnedOff;             // 0x0628   (0x0028)  


	/// Functions
	// Function /Script/TheOnryo.OnryoTelevision.OnRep_IsPowered
	// void OnRep_IsPowered(bool previousIsPowered);                                                                         // [0x5deedf0] Final|Native|Private 
	// Function /Script/TheOnryo.OnryoTelevision.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x5deed90] Final|Native|Private 
	// Function /Script/TheOnryo.OnryoTelevision.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5deed00] Final|Native|Private 
	// Function /Script/TheOnryo.OnryoTelevision.OnCosmeticTransitionStateFinished
	// void OnCosmeticTransitionStateFinished();                                                                             // [0x5deec30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheOnryo.OnryoTelevision.Multicast_SetSurvivorCanInsertTape
	// void Multicast_SetSurvivorCanInsertTape(class ADBDPlayer* Survivor, bool canInsert, bool showBubbleIndicator);        // [0x5deeb10] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.OnryoTelevision.Multicast_FireLoudNoiseNotification
	// void Multicast_FireLoudNoiseNotification();                                                                           // [0x4360f30] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOnryo.OnryoTelevision.IsAnySurvivorWithoutTapeNearby
	// bool IsAnySurvivorWithoutTapeNearby();                                                                                // [0x5deeae0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoTelevision.GetTelevisionCosmeticState
	// ETelevisionCosmeticState GetTelevisionCosmeticState();                                                                // [0x5deeab0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_SetIsTeleportTarget
	// void Cosmetic_SetIsTeleportTarget(bool Target);                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnTVSelectedByLocalSurvivor
	// void Cosmetic_OnTVSelectedByLocalSurvivor(class ADBDPlayer* Survivor);                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnTelevisionCosmeticStateChanged
	// void Cosmetic_OnTelevisionCosmeticStateChanged(ETelevisionCosmeticState NextState, ETelevisionCosmeticState previousState); // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnTeleportStarted
	// void Cosmetic_OnTeleportStarted();                                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCompleted
	// void Cosmetic_OnTeleportCompleted();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCancelled
	// void Cosmetic_OnTeleportCancelled();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnStatusEffectZoneVFXActiveChanged
	// void Cosmetic_OnStatusEffectZoneVFXActiveChanged(bool Active);                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnPoweredOnVfxRadiusChanged
	// void Cosmetic_OnPoweredOnVfxRadiusChanged(float newPoweredOnVfxRadius);                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Cosmetic_OnCamperCanInsertTapeChanged
	// void Cosmetic_OnCamperCanInsertTapeChanged(bool canInsertTape);                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTelevision.Authority_OnRepowerTimerDone
	// void Authority_OnRepowerTimerDone();                                                                                  // [0x5deea40] Final|Native|Private 
};

/// Class /Script/TheOnryo.OnryoTVAutoPowerComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UOnryoTVAutoPowerComponent : public UActorComponent
{ 
public:
	class UClass*                                      _cooldownStateClass;                                        // 0x00B8   (0x0008)  
	bool                                               _powerTVOnBeginPlay;                                        // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Class /Script/TheOnryo.OnryoTVInitialCooldownStateComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UOnryoTVInitialCooldownStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _initialTVCooldown;                                         // 0x00D0   (0x0028)  
	class UTimerObject*                                _cooldownTimer;                                             // 0x00F8   (0x0008)  
	bool                                               _isDone;                                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheOnryo.OnryoTVInitialCooldownStateComponent.OnRep_IsDone
	// void OnRep_IsDone();                                                                                                  // [0x5deedd0] Final|Native|Private 
	// Function /Script/TheOnryo.OnryoTVInitialCooldownStateComponent.OnCooldownDone
	// void OnCooldownDone();                                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOnryo.OnryoTVInitialCooldownStateComponent.Authority_TryStartCooldown
	// void Authority_TryStartCooldown();                                                                                    // [0x5deea60] Final|Native|Private 
};

/// Class /Script/TheOnryo.OnryoUnmanifestCooldownInteraction
/// Size: 0x0030 (0x000650 - 0x000680)
class UOnryoUnmanifestCooldownInteraction : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _onryoPowerCooldownTime;                                    // 0x0648   (0x0028)  
	class UCurveFloat*                                 _playedCooldownSpeedCurve;                                  // 0x0670   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0678   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheOnryo.OnryoUnmanifestCooldownInteraction.SetOnryoPower
	// void SetOnryoPower(class AOnryoPower* OnryoPower);                                                                    // [0x5deeea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheOnryo.OnryoVisibilityComponent
/// Size: 0x0158 (0x0000B8 - 0x000210)
class UOnryoVisibilityComponent : public UActorComponent
{ 
public:
	bool                                               _isKillerVisible;                                           // 0x00B8   (0x0001)  
	bool                                               _isInKillerSightRange;                                      // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00BA   (0x0006)  MISSED
	TArray<FGameplayTag>                               _killerRevealingStateTags;                                  // 0x00C0   (0x0010)  
	FDBDTunableRowHandle                               _killerVisibleMaxDistance;                                  // 0x00D0   (0x0028)  
	SDK_UNDEFINED(80,3704) /* TMap<EFlickerType, FFlickerSettings> */ __um(_flickerSettings);                      // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0148   (0x0001)  MISSED
	bool                                               _isInIntroPhase;                                            // 0x0149   (0x0001)  
	bool                                               _isManifested;                                              // 0x014A   (0x0001)  
	bool                                               _isInManifestingTransition;                                 // 0x014B   (0x0001)  
	unsigned char                                      UnknownData02_6[0xC4];                                      // 0x014C   (0x00C4)  MISSED


	/// Functions
	// Function /Script/TheOnryo.OnryoVisibilityComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x5deedb0] Final|Native|Private 
	// Function /Script/TheOnryo.OnryoVisibilityComponent.OnKillerInSurvivorSightRangeChanged
	// void OnKillerInSurvivorSightRangeChanged(bool inRange);                                                               // [0x5deec70] Final|Native|Private 
	// Function /Script/TheOnryo.OnryoVisibilityComponent.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5deec50] Final|Native|Public  
	// Function /Script/TheOnryo.OnryoVisibilityComponent.Multicast_OnManifestationStateChanged
	// void Multicast_OnManifestationStateChanged(bool isManifested, bool isImmediateManifest);                              // [0x4dcf8b0] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/TheOnryo.RetrieveVHS
/// Size: 0x0000 (0x0007D0 - 0x0007D0)
class URetrieveVHS : public USurvivorTelevisionInteraction
{ 
public:
};

/// Class /Script/TheOnryo.S30P01
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class US30P01 : public UPerk
{ 
public:
	float                                              _perkEffectActiveDuration;                                  // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
};

/// Class /Script/TheOnryo.S30P02
/// Size: 0x0048 (0x0003C8 - 0x000410)
class US30P02 : public UPerk
{ 
public:
	float                                              _auraReadingDistance;                                       // 0x03C8   (0x000C)  
	float                                              _healingOthersBonus;                                        // 0x03D4   (0x000C)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x03E0   (0x0010)  MISSED
	class UClass*                                      _revealAuraStatusEffectToImpose;                            // 0x03F0   (0x0008)  
	class UClass*                                      _showHUDIconStatusEffectToImpose;                           // 0x03F8   (0x0008)  
	TArray<class UStatusEffect*>                       _imposedShowHUDIconStatusEffects;                           // 0x0400   (0x0010)  


	/// Functions
	// Function /Script/TheOnryo.S30P02.GetHealingOthersBonus
	// float GetHealingOthersBonus();                                                                                        // [0x4fe8230] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheOnryo.S30P03
/// Size: 0x0010 (0x000480 - 0x000490)
class US30P03 : public UBoonPerk
{ 
public:
	float                                              _hasteLingerDuration;                                       // 0x0480   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x048C   (0x0004)  MISSED
};

/// Class /Script/TheOnryo.TelevisionOutlineUpdateStrategy
/// Size: 0x0108 (0x0000E0 - 0x0001E8)
class UTelevisionOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FTunableStat                                       _distanceToRevealAura;                                      // 0x00E0   (0x0080)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0160   (0x0004)  MISSED
	FLinearColor                                       _survivorAuraNearColor;                                     // 0x0164   (0x0010)  
	FLinearColor                                       _survivorAuraTapeTargetColor;                               // 0x0174   (0x0010)  
	FLinearColor                                       _slasherPoweredColor;                                       // 0x0184   (0x0010)  
	FLinearColor                                       _revealedByMapColor;                                        // 0x0194   (0x0010)  
	FLinearColor                                       _slasherUnpoweredDefaultColor;                              // 0x01A4   (0x0010)  
	FLinearColor                                       _slasherUnpoweredVisibleColor;                              // 0x01B4   (0x0010)  
	FLinearColor                                       _slasherTeleportTargetColor;                                // 0x01C4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x01D4   (0x0014)  MISSED
};

/// Class /Script/TheOnryo.OnryoTeleportTargeterComponent
/// Size: 0x0078 (0x0000B8 - 0x000130)
class UOnryoTeleportTargeterComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _maximumTeleportAngle;                                      // 0x00B8   (0x0028)  
	class AOnryoTelevision*                            _replicatedTargetTelevision;                                // 0x00E0   (0x0008)  
	class AOnryoTelevision*                            _localTargetTelevision;                                     // 0x00E8   (0x0008)  
	class AOnryoTelevision*                            _previousTarget;                                            // 0x00F0   (0x0008)  
	float                                              _targetUpdateInterval;                                      // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x00FC   (0x0034)  MISSED


	/// Functions
	// Function /Script/TheOnryo.OnryoTeleportTargeterComponent.Server_SetTeleportTarget
	// void Server_SetTeleportTarget(class AOnryoTelevision* TV);                                                            // [0x58cbe00] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheOnryo.OnryoTeleportTargeterComponent.OnRep_TargetTelevision
	// void OnRep_TargetTelevision();                                                                                        // [0x5deee80] Final|Native|Private 
};

/// Class /Script/TheOnryo.TurnOffTV
/// Size: 0x0000 (0x0007D0 - 0x0007D0)
class UTurnOffTV : public USurvivorTelevisionInteraction
{ 
public:
};

/// Class /Script/TheOnryo.UnmanifestInteraction
/// Size: 0x0010 (0x0007D0 - 0x0007E0)
class UUnmanifestInteraction : public UBaseManifestInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x07D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheOnryo.UnmanifestInteraction.SetOnryoPower
	// void SetOnryoPower(class AOnryoPower* OnryoPower);                                                                    // [0x5deef30] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/TheOnryo.FlickerSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FFlickerSettings
{ 
	FDBDTunableRowHandle                               VisibleDuration;                                            // 0x0000   (0x0028)  
	TArray<FGameplayTag>                               VisibileDurationAddModifiers;                               // 0x0028   (0x0010)  
	FDBDTunableRowHandle                               InvisibleDuration;                                          // 0x0038   (0x0028)  
	TArray<FGameplayTag>                               InvisibleDurationAddModifiers;                              // 0x0060   (0x0010)  
	bool                                               StartVisible;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

