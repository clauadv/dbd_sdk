
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Activation
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities

/// Class /Script/CoreMemory.CoreMemoryBehaviourBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreMemoryBehaviourBase : public UObject
{ 
public:
};

/// Class /Script/CoreMemory.CoreMemoryChallengePlayerSpecificController
/// Size: 0x0100 (0x000230 - 0x000330)
class ACoreMemoryChallengePlayerSpecificController : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0230   (0x00C0)  MISSED
	class ADBDPlayer*                                  _owningPlayer;                                              // 0x02F0   (0x0008)  
	class UCoreMemoryController*                       _controller;                                                // 0x02F8   (0x0008)  
	TArray<class UCoreMemoryFragmentComponent*>        _fragments;                                                 // 0x0300   (0x0010)  
	int32_t                                            _numFragmentsToCollect;                                     // 0x0310   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0314   (0x000C)  MISSED
	SDK_UNDEFINED(16,4896) /* TArray<TWeakObjectPtr<ACoreMemoryFragment*>> */ __um(_fragmentsSpawnedBeforeBehavioursWereSetup); // 0x0320   (0x0010)  


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryChallengePlayerSpecificController.StartQuest
	// void StartQuest();                                                                                                    // [0x4dfba10] Final|Native|Public  
	// Function /Script/CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Controller
	// void OnRep_Controller();                                                                                              // [0x4dfb830] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryChallengePlayerSpecificController.OnPortalReplicated
	// void OnPortalReplicated();                                                                                            // [0x4dfb810] Final|Native|Private 
};

/// Class /Script/CoreMemory.CoreMemoryController
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UCoreMemoryController : public UActorComponent
{ 
public:
	TArray<class UCoreMemoryBehaviourBase*>            _behaviours;                                                // 0x00B8   (0x0010)  
	TArray<class ACoreMemoryChallengePlayerSpecificController*> _playerSpecificControllers;                        // 0x00C8   (0x0010)  
	FName                                              _archiveSpecialBehaviourId;                                 // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UClass*                                      _coreMemoryPortalClass;                                     // 0x00E8   (0x0008)  
	class ACoreMemoryPortal*                           _coreMemoryPortal;                                          // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryController.OnRep_CoreMemoryPortal
	// void OnRep_CoreMemoryPortal();                                                                                        // [0x4dfb870] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryController.Authority_OnCharacterAdded
	// void Authority_OnCharacterAdded(class ADBDPlayer* Player);                                                            // [0x4dfafa0] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryController.Authority_CreatePlayerSpecificController
	// void Authority_CreatePlayerSpecificController(class ADBDPlayer* Player);                                              // [0x4dfaf10] Final|Native|Private 
};

/// Class /Script/CoreMemory.CoreMemoryDebugSpawnBehaviour
/// Size: 0x0010 (0x000030 - 0x000040)
class UCoreMemoryDebugSpawnBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	class UClass*                                      _fragmentClass;                                             // 0x0030   (0x0008)  
	int32_t                                            _numberOfFragmentsToSpawn;                                  // 0x0038   (0x0004)  
	float                                              _fragmentSpawnOffset;                                       // 0x003C   (0x0004)  
};

/// Class /Script/CoreMemory.CoreMemoryDefaultCollectBehaviour
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UCoreMemoryDefaultCollectBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	FDBDTunableRowHandle                               _secondsUncollectibleAfterTriggered;                        // 0x0030   (0x0028)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0058   (0x0050)  MISSED


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryDefaultCollectBehaviour.OnCollectZoneEntered
	// void OnCollectZoneEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x4dfb4d0] Final|Native|Private|HasOutParms 
};

