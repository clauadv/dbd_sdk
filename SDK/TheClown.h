
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
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: Projectile

/// Enum /Script/TheClown.EBombType
/// Size: 0x03
enum class EBombType : uint8_t
{
	EBombType__Toxin                                                                 = 0,
	EBombType__Antidote                                                              = 1,
	EBombType__EBombType_MAX                                                         = 2
};

/// Class /Script/TheClown.ActiveGasCloudTrackerComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UActiveGasCloudTrackerComponent : public UActorComponent
{ 
public:
	TArray<class ABaseGasCloudProjectile*>             _activeToxinClouds;                                         // 0x00B8   (0x0010)  
	TArray<class ABaseGasCloudProjectile*>             _activeAntidoteClouds;                                      // 0x00C8   (0x0010)  
};

/// Class /Script/TheClown.AISkill_InteractionTarget_ThrowAntidote
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAISkill_InteractionTarget_ThrowAntidote : public UAISkill_InteractionTarget_Throw
{ 
public:
	float                                              _minPathLengthForThrow;                                     // 0x02B8   (0x0004)  
	float                                              _minThrowDistance;                                          // 0x02BC   (0x0004)  
	float                                              _cooldownTime;                                              // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated
	// void OnPathUpdated();                                                                                                 // [0x5a32170] Final|Native|Protected 
};

/// Class /Script/TheClown.AISkill_InteractionTarget_ThrowToxin
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UAISkill_InteractionTarget_ThrowToxin : public UAISkill_InteractionTarget_Throw
{ 
public:
};

/// Class /Script/TheClown.AISkill_Interaction_ReloadClown
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_ReloadClown : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/TheClown.AISkill_Interaction_SwapToAntidote
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_SwapToAntidote : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/TheClown.AISkill_Interaction_SwapToToxin
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_SwapToToxin : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/TheClown.BaseGasCloudProjectile
/// Size: 0x0230 (0x0002B8 - 0x0004E8)
class ABaseGasCloudProjectile : public APhysicsBasedProjectile
{ 
public:
	EBombType                                          _gasType;                                                   // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B9   (0x0007)  MISSED
	class UPoolableProjectileComponent*                _poolableProjectile;                                        // 0x02C0   (0x0008)  
	FDBDTunableRowHandle                               _gasCloudDuration;                                          // 0x02C8   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudGravityScale;                                      // 0x02F0   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudBounciness;                                        // 0x0318   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudFriction;                                          // 0x0340   (0x0028)  
	FDBDTunableRowHandle                               _dissipateGasCloudTime;                                     // 0x0368   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudMinimumLifetime;                                   // 0x0390   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudSimpleCollisionRadius;                             // 0x03B8   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudComplexCollisionRadius;                            // 0x03E0   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudSurvivorDetectionRadius;                           // 0x0408   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudDetectionDelay;                                    // 0x0430   (0x0028)  
	FDBDTunableRowHandle                               _gasCloudCosmeticFadeDuration;                              // 0x0458   (0x0028)  
	float                                              _overlappingTime;                                           // 0x0480   (0x0004)  
	bool                                               _dissipating;                                               // 0x0484   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0485   (0x0003)  MISSED
	TArray<class ACamperPlayer*>                       _overlappingSurvivors;                                      // 0x0488   (0x0010)  
	class UParticleSystemComponent*                    _gasParticleSystem;                                         // 0x0498   (0x0008)  
	class USphereComponent*                            _simpleCollider;                                            // 0x04A0   (0x0008)  
	class USphereComponent*                            _complexCollider;                                           // 0x04A8   (0x0008)  
	class USpherePlayerOverlapComponent*               _survivorDetector;                                          // 0x04B0   (0x0008)  
	class UActiveGasCloudTrackerComponent*             _activeGasCloudTracker;                                     // 0x04B8   (0x0008)  
	FGameplayTag                                       _cloudSizeModifierTag;                                      // 0x04C0   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	float                                              _cumulativeLifetime;                                        // 0x04D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x04D4   (0x0014)  MISSED


