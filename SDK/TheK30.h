
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: NavigationSystem
/// dependency: NetworkUtilities
/// dependency: StatSystem

/// Enum /Script/TheK30.EPowerState
/// Size: 0x10
enum class EPowerState : uint8_t
{
	EPowerState__Ready                                                               = 0,
	EPowerState__Charging                                                            = 1,
	EPowerState__Snapping                                                            = 2,
	EPowerState__DrawPath                                                            = 3,
	EPowerState__DrawPathDone                                                        = 4,
	EPowerState__OrderStarted                                                        = 5,
	EPowerState__PatrolStarted                                                       = 6,
	EPowerState__HuntStarted                                                         = 7,
	EPowerState__InCooldown                                                          = 8,
	EPowerState__EPowerState_MAX                                                     = 9
};

/// Enum /Script/TheK30.EChargeState
/// Size: 0x04
enum class EChargeState : uint8_t
{
	EChargeState__Inactive                                                           = 0,
	EChargeState__Charging                                                           = 1,
	EChargeState__ChargeCompleted                                                    = 2,
	EChargeState__EChargeState_MAX                                                   = 3
};

/// Enum /Script/TheK30.EGuardHuntEndReason
/// Size: 0x09
enum class EGuardHuntEndReason : uint8_t
{
	EGuardHuntEndReason__TimerExpired                                                = 0,
	EGuardHuntEndReason__GuardHitSurvivor                                            = 1,
	EGuardHuntEndReason__SurvivorCapturedFlag                                        = 2,
	EGuardHuntEndReason__UnhookedSurvivor                                            = 3,
	EGuardHuntEndReason__KillerDamagedSurvivor                                       = 4,
	EGuardHuntEndReason__GuardPulledSurvivorOutOfLocker                              = 5,
	EGuardHuntEndReason__KillerPowerPrevented                                        = 6,
	EGuardHuntEndReason__UnexpectedError                                             = 7,
	EGuardHuntEndReason__EGuardHuntEndReason_MAX                                     = 8
};

/// Class /Script/TheK30.BTService_FindObject_GuardFlag
/// Size: 0x0000 (0x000208 - 0x000208)
class UBTService_FindObject_GuardFlag : public UBTService_FindObject
{ 
public:
};

/// Class /Script/TheK30.DrawPatrolPathInteraction
/// Size: 0x01D0 (0x0007C0 - 0x000990)
class UDrawPatrolPathInteraction : public UBasicChargeableInteraction
{ 
public:
	SDK_UNDEFINED(16,5122) /* FMulticastInlineDelegate */ __um(OnChargeStateChanged);                              // 0x07C0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x07D0   (0x0040)  MISSED
	FSecondaryInteractionProperties                    _giveOrderProperties;                                       // 0x0810   (0x0038)  
	FSecondaryInteractionProperties                    _releaseInteractionProperties;                              // 0x0848   (0x0038)  
	FDBDTunableRowHandle                               _maximumInteractionDuration;                                // 0x0880   (0x0028)  
	FDBDTunableRowHandle                               _pathLengthWarningPercent;                                  // 0x08A8   (0x0028)  
	FDBDTunableRowHandle                               _pathDrawingDurationWarningPercent;                         // 0x08D0   (0x0028)  
	FDBDTunableRowHandle                               _minSlopeToCheckStepUp;                                     // 0x08F8   (0x0028)  
	class UClass*                                      _postPowerHasteClass;                                       // 0x0920   (0x0008)  
	FDBDTunableRowHandle                               _postPowerHasteValue;                                       // 0x0928   (0x0028)  
	class UCurveFloat*                                 _hasteDurationByPathLength;                                 // 0x0950   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0958   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheK30.DrawPatrolPathInteraction.SetIsCharging
	// void SetIsCharging(bool IsCharging);                                                                                  // [0x5c44280] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK30.DrawPatrolPathInteraction.Server_StartPatrol
	// void Server_StartPatrol();                                                                                            // [0x5c0f430] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/TheK30.DrawPatrolPathInteraction.Server_SendOrder
	// void Server_SendOrder(class AInteractable* Target);                                                                   // [0x5c441f0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/TheK30.DrawPatrolPathInteraction.OnChargeStateChanged__DelegateSignature
	// void OnChargeStateChanged__DelegateSignature(bool IsCharging, bool IsChargeCompleted);                                // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK30.DrawPatrolPathInteraction.OnCancellationTimerCompleted
	// void OnCancellationTimerCompleted();                                                                                  // [0x5c43aa0] Final|Native|Private 
	// Function /Script/TheK30.DrawPatrolPathInteraction.IsCharging
	// bool IsCharging();                                                                                                    // [0x5c43a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.DrawPatrolPathInteraction.IsChargeCompleted
	// bool IsChargeCompleted();                                                                                             // [0x5c43a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK30.FloatingCameraNavigationComponent
/// Size: 0x01B8 (0x0000B8 - 0x000270)
class UFloatingCameraNavigationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(8,5123) /* TWeakObjectPtr<UObjectPlacerComponent*> */ __um(_ownerObjectPlacer);                  // 0x00D0   (0x0008)  
	FDBDTunableRowHandle                               _snappingDistance;                                          // 0x00D8   (0x0028)  
	FDBDTunableRowHandle                               _previewSnappingTime;                                       // 0x0100   (0x0028)  
	FDBDTunableRowHandle                               _drawPathModeYawInputLimit;                                 // 0x0128   (0x0028)  
	FTunableStat                                       _floatingCameraMaxSpeed;                                    // 0x0150   (0x0080)  
	FDBDTunableRowHandle                               _floatingCameraAccelerationMultiplier;                      // 0x01D0   (0x0028)  
	FDBDTunableRowHandle                               _strafeMovementSpeedMultiplier;                             // 0x01F8   (0x0028)  
	SDK_UNDEFINED(8,5124) /* TWeakObjectPtr<ADBDPlayer*> */ __um(_playerOwner);                                    // 0x0220   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0228   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK30.FloatingCameraNavigationComponent.Server_EnableWalkOffLegdes
	// void Server_EnableWalkOffLegdes(bool IsEnabled);                                                                      // [0x5c44160] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK30.FloatingCameraNavigationComponent.Multicast_EnableWalkOffLegdes
	// void Multicast_EnableWalkOffLegdes(bool IsEnabled);                                                                   // [0x508e480] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK30.GuardAttackableComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UGuardAttackableComponent : public UAttackableComponent
{ 
public:
};

/// Class /Script/TheK30.GuardAttackComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UGuardAttackComponent : public UActorComponent
{ 
public:
	class UClass*                                      _killerInstinctEffectClass;                                 // 0x00B8   (0x0008)  
	FDBDTunableRowHandle                               _killerInstinctEffectDuration;                              // 0x00C0   (0x0028)  
	EDetectionZone                                     _detectionZoneToUse;                                        // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	SDK_UNDEFINED(80,5125) /* TSet<TWeakObjectPtr<ACamperPlayer*>> */ __um(_survivorsInZone);                      // 0x00F0   (0x0050)  
};

/// Class /Script/TheK30.GuardOrderBase
/// Size: 0x0010 (0x000650 - 0x000660)
class UGuardOrderBase : public UInteractionDefinition
{ 
public:
	bool                                               _shouldWaitForCurrentInteraction;                           // 0x0648   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0649   (0x0003)  MISSED
	FName                                              _explodeInteractableAnimNotifyID;                           // 0x064C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0658   (0x0008)  MISSED
};

/// Class /Script/TheK30.GuardBreakPallet
/// Size: 0x0000 (0x000660 - 0x000660)
class UGuardBreakPallet : public UGuardOrderBase
{ 
public:
};

/// Class /Script/TheK30.GuardBreakWall
/// Size: 0x0000 (0x000660 - 0x000660)
class UGuardBreakWall : public UGuardOrderBase
{ 
public:
};

/// Class /Script/TheK30.GuardController
/// Size: 0x0078 (0x000778 - 0x0007F0)
class AGuardController : public ADBDAIBTController
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0778   (0x0008)  MISSED
	TArray<FGameplayTag>                               _cannotHuntWhileIdleTags;                                   // 0x0780   (0x0010)  
	FName                                              _isPatrollingKey;                                           // 0x0790   (0x000C)  
	FName                                              _patrolDestinationKey;                                      // 0x079C   (0x000C)  
	FName                                              _patrolUseDirectPathKey;                                    // 0x07A8   (0x000C)  
	FName                                              _isHuntingKey;                                              // 0x07B4   (0x000C)  
	FName                                              _huntedSurvivorKey;                                         // 0x07C0   (0x000C)  
	FName                                              _huntDestinationKey;                                        // 0x07CC   (0x000C)  
	FName                                              _huntUseDirectPathKey;                                      // 0x07D8   (0x000C)  
	FName                                              _huntShouldSearchLockerKey;                                 // 0x07E4   (0x000C)  