/// Class /Script/CoreMemory.CoreMemoryDefaultQuestProgressBehaviour
/// Size: 0x0038 (0x000030 - 0x000068)
class UCoreMemoryDefaultQuestProgressBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	FGameplayTag                                       _onPlayerExitWithMemoryAcquiredScoreTag;                    // 0x0030   (0x000C)  
	FGameplayTag                                       _onFragmentCollectedScoreTag;                               // 0x003C   (0x000C)  
	FGameplayTag                                       _onMemoryAcquiredScoreTag;                                  // 0x0048   (0x000C)  
	FGameplayTag                                       _onMemorySynchronizedScoreTag;                              // 0x0054   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryDefaultTriggerBehaviour
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UCoreMemoryDefaultTriggerBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	float                                              _authority_lineOfSightTimerRate;                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FDBDTunableRowHandle                               _authority_DisableCollisionDetectionAtSpawn;                // 0x0038   (0x0028)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0060   (0x0050)  MISSED


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryDefaultTriggerBehaviour.Authority_OnTriggerZoneExited
	// void Authority_OnTriggerZoneExited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x4dfb250] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryDefaultTriggerBehaviour.Authority_OnTriggerZoneEntered
	// void Authority_OnTriggerZoneEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x4dfb030] Final|Native|Private|HasOutParms 
	// Function /Script/CoreMemory.CoreMemoryDefaultTriggerBehaviour.Authority_CheckLineOfSight
	// void Authority_CheckLineOfSight(class ACoreMemoryFragment* fragment);                                                 // [0x4dfae80] Final|Native|Private 
};

/// Class /Script/CoreMemory.CoreMemoryFragment
/// Size: 0x00E0 (0x000230 - 0x000310)
class ACoreMemoryFragment : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0230   (0x0020)  MISSED
	class UStaticMeshComponent*                        _coreMemoryFragmentStaticMesh;                              // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        _coreMemoryTendrilStaticMesh;                               // 0x0258   (0x0008)  
	class UCoreMemoryFragmentComponent*                _coreMemoryFragmentComponent;                               // 0x0260   (0x0008)  
	class UCoreMemoryFragmentFXComponent*              _coreMemoryFragmentFXComponent;                             // 0x0268   (0x0008)  
	class USphereComponent*                            _coreMemoryFragmentTriggerZone;                             // 0x0270   (0x0008)  
	class USphereComponent*                            _coreMemoryFragmentCollectionZone;                          // 0x0278   (0x0008)  
	FVector                                            _spawnLocation;                                             // 0x0280   (0x000C)  
	FRotator                                           _spawnRotation;                                             // 0x028C   (0x000C)  
	FDBDTunableRowHandle                               _triggerZoneRadius;                                         // 0x0298   (0x0028)  
	FDBDTunableRowHandle                               _collectionZoneRadius;                                      // 0x02C0   (0x0028)  
	FLinearColor                                       _outlineColour;                                             // 0x02E8   (0x0010)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x02F8   (0x0008)  
	class UGameplayTagContainerComponent*              _objectState;                                               // 0x0300   (0x0008)  
	class UActivatorComponent*                         _activator;                                                 // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryFragment.OnRep_SpawnRotation
	// void OnRep_SpawnRotation(FRotator& Rotation);                                                                         // [0x4dfb940] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/CoreMemory.CoreMemoryFragment.OnRep_SpawnLocation
	// void OnRep_SpawnLocation(FVector& Location);                                                                          // [0x4dfb8b0] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/CoreMemory.CoreMemoryFragmentComponent
