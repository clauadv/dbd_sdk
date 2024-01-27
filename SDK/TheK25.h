
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AnimationUtilities
/// dependency: BHVRAnalytics
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnalytics
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: FiniteStateMachine
/// dependency: GameplayUtilities
/// dependency: GFXUtilities
/// dependency: Projectile
/// dependency: StatSystem
/// dependency: SystemUtilities

/// Enum /Script/TheK25.EK25ChainCreationStrategy
/// Size: 0x03
enum class EK25ChainCreationStrategy : uint8_t
{
	EK25ChainCreationStrategy__Spline                                                = 0,
	EK25ChainCreationStrategy__PassedPoints                                          = 1,
	EK25ChainCreationStrategy__EK25ChainCreationStrategy_MAX                         = 2
};

/// Enum /Script/TheK25.EK25ChainState
/// Size: 0x06
enum class EK25ChainState : uint8_t
{
	EK25ChainState__InPool                                                           = 0,
	EK25ChainState__AttachedToProjectile                                             = 1,
	EK25ChainState__AttachedToSurvivorAnchorPoint                                    = 2,
	EK25ChainState__ReelingBack                                                      = 3,
	EK25ChainState__ReachingSurvivorAnchorPoint                                      = 4,
	EK25ChainState__EK25ChainState_MAX                                               = 5
};

/// Enum /Script/TheK25.EChainStrikeEndReason
/// Size: 0x06
enum class EChainStrikeEndReason : uint8_t
{
	EChainStrikeEndReason__None                                                      = 0,
	EChainStrikeEndReason__AbortedGatewayPlacementState                              = 1,
	EChainStrikeEndReason__AbortedGatewayPlacementBecauseOfInvalidPlacementState     = 2,
	EChainStrikeEndReason__AbortedGatewayPossession                                  = 3,
	EChainStrikeEndReason__ControlledProjectileStopped                               = 4,
	EChainStrikeEndReason__EChainStrikeEndReason_MAX                                 = 5
};

/// Enum /Script/TheK25.EChainStrikeCameraViewTarget
/// Size: 0x04
enum class EChainStrikeCameraViewTarget : uint8_t
{
	EChainStrikeCameraViewTarget__Killer                                             = 0,
	EChainStrikeCameraViewTarget__Gateway                                            = 1,
	EChainStrikeCameraViewTarget__ControlledProjectile                               = 2,
	EChainStrikeCameraViewTarget__EChainStrikeCameraViewTarget_MAX                   = 3
};

/// Enum /Script/TheK25.EK25TeleportLocationStatus
/// Size: 0x04
enum class EK25TeleportLocationStatus : uint8_t
{
	EK25TeleportLocationStatus__Invalid                                              = 0,
	EK25TeleportLocationStatus__PassableLocation                                     = 1,
	EK25TeleportLocationStatus__PerfectLocation                                      = 2,
	EK25TeleportLocationStatus__EK25TeleportLocationStatus_MAX                       = 3
};

/// Enum /Script/TheK25.EK25ProjectileDeactivateReason
/// Size: 0x07
enum class EK25ProjectileDeactivateReason : uint8_t
{
	EK25ProjectileDeactivateReason__None                                             = 0,
	EK25ProjectileDeactivateReason__WorldCollisionHit                                = 1,
	EK25ProjectileDeactivateReason__CharacterHit                                     = 2,
	EK25ProjectileDeactivateReason__OutOfBounds                                      = 3,
	EK25ProjectileDeactivateReason__MaximumRangeReached                              = 4,
	EK25ProjectileDeactivateReason__ChainStrikeInteractionEnded                      = 5,
	EK25ProjectileDeactivateReason__EK25ProjectileDeactivateReason_MAX               = 6
};

/// Enum /Script/TheK25.EK25ChainDetachmentReason
/// Size: 0x09
enum class EK25ChainDetachmentReason : uint8_t
{
	EK25ChainDetachmentReason__CollisionOrMaxLengthReached                           = 0,
	EK25ChainDetachmentReason__KillerAttack                                          = 1,
	EK25ChainDetachmentReason__RemovedByInteraction                                  = 2,
	EK25ChainDetachmentReason__MaxNumberChainsReached                                = 3,
	EK25ChainDetachmentReason__ForcedRemoved                                         = 4,
	EK25ChainDetachmentReason__SurvivorKO                                            = 5,
	EK25ChainDetachmentReason__EndGameCollapseOver                                   = 6,
	EK25ChainDetachmentReason__SurvivorLeftTheMatch                                  = 7,
	EK25ChainDetachmentReason__EK25ChainDetachmentReason_MAX                         = 8
};

/// Enum /Script/TheK25.EK25ChainAttachmentLimbType
/// Size: 0x05
enum class EK25ChainAttachmentLimbType : uint8_t
{
	EK25ChainAttachmentLimbType__Hand                                                = 0,
	EK25ChainAttachmentLimbType__Shoulder                                            = 1,
	EK25ChainAttachmentLimbType__Stomach                                             = 2,
	EK25ChainAttachmentLimbType__Back                                                = 3,
	EK25ChainAttachmentLimbType__EK25ChainAttachmentLimbType_MAX                     = 4
};

/// Enum /Script/TheK25.EK25ChainAnchorPointDirection
/// Size: 0x05
enum class EK25ChainAnchorPointDirection : uint8_t
{
	EK25ChainAnchorPointDirection__Front                                             = 0,
	EK25ChainAnchorPointDirection__Left                                              = 1,
	EK25ChainAnchorPointDirection__Right                                             = 2,
	EK25ChainAnchorPointDirection__Back                                              = 3,
	EK25ChainAnchorPointDirection__EK25ChainAnchorPointDirection_MAX                 = 4
};

/// Enum /Script/TheK25.ELamentConfigurationDropReason
/// Size: 0x06
enum class ELamentConfigurationDropReason : uint8_t
{
	ELamentConfigurationDropReason__SurvivorSolved                                   = 0,
	ELamentConfigurationDropReason__SurvivorIsNoLongerHostage                        = 1,
	ELamentConfigurationDropReason__SurvivorDowned                                   = 2,
	ELamentConfigurationDropReason__KillerCollect                                    = 3,
	ELamentConfigurationDropReason__Other                                            = 4,
	ELamentConfigurationDropReason__ELamentConfigurationDropReason_MAX               = 5
};

/// Enum /Script/TheK25.ELamentConfigurationState
/// Size: 0x07
enum class ELamentConfigurationState : uint8_t
{
	ELamentConfigurationState__SurvivorEscapedWithLamentConfiguration                = 0,
	ELamentConfigurationState__WaitingToSpawn                                        = 1,
	ELamentConfigurationState__Spawned                                               = 2,
	ELamentConfigurationState__IsBeingPickedUp                                       = 3,
	ELamentConfigurationState__CarriedBySurvivor                                     = 4,
	ELamentConfigurationState__HoldingSurvivorHostage                                = 5,
	ELamentConfigurationState__ELamentConfigurationState_MAX                         = 6
};

/// Enum /Script/TheK25.EChainHuntState
/// Size: 0x04
enum class EChainHuntState : uint8_t
{
	EChainHuntState__Inactive                                                        = 0,
	EChainHuntState__Charging                                                        = 1,
	EChainHuntState__Active                                                          = 2,
	EChainHuntState__EChainHuntState_MAX                                             = 3
};

/// Class /Script/TheK25.Addon_K25Power
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class UAddon_K25Power : public UItemAddon
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x02B8   (0x0018)  MISSED
};

/// Class /Script/TheK25.AISkill_FindCollectable_LamentConfiguration
/// Size: 0x0020 (0x0001A0 - 0x0001C0)
class UAISkill_FindCollectable_LamentConfiguration : public UAISkill_FindCollectable
{ 
public:
	FAITunableParameter                                StopChainHuntGoalWeight;                                    // 0x01A0   (0x0010)  
	FAITunableParameter                                PreemptiveFindLamentGoalWeight;                             // 0x01B0   (0x0010)  
};

/// Class /Script/TheK25.AISkill_InteractionBreakFreeFromChains
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UAISkill_InteractionBreakFreeFromChains : public UAISkill_Interaction
{ 
public:
	FDBDTunableRowHandle                               _breakFreeFromChainsMaxCharge;                              // 0x0190   (0x0028)  
};

/// Class /Script/TheK25.AISkill_InteractionUseItem_LamentConfiguration
/// Size: 0x0038 (0x0001A0 - 0x0001D8)
class UAISkill_InteractionUseItem_LamentConfiguration : public UAISkill_InteractionUseItem
{ 
public:
	FAITunableParameter                                SolveLamentThreshold;                                       // 0x01A0   (0x0010)  
	FDBDTunableRowHandle                               _solveLamentMaxCharge;                                      // 0x01B0   (0x0028)  
};

/// Class /Script/TheK25.ChainAttachedGateBlockerEffect
/// Size: 0x0028 (0x000388 - 0x0003B0)
class UChainAttachedGateBlockerEffect : public UGateBlockerEffect
{ 
public:
	FDBDTunableRowHandle                               _blockGateLingeringTimeDyingState;                          // 0x0388   (0x0028)  


	/// Functions
	// Function /Script/TheK25.ChainAttachedGateBlockerEffect.OnSurvivorDamageStateChanged
	// void OnSurvivorDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState);                          // [0x5b67790] Final|Native|Private 
};

/// Class /Script/TheK25.IsChainHuntActive
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UIsChainHuntActive : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F0   (0x0030)  MISSED
};

/// Class /Script/TheK25.K25AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK25AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isTeleporting;                                             // 0x0610   (0x0001)  
	bool                                               _isPossessingGateway;                                       // 0x0611   (0x0001)  
	bool                                               _isSelectingGatewayLocation;                                // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0613   (0x000D)  MISSED
};

/// Class /Script/TheK25.K25AttackSubAnimInstance
/// Size: 0x0020 (0x000620 - 0x000640)
class UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance
{ 
public:
	bool                                               _hasDownedTargetHoldingLamentConfiguration;                 // 0x0620   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0621   (0x001F)  MISSED


	/// Functions
	// Function /Script/TheK25.K25AttackSubAnimInstance.OnAttackStart
	// void OnAttackStart(EAttackType attackType);                                                                           // [0x5b674f0] Final|Native|Protected 
};

