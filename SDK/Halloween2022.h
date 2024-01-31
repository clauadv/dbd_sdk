
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Archives
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/Halloween2022.EVoidEnergyTier
/// Size: 0x06
enum class EVoidEnergyTier : uint8_t
{
	EVoidEnergyTier__None                                                            = 0,
	EVoidEnergyTier__Small                                                           = 1,
	EVoidEnergyTier__Medium                                                          = 2,
	EVoidEnergyTier__Large                                                           = 3,
	EVoidEnergyTier__Count                                                           = 4,
	EVoidEnergyTier__EVoidEnergyTier_MAX                                             = 5
};

/// Enum /Script/Halloween2022.EVoidEnergyChangeReason
/// Size: 0x07
enum class EVoidEnergyChangeReason : uint8_t
{
	EVoidEnergyChangeReason__None                                                    = 0,
	EVoidEnergyChangeReason__AddEnergy                                               = 1,
	EVoidEnergyChangeReason__ForceLoseEnergy                                         = 2,
	EVoidEnergyChangeReason__SpendEnergyOnGameEnd                                    = 3,
	EVoidEnergyChangeReason__GiveEnergyToHaunt                                       = 4,
	EVoidEnergyChangeReason__GiveEnergyToRift                                        = 5,
	EVoidEnergyChangeReason__EVoidEnergyChangeReason_MAX                             = 6
};

/// Enum /Script/Halloween2022.EOrbTravelState
/// Size: 0x05
enum class EOrbTravelState : uint8_t
{
	EOrbTravelState__None                                                            = 0,
	EOrbTravelState__MoveToHover                                                     = 1,
	EOrbTravelState__WaitInHover                                                     = 2,
	EOrbTravelState__MoveToFinalDestination                                          = 3,
	EOrbTravelState__EOrbTravelState_MAX                                             = 4
};

/// Enum /Script/Halloween2022.EVoidEnergyType
/// Size: 0x11
enum class EVoidEnergyType : uint8_t
{
	EVoidEnergyType__None                                                            = 0,
	EVoidEnergyType__PalletStun                                                      = 1,
	EVoidEnergyType__WiggleStun                                                      = 2,
	EVoidEnergyType__LockerStun                                                      = 3,
	EVoidEnergyType__FlashlightStun                                                  = 4,
	EVoidEnergyType__GeneratorProgress                                               = 5,
	EVoidEnergyType__MeatHook                                                        = 6,
	EVoidEnergyType__Pumpkin                                                         = 7,
	EVoidEnergyType__DownSurvivor                                                    = 8,
	EVoidEnergyType__FloatingVoidEnergyOrbs                                          = 9,
	EVoidEnergyType__EVoidEnergyType_MAX                                             = 10
};

/// Class /Script/Halloween2022.VoidEnergyChangeQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UVoidEnergyChangeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/Halloween2022.VoidEnergyChangeQEEvaluator.ListenToOnComponentAddedEvent
	// void ListenToOnComponentAddedEvent();                                                                                 // [0x59ab610] Native|Protected     
};

/// Class /Script/Halloween2022.DepositEnergyInMatchQEEvaluator
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UDepositEnergyInMatchQEEvaluator : public UVoidEnergyChangeQEEvaluator
{ 
public:
};

/// Class /Script/Halloween2022.DepositVoidEnergyTierQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UDepositVoidEnergyTierQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Halloween2022.DepositVoidEnergyTierQEEvaluator.OnVoidEnergyDeposited
	// void OnVoidEnergyDeposited(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x59a8810] Final|Native|Public|HasOutParms 
};

/// Class /Script/Halloween2022.HalloweenCentrifugeAnimInstance
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UHalloweenCentrifugeAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isActive;                                                  // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              _blendSpaceValue;                                           // 0x02C4   (0x0004)  
	float                                              _timeToChangeBlendValue;                                    // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x34];                                      // 0x02CC   (0x0034)  MISSED


	/// Functions
	// Function /Script/Halloween2022.HalloweenCentrifugeAnimInstance.SetDesiredBlendValue
	// void SetDesiredBlendValue(float blendValue);                                                                          // [0x59a92d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Halloween2022.HalloweenCentrifugeAnimInstance.OnEnergySpawned
	// void OnEnergySpawned(int32_t previousEnergy, int32_t currentEnergy);                                                  // [0x59a9200] Final|Native|Protected 
	// Function /Script/Halloween2022.HalloweenCentrifugeAnimInstance.OnBlendValueChanged
	// void OnBlendValueChanged(float blendValue);                                                                           // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2022.GeneratorCentrifugeAnimInstance