/// Size: 0x00E0 (0x0000B8 - 0x000198)
class UCoreMemoryFragmentComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x00B8   (0x0060)  MISSED
	class ADBDPlayer*                                  _owningPlayer;                                              // 0x0118   (0x0008)  
	class ACoreMemoryChallengePlayerSpecificController* _controller;                                               // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0128   (0x0001)  MISSED
	bool                                               _wasTriggered;                                              // 0x0129   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x012A   (0x0006)  MISSED
	FGameplayTagContainer                              _killerPreventingTags;                                      // 0x0130   (0x0020)  
	FGameplayTagContainer                              _camperPreventingTags;                                      // 0x0150   (0x0020)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0170   (0x0008)  MISSED
	bool                                               _isDespawned;                                               // 0x0178   (0x0001)  
	bool                                               _wasCollected;                                              // 0x0179   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1E];                                      // 0x017A   (0x001E)  MISSED


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.Server_OnFragmentCollected
	// void Server_OnFragmentCollected();                                                                                    // [0x4dd4860] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.OnRep_WasTriggered
	// void OnRep_WasTriggered();                                                                                            // [0x4dfb9f0] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.OnRep_WasCollected
	// void OnRep_WasCollected();                                                                                            // [0x4dfb9d0] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.OnRep_OwningPlayer
	// void OnRep_OwningPlayer();                                                                                            // [0x4dfb850] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.OnRep_IsDespawned
	// void OnRep_IsDespawned();                                                                                             // [0x4dfb890] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.OnRep_Controller
	// void OnRep_Controller();                                                                                              // [0x4dfb850] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(bool IsLocallyObserved);                                                                // [0x4dfb780] Final|Native|Private 
	// Function /Script/CoreMemory.CoreMemoryFragmentComponent.Multicast_FragmentDespawnCountdown
	// void Multicast_FragmentDespawnCountdown(float floatVal);                                                              // [0x4dfb440] Net|NetReliableNative|Event|NetMulticast|Public|Const 
};

/// Class /Script/CoreMemory.CoreMemoryFragmentDespawnWithTimerBehaviour
/// Size: 0x0010 (0x000030 - 0x000040)
class UCoreMemoryFragmentDespawnWithTimerBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	float                                              _fragmentPhaseIdleTime;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour
/// Size: 0x0048 (0x000040 - 0x000088)
class UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour : public UCoreMemoryFragmentDespawnWithTimerBehaviour
{ 
public:
	FGameplayTagContainer                              _tagsToTrackToStartPhase;                                   // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentFXComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UCoreMemoryFragmentFXComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4897) /* FMulticastInlineDelegate */ __um(Cosmetic_FragmentTriggered);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4898) /* FMulticastInlineDelegate */ __um(Cosmetic_FragmentSpawned);                          // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4899) /* FMulticastInlineDelegate */ __um(Cosmetic_FragmentDespawn);                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4900) /* FMulticastInlineDelegate */ __um(Cosmetic_FragmentCollected);                        // 0x00E8   (0x0010)  
	FRotator                                           _tendrilMeshRotationOffset;                                 // 0x00F8   (0x000C)  
	float                                              _hoverHeight;                                               // 0x0104   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0108   (0x0010)  MISSED
	SDK_UNDEFINED(16,4901) /* FMulticastInlineDelegate */ __um(Cosmetic_FragmentDespawnCountingDown);              // 0x0118   (0x0010)  
};

/// Class /Script/CoreMemory.CoreMemoryFragmentMoveUncollectibleBehaviour
/// Size: 0x0058 (0x000030 - 0x000088)
class UCoreMemoryFragmentMoveUncollectibleBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0030   (0x0050)  MISSED
	int32_t                                            _maxLineOfSightTries;                                       // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentMoveUnpredictableBehaviour
