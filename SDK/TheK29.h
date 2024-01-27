
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
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: StatSystem

/// Enum /Script/TheK29.EK29SurvivorInteractionBlockReason
/// Size: 0x04
enum class EK29SurvivorInteractionBlockReason : uint8_t
{
	EK29SurvivorInteractionBlockReason__BeingRushed                                  = 0,
	EK29SurvivorInteractionBlockReason__BeingThrown                                  = 1,
	EK29SurvivorInteractionBlockReason__BeingSmashed                                 = 2,
	EK29SurvivorInteractionBlockReason__EK29SurvivorInteractionBlockReason_MAX       = 3
};

/// Enum /Script/TheK29.EK29RushPhase
/// Size: 0x09
enum class EK29RushPhase : uint8_t
{
	EK29RushPhase__EndingInteraction                                                 = 0,
	EK29RushPhase__Charging                                                          = 1,
	EK29RushPhase__Rushing                                                           = 2,
	EK29RushPhase__Bouncing                                                          = 3,
	EK29RushPhase__BetweenRushes                                                     = 4,
	EK29RushPhase__IntoGrabbingSurvivor                                              = 5,
	EK29RushPhase__GrabbingSurvivor                                                  = 6,
	EK29RushPhase__SmashSurvivor                                                     = 7,
	EK29RushPhase__EK29RushPhase_MAX                                                 = 8
};

/// Class /Script/TheK29.AISkill_FindCollectable_K29SupplyCrate
/// Size: 0x0020 (0x0001B8 - 0x0001D8)
class UAISkill_FindCollectable_K29SupplyCrate : public UAISkill_FindCollectable_Searchable
{ 
public:
	FAITunableParameter                                UrgencyGoalWeight;                                          // 0x01B8   (0x0010)  
	FAITunableParameter                                OpenedWeightMultiplier;                                     // 0x01C8   (0x0010)  
};

/// Class /Script/TheK29.AISkill_InteractionUseItem_K29StabilizingSpray
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionUseItem_K29StabilizingSpray : public UAISkill_InteractionUseItem
{ 
public:
};

/// Class /Script/TheK29.AISkill_InteractionUseItem_K29StabilizingSprayOther
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionUseItem_K29StabilizingSprayOther : public UAISkill_InteractionUseItem
{ 
public:
};

/// Class /Script/TheK29.K29AnimInstance
/// Size: 0x0030 (0x000610 - 0x000640)
class UK29AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isRushing;                                                 // 0x0610   (0x0001)  
	bool                                               _isHoldingSurvivor;                                         // 0x0611   (0x0001)  
	bool                                               _isChargingRushing;                                         // 0x0612   (0x0001)  
	bool                                               _isBetweenRushes;                                           // 0x0613   (0x0001)  
	bool                                               _isThrowing;                                                // 0x0614   (0x0001)  
	bool                                               _isBouncingBack;                                            // 0x0615   (0x0001)  
	bool                                               _hasStartedFinalRush;                                       // 0x0616   (0x0001)  
	bool                                               _hasRushEndedInSurvivorImpact;                              // 0x0617   (0x0001)  
	bool                                               _hasRushEndedInLedgeDrop;                                   // 0x0618   (0x0001)  
	bool                                               _hasInstantlyPickedUpSurvivor;                              // 0x0619   (0x0001)  
	bool                                               _isReadyToRushButHasNoPath;                                 // 0x061A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x25];                                      // 0x061B   (0x0025)  MISSED


	/// Functions
	// Function /Script/TheK29.K29AnimInstance.ResetStartThrowingSurvivor
	// void ResetStartThrowingSurvivor();                                                                                    // [0x5c0bc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29AnimInstance.ResetHasRushEndedInSurvivorImpact
	// void ResetHasRushEndedInSurvivorImpact();                                                                             // [0x5c0bc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29AnimInstance.ResetHasRushEndedInLedgeDrop
	// void ResetHasRushEndedInLedgeDrop();                                                                                  // [0x5c0bc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29AnimInstance.ResetHasInstantlyPickedUpSurvivor
	// void ResetHasInstantlyPickedUpSurvivor();                                                                             // [0x5c0bc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29AnimInstance.OnStartThrowingSurvivor
	// void OnStartThrowingSurvivor();                                                                                       // [0x5c0bbe0] Final|Native|Private 
	// Function /Script/TheK29.K29AnimInstance.OnHasRushEndedInSurvivorImpact
	// void OnHasRushEndedInSurvivorImpact();                                                                                // [0x5c0b9b0] Final|Native|Private 
	// Function /Script/TheK29.K29AnimInstance.OnHasRushEndedInLedgeDrop
	// void OnHasRushEndedInLedgeDrop();                                                                                     // [0x5c0b990] Final|Native|Private 
	// Function /Script/TheK29.K29AnimInstance.OnHasInstantlyPickedUpSurvivor
	// void OnHasInstantlyPickedUpSurvivor();                                                                                // [0x5c0b970] Final|Native|Private 
	// Function /Script/TheK29.K29AnimInstance.OnGameEventReceived
	// void OnGameEventReceived(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                    // [0x5c0b860] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK29.K29GateBlockerStatusEffect
/// Size: 0x0020 (0x000430 - 0x000450)
class UK29GateBlockerStatusEffect : public ULingeringMultiStateTagStatusEffect
{ 
public:
	FName                                              _escapeZoneBoxComponentTagName;                             // 0x0430   (0x000C)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x043C   (0x0014)  MISSED
};

/// Class /Script/TheK29.K29InfectionRemovalCollectable
/// Size: 0x0040 (0x000510 - 0x000550)
class AK29InfectionRemovalCollectable : public ABaseCamperCollectable
{ 
public:
	FDBDTunableRowHandle                               _maxCharges;                                                // 0x0510   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0538   (0x0018)  MISSED
};

/// Class /Script/TheK29.K29KillerVaultInteractionDefinition
/// Size: 0x0000 (0x000710 - 0x000710)
class UK29KillerVaultInteractionDefinition : public UKillerVaultDefinition
{ 
public:


	/// Functions
	// Function /Script/TheK29.K29KillerVaultInteractionDefinition.IsVaultingToLeftSide
	// bool IsVaultingToLeftSide(class AActor* killer);                                                                      // [0x5c0b6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29KillerVaultInteractionDefinition.GetOverlappingSurvivorsOnSide
	// TArray<ACamperPlayer*> GetOverlappingSurvivorsOnSide(bool isUsingLeftSide);                                           // [0x5c0b580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29KillerVaultInteractionDefinition.GetClosestSurvivorToPalletFromOverlap
	// class ACamperPlayer* GetClosestSurvivorToPalletFromOverlap(class ADBDPlayer* Player, TArray<ACamperPlayer*>& survivorsOnSide); // [0x5c0b3b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.K29P01
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UK29P01 : public UPerk
{ 
public:
	float                                              _survivorVaultRushedEventRange;                             // 0x03C8   (0x0004)  
	float                                              _cooldownTime;                                              // 0x03CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK29.K29P01.GetSurvivorVaultRushedEventRange
	// float GetSurvivorVaultRushedEventRange();                                                                             // [0x501b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.K29P02
/// Size: 0x00C8 (0x0003C8 - 0x000490)
class UK29P02 : public UPerk
{ 
public:
	float                                              _revealRange;                                               // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _effectClass;                                               // 0x03D8   (0x0008)  
	SDK_UNDEFINED(80,5117) /* TMap<TWeakObjectPtr<ACamperPlayer*>, TWeakObjectPtr<UStatusEffect*>> */ __um(_survivorRevealedEffects); // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0430   (0x0060)  MISSED


	/// Functions
	// Function /Script/TheK29.K29P02.GetRevealRange
	// float GetRevealRange();                                                                                               // [0x500a800] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29P02.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange, class ACamperPlayer* Survivor);                                         // [0x5c0afa0] Final|Native|Private 
};

/// Class /Script/TheK29.K29P03
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UK29P03 : public UPerk
{ 
public:
	float                                              _brokenEffectDuration;                                      // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _effectClass;                                               // 0x03D8   (0x0008)  
};

/// Class /Script/TheK29.K29P03StatusEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UK29P03StatusEffect : public UAdjustableCooldownStatusEffect
{ 
public:
};

/// Class /Script/TheK29.K29PathingCalculatorComponent
/// Size: 0x0200 (0x0000B8 - 0x0002B8)
class UK29PathingCalculatorComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _maxStepHeight;                                             // 0x00B8   (0x0028)  
	FDBDTunableRowHandle                               _maxStepHeightDownwards;                                    // 0x00E0   (0x0028)  
	FDBDTunableRowHandle                               _horizontalAngle;                                           // 0x0108   (0x0028)  
	FDBDTunableRowHandle                               _verticalAngle;                                             // 0x0130   (0x0028)  
	FDBDTunableRowHandle                               _gridLength;                                                // 0x0158   (0x0028)  
	FDBDTunableRowHandle                               _detectionHeightOffset;                                     // 0x0180   (0x0028)  
	FDBDTunableRowHandle                               _floorSearchLengthFromActorLocation;                        // 0x01A8   (0x0028)  
	FDBDTunableRowHandle                               _minimumWallDashDistanceCarryingSurvivor;                   // 0x01D0   (0x0028)  
	float                                              _floorCheckDistance;                                        // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FDBDTunableRowHandle                               _lineOfSightCapsuleRadius;                                  // 0x0200   (0x0028)  
	FDBDTunableRowHandle                               _lineOfSightCapsuleHeight;                                  // 0x0228   (0x0028)  
	FDBDTunableRowHandle                               _lineOfSightCapsuleHeightOffset;                            // 0x0250   (0x0028)  
	FDBDTunableRowHandle                               _maximumWalkableAngle;                                      // 0x0278   (0x0028)  
	float                                              _groundCollisionDetectionRadius;                            // 0x02A0   (0x0004)  
	float                                              _allowedGroundBlockerHeight;                                // 0x02A4   (0x0004)  
	float                                              _minimalLedgeDistance;                                      // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x02AC   (0x000C)  MISSED
};

/// Class /Script/TheK29.K29Power
/// Size: 0x01A8 (0x0004C8 - 0x000670)
class AK29Power : public ACollectable
{ 
public:
	class UChargeableComponent*                        _rushChargeableComponent;                                   // 0x04C8   (0x0008)  
	class UInteractor*                                 _interactor;                                                // 0x04D0   (0x0008)  
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                         // 0x04D8   (0x0008)  
	class UK29PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;         // 0x04E0   (0x0008)  
	class UK29PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;               // 0x04E8   (0x0008)  
	class UClass*                                      _powerStatusHandlerComponentClass;                          // 0x04F0   (0x0008)  
	class UClass*                                      _rushChargesHandlerComponentClass;                          // 0x04F8   (0x0008)  
	class UClass*                                      _pathingCalculatorComponentClass;                           // 0x0500   (0x0008)  
	class UClass*                                      _blindnessProtectionStatusEffectClass;                      // 0x0508   (0x0008)  
	FTunableStat                                       _rushChargeTime;                                            // 0x0510   (0x0080)  
	FStatProperty                                      _scorePercent;                                              // 0x0590   (0x0088)  
	class UClass*                                      _moriTentaclesAnimationFollowerActorClass;                  // 0x0618   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0620   (0x0008)  MISSED
	class UK29PowerStatusHandlerComponent*             _powerStatusHandlerComponent;                               // 0x0628   (0x0008)  
	class UK29RushChargesHandlerComponent*             _rushChargesHandlerComponent;                               // 0x0630   (0x0008)  
	class UK29PathingCalculatorComponent*              _pathingCalculatorComponent;                                // 0x0638   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0640   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheK29.K29Power.GetSlashSurvivorInteraction
	// class UInteractionDefinition* GetSlashSurvivorInteraction();                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/TheK29.K29Power.GetSlashBreakableInteraction
	// class UInteractionDefinition* GetSlashBreakableInteraction();                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK29.K29Power.GetScorePercent
	// float GetScorePercent();                                                                                              // [0x5c0b6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29Power.GetRushVaultCooldownInteraction
	// class UK29RushCooldownInteraction* GetRushVaultCooldownInteraction();                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/TheK29.K29Power.GetRushSurvivorDetectionBox
	// class UStaticMeshComponent* GetRushSurvivorDetectionBox();                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK29.K29Power.GetRushCompleteSurvivorThrowCooldownInteraction
	// class UK29RushCooldownInteraction* GetRushCompleteSurvivorThrowCooldownInteraction();                                 // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK29.K29Power.GetRushCompleteSurvivorHitCooldownInteraction
	// class UK29RushCooldownInteraction* GetRushCompleteSurvivorHitCooldownInteraction();                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/TheK29.K29Power.GetRushCompleteNoSurvivorCooldownInteraction
	// class UK29RushCooldownInteraction* GetRushCompleteNoSurvivorCooldownInteraction();                                    // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK29.K29Power.GetRushChargesHandlerComponent
	// class UK29RushChargesHandlerComponent* GetRushChargesHandlerComponent();                                              // [0x5c0b690] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29Power.GetRushChargeCancelCooldownInteraction
	// class UK29RushCooldownInteraction* GetRushChargeCancelCooldownInteraction();                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK29.K29Power.GetRushChargeableInteraction
	// class UK29RushChargeableInteraction* GetRushChargeableInteraction();                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/TheK29.K29Power.GetRushBreakableCooldownInteraction
	// class UK29RushCooldownInteraction* GetRushBreakableCooldownInteraction();                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/TheK29.K29Power.GetPushSurvivorOverLedgeInteraction
	// class UInteractionDefinition* GetPushSurvivorOverLedgeInteraction();                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheK29.K29Power.GetPowerStatusHandlerComponent
	// class UK29PowerStatusHandlerComponent* GetPowerStatusHandlerComponent();                                              // [0x5c0b660] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29Power.GetDropSurvivorCooldownInteraction
	// class UK29RushCooldownInteraction* GetDropSurvivorCooldownInteraction();                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/TheK29.K29Power.Authority_OnStun
	// void Authority_OnStun(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                       // [0x5c0b120] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK29.K29PowerChargePresentationItemProgressComponent
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UK29PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UK29PowerStatusHandlerComponent*             _statusHandlerComponent;                                    // 0x00C0   (0x0008)  
	class UK29RushChargesHandlerComponent*             _rushChargesHandlerComponent;                               // 0x00C8   (0x0008)  
	class UK29RushChargeableInteraction*               _rushInteraction;                                           // 0x00D0   (0x0008)  
};

/// Class /Script/TheK29.K29PowerChargePresentationPowerFadeComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK29PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
	class UK29RushChargesHandlerComponent*             _rushChargesHandlerComponent;                               // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK29.K29PowerChargePresentationPowerFadeComponent.SetDependencies
	// void SetDependencies(class UK29RushChargesHandlerComponent* ammoHandler);                                             // [0x57d1c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerChargePresentationPowerFadeComponent.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5c0b9d0] Final|Native|Private 
};

