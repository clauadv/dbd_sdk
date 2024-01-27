
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDBots
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: Projectile

/// Enum /Script/SnowmanWinterEvent.ESnowmanDestructionType
/// Size: 0x09
enum class ESnowmanDestructionType : uint8_t
{
	ESnowmanDestructionType__None                                                    = 0,
	ESnowmanDestructionType__SurvivorRunExit                                         = 1,
	ESnowmanDestructionType__KillerAttackExit                                        = 2,
	ESnowmanDestructionType__KillerCancelExit                                        = 3,
	ESnowmanDestructionType__KillerAttackWhileControlled                             = 4,
	ESnowmanDestructionType__KillerAttackWhileEmpty                                  = 5,
	ESnowmanDestructionType__NonDamagingAttackWhileControlled                        = 6,
	ESnowmanDestructionType__NonDamagingAttackWhileEmpty                             = 7,
	ESnowmanDestructionType__ESnowmanDestructionType_MAX                             = 8
};

/// Enum /Script/SnowmanWinterEvent.ESnowmanState
/// Size: 0x05
enum class ESnowmanState : uint8_t
{
	ESnowmanState__Idle                                                              = 0,
	ESnowmanState__BeingEntered                                                      = 1,
	ESnowmanState__Controlled                                                        = 2,
	ESnowmanState__Destroyed                                                         = 3,
	ESnowmanState__ESnowmanState_MAX                                                 = 4
};

/// Class /Script/SnowmanWinterEvent.AISkill_InsideSnowman
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAISkill_InsideSnowman : public UAISkill
{ 
public:
};

/// Class /Script/SnowmanWinterEvent.BaseSnowmanEventComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UBaseSnowmanEventComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _numSnowmenToSpawnAtStart;                                  // 0x00B8   (0x0028)  
	class UClass*                                      _snowmanSpawnPlacementStrategyClass;                        // 0x00E0   (0x0008)  
	class USnowmanSpawnPlacementStrategy*              _snowmanSpawnPlacementStrategy;                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x00F0   (0x0040)  MISSED
	TArray<class UClass*>                              _survivorInSnowmanEffectClasses;                            // 0x0130   (0x0010)  
	TArray<class UClass*>                              _killerInSnowmanEffectClasses;                              // 0x0140   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0150   (0x0010)  MISSED
};

/// Class /Script/SnowmanWinterEvent.HideInSnowmanInteraction
/// Size: 0x00F0 (0x000650 - 0x000740)
class UHideInSnowmanInteraction : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _timeToEnterSnowman;                                        // 0x0648   (0x0028)  
	FDBDTunableRowHandle                               _attachToPlayerDelay;                                       // 0x0670   (0x0028)  
	TArray<FGameplayTag>                               _nonDamagingSnowmanDestroyingEvents;                        // 0x0698   (0x0010)  
	unsigned char                                      UnknownData00_5[0x88];                                      // 0x06A8   (0x0088)  MISSED
	class ADBDPlayer*                                  _authority_attacker;                                        // 0x0730   (0x0008)  
	bool                                               _isSnowmanShieldDamaged;                                    // 0x0738   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0739   (0x0007)  MISSED


	/// Functions
	// Function /Script/SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StopControllingSnowman
	// void Multicast_StopControllingSnowman(class ADBDPlayer* Player);                                                      // [0x50ae490] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StartControllingSnowman
	// void Multicast_StartControllingSnowman(class ADBDPlayer* Player);                                                     // [0x59dba40] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/SnowmanWinterEvent.KillerHideInSnowmanInteraction
