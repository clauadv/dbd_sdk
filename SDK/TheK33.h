
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: GFXUtilities
/// dependency: NavigationSystem
/// dependency: QueryService
/// dependency: StatSystem
/// dependency: VFXUtilities

/// Enum /Script/TheK33.EControlStationState
/// Size: 0x05
enum class EControlStationState : uint8_t
{
	EControlStationState__Available                                                  = 0,
	EControlStationState__SpawningTurret                                             = 1,
	EControlStationState__SpawnedTurret                                              = 2,
	EControlStationState__Cooldown                                                   = 3,
	EControlStationState__EControlStationState_MAX                                   = 4
};

/// Enum /Script/TheK33.EK33Foot
/// Size: 0x03
enum class EK33Foot : uint8_t
{
	EK33Foot__LeftFoot                                                               = 0,
	EK33Foot__RightFoot                                                              = 1,
	EK33Foot__EK33Foot_MAX                                                           = 2
};

/// Enum /Script/TheK33.EK33KillerBlockCollisionType
/// Size: 0x04
enum class EK33KillerBlockCollisionType : uint8_t
{
	EK33KillerBlockCollisionType__AllCollisionsEnabled                               = 0,
	EK33KillerBlockCollisionType__WorldCollisionsOnly                                = 1,
	EK33KillerBlockCollisionType__TunnelCollisionsOnly                               = 2,
	EK33KillerBlockCollisionType__EK33KillerBlockCollisionType_MAX                   = 3
};

/// Enum /Script/TheK33.EK33SpecialModeChargeState
/// Size: 0x04
enum class EK33SpecialModeChargeState : uint32_t
{
	EK33SpecialModeChargeState__Idle                                                 = 0,
	EK33SpecialModeChargeState__Charging                                             = 1,
	EK33SpecialModeChargeState__Discharging                                          = 2,
	EK33SpecialModeChargeState__EK33SpecialModeChargeState_MAX                       = 3
};

/// Enum /Script/TheK33.EK33TunnelBlockType
/// Size: 0x07
enum class EK33TunnelBlockType : uint8_t
{
	EK33TunnelBlockType__None                                                        = 0,
	EK33TunnelBlockType__Straight                                                    = 1,
	EK33TunnelBlockType__Corner                                                      = 2,
	EK33TunnelBlockType__T_Junction                                                  = 3,
	EK33TunnelBlockType__CrossJunction                                               = 4,
	EK33TunnelBlockType__DeadEnd                                                     = 5,
	EK33TunnelBlockType__EK33TunnelBlockType_MAX                                     = 6
};

/// Enum /Script/TheK33.EFatherKeyCardState
/// Size: 0x05
enum class EFatherKeyCardState : uint8_t
{
	EFatherKeyCardState__None                                                        = 0,
	EFatherKeyCardState__Undiscovered                                                = 1,
	EFatherKeyCardState__Discovered                                                  = 2,
	EFatherKeyCardState__Secured                                                     = 3,
	EFatherKeyCardState__EFatherKeyCardState_MAX                                     = 4
};

/// Class /Script/TheK33.CollectFatherKeyCardInteraction
/// Size: 0x0000 (0x000670 - 0x000670)
class UCollectFatherKeyCardInteraction : public UCollectItemInteraction
{ 
public:
};

/// Class /Script/TheK33.FatherTerminalHackingInteraction
/// Size: 0x00D0 (0x000650 - 0x000720)
class UFatherTerminalHackingInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5535) /* FMulticastInlineDelegate */ __um(Cosmetic_OnCooldownTimerStartOrDoneEvent);          // 0x0648   (0x0010)  
	SDK_UNDEFINED(16,5536) /* FMulticastInlineDelegate */ __um(Cosmetic_OnInteractionStarted);                     // 0x0658   (0x0010)  
	SDK_UNDEFINED(16,5537) /* FMulticastInlineDelegate */ __um(Cosmetic_OnSuccessfullyEndMiniGameAnimationStarted); // 0x0668   (0x0010)  
	FDirectionalMiniGameDefinition                     _miniGameDefinition;                                        // 0x0678   (0x0020)  
	float                                              _cooldownDurationSeconds;                                   // 0x0698   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x069C   (0x0014)  MISSED
	bool                                               _isHackingCompleted;                                        // 0x06B0   (0x0001)  
	bool                                               _isCooldownTimerRunning;                                    // 0x06B1   (0x0001)  
	bool                                               _useSuccessfullyEndMiniGameExit;                            // 0x06B2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x06B3   (0x0005)  MISSED
	FAnimationMontageDescriptor                        _successfullyEndMiniGameAnimationMontageDescriptor;         // 0x06B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x06D8   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK33.FatherTerminalHackingInteraction.OnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted__DelegateSignature
	// void OnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted__DelegateSignature();                                  // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK33.FatherTerminalHackingInteraction.OnWormholeTerminalHackingInteractionStarted__DelegateSignature
	// void OnWormholeTerminalHackingInteractionStarted__DelegateSignature();                                                // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK33.FatherTerminalHackingInteraction.OnWormholeTerminalHackingCooldownTimerStartOrDone__DelegateSignature
	// void OnWormholeTerminalHackingCooldownTimerStartOrDone__DelegateSignature(bool IsRunning);                            // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK33.FatherTerminalHackingInteraction.OnRep_IsCooldownTimerRunning
	// void OnRep_IsCooldownTimerRunning();                                                                                  // [0x5d4e430] Final|Native|Private 
	// Function /Script/TheK33.FatherTerminalHackingInteraction.Authority_OnMinigameEnd
	// void Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result);                       // [0x5d4dfc0] Final|Native|Private 
	// Function /Script/TheK33.FatherTerminalHackingInteraction.Authority_OnCooldownTimerDone
	// void Authority_OnCooldownTimerDone();                                                                                 // [0x5d4dfa0] Final|Native|Private 
};

/// Class /Script/TheK33.IsInRangeOfK33ControlStation
/// Size: 0x0000 (0x000108 - 0x000108)
class UIsInRangeOfK33ControlStation : public UAnyActorPairQueryRangeIsTrue
{ 
public:
};

/// Class /Script/TheK33.K33AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK33AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isQuadruped;                                               // 0x0610   (0x0001)  
	bool                                               _isInSpecialMode;                                           // 0x0611   (0x0001)  
	bool                                               _isTailAttacking;                                           // 0x0612   (0x0001)  
	bool                                               _isTailAttackCharging;                                      // 0x0613   (0x0001)  
	bool                                               _isInTunnel;                                                // 0x0614   (0x0001)  
	bool                                               _useQuadrupedIK;                                            // 0x0615   (0x0001)  
	bool                                               _useBipedIK;                                                // 0x0616   (0x0001)  
	bool                                               _useLookAt;                                                 // 0x0617   (0x0001)  
	bool                                               _usePushBack;                                               // 0x0618   (0x0001)  
	bool                                               _isBeingHitByTurret;                                        // 0x0619   (0x0001)  
	bool                                               _pushBackQuadrupedActive;                                   // 0x061A   (0x0001)  
	bool                                               _pushBackBipedActive;                                       // 0x061B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x061C   (0x0004)  MISSED
};

/// Class /Script/TheK33.K33CheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK33CheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheK33.K33CheatComponent.DBD_K33ForceSpecialMode
	// void DBD_K33ForceSpecialMode(char force);                                                                             // [0x5d4e090] Final|Exec|Native|Public 
	// Function /Script/TheK33.K33CheatComponent.DBD_K33DrawTunnelBlockConnections
	// void DBD_K33DrawTunnelBlockConnections(float secondsToDisplay);                                                       // [0x496cad0] Final|Exec|Native|Public 
};

/// Class /Script/TheK33.K33CollectTurretFromControlStationInteraction
/// Size: 0x0050 (0x0007D0 - 0x000820)
class UK33CollectTurretFromControlStationInteraction : public UBasicChargeableInteraction
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x07D0   (0x0028)  MISSED
	FAnimationMontageDescriptor                        _cancelMontage;                                             // 0x07F8   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0818   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33ControlStation
/// Size: 0x0228 (0x000338 - 0x000560)
class AK33ControlStation : public AInteractable
{ 
public:
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent_TunnelEntranceSection;               // 0x0338   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent_turretSpawnerSection;                // 0x0340   (0x0008)  
	class UK33ControlStationTurretSpawnerOutlineUpdateStrategy* _outlineStrategy_TurretSpawnerSection;             // 0x0348   (0x0008)  
	class UK33ControlStationTunnelEntranceOutlineUpdateStrategy* _outlineStrategy_TunnelEntranceSection;           // 0x0350   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent_tunnelEntranceSection;                    // 0x0358   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent_turretSpawnerSection;                     // 0x0360   (0x0008)  
	class UBoxComponent*                               _interactionCollisionZone;                                  // 0x0368   (0x0008)  
	class UInteractor*                                 _interactor;                                                // 0x0370   (0x0008)  
	class AK33TunnelBlock*                             _linkedTunnelBlock;                                         // 0x0378   (0x0008)  
	SDK_UNDEFINED(48,5538) /* TWeakObjectPtr<UClass*> */ __um(_exitTunnelInteractableClass);                       // 0x0380   (0x0030)  
	class AK33ExitTunnelInteractable*                  _exitTunnelInteractable;                                    // 0x03B0   (0x0008)  
	class UMontagePlayer*                              _montagePlayer_turretSpawnerSection;                        // 0x03B8   (0x0008)  
	class UMontagePlayer*                              _montagePlayer_tunnelEntranceSection;                       // 0x03C0   (0x0008)  
	class UAnimationMontageSlave*                      _animationSlave_turretSpawnerSection;                       // 0x03C8   (0x0008)  
	class UAnimationMontageSlave*                      _animationSlave_tunnelEntranceSection;                      // 0x03D0   (0x0008)  
	SDK_UNDEFINED(8,5539) /* TWeakObjectPtr<AK33Turret*> */ __um(_linkedTurret);                                   // 0x03D8   (0x0008)  
	EControlStationState                               _currentState;                                              // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	FName                                              _turretSocketName;                                          // 0x03E4   (0x000C)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x03F0   (0x0030)  MISSED
	FDBDTunableRowHandle                               _spawningDuration;                                          // 0x0420   (0x0028)  
	FDBDTunableRowHandle                               _turretAvailabilityCooldownDuration;                        // 0x0448   (0x0028)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0470   (0x0030)  MISSED
	float                                              _worldTimeAtCooldownStart;                                  // 0x04A0   (0x0004)  
	float                                              _malfunctionDuration;                                       // 0x04A4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x28];                                      // 0x04A8   (0x0028)  MISSED
	FDBDTunableRowHandle                               _blockExitTime;                                             // 0x04D0   (0x0028)  
	unsigned char                                      UnknownData04_5[0x60];                                      // 0x04F8   (0x0060)  MISSED
	bool                                               _isMalfunctioning;                                          // 0x0558   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0559   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK33.K33ControlStation.OnRep_IsMalfunctioning
	// void OnRep_IsMalfunctioning();                                                                                        // [0x5d4e450] Final|Native|Private 
	// Function /Script/TheK33.K33ControlStation.OnRep_ExitTunnelInteractable
	// void OnRep_ExitTunnelInteractable();                                                                                  // [0x5d4e410] Final|Native|Private 
	// Function /Script/TheK33.K33ControlStation.OnRep_CurrentState
	// void OnRep_CurrentState(EControlStationState oldState);                                                               // [0x5d4e390] Final|Native|Private 
	// Function /Script/TheK33.K33ControlStation.GetKillerExitTunnelEndLocation
	// FVector GetKillerExitTunnelEndLocation();                                                                             // [0x5872290] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_UpdateControlStationCooldown
	// void Cosmetic_UpdateControlStationCooldown(float cooldownElapsedTimePercent);                                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_StopControlStationMalfunctionReaction
	// void Cosmetic_StopControlStationMalfunctionReaction();                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_StartControlStationMalfunctionReaction
	// void Cosmetic_StartControlStationMalfunctionReaction();                                                               // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_SetTunnelCapVisibility
	// void Cosmetic_SetTunnelCapVisibility(bool IsVisible);                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_OnTurretInPoolCountChanged
	// void Cosmetic_OnTurretInPoolCountChanged(int32_t turretCount);                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_OnControlStationExitingState
	// void Cosmetic_OnControlStationExitingState(EControlStationState exitingState);                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33ControlStation.Cosmetic_OnControlStationEnteringState
	// void Cosmetic_OnControlStationEnteringState(EControlStationState enteringState);                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK33.K33ControlStationAttackableComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK33ControlStationAttackableComponent : public UAttackableComponent
{ 
public:
};

/// Class /Script/TheK33.K33ControlStationTunnelConnection
/// Size: 0x0028 (0x000230 - 0x000258)
class AK33ControlStationTunnelConnection : public AActor
{ 
public:
	class UStaticMeshComponent*                        _tunnelConnectionMesh;                                      // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0238   (0x0020)  MISSED
};

/// Class /Script/TheK33.K33ControlStationTunnelEntranceOutlineUpdateStrategy
/// Size: 0x0020 (0x000158 - 0x000178)
class UK33ControlStationTunnelEntranceOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _controlStationIsFlaggedForTarget;                          // 0x0158   (0x0010)  
	FLinearColor                                       _controlStationIsSelected;                                  // 0x0168   (0x0010)  
};