	/// Functions
	// Function /Script/TheK30.GuardController.OnTargetPerceptionUpdated
	// void OnTargetPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);                                            // [0x5c43e20] Final|Native|Private 
	// Function /Script/TheK30.GuardController.OnLoudNoiseTriggered
	// void OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, FVector Location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise); // [0x5c43ac0] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/TheK30.GuardDamageGenerator
/// Size: 0x0000 (0x000660 - 0x000660)
class UGuardDamageGenerator : public UGuardOrderBase
{ 
public:
};

/// Class /Script/TheK30.GuardFlag
/// Size: 0x00E0 (0x000230 - 0x000310)
class AGuardFlag : public AActor
{ 
public:
	class UPrimitiveComponent*                         _flagPickupHitbox;                                          // 0x0230   (0x0008)  
	class AKnightGuard*                                _owningGuard;                                               // 0x0238   (0x0008)  
	class ADBDPlayer*                                  _huntedSurvivor;                                            // 0x0240   (0x0008)  
	class UClass*                                      _flagPickupEnduranceEffectClass;                            // 0x0248   (0x0008)  
	FDBDTunableRowHandle                               _flagPickupEnduranceDuration;                               // 0x0250   (0x0028)  
	class UClass*                                      _flagPickupHasteEffectClass;                                // 0x0278   (0x0008)  
	FDBDTunableRowHandle                               _flagPickupHasteDuration;                                   // 0x0280   (0x0028)  
	FDBDTunableRowHandle                               _flagPickupHasteModifier;                                   // 0x02A8   (0x0028)  
	unsigned char                                      UnknownData00_5[0x38];                                      // 0x02D0   (0x0038)  MISSED
	class ADBDPlayer*                                  _clientHuntedSurvivor;                                      // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/TheK30.GuardFlag.OnRep_HuntedSurvivor
	// void OnRep_HuntedSurvivor();                                                                                          // [0x5c43d30] Final|Native|Private 
	// Function /Script/TheK30.GuardFlag.Multicast_OnCamperCapturedFlag
	// void Multicast_OnCamperCapturedFlag(class ADBDPlayer* huntedSurvivor);                                                // [0x590c260] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK30.GuardFlag.GetHuntedSurvivor
	// class ADBDPlayer* GetHuntedSurvivor();                                                                                // [0x5c43a40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.GuardFlag.GetFlagPickupHasteDuration
	// float GetFlagPickupHasteDuration();                                                                                   // [0x5c43a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.GuardFlag.GetFlagPickupEnduranceDuration
	// float GetFlagPickupEnduranceDuration();                                                                               // [0x5c439e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.GuardFlag.GetActivationTimeLeft
	// float GetActivationTimeLeft();                                                                                        // [0x5c439b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.GuardFlag.Cosmetic_OnSurvivorCapturedFlag
	// void Cosmetic_OnSurvivorCapturedFlag(class ADBDPlayer* previouslyHuntedSurvivor);                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.GuardFlag.Cosmetic_OnFlagSpawned
	// void Cosmetic_OnFlagSpawned(float activationTimerDuration);                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.GuardFlag.Cosmetic_OnFlagDisappearDueToHuntEnding
	// void Cosmetic_OnFlagDisappearDueToHuntEnding(class ADBDPlayer* previouslyHuntedSurvivor);                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.GuardFlag.Cosmetic_OnFlagActivationTimerCompleted
	// void Cosmetic_OnFlagActivationTimerCompleted();                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.GuardFlag.Authority_OnBeginOverlap
	// void Authority_OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& HitResult); // [0x5c431e0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK30.GuardFlagOUtlineUpdateStrategy
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UGuardFlagOUtlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _killerColor;                                               // 0x00E0   (0x0010)  
	FLinearColor                                       _survivorColor;                                             // 0x00F0   (0x0010)  
};

/// Class /Script/TheK30.GuardHuntComponent
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UGuardHuntComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5126) /* FMulticastInlineDelegate */ __um(OnGuardPhaseProgressUpdate);                        // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x24];                                      // 0x00C8   (0x0024)  MISSED
	float                                              _maxPathingDetourLength;                                    // 0x00EC   (0x0004)  
	float                                              _distanceBeforeGoingToNextWaypoint;                         // 0x00F0   (0x0004)  
	float                                              _distanceBeforeGoingToNextWaypointOffNavmesh;               // 0x00F4   (0x0004)  
	float                                              _distanceFromLockerToClearWaypoints;                        // 0x00F8   (0x0004)  
	float                                              _underWaypointZDistance;                                    // 0x00FC   (0x0004)  
	FSpeedBasedNetSyncedValue                          _huntTimeLeft;                                              // 0x0100   (0x0038)  
	class ACamperPlayer*                               _huntedSurvivor;                                            // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0140   (0x0004)  MISSED
	FVector                                            _huntStartingLocation;                                      // 0x0144   (0x000C)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0150   (0x0020)  MISSED
	float                                              _speedConsideredStuck;                                      // 0x0170   (0x0004)  
	float                                              _timeStuckToResetPathing;                                   // 0x0174   (0x0004)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0178   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK30.GuardHuntComponent.OnRep_HuntStartingLocation
	// void OnRep_HuntStartingLocation();                                                                                    // [0x5c43d10] Final|Native|Private 
	// Function /Script/TheK30.GuardHuntComponent.OnRep_HuntedSurvivor
	// void OnRep_HuntedSurvivor(class ACamperPlayer* previousChasedSurvivor);                                               // [0x5c43d50] Final|Native|Private 
	// Function /Script/TheK30.GuardHuntComponent.OnGuardPhaseProgressUpdate__DelegateSignature
	// void OnGuardPhaseProgressUpdate__DelegateSignature(float completionProgress);                                         // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK30.GuardHuntComponent.GetHuntedSurvivor
	// class ACamperPlayer* GetHuntedSurvivor();                                                                             // [0x4df5b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.GuardHuntComponent.Authority_OnCamperUnhooked
	// void Authority_OnCamperUnhooked(FGameplayTag GameplayTag, FGameEventData& GameEventData);                             // [0x5c43510] Final|Native|Private|HasOutParms 
	// Function /Script/TheK30.GuardHuntComponent.Authority_OnCamperInjuredOrDowned
	// void Authority_OnCamperInjuredOrDowned(FGameplayTag GameplayTag, FGameEventData& GameEventData);                      // [0x5c43400] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK30.GuardHuntTeleport