/// Struct /Script/TheK29.K29SurvivorStatus
/// Size: 0x0060 (0x000000 - 0x000060)
struct FK29SurvivorStatus
{ 
	bool                                               IsGrabbedByPower;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LastTimeGrabbedByPower;                                     // 0x0004   (0x0004)  
	class ACamperPlayer*                               OwningSurvivor;                                             // 0x0008   (0x0008)  
	int32_t                                            InfectionLevel;                                             // 0x0010   (0x0004)  
	int32_t                                            TimesCuredByHeal;                                           // 0x0014   (0x0004)  
	bool                                               IsInfected;                                                 // 0x0018   (0x0001)  
	bool                                               IsInfectionActive;                                          // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	class UChargeableInteractionDefinition*            UseInfectionRemoverInteractionSelf;                         // 0x0020   (0x0008)  
	class UChargeableInteractionDefinition*            UseInfectionRemoverInteractionOther;                        // 0x0028   (0x0008)  
	class UChargeableComponent*                        UseInfectionRemoverChargeable;                              // 0x0030   (0x0008)  
	bool                                               AreInfectionRemoverInteractionsInitialized;                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UK29SurvivorCarriableComponent*              CarriableComponent;                                         // 0x0040   (0x0008)  
	class UK29SurvivorThrowableComponent*              ThrowableComponent;                                         // 0x0048   (0x0008)  
	TArray<EK29SurvivorInteractionBlockReason>         InteractionBlockReasons;                                    // 0x0050   (0x0010)  
};

/// Class /Script/TheK29.K29PowerStatusHandlerComponent
/// Size: 0x0370 (0x0000B8 - 0x000428)
class UK29PowerStatusHandlerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	FDBDTunableRowHandle                               _maxInfectionLevel;                                         // 0x00E8   (0x0028)  
	FTunableStat                                       _infectionAddedPerTickWhileActive;                          // 0x0110   (0x0080)  
	class UCurveFloat*                                 _stabilizingHealAmountByUsage;                              // 0x0190   (0x0008)  
	FTunableStat                                       _initialInfectionLevel;                                     // 0x0198   (0x0080)  
	FTunableStat                                       _addedInfectionLevelsOnGrab;                                // 0x0218   (0x0080)  
	FTunableStat                                       _infectionHealingMultiplier;                                // 0x0298   (0x0080)  
	FDBDTunableRowHandle                               _infectionIncubationThreshold;                              // 0x0318   (0x0028)  
	FTunableStat                                       _useInfectionRemoverChargeTime;                             // 0x0340   (0x0080)  
	class UClass*                                      _hinderedStatusEffectClass;                                 // 0x03C0   (0x0008)  
	class UClass*                                      _gateBlockerStatusEffectClass;                              // 0x03C8   (0x0008)  
	class UClass*                                      _survivorThrowableClass;                                    // 0x03D0   (0x0008)  
	class UClass*                                      _useInfectionRemoverInteractionSelfClass;                   // 0x03D8   (0x0008)  
	class UClass*                                      _useInfectionRemoverInteractionOtherClass;                  // 0x03E0   (0x0008)  
	int32_t                                            _maxInfectionLevelWhenHooked;                               // 0x03E8   (0x0004)  
	float                                              _recentlyGrabbedThresholdSeconds;                           // 0x03EC   (0x0004)  
	TArray<FK29SurvivorStatus>                         _survivorStatusList;                                        // 0x03F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0400   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Server_ReleaseSurvivor
	// void Server_ReleaseSurvivor(class ACamperPlayer* Survivor, bool isForced);                                            // [0x5c0bd50] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Server_GrabSurvivor
	// void Server_GrabSurvivor(class ACamperPlayer* Survivor, bool isProcessingInitialInfection);                           // [0x5c0bc80] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.OnRep_SurvivorStatusList
	// void OnRep_SurvivorStatusList(TArray<FK29SurvivorStatus> oldSurvivorStatus);                                          // [0x5c0baf0] Final|Native|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5c0ba60] Final|Native|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Multicast_UseStabilizingSpray
	// void Multicast_UseStabilizingSpray(class ACamperPlayer* TargetSurvivor);                                              // [0x57e0340] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Multicast_RemoveSurvivorFromCloset
	// void Multicast_RemoveSurvivorFromCloset(class ACamperPlayer* Survivor);                                               // [0x507e2f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Multicast_ReleaseSurvivor
	// void Multicast_ReleaseSurvivor(class ACamperPlayer* Survivor, bool isForced);                                         // [0x5c0b790] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Multicast_GrabSurvivor
	// void Multicast_GrabSurvivor(class ACamperPlayer* Survivor, bool isProcessingInitialInfection);                        // [0x5813a90] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Multicast_DropSurvivor
	// void Multicast_DropSurvivor(class ACamperPlayer* leftSurvivor);                                                       // [0x58c5550] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.GetMaxInfectionLevel
	// int32_t GetMaxInfectionLevel();                                                                                       // [0x5c0b550] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.GetInfectionLevel
	// int32_t GetInfectionLevel(class ACamperPlayer* Survivor);                                                             // [0x5c0b4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingNonInfectedSurvivor
	// void Cosmetic_OnGrabbingNonInfectedSurvivor();                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingInfectedSurvivor
	// void Cosmetic_OnGrabbingInfectedSurvivor();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_UseStabilizingSpray
	// void Authority_UseStabilizingSpray(class ACamperPlayer* instigatingSurvivor, class ACamperPlayer* TargetSurvivor);    // [0x5c0b2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToMaxInfection
	// void Authority_SetAllSurvivorsToMaxInfection();                                                                       // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToInitialInfection
	// void Authority_SetAllSurvivorsToInitialInfection();                                                                   // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorImmoblizedChanged
	// void Authority_OnSurvivorImmoblizedChanged();                                                                         // [0x5c0b2c0] Final|Native|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorAdded
	// void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);                                                        // [0x5c0b230] Final|Native|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_OnSlash
	// void Authority_OnSlash(class ACamperPlayer* TargetSurvivor);                                                          // [0x5c0b090] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x5c0b070] Final|Native|Private 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_HealInfectionLevels
	// void Authority_HealInfectionLevels(class ACamperPlayer* Survivor, int32_t infectionLevelsToHeal, bool shouldSetInfectionActiveToFalse); // [0x5c0ae90] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_HealAllSurvivorsInfectionWithStabilizingSpray
	// void Authority_HealAllSurvivorsInfectionWithStabilizingSpray();                                                       // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.Authority_AddInfectionLevels
	// void Authority_AddInfectionLevels(class ACamperPlayer* Survivor, int32_t infectionToAdd);                             // [0x5c0adc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.K29PowerStatusHandlerComponent.AddToTimesCuredByHeal
	// void AddToTimesCuredByHeal(class ACamperPlayer* Survivor);                                                            // [0x5c0ad30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK29.K29RushChargeableInteraction