/// Class /Script/TheK25.K25Chain
/// Size: 0x0200 (0x000230 - 0x000430)
class AK25Chain : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	SDK_UNDEFINED(16,5102) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0238   (0x0010)  
	class UCurveFloat*                                 _attachedToProjectileInfluenceCurve;                        // 0x0248   (0x0008)  
	class UCurveFloat*                                 _reelbackInfluenceCurve;                                    // 0x0250   (0x0008)  
	class UCurveFloat*                                 _offsetMultiplierInfluenceCurve;                            // 0x0258   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0260   (0x0050)  MISSED
	FDBDTunableRowHandle                               _reelingBackSpeed;                                          // 0x02B0   (0x0028)  
	float                                              _chainOffsetMinValue;                                       // 0x02D8   (0x0004)  
	float                                              _chainOffsetMaxValue;                                       // 0x02DC   (0x0004)  
	float                                              _reelbackChainOffsetMinValue;                               // 0x02E0   (0x0004)  
	float                                              _reelbackChainOffsetMaxValue;                               // 0x02E4   (0x0004)  
	float                                              _chainInstanceSpacing;                                      // 0x02E8   (0x0004)  
	float                                              _quickChainOffsetTimerLength;                               // 0x02EC   (0x0004)  
	float                                              _reachingSurvivorAnchorTime;                                // 0x02F0   (0x0004)  
	FVector                                            _chainScale;                                                // 0x02F4   (0x000C)  
	float                                              _chainOffsetTimerLength;                                    // 0x0300   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	TArray<FVector>                                    _currentChainPoints;                                        // 0x0308   (0x0010)  
	bool                                               _isAcquiredFromPool;                                        // 0x0318   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0319   (0x0003)  MISSED
	float                                              _sphereTraceRadius;                                         // 0x031C   (0x0004)  
	FVector                                            _chainStartPosition;                                        // 0x0320   (0x000C)  
	FVector                                            _reelBackPosition;                                          // 0x032C   (0x000C)  
	FVector                                            _reelbackStartPosition;                                     // 0x0338   (0x000C)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	class AK25Projectile*                              _projectileAttachedTo;                                      // 0x0348   (0x0008)  
	SDK_UNDEFINED(8,5103) /* TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor*> */ __um(_survivorAnchorAttachedTo); // 0x0350   (0x0008)  
	SDK_UNDEFINED(8,5104) /* TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor*> */ __um(_targetAnchorToReach);     // 0x0358   (0x0008)  
	class USplineComponent*                            _chainSplineComponent;                                      // 0x0360   (0x0008)  
	class UInstancedStaticMeshComponent*               _chainInstancedMesh;                                        // 0x0368   (0x0008)  
	class UCurveFloat*                                 _currentInfluenceCurve;                                     // 0x0370   (0x0008)  
	FVector                                            _chainCurveOffset;                                          // 0x0378   (0x000C)  
	EK25ChainState                                     _chainState;                                                // 0x0384   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0385   (0x0003)  MISSED
	FFastTimer                                         _curveOffsetStrengthTimer;                                  // 0x0388   (0x0030)  
	FFastTimer                                         _reelbackTimer;                                             // 0x03B8   (0x0030)  
	FFastTimer                                         _reachSurvivorAnchorPositionTimer;                          // 0x03E8   (0x0030)  
	TArray<FVector>                                    _forcedPositions;                                           // 0x0418   (0x0010)  
	EK25ChainCreationStrategy                          _chainCreationStrategy;                                     // 0x0428   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0429   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK25.K25Chain.SetSplineComponent
	// void SetSplineComponent(class USplineComponent* Component);                                                           // [0x5b67c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK25.K25Chain.SetInstancedMeshComponent
	// void SetInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMesh);                                   // [0x5b67bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK25.K25Chain.IsAttachedToControlledProjectile
	// bool IsAttachedToControlledProjectile();                                                                              // [0x5b66f30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25Chain.GetSurvivorChainAttachmentAnchor
	// class AK25SurvivorChainAttachmentAnchor* GetSurvivorChainAttachmentAnchor();                                          // [0x5b66f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25Chain.GetChainStartLocation
	// FVector GetChainStartLocation();                                                                                      // [0x5b66e00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25Chain.GetChainEndLocation
	// FVector GetChainEndLocation();                                                                                        // [0x5b66dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnSurvivorStoppedRemovingChainSFX
	// void Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction);                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnSurvivorStartedRemovingChainSFX
	// void Cosmetic_OnSurvivorStartedRemovingChainSFX();                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX
	// void Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX();                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnChainUnleashedWithProjectile
	// void Cosmetic_OnChainUnleashedWithProjectile();                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnChainStartedToReelback
	// void Cosmetic_OnChainStartedToReelback();                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnChainDisappears
	// void Cosmetic_OnChainDisappears();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnChainDetachedFromSurvivor
	// void Cosmetic_OnChainDetachedFromSurvivor(EK25ChainDetachmentReason detachmentReason);                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnChainAttachedToSurvivor
	// void Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint);                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Chain.Cosmetic_OnChainAppears
	// void Cosmetic_OnChainAppears();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25ChainAttachedStatusEffect
/// Size: 0x0018 (0x000350 - 0x000368)
class UK25ChainAttachedStatusEffect : public UStatusEffect
{ 
public:
	class UCurveFloat*                                 _percentageReductionSpeedPerChainCurve;                     // 0x0350   (0x0008)  
	class UK25SurvivorChainAttachmentComponent*        _chainAttachmentComponent;                                  // 0x0358   (0x0008)  
	int32_t                                            _cachedNumberOfChainsAttached;                              // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0364   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK25.K25ChainAttachedStatusEffect.OnRep_ChainAttachementComponent
	// void OnRep_ChainAttachementComponent();                                                                               // [0x5b67750] Final|Native|Private 
};

/// Class /Script/TheK25.K25ChainAttachmentReplicationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK25ChainAttachmentReplicationComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25ChainAttachmentReplicationComponent.Multicast_StartChainReelback
	// void Multicast_StartChainReelback(class AK25Chain* chainToAttach);                                                    // [0x58c5550] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25ChainAttachmentReplicationComponent.Multicast_LaunchInstantHitChainTowardsSurvivor
	// void Multicast_LaunchInstantHitChainTowardsSurvivor(class AK25Chain* newChainToAttach, class AK25SurvivorChainAttachmentAnchor* targetAnchor, FVector StartPosition); // [0x5b672b0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.K25ChainAttachmentReplicationComponent.Multicast_DetachChains
	// void Multicast_DetachChains(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<AK25Chain*> chainsToDetach, EK25ChainDetachmentReason detachmentReason, TArray<AK25Chain*> chainsAttached); // [0x5b67120] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25ChainAttachmentReplicationComponent.Multicast_AttachChainToAnchor
	// void Multicast_AttachChainToAnchor(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, class AK25Chain* chainToAttach, class AK25SurvivorChainAttachmentAnchor* anchorPoint); // [0x5b67010] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK25.K25ChainHuntEffectsComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UK25ChainHuntEffectsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheK25.K25ChainHuntEffectsComponent.GetOwningPlayer
	// class ADBDPlayer* GetOwningPlayer();                                                                                  // [0x5b66ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25ChainHuntEffectsComponent.Cosmetic_TriggerChainHuntActivationSFX
	// void Cosmetic_TriggerChainHuntActivationSFX();                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25ChainHuntEffectsComponent.Cosmetic_DeactivateChainHuntEffects
	// void Cosmetic_DeactivateChainHuntEffects();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25ChainHuntEffectsComponent.Cosmetic_ActivateChainHuntEffects
	// void Cosmetic_ActivateChainHuntEffects(bool hasChainHuntStarted);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/TheK25.K25ChainAnchorAnimationData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK25ChainAnchorAnimationData
{ 
	float                                              ChainPullAngle;                                             // 0x0000   (0x0004)  
	float                                              ChainWeight;                                                // 0x0004   (0x0004)  
	float                                              ChainHeight;                                                // 0x0008   (0x0004)  
	bool                                               HasChainAttached;                                           // 0x000C   (0x0001)  
	bool                                               IsChainBeingRemoved;                                        // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	SDK_UNDEFINED(8,5105) /* TWeakObjectPtr<AK25Chain*> */ __um(AttachedChain);                                    // 0x0010   (0x0008)  
};

/// Class /Script/TheK25.K25ChainLocomotionSurvivorAnimInstance
/// Size: 0x0180 (0x000550 - 0x0006D0)
class UK25ChainLocomotionSurvivorAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _hasChainsAttached;                                         // 0x0550   (0x0001)  
	bool                                               _isPerformingBreakChainInteraction;                         // 0x0551   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0552   (0x0002)  MISSED
	float                                              _forwardDirectionDotProductResult;                          // 0x0554   (0x0004)  
	float                                              _lateralDirectionDotProductResult;                          // 0x0558   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	class AK25Chain*                                   _currentChainBeingDetached;                                 // 0x0560   (0x0008)  
	FK25ChainAnchorAnimationData                       _leftHandAttachmentData;                                    // 0x0568   (0x0018)  
	FK25ChainAnchorAnimationData                       _rightHandAttachmentData;                                   // 0x0580   (0x0018)  
	FK25ChainAnchorAnimationData                       _leftShoulderAttachmentData;                                // 0x0598   (0x0018)  
	FK25ChainAnchorAnimationData                       _rightShoulderAttachmentData;                               // 0x05B0   (0x0018)  
	FK25ChainAnchorAnimationData                       _stomachAttachmentData;                                     // 0x05C8   (0x0018)  
	FK25ChainAnchorAnimationData                       _backAttachmentData;                                        // 0x05E0   (0x0018)  
	EK25ChainAnchorPointDirection                      _chainDirection;                                            // 0x05F8   (0x0001)  
	bool                                               _hasBrokenFreeFromChain;                                    // 0x05F9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x05FA   (0x0002)  MISSED
	float                                              _hasBrokenFreeTime;                                         // 0x05FC   (0x0004)  
	bool                                               _hasBeenHitByChain;                                         // 0x0600   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0601   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0602   (0x0001)  
	bool                                               _isMale;                                                    // 0x0603   (0x0001)  
	bool                                               _isBeingCarried;                                            // 0x0604   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0605   (0x0003)  MISSED
	float                                              _hasBeenHitByChainTime;                                     // 0x0608   (0x0004)  
	FName                                              _hitChainName;                                              // 0x060C   (0x000C)  
	FName                                              _detachedChainAnchorName;                                   // 0x0618   (0x000C)  
	unsigned char                                      UnknownData04_6[0xAC];                                      // 0x0624   (0x00AC)  MISSED


	/// Functions
	// Function /Script/TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainDetached
	// void OnChainDetached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason); // [0x5b67640] Final|Native|Protected 
	// Function /Script/TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainAttached
	// void OnChainAttached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);         // [0x5b67570] Final|Native|Protected 
};

/// Class /Script/TheK25.K25ChainPool
/// Size: 0x0000 (0x000118 - 0x000118)
class UK25ChainPool : public UAuthoritativeActorPoolComponent
{ 
public:
};

/// Class /Script/TheK25.K25ChainStrike_IsGatewayOrientationTimerExpired
/// Size: 0x0000 (0x000038 - 0x000038)
class UK25ChainStrike_IsGatewayOrientationTimerExpired : public UFSM_Condition
{ 
public:
};

/// Class /Script/TheK25.K25ChainStrike_IsGatewayPlacementValidCondition
/// Size: 0x0000 (0x000038 - 0x000038)
class UK25ChainStrike_IsGatewayPlacementValidCondition : public UFSM_Condition
{ 
public:
};