/// Class /Script/TheK33.K33ControlStationTurretSpawnerAnimInstance
/// Size: 0x0020 (0x0002F0 - 0x000310)
class UK33ControlStationTurretSpawnerAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _isBoxOpening;                                              // 0x02F0   (0x0001)  
	bool                                               _isBoxOpened;                                               // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02F2   (0x0002)  MISSED
	float                                              _boxOpeningPlayRate;                                        // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	class UAnimSequence*                               _spawnTurretAnimSequence;                                   // 0x0300   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33ControlStationTurretSpawnerOutlineUpdateStrategy
/// Size: 0x0028 (0x000100 - 0x000128)
class UK33ControlStationTurretSpawnerOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{ 
public:
	FDBDTunableRowHandle                               _maxDistanceToRevealToSurvivor;                             // 0x0100   (0x0028)  
};

/// Class /Script/TheK33.K33DeployTurretInteraction
/// Size: 0x00A0 (0x0007D0 - 0x000870)
class UK33DeployTurretInteraction : public UBasicChargeableInteraction
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x07D0   (0x0068)  MISSED
	FAnimationMontageDescriptor                        _cancelMontage;                                             // 0x0838   (0x0020)  
	float                                              _cancelDeployDuration;                                      // 0x0858   (0x0004)  
	FVector                                            _dropOffLocation;                                           // 0x085C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0868   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33EnterTunnelInteraction
/// Size: 0x0110 (0x000790 - 0x0008A0)
class UK33EnterTunnelInteraction : public UChargeableInteractionDefinition
{ 
public:
	FAnimationMontageDescriptor                        _confirmEnterControlStationMontage;                         // 0x0790   (0x0020)  
	FAnimationMontageDescriptor                        _cancelMontage;                                             // 0x07B0   (0x0020)  
	FAnimationMontageDescriptor                        _afterTeleportationMontage;                                 // 0x07D0   (0x0020)  
	FVector                                            _cameraTransitionOffset;                                    // 0x07F0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07FC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _chargeInteractionTime;                                     // 0x0800   (0x0028)  
	float                                              _hideWorldElementsMontagePercentageTime;                    // 0x0828   (0x0004)  
	float                                              _fadeOutDuration;                                           // 0x082C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0830   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheK33.K33EnterTunnelInteraction.Multicast_TeleportPlayerToTunnel
	// void Multicast_TeleportPlayerToTunnel(class ADBDPlayer* Player, FVector Location, FRotator Rotation);                 // [0x5d4e280] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
};

/// Class /Script/TheK33.K33ExitTunnelInteractable
/// Size: 0x0030 (0x000338 - 0x000368)
class AK33ExitTunnelInteractable : public AInteractable
{ 
public:
	class USceneComponent*                             _rootComponent;                                             // 0x0338   (0x0008)  
	class UInteractor*                                 _interactor;                                                // 0x0340   (0x0008)  
	class UBoxComponent*                               _interactionCollisionZone;                                  // 0x0348   (0x0008)  
	class AK33ControlStation*                          _linkedControlStation;                                      // 0x0350   (0x0008)  
	FVector                                            _targetLocation;                                            // 0x0358   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0364   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK33.K33ExitTunnelInteractable.OnRep_TargetLocation
	// void OnRep_TargetLocation();                                                                                          // [0x5d4e520] Final|Native|Private 
	// Function /Script/TheK33.K33ExitTunnelInteractable.OnRep_LinkedControlStation
	// void OnRep_LinkedControlStation();                                                                                    // [0x5d4e470] Final|Native|Private 
};

/// Class /Script/TheK33.K33ExitTunnelInteraction
/// Size: 0x01F0 (0x000650 - 0x000840)
class UK33ExitTunnelInteraction : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _firstAnimationTime;                                        // 0x0648   (0x0028)  
	FDBDTunableRowHandle                               _secondAnimationTime;                                       // 0x0670   (0x0028)  
	FDBDTunableRowHandle                               _killerInstinctTriggerDistance;                             // 0x0698   (0x0028)  
	FTunableStat                                       _killerInstinctLingerTime;                                  // 0x06C0   (0x0080)  
	FDBDTunableRowHandle                               _exitTunnelPenaltyRange;                                    // 0x0740   (0x0028)  
	FDBDTunableRowHandle                               _exitTunnelPenaltyPercentage;                               // 0x0768   (0x0028)  
	class UClass*                                      _killerInstinctStatusEffectClass;                           // 0x0790   (0x0008)  
	float                                              _exitTunnelAnimationTime;                                   // 0x0798   (0x0004)  
	float                                              _toggleMeshVisibilityAnimationPercentageTime;               // 0x079C   (0x0004)  
	FVector                                            _cameraOffset;                                              // 0x07A0   (0x000C)  
	float                                              _cameraRotationSpeed;                                       // 0x07AC   (0x0004)  
	float                                              _fadeOutDuration;                                           // 0x07B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x7F];                                      // 0x07B4   (0x007F)  MISSED
	bool                                               _useExitTimePenalty;                                        // 0x0833   (0x0001)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0834   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheK33.K33ExitTunnelInteraction.Multicast_OnSnapTransitionCompleted
	// void Multicast_OnSnapTransitionCompleted(class ADBDPlayer* Player, FVector Location, FRotator Rotation);              // [0x5d4e170] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
};

/// Class /Script/TheK33.K33FallOutOfWorldPositionFinderComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK33FallOutOfWorldPositionFinderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33FeetVFX
/// Size: 0x0070 (0x000230 - 0x0002A0)
class AK33FeetVFX : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	EK33Foot                                           _currentFootType;                                           // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	float                                              _footstepEffectDuration;                                    // 0x023C   (0x0004)  
	SDK_UNDEFINED(16,5540) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0240   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0250   (0x0050)  MISSED


	/// Functions
	// Function /Script/TheK33.K33FeetVFX.Cosmetic_TriggerFootstepVisibility
	// void Cosmetic_TriggerFootstepVisibility(EK33Foot footType, bool IsVisible);                                           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33FeetVFX.Cosmetic_TriggerFootstepTimeline
	// void Cosmetic_TriggerFootstepTimeline(EK33Foot footType, float effectLifetime, FVector& KillerLocation);              // [0x61d2f50] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/TheK33.K33FXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UK33FXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheK33.K33FXInterface.Cosmetic_UpdateTailAttackVFX
	// void Cosmetic_UpdateTailAttackVFX(FVector& Location, FRotator& Rotation);                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_TriggerTunnelTransitionFadeOut
	// void Cosmetic_TriggerTunnelTransitionFadeOut(float timeBeforeFadeOut);                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_TriggerTunnelTransitionFadeIn
	// void Cosmetic_TriggerTunnelTransitionFadeIn(float timeBeforeFadeIn);                                                  // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_TailAttackObstructedVFX
	// void Cosmetic_TailAttackObstructedVFX(FVector& obstructionLocation);                                                  // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_StopTailAttackVFX
	// void Cosmetic_StopTailAttackVFX();                                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_SetVisibility
	// void Cosmetic_SetVisibility(bool IsVisible);                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_SetKillerInvisibleUnderCurrentFloor
	// void Cosmetic_SetKillerInvisibleUnderCurrentFloor(bool shouldKillerBeInvisibleUnderFloor);                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_SetKillerFPVAudioAmbiance
	// void Cosmetic_SetKillerFPVAudioAmbiance(bool isTunnelAmbianceActive);                                                 // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_OnTurretMaxDamageReceived
	// void Cosmetic_OnTurretMaxDamageReceived();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_OnTurretHitByTailAttack
	// void Cosmetic_OnTurretHitByTailAttack(class AK33Turret* turret);                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_OnTurretDamageChanged
	// void Cosmetic_OnTurretDamageChanged(float damagePercent);                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_OnSurvivorHitByTailAttack
	// void Cosmetic_OnSurvivorHitByTailAttack(class ACamperPlayer* Player);                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_OnSpecialModeChanged
	// void Cosmetic_OnSpecialModeChanged(bool isInSpecialMode);                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33FXInterface.Cosmetic_OnKillerShotByTurret
	// void Cosmetic_OnKillerShotByTurret();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK33.K33Husk
