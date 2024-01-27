
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayUtilities
/// dependency: Projectile
/// dependency: StatSystem

/// Enum /Script/TheK23.EFlurryOfKnivesInteractionState
/// Size: 0x05
enum class EFlurryOfKnivesInteractionState : uint8_t
{
	EFlurryOfKnivesInteractionState__Charging                                        = 0,
	EFlurryOfKnivesInteractionState__Aiming                                          = 1,
	EFlurryOfKnivesInteractionState__Throwing                                        = 2,
	EFlurryOfKnivesInteractionState__Finished                                        = 3,
	EFlurryOfKnivesInteractionState__EFlurryOfKnivesInteractionState_MAX             = 4
};

/// Class /Script/TheK23.ActivateSuperMode
/// Size: 0x0070 (0x000650 - 0x0006C0)
class UActivateSuperMode : public UInteractionDefinition
{ 
public:
	FAnimationMontageDescriptor                        _activationMontage;                                         // 0x0650   (0x0020)  
	FDBDTunableRowHandle                               _activationDuration;                                        // 0x0670   (0x0028)  
	FDBDTunableRowHandle                               _confirmationChargeDuration;                                // 0x0698   (0x0028)  
};

/// Class /Script/TheK23.FastTrack
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UFastTrack : public UPerk
{ 
public:
	int32_t                                            _tokensToAdd;                                               // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03D4   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheK23.FastTrack.Cosmetic_OnTokenCountDecreased
	// void Cosmetic_OnTokenCountDecreased();                                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK23.FlurryComboScoreComponent
/// Size: 0x0170 (0x0000B8 - 0x000228)
class UFlurryComboScoreComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x1C];                                      // 0x00B8   (0x001C)  MISSED
	float                                              _comboScore;                                                // 0x00D4   (0x0004)  
	FDBDTunableRowHandle                               _timeAddedByComboRank;                                      // 0x00D8   (0x0028)  
	FTunableStat                                       _timeForCombo;                                              // 0x0100   (0x0080)  
	FDBDTunableRowHandle                               _consecutiveHitsRequiredScore;                              // 0x0180   (0x0028)  
	TArray<float>                                      _thresholds;                                                // 0x01A8   (0x0010)  
	TArray<float>                                      _thresholdsScoreForAudio;                                   // 0x01B8   (0x0010)  
	TArray<FGameplayTag>                               _comboScoreEvents;                                          // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x01D8   (0x0048)  MISSED
	class UClass*                                      _comboExtendSuperModeStatusEffectClass;                     // 0x0220   (0x0008)  


	/// Functions
	// Function /Script/TheK23.FlurryComboScoreComponent.OnRep_ComboScore
	// void OnRep_ComboScore();                                                                                              // [0x5aec7c0] Final|Native|Private|Const 
};