/// Size: 0x0030 (0x000650 - 0x000680)
class UGuardHuntTeleport : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _huntStartUpDuration;                                       // 0x0648   (0x0028)  
	class UCurveFloat*                                 _huntStartUpDurationPathLengthMultiplier;                   // 0x0670   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0678   (0x0008)  MISSED
};

/// Class /Script/TheK30.GuardInteractable
/// Size: 0x0008 (0x000370 - 0x000378)
class AGuardInteractable : public APlayerInteractable
{ 
public:
	class UInteractionDefinition*                      _startHuntInteraction;                                      // 0x0370   (0x0008)  
};

/// Class /Script/TheK30.GuardOutlineUpdateStrategy
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UGuardOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _killerColor;                                               // 0x00E0   (0x0010)  
};

/// Class /Script/TheK30.GuardPatrolComponent
/// Size: 0x0138 (0x0000B8 - 0x0001F0)
class UGuardPatrolComponent : public UActorComponent
{ 
public:
	char                                               _currentDirection;                                          // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x00B9   (0x0017)  MISSED
	float                                              _patrolPathLength;                                          // 0x00D0   (0x0004)  
	bool                                               _isInPatrolStartup;                                         // 0x00D4   (0x0001)  
	bool                                               _isPatrolling;                                              // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00D6   (0x0002)  MISSED
	FSpeedBasedNetSyncedValue                          _patrolTimeLeft;                                            // 0x00D8   (0x0038)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0110   (0x0030)  MISSED
	float                                              _patrolTotalDuration;                                       // 0x0140   (0x0004)  
	float                                              _distanceBeforeHeadingToNextNode;                           // 0x0144   (0x0004)  
	float                                              _maxDetourLength;                                           // 0x0148   (0x0004)  
	unsigned char                                      UnknownData03_5[0x1C];                                      // 0x014C   (0x001C)  MISSED
	FDBDTunableRowHandle                               _spawningVisionAngle;                                       // 0x0168   (0x0028)  
	FDBDTunableRowHandle                               _patrollingVisionAngle;                                     // 0x0190   (0x0028)  
	FDBDTunableRowHandle                               _timeToInterpolateVisionRadius;                             // 0x01B8   (0x0028)  
	class UCurveFloat*                                 _detectionRadiusInterpolationDurationPathLengthMultiplier;  // 0x01E0   (0x0008)  
	class UCurveFloat*                                 _detectionRadiusPathLenghtMultiplier;                       // 0x01E8   (0x0008)  


	/// Functions
	// Function /Script/TheK30.GuardPatrolComponent.OnRep_IsPatrolling
	// void OnRep_IsPatrolling();                                                                                            // [0x5c43de0] Final|Native|Private 
};

/// Class /Script/TheK30.GuardPullSurvivorOutOfLocker
/// Size: 0x0080 (0x000680 - 0x000700)
class UGuardPullSurvivorOutOfLocker : public UBaseLockerInteraction
{ 
public:
	class ACamperPlayer*                               _targetSurvivor;                                            // 0x0678   (0x0008)  
	FAnimationMontageDescriptor                        _healthySurvivorUpdateMontage;                              // 0x0680   (0x0020)  
	FAnimationMontageDescriptor                        _injuredSurvivorUpdateMontage;                              // 0x06A0   (0x0020)  
	FDBDTunableRowHandle                               _pullOutOfLockerDuration;                                   // 0x06C0   (0x0028)  
	float                                              _snapPositionDistanceOnPullOutHealthy;                      // 0x06E8   (0x0004)  
	float                                              _snapTime;                                                  // 0x06EC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x06F0   (0x0010)  MISSED
};

/// Class /Script/TheK30.GuardSlowingZone
/// Size: 0x0000 (0x000230 - 0x000230)
class AGuardSlowingZone : public AActor
{ 
public:


	/// Functions
	// Function /Script/TheK30.GuardSlowingZone.OnZoneEndOverlap
	// void OnZoneEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                       // [0x5c44090] Final|Native|Protected 
	// Function /Script/TheK30.GuardSlowingZone.OnZoneBeginOverlap
	// void OnZoneBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                     // [0x5c43fc0] Final|Native|Protected 
};

/// Class /Script/TheK30.GuardPalletSlowingZone
/// Size: 0x0008 (0x000230 - 0x000238)
class AGuardPalletSlowingZone : public AGuardSlowingZone
{ 
public:
	class APallet*                                     _linkedPallet;                                              // 0x0230   (0x0008)  


	/// Functions
	// Function /Script/TheK30.GuardPalletSlowingZone.OnRep_LinkedPallet
	// void OnRep_LinkedPallet();                                                                                            // [0x5c43e00] Final|Native|Private 
};

/// Class /Script/TheK30.K30BaseStatusEffectAddon
/// Size: 0x0020 (0x0002B8 - 0x0002D8)
class UK30BaseStatusEffectAddon : public UItemAddon
{ 
public:
	TArray<class UClass*>                              _baseStatusEffectClasses;                                   // 0x02B8   (0x0010)  
	float                                              _lifetime;                                                  // 0x02C8   (0x0004)  
	float                                              _customParam;                                               // 0x02CC   (0x0004)  
	bool                                               _shouldDisplay;                                             // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02D1   (0x0007)  MISSED
};

/// Class /Script/TheK30.K30InflictStatusOnEndHuntAddon
/// Size: 0x0010 (0x0002D8 - 0x0002E8)
class UK30InflictStatusOnEndHuntAddon : public UK30BaseStatusEffectAddon
{ 
public:
	TArray<EGuardHuntEndReason>                        _huntEndReasonsToApplyEffect;                               // 0x02D8   (0x0010)  


	/// Functions
	// Function /Script/TheK30.K30InflictStatusOnEndHuntAddon.Authority_OnEndHunt
	// void Authority_OnEndHunt(class ADBDPlayer* Player, EGuardHuntEndReason huntEndReason);                                // [0x5c47530] Native|Protected     
};

/// Class /Script/TheK30.K30Addon14
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UK30Addon14 : public UK30InflictStatusOnEndHuntAddon
{ 
public:
	int32_t                                            _numberOfEscapesBeforeEffect;                               // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02EC   (0x0004)  MISSED
};

/// Class /Script/TheK30.K30ApplyStatusOnWakeUpAddon
/// Size: 0x0008 (0x0002D8 - 0x0002E0)
class UK30ApplyStatusOnWakeUpAddon : public UK30BaseStatusEffectAddon
{ 
public:
	class UClass*                                      _applicableGuard;                                           // 0x02D8   (0x0008)  


	/// Functions
	// Function /Script/TheK30.K30ApplyStatusOnWakeUpAddon.Authority_OnWakeUp
	// void Authority_OnWakeUp(class AKnightGuard* currentGuard);                                                            // [0x5c43920] Native|Protected     
};

/// Class /Script/TheK30.K30Addon16
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class UK30Addon16 : public UK30ApplyStatusOnWakeUpAddon
{ 
public:
};