/// Size: 0x0038 (0x000268 - 0x0002A0)
class AK33Husk : public APoseableHusk
{ 
public:
	class UMontagePlayer*                              _montagePlayer;                                             // 0x0268   (0x0008)  
	class UTerrorRadiusEmitterComponent*               _terrorRadiusEmitterComponent;                              // 0x0270   (0x0008)  
	class UAkComponent*                                _huskAudioComponent;                                        // 0x0278   (0x0008)  
	class UCurveFloat*                                 _terrorRadiusDistanceOffsetCurve;                           // 0x0280   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0288   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33HuskAnimInstance
/// Size: 0x0020 (0x0002F0 - 0x000310)
class UK33HuskAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _isFPV;                                                     // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02F1   (0x0003)  MISSED
	float                                              _cameraPitchValue;                                          // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK33.K33HuskAnimInstance.GetCopiedSkeletalMesh
	// class USkeletalMeshComponent* GetCopiedSkeletalMesh();                                                                // [0x5d4e140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33HuskAnimInstance.GetCopiedCustomizedSkeletalMesh
	// class UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh();                                                     // [0x5d4e110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.K33KillerControlStationSelectorComponent
/// Size: 0x0210 (0x0000B8 - 0x0002C8)
class UK33KillerControlStationSelectorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	float                                              _thresholdDeltaSquaredDistanceForBestTargetRecalculation;   // 0x00D0   (0x0004)  
	float                                              _minDeltaDotProductForBestTargetRecalculation;              // 0x00D4   (0x0004)  
	float                                              _minDotProductForEligibleControlStationTarget;              // 0x00D8   (0x0004)  
	float                                              _minDistanceForEligibleControlStationTargetOutsideTunnel;   // 0x00DC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00E0   (0x0008)  MISSED
	SDK_UNDEFINED(48,5541) /* TWeakObjectPtr<UClass*> */ __um(_actorIndicatorClass);                               // 0x00E8   (0x0030)  
	SDK_UNDEFINED(48,5542) /* TWeakObjectPtr<UClass*> */ __um(_tunnelNavigationComponentClass);                    // 0x0118   (0x0030)  
	class ADBDActorIndicator*                          _indicatorInstance;                                         // 0x0148   (0x0008)  
	class UK33TunnelNavigationComponent*               _tunnelNavigationComponentInstance;                         // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0158   (0x0018)  MISSED
	class AK33ControlStation*                          _replicated_selectedControlStation;                         // 0x0170   (0x0008)  
	class UAimDirectionProvider*                       _aimDirectionProvider;                                      // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_6[0x148];                                     // 0x0180   (0x0148)  MISSED


	/// Functions
	// Function /Script/TheK33.K33KillerControlStationSelectorComponent.Server_SetSelectedControlStation
	// void Server_SetSelectedControlStation(class AK33ControlStation* ControlStation);                                      // [0x5d4e540] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheK33.K33KillerControlStationSelectorComponent.OnRep_Replicated_SelectedControlStation
	// void OnRep_Replicated_SelectedControlStation(class AK33ControlStation* previousSelectedControlStation);               // [0x5d4e490] Final|Native|Private 
};

/// Class /Script/TheK33.K33KillerStunnedByTurretStatusEffect
/// Size: 0x0030 (0x000350 - 0x000380)
class UK33KillerStunnedByTurretStatusEffect : public UStatusEffect
{ 
public:
	class UCurveFloat*                                 _movementSpeedCurve;                                        // 0x0350   (0x0008)  
	FDBDTunableRowHandle                               _movementSpeedDuration;                                     // 0x0358   (0x0028)  
};

/// Class /Script/TheK33.K33KillerTunnelStateComponent
/// Size: 0x0280 (0x0000B8 - 0x000338)
class UK33KillerTunnelStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTagStateBool                                      _isInTunnel;                                                // 0x00C0   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class UClass*                                      _movementInputConstraintStrategyClass;                      // 0x00F8   (0x0008)  
	class UK33TunnelMovementInputAccelerationConstraintStrategyComponent* _movementInputConstraintStrategy;        // 0x0100   (0x0008)  
	TArray<class UClass*>                              _inTunnelUntouchedClasses;                                  // 0x0108   (0x0010)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x0118   (0x0050)  MISSED
	SDK_UNDEFINED(48,5543) /* TWeakObjectPtr<UClass*> */ __um(_controlStationTunnelConnectionClass);               // 0x0168   (0x0030)  
	class AK33ControlStationTunnelConnection*          _controlStationTunnelConnectionInstance;                    // 0x0198   (0x0008)  
	FName                                              _killerCameraSocketName;                                    // 0x01A0   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x01AC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _accelerationMultiplier;                                    // 0x01B0   (0x0028)  
	FDBDTunableRowHandle                               _heightOffsetForDistanceChecks;                             // 0x01D8   (0x0028)  
	float                                              _defaultOcclusionRefreshInterval;                           // 0x0200   (0x0004)  
	float                                              _minAnimPitchInTunnel;                                      // 0x0204   (0x0004)  
	unsigned char                                      UnknownData04_5[0x22];                                      // 0x0208   (0x0022)  MISSED
	bool                                               _worldElementsVisibility;                                   // 0x022A   (0x0001)  
	bool                                               _tunnelElementsVisibility;                                  // 0x022B   (0x0001)  
	EK33KillerBlockCollisionType                       _killerCollisionBlockType;                                  // 0x022C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x10B];                                     // 0x022D   (0x010B)  MISSED


	/// Functions
	// Function /Script/TheK33.K33KillerTunnelStateComponent.OnRep_WorldElementsVisibility
	// void OnRep_WorldElementsVisibility();                                                                                 // [0x5d52730] Final|Native|Private 
	// Function /Script/TheK33.K33KillerTunnelStateComponent.OnRep_TunnelElementsVisibility
	// void OnRep_TunnelElementsVisibility();                                                                                // [0x5d526f0] Final|Native|Private 
	// Function /Script/TheK33.K33KillerTunnelStateComponent.OnRep_KillerCollisionBlockType
	// void OnRep_KillerCollisionBlockType();                                                                                // [0x5d526b0] Final|Native|Private 
	// Function /Script/TheK33.K33KillerTunnelStateComponent.OnRep_IsInTunnel
	// void OnRep_IsInTunnel();                                                                                              // [0x5d52690] Final|Native|Private 
	// Function /Script/TheK33.K33KillerTunnelStateComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5d525b0] Final|Native|Private 
};

/// Class /Script/TheK33.K33P01
/// Size: 0x00A0 (0x0003C8 - 0x000468)
class UK33P01 : public UPerk
{ 
public:
	float                                              _perkActivationTime;                                        // 0x03C8   (0x0004)  
	float                                              _perkCooldownTime;                                          // 0x03CC   (0x000C)  
	class UClass*                                      _blindedStatusEffect;                                       // 0x03D8   (0x0008)  
	float                                              _blindedEffectDuration;                                     // 0x03E0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x03EC   (0x0014)  MISSED
	TArray<class ACamperPlayer*>                       _activatedSurvivors;                                        // 0x0400   (0x0010)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0410   (0x0058)  MISSED