/// Size: 0x0010 (0x000300 - 0x000310)
class UGeneratorCentrifugeAnimInstance : public UHalloweenCentrifugeAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0300   (0x0010)  MISSED


	/// Functions
	// Function /Script/Halloween2022.GeneratorCentrifugeAnimInstance.StopRepairing
	// void StopRepairing(FGameplayTag gameEventType, FGameEventData& GameEventData);                                        // [0x59a8e20] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.GeneratorCentrifugeAnimInstance.StartRepairing
	// void StartRepairing(FGameplayTag gameEventType, FGameEventData& GameEventData);                                       // [0x59a8d10] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.GeneratorCentrifugeAnimInstance.OnStopRepair
	// void OnStopRepair(class AGenerator* Generator);                                                                       // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.GeneratorCentrifugeAnimInstance.OnStartRepair
	// void OnStartRepair(class AGenerator* Generator);                                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2022.MeatHookCentrifugeAnimInstance
/// Size: 0x0040 (0x000300 - 0x000340)
class UMeatHookCentrifugeAnimInstance : public UHalloweenCentrifugeAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0300   (0x0030)  MISSED
	float                                              _animationLength;                                           // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0334   (0x000C)  MISSED


	/// Functions
	// Function /Script/Halloween2022.MeatHookCentrifugeAnimInstance.PlayerNoLongerOnHook
	// void PlayerNoLongerOnHook(FGameplayTag gameEventType, FGameEventData& GameEventData);                                 // [0x59a9820] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.MeatHookCentrifugeAnimInstance.PlayerHooked
	// void PlayerHooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                         // [0x59a9710] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerNoLongerOnHook
	// void OnPlayerNoLongerOnHook(class AMeatHook* MeatHook);                                                               // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerHooked
	// void OnPlayerHooked(class AMeatHook* MeatHook);                                                                       // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2022.PlayerVoidEnergy
/// Size: 0x0220 (0x0000B8 - 0x0002D8)
class UPlayerVoidEnergy : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x00B8   (0x0060)  MISSED
	EVoidEnergyChangeReason                            _reasonLastVoidEnergyChangeOccurred;                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	int32_t                                            _currentVoidEnergy;                                         // 0x0120   (0x0004)  
	int32_t                                            _totalVoidEnergySpent;                                      // 0x0124   (0x0004)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x0128   (0x0028)  MISSED
	TArray<FDBDTunableRowHandle>                       _voidEnergyLevelsToStartNextTier;                           // 0x0150   (0x0010)  
	FDBDTunableRowHandle                               _maxEnergyOnPlayerAllowed;                                  // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _amountLostOnDownAsSurvivor;                                // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _amountGainedOnDownAsKiller;                                // 0x01B0   (0x0028)  
	FDBDTunableRowHandle                               _amountGainedOnStunAsSurvivor;                              // 0x01D8   (0x0028)  
	FDBDTunableRowHandle                               _amountLostOnStunAsKiller;                                  // 0x0200   (0x0028)  
	TArray<FDBDTunableRowHandle>                       _hasteValueTiers;                                           // 0x0228   (0x0010)  
	FDBDTunableRowHandle                               _timeHasteEffectLasts;                                      // 0x0238   (0x0028)  
	class UClass*                                      _hasteStatusEffect;                                         // 0x0260   (0x0008)  
	class UClass*                                      _voidEnergyOrbSpawnerClass;                                 // 0x0268   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0270   (0x0008)  MISSED
	TArray<FGameplayTag>                               _scoreEventTiers;                                           // 0x0278   (0x0010)  
	TArray<FGameplayTag>                               _scoreEventTiersWithoutOffering;                            // 0x0288   (0x0010)  
	unsigned char                                      UnknownData04_6[0x40];                                      // 0x0298   (0x0040)  MISSED


	/// Functions
	// Function /Script/Halloween2022.PlayerVoidEnergy.OnVoidEnergyLost
	// void OnVoidEnergyLost(EVoidEnergyChangeReason changeReason);                                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.PlayerVoidEnergy.OnVoidEnergyGained
	// void OnVoidEnergyGained();                                                                                            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.PlayerVoidEnergy.OnRep_TotalVoidEnergySpent
	// void OnRep_TotalVoidEnergySpent(int32_t previousTotalVoidEnergySpent);                                                // [0x59aa280] Final|Native|Private 
	// Function /Script/Halloween2022.PlayerVoidEnergy.OnRep_CurrentVoidEnergy
	// void OnRep_CurrentVoidEnergy(int32_t previousEnergyCount);                                                            // [0x59aa1f0] Final|Native|Private 
	// Function /Script/Halloween2022.PlayerVoidEnergy.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(class ADBDPlayer* Player);                                                              // [0x59aa160] Final|Native|Private 
	// Function /Script/Halloween2022.PlayerVoidEnergy.OnLocallyControlledChanged
	// void OnLocallyControlledChanged(bool IsLocallyControlled);                                                            // [0x59aa0d0] Final|Native|Private 
	// Function /Script/Halloween2022.PlayerVoidEnergy.Multicast_ShowVoidEnergyChanges
	// void Multicast_ShowVoidEnergyChanges(int32_t previousVoidEnergyCount, int32_t newVoidEnergyCount);                    // [0x59aa000] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2022.PlayerVoidEnergy.Multicast_AddVoidEnergy
	// void Multicast_AddVoidEnergy(int32_t amountToAdd, EVoidEnergyType VoidEnergyType);                                    // [0x59a9f30] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2022.PlayerVoidEnergy.GetTotalVoidEnergyDeposited
	// int32_t GetTotalVoidEnergyDeposited();                                                                                // [0x59a9f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Halloween2022.PlayerVoidEnergy.GetMaxAmountOfVoidEnergyCanReceive
	// int32_t GetMaxAmountOfVoidEnergyCanReceive();                                                                         // [0x59a9ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyCount
	// int32_t GetCurrentVoidEnergyCount();                                                                                  // [0x59a9ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Halloween2022.UnstableRift