/// Class /Script/TheK30.K30Addon17
/// Size: 0x0048 (0x0002E0 - 0x000328)
class UK30Addon17 : public UK30ApplyStatusOnWakeUpAddon
{ 
public:
	class UClass*                                      _revealAuraToKillerEffectClass;                             // 0x02E0   (0x0008)  
	float                                              _distanceForScreams;                                        // 0x02E8   (0x0004)  
	float                                              _dealyForScreams;                                           // 0x02EC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x02F0   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheK30.K30Addon17.Multicast_OnMakeSurvivorScream
	// void Multicast_OnMakeSurvivorScream(class ADBDPlayer* Player, float lifetime);                                        // [0x5b20d40] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK30.K30Addon17.BP_RevealAndMakeSurvivorScream
	// void BP_RevealAndMakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration);                    // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK30.K30Addon19
/// Size: 0x0010 (0x0002E0 - 0x0002F0)
class UK30Addon19 : public UK30ApplyStatusOnWakeUpAddon
{ 
public:
	int32_t                                            _numberOfSummonsBeforeEffect;                               // 0x02E0   (0x0004)  
	float                                              _distanceThresholdForEffect;                                // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02E8   (0x0008)  MISSED
};

/// Class /Script/TheK30.K30Addon20
/// Size: 0x0088 (0x0002D8 - 0x000360)
class UK30Addon20 : public UK30BaseStatusEffectAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02D8   (0x0010)  MISSED
	TArray<class AWindow*>                             _blockedWindows;                                            // 0x02E8   (0x0010)  
	class ADBDPlayer*                                  _huntedSurvivor;                                            // 0x02F8   (0x0008)  
	class UClass*                                      _gateBlockerEffectClass;                                    // 0x0300   (0x0008)  
	float                                              _trailPassThroughWindowBlockTime;                           // 0x0308   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x030C   (0x0004)  MISSED
	SDK_UNDEFINED(80,5127) /* TMap<ACamperPlayer*, UStatusEffect*> */ __um(_playerGateBlockerStatusEffects);       // 0x0310   (0x0050)  


	/// Functions
	// Function /Script/TheK30.K30Addon20.Authority_OnTrailCameraGoThroughWindow
	// void Authority_OnTrailCameraGoThroughWindow(class AWindow* Window);                                                   // [0x5c43890] Final|Native|Private 
	// Function /Script/TheK30.K30Addon20.Authority_OnStartHunt
	// void Authority_OnStartHunt(class ADBDPlayer* Player);                                                                 // [0x5c43800] Final|Native|Private 
	// Function /Script/TheK30.K30Addon20.Authority_OnHuntedSurvivorVault
	// void Authority_OnHuntedSurvivorVault(FGameplayTag gameEventType, FGameEventData& GameEventData);                      // [0x5c436f0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK30.K30Addon20.Authority_OnEndHunt
	// void Authority_OnEndHunt(class ADBDPlayer* Player, EGuardHuntEndReason huntEndReason);                                // [0x5c43620] Final|Native|Private 
};

/// Class /Script/TheK30.K30AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK30AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isChargingPower;                                           // 0x0610   (0x0001)  
	bool                                               _isSnapping;                                                // 0x0611   (0x0001)  
	bool                                               _isDrawingPath;                                             // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0613   (0x000D)  MISSED
};

/// Class /Script/TheK30.K30CheatComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK30CheatComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK30.K30CheatComponent.DBD_K30ToggleGuardAttackDespawn
	// void DBD_K30ToggleGuardAttackDespawn(int32_t despawnOnAttack);                                                        // [0x5c47920] Final|Exec|Native|Public 
	// Function /Script/TheK30.K30CheatComponent.DBD_K30SetPatrolAndHuntDuration
	// void DBD_K30SetPatrolAndHuntDuration(float secondsToPatrol);                                                          // [0x5c478a0] Final|Exec|Native|Public 
	// Function /Script/TheK30.K30CheatComponent.DBD_K30SetNextGuardIndex
	// void DBD_K30SetNextGuardIndex(int32_t nextGuardIndex);                                                                // [0x5c47810] Final|Exec|Native|Public 
};

/// Class /Script/TheK30.K30InflictStatusOnDetectedAddon
/// Size: 0x0000 (0x0002D8 - 0x0002D8)
class UK30InflictStatusOnDetectedAddon : public UK30BaseStatusEffectAddon
{ 
public:


	/// Functions
	// Function /Script/TheK30.K30InflictStatusOnDetectedAddon.Authority_OnDetected
	// void Authority_OnDetected(class ADBDPlayer* Player);                                                                  // [0x5c43920] Native|Protected     
};

/// Class /Script/TheK30.K30InflictStatusOnGuardHitAddon
/// Size: 0x0000 (0x0002D8 - 0x0002D8)
class UK30InflictStatusOnGuardHitAddon : public UK30BaseStatusEffectAddon
{ 
public:


	/// Functions
	// Function /Script/TheK30.K30InflictStatusOnGuardHitAddon.Authority_OnGuardHit
	// void Authority_OnGuardHit(class ADBDPlayer* Player);                                                                  // [0x5c47600] Final|Native|Protected 
};

/// Class /Script/TheK30.K30KnightHuskOutlineUpdateStrategy
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UK30KnightHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/TheK30.K30P01
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UK30P01 : public UPerk
{ 
public:
	float                                              _revealRange;                                               // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	class UClass*                                      _revealToKillerEffectClass;                                 // 0x03D0   (0x0008)  
	float                                              _revealDuration;                                            // 0x03D8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03E4   (0x0004)  MISSED
};

/// Class /Script/TheK30.K30P02
/// Size: 0x0040 (0x000448 - 0x000488)
class UK30P02 : public UHexPerk
{ 
public:
	class ADBDPlayer*                                  _cursedPlayer;                                              // 0x0448   (0x0008)  
	TArray<class UStatusEffect*>                       _activeStatusEffects;                                       // 0x0450   (0x0010)  
	class UClass*                                      _screamEffectClass;                                         // 0x0460   (0x0008)  
	float                                              _screamLoudNoiseDuration;                                   // 0x0468   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x046C   (0x0004)  MISSED
	class UClass*                                      _screamRevealAuraToKillerEffectClass;                       // 0x0470   (0x0008)  
	float                                              _screamRevealAuraToKillerDuration;                          // 0x0478   (0x0004)  
	float                                              _screamInterval;                                            // 0x047C   (0x000C)  


	/// Functions
	// Function /Script/TheK30.K30P02.GetScreamInterval
	// float GetScreamInterval();                                                                                            // [0x5c47e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30P02.Authority_UncursePlayer
	// void Authority_UncursePlayer();                                                                                       // [0x5c477f0] Final|Native|Private 
	// Function /Script/TheK30.K30P02.Authority_OnTotemStateChanged
	// void Authority_OnTotemStateChanged(ETotemState oldState, ETotemState NewState);                                       // [0x5c47720] Final|Native|Public  
	// Function /Script/TheK30.K30P02.Authority_OnSurvivorFirstScream
	// void Authority_OnSurvivorFirstScream(class ADBDPlayer* Player);                                                       // [0x5c47690] Final|Native|Public  
};