/// Class /Script/TheK25.K25ChainStrike_IsPlayerPressingInputCondition
/// Size: 0x0008 (0x000038 - 0x000040)
class UK25ChainStrike_IsPlayerPressingInputCondition : public UFSM_Condition
{ 
public:
	EInputInteractionType                              _inputType;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/TheK25.K25ChainStrikeBaseState
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UK25ChainStrikeBaseState : public UFSM_State
{ 
public:
	SDK_UNDEFINED(80,5106) /* TSet<FName> */           __um(_secondaryInteractionIDs);                             // 0x0078   (0x0050)  


	/// Functions
	// Function /Script/TheK25.K25ChainStrikeBaseState.GetPlayerOwner
	// class ADBDPlayer* GetPlayerOwner();                                                                                   // [0x5b66ed0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25ChainStrikeBaseState.GetK25Power
	// class AK25Power* GetK25Power();                                                                                       // [0x5b66e70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25ChainStrikeBaseState.GetK25Gateway
	// class AK25Gateway* GetK25Gateway();                                                                                   // [0x5b66e40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.K25ChainStrikeImmunityEffect
/// Size: 0x0028 (0x000380 - 0x0003A8)
class UK25ChainStrikeImmunityEffect : public UActivateOnEventTimedStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _chainStrikeImmunityDuration;                               // 0x0380   (0x0028)  
};

/// Class /Script/TheK25.K25ChainStrikeInteraction
/// Size: 0x0230 (0x000790 - 0x0009C0)
class UK25ChainStrikeInteraction : public UChargeableInteractionDefinition
{ 
public:
	class UClass*                                      _chainStrikeStateMachineclass;                              // 0x0788   (0x0008)  
	float                                              _repossessFadeOutTime;                                      // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0794   (0x0004)  MISSED
	FDBDTunableRowHandle                               _repossessFadeInTime;                                       // 0x0798   (0x0028)  
	class UCurveFloat*                                 _gatewayPossessionFovModifierCurve;                         // 0x07C0   (0x0008)  
	class UCurveFloat*                                 _controlledProjectilePossessionFovModifierCurve;            // 0x07C8   (0x0008)  
	FDBDTunableRowHandle                               _chargeTimeAfterGatewayPlacementCancelled;                  // 0x07D0   (0x0028)  
	FDBDTunableRowHandle                               _chargeTimeAfterGatewayPossessionCancelled;                 // 0x07F8   (0x0028)  
	FDBDTunableRowHandle                               _chargeTimeAfterControlledChainShot;                        // 0x0820   (0x0028)  
	FDBDTunableRowHandle                               _gatewayPossessionFovChangeDuration;                        // 0x0848   (0x0028)  
	FDBDTunableRowHandle                               _gatewayPossessionCameraPanTime;                            // 0x0870   (0x0028)  
	FDBDTunableRowHandle                               _controlledProjectilePossessionCameraPanTime;               // 0x0898   (0x0028)  
	FDBDTunableRowHandle                               _controlledProjectilePossessionFovTimeChangeDuration;       // 0x08C0   (0x0028)  
	class UFiniteStateMachine*                         _stateMachine;                                              // 0x08E8   (0x0008)  
	bool                                               _authority_shouldIncrementChargeableComponent;              // 0x08F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x68];                                      // 0x08F1   (0x0068)  MISSED
	EChainStrikeCameraViewTarget                       _chainStrikeCameraViewTarget;                               // 0x0959   (0x0001)  
	bool                                               _hasHitSurvivor;                                            // 0x095A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x65];                                      // 0x095B   (0x0065)  MISSED


	/// Functions
	// Function /Script/TheK25.K25ChainStrikeInteraction.Server_UpdateCameraViewTargetForObservers
	// void Server_UpdateCameraViewTargetForObservers(EChainStrikeCameraViewTarget NewViewTarget);                           // [0x5b67b50] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Server_SetShouldIncrementChargeableComponent
	// void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement);                                              // [0x5b67ac0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Server_SetFallbackEndReason
	// void Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);                                         // [0x5b67a40] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Server_RemoveStateTagFromPlayer
	// void Server_RemoveStateTagFromPlayer(FGameplayTag Tag);                                                               // [0x5b67950] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Server_AddStateTagToPlayer
	// void Server_AddStateTagToPlayer(FGameplayTag Tag);                                                                    // [0x5b67860] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheK25.K25ChainStrikeInteraction.OnRep_ChainStrikeCameraViewTarget
	// void OnRep_ChainStrikeCameraViewTarget();                                                                             // [0x5b67770] Final|Native|Private 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Multicast_SetFallbackEndReason
	// void Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);                                      // [0x5b67470] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Multicast_RemoveStateTagFromPlayer
	// void Multicast_RemoveStateTagFromPlayer(FGameplayTag Tag);                                                            // [0x5b673c0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Multicast_AddStateTagToPlayer
	// void Multicast_AddStateTagToPlayer(FGameplayTag Tag);                                                                 // [0x5b66f60] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeOutEffects
	// void Cosmetic_TriggerKillerRepossessionFadeOutEffects(class ASlasherPlayer* killer, bool preventAudioTriggers);       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeInEffects
	// void Cosmetic_TriggerKillerRepossessionFadeInEffects(class ASlasherPlayer* killer, bool hasHitSurvivor, bool preventAudioTriggers); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerGatewayPossessionEffects
	// void Cosmetic_TriggerGatewayPossessionEffects(float TransitionTime);                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25ChainStrikeInteraction.Cosmetic_ResetAllVignetteValues
	// void Cosmetic_ResetAllVignetteValues(class ASlasherPlayer* killer);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25ChainStrikeReplicationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK25ChainStrikeReplicationComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25ChainStrikeReplicationComponent.Server_EndChainStrike
	// void Server_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, EChainStrikeEndReason endReason);           // [0x57f1220] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK25.K25ChainStrikeReplicationComponent.Multicast_EndChainStrike
	// void Multicast_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, EChainStrikeEndReason endReason);        // [0x5869b40] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK25.K25ChainStrikeState_EndChainStrike
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UK25ChainStrikeState_EndChainStrike : public UK25ChainStrikeBaseState
{ 
public:
	EChainStrikeEndReason                              _chainStrikeEndReason;                                      // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/TheK25.K25ChainStrikeState_GatewayPlacement
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UK25ChainStrikeState_GatewayPlacement : public UK25ChainStrikeBaseState
{ 
public:
};

/// Class /Script/TheK25.K25ChainStrikeState_OutOfBodyState
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class UK25ChainStrikeState_OutOfBodyState : public UK25ChainStrikeBaseState
{ 
public:
	FDBDTunableRowHandle                               _fovTimeChangeDuration;                                     // 0x00C8   (0x0028)  
};

/// Class /Script/TheK25.K25ChainStrikeState_PossessGateway
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UK25ChainStrikeState_PossessGateway : public UK25ChainStrikeBaseState
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Class /Script/TheK25.K25ChainStrikeState_SelectGatewayOrientation
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UK25ChainStrikeState_SelectGatewayOrientation : public UK25ChainStrikeBaseState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

/// Class /Script/TheK25.K25ChainStrikeState_ShootControlledProjectile
/// Size: 0x0040 (0x0000C8 - 0x000108)
class UK25ChainStrikeState_ShootControlledProjectile : public UK25ChainStrikeBaseState
{ 
public:
	float                                              _minimumThrottleTimeForInputServerCall;                     // 0x00C8   (0x0004)  
	float                                              _inputResetSpeed;                                           // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x00D0   (0x0038)  MISSED
};

/// Class /Script/TheK25.K25CheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK25CheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnLocalSurvivor
	// void DBD_K25TriggerUncontrolledChainsOnLocalSurvivor(int32_t numbChains);                                             // [0x4e00fc0] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition
	// void DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition(float X, float Y, float Z, int32_t numbChains);     // [0x5b6b2e0] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnAllSurvivors
	// void DBD_K25TriggerUncontrolledChainsOnAllSurvivors(int32_t numbChains);                                              // [0x4e00fc0] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ShowAllLamentConfigurationSpawnPoints
	// void DBD_K25ShowAllLamentConfigurationSpawnPoints(float timeDisplayed);                                               // [0x49bd730] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25SetPowerNoCooldown
	// void DBD_K25SetPowerNoCooldown(bool noCooldown);                                                                      // [0x5818260] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25RevealLamentConfigurationLocation
	// void DBD_K25RevealLamentConfigurationLocation(float timeDisplayed);                                                   // [0x49bd730] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ForceRespawnLamentConfiguration
	// void DBD_K25ForceRespawnLamentConfiguration();                                                                        // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnLocalSurvivor
	// void DBD_K25ForceRemoveAllChainsOnLocalSurvivor();                                                                    // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition
	// void DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition(float X, float Y, float Z);                              // [0x5b20730] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnAllSurvivors
	// void DBD_K25ForceRemoveAllChainsOnAllSurvivors();                                                                     // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ComeToPositionLamentConfiguration
	// void DBD_K25ComeToPositionLamentConfiguration(float X, float Y, float Z);                                             // [0x5b20730] Final|Exec|Native|Public 
	// Function /Script/TheK25.K25CheatComponent.DBD_K25ComeToMeLamentConfiguration
	// void DBD_K25ComeToMeLamentConfiguration();                                                                            // [0x45fe020] Final|Exec|Native|Public 
};

/// Class /Script/TheK25.K25CollectLamentConfigurationInteraction
/// Size: 0x0010 (0x000670 - 0x000680)
class UK25CollectLamentConfigurationInteraction : public UCollectItemInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0670   (0x0010)  MISSED
};

/// Struct /Script/TheK25.K25ProjectileDeactivationData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FK25ProjectileDeactivationData
{ 
	EK25ProjectileDeactivateReason                     DeactivationReason;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              PhysicalSurfaceName;                                        // 0x0004   (0x000C)  
	bool                                               ShouldReelBackProjectile;                                   // 0x0010   (0x0001)  
	bool                                               HasAppliedDamage;                                           // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	class ACamperPlayer*                               _survivorHit;                                               // 0x0018   (0x0008)  
};

/// Class /Script/TheK25.K25Projectile
/// Size: 0x00F8 (0x000338 - 0x000430)
class AK25Projectile : public AKillerProjectile
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0338   (0x0048)  MISSED
	class UStaticMeshComponent*                        _staticMesh;                                                // 0x0380   (0x0008)  
	class UPrimitiveComponent*                         _characterCollider;                                         // 0x0388   (0x0008)  
	class UPrimitiveComponent*                         _environmentCollider;                                       // 0x0390   (0x0008)  
	class UKillerProjectileDodgeComponent*             _projectileDodgeComponent;                                  // 0x0398   (0x0008)  
	FLaunchInfo                                        _launchInfo;                                                // 0x03A0   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03BC   (0x0004)  MISSED
	class AK25Chain*                                   _attachedChain;                                             // 0x03C0   (0x0008)  
	float                                              _timeIgnoreSlasherCollision;                                // 0x03C8   (0x0004)  
	bool                                               _isActive;                                                  // 0x03CC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03CD   (0x0003)  MISSED
	FK25ProjectileDeactivationData                     _lastDeactivationData;                                      // 0x03D0   (0x0020)  
	unsigned char                                      UnknownData03_6[0x40];                                      // 0x03F0   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheK25.K25Projectile.Server_RequestDisableProjectile
	// void Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason);                                // [0x5b6fcb0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK25.K25Projectile.OnProjectileStopped
	// void OnProjectileStopped(FHitResult& Result);                                                                         // [0x5b6fa70] Final|Native|Protected|HasOutParms 
	// Function /Script/TheK25.K25Projectile.GetMovementComponent
	// class UDBDProjectileMovementComponent* GetMovementComponent();                                                        // [0x5b6f2c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25Projectile.GetChainAttachmentLocation
	// FVector GetChainAttachmentLocation();                                                                                 // [0x5b6f160] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TheK25.K25Projectile.Cosmetic_OnProjectileDeactivated
	// void Cosmetic_OnProjectileDeactivated(FK25ProjectileDeactivationData& deactivationData);                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/TheK25.K25Projectile.Cosmetic_OnProjectileActivated
	// void Cosmetic_OnProjectileActivated();                                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25ControlledProjectile
/// Size: 0x0270 (0x000430 - 0x0006A0)
class AK25ControlledProjectile : public AK25Projectile
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0430   (0x0008)  MISSED
	class UStaticMeshComponent*                        _killerViewProjectileStaticMesh;                            // 0x0438   (0x0008)  
	class USpringArmComponent*                         _killerSpringArm;                                           // 0x0440   (0x0008)  
	class UCameraComponent*                            _killerCameraPlacement;                                     // 0x0448   (0x0008)  
	float                                              _pitchClampAngle;                                           // 0x0450   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0454   (0x0004)  MISSED
	FTunableStat                                       _maximumYawTurnRate;                                        // 0x0458   (0x0080)  
	FTunableStat                                       _maximumPitchTurnRate;                                      // 0x04D8   (0x0080)  
	FDBDTunableRowHandle                               _cameraRollSpeedMultiplier;                                 // 0x0558   (0x0028)  
	FDBDTunableRowHandle                               _cameraRollGoBackSpeedMultiplier;                           // 0x0580   (0x0028)  
	FDBDTunableRowHandle                               _cameraMaximumRollDegree;                                   // 0x05A8   (0x0028)  
	FTunableStat                                       _numbExtraChainsOnControlledProjectileHit;                  // 0x05D0   (0x0080)  
	class UK25ControlledProjectileMovementComponent*   _controlledProjectileMovementComponent;                     // 0x0650   (0x0008)  
	float                                              _currentRoll;                                               // 0x0658   (0x0004)  
	float                                              _targetRoll;                                                // 0x065C   (0x0004)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0660   (0x0030)  MISSED
	FVector_NetQuantize                                _lastAppliedAngularVelocity;                                // 0x0690   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x069C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK25.K25ControlledProjectile.Server_ProcessYawInput
	// void Server_ProcessYawInput(float DeltaTime, float scaledInput);                                                      // [0x5b6ba70] Net|Native|Event|Public|NetServer 
	// Function /Script/TheK25.K25ControlledProjectile.Server_ProcessPitchInput
	// void Server_ProcessPitchInput(float DeltaTime, float scaledInput);                                                    // [0x5b6b9a0] Net|Native|Event|Public|NetServer 
	// Function /Script/TheK25.K25ControlledProjectile.OnRep_AngularVelocity
	// void OnRep_AngularVelocity();                                                                                         // [0x45fe020] Final|Native|Private 
	// Function /Script/TheK25.K25ControlledProjectile.Cosmetic_OnKillerPossessProjectileEffects
	// void Cosmetic_OnKillerPossessProjectileEffects();                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25ControlledProjectileMovementComponent
/// Size: 0x0140 (0x000260 - 0x0003A0)
class UK25ControlledProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{ 
public:
	FDBDTunableRowHandle                               _projectileBaseSpeed;                                       // 0x0260   (0x0028)  
	FDBDTunableRowHandle                               _baseProjectileMaximumDistance;                             // 0x0288   (0x0028)  
	FDBDTunableRowHandle                               _projectileSpeedIncreaseTime;                               // 0x02B0   (0x0028)  
	FTunableStat                                       _maximumTravelDistanceStat;                                 // 0x02D8   (0x0080)  
	class UCurveFloat*                                 _projectileSpeedIncreaseMultiplier;                         // 0x0358   (0x0008)  
	float                                              _totalDistanceTravelled;                                    // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x0364   (0x003C)  MISSED
};

/// Class /Script/TheK25.K25EscapeLamentConfigurationGrasp
/// Size: 0x0000 (0x000790 - 0x000790)
class UK25EscapeLamentConfigurationGrasp : public UChargeableInteractionDefinition
{ 
public:
};

/// Class /Script/TheK25.K25Gateway
/// Size: 0x02A0 (0x000230 - 0x0004D0)
class AK25Gateway : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0230   (0x0020)  MISSED
	float                                              _rayCastZOffet;                                             // 0x0250   (0x0004)  
	float                                              _rayCastLength;                                             // 0x0254   (0x0004)  
	TArray<float>                                      _distancePercentLocations;                                  // 0x0258   (0x0010)  
	float                                              _survivorGatewayRotationSpeed;                              // 0x0268   (0x0004)  
	float                                              _minimumIndicatorVelocity;                                  // 0x026C   (0x0004)  
	float                                              _indicatorVelocityEasingFactor;                             // 0x0270   (0x0004)  
	float                                              _minimumTimeBeforeTargetLocationMulticast;                  // 0x0274   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0278   (0x0008)  MISSED
	float                                              _gatewayNoiseEventTimeInterval;                             // 0x0280   (0x0004)  
	float                                              _gatewayNoiseEventRange;                                    // 0x0284   (0x0004)  
	FDBDTunableRowHandle                               _minDistanceFromPlayer;                                     // 0x0288   (0x0028)  
	FTunableStat                                       _maxDistanceFromPlayer;                                     // 0x02B0   (0x0080)  
	FDBDTunableRowHandle                               _gatewayPlacementSpeed;                                     // 0x0330   (0x0028)  
	FDBDTunableRowHandle                               _pitchLevelChangeAngleThreshold;                            // 0x0358   (0x0028)  
	FDBDTunableRowHandle                               _pitchLevelChangeZoneThreshold;                             // 0x0380   (0x0028)  
	FDBDTunableRowHandle                               _maximumCameraPitchOrientationAngle;                        // 0x03A8   (0x0028)  
	FDBDTunableRowHandle                               _minimumCameraPitchOrientationAngle;                        // 0x03D0   (0x0028)  
	FDBDTunableRowHandle                               _maxGatewayPossessionDuration;                              // 0x03F8   (0x0028)  
	class UActorComponent*                             _visualComponent;                                           // 0x0420   (0x0008)  
	FVector                                            _targetLocation;                                            // 0x0428   (0x000C)  
	unsigned char                                      UnknownData02_5[0x14];                                      // 0x0434   (0x0014)  MISSED
	class UCameraComponent*                            _cameraPlacementComponent;                                  // 0x0448   (0x0008)  
	bool                                               _isGatewayPossessed;                                        // 0x0450   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1B];                                      // 0x0451   (0x001B)  MISSED
	bool                                               _isBeingPositionned;                                        // 0x046C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1B];                                      // 0x046D   (0x001B)  MISSED
	FFastTimer                                         _possessionTimer;                                           // 0x0488   (0x0030)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x04B8   (0x0010)  MISSED
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                                // 0x04C8   (0x0008)  