	/// Functions
	// Function /Script/TheClown.BaseGasCloudProjectile.SetIsDissipating
	// void SetIsDissipating(bool IsDissipating);                                                                            // [0x5a33350] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.BaseGasCloudProjectile.SetIgnoredActors
	// void SetIgnoredActors();                                                                                              // [0x5a33330] Final|Native|Private 
	// Function /Script/TheClown.BaseGasCloudProjectile.SetGasAudioActive
	// void SetGasAudioActive(bool activated);                                                                               // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.BaseGasCloudProjectile.OnOverlapEnd
	// void OnOverlapEnd(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex); // [0x5a331d0] Final|Native|Public  
	// Function /Script/TheClown.BaseGasCloudProjectile.OnOverlapBegin
	// void OnOverlapBegin(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5a32fb0] Final|Native|Public|HasOutParms 
	// Function /Script/TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
	// void OnDelayedActivationStart(float Delay);                                                                           // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.BaseGasCloudProjectile.OnAcquiredChanged
	// void OnAcquiredChanged(bool acquired);                                                                                // [0x5a32f20] Final|Native|Private 
	// Function /Script/TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
	// void Multicast_DissipateGasCloud();                                                                                   // [0x58b7b60] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
	// bool IsSurvivorDetectionEnabled();                                                                                    // [0x5a32ef0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheClown.BaseGasCloudProjectile.IsDissipating
	// bool IsDissipating();                                                                                                 // [0x5a32ed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheClown.BaseGasCloudProjectile.GetGasType
	// EBombType GetGasType();                                                                                               // [0x5a32eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.BaseGasCloudProjectile.DissipateGasCloud
	// void DissipateGasCloud();                                                                                             // [0x58c6a30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
	// void Authority_SetCumulativeLifetime(float value);                                                                    // [0x5a32e30] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
	// float Authority_GetCumulativeLifetime();                                                                              // [0x5a32e00] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
	// void ActivateCosmetic_BP();                                                                                           // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheClown.AntidoteCloudProjectile
/// Size: 0x0000 (0x0004E8 - 0x0004E8)
class AAntidoteCloudProjectile : public ABaseGasCloudProjectile
{ 
public:
};

/// Class /Script/TheClown.BoilOverPerk
/// Size: 0x00B8 (0x0003C8 - 0x000480)
class UBoilOverPerk : public UPerk
{ 
public:
	TArray<FStatusEffectSpawnData>                     _effectsToSpawn;                                            // 0x03C8   (0x0010)  
	FPlayerStatusEffectSpawnerHelper                   _spawnerHelper;                                             // 0x03D8   (0x0088)  
	float                                              _additionnalWigglingProgressWhenFalling;                    // 0x0460   (0x000C)  
	float                                              _greatHeightsValue;                                         // 0x046C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0470   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheClown.BoilOverPerk.GetGreatHeightsValue
	// float GetGreatHeightsValue();                                                                                         // [0x5a33860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.BoilOverPerk.GetAdditionnalWigglingProgressAtLevel
	// float GetAdditionnalWigglingProgressAtLevel();                                                                        // [0x5a33830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.BoilOverPerk.Authority_OnWiggleEnd
	// void Authority_OnWiggleEnd();                                                                                         // [0x5a33810] Final|Native|Private 
	// Function /Script/TheClown.BoilOverPerk.Authority_OnPlayerPickedUpEnd
	// void Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker);                                                         // [0x5a33780] Final|Native|Private 
};

/// Class /Script/TheClown.BombLauncher
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UBombLauncher : public UKillerProjectileLauncher
{ 
public:
	class UCurveFloat*                                 _speedCurve;                                                // 0x0190   (0x0008)  
	class UCurveFloat*                                 _pitchCurve;                                                // 0x0198   (0x0008)  
	EBombType                                          _currentBombType;                                           // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheClown.BombLauncher.SetProjectileSpeedCurve
	// void SetProjectileSpeedCurve(class UCurveFloat* newProjectileSpeedCurve);                                             // [0x5a33ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.BombLauncher.SetProjectilePitchCurve
	// void SetProjectilePitchCurve(class UCurveFloat* newProjectilePitchCurve);                                             // [0x5a33e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.BombLauncher.SetPercentThrowStrength
	// void SetPercentThrowStrength(float throwStrength);                                                                    // [0x5a33dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.BombLauncher.Server_SwitchBombType
	// void Server_SwitchBombType();                                                                                         // [0x5a33d80] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/TheClown.BombLauncher.LocalLaunch
	// void LocalLaunch(float percentThrowStrength);                                                                         // [0x5a33d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.BombLauncher.Local_SwitchBombType
	// void Local_SwitchBombType();                                                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheClown.BombLauncher.IsBombFullyCharged
	// bool IsBombFullyCharged();                                                                                            // [0x5a33cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.BombLauncher.GetPercentThrowStrenght
	// float GetPercentThrowStrenght();                                                                                      // [0x5a33cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.BombLauncher.GetCurrentBombType
	// EBombType GetCurrentBombType();                                                                                       // [0x5a33c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheClown.ClownFingersAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UClownFingersAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isObservedCharacterSlasher;                                // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02C1   (0x000F)  MISSED
};

/// Class /Script/TheClown.DanceWithMePerk
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UDanceWithMePerk : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x03C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheClown.DanceWithMePerk.Authority_OnPerkActivate
	// void Authority_OnPerkActivate(FGameplayTag GameplayTag, FGameEventData& GameEventData);                               // [0x5a342c0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheClown.GasDizzyCosmeticEffect
/// Size: 0x0020 (0x000230 - 0x000250)
class AGasDizzyCosmeticEffect : public AActor
{ 
public:
	class UPostProcessComponent*                       _dizzyPostProcess;                                          // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0238   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheClown.GasDizzyCosmeticEffect.SetWantsDizzyEffectActive
	// void SetWantsDizzyEffectActive(bool IsActive);                                                                        // [0x5a345d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.GasDizzyCosmeticEffect.Cosmetic_SetDizzyEffectActive
	// void Cosmetic_SetDizzyEffectActive(bool IsActive);                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheClown.GassedStatusEffect
/// Size: 0x00B8 (0x000350 - 0x000408)
class UGassedStatusEffect : public UStatusEffect
{ 
public:
	bool                                               _isInCloud;                                                 // 0x0350   (0x0001)  
	bool                                               _isInAntidoteCloud;                                         // 0x0351   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0352   (0x0006)  MISSED
	SDK_UNDEFINED(80,5454) /* TSet<ABaseGasCloudProjectile*> */ __um(_overlappingClouds);                          // 0x0358   (0x0050)  
	SDK_UNDEFINED(80,5455) /* TSet<ABaseGasCloudProjectile*> */ __um(_overlappingAntidoteClouds);                  // 0x03A8   (0x0050)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x03F8   (0x0008)  MISSED
	uint16_t                                           _totalTimesEnteringToxicClouds;                             // 0x0400   (0x0002)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0402   (0x0006)  MISSED