/// Size: 0x0800 (0x000790 - 0x000F90)
class UK29RushChargeableInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0790   (0x0008)  MISSED
	class UK29RushChargesHandlerComponent*             _rushChargesHandlerComponent;                               // 0x0798   (0x0008)  
	class UK29PowerStatusHandlerComponent*             _powerStatusHandlerComponent;                               // 0x07A0   (0x0008)  
	class UK29PathingCalculatorComponent*              _pathingCalculatorComponent;                                // 0x07A8   (0x0008)  
	class AK29Power*                                   _powerCollectable;                                          // 0x07B0   (0x0008)  
	SDK_UNDEFINED(80,5118) /* TMap<EK29RushPhase, FK29RushMovementSpeedSetting> */ __um(_movementSpeedSettingsByState); // 0x07B8   (0x0050)  
	class UCurveFloat*                                 _subsequentRushTimerTimeoutMovementSpeedMultiplierCurve;    // 0x0808   (0x0008)  
	FTunableStat                                       _subsequentRushTimerTimeoutMovementSpeedReductionDuration;  // 0x0810   (0x0080)  
	FTunableStat                                       _subsequentRushOpportunityTimerDuration;                    // 0x0890   (0x0080)  
	FTunableStat                                       _rushDuration;                                              // 0x0910   (0x0080)  
	FTunableStat                                       _rushDurationAfterFirst;                                    // 0x0990   (0x0080)  
	FDBDTunableRowHandle                               _capsuleRadius;                                             // 0x0A10   (0x0028)  
	FDBDTunableRowHandle                               _survivorRevealTimeOnInstantPickup;                         // 0x0A38   (0x0028)  
	FDBDTunableRowHandle                               _capsuleHeight;                                             // 0x0A60   (0x0028)  
	FDBDTunableRowHandle                               _capsuleHeightOffset;                                       // 0x0A88   (0x0028)  
	FDBDTunableRowHandle                               _bounceDuration;                                            // 0x0AB0   (0x0028)  
	FDBDTunableRowHandle                               _rushAccelerationMultiplier;                                // 0x0AD8   (0x0028)  
	FDBDTunableRowHandle                               _instantCarryAnimationDuration;                             // 0x0B00   (0x0028)  
	float                                              _percentageForRushChargeEndAvailability;                    // 0x0B28   (0x0004)  
	float                                              _distanceInCmForNearMiss;                                   // 0x0B2C   (0x0004)  
	float                                              _rushDetectionBackwardsOffset;                              // 0x0B30   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0B34   (0x0004)  MISSED
	class UClass*                                      _revealToSurvivorsStatusEffect;                             // 0x0B38   (0x0008)  
	FDBDTunableRowHandle                               _rushMovementSpeedInCmPerSecond;                            // 0x0B40   (0x0028)  
	FDBDTunableRowHandle                               _rushGrabMovementSpeedInCmPerSecond;                        // 0x0B68   (0x0028)  
	FTunableStat                                       _grabRushDuration;                                          // 0x0B90   (0x0080)  
	float                                              _rotationStrengthTransitionTime;                            // 0x0C10   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0C14   (0x0004)  MISSED
	FDBDTunableRowHandle                               _minimumRushDistance;                                       // 0x0C18   (0x0028)  
	FDBDTunableRowHandle                               _intoGrabbingTime;                                          // 0x0C40   (0x0028)  
	FDBDTunableRowHandle                               _smashOutTimerDuration;                                     // 0x0C68   (0x0028)  
	FDBDTunableRowHandle                               _isStoppingMomentumAtIntoGrabbing;                          // 0x0C90   (0x0028)  
	class UCurveFloat*                                 _movementSpeedCurveBetweenRushesIncreased;                  // 0x0CB8   (0x0008)  
	class UCurveFloat*                                 _movementSpeedCurveChargingIncreased;                       // 0x0CC0   (0x0008)  
	class UCurveFloat*                                 _rushMovementSpeedCurve;                                    // 0x0CC8   (0x0008)  
	class UCurveFloat*                                 _rushMovementSpeedCurveWithSurvivor;                        // 0x0CD0   (0x0008)  
	FName                                              _killerRushSmashAnimationName;                              // 0x0CD8   (0x000C)  
	FName                                              _survivorRushSmashAnimationName;                            // 0x0CE4   (0x000C)  
	FName                                              _killerRushToCarryAnimationName;                            // 0x0CF0   (0x000C)  
	FName                                              _survivorRushToCarryAnimationName;                          // 0x0CFC   (0x000C)  
	FName                                              _survivorRushDropAnimationName;                             // 0x0D08   (0x000C)  
	FName                                              _killerRushCooldownAnimationName;                           // 0x0D14   (0x000C)  
	FName                                              _animTagFPV;                                                // 0x0D20   (0x000C)  
	float                                              _lagInSecondsUntilRushIsInvalid;                            // 0x0D2C   (0x0004)  
	float                                              _rushDropForwardDistance;                                   // 0x0D30   (0x0004)  
	float                                              _decisiveStrikeSkillCheckDelay;                             // 0x0D34   (0x0004)  
	bool                                               _isLagChecked;                                              // 0x0D38   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0D39   (0x0007)  MISSED
	TArray<class UClass*>                              _survivorInteractionPreventingGrab;                         // 0x0D40   (0x0010)  
	unsigned char                                      UnknownData04_6[0x240];                                     // 0x0D50   (0x0240)  MISSED


	/// Functions
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_SlashAtSurvivor
	// void Server_SlashAtSurvivor(class ACamperPlayer* Survivor, FVector currentKillerPosition);                            // [0x5c10310] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingInCollision
	// void Server_SetCurrentRushAsEndingInCollision(bool hitOtherSurvivor);                                                 // [0x5c10280] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingAtLedge
	// void Server_SetCurrentRushAsEndingAtLedge();                                                                          // [0x5c10260] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_SetCurrentRush
	// void Server_SetCurrentRush(FK29GuidedMovementInstance newRushInstance, EK29RushPhase targetPhase);                    // [0x5c10130] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_DestroyPalletOrBreakable
	// void Server_DestroyPalletOrBreakable(class AActor* destroyable);                                                      // [0x5c100a0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_DamageSurvivorAsCollision
	// void Server_DamageSurvivorAsCollision(class ACamperPlayer* Survivor, FVector currentKillerPosition);                  // [0x5c0ffd0] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_ChangeRushPhase
	// void Server_ChangeRushPhase(EK29RushPhase newRushPhase, float clientTimeStamp, bool forceLocallyControlled);          // [0x5c0fec0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29RushChargeableInteraction.Server_CancelInteraction
	// void Server_CancelInteraction();                                                                                      // [0x5b9e370] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29RushChargeableInteraction.RushComplete
	// void RushComplete(bool rushEndedNaturally);                                                                           // [0x5c0fe30] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.OnWindowOfOpportunityTimeoutCooldownEnd
	// void OnWindowOfOpportunityTimeoutCooldownEnd();                                                                       // [0x5c0fdd0] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.OnSubsequentRushOpportunityTimeout
	// void OnSubsequentRushOpportunityTimeout();                                                                            // [0x5c0fd20] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.OnSmashOutTimerCompleted
	// void OnSmashOutTimerCompleted();                                                                                      // [0x5c0fd00] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.OnInstantCarryTimerComplete
	// void OnInstantCarryTimerComplete(class ACamperPlayer* survivorToCarry);                                               // [0x5c0fa00] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.OnGrabbingTransitionComplete
	// void OnGrabbingTransitionComplete();                                                                                  // [0x5c0f860] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.OnCollisionEnableTimerComplete
	// void OnCollisionEnableTimerComplete();                                                                                // [0x5c0f730] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_SmashSurvivor
	// void Multicast_SmashSurvivor(class ACamperPlayer* survivorToCarry);                                                   // [0x5c0f6a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_SlashAtSurvivor
	// void Multicast_SlashAtSurvivor(class ACamperPlayer* Survivor, FVector currentKillerPosition, ECamperDamageState survivorTargetDamageState); // [0x5c0f590] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingInCollision
	// void Multicast_SetCurrentRushAsEndingInCollision();                                                                   // [0x5c0f570] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingAtLedge
	// void Multicast_SetCurrentRushAsEndingAtLedge();                                                                       // [0x5c0f550] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRush
	// void Multicast_SetCurrentRush(FK29GuidedMovementInstance newRushInstance);                                            // [0x5c0f450] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_RushValid
	// void Multicast_RushValid();                                                                                           // [0x5c0f430] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_RushInvalid
	// void Multicast_RushInvalid();                                                                                         // [0x5bdea60] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_DestroyPalletOrBreakable
	// void Multicast_DestroyPalletOrBreakable(class AActor* destroyable);                                                   // [0x5c0f3a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_DamageSurvivorAsCollision
	// void Multicast_DamageSurvivorAsCollision(FVector currentKillerPosition, class ACamperPlayer* collidedSurvivor, ECamperDamageState survivorTargetDamageState); // [0x5c0f290] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_ChangeRushPhase
	// void Multicast_ChangeRushPhase(EK29RushPhase newRushPhase, bool forceLocallyControlled);                              // [0x5c0f1b0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_CarrySurvivor
	// void Multicast_CarrySurvivor(class ACamperPlayer* survivorToCarry);                                                   // [0x5c0f120] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.Multicast_CancelInteraction
	// void Multicast_CancelInteraction();                                                                                   // [0x5a3fe00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29RushChargeableInteraction.GetRushTimeLeft
	// float GetRushTimeLeft();                                                                                              // [0x5c0f000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_ShowEndIndicator
	// void Cosmetic_ShowEndIndicator(FVector& endIndicatorLocation, FRotator& forwardRotation);                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_OnSlashAtSurvivor
	// void Cosmetic_OnSlashAtSurvivor(class ACamperPlayer* Survivor, ECamperDamageState survivorTargetDamageState);         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_OnRushStart
	// void Cosmetic_OnRushStart();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_OnRushPhaseChanged
	// void Cosmetic_OnRushPhaseChanged(EK29RushPhase previousPhase, EK29RushPhase newPhase);                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_OnRushEnd
	// void Cosmetic_OnRushEnd();                                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeStart
	// void Cosmetic_OnChargeStart();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeEnd
	// void Cosmetic_OnChargeEnd();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_HideEndIndicator
	// void Cosmetic_HideEndIndicator();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.Cosmetic_DamageSurvivorAsCollision
	// void Cosmetic_DamageSurvivorAsCollision(class ACamperPlayer* Survivor, ECamperDamageState survivorTargetDamageState); // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargeableInteraction.BounceComplete
	// void BounceComplete();                                                                                                // [0x5c0eec0] Final|Native|Private 
};