	/// Functions
	// Function /Script/TheK25.K25Gateway.Server_StartGatewayPossession
	// void Server_StartGatewayPossession(FVector possessionLocation, FRotator gatewayRotation);                             // [0x5b6bcb0] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK25.K25Gateway.Server_SetIsGatewayBeingPositionned
	// void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned);                                                    // [0x5a894a0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK25.K25Gateway.Server_SetGatewayTargetLocation
	// void Server_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);                                   // [0x5b6bbd0] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK25.K25Gateway.Server_SetGatewayOrientation
	// void Server_SetGatewayOrientation(FRotator Rotation);                                                                 // [0x5b6bb40] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK25.K25Gateway.Server_EndGatewayPossession
	// void Server_EndGatewayPossession();                                                                                   // [0x5b6b980] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK25.K25Gateway.OnRep_IsGatewayPossessed
	// void OnRep_IsGatewayPossessed();                                                                                      // [0x5b6b8d0] Final|Native|Private 
	// Function /Script/TheK25.K25Gateway.OnRep_IsBeingPositionned
	// void OnRep_IsBeingPositionned();                                                                                      // [0x5b6b8b0] Final|Native|Private 
	// Function /Script/TheK25.K25Gateway.Multicast_SetGatewayTargetLocation
	// void Multicast_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);                                // [0x5b6b5d0] Final|Net|Native|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.K25Gateway.Multicast_SetGatewayOrientation
	// void Multicast_SetGatewayOrientation(FRotator Rotation);                                                              // [0x5b6b540] Final|Net|Native|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.K25Gateway.Multicast_SetGatewayLocation
	// void Multicast_SetGatewayLocation(FVector possessionLocation);                                                        // [0x5b6b4b0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.K25Gateway.IsGatewayPossessed
	// bool IsGatewayPossessed();                                                                                            // [0x58828f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25Gateway.GetCameraComponent
	// class UCameraComponent* GetCameraComponent();                                                                         // [0x61c32d0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerInvalidGatewayPlacementSFX
	// void Cosmetic_TriggerInvalidGatewayPlacementSFX();                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerGatewayUnpossessedEffects
	// void Cosmetic_TriggerGatewayUnpossessedEffects();                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessionCancel
	// void Cosmetic_TriggerGatewayPossessionCancel();                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessedEffects
	// void Cosmetic_TriggerGatewayPossessedEffects(float TransitionTime);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStop
	// void Cosmetic_TriggerGatewayPlacementStop();                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStart
	// void Cosmetic_TriggerGatewayPlacementStart();                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementCancel
	// void Cosmetic_TriggerGatewayPlacementCancel();                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_SetKillerVisualVisibility
	// void Cosmetic_SetKillerVisualVisibility(bool IsVisible);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Gateway.Cosmetic_SetIsGatewayPositionValid
	// void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid);                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25Husk
/// Size: 0x0030 (0x0005B0 - 0x0005E0)
class AK25Husk : public ADBDBasePlayer
{ 
public:
	class UCustomizedSkeletalMesh*                     _customizedSkeletalMeshComponent;                           // 0x05A8   (0x0008)  
	class UAnimationMontageSlave*                      _montageFollower;                                           // 0x05B0   (0x0008)  
	int32_t                                            _k25CharacterOverrideID;                                    // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x05BC   (0x0024)  MISSED


