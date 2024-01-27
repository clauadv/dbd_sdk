
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayUtilities
/// dependency: StatSystem

/// Enum /Script/TheK32.EK32ItemBoxState
/// Size: 0x04
enum class EK32ItemBoxState : uint8_t
{
	EK32ItemBoxState__Available                                                      = 0,
	EK32ItemBoxState__InProgress                                                     = 1,
	EK32ItemBoxState__Inactive                                                       = 2,
	EK32ItemBoxState__EK32ItemBoxState_MAX                                           = 3
};

/// Enum /Script/TheK32.EK32KillerPodSpawningResult
/// Size: 0x07
enum class EK32KillerPodSpawningResult : uint8_t
{
	EK32KillerPodSpawningResult__NoResult                                            = 0,
	EK32KillerPodSpawningResult__NoSurface                                           = 1,
	EK32KillerPodSpawningResult__InvalidSurface                                      = 2,
	EK32KillerPodSpawningResult__SpawnKillerPod                                      = 3,
	EK32KillerPodSpawningResult__DestroyKillerPod                                    = 4,
	EK32KillerPodSpawningResult__TeleportToSurvivor                                  = 5,
	EK32KillerPodSpawningResult__EK32KillerPodSpawningResult_MAX                     = 6
};

/// Enum /Script/TheK32.ELockOnState
/// Size: 0x06
enum class ELockOnState : uint8_t
{
	ELockOnState__NoTarget                                                           = 0,
	ELockOnState__TargetFound                                                        = 1,
	ELockOnState__Lingering                                                          = 2,
	ELockOnState__Cooldown                                                           = 3,
	ELockOnState__LockedOut                                                          = 4,
	ELockOnState__ELockOnState_MAX                                                   = 5
};

/// Enum /Script/TheK32.EPodVisionTransferDestination
/// Size: 0x03
enum class EPodVisionTransferDestination : uint8_t
{
	EPodVisionTransferDestination__Previous                                          = 0,
	EPodVisionTransferDestination__Target                                            = 1,
	EPodVisionTransferDestination__EPodVisionTransferDestination_MAX                 = 2
};

/// Class /Script/TheK32.InK32PodZoneLingeringEffect
/// Size: 0x00A0 (0x0003B8 - 0x000458)
class UInK32PodZoneLingeringEffect : public UBaseLingeringStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _range;                                                     // 0x03B8   (0x0028)  
	TArray<class AK32KillerPod*>                       _podsInRange;                                               // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x03F0   (0x0068)  MISSED


	/// Functions
	// Function /Script/TheK32.InK32PodZoneLingeringEffect.Authority_OnKillerPodDisabledChanged
	// void Authority_OnKillerPodDisabledChanged(bool IsDisabled);                                                           // [0x5cde620] Final|Native|Private 
	// Function /Script/TheK32.InK32PodZoneLingeringEffect.Authority_OnKillerPodAcquiredChanged
	// void Authority_OnKillerPodAcquiredChanged(bool IsAcquired);                                                           // [0x5cde590] Final|Native|Private 
};

/// Class /Script/TheK32.K32AnimInstance
/// Size: 0x0060 (0x000610 - 0x000670)
class UK32AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isAimingPodPlacement;                                      // 0x0610   (0x0001)  
	bool                                               _isShootingPod;                                             // 0x0611   (0x0001)  
	bool                                               _isInOverclockMode;                                         // 0x0612   (0x0001)  
	bool                                               _isTeleporting;                                             // 0x0613   (0x0001)  
	bool                                               _isControllingPod;                                          // 0x0614   (0x0001)  
	bool                                               _isTeleportingFromKillerPovWithInAntiCamp;                  // 0x0615   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0616   (0x0002)  MISSED
	float                                              _chargeKillerProjectileSpawnPercent;                        // 0x0618   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x061C   (0x0004)  MISSED
	class UClass*                                      _overclockStatusEffectClass;                                // 0x0620   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0628   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK32.K32AnimInstance.ResetIsShootingPod
	// void ResetIsShootingPod();                                                                                            // [0x5c9dde0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK32.K32AnimInstance.OnGameEventReceived
	// void OnGameEventReceived(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                    // [0x5cdebd0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK32.K32AntiCampZoneIdentifierComponent
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UK32AntiCampZoneIdentifierComponent : public UObjectPlacementValidationWithRestrictionStrategy
{ 
public:
};