/// Class /Script/TheK29.K29RushChargesHandlerComponent
/// Size: 0x0178 (0x0000B8 - 0x000230)
class UK29RushChargesHandlerComponent : public UActorComponent
{ 
public:
	FTunableStat                                       _maximumRushCharges;                                        // 0x00B8   (0x0080)  
	class UCurveFloat*                                 _rechargeTimeByChargesLeft;                                 // 0x0138   (0x0008)  
	FTunableStat                                       _rechargeDurationMultiplier;                                // 0x0140   (0x0080)  
	FDBDTunableRowHandle                               _reducedChargeTimePerInfectionPlayers;                      // 0x01C0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x01E8   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK29.K29RushChargesHandlerComponent.SetToFullCharge
	// void SetToFullCharge();                                                                                               // [0x5c103e0] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.OnMaximumChargesChanged
	// void OnMaximumChargesChanged(float NewValue);                                                                         // [0x5c0fbd0] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5c0fa90] Final|Native|Private 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.GetPercentageRemainingUntilNextCharge
	// float GetPercentageRemainingUntilNextCharge();                                                                        // [0x5c0efd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.GetMaximumCharges
	// int32_t GetMaximumCharges();                                                                                          // [0x5c0ef70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.GetAvailableCharges
	// int32_t GetAvailableCharges();                                                                                        // [0x5c0eee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.Cosmetic_OnRushChargeAdded
	// void Cosmetic_OnRushChargeAdded();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.Cosmetic_OnOutOfRushCharges
	// void Cosmetic_OnOutOfRushCharges();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29RushChargesHandlerComponent.AddSingleCharge
	// void AddSingleCharge();                                                                                               // [0x5c0eea0] Final|Native|Private 
};