	/// Functions
	// Function /Script/TheK25.K25Husk.Cosmetic_StartDisappearing
	// void Cosmetic_StartDisappearing();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Husk.Cosmetic_StartAppearing
	// void Cosmetic_StartAppearing();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.K25Husk.Cosmetic_HideHusk
	// void Cosmetic_HideHusk();                                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK25.K25KillerChainHuntEffectsComponent
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UK25KillerChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent
{ 
public:
};

/// Class /Script/TheK25.K25KillerTeleportationPositionFinderComponent
/// Size: 0x0120 (0x0000B8 - 0x0001D8)
class UK25KillerTeleportationPositionFinderComponent : public UActorComponent
{ 
public:
	float                                              _rayCastZOffet;                                             // 0x00B8   (0x0004)  
	float                                              _rayCastLength;                                             // 0x00BC   (0x0004)  
	float                                              _killerInRangeMinimumDistanceCheck;                         // 0x00C0   (0x0004)  
	float                                              _killerInRangeMaxRangePercentage;                           // 0x00C4   (0x0004)  
	float                                              _deltaHeightThreshold;                                      // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _minDistanceFromLamentConfiguration;                        // 0x00D0   (0x0028)  
	FDBDTunableRowHandle                               _maxDistanceFromLamentConfiguration;                        // 0x00F8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0120   (0x0020)  MISSED
	float                                              _timeBetweenFailsafeChecks;                                 // 0x0140   (0x0004)  
	unsigned char                                      UnknownData02_5[0x44];                                      // 0x0144   (0x0044)  MISSED
	EK25TeleportLocationStatus                         _teleportLocationStatus;                                    // 0x0188   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	FVector                                            _bestTeleportLocation;                                      // 0x018C   (0x000C)  
	TArray<class AEscapeDoor*>                         _escapeDoors;                                               // 0x0198   (0x0010)  
	unsigned char                                      UnknownData04_6[0x30];                                      // 0x01A8   (0x0030)  MISSED
};

/// Class /Script/TheK25.K25LamentConfigurationPossessionChainAttacksEffect
/// Size: 0x0098 (0x000350 - 0x0003E8)
class UK25LamentConfigurationPossessionChainAttacksEffect : public UStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _timeBetweenChainTargettingAttempt;                         // 0x0350   (0x0028)  
	FDBDTunableRowHandle                               _numberOfChainsToTriggerTowardsSurvivor;                    // 0x0378   (0x0028)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x03A0   (0x0048)  MISSED
};

/// Class /Script/TheK25.K25LamentConfigurationTeleportIndicator
/// Size: 0x0008 (0x000230 - 0x000238)
class AK25LamentConfigurationTeleportIndicator : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0230   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK25.K25LamentConfigurationTeleportIndicator.Cosmetic_UpdateIndicatorVisibility
	// void Cosmetic_UpdateIndicatorVisibility(bool IsVisible);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25P01
/// Size: 0x0060 (0x0003C8 - 0x000428)
class UK25P01 : public UPerk
{ 
public:
	float                                              _generatorBlockDuration;                                    // 0x03C8   (0x000C)  
	float                                              _auraRevealDuration;                                        // 0x03D4   (0x000C)  
	bool                                               _allowPerkToBlockZeroProgressionGenerators;                 // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	FLinearColor                                       _generatorAuraColorForKiller;                               // 0x03E4   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	TArray<FFastTimer>                                 _generatorBlockingTimers;                                   // 0x03F8   (0x0010)  
	TArray<class AGenerator*>                          _generatorsBlocked;                                         // 0x0408   (0x0010)  
	TArray<class AGenerator*>                          _local_generatorsBlocked;                                   // 0x0418   (0x0010)  


	/// Functions
	// Function /Script/TheK25.K25P01.OnRep_GeneratorsBlocked
	// void OnRep_GeneratorsBlocked();                                                                                       // [0x5b6b890] Final|Native|Private 
	// Function /Script/TheK25.K25P01.GetGeneratorBlockDuration
	// float GetGeneratorBlockDuration();                                                                                    // [0x500a800] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25P01.GetAuraRevealDuration
	// float GetAuraRevealDuration();                                                                                        // [0x500a980] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25P01.Authority_OnBlockTimerDone
	// void Authority_OnBlockTimerDone(class AGenerator* Generator);                                                         // [0x5b6b250] Final|Native|Private 
};

/// Struct /Script/TheK25.DBDPlayerTotemPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDBDPlayerTotemPair
{ 
	class ADBDPlayer*                                  Player;                                                     // 0x0000   (0x0008)  
	class ATotem*                                      Totem;                                                      // 0x0008   (0x0008)  
};

/// Class /Script/TheK25.K25P02
/// Size: 0x0090 (0x000448 - 0x0004D8)
class UK25P02 : public UHexPerk
{ 
public:
	float                                              _totemAuraRevealRadius;                                     // 0x0448   (0x000C)  
	bool                                               _totemBlockerHasLifetime;                                   // 0x0454   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0455   (0x0003)  MISSED
	float                                              _totemBlockerDuration;                                      // 0x0458   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0464   (0x0004)  MISSED
	class UClass*                                      _obliviousStatusEffectClass;                                // 0x0468   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0470   (0x0008)  MISSED
	TArray<FDBDPlayerTotemPair>                        _cursedSurvivors;                                           // 0x0478   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0488   (0x0010)  MISSED
	TArray<class ADBDPlayer*>                          _hookedSurvivors;                                           // 0x0498   (0x0010)  
	TArray<class ATotem*>                              _previouslyBoundTotems;                                     // 0x04A8   (0x0010)  
	FDBDPlayerTotemPair                                _lastPlayerTotemPair;                                       // 0x04B8   (0x0010)  
	TArray<class UStatusEffect*>                       _obliviousStatusEffects;                                    // 0x04C8   (0x0010)  


	/// Functions
	// Function /Script/TheK25.K25P02.OnRep_CursedSurvivors
	// void OnRep_CursedSurvivors();                                                                                         // [0x5b6b870] Final|Native|Private 
	// Function /Script/TheK25.K25P02.GetTotemBlockerHasLifetime
	// bool GetTotemBlockerHasLifetime();                                                                                    // [0x5b6b480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25P02.GetTotemBlockerDuration
	// float GetTotemBlockerDuration();                                                                                      // [0x5b6b450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25P02.GetTotemAuraRevealRadius
	// float GetTotemAuraRevealRadius();                                                                                     // [0x500f5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.K25P03
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UK25P03 : public UPerk
{ 
public:
	class UClass*                                      _hemorrhageEffect;                                          // 0x03C8   (0x0008)  
	class UClass*                                      _mangledEffect;                                             // 0x03D0   (0x0008)  
	class UClass*                                      _K25P03SurvivorStateTwoEffect;                              // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x03E0   (0x0008)  MISSED
	int32_t                                            _numberOfSurvivorsWaitingForDamageStateChange;              // 0x03E8   (0x0004)  
	float                                              _state2ActionSpeedDebuffPercentage;                         // 0x03EC   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK25.K25P03.OnSurvivorRemoved
	// void OnSurvivorRemoved(class ACamperPlayer* Survivor);                                                                // [0x5b6b8f0] Final|Native|Private 
	// Function /Script/TheK25.K25P03.OnDamageStateChanged
	// void OnDamageStateChanged(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                   // [0x5b6b760] Final|Native|Private|HasOutParms 
	// Function /Script/TheK25.K25P03.OnCamperUnhookedFromScourgeHook
	// void OnCamperUnhookedFromScourgeHook(FGameEventData& GameEventData);                                                  // [0x5b6b6b0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK25.K25P03.GetActionSpeedDebuffPercentageAtLevel
	// float GetActionSpeedDebuffPercentageAtLevel();                                                                        // [0x500a8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.K25PounceAttack
/// Size: 0x0040 (0x000390 - 0x0003D0)
class UK25PounceAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0390   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheK25.K25PounceAttack.Multicast_DownedTargetHoldingLamentConfiguration
	// void Multicast_DownedTargetHoldingLamentConfiguration();                                                              // [0x5b20d20] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25PounceAttack.Client_InvalidateDownedTargetHoldingLamentConfiguration
	// void Client_InvalidateDownedTargetHoldingLamentConfiguration();                                                       // [0x5916d10] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/TheK25.K25PounceAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UK25PounceAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/TheK25.K25Power
/// Size: 0x0160 (0x0004C8 - 0x000628)
class AK25Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C8   (0x0018)  MISSED
	class UChargeableComponent*                        _k25ChainStrikeInteractionChargeableComponent;              // 0x04E0   (0x0008)  
	class UChargeableComponent*                        _k25TeleportChargeableComponent;                            // 0x04E8   (0x0008)  
	TArray<FCustomKillerInstinctData>                  _customKillerInstinctDatas;                                 // 0x04F0   (0x0010)  
	TArray<class UClass*>                              _survivorStatusEffectClasses;                               // 0x0500   (0x0010)  
	TArray<class UClass*>                              _killerStatusEffectClasses;                                 // 0x0510   (0x0010)  
	class UClass*                                      _survivorChainAttachmentComponentClass;                     // 0x0520   (0x0008)  
	class UClass*                                      _survivorChainTargetterComponentClass;                      // 0x0528   (0x0008)  
	class UClass*                                      _k25GatewayClass;                                           // 0x0530   (0x0008)  
	class UClass*                                      _controlledProjectileClass;                                 // 0x0538   (0x0008)  
	class UClass*                                      _lamentConfigurationClass;                                  // 0x0540   (0x0008)  
	class UClass*                                      _k25HuskClass;                                              // 0x0548   (0x0008)  
	class UClass*                                      _killerTeleportFinderComponentClass;                        // 0x0550   (0x0008)  
	class UClass*                                      _chainAnimationActorClass;                                  // 0x0558   (0x0008)  
	TArray<class UDataTable*>                          _chainAnimationMappingsTables;                              // 0x0560   (0x0010)  
	class UClass*                                      _pillarAnimationActorClass;                                 // 0x0570   (0x0008)  
	class UK25ProjectileLauncher*                      _k25ProjectileLauncher;                                     // 0x0578   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _k25ProjectilePool;                                         // 0x0580   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _k25ChainPool;                                              // 0x0588   (0x0008)  
	class UPowerChargeComponent*                       _k25PowerChargeComponent;                                   // 0x0590   (0x0008)  
	class UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider;                                     // 0x0598   (0x0008)  
	class UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent;            // 0x05A0   (0x0008)  
	class AK25Gateway*                                 _gateway;                                                   // 0x05A8   (0x0008)  
	class AK25ControlledProjectile*                    _controlledProjectileInstance;                              // 0x05B0   (0x0008)  
	class ALamentConfiguration*                        _lamentConfiguration;                                       // 0x05B8   (0x0008)  
	class AK25Husk*                                    _k25Husk;                                                   // 0x05C0   (0x0008)  
	class UK25ChainAttachmentReplicationComponent*     _chainAttachmentReplicationComponent;                       // 0x05C8   (0x0008)  
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x05D8   (0x0048)  MISSED
	bool                                               _isPowerCharged;                                            // 0x0620   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0621   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK25.K25Power.OnSurvivorAdded
	// void OnSurvivorAdded(class ACamperPlayer* Survivor, class ASlasherPlayer* killer);                                    // [0x5b6fbe0] Final|Native|Private 
	// Function /Script/TheK25.K25Power.OnRep_LamentConfiguration
	// void OnRep_LamentConfiguration();                                                                                     // [0x5b6fba0] Final|Native|Private 
	// Function /Script/TheK25.K25Power.OnRep_K25Gateway
	// void OnRep_K25Gateway();                                                                                              // [0x5b6fb80] Final|Native|Private 
	// Function /Script/TheK25.K25Power.OnRep_K25ControlledProjectile
	// void OnRep_K25ControlledProjectile();                                                                                 // [0x5b6fb60] Final|Native|Private 
	// Function /Script/TheK25.K25Power.OnKillerAdded
	// void OnKillerAdded(class ASlasherPlayer* killer);                                                                     // [0x5b6f9e0] Final|Native|Private 
	// Function /Script/TheK25.K25Power.Cosmetic_OnKillerInterruptSFX
	// void Cosmetic_OnKillerInterruptSFX(class ASlasherPlayer* killer);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25Power.Cosmetic_OnKillerInterruptOpenHatchSFX
	// void Cosmetic_OnKillerInterruptOpenHatchSFX(class ASlasherPlayer* killer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25PowerChargePresentationItemProgressComponent
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UK25PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                      // 0x00C0   (0x0008)  
	class AK25Power*                                   _k25Power;                                                  // 0x00C8   (0x0008)  
};

/// Class /Script/TheK25.K25ProjectileLauncher
/// Size: 0x0038 (0x000190 - 0x0001C8)
class UK25ProjectileLauncher : public UBaseProjectileLauncher
{ 
public:
	FDBDTunableRowHandle                               _controlledProjectileInitialSpeed;                          // 0x0190   (0x0028)  
	bool                                               _isControlledProjectileRequested;                           // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B9   (0x0007)  MISSED
	class AK25ControlledProjectile*                    _controlledProjectile;                                      // 0x01C0   (0x0008)  
};

/// Class /Script/TheK25.K25ProjectilePool
/// Size: 0x0000 (0x000118 - 0x000118)
class UK25ProjectilePool : public UAuthoritativeActorPoolComponent
{ 
public:
};

/// Class /Script/TheK25.K25ProjectileReplicationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK25ProjectileReplicationComponent : public UBaseProjectileReplicationComponent
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25ProjectileReplicationComponent.Multicast_SetAttachedChain
	// void Multicast_SetAttachedChain(class AK25Projectile* Projectile, class AK25Chain* chainToAttach, FLaunchInfo LaunchInfo); // [0x5b6f740] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25ProjectileReplicationComponent.Multicast_DeactivateProjectile
	// void Multicast_DeactivateProjectile(class AK25Projectile* Projectile, FK25ProjectileDeactivationData deactivationData); // [0x5b6f350] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK25.K25RemoveChainInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UK25RemoveChainInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0790   (0x0010)  MISSED
	FDBDTunableRowHandle                               _interactionTimePerChainsAttached;                          // 0x07A0   (0x0028)  
	class UK25SurvivorChainAttachmentComponent*        _cachedSurvivorChainAttachmentComponent;                    // 0x07C8   (0x0008)  
	SDK_UNDEFINED(8,5107) /* TWeakObjectPtr<AK25Chain*> */ __um(_chainBeingRemoved);                               // 0x07D0   (0x0008)  
	SDK_UNDEFINED(8,5108) /* TWeakObjectPtr<UK25SurvivorChainAttachmentComponent*> */ __um(_chainAttachmentComponent); // 0x07D8   (0x0008)  
};

/// Class /Script/TheK25.K25SolveLamentConfigurationInteraction
/// Size: 0x00E0 (0x000790 - 0x000870)
class UK25SolveLamentConfigurationInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              _timeBufferBeforeAllowedToUseInteractionAgain;              // 0x0788   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x078C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _failSkillCheckTimePenalty;                                 // 0x0790   (0x0028)  
	FAnimationMontageDescriptor                        _failMontage;                                               // 0x07B8   (0x0020)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x07D8   (0x0098)  MISSED