/// Size: 0x0178 (0x000378 - 0x0004F0)
class AUnstableRift : public ASpecialBehaviourInteractable
{ 
public:
	bool                                               _isInitialized;                                             // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0379   (0x0001)  MISSED
	bool                                               _isInteractionAvailable;                                    // 0x037A   (0x0001)  
	bool                                               _isPortalOpened;                                            // 0x037B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	class UUnstableRiftInteraction*                    _unstableRiftInteractionSurvivor;                           // 0x0380   (0x0008)  
	class UUnstableRiftInteraction*                    _unstableRiftInteractionKiller;                             // 0x0388   (0x0008)  
	class UChargeableComponent*                        _unstableRiftInteractionChargeableSurvivor;                 // 0x0390   (0x0008)  
	class UChargeableComponent*                        _unstableRiftInteractionChargeableKiller;                   // 0x0398   (0x0008)  
	class UInteractor*                                 _unstableRiftInteractor;                                    // 0x03A0   (0x0008)  
	class UPrimitiveComponent*                         _unstableRiftInteractionZone;                               // 0x03A8   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x03B0   (0x0008)  
	class UDBDOutlineComponent*                        _teleporterOutlineComponent;                                // 0x03B8   (0x0008)  
	class UUnstableRiftOutlineStrategy*                _outlineStrategy;                                           // 0x03C0   (0x0008)  
	class UUnstableRiftOutlineStrategy*                _teleporterOutlineStrategy;                                 // 0x03C8   (0x0008)  
	class UStaticMeshComponent*                        _unstableRiftMesh;                                          // 0x03D0   (0x0008)  
	class UStaticMeshComponent*                        _teleporterMesh;                                            // 0x03D8   (0x0008)  
	class UUnstableRiftTeleportationComponent*         _unstableRiftTeleportationComponent;                        // 0x03E0   (0x0008)  
	class UNearTrackedActorComponent*                  _nearTrackedActorAudioComponent;                            // 0x03E8   (0x0008)  
	FDBDTunableRowHandle                               _unstableRiftInteractionSecondsToChargeSurvivor;            // 0x03F0   (0x0028)  
	FDBDTunableRowHandle                               _unstableRiftInteractionSecondsToChargeKiller;              // 0x0418   (0x0028)  
	FDBDTunableRowHandle                               _unstableRiftSecondsBeforeTeleportOnSuccess;                // 0x0440   (0x0028)  
	FDBDTunableRowHandle                               _unstableRiftSecondsBeforeTeleportOnFailure;                // 0x0468   (0x0028)  
	FDBDTunableRowHandle                               _offeringDirectionalAudioCueDistance;                       // 0x0490   (0x0028)  
	class UAkAudioEvent*                               _offeringAudioEvent;                                        // 0x04B8   (0x0008)  
	class UNearTrackedActorComponent*                  _nearTrackedActorItemPreventionComponent;                   // 0x04C0   (0x0008)  
	float                                              _rangeToPreventItemDrop;                                    // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	TArray<FGameplayTag>                               _stateTagsToGivePlayersOnItemDropPreventionArea;            // 0x04D0   (0x0010)  
	class USpawnElementTrackerComponent*               _spawnElementTrackerComponent;                              // 0x04E0   (0x0008)  
	float                                              _maxDistanceToFollowPlayer;                                 // 0x04E8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x04EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/Halloween2022.UnstableRift.OnRep_IsInteractionAvailable
	// void OnRep_IsInteractionAvailable();                                                                                  // [0x59aaa70] Final|Native|Private 
	// Function /Script/Halloween2022.UnstableRift.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x59aaa50] Final|Native|Private 
	// Function /Script/Halloween2022.UnstableRift.OnInRangeChanged
	// void OnInRangeChanged(bool isWithinRange, class AActor* trackedActor);                                                // [0x59aa980] Final|Native|Private 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_OnTeleportStart
	// void Cosmetic_OnTeleportStart(bool hadPlayerInteraction);                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_OnTeleportFinished
	// void Cosmetic_OnTeleportFinished();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_OnTeleportDelayStarted
	// void Cosmetic_OnTeleportDelayStarted();                                                                               // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.UnstableRift.Cosmetic_ChangeUnstableVisibility
	// void Cosmetic_ChangeUnstableVisibility(bool IsVisible);                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2022.UnstableRiftInteraction
/// Size: 0x0040 (0x000790 - 0x0007D0)
class UUnstableRiftInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0790   (0x0004)  MISSED
	float                                              _heightOffsetForOrbsHoverPosition;                          // 0x0794   (0x0004)  
	float                                              _heightOffsetForOrbsFinalPosition;                          // 0x0798   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x079C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _maxDepositableVoidEnergy;                                  // 0x07A0   (0x0028)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x07C8   (0x0008)  MISSED
};