/// Class /Script/TheK23.FlurryOfKnives
/// Size: 0x0530 (0x000790 - 0x000CC0)
class UFlurryOfKnives : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0790   (0x0040)  MISSED
	int32_t                                            _replicatedNumOfStacksReduction;                            // 0x07D0   (0x0004)  
	bool                                               _isSuperModeThrow;                                          // 0x07D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7B];                                      // 0x07D5   (0x007B)  MISSED
	class UStatusEffect*                               _selfSlowEffect;                                            // 0x0850   (0x0008)  
	FDBDTunableRowHandle                               _flurryOfKnivesEnterDuration;                               // 0x0858   (0x0028)  
	FDBDTunableRowHandle                               _flurryOfKnivesExitDuration;                                // 0x0880   (0x0028)  
	FDBDTunableRowHandle                               _chargeTime;                                                // 0x08A8   (0x0028)  
	FTunableStat                                       _baseTimeBetweenThrows;                                     // 0x08D0   (0x0080)  
	class UCurveFloat*                                 _throwRateModifierByKnivesThrown;                           // 0x0950   (0x0008)  
	FDBDTunableRowHandle                               _superModeDeactivationBuffer;                               // 0x0958   (0x0028)  
	FDBDTunableRowHandle                               _superModeThrowRateModifier;                                // 0x0980   (0x0028)  
	FDBDTunableRowHandle                               _knivesLaunchSpeed;                                         // 0x09A8   (0x0028)  
	FDBDTunableRowHandle                               _convergencePointDistance;                                  // 0x09D0   (0x0028)  
	class UCurveFloat*                                 _coneOfFireAngleCurve;                                      // 0x09F8   (0x0008)  
	FDBDTunableRowHandle                               _consecutiveKnivesStacksDecayTime;                          // 0x0A00   (0x0028)  
	FDBDTunableRowHandle                               _maxConsecutiveKnivesStacks;                                // 0x0A28   (0x0028)  
	class UCurveFloat*                                 _movementSpeedByKnivesThrown;                               // 0x0A50   (0x0008)  
	FDBDTunableRowHandle                               _superModeBaseMovementSpeed;                                // 0x0A58   (0x0028)  
	FDBDTunableRowHandle                               _baseWalkSpeed;                                             // 0x0A80   (0x0028)  
	class UCurveFloat*                                 _recoilIntensityByKnivesThrown;                             // 0x0AA8   (0x0008)  
	FDBDTunableRowHandle                               _recoilDuration;                                            // 0x0AB0   (0x0028)  
	FDBDTunableRowHandle                               _recoilAngle;                                               // 0x0AD8   (0x0028)  
	FDBDTunableRowHandle                               _maximumRecoilAngleVariation;                               // 0x0B00   (0x0028)  
	FDBDTunableRowHandle                               _rotationSpeedAdjustmentTime;                               // 0x0B28   (0x0028)  
	FDBDTunableRowHandle                               _aimingStanceRotationYawScaleAdjustment;                    // 0x0B50   (0x0028)  
	FDBDTunableRowHandle                               _aimingStanceRotationPitchScaleAdjustment;                  // 0x0B78   (0x0028)  
	FDBDTunableRowHandle                               _throwingRotationYawScaleAdjustment;                        // 0x0BA0   (0x0028)  
	FDBDTunableRowHandle                               _throwingRotationPitchScaleAdjustment;                      // 0x0BC8   (0x0028)  
	FDBDTunableRowHandle                               _aimingStanceGamepadRotationYawScaleAdjustment;             // 0x0BF0   (0x0028)  
	FDBDTunableRowHandle                               _aimingStanceGamepadRotationPitchScaleAdjustment;           // 0x0C18   (0x0028)  
	FDBDTunableRowHandle                               _throwingGamepadRotationYawScaleAdjustment;                 // 0x0C40   (0x0028)  
	FDBDTunableRowHandle                               _throwingGamepadRotationPitchScaleAdjustment;               // 0x0C68   (0x0028)  
	class UCurveFloat*                                 _aimingGamepadPitchCurve;                                   // 0x0C90   (0x0008)  
	class UCurveFloat*                                 _aimingGamepadYawCurve;                                     // 0x0C98   (0x0008)  
	class UCurveFloat*                                 _throwingGamepadPitchCurve;                                 // 0x0CA0   (0x0008)  
	class UCurveFloat*                                 _throwingGamepadYawCurve;                                   // 0x0CA8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0CB0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK23.FlurryOfKnives.Server_StartThrowing
	// void Server_StartThrowing();                                                                                          // [0x5aeccd0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks
	// void Server_DecreaseConsecutiveKnivesStacks();                                                                        // [0x5aecc80] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction
	// void OnRep_NumOfStacksReduction();                                                                                    // [0x5aecc60] Final|Native|Private 
	// Function /Script/TheK23.FlurryOfKnives.Multicast_StartThrowing
	// void Multicast_StartThrowing();                                                                                       // [0x5a3fe00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK23.HexCrowdControl
/// Size: 0x0010 (0x000448 - 0x000458)
class UHexCrowdControl : public UHexPerk
{ 
public:
	float                                              _windowVaultBlockDuration;                                  // 0x0448   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0454   (0x0004)  MISSED
};

/// Class /Script/TheK23.TricksterChainedThrowsAddon
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UTricksterChainedThrowsAddon : public UItemAddon
{ 
public:
	int32_t                                            _consecutiveHits;                                           // 0x02B8   (0x0004)  
	bool                                               _resetOnEnteringFlurryInteraction;                          // 0x02BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02BD   (0x0003)  MISSED
};