	/// Functions
	// Function /Script/TheK25.K25SolveLamentConfigurationInteraction.Multicast_TriggerKillerStoppedInteractionViaAttackSFX
	// void Multicast_TriggerKillerStoppedInteractionViaAttackSFX(class ASlasherPlayer* killer);                             // [0x50aead0] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25SolveLamentConfigurationInteraction.Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX
	// void Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX(class ASlasherPlayer* killer);                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25SolveLamentConfigurationInteraction.Authority_OnSkillCheckResponseAuthority
	// void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type); // [0x5b6ee80] Final|Native|Private 
};

/// Struct /Script/TheK25.K25SurvivorChainAttachmentData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FK25SurvivorChainAttachmentData
{ 
	FName                                              AnchorName;                                                 // 0x0000   (0x000C)  
	EK25ChainAnchorPointDirection                      Direction;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVector                                            RelativeLocation;                                           // 0x0010   (0x000C)  
	bool                                               IsFlexibleLimb;                                             // 0x001C   (0x0001)  
	EK25ChainAttachmentLimbType                        LimbType;                                                   // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001E   (0x0002)  MISSED
	class ACamperPlayer*                               _attachedSurvivor;                                          // 0x0020   (0x0008)  
};

/// Class /Script/TheK25.K25SurvivorChainAttachmentAnchor
/// Size: 0x00C8 (0x000230 - 0x0002F8)
class AK25SurvivorChainAttachmentAnchor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	FDBDTunableRowHandle                               _chainMaxBreakingLength;                                    // 0x0248   (0x0028)  
	float                                              _timeBetweenTrace;                                          // 0x0270   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0274   (0x0004)  MISSED
	FK25SurvivorChainAttachmentData                    _attachmentData;                                            // 0x0278   (0x0028)  
	SDK_UNDEFINED(8,5109) /* TWeakObjectPtr<ACamperPlayer*> */ __um(_owningSurvivor);                              // 0x02A0   (0x0008)  
	SDK_UNDEFINED(8,5110) /* TWeakObjectPtr<AK25Chain*> */ __um(_attachedChain);                                   // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x02B0   (0x0030)  MISSED
	FVector                                            _cachedPullDirection;                                       // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x02EC   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.OnRep_AttachmentData
	// void OnRep_AttachmentData();                                                                                          // [0x5b6fb40] Final|Native|Private 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.GetNumberOfChainsAttached
	// int32_t GetNumberOfChainsAttached();                                                                                  // [0x5b6f2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullLocation
	// FVector GetChainsPullLocation();                                                                                      // [0x5b6f250] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullDirection
	// FVector GetChainsPullDirection();                                                                                     // [0x5b6f210] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.GetChainPullDirectionAngle
	// float GetChainPullDirectionAngle();                                                                                   // [0x5b6f1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentLocation
	// FVector GetChainAttachmentLocation();                                                                                 // [0x5b6f1a0] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentData
	// FK25SurvivorChainAttachmentData GetChainAttachmentData();                                                             // [0x5b6f110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainDetached
	// void Cosmetic_OnChainDetached(class AK25Chain* chainToDetach);                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainAttached
	// void Cosmetic_OnChainAttached(class AK25Chain* chainToAttach);                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25SurvivorChainAttachmentComponent
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class UK25SurvivorChainAttachmentComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	class UClass*                                      _attachmentAnchorClass;                                     // 0x00E8   (0x0008)  
	TArray<FK25SurvivorChainAttachmentData>            _survivorAnchorData;                                        // 0x00F0   (0x0010)  
	class UClass*                                      _survivorChainRotationStrategyClass;                        // 0x0100   (0x0008)  
	TArray<class UClass*>                              _interruptableInteractionClasses;                           // 0x0108   (0x0010)  
	FDBDTunableRowHandle                               _maximumNumberOfChainsAttached;                             // 0x0118   (0x0028)  
	TArray<class AK25SurvivorChainAttachmentAnchor*>   _chainAttachmentAnchors;                                    // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,5111) /* TArray<TWeakObjectPtr<AK25Chain*>> */ __um(_chainsAttached);                         // 0x0150   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0160   (0x0008)  MISSED
	class UK25SurvivorChainRotationStrategy*           _survivorChainRotationStrategy;                             // 0x0168   (0x0008)  
	class UK25ChainAttachmentReplicationComponent*     _chainAttachmentReplicationComponent;                       // 0x0170   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0178   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK25.K25SurvivorChainAttachmentComponent.Multicast_TriggerHitSurvivorInExitAreaSFX
	// void Multicast_TriggerHitSurvivorInExitAreaSFX(class ASlasherPlayer* killer);                                         // [0x58c5550] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK25.K25SurvivorChainAttachmentComponent.GetFirstChainToRelease
	// class AK25Chain* GetFirstChainToRelease();                                                                            // [0x5b6f290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.K25SurvivorChainAttachmentComponent.Cosmetic_TriggerHitSurvivorInExitAreaSFX
	// void Cosmetic_TriggerHitSurvivorInExitAreaSFX(class ASlasherPlayer* killer);                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25SurvivorChainHuntEffectsComponent
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UK25SurvivorChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK25.K25SurvivorChainHuntEffectsComponent.GetOwningSurvivor
	// class ACamperPlayer* GetOwningSurvivor();                                                                             // [0x5b6f320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.K25SurvivorChainRotationStrategy
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UK25SurvivorChainRotationStrategy : public UBaseCharacterRotationStrategy
{ 
public:
	SDK_UNDEFINED(8,5112) /* TWeakObjectPtr<ACamperPlayer*> */ __um(_cachedSurvivor);                              // 0x00B8   (0x0008)  
	class UK25SurvivorChainAttachmentComponent*        _cachedChainAttachmentComponent;                            // 0x00C0   (0x0008)  
};

/// Class /Script/TheK25.K25SurvivorChainTargetterComponent
/// Size: 0x0118 (0x0000B8 - 0x0001D0)
class UK25SurvivorChainTargetterComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _timeBetweenQueuedChainsLaunch;                             // 0x00B8   (0x0028)  
	float                                              _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt;   // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FDBDTunableRowHandle                               _minimumSpawnDistance;                                      // 0x00E8   (0x0028)  
	FDBDTunableRowHandle                               _maximumSpawnDistance;                                      // 0x0110   (0x0028)  
	float                                              _sphereCastRadius;                                          // 0x0138   (0x0004)  
	int32_t                                            _numberOfPositionFindingTries;                              // 0x013C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0140   (0x0004)  MISSED
	int32_t                                            _maxNumberOfChainRetries;                                   // 0x0144   (0x0004)  
	unsigned char                                      UnknownData02_6[0x88];                                      // 0x0148   (0x0088)  MISSED


	/// Functions
	// Function /Script/TheK25.K25SurvivorChainTargetterComponent.Multicast_DebugPositionFind
	// void Multicast_DebugPositionFind(FVector startSweepPosition, FVector endSweepPosition, bool hasFoundPosition, FVector foundPosition, bool hasFoundCollision, FVector collisionPosition); // [0x5b6f440] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults|Const 
	// Function /Script/TheK25.K25SurvivorChainTargetterComponent.Authority_OnSurvivorHealthStateChanged
	// void Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState); // [0x5b6f040] Final|Native|Private 
};

/// Class /Script/TheK25.K25TeleportInteraction
/// Size: 0x00B0 (0x000790 - 0x000840)
class UK25TeleportInteraction : public UChargeableInteractionDefinition
{ 
public:
	int32_t                                            _maxNumberLocationQueriesPerTick;                           // 0x0788   (0x0004)  
	float                                              _timeSensingLamentConfigurationAfterInteractionEnded;       // 0x078C   (0x0004)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0790   (0x0020)  MISSED
	FDBDTunableRowHandle                               _slowdownAfterTeleportDuration;                             // 0x07B0   (0x0028)  
	class UClass*                                      _slowdownAfterTeleportStatusEffectClass;                    // 0x07D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x07E0   (0x0060)  MISSED