/// Class /Script/TheK32.K32AssimilationAnimInstance
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UK32AssimilationAnimInstance : public UDynamicAccessoryAnimInstance
{ 
public:
	bool                                               _isMale;                                                    // 0x02D0   (0x0001)  
	bool                                               _isBeingMoried;                                             // 0x02D1   (0x0001)  
	bool                                               _isDeadOrInParadise;                                        // 0x02D2   (0x0001)  
	bool                                               _isMoving;                                                  // 0x02D3   (0x0001)  
	bool                                               _isRunning;                                                 // 0x02D4   (0x0001)  
	bool                                               _isCrawling;                                                // 0x02D5   (0x0001)  
	bool                                               _isRetrievingItem;                                          // 0x02D6   (0x0001)  
	bool                                               _isInAir;                                                   // 0x02D7   (0x0001)  
	bool                                               _isHealing;                                                 // 0x02D8   (0x0001)  
	bool                                               _isBeingMended;                                             // 0x02D9   (0x0001)  
	bool                                               _isBeingHooked;                                             // 0x02DA   (0x0001)  
	bool                                               _isBeingHealed;                                             // 0x02DB   (0x0001)  
	bool                                               _isCleansingTotem;                                          // 0x02DC   (0x0001)  
	bool                                               _isOwnerUsingGesture;                                       // 0x02DD   (0x0001)  
	bool                                               _isOwnerEscapingWithHatch;                                  // 0x02DE   (0x0001)  
	bool                                               _isInteractingWithLocker;                                   // 0x02DF   (0x0001)  
	bool                                               _isInteractingWithChest;                                    // 0x02E0   (0x0001)  
	bool                                               _isAssimilated;                                             // 0x02E1   (0x0001)  
	bool                                               _isDestroyedByEmp;                                          // 0x02E2   (0x0001)  
	bool                                               _isDestroyedByHook;                                         // 0x02E3   (0x0001)  
	bool                                               _isDestroyedByTeleport;                                     // 0x02E4   (0x0001)  
	bool                                               _isOwnerCrouching;                                          // 0x02E5   (0x0001)  
	bool                                               _isOwnerInjured;                                            // 0x02E6   (0x0001)  
	bool                                               _isOwnerKO;                                                 // 0x02E7   (0x0001)  
	bool                                               _isOwnerInCloset;                                           // 0x02E8   (0x0001)  
	bool                                               _isOwnerExitingLocker;                                      // 0x02E9   (0x0001)  
	bool                                               _isOwnerBeingCarried;                                       // 0x02EA   (0x0001)  
	bool                                               _isOwnerVaulting;                                           // 0x02EB   (0x0001)  
	bool                                               _isOwnerBeingPulledFromCloset;                              // 0x02EC   (0x0001)  
	bool                                               _isBeingLookedAtByKillerPod;                                // 0x02ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x32];                                      // 0x02EE   (0x0032)  MISSED


	/// Functions
	// Function /Script/TheK32.K32AssimilationAnimInstance.ResetIsDestroyedByHook
	// void ResetIsDestroyedByHook();                                                                                        // [0x5cdf210] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK32.K32AssimilationAnimInstance.ResetIsDestroyedByEmp
	// void ResetIsDestroyedByEmp();                                                                                         // [0x5cdf1f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK32.K32BaseProjectile
/// Size: 0x0110 (0x000230 - 0x000340)
class AK32BaseProjectile : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	SDK_UNDEFINED(16,5136) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0238   (0x0010)  
	FDBDTunableRowHandle                               _speedInMeterPerSecond;                                     // 0x0248   (0x0028)  
	FDBDTunableRowHandle                               _hitDistance;                                               // 0x0270   (0x0028)  
	unsigned char                                      UnknownData01_5[0x98];                                      // 0x0298   (0x0098)  MISSED
	bool                                               _isAcquiredFromPool;                                        // 0x0330   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0331   (0x000F)  MISSED


	/// Functions
	// Function /Script/TheK32.K32BaseProjectile.OnRep_IsAcquiredFromPool
	// void OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool);                                                            // [0x5cdee40] Final|Native|Private 
	// Function /Script/TheK32.K32BaseProjectile.Cosmetic_OnProjectileVisible
	// void Cosmetic_OnProjectileVisible();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32BaseProjectile.Cosmetic_OnProjectileHidden
	// void Cosmetic_OnProjectileHidden();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32CollectItemInItemBoxInteraction
/// Size: 0x0030 (0x000670 - 0x0006A0)
class UK32CollectItemInItemBoxInteraction : public UCollectItemInteraction
{ 
public:
	class AK32ItemBox*                                 _owningItemBox;                                             // 0x0670   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0678   (0x0028)  MISSED
};

/// Class /Script/TheK32.K32Emp
/// Size: 0x01E8 (0x000510 - 0x0006F8)
class AK32Emp : public ABaseCamperCollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	SDK_UNDEFINED(16,5137) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0518   (0x0010)  
	FVector                                            _customStrafingOffset;                                      // 0x0528   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0534   (0x0004)  MISSED
	FDBDTunableRowHandle                               _strafingOffsetMultiplier;                                  // 0x0538   (0x0028)  
	class UK32EmpInteraction*                          _empInteraction;                                            // 0x0560   (0x0008)  
	class UChargeableComponent*                        _empInteractionChargeable;                                  // 0x0568   (0x0008)  
	FDBDTunableRowHandle                               _empInteractionSecondsToCharge;                             // 0x0570   (0x0028)  
	FDBDTunableRowHandle                               _empRange;                                                  // 0x0598   (0x0028)  
	FDBDTunableRowHandle                               _empAmmoCount;                                              // 0x05C0   (0x0028)  
	class UClass*                                      _revealToSurvivorStatusEffectClass;                         // 0x05E8   (0x0008)  
	TArray<class ACamperPlayer*>                       _authority_assimilatedSurvivorsInRange;                     // 0x05F0   (0x0010)  
	TArray<class AK32KillerPod*>                       _authority_podsInRange;                                     // 0x0600   (0x0010)  
	int32_t                                            _numTargetsInRange;                                         // 0x0610   (0x0004)  
	bool                                               _isVisible;                                                 // 0x0614   (0x0001)  
	bool                                               _isAcquiredFromPool;                                        // 0x0615   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0616   (0x0002)  MISSED
	SDK_UNDEFINED(80,5138) /* TMap<ADBDPlayer*, UStatusEffect*> */ __um(_revealToSurvivorStatusEffects);           // 0x0618   (0x0050)  
	class ADBDPlayer*                                  _previousCollector;                                         // 0x0668   (0x0008)  
	unsigned char                                      UnknownData03_6[0x88];                                      // 0x0670   (0x0088)  MISSED


	/// Functions
	// Function /Script/TheK32.K32Emp.SetComponentContextProviders
	// void SetComponentContextProviders();                                                                                  // [0x5cdf230] Final|Native|Private 
	// Function /Script/TheK32.K32Emp.OnRep_NumTargetsInRange
	// void OnRep_NumTargetsInRange();                                                                                       // [0x5cdefc0] Final|Native|Private 
	// Function /Script/TheK32.K32Emp.OnRep_IsVisible
	// void OnRep_IsVisible(bool previousIsVisible);                                                                         // [0x5cdef30] Final|Native|Private 
	// Function /Script/TheK32.K32Emp.OnRep_IsAcquiredFromPool
	// void OnRep_IsAcquiredFromPool();                                                                                      // [0x5cdeed0] Final|Native|Private 
	// Function /Script/TheK32.K32Emp.OnEmpInteractionFinished
	// void OnEmpInteractionFinished(class ADBDPlayer* interactingPlayer);                                                   // [0x5cdeb40] Final|Native|Private 
	// Function /Script/TheK32.K32Emp.OnEmpInteractionEntered
	// void OnEmpInteractionEntered(class ADBDPlayer* interactingPlayer);                                                    // [0x5cdeab0] Final|Native|Private 
	// Function /Script/TheK32.K32Emp.Multicast_UseEmp
	// void Multicast_UseEmp(int32_t numAffectedTargets, class ADBDPlayer* interactingPlayer);                               // [0x5cde860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnVisibilityChanged
	// void Cosmetic_OnVisibilityChanged(bool previousIsVisible, bool IsVisible);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnPickedUp
	// void Cosmetic_OnPickedUp();                                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnNumTargetsInRangeChanged
	// void Cosmetic_OnNumTargetsInRangeChanged(int32_t numberOfAffectedTargets);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnEmpInteractionStarted
	// void Cosmetic_OnEmpInteractionStarted();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnEmpInteractionFinished
	// void Cosmetic_OnEmpInteractionFinished(int32_t numberOfAffectedTargets, class ADBDPlayer* interactingPlayer);         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnEmpInteractionCancelled
	// void Cosmetic_OnEmpInteractionCancelled();                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32Emp.Cosmetic_OnDropped
	// void Cosmetic_OnDropped();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32EmpInteraction
/// Size: 0x0020 (0x000790 - 0x0007B0)
class UK32EmpInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0790   (0x0010)  MISSED
	class UCurveFloat*                                 _chargingSpeedCurve;                                        // 0x07A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x07A8   (0x0008)  MISSED
};

/// Class /Script/TheK32.K32EmpScoreComponent
/// Size: 0x01A8 (0x0000B8 - 0x000260)
class UK32EmpScoreComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _minPodsRemovedForManyPodsRemovedScoreEvent;                // 0x00B8   (0x0028)  
	FDBDTunableRowHandle                               _minUnhookedSurvivorAssimilationsRemovedForManyCleansedScoreEvent; // 0x00E0   (0x0028)  
	FDBDTunableRowHandle                               _minHookedSurvivorAssimilationsRemovedForManyCleansedScoreEvent; // 0x0108   (0x0028)  
	FDBDTunableRowHandle                               _basePodRemovalScoreValue;                                  // 0x0130   (0x0028)  
	class UCurveFloat*                                 _podRemovedScoreEventDepreciationCurve;                     // 0x0158   (0x0008)  
	class UCurveFloat*                                 _unhookedSurvivorsCleansedScoreEventDepreciationCurve;      // 0x0160   (0x0008)  
	class UCurveFloat*                                 _hookedSurvivorsCleansedScoreEventDepreciationCurve;        // 0x0168   (0x0008)  
	unsigned char                                      UnknownData00_6[0xF0];                                      // 0x0170   (0x00F0)  MISSED
};

/// Class /Script/TheK32.K32GameStateComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UK32GameStateComponent : public UActorComponent
{ 
public:
	TArray<class AK32ItemBox*>                         _k32ItemBox;                                                // 0x00B8   (0x0010)  
};

/// Class /Script/TheK32.K32ItemBox
/// Size: 0x00C0 (0x000338 - 0x0003F8)
class AK32ItemBox : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0338   (0x0008)  MISSED
	class UChargeableComponent*                        _chargeable;                                                // 0x0340   (0x0008)  
	class ACollectable*                                _spawnedItem;                                               // 0x0348   (0x0008)  
	class USceneComponent*                             _containingItemSpawnPoint;                                  // 0x0350   (0x0008)  
	class USceneComponent*                             _itemDropPoint;                                             // 0x0358   (0x0008)  
	EK32ItemBoxState                                   _state;                                                     // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UK32ItemBoxSpeedUpInteraction*               _itemBoxSpeedUpInteraction;                                 // 0x0368   (0x0008)  
	class UInteractor*                                 _interactor;                                                // 0x0370   (0x0008)  
	class UPrimitiveComponent*                         _interactionZone;                                           // 0x0378   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0380   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent;                                     // 0x0388   (0x0008)  
	FDBDTunableRowHandle                               _inProgressDuration;                                        // 0x0390   (0x0028)  
	FDBDTunableRowHandle                               _addon12ChargeTimeExtension;                                // 0x03B8   (0x0028)  
	bool                                               _isSurvivorInteracting;                                     // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x03E1   (0x0007)  MISSED
	class ADBDPlayer*                                  _survivorInteracting;                                       // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK32.K32ItemBox.OnRep_State
	// void OnRep_State();                                                                                                   // [0x5cdf1d0] Final|Native|Private 
	// Function /Script/TheK32.K32ItemBox.OnRep_SpawnedItem
	// void OnRep_SpawnedItem();                                                                                             // [0x5cdf1b0] Final|Native|Private 
	// Function /Script/TheK32.K32ItemBox.OnRep_IsSurvivorInteracting
	// void OnRep_IsSurvivorInteracting();                                                                                   // [0x5cdef10] Final|Native|Private 
	// Function /Script/TheK32.K32ItemBox.OnChargeableCompleteEvent
	// void OnChargeableCompleteEvent(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                            // [0x5cde930] Final|Native|Private|HasOutParms 
	// Function /Script/TheK32.K32ItemBox.Multicast_SetIsChargeTimeExtended
	// void Multicast_SetIsChargeTimeExtended(bool isAddonExtendingFirstActivationTimer);                                    // [0x57fdea0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32ItemBox.Cosmetic_OnSurvivorInteractingChanged
	// void Cosmetic_OnSurvivorInteractingChanged(bool IsInteracting);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32ItemBox.Cosmetic_OnStateChanged
	// void Cosmetic_OnStateChanged(EK32ItemBoxState NewState);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32ItemBox.Authority_OnItemPickup
	// void Authority_OnItemPickup(class ADBDPlayer* Player);                                                                // [0x5cde500] Final|Native|Private 
};

