
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Achievements
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: GraphicsExtensions
/// dependency: NetworkUtilities
/// dependency: ReversibleActionSystem
/// dependency: StatSystem

/// Enum /Script/TheK31.EK31DroneStateID
/// Size: 0x12
enum class EK31DroneStateID : uint8_t
{
	EK31DroneStateID__NONE                                                           = 0,
	EK31DroneStateID__IN_STASH                                                       = 1,
	EK31DroneStateID__BEING_DEPLOYED                                                 = 2,
	EK31DroneStateID__INITIALIZING                                                   = 3,
	EK31DroneStateID__DISABLED                                                       = 4,
	EK31DroneStateID__STEALTH                                                        = 5,
	EK31DroneStateID__SCOUTING                                                       = 6,
	EK31DroneStateID__ACTIVE                                                         = 7,
	EK31DroneStateID__BEING_HACKED                                                   = 8,
	EK31DroneStateID__DESTROYED                                                      = 9,
	EK31DroneStateID__RECALLING                                                      = 10,
	EK31DroneStateID__EK31DroneStateID_MAX                                           = 11
};

/// Enum /Script/TheK31.EK31DroneMovementMode
/// Size: 0x04
enum class EK31DroneMovementMode : uint8_t
{
	EK31DroneMovementMode__NORMAL                                                    = 0,
	EK31DroneMovementMode__DEPLOY                                                    = 1,
	EK31DroneMovementMode__SNAPPING                                                  = 2,
	EK31DroneMovementMode__EK31DroneMovementMode_MAX                                 = 3
};

/// Enum /Script/TheK31.EDroneFlyingHeight
/// Size: 0x03
enum class EDroneFlyingHeight : uint8_t
{
	EDroneFlyingHeight__Low                                                          = 0,
	EDroneFlyingHeight__High                                                         = 1,
	EDroneFlyingHeight__EDroneFlyingHeight_MAX                                       = 2
};

/// Enum /Script/TheK31.EK31DroneActionResponse
/// Size: 0x03
enum class EK31DroneActionResponse : uint8_t
{
	EK31DroneActionResponse__AUTHORIZED                                              = 0,
	EK31DroneActionResponse__DENIED                                                  = 1,
	EK31DroneActionResponse__EK31DroneActionResponse_MAX                             = 2
};

/// Enum /Script/TheK31.EK31PowerState
/// Size: 0x03
enum class EK31PowerState : uint8_t
{
	EK31PowerState__Deployment                                                       = 0,
	EK31PowerState__Inspection                                                       = 1,
	EK31PowerState__EK31PowerState_MAX                                               = 2
};

/// Class /Script/TheK31.K31DroneBaseAction
/// Size: 0x0000 (0x000030 - 0x000030)
class UK31DroneBaseAction : public UObject
{ 
public:
};

/// Class /Script/TheK31.K31DroneChangeStateAction
/// Size: 0x0008 (0x000030 - 0x000038)
class UK31DroneChangeStateAction : public UK31DroneBaseAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/TheK31.ActivateK31DroneAction
/// Size: 0x0000 (0x000038 - 0x000038)
class UActivateK31DroneAction : public UK31DroneChangeStateAction
{ 
public:
};

/// Class /Script/TheK31.ActiveDroneZoneLingeringEffect
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UActiveDroneZoneLingeringEffect : public UBaseLingeringStatusEffect
{ 
public:
};