	/// Functions
	// Function /Script/TheK25.K25TeleportInteraction.Multicast_TeleportKillerToTargetPosition
	// void Multicast_TeleportKillerToTargetPosition(class ASlasherPlayer* killer, FVector Location, FRotator Rotation);     // [0x5b6f8a0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.K25TeleportInteraction.Multicast_InitializeHusk
	// void Multicast_InitializeHusk(FVector Location, FRotator Rotation);                                                   // [0x5b6f650] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.K25TeleportInteraction.Cosmetic_TeleportStartEffects
	// void Cosmetic_TeleportStartEffects(class ASlasherPlayer* killer);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25TeleportInteraction.Cosmetic_TeleportEndEffects
	// void Cosmetic_TeleportEndEffects(class ASlasherPlayer* killer);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.K25TeleportInteraction.Cosmetic_TeleportAbortedEffects
	// void Cosmetic_TeleportAbortedEffects(class ASlasherPlayer* killer);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25UncontrolledProjectile
/// Size: 0x0120 (0x000430 - 0x000550)
class AK25UncontrolledProjectile : public AK25Projectile
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0430   (0x0008)  MISSED
	SDK_UNDEFINED(16,5113) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0438   (0x0010)  
	FDBDTunableRowHandle                               _minimumTimeBeforeProjectileLaunch;                         // 0x0448   (0x0028)  
	FDBDTunableRowHandle                               _maximumTimeBeforeProjectileLaunch;                         // 0x0470   (0x0028)  
	FDBDTunableRowHandle                               _projectileSpeed;                                           // 0x0498   (0x0028)  
	FDBDTunableRowHandle                               _projectileMaximumTravelDistance;                           // 0x04C0   (0x0028)  
	bool                                               _isAcquiredFromPool;                                        // 0x04E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x37];                                      // 0x04E9   (0x0037)  MISSED
	class ACamperPlayer*                               _targetSurvivor;                                            // 0x0520   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0528   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK25.K25UncontrolledProjectile.OnRep_TargetSurvivor
	// void OnRep_TargetSurvivor();                                                                                          // [0x5b6fbc0] Final|Native|Private 
	// Function /Script/TheK25.K25UncontrolledProjectile.Cosmetic_TriggerUncontrolledProjectileSpawnSFX
	// void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK25.K25UncontrolledProjectileReplicationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK25UncontrolledProjectileReplicationComponent : public UK25ProjectileReplicationComponent
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25UncontrolledProjectileReplicationComponent.Multicast_LaunchProjectile
	// void Multicast_LaunchProjectile(class AK25UncontrolledProjectile* Projectile, FLaunchInfo LaunchInfo);                // [0x5b738c0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK25.K25Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK25Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25Utilities.GetLamentConfiguration
	// class ALamentConfiguration* GetLamentConfiguration(class UObject* WorldContextObject);                                // [0x5b737b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK25.K25Utilities.GetK25Power
	// class AK25Power* GetK25Power(class UObject* WorldContextObject);                                                      // [0x5b73720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK25.K25Utilities.GetK25Husk
	// class AK25Husk* GetK25Husk(class UObject* WorldContextObject);                                                        // [0x5b73690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK25.K25Utilities.GetK25Gateway
	// class AK25Gateway* GetK25Gateway(class UObject* WorldContextObject);                                                  // [0x5b73600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK25.K25Utilities.GetK25ControlledProjectile
	// class AK25ControlledProjectile* GetK25ControlledProjectile(class UObject* WorldContextObject);                        // [0x5b73570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK25.K25WeaponAnimInstance
/// Size: 0x0000 (0x000380 - 0x000380)
class UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance
{ 
public:


	/// Functions
	// Function /Script/TheK25.K25WeaponAnimInstance.OnAttackStart
	// void OnAttackStart(EAttackType attackType);                                                                           // [0x5b73aa0] Final|Native|Protected 
};

/// Class /Script/TheK25.LamentConfiguration
/// Size: 0x02E8 (0x0004C8 - 0x0007B0)
class ALamentConfiguration : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x04C8   (0x0030)  MISSED
	class USpherePlayerOverlapComponent*               _interactable;                                              // 0x04F8   (0x0008)  
	class UInteractor*                                 _collectableInteractor;                                     // 0x0500   (0x0008)  
	class UK25CollectLamentConfigurationInteraction*   _survivorCollectItemInteraction;                            // 0x0508   (0x0008)  
	class UK25CollectLamentConfigurationInteraction*   _killerCollectItemInteraction;                              // 0x0510   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0518   (0x0008)  
	class UMaterialHelper*                             _materialHelper;                                            // 0x0520   (0x0008)  
	class ULamentConfigurationOutlineStrategy*         _outlineStrategy;                                           // 0x0528   (0x0008)  
	class ULamentConfigurationSpawnStrategy*           _spawnStrategy;                                             // 0x0530   (0x0008)  
	class ULamentConfigurationChainHuntComponent*      _chainHuntComponent;                                        // 0x0538   (0x0008)  
	float                                              _dotProductMinValue;                                        // 0x0540   (0x0004)  
	EAttachToSocketNameEnum                            _survivorAttachmentSocket;                                  // 0x0544   (0x0001)  
	EAttachToSocketNameEnum                            _killerAttachmentSocket;                                    // 0x0545   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0546   (0x0002)  MISSED
	class UAnimationMontageSlave*                      _montageFollower;                                           // 0x0548   (0x0008)  
	class UMontagePlayer*                              _montagePlayer;                                             // 0x0550   (0x0008)  
	class UClass*                                      _chainAnimationActorClass;                                  // 0x0558   (0x0008)  
	class UClass*                                      _lamentConfigurationTeleportIndicatorClass;                 // 0x0560   (0x0008)  
	FName                                              _chainAnimationFollowerAttachmentSocketName;                // 0x0568   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0574   (0x0004)  MISSED
	FAkObservedPlayerSoundLoop                         _possessionSoundLoop;                                       // 0x0578   (0x0040)  
	FDBDTunableRowHandle                               _respawnTimeAfterLamentConfigurationSolved;                 // 0x05B8   (0x0028)  
	FDBDTunableRowHandle                               _respawnTimeAfterKillerPickUp;                              // 0x05E0   (0x0028)  
	FDBDTunableRowHandle                               _respawnTimeAfterSurvivorFreeBySelf;                        // 0x0608   (0x0028)  
	FDBDTunableRowHandle                               _respawnTimeAfterSurvivorFreeByAttack;                      // 0x0630   (0x0028)  
	FDBDTunableRowHandle                               _numberChainsToLaunchUponKillerPickUpLamentConfiguration;   // 0x0658   (0x0028)  
	FDBDTunableRowHandle                               _hostageInteractionTime;                                    // 0x0680   (0x0028)  
	ELamentConfigurationState                          _localLamentConfigurationState;                             // 0x06A8   (0x0001)  
	ELamentConfigurationState                          _lamentconfigurationState;                                  // 0x06A9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x06AA   (0x0006)  MISSED
	class AAnimationFollowerActor*                     _chainAnimationActor;                                       // 0x06B0   (0x0008)  
	unsigned char                                      UnknownData04_5[0x48];                                      // 0x06B8   (0x0048)  MISSED
	class ACamperPlayer*                               _survivorHeldHostage;                                       // 0x0700   (0x0008)  
	unsigned char                                      UnknownData05_5[0x88];                                      // 0x0708   (0x0088)  MISSED
	class UBoxComponent*                               _standingOnLamentConfigurationCollisionChecker;             // 0x0790   (0x0008)  
	float                                              _timeAllowedToStandOnCubeBeforeTeleport;                    // 0x0798   (0x0004)  
	float                                              _solvedLamentConfigurationDropDistanceToCollectorCentimeters; // 0x079C   (0x0004)  
	float                                              _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters; // 0x07A0   (0x0004)  
	bool                                               _solved;                                                    // 0x07A4   (0x0001)  
	bool                                               _releasedByAttack;                                          // 0x07A5   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x07A6   (0x0002)  MISSED
	class AK25LamentConfigurationTeleportIndicator*    _lamentConfigurationTeleportIndicator;                      // 0x07A8   (0x0008)  


	/// Functions
	// Function /Script/TheK25.LamentConfiguration.TriggerKillerPickUpSFX
	// void TriggerKillerPickUpSFX(TArray<ACamperPlayer*>& affectedSurvivors);                                               // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.OnRep_SurvivorHeldHostage
	// void OnRep_SurvivorHeldHostage(class ACamperPlayer* oldSurvivorHeldHostage);                                          // [0x5b73da0] Final|Native|Private 
	// Function /Script/TheK25.LamentConfiguration.OnRep_LamentConfigurationState
	// void OnRep_LamentConfigurationState();                                                                                // [0x5b73d80] Final|Native|Private 
	// Function /Script/TheK25.LamentConfiguration.OnCamperEscaped
	// void OnCamperEscaped(FGameplayTag gameEventType, FGameEventData& GameEventData);                                      // [0x5b73b20] Final|Native|Private|HasOutParms 
	// Function /Script/TheK25.LamentConfiguration.Multicast_TriggerSolvedSFX
	// void Multicast_TriggerSolvedSFX();                                                                                    // [0x5b73a80] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.LamentConfiguration.Multicast_TriggerKillerPickUpSFX
	// void Multicast_TriggerKillerPickUpSFX(TArray<ACamperPlayer*> affectedSurvivors);                                      // [0x5b739e0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.LamentConfiguration.Multicast_DownedSurvivorHoldingLamentConfiguration
	// void Multicast_DownedSurvivorHoldingLamentConfiguration(class ACamperPlayer* Survivor);                               // [0x5b209d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK25.LamentConfiguration.Multicast_CorrectLamentConfigurationPosition
	// void Multicast_CorrectLamentConfigurationPosition(FVector NewPosition);                                               // [0x5b73840] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK25.LamentConfiguration.GetChainHuntProgressPercentage
	// float GetChainHuntProgressPercentage();                                                                               // [0x5b734e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_TriggerSurvivorPickUpSFX
	// void Cosmetic_TriggerSurvivorPickUpSFX();                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_TriggerSpawnedSFX
	// void Cosmetic_TriggerSpawnedSFX();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_TriggerSolvedSFX
	// void Cosmetic_TriggerSolvedSFX();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_TriggerRespawnDuringChainHuntSFX
	// void Cosmetic_TriggerRespawnDuringChainHuntSFX();                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX
	// void Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX();                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_TriggerDisappearsSFX
	// void Cosmetic_TriggerDisappearsSFX();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration
	// void Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(class ASlasherPlayer* killer, class ACamperPlayer* survivorDowned); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageStart
	// void Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageEnd
	// void Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack);                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnChainHuntStartedEffects
	// void Cosmetic_OnChainHuntStartedEffects();                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnChainHuntEndedEffects
	// void Cosmetic_OnChainHuntEndedEffects();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeStart
	// void Cosmetic_OnChainHuntChargeStart(float chargeTime);                                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeEnd
	// void Cosmetic_OnChainHuntChargeEnd();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_EndSolvingCube
	// void Cosmetic_EndSolvingCube(bool hasBeenSolved);                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Cosmetic_BeginSolvingCube
	// void Cosmetic_BeginSolvingCube();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK25.LamentConfiguration.Authority_RespawnLamentConfiguration
	// void Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning);                                         // [0x5b73450] Final|Native|Public  
	// Function /Script/TheK25.LamentConfiguration.Authority_OnSurvivorHitByControlledProjectile
	// void Authority_OnSurvivorHitByControlledProjectile(FGameplayTag gameEventType, FGameEventData& GameEventData);        // [0x5b73340] Final|Native|Private|HasOutParms 
	// Function /Script/TheK25.LamentConfiguration.Authority_OnOverlapEnd
	// void Authority_OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5b731e0] Final|Native|Private 
	// Function /Script/TheK25.LamentConfiguration.Authority_OnOverlapBegin
	// void Authority_OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5b72fc0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK25.LamentConfiguration.Authority_OnIntroCompletedOrLevelReadyToPlay
	// void Authority_OnIntroCompletedOrLevelReadyToPlay();                                                                  // [0x5b72fa0] Final|Native|Private 
	// Function /Script/TheK25.LamentConfiguration.Authority_OnGameEnded
	// void Authority_OnGameEnded(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x5b72e90] Final|Native|Private|HasOutParms 
	// Function /Script/TheK25.LamentConfiguration.Authority_OnEndGameOver
	// void Authority_OnEndGameOver(FGameplayTag gameEventType, FGameEventData& GameEventData);                              // [0x5b72d80] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK25.LamentConfigurationAnalyticsComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class ULamentConfigurationAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00B8   (0x0038)  MISSED
};