/// Class /Script/TheK32.K32ItemBoxAnimInstance
/// Size: 0x0010 (0x0002F0 - 0x000300)
class UK32ItemBoxAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	class AK32ItemBox*                                 _owningItemBox;                                             // 0x02F0   (0x0008)  
	EK32ItemBoxState                                   _currentState;                                              // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02F9   (0x0007)  MISSED
};

/// Class /Script/TheK32.K32ItemBoxIterativeWeightAdjustmentStrategy
/// Size: 0x0018 (0x000030 - 0x000048)
class UK32ItemBoxIterativeWeightAdjustmentStrategy : public UIterativeWeightAdjustmentStrategy
{ 
public:
	SDK_UNDEFINED(16,5139) /* TArray<TScriptInterface<Class>> */ __um(_selectedSpawners);                          // 0x0030   (0x0010)  
	class UCurveFloat*                                 _penaltyFromDistanceToClosestK32ItemBox;                    // 0x0040   (0x0008)  
};

/// Class /Script/TheK32.K32ItemBoxManagerComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UK32ItemBoxManagerComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _initialNumberOfInProgressBoxes;                            // 0x00B8   (0x0028)  
	TArray<class AK32ItemBox*>                         _itemBoxes;                                                 // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK32.K32ItemBoxManagerComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5cde6b0] Final|Native|Private 
	// Function /Script/TheK32.K32ItemBoxManagerComponent.Authority_OnItemBoxDeactivated
	// void Authority_OnItemBoxDeactivated(FGameplayTag GameplayTag, FGameEventData& GameEventData);                         // [0x5cde3f0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK32.K32ItemBoxOutlineUpdateStrategy
/// Size: 0x00B0 (0x0000E0 - 0x000190)
class UK32ItemBoxOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FTunableStat                                       _distanceToShowOutline;                                     // 0x00E0   (0x0080)  
	FDBDTunableRowHandle                               _isOutlineVisibleToSurvivorsWithEmp;                        // 0x0160   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0188   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK32.K32ItemBoxOutlineUpdateStrategy.OnDistanceStatValueUpdated
	// void OnDistanceStatValueUpdated(float distance);                                                                      // [0x5cdea30] Final|Native|Private 
};

/// Class /Script/TheK32.K32ItemBoxSpeedUpInteraction
/// Size: 0x0090 (0x000790 - 0x000820)
class UK32ItemBoxSpeedUpInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0790   (0x0010)  MISSED
	FTunableStat                                       _interactionProgressMultiplier;                             // 0x07A0   (0x0080)  


	/// Functions
	// Function /Script/TheK32.K32ItemBoxSpeedUpInteraction.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5cdee20] Final|Native|Private 
};

/// Struct /Script/TheK32.K32KillerPodSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FK32KillerPodSettings
{ 
	FVector                                            CollisionPoint;                                             // 0x0000   (0x000C)  
	FVector                                            SpawnLocation;                                              // 0x000C   (0x000C)  
	FRotator                                           SpawnForwardRotation;                                       // 0x0018   (0x000C)  
	FRotator                                           LastForwardRotation;                                        // 0x0024   (0x000C)  
	bool                                               IsVisible;                                                  // 0x0030   (0x0001)  
	bool                                               IsDisabled;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	bool                                               IsControlledByKiller;                                       // 0x0038   (0x0001)  
	bool                                               IsLastControlledKillerPod;                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	FVector                                            SurfaceNormal;                                              // 0x003C   (0x000C)  
	TArray<FVector>                                    AttachmentPoints;                                           // 0x0048   (0x0010)  
};

/// Class /Script/TheK32.K32KillerPod
/// Size: 0x01E8 (0x000230 - 0x000418)
class AK32KillerPod : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	SDK_UNDEFINED(16,5140) /* FMulticastInlineDelegate */ __um(OnDisabledChanged);                                 // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,5141) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0258   (0x0010)  
	class UStaticMeshComponent*                        _overlapTestingMeshComponent;                               // 0x0268   (0x0008)  
	class UMapActorComponent*                          _mapActorComponent;                                         // 0x0270   (0x0008)  
	FTunableStat                                       _podDisableTime;                                            // 0x0278   (0x0080)  
	FDBDTunableRowHandle                               _addon14Delay;                                              // 0x02F8   (0x0028)  
	FK32KillerPodSettings                              _settings;                                                  // 0x0320   (0x0058)  
	bool                                               _isAcquiredFromPool;                                        // 0x0378   (0x0001)  
	unsigned char                                      UnknownData01_5[0x77];                                      // 0x0379   (0x0077)  MISSED
	class UK32PodDangerPredictionComponent*            _dangerPredictionComponent;                                 // 0x03F0   (0x0008)  
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                                // 0x03F8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0400   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPod.OnVisibilityChanged
	// void OnVisibilityChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings Settings);                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.OnRep_Settings
	// void OnRep_Settings(FK32KillerPodSettings previousSettings);                                                          // [0x5cdefe0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPod.OnRep_IsAcquiredFromPool
	// void OnRep_IsAcquiredFromPool();                                                                                      // [0x5cdeef0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPod.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5cdee00] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPod.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5cded70] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPod.OnKillerLocallyObservedChanged
	// void OnKillerLocallyObservedChanged(bool isKillerLocallyObserved);                                                    // [0x5cdece0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPod.Multicast_OnPodDisabled
	// void Multicast_OnPodDisabled();                                                                                       // [0x57fbd00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPod.Multicast_OnDestroyedByRecycle
	// void Multicast_OnDestroyedByRecycle();                                                                                // [0x5920750] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPod.Multicast_OnDestroyedByManualRemoval
	// void Multicast_OnDestroyedByManualRemoval();                                                                          // [0x5b98c20] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPod.Multicast_OnDestroyedByEmp
	// void Multicast_OnDestroyedByEmp(class ADBDPlayer* destroyingSurvivor);                                                // [0x5cde7d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPod.GetSettings
	// FK32KillerPodSettings GetSettings();                                                                                  // [0x5cde6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnSettingsChanged
	// void Cosmetic_OnSettingsChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings Settings);              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnDisabledChanged
	// void Cosmetic_OnDisabledChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings Settings);              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnDestroyedByRecycle
	// void Cosmetic_OnDestroyedByRecycle();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnDestroyedByManualRemoval
	// void Cosmetic_OnDestroyedByManualRemoval();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnDestroyedByEmp
	// void Cosmetic_OnDestroyedByEmp(class ADBDPlayer* destroyingSurvivor);                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnControlledByKillerChanged
	// void Cosmetic_OnControlledByKillerChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings Settings);    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_OnAddon14Started
	// void Cosmetic_OnAddon14Started();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Cosmetic_IsBlockingPodSpawningChanged
	// void Cosmetic_IsBlockingPodSpawningChanged(bool isBlocking, float distanceBetweenPods);                               // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPod.Authority_OnDisabledTimerDone
	// void Authority_OnDisabledTimerDone();                                                                                 // [0x5cde3d0] Final|Native|Private 
};