/// Class /Script/TheK30.K30P02ScreamStatusEffect
/// Size: 0x0080 (0x000350 - 0x0003D0)
class UK30P02ScreamStatusEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0350   (0x0028)  MISSED
	class UClass*                                      _screamingPlayerRevealAuraEffectClass;                      // 0x0378   (0x0008)  
	FGameplayTagContainer                              _screamPreventingTags;                                      // 0x0380   (0x0020)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x03A0   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheK30.K30P02ScreamStatusEffect.Multicast_MakePlayerScream
	// void Multicast_MakePlayerScream(float screamRevealDuration);                                                          // [0x5c48040] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK30.K30P02ScreamStatusEffect.IsTimerPaused
	// bool IsTimerPaused();                                                                                                 // [0x5c47f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30P02ScreamStatusEffect.IsTimerActive
	// bool IsTimerActive();                                                                                                 // [0x5c47f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30P02ScreamStatusEffect.GetTimerRemainingTime
	// float GetTimerRemainingTime();                                                                                        // [0x5c47e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30P02ScreamStatusEffect.GetTimerElapsedTime
	// float GetTimerElapsedTime();                                                                                          // [0x5c47e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30P02ScreamStatusEffect.GetTimerDuration
	// float GetTimerDuration();                                                                                             // [0x5c47e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30P02ScreamStatusEffect.BP_MakeSurvivorScream
	// void BP_MakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration);                             // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK30.K30P03
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UK30P03 : public UPerk
{ 
public:
	class UClass*                                      _exposedEffectClass;                                        // 0x03C8   (0x0008)  
	float                                              _cooldownTime;                                              // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
};

/// Class /Script/TheK30.K30Power
/// Size: 0x0358 (0x0004C8 - 0x000820)
class AK30Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x04C8   (0x0008)  MISSED
	SDK_UNDEFINED(16,5128) /* FMulticastInlineDelegate */ __um(OnMoriBegin);                                       // 0x04D0   (0x0010)  
	SDK_UNDEFINED(16,5129) /* FMulticastInlineDelegate */ __um(OnMoriEnd);                                         // 0x04E0   (0x0010)  
	SDK_UNDEFINED(16,5130) /* FMulticastInlineDelegate */ __um(OnPowerStateChanged);                               // 0x04F0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0500   (0x0030)  MISSED
	class UInteractor*                                 _interactor;                                                // 0x0530   (0x0008)  
	class UDrawPatrolPathInteraction*                  _drawPathInteraction;                                       // 0x0538   (0x0008)  
	class UKnightOrderComponent*                       _orderComponent;                                            // 0x0540   (0x0008)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x0548   (0x0050)  MISSED
	TArray<class AKnightGuard*>                        _guards;                                                    // 0x0598   (0x0010)  
	TArray<class UClass*>                              _guardClasses;                                              // 0x05A8   (0x0010)  
	class UClass*                                      _drawPathStatusEffectClass;                                 // 0x05B8   (0x0008)  
	class UClass*                                      _hideSurvivorVFXEffectClass;                                // 0x05C0   (0x0008)  
	class UClass*                                      _immuneToBlindEffectClass;                                  // 0x05C8   (0x0008)  
	class UClass*                                      _knightHuskClass;                                           // 0x05D0   (0x0008)  
	class UClass*                                      _palletSlowingZoneClass;                                    // 0x05D8   (0x0008)  
	class UClass*                                      _vaultSlowingZoneClass;                                     // 0x05E0   (0x0008)  
	class UClass*                                      _k30SurvivorStatusComponentClass;                           // 0x05E8   (0x0008)  
	class UClass*                                      _pullSurvivorOutOfLockerInteractionClass;                   // 0x05F0   (0x0008)  
	class APoseableHusk*                               _knightHusk;                                                // 0x05F8   (0x0008)  
	class UClass*                                      _drawPathIndicatorClass;                                    // 0x0600   (0x0008)  
	class AActor*                                      _drawPathIndicator;                                         // 0x0608   (0x0008)  
	class UPatrolTrailComponent*                       _patrolTrailComponent;                                      // 0x0610   (0x0008)  
	class UFloatingCameraNavigationComponent*          _floatingCameraNavigationComponent;                         // 0x0618   (0x0008)  
	class UK30PowerPresentationComponent*              _powerPresentationComponent;                                // 0x0620   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0628   (0x0008)  MISSED
	class UPlayerInteractionHandler*                   _interactionHandler;                                        // 0x0630   (0x0008)  
	char                                               _currentGuardIndex;                                         // 0x0638   (0x0001)  
	char                                               _nextGuardIndex;                                            // 0x0639   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6E];                                      // 0x063A   (0x006E)  MISSED
	FDBDTunableRowHandle                               _lookAtPreviewSpeed;                                        // 0x06A8   (0x0028)  
	FTunableStat                                       _maxPathLength;                                             // 0x06D0   (0x0080)  
	float                                              _remainingPathLengthPercent;                                // 0x0750   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0754   (0x0004)  MISSED
	FDBDTunableRowHandle                               _powerReadyDelay;                                           // 0x0758   (0x0028)  
	TArray<FGameplayTag>                               _isVisibleDuringPathCreationModeTags;                       // 0x0780   (0x0010)  
	FDBDTunableRowHandle                               _pathCreationModeOverFadeInTime;                            // 0x0790   (0x0028)  
	float                                              _enableInteractionAfterTeleportationDelay;                  // 0x07B8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x64];                                      // 0x07BC   (0x0064)  MISSED


	/// Functions
	// Function /Script/TheK30.K30Power.Server_OnSnappingStateChanged
	// void Server_OnSnappingStateChanged(bool IsSnapping);                                                                  // [0x57d6df0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK30.K30Power.SendPathNearlyEndingWarning
	// void SendPathNearlyEndingWarning();                                                                                   // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK30.K30Power.OnRep_KnightHusk
	// void OnRep_KnightHusk();                                                                                              // [0x5c484f0] Final|Native|Private 
	// Function /Script/TheK30.K30Power.OnPowerStateChanged__DelegateSignature
	// void OnPowerStateChanged__DelegateSignature(EPowerState previousState, EPowerState NewState);                         // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK30.K30Power.OnOrderTargetChanged
	// void OnOrderTargetChanged();                                                                                          // [0x5c48440] Final|Native|Private 
	// Function /Script/TheK30.K30Power.OnMoriStateChanged__DelegateSignature
	// void OnMoriStateChanged__DelegateSignature();                                                                         // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK30.K30Power.OnInteractionStateChanged
	// void OnInteractionStateChanged(bool IsCharging, bool IsChargeCompleted);                                              // [0x5c48370] Final|Native|Public  
	// Function /Script/TheK30.K30Power.OnEndOverlapWindow
	// void OnEndOverlapWindow(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5c48210] Final|Native|Private 
	// Function /Script/TheK30.K30Power.Multicast_OnSnappingStateChanged
	// void Multicast_OnSnappingStateChanged(bool IsSnapping);                                                               // [0x5c48180] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK30.K30Power.IsSnapping
	// bool IsSnapping();                                                                                                    // [0x5c47f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30Power.IsDrawingPath
	// bool IsDrawingPath();                                                                                                 // [0x5c47ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30Power.IsChargingPower
	// bool IsChargingPower();                                                                                               // [0x5c47ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.K30Power.Cosmetic_UpdateRemainingPathLength
	// void Cosmetic_UpdateRemainingPathLength(float remainingPathLengthPercent);                                            // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.K30Power.Cosmetic_OnPathDrawAvailableEnd
	// void Cosmetic_OnPathDrawAvailableEnd();                                                                               // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.K30Power.Cosmetic_OnPathDrawAvailableBegin
	// void Cosmetic_OnPathDrawAvailableBegin();                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK30.K30PowerPresentationComponent
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UK30PowerPresentationComponent : public UPresentationItemProgressComponent
{ 
public:
};

/// Class /Script/TheK30.K30PresentationPowerFadeComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK30PresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
};

/// Class /Script/TheK30.K30RepeatGuardSpawnAddon
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UK30RepeatGuardSpawnAddon : public UItemAddon
{ 
public:
	char                                               _guardIndexToRepeat;                                        // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
};