/// Struct /Script/TheK25.ChainHuntStateData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FChainHuntStateData
{ 
	float                                              CompletionPercentage;                                       // 0x0000   (0x0004)  
	EChainHuntState                                    ChainHuntState;                                             // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0005   (0x000B)  MISSED
};

/// Class /Script/TheK25.LamentConfigurationChainHuntComponent
/// Size: 0x01D0 (0x0000B8 - 0x000288)
class ULamentConfigurationChainHuntComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x00B8   (0x0078)  MISSED
	float                                              _floorChainHuntTimeBetweenChainStrikes;                     // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FTunableStat                                       _chainHuntChargeTime;                                       // 0x0138   (0x0080)  
	class UCurveFloat*                                 _chainNumberPerChainHuntCluster;                            // 0x01B8   (0x0008)  
	class UCurveFloat*                                 _timeBetweenChainHuntClusterStrikes;                        // 0x01C0   (0x0008)  
	class UClass*                                      _killerChainHuntEffectsComponentClass;                      // 0x01C8   (0x0008)  
	class UClass*                                      _survivorChainHuntEffectsComponentClass;                    // 0x01D0   (0x0008)  
	class UK25KillerChainHuntEffectsComponent*         _killerChainHuntEffectsComponent;                           // 0x01D8   (0x0008)  
	TArray<class UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents;                              // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x01F0   (0x0030)  MISSED
	float                                              _cachedAdditiveChainStrikeDelayTime;                        // 0x0220   (0x0004)  
	unsigned char                                      UnknownData03_5[0x34];                                      // 0x0224   (0x0034)  MISSED
	FChainHuntStateData                                _chainHuntStateData;                                        // 0x0258   (0x0010)  
	EChainHuntState                                    _oldChainHuntState;                                         // 0x0268   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1F];                                      // 0x0269   (0x001F)  MISSED


	/// Functions
	// Function /Script/TheK25.LamentConfigurationChainHuntComponent.OnRep_ChainHuntStateData
	// void OnRep_ChainHuntStateData();                                                                                      // [0x5b73d20] Final|Native|Private 
	// Function /Script/TheK25.LamentConfigurationChainHuntComponent.GetChainHuntProgressPercentage
	// float GetChainHuntProgressPercentage();                                                                               // [0x5b73510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.LamentConfigurationOutlineStrategy
/// Size: 0x0068 (0x0000E0 - 0x000148)
class ULamentConfigurationOutlineStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _noChainHuntProgressColor;                                  // 0x00E0   (0x0010)  
	FLinearColor                                       _chainHuntActiveColor;                                      // 0x00F0   (0x0010)  
	FLinearColor                                       _killerColor;                                               // 0x0100   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0110   (0x0038)  MISSED
};

/// Struct /Script/TheK25.LamentConfigurationPlayerPossessionData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLamentConfigurationPlayerPossessionData
{ 
	float                                              PickUpElapsedMatchTime;                                     // 0x0000   (0x0004)  
	float                                              DropElapsedMatchTime;                                       // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,5114) /* FString */               __um(Outcome);                                              // 0x0008   (0x0010)  
};

/// Class /Script/TheK25.LamentConfigurationPlayerAnalyticsComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class ULamentConfigurationPlayerAnalyticsComponent : public UActorComponent
{ 
public:
	int32_t                                            _analyticsCount;                                            // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FLamentConfigurationPlayerPossessionData           _possessionAnalytics;                                       // 0x00C0   (0x0018)  


	/// Functions
	// Function /Script/TheK25.LamentConfigurationPlayerAnalyticsComponent.OnRep_AnalyticsCount
	// void OnRep_AnalyticsCount();                                                                                          // [0x5b73d00] Final|Native|Private 
};

/// Struct /Script/TheK25.LamentConfigurationSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLamentConfigurationSpawnInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UTileSpawnPoint*                             _spawnPoint;                                                // 0x0008   (0x0008)  
};

/// Class /Script/TheK25.LamentConfigurationSpawnStrategy
/// Size: 0x0098 (0x0000B8 - 0x000150)
class ULamentConfigurationSpawnStrategy : public UActorComponent
{ 
public:
	float                                              _killerPointDistanceMultiplier;                             // 0x00B8   (0x0004)  
	float                                              _survivorPointDistanceMultiplier;                           // 0x00BC   (0x0004)  
	float                                              _maxDistancePointAllowed;                                   // 0x00C0   (0x0004)  
	float                                              _minSurvivorDistance;                                       // 0x00C4   (0x0004)  
	float                                              _minSurvivorDistancePointPenalty;                           // 0x00C8   (0x0004)  
	float                                              _minKillerDistance;                                         // 0x00CC   (0x0004)  
	float                                              _minHatchDistance;                                          // 0x00D0   (0x0004)  
	float                                              _minDistanceFromOtherSpawns;                                // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	float                                              _minKillerDistancePointPenalty;                             // 0x00E0   (0x0004)  
	int32_t                                            _numberOfSpawnPointInLottery;                               // 0x00E4   (0x0004)  
	float                                              _pointPenaltyPerUsedLocationTime;                           // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<ETileSpawnPointType>                        _spawnPointsTypes;                                          // 0x00F0   (0x0010)  
	float                                              _downRaycastLength;                                         // 0x0100   (0x0004)  
	float                                              _rayCastZOffet;                                             // 0x0104   (0x0004)  
	float                                              _navmeshCheckRadius;                                        // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	TArray<FLamentConfigurationSpawnInfo>              _cached_spawnsInfo;                                         // 0x0110   (0x0010)  
	class UTileSpawnPoint*                             _lastUsedSpawnPoint;                                        // 0x0120   (0x0008)  
	TArray<class UClass*>                              _actorsInMapToAvoid;                                        // 0x0128   (0x0010)  
	float                                              _minDistanceFromActorsToAvoid;                              // 0x0138   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<class AHatch*>                              _hatches;                                                   // 0x0140   (0x0010)  
};

/// Class /Script/TheK25.OwningPlayerInLamentConfigurationRange
/// Size: 0x0020 (0x000108 - 0x000128)
class UOwningPlayerInLamentConfigurationRange : public UAnyActorPairQueryRangeIsTrue
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0108   (0x0020)  MISSED
};

/// Class /Script/TheK25.S28P01
/// Size: 0x0048 (0x0003C8 - 0x000410)
class US28P01 : public UPerk
{ 
public:
	float                                              _auraRevealDuration;                                        // 0x03C8   (0x000C)  
	float                                              _auraRevealRange;                                           // 0x03D4   (0x000C)  
	class UClass*                                      _S28P01InteractionClass;                                    // 0x03E0   (0x0008)  
	class UChargeableComponent*                        _S28P01ChargeableComponent;                                 // 0x03E8   (0x0008)  
	class US28P01AuraReveal*                           _S28P01Interaction;                                         // 0x03F0   (0x0008)  
	bool                                               _isPerkActive;                                              // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03F9   (0x0007)  MISSED
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x0400   (0x0008)  
	class ADBDPlayer*                                  _playerOwner;                                               // 0x0408   (0x0008)  


	/// Functions
	// Function /Script/TheK25.S28P01.OnRep_IsPerkActive
	// void OnRep_IsPerkActive();                                                                                            // [0x5b73d60] Final|Native|Private|Const 
	// Function /Script/TheK25.S28P01.OnRep_InteractionAttacherComponent
	// void OnRep_InteractionAttacherComponent();                                                                            // [0x5b73d40] Final|Native|Private 
	// Function /Script/TheK25.S28P01.OnInteractionChargeChanged
	// void OnInteractionChargeChanged(class UChargeableComponent* ChargeableComponent, float TotalPercentComplete);         // [0x5b73c30] Final|Native|Private 
	// Function /Script/TheK25.S28P01.GetAuraRevealRange
	// float GetAuraRevealRange();                                                                                           // [0x500a980] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK25.S28P01.GetAuraRevealDuration
	// float GetAuraRevealDuration();                                                                                        // [0x500a800] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.S28P01AuraReveal
/// Size: 0x0060 (0x000790 - 0x0007F0)
class US28P01AuraReveal : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0790   (0x0060)  MISSED
};

/// Class /Script/TheK25.S28P02
/// Size: 0x0020 (0x000480 - 0x0004A0)
class US28P02 : public UBoonPerk
{ 
public:
	float                                              _healingSpeedGainPercentage;                                // 0x0480   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x048C   (0x0004)  MISSED
	class UClass*                                      _healingSpeedIncreaseEffect;                                // 0x0490   (0x0008)  
	class UClass*                                      _revealInjuredPlayersInBoonRangeEffectClass;                // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/TheK25.S28P02.GetHealingSpeedGainPercentageAtLevel
	// float GetHealingSpeedGainPercentageAtLevel();                                                                         // [0x5b73540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK25.S28P03
/// Size: 0x0010 (0x000480 - 0x000490)
class US28P03 : public UBoonPerk
{ 
public:
	float                                              _lingerDuration;                                            // 0x0480   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x048C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK25.S28P03.GetLingerDurationAtLevel
	// float GetLingerDurationAtLevel();                                                                                     // [0x5b73540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TheK25.K25SurvivorTeleportationData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK25SurvivorTeleportationData
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheK25.K25ChainTraceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK25ChainTraceData
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheK25.LamentConfigurationPlayerPossessionAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FLamentConfigurationPlayerPossessionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,5115) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	float                                              PickUpElapsedMatchTime;                                     // 0x00C8   (0x0004)  
	float                                              DropElapsedMatchTime;                                       // 0x00CC   (0x0004)  
	SDK_UNDEFINED(16,5116) /* FString */               __um(Outcome);                                              // 0x00D0   (0x0010)  
};