	/// Functions
	// Function /Script/TheK33.K33P01.Multicast_RevealAndMakeSurvivorScream
	// void Multicast_RevealAndMakeSurvivorScream(class ACamperPlayer* Survivor);                                            // [0x4ff91d0] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK33.K33P01.GetPerkCooldownTimeAtLevel
	// float GetPerkCooldownTimeAtLevel();                                                                                   // [0x4fe8200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33P01.GetPerkActivationTime
	// float GetPerkActivationTime();                                                                                        // [0x4b75200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33P01.GetBlindedEffectDurationAtLevel
	// float GetBlindedEffectDurationAtLevel();                                                                              // [0x4fe82f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33P01.BP_RevealAndMakeSurvivorScream
	// void BP_RevealAndMakeSurvivorScream(class ACamperPlayer* survivorPlayer);                                             // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33P01.Authority_OnHealthStateChanged
	// void Authority_OnHealthStateChanged(FGameplayTag GameplayTag, FGameEventData& GameEventData);                         // [0x5d52380] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK33.K33P02
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UK33P02 : public UPerk
{ 
public:
	class UClass*                                      _hasteStatusEffect;                                         // 0x03C8   (0x0008)  
	float                                              _hasteDuration;                                             // 0x03D0   (0x000C)  
	float                                              _hasteAmount;                                               // 0x03DC   (0x0004)  
	class UStatusEffect*                               _hasteEffect;                                               // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheK33.K33P02.GetHasteDurationAtLevel
	// float GetHasteDurationAtLevel();                                                                                      // [0x4fe8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33P02.GetHasteAmount
	// float GetHasteAmount();                                                                                               // [0x5a626b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.K33P03
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UK33P03 : public UPerk
{ 
public:
	float                                              _perkAuraRevealDuration;                                    // 0x03C8   (0x000C)  
	float                                              _obliviousDuration;                                         // 0x03D4   (0x000C)  
	class UClass*                                      _revealedStatusEffect;                                      // 0x03E0   (0x0008)  
	class UClass*                                      _obliviousStatusEffect;                                     // 0x03E8   (0x0008)  


	/// Functions
	// Function /Script/TheK33.K33P03.GetPerkAuraRevealDurationAtLevel
	// float GetPerkAuraRevealDurationAtLevel();                                                                             // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33P03.GetObliviousDurationAtLevel
	// float GetObliviousDurationAtLevel();                                                                                  // [0x4fe8230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.K33Power
/// Size: 0x0180 (0x0004C8 - 0x000648)
class AK33Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C8   (0x0018)  MISSED
	class UChargeableComponent*                        _tailAttackChargeableComponent;                             // 0x04E0   (0x0008)  
	class UInteractor*                                 _interactor;                                                // 0x04E8   (0x0008)  
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                         // 0x04F0   (0x0008)  
	FTunableStat                                       _tailAttackChargeTime;                                      // 0x04F8   (0x0080)  
	class UK33PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;                  // 0x0578   (0x0008)  
	class UPowerChargeComponent*                       _k33PowerCharge;                                            // 0x0580   (0x0008)  
	class ULocalActorPoolComponent*                    _feetActorPool;                                             // 0x0588   (0x0008)  
	TArray<class UClass*>                              _killerStatusEffects;                                       // 0x0590   (0x0010)  
	TArray<class UClass*>                              _survivorStatusEffects;                                     // 0x05A0   (0x0010)  
	class UClass*                                      _killerTunnelComponentClass;                                // 0x05B0   (0x0008)  
	class UClass*                                      _quadrupedComponentClass;                                   // 0x05B8   (0x0008)  
	class UClass*                                      _controlStationSelectorComponentClass;                      // 0x05C0   (0x0008)  
	class UClass*                                      _survivorDetectionComponentClass;                           // 0x05C8   (0x0008)  
	class UClass*                                      _turretDamageComponentClass;                                // 0x05D0   (0x0008)  
	class UClass*                                      _turretPlacerComponentClass;                                // 0x05D8   (0x0008)  
	class UClass*                                      _k33HuskClass;                                              // 0x05E0   (0x0008)  
	TArray<class UK33TurretPlacer*>                    _turretPlacers;                                             // 0x05E8   (0x0010)  
	uint32_t                                           _feetPoolSize;                                              // 0x05F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05FC   (0x0004)  MISSED
	class UClass*                                      _feetActorClass;                                            // 0x0600   (0x0008)  
	class AK33Husk*                                    _k33Husk;                                                   // 0x0608   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0610   (0x0020)  MISSED
	class UActorPoolInitializer*                       _turretPoolInitializer;                                     // 0x0630   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _turretPool;                                                // 0x0638   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0640   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK33.K33Power.OnRep_TurretPlacers
	// void OnRep_TurretPlacers();                                                                                           // [0x5d52710] Final|Native|Private 
	// Function /Script/TheK33.K33Power.GetTailAttackInteraction
	// class UK33TailAttackInteraction* GetTailAttackInteraction();                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/TheK33.K33Power_Addon
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UK33Power_Addon : public UOnEventBaseAddon
{ 
public:
	class UClass*                                      _blindnessStatusEffect;                                     // 0x02C8   (0x0008)  
	float                                              _blindnessDuration;                                         // 0x02D0   (0x0004)  
	float                                              _survivorRangeDistanceFromTurretToTriggerEffect;            // 0x02D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02D8   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33PowerAddon20StatusEffect
/// Size: 0x0028 (0x000350 - 0x000378)
class UK33PowerAddon20StatusEffect : public UActivatableStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _effectDuration;                                            // 0x0350   (0x0028)  
};

/// Class /Script/TheK33.K33PowerAnimInstance
/// Size: 0x0000 (0x000620 - 0x000620)
class UK33PowerAnimInstance : public UBaseKillerAttackSubAnimInstance
{ 
public:
};

/// Class /Script/TheK33.K33PowerChargePresentationItemProgressComponent
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
class UK33PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00C0   (0x0030)  MISSED
};

/// Class /Script/TheK33.K33PushbackAnimInstance
/// Size: 0x00D0 (0x0002C0 - 0x000390)
class UK33PushbackAnimInstance : public UAnimInstance
{ 
public:
	bool                                               IsActive;                                                   // 0x02C0   (0x0001)  
	bool                                               IsFPV;                                                      // 0x02C1   (0x0001)  
	SDK_UNDEFINED(1,5544) /* TEnumAsByte<ETraceTypeQuery> */ __um(_traceTypeQuery);                                // 0x02C2   (0x0001)  
	bool                                               _traceComplex;                                              // 0x02C3   (0x0001)  
	bool                                               _ignoreTouches;                                             // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C5   (0x0003)  MISSED
	float                                              _forwardCheckDistance;                                      // 0x02C8   (0x0004)  
	float                                              _backwardCheckDistance;                                     // 0x02CC   (0x0004)  
	FVector                                            _lineTraceStartOffset;                                      // 0x02D0   (0x000C)  
	float                                              ForwardHitDistance;                                         // 0x02DC   (0x0004)  
	float                                              BackwardHitDistance;                                        // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x84];                                      // 0x02E4   (0x0084)  MISSED
	class ACharacter*                                  _character;                                                 // 0x0368   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0370   (0x0020)  MISSED
};

/// Class /Script/TheK33.K33QuadrupedComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UK33QuadrupedComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTagStateBool                                      _isInQuadrupedMode;                                         // 0x00C0   (0x0030)  
};

/// Class /Script/TheK33.K33SelectControlStationInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UK33SelectControlStationInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheK33.K33SelectedControlStationLinkedActorOutlineUpdateStrategy
/// Size: 0x0050 (0x000100 - 0x000150)
class UK33SelectedControlStationLinkedActorOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _revealedColorForSelectedLinkedControlStation;              // 0x0100   (0x0010)  
	FLinearColor                                       _revealedColorForTargetedLinkedControlStation;              // 0x0110   (0x0010)  
	FDBDTunableRowHandle                               _exitProximityDistance;                                     // 0x0120   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33SelectedControlStationOutlineFollower
/// Size: 0x0000 (0x000030 - 0x000030)
class UK33SelectedControlStationOutlineFollower : public UInterface
{ 
public:
};

/// Class /Script/TheK33.K33SpawnTurretInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UK33SpawnTurretInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheK33.K33SpecialModeComponent
/// Size: 0x01C0 (0x0000B8 - 0x000278)
class UK33SpecialModeComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	FTagStateBool                                      _isInSpecialMode;                                           // 0x00C8   (0x0030)  
	FDBDTunableRowHandle                               _specialModeMaxCharge;                                      // 0x00F8   (0x0028)  
	FDBDTunableRowHandle                               _specialModeMaximumChargePercentOnPickUp;                   // 0x0120   (0x0028)  
	FDBDTunableRowHandle                               _specialModeMovingInTunnelChargeRate;                       // 0x0148   (0x0028)  
	FDBDTunableRowHandle                               _specialModeDechargeRatePerAttackingTurrets;                // 0x0170   (0x0028)  
	FDBDTunableRowHandle                               _terrorRadiusSizeInSpecialMode;                             // 0x0198   (0x0028)  
	FNonTunableStat                                    _specialModeNormalChargeRate;                               // 0x01C0   (0x0060)  
	EK33SpecialModeChargeState                         _chargeState;                                               // 0x0220   (0x0004)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x0224   (0x0054)  MISSED


	/// Functions
	// Function /Script/TheK33.K33SpecialModeComponent.OnRep_IsInSpecialMode
	// void OnRep_IsInSpecialMode();                                                                                         // [0x5d52670] Final|Native|Private 
	// Function /Script/TheK33.K33SpecialModeComponent.OnRep_ChargeState
	// void OnRep_ChargeState();                                                                                             // [0x5d52650] Final|Native|Private 
	// Function /Script/TheK33.K33SpecialModeComponent.OnPowerChargeChanged
	// void OnPowerChargeChanged(float currentChargePercent);                                                                // [0x5d525d0] Final|Native|Private 
	// Function /Script/TheK33.K33SpecialModeComponent.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x5d52490] Final|Native|Private 
};

/// Class /Script/TheK33.K33SurvivorCosmeticHelperActor
/// Size: 0x0098 (0x000270 - 0x000308)
class AK33SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0270   (0x0098)  MISSED


	/// Functions
	// Function /Script/TheK33.K33SurvivorCosmeticHelperActor.GetCarriedTurret
	// class AK33Turret* GetCarriedTurret();                                                                                 // [0x5d52580] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_UpdateTurretLaserPlacement
	// void Cosmetic_UpdateTurretLaserPlacement(FVector& placementLocation, FRotator& placementRotation);                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_OnTurretPlacementVisualFeedbackActivationChanged
	// void Cosmetic_OnTurretPlacementVisualFeedbackActivationChanged(bool activated, bool IsPlacementValid);                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_OnTurretPlacementValidityChanged
	// void Cosmetic_OnTurretPlacementValidityChanged(bool IsPlacementValid);                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33SurvivorCosmeticHelperActor.Cosmetic_InitializeTurretPlacementVisualFeedback
	// void Cosmetic_InitializeTurretPlacementVisualFeedback(FName& SocketName);                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/TheK33.K33SurvivorDetectedFromTunnelStatusEffect
/// Size: 0x00B0 (0x000350 - 0x000400)
class UK33SurvivorDetectedFromTunnelStatusEffect : public UStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _timeBetweenFootsteps;                                      // 0x0350   (0x0028)  
	EHudScreenIndicatorType                            _offscreenIndicatorType;                                    // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0379   (0x0007)  MISSED
	FDBDTunableRowHandle                               _offscreenIndicatorMinVisibleDistance;                      // 0x0380   (0x0028)  
	FDBDTunableRowHandle                               _offscreenIndicatorLifetime;                                // 0x03A8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x03D0   (0x0014)  MISSED
	float                                              _indicatorLerpMultiplierSpeed;                              // 0x03E4   (0x0004)  
	float                                              _aboveKillerHeadRange;                                      // 0x03E8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x03EC   (0x0014)  MISSED
};

/// Class /Script/TheK33.K33SurvivorDetectionComponent
/// Size: 0x0150 (0x0000B8 - 0x000208)
class UK33SurvivorDetectionComponent : public UActorComponent
{ 
public:
	FTunableStat                                       _detectionDistance;                                         // 0x00B8   (0x0080)  
	class UClass*                                      _survivorStatusEffect;                                      // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0140   (0x0058)  MISSED
	SDK_UNDEFINED(16,5545) /* TArray<TWeakObjectPtr<ACamperPlayer*>> */ __um(_survivorsInRange);                   // 0x0198   (0x0010)  
	FDBDTunableRowHandle                               _bufferTimeBeforeActivatingSurvivorDetection;               // 0x01A8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x01D0   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheK33.K33SurvivorDetectionComponent.OnRep_SurvivorsInRange
	// void OnRep_SurvivorsInRange();                                                                                        // [0x5d526d0] Final|Native|Private 
	// Function /Script/TheK33.K33SurvivorDetectionComponent.Authority_OnSurvivorInRangeChanged
	// void Authority_OnSurvivorInRangeChanged(bool inRange, class ACamperPlayer* Player);                                   // [0x5d524b0] Final|Native|Private 
};

/// Class /Script/TheK33.K33SurvivorTurretDestructionComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK33SurvivorTurretDestructionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33TailAttack
/// Size: 0x0140 (0x000390 - 0x0004D0)
class UK33TailAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0390   (0x0008)  MISSED
	FDBDTunableRowHandle                               _useGamepadEmulationForYaw;                                 // 0x0398   (0x0028)  
	FDBDTunableRowHandle                               _yawPitchSpeedSmoothingTime;                                // 0x03C0   (0x0028)  
	FDBDTunableRowHandle                               _yawSpeedResetSmoothingTime;                                // 0x03E8   (0x0028)  
	FDBDTunableRowHandle                               _yawScale;                                                  // 0x0410   (0x0028)  
	FDBDTunableRowHandle                               _pitchScale;                                                // 0x0438   (0x0028)  
	FDBDTunableRowHandle                               _yawPitchDelayTime;                                         // 0x0460   (0x0028)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0488   (0x0048)  MISSED
};

/// Class /Script/TheK33.K33TailAttackOpenSubstate
/// Size: 0x0000 (0x000130 - 0x000130)
class UK33TailAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
};