/// Class /Script/TheK31.Addon_K31Power_01
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAddon_K31Power_01 : public UItemAddon
{ 
public:
	class UClass*                                      _modifySkillCheckDifficultyEffectClass;                     // 0x02B8   (0x0008)  
	float                                              _skillCheckDifficultyModifier;                              // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Class /Script/TheK31.Addon_K31Power_02
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAddon_K31Power_02 : public UItemAddon
{ 
public:
	class UClass*                                      _blindnessEffectClass;                                      // 0x02B8   (0x0008)  
};

/// Class /Script/TheK31.Addon_K31Power_03
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAddon_K31Power_03 : public UItemAddon
{ 
public:
	class UClass*                                      _actionSpeedEffect;                                         // 0x02B8   (0x0008)  
	float                                              _actionSpeedEffectDuration;                                 // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Class /Script/TheK31.Addon_K31Power
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAddon_K31Power : public UItemAddon
{ 
public:
	class UClass*                                      _exhaustedEffectClass;                                      // 0x02B8   (0x0008)  
	float                                              _exhaustedEffectDurationSeconds;                            // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Class /Script/TheK31.DeployDroneInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class UDeployDroneInteraction : public UInteractionDefinition
{ 
public:
	bool                                               _shouldDeploymentSetPowerOnCooldown;                        // 0x0648   (0x0001)  
	bool                                               _canPlaceDroneWhilePowerIsOnCooldown;                       // 0x0649   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x064A   (0x0016)  MISSED
};

/// Class /Script/TheK31.DroneRestrictedPlacementAreaStrategy
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDroneRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneEndPlay
	// void OnDroneEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                  // [0x5c9dbe0] Final|Native|Private 
	// Function /Script/TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneAcquiredChanged
	// void OnDroneAcquiredChanged(bool acquired);                                                                           // [0x5c9db50] Final|Native|Private 
};

/// Class /Script/TheK31.HackableDroneState
/// Size: 0x0000 (0x000030 - 0x000030)
class UHackableDroneState : public UInterface
{ 
public:
};

/// Class /Script/TheK31.HitPlayerAfterRecentDetectionScoreEmitter
/// Size: 0x0090 (0x000038 - 0x0000C8)
class UHitPlayerAfterRecentDetectionScoreEmitter : public UPlayerScoreEmitter
{ 
public:
	float                                              _timeSinceDetectionDuration;                                // 0x0038   (0x0004)  
	FGameplayTag                                       _scoreEvent;                                                // 0x003C   (0x000C)  
	SDK_UNDEFINED(80,4119) /* TMap<ADBDPlayer*, float> */ __um(_trackers);                                         // 0x0048   (0x0050)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0098   (0x0030)  MISSED
};

/// Class /Script/TheK31.HitPlayerInActiveZoneScoreEmitter
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UHitPlayerInActiveZoneScoreEmitter : public UPlayerScoreEmitter
{ 
public:
	float                                              _activeZoneLingeringDuration;                               // 0x0038   (0x0004)  
	FGameplayTag                                       _scoreEvent;                                                // 0x003C   (0x000C)  
	SDK_UNDEFINED(80,4120) /* TMap<AActor*, FActiveZoneOverlapTracker> */ __um(_trackers);                         // 0x0048   (0x0050)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0098   (0x0020)  MISSED
};

/// Class /Script/TheK31.InspectK31DroneInteraction
/// Size: 0x0170 (0x000790 - 0x000900)
class UInspectK31DroneInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0790   (0x0010)  MISSED
	class UClass*                                      _actionProcessorClass;                                      // 0x07A0   (0x0008)  
	FDBDTunableRowHandle                               _inputInterval;                                             // 0x07A8   (0x0028)  
	bool                                               _enableMaxSpeedSlowdown;                                    // 0x07D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x07D1   (0x0007)  MISSED
	class UCurveFloat*                                 _chargingSpeedCurve;                                        // 0x07D8   (0x0008)  
	class UCurveFloat*                                 _dechargingSpeedCurve;                                      // 0x07E0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x07E8   (0x0028)  MISSED
	class UK31DroneActionProcessor*                    _actionProcessor;                                           // 0x0810   (0x0008)  
	unsigned char                                      UnknownData03_6[0xE8];                                      // 0x0818   (0x00E8)  MISSED


	/// Functions
	// Function /Script/TheK31.InspectK31DroneInteraction.Server_SetIsPressingInput
	// void Server_SetIsPressingInput(bool isPressing);                                                                      // [0x5c9def0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK31.InspectK31DroneInteraction.OnChargeCompletedChanged
	// void OnChargeCompletedChanged(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                             // [0x5c9da50] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK31.K31AnalyticsComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UK31AnalyticsComponent : public UActorComponent
{ 
public:
	float                                              _analyticInspectionTime;                                    // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x00BC   (0x001C)  MISSED
};

/// Class /Script/TheK31.K31AnimInstance
/// Size: 0x0050 (0x000610 - 0x000660)
class UK31AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isInspecting;                                              // 0x0610   (0x0001)  
	bool                                               _isDeployingADrone;                                         // 0x0611   (0x0001)  
	bool                                               _isReceivingADronePassively;                                // 0x0612   (0x0001)  
	bool                                               _isRecallingADrone;                                         // 0x0613   (0x0001)  
	bool                                               _isActivatingADrone;                                        // 0x0614   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0615   (0x0003)  MISSED
	class UCustomizationAnimationSelector*             _animationSelector;                                         // 0x0618   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0620   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheK31.K31AnimInstance.ResetIsReceivingADronePassively
	// void ResetIsReceivingADronePassively();                                                                               // [0x5c9de20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK31.K31AnimInstance.ResetIsRecallingADrone
	// void ResetIsRecallingADrone();                                                                                        // [0x5c9de00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK31.K31AnimInstance.ResetIsDeployingADrone
	// void ResetIsDeployingADrone();                                                                                        // [0x5c9dde0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK31.K31AnimInstance.ResetIsActivatingADrone
	// void ResetIsActivatingADrone();                                                                                       // [0x5c0bc60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK31.K31AnimInstance.OnGameEventReceived
	// void OnGameEventReceived(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                    // [0x5c9dcb0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK31.K31AnimInstance.OnCustomizationAnimationMappingIDChanged
	// void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31AnimInstance.GetCustomizationMappingID
	// int32_t GetCustomizationMappingID();                                                                                  // [0x5c9d820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31AnimInstance.GetCustoAnimTags
	// TArray<FName> GetCustoAnimTags();                                                                                     // [0x5c9d7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31ClawTrap
/// Size: 0x0000 (0x000230 - 0x000230)
class AK31ClawTrap : public AActor
{ 
public:


	/// Functions
	// Function /Script/TheK31.K31ClawTrap.OnAnimNotifyManuallyRemoveTrap
	// void OnAnimNotifyManuallyRemoveTrap();                                                                                // [0x5c9da30] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31ClawTrap.Cosmetic_Spark
	// void Cosmetic_Spark();                                                                                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31ClawTrap.Cosmetic_OnTrapRemoved
	// void Cosmetic_OnTrapRemoved(bool wasRemovedAutomatically);                                                            // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31ClawTrap.Cosmetic_OnTrapAdded
	// void Cosmetic_OnTrapAdded();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31ClawTrap.Cosmetic_OnIsBroadcastingChanged
	// void Cosmetic_OnIsBroadcastingChanged(bool isBroadcasting);                                                           // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31ClawTrap.Cosmetic_OnBatteryChargeUpdated
	// void Cosmetic_OnBatteryChargeUpdated(float newCharge);                                                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31ClawTrap.Cosmetic_OnAddedByDrone
	// void Cosmetic_OnAddedByDrone(class AK31Drone* originatingDrone, float clawTrapCosmeticDelayDuration);                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK31.K31Drone
/// Size: 0x00E8 (0x000338 - 0x000420)
class AK31Drone : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0338   (0x0010)  MISSED
	class USceneComponent*                             _movingRootComponent;                                       // 0x0348   (0x0008)  
	class UChildActorComponent*                        _laserChildActorComponent;                                  // 0x0350   (0x0008)  
	class UK31DroneLaserController*                    _laserController;                                           // 0x0358   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _droneMesh;                                                 // 0x0360   (0x0008)  
	class UStaticMeshComponent*                        _activeZoneMesh;                                            // 0x0368   (0x0008)  
	class UK31DroneMovementComponent*                  _movementComponent;                                         // 0x0370   (0x0008)  
	class UK31DroneFlightController*                   _flightController;                                          // 0x0378   (0x0008)  
	class UAuthoritativePoolableActorComponent*        _poolableActorComponent;                                    // 0x0380   (0x0008)  
	class UK31DroneOwnershipComponent*                 _ownershipComponent;                                        // 0x0388   (0x0008)  
	class UK31DroneStateController*                    _stateController;                                           // 0x0390   (0x0008)  
	class UK31DroneDebugComponent*                     _debugComponent;                                            // 0x0398   (0x0008)  
	class UK31DroneZoneComponent*                      _droneZoneComponent;                                        // 0x03A0   (0x0008)  
	class UK31TrapProximitySensor*                     _trapProximitySensor;                                       // 0x03A8   (0x0008)  
	class UK31DronePlacementRecaller*                  _placementRecallerComponent;                                // 0x03B0   (0x0008)  
	class UK31DroneHackableComponent*                  _hackableComponent;                                         // 0x03B8   (0x0008)  
	class UK31DroneHackableAvoidanceSensor*            _avoidanceSensor;                                           // 0x03C0   (0x0008)  
	class UDeployDroneInteraction*                     _deployInteraction;                                         // 0x03C8   (0x0008)  
	class UDBDNavModifierComponent*                    _navModifierComponent;                                      // 0x03D0   (0x0008)  
	class UK31DroneDangerPredictionComponent*          _dangerPredictionComponent;                                 // 0x03D8   (0x0008)  
	class UMapActorComponent*                          _droneMapActorComponent;                                    // 0x03E0   (0x0008)  
	class ADBDPlayer*                                  _lastOwner;                                                 // 0x03E8   (0x0008)  
	class ULocalPlayerTrackerComponent*                _localPlayerTracker;                                        // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x03F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK31.K31Drone.OnAcquiredChanged
	// void OnAcquiredChanged(bool acquired);                                                                                // [0x5c9d9a0] Final|Native|Private 
	// Function /Script/TheK31.K31Drone.Native_OnLocallyObservedChanged
	// void Native_OnLocallyObservedChanged();                                                                               // [0x5c9d980] Final|Native|Private 
	// Function /Script/TheK31.K31Drone.Cosmetic_OnRevertToScoutingCurrentChargeChanged
	// void Cosmetic_OnRevertToScoutingCurrentChargeChanged(float chargePercentage);                                         // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31Drone.Cosmetic_OnLocallyObservedChanged
	// void Cosmetic_OnLocallyObservedChanged();                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31Drone.Cosmetic_OnIsHackableStateChanged
	// void Cosmetic_OnIsHackableStateChanged(bool IsHackable);                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/TheK31.K31DroneActionProcessor
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK31DroneActionProcessor : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheK31.K31DroneActionProcessor.Server_RequestAction
	// void Server_RequestAction(FK31DroneActionRequest Request);                                                            // [0x5c9de40] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/TheK31.K31DroneActionProcessor.Client_ReceiveActionResponse
	// void Client_ReceiveActionResponse(FK31DroneActionResponse Response);                                                  // [0x5c9d6e0] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/TheK31.K31DroneState
/// Size: 0x0028 (0x000030 - 0x000058)
class UK31DroneState : public UObject
{ 
public:
	EK31DroneStateID                                   _id;                                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UK31DroneStateController*                    _stateController;                                           // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/TheK31.K31DroneActiveState
/// Size: 0x03B8 (0x000058 - 0x000410)
class UK31DroneActiveState : public UK31DroneState
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0058   (0x0020)  MISSED
	FStatProperty                                      _unhackableDuration;                                        // 0x0078   (0x0088)  
	FStatProperty                                      _revertToScoutingMaxDuration;                               // 0x0100   (0x0088)  
	FStatProperty                                      _revertToScoutingMinDuration;                               // 0x0188   (0x0088)  
	FStatProperty                                      _revertToScoutingRechargeRate;                              // 0x0210   (0x0088)  
	FStatProperty                                      _revertToScoutingDechargeRate;                              // 0x0298   (0x0088)  
	FStatProperty                                      _revertToScoutingDechargeDelay;                             // 0x0320   (0x0088)  
	bool                                               _doNearbyClawTrapsDisableHacking;                           // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03A9   (0x0007)  MISSED
	class UChargeableComponent*                        _revertToScoutingCharge;                                    // 0x03B0   (0x0008)  
	class UTimerObject*                                _unhackableTimer;                                           // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x03C0   (0x0050)  MISSED


	/// Functions
	// Function /Script/TheK31.K31DroneActiveState.GetRevertToScoutingMaxCharge
	// float GetRevertToScoutingMaxCharge();                                                                                 // [0x5c9d880] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneActiveState.GetRevertToScoutingCurrentCharge
	// float GetRevertToScoutingCurrentCharge();                                                                             // [0x5c9d850] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneActiveState.Authority_OnChargeDepleted
	// void Authority_OnChargeDepleted();                                                                                    // [0x5c9ce90] Final|Native|Private 
};

/// Class /Script/TheK31.K31DroneAnimInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UK31DroneAnimInstance : public UAnimInstance
{ 
public:
	EK31DroneStateID                                   _droneState;                                                // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class UK31DroneStateController*                    _droneStateController;                                      // 0x02C8   (0x0008)  
	class AK31Drone*                                   _owningDrone;                                               // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02D8   (0x0008)  MISSED
};

/// Class /Script/TheK31.K31DroneBeingDeployed
/// Size: 0x0000 (0x000058 - 0x000058)
class UK31DroneBeingDeployed : public UK31DroneState
{ 
public:
};

/// Class /Script/TheK31.K31DroneBeingHackedState
/// Size: 0x0020 (0x000058 - 0x000078)
class UK31DroneBeingHackedState : public UK31DroneState
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0058   (0x0020)  MISSED
};

/// Class /Script/TheK31.K31DroneDangerPredictionComponent
/// Size: 0x0080 (0x0000D0 - 0x000150)
class UK31DroneDangerPredictionComponent : public UDBDDangerPredictionComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x00D0   (0x0050)  MISSED
	float                                              _minimumTraverseAngle;                                      // 0x0120   (0x0004)  
	float                                              _maximumTraverseAngle;                                      // 0x0124   (0x0004)  
	float                                              _crouchRangeMargin;                                         // 0x0128   (0x0004)  
	float                                              _crouchingHeightDifference;                                 // 0x012C   (0x0004)  
	float                                              _crouchAngleNumerator;                                      // 0x0130   (0x0004)  
	float                                              _crouchRotatingSpeedPercentAngleMargin;                     // 0x0134   (0x0004)  
	float                                              _maxCrouchRange;                                            // 0x0138   (0x0004)  
	float                                              _activeUnhackableWeight;                                    // 0x013C   (0x0004)  
	float                                              _activeHackableWeight;                                      // 0x0140   (0x0004)  
	float                                              _scoutingWeight;                                            // 0x0144   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/TheK31.K31DroneDebugComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UK31DroneDebugComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x00B8   (0x0040)  MISSED
};

/// Class /Script/TheK31.K31DroneDestroyedState
/// Size: 0x0000 (0x000058 - 0x000058)
class UK31DroneDestroyedState : public UK31DroneState
{ 
public:
};

/// Class /Script/TheK31.K31DroneDisabledState
/// Size: 0x0090 (0x000058 - 0x0000E8)
class UK31DroneDisabledState : public UK31DroneState
{ 
public:
	FStatProperty                                      _disabledDuration;                                          // 0x0058   (0x0088)  
	class UTimerObject*                                _disabledTimer;                                             // 0x00E0   (0x0008)  
};

/// Class /Script/TheK31.K31DroneFlightController
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UK31DroneFlightController : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class UGameplayTagContainerComponent*              _objectState;                                               // 0x00D0   (0x0008)  
};