/// Size: 0x0140 (0x000740 - 0x000880)
class UKillerHideInSnowmanInteraction : public UHideInSnowmanInteraction
{ 
public:
	bool                                               _shouldAttackOutOfSnowman;                                  // 0x0740   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0741   (0x0007)  MISSED
	FDBDTunableRowHandle                               _minimumTimeToAttackAndExit;                                // 0x0748   (0x0028)  
	FDBDTunableRowHandle                               _mousePitchScaleMultiplier;                                 // 0x0770   (0x0028)  
	FDBDTunableRowHandle                               _mouseYawScaleMultiplier;                                   // 0x0798   (0x0028)  
	FDBDTunableRowHandle                               _gamepadPitchScaleMultiplier;                               // 0x07C0   (0x0028)  
	FDBDTunableRowHandle                               _gamepadYawScaleMultiplier;                                 // 0x07E8   (0x0028)  
	class UCurveFloat*                                 _gamepadPitchCurve;                                         // 0x0810   (0x0008)  
	class UCurveFloat*                                 _gamepadYawCurve;                                           // 0x0818   (0x0008)  
	FDBDTunableRowHandle                               _rotationScaleAdjustmentTime;                               // 0x0820   (0x0028)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0848   (0x0038)  MISSED
};

/// Class /Script/SnowmanWinterEvent.SnowballProjectile
/// Size: 0x0100 (0x0002B8 - 0x0003B8)
class ASnowballProjectile : public APhysicsBasedProjectile
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02B8   (0x0030)  MISSED
	class UStaticMeshComponent*                        _staticMesh;                                                // 0x02E8   (0x0008)  
	class USphereComponent*                            _worldCollision;                                            // 0x02F0   (0x0008)  
	class USphereComponent*                            _playerDetector;                                            // 0x02F8   (0x0008)  
	FGameplayTagContainer                              _tagsPreventingPlayerHit;                                   // 0x0300   (0x0020)  
	class UPoolableProjectileComponent*                _poolableProjectileComponent;                               // 0x0320   (0x0008)  
	SDK_UNDEFINED(80,5027) /* TSet<ABaseProjectile*> */ __um(_cachedProjectilesInGame);                            // 0x0328   (0x0050)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0378   (0x000C)  MISSED
	float                                              _poolDelayTime;                                             // 0x0384   (0x0004)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0388   (0x0030)  MISSED


	/// Functions
	// Function /Script/SnowmanWinterEvent.SnowballProjectile.OnPlayerDetectorHit
	// void OnPlayerDetectorHit(class UPrimitiveComponent* PrimitiveComponent, FHitResult& HitResult);                       // [0x59dc1e0] Final|Native|Private|HasOutParms 
	// Function /Script/SnowmanWinterEvent.SnowballProjectile.OnCollisionComponentHit
	// void OnCollisionComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FVector NormalImpulse, FHitResult& HitResult); // [0x59dc000] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SnowmanWinterEvent.SnowballProjectile.Cosmetic_OnSnowballThrown
	// void Cosmetic_OnSnowballThrown(FVector& launchDirection, float launchSpeed);                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.SnowballProjectile.Cosmetic_OnPlayerHit
	// void Cosmetic_OnPlayerHit(class ADBDPlayer* hitPlayer, FImpactInfo ImpactInfo);                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.SnowballProjectile.Cosmetic_OnCollisionHit
	// void Cosmetic_OnCollisionHit(class AActor* hitActor, FImpactInfo ImpactInfo);                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/SnowmanWinterEvent.SnowmanSpawnData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSnowmanSpawnData
{ 
	FVector                                            SpawnLocation;                                              // 0x0000   (0x000C)  
	FRotator                                           SpawnRotation;                                              // 0x000C   (0x000C)  
};

/// Class /Script/SnowmanWinterEvent.SnowmanBase
/// Size: 0x0188 (0x000338 - 0x0004C0)
class ASnowmanBase : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0338   (0x0030)  MISSED
	FDBDTunableRowHandle                               _timeToRespawn;                                             // 0x0368   (0x0028)  
	FDBDTunableRowHandle                               _timeToBeDestroyed;                                         // 0x0390   (0x0028)  
	class USnowmanAttackableComponent*                 _snowmanAttackable;                                         // 0x03B8   (0x0008)  
	FGameplayTagContainer                              _concealSnowmanForPlayerTags;                               // 0x03C0   (0x0020)  
	FSnowmanSpawnData                                  _spawnData;                                                 // 0x03E0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x68];                                      // 0x03F8   (0x0068)  MISSED
	bool                                               _isAcquiredFromPool;                                        // 0x0460   (0x0001)  
	bool                                               _isHidden;                                                  // 0x0461   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0462   (0x0002)  MISSED
	int32_t                                            _materialVariantIndex;                                      // 0x0464   (0x0004)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x0468   (0x0058)  MISSED


	/// Functions
	// Function /Script/SnowmanWinterEvent.SnowmanBase.OnRep_SpawnData
	// void OnRep_SpawnData();                                                                                               // [0x59de8c0] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanBase.OnRep_MaterialVariantIndex
	// void OnRep_MaterialVariantIndex();                                                                                    // [0x59de8a0] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanBase.OnRep_IsHidden
	// void OnRep_IsHidden();                                                                                                // [0x59de880] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanBase.OnRep_IsAcquiredFromPool
	// void OnRep_IsAcquiredFromPool();                                                                                      // [0x59de860] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanBase.Cosmetic_SetSnowmanMaterialVariant
	// void Cosmetic_SetSnowmanMaterialVariant(int32_t materialVariantIndex);                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/SnowmanWinterEvent.Snowman