/// Class /Script/TheK30.K30SurvivorCosmeticHelperActor
/// Size: 0x0020 (0x000270 - 0x000290)
class AK30SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0270   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged
	// void Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged(bool isFlagCaptureBuffActive);                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntEnd
	// void Cosmetic_OnHuntEnd();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntBegin
	// void Cosmetic_OnHuntBegin();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK30.K30SurvivorStatusComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UK30SurvivorStatusComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class ACamperPlayer*                               _owningSurvivor;                                            // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,5131) /* TWeakObjectPtr<ACamperPlayer*> */ __um(_detectedSurvivor);                            // 0x00C8   (0x0008)  
	SDK_UNDEFINED(8,5132) /* TWeakObjectPtr<AK30Power*> */ __um(_k30Power);                                        // 0x00D0   (0x0008)  
};

/// Class /Script/TheK30.K30Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK30Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK30.K30Utilities.GetNextGuardIndex
	// int32_t GetNextGuardIndex(class AActor* TheK30);                                                                      // [0x5c47c80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK30.K30Utilities.GetNextGuard
	// class AKnightGuard* GetNextGuard(class AActor* TheK30);                                                               // [0x5c47bf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK30.K30Utilities.GetK30Power
	// class AK30Power* GetK30Power(class AActor* TheK30);                                                                   // [0x5c47b60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK30.K30Utilities.GetCurrentGuardIndex
	// int32_t GetCurrentGuardIndex(class AActor* TheK30);                                                                   // [0x5c47a40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK30.K30Utilities.GetCurrentGuard
	// class AKnightGuard* GetCurrentGuard(class AActor* TheK30);                                                            // [0x5c479b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK30.KnightGuard
/// Size: 0x05F0 (0x0011B0 - 0x0017A0)
class AKnightGuard : public ADBDPlayer
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x11B0   (0x0058)  MISSED
	class USceneComponent*                             _attackZonePivot;                                           // 0x1208   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x1210   (0x0008)  MISSED
	float                                              _guardNoiseEventTimeInterval;                               // 0x1218   (0x0004)  
	float                                              _guardNoiseEventRange;                                      // 0x121C   (0x0004)  
	bool                                               _isActive;                                                  // 0x1220   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x1221   (0x0007)  MISSED
	class ASlasherPlayer*                              _owningKiller;                                              // 0x1228   (0x0008)  
	class AK30Power*                                   _killerPower;                                               // 0x1230   (0x0008)  
	class UClass*                                      _flagClass;                                                 // 0x1238   (0x0008)  
	class AGuardFlag*                                  _guardFlag;                                                 // 0x1240   (0x0008)  
	class UClass*                                      _attackComponentClass;                                      // 0x1248   (0x0008)  
	class UGuardAttackComponent*                       _attackComponent;                                           // 0x1250   (0x0008)  
	class UGuardAttackableComponent*                   _attackableComponent;                                       // 0x1258   (0x0008)  
	class UCapsuleComponent*                           _attackableCapsule;                                         // 0x1260   (0x0008)  
	class UClass*                                      _huntComponentClass;                                        // 0x1268   (0x0008)  
	class UGuardHuntComponent*                         _huntComponent;                                             // 0x1270   (0x0008)  
	class UClass*                                      _patrolComponentClass;                                      // 0x1278   (0x0008)  
	class UGuardPatrolComponent*                       _patrolComponent;                                           // 0x1280   (0x0008)  
	class UClass*                                      _controllerClass;                                           // 0x1288   (0x0008)  
	class UAnimationMontageSlave*                      _animationFollower;                                         // 0x1290   (0x0008)  
	FDBDTunableRowHandle                               _gravityScale;                                              // 0x1298   (0x0028)  
	FTunableStat                                       _patrolMovementSpeed;                                       // 0x12C0   (0x0080)  
	FDBDTunableRowHandle                               _patrolStartupDelay;                                        // 0x1340   (0x0028)  
	FTunableStat                                       _patrolDuration;                                            // 0x1368   (0x0080)  
	FDBDTunableRowHandle                               _huntMovementSpeed;                                         // 0x13E8   (0x0028)  
	FTunableStat                                       _huntDuration;                                              // 0x1410   (0x0080)  
	FTunableStat                                       _orderDuration;                                             // 0x1490   (0x0080)  
	FDBDTunableRowHandle                               _flagActivationTime;                                        // 0x1510   (0x0028)  
	FDBDTunableRowHandle                               _shouldInflictBleed;                                        // 0x1538   (0x0028)  
	FDBDTunableRowHandle                               _spawningVisionRange;                                       // 0x1560   (0x0028)  
	FTunableStat                                       _patrollingVisionRange;                                     // 0x1588   (0x0080)  
	FDBDTunableRowHandle                               _palletAndVaultsSlowedDownSpeed;                            // 0x1608   (0x0028)  
	FDBDTunableRowHandle                               _palletAndVaultsSlowDownDuration;                           // 0x1630   (0x0028)  
	FDBDTunableRowHandle                               _immediateGeneratorRegressionPercent;                       // 0x1658   (0x0028)  
	FDBDTunableRowHandle                               _huntAuraVisibilityMinDistanceToKiller;                     // 0x1680   (0x0028)  
	FGameplayTag                                       _guardHitSurvivorScoreEvent;                                // 0x16A8   (0x000C)  
	FGameplayTag                                       _guardDetectSurvivorScoreEvent;                             // 0x16B4   (0x000C)  
	FGameplayTag                                       _guardBreakInteractableEvent;                               // 0x16C0   (0x000C)  
	FGameplayTag                                       _guardChaseEndedEvent;                                      // 0x16CC   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x16D8   (0x0004)  MISSED
	FName                                              _guardAnimTag;                                              // 0x16DC   (0x000C)  
	unsigned char                                      UnknownData04_5[0x60];                                      // 0x16E8   (0x0060)  MISSED
	SDK_UNDEFINED(80,5133) /* TSet<AActor*> */         __um(_overlappingSurvivorsAndVaults);                       // 0x1748   (0x0050)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x1798   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK30.KnightGuard.OnRep_OwningKiller
	// void OnRep_OwningKiller();                                                                                            // [0x5c48510] Final|Native|Private 
	// Function /Script/TheK30.KnightGuard.OnRep_IsActive
	// void OnRep_IsActive(bool previousIsActive);                                                                           // [0x5c48460] Final|Native|Private 
	// Function /Script/TheK30.KnightGuard.Multicast_OnPatrolEnded
	// void Multicast_OnPatrolEnded(class ADBDPlayer* foundSurvivor);                                                        // [0x5c480f0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheK30.KnightGuard.Multicast_OnOrderEnded
	// void Multicast_OnOrderEnded();                                                                                        // [0x5c480d0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheK30.KnightGuard.Multicast_CosmeticHuntEnded
	// void Multicast_CosmeticHuntEnded(EGuardHuntEndReason Reason);                                                         // [0x5c47fc0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheK30.KnightGuard.GetPatrollingVisionRangeBaseValue
	// float GetPatrollingVisionRangeBaseValue();                                                                            // [0x5c47dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetPatrolDuration
	// float GetPatrolDuration();                                                                                            // [0x5c47da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetPatrolComponent
	// class UGuardPatrolComponent* GetPatrolComponent();                                                                    // [0x5c47d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetOwningKiller
	// class ASlasherPlayer* GetOwningKiller();                                                                              // [0x5c47d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetOrderDuration
	// float GetOrderDuration();                                                                                             // [0x5c47d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetImmediateGeneratorRegressionPercent
	// float GetImmediateGeneratorRegressionPercent();                                                                       // [0x5c47b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetHuntDuration
	// float GetHuntDuration();                                                                                              // [0x5c47b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.GetHuntAuraVisibilityMinDistanceToKiller
	// float GetHuntAuraVisibilityMinDistanceToKiller();                                                                     // [0x5c47ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightGuard.Cosmetic_StopOverlappingVaultOrSurvivor
	// void Cosmetic_StopOverlappingVaultOrSurvivor();                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_StartOverlappingVaultOrSurvivor
	// void Cosmetic_StartOverlappingVaultOrSurvivor();                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_ShowGuard
	// void Cosmetic_ShowGuard();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnPatrolStarted
	// void Cosmetic_OnPatrolStarted();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnPatrolEnded
	// void Cosmetic_OnPatrolEnded(class ADBDPlayer* foundSurvivor);                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnOrderStarted
	// void Cosmetic_OnOrderStarted();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnOrderEnded
	// void Cosmetic_OnOrderEnded();                                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnHuntTeleportStarted
	// void Cosmetic_OnHuntTeleportStarted(float Duration);                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnHuntEnded
	// void Cosmetic_OnHuntEnded(EGuardHuntEndReason Reason);                                                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_OnGuardVisionRadiusChanged
	// void Cosmetic_OnGuardVisionRadiusChanged(bool IsVisible, float Radius, float Angle);                                  // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_HuntChaseStarted
	// void Cosmetic_HuntChaseStarted();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightGuard.Cosmetic_HideGuard
	// void Cosmetic_HideGuard();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK30.GuardAnimInstance