/// Class /Script/TheK23.IridescentPhotocardAddon
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UIridescentPhotocardAddon : public UTricksterChainedThrowsAddon
{ 
public:
	float                                              _percentageGainedOnHit;                                     // 0x02C0   (0x0004)  
	int32_t                                            _maxConsecutiveHits;                                        // 0x02C4   (0x0004)  
};

/// Class /Script/TheK23.K23PowerProgressPresentationComponent
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UK23PowerProgressPresentationComponent : public UPresentationItemProgressComponent
{ 
public:
};

/// Class /Script/TheK23.K23SurvivorCosmeticHelperActor
/// Size: 0x0020 (0x000270 - 0x000290)
class AK23SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0270   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK23.K23SurvivorCosmeticHelperActor.Cosmetic_K23CamperHitByKnife
	// void Cosmetic_K23CamperHitByKnife(float lacerationPercentage);                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK23.KnifeProjectile
/// Size: 0x00F0 (0x000338 - 0x000428)
class AKnifeProjectile : public AKillerProjectile
{ 
public:
	class UPrimitiveComponent*                         _worldCollider;                                             // 0x0338   (0x0008)  
	class UPrimitiveComponent*                         _camperDetector;                                            // 0x0340   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0348   (0x0010)  MISSED
	SDK_UNDEFINED(80,5091) /* TSet<ADBDPlayer*> */     __um(_playersAffectedThisThrow);                            // 0x0358   (0x0050)  
	class UPoolableProjectileComponent*                _poolableActorComponent;                                    // 0x03A8   (0x0008)  
	FDBDTunableRowHandle                               _knifeMaxRange;                                             // 0x03B0   (0x0028)  
	FDBDTunableRowHandle                               _addonExplosionRadius;                                      // 0x03D8   (0x0028)  
	FDBDTunableRowHandle                               _numberOfAddonBounces;                                      // 0x0400   (0x0028)  


	/// Functions
	// Function /Script/TheK23.KnifeProjectile.WasLaunchedDuringSuperMode
	// bool WasLaunchedDuringSuperMode();                                                                                    // [0x5aedbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.KnifeProjectile.ShouldPlayRicochetSound
	// bool ShouldPlayRicochetSound();                                                                                       // [0x5aedb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.KnifeProjectile.SetKnifeAcquired
	// void SetKnifeAcquired(bool acquired);                                                                                 // [0x5aedaf0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK23.KnifeProjectile.OnWorldColliderHit
	// void OnWorldColliderHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x5aed910] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/TheK23.KnifeProjectile.OnProjectileBounce
	// void OnProjectileBounce(FHitResult& ImpactResult, FVector& ImpactVelocity);                                           // [0x5aed7f0] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/TheK23.KnifeProjectile.KnifeCanPierceCampers
	// bool KnifeCanPierceCampers();                                                                                         // [0x5aed7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.KnifeProjectile.GetAddonExplosionRadius
	// float GetAddonExplosionRadius();                                                                                      // [0x5aed790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.KnifeProjectile.BP_SetKnifeActive
	// void BP_SetKnifeActive(bool Active);                                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheK23.KnifeProjectile.BP_OnLaunchCosmetic
	// void BP_OnLaunchCosmetic(FLaunchInfo LaunchInfo, bool hasImpactOnLaunch);                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion
	// void BP_CosmeticOnAddonExplosion(FVector& Location, FVector& Normal);                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/TheK23.KnifeRack
/// Size: 0x0000 (0x000248 - 0x000248)
class AKnifeRack : public ABaseLockerItem
{ 
public:


	/// Functions
	// Function /Script/TheK23.KnifeRack.OnReloadMontageStarted
	// void OnReloadMontageStarted(float actionSpeedMultiplier, class ADBDPlayer* Player);                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK23.KnifeRack.OnReloadEnded
	// void OnReloadEnded(class ADBDPlayer* Player);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/TheK23.KnivesLauncher
/// Size: 0x0108 (0x000190 - 0x000298)
class UKnivesLauncher : public UKillerProjectileLauncher
{ 
public:
	FDBDTunableRowHandle                               _knifeSpawnOffset;                                          // 0x0190   (0x0028)  
	FDBDTunableRowHandle                               _knifeSpawnForwardOffset;                                   // 0x01B8   (0x0028)  
	FDBDTunableRowHandle                               _launchSpeed;                                               // 0x01E0   (0x0028)  
	FTunableStat                                       _maxAmmoTunable;                                            // 0x0208   (0x0080)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0288   (0x0008)  MISSED
	bool                                               _isInSuperModeThrow;                                        // 0x0290   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0291   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK23.KnivesLauncher.GetPower
	// class AThrowingKnives* GetPower();                                                                                    // [0x5aee230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.KnivesLauncher.GetLocallyPredictedAmmo
	// int32_t GetLocallyPredictedAmmo();                                                                                    // [0x5aee200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK23.KnivesProvider
/// Size: 0x0008 (0x000118 - 0x000120)
class UKnivesProvider : public UAuthoritativeActorPoolComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/TheK23.LacerationComponent
/// Size: 0x0428 (0x0000B8 - 0x0004E0)
class ULacerationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x00B8   (0x0038)  MISSED
	float                                              _laceration;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00F4   (0x000C)  MISSED
	class UStatusEffect*                               _onHitSpeedBoost;                                           // 0x0100   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0108   (0x0020)  MISSED
	FTunableStat                                       _maxLaceration;                                             // 0x0128   (0x0080)  
	FDBDTunableRowHandle                               _lacerationExplosionDamage;                                 // 0x01A8   (0x0028)  
	FTunableStat                                       _lacerationRegressionPerSecond;                             // 0x01D0   (0x0080)  
	FTunableStat                                       _lacerationRegressionPerSecondWhileRunning;                 // 0x0250   (0x0080)  
	FDBDTunableRowHandle                               _speedBoostIntensity;                                       // 0x02D0   (0x0028)  
	FDBDTunableRowHandle                               _speedBoostDuration;                                        // 0x02F8   (0x0028)  
	FDBDTunableRowHandle                               _stopTickingRegressionWhileInjured;                         // 0x0320   (0x0028)  
	FDBDTunableRowHandle                               _stopTickingRegressionWhileInChase;                         // 0x0348   (0x0028)  
	FDBDTunableRowHandle                               _stopTickingRegressionWithinTerrorRadius;                   // 0x0370   (0x0028)  
	FTunableStat                                       _timeBeforeLacerationDecayStarts;                           // 0x0398   (0x0080)  
	FDBDTunableRowHandle                               _regressionBufferTimerAlwaysTicks;                          // 0x0418   (0x0028)  
	FDBDTunableRowHandle                               _lacerationToRemoveOnBasicAttack;                           // 0x0440   (0x0028)  
	FDBDTunableRowHandle                               _thresholdForGraceTimerScoreEvent;                          // 0x0468   (0x0028)  
	FDBDTunableRowHandle                               _minThresholdForLowLacerationScoreEvent;                    // 0x0490   (0x0028)  
	FDBDTunableRowHandle                               _maxThresholdForLowLacerationScoreEvent;                    // 0x04B8   (0x0028)  