/// Class /Script/TheK31.K31DroneHackableAvoidanceSensor
/// Size: 0x0180 (0x0000B8 - 0x000238)
class UK31DroneHackableAvoidanceSensor : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	FDBDTunableRowHandle                               _survivorOverlapDetectionTime;                              // 0x0100   (0x0028)  
	class UPrimitiveComponent*                         _killerDetectionPrimitive;                                  // 0x0128   (0x0008)  
	class UPrimitiveComponent*                         _survivorDetectionPrimitive;                                // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0138   (0x0030)  MISSED
	SDK_UNDEFINED(80,4121) /* TSet<ADBDPlayer*> */     __um(_overlappingSurvivors);                                // 0x0168   (0x0050)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	SDK_UNDEFINED(80,4122) /* TMap<ADBDPlayer*, bool> */ __um(_overlappingKillerToVisibilityMap);                  // 0x01C0   (0x0050)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0210   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK31.K31DroneHackableAvoidanceSensor.Init
	// void Init(class UPrimitiveComponent* killerPrimitive, class UPrimitiveComponent* survivorPrimitive);                  // [0x5c9d8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionEnd
	// void Authority_OnSurvivorCollisionEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5c9d560] Final|Native|Private 
	// Function /Script/TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionBegin
	// void Authority_OnSurvivorCollisionBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5c9d340] Final|Native|Private|HasOutParms 
	// Function /Script/TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionEnd
	// void Authority_OnKillerCollisionEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5c9d1e0] Final|Native|Private 
	// Function /Script/TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionBegin
	// void Authority_OnKillerCollisionBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5c9cfc0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK31.K31DroneHackableComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UK31DroneHackableComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _unhackableClearanceCooldownDuration;                       // 0x00B8   (0x0028)  
	bool                                               _isHackable;                                                // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5F];                                      // 0x00E1   (0x005F)  MISSED


	/// Functions
	// Function /Script/TheK31.K31DroneHackableComponent.OnRep_IsHackable
	// void OnRep_IsHackable();                                                                                              // [0x5ca11f0] Final|Native|Private 
	// Function /Script/TheK31.K31DroneHackableComponent.IsHackable
	// bool IsHackable();                                                                                                    // [0x49bd800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31DroneInitializingState
/// Size: 0x00A8 (0x000058 - 0x000100)
class UK31DroneInitializingState : public UK31DroneState
{ 
public:
	FStatProperty                                      _initializingDuration;                                      // 0x0058   (0x0088)  
	class UTimerObject*                                _initializingTimer;                                         // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E8   (0x0018)  MISSED
};

/// Class /Script/TheK31.K31DroneInStashState
/// Size: 0x0018 (0x000058 - 0x000070)
class UK31DroneInStashState : public UK31DroneState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0058   (0x0018)  MISSED
};

/// Class /Script/TheK31.K31DroneLaserController
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UK31DroneLaserController : public UActorComponent
{ 
public:
	class ULocalPlayerTrackerComponent*                _localPlayerTracker;                                        // 0x00B8   (0x0008)  
	class ADBDPlayer*                                  _locallyObservedPlayer;                                     // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x00C8   (0x0028)  MISSED
	class AK31DroneLaserScanActor*                     _laserActor;                                                // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/TheK31.K31DroneLaserController.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x5ca10e0] Final|Native|Private 
};