/// Size: 0x0020 (0x000540 - 0x000560)
class UGuardAnimInstance : public UPlayerAnimInstance
{ 
public:
	class AKnightGuard*                                _owningGuard;                                               // 0x0540   (0x0008)  
	float                                              _forwardVelocity;                                           // 0x0548   (0x0004)  
	float                                              _lateralVelocity;                                           // 0x054C   (0x0004)  
	float                                              _animSpeed;                                                 // 0x0550   (0x0004)  
	float                                              _animDirection;                                             // 0x0554   (0x0004)  
	bool                                               _isActive;                                                  // 0x0558   (0x0001)  
	bool                                               _isPatrolling;                                              // 0x0559   (0x0001)  
	bool                                               _isPatrollingForward;                                       // 0x055A   (0x0001)  
	bool                                               _isHunting;                                                 // 0x055B   (0x0001)  
	bool                                               _isTeleporting;                                             // 0x055C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x055D   (0x0003)  MISSED
};

/// Class /Script/TheK30.KnightGuardStateMachine
/// Size: 0x0000 (0x000130 - 0x000130)
class UKnightGuardStateMachine : public UPlayerStateMachine
{ 
public:
};

/// Class /Script/TheK30.KnightHuskStunnableComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UKnightHuskStunnableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/TheK30.KnightOrderComponent
/// Size: 0x0138 (0x0000B8 - 0x0001F0)
class UKnightOrderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	TArray<class AInteractable*>                       _possiblyTargetableObjects;                                 // 0x00C8   (0x0010)  
	TArray<class AInteractable*>                       _targetableObjects;                                         // 0x00D8   (0x0010)  
	FLinearColor                                       _targetedColor;                                             // 0x00E8   (0x0010)  
	bool                                               _showTargetableAura;                                        // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FLinearColor                                       _targetableColor;                                           // 0x00FC   (0x0010)  
	bool                                               _showTargetableVFXWhilePowerIsReady;                        // 0x010C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	class AInteractable*                               _currentTarget;                                             // 0x0110   (0x0008)  
	class AInteractable*                               _orderTarget;                                               // 0x0118   (0x0008)  
	class UInteractionDefinition*                      _bestInteraction;                                           // 0x0120   (0x0008)  
	class UInteractionDefinition*                      _currentInteraction;                                        // 0x0128   (0x0008)  
	class AKnightGuard*                                _guardWaitingForInteraction;                                // 0x0130   (0x0008)  
	unsigned char                                      UnknownData03_5[0x38];                                      // 0x0138   (0x0038)  MISSED
	FDBDTunableRowHandle                               _targetingRange;                                            // 0x0170   (0x0028)  
	class UClass*                                      _palletOrderClass;                                          // 0x0198   (0x0008)  
	class UClass*                                      _killerBreakPalletClass;                                    // 0x01A0   (0x0008)  
	class UClass*                                      _generatorOrderClass;                                       // 0x01A8   (0x0008)  
	class UClass*                                      _killerBreakGeneratorClass;                                 // 0x01B0   (0x0008)  
	class UClass*                                      _breakableOrderClass;                                       // 0x01B8   (0x0008)  
	class UClass*                                      _killerBreakBreakableClass;                                 // 0x01C0   (0x0008)  
	float                                              _updateRate;                                                // 0x01C8   (0x0004)  
	float                                              _maxTargetingAngle;                                         // 0x01CC   (0x0004)  
	float                                              _downRaycastLength;                                         // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x1C];                                      // 0x01D4   (0x001C)  MISSED


	/// Functions
	// Function /Script/TheK30.KnightOrderComponent.OnTargetChanged__DelegateSignature
	// void OnTargetChanged__DelegateSignature();                                                                            // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK30.KnightOrderComponent.OnGameEventDispatched
	// void OnGameEventDispatched(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x5c4aee0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK30.KnightOrderComponent.OnCurrentInteractionFinished
	// void OnCurrentInteractionFinished();                                                                                  // [0x5c4adf0] Final|Native|Private 
	// Function /Script/TheK30.KnightOrderComponent.GetTargetingRange
	// float GetTargetingRange();                                                                                            // [0x5c4ad30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.KnightOrderComponent.Cosmetic_OnTargetableObjectsChanged
	// void Cosmetic_OnTargetableObjectsChanged(class AInteractable* Object, bool isTargetable);                             // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK30.KnightOrderComponent.Cosmetic_OnNewTargetSelected
	// void Cosmetic_OnNewTargetSelected(class AInteractable* newTarget, class AInteractable* oldTarget);                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK30.NavigationQueryFilter_Guard
/// Size: 0x0000 (0x000070 - 0x000070)
class UNavigationQueryFilter_Guard : public UNavigationQueryFilter_Player
{ 
public:
};

/// Class /Script/TheK30.NearUndestroyedPallet
/// Size: 0x0058 (0x0000F8 - 0x000150)
class UNearUndestroyedPallet : public URangeBasedCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00F8   (0x0058)  MISSED
};

/// Class /Script/TheK30.NearFallenPallet
/// Size: 0x0000 (0x000150 - 0x000150)
class UNearFallenPallet : public UNearUndestroyedPallet
{ 
public:
};