/// Class /Script/Halloween2022.UnstableRiftOutlineStrategy
/// Size: 0x0048 (0x000158 - 0x0001A0)
class UUnstableRiftOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _displayColor;                                              // 0x0158   (0x0010)  
	FDBDTunableRowHandle                               _distanceToReveal;                                          // 0x0168   (0x0028)  
	bool                                               _isAuraOfRiftNoTeleporter;                                  // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Class /Script/Halloween2022.UnstableRiftTeleportationComponent
/// Size: 0x0168 (0x0000B8 - 0x000220)
class UUnstableRiftTeleportationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _unstableRiftTeleportDelay;                                 // 0x00D0   (0x0028)  
	FDBDTunableRowHandle                               _teleportationVisualsDelay;                                 // 0x00F8   (0x0028)  
	FDBDTunableRowHandle                               _minDistanceFromOtherUnstableRifts;                         // 0x0120   (0x0028)  
	unsigned char                                      UnknownData01_5[0x90];                                      // 0x0148   (0x0090)  MISSED
	FGameplayTag                                       _elementTag;                                                // 0x01D8   (0x000C)  
	ETileSpawnPointType                                _spawnPointType;                                            // 0x01E4   (0x0001)  
	EGameplayElementType                               _actorSpawnerType;                                          // 0x01E5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x01E6   (0x0002)  MISSED
	TArray<class AUnstableRift*>                       _allUnstableRifts;                                          // 0x01E8   (0x0010)  
	float                                              _capsuleRadius;                                             // 0x01F8   (0x0004)  
	float                                              _capsuleHalfHeight;                                         // 0x01FC   (0x0004)  
	bool                                               _ignoreTouches;                                             // 0x0200   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0201   (0x0001)  MISSED
	bool                                               _isAllowedToTeleport;                                       // 0x0202   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x0203   (0x0005)  MISSED
	TArray<class UClass*>                              _actorsInMapToAvoid;                                        // 0x0208   (0x0010)  
	float                                              _minDistanceFromActorsToAvoid;                              // 0x0218   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x021C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Halloween2022.UnstableRiftTeleportationComponent.OnRep_IsAllowedToTeleport
	// void OnRep_IsAllowedToTeleport();                                                                                     // [0x59ab230] Final|Native|Private 
	// Function /Script/Halloween2022.UnstableRiftTeleportationComponent.Multicast_TeleportUnstableRift
	// void Multicast_TeleportUnstableRift(FVector Location);                                                                // [0x4dda020] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/Halloween2022.UnstableRiftTeleportationComponent.Multicast_PreTeleportation
	// void Multicast_PreTeleportation(FVector teleportLocation, bool hadPlayerInteraction);                                 // [0x59ab160] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/Halloween2022.UnstableRiftTeleportationComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x59ab140] Final|Native|Private 
};