/// Class /Script/TheK31.K31DroneLaserScanActor
/// Size: 0x0320 (0x000230 - 0x000550)
class AK31DroneLaserScanActor : public AActor
{ 
public:
	class UMaterialInstance*                           LaserScanMeshMaterial;                                      // 0x0230   (0x0008)  
	float                                              StaticCapturesLightAngle;                                   // 0x0238   (0x0004)  
	float                                              DynamicCapturesLightAngle;                                  // 0x023C   (0x0004)  
	float                                              DepthCaptureNearPlaneOffset;                                // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UStaticMeshComponent*                        FrontLaserScanSM;                                           // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        BackLaserScanSM;                                            // 0x0250   (0x0008)  
	class UGMShadowDepthCaptureComponent*              FrontDepthCaptureComponentDynamic;                          // 0x0258   (0x0008)  
	class UGMShadowDepthCaptureComponent*              BackDepthCaptureComponentDynamic;                           // 0x0260   (0x0008)  
	class UGMShadowDepthCaptureComponent*              XDepthCaptureComponentStatic;                               // 0x0268   (0x0008)  
	class UGMShadowDepthCaptureComponent*              YDepthCaptureComponentStatic;                               // 0x0270   (0x0008)  
	class UGMShadowDepthCaptureComponent*              NegXDepthCaptureComponentStatic;                            // 0x0278   (0x0008)  
	class UGMShadowDepthCaptureComponent*              NegYDepthCaptureComponentStatic;                            // 0x0280   (0x0008)  
	FBHVRPerDetailModeInt                              DynamicDepthCaptureSizeWidth;                               // 0x0288   (0x00A0)  
	FBHVRPerDetailModeInt                              DynamicDepthCaptureSizeHeight;                              // 0x0328   (0x00A0)  
	FBHVRPerDetailModeInt                              StaticDepthCaptureSizeWidth;                                // 0x03C8   (0x00A0)  
	FBHVRPerDetailModeInt                              StaticDepthCaptureSizeHeight;                               // 0x0468   (0x00A0)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0508   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK31.K31DroneLaserScanActor.UpdateLaserScanMeshMaterial
	// void UpdateLaserScanMeshMaterial(class UMaterialInstance* newLaserScanMeshMaterial);                                  // [0x5ca13d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneLaserScanActor.SetLaserVisibility
	// void SetLaserVisibility(bool visible);                                                                                // [0x5ca1340] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneLaserScanActor.RequestStaticDepthCapturesUpdate
	// void RequestStaticDepthCapturesUpdate();                                                                              // [0x5ca1320] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneLaserScanActor.InitDroneLaserScan
	// void InitDroneLaserScan();                                                                                            // [0x5ca0f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneLaserScanActor.DeactivateDroneLaserScan
	// void DeactivateDroneLaserScan();                                                                                      // [0x57dfc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK31.K31DroneLaserScanActor.ActivateDroneLaserScan
	// void ActivateDroneLaserScan();                                                                                        // [0x5ca0df0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/TheK31.DroneDeployDatum
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDroneDeployDatum
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x000C   (0x000C)  
	int32_t                                            DeployCount;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class ACharacter*                                  DeployingCharacter;                                         // 0x0020   (0x0008)  
	bool                                               HasReachedDeployLocation;                                   // 0x0028   (0x0001)  
	bool                                               IsDeployed;                                                 // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/TheK31.DroneRepMovement
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDroneRepMovement
{ 
	bool                                               IsRotating;                                                 // 0x0000   (0x0001)  
	bool                                               IsRotationReversed;                                         // 0x0001   (0x0001)  
	bool                                               HasReachTarget;                                             // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0010   (0x000C)  
	EDroneFlyingHeight                                 FlyingHeight;                                               // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              HeightAdjustmentMovingTimeOverride;                         // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class AActor*                                      InteractingActor;                                           // 0x0028   (0x0008)  
	FName                                              InteractingActorAttachSocket;                               // 0x0030   (0x000C)  
	float                                              SnapTime;                                                   // 0x003C   (0x0004)  
};

/// Class /Script/TheK31.K31DroneMovementComponent
/// Size: 0x04E8 (0x0000F8 - 0x0005E0)
class UK31DroneMovementComponent : public UMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00F8   (0x0048)  MISSED
	SDK_UNDEFINED(16,4123) /* FMulticastInlineDelegate */ __um(OnDeployLocationChangedEvent);                      // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,4124) /* FMulticastInlineDelegate */ __um(OnAttachToCharacterForDeployChangedEvent);          // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,4125) /* FMulticastInlineDelegate */ __um(OnAccelerationChangedEvent);                        // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,4126) /* FMulticastInlineDelegate */ __um(OnFlightHeightChangedBlueprintEvent);               // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,4127) /* FMulticastInlineDelegate */ __um(OnMovementModeChangedBlueprintEvent);               // 0x0180   (0x0010)  
	FStatProperty                                      _rotationRate;                                              // 0x0190   (0x0088)  
	FStatProperty                                      _rotationRateStealthMode;                                   // 0x0218   (0x0088)  
	float                                              _rotationLerpTime;                                          // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	FDBDTunableRowHandle                               _minHeightAboveGround;                                      // 0x02A8   (0x0028)  
	FDBDTunableRowHandle                               _maxHeightAboveGround;                                      // 0x02D0   (0x0028)  
	FDBDTunableRowHandle                               _heightAdjustmentMovingTime;                                // 0x02F8   (0x0028)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0320   (0x0004)  MISSED
	float                                              _deployMovementSpeed;                                       // 0x0324   (0x0004)  
	float                                              _replicationFrequency;                                      // 0x0328   (0x0004)  
	float                                              _smoothingTime;                                             // 0x032C   (0x0004)  
	float                                              _maxSmoothUpdateDistance;                                   // 0x0330   (0x0004)  
	float                                              _noSmoothUpdateDistance;                                    // 0x0334   (0x0004)  
	FName                                              _deployCharacterSocket;                                     // 0x0338   (0x000C)  
	float                                              _maxTravelDistance;                                         // 0x0344   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0348   (0x0004)  MISSED
	float                                              _maxDeployTime;                                             // 0x034C   (0x0004)  
	float                                              _gravity;                                                   // 0x0350   (0x0004)  
	float                                              _velocityInterpolationAlpha;                                // 0x0354   (0x0004)  
	class UCurveFloat*                                 _constantSpeedToAccelerationCurve;                          // 0x0358   (0x0008)  
	unsigned char                                      UnknownData04_5[0x60];                                      // 0x0360   (0x0060)  MISSED
	class AGameStateBase*                              _gameState;                                                 // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData05_5[0x40];                                      // 0x03C8   (0x0040)  MISSED
	FDroneDeployDatum                                  _localDeployDatum;                                          // 0x0408   (0x0030)  
	class AActor*                                      _interactingActor;                                          // 0x0438   (0x0008)  
	unsigned char                                      UnknownData06_5[0x30];                                      // 0x0440   (0x0030)  MISSED
	TArray<class USceneComponent*>                     _additionalRotatingComponents;                              // 0x0470   (0x0010)  
	class USceneComponent*                             _updatedComponentOriginalParent;                            // 0x0480   (0x0008)  
	unsigned char                                      UnknownData07_5[0xD8];                                      // 0x0488   (0x00D8)  MISSED
	FDroneRepMovement                                  _replicatedMovement;                                        // 0x0560   (0x0040)  
	FDroneDeployDatum                                  _repDeployDatum;                                            // 0x05A0   (0x0030)  
	unsigned char                                      UnknownData08_6[0x10];                                      // 0x05D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK31.K31DroneMovementComponent.OnRep_ReplicatedMovement
	// void OnRep_ReplicatedMovement(FDroneRepMovement& oldRepMovement);                                                     // [0x5ca1210] Final|Native|Private|HasOutParms 
	// Function /Script/TheK31.K31DroneMovementComponent.OnRep_DeployDatum
	// void OnRep_DeployDatum(FDroneDeployDatum& oldDeployDatum);                                                            // [0x5ca1120] Final|Native|Private|HasOutParms 
	// Function /Script/TheK31.K31DroneMovementComponent.OnDeployLocationChangedEvent__DelegateSignature
	// void OnDeployLocationChangedEvent__DelegateSignature();                                                               // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK31.K31DroneMovementComponent.OnAttachToCharacterForDeployChangedEvent__DelegateSignature
	// void OnAttachToCharacterForDeployChangedEvent__DelegateSignature();                                                   // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK31.K31DroneMovementComponent.OnAccelerationChangedEvent__DelegateSignature
	// void OnAccelerationChangedEvent__DelegateSignature(FVector& Acceleration);                                            // [0x61c32d0] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/TheK31.K31DroneMovementComponent.MovementBlueprintEvent__DelegateSignature
	// void MovementBlueprintEvent__DelegateSignature();                                                                     // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK31.K31DroneMovementComponent.IsMeshAttachedToCharacterForDeploy
	// bool IsMeshAttachedToCharacterForDeploy();                                                                            // [0x5ca0f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31DroneMovementComponent.HasReachedDeployLocation
	// bool HasReachedDeployLocation();                                                                                      // [0x5ca0f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31DroneMovementComponent.GetTargetFlightHeight
	// EDroneFlyingHeight GetTargetFlightHeight();                                                                           // [0x5ca0ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31DroneMovementComponent.GetMovementMode
	// EK31DroneMovementMode GetMovementMode();                                                                              // [0x5ca0e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31DroneMovementComponent.GetDistanceToTarget
	// float GetDistanceToTarget();                                                                                          // [0x5ca0e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31DroneOutlineUpdateStrategy
/// Size: 0x0070 (0x0000E0 - 0x000150)
class UK31DroneOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _killerColorNormal;                                         // 0x00E0   (0x0010)  
	FLinearColor                                       _killerColorActive;                                         // 0x00F0   (0x0010)  
	FLinearColor                                       _killerColorSelected;                                       // 0x0100   (0x0010)  
	FLinearColor                                       _survivorColor;                                             // 0x0110   (0x0010)  
	TArray<EK31DroneStateID>                           _invalidStates;                                             // 0x0120   (0x0010)  
	float                                              _killerMinimumDistance;                                     // 0x0130   (0x0004)  
	float                                              _survivorMinimumDistance;                                   // 0x0134   (0x0004)  
	float                                              _survivorMaximumDistanceXY;                                 // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x013C   (0x0014)  MISSED
};

/// Class /Script/TheK31.K31DroneOwnershipComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UK31DroneOwnershipComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B8   (0x0028)  MISSED
};

/// Class /Script/TheK31.K31DronePlacementRecaller
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UK31DronePlacementRecaller : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _maxDistanceXY;                                             // 0x00D0   (0x0028)  
	FDBDTunableRowHandle                               _maxDistanceZ;                                              // 0x00F8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0120   (0x0018)  MISSED
};

/// Class /Script/TheK31.K31DronePlacementStrategy
/// Size: 0x0078 (0x0000F0 - 0x000168)
class UK31DronePlacementStrategy : public UObjectPlacementValidationWithRestrictionStrategy
{ 
public:
	FDBDTunableRowHandle                               _sphereSweepRadius;                                         // 0x00F0   (0x0028)  
	FDBDTunableRowHandle                               _minHeightAboveGround;                                      // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _maxHeightAboveGround;                                      // 0x0140   (0x0028)  
};

/// Class /Script/TheK31.K31DroneRecallingState
/// Size: 0x0058 (0x000058 - 0x0000B0)
class UK31DroneRecallingState : public UK31DroneState
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0058   (0x0030)  MISSED
	FDBDTunableRowHandle                               _recallingDuration;                                         // 0x0088   (0x0028)  
};

/// Struct /Script/TheK31.K31DroneScoutDetectionSphereRaycastStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FK31DroneScoutDetectionSphereRaycastStruct
{ 
	float                                              BottomToTopPercent;                                         // 0x0000   (0x0004)  
	float                                              CapsuleRadiusPercent;                                       // 0x0004   (0x0004)  
};

/// Class /Script/TheK31.K31DroneScoutDetectionComponent
/// Size: 0x0228 (0x0000B8 - 0x0002E0)
class UK31DroneScoutDetectionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	TArray<FK31DroneScoutDetectionSphereRaycastStruct> _raycastSphereData;                                         // 0x00D0   (0x0010)  
	SDK_UNDEFINED(80,4128) /* TMap<ACamperPlayer*, FSurvivorDroneFrameDatum> */ __um(_survivorLastFrameData);      // 0x00E0   (0x0050)  
	SDK_UNDEFINED(80,4129) /* TMap<ACamperPlayer*, FSurvivorDroneFrameDatum> */ __um(_survivorCurrentFrameData);   // 0x0130   (0x0050)  
	TArray<class ACamperPlayer*>                       _detectedSurvivors;                                         // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_5[0x90];                                      // 0x0190   (0x0090)  MISSED
	FDBDTunableRowHandle                               _baseDetectionConeYawHalfAngleDegrees;                      // 0x0220   (0x0028)  
	FDBDTunableRowHandle                               _baseDetectionHalfHeight;                                   // 0x0248   (0x0028)  
	FDBDTunableRowHandle                               _baseDetectionRadius;                                       // 0x0270   (0x0028)  
	FDBDTunableRowHandle                               _sphereTraceRadius;                                         // 0x0298   (0x0028)  
	FGameplayTagContainer                              _stateTagsPreventingSurvivorDetection;                      // 0x02C0   (0x0020)  


	/// Functions
	// Function /Script/TheK31.K31DroneScoutDetectionComponent.OnLaserDeactivate
	// void OnLaserDeactivate(class UActorComponent* Component);                                                             // [0x5ca1050] Final|Native|Private 
	// Function /Script/TheK31.K31DroneScoutDetectionComponent.OnLaserActive
	// void OnLaserActive(class UActorComponent* Component, bool Reset);                                                     // [0x5ca0f80] Final|Native|Private 
};

/// Class /Script/TheK31.K31DroneScoutingState
/// Size: 0x0060 (0x000058 - 0x0000B8)
class UK31DroneScoutingState : public UK31DroneState
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0058   (0x0060)  MISSED
};