/// Class /Script/TheK33.K33TailAttackHittingSubstate
/// Size: 0x0200 (0x0001A0 - 0x0003A0)
class UK33TailAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
	FDBDTunableRowHandle                               _useGamepadEmulationForYaw;                                 // 0x01A0   (0x0028)  
	FDBDTunableRowHandle                               _yawSpeedResetSmoothingTime;                                // 0x01C8   (0x0028)  
	FDBDTunableRowHandle                               _attackSphereTraceRadius;                                   // 0x01F0   (0x0028)  
	FDBDTunableRowHandle                               _tailAttackLength;                                          // 0x0218   (0x0028)  
	class UCurveFloat*                                 _tailMovementCurve;                                         // 0x0240   (0x0008)  
	FDBDTunableRowHandle                               _tailAttackFromYOffset;                                     // 0x0248   (0x0028)  
	FDBDTunableRowHandle                               _tailAttackStartHeight;                                     // 0x0270   (0x0028)  
	FDBDTunableRowHandle                               _tailAttackEndHeight;                                       // 0x0298   (0x0028)  
	FDBDTunableRowHandle                               _tailAttackEndPointInitialHeightOffset;                     // 0x02C0   (0x0028)  
	FDBDTunableRowHandle                               _tailAttackEndPointEndHeightOffset;                         // 0x02E8   (0x0028)  
	FDBDTunableRowHandle                               _maxSweepLength;                                            // 0x0310   (0x0028)  
	float                                              _minDistanceForFarObstructionHit;                           // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x033C   (0x0064)  MISSED
};

/// Class /Script/TheK33.K33TailAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UK33TailAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheK33.K33TailAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UK33TailAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheK33.K33TailAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UK33TailAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheK33.K33TailAttackInteraction
/// Size: 0x00B0 (0x000790 - 0x000840)
class UK33TailAttackInteraction : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _interactionViewPitchMax;                                   // 0x0790   (0x0028)  
	FDBDTunableRowHandle                               _interactionViewPitchMin;                                   // 0x07B8   (0x0028)  
	FDBDTunableRowHandle                               _cancelAttackMovementSlowdownDuration;                      // 0x07E0   (0x0028)  
	class UCurveFloat*                                 _cancelAttackMovementSlowdownCurve;                         // 0x0808   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0810   (0x0030)  MISSED
};

/// Class /Script/TheK33.K33TunnelBlock
/// Size: 0x0038 (0x000230 - 0x000268)
class AK33TunnelBlock : public AActor
{ 
public:
	class USceneComponent*                             _rootComponent;                                             // 0x0230   (0x0008)  
	class UK33TunnelBlockCosmeticActorSpawner*         _cosmeticActorSpawner;                                      // 0x0238   (0x0008)  
	class AK33TunnelBlockCosmetic*                     _tunnelCosmeticActor;                                       // 0x0240   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0248   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TunnelBlock.GetExitTunnelInteractableSpawnRotation
	// FRotator GetExitTunnelInteractableSpawnRotation();                                                                    // [0x5b7c560] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TheK33.K33TunnelBlock.GetExitTunnelInteractableSpawnLocation
	// FVector GetExitTunnelInteractableSpawnLocation();                                                                     // [0x5d56050] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TheK33.K33TunnelBlock.GetEnterTunnelTeleportLocation
	// FVector GetEnterTunnelTeleportLocation();                                                                             // [0x5d56010] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/TheK33.K33TunnelBlockCosmetic
/// Size: 0x0070 (0x000230 - 0x0002A0)
class AK33TunnelBlockCosmetic : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	bool                                               _hasTunnelExitTile;                                         // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	class USplineComponent*                            _splineComponent;                                           // 0x0240   (0x0008)  
	class USceneComponent*                             _rootComponent;                                             // 0x0248   (0x0008)  
	class UClass*                                      _tunnelProceduralConnectionClass;                           // 0x0250   (0x0008)  
	uint32_t                                           _numberOfConnectionActors;                                  // 0x0258   (0x0004)  
	float                                              _initialConnectionOffsetFromCenter;                         // 0x025C   (0x0004)  
	float                                              _endConnectionOffsetFromCenter;                             // 0x0260   (0x0004)  
	float                                              _lengthBetweenSplinePoints;                                 // 0x0264   (0x0004)  
	float                                              _rotationPerSplinePoint;                                    // 0x0268   (0x0004)  
	float                                              _firstSplinePointOffsetValue;                               // 0x026C   (0x0004)  
	float                                              _secondSplinePointOffsetValue;                              // 0x0270   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0274   (0x0004)  MISSED
	TArray<class AK33TunnelProceduralConnection*>      _tunnelProceduralConnections;                               // 0x0278   (0x0010)  
	SDK_UNDEFINED(16,5546) /* TArray<TWeakObjectPtr<USceneComponent*>> */ __um(_vfxPathLightsTransforms);          // 0x0288   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0298   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TunnelBlockCosmetic.GetExitTunnelLocation
	// FVector GetExitTunnelLocation();                                                                                      // [0x5b7c560] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TheK33.K33TunnelBlockCosmetic.Cosmetic_ShowTunnelBlockExit
	// void Cosmetic_ShowTunnelBlockExit();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33TunnelBlockCosmetic.Cosmetic_SetTunnelExitAsBlocked
	// void Cosmetic_SetTunnelExitAsBlocked(bool IsBlocked);                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33TunnelBlockCosmetic.Cosmetic_OnTunnelBlockExitSelected
	// void Cosmetic_OnTunnelBlockExitSelected(bool IsSelected);                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33TunnelBlockCosmetic.Cosmetic_EnableTunnelVFXPathLight
	// void Cosmetic_EnableTunnelVFXPathLight(FVector& Location, FRotator& Rotation);                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK33.K33TunnelBlockCosmetic.Cosmetic_DisableTunnelVFXPathLight
	// void Cosmetic_DisableTunnelVFXPathLight();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/TheK33.K33CosmeticTunnelBlockVariationInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FK33CosmeticTunnelBlockVariationInfo
{ 
	float                                              PercentageChance;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(48,5547) /* TWeakObjectPtr<UClass*> */ __um(TunnelBlockCosmeticClass);                           // 0x0008   (0x0030)  
};

/// Struct /Script/TheK33.K33CosmeticTunnelBlockSpawnInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FK33CosmeticTunnelBlockSpawnInfo
{ 
	SDK_UNDEFINED(48,5548) /* TWeakObjectPtr<UClass*> */ __um(DefaultClassType);                                   // 0x0000   (0x0030)  
	TArray<FK33CosmeticTunnelBlockVariationInfo>       Variations;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/TheK33.K33TunnelBlockCosmeticActorSpawner
/// Size: 0x0160 (0x000220 - 0x000380)
class UK33TunnelBlockCosmeticActorSpawner : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0xE0];                                      // 0x0220   (0x00E0)  MISSED
	FK33CosmeticTunnelBlockSpawnInfo                   _cosmeticBlockSpawnInfo;                                    // 0x0300   (0x0040)  
	SDK_UNDEFINED(48,5549) /* TWeakObjectPtr<UClass*> */ __um(_selectedTunnelBlockCosmeticClass);                  // 0x0340   (0x0030)  
	int32_t                                            _editorVariationIndex;                                      // 0x0370   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0374   (0x000C)  MISSED
};

/// Class /Script/TheK33.K33TunnelMovementInputAccelerationConstraintStrategyComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UK33TunnelMovementInputAccelerationConstraintStrategyComponent : public UBaseInputAccelerationConstraintStrategy
{ 
public:
	TArray<FVector>                                    _forcedDirectionalInputs;                                   // 0x00B8   (0x0010)  
};

/// Class /Script/TheK33.K33TunnelNavigationComponent
/// Size: 0x00C8 (0x0000B8 - 0x000180)
class UK33TunnelNavigationComponent : public UActorComponent
{ 
public:
	float                                              _dotProductDeltaValueForPathRecalculation;                  // 0x00B8   (0x0004)  
	float                                              _minDistanceDeltaForPathRecalculation;                      // 0x00BC   (0x0004)  
	class UClass*                                      _tunnelPulsationComponentClass;                             // 0x00C0   (0x0008)  
	class UK33TunnelPulsationComponent*                _tunnelPulsationComponent;                                  // 0x00C8   (0x0008)  
	class UAimDirectionProvider*                       _aimDirectionProvider;                                      // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x00D8   (0x00A8)  MISSED
};

/// Class /Script/TheK33.K33TunnelProceduralConnection
/// Size: 0x0078 (0x000230 - 0x0002A8)
class AK33TunnelProceduralConnection : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	class USplineComponent*                            _splineComponent;                                           // 0x0238   (0x0008)  
	class USceneComponent*                             _splineMeshContainer;                                       // 0x0240   (0x0008)  
	class UK33SelectedControlStationLinkedActorOutlineUpdateStrategy* _outlineStrategy;                            // 0x0248   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0250   (0x0008)  
	class UStaticMesh*                                 _staticMeshComponent;                                       // 0x0258   (0x0008)  
	class UMaterial*                                   _staticMeshMaterial;                                        // 0x0260   (0x0008)  
	SDK_UNDEFINED(1,5550) /* TEnumAsByte<ESplineMeshAxis> */ __um(_splineMeshAxis);                                // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	FVector2D                                          _meshScaling;                                               // 0x026C   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0274   (0x0004)  MISSED
	class USplineComponent*                            _splineMeshComponent;                                       // 0x0278   (0x0008)  
	TArray<class USplineMeshComponent*>                _splineMeshes;                                              // 0x0280   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0290   (0x0018)  MISSED
};

