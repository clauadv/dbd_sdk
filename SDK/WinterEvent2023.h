
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
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDCompetence
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayUtilities
/// dependency: NetworkUtilities
/// dependency: Projectile
/// dependency: SnowmanWinterEvent

/// Enum /Script/WinterEvent2023.EMrMarchState
/// Size: 0x06
enum class EMrMarchState : uint8_t
{
	EMrMarchState__Spawned                                                           = 0,
	EMrMarchState__BeingDestroyed                                                    = 1,
	EMrMarchState__Destroyed                                                         = 2,
	EMrMarchState__Scare                                                             = 3,
	EMrMarchState__Waiting                                                           = 4,
	EMrMarchState__EMrMarchState_MAX                                                 = 5
};

/// Class /Script/WinterEvent2023.KillerRevealedBySnowballTimedEffect
/// Size: 0x0028 (0x000380 - 0x0003A8)
class UKillerRevealedBySnowballTimedEffect : public UActivateOnEventTimedStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _effectDuration;                                            // 0x0380   (0x0028)  
};

/// Class /Script/WinterEvent2023.MrMarch
/// Size: 0x00F0 (0x0004C0 - 0x0005B0)
class AMrMarch : public ASnowmanBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C0   (0x0018)  MISSED
	class UDBDSkeletalMeshComponentBudgeted*           _mrMarchSkeletalMesh;                                       // 0x04D8   (0x0008)  
	class UCapsuleComponent*                           _mrMarchCollision;                                          // 0x04E0   (0x0008)  
	class USphereComponent*                            _jumpscareTriggerZone;                                      // 0x04E8   (0x0008)  
	class UDBDNavModifierComponent*                    _dbdNavModifierComponent;                                   // 0x04F0   (0x0008)  
	FDBDTunableRowHandle                               _scareTriggerRadius;                                        // 0x04F8   (0x0028)  
	FDBDTunableRowHandle                               _shouldDespawnAfterJumpscare;                               // 0x0520   (0x0028)  
	float                                              _mrMarchJumpscareTimerRate;                                 // 0x0548   (0x0004)  
	EMrMarchState                                      _mrMarchState;                                              // 0x054C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x054D   (0x0003)  MISSED
	FGameplayTagContainer                              _tagsPreventingJumpscare;                                   // 0x0550   (0x0020)  
	TArray<class ADBDPlayer*>                          _authority_playersInRange;                                  // 0x0570   (0x0010)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0580   (0x0030)  MISSED


	/// Functions
	// Function /Script/WinterEvent2023.MrMarch.OnRep_MrMarchState
	// void OnRep_MrMarchState(EMrMarchState previousState);                                                                 // [0x5e57ca0] Final|Native|Private 
	// Function /Script/WinterEvent2023.MrMarch.OnPlayerJumpscareTriggered
	// void OnPlayerJumpscareTriggered(class ADBDPlayer* Player, FVector& Location);                                         // [0x61c32d0] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/WinterEvent2023.MrMarch.Multicast_StartMrMarchDestruction
	// void Multicast_StartMrMarchDestruction();                                                                             // [0x4326c90] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/WinterEvent2023.MrMarch.Multicast_OnPlayerJumpscared
	// void Multicast_OnPlayerJumpscared(class ADBDPlayer* Player, FVector jumpscareLocation);                               // [0x5e57bd0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/WinterEvent2023.MrMarch.DBD_MrMarchSpawn
	// void DBD_MrMarchSpawn();                                                                                              // [0x5e57bb0] Final|Exec|Native|Protected 
	// Function /Script/WinterEvent2023.MrMarch.DBD_MrMarchDestroy
	// void DBD_MrMarchDestroy();                                                                                            // [0x5e57b90] Final|Exec|Native|Protected 
	// Function /Script/WinterEvent2023.MrMarch.Cosmetic_OnSpawned
	// void Cosmetic_OnSpawned();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.MrMarch.Cosmetic_OnDestroyed
	// void Cosmetic_OnDestroyed();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.MrMarch.Authority_OnJumpscareTriggerZoneExited
	// void Authority_OnJumpscareTriggerZoneExited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5e57a30] Final|Native|Private 
	// Function /Script/WinterEvent2023.MrMarch.Authority_OnJumpscareTriggerZoneEntered
	// void Authority_OnJumpscareTriggerZoneEntered(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5e57810] Final|Native|Private|HasOutParms 
	// Function /Script/WinterEvent2023.MrMarch.Authority_OnJumpscareFinished
	// void Authority_OnJumpscareFinished();                                                                                 // [0x5e577f0] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Class /Script/WinterEvent2023.MrMarchAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UMrMarchAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isDestroyed;                                               // 0x02C0   (0x0001)  
	bool                                               _isInJumpscare;                                             // 0x02C1   (0x0001)  
	bool                                               _isBeingDestroyed;                                          // 0x02C2   (0x0001)  
	bool                                               _isSpawned;                                                 // 0x02C3   (0x0001)  
	SDK_UNDEFINED(8,5224) /* TWeakObjectPtr<AMrMarch*> */ __um(_mrMarch);                                          // 0x02C4   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/WinterEvent2023.SnowballLauncherController