/// Struct /Script/TheK31.K31DroneTimestampedState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK31DroneTimestampedState
{ 
	class UK31DroneState*                              State;                                                      // 0x0000   (0x0008)  
	float                                              Timestamp;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Class /Script/TheK31.K31DroneStateController
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UK31DroneStateController : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,4130) /* FMulticastInlineDelegate */ __um(OnStateChangedBlueprintEvent);                      // 0x00E8   (0x0010)  
	TArray<class UClass*>                              _stateClasses;                                              // 0x00F8   (0x0010)  
	class UClass*                                      _defaultStateClass;                                         // 0x0108   (0x0008)  
	class AGameStateBase*                              _gameState;                                                 // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0118   (0x0018)  MISSED
	TArray<class UK31DroneState*>                      _states;                                                    // 0x0130   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0140   (0x0010)  MISSED
	FK31DroneTimestampedState                          _local_currentState;                                        // 0x0150   (0x0018)  
	FK31DroneTimestampedState                          _authority_RepCurrentState;                                 // 0x0168   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0180   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK31.K31DroneStateController.OnStateChangedBlueprintEvent__DelegateSignature
	// void OnStateChangedBlueprintEvent__DelegateSignature(EK31DroneStateID oldState, EK31DroneStateID NewState);           // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK31.K31DroneStateController.OnRep_States
	// void OnRep_States();                                                                                                  // [0x5ca1300] Final|Native|Private 
	// Function /Script/TheK31.K31DroneStateController.OnRep_AuthorityRepCurrentState
	// void OnRep_AuthorityRepCurrentState();                                                                                // [0x5ca1100] Final|Native|Private 
	// Function /Script/TheK31.K31DroneStateController.GetPreviousStateID
	// EK31DroneStateID GetPreviousStateID();                                                                                // [0x5ca0ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31DroneStateController.GetCurrentStateID
	// EK31DroneStateID GetCurrentStateID();                                                                                 // [0x5ca0e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31DroneStealthState
/// Size: 0x0060 (0x000058 - 0x0000B8)
class UK31DroneStealthState : public UK31DroneState
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0058   (0x0060)  MISSED
};

/// Class /Script/TheK31.K31DroneTargeter
/// Size: 0x0098 (0x0000B8 - 0x000150)
class UK31DroneTargeter : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class UClass*                                      _indicatorClass;                                            // 0x00D0   (0x0008)  
	FDBDTunableRowHandle                               _maxAngleFromScreenCenter;                                  // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0100   (0x0028)  MISSED
	class ADBDActorIndicator*                          _indicator;                                                 // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	class AK31Drone*                                   _target;                                                    // 0x0138   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Class /Script/TheK31.K31DroneZoneComponent
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UK31DroneZoneComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(80,4131) /* TMap<ADBDPlayer*, FK31PlayerDroneZoneStruct> */ __um(_playerDroneZoneStructMap);     // 0x00D0   (0x0050)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0120   (0x0010)  MISSED
	FDBDTunableRowHandle                               _maxDistanceXY;                                             // 0x0130   (0x0028)  
	FDBDTunableRowHandle                               _maxDistanceZ;                                              // 0x0158   (0x0028)  
	float                                              _maxDistanceZ_ScoutingLaser;                                // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Class /Script/TheK31.K31FXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UK31FXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheK31.K31FXInterface.Cosmetic_TriggerSurvivorAppearOnRadarEvent
	// void Cosmetic_TriggerSurvivorAppearOnRadarEvent();                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK31.K31HasteEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UK31HasteEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/TheK31.K31InspectRadarScoreEmitter
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UK31InspectRadarScoreEmitter : public UPlayerScoreEmitter
{ 
public:
	float                                              _timeAwaitingForInspect;                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x74];                                      // 0x003C   (0x0074)  MISSED
};

/// Class /Script/TheK31.K31MenuAnimInstance
/// Size: 0x0010 (0x000300 - 0x000310)
class UK31MenuAnimInstance : public UBaseMenuAnimInstance
{ 
public:
	class UCustomizationAnimationSelector*             _animationSelector;                                         // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0300   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK31.K31MenuAnimInstance.OnCustomizationAnimationMappingIDChanged
	// void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31MenuAnimInstance.GetCustomizationMappingID
	// int32_t GetCustomizationMappingID();                                                                                  // [0x5ca4880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31MenuAnimInstance.GetCustoAnimTags
	// TArray<FName> GetCustoAnimTags();                                                                                     // [0x5ca4800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31P01
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UK31P01 : public UPerk
{ 
public:
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x03C8   (0x0004)  
	float                                              _hasteEffectDurationSeconds;                                // 0x03CC   (0x000C)  
	class UStatusEffect*                               _authority_hasteStatusEffect;                               // 0x03D8   (0x0008)  
	class UClass*                                      _hasteEffectClass;                                          // 0x03E0   (0x0008)  
	bool                                               _isPerkActive;                                              // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x03E9   (0x0017)  MISSED


	/// Functions
	// Function /Script/TheK31.K31P01.GetHasteEffectMovementSpeedIncrease
	// float GetHasteEffectMovementSpeedIncrease();                                                                          // [0x501b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31P01.GetHasteEffectDurationAtLevel
	// float GetHasteEffectDurationAtLevel();                                                                                // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31P02
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UK31P02 : public UPerk
{ 
public:
	class UClass*                                      _revealAuraToKillerEffectClass;                             // 0x03C8   (0x0008)  
	float                                              _revealAuraSeconds;                                         // 0x03D0   (0x0004)  
	float                                              _screamDistance;                                            // 0x03D4   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03E0   (0x0004)  MISSED
	bool                                               _isPerkActive;                                              // 0x03E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x03E5   (0x0003)  MISSED


	/// Functions
	// Function /Script/TheK31.K31P02.Multicast_RevealAndMakeSurvivorScream
	// void Multicast_RevealAndMakeSurvivorScream(class ACamperPlayer* Survivor);                                            // [0x501b930] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK31.K31P02.GetScreamDistance
	// float GetScreamDistance();                                                                                            // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31P02.GetRevealAuraSeconds
	// float GetRevealAuraSeconds();                                                                                         // [0x5023110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31P02.GetActivePerkDurationAtLevel
	// float GetActivePerkDurationAtLevel();                                                                                 // [0x5ca47a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31P02.BP_RevealAndMakeSurvivorScream
	// void BP_RevealAndMakeSurvivorScream(class ACamperPlayer* survivorPlayer);                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK31.K31P03
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UK31P03 : public UPerk
{ 
public:
	float                                              _healPenalty;                                               // 0x03C8   (0x000C)  
	float                                              _reduceHealingSpeedEffectSeconds;                           // 0x03D4   (0x0004)  
	class UClass*                                      _reduceHealingSpeedEffectClass;                             // 0x03D8   (0x0008)  
	TArray<class UStatusEffect*>                       _survivorDebuffs;                                           // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x03F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK31.K31P03.GetReduceHealingSpeedEffectSeconds
	// float GetReduceHealingSpeedEffectSeconds();                                                                           // [0x500a8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31P03.GetHealPenaltyAtLevel
	// float GetHealPenaltyAtLevel();                                                                                        // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31PlayerZoneStatus
/// Size: 0x00C8 (0x0000B8 - 0x000180)
class UK31PlayerZoneStatus : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	SDK_UNDEFINED(80,4132) /* TMap<UK31DroneZoneComponent*, FK31DroneZoneOverlapDatum> */ __um(_overlappingZones); // 0x0100   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0150   (0x0030)  MISSED
};

/// Class /Script/TheK31.K31Power
/// Size: 0x02D0 (0x0004C8 - 0x000798)
class AK31Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x04C8   (0x0048)  MISSED
	class UK31PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;         // 0x0510   (0x0008)  
	class UK31PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;               // 0x0518   (0x0008)  
	class UClass*                                      _survivorDetectionClass;                                    // 0x0520   (0x0008)  
	TArray<FStatusEffectSpawnData>                     _effects;                                                   // 0x0528   (0x0010)  
	class UStatusEffect*                               _authority_scannerHasteEffect;                              // 0x0538   (0x0008)  
	class UClass*                                      _scannerHasteEffectClass;                                   // 0x0540   (0x0008)  
	class UInteractor*                                 _interactor;                                                // 0x0548   (0x0008)  
	class UActorPoolInitializer*                       _dronePoolInitializer;                                      // 0x0550   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _dronePool;                                                 // 0x0558   (0x0008)  
	class UK31Scanner*                                 _scanner;                                                   // 0x0560   (0x0008)  
	unsigned char                                      UnknownData01_5[0x3C];                                      // 0x0568   (0x003C)  MISSED
	EK31PowerState                                     _powerState;                                                // 0x05A4   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x05A5   (0x000B)  MISSED
	FPlayerStatusEffectSpawnerHelper                   _effectSpawner;                                             // 0x05B0   (0x0088)  
	class UClass*                                      _survivorClawTrapComponentClass;                            // 0x0638   (0x0008)  
	class UTimerObject*                                _powerCooldownTimer;                                        // 0x0640   (0x0008)  
	unsigned char                                      UnknownData03_5[0x38];                                      // 0x0648   (0x0038)  MISSED
	FStatProperty                                      _powerCooldownDuration;                                     // 0x0680   (0x0088)  
	class UCurveFloat*                                 _hasteCurveBasedOnScannedSurvivors;                         // 0x0708   (0x0008)  
	FStatProperty                                      _canRecallDisabledDrones;                                   // 0x0710   (0x0088)  


	/// Functions
	// Function /Script/TheK31.K31Power.OnRepPowerState
	// void OnRepPowerState();                                                                                               // [0x5ca4bb0] Final|Native|Private|Const 
	// Function /Script/TheK31.K31Power.OnRepPowerCooldownTimer
	// void OnRepPowerCooldownTimer();                                                                                       // [0x5ca4b90] Final|Native|Private 
	// Function /Script/TheK31.K31Power.Authority_UpdateHasteBasedOnScannedSurvivors
	// void Authority_UpdateHasteBasedOnScannedSurvivors();                                                                  // [0x5ca4780] Final|Native|Private|Const 
};

/// Class /Script/TheK31.K31PowerChargePresentationItemProgressComponent
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UK31PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00C0   (0x0018)  MISSED
	class AK31Power*                                   _originatingPower;                                          // 0x00D8   (0x0008)  
};

/// Class /Script/TheK31.K31PowerChargePresentationPowerFadeComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK31PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
	class AK31Power*                                   _originatingPower;                                          // 0x00B8   (0x0008)  
};