/// Size: 0x0218 (0x0004C0 - 0x0006D8)
class ASnowman : public ASnowmanBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x04C0   (0x0078)  MISSED
	FDBDTunableRowHandle                               _maxRespawnsAfterKillerAttackWhileOccupied;                 // 0x0538   (0x0028)  
	FDBDTunableRowHandle                               _highFiveCooldown;                                          // 0x0560   (0x0028)  
	FDBDTunableRowHandle                               _attachToPlayerDelay;                                       // 0x0588   (0x0028)  
	ESnowmanState                                      _snowmanState;                                              // 0x05B0   (0x0001)  
	ESnowmanDestructionType                            _snowmanDestructionType;                                    // 0x05B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x05B2   (0x0006)  MISSED
	class ADBDPlayer*                                  _playerUsingThisSnowman;                                    // 0x05B8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x80];                                      // 0x05C0   (0x0080)  MISSED
	class UDBDSkeletalMeshComponentBudgeted*           _snowmanSkeletalMesh;                                       // 0x0640   (0x0008)  
	class UDBDOutlineComponent*                        _snowmanOutlineComponent;                                   // 0x0648   (0x0008)  
	class UCapsuleComponent*                           _snowmanCapsule;                                            // 0x0650   (0x0008)  
	class UCapsuleComponent*                           _snowmanHandCapsule;                                        // 0x0658   (0x0008)  
	class UInteractor*                                 _snowmanInteractor;                                         // 0x0660   (0x0008)  
	class UPrimitiveComponent*                         _snowmanInteractionZone;                                    // 0x0668   (0x0008)  
	float                                              _thirdPersonPerspectiveTransitionTime;                      // 0x0670   (0x0004)  
	float                                              _playerMeshRotationOffset;                                  // 0x0674   (0x0004)  
	bool                                               _isMoving;                                                  // 0x0678   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0679   (0x0007)  MISSED
	class ASnowman*                                    _highFiveFollower;                                          // 0x0680   (0x0008)  
	unsigned char                                      UnknownData04_5[0x30];                                      // 0x0688   (0x0030)  MISSED
	FGameplayTagContainer                              _hideAdditonalActorEvents;                                  // 0x06B8   (0x0020)  


	/// Functions
	// Function /Script/SnowmanWinterEvent.Snowman.OnTransitionBackToKillerFinished
	// void OnTransitionBackToKillerFinished(class ASlasherPlayer* killer);                                                  // [0x59dde20] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.OnRep_SnowmanState
	// void OnRep_SnowmanState();                                                                                            // [0x59dde00] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.OnRep_SnowmanDestructionType
	// void OnRep_SnowmanDestructionType();                                                                                  // [0x59ddde0] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.OnRep_PlayerUsingSnowman
	// void OnRep_PlayerUsingSnowman();                                                                                      // [0x59dddc0] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.OnRep_IsMoving
	// void OnRep_IsMoving();                                                                                                // [0x59ddda0] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.OnRep_HighFiveFollower
	// void OnRep_HighFiveFollower();                                                                                        // [0x59ddd80] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x59ddc70] Final|Native|Public|HasOutParms 
	// Function /Script/SnowmanWinterEvent.Snowman.Multicast_StartSnowmanDestruction
	// void Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, class ADBDPlayer* playerInSnowman); // [0x59ddb00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
	// void Multicast_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman);                          // [0x57fd120] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedByKiller
	// void Multicast_OnSnowmanStartBeingUsedByKiller(class ASlasherPlayer* killerUsingSnowman);                             // [0x59dda70] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
	// void Multicast_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman);                    // [0x58b1500] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledByKiller
	// void Multicast_OnSnowmanStartBeingControlledByKiller(class ASlasherPlayer* killerUsingSnowman);                       // [0x59dd9e0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.Multicast_DrawDebugCollisionCheck
	// void Multicast_DrawDebugCollisionCheck(FVector BoxExtent, float debugLifetime);                                       // [0x59dd900] Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|Const 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
	// void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman);                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedByKiller
	// void Cosmetic_OnSnowmanStartBeingUsedByKiller(class ASlasherPlayer* killerUsingSnowman);                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
	// void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman);                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledByKiller
	// void Cosmetic_OnSnowmanStartBeingControlledByKiller(class ASlasherPlayer* killerUsingSnowman);                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanSpawned
	// void Cosmetic_OnSnowmanSpawned();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanHighFive
	// void Cosmetic_OnSnowmanHighFive(class ASnowman* otherSnowman);                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
	// void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(class ACamperPlayer* survivorUsingSnowman);                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByNonDamagingAttackWhileEmpty
	// void Cosmetic_OnSnowmanDestroyedByNonDamagingAttackWhileEmpty();                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByNonDamagingAttackWhileControlled
	// void Cosmetic_OnSnowmanDestroyedByNonDamagingAttackWhileControlled(class ADBDPlayer* playerUsingThisSnowman);         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerCancelExit
	// void Cosmetic_OnSnowmanDestroyedByKillerCancelExit();                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerAttackExit
	// void Cosmetic_OnSnowmanDestroyedByKillerAttackExit(class ASlasherPlayer* killerUsingSnowman);                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
	// void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(class ASlasherPlayer* killerAttackingSnowman);                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
	// void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(class ACamperPlayer* survivorUsingSnowman, class ASlasherPlayer* killerAttackingSnowman); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnKillerFinishTransitionOutOfSnowman
	// void Cosmetic_OnKillerFinishTransitionOutOfSnowman(class ASlasherPlayer* killer);                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
	// void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(class ACamperPlayer* survivorUsingSnowman);            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
	// void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(class ASlasherPlayer* killerAttackingSnowman);           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Cosmetic_OnAdditionalActorHidden
	// void Cosmetic_OnAdditionalActorHidden(class AActor* actorToHide);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapEnd
	// void Authority_OnSnowmanHandOverlapEnd(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x59dd7a0] Final|Native|Private 
	// Function /Script/SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapBegin
	// void Authority_OnSnowmanHandOverlapBegin(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x59dd580] Final|Native|Private|HasOutParms 
};