/// Size: 0x00A0 (0x000230 - 0x0002D0)
class ASnowballLauncherController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0230   (0x0060)  MISSED
	class USnowballProvider*                           _snowballProvider;                                          // 0x0290   (0x0008)  
	class USnowballProjectileLauncher*                 _snowballLauncher;                                          // 0x0298   (0x0008)  
	FDBDTunableRowHandle                               _snowballCarryLimit;                                        // 0x02A0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/WinterEvent2023.SnowballPlayerComponent
/// Size: 0x01E8 (0x0000B8 - 0x0002A0)
class USnowballPlayerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x00B8   (0x0080)  MISSED
	class UTimerObject*                                _cooldownTimer;                                             // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0140   (0x0008)  MISSED
	class UClass*                                      _snowballLauncherControllerClass;                           // 0x0148   (0x0008)  
	class UClass*                                      _snowballThrowingInteractionClassSurvivor;                  // 0x0150   (0x0008)  
	class UClass*                                      _snowballThrowingInteractionClassKiller;                    // 0x0158   (0x0008)  
	FDBDTunableRowHandle                               _cooldownDuration;                                          // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _snowballLaunchDelayDurationSurvivorFemale;                 // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _snowballLaunchDelayDurationSurvivorMale;                   // 0x01B0   (0x0028)  
	FDBDTunableRowHandle                               _snowballLaunchDelayDurationKiller;                         // 0x01D8   (0x0028)  
	FGameplayTagContainer                              _hideVFXTags;                                               // 0x0200   (0x0020)  
	class ASnowballLauncherController*                 _snowballLauncherController;                                // 0x0220   (0x0008)  
	class UThrowSnowballInteraction*                   _snowballThrowInteraction;                                  // 0x0228   (0x0008)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x0230   (0x0070)  MISSED


	/// Functions
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.OnRep_SnowballThrowInteraction
	// void OnRep_SnowballThrowInteraction();                                                                                // [0x5e58b40] Final|Native|Private 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.OnRep_SnowballLauncherController
	// void OnRep_SnowballLauncherController();                                                                              // [0x5e58b20] Final|Native|Private 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.OnRep_CooldownTimer
	// void OnRep_CooldownTimer();                                                                                           // [0x5e58b00] Final|Native|Private 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.OnOwningCamperGuidedStateChanged
	// void OnOwningCamperGuidedStateChanged();                                                                              // [0x5e58ae0] Final|Native|Private 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.OnCamperDamageStateChanged
	// void OnCamperDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);                // [0x5e58a10] Final|Native|Private 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnVFXVignetteTagAddedOrRemoved
	// void Cosmetic_OnVFXVignetteTagAddedOrRemoved(class ADBDPlayer* Player, bool added);                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnThrownSnowballHitPlayer
	// void Cosmetic_OnThrownSnowballHitPlayer(class ADBDPlayer* OwningPlayer, class ADBDPlayer* hitPlayer);                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnThrownSnowballHitCollision
	// void Cosmetic_OnThrownSnowballHitCollision(class ADBDPlayer* OwningPlayer, FImpactInfo ImpactInfo);                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnSnowballThrowStart
	// void Cosmetic_OnSnowballThrowStart(class ADBDPlayer* OwningPlayer);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnSnowballThrown
	// void Cosmetic_OnSnowballThrown();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnSnowballsDepleted
	// void Cosmetic_OnSnowballsDepleted(class ADBDPlayer* OwningPlayer);                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnSnowballCollected
	// void Cosmetic_OnSnowballCollected();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnPlayerUnhidden
	// void Cosmetic_OnPlayerUnhidden(class ADBDPlayer* OwningPlayer);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnPlayerHidden
	// void Cosmetic_OnPlayerHidden(class ADBDPlayer* OwningPlayer);                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnPlayerDiedOrBeingKilled
	// void Cosmetic_OnPlayerDiedOrBeingKilled(class ADBDPlayer* deadPlayer);                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnLocallyObservedChanged
	// void Cosmetic_OnLocallyObservedChanged(bool IsLocallyObserved, class ADBDPlayer* OwningPlayer);                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnCamperPickUpEndOrDropped
	// void Cosmetic_OnCamperPickUpEndOrDropped(class ADBDPlayer* pickedUpPlayer);                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.SnowballPlayerComponent.Cosmetic_OnCamperPickedUp
	// void Cosmetic_OnCamperPickedUp(class ADBDPlayer* pickedUpPlayer);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/WinterEvent2023.SnowballProjectileLauncher