/// Size: 0x0048 (0x000030 - 0x000078)
class UCoreMemoryFragmentMoveUnpredictableBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<class AMeatHook*>                           _cachedMeatHooks;                                           // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0048   (0x0030)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentNavAgentComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UCoreMemoryFragmentNavAgentComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentOutlineUpdateStrategy
/// Size: 0x0000 (0x000100 - 0x000100)
class UCoreMemoryFragmentOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/CoreMemory.CoreMemoryFragmentNotCollectedOutlineUpdateStrategy
/// Size: 0x0000 (0x000100 - 0x000100)
class UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy : public UCoreMemoryFragmentOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/CoreMemory.CoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy
/// Size: 0x0008 (0x000100 - 0x000108)
class UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy : public UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy
{ 
public:
	float                                              _auraDisplayedRange;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentNotTriggeredOutlineUpdateStrategy
/// Size: 0x0000 (0x000100 - 0x000100)
class UCoreMemoryFragmentNotTriggeredOutlineUpdateStrategy : public UCoreMemoryFragmentOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/CoreMemory.CoreMemoryFragmentSimpleMovementComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UCoreMemoryFragmentSimpleMovementComponent : public UActorComponent
{ 
public:
	FName                                              _characterBoneName;                                         // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FDBDTunableRowHandle                               _fragmentMoveSpeed;                                         // 0x00D0   (0x0028)  
	class UCurveFloat*                                 _speedCurve;                                                // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0100   (0x0008)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryFragmentToPositionMovementComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UCoreMemoryFragmentToPositionMovementComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	FDBDTunableRowHandle                               _fragmentMoveSpeed;                                         // 0x00E8   (0x0028)  
};

/// Struct /Script/CoreMemory.CoreMemoryStatusEffectDetails
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCoreMemoryStatusEffectDetails
{ 
	class UClass*                                      _statusEffect;                                              // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,4902) /* FString */               __um(_effectDurationParamKey);                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,4903) /* FString */               __um(_customEffectParamKey);                                // 0x0018   (0x0010)  
	float                                              _effectDuration;                                            // 0x0028   (0x0004)  
	float                                              _customEffectParam;                                         // 0x002C   (0x0004)  
};

/// Class /Script/CoreMemory.CoreMemoryImposeStatusEffectBehaviour
/// Size: 0x00E0 (0x000030 - 0x000110)
class UCoreMemoryImposeStatusEffectBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0030   (0x0018)  MISSED
	FCoreMemoryStatusEffectDetails                     _statusEffectToImposeOnFragmentCollected;                   // 0x0048   (0x0030)  
	FCoreMemoryStatusEffectDetails                     _statusEffectToImposeOnMemoryAcquired;                      // 0x0078   (0x0030)  
	FCoreMemoryStatusEffectDetails                     _statusEffectToImposeOnStartedSynchronizingMemory;          // 0x00A8   (0x0030)  
	FCoreMemoryStatusEffectDetails                     _statusEffectToImposeOnMemorySynchronized;                  // 0x00D8   (0x0030)  
	bool                                               _shouldUseSameEffectForLastFragment;                        // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryNavMovementComponent
/// Size: 0x0090 (0x000168 - 0x0001F8)
class UCoreMemoryNavMovementComponent : public UActorNavMovementComponent
{ 
public:
	FAIMoveRequest                                     _moveRequest;                                               // 0x0168   (0x0040)  
	class UClass*                                      _navFilter;                                                 // 0x01A8   (0x0008)  
	float                                              _movementAcceptanceRadius;                                  // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FDBDTunableRowHandle                               _fragmentMoveSpeed;                                         // 0x01B8   (0x0028)  
	class UCoreMemoryFragmentNavAgentComponent*        _navAgentComponent;                                         // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01E8   (0x0010)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryNavToLocationMovementComponent
/// Size: 0x0088 (0x000168 - 0x0001F0)
class UCoreMemoryNavToLocationMovementComponent : public UActorNavMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0168   (0x0018)  MISSED
	FAIMoveRequest                                     _moveRequest;                                               // 0x0180   (0x0040)  
	class UClass*                                      _navFilter;                                                 // 0x01C0   (0x0008)  
	float                                              _movementAcceptanceRadius;                                  // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01CC   (0x0004)  MISSED
	class UCoreMemoryFragmentNavAgentComponent*        _navAgentComponent;                                         // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x01D8   (0x0018)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryPortal
/// Size: 0x00B0 (0x000378 - 0x000428)
class ACoreMemoryPortal : public ASpecialBehaviourInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0378   (0x0018)  MISSED
	class UStaticMeshComponent*                        _coreMemoryPortalStaticMesh;                                // 0x0390   (0x0008)  
	class UCoreMemoryPortalComponent*                  _coreMemoryPortalComponent;                                 // 0x0398   (0x0008)  
	class UCoreMemoryPortalFXComponent*                _coreMemoryPortalFXComponent;                               // 0x03A0   (0x0008)  
	class UInteractor*                                 _synchronizeCoreMemoryInteractor;                           // 0x03A8   (0x0008)  
	class USynchronizeCoreMemoryInteraction*           _synchronizeCoreMemoryInteraction;                          // 0x03B0   (0x0008)  
	class USynchronizeCoreMemoryInteraction*           _synchronizeCoreMemoryInteractionKiller;                    // 0x03B8   (0x0008)  
	class UChargeableComponent*                        _synchronizeCoreMemoryInteractionChargeable;                // 0x03C0   (0x0008)  
	class UChargeableComponent*                        _synchronizeCoreMemoryInteractionChargeableKiller;          // 0x03C8   (0x0008)  
	class UPrimitiveComponent*                         _synchronizeCoreMemoryInteractionZone;                      // 0x03D0   (0x0008)  
	FDBDTunableRowHandle                               _synchronizeCoreMemoryInteractionSecondsToCharge;           // 0x03D8   (0x0028)  
	FDBDTunableRowHandle                               _synchronizeCoreMemoryInteractionSecondsToChargeKiller;     // 0x0400   (0x0028)  


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryPortal.OnInteractionStarted
	// void OnInteractionStarted(class ADBDPlayer* Player);                                                                  // [0x4dfb6f0] Final|Native|Private 
};

/// Class /Script/CoreMemory.CoreMemoryPortalComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UCoreMemoryPortalComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x00B8   (0x0078)  MISSED
	TArray<class ADBDPlayer*>                          _playersWithActivePortal;                                   // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryPortalComponent.GetPlayersWithActivePortal
	// TArray<ADBDPlayer*> GetPlayersWithActivePortal();                                                                     // [0x4dfb3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CoreMemory.CoreMemoryPortalDefaultBehaviour
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreMemoryPortalDefaultBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
};