/// Class /Script/TheK31.K31PowerCosmeticHelper
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UK31PowerCosmeticHelper : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK31.K31PowerCosmeticHelper.Cosmetic_IsOnPowerCooldownUpdatedEvent
	// void Cosmetic_IsOnPowerCooldownUpdatedEvent(bool isPowerOnCooldown);                                                  // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK31.K31PowerCosmeticHelper.Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent
	// void Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent(bool doesRadarDetectAnySurvivors);                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK31.K31PowerSubAnimInstance
/// Size: 0x0030 (0x0002F0 - 0x000320)
class UK31PowerSubAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _isChargingInspection;                                      // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02F1   (0x0003)  MISSED
	float                                              _inspectPlayRate;                                           // 0x02F4   (0x0004)  
	float                                              _inspectSequenceStartPosition;                              // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UAnimSequence*                               _inspectSequence;                                           // 0x0300   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0308   (0x0018)  MISSED
};

/// Class /Script/TheK31.K31RadarAnimInstance
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UK31RadarAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isRecallingADrone;                                         // 0x02C0   (0x0001)  
	bool                                               _isActivatingADrone;                                        // 0x02C1   (0x0001)  
	bool                                               _isAbleToPlaceDrone;                                        // 0x02C2   (0x0001)  
	bool                                               _isPowerOnCooldown;                                         // 0x02C3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class AK31Power*                                   _owningK31Power;                                            // 0x02C8   (0x0008)  
	class ASlasherPlayer*                              _killer;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x02D8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK31.K31RadarAnimInstance.ResetIsRecallingADrone
	// void ResetIsRecallingADrone();                                                                                        // [0x59bbdd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK31.K31RadarAnimInstance.ResetIsActivatingADrone
	// void ResetIsActivatingADrone();                                                                                       // [0x59bbe10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK31.K31RadarAnimInstance.OnGameEventReceived
	// void OnGameEventReceived(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                    // [0x5ca4a60] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK31.K31Scanner
/// Size: 0x0178 (0x0000B8 - 0x000230)
class UK31Scanner : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4133) /* FMulticastInlineDelegate */ __um(OnScannerUpdated);                                  // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FStatProperty                                      _radarRadius;                                               // 0x00E0   (0x0088)  
	FDBDTunableRowHandle                               _levelHeightThreshold;                                      // 0x0168   (0x0028)  
	class UTexture*                                    _debugPointTexture;                                         // 0x0190   (0x0008)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0198   (0x0028)  MISSED
	class AActor*                                      _owningActor;                                               // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x01C8   (0x0010)  MISSED
	SDK_UNDEFINED(80,4134) /* TSet<ADBDPlayer*> */     __um(_playersShownOnRadar);                                 // 0x01D8   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0228   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK31.K31Scanner.OnScannerUpdated__DelegateSignature
	// void OnScannerUpdated__DelegateSignature();                                                                           // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK31.K31Scanner.GetEncodedPoints
	// TArray<FLinearColor> GetEncodedPoints();                                                                              // [0x5ca48b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.K31SurvivorAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class UK31SurvivorAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _hasBeenSpottedByDrone;                                     // 0x0550   (0x0001)  
	bool                                               _isInsideAnActiveDroneZone;                                 // 0x0551   (0x0001)  
	bool                                               _isClawTrapped;                                             // 0x0552   (0x0001)  
	bool                                               _isRemovingClawTrap;                                        // 0x0553   (0x0001)  
	bool                                               _isHackingDrone;                                            // 0x0554   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0555   (0x0003)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x0558   (0x0004)  
	bool                                               _isCrawling;                                                // 0x055C   (0x0001)  
	bool                                               _isInsideCloset;                                            // 0x055D   (0x0001)  
	bool                                               _isDead;                                                    // 0x055E   (0x0001)  
	bool                                               _isInteracting;                                             // 0x055F   (0x0001)  
	bool                                               _isInjured;                                                 // 0x0560   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0561   (0x0001)  
	bool                                               _isHooked;                                                  // 0x0562   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0563   (0x0001)  
	bool                                               _isUsingAimItem;                                            // 0x0564   (0x0001)  
	bool                                               _isInAir;                                                   // 0x0565   (0x0001)  
	bool                                               _isBeingHealed;                                             // 0x0566   (0x0001)  
	bool                                               _isBeingCarried;                                            // 0x0567   (0x0001)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0568   (0x0008)  MISSED
};

/// Struct /Script/TheK31.ClawTrapUntrapDatum
/// Size: 0x0008 (0x000000 - 0x000008)
struct FClawTrapUntrapDatum
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Class /Script/TheK31.K31SurvivorClawTrapComponent
/// Size: 0x0150 (0x0000B8 - 0x000208)
class UK31SurvivorClawTrapComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UTimerObject*                                _batteryChargeTimer;                                        // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	class AK31Power*                                   _originatingPower;                                          // 0x00D0   (0x0008)  
	bool                                               _isTrapped;                                                 // 0x00D8   (0x0001)  
	bool                                               _isBroadcasting;                                            // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	class USurvivorRemoveClawTrapInteraction*          _removeClawTrapInteraction;                                 // 0x00E0   (0x0008)  
	class UClass*                                      _removeClawTrapInteractionClass;                            // 0x00E8   (0x0008)  
	class AK31ClawTrap*                                _clawTrap;                                                  // 0x00F0   (0x0008)  
	class UClass*                                      _clawTrapClass;                                             // 0x00F8   (0x0008)  
	float                                              _clawTrapCosmeticDelayDuration;                             // 0x0100   (0x0004)  
	FName                                              _clawTrapAttachSocket;                                      // 0x0104   (0x000C)  
	class UK31PlayerZoneStatus*                        _authority_playerZoneStatus;                                // 0x0110   (0x0008)  
	FClawTrapUntrapDatum                               _lastUntrapDatum;                                           // 0x0118   (0x0008)  
	bool                                               _wasLastRemovedAutomatically;                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	class AK31Drone*                                   _authority_originatingDrone;                                // 0x0128   (0x0008)  
	unsigned char                                      UnknownData04_5[0x30];                                      // 0x0130   (0x0030)  MISSED
	FStatProperty                                      _batteryMaxCharge;                                          // 0x0160   (0x0088)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x01E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.OnRep_RemoveClawTrapInteraction
	// void OnRep_RemoveClawTrapInteraction();                                                                               // [0x5ca4d70] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.OnRep_OriginatingPower
	// void OnRep_OriginatingPower(class AK31Power* oldPower);                                                               // [0x5ca4c50] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.OnRep_IsTrapped
	// void OnRep_IsTrapped();                                                                                               // [0x5ca4c30] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.OnRep_IsBroadcasting
	// void OnRep_IsBroadcasting();                                                                                          // [0x5ca4bf0] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5ca4b70] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.OnCamperEscaped
	// void OnCamperEscaped(FGameplayTag gameEventType, FGameEventData& GameEventData);                                      // [0x5ca4950] Final|Native|Private|HasOutParms 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.Multicast_ClawTrapAddedByDrone
	// void Multicast_ClawTrapAddedByDrone(class AK31Drone* originatingDrone);                                               // [0x58c5550] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.GetClawTrapCosmeticDelayDuration
	// float GetClawTrapCosmeticDelayDuration();                                                                             // [0x5ca47d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.K31SurvivorClawTrapComponent.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);            // [0x5ca45e0] Final|Native|Private 
};

/// Class /Script/TheK31.K31SurvivorCosmeticHelperActor
/// Size: 0x0078 (0x000270 - 0x0002E8)
class AK31SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	class UK31PlayerZoneStatus*                        _playerZoneStatus;                                          // 0x0270   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0278   (0x0030)  MISSED
	FDBDTunableRowHandle                               _enterActiveZoneCosmeticCooldown;                           // 0x02A8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_UpdateLockOnProgress
	// void Cosmetic_UpdateLockOnProgress(float currentProgressPercent, bool IsFullyLockedOn);                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsTrappedByClawTrap
	// void Cosmetic_OnIsTrappedByClawTrap(bool IsTrapped);                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsSurvivorImmuneToDetection
	// void Cosmetic_OnIsSurvivorImmuneToDetection(bool isImmuneToDetection, int32_t numLockOns);                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner
	// void Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner(bool isSurvivorDetectedAndVisibleOnScanner);                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsOverlappingActiveZoneChanged
	// void Cosmetic_OnIsOverlappingActiveZoneChanged(bool isOverlappingActiveZone);                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsBroadcasting
	// void Cosmetic_OnIsBroadcasting(bool isBroadcasting);                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnDetectedByDrone
	// void Cosmetic_OnDetectedByDrone(class AK31Drone* Drone, bool isOnCooldown);                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK31.K31SurvivorDetection