/// Class /Script/SnowmanWinterEvent.SnowmanAnimInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class USnowmanAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isIdle;                                                    // 0x02C0   (0x0001)  
	bool                                               _isBeingEntered;                                            // 0x02C1   (0x0001)  
	bool                                               _isControlled;                                              // 0x02C2   (0x0001)  
	bool                                               _isDestroyed;                                               // 0x02C3   (0x0001)  
	bool                                               _isBeingDestroyedDueToSurvivorRunExit;                      // 0x02C4   (0x0001)  
	bool                                               _isBeingDestroyedDueToKillerAttackExit;                     // 0x02C5   (0x0001)  
	bool                                               _isBeingDestroyedDueToKillerAttackWhileControlled;          // 0x02C6   (0x0001)  
	bool                                               _isBeingDestroyedDueToKillerAttackWhileEmpty;               // 0x02C7   (0x0001)  
	bool                                               _isSurvivorUsingSnowmanMoving;                              // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C9   (0x0003)  MISSED
	SDK_UNDEFINED(8,5028) /* TWeakObjectPtr<ASnowman*> */ __um(_snowman);                                          // 0x02CC   (0x0008)  
	SDK_UNDEFINED(8,5029) /* TWeakObjectPtr<ADBDPlayer*> */ __um(_playerUsingSnowman);                             // 0x02D4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/SnowmanWinterEvent.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
	// void Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType);                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SnowmanWinterEvent.SnowmanAttackableComponent