/// Class /Script/CoreMemory.CoreMemoryPortalFXComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UCoreMemoryPortalFXComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4904) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPortalSpawned);                          // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4905) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerStartedInteractingWithPortal);     // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4906) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPortalInteractionInterrupted);           // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4907) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPortalDeactivated);                      // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,4908) /* FMulticastInlineDelegate */ __um(Cosmetic_OnInteractionComplete);                    // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0108   (0x0018)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryPortalOutlineUpdateStrategy
/// Size: 0x0010 (0x000100 - 0x000110)
class UCoreMemoryPortalOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _outlineColor;                                              // 0x0100   (0x0010)  
};

/// Class /Script/CoreMemory.CoreMemoryRemoveStatusEffectBehaviour
/// Size: 0x0020 (0x000030 - 0x000050)
class UCoreMemoryRemoveStatusEffectBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	class UClass*                                      _statusEffectToRemoveOnFragmentCollected;                   // 0x0030   (0x0008)  
	class UClass*                                      _statusEffectToRemoveOnMemoryAcquired;                      // 0x0038   (0x0008)  
	class UClass*                                      _statusEffectToRemoveOnStartedSynchronizingMemory;          // 0x0040   (0x0008)  
	class UClass*                                      _statusEffectToRemoveOnMemorySynchronized;                  // 0x0048   (0x0008)  
};