	/// Functions
	// Function /Script/TheK23.LacerationComponent.OnRepLaceration
	// void OnRepLaceration(float oldLaceration);                                                                            // [0x5aee9f0] Final|Native|Private 
	// Function /Script/TheK23.LacerationComponent.Multicast_KnifeHit
	// void Multicast_KnifeHit(float newLaceration, bool causedDamage, bool CausedKO, FVector impactLocation, FVector ImpactNormal); // [0x5aee820] Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults 
	// Function /Script/TheK23.LacerationComponent.Cosmetic_OnKnifeHit
	// void Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool CausedKO, FVector& ImpactNormal); // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/TheK23.BaseLacerationLevelCondition
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBaseLacerationLevelCondition : public UEventDrivenModifierCondition
{ 
public:
};

/// Class /Script/TheK23.LacerationLevelCondition
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class ULacerationLevelCondition : public UBaseLacerationLevelCondition
{ 
public:
	float                                              _lacerationLevelRequired;                                   // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/TheK23.LacerationAlmostFullCondition
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class ULacerationAlmostFullCondition : public UBaseLacerationLevelCondition
{ 
public:
	float                                              _missingLacerationThreshold;                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/TheK23.NoWayOut
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UNoWayOut : public UPerk
{ 
public:
	float                                              _exitGatePanelBlockBaseDuration;                            // 0x03C8   (0x000C)  
	float                                              _exitGatePanelBlockDurationPerToken;                        // 0x03D4   (0x000C)  
	TArray<class ACamperPlayer*>                       _hookedSurvivors;                                           // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK23.NoWayOut.Multicast_TriggerLoudNoise
	// void Multicast_TriggerLoudNoise(class ADBDPlayer* Instigator, class AEscapeDoor* EscapeDoor);                         // [0x500fa30] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK23.NoWayOut.GetExitGatePanelBlockDurationPerTokenAtLevel
	// float GetExitGatePanelBlockDurationPerTokenAtLevel();                                                                 // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.NoWayOut.GetExitGatePanelBlockBaseDurationAtLevel
	// float GetExitGatePanelBlockBaseDurationAtLevel();                                                                     // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK23.ReloadKnives
/// Size: 0x0000 (0x000680 - 0x000680)
class UReloadKnives : public UBaseLockerInteraction
{ 
public:
};

/// Class /Script/TheK23.SelfPreservation
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class USelfPreservation : public UPerk
{ 
public:
	float                                              _hitDistanceToTriggerPerkEffect;                            // 0x03C8   (0x000C)  
	float                                              _selfPreservationEffectDuration;                            // 0x03D4   (0x000C)  


	/// Functions
	// Function /Script/TheK23.SelfPreservation.GetSelfPreservationEffectDuration
	// float GetSelfPreservationEffectDuration();                                                                            // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.SelfPreservation.GetHitDistanceToTriggerPerkEffect
	// float GetHitDistanceToTriggerPerkEffect();                                                                            // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK23.SmashHit
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class USmashHit : public UPerk
{ 
public:
	float                                              _exhaustedTime;                                             // 0x03C8   (0x000C)  
	float                                              _hasteTime;                                                 // 0x03D4   (0x0004)  
	float                                              _hasteValue;                                                // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _exhaustedEffect;                                           // 0x03E0   (0x0008)  
	class UClass*                                      _hasteEffect;                                               // 0x03E8   (0x0008)  
	class UEnum*                                       stunTypeEnum;                                               // 0x03F0   (0x0008)  
};

/// Class /Script/TheK23.Starstruck
/// Size: 0x0120 (0x0003C8 - 0x0004E8)
class UStarstruck : public UPerk
{ 
public:
	float                                              _exposedEffectDuration;                                     // 0x03C8   (0x000C)  
	float                                              _perkCooldownDuration;                                      // 0x03D4   (0x000C)  
	SDK_UNDEFINED(80,5092) /* TMap<TWeakObjectPtr<ACamperPlayer*>, TWeakObjectPtr<UStatusEffect*>> */ __um(_camperExposedEffects); // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData00_6[0xB8];                                      // 0x0430   (0x00B8)  MISSED


	/// Functions
	// Function /Script/TheK23.Starstruck.GetPerkCooldownDurationAtLevel
	// float GetPerkCooldownDurationAtLevel();                                                                               // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.Starstruck.GetExposedEffectDurationAtLevel
	// float GetExposedEffectDurationAtLevel();                                                                              // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK23.SuperModeDeactivation
/// Size: 0x0020 (0x000650 - 0x000670)
class USuperModeDeactivation : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _deactivationDuration;                                      // 0x0648   (0x0028)  
};

/// Class /Script/TheK23.ThrowingKnives
/// Size: 0x00A8 (0x0004C8 - 0x000570)
class AThrowingKnives : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x04C8   (0x0040)  MISSED
	class UFlurryComboScoreComponent*                  _flurryScoreComponent;                                      // 0x0508   (0x0008)  
	class UTricksterSuperModeComponent*                _superModeComponent;                                        // 0x0510   (0x0008)  
	class UK23PowerProgressPresentationComponent*      _superModeChargePresentationComponent;                      // 0x0518   (0x0008)  
	class UPowerChargeComponent*                       _superModeChargeComponent;                                  // 0x0520   (0x0008)  
	class UKnivesProvider*                             _knivesProvider;                                            // 0x0528   (0x0008)  
	class UKnivesLauncher*                             _knivesLauncher;                                            // 0x0530   (0x0008)  
	class UClass*                                      _lacerationComponentClass;                                  // 0x0538   (0x0008)  
	class UClass*                                      _reloadInteractionClass;                                    // 0x0540   (0x0008)  
	float                                              _minimumTimeBetweenBroadcast;                               // 0x0548   (0x0004)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x054C   (0x0024)  MISSED


	/// Functions
	// Function /Script/TheK23.ThrowingKnives.OnItemUsedStateChanged
	// void OnItemUsedStateChanged(bool Pressed);                                                                            // [0x5aefe40] Final|Native|Private 
	// Function /Script/TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo
	// void Multicast_OnUsePowerWhenOutOfAmmo();                                                                             // [0x5850cb0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown
	// void Multicast_OnUsePowerWhenInCooldown();                                                                            // [0x5ad4c90] Net|Native|Event|NetMulticast|Public 
	// Function /Script/TheK23.ThrowingKnives.GetSlasher
	// class ASlasherPlayer* GetSlasher();                                                                                   // [0x5aefe10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.ThrowingKnives.GetLauncher
	// class UKnivesLauncher* GetLauncher();                                                                                 // [0x5aefde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo
	// void Cosmetic_OnUsePowerWhenOutOfAmmo();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown
	// void Cosmetic_OnUsePowerWhenInCooldown();                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK23.ThrowingKnives.Cosmetic_OnLaunch
	// void Cosmetic_OnLaunch();                                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged
	// void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK23.ThrowingKnives.Cosmetic_OnComboFinished
	// void Cosmetic_OnComboFinished(bool isSRankCombo);                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers
	// void Authority_SpawnReloadInteractionOnLockers();                                                                     // [0x5aefdc0] Final|Native|Public  
};

/// Class /Script/TheK23.ThrowingKnivesHitSubAnimInstance
/// Size: 0x0040 (0x000550 - 0x000590)
class UThrowingKnivesHitSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _hitByKnifeTrigger;                                         // 0x0550   (0x0001)  
	bool                                               _knifeHitCausedKOTrigger;                                   // 0x0551   (0x0001)  
	bool                                               _knifeHitCausedDamageTrigger;                               // 0x0552   (0x0001)  
	bool                                               _useAlternateHitReactionState;                              // 0x0553   (0x0001)  
	float                                              _knifeHitStateHitAngle;                                     // 0x0554   (0x0004)  
	float                                              _alternateKnifeHitStateHitAngle;                            // 0x0558   (0x0004)  
	bool                                               _isCrawling;                                                // 0x055C   (0x0001)  
	bool                                               _hitByKnifeTriggerEventDriven;                              // 0x055D   (0x0001)  
	bool                                               _knifeHitCausedDamageTriggerEventDriven;                    // 0x055E   (0x0001)  
	bool                                               _knifeHitCausedKOTriggerEventDriven;                        // 0x055F   (0x0001)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0560   (0x0030)  MISSED
};

/// Class /Script/TheK23.TricksterAnimInstance
/// Size: 0x0080 (0x000610 - 0x000690)
class UTricksterAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isAiming;                                                  // 0x0610   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0611   (0x0003)  MISSED
	float                                              _isThrowInputPressed;                                       // 0x0614   (0x0004)  
	bool                                               _isThrowingWithLeftArm;                                     // 0x0618   (0x0001)  
	bool                                               _isThrowingWithRightArm;                                    // 0x0619   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x061A   (0x0002)  MISSED
	float                                              _throwPlayRate;                                             // 0x061C   (0x0004)  
	float                                              _baseThrowDuration;                                         // 0x0620   (0x0004)  
	int32_t                                            _consecutiveKnivesThrownStacks;                             // 0x0624   (0x0004)  
	float                                              _timeSinceLastKnifeLaunched;                                // 0x0628   (0x0004)  
	int32_t                                            _currentAmmoCount;                                          // 0x062C   (0x0004)  
	bool                                               _isInSuperMode;                                             // 0x0630   (0x0001)  
	bool                                               _isInActivation;                                            // 0x0631   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0632   (0x0002)  MISSED
	float                                              _activationDuration;                                        // 0x0634   (0x0004)  
	bool                                               _isInDeactivation;                                          // 0x0638   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0639   (0x0003)  MISSED
	float                                              _deactivationDuration;                                      // 0x063C   (0x0004)  
	unsigned char                                      UnknownData04_5[0x40];                                      // 0x0640   (0x0040)  MISSED
	class AThrowingKnives*                             _throwingKnives;                                            // 0x0680   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0688   (0x0008)  MISSED
};

/// Class /Script/TheK23.TricksterCharacterVFXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTricksterCharacterVFXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheK23.TricksterCharacterVFXInterface.ShowWeapon
	// void ShowWeapon();                                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK23.TricksterCharacterVFXInterface.SetSuperModeActive
	// void SetSuperModeActive(bool Active);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility
	// void SetKnivesVisibility(bool leftKnife, bool rightKnife);                                                            // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady
	// void SetIsSuperModeReady(bool isSuperModeReady);                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK23.TricksterCharacterVFXInterface.SetIsInCooldown
	// void SetIsInCooldown(bool isInCooldown);                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK23.TricksterCharacterVFXInterface.HideWeapon
	// void HideWeapon();                                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/TheK23.TricksterSuperModeComponent
/// Size: 0x0230 (0x0000B8 - 0x0002E8)
class UTricksterSuperModeComponent : public UActorComponent
{ 
public:
	bool                                               _isInSuperMode;                                             // 0x00B8   (0x0001)  
	bool                                               _isSuperModeReady;                                          // 0x00B9   (0x0001)  
	bool                                               _isInCooldown;                                              // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_5[0xD];                                       // 0x00BB   (0x000D)  MISSED
	FDBDTunableRowHandle                               _chargesToAddOnKnifeHit;                                    // 0x00C8   (0x0028)  
	FTunableStat                                       _superModeMaxCharge;                                        // 0x00F0   (0x0080)  
	FDBDTunableRowHandle                               _superModeReadyDepletionPerSecond;                          // 0x0170   (0x0028)  
	FTunableStat                                       _superModeActiveDuration;                                   // 0x0198   (0x0080)  
	unsigned char                                      UnknownData01_5[0x60];                                      // 0x0218   (0x0060)  MISSED
	FDBDTunableRowHandle                               _superModeCooldown;                                         // 0x0278   (0x0028)  
	FDBDTunableRowHandle                               _shouldDisableFlurryDuringCooldown;                         // 0x02A0   (0x0028)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x02C8   (0x0018)  MISSED
	class UClass*                                      _comboExtendSuperModeStatusEffectClass;                     // 0x02E0   (0x0008)  


	/// Functions
	// Function /Script/TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady
	// void OnRepIsSuperModeReady();                                                                                         // [0x5af0d40] Final|Native|Private 
	// Function /Script/TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode
	// void OnRepIsInSuperMode();                                                                                            // [0x5af0d20] Final|Native|Private 
	// Function /Script/TheK23.TricksterSuperModeComponent.OnRepIsInCooldown
	// void OnRepIsInCooldown();                                                                                             // [0x5af0d00] Final|Native|Private 
	// Function /Script/TheK23.TricksterSuperModeComponent.InitSuperModeMaxCharge
	// void InitSuperModeMaxCharge();                                                                                        // [0x5af0ce0] Final|Native|Private 
};

/// Class /Script/TheK23.TriggerTimerOnLacerationAlmostFullEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class UTriggerTimerOnLacerationAlmostFullEffect : public UStatusEffect
{ 
public:
	class ULacerationComponent*                        _lacerationComponent;                                       // 0x0350   (0x0008)  
	float                                              _duration;                                                  // 0x0358   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED
};