/// Struct /Script/TheK33.K33GridCellLocation
/// Size: 0x0008 (0x000000 - 0x000008)
struct FK33GridCellLocation
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/TheK33.K33TunnelGridCellData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FK33TunnelGridCellData
{ 
	FVector                                            GridWorldLocation;                                          // 0x0000   (0x000C)  
	SDK_UNDEFINED(8,5551) /* TWeakObjectPtr<AK33ControlStation*> */ __um(ControlStation);                          // 0x000C   (0x0008)  
	FK33GridCellLocation                               _gridLocation;                                              // 0x0014   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/TheK33.K33TunnelBlockSpawnDatum
/// Size: 0x0030 (0x000000 - 0x000030)
struct FK33TunnelBlockSpawnDatum
{ 
	FRotator                                           _worldRotation;                                             // 0x0000   (0x000C)  
	EK33TunnelBlockType                                _blockType;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FK33TunnelGridCellData                             _gridInfo;                                                  // 0x0010   (0x0020)  
};

/// Struct /Script/TheK33.K33TunnelBlockSpawnData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK33TunnelBlockSpawnData
{ 
	TArray<FK33TunnelBlockSpawnDatum>                  Data;                                                       // 0x0000   (0x0010)  
	bool                                               IsDataSet;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/TheK33.K33TunnelProceduralGenerationComponent
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UK33TunnelProceduralGenerationComponent : public UKillerSpecificGameStateComponent
{ 
public:
	FK33TunnelBlockSpawnData                           _blocksSpawnData;                                           // 0x00B8   (0x0018)  
	SDK_UNDEFINED(80,5552) /* TMap<EK33TunnelBlockType, TWeakObjectPtr<UClass*>> */ __um(_tunnelBlockAssetsReferences); // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,5553) /* TMap<EK33TunnelBlockType, UClass*> */ __um(_tunnelBlockAssetClasses);                // 0x0120   (0x0050)  
	TArray<class AK33TunnelBlock*>                     _tunnelBlocks;                                              // 0x0170   (0x0010)  
	float                                              _blockSize;                                                 // 0x0180   (0x0004)  
	float                                              _basementHeightOffset;                                      // 0x0184   (0x0004)  


	/// Functions
	// Function /Script/TheK33.K33TunnelProceduralGenerationComponent.OnRep_BlockSpawnData
	// void OnRep_BlockSpawnData();                                                                                          // [0x5d560c0] Final|Native|Private 
};

/// Class /Script/TheK33.K33TunnelPulsationComponent
/// Size: 0x0078 (0x0000B8 - 0x000130)
class UK33TunnelPulsationComponent : public UActorComponent
{ 
public:
	int32_t                                            _initialPulsePoolSize;                                      // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UClass*                                      _tunnelPulseActorClass;                                     // 0x00C0   (0x0008)  
	float                                              _pulseSpeed;                                                // 0x00C8   (0x0004)  
	float                                              _timeBetweenPulseWaves;                                     // 0x00CC   (0x0004)  
	int32_t                                            _numberOfPulsesPerWaves;                                    // 0x00D0   (0x0004)  
	float                                              _timeBetweenPulsesInWave;                                   // 0x00D4   (0x0004)  
	float                                              _minDistanceToTriggerNextPulseWave;                         // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	class ULocalActorPoolComponent*                    _pool;                                                      // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x00E8   (0x0048)  MISSED
};

/// Class /Script/TheK33.K33TunnelPulse
/// Size: 0x0098 (0x000230 - 0x0002C8)
class AK33TunnelPulse : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	float                                              _lastPulseForwardOffset;                                    // 0x0238   (0x0004)  
	float                                              _lastPulseUpOffset;                                         // 0x023C   (0x0004)  
	class UCurveFloat*                                 _sideOffsetCurveMultiplier;                                 // 0x0240   (0x0008)  
	class UCurveFloat*                                 _firstTunnelBlockSideOffsetCurveMultiplier;                 // 0x0248   (0x0008)  
	class UCurveFloat*                                 _lastTunnelBlockSideOffsetCurveMultiplier;                  // 0x0250   (0x0008)  
	float                                              _sideOffsetSize;                                            // 0x0258   (0x0004)  
	unsigned char                                      UnknownData01_6[0x6C];                                      // 0x025C   (0x006C)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TunnelPulse.Cosmetic_GetFadeOutPercentage
	// float Cosmetic_GetFadeOutPercentage();                                                                                // [0x5d55fe0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.K33TunnelPulse.Cosmetic_DeactivatePulse
	// void Cosmetic_DeactivatePulse();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33TunnelPulse.Cosmetic_ActivatePulse
	// void Cosmetic_ActivatePulse(int32_t idInPulseWave);                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK33.K33Turret
/// Size: 0x00E0 (0x0004C8 - 0x0005A8)
class AK33Turret : public ACollectable
{ 
public:
	class USceneComponent*                             _rootComponent;                                             // 0x04C8   (0x0008)  
	class USpherePlayerOverlapComponent*               _interactableZone;                                          // 0x04D0   (0x0008)  
	class UInteractor*                                 _turretInteractor;                                          // 0x04D8   (0x0008)  
	class UDropItemInteraction*                        _dropInteraction;                                           // 0x04E0   (0x0008)  
	class UCollectItemInteraction*                     _collectInteraction;                                        // 0x04E8   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x04F0   (0x0008)  
	class UMaterialHelper*                             _materialHelper;                                            // 0x04F8   (0x0008)  
	class UK33TurretOutlineUpdateStrategy*             _turretOutlineUpdateStrategy;                               // 0x0500   (0x0008)  
	class UChargeableComponent*                        _turretRepairChargeable;                                    // 0x0508   (0x0008)  
	class UMontagePlayer*                              _montagePlayer;                                             // 0x0510   (0x0008)  
	class UAnimationMontageSlave*                      _montageFollower;                                           // 0x0518   (0x0008)  
	class UBoxComponent*                               _turretCollision;                                           // 0x0520   (0x0008)  
	class UBoxComponent*                               _tailAttackCollision;                                       // 0x0528   (0x0008)  
	class UK33TurretDangerPredictionComponent*         _dangerPredictionComponent;                                 // 0x0530   (0x0008)  
	class UDBDNavModifierComponent*                    _navModifierComponent;                                      // 0x0538   (0x0008)  
	class USceneComponent*                             _laserRoot;                                                 // 0x0540   (0x0008)  
	class UAuthoritativePoolableActorComponent*        _poolableActorComponent;                                    // 0x0548   (0x0008)  
	class UStateController*                            _turretStateController;                                     // 0x0550   (0x0008)  
	FName                                              _detectionSocketName;                                       // 0x0558   (0x000C)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x0564   (0x0044)  MISSED


	/// Functions
	// Function /Script/TheK33.K33Turret.Cosmetic_UpdateTurretVolumeRTPC
	// void Cosmetic_UpdateTurretVolumeRTPC(int32_t turretsInRangeCount);                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33Turret.Cosmetic_UpdateMotionTrackerSoundVolume
	// void Cosmetic_UpdateMotionTrackerSoundVolume(float distanceToKiller);                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33Turret.Cosmetic_UpdateLaserLength
	// void Cosmetic_UpdateLaserLength(float laserLength);                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33Turret.Cosmetic_OnTurretHeatChanged
	// void Cosmetic_OnTurretHeatChanged(float heatAmount);                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33Turret.Cosmetic_OnTurretDetectionRangeChanged
	// void Cosmetic_OnTurretDetectionRangeChanged(float newRange);                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.K33Turret.Cosmetic_OnKillerEnteredSpecialModeFXReaction
	// void Cosmetic_OnKillerEnteredSpecialModeFXReaction();                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.K33Turret.Cosmetic_BipMotionTrackerFX
	// void Cosmetic_BipMotionTrackerFX(float distanceToKiller);                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK33.K33TurretAnimInstance
/// Size: 0x0070 (0x0002F0 - 0x000360)
class UK33TurretAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _isInPool;                                                  // 0x02F0   (0x0001)  
	bool                                               _isInsideControlStation;                                    // 0x02F1   (0x0001)  
	bool                                               _isBeingCollected;                                          // 0x02F2   (0x0001)  
	bool                                               _isCarryable;                                               // 0x02F3   (0x0001)  
	bool                                               _isAttachedToSurvivor;                                      // 0x02F4   (0x0001)  
	bool                                               _isBeingDeployed;                                           // 0x02F5   (0x0001)  
	bool                                               _isDeployCancelled;                                         // 0x02F6   (0x0001)  
	bool                                               _isDeployed;                                                // 0x02F7   (0x0001)  
	bool                                               _isBeingUndeployed;                                         // 0x02F8   (0x0001)  
	bool                                               _isUndeployCancelled;                                       // 0x02F9   (0x0001)  
	bool                                               _isFiring;                                                  // 0x02FA   (0x0001)  
	bool                                               _isOverheated;                                              // 0x02FB   (0x0001)  
	bool                                               _isBeingRepaired;                                           // 0x02FC   (0x0001)  
	bool                                               _isDestroyed;                                               // 0x02FD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02FE   (0x0002)  MISSED
	float                                              _isFiringAlpha;                                             // 0x0300   (0x0004)  
	bool                                               _isMalfunctioning;                                          // 0x0304   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0305   (0x0003)  MISSED
	float                                              _animYaw;                                                   // 0x0308   (0x0004)  
	float                                              _frontLegPitch;                                             // 0x030C   (0x0004)  
	float                                              _backLegsPitch;                                             // 0x0310   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4C];                                      // 0x0314   (0x004C)  MISSED
};

/// Class /Script/TheK33.K33TurretAttackableComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK33TurretAttackableComponent : public UAttackableComponent
{ 
public:
};

/// Class /Script/TheK33.K33TurretAudioVolumeAdjuster
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UK33TurretAudioVolumeAdjuster : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x94];                                      // 0x00B8   (0x0094)  MISSED
	float                                              _distanceToTrackTurrets;                                    // 0x014C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0150   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33TurretBeingCollectedFromControlStationState
/// Size: 0x0000 (0x000050 - 0x000050)
class UK33TurretBeingCollectedFromControlStationState : public UBaseReplicatedState
{ 
public:
};

/// Class /Script/TheK33.K33TurretBeingDeployedState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretBeingDeployedState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33TurretBeingRepairedState
/// Size: 0x0000 (0x000050 - 0x000050)
class UK33TurretBeingRepairedState : public UBaseReplicatedState
{ 
public:
};

/// Class /Script/TheK33.K33TurretBeingUndeployedState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretBeingUndeployedState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33TurretCarryableState
/// Size: 0x0028 (0x000050 - 0x000078)
class UK33TurretCarryableState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Class /Script/TheK33.K33TurretCollisionsHandler
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UK33TurretCollisionsHandler : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Class /Script/TheK33.K33TurretDamageComponent
/// Size: 0x01E8 (0x0000B8 - 0x0002A0)
class UK33TurretDamageComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	float                                              _currentDamageAmount;                                       // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FTagStateBool                                      _isAttackedByTurret;                                        // 0x00F0   (0x0030)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0120   (0x0030)  MISSED
	class UClass*                                      _stunnedAfterFullyDamagedEffect;                            // 0x0150   (0x0008)  
	FDBDTunableRowHandle                               _stunnedAfterFullyDamagedDuration;                          // 0x0158   (0x0028)  
	FTunableStat                                       _maxDamageAmount;                                           // 0x0180   (0x0080)  
	FDBDTunableRowHandle                               _damageReductionRate;                                       // 0x0200   (0x0028)  
	class UCurveFloat*                                 _damageRatePerTurretCurveFloat;                             // 0x0228   (0x0008)  
	FDBDTunableRowHandle                               _damageReductionDelayDuration;                              // 0x0230   (0x0028)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0258   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TurretDamageComponent.OnRep_IsAttackedByTurret
	// void OnRep_IsAttackedByTurret();                                                                                      // [0x5d56100] Final|Native|Private 
	// Function /Script/TheK33.K33TurretDamageComponent.OnRep_CurrentDamageAmount
	// void OnRep_CurrentDamageAmount();                                                                                     // [0x5d560e0] Final|Native|Private 
	// Function /Script/TheK33.K33TurretDamageComponent.Multicast_ReceivedMaxDamage
	// void Multicast_ReceivedMaxDamage();                                                                                   // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK33.K33TurretDangerPredictionComponent
/// Size: 0x0038 (0x0000D0 - 0x000108)
class UK33TurretDangerPredictionComponent : public UDBDDangerPredictionComponent
{ 
public:
	float                                              MinimumLureDistanceFromKiller;                              // 0x00D0   (0x0004)  
	float                                              IdealDistanceBehindTurret;                                  // 0x00D4   (0x0004)  
	float                                              MaxPenaltyAtAngle;                                          // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x00DC   (0x002C)  MISSED
};

/// Class /Script/TheK33.K33TurretDeployedState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretDeployedState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33TurretDestroyedState
/// Size: 0x0118 (0x000050 - 0x000168)
class UK33TurretDestroyedState : public UBaseReplicatedState
{ 
public:
	FTunableStat                                       _destroyedDuration;                                         // 0x0050   (0x0080)  
	float                                              _timeBeforeDisappearance;                                   // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x94];                                      // 0x00D4   (0x0094)  MISSED
};

/// Class /Script/TheK33.K33TurretDestructionComponent
/// Size: 0x00F0 (0x0000B8 - 0x0001A8)
class UK33TurretDestructionComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _autoDestroyTime;                                           // 0x00B8   (0x0028)  
	FDBDTunableRowHandle                               _autoDestroyPauseSurvivorRange;                             // 0x00E0   (0x0028)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0108   (0x00A0)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TurretDestructionComponent.GetTurretDestructionDisappearanceDelay
	// float GetTurretDestructionDisappearanceDelay();                                                                       // [0x5d56090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.K33TurretFiringState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretFiringState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33TurretInPoolState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretInPoolState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Struct /Script/TheK33.RaycastProperties
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRaycastProperties
{ 
	float                                              HalfHeightPercentage;                                       // 0x0000   (0x0004)  
	float                                              RadiusPercentage;                                           // 0x0004   (0x0004)  
};

/// Class /Script/TheK33.K33TurretKillerAttackComponent
/// Size: 0x01F0 (0x0000B8 - 0x0002A8)
class UK33TurretKillerAttackComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	bool                                               _isAttacking;                                               // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x97];                                      // 0x00D1   (0x0097)  MISSED
	TArray<FRaycastProperties>                         _bipedRaycastProperties;                                    // 0x0168   (0x0010)  
	TArray<FRaycastProperties>                         _quadrupedRaycastProperties;                                // 0x0178   (0x0010)  
	FTunableStat                                       _killerDetectionRadius;                                     // 0x0188   (0x0080)  
	FActorPairQueryHeightRange                         _killerDetectionHeightRange;                                // 0x0208   (0x0008)  
	float                                              _sphereTraceRadius;                                         // 0x0210   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0214   (0x0004)  MISSED
	FGameplayTagContainer                              _stateTagsPreventingKillerDetection;                        // 0x0218   (0x0020)  
	unsigned char                                      UnknownData03_6[0x70];                                      // 0x0238   (0x0070)  MISSED
};