/// Size: 0x0018 (0x0000F0 - 0x000108)
class USnowmanAttackableComponent : public UBaseActorAttackableComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/SnowmanWinterEvent.SnowmanKillerPerspectiveChangeComponent
/// Size: 0x0098 (0x000128 - 0x0001C0)
class USnowmanKillerPerspectiveChangeComponent : public UPlayerPerspectiveChangeComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0128   (0x0018)  MISSED
	FPlayerPerspectiveChangeTargetData                 _killerViewPerspectiveChangeTargetData;                     // 0x0140   (0x0030)  
	FPlayerPerspectiveChangeTargetData                 _thirdPersonSnowmanKillerPerspectiveChangeTargetData;       // 0x0170   (0x0030)  
	class UClass*                                      _springArmClass;                                            // 0x01A0   (0x0008)  
	float                                              _pitchLimitLower;                                           // 0x01A8   (0x0004)  
	float                                              _pitchLimitUpper;                                           // 0x01AC   (0x0004)  
	class UDBDSpringArmComponent*                      _snowmanSpringArm;                                          // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SnowmanWinterEvent.SnowmanKillerPerspectiveChangeComponent.SetFirstPersonTargetData
	// void SetFirstPersonTargetData(class ASlasherPlayer* killer);                                                          // [0x59deac0] Final|Native|Private 
};

/// Struct /Script/SnowmanWinterEvent.SnowmanSpawnLocationData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSnowmanSpawnLocationData
{ 
	FVector                                            OriginLocation;                                             // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FVector>                                    NavmeshLocations;                                           // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/SnowmanWinterEvent.SnowmanSpawnPlacementStrategy
/// Size: 0x0240 (0x0000B8 - 0x0002F8)
class USnowmanSpawnPlacementStrategy : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _minDistanceFromOtherActiveSnowmen;                         // 0x00B8   (0x0028)  
	FDBDTunableRowHandle                               _minDistanceFromOtherPlayers;                               // 0x00E0   (0x0028)  
	FDBDTunableRowHandle                               _minHatchDistance;                                          // 0x0108   (0x0028)  
	FDBDTunableRowHandle                               _minPalletDistance;                                         // 0x0130   (0x0028)  
	FDBDTunableRowHandle                               _navmesh_radiusArea;                                        // 0x0158   (0x0028)  
	FDBDTunableRowHandle                               _navmesh_minimumDistanceFromOriginSpawnPoint;               // 0x0180   (0x0028)  
	FDBDTunableRowHandle                               _navmesh_minimumNumberOfNavmeshPointsToBeReady;             // 0x01A8   (0x0028)  
	FDBDTunableRowHandle                               _boxExtentXSize;                                            // 0x01D0   (0x0028)  
	FDBDTunableRowHandle                               _boxExtentYSize;                                            // 0x01F8   (0x0028)  
	FDBDTunableRowHandle                               _boxExtentZSize;                                            // 0x0220   (0x0028)  
	FVector                                            _collisionBoxHalfExtent;                                    // 0x0248   (0x000C)  
	float                                              _collisionCapsuleHalfHeight;                                // 0x0254   (0x0004)  
	float                                              _collisionCapsuleRadius;                                    // 0x0258   (0x0004)  
	float                                              _minDistanceFromOtherActiveSnowmenSquared;                  // 0x025C   (0x0004)  
	float                                              _minDistanceFromOtherPlayersSquared;                        // 0x0260   (0x0004)  
	float                                              _minPalletDistanceSquared;                                  // 0x0264   (0x0004)  
	float                                              _minHatchSquaredDistance;                                   // 0x0268   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x026C   (0x0004)  MISSED
	TArray<ETileSpawnPointType>                        _spawnPointsTileTypes;                                      // 0x0270   (0x0010)  
	TArray<EGameplayElementType>                       _spawnPointsGameplayElementTypes;                           // 0x0280   (0x0010)  
	TArray<FSnowmanSpawnLocationData>                  _spawnLocationData;                                         // 0x0290   (0x0010)  
	TArray<class AHatch*>                              _hatches;                                                   // 0x02A0   (0x0010)  
	TArray<class APallet*>                             _pallets;                                                   // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x02C0   (0x0020)  MISSED
	FVector                                            _collisionCheckBoxExtents;                                  // 0x02E0   (0x000C)  
	float                                              _downRaycastLength;                                         // 0x02EC   (0x0004)  
	float                                              _rayCastZOffet;                                             // 0x02F0   (0x0004)  
	float                                              _distanceToGroundToleranceSquared;                          // 0x02F4   (0x0004)  


	/// Functions
	// Function /Script/SnowmanWinterEvent.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay
	// void Authority_OnIntroCompletedOrLevelReadyToPlay();                                                                  // [0x59dee90] Final|Native|Private 
};