/// Class /Script/TheK29.K29RushCooldownInteraction
/// Size: 0x00E0 (0x000650 - 0x000730)
class UK29RushCooldownInteraction : public UInteractionDefinition
{ 
public:
	FTunableStat                                       _cooldownTime;                                              // 0x0648   (0x0080)  
	bool                                               _isCameraRestrictedForDuration;                             // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x06C9   (0x0007)  MISSED
	FDBDTunableRowHandle                               _cameraRestrictionTime;                                     // 0x06D0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x06F8   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheK29.K29RushCooldownInteraction.ResetCameraInputLimit
	// void ResetCameraInputLimit();                                                                                         // [0x5c0fdf0] Final|Native|Protected 
};

/// Class /Script/TheK29.K29SupplyCrateOutlineUpdateStrategy
/// Size: 0x0000 (0x000100 - 0x000100)
class UK29SupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/TheK29.K29SurvivorAnimInstance
/// Size: 0x0060 (0x000550 - 0x0005B0)
class UK29SurvivorAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isBeingGrabbed;                                            // 0x0550   (0x0001)  
	bool                                               _isBeingThrown;                                             // 0x0551   (0x0001)  
	bool                                               _isKillerLocallyControlled;                                 // 0x0552   (0x0001)  
	bool                                               _isUsingInfectionRemoverOnSelf;                             // 0x0553   (0x0001)  
	bool                                               _isUsingInfectionRemoverOnOther;                            // 0x0554   (0x0001)  
	bool                                               _isInfectionRemoverUsedOnSelf;                              // 0x0555   (0x0001)  
	bool                                               _hasLastThrowResultedInDamage;                              // 0x0556   (0x0001)  
	bool                                               _isInfectionActive;                                         // 0x0557   (0x0001)  
	bool                                               _hasBeenThrown;                                             // 0x0558   (0x0001)  
	bool                                               _isCoughing;                                                // 0x0559   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x055A   (0x0002)  MISSED
	float                                              _timeBetweenRandomCoughingTry;                              // 0x055C   (0x0004)  
	float                                              _randomCoughMinProbabilityRange;                            // 0x0560   (0x0004)  
	float                                              _randomCoughMaxProbabilityRange;                            // 0x0564   (0x0004)  
	float                                              _randomCoughProbabilityThreshold;                           // 0x0568   (0x0004)  
	bool                                               _isCrawling;                                                // 0x056C   (0x0001)  
	bool                                               _isInsideCloset;                                            // 0x056D   (0x0001)  
	bool                                               _isDead;                                                    // 0x056E   (0x0001)  
	bool                                               _isInteracting;                                             // 0x056F   (0x0001)  
	bool                                               _isInjured;                                                 // 0x0570   (0x0001)  
	bool                                               _isHoldingObject;                                           // 0x0571   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0572   (0x0001)  
	bool                                               _isHooked;                                                  // 0x0573   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0574   (0x0001)  
	bool                                               _isUsingAimItem;                                            // 0x0575   (0x0001)  
	bool                                               _isInAir;                                                   // 0x0576   (0x0001)  
	bool                                               _isBeingHealed;                                             // 0x0577   (0x0001)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0578   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheK29.K29SurvivorAnimInstance.ResetHasBeenThrown
	// void ResetHasBeenThrown();                                                                                            // [0x5c0fe10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK29.K29SurvivorAnimInstance.OnHasBeenThrown
	// void OnHasBeenThrown();                                                                                               // [0x5c0f880] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorAnimInstance.OnGameEventReceived
	// void OnGameEventReceived(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                    // [0x5c0f750] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK29.K29SurvivorCarriableComponent
/// Size: 0x0078 (0x0000B8 - 0x000130)
class UK29SurvivorCarriableComponent : public UActorComponent
{ 
public:
	FName                                              _rootJointName;                                             // 0x00B8   (0x000C)  
	FRotator                                           _startingRotation;                                          // 0x00C4   (0x000C)  
	FVector                                            _startingPosition;                                          // 0x00D0   (0x000C)  
	bool                                               _isCarriedByK29Rush;                                        // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              _killerIngoreTime;                                          // 0x00E0   (0x0004)  
	SDK_UNDEFINED(8,5119) /* TWeakObjectPtr<ACamperPlayer*> */ __um(_owningSurvivor);                              // 0x00E4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x44];                                      // 0x00EC   (0x0044)  MISSED


	/// Functions
	// Function /Script/TheK29.K29SurvivorCarriableComponent.OnRep_OwningSurvivor
	// void OnRep_OwningSurvivor();                                                                                          // [0x5c0fce0] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCarriableComponent.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5c0fb20] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCarriableComponent.IsBeingCarriedByK29RushOrMarkedForThrow
	// bool IsBeingCarriedByK29RushOrMarkedForThrow();                                                                       // [0x5c0f030] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheK29.K29SurvivorCosmeticHelperActor
/// Size: 0x00C8 (0x000270 - 0x000338)
class AK29SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0270   (0x00C8)  MISSED


	/// Functions
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.OnSurvivorGrabbed
	// void OnSurvivorGrabbed(class ACamperPlayer* Survivor);                                                                // [0x5c0fd40] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.OnSurvivorDisguisedOrUndisguised
	// void OnSurvivorDisguisedOrUndisguised(bool isDisguised);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.OnOwnerLocallyObserved
	// void OnOwnerLocallyObserved(bool locallyObserved);                                                                    // [0x5c0fc50] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5c0fbb0] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.OnInfectionRemovalCollectableUsed
	// void OnInfectionRemovalCollectableUsed(class ACamperPlayer* Survivor);                                                // [0x5c0f970] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.OnInfectionLevelsChanged
	// void OnInfectionLevelsChanged(class ACamperPlayer* TargetSurvivor, bool IsActive);                                    // [0x5c0f8a0] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.IsInfectionIncubated
	// bool IsInfectionIncubated();                                                                                          // [0x5c0f0f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.IsInfectionCritical
	// bool IsInfectionCritical();                                                                                           // [0x5c0f0c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.IsInfectionActive
	// bool IsInfectionActive();                                                                                             // [0x5c0f090] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.IsInfected
	// bool IsInfected();                                                                                                    // [0x5c0f060] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.GetMaximumInfectionLevels
	// int32_t GetMaximumInfectionLevels();                                                                                  // [0x5c0efa0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionPercentage
	// float GetCurrentInfectionPercentage();                                                                                // [0x5c0ef40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionLevels
	// int32_t GetCurrentInfectionLevels();                                                                                  // [0x5c0ef10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorHitCollisionWithRush
	// void Cosmetic_OnOwningSurvivorHitCollisionWithRush();                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorDied
	// void Cosmetic_OnOwningSurvivorDied();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged
	// void Cosmetic_OnLocallyObservedChanged();                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionRemovalCollectableUsed
	// void Cosmetic_OnInfectionRemovalCollectableUsed();                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionLevelsChanged
	// void Cosmetic_OnInfectionLevelsChanged(bool IsActive);                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionIncubatedChanged
	// void Cosmetic_IsInfectionIncubatedChanged(bool IsInfectionIncubated);                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionCriticalChanged
	// void Cosmetic_IsInfectionCriticalChanged(bool IsInfectionCritical);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedChanged
	// void Cosmetic_IsInfectedChanged(bool IsInfected);                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedActiveChanged
	// void Cosmetic_IsInfectedActiveChanged(bool IsInfectionActive);                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_GrabbedByKiller
	// void Cosmetic_GrabbedByKiller();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK29.K29SurvivorStatusComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK29SurvivorStatusComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(8,5120) /* TWeakObjectPtr<UK29PowerStatusHandlerComponent*> */ __um(_powerStatusHandlerComponent); // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,5121) /* TWeakObjectPtr<ACamperPlayer*> */ __um(_owningSurvivor);                              // 0x00C8   (0x0008)  
};