/// Struct /Script/TheK30.TrailData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTrailData
{ 
	TArray<class ATrailNode*>                          _visualNodes;                                               // 0x0000   (0x0010)  
	TArray<FVector>                                    _navigationWaypoints;                                       // 0x0010   (0x0010)  
	class AActor*                                      _owner;                                                     // 0x0020   (0x0008)  
	bool                                               _isCompleted;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/TheK30.TrailSettings
/// Size: 0x0068 (0x000000 - 0x000068)
struct FTrailSettings
{ 
	FDBDTunableRowHandle                               MaximumDistanceBetweenNodes;                                // 0x0000   (0x0028)  
	FDBDTunableRowHandle                               MinimumDistanceBetweenVisualNodes;                          // 0x0028   (0x0028)  
	float                                              CapsuleHalfHeight;                                          // 0x0050   (0x0004)  
	float                                              CapsuleRadius;                                              // 0x0054   (0x0004)  
	SDK_UNDEFINED(1,5134) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	class UClass*                                      _trailNodeClass;                                            // 0x0060   (0x0008)  
};

/// Class /Script/TheK30.PatrolTrailComponent
/// Size: 0x00E8 (0x0000B8 - 0x0001A0)
class UPatrolTrailComponent : public UActorComponent
{ 
public:
	FTrailData                                         _trail;                                                     // 0x00B8   (0x0030)  
	FTrailSettings                                     _trailSettings;                                             // 0x00E8   (0x0068)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0150   (0x0010)  MISSED
	float                                              clearPathNodeDelay;                                         // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_6[0x3C];                                      // 0x0164   (0x003C)  MISSED


	/// Functions
	// Function /Script/TheK30.PatrolTrailComponent.IsTrailCompleted
	// bool IsTrailCompleted();                                                                                              // [0x49bd800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.GetPreviousNode
	// class ATrailNode* GetPreviousNode(class ATrailNode* currentNode);                                                     // [0x5c4ac60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.GetNextNode
	// class ATrailNode* GetNextNode(class ATrailNode* currentNode);                                                         // [0x5c4abc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.GetLastPosition
	// FVector GetLastPosition();                                                                                            // [0x5c4ab80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.GetLastNode
	// class ATrailNode* GetLastNode();                                                                                      // [0x5c4ab50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.GetFirstNode
	// class ATrailNode* GetFirstNode();                                                                                     // [0x5c4aac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.GetCurrentTrailLength
	// float GetCurrentTrailLength();                                                                                        // [0x5c4aa90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.DoesTrailExist
	// bool DoesTrailExist();                                                                                                // [0x5c4aa60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.PatrolTrailComponent.Authority_StopRecordingTrail
	// void Authority_StopRecordingTrail();                                                                                  // [0x5c4aa40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheK30.PatrolTrailComponent.Authority_StartRecordingTrail
	// void Authority_StartRecordingTrail();                                                                                 // [0x5c4aa20] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK30.S34P01
/// Size: 0x0120 (0x0003C8 - 0x0004E8)
class US34P01 : public UPerk
{ 
public:
	class UChargeStrategy*                             _chargeStrategyWhenActive;                                  // 0x03C8   (0x0008)  
	class UChargeableInteractionDefinition*            _redirectedInteraction;                                     // 0x03D0   (0x0008)  
	FSecondaryInteractionProperties                    _startAccumulateSecondaryActionProperties;                  // 0x03D8   (0x0038)  
	FSecondaryInteractionProperties                    _useTokensSecondaryActionProperties;                        // 0x0410   (0x0038)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x0448   (0x003C)  MISSED
	bool                                               _isPerkActive;                                              // 0x0484   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0485   (0x0003)  MISSED
	FTagStateBool                                      _isAccumulatingTokens;                                      // 0x0488   (0x0030)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x04B8   (0x0004)  MISSED
	float                                              _initialCountdownTime;                                      // 0x04BC   (0x000C)  
	float                                              _accumulatedPercentMultiplier;                              // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x1C];                                      // 0x04CC   (0x001C)  MISSED


	/// Functions
	// Function /Script/TheK30.S34P01.Server_AbilityTwoPressed
	// void Server_AbilityTwoPressed(bool IsPressed);                                                                        // [0x5c4b050] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheK30.S34P01.OnRep_IsPerkActive
	// void OnRep_IsPerkActive();                                                                                            // [0x5c4b010] Final|Native|Private 
	// Function /Script/TheK30.S34P01.OnRep_IsAccumulatingTokens
	// void OnRep_IsAccumulatingTokens();                                                                                    // [0x5c4aff0] Final|Native|Private 
	// Function /Script/TheK30.S34P01.OnDamageStateChanged
	// void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);                  // [0x5c4ae10] Final|Native|Private 
	// Function /Script/TheK30.S34P01.Multicast_OnUseTokens
	// void Multicast_OnUseTokens();                                                                                         // [0x501b910] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK30.S34P01.IsPerkActive
	// bool IsPerkActive();                                                                                                  // [0x5c4adc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.S34P01.GetInitialCountdownAtLevel
	// float GetInitialCountdownAtLevel();                                                                                   // [0x5c4ab20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.S34P01.Cosmetic_OnUseCharge
	// void Cosmetic_OnUseCharge(class ADBDPlayer* OwningPlayer);                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.S34P01.Cosmetic_OnStopChargingPerk
	// void Cosmetic_OnStopChargingPerk(class ADBDPlayer* OwningPlayer);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.S34P01.Cosmetic_OnStartChargingPerk
	// void Cosmetic_OnStartChargingPerk(class ADBDPlayer* OwningPlayer);                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.S34P01.Cosmetic_OnFullCharge
	// void Cosmetic_OnFullCharge(class ADBDPlayer* OwningPlayer);                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK30.S34P01.Authority_OnSkillCheckResponse
	// void Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange); // [0x5c4a7e0] Final|Native|Private 
	// Function /Script/TheK30.S34P01.Authority_OnAccumulateRedirectedCharge
	// void Authority_OnAccumulateRedirectedCharge(float ChargeAmount, float maxCharge);                                     // [0x5c4a710] Final|Native|Public  
};

/// Class /Script/TheK30.S34P02
/// Size: 0x0008 (0x0003C8 - 0x0003D0)
class US34P02 : public UPerk
{ 
public:
	class UClass*                                      _revealKillerStatusClass;                                   // 0x03C8   (0x0008)  
};

/// Class /Script/TheK30.S34P03
/// Size: 0x00D0 (0x0003C8 - 0x000498)
class US34P03 : public UPerk
{ 
public:
	TArray<class AGenerator*>                          _generatorsInRange;                                         // 0x03C8   (0x0010)  
	SDK_UNDEFINED(80,5135) /* TMap<ADBDPlayer*, UStatusEffect*> */ __um(_activeStatusEffects);                     // 0x03D8   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0428   (0x0050)  MISSED
	float                                              _generatorRangeFromPlayer;                                  // 0x0478   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	class UClass*                                      _repairSpeedModifierClass;                                  // 0x0480   (0x0008)  
	float                                              _repairSpeedValues;                                         // 0x0488   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0494   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK30.S34P03.GetRepairSpeedAtLevel
	// float GetRepairSpeedAtLevel();                                                                                        // [0x5c4ad00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.S34P03.GetGeneratorRangeFromPlayer
	// float GetGeneratorRangeFromPlayer();                                                                                  // [0x5c4aaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK30.TrailNode
/// Size: 0x0010 (0x000230 - 0x000240)
class ATrailNode : public AActor
{ 
public:
	FVector                                            PreviousNodePosition;                                       // 0x0230   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x023C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK30.TrailNode.OnRep_PreviousNodePosition
	// void OnRep_PreviousNodePosition();                                                                                    // [0x5c4b030] Final|Native|Protected 
	// Function /Script/TheK30.TrailNode.IsOwnerLocallyObserved
	// bool IsOwnerLocallyObserved();                                                                                        // [0x5c4ad90] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.TrailNode.IsFirstNode
	// bool IsFirstNode();                                                                                                   // [0x5c4ad60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK30.TrailNode.Cosmetic_PrepareForRemoval
	// void Cosmetic_PrepareForRemoval();                                                                                    // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK30.TrailNode.Client_UpdateTrail
	// void Client_UpdateTrail();                                                                                            // [0x61c32d0] Event|Protected|BlueprintEvent 
};