/// Class /Script/Halloween2022.VoidEnergyAmountInMatchQEEvaluator
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UVoidEnergyAmountInMatchQEEvaluator : public UVoidEnergyChangeQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Halloween2022.VoidEnergyProducer
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class UVoidEnergyProducer : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _maxEnergyCanAward;                                         // 0x00D0   (0x0028)  
	FDBDTunableRowHandle                               _energyToGiveOnEvent;                                       // 0x00F8   (0x0028)  
	FGameplayTagContainer                              _gameEventToRewardEnergy;                                   // 0x0120   (0x0020)  
	int32_t                                            _totalEnergyGiven;                                          // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_5[0x1C];                                      // 0x0144   (0x001C)  MISSED
	FName                                              _voidEnergySpawnObjectName;                                 // 0x0160   (0x000C)  
	FName                                              _voidEnergyHoverObjectName;                                 // 0x016C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0178   (0x0018)  MISSED


	/// Functions
	// Function /Script/Halloween2022.VoidEnergyProducer.OnRep_TotalEnergyGiven
	// void OnRep_TotalEnergyGiven(int32_t lastTotalEnergyGivenValue);                                                       // [0x59ad180] Final|Native|Protected 
	// Function /Script/Halloween2022.VoidEnergyProducer.HasEnergyLeftToGive
	// bool HasEnergyLeftToGive();                                                                                           // [0x59ad150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Halloween2022.VoidEnergyProducer.GetRemainingEnergy
	// int32_t GetRemainingEnergy();                                                                                         // [0x59ad120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Halloween2022.VoidEnergyProducer.Cosmetic_OnVoidOrbsSpawned
	// void Cosmetic_OnVoidOrbsSpawned(int32_t orbsSpawned);                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2022.VoidEnergyGeneratorComponent
/// Size: 0x0080 (0x000190 - 0x000210)
class UVoidEnergyGeneratorComponent : public UVoidEnergyProducer
{ 
public:
	FDBDTunableRowHandle                               _timeWorkingOnGeneratorNeededToAwardEnergy;                 // 0x0190   (0x0028)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x01B8   (0x0058)  MISSED


	/// Functions
	// Function /Script/Halloween2022.VoidEnergyGeneratorComponent.GetCurrentTimeDoneOnGenerator
	// float GetCurrentTimeDoneOnGenerator(class ADBDPlayer* Player);                                                        // [0x59ab820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Halloween2022.VoidEnergyMeatHookComponent
/// Size: 0x0000 (0x000190 - 0x000190)
class UVoidEnergyMeatHookComponent : public UVoidEnergyProducer
{ 
public:
};

/// Class /Script/Halloween2022.VoidEnergyOrb
/// Size: 0x00C8 (0x000230 - 0x0002F8)
class AVoidEnergyOrb : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0230   (0x0010)  MISSED
	FName                                              _characterBoneName;                                         // 0x0240   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _timeHoverDuration;                                         // 0x0250   (0x0028)  
	FDBDTunableRowHandle                               _timeToMoveToTarget;                                        // 0x0278   (0x0028)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02A0   (0x0004)  MISSED
	float                                              _timeBeforeCollectionToPlaySound;                           // 0x02A4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02A8   (0x0004)  MISSED
	float                                              _minAmplitudeAllowed;                                       // 0x02AC   (0x0004)  
	float                                              _maxAmplitudeAllowed;                                       // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x44];                                      // 0x02B4   (0x0044)  MISSED