/// Class /Script/TheK29.K29SurvivorThrowableComponent
/// Size: 0x0318 (0x0000B8 - 0x0003D0)
class UK29SurvivorThrowableComponent : public UActorComponent
{ 
public:
	FTunableStat                                       _throwDuration;                                             // 0x00B8   (0x0080)  
	FDBDTunableRowHandle                               _capsuleRadius;                                             // 0x0138   (0x0028)  
	FDBDTunableRowHandle                               _capsuleHeight;                                             // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _capsuleHeightOffset;                                       // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _minimumThrowDistance;                                      // 0x01B0   (0x0028)  
	FDBDTunableRowHandle                               _throwMovementSpeedInCmPerSecond;                           // 0x01D8   (0x0028)  
	FDBDTunableRowHandle                               _movingDelay;                                               // 0x0200   (0x0028)  
	FDBDTunableRowHandle                               _throwDelay;                                                // 0x0228   (0x0028)  
	FDBDTunableRowHandle                               _throwLedgeDropDistance;                                    // 0x0250   (0x0028)  
	FDBDTunableRowHandle                               _throwLedgeDropTime;                                        // 0x0278   (0x0028)  
	class UCurveFloat*                                 _throwMovementSpeedMultiplierCurve;                         // 0x02A0   (0x0008)  
	FDBDTunableRowHandle                               _throwAccelerationMultiplier;                               // 0x02A8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x100];                                     // 0x02D0   (0x0100)  MISSED


	/// Functions
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Server_EndThrow
	// void Server_EndThrow();                                                                                               // [0x4db2a10] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Server_CancelThrowOnOtherSurvivorCollision
	// void Server_CancelThrowOnOtherSurvivorCollision(FVector collisionPosition, class ACamperPlayer* survivorUsedAsCollision); // [0x5c12b90] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.OnWalkingAllowedAfterFall
	// void OnWalkingAllowedAfterFall();                                                                                     // [0x5c12b70] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.OnThrowTimeout
	// void OnThrowTimeout();                                                                                                // [0x5c12b50] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Multicast_SetCurrentThrow
	// void Multicast_SetCurrentThrow(FK29GuidedMovementInstance throwInstance, class ACamperPlayer* thrownSurvivor);        // [0x5c12930] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Multicast_InstantlyLetGoSurvivor
	// void Multicast_InstantlyLetGoSurvivor(bool hasDealtDamage);                                                           // [0x5c128a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Multicast_EndThrow
	// void Multicast_EndThrow();                                                                                            // [0x4e01240] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Multicast_CancelThrowOnOtherSurvivorCollision
	// void Multicast_CancelThrowOnOtherSurvivorCollision(FVector collisionPosition, class ACamperPlayer* survivorUsedAsCollision); // [0x5c127c0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.EndThrow
	// void EndThrow();                                                                                                      // [0x5c12610] Final|Native|Private 
	// Function /Script/TheK29.K29SurvivorThrowableComponent.Cosmetic_OnSurvivorUsedAsCollision
	// void Cosmetic_OnSurvivorUsedAsCollision(class ACamperPlayer* Survivor);                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK29.K29UseInfectionRemoverInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UK29UseInfectionRemoverInteraction : public UChargeableInteractionDefinition
{ 
public:
	class UClass*                                      _killerInstinctClass;                                       // 0x0788   (0x0008)  
	FDBDTunableRowHandle                               _killerInstinctDuration;                                    // 0x0790   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x07B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK29.K29UseInfectionRemoverInteraction.OnSurvivorCured_Cosmetic
	// void OnSurvivorCured_Cosmetic();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK29.K29UseInfectionRemoverInteraction.GetInteractionTarget
	// class ACamperPlayer* GetInteractionTarget();                                                                          // [0x5b1cd40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.K29UseInfectionRemoverInteractionOther
/// Size: 0x0020 (0x0007C0 - 0x0007E0)
class UK29UseInfectionRemoverInteractionOther : public UK29UseInfectionRemoverInteraction
{ 
public:
	class UClass*                                      _crouchBlockStatusEffectClass;                              // 0x07C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x07C8   (0x0008)  MISSED
	class UStatusEffect*                               _crouchBlockStatusEffect;                                   // 0x07D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x07D8   (0x0008)  MISSED
};

/// Class /Script/TheK29.K29UseInfectionRemoverInteractionSelf
/// Size: 0x0000 (0x0007C0 - 0x0007C0)
class UK29UseInfectionRemoverInteractionSelf : public UK29UseInfectionRemoverInteraction
{ 
public:
};

/// Class /Script/TheK29.K29Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK29Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK29.K29Utilities.IsSurvivorAbleToBeAffectedByPower
	// bool IsSurvivorAbleToBeAffectedByPower(class AActor* survivorAsActor, class ASlasherPlayer* killer);                  // [0x5c126f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK29.K29Utilities.GetK29Power
	// class AK29Power* GetK29Power(class UObject* WorldContextObject);                                                      // [0x5c12660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK29.ReassuranceCondition
/// Size: 0x0050 (0x0001E8 - 0x000238)
class UReassuranceCondition : public UIsInRangeOfHookedSurvivor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x01E8   (0x0050)  MISSED
};

/// Class /Script/TheK29.S32P01
/// Size: 0x0040 (0x000448 - 0x000488)
class US32P01 : public UGeneratorTrapPerk
{ 
public:
	float                                              _generatorRevealRange;                                      // 0x0448   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	class UClass*                                      _revealEffect;                                              // 0x0450   (0x0008)  
	class UStatusEffect*                               _revealStatus;                                              // 0x0458   (0x0008)  
	bool                                               _isKillerInRange;                                           // 0x0460   (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x0461   (0x0027)  MISSED