/// Size: 0x0728 (0x0000B8 - 0x0007E0)
class UK31SurvivorDetection : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UClass*                                      _hinderedStatusEffectClass;                                 // 0x00C0   (0x0008)  
	class UClass*                                      _brokenStatusEffectClass;                                   // 0x00C8   (0x0008)  
	class UClass*                                      _killerInstinctStatusEffectClass;                           // 0x00D0   (0x0008)  
	class UStatusEffect*                               _brokenStatusEffect;                                        // 0x00D8   (0x0008)  
	FStatProperty                                      _secondsToCharge;                                           // 0x00E0   (0x0088)  
	FStatProperty                                      _chargeRate;                                                // 0x0168   (0x0088)  
	FStatProperty                                      _chargeModifierWhenClawTrapped;                             // 0x01F0   (0x0088)  
	FStatProperty                                      _lockOnChargeStackPercent;                                  // 0x0278   (0x0088)  
	FStatProperty                                      _hinderedEffectPercent;                                     // 0x0300   (0x0088)  
	FStatProperty                                      _hinderedEffectDuration;                                    // 0x0388   (0x0088)  
	FStatProperty                                      _killerInstinctEffectDuration;                              // 0x0410   (0x0088)  
	FStatProperty                                      _enableKillerInstinctRangeCheck;                            // 0x0498   (0x0088)  
	FStatProperty                                      _killerInstinctEffectKillerRange;                           // 0x0520   (0x0088)  
	FStatProperty                                      _immuneToDroneDetectionDuration;                            // 0x05A8   (0x0088)  
	FStatProperty                                      _survivorIsBelowDroneDuration;                              // 0x0630   (0x0088)  
	FStatProperty                                      _showSurvivorOnRadarDuration;                               // 0x06B8   (0x0088)  
	class AK31Power*                                   _originatingPower;                                          // 0x0740   (0x0008)  
	class UChargeableComponent*                        _chargingLockedOnChargeableComponent;                       // 0x0748   (0x0008)  
	class UTimerObject*                                _immuneToDetectionTimer;                                    // 0x0750   (0x0008)  
	class UTimerObject*                                _survivorIsBelowDroneTimer;                                 // 0x0758   (0x0008)  
	class UTimerObject*                                _showSurvivorOnRadarTimer;                                  // 0x0760   (0x0008)  
	bool                                               _isFullyLockedOn;                                           // 0x0768   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0769   (0x0007)  MISSED
	TArray<class AK31Drone*>                           _overlappingDrones;                                         // 0x0770   (0x0010)  
	TArray<class AK31Drone*>                           _overlappingActiveDrones;                                   // 0x0780   (0x0010)  
	float                                              _lastActiveTime;                                            // 0x0790   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4C];                                      // 0x0794   (0x004C)  MISSED


	/// Functions
	// Function /Script/TheK31.K31SurvivorDetection.OnRep_OriginatingPower
	// void OnRep_OriginatingPower(class AK31Power* oldPower);                                                               // [0x5ca4ce0] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorDetection.OnRep_IsFullyLockedOn
	// void OnRep_IsFullyLockedOn();                                                                                         // [0x5ca4c10] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorDetection.OnRep_ChargeableComponent
	// void OnRep_ChargeableComponent();                                                                                     // [0x5ca4bd0] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorDetection.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);            // [0x5ca46b0] Final|Native|Private 
	// Function /Script/TheK31.K31SurvivorDetection.Authority_OnChargeCompleted
	// void Authority_OnChargeCompleted(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                          // [0x5ca44e0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK31.K31SurvivorExposedEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UK31SurvivorExposedEffect : public UExposedEffect
{ 
public:
};

/// Class /Script/TheK31.K31SurvivorInActiveZoneCondition
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UK31SurvivorInActiveZoneCondition : public UEventDrivenModifierCondition
{ 
public:
};

/// Class /Script/TheK31.K31TrapProximitySensor
/// Size: 0x00E8 (0x0000B8 - 0x0001A0)
class UK31TrapProximitySensor : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00B8   (0x0040)  MISSED
	SDK_UNDEFINED(80,4135) /* TSet<UGameplayTagContainerComponent*> */ __um(_registeredObjectStates);              // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,4136) /* TSet<ADBDPlayer*> */     __um(_trappedPlayersInZone);                                // 0x0148   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Class /Script/TheK31.K31UndetectableEffect
/// Size: 0x0020 (0x0003B8 - 0x0003D8)
class UK31UndetectableEffect : public UBaseLingeringStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x03B8   (0x0020)  MISSED
};

/// Class /Script/TheK31.K31Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK31Utilities : public UObject
{ 
public:
};

/// Class /Script/TheK31.K31WeakPointScoreEmitter
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UK31WeakPointScoreEmitter : public UPlayerScoreEmitter
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(80,4137) /* TMap<ACamperPlayer*, FSurvivorWeakPointScoreDatum> */ __um(_registeredSurvivors);    // 0x0050   (0x0050)  


	/// Functions
	// Function /Script/TheK31.K31WeakPointScoreEmitter.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5ca7670] Final|Native|Private 
	// Function /Script/TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeEnd
	// void Authority_OnDechargeEnd(class UChargeableComponent* ChargeableComponent);                                        // [0x5ca7550] Final|Native|Private 
	// Function /Script/TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeBegin
	// void Authority_OnDechargeBegin(class UChargeableComponent* ChargeableComponent);                                      // [0x5ca74c0] Final|Native|Private 
};

/// Class /Script/TheK31.KillerMakeUniqueSurvivorsScreamAchievement
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UKillerMakeUniqueSurvivorsScreamAchievement : public UOnGameEventAchievement
{ 
public:
	SDK_UNDEFINED(80,4138) /* TSet<AActor*> */         __um(_alreadyProcessedSurvivors);                           // 0x0080   (0x0050)  
};

/// Class /Script/TheK31.RecallK31DroneAction
/// Size: 0x0000 (0x000038 - 0x000038)
class URecallK31DroneAction : public UK31DroneChangeStateAction
{ 
public:
};

/// Class /Script/TheK31.ReverseK31DroneAction
/// Size: 0x0000 (0x000030 - 0x000030)
class UReverseK31DroneAction : public UK31DroneBaseAction
{ 
public:
};