/// Class /Script/TheK33.K33TurretLaserComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UK33TurretLaserComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00B8   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TurretLaserComponent.OnLocallyObservedPlayerChanged
	// void OnLocallyObservedPlayerChanged();                                                                                // [0x5d5a3e0] Final|Native|Private 
};

/// Class /Script/TheK33.K33TurretMalfunctionComponent
/// Size: 0x00E8 (0x0000B8 - 0x0001A0)
class UK33TurretMalfunctionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x00B8   (0x0068)  MISSED
	FTunableStat                                       _malfunctionDuration;                                       // 0x0120   (0x0080)  
};

/// Class /Script/TheK33.K33TurretMalfunctioningState
/// Size: 0x0030 (0x000050 - 0x000080)
class UK33TurretMalfunctioningState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0050   (0x0030)  MISSED
};

/// Class /Script/TheK33.K33TurretMotionTrackerComponent
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UK33TurretMotionTrackerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UCurveFloat*                                 _secondsBetweenBipSoundPerKillerDistanceCurve;              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x00C8   (0x0028)  MISSED
	FDBDTunableRowHandle                               _motionTrackerMaxDetectionRange;                            // 0x00F0   (0x0028)  
};

/// Class /Script/TheK33.K33TurretOutlineUpdateStrategy
/// Size: 0x0038 (0x000158 - 0x000190)
class UK33TurretOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0158   (0x0014)  MISSED
	FLinearColor                                       _outlineColor;                                              // 0x016C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x017C   (0x0014)  MISSED
};

/// Class /Script/TheK33.K33TurretOverheatComponent
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UK33TurretOverheatComponent : public UActorComponent
{ 
public:
	float                                              _currentHeatAmount;                                         // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _turretHeatAccumulationRate;                                // 0x00C0   (0x0028)  
	FDBDTunableRowHandle                               _turretHeatDissipationRate;                                 // 0x00E8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0110   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TurretOverheatComponent.OnRep_CurrentHeatAmount
	// void OnRep_CurrentHeatAmount();                                                                                       // [0x5d5a400] Final|Native|Private 
};

/// Class /Script/TheK33.K33TurretOverheatState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretOverheatState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33TurretPlacementValidationStrategy
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UK33TurretPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{ 
public:
	FVector                                            _navmeshProjectionBoxExtent;                                // 0x00E0   (0x000C)  
	FVector                                            _navmeshProjectionBoxExtentForSnapping;                     // 0x00EC   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/TheK33.K33TurretPlacer
/// Size: 0x0090 (0x000280 - 0x000310)
class UK33TurretPlacer : public UObjectPlacerComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0280   (0x0038)  MISSED
	class UClass*                                      _turretVisualPlacementStaticMeshComponentClass;             // 0x02B8   (0x0008)  
	bool                                               _replicatedIsPlacementValid;                                // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	FVector                                            _replicatedPlacementLocation;                               // 0x02C4   (0x000C)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x02D0   (0x0018)  MISSED
	class UStaticMeshComponent*                        _turretStaticMesh;                                          // 0x02E8   (0x0008)  
	TArray<FVector>                                    _otherTurretsDropOffLocations;                              // 0x02F0   (0x0010)  
	float                                              _turretMeshLerpSpeed;                                       // 0x0300   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0304   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TurretPlacer.OnRep_ReplicatedIsPlacementValid
	// void OnRep_ReplicatedIsPlacementValid();                                                                              // [0x5d5a510] Final|Native|Private 
};

/// Class /Script/TheK33.K33TurretRepairInteraction
/// Size: 0x0030 (0x0007D0 - 0x000800)
class UK33TurretRepairInteraction : public UBasicChargeableInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x07D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheK33.K33TurretRepairInteraction.Authority_OnChargeApplied
	// void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime); // [0x5d599d0] Final|Native|Private 
};

/// Class /Script/TheK33.K33TurretSpawnedOnControlStationState
/// Size: 0x0028 (0x000050 - 0x000078)
class UK33TurretSpawnedOnControlStationState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Class /Script/TheK33.K33TurretSpawningState
/// Size: 0x0018 (0x000050 - 0x000068)
class UK33TurretSpawningState : public UBaseReplicatedState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheK33.K33UndeployTurretInteraction
/// Size: 0x00A0 (0x0007D0 - 0x000870)
class UK33UndeployTurretInteraction : public UBasicChargeableInteraction
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x07D0   (0x0038)  MISSED
	FAnimationMontageDescriptor                        _cancelMontage;                                             // 0x0808   (0x0020)  
	FAnimationMontageDescriptor                        _interruptedMontage;                                        // 0x0828   (0x0020)  
	float                                              _cancelUndeployDuration;                                    // 0x0848   (0x0004)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x084C   (0x0024)  MISSED
};

/// Class /Script/TheK33.K33Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK33Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK33.K33Utilities.GetTurretsPool
	// class UAuthoritativeActorPoolComponent* GetTurretsPool(class UObject* WorldContextObject);                            // [0x5d59f80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK33.K33Utilities.GetSpecialModeComponent
	// class UK33SpecialModeComponent* GetSpecialModeComponent(class UObject* WorldContextObject);                           // [0x5d59ef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK33.K33Utilities.GetK33VFXFeetPool
	// class ULocalActorPoolComponent* GetK33VFXFeetPool(class UObject* WorldContextObject);                                 // [0x5d59e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK33.K33Utilities.GetK33Power
	// class AK33Power* GetK33Power(class UObject* WorldContextObject);                                                      // [0x5d59da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK33.K33Utilities.GetK33Husk
	// class AK33Husk* GetK33Husk(class UObject* WorldContextObject);                                                        // [0x5d59d10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK33.K33Utilities.GetAvailableTurretsCountInPool
	// int32_t GetAvailableTurretsCountInPool(class UObject* WorldContextObject);                                            // [0x5d59c50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK33.MapObjectsCheatComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UMapObjectsCheatComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK33.MapObjectsCheatComponent.DBD_ShowQuesita
	// void DBD_ShowQuesita(bool enable);                                                                                    // [0x581c030] Final|Exec|Native|Public 
	// Function /Script/TheK33.MapObjectsCheatComponent.DBD_ShowFatherKey
	// void DBD_ShowFatherKey(bool enable);                                                                                  // [0x581c030] Final|Exec|Native|Public 
};