	/// Functions
	// Function /Script/Halloween2022.VoidEnergyOrb.PlaceOrbInQueue
	// void PlaceOrbInQueue();                                                                                               // [0x59abdf0] Final|Native|Private|BlueprintCallable 
	// Function /Script/Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbSpawned
	// void Cosmetic_OnOrbSpawned(class ADBDPlayer* playerGivingOrbTo, bool isLargeOrb);                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithoutCollection
	// void Cosmetic_OnOrbDisappearWithoutCollection(bool isLargeOrb);                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithCollection
	// void Cosmetic_OnOrbDisappearWithCollection(class ADBDPlayer* playerGivingOrbTo);                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2022.VoidEnergyOrb.Cosmetic_DelayBeforeCollection
	// void Cosmetic_DelayBeforeCollection(class ADBDPlayer* playerGivingOrbTo);                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2022.VoidEnergyOrbSpawner
/// Size: 0x0168 (0x0000B8 - 0x000220)
class UVoidEnergyOrbSpawner : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	FDBDTunableRowHandle                               _timeBetweenEachSpawn;                                      // 0x00C8   (0x0028)  
	FDBDTunableRowHandle                               _totalDistanceForOrbs;                                      // 0x00F0   (0x0028)  
	FDBDTunableRowHandle                               _maxDistanceDown;                                           // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _timeOrbMoves;                                              // 0x0140   (0x0028)  
	FDBDTunableRowHandle                               _timeOrbHovers;                                             // 0x0168   (0x0028)  
	float                                              _downedSurviorSpawnOffsetHeight;                            // 0x0190   (0x0004)  
	float                                              _palletSpawnHeightOfOrbs;                                   // 0x0194   (0x0004)  
	float                                              _lockerSpawnForwardOffset;                                  // 0x0198   (0x0004)  
	float                                              _lockerSpawnUpwardOffset;                                   // 0x019C   (0x0004)  
	float                                              _slasherSpawnOffset;                                        // 0x01A0   (0x0004)  
	float                                              _slasherSpawnOffsetFarDown;                                 // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01A8   (0x0010)  MISSED
	class UClass*                                      _voidEnergyOrbClass;                                        // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x01C0   (0x0060)  MISSED


	/// Functions
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Multicast_SpawnVoidEnergyOrb
	// void Multicast_SpawnVoidEnergyOrb(FOrbProperties OrbProperties, EOrbTravelState startingTravelState);                 // [0x59acd30] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_TimerSpawnVoidEnergyOrb
	// void Authority_TimerSpawnVoidEnergyOrb(FOrbProperties OrbProperties, EOrbTravelState startingTravelState);            // [0x59acb90] Final|Native|Private 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunOnKiller
	// void Authority_SurvivorStunOnKiller(FGameplayTag gameEventType, FGameEventData& GameEventData);                       // [0x59aca80] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithPallet
	// void Authority_SurvivorStunKillerWithPallet(FGameplayTag gameEventType, FGameEventData& GameEventData);               // [0x59ac970] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithHeadOn
	// void Authority_SurvivorStunKillerWithHeadOn(FGameplayTag gameEventType, FGameEventData& GameEventData);               // [0x59ac860] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithFlashLight
	// void Authority_SurvivorStunKillerWithFlashLight(FGameplayTag gameEventType, FGameEventData& GameEventData);           // [0x59ac750] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_KillerDownSurvivor
	// void Authority_KillerDownSurvivor(FGameplayTag gameEventType, FGameEventData& GameEventData);                         // [0x59ac640] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2022.VoidEnergyOrbSpawner.Authority_GiveVoidEnergyToPlayer
	// void Authority_GiveVoidEnergyToPlayer(EVoidEnergyType VoidEnergyType, int32_t voidEnergyToAdd);                       // [0x59ac570] Final|Native|Private 
};

/// Class /Script/Halloween2022.VoidEnergyPumpkinComponent
/// Size: 0x0078 (0x000190 - 0x000208)
class UVoidEnergyPumpkinComponent : public UVoidEnergyProducer
{ 
public:
	FDBDTunableRowHandle                               _treatVoidEnergyAmount;                                     // 0x0190   (0x0028)  
	FDBDTunableRowHandle                               _trickVoidEnergyAmount;                                     // 0x01B8   (0x0028)  
	FDBDTunableRowHandle                               _neutralVoidEnergyAmount;                                   // 0x01E0   (0x0028)  
};

/// Struct /Script/Halloween2022.OrbProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FOrbProperties
{ 
	EVoidEnergyType                                    VoidEnergyType;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            SpawnLocation;                                              // 0x0004   (0x000C)  
	FVector                                            HoverLocation;                                              // 0x0010   (0x000C)  
	FVector                                            CustomEndLocation;                                          // 0x001C   (0x000C)  
	float                                              CustomTravelTime;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<class ADBDPlayer*>                          ExtraPlayersToObserveOrbs;                                  // 0x0030   (0x0010)  
};