/// Class /Script/CoreMemory.CoreMemoryScreamBehaviour
/// Size: 0x0008 (0x000030 - 0x000038)
class UCoreMemoryScreamBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	bool                                               _shouldScreamOnCollect;                                     // 0x0030   (0x0001)  
	bool                                               _shouldScreamOnAcquired;                                    // 0x0031   (0x0001)  
	bool                                               _shouldScreamOnSynchronized;                                // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED


	/// Functions
	// Function /Script/CoreMemory.CoreMemoryScreamBehaviour.Cosmetic_Scream
	// void Cosmetic_Scream(class ACamperPlayer* camper);                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/CoreMemory.CoreMemorySpawnedStatusEffectTrackerComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UCoreMemorySpawnedStatusEffectTrackerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4909) /* TArray<TWeakObjectPtr<UStatusEffect*>> */ __um(_authority_spawnedStatusEffects);     // 0x00B8   (0x0010)  
	SDK_UNDEFINED(8,4910) /* TWeakObjectPtr<UCoreMemoryImposeStatusEffectBehaviour*> */ __um(_authority_imposeStatusEffectBehaviour); // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/CoreMemory.CoreMemorySpawnedStatusEffectTrackerComponent.Authority_AddSpawnedStatusEffect
	// void Authority_AddSpawnedStatusEffect(class UStatusEffect* StatusEffect, class ACoreMemoryChallengePlayerSpecificController* PlayerController); // [0x4dfc990] Final|Native|Private 
};

/// Struct /Script/CoreMemory.CoreMemoryFragmentSpawnData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCoreMemoryFragmentSpawnData
{ 
	class UClass*                                      FragmentClass;                                              // 0x0000   (0x0008)  
	float                                              TriggerZoneRadiusDistance;                                  // 0x0008   (0x0004)  
	float                                              SpawnDistanceFromPlayer;                                    // 0x000C   (0x0004)  
	float                                              SpawnDistanceFromOtherFragments;                            // 0x0010   (0x0004)  
	float                                              HeightDistance;                                             // 0x0014   (0x0004)  
};

/// Class /Script/CoreMemory.CoreMemorySpawnFragmentOnEventBehaviour
/// Size: 0x0050 (0x000030 - 0x000080)
class UCoreMemorySpawnFragmentOnEventBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	FCoreMemoryFragmentSpawnData                       _fragmentSpawnData;                                         // 0x0030   (0x0018)  
	TArray<FGameplayTag>                               _spawnFragmentOnGameEvents;                                 // 0x0048   (0x0010)  
	bool                                               _onlyForKiller;                                             // 0x0058   (0x0001)  
	bool                                               _onlyForSurvivors;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x26];                                      // 0x005A   (0x0026)  MISSED
};

/// Class /Script/CoreMemory.CoreMemorySpawnFragmentOnEventWithinRangeOfTargetBehaviour
/// Size: 0x0008 (0x000080 - 0x000088)
class UCoreMemorySpawnFragmentOnEventWithinRangeOfTargetBehaviour : public UCoreMemorySpawnFragmentOnEventBehaviour
{ 
public:
	ETileSpawnPointType                                _tileSpawnPointType;                                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/CoreMemory.CoreMemorySpawnFragmentsOnCollectBehaviour
/// Size: 0x0018 (0x000030 - 0x000048)
class UCoreMemorySpawnFragmentsOnCollectBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	FCoreMemoryFragmentSpawnData                       _fragmentSpawnData;                                         // 0x0030   (0x0018)  
};

/// Class /Script/CoreMemory.CoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour
/// Size: 0x0020 (0x000030 - 0x000050)
class UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour : public UCoreMemoryBehaviourBase
{ 
public:
	FCoreMemoryFragmentSpawnData                       _fragmentSpawnData;                                         // 0x0030   (0x0018)  
	ETileSpawnPointType                                _tileSpawnPointType;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/CoreMemory.CoreMemoryUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreMemoryUtilities : public UObject
{ 
public:
};

/// Class /Script/CoreMemory.SynchronizeCoreMemoryInteraction
/// Size: 0x0000 (0x000790 - 0x000790)
class USynchronizeCoreMemoryInteraction : public UChargeableInteractionDefinition
{ 
public:
};