/// Class /Script/SnowmanWinterEvent.SnowmanWinterEventComponent
/// Size: 0x0018 (0x000160 - 0x000178)
class USnowmanWinterEventComponent : public UBaseSnowmanEventComponent
{ 
public:
	class UClass*                                      _snowmanClass;                                              // 0x0160   (0x0008)  
	TArray<class ASnowman*>                            _snowmen;                                                   // 0x0168   (0x0010)  


	/// Functions
	// Function /Script/SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
	// void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);                                               // [0x59df2e0] Final|Exec|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
	// void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);                                            // [0x59df260] Final|Exec|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021RecalculateSpawnPoints
	// void DBD_Winter2021RecalculateSpawnPoints();                                                                          // [0x59df240] Final|Exec|Native|Private 
	// Function /Script/SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ForceRespawnAllSnowmen
	// void DBD_Winter2021ForceRespawnAllSnowmen();                                                                          // [0x59df220] Final|Exec|Native|Private 
};

/// Class /Script/SnowmanWinterEvent.SnowmanWinterEventPlayerComponent
/// Size: 0x00C8 (0x0000B8 - 0x000180)
class USnowmanWinterEventPlayerComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _maxTrackedTimeSinceSnowmanExit;                            // 0x00B8   (0x0028)  
	SDK_UNDEFINED(80,5030) /* TSet<TWeakObjectPtr<ADBDPlayer*>> */ __um(_previouslyHighFivedPlayers);              // 0x00E0   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0130   (0x0050)  MISSED
};

/// Class /Script/SnowmanWinterEvent.SurvivorHideInSnowmanInteraction
/// Size: 0x0120 (0x000740 - 0x000860)
class USurvivorHideInSnowmanInteraction : public UHideInSnowmanInteraction
{ 
public:
	bool                                               _shouldRunOutOfSnowman;                                     // 0x0740   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0741   (0x0007)  MISSED
	FDBDTunableRowHandle                               _minimumTimeToRunAndExit;                                   // 0x0748   (0x0028)  
	FDBDTunableRowHandle                               _cameraZoomBack;                                            // 0x0770   (0x0028)  
	FDBDTunableRowHandle                               _timeToZoomEnter;                                           // 0x0798   (0x0028)  
	FDBDTunableRowHandle                               _timeToZoomExit;                                            // 0x07C0   (0x0028)  
	TArray<FGameplayTag>                               _nonDamagingKillerSnowmanDestroyingEvents;                  // 0x07E8   (0x0010)  
	TArray<FGameplayTag>                               _gameEventsToCauseScream;                                   // 0x07F8   (0x0010)  
	SDK_UNDEFINED(16,5031) /* TArray<FString> */       __um(_overridingKillerInteractionIds);                      // 0x0808   (0x0010)  
	bool                                               _shouldScreamOnExit;                                        // 0x0818   (0x0001)  
	unsigned char                                      UnknownData01_6[0x47];                                      // 0x0819   (0x0047)  MISSED


	/// Functions
	// Function /Script/SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Cosmetic_OnSurvivorScreamFromExit
	// void Cosmetic_OnSurvivorScreamFromExit(class ADBDPlayer* playerExiting);                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);        // [0x59df740] Final|Native|Private 
};