/// Class /Script/TheK32.K32KillerPodOutlineUpdateStrategy
/// Size: 0x0050 (0x0000E0 - 0x000130)
class UK32KillerPodOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	float                                              _lastPodShowTime;                                           // 0x00E0   (0x0004)  
	FLinearColor                                       _revealedColorToSurvivor;                                   // 0x00E4   (0x0010)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x00F4   (0x003C)  MISSED
};

/// Class /Script/TheK32.K32KillerPodPool
/// Size: 0x01E0 (0x000118 - 0x0002F8)
class UK32KillerPodPool : public UAuthoritativeActorPoolComponent
{ 
public:
	FTunableStat                                       _availableAmmo;                                             // 0x0118   (0x0080)  
	FDBDTunableRowHandle                               _lastControlledPodLingerTime;                               // 0x0198   (0x0028)  
	FDBDTunableRowHandle                               _destroyPodDelay;                                           // 0x01C0   (0x0028)  
	FDBDTunableRowHandle                               _initialDestroyPodDelay;                                    // 0x01E8   (0x0028)  
	SDK_UNDEFINED(8,5142) /* TWeakObjectPtr<AK32KillerPod*> */ __um(_controlledPod);                               // 0x0210   (0x0008)  
	unsigned char                                      UnknownData00_6[0xE0];                                      // 0x0218   (0x00E0)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodPool.OnLingeringLastControlledPodExpired
	// void OnLingeringLastControlledPodExpired();                                                                           // [0x5ce2f50] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodPool.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5ce2f10] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodPool.OnKillerPodCreated
	// void OnKillerPodCreated(class AActor* Actor);                                                                         // [0x5ce2dd0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodPool.OnKillerPodAcquiredChanged
	// void OnKillerPodAcquiredChanged(bool IsAcquired);                                                                     // [0x5ce2d40] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodPool.Authority_OnDestroyPodDelayTimerDone
	// void Authority_OnDestroyPodDelayTimerDone(class ADBDPlayer* launchingSurvivor);                                       // [0x5ce2680] Final|Native|Private 
};

/// Class /Script/TheK32.K32KillerPodRestrictedZone
/// Size: 0x0000 (0x000230 - 0x000230)
class AK32KillerPodRestrictedZone : public AActor
{ 
public:


	/// Functions
	// Function /Script/TheK32.K32KillerPodRestrictedZone.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5ce2ef0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodRestrictedZone.GetStaticMesh
	// class UStaticMeshComponent* GetStaticMesh();                                                                          // [0x61c32d0] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/TheK32.K32KillerPodSpawningComponent
/// Size: 0x03F8 (0x0000B8 - 0x0004B0)
class UK32KillerPodSpawningComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _podRemovalRange;                                           // 0x00D0   (0x0028)  
	FDBDTunableRowHandle                               _maximumRange;                                              // 0x00F8   (0x0028)  
	FDBDTunableRowHandle                               _maximumRelativeHeight;                                     // 0x0120   (0x0028)  
	FDBDTunableRowHandle                               _podSurfaceDistance;                                        // 0x0148   (0x0028)  
	float                                              _worldDetectionTraceSphereSize;                             // 0x0170   (0x0004)  
	float                                              _survivorDetectionSphereSize;                               // 0x0174   (0x0004)  
	float                                              _lineOfSightTraceSphereSize;                                // 0x0178   (0x0004)  
	float                                              _podCollisionToFinalLocationTraceSphereSize;                // 0x017C   (0x0004)  
	FDBDTunableRowHandle                               _podInteractableRestrictionRange;                           // 0x0180   (0x0028)  
	FDBDTunableRowHandle                               _podWindowRestrictionRange;                                 // 0x01A8   (0x0028)  
	FDBDTunableRowHandle                               _podGeneratorRestrictionRange;                              // 0x01D0   (0x0028)  
	float                                              _secondaryHitCheckDistance;                                 // 0x01F8   (0x0004)  
	float                                              _secondaryHitCheckBackDistance;                             // 0x01FC   (0x0004)  
	float                                              _secondaryHitPitchRotationDegrees;                          // 0x0200   (0x0004)  
	float                                              _secondaryHitYawRotationDegrees;                            // 0x0204   (0x0004)  
	float                                              _floorSearchingLength;                                      // 0x0208   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x020C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _podSurfaceMinDegreesThreshold;                             // 0x0210   (0x0028)  
	FDBDTunableRowHandle                               _podSurfaceMaxDegreesThreshold;                             // 0x0238   (0x0028)  
	FDBDTunableRowHandle                               _minimumSpawnDistance;                                      // 0x0260   (0x0028)  
	FDBDTunableRowHandle                               _requiredAttachmentPoints;                                  // 0x0288   (0x0028)  
	float                                              _attachmentPointGridHorizontalAngle;                        // 0x02B0   (0x0004)  
	float                                              _attachmentPointGridVerticalAngle;                          // 0x02B4   (0x0004)  
	float                                              _attachmentPointGridLength;                                 // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _distanceBetweenPods;                                       // 0x02C0   (0x0028)  
	FDBDTunableRowHandle                               _addon13EffectActivationRange;                              // 0x02E8   (0x0028)  
	FDBDTunableRowHandle                               _addon13EffectDuration;                                     // 0x0310   (0x0028)  
	class UClass*                                      _revealSurvivorToKillerStatusEffectClass;                   // 0x0338   (0x0008)  
	FDBDTunableRowHandle                               _attachmentPointsRays;                                      // 0x0340   (0x0028)  
	float                                              _validationAllowedDistanceOffset;                           // 0x0368   (0x0004)  
	float                                              _indicatorPointToLocationFactor;                            // 0x036C   (0x0004)  
	FName                                              _traceProfile;                                              // 0x0370   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _invalidShowDelay;                                          // 0x0380   (0x0028)  
	FVector                                            _projectileSpawnOffset;                                     // 0x03A8   (0x000C)  
	float                                              _forwardProjectileSpawnDistance;                            // 0x03B4   (0x0004)  
	unsigned char                                      UnknownData04_6[0xF8];                                      // 0x03B8   (0x00F8)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodSpawningComponent.Server_FireKillerProjectile
	// void Server_FireKillerProjectile(FK32KillerPodSpawningInputData InputData, EK32KillerPodSpawningResult expectedResult); // [0x5ce3020] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK32.K32KillerPodSpawningComponent.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5ce2c00] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodSpawningComponent.Multicast_FireKillerProjectile
	// void Multicast_FireKillerProjectile();                                                                                // [0x4e01240] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPodSpawningComponent.Cosmetic_OnInvalidPodTriggers
	// void Cosmetic_OnInvalidPodTriggers(FVector& invalidLocation);                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Struct /Script/TheK32.K32KillerPodSpawningIndicatorSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FK32KillerPodSpawningIndicatorSettings
{ 
	FVector                                            SpawnLocation;                                              // 0x0000   (0x000C)  
	FRotator                                           SpawnForwardRotation;                                       // 0x000C   (0x000C)  
	bool                                               IsVisible;                                                  // 0x0018   (0x0001)  
	bool                                               IsInValidLocationForKillerPod;                              // 0x0019   (0x0001)  
	bool                                               IsDestroyingPod;                                            // 0x001A   (0x0001)  
	bool                                               IsTeleportingToSurvivor;                                    // 0x001B   (0x0001)  
};

/// Class /Script/TheK32.K32KillerPodSpawningIndicator
/// Size: 0x0020 (0x000230 - 0x000250)
class AK32KillerPodSpawningIndicator : public AActor
{ 
public:
	FK32KillerPodSpawningIndicatorSettings             _settings;                                                  // 0x0230   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x024C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodSpawningIndicator.GetSettings
	// FK32KillerPodSpawningIndicatorSettings GetSettings();                                                                 // [0x5ce2710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32KillerPodSpawningIndicator.Cosmetic_OnSettingsChanged
	// void Cosmetic_OnSettingsChanged(FK32KillerPodSpawningIndicatorSettings previousSettings, FK32KillerPodSpawningIndicatorSettings Settings); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/TheK32.K32KillerPodTargetIndicatorSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FK32KillerPodTargetIndicatorSettings
{ 
	FVector                                            SpawnLocation;                                              // 0x0000   (0x000C)  
	FRotator                                           SpawnForwardRotation;                                       // 0x000C   (0x000C)  
	bool                                               IsVisible;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Class /Script/TheK32.K32KillerPodTargetIndicator
/// Size: 0x0020 (0x000230 - 0x000250)
class AK32KillerPodTargetIndicator : public AActor
{ 
public:
	FK32KillerPodTargetIndicatorSettings               _settings;                                                  // 0x0230   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x024C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodTargetIndicator.GetSettings
	// FK32KillerPodTargetIndicatorSettings GetSettings();                                                                   // [0x5ce2710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32KillerPodTargetIndicator.Cosmetic_OnSettingsChanged
	// void Cosmetic_OnSettingsChanged(FK32KillerPodTargetIndicatorSettings previousSettings, FK32KillerPodTargetIndicatorSettings Settings); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32KillerPodTargetingComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UK32KillerPodTargetingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B8   (0x0058)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodTargetingComponent.Cosmetic_Local_NewKillerPodTargeted
	// void Cosmetic_Local_NewKillerPodTargeted(class AK32KillerPod* newTarget);                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32KillerPodVisionController
/// Size: 0x0198 (0x000230 - 0x0003C8)
class AK32KillerPodVisionController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	FGameplayTagContainer                              _allowedInteractionSemancticsWithPodVision;                 // 0x0238   (0x0020)  
	FGameplayTagContainer                              _allowedPodVisionInteractionSemanctic;                      // 0x0258   (0x0020)  
	FDBDTunableRowHandle                               _podViewPitchMinimum;                                       // 0x0278   (0x0028)  
	FDBDTunableRowHandle                               _podViewPitchMaximum;                                       // 0x02A0   (0x0028)  
	FDBDTunableRowHandle                               _collisionDisableTime;                                      // 0x02C8   (0x0028)  
	float                                              _observerRotationSpeed;                                     // 0x02F0   (0x0004)  
	float                                              _minTimeBetweenCameraRotationUpdateRPC;                     // 0x02F4   (0x0004)  
	bool                                               _hasVisionFromKillerPod;                                    // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0xCF];                                      // 0x02F9   (0x00CF)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodVisionController.Server_TakeControlOfPod
	// void Server_TakeControlOfPod(class AK32KillerPod* killerPodToBeControlled);                                           // [0x5ce32a0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK32.K32KillerPodVisionController.Server_SetCameraOrientation
	// void Server_SetCameraOrientation(FRotator NewOrientation);                                                            // [0x5ce3140] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK32.K32KillerPodVisionController.Server_ReleaseControlOfPods
	// void Server_ReleaseControlOfPods();                                                                                   // [0x43c1740] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK32.K32KillerPodVisionController.OnRep_HasVisionFromKillerPod
	// void OnRep_HasVisionFromKillerPod();                                                                                  // [0x5ce2f70] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5ce2e60] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.OnKillerLocallyObservedChanged
	// void OnKillerLocallyObservedChanged(bool isKillerLocallyObserved);                                                    // [0x5ce2cb0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.OnInteractionStarted
	// void OnInteractionStarted(class UInteractionDefinition* Interaction);                                                 // [0x5ce2b70] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.OnControlledPodUnacquiredFromPool
	// void OnControlledPodUnacquiredFromPool(bool IsAcquired);                                                              // [0x5ce2ae0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.Multicast_SetLocationAndRotation
	// void Multicast_SetLocationAndRotation(FVector Location);                                                              // [0x5ce2900] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK32.K32KillerPodVisionController.Multicast_SetKillerCollisionDisabledForSurvivors
	// void Multicast_SetKillerCollisionDisabledForSurvivors(bool IsDisabled);                                               // [0x57e12a0] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.Multicast_SetCameraOrientation
	// void Multicast_SetCameraOrientation(FRotator NewOrientation);                                                         // [0x5ce2870] Final|Net|Native|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK32.K32KillerPodVisionController.Multicast_OnControlledPodDisabledChanged
	// void Multicast_OnControlledPodDisabledChanged(bool IsDisabled);                                                       // [0x57e1330] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.Cosmetic_Local_OnTakingControlOfPod
	// void Cosmetic_Local_OnTakingControlOfPod();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPodVisionController.Cosmetic_Local_OnReleasingControlOfPod
	// void Cosmetic_Local_OnReleasingControlOfPod();                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPodVisionController.Cosmetic_Local_OnCurrentPodDisabledChanged
	// void Cosmetic_Local_OnCurrentPodDisabledChanged(bool IsDisabled);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPodVisionController.Authority_OnControlledPodDisabledChanged
	// void Authority_OnControlledPodDisabledChanged(bool IsDisabled);                                                       // [0x5ce25f0] Final|Native|Private 
	// Function /Script/TheK32.K32KillerPodVisionController.Authority_OnCollisionDisableTimerComplete
	// void Authority_OnCollisionDisableTimerComplete();                                                                     // [0x5ce25d0] Final|Native|Private 
};

/// Class /Script/TheK32.K32KillerPodVisionLockOnComponent
/// Size: 0x0248 (0x0000B8 - 0x000300)
class UK32KillerPodVisionLockOnComponent : public UActorComponent
{ 
public:
	float                                              _lineOfSightTraceSphereSize;                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _lockOnScreenCoveragePercentageY;                           // 0x00C0   (0x0028)  
	FDBDTunableRowHandle                               _autoDetectSurvivorRange;                                   // 0x00E8   (0x0028)  
	FDBDTunableRowHandle                               _lockOnRange;                                               // 0x0110   (0x0028)  
	FDBDTunableRowHandle                               _lingerTime;                                                // 0x0138   (0x0028)  
	FDBDTunableRowHandle                               _teleportLockOnTime;                                        // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _assimilationLockOnTime;                                    // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _cooldownTime;                                              // 0x01B0   (0x0028)  
	FDBDTunableRowHandle                               _antiCampLockOnRateMultiplier;                              // 0x01D8   (0x0028)  
	FName                                              _survivorProjectileTargetSocketName;                        // 0x0200   (0x000C)  
	FName                                              _traceProfile;                                              // 0x020C   (0x000C)  
	float                                              _feetOffsetMultiplier;                                      // 0x0218   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x021C   (0x0004)  MISSED
	class AK32Power*                                   _power;                                                     // 0x0220   (0x0008)  
	unsigned char                                      UnknownData02_6[0xD8];                                      // 0x0228   (0x00D8)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Server_SetSurvivorBeingLockedOn
	// void Server_SetSurvivorBeingLockedOn(class ACamperPlayer* TargetSurvivor);                                            // [0x507e2f0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Server_LaunchAssimilationProjectile
	// void Server_LaunchAssimilationProjectile(class ACamperPlayer* TargetSurvivor, class AK32KillerPod* currentPod);       // [0x58cff00] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Multicast_ShootPodProjectileAtSurvivor
	// void Multicast_ShootPodProjectileAtSurvivor(class AK32KillerPod* originKillerPod, class ACamperPlayer* TargetSurvivor); // [0x4db2940] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_ShootPodProjectileAtSurvivor
	// void Cosmetic_ShootPodProjectileAtSurvivor(class AK32KillerPod* currentPod, class ACamperPlayer* TargetSurvivor);     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_Local_OnCooldownStarted
	// void Cosmetic_Local_OnCooldownStarted();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_Local_OnCooldownEnded
	// void Cosmetic_Local_OnCooldownEnded();                                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerPodVisionLockOnComponent.Cosmetic_Local_IsChargingChanged
	// void Cosmetic_Local_IsChargingChanged(bool IsCharging);                                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32KillerProjectileSpawnChargeableInteractionDefinition
/// Size: 0x0120 (0x000790 - 0x0008B0)
class UK32KillerProjectileSpawnChargeableInteractionDefinition : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _reloadTime;                                                // 0x0788   (0x0028)  
	FDBDTunableRowHandle                               _secondsToCharge;                                           // 0x07B0   (0x0028)  
	FDBDTunableRowHandle                               _dechargeRate;                                              // 0x07D8   (0x0028)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0800   (0x00B0)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerProjectileSpawnChargeableInteractionDefinition.Cosmetic_OnPodShot
	// void Cosmetic_OnPodShot();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32KillerToPodVisionInteractionDefinition
/// Size: 0x0040 (0x000650 - 0x000690)
class UK32KillerToPodVisionInteractionDefinition : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0650   (0x0040)  MISSED
};

/// Class /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition
/// Size: 0x02C0 (0x000650 - 0x000910)
class UK32KillerToSurvivorTeleportInteractionDefinition : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _teleportDuration;                                          // 0x0648   (0x0028)  
	FDBDTunableRowHandle                               _wakeUpTime;                                                // 0x0670   (0x0028)  
	FDBDTunableRowHandle                               _killerCollisionIgnoredLingerTime;                          // 0x0698   (0x0028)  
	FDBDTunableRowHandle                               _teleportDurationExtensionThirdPersonAntiCamp;              // 0x06C0   (0x0028)  
	FTunableStat                                       _overclockDuration;                                         // 0x06E8   (0x0080)  
	FTunableStat                                       _overheatDuration;                                          // 0x0768   (0x0080)  
	class UClass*                                      _overlockStatusEffect;                                      // 0x07E8   (0x0008)  
	class UClass*                                      _overheatStatusEffect;                                      // 0x07F0   (0x0008)  
	float                                              _killerSize;                                                // 0x07F8   (0x0004)  
	float                                              _secondsOfOverclockPerAssimilatedSurvivor;                  // 0x07FC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x110];                                     // 0x0800   (0x0110)  MISSED


	/// Functions
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Server_SetTeleportTarget
	// void Server_SetTeleportTarget(class ACamperPlayer* Survivor, class AK32KillerPod* initiatedPod);                      // [0x5ce31d0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.OnTeleportationComplete
	// void OnTeleportationComplete(class ADBDPlayer* Player);                                                               // [0x5ce2f90] Final|Native|Private 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5ce2f30] Final|Native|Private 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.OnKillerCollisionIngoreLingerComplete
	// void OnKillerCollisionIngoreLingerComplete(class ADBDPlayer* Player);                                                 // [0x5ce2c20] Final|Native|Private 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_SetTeleportTarget
	// void Multicast_SetTeleportTarget(class ACamperPlayer* Survivor, FVector teleportEndLocation, FVector teleportStartLocation, class AK32KillerPod* initiatedPod); // [0x5ce2980] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_OnTeleportStarted
	// void Multicast_OnTeleportStarted(class ADBDPlayer* Player, FVector teleportStartLocation, FVector teleportEndLocation); // [0x5ce2760] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_OnTeleportEnded
	// void Multicast_OnTeleportEnded(class ADBDPlayer* Player);                                                             // [0x50ae490] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Multicast_DestroyPallet
	// void Multicast_DestroyPallet(class APallet* Pallet);                                                                  // [0x5087b00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_OnTeleportStart
	// void Cosmetic_OnTeleportStart(FVector& teleportEndLocation, FVector& teleportStartLocation);                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_OnTeleportEnd
	// void Cosmetic_OnTeleportEnd();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_EnableTeleportVignette
	// void Cosmetic_EnableTeleportVignette(class ASlasherPlayer* killer);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32KillerToSurvivorTeleportInteractionDefinition.Cosmetic_DisableTeleportVignette
	// void Cosmetic_DisableTeleportVignette(class ASlasherPlayer* killer);                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32OverclockStatusEffectBase
/// Size: 0x00A0 (0x000350 - 0x0003F0)
class UK32OverclockStatusEffectBase : public UStatusEffect
{ 
public:
	class UClass*                                      _overheatStatusEffect;                                      // 0x0350   (0x0008)  
	FTunableStat                                       _overheatDuration;                                          // 0x0358   (0x0080)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x03D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK32.K32OverclockStatusEffectBase.Multicast_DestroyPallet
	// void Multicast_DestroyPallet(class APallet* Pallet, class ASlasherPlayer* killer);                                    // [0x50103c0] Net|NetReliableNative|Event|NetMulticast|Protected|Const 
};

/// Class /Script/TheK32.K32OverheatStatusEffectBase
/// Size: 0x0000 (0x000350 - 0x000350)
class UK32OverheatStatusEffectBase : public UStatusEffect
{ 
public:
};

/// Class /Script/TheK32.K32P01
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UK32P01 : public UPerk
{ 
public:
	class UClass*                                      _K32P01ExhaustedStatusEffect;                               // 0x03C8   (0x0008)  
	float                                              _exhaustionDuration;                                        // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK32.K32P01.GetExhaustionDurationAtLevel
	// float GetExhaustionDurationAtLevel();                                                                                 // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK32.K32P02
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UK32P02 : public UPerk
{ 
public:
	class UClass*                                      _hinderedStatusEffectClass;                                 // 0x03C8   (0x0008)  
	float                                              _perkRange;                                                 // 0x03D0   (0x000C)  
	float                                              _hinderedEffectDuration;                                    // 0x03DC   (0x000C)  
	float                                              _perkCooldown;                                              // 0x03E8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x03F4   (0x0014)  MISSED


	/// Functions
	// Function /Script/TheK32.K32P02.GetPerkRangeAtLevel
	// float GetPerkRangeAtLevel();                                                                                          // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32P02.GetPerkCooldownAtLevel
	// float GetPerkCooldownAtLevel();                                                                                       // [0x500a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32P02.GetHinderedEffectDurationAtLevel
	// float GetHinderedEffectDurationAtLevel();                                                                             // [0x50230e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK32.K32P03
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UK32P03 : public UPerk
{ 
public:
	class UClass*                                      _undetectableStatusEffect;                                  // 0x03C8   (0x0008)  
	class UClass*                                      _hasteStatusEffect;                                         // 0x03D0   (0x0008)  
	float                                              _statusEffectDuration;                                      // 0x03D8   (0x000C)  
	int32_t                                            _generatorsDamagedRequired;                                 // 0x03E4   (0x000C)  
	float                                              _hastePercent;                                              // 0x03F0   (0x0004)  
	float                                              _generatorsDamaged;                                         // 0x03F4   (0x0004)  
	class AGenerator*                                  _compromisedGenerator;                                      // 0x03F8   (0x0008)  
	class AGenerator*                                  _lastCompromisedGenerator;                                  // 0x0400   (0x0008)  


	/// Functions
	// Function /Script/TheK32.K32P03.OnRep_CompromisedGenerator
	// void OnRep_CompromisedGenerator();                                                                                    // [0x5ce6a10] Final|Native|Private 
	// Function /Script/TheK32.K32P03.GetStatusEffectDurationAtLevel
	// float GetStatusEffectDurationAtLevel();                                                                               // [0x500f7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32P03.GetHastePercent
	// float GetHastePercent();                                                                                              // [0x5ce6530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.K32P03.Cosmetic_OnTriggerCompromiseVFX
	// void Cosmetic_OnTriggerCompromiseVFX(class AGenerator* compromisedGenerator);                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK32.K32P03.Cosmetic_OnCompromiseCompletedVFX
	// void Cosmetic_OnCompromiseCompletedVFX(class AGenerator* compromisedGenerator);                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK32.K32P03IconStrategy
/// Size: 0x0000 (0x000038 - 0x000038)
class UK32P03IconStrategy : public UBasePerkIconStrategy
{ 
public:
};

/// Class /Script/TheK32.K32PodDangerPredictionComponent
/// Size: 0x0030 (0x0000D0 - 0x000100)
class UK32PodDangerPredictionComponent : public UDBDDangerPredictionComponent
{ 
public:
	float                                              _podMaxRange;                                               // 0x00D0   (0x0004)  
	float                                              _podRangeMargin;                                            // 0x00D4   (0x0004)  
	float                                              _dangerAreaCostMultiplierForIdlePod;                        // 0x00D8   (0x0004)  
	float                                              _dangerAreaCostMultiplierForActivePod;                      // 0x00DC   (0x0004)  
	float                                              _activePodWeightPenalty;                                    // 0x00E0   (0x0004)  
	float                                              _idlePodWeightPenalty;                                      // 0x00E4   (0x0004)  
	class AK32KillerPod*                               _pod;                                                       // 0x00E8   (0x0008)  
	TArray<class AActor*>                              _allInGamePlayers;                                          // 0x00F0   (0x0010)  
};

/// Class /Script/TheK32.K32PodToKillerVisionInteractionDefinition
/// Size: 0x0060 (0x000650 - 0x0006B0)
class UK32PodToKillerVisionInteractionDefinition : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _regularWakeupTime;                                         // 0x0648   (0x0028)  
	FDBDTunableRowHandle                               _antiCampWakeupMultiplier;                                  // 0x0670   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0698   (0x0018)  MISSED
};

/// Class /Script/TheK32.K32PodToPodVisionInteractionDefinition
/// Size: 0x0040 (0x000650 - 0x000690)
class UK32PodToPodVisionInteractionDefinition : public UInteractionDefinition
{ 
public:
	EPodVisionTransferDestination                      _podVisionTransferDestination;                              // 0x0648   (0x0001)  
	unsigned char                                      UnknownData00_6[0x47];                                      // 0x0649   (0x0047)  MISSED
};

/// Class /Script/TheK32.K32Power
/// Size: 0x0178 (0x0004C8 - 0x000640)
class AK32Power : public ACollectable
{ 
public:
	class UInteractor*                                 _interactor;                                                // 0x04C8   (0x0008)  
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                         // 0x04D0   (0x0008)  
	class UK32PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;         // 0x04D8   (0x0008)  
	class UK32PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;               // 0x04E0   (0x0008)  
	class UK32AntiCampZoneIdentifierComponent*         _antiCampZoneIdentifierComponent;                           // 0x04E8   (0x0008)  
	class UClass*                                      _killerPodVisionControllerClass;                            // 0x04F0   (0x0008)  
	class UClass*                                      _killerPodTargetIndicatorClass;                             // 0x04F8   (0x0008)  
	class UClass*                                      _killerPodSpawningIndicatorClass;                           // 0x0500   (0x0008)  
	class UClass*                                      _blindnessProtectionStatusEffect;                           // 0x0508   (0x0008)  
	class UClass*                                      _undetectableWhileInPodsStatusEffect;                       // 0x0510   (0x0008)  
	class UClass*                                      _overclockStatusEffectClass;                                // 0x0518   (0x0008)  
	FDBDTunableRowHandle                               _addon16RecentlyTeleportedTime;                             // 0x0520   (0x0028)  
	class AK32KillerPodVisionController*               _killerPodVisionController;                                 // 0x0548   (0x0008)  
	class AK32KillerPodTargetIndicator*                _killerPodTargetIndicator;                                  // 0x0550   (0x0008)  
	class AK32KillerPodSpawningIndicator*              _killerPodSpawningIndicator;                                // 0x0558   (0x0008)  
	class UAimingCrosshairComponent*                   _aimingCrosshairComponent;                                  // 0x0560   (0x0008)  
	class UChargeableComponent*                        _killerProjectileSpawnChargeableComponent;                  // 0x0568   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _empPool;                                                   // 0x0570   (0x0008)  
	class UK32EmpScoreComponent*                       _empScoreComponent;                                         // 0x0578   (0x0008)  
	unsigned char                                      UnknownData00_5[0x70];                                      // 0x0580   (0x0070)  MISSED
	class ACamperPlayer*                               _recentlyTeleportedToSurvivor;                              // 0x05F0   (0x0008)  
	FDBDTunableRowHandle                               _maxTrackedTimeSinceTeleportToSurvivor;                     // 0x05F8   (0x0028)  
	FGameplayTagContainer                              _survivorTagsPreventingPower;                               // 0x0620   (0x0020)  
};

/// Class /Script/TheK32.K32PowerChargePresentationItemProgressComponent
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class UK32PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00C0   (0x0028)  MISSED
};

/// Class /Script/TheK32.K32PowerChargePresentationPowerFadeComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK32PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Struct /Script/TheK32.K32SurvivorStatus
/// Size: 0x0078 (0x000000 - 0x000078)
struct FK32SurvivorStatus
{ 
	class ACamperPlayer*                               OwningSurvivor;                                             // 0x0000   (0x0008)  
	bool                                               IsAssimilated;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FVector>                                    RecentLocations;                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,5143) /* TMap<ACamperPlayer*, float> */ __um(Authority_CrossAssimilationStartedTime);         // 0x0020   (0x0050)  
	bool                                               Authority_IsBeingCrossAssimilated;                          // 0x0070   (0x0001)  
	bool                                               Authority_CanBeAffectedByPower;                             // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              Authority_LastTimeCanBeAffectedByPowerEnabled;              // 0x0074   (0x0004)  
};

/// Class /Script/TheK32.K32PowerStatusHandlerComponent
/// Size: 0x0268 (0x0000B8 - 0x000320)
class UK32PowerStatusHandlerComponent : public UActorComponent
{ 
public:
	float                                              _lineOfSightTraceSphereSize;                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FTunableStat                                       _crossAssimilationRange;                                    // 0x00C0   (0x0080)  
	FTunableStat                                       _crossAssimilationDelay;                                    // 0x0140   (0x0080)  
	FDBDTunableRowHandle                               _affectedByPowerCrossAssimilationBuffer;                    // 0x01C0   (0x0028)  
	FName                                              _survivorProjectileTargetSocketName;                        // 0x01E8   (0x000C)  
	FName                                              _traceProfile;                                              // 0x01F4   (0x000C)  
	int32_t                                            _maxOldSurvivorLocations;                                   // 0x0200   (0x0004)  
	float                                              _survivorLocationOverlapAvoidanceDistance;                  // 0x0204   (0x0004)  
	FDBDTunableRowHandle                               _recentLocationDistanceDelta;                               // 0x0208   (0x0028)  
	FDBDTunableRowHandle                               _assimilationCooldownTime;                                  // 0x0230   (0x0028)  
	TArray<FK32SurvivorStatus>                         _survivorStatusList;                                        // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0268   (0x0008)  MISSED
	SDK_UNDEFINED(80,5144) /* TMap<ACamperPlayer*, FFastTimer> */ __um(_assimilationCooldownTimers);               // 0x0270   (0x0050)  
	TArray<FGameplayTag>                               _survivorTagsToPreventPositionStorage;                      // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x02D0   (0x0050)  MISSED


	/// Functions
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.OnRep_SurvivorStatusList
	// void OnRep_SurvivorStatusList(TArray<FK32SurvivorStatus> oldSurvivorStatus);                                          // [0x5ce6a30] Final|Native|Private 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5ce67d0] Final|Native|Private 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Multicast_SurvivorScream
	// void Multicast_SurvivorScream(class ACamperPlayer* Survivor);                                                         // [0x57e0340] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Multicast_OnInRangeOfAssimilationSpreadingSurvivor
	// void Multicast_OnInRangeOfAssimilationSpreadingSurvivor(class ACamperPlayer* originatingSurvivor, class ACamperPlayer* TargetSurvivor); // [0x5b9cd30] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Multicast_OnAssimilationSpreadingToSurvivor
	// void Multicast_OnAssimilationSpreadingToSurvivor(class ACamperPlayer* originatingSurvivor, class ACamperPlayer* TargetSurvivor); // [0x4db2940] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Cosmetic_OnInRangeOfAssimilationSpreadingSurvivor
	// void Cosmetic_OnInRangeOfAssimilationSpreadingSurvivor(class ACamperPlayer* originatingSurvivor, class ACamperPlayer* TargetSurvivor); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Cosmetic_OnAssimilationSpreadingToSurvivor
	// void Cosmetic_OnAssimilationSpreadingToSurvivor(class ACamperPlayer* originatingSurvivor, class ACamperPlayer* TargetSurvivor); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Cosmetic_OnAssimilationChanged
	// void Cosmetic_OnAssimilationChanged(class ACamperPlayer* Survivor, bool IsAssimilated);                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.BP_SurvivorScream
	// void BP_SurvivorScream(class ACamperPlayer* Survivor);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32PowerStatusHandlerComponent.Authority_OnSurvivorAdded
	// void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);                                                        // [0x5ce6370] Final|Native|Private 
};

/// Class /Script/TheK32.K32SurvivorAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class UK32SurvivorAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isAssimilated;                                             // 0x0548   (0x0001)  
	bool                                               _isOwnerBeingCarried;                                       // 0x0549   (0x0001)  
	bool                                               _isSpeedingUpEmpGeneration;                                 // 0x054A   (0x0001)  
	bool                                               _isRetrievingItem;                                          // 0x054B   (0x0001)  
	bool                                               _isUsingEmp;                                                // 0x054C   (0x0001)  
	bool                                               _hasBeenAssimilatedByAnotherSurvivor;                       // 0x054D   (0x0001)  
	bool                                               _hasBeenAssimilatedByKiller;                                // 0x054E   (0x0001)  
	bool                                               _hasBeenCleansedFromAssimilation;                           // 0x054F   (0x0001)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0550   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK32.K32SurvivorAnimInstance.ResetHasBeenCleansedFromAssimilation
	// void ResetHasBeenCleansedFromAssimilation();                                                                          // [0x5ce6b70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK32.K32SurvivorAnimInstance.ResetHasBeenAssimilatedByKiller
	// void ResetHasBeenAssimilatedByKiller();                                                                               // [0x5ce6b50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK32.K32SurvivorAnimInstance.ResetHasBeenAssimilatedByAnotherSurvivor
	// void ResetHasBeenAssimilatedByAnotherSurvivor();                                                                      // [0x5ce6b30] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheK32.K32SurvivorCosmeticHelperActor
/// Size: 0x0048 (0x000270 - 0x0002B8)
class AK32SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	FName                                              _noseJointName;                                             // 0x0270   (0x000C)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x027C   (0x003C)  MISSED


	/// Functions
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.OnSurvivorDisguisedOrUndisguised
	// void OnSurvivorDisguisedOrUndisguised(bool isDisguised);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.OnKillerNoLongerLocksOnToSurvivor
	// void OnKillerNoLongerLocksOnToSurvivor(FGameplayTag gameEventType, FGameEventData& GameEventData);                    // [0x5ce6900] Final|Native|Private|HasOutParms 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.OnKillerLocksOnToSurvivor
	// void OnKillerLocksOnToSurvivor(FGameplayTag gameEventType, FGameEventData& GameEventData);                            // [0x5ce67f0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.GetNoseLocation
	// FVector GetNoseLocation();                                                                                            // [0x5ce65e0] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnTeleportStart
	// void Cosmetic_OnTeleportStart(FVector& teleportStartLocation, FVector& teleportEndLocation);                          // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnKillerNoLongerLocksOnToSurvivor
	// void Cosmetic_OnKillerNoLongerLocksOnToSurvivor();                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnKillerLocksOnToSurvivor
	// void Cosmetic_OnKillerLocksOnToSurvivor(bool isTargetAssimilated);                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK32.K32SurvivorCosmeticHelperActor.Cosmetic_OnIsEffectiveEmpInRangeChanged
	// void Cosmetic_OnIsEffectiveEmpInRangeChanged(bool isEffectiveEmpInRange);                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK32.K32SurvivorStatusComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK32SurvivorStatusComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/TheK32.K32Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK32Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK32.K32Utilities.IsSurvivorAbleToBeAffectedByPower
	// bool IsSurvivorAbleToBeAffectedByPower(class ACamperPlayer* Survivor, class ASlasherPlayer* killer);                  // [0x5ce6700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK32.K32Utilities.IsPodOutlineAndIndicatorVisible
	// bool IsPodOutlineAndIndicatorVisible(class ASlasherPlayer* killer);                                                   // [0x5ce6670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK32.K32Utilities.GetK32Power
	// class AK32Power* GetK32Power(class UObject* WorldContextObject);                                                      // [0x5ce6550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK32.K32Utilities.DoesEmpReach
	// bool DoesEmpReach(FVector& launchPosition, FVector& targetLocation, float rangeSquared);                              // [0x5ce6400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK32.S37P01
/// Size: 0x0058 (0x0003C8 - 0x000420)
class US37P01 : public UPerk
{ 
public:
	float                                              _killerRevealedTime;                                        // 0x03C8   (0x000C)  
	float                                              _chaseLingeringTimer;                                       // 0x03D4   (0x000C)  
	class UClass*                                      _revealKillerStatusEffectClass;                             // 0x03E0   (0x0008)  
	class UClass*                                      _revealGeneratorStatusEffectClass;                          // 0x03E8   (0x0008)  
	class UStatusEffect*                               _revealGeneratorStatusEffect;                               // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x03F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK32.S37P01.GetKillerRevealedTimeAtLevel
	// float GetKillerRevealedTimeAtLevel();                                                                                 // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.S37P01.GetChaseLingeringTimerAtLevel
	// float GetChaseLingeringTimerAtLevel();                                                                                // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK32.S37P02
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class US37P02 : public UPerk
{ 
public:
	class UClass*                                      _enduranceStatusEffect;                                     // 0x03C8   (0x0008)  
	class UClass*                                      _hasteStatusEffect;                                         // 0x03D0   (0x0008)  
	float                                              _enduranceEffectTimer;                                      // 0x03D8   (0x000C)  
	float                                              _hasteSpeedAmount;                                          // 0x03E4   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK32.S37P02.GetHasteSpeedAmountAtLevel
	// float GetHasteSpeedAmountAtLevel();                                                                                   // [0x500a890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.S37P02.GetEnduranceEffectTimerAtLevel
	// float GetEnduranceEffectTimerAtLevel();                                                                               // [0x500f7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK32.S37P03
/// Size: 0x0040 (0x0003C8 - 0x000408)
class US37P03 : public UPerk
{ 
public:
	int32_t                                            _maxTokens;                                                 // 0x03C8   (0x0004)  
	int32_t                                            _repairSpeedDebuffTime;                                     // 0x03CC   (0x000C)  
	float                                              _repairSpeedDebuffAmount;                                   // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _allowSearchChestForToolboxEffectClass;                     // 0x03E0   (0x0008)  
	class UClass*                                      _repairSpeedDebuffEffectClass;                              // 0x03E8   (0x0008)  
	class UStatusEffect*                               _allowSearchChestForToolboxEffect;                          // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK32.S37P03.GetRepairSpeedDebuffTimeAtLevel
	// float GetRepairSpeedDebuffTimeAtLevel();                                                                              // [0x5ce6620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK32.S37P03.GetRepairSpeedDebuffAmount
	// float GetRepairSpeedDebuffAmount();                                                                                   // [0x500f6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TheK32.K32BaseProjectilePayload
/// Size: 0x0080 (0x000000 - 0x000080)
struct FK32BaseProjectilePayload
{ 
	FVector                                            StartLocationWorldSpace;                                    // 0x0000   (0x000C)  
	bool                                               IsMovingToActor;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVector                                            WorldPositionTarget;                                        // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class AActor*                                      TargetActor;                                                // 0x0020   (0x0008)  
	FName                                              TargetSocket;                                               // 0x0028   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4C];                                      // 0x0034   (0x004C)  MISSED
};

/// Struct /Script/TheK32.K32KillerPodSpawningInputData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FK32KillerPodSpawningInputData
{ 
	FVector                                            KillerLocation;                                             // 0x0000   (0x000C)  
	FVector                                            IndicatorLocation;                                          // 0x000C   (0x000C)  
	FVector                                            CameraDirection;                                            // 0x0018   (0x000C)  
};

/// Struct /Script/TheK32.K32KillerPodSpawnData
/// Size: 0x0054 (0x000000 - 0x000054)
struct FK32KillerPodSpawnData
{ 
	FK32KillerPodSpawningInputData                     InputData;                                                  // 0x0000   (0x0024)  
	FVector                                            CollisionPoint;                                             // 0x0024   (0x000C)  
	FVector                                            SpawnLocation;                                              // 0x0030   (0x000C)  
	FRotator                                           SpawnForwardRotation;                                       // 0x003C   (0x000C)  
	FVector                                            SurfaceNormal;                                              // 0x0048   (0x000C)  
};

/// Struct /Script/TheK32.K32KillerPodSpawningData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FK32KillerPodSpawningData
{ 
	FVector                                            CollisionPoint;                                             // 0x0000   (0x000C)  
	FVector                                            SpawnLocation;                                              // 0x000C   (0x000C)  
	FRotator                                           SpawnForwardRotation;                                       // 0x0018   (0x000C)  
	FVector                                            SurfaceNormal;                                              // 0x0024   (0x000C)  
	class AK32KillerPod*                               PodToDestroy;                                               // 0x0030   (0x0008)  
	class ACamperPlayer*                               TargetSurvivor;                                             // 0x0038   (0x0008)  
};