/// Class /Script/TheK31.S35P01
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class US35P01 : public UPerk
{ 
public:
	float                                              _fastVaultsTimeSeconds;                                     // 0x03C8   (0x000C)  
	float                                              _cooldownDurationSeconds;                                   // 0x03D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x03D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK31.S35P01.GetFastVaultsTimeSecondsAtLevel
	// float GetFastVaultsTimeSecondsAtLevel();                                                                              // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S35P01.GetCooldownDurationSeconds
	// float GetCooldownDurationSeconds();                                                                                   // [0x500a8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.S35P02
/// Size: 0x0078 (0x0003C8 - 0x000440)
class US35P02 : public UPerk
{ 
public:
	float                                              _hasteEffectDurationSeconds;                                // 0x03C8   (0x000C)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x03D4   (0x0004)  
	class UClass*                                      _hasteEffectClass;                                          // 0x03D8   (0x0008)  
	SDK_UNDEFINED(80,4139) /* TMap<ADBDPlayer*, UStatusEffect*> */ __um(_survivorBuffs);                           // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0430   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK31.S35P02.GetHasteEffectDurationAtLevel
	// float GetHasteEffectDurationAtLevel();                                                                                // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.S35P02Effect
/// Size: 0x0008 (0x000350 - 0x000358)
class US35P02Effect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/TheK31.S35P03
/// Size: 0x0098 (0x0003C8 - 0x000460)
class US35P03 : public UPerk
{ 
public:
	bool                                               _isStatusEffectActiveOnOwningSurvivor;                      // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03C9   (0x0003)  MISSED
	float                                              _cooldownDuration;                                          // 0x03CC   (0x000C)  
	float                                              _speedBoost;                                                // 0x03D8   (0x0004)  
	float                                              _perkRange;                                                 // 0x03DC   (0x0004)  
	class UClass*                                      _hasteEffectClass;                                          // 0x03E0   (0x0008)  
	TArray<class ACamperPlayer*>                       _healedSurvivorsAffected;                                   // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x03F8   (0x0068)  MISSED


	/// Functions
	// Function /Script/TheK31.S35P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
	// void OnRep_IsStatusEffectActiveOnOwningSurvivor();                                                                    // [0x5ca7870] Final|Native|Private 
	// Function /Script/TheK31.S35P03.GetPerkRange
	// float GetPerkRange();                                                                                                 // [0x5020c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S35P03.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.S35P03Effect
/// Size: 0x0018 (0x000350 - 0x000368)
class US35P03Effect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0350   (0x0010)  MISSED
	bool                                               _shouldGiveBuff;                                            // 0x0360   (0x0001)  
	bool                                               _isStatusEffectGivenToSelf;                                 // 0x0361   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0362   (0x0006)  MISSED


	/// Functions
	// Function /Script/TheK31.S35P03Effect.OnRep_GiveBuffToPlayer
	// void OnRep_GiveBuffToPlayer();                                                                                        // [0x5ca7830] Final|Native|Private 
};

/// Class /Script/TheK31.S36P01
/// Size: 0x0088 (0x0003C8 - 0x000450)
class US36P01 : public UPerk
{ 
public:
	float                                              _hasteEffectDurationSeconds;                                // 0x03C8   (0x0004)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x03CC   (0x0004)  
	float                                              _activationDurationSeconds;                                 // 0x03D0   (0x000C)  
	float                                              _exhaustedEffectDurationSeconds;                            // 0x03DC   (0x000C)  
	class UStatusEffect*                               _hasteStatusEffect;                                         // 0x03E8   (0x0008)  
	class UClass*                                      _hasteEffectClass;                                          // 0x03F0   (0x0008)  
	class UActivatableExhaustedEffect*                 _exhaustedStatusEffect;                                     // 0x03F8   (0x0008)  
	class UClass*                                      _exhaustedEffectClass;                                      // 0x0400   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0408   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK31.S36P01.GetHasteEffectMovementSpeedIncrease
	// float GetHasteEffectMovementSpeedIncrease();                                                                          // [0x500aa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P01.GetHasteEffectDurationSeconds
	// float GetHasteEffectDurationSeconds();                                                                                // [0x501b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P01.GetExhaustedEffectDurationAtLevel
	// float GetExhaustedEffectDurationAtLevel();                                                                            // [0x50230e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P01.GetActivationDurationAtLevel
	// float GetActivationDurationAtLevel();                                                                                 // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P01.Authority_OnIsRunningAndMovingChanged
	// void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving);                                                  // [0x5ca75e0] Final|Native|Private 
};

/// Class /Script/TheK31.S36P02
/// Size: 0x0048 (0x0003C8 - 0x000410)
class US36P02 : public UPerk
{ 
public:
	float                                              _brokenStatusEffectSeconds;                                 // 0x03C8   (0x000C)  
	int32_t                                            _requiredHookStage;                                         // 0x03D4   (0x0004)  
	int32_t                                            _currentHookStage;                                          // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _perkInteractionClass;                                      // 0x03E0   (0x0008)  
	class UInteractionDefinition*                      _perkInteraction;                                           // 0x03E8   (0x0008)  
	class UStatusEffect*                               _brokenStatusEffect;                                        // 0x03F0   (0x0008)  
	class UClass*                                      _brokenEffectClass;                                         // 0x03F8   (0x0008)  
	class UClass*                                      _exhaustedEffectClass;                                      // 0x0400   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0408   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK31.S36P02.OnRecoverAbilityButtonTriggeredCosmetic
	// void OnRecoverAbilityButtonTriggeredCosmetic(class ACamperPlayer* OwningSurvivor);                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK31.S36P02.GetBrokenStatusDurationAtLevel
	// float GetBrokenStatusDurationAtLevel();                                                                               // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P02.Authority_OnCamperHealthStateChange
	// void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);       // [0x5ca73f0] Final|Native|Private 
};

/// Class /Script/TheK31.S36P02Interaction
/// Size: 0x0000 (0x000650 - 0x000650)
class US36P02Interaction : public UInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/TheK31.S36P02Interaction.OnRecoverInteractionUsed_Cosmetic
	// void OnRecoverInteractionUsed_Cosmetic(class ACamperPlayer* Survivor);                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK31.S36P03
/// Size: 0x0098 (0x0003C8 - 0x000460)
class US36P03 : public UPerk
{ 
public:
	bool                                               _isStatusEffectActiveOnOwningSurvivor;                      // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03C9   (0x0003)  MISSED
	float                                              _cooldownDuration;                                          // 0x03CC   (0x000C)  
	float                                              _perkRange;                                                 // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _noScratchMarksEffectClass;                                 // 0x03E0   (0x0008)  
	TArray<class ACamperPlayer*>                       _healersAffected;                                           // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x03F8   (0x0068)  MISSED


	/// Functions
	// Function /Script/TheK31.S36P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
	// void OnRep_IsStatusEffectActiveOnOwningSurvivor();                                                                    // [0x5ca7870] Final|Native|Private 
	// Function /Script/TheK31.S36P03.GetPerkRange
	// float GetPerkRange();                                                                                                 // [0x500f7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P03.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK31.S36P03Effect
/// Size: 0x0018 (0x000350 - 0x000368)
class US36P03Effect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0350   (0x0010)  MISSED
	bool                                               _shouldGiveBuff;                                            // 0x0360   (0x0001)  
	bool                                               _isStatusEffectGivenToSelf;                                 // 0x0361   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0362   (0x0006)  MISSED


	/// Functions
	// Function /Script/TheK31.S36P03Effect.ShouldGiveBuff
	// bool ShouldGiveBuff();                                                                                                // [0x5ca7890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK31.S36P03Effect.OnRep_GiveBuffToPlayer
	// void OnRep_GiveBuffToPlayer();                                                                                        // [0x5ca7850] Final|Native|Private 
};

/// Class /Script/TheK31.SurvivorHackDroneInteraction
/// Size: 0x0130 (0x000650 - 0x000780)
class USurvivorHackDroneInteraction : public UInteractionDefinition
{ 
public:
	FDirectionalMiniGameDefinition                     _miniGameDefinition;                                        // 0x0648   (0x0020)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0668   (0x0028)  MISSED
	bool                                               _isHackingComplete;                                         // 0x0690   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0691   (0x0007)  MISSED
	FDBDTunableRowHandle                               _batteryStartingChargePercent;                              // 0x0698   (0x0028)  
	FName                                              _playerSnapSocket;                                          // 0x06C0   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x06CC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _maximumTimeToAttemptDuration;                              // 0x06D0   (0x0028)  
	FDBDTunableRowHandle                               _switchToScoutingModeDuration;                              // 0x06F8   (0x0028)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x0720   (0x0060)  MISSED


	/// Functions
	// Function /Script/TheK31.SurvivorHackDroneInteraction.Authority_OnMinigameEnd
	// void Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result);                       // [0x5ca7690] Final|Native|Private 
};

/// Class /Script/TheK31.SurvivorRemoveClawTrapInteraction
/// Size: 0x00D0 (0x000650 - 0x000720)
class USurvivorRemoveClawTrapInteraction : public UInteractionDefinition
{ 
public:
	FDirectionalMiniGameDefinition                     _miniGameDefinition;                                        // 0x0648   (0x0020)  
	bool                                               _isHackingComplete;                                         // 0x0668   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0669   (0x0007)  MISSED
	class UK31SurvivorClawTrapComponent*               _survivorClawTrapComponent;                                 // 0x0670   (0x0008)  
	FDBDTunableRowHandle                               _batteryRechargeOnFailedRemovalPercent;                     // 0x0678   (0x0028)  
	FDBDTunableRowHandle                               _requiredTimeToRemainStillBeforeInteractingDuration;        // 0x06A0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x06C8   (0x0058)  MISSED


	/// Functions
	// Function /Script/TheK31.SurvivorRemoveClawTrapInteraction.Authority_OnMinigameEnd
	// void Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result);                       // [0x5ca7760] Final|Native|Private 
};

/// Struct /Script/TheK31.ActiveZoneOverlapTracker
/// Size: 0x0018 (0x000000 - 0x000018)
struct FActiveZoneOverlapTracker
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheK31.K31DroneActionRequest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK31DroneActionRequest
{ 
	class UK31DroneBaseAction*                         Action;                                                     // 0x0000   (0x0008)  
	class AK31Drone*                                   Drone;                                                      // 0x0008   (0x0008)  
	FActionPredictionKey                               PredictionKey;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/TheK31.K31DroneActionResponse
/// Size: 0x0020 (0x000000 - 0x000020)
struct FK31DroneActionResponse
{ 
	FK31DroneActionRequest                             Request;                                                    // 0x0000   (0x0018)  
	float                                              Timestamp;                                                  // 0x0018   (0x0004)  
	EK31DroneActionResponse                            Response;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/TheK31.DroneMovementRotationActivationDatum
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDroneMovementRotationActivationDatum
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/TheK31.SurvivorDroneInterpState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSurvivorDroneInterpState
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheK31.SurvivorDroneFrameDatum
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSurvivorDroneFrameDatum
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/TheK31.K31SurvivorTraceInformationThisFrame
/// Size: 0x000C (0x000000 - 0x00000C)
struct FK31SurvivorTraceInformationThisFrame
{ 
	int32_t                                            TotalTraces;                                                // 0x0000   (0x0004)  
	int32_t                                            CompletedTraces;                                            // 0x0004   (0x0004)  
	int32_t                                            CompletedTracesWithLoS;                                     // 0x0008   (0x0004)  
};

/// Struct /Script/TheK31.K31PlayerDroneZoneStruct
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK31PlayerDroneZoneStruct
{ 
	int32_t                                            DistanceToDroneXY;                                          // 0x0000   (0x0004)  
	int32_t                                            DistanceToDroneZ;                                           // 0x0004   (0x0004)  
	bool                                               IsPlayerInZone;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UK31PlayerZoneStatus*                        PlayerZoneStatus;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/TheK31.K31DroneZoneOverlapDatum
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK31DroneZoneOverlapDatum
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheK31.SurvivorWeakPointScoreDatum
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSurvivorWeakPointScoreDatum
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