/// Struct /Script/TheK33.QuesitaPropStruct
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuesitaPropStruct
{ 
	class UClass*                                      PropActorClass;                                             // 0x0000   (0x0008)  
	FName                                              SocketName;                                                 // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/TheK33.QuesitaClosetHideEnterInteraction
/// Size: 0x0020 (0x0006A0 - 0x0006C0)
class UQuesitaClosetHideEnterInteraction : public UClosetHideEnterInteraction
{ 
public:
	TArray<FQuesitaPropStruct>                         _propInfos;                                                 // 0x06A0   (0x0010)  
	TArray<class AActor*>                              _props;                                                     // 0x06B0   (0x0010)  
};

/// Class /Script/TheK33.QuesitaManagerComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UQuesitaManagerComponent : public UMapSpecificGameStateComponent
{ 
public:
	class UClass*                                      _quesitaLockerInteraction;                                  // 0x00B8   (0x0008)  
	float                                              _globalJumpScareChanceIncrease;                             // 0x00C0   (0x0004)  
	float                                              _globalJumpScareChanceInitialValue;                         // 0x00C4   (0x0004)  
	class UAkComponent*                                _akQuesitaComponent;                                        // 0x00C8   (0x0008)  
	class UQuesitaClosetHideEnterInteraction*          _interaction;                                               // 0x00D0   (0x0008)  
	class ALocker*                                     _locker;                                                    // 0x00D8   (0x0008)  
	bool                                               _shouldImplementQuesitaInteraction;                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x00E1   (0x0017)  MISSED


	/// Functions
	// Function /Script/TheK33.QuesitaManagerComponent.OnRep_QuesitaLocker
	// void OnRep_QuesitaLocker(class ALocker* lastLocker);                                                                  // [0x5d5a480] Final|Native|Private 
	// Function /Script/TheK33.QuesitaManagerComponent.OnRep_QuesitaInteraction
	// void OnRep_QuesitaInteraction();                                                                                      // [0x5d5a460] Final|Native|Private 
	// Function /Script/TheK33.QuesitaManagerComponent.Authority_OnQuesitaInteractionDone
	// void Authority_OnQuesitaInteractionDone();                                                                            // [0x5d59c30] Final|Native|Private 
	// Function /Script/TheK33.QuesitaManagerComponent.Authority_OnLockerInteractorChanged
	// void Authority_OnLockerInteractorChanged(bool IsLocked);                                                              // [0x5d59ba0] Final|Native|Private 
	// Function /Script/TheK33.QuesitaManagerComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5d59b80] Final|Native|Protected 
};

/// Class /Script/TheK33.S39P01
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class US39P01 : public UPerk
{ 
public:
	float                                              _bloodAndGruntSuppressionTime;                              // 0x03C8   (0x000C)  
	float                                              _survivorAuraRevealTime;                                    // 0x03D4   (0x0004)  
	float                                              _generatorAuraRevealTime;                                   // 0x03D8   (0x0004)  
	float                                              _perkCooldownTime;                                          // 0x03DC   (0x000C)  
	class UClass*                                      _suppressBloodAndGruntsEffectClass;                         // 0x03E8   (0x0008)  
	class UClass*                                      _revealSurvivorAurasEffectClass;                            // 0x03F0   (0x0008)  


	/// Functions
	// Function /Script/TheK33.S39P01.GetSurvivorAuraRevealTime
	// float GetSurvivorAuraRevealTime();                                                                                    // [0x4ff91b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.S39P01.GetPerkCooldownTimeAtLevel
	// float GetPerkCooldownTimeAtLevel();                                                                                   // [0x5000c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.S39P01.GetGeneratorAuraRevealTime
	// float GetGeneratorAuraRevealTime();                                                                                   // [0x4fecfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.S39P01.GetBloodAndGruntSuppressionTimeAtLevel
	// float GetBloodAndGruntSuppressionTimeAtLevel();                                                                       // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.S39P02
/// Size: 0x0038 (0x000448 - 0x000480)
class US39P02 : public USurvivorTrapPerk
{ 
public:
	TArray<FGameplayTag>                               _invalidEventTypes;                                         // 0x0448   (0x0010)  
	float                                              _slowTime;                                                  // 0x0458   (0x0004)  
	float                                              _slowAmount;                                                // 0x045C   (0x0004)  
	class UStatusEffect*                               _slowEffect;                                                // 0x0460   (0x0008)  
	class UClass*                                      _slowStatusEffect;                                          // 0x0468   (0x0008)  
	class UClass*                                      _trapBombClass;                                             // 0x0470   (0x0008)  
	class ATrapChemicalBomb*                           _trapChemicalBomb;                                          // 0x0478   (0x0008)  


	/// Functions
	// Function /Script/TheK33.S39P02.Multicast_Cosmetic_OnTrapTriggered
	// void Multicast_Cosmetic_OnTrapTriggered(class AInteractable* Pallet, class ADBDPlayer* triggerer);                    // [0x5d5a200] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK33.S39P02.Multicast_Cosmetic_OnTrapRemoved
	// void Multicast_Cosmetic_OnTrapRemoved(class AInteractable* Interactable, ETrapRemovedReason removedReason);           // [0x5d5a130] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK33.S39P02.Multicast_Cosmetic_OnTrapActivated
	// void Multicast_Cosmetic_OnTrapActivated(class APallet* Generator);                                                    // [0x5d5a0a0] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK33.S39P02.Multicast_Cosmetic_OnSlowEffectEnded
	// void Multicast_Cosmetic_OnSlowEffectEnded(class ADBDPlayer* Player);                                                  // [0x5d5a010] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK33.S39P02.GetSlowTime
	// float GetSlowTime();                                                                                                  // [0x5d59ec0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.S39P02.GetChemicalBombTrap
	// class ATrapChemicalBomb* GetChemicalBombTrap();                                                                       // [0x5d59ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.S39P02.Cosmetic_TrapTriggered
	// void Cosmetic_TrapTriggered(class AInteractable* Pallet, class ADBDPlayer* triggerer);                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.S39P02.Cosmetic_TrapRemoved
	// void Cosmetic_TrapRemoved(class AInteractable* Interactable, ETrapRemovedReason removedReason);                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.S39P02.Cosmetic_TrapActivated
	// void Cosmetic_TrapActivated(class APallet* Pallet);                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK33.S39P02.Cosmetic_OnSlowEffectEnded
	// void Cosmetic_OnSlowEffectEnded(class ADBDPlayer* Player);                                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK33.S39p02TrapInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class US39p02TrapInteraction : public UTrapInteractableInteraction
{ 
public:
	class ATrapChemicalBomb*                           _chemicalBomb;                                              // 0x0650   (0x0008)  
	EPalletSide                                        _side;                                                      // 0x0658   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0659   (0x0007)  MISSED
};

/// Class /Script/TheK33.S39P03
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class US39P03 : public UPerk
{ 
public:
	float                                              _perkCooldownTime;                                          // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK33.S39P03.GetCooldownTimeAtLevel
	// float GetCooldownTimeAtLevel();                                                                                       // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.TurretNavMesh
/// Size: 0x0000 (0x000500 - 0x000500)
class ATurretNavMesh : public ARecastNavMesh
{ 
public:
};

/// Class /Script/TheK33.WormholeFatherDeadBody
/// Size: 0x0038 (0x000338 - 0x000370)
class AWormholeFatherDeadBody : public AInteractable
{ 
public:
	class UStaticMeshComponent*                        _wrmFatherDeadBodyStaticMesh;                               // 0x0338   (0x0008)  
	class USceneComponent*                             _wrmFatherKeyCardAttachment;                                // 0x0340   (0x0008)  
	class UClass*                                      _wrmFatherEasterEggKeyCardStaticClass;                      // 0x0348   (0x0008)  
	class UBoxPlayerOverlapComponent*                  _wrmFatherKeyCardInteractableZone;                          // 0x0350   (0x0008)  
	class UInteractor*                                 _wrmKeyCardFirstCollectionInteractor;                       // 0x0358   (0x0008)  
	class UCollectFatherKeyCardInteraction*            _fatherKeyCardCollectionInteraction;                        // 0x0360   (0x0008)  
	class AActor*                                      _wrmFatherEasterEggSpawnedKeyCard;                          // 0x0368   (0x0008)  
};

/// Class /Script/TheK33.WormholeFatherDoorAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UWormholeFatherDoorAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isOpened;                                                  // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02C1   (0x000F)  MISSED


	/// Functions
	// Function /Script/TheK33.WormholeFatherDoorAnimInstance.OnStateChanged
	// void OnStateChanged(bool HasBeenHacked);                                                                              // [0x5d5a530] Final|Native|Private 
};

/// Class /Script/TheK33.WormholeFatherHackableActor
/// Size: 0x0040 (0x000230 - 0x000270)
class AWormholeFatherHackableActor : public AActor
{ 
public:
	FGameplayTagContainer                              _hackedGameEvents;                                          // 0x0230   (0x0020)  
	class UWormholeFatherHackingComponent*             _hackingComponent;                                          // 0x0250   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0258   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK33.WormholeFatherHackableActor.OnHackedEvent
	// void OnHackedEvent(FGameplayTag GameEvent, FGameEventData& GameEventData);                                            // [0x5d5a2d0] Native|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/TheK33.WormholeFatherHackingComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UWormholeFatherHackingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,5554) /* FMulticastInlineDelegate */ __um(Cosmetic_OnHasBeenHackedChanged);                   // 0x00D0   (0x0010)  
	bool                                               _hasBeenHacked;                                             // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK33.WormholeFatherHackingComponent.SetHasBeenHacked
	// void SetHasBeenHacked(bool HasBeenHacked);                                                                            // [0x5d5a650] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK33.WormholeFatherHackingComponent.OnWrmFatherHackedStateChangedDelegate__DelegateSignature
	// void OnWrmFatherHackedStateChangedDelegate__DelegateSignature(bool HasBeenHacked);                                    // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK33.WormholeFatherHackingComponent.OnRep_HasBeenHacked
	// void OnRep_HasBeenHacked();                                                                                           // [0x5d5a420] Final|Native|Protected|Const 
	// Function /Script/TheK33.WormholeFatherHackingComponent.HasBeenHacked
	// bool HasBeenHacked();                                                                                                 // [0x5c57110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK33.WormholeFatherKeyCard
/// Size: 0x0018 (0x000510 - 0x000528)
class AWormholeFatherKeyCard : public ABaseCamperCollectable
{ 
public:
	EFatherKeyCardState                                _keyCardState;                                              // 0x0510   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0511   (0x0017)  MISSED


	/// Functions
	// Function /Script/TheK33.WormholeFatherKeyCard.RemoveInitialTag
	// void RemoveInitialTag(class ADBDPlayer* Character);                                                                   // [0x5d5a5c0] Final|Native|Private|Const 
	// Function /Script/TheK33.WormholeFatherKeyCard.OnRep_KeyCardState
	// void OnRep_KeyCardState();                                                                                            // [0x5d5a440] Final|Native|Private 
	// Function /Script/TheK33.WormholeFatherKeyCard.GetKeyCardState
	// EFatherKeyCardState GetKeyCardState();                                                                                // [0x58863c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK33.WormholeFatherKeyCard.Cosmetic_OnKeyCardDropped
	// void Cosmetic_OnKeyCardDropped();                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.WormholeFatherKeyCard.Cosmetic_OnKeyCardCollected
	// void Cosmetic_OnKeyCardCollected();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK33.WormholeFatherKeyCard.ApplyInitialTag
	// void ApplyInitialTag(class ADBDPlayer* Character);                                                                    // [0x5d59940] Final|Native|Private|Const 
};

/// Class /Script/TheK33.WormholeFatherKeyCardOutlineUpdateStrategy
/// Size: 0x0000 (0x000100 - 0x000100)
class UWormholeFatherKeyCardOutlineUpdateStrategy : public USurvivorCollectableOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/TheK33.WormholeFatherRoomZoneOverlap
/// Size: 0x0030 (0x000230 - 0x000260)
class AWormholeFatherRoomZoneOverlap : public AActor
{ 
public:
	class USpherePlayerOverlapComponent*               _wormholeFatherRoomZone;                                    // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0238   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK33.WormholeFatherRoomZoneOverlap.OnOverlapExit
	// void OnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5d5ad20] Final|Native|Protected 
	// Function /Script/TheK33.WormholeFatherRoomZoneOverlap.OnOverlapEnter
	// void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5d5ab00] Final|Native|Protected|HasOutParms 
};

/// Class /Script/TheK33.WormholeFatherTerminal
/// Size: 0x0008 (0x000338 - 0x000340)
class AWormholeFatherTerminal : public AInteractable
{ 
public:
	class USceneComponent*                             _wormholeKeyCardAttachment;                                 // 0x0338   (0x0008)  
};

/// Struct /Script/TheK33.TurretRangeChangedHandleData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTurretRangeChangedHandleData
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheK33.TurretInRangeAudioData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FTurretInRangeAudioData
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