	/// Functions
	// Function /Script/TheK29.S32P01.OnRep_IsKillerInRange
	// void OnRep_IsKillerInRange();                                                                                         // [0x5c12b10] Final|Native|Private 
	// Function /Script/TheK29.S32P01.GetGeneratorRevealRange
	// float GetGeneratorRevealRange();                                                                                      // [0x5c12630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.S32P02
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class US32P02 : public UPerk
{ 
public:
	float                                              _hitDistanceToTriggerPerkEffect;                            // 0x03C8   (0x000C)  
	float                                              _healingProgressionIncreasedOnHit;                          // 0x03D4   (0x000C)  
	float                                              _tresholdToHealCompletely;                                  // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03E4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK29.S32P02.GetHitDistanceAtLevel
	// float GetHitDistanceAtLevel();                                                                                        // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK29.S32P02.GetHealingProgressionIncreaseAtLevel
	// float GetHealingProgressionIncreaseAtLevel();                                                                         // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.S32P03
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class US32P03 : public UPerk
{ 
public:
	float                                              _activationTime;                                            // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03D4   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheK29.S32P03.GetActivationTimeForLevel
	// float GetActivationTimeForLevel();                                                                                    // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.S33P01
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class US33P01 : public UPerk
{ 
public:
	class UClass*                                      _S33P01StatusEffect;                                        // 0x03C8   (0x0008)  
	float                                              _interactionProgressionAmount;                              // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03DC   (0x0004)  MISSED
};

/// Class /Script/TheK29.S33P01StatusEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class US33P01StatusEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/TheK29.S33P02
/// Size: 0x0048 (0x0003C8 - 0x000410)
class US33P02 : public UPerk
{ 
public:
	float                                              _distanceRadius;                                            // 0x03C8   (0x0004)  
	float                                              _struggleProgressionPausedDuration;                         // 0x03CC   (0x000C)  
	class UClass*                                      _S33P02StatusEffect;                                        // 0x03D8   (0x0008)  
	TArray<class ACamperPlayer*>                       _reassuredSurvivors;                                        // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x03F0   (0x0010)  MISSED
	class UClass*                                      _S33P02Interaction;                                         // 0x0400   (0x0008)  
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x0408   (0x0008)  


	/// Functions
	// Function /Script/TheK29.S33P02.OnRep_ReassuredSurvivors
	// void OnRep_ReassuredSurvivors();                                                                                      // [0x5c12b30] Final|Native|Private 
	// Function /Script/TheK29.S33P02.Local_EffectTriggered
	// void Local_EffectTriggered(FTransform Location);                                                                      // [0x61c32d0] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/TheK29.S33P02.GetStruggleProgressionAtLevel
	// float GetStruggleProgressionAtLevel();                                                                                // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK29.S33P02Interaction
/// Size: 0x0000 (0x000650 - 0x000650)
class US33P02Interaction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheK29.S33p02StatusEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class US33p02StatusEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/TheK29.S33P03
/// Size: 0x0038 (0x0003C8 - 0x000400)
class US33P03 : public UPerk
{ 
public:
	float                                              _skillCheckTriggerPercentPerToken;                          // 0x03C8   (0x0004)  
	float                                              _skillCheckCursorSpeedPerToken;                             // 0x03CC   (0x0004)  
	float                                              _skillCheckBonusPercentPerToken;                            // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x03DC   (0x0024)  MISSED


	/// Functions
	// Function /Script/TheK29.S33P03.GetSkillCheckTriggerPercentPerToken
	// float GetSkillCheckTriggerPercentPerToken();                                                                          // [0x501b8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.S33P03.GetSkillCheckCursorSpeedPerToken
	// float GetSkillCheckCursorSpeedPerToken();                                                                             // [0x500aa10] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK29.S33P03.GetSkillCheckBonusPercentPerTokenAtLevel
	// float GetSkillCheckBonusPercentPerTokenAtLevel();                                                                     // [0x500a9e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/TheK29.K29FloorDetectionResult
/// Size: 0x0002 (0x000000 - 0x000002)
struct FK29FloorDetectionResult
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/TheK29.K29GuidedMovementInstance
/// Size: 0x0050 (0x000000 - 0x000050)
struct FK29GuidedMovementInstance
{ 
	float                                              MovementDuration;                                           // 0x0000   (0x0004)  
	FVector                                            StartingPosition;                                           // 0x0004   (0x000C)  
	FVector                                            EndingPosition;                                             // 0x0010   (0x000C)  
	FVector                                            ForwardDirection;                                           // 0x001C   (0x000C)  
	FVector                                            XYForwardDirection;                                         // 0x0028   (0x000C)  
	bool                                               EndInImpact;                                                // 0x0034   (0x0001)  
	bool                                               EndAtLedge;                                                 // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	float                                              StartingTime;                                               // 0x0038   (0x0004)  
	float                                              EndingTime;                                                 // 0x003C   (0x0004)  
	TArray<FVector>                                    MovementCurve;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/TheK29.K29GuidedMovementSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FK29GuidedMovementSettings
{ 
	class ADBDPlayer*                                  MovingActor;                                                // 0x0000   (0x0008)  
	FVector                                            StartPosition;                                              // 0x0008   (0x000C)  
	FVector                                            ForwardDirection;                                           // 0x0014   (0x000C)  
	float                                              CapsuleHeight;                                              // 0x0020   (0x0004)  
	float                                              CapsuleCenterHeightOffset;                                  // 0x0024   (0x0004)  
	float                                              CapsuleRadius;                                              // 0x0028   (0x0004)  
	float                                              MinimumRequiredDistance;                                    // 0x002C   (0x0004)  
	float                                              MaximumDuration;                                            // 0x0030   (0x0004)  
	float                                              MovementSpeedInCmPerSecond;                                 // 0x0034   (0x0004)  
	bool                                               IsCarryingSurvivor;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<class AActor*>                              IgnoredActors;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/TheK29.K29RushMovementSpeedSetting
/// Size: 0x0110 (0x000000 - 0x000110)
struct FK29RushMovementSpeedSetting
{ 
	bool                                               InUse;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 SpeedCurve;                                                 // 0x0008   (0x0008)  
	FDBDTunableRowHandle                               PitchTurnRateMultiplier;                                    // 0x0010   (0x0028)  
	FDBDTunableRowHandle                               YawTurnRateLimit;                                           // 0x0038   (0x0028)  
	FDBDTunableRowHandle                               YawTurnRateMultiplier;                                      // 0x0060   (0x0028)  
	FTunableStat                                       Duration;                                                   // 0x0088   (0x0080)  
	bool                                               IsMovementAllowed;                                          // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
};