/// Size: 0x0100 (0x000190 - 0x000290)
class USnowballProjectileLauncher : public UBaseProjectileLauncher
{ 
public:
	FDBDTunableRowHandle                               _launchSpeed;                                               // 0x0190   (0x0028)  
	FRotator                                           _angleOffset;                                               // 0x01B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	class UCurveFloat*                                 _snowballPitchCurve;                                        // 0x01C8   (0x0008)  
	float                                              _snowballLaunchPitchMin;                                    // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FDBDTunableRowHandle                               _aimAngleOffsetPitchSurvivorFemale;                         // 0x01D8   (0x0028)  
	FDBDTunableRowHandle                               _aimAngleOffsetPitchSurvivorMale;                           // 0x0200   (0x0028)  
	FDBDTunableRowHandle                               _aimAngleOffsetPitchKiller;                                 // 0x0228   (0x0028)  
	FVector                                            _survivorLaunchPositionOffset;                              // 0x0250   (0x000C)  
	FVector                                            _killerLaunchPositionOffset;                                // 0x025C   (0x000C)  
	float                                              _snowballLaunchPitchMax;                                    // 0x0268   (0x0004)  
	FName                                              _characterBoneNameCamper;                                   // 0x026C   (0x000C)  
	FName                                              _characterBoneNameSlasher;                                  // 0x0278   (0x000C)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0284   (0x000C)  MISSED
};

/// Class /Script/WinterEvent2023.SnowballProvider
/// Size: 0x0008 (0x000118 - 0x000120)
class USnowballProvider : public UAuthoritativeActorPoolComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/WinterEvent2023.Snowpile
/// Size: 0x0088 (0x000338 - 0x0003C0)
class ASnowpile : public AInteractable
{ 
public:
	class UStaticMeshComponent*                        _snowpileStaticMesh;                                        // 0x0338   (0x0008)  
	class UPrimitiveComponent*                         _snowpileInteractionZone;                                   // 0x0340   (0x0008)  
	class UInteractor*                                 _snowpileInteractor;                                        // 0x0348   (0x0008)  
	class USnowpileInteraction*                        _snowpileInteractionSurvivor;                               // 0x0350   (0x0008)  
	class USnowpileInteraction*                        _snowpileInteractionKiller;                                 // 0x0358   (0x0008)  
	class UChargeableComponent*                        _snowpileInteractionChargeableSurvivor;                     // 0x0360   (0x0008)  
	class UChargeableComponent*                        _snowpileInteractionChargeableKiller;                       // 0x0368   (0x0008)  
	FDBDTunableRowHandle                               _snowpileInteractionSecondsToChargeSurvivor;                // 0x0370   (0x0028)  
	FDBDTunableRowHandle                               _snowpileInteractionSecondsToChargeKiller;                  // 0x0398   (0x0028)  


	/// Functions
	// Function /Script/WinterEvent2023.Snowpile.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer);                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.Snowpile.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/WinterEvent2023.Snowpile.Cosmetic_OnInteractionCancelled
	// void Cosmetic_OnInteractionCancelled(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/WinterEvent2023.SnowpileInteraction
/// Size: 0x0000 (0x000790 - 0x000790)
class USnowpileInteraction : public UChargeableInteractionDefinition
{ 
public:
};

/// Class /Script/WinterEvent2023.ThrowSnowballInteraction
/// Size: 0x0030 (0x000650 - 0x000680)
class UThrowSnowballInteraction : public UInteractionDefinition
{ 
public:
	TArray<FGameplayTag>                               _preventativeStateTags;                                     // 0x0648   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0658   (0x0028)  MISSED
};

/// Class /Script/WinterEvent2023.ThrowStandingSurvivorSubAnimInstance
/// Size: 0x0010 (0x000550 - 0x000560)
class UThrowStandingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isIdle;                                                    // 0x0548   (0x0001)  
	bool                                               _isThrowing;                                                // 0x0549   (0x0001)  
	bool                                               _isInjured;                                                 // 0x054A   (0x0001)  
	bool                                               _isCrouching;                                               // 0x054B   (0x0001)  
	float                                              _pitch;                                                     // 0x054C   (0x0004)  
	float                                              _yaw;                                                       // 0x0550   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0554   (0x000C)  MISSED
};

/// Class /Script/WinterEvent2023.Winter2023EventComponent
/// Size: 0x00E0 (0x000160 - 0x000240)
class UWinter2023EventComponent : public UBaseSnowmanEventComponent
{ 
public:
	FDBDTunableRowHandle                               _maxNumSpawnableMrMarch;                                    // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _minNumMrMarchAtStart;                                      // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _percentChanceSpawnMrMarch;                                 // 0x01B0   (0x0028)  
	FDBDTunableRowHandle                               _mrMarchSpawnLimit;                                         // 0x01D8   (0x0028)  
	FDBDTunableRowHandle                               _snowmanRespawnLimit;                                       // 0x0200   (0x0028)  
	class UAuthoritativeActorPoolComponent*            _mrMarchPool;                                               // 0x0228   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _snowmanActorPool;                                          // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0238   (0x0008)  MISSED


	/// Functions
	// Function /Script/WinterEvent2023.Winter2023EventComponent.DBD_Winter2023SetMaxMrMarchAndPercentChance
	// void DBD_Winter2023SetMaxMrMarchAndPercentChance(int32_t maxMrMarch, float percentChance);                            // [0x5e596f0] Final|Exec|Native|Private 
	// Function /Script/WinterEvent2023.Winter2023EventComponent.DBD_Winter2023ForceRespawnSnowmen
	// void DBD_Winter2023ForceRespawnSnowmen();                                                                             // [0x5e596d0] Final|Exec|Native|Private 
};