	/// Functions
	// Function /Script/TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
	// void UpdateAntidoteEffectVFX(float durationRemaining);                                                                // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.SetRemainingDuration
	// void SetRemainingDuration(float value);                                                                               // [0x5a35440] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
	// void SetRemainingAntidoteDuration(float value);                                                                       // [0x5a353c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.GassedStatusEffect.OnToxinEffectEnd
	// void OnToxinEffectEnd(float durationSkipped);                                                                         // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.OnToxinEffectBegin
	// void OnToxinEffectBegin(float effectDuration);                                                                        // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.OnToxinCured
	// void OnToxinCured();                                                                                                  // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds
	// void OnRep_TotalTimesEnteringToxicClouds();                                                                           // [0x5a353a0] Final|Native|Private 
	// Function /Script/TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
	// void OnRep_IsInAntidoteCloud();                                                                                       // [0x5a35380] Final|Native|Private 
	// Function /Script/TheClown.GassedStatusEffect.OnDirectBottleHit
	// void OnDirectBottleHit(EBombType bottleType);                                                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.OnAntidoteEffectEnd
	// void OnAntidoteEffectEnd(float durationSkipped);                                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.OnAntidoteEffectBegin
	// void OnAntidoteEffectBegin(float effectDuration);                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheClown.GassedStatusEffect.IsInCloud
	// bool IsInCloud();                                                                                                     // [0x5a35350] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.GassedStatusEffect.IsInAntidoteCloud
	// bool IsInAntidoteCloud();                                                                                             // [0x5a35320] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.GassedStatusEffect.GetRemainingDuration
	// float GetRemainingDuration();                                                                                         // [0x5a352f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
	// float GetRemainingAntidoteDuration();                                                                                 // [0x4ffe730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.GassedStatusEffect.GetCloudEffectDuration
	// float GetCloudEffectDuration();                                                                                       // [0x5a352c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
	// float GetAntidoteCloudEffectDuration();                                                                               // [0x5a35290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheClown.GassedStatusEffect.Authority_SetIsInCloud
	// void Authority_SetIsInCloud(bool value);                                                                              // [0x5a35200] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
	// void Authority_SetIsInAntidoteCloud(bool value);                                                                      // [0x5a35170] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
	// void Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile* cloud);                                          // [0x5a350e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
	// void Authority_AddOverlappingCloud(class ABaseGasCloudProjectile* cloud);                                             // [0x5a35050] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/TheClown.GassedSurvivorSubAnimInstance
/// Size: 0x0010 (0x000550 - 0x000560)
class UGassedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isGassed;                                                  // 0x0550   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0551   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0552   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0553   (0x0001)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0554   (0x000C)  MISSED
};

/// Class /Script/TheClown.PopGoesTheWeasel
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UPopGoesTheWeasel : public UPerk
{ 
public:
	float                                              _activePerkDuration;                                        // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheClown.PopGoesTheWeasel.GetActivePerkDurationAtLevel
	// float GetActivePerkDurationAtLevel();                                                                                 // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheClown.SurvivorGasCloudEffect
/// Size: 0x0048 (0x000408 - 0x000450)
class USurvivorGasCloudEffect : public UGassedStatusEffect
{ 
public:
	class AGasDizzyCosmeticEffect*                     _dizzyCosmeticEffect;                                       // 0x0408   (0x0008)  
	class UClass*                                      _gasDizzyCosmeticEffectClass;                               // 0x0410   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0418   (0x0008)  MISSED
	FTransform                                         _dizzyEffectRelativeTransform;                              // 0x0420   (0x0030)  
};

/// Class /Script/TheClown.TheClownUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UTheClownUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheClown.TheClownUtilities.IsGassed
	// bool IsGassed(class ADBDPlayer* Player);                                                                              // [0x5a35fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheClown.TheClownUtilities.IsAffectedByAntidote
	// bool IsAffectedByAntidote(class ADBDPlayer* Player);                                                                  // [0x5a35f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheClown.TheClownUtilities.GetGassedStatusEffect
	// class UGassedStatusEffect* GetGassedStatusEffect(class ADBDPlayer* Player);                                           // [0x5a35e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
	// class UActiveGasCloudTrackerComponent* GetActiveGasCloudTrackerComponent(class UObject* WorldContextObject);          // [0x5a35e00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheClown.TheClownUtilities.CanBeGassed
	// bool CanBeGassed(class ADBDPlayer* Player);                                                                           // [0x5a35d70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

